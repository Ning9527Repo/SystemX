//
//  SystemBoxDisableListController.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SystemBoxDisableListController.h"

@implementation SystemBoxDisableListController

// IMP 0x000094e0  types @16@0:8
- (id)sb_specifierPlistName {
      return 0x18d90;
}

// IMP 0x000094ec  types @16@0:8
- (id)specifiers {
      long lVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      ID IVar5;
      undefined8 extraout_x1;
      SEL extraout_x1_00;
      long lVar6;
      undefined auVar7 [16];

      lVar6 = (long)*(int *)PTR__OBJC_IVAR___PSListController__specifiers_00018060;
      lVar1 = *(long *)(self + lVar6);
      if (lVar1 == 0) {
        objc_msgSend_loadSpecifiersFromPlistName_target_(self,_cmd,&cf_Disable,self);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        uVar3 = objc_msgSend_mutableCopy();
        _objc_release(uVar2);
        objc_msgSend_loadSpecifiersFromPlistName_target_(self,extraout_x1,&cf_Hide,self);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        auVar7 = objc_msgSend_count();
        if (auVar7._0_8_ != 0) {
          objc_msgSend_addObjectsFromArray_(uVar3,auVar7._8_8_,uVar2);
        }
        uVar4 = *(undefined8 *)(self + lVar6);
        *(undefined8 *)(self + lVar6) = uVar3;
        _objc_release(uVar4);
        _objc_release(uVar2);
        lVar1 = *(long *)(self + lVar6);
        _cmd = extraout_x1_00;
      }
      IVar5 = _objc_retainAutoreleaseReturnValue(lVar1,_cmd);
      return IVar5;
}

// IMP 0x000095a0  types v16@0:8
- (void)viewDidLoad {
      undefined auVar1 [16];
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_0001e008;
      local_30 = self;
      SystemBoxRootListController::SystemBoxRootListController__viewDidLoad
                ((ID)&local_30,(SEL)PTR_s_viewDidLoad_0001de58);
      objc_msgSend_setTitle_(self);
      objc_msgSend_navigationItem(self);
      auVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setTitle_(auVar1._0_8_,auVar1._8_8_,&cf_y_u);
      _objc_release(auVar1._0_8_);
      return;
}

@end
