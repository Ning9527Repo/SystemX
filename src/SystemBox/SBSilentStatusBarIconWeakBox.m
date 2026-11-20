//
//  SBSilentStatusBarIconWeakBox.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBSilentStatusBarIconWeakBox.h"

@implementation SBSilentStatusBarIconWeakBox

// IMP 0x00004000  types @16@0:8
- (id)object {
      ID IVar1;

      _objc_loadWeakRetained(self + 8);
      IVar1 = _objc_autoreleaseReturnValue();
      return IVar1;
}

// IMP 0x00004018  types v24@0:8@16
- (void)setObject:(id)setObject {
      _objc_storeWeak(self + 8,setObject);
      return;
}

// IMP 0x00004024  types v16@0:8
- (void).cxx_destruct {
      _objc_destroyWeak(self + 8);
      return;
}

@end
