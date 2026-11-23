import pathlib,struct,math
from unicorn import Uc,UC_ARCH_ARM64,UC_MODE_ARM,UC_HOOK_CODE
from unicorn.arm64_const import *
root=pathlib.Path(__file__).resolve().parents[1]
code=(root/'src/CardRadiusMain/radius.bin').read_bytes()
def bits(v):return int.from_bytes(struct.pack('<d',v),'little')
count=0
for gate in (0,1):
 for req in (-1.,0.,1.,24.,60.,80.,float('nan'),float('inf')):
  for original in (0.,12.,38.):
   u=Uc(UC_ARCH_ARM64,UC_MODE_ARM);u.mem_map(0,0x100000);u.mem_write(0x65000,code);u.mem_write(0x7f000,struct.pack('<Qd',0x90000,req));u.mem_write(0x75108,bytes([gate]));u.reg_write(UC_ARM64_REG_SP,0xe0000);u.reg_write(UC_ARM64_REG_LR,0x95000)
   calls=[]
   def step(uc,a,s,data):
    ins=int.from_bytes(uc.mem_read(a,4),'little')
    if a==0x95000:uc.emu_stop();return
    if a==0x65100:
     calls.append(1);uc.reg_write(UC_ARM64_REG_D0,bits(original));uc.reg_write(UC_ARM64_REG_PC,a+4)
    elif ins==0xd503237f:uc.reg_write(UC_ARM64_REG_PC,a+4)
    elif ins==0xd65f0fff:uc.reg_write(UC_ARM64_REG_PC,uc.reg_read(UC_ARM64_REG_LR))
   u.hook_add(UC_HOOK_CODE,step);u.emu_start(0x650e8,0x96000,count=100)
   got=struct.unpack('<d',u.reg_read(UC_ARM64_REG_D0).to_bytes(8,'little'))[0]
   expected=min(req,60.) if gate and math.isfinite(req) and req>0 else original
   assert got==expected,(gate,req,original,got,expected)
   assert len(calls)==1
   assert u.reg_read(UC_ARM64_REG_SP)==0xe0000
   count+=1
print('PASS actual ARM64 instructions:',count,'cases; PAC instructions modeled only, real PAC requires macOS codesign/device')
