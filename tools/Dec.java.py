# Ghidra headless script (Jython 2.7): apply ObjC naming from metadata JSON,
# then decompile every function in __text.
# @category Zaka
import json, os

from ghidra.app.decompiler import DecompInterface
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.program.model.symbol import SourceType
from ghidra.program.model.address import AddressSet

args = getScriptArgs()
meta_path = args[0]
out_path = args[1]
dump_all = (args[2] if len(args) > 2 else "1") == "1"

prog = currentProgram
fm = prog.getFunctionManager()
listing = prog.getListing()
af = prog.getAddressFactory()
space = af.getDefaultAddressSpace()

meta = json.load(open(meta_path))


def addr_of(v):
    try:
        return space.getAddress(int(v))
    except:
        return None


def get_or_create_func(a):
    f = fm.getFunctionAt(a)
    if f is not None:
        return f
    try:
        return createFunction(a, None)
    except:
        return None


def clean_name(s):
    out = []
    for ch in s:
        if ch.isalnum() or ch in "_$":
            out.append(ch)
        else:
            out.append("_")
    return "".join(out)


renamed = 0
# 1. objc_msgSend stubs
for k, sel in meta.get("stubs", {}).items():
    a = addr_of(k)
    if a is None:
        continue
    f = get_or_create_func(a)
    if f is None:
        continue
    try:
        f.setName("objc_msgSend$" + clean_name(sel), SourceType.USER_DEFINED)
        renamed += 1
    except:
        pass

# 2. method implementations
mrenamed = 0
for rec in meta.get("methods", []):
    a = addr_of(rec["imp"])
    if a is None:
        continue
    f = get_or_create_func(a)
    if f is None:
        continue
    nm = clean_name(rec["cls"]) + "__" + clean_name(rec["sel"])
    try:
        f.setName(nm[:200], SourceType.USER_DEFINED)
        mrenamed += 1
    except:
        pass

print("renamed stubs: %d, methods: %d" % (renamed, mrenamed))

di = DecompInterface()
di.openProgram(prog)
monitor = ConsoleTaskMonitor()

funcs = []
for f in fm.getFunctions(True):
    funcs.append(f)
print("total functions: %d" % len(funcs))

out = open(out_path, "w")
out.write("// %s  (%s)\n" % (meta.get("name", "?"), meta.get("arch", "?")))
for f in funcs:
    if f.isThunk():
        continue
    ep = f.getEntryPoint()
    res = di.decompileFunction(f, 120, monitor)
    if res is None or not res.decompileCompleted():
        out.write("// %s  decompile failed\n\n" % ep)
        continue
    code = res.getDecompiledFunction().getC()
    out.write("// ===== 0x%s  %s\n" % (ep, f.getName()))
    out.write(code)
    out.write("\n\n")
out.close()
print("wrote %s" % out_path)
