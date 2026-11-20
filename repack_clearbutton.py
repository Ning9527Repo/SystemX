#!/usr/bin/env python3
"""Reproduce the 1.5-8-23 clear-button-only repack from the exact original deb.
Requires dpkg-deb. No source rebuild; changes button bytes in the original fat dylib,
refreshes its ad-hoc CodeDirectory page hashes, and repacks the original payload.
"""
import argparse, hashlib, os, pathlib, re, shutil, struct, subprocess, tempfile
SOURCE_DATE_EPOCH = 1795150144
os.environ['SOURCE_DATE_EPOCH'] = str(SOURCE_DATE_EPOCH)
ROOT = pathlib.Path(__file__).resolve().parent
REL = pathlib.Path('Library/MobileSubstrate/DynamicLibraries/SystemBox.dylib')
DONOR = ROOT / 'patches/clearbutton-1.5-8-23/SystemBox.dylib'
BASE = ROOT / 'patches/clearbutton-1.5-8-23/com.wkk.systembox_1.5-8_iphoneos-arm64e.deb'
BASE_SHA256 = '3dbe540054eba4e9b52dcf4a4b90aa371c22e9d1015f6c56d9301dfcad8bf736'
DONOR_SHA256 = 'ad8559ed9ee87a34e7785f8d03ceadb8d446633309d166240065db8829fc52e4'
# Fat-file absolute offset, slice-relative offset, byte count.
RANGES = [(0x4000,o,n) for o,n in [(0x30ee4,2),(0x30ef8,2),(0x30f21,2),(0x30f60,2),(0x3f51c,1),(0x3f8ec,4),(0x6954e,2)]] + [(0x80000,o,n) for o,n in [(0x344c8,2),(0x344dc,2),(0x34505,2),(0x34544,2),(0x43450,1),(0x43820,4),(0x6d556,2)]]

def sha(path): return hashlib.sha256(pathlib.Path(path).read_bytes()).hexdigest()
def run(*args): subprocess.run(args, check=True, stdout=subprocess.DEVNULL)
def sig_info(buf, base):
    ncmd=struct.unpack_from('<I',buf,base+16)[0]; p=base+32
    for _ in range(ncmd):
        cmd,sz=struct.unpack_from('<II',buf,p)
        if cmd==0x1d: return p,*struct.unpack_from('<II',buf,p+8)
        p+=sz
    raise ValueError(f'LC_CODE_SIGNATURE missing at {base:#x}')
def main():
    ap=argparse.ArgumentParser(); ap.add_argument('base_deb', nargs='?', default=str(BASE)); ap.add_argument('-o','--output',default='SystemX-1.5-8-23-iphoneos-arm64e.deb'); a=ap.parse_args()
    if sha(a.base_deb)!=BASE_SHA256: raise SystemExit('base deb SHA256 mismatch; refusing to patch')
    if sha(DONOR)!=DONOR_SHA256: raise SystemExit('donor SHA256 mismatch; refusing to patch')
    with tempfile.TemporaryDirectory(prefix='systemx-clearbutton-') as td:
        td=pathlib.Path(td); root=td/'root'; donorroot=td/'donor'; origroot=td/'orig'
        root.mkdir(); donorroot.mkdir(); origroot.mkdir()
        run('dpkg-deb','-R',a.base_deb,str(root)); run('dpkg-deb','-x',a.base_deb,str(origroot))
        src=root/REL; original=src.read_bytes(); donor=pathlib.Path(DONOR).read_bytes()
        if len(original)!=1046640 or len(donor)!=1043904: raise SystemExit('unexpected dylib length')
        out=bytearray(original)
        for base,off,n in RANGES:
            pos=base+off; old=original[pos:pos+n]; new=donor[pos:pos+n]
            if len(old)!=n or len(new)!=n or old==new: raise SystemExit(f'patch guard failed at {pos:#x}')
            out[pos:pos+n]=new
        # Copy prior ad-hoc signature layout per slice, then recompute all code-page hashes.
        for base in (0x4000,0x80000):
            cmd,oldso,oldss=sig_info(out,base); _,dso,dss=sig_info(donor,base)
            ds=donor[base+dso:base+dso+dss]
            struct.pack_into('<I',out,cmd+12,dss); out[base+oldso:base+oldso+oldss]=b'\0'*oldss; out[base+oldso:base+oldso+dss]=ds
            sb=base+oldso; magic,length,count=struct.unpack_from('>III',out,sb)
            if magic!=0xfade0cc0 or length>dss: raise SystemExit('invalid ad-hoc signature template')
            found=False
            for i in range(count):
                typ,rel=struct.unpack_from('>II',out,sb+12+i*8)
                if typ!=0: continue
                cd=sb+rel; cm,cl=struct.unpack_from('>II',out,cd)
                if cm!=0xfade0c02: raise SystemExit('invalid CodeDirectory')
                hoff=struct.unpack_from('>I',out,cd+16)[0]; nc=struct.unpack_from('>I',out,cd+28)[0]; limit=struct.unpack_from('>I',out,cd+32)[0]
                hs,ht,_,ps=struct.unpack_from('4B',out,cd+36); alg={1:hashlib.sha1,2:hashlib.sha256}.get(ht); page=1<<ps
                if not alg or nc!=(limit+page-1)//page or hoff+nc*hs>cl: raise SystemExit('invalid CodeDirectory hash table')
                for j in range(nc): out[cd+hoff+j*hs:cd+hoff+(j+1)*hs]=alg(out[base+j*page:base+min((j+1)*page,limit)]).digest()[:hs]
                found=True
            if not found: raise SystemExit('ad-hoc CodeDirectory missing')
        src.write_bytes(out); src.chmod(0o755)
        cp=root/'DEBIAN/control'; text=cp.read_text(); text,n=re.subn(r'(?m)^Version: .*$', 'Version: 1.5-8-23', text, count=1)
        if n!=1: raise SystemExit('control Version field missing')
        cp.write_text(text)  # Author and Maintainer deliberately remain exactly wkk.
        md=root/'DEBIAN/md5sums'
        if md.exists():
            lines=md.read_text().splitlines(); digest=hashlib.md5(src.read_bytes()).hexdigest(); seen=0; out_lines=[]
            for line in lines:
                if line.endswith('  '+REL.as_posix()): out_lines.append(digest+'  '+REL.as_posix()); seen+=1
                else: out_lines.append(line)
            if seen!=1: raise SystemExit('target md5sums entry missing/duplicated')
            md.write_text('\n'.join(out_lines)+'\n')
        output=pathlib.Path(a.output); output.unlink(missing_ok=True); run('dpkg-deb','-Zgzip','-b',str(root),str(output))
        check=td/'check'; check.mkdir(); run('dpkg-deb','-x',str(output),str(check))
        for p in origroot.rglob('*'):
            if p.is_file() and p.relative_to(origroot)!=REL:
                q=check/p.relative_to(origroot)
                if not q.is_file() or p.read_bytes()!=q.read_bytes(): raise SystemExit(f'unexpected payload change: {p.relative_to(origroot)}')
        if (check/REL).read_bytes()!=src.read_bytes(): raise SystemExit('final dylib mismatch')
        print('output',output,'bytes',output.stat().st_size,'sha256',sha(output))
        print('Maintainer:',subprocess.check_output(['dpkg-deb','-f',str(output),'Maintainer'],text=True).strip())
        print('Author:',subprocess.check_output(['dpkg-deb','-f',str(output),'Author'],text=True).strip())
if __name__=='__main__': main()
