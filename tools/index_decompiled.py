#!/usr/bin/env python3
"""Index decompiled output: functions, and global -> preference-key mapping."""
import re, os, sys, json, glob

FUNC_RE = re.compile(r'^// ===== 0x([0-9a-f]{8})\s+(\S+)')
PREF_RE = re.compile(r'DAT_([0-9a-f]{8})\s*=\s*[^;\n]*cf_([A-Za-z0-9_]+)')
PREF_RE2 = re.compile(r'DAT_([0-9a-f]{8})\s*=\s*[^;\n]*?&?(cf[0-9]+)_?([A-Za-z0-9_]*)')


def index_file(path):
    funcs = {}
    cur = None
    buf = []
    pref = {}
    for line in open(path, errors='replace'):
        m = FUNC_RE.match(line)
        if m:
            if cur is not None:
                funcs[cur] = '\n'.join(buf).strip()
            cur = int(m.group(1), 16)
            buf = []
            continue
        if cur is not None:
            buf.append(line.rstrip('\n'))
        for mm in PREF_RE.finditer(line):
            pref[mm.group(1)] = mm.group(2)
    if cur is not None:
        funcs[cur] = '\n'.join(buf).strip()
    return funcs, pref


def main():
    dec_dir = sys.argv[1]
    out = sys.argv[2]
    allfuncs = {}
    allpref = {}
    for p in sorted(glob.glob(os.path.join(dec_dir, '*.c'))):
        name = os.path.basename(p)[:-2]
        f, pref = index_file(p)
        allfuncs[name] = f
        allpref[name] = pref
        print(f"{name}: {len(f)} functions, {len(pref)} pref globals")
    json.dump({k: {str(a): v for a, v in f.items()} for k, f in allfuncs.items()},
              open(out, 'w'))


if __name__ == '__main__':
    main()
