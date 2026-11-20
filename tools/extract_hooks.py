#!/usr/bin/env python3
"""Forward-emulate ARM64 to recover Logos-generated MSHookMessageEx hook tables."""
import sys, os, json, struct
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from macho import load_fat
from objc import ObjCParser, type_encoding_to_signature
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM
from capstone.arm64 import ARM64_OP_REG, ARM64_OP_IMM, ARM64_OP_MEM
from capstone.arm64 import *

md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
md.detail = True


def stub_map(m):
    """addr -> imported symbol name for __stubs"""
    out = {}
    sec = m.section_named('__TEXT', '__stubs')
    if not sec:
        return out
    insns = list(md.disasm(m.read(sec.addr, sec.size), sec.addr))
    i = 0
    while i < len(insns):
        ins = insns[i]
        if ins.mnemonic == 'adrp' and ins.operands:
            pg = ins.operands[1].imm
            for j in range(i + 1, min(i + 3, len(insns))):
                if insns[j].mnemonic == 'ldr' and len(insns[j].operands) >= 2:
                    try:
                        tgt = pg + insns[j].operands[1].mem.disp
                        nm = m.cf['binds'].get(tgt)
                        if nm:
                            out[ins.address] = nm
                    except Exception:
                        pass
                    break
            i += 2
            continue
        i += 1
    return out


def objc_stub_map(m, p):
    out = {}
    sec = m.section_named('__TEXT', '__objc_stubs')
    if not sec:
        return out
    insns = list(md.disasm(m.read(sec.addr, sec.size), sec.addr))
    i = 0
    while i < len(insns):
        ins = insns[i]
        if ins.mnemonic == 'adrp' and ins.operands:
            pg = ins.operands[1].imm
            base_reg = ins.operands[0].reg
            for j in range(i + 1, min(i + 4, len(insns))):
                nx = insns[j]
                disp = None
                if nx.mnemonic == 'ldr' and len(nx.operands) >= 2:
                    try:
                        disp = nx.operands[1].mem.disp
                    except Exception:
                        disp = None
                elif nx.mnemonic == 'add' and len(nx.operands) >= 3:
                    try:
                        disp = nx.operands[2].imm
                    except Exception:
                        disp = None
                if disp is not None:
                    val = p.P(pg + disp)
                    nm = m.cstr_addr(val) if val else ''
                    if nm:
                        out[ins.address] = nm
                    i = j + 2
                    break
            else:
                i += 1
                continue
            continue
        i += 1
    return out


CLASS_PREFIX = ('_OBJC_CLASS_$_', '_OBJC_METACLASS_$_')


class Emu:
    def __init__(self, m, p, stubs, objcstubs):
        self.m, self.p, self.stubs, self.objcstubs = m, p, stubs, objcstubs
        self.class_addrs = {}
        for c in p.classes:
            self.class_addrs[c['addr']] = c['name']
        sr = m.section_named('__DATA', '__objc_selrefs') or m.section_named('__DATA_CONST', '__objc_selrefs')
        self.sel_lo = sr.addr if sr else -1
        self.sel_hi = (sr.addr + sr.size) if sr else -1

    def value_of(self, reg, regs):
        v = regs.get(reg)
        return v

    def desc(self, reg, regs):
        v = regs.get(reg)
        if not v:
            return None, None
        kind = v[0]
        if kind == 'class':
            return 'class', v[1]
        if kind == 'sel':
            return 'sel', v[1]
        if kind == 'addr':
            return 'addr', v[1]
        if kind == 'cstr':
            return 'cstr', v[1]
        if kind == 'imp':
            return 'imp', v[1]
        return None, None

    def cfstring(self, addr):
        """__CFConstantString: isa, flags, char*, length"""
        try:
            ptr = self.p.P(addr + 0x10)
            if ptr:
                s = self.m.cstr_addr(ptr)
                if s and all(32 <= ord(c) < 127 for c in s):
                    return s
        except Exception:
            pass
        return None

    def mem_value(self, addr):
        """Interpret a data slot: bind -> import, ptr -> target."""
        bn = self.m.cf['binds'].get(addr)
        if bn:
            return ('bind', bn)
        v = self.p.P(addr)
        if v:
            return ('ptr', v)
        return (None, None)

    def slot_sym(self, addr):
        kind, val = self.mem_value(addr)
        if kind == 'bind':
            for pre in CLASS_PREFIX:
                if val.startswith(pre):
                    return ('class', val[len(pre):])
            return ('sym', val)
        if kind == 'ptr':
            if val in self.class_addrs:
                return ('class', self.class_addrs[val])
            if self.sel_lo <= addr < self.sel_hi:
                s = self.m.cstr_addr(val)
                if s:
                    return ('sel', s)
            s = self.m.cstr_addr(val)
            if s and all(32 <= ord(c) < 127 for c in s) and len(s) < 200:
                return ('sel', s)
            return ('addr', val)
        return (None, None)

    def run_window(self, insns, end_idx, back=30):
        regs = {}
        start = max(0, end_idx - back)
        for k in range(start, end_idx):
            ins = insns[k]
            mn = ins.mnemonic
            ops = ins.operands
            if mn == 'adrp' and ops and ops[0].type == ARM64_OP_REG:
                try:
                    regs[ops[0].reg] = ('page', ops[1].imm)
                except Exception:
                    pass
            elif mn == 'add' and len(ops) >= 3 and ops[1].type == ARM64_OP_REG:
                base = regs.get(ops[1].reg)
                if base and base[0] == 'page':
                    try:
                        regs[ops[0].reg] = ('addr', base[1] + ops[2].imm)
                    except Exception:
                        pass
                elif ops[2].type == ARM64_OP_IMM and ops[1].reg in regs:
                    pass
            elif mn == 'ldr' and len(ops) >= 2 and ops[1].type == ARM64_OP_MEM:
                base = regs.get(ops[1].mem.base)
                if base and base[0] == 'page':
                    a = base[1] + ops[1].mem.disp
                    kind, val = self.slot_sym(a)
                    if kind == 'class':
                        regs[ops[0].reg] = ('class', val)
                    elif kind == 'sel':
                        regs[ops[0].reg] = ('sel', val)
                    elif kind == 'addr':
                        regs[ops[0].reg] = ('addr', val)
                    elif kind == 'sym':
                        regs[ops[0].reg] = ('sym', val)
                    else:
                        regs[ops[0].reg] = ('slot', a)
            elif mn == 'mov' and len(ops) >= 2 and ops[1].type == ARM64_OP_REG:
                if ops[1].reg in regs:
                    regs[ops[0].reg] = regs[ops[1].reg]
            elif mn == 'bl':
                tgt = ops[0].imm
                nm = self.stubs.get(tgt, '')
                ret = None
                if 'NSClassFromString' in nm:
                    v = regs.get(ARM64_REG_X0)
                    if v and v[0] == 'addr':
                        cs = self.cfstring(v[1])
                        if cs:
                            ret = ('class', cs)
                elif 'NSStringFromClass' in nm:
                    pass
                elif 'objc_getClass' in nm or 'objc_lookUpClass' in nm:
                    v = regs.get(ARM64_REG_X0)
                    if v and v[0] == 'addr':
                        cs = self.m.cstr_addr(v[1])
                        if cs:
                            ret = ('class', cs)
                elif 'sel_registerName' in nm:
                    v = regs.get(ARM64_REG_X0)
                    if v and v[0] == 'addr':
                        cs = self.m.cstr_addr(v[1])
                        if cs:
                            ret = ('sel', cs)
                for r in range(ARM64_REG_X0, ARM64_REG_X8):
                    regs.pop(r, None)
                if ret:
                    regs[ARM64_REG_X0] = ret
            elif mn == 'movk' and ops and ops[0].type == ARM64_OP_REG:
                pass
        return regs


def analyse(path, name):
    result = []
    for m in load_fat(path):
        if m.arch != 'arm64':
            continue
        m.load_chained_fixups()
        p = ObjCParser(m).run()
        stubs = stub_map(m)
        ocs = objc_stub_map(m, p)
        text = m.section_named('__TEXT', '__text')
        insns = list(md.disasm(m.read(text.addr, text.size), text.addr))
        emu = Emu(m, p, stubs, ocs)
        hook_stubs = {}
        for a, nm in stubs.items():
            if nm in ('_MSHookMessageEx', '_MSHookFunction'):
                hook_stubs[a] = nm
        imp_to_sel = {}
        for c in p.classes:
            for mm in c['methods']:
                imp_to_sel[mm['imp']] = (c['name'], mm['name'])
            for mm in c['methods']:
                imp_to_sel.setdefault(mm['imp'], (c['name'], mm['name']))
        for i, ins in enumerate(insns):
            if ins.mnemonic != 'bl':
                continue
            tgt = ins.operands[0].imm
            if tgt not in hook_stubs:
                continue
            regs = emu.run_window(insns, i, back=110)
            cls = regs.get(ARM64_REG_X0)
            sel = regs.get(ARM64_REG_X1)
            imp = regs.get(ARM64_REG_X2)
            orig = regs.get(ARM64_REG_X3)
            rec = dict(binary=name, call_addr=ins.address, api=hook_stubs[tgt].lstrip('_'),
                       cls=cls[1] if cls else None,
                       sel=sel[1] if sel else None,
                       imp=imp[1] if imp and imp[0] == 'addr' else None,
                       orig=orig[1] if orig else None)
            if rec['imp'] in imp_to_sel:
                rec['imp_owner'] = imp_to_sel[rec['imp']]
            result.append(rec)
    return result


if __name__ == '__main__':
    root = sys.argv[1]
    out = sys.argv[2]
    files = {
        "SystemBox": "Library/MobileSubstrate/DynamicLibraries/SystemBox.dylib",
        "SystemBoxClockGlass": "Library/MobileSubstrate/DynamicLibraries/SystemBoxClockGlass.dylib",
        "SystemBoxClockGlassBackboardd": "Library/MobileSubstrate/DynamicLibraries/SystemBoxClockGlassBackboardd.dylib",
        "SystemBoxLiquidGlassDockBackboardd": "Library/MobileSubstrate/DynamicLibraries/SystemBoxLiquidGlassDockBackboardd.dylib",
        "SystemBoxPrefs": "Library/PreferenceBundles/SystemBoxPrefs.bundle/SystemBoxPrefs",
    }
    all_hooks = []
    for n, rel in files.items():
        hs = analyse(os.path.join(root, rel), n)
        print(f"== {n}: {len(hs)} hooks")
        ok = [h for h in hs if h['cls'] and h['sel']]
        print(f"   resolved cls+sel: {len(ok)}")
        for h in hs[:5]:
            print('   ', h['cls'], h['sel'], hex(h['imp']) if h['imp'] else None)
        all_hooks.extend(hs)
    json.dump(all_hooks, open(out, 'w'), indent=1)
