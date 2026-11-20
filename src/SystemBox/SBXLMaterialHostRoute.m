//
//  SBXLMaterialHostRoute.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBXLMaterialHostRoute.h"

@implementation SBXLMaterialHostRoute

// IMP 0x00009ae0  types @?16@0:8
- (id)matcher {
      return *(ID *)(self + 8);
}

// IMP 0x00009ae8  types v24@0:8@?16
- (void)setMatcher:(id)setMatcher {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x00009af0  types {UIEdgeInsets=dddd}16@0:8
- (id)outset {
      return __return_storage_ptr__;
}

// IMP 0x00009afc  types v48@0:8{UIEdgeInsets=dddd}16
- (void)setOutset:(id)setOutset {
      undefined8 in_d0;
      undefined8 in_d1;
      undefined8 in_d2;
      undefined8 in_d3;

      *(undefined8 *)(self + 0x28) = in_d0;
      *(undefined8 *)(self + 0x30) = in_d1;
      *(undefined8 *)(self + 0x38) = in_d2;
      *(undefined8 *)(self + 0x40) = in_d3;
      return;
}

// IMP 0x00009b08  types @?16@0:8
- (id)cornerRadiusProvider {
      return *(ID *)(self + 0x10);
}

// IMP 0x00009b10  types v24@0:8@?16
- (void)setCornerRadiusProvider:(id)setCornerRadiusProvider {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x00009b18  types @16@0:8
- (id)groupName {
      return *(ID *)(self + 0x18);
}

// IMP 0x00009b20  types v24@0:8@16
- (void)setGroupName:(id)setGroupName {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x00009b28  types @?16@0:8
- (id)postInstall {
      return *(ID *)(self + 0x20);
}

// IMP 0x00009b30  types v24@0:8@?16
- (void)setPostInstall:(id)setPostInstall {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x00009b38  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + 0x20,0);
      _objc_storeStrong(self + 0x18,0);
      _objc_storeStrong(self + 0x10,0);
      _objc_storeStrong(self + 8,0);
      return;
}

@end
