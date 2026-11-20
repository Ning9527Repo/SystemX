# @category Zaka
# Report __text coverage: which byte ranges have no function.
from ghidra.program.model.address import AddressSet

prog = currentProgram
fm = prog.getFunctionManager()
listing = prog.getListing()
af = prog.getAddressFactory()
space = af.getDefaultAddressSpace()

sec = None
for s in prog.getMemory().getBlocks():
    if s.getName() == "__text":
        sec = s
for b in prog.getMemory().getBlocks():
    if b.getName() == "__text":
        sec = b
        break

start = sec.getStart()
end = sec.getEnd()
print("text: %s - %s size=%d" % (start, end, sec.getSize()))

covered = AddressSet()
for f in fm.getFunctions(True):
    body = f.getBody()
    if body is not None:
        covered.add(body)

# find gaps
gaps = AddressSet(sec.getAddressRange())
gaps.delete(covered)

r = gaps.getAddressRanges()
total = 0
i = 0
for rg in r:
    sz = rg.getLength()
    total += sz
    if sz > 64:
        print("GAP %s - %s  (%d bytes)" % (rg.getMinAddress(), rg.getMaxAddress(), sz))
    i += 1
print("gap ranges: %d, total gap bytes: %d" % (i, total))

# largest functions
sizes = []
for f in fm.getFunctions(True):
    sizes.append((f.getBody().getNumAddresses(), f.getEntryPoint(), f.getName()))
sizes.sort(reverse=True)
for s in sizes[:10]:
    print("FUNC %6d bytes @ %s %s" % s)
