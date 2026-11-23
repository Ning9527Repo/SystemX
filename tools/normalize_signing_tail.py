"""Remove only unused zero bytes after the existing embedded signature.
Keep code, fixups, symbol/string tables, signature and every virtual address.
"""
import pathlib,struct,sys,json
p=pathlib.Path(sys.argv[1]);b=bytearray(p.read_bytes());assert b[:4]==bytes.fromhex('cffaedfe')
pos=32;sig=None;link=None
for _ in range(struct.unpack_from('<I',b,16)[0]):
 cmd,n=struct.unpack_from('<II',b,pos)
 if cmd==0x1d:sig=struct.unpack_from('<II',b,pos+8)
 if cmd==0x19 and b[pos+8:pos+24].rstrip(b'\0')==b'__LINKEDIT':link=pos
 pos+=n
assert sig and link is not None
so,sn=sig;end=so+sn;assert end<=len(b)
assert not any(b[end:]),'nonzero bytes after signature: stop'
assert struct.unpack_from('>I',b,so)[0]==0xfade0cc0
assert struct.unpack_from('>I',b,so+4)[0]<=sn
fo,fs=struct.unpack_from('<QQ',b,link+40);assert fo<=so and fo+fs==len(b)
old=len(b);del b[end:]
struct.pack_into('<Q',b,link+48,end-fo)
# __LINKEDIT keeps the original page-aligned virtual size; no addresses move.
p.write_bytes(b)
print(json.dumps({'original_bytes':old,'normalized_bytes':len(b),'removed_zero_tail':old-len(b),'signature_end':end,'linkedit_file_bytes':end-fo}))
