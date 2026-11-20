#!/usr/bin/env python3
"""Produce per-slice JSON of stub->selector maps + method IMP names for Ghidra."""
import sys, os, json, struct
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from macho import load_fat
from objc import ObjCParser, type_encoding_to_signature
from capstone import Cs, CS_ARCH_ARM64, CS_MODE_ARM

md = Cs(CS_ARCH_ARM64, CS_MODE_ARM)
md.detail = True


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
            j = i + 1
            off = 0
            ok = False
            while j < len(insns) and j < i + 4:
                nx = insns[j]
                if nx.mnemonic == 'ldr' and len(nx.operands) >= 2 and nx.operands[1].type != 1:
                    try:
                        if nx.operands[0].reg == base_reg:
                            off = nx.operands[1].mem.disp
                            ok = True
                            break
                    except Exception:
                        pass
                elif nx.mnemonic == 'add':
                    try:
                        off = nx.operands[2].imm
                        ok = True
                    except Exception:
                        pass
                j += 1
            if ok:
                val = p.P(pg + off)
                nm = m.cstr_addr(val) if val else ''
                if nm:
                    out[ins.address] = nm
            i = j + 2
            continue
        i += 1
    return out


def norm_sig(t):
    return t or ''


def main():
    root = sys.argv[1]
    slices_dir = sys.argv[2]
    out_dir = sys.argv[3]
    os.makedirs(out_dir, exist_ok=True)
    files = {
        "SystemBox": "Library/MobileSubstrate/DynamicLibraries/SystemBox.dylib",
        "SystemBoxClockGlass": "Library/MobileSubstrate/DynamicLibraries/SystemBoxClockGlass.dylib",
        "SystemBoxClockGlassBackboardd": "Library/MobileSubstrate/DynamicLibraries/SystemBoxClockGlassBackboardd.dylib",
        "SystemBoxLiquidGlassDockBackboardd": "Library/MobileSubstrate/DynamicLibraries/SystemBoxLiquidGlassDockBackboardd.dylib",
        "SystemBoxPrefs": "Library/PreferenceBundles/SystemBoxPrefs.bundle/SystemBoxPrefs",
    }
    for name, rel in files.items():
        for m in load_fat(os.path.join(root, rel)):
            m.load_chained_fixups()
            p = ObjCParser(m).run()
            stubs = objc_stub_map(m, p)
            methods = []
            for c in p.classes:
                for mm in c['methods']:
                    methods.append(dict(imp=mm['imp'], cls=c['name'], sel=mm['name'],
                                        types=mm['types']))
            for c in p.categories:
                for mm in c['instance'] + c['classm']:
                    methods.append(dict(imp=mm['imp'], cls=c['class_name'] + '(' + c['name'] + ')',
                                        sel=mm['name'], types=mm['types']))
            payload = dict(name=name, arch=m.arch, stubs={str(k): v for k, v in stubs.items()},
                           methods=methods,
                           text=(m.section_named('__TEXT', '__text').addr if m.section_named('__TEXT', '__text') else 0),
                           texts=(m.section_named('__TEXT', '__text').size if m.section_named('__TEXT', '__text') else 0))
            fn = os.path.join(out_dir, f"{name}_{m.arch}.json")
            json.dump(payload, open(fn, 'w'), indent=1)
            print(fn, 'stubs', len(stubs), 'methods', len(methods))


if __name__ == '__main__':
    main()
