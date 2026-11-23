#!/usr/bin/env python3
"""Patch ONLY the locked 23 arm64e slice, using existing imports, no new fixups."""
import pathlib,struct,hashlib,argparse,json
ROOT=pathlib.Path(__file__).resolve().parents[1]
BASE_SHA='de2661634217e6ab863808372c119355474ada8f764dbf23518024725e6389ba'
def patch(src,dst):
 raw=bytearray(pathlib.Path(src).read_bytes());assert hashlib.sha256(raw).hexdigest()==BASE_SHA
 assert raw[:4]==bytes.fromhex('cafebabe')
 found=[]
 for i in range(struct.unpack_from('>I',raw,4)[0]):
  cpu,sub,off,size,al=struct.unpack_from('>IIIII',raw,8+20*i)
  if sub==0x80000002: found.append((off,size))
 assert len(found)==1;off,size=found[0];b=bytearray(raw[off:off+size])
 code=(ROOT/'src/CardRadiusMain/radius.bin').read_bytes();assert len(code)<0x1000
 assert not any(b[0x65000:0x65000+len(code)]),'code cave occupied'
 assert b[0x15918:0x1591c]==bytes.fromhex('00210439')
 assert struct.unpack_from('<I',b,0x4f300)[0]==0xb360
 # The original zero-fill BSS ends at 0x7d9d8, within a 0x80000 DATA end.
 pos=32;extended=False
 for _ in range(struct.unpack_from('<I',b,16)[0]):
  cmd,n=struct.unpack_from('<II',b,pos)
  if cmd==0x19 and b[pos+8:pos+24].rstrip(b'\0')==b'__DATA':
   vm,vs=struct.unpack_from('<QQ',b,pos+24);assert vm==0x70000 and vm+vs==0x80000
   for j in range(struct.unpack_from('<I',b,pos+64)[0]):
    s=pos+72+80*j
    if b[s:s+16].rstrip(b'\0')==b'__bss':
     a,z=struct.unpack_from('<QQ',b,s+32);assert a==0x743b0 and a+z==0x7d9d8
     struct.pack_into('<Q',b,s+40,0x7f010-a);extended=True
  pos+=n
 assert extended
 b[0x65000:0x65000+len(code)]=code
 struct.pack_into('<I',b,0x4f300,0x65000)
 # BL returns to the next original instruction; original gate store is in sx_reload.
 target=0x6508c;site=0x15918;delta=target-site;assert delta%4==0 and abs(delta)<1<<27
 struct.pack_into('<I',b,site,0x94000000|((delta>>2)&0x3ffffff))
 raw[off:off+size]=b;pathlib.Path(dst).write_bytes(raw)
 print(json.dumps({'input_sha256':BASE_SHA,'code_bytes':len(code),'code_va':'0x65000','init':'0x65000','reload':'0x6508c','state':'0x7f000','output_sha256_unsigned':hashlib.sha256(raw).hexdigest(),'arm64_original_unchanged':True}))
if __name__=='__main__':
 p=argparse.ArgumentParser();p.add_argument('input');p.add_argument('output');a=p.parse_args();patch(a.input,a.output)
