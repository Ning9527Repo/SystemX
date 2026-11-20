#!/usr/bin/env python3
"""Generate a Theos-style source tree from metadata + decompiled output."""
import os, sys, json, re, shutil

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
META = os.path.join(ROOT, 'out', 'meta')
FUNCS = os.path.join(ROOT, 'out', 'funcs.json')
HOOKS = os.path.join(ROOT, 'out', 'hooks.json')
DEC = os.path.join(ROOT, 'out', 'decompiled')
OUT = os.path.join(ROOT, 'out', 'tree')

BINS = ["SystemBox", "SystemBoxClockGlass", "SystemBoxClockGlassBackboardd",
        "SystemBoxLiquidGlassDockBackboardd", "SystemBoxPrefs"]

PROTO_MAP = {
    'NSObject': None,
}

TYPE_MAP = {
    'id': 'id', 'void': 'void', 'BOOL': 'BOOL', 'SEL': 'SEL', 'Class': 'Class',
    'int': 'int', 'unsigned int': 'unsigned int', 'long': 'long',
    'unsigned long': 'unsigned long', 'long long': 'long long',
    'unsigned long long': 'unsigned long long', 'float': 'float', 'double': 'double',
    'char': 'char', 'unsigned char': 'unsigned char', 'short': 'short',
    'unsigned short': 'unsigned short', 'char *': 'char *', 'void *': 'void *',
    'uint64_t': 'uint64_t', 'uint32_t': 'uint32_t',
}


def load_json(p):
    with open(p) as f:
        return json.load(f)


def sanitize_params(sel):
    """initWithFrame:groupName: -> ['frame','groupName']"""
    if not sel:
        return []
    parts = [p for p in sel.split(':') if p]
    out = []
    for i, p in enumerate(parts):
        name = p[0].lower() + p[1:] if p else ('arg%d' % i)
        name = re.sub(r'[^A-Za-z0-9_]', '', name) or ('arg%d' % i)
        if name in ('class', 'self', 'id', 'new', 'default', 'signed', 'in', 'out',
                    'int', 'long', 'short', 'float', 'double', 'const', 'void', 'char'):
            name = name + 'Value'
        out.append(name)
    return out


ENC = {
    '@': 'id', 'q': 'long long', 'Q': 'unsigned long long', 'i': 'int',
    'I': 'unsigned int', 'B': 'BOOL', 'c': 'char', 'C': 'unsigned char',
    's': 'short', 'S': 'unsigned short', 'l': 'long', 'L': 'unsigned long',
    'd': 'double', 'f': 'float', 'v': 'void', '*': 'char *', ':': 'SEL',
    '#': 'Class', '?': 'void *', 'T': 'uint64_t', 'D': 'long double',
    'b': 'unsigned int',
}
STRUCTS = {'CGRect': 'CGRect', 'CGPoint': 'CGPoint', 'CGSize': 'CGSize',
           'NSRange': 'NSRange', 'UIEdgeInsets': 'UIEdgeInsets',
           'CGAffineTransform': 'CGAffineTransform', 'CATransform3D': 'CATransform3D',
           'CGVector': 'CGVector'}


def objc_type(t):
    t = (t or 'id').strip()
    if not t:
        return 'id'
    if t in TYPE_MAP:
        return TYPE_MAP[t]
    if t.startswith('@?'):
        return 'id /* block */'
    if t.startswith('@"'):
        inner = t[2:].rstrip('"')
        return inner + ' *' if inner and inner[0].isupper() else 'id'
    if t.startswith('{'):
        nm = t[1:].split('=')[0]
        return STRUCTS.get(nm, nm)
    if t.startswith('['):
        return 'id /* array */'
    if t.startswith('^'):
        return objc_type(t[1:]) + ' *'
    if t.startswith('('):
        return 'id /* union */'
    if t in ENC:
        return ENC[t]
    if t.endswith(' *'):
        return t
    return 'id'


def sel_decl(name, ret, args):
    """Build '- (ret)sel:(t)a with:(t)b' declaration."""
    if ':' not in name:
        return '- (%s)%s' % (objc_type(ret), name)
    parts = name.split(':')
    names = sanitize_params(name)
    pieces = []
    for i, p in enumerate(parts[:-1]):
        t = args[i] if i < len(args) else 'id'
        pieces.append('%s:(%s)%s' % (p, objc_type(t), names[i] if i < len(names) else 'arg%d' % i))
    return '- (%s)%s' % (objc_type(ret), ' '.join(pieces))


def prop_decl(p):
    attrs = p['attrs'].split(',')
    keep = []
    for a in attrs:
        a = a.strip()
        if a in ('R',):
            keep.append('readonly')
        elif a == 'C':
            keep.append('copy')
        elif a == '&':
            keep.append('strong')
        elif a == 'W':
            keep.append('weak')
        elif a == 'N':
            keep.append('nonatomic')
    t = 'id'
    for a in attrs:
        if a.startswith('T'):
            t = a[1:]
    return '@property (%s) %s %s;' % (', '.join(dict.fromkeys(keep)) or 'nonatomic', objc_type(t), p['name'])


IVAR_ACCESS = re.compile(
    r"\(\*\s*\(\s*(?:undefined8|undefined4|ID|long|int)\s*\*\s*\)\s*"
    r"\(\s*(\w+)\s*\+\s*\(long\)\s*(_\w+)\s*\)\s*\)")


def tidy_body(body, cls_name, params):
    """Strip the decompiler's function header and prettify ivar access."""
    lines = body.split('\n')
    # drop everything up to and including the opening brace line
    start = 0
    for i, ln in enumerate(lines):
        if ln.strip() == '{':
            start = i + 1
            break
    body_lines = lines[start:]
    # drop trailing closing brace of the function
    while body_lines and body_lines[-1].strip() in ('', '}'):
        body_lines.pop()
    b = '\n'.join(body_lines)
    b = re.sub(r'\b' + re.escape(cls_name) + r'::\w+', '', b)
    for i, p in enumerate(params, start=1):
        b = re.sub(r'\bparam_%d\b' % i, p, b)
    b = re.sub(r'\bparam_(\d+)\b', lambda m: 'arg%s' % m.group(1), b)
    b = IVAR_ACCESS.sub(r'\1->\2', b)
    return b


def rename_body(body, params, cls_name, prefs=None):
    b = tidy_body(body, cls_name, params)
    if prefs:
        for g, sym in prefs.items():
            b = b.replace(g, sym)
    return b


def build_pref_map(funcs):
    mp = {}
    for body in funcs.values():
        for m in re.finditer(r'DAT_([0-9a-f]{8})\s*=\s*[^;\n]*?cf_([A-Za-z0-9_]+)', body):
            mp['DAT_' + m.group(1)] = 'SYSPREF(%s)' % m.group(2)
    return mp


def pref_name(pref_map, g):
    return pref_map.get(g)


def gen_class(meta_slice, cls, funcs, pref_map, outdir, prefix=''):
    name = cls['name']
    sup = cls['superclass'] or 'NSObject'
    h = []
    h.append('//')
    h.append('//  %s.h' % name)
    h.append('//  Reconstructed from SystemBox %s' % ('arm64'))
    h.append('//')
    h.append('')
    h.append('#import <UIKit/UIKit.h>')
    h.append('#import <Foundation/Foundation.h>')
    h.append('#import <QuartzCore/QuartzCore.h>')
    h.append('')
    protos = cls.get('protocols') or []
    pstr = (' <%s>' % ', '.join(protos)) if protos else ''
    h.append('@interface %s : %s%s' % (name, sup, pstr))
    ivars = cls.get('ivars') or []
    if ivars:
        h.append('{')
        for iv in ivars:
            h.append('    %s %s; // offset 0x%x, size %d' % (
                objc_type(iv['types']), iv['name'], iv['offset'], iv['size']))
        h.append('}')
    for p in cls.get('properties') or []:
        if p['name'] in ('hash', 'superclass', 'description', 'debugDescription'):
            continue
        h.append(prop_decl(p))
    for m in cls['methods']:
        h.append(sel_decl(m['name'], m['ret'], m['args']) + ';')
    h.append('@end')
    h.append('')
    open(os.path.join(outdir, name + '.h'), 'w').write('\n'.join(h))

    m_out = []
    m_out.append('//')
    m_out.append('//  %s.m' % name)
    m_out.append('//  Bodies are Ghidra decompilation of the original IMPs.')
    m_out.append('//  Every method carries the original address; hand-tune the C where needed.')
    m_out.append('//')
    m_out.append('')
    m_out.append('#import "%s.h"' % name)
    m_out.append('')
    m_out.append('@implementation %s' % name)
    m_out.append('')
    for m in cls['methods']:
        body = funcs.get(str(m['imp']))
        params = ['self', '_cmd'] + sanitize_params(m['name'])
        decl = sel_decl(m['name'], m['ret'], m['args'])
        m_out.append('// IMP 0x%08x  types %s' % (m['imp'], m['types']))
        m_out.append(decl + ' {')
        if body is None:
            m_out.append('    // no decompilation recovered for this IMP')
        else:
            nb = rename_body(body, params, name)
            for line in nb.split('\n'):
                m_out.append(('    ' + line).rstrip())
        m_out.append('}')
        m_out.append('')
    m_out.append('@end')
    m_out.append('')
    open(os.path.join(outdir, name + '.m'), 'w').write('\n'.join(m_out))


def gen_category(slice_, cat, funcs, outdir):
    cname = cat['class_name'] or 'Unknown'
    catname = cat['name']
    fn = '%s+%s' % (cname, catname)
    m_out = []
    m_out.append('#import <UIKit/UIKit.h>')
    m_out.append('')
    m_out.append('@interface %s (%s)' % (cname, catname))
    for m in cat['methods']:
        m_out.append(sel_decl(m['name'], m['ret'], m['args']) + ';')
    m_out.append('@end')
    m_out.append('')
    m_out.append('@implementation %s (%s)' % (cname, catname))
    m_out.append('')
    for m in cat['methods']:
        body = funcs.get(str(m['imp']))
        params = ['self', '_cmd'] + sanitize_params(m['name'])
        m_out.append('// IMP 0x%08x' % m['imp'])
        m_out.append(sel_decl(m['name'], m['ret'], m['args']) + ' {')
        if body is None:
            m_out.append('    // no decompilation recovered')
        else:
            for line in rename_body(body, params, cname).split('\n'):
                m_out.append(('    ' + line).rstrip())
        m_out.append('}')
        m_out.append('')
    m_out.append('@end')
    open(os.path.join(outdir, fn + '.m'), 'w').write('\n'.join(m_out))
    open(os.path.join(outdir, fn + '.h'), 'w').write(
        '#import <UIKit/UIKit.h>\n\n@interface %s (%s)\n@end\n' % (cname, catname))


def infer_ret(body):
    if not body:
        return 'id'
    if re.search(r'return\s+[01];', body) or "!= '\\0'" in body:
        return 'BOOL'
    if re.search(r'return\s+0x0;', body):
        return 'id'
    return 'id'


ORIG_RE = re.compile(r'\(\*DAT_([0-9a-f]{8})\)\(\)')


def gen_hooks(bin_name, hooks, funcs, pref_map, outdir):
    lines = []
    add = lines.append
    add('//')
    add('//  %s/Hooks.xmi' % bin_name)
    add('//  Reconstructed Logos hook blocks. Each block records the original')
    add('//  MSHookMessageEx call site and the replacement IMP recovered from')
    add('//  the binary. Bodies are the decompiler output of those IMPs, with the')
    add('//  %orig trampoline call restored.')
    add('//')
    add('')
    add('#import <UIKit/UIKit.h>')
    add('#import <Foundation/Foundation.h>')
    add('')
    add('// Preference flags: the original keeps one global per enabled switch.')
    add('// They are filled from the tweak plist at load time; see Prefs.h.')
    add('')
    by_class = {}
    for h in hooks:
        by_class.setdefault(str(h['cls']) if h['cls'] else 'UnknownClass', []).append(h)
    for cls in sorted(by_class, key=lambda x: str(x)):
        add('%hook ' + cls)
        for h in sorted(by_class[cls], key=lambda x: x['call_addr']):
            sel = h['sel'] or 'unknownSelector'
            body = funcs.get(str(h['imp'])) if h['imp'] else None
            add('')
            add('// MSHookMessageEx @ 0x%08x  IMP 0x%x' % (h['call_addr'], h['imp'] or 0))
            if body is None:
                add('- (id)' + sel + ' { return %orig; }')
                continue
            ret = infer_ret(body)
            b = tidy_body(body, '', ['self', '_cmd'])
            # exact orig-slot substitution using the recorded &orig address
            if h.get('orig'):
                slot = 'DAT_%08x' % h['orig']
                # direct call through the slot
                b = b.replace('(*' + slot + ')', '%orig')
                # copied into a local first:  pcVar1 = DAT_xxx; ... (*pcVar1)(...)
                m2 = re.search(r'(\w+)\s*=\s*' + slot + r';', b)
                if m2:
                    var = m2.group(1)
                    b = b.replace('(*%s)' % var, '%orig')
            b = ORIG_RE.sub('%orig', b)
            for g, sym in pref_map.items():
                b = b.replace(g, sym)
            b = b.replace('%orig(self,_cmd,', '%orig(')
            b = b.replace('%orig(self,_cmd)', '%orig')
            b = b.replace('%orig(self, _cmd,', '%orig(')
            b = b.replace('%orig(self, _cmd)', '%orig')
            b = '{\n' + b + '\n}'
            add('- (' + ret + ')' + sel + ' ' + b)
        add('%end')
        add('')
    open(os.path.join(outdir, 'Hooks.xmi'), 'w').write('\n'.join(lines))

    # raw call table
    raw = []
    raw.append('// %s - exact hook registrations (generated from MSHookMessageEx call sites)' % bin_name)
    raw.append('#import <objc/runtime.h>')
    raw.append('#import <substrate.h>')
    raw.append('')
    for h in sorted(hooks, key=lambda x: x['call_addr']):
        raw.append('// 0x%08x' % h['call_addr'])
        raw.append('//   class   %s' % (h['cls'] or '?'))
        raw.append('//   selector %s' % (h['sel'] or '?'))
        raw.append('//   hook IMP 0x%x   orig slot 0x%x' % (h['imp'] or 0, h['orig'] or 0))
    open(os.path.join(outdir, 'Hooks.raw.txt'), 'w').write('\n'.join(raw))


def main():
    if os.path.exists(OUT):
        shutil.rmtree(OUT)
    os.makedirs(OUT)
    hooks_all = load_json(HOOKS)
    funcs_all = load_json(FUNCS)
    for b in BINS:
        meta = load_json(os.path.join(META, b + '.json'))
        slice_ = meta['slices'][0]
        funcs = funcs_all.get(b + '_arm64', {})
        pref_map = build_pref_map(funcs)
        # rebuild pref map from our index run (stored alongside)
        bdir = os.path.join(OUT, 'src', b)
        os.makedirs(bdir, exist_ok=True)
        for c in slice_['classes']:
            gen_class(slice_, c, funcs, pref_map, bdir)
        for cat in slice_['categories']:
            gen_category(slice_, cat, funcs, bdir)
        hs = [h for h in hooks_all if h['binary'] == b]
        if hs:
            gen_hooks(b, hs, funcs, pref_map, bdir)
        print(b, 'classes', len(slice_['classes']), 'hooks', len(hs))


if __name__ == '__main__':
    main()
