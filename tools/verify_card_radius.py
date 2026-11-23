#!/usr/bin/env python3
import argparse,hashlib,json,os,pathlib,plistlib,struct,subprocess,tempfile
from verify_codesig import verify
ROOT=pathlib.Path(__file__).resolve().parents[1]
LIB=pathlib.Path('Library/MobileSubstrate/DynamicLibraries')
DESKTOP=pathlib.Path('Library/PreferenceBundles/SystemBoxPrefs.bundle/Desktop.plist')
def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()
def run(*a):subprocess.run([str(x) for x in a],check=True,stdout=subprocess.DEVNULL)
def library(p):
    b=p.read_bytes(); assert struct.unpack_from('<4I',b)==(0xfeedfacf,0x100000c,0x80000002,6),'not genuine arm64e dylib'
    result=verify(p);assert len(result)==1
    for s in [b'iPadCardSwitcherEnabled',b'iPadCardSwitcherCornerRadius',b'com.wkk.systembox.prefschanged',b'MSHookMessageEx']:assert s in b,s
    return {'sha256':sha(p),'signatures':result,'arm64e':True}
def package(p):
    with tempfile.TemporaryDirectory() as td:
        td=pathlib.Path(td);base=td/'base';final=td/'final';deb=td/'23.deb'
        run('python3',ROOT/'repack_clearbutton.py','-o',deb);run('dpkg-deb','-R',deb,base);run('dpkg-deb','-R',p,final)
        changes=[];unchanged=[]
        expected={DESKTOP,pathlib.Path('DEBIAN/control')}
        for f in base.rglob('*'):
            rel=f.relative_to(base);g=final/rel
            assert g.exists() or g.is_symlink(),str(rel)
            assert (f.lstat().st_mode & 0o7777)==(g.lstat().st_mode & 0o7777),str(rel)
            if f.is_symlink():assert os.readlink(f)==os.readlink(g)
            elif f.is_file():
                if f.read_bytes()!=g.read_bytes():changes.append(str(rel));assert rel in expected,str(rel)
                else:unchanged.append({'path':str(rel),'sha256':sha(g)})
        new={str(f.relative_to(final)) for f in final.rglob('*') if not (base/f.relative_to(final)).exists()}
        assert new=={str(LIB/'SystemXCardRadius.dylib'),str(LIB/'SystemXCardRadius.plist')},new
        old=plistlib.loads((base/DESKTOP).read_bytes());now=plistlib.loads((final/DESKTOP).read_bytes())
        matching=[x for x in now['items'] if x.get('key')=='iPadCardSwitcherCornerRadius'];assert len(matching)==1
        slider=matching[0];now['items'].remove(slider);assert now==old
        assert slider['cell']=='PSSliderCell' and slider['default']==0 and slider['min']==0 and slider['max']==60
        assert slider['defaults']=='com.wkk.systembox' and slider['PostNotification']=='com.wkk.systembox.prefschanged'
        control=(final/'DEBIAN/control').read_text();assert 'Version: 1.5-8-25\n' in control
        assert 'Author: Ning&wkk\n' in control and 'Maintainer: Ning&wkk\n' in control
        assert plistlib.loads((final/LIB/'SystemXCardRadius.plist').read_bytes())=={'Filter':{'Bundles':['com.apple.springboard']}}
        vendor=verify(final/LIB/'SystemBox.dylib')
        deps=(final/LIB/'SystemBox.dylib').read_bytes();assert b'@loader_path/.jbroot/usr/lib/libroothide.dylib' in deps
        return {'package_sha256':sha(p),'package_bytes':p.stat().st_size,'companion':library(final/LIB/'SystemXCardRadius.dylib'),'vendor_signatures':vendor,'changed_existing':changes,'new':sorted(new),'unchanged_payload':unchanged,'slider':slider,'root_hide_vendor_retained':True,'device_runtime_tested':False}
def main():
    ap=argparse.ArgumentParser();ap.add_argument('--library',type=pathlib.Path);ap.add_argument('--package',type=pathlib.Path);ap.add_argument('--report',type=pathlib.Path);a=ap.parse_args()
    result=package(a.package) if a.package else library(a.library)
    text=json.dumps(result,indent=2,ensure_ascii=False);print(text)
    if a.report:a.report.write_text(text+'\n')
if __name__=='__main__':main()
