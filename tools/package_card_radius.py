#!/usr/bin/env python3
"""Wrap the repository's reproducible 23 payload; never rebuild vendor code."""
import argparse, hashlib, os, pathlib, plistlib, re, subprocess, tempfile
ROOT = pathlib.Path(__file__).resolve().parents[1]
LIB = pathlib.Path('Library/MobileSubstrate/DynamicLibraries')
DESKTOP = pathlib.Path('Library/PreferenceBundles/SystemBoxPrefs.bundle/Desktop.plist')
KEY = 'iPadCardSwitcherCornerRadius'
NOTIFY = 'com.wkk.systembox.prefschanged'
def run(*args): subprocess.run([str(x) for x in args], check=True)
def digest(p): return hashlib.sha256(p.read_bytes()).hexdigest()
def main():
    ap=argparse.ArgumentParser(); ap.add_argument('--library',type=pathlib.Path,required=True); ap.add_argument('--output',type=pathlib.Path,required=True); a=ap.parse_args()
    os.environ['SOURCE_DATE_EPOCH']='1795150144'
    with tempfile.TemporaryDirectory() as td:
        td=pathlib.Path(td); baseline=td/'23.deb'; base=td/'base'; root=td/'root'
        run('python3',ROOT/'repack_clearbutton.py','-o',baseline)
        run('dpkg-deb','-R',baseline,base); run('cp','-a',base,root)
        desktop=root/DESKTOP; raw=desktop.read_bytes(); panel=plistlib.loads(raw)
        assert not any(x.get('key')==KEY for x in panel['items'])
        indexes=[i for i,x in enumerate(panel['items']) if x.get('key')=='iPadCardSwitcherVerticalSpacing']; assert len(indexes)==1
        slider={'cell':'PSSliderCell','defaults':'com.wkk.systembox','key':KEY,'label':'网格卡片圆角（0 保持原样）','default':0,'min':0,'max':60,'showValue':True,'isContinuous':True,'PostNotification':NOTIFY}
        # Insert XML only; preserve all original bytes outside the one insertion.
        needle=b'\t\t\t<string>iPadCardSwitcherVerticalSpacing</string>'
        pos=raw.index(needle); end=raw.index(b'\n\t\t</dict>',pos)+len(b'\n\t\t</dict>')
        serialized=plistlib.dumps(slider,fmt=plistlib.FMT_XML,sort_keys=False).decode()
        body=serialized[serialized.index('<dict>'):serialized.rindex('</dict>')+7]
        insert=('\n'+'\n'.join('\t\t'+line for line in body.splitlines())).encode()
        desktop.write_bytes(raw[:end]+insert+raw[end:])
        check=plistlib.loads(desktop.read_bytes()); added=check['items'].pop(indexes[0]+1)
        assert added==slider and check==panel
        lib=root/LIB/'SystemBox.dylib'; lib.write_bytes(a.library.read_bytes());lib.chmod(0o755)
        assert not list((root/LIB).glob('SystemXCardRadius.*'))
        cp=root/'DEBIAN/control'; control=cp.read_text()
        for field,value in [('Version','1.5-8-26'),('Maintainer','Ning&wkk'),('Author','Ning&wkk')]:
            control,n=re.subn(r'(?m)^'+field+r': .*$',field+': '+value,control,count=1);assert n==1
        cp.write_text(control)
        for p in base.rglob('*'):
            rel=p.relative_to(base); q=root/rel
            if p.is_symlink(): assert q.is_symlink() and os.readlink(p)==os.readlink(q)
            elif p.is_file() and rel not in (DESKTOP,LIB/'SystemBox.dylib',pathlib.Path('DEBIAN/control')): assert p.read_bytes()==q.read_bytes(),str(rel)
            assert (p.stat().st_mode & 0o7777)==(q.stat().st_mode & 0o7777),str(rel)
        a.output.parent.mkdir(parents=True,exist_ok=True)
        run('dpkg-deb','--root-owner-group','-Zgzip','-b',root,a.output)
        print('PACKAGE',a.output,'SHA256',digest(a.output))
if __name__=='__main__': main()
