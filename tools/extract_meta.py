#!/usr/bin/env python3
"""Extract full ObjC metadata from every binary/slice of the package."""
import sys, os, json, struct, re
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from macho import load_fat
from objc import ObjCParser, type_encoding_to_signature

BINARIES = [
    ("SystemBox", "Library/MobileSubstrate/DynamicLibraries/SystemBox.dylib"),
    ("SystemBoxClockGlass", "Library/MobileSubstrate/DynamicLibraries/SystemBoxClockGlass.dylib"),
    ("SystemBoxClockGlassBackboardd", "Library/MobileSubstrate/DynamicLibraries/SystemBoxClockGlassBackboardd.dylib"),
    ("SystemBoxLiquidGlassDockBackboardd", "Library/MobileSubstrate/DynamicLibraries/SystemBoxLiquidGlassDockBackboardd.dylib"),
    ("SystemBoxPrefs", "Library/PreferenceBundles/SystemBoxPrefs.bundle/SystemBoxPrefs"),
]
ROOT = sys.argv[1] if len(sys.argv) > 1 else "../extracted/data"
OUT = sys.argv[2] if len(sys.argv) > 2 else "../out/meta"
os.makedirs(OUT, exist_ok=True)

SKIP_PROPS = {'hash', 'superclass', 'description', 'debugDescription', 'class'}


def method_rec(m):
    ret, args = type_encoding_to_signature(m['types'])
    return dict(name=m['name'], types=m['types'], imp=m['imp'], ret=ret,
                args=[a for a in args[2:]] if len(args) >= 2 else [], allargs=args)


def dump(name, path):
    result = dict(name=name, path=path, slices=[])
    for m in load_fat(path):
        m.load_chained_fixups()
        m.load_symbols()
        p = ObjCParser(m).run()
        sl = dict(arch=m.arch, uuid=m.uuid,
                  text=[dict(addr=s.addr, size=s.size) for s in m.sections
                        if s.name in ('__text', '__objc_stubs', '__stubs')],
                  imports=[i[2] for i in m.cf['imports']],
                  classes=[], categories=[], protocols=[])
        for c in p.classes:
            sl['classes'].append(dict(
                name=c['name'], superclass=c['superclass'], addr=c['addr'], ro=c['ro'],
                instance_start=c['instance_start'], instance_size=c['instance_size'],
                methods=[method_rec(x) for x in c['methods']],
                classmethods=[method_rec(x) for x in c['methods'] if False],
                ivars=[dict(name=i['name'], types=i['types'], offset=i['offset'],
                            size=i['size']) for i in c['ivars']],
                properties=[dict(name=x['name'], attrs=x['attrs']) for x in c['properties']],
                protocols=c['protocols']))
        for c in p.categories:
            sl['categories'].append(dict(
                class_name=c['class_name'], name=c['name'], addr=c['addr'],
                methods=[method_rec(x) for x in c['instance']],
                classmethods=[method_rec(x) for x in c['classm']],
                protocols=c['protocols'],
                properties=[dict(name=x['name'], attrs=x['attrs']) for x in c['properties']]))
        for pr in p.protocols:
            sl['protocols'].append(dict(name=pr['name'],
                                        methods=[x['name'] for x in pr['instance']],
                                        classmethods=[x['name'] for x in pr['classm']],
                                        opt=[x['name'] for x in pr['opt_instance']],
                                        protocols=pr['protocols']))
        sl['selrefs'] = p.selrefs
        sl['classrefs'] = p.classrefs
        sl['cstrings'] = [dict(addr=a, s=s) for a, s in m.all_cstrings()]
        sl['symbols'] = [dict(name=s['name'], value=s['value'], type=s['type'])
                         for s in m.symbols if s['name']]
        result['slices'].append(sl)
        print(f"  [{m.arch}] classes={len(sl['classes'])} cats={len(sl['categories'])} "
              f"protos={len(sl['protocols'])} selrefs={len(sl['selrefs'])} "
              f"cstrings={len(sl['cstrings'])}")
    with open(os.path.join(OUT, name + '.json'), 'w') as f:
        json.dump(result, f, indent=1)
    return result


if __name__ == '__main__':
    for name, rel in BINARIES:
        print(f"== {name}")
        dump(name, os.path.join(ROOT, rel))
