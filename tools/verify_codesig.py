import struct,hashlib,sys,json

def verify(path):
 raw=open(path,'rb').read(); slices=[]
 if raw[:4]==b'\xca\xfe\xba\xbe':
  for i in range(struct.unpack_from('>I',raw,4)[0]):
   cpu,sub,o,n,a=struct.unpack_from('>IIIII',raw,8+20*i);slices.append(raw[o:o+n])
 else:slices=[raw]
 result=[]
 for b in slices:
  magic,cpu,sub,typ,nc,sz,flags,res=struct.unpack_from('<8I',b);assert magic==0xfeedfacf
  o=32;sig=None
  for _ in range(nc):
   cmd,n=struct.unpack_from('<II',b,o)
   if cmd==0x1d:
    so,sn=struct.unpack_from('<II',b,o+8);sig=b[so:so+sn]
   o+=n
  assert sig and struct.unpack_from('>I',sig)[0]==0xfade0cc0,'no embedded signature'
  cds=[]
  for i in range(struct.unpack_from('>I',sig,8)[0]):
   slot,off=struct.unpack_from('>II',sig,12+8*i)
   if struct.unpack_from('>I',sig,off)[0]!=0xfade0c02:continue
   cd=sig[off:];length,ver,fl,ho,io,ns,ncode,limit=struct.unpack_from('>8I',cd,4); hs,ht,plat,pg=struct.unpack_from('4B',cd,36)
   fun={1:hashlib.sha1,2:hashlib.sha256,3:hashlib.sha256,4:hashlib.sha384}[ht];bad=[]
   for j in range(ncode):
    calc=fun(b[j*(1<<pg):min((j+1)*(1<<pg),limit)]).digest()[:hs]
    if calc!=cd[ho+j*hs:ho+(j+1)*hs]:bad.append(j)
   cds.append({'hashType':ht,'pages':ncode,'badPages':bad});assert not bad,(path,hex(sub),bad)
  assert cds;result.append({'cpu':hex(cpu),'subtype':hex(sub),'directories':cds})
 return result
if __name__=='__main__':
 for p in sys.argv[1:]:print(json.dumps({'file':p,'slices':verify(p)}))
