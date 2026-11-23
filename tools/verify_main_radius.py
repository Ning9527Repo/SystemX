import pathlib,sys,tempfile,subprocess,hashlib,json,struct,plistlib
from verify_codesig import verify
ROOT=pathlib.Path(__file__).resolve().parents[1]
LIB=pathlib.Path('Library/MobileSubstrate/DynamicLibraries/SystemBox.dylib')
DESK=pathlib.Path('Library/PreferenceBundles/SystemBoxPrefs.bundle/Desktop.plist')
def run(*a):subprocess.run(list(map(str,a)),check=True)
def main(p):
 with tempfile.TemporaryDirectory() as td:
  td=pathlib.Path(td);base=td/'base';final=td/'final';deb=td/'23.deb'
  run('python3',ROOT/'repack_clearbutton.py','-o',deb);run('dpkg-deb','-R',deb,base);run('dpkg-deb','-R',p,final)
  files=lambda x:{str(y.relative_to(x)) for y in x.rglob('*') if y.is_file()}
  assert files(base)==files(final),'unexpected files'
  changed=[s for s in files(base) if (base/s).read_bytes()!=(final/s).read_bytes()]
  assert set(changed)=={str(LIB),str(DESK),'DEBIAN/control'},changed
  assert b'Version: 1.5-8-26\n' in (final/'DEBIAN/control').read_bytes()
  old=plistlib.loads((base/DESK).read_bytes());new=plistlib.loads((final/DESK).read_bytes())
  sliders=[x for x in new['items'] if x.get('key')=='iPadCardSwitcherCornerRadius'];assert len(sliders)==1
  new['items'].remove(sliders[0]);assert new==old
  original=(base/LIB).read_bytes();patched=(final/LIB).read_bytes();sig=verify(final/LIB)
  def slices(b):
   out={}
   for i in range(struct.unpack_from('>I',b,4)[0]):
    _,s,o,n,_=struct.unpack_from('>IIIII',b,8+20*i);out[s]=b[o:o+n]
   return out
  before=slices(original);after=slices(patched);assert after.keys()==before.keys()
  # codesign may regenerate both slices; business bytes of ordinary arm64 stay fixed.
  assert before[0][:0x74000]==after[0][:0x74000], 'arm64 payload changed'
  a=after[0x80000002];b=before[0x80000002]
  assert struct.unpack_from('<I',a,0x4f300)[0]==0x65000
  assert a[0x65000:0x651b7]==(ROOT/'src/CardRadiusMain/radius.bin').read_bytes()
  # Every existing code byte is preserved except a single 4-byte reload branch.
  assert a[0x4000:0x15918]==b[0x4000:0x15918]
  assert a[0x1591c:0x4f300]==b[0x1591c:0x4f300]
  assert b'@loader_path/.jbroot/usr/lib/libroothide.dylib' in a
  report={'version':'1.5-8-26','sha256':hashlib.sha256(pathlib.Path(p).read_bytes()).hexdigest(),'bytes':pathlib.Path(p).stat().st_size,'changed':sorted(changed),'new_files':[],'signatures':sig,'actual_device_tested':False,'arm64e_inlined':True}
  print(json.dumps(report,indent=2));return report
if __name__=='__main__':
 result=main(sys.argv[1]);pathlib.Path(sys.argv[2]).write_text(json.dumps(result,indent=2)) if len(sys.argv)>2 else None
