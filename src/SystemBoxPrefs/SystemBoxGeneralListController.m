//
//  SystemBoxGeneralListController.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SystemBoxGeneralListController.h"

@implementation SystemBoxGeneralListController

// IMP 0x00009248  types @16@0:8
- (id)sb_specifierPlistName {
      return 0x18c90;
}

// IMP 0x00009254  types @16@0:8
- (id)specifiers {
      long *plVar1;
      undefined *puVar2;
      int iVar3;
      long lVar4;
      undefined8 uVar5;
      undefined8 uVar6;
      ID IVar7;
      undefined8 uVar8;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      SEL extraout_x1_01;
      undefined8 uVar9;
      long lVar10;
      long lVar11;
      undefined auVar12 [16];
      undefined auVar13 [16];
      undefined auVar14 [16];
      undefined auVar15 [16];
      undefined8 local_130;
      long lStack_128;
      long *local_120;
      undefined8 uStack_118;
      undefined8 local_110;
      undefined8 uStack_108;
      undefined8 uStack_100;
      undefined8 uStack_f8;
      undefined auStack_f0 [128];
      long local_70;

      local_70 = *(long *)PTR____stack_chk_guard_000180e0;
      plVar1 = (long *)(self + (long)*(int *)PTR__OBJC_IVAR___PSListController__specifiers_00018060);
      lVar4 = *plVar1;
      if (lVar4 == 0) {
        objc_msgSend_sb_specifierPlistName(self);
        auVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_loadSpecifiersFromPlistName_target_(self,auVar12._8_8_,auVar12._0_8_,self);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        uVar6 = objc_msgSend_mutableCopy();
        _objc_release(uVar5);
        _objc_release(auVar12._0_8_);
        iVar3 = FUN_0000f208(2,0x11,0,0);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_0001df88;
        if (iVar3 == 0) {
          auVar12 = objc_msgSend_count(uVar6);
          objc_msgSend_arrayWithCapacity_(puVar2,auVar12._8_8_,auVar12._0_8_);
          lVar4 = _objc_retainAutoreleasedReturnValue();
          lStack_128 = 0;
          local_130 = 0;
          uStack_118 = 0;
          local_120 = (long *)0x0;
          uStack_108 = 0;
          local_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          auVar12 = _objc_retain(uVar6);
          uVar5 = auVar12._0_8_;
          auVar12 = objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar5,auVar12._8_8_,&local_130,auStack_f0,0x10);
          if (auVar12._0_8_ != 0) {
            lVar10 = *local_120;
            do {
              uVar8 = auVar12._8_8_;
              lVar11 = 0;
              do {
                if (*local_120 != lVar10) {
                  _objc_enumerationMutation(uVar5);
                  uVar8 = extraout_x1;
                }
                uVar9 = *(undefined8 *)(lStack_128 + lVar11 * 8);
                objc_msgSend_propertyForKey_(uVar9,uVar8,&cf_key);
                auVar13 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_propertyForKey_(uVar9,auVar13._8_8_,&cf_id);
                auVar14 = _objc_retainAutoreleasedReturnValue();
                auVar15 = objc_msgSend_isEqualToString_
                                    (auVar13._0_8_,auVar14._8_8_,&cf_force5GAStatusBar);
                if (((auVar15 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
                   (auVar15 = objc_msgSend_isEqualToString_
                                        (auVar14._0_8_,auVar15._8_8_,&cf_force5GAStatusBarGroup),
                   (auVar15 & (undefined  [16])0x1) == (undefined  [16])0x0)) {
                  objc_msgSend_addObject_(lVar4,auVar15._8_8_,uVar9);
                }
                _objc_release(auVar14._0_8_);
                _objc_release(auVar13._0_8_);
                lVar11 = lVar11 + 1;
                uVar8 = extraout_x1_00;
              } while (auVar12._0_8_ != lVar11);
              auVar12 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (uVar5,extraout_x1_00,&local_130,auStack_f0,0x10);
            } while (auVar12._0_8_ != 0);
          }
          _objc_release(uVar5);
          lVar10 = *plVar1;
          *plVar1 = lVar4;
          _objc_release(lVar10);
        }
        else {
          _objc_storeStrong(plVar1,uVar6);
        }
        _objc_release(uVar6);
        lVar4 = *plVar1;
        _cmd = extraout_x1_01;
      }
      if (*(long *)PTR____stack_chk_guard_000180e0 == local_70) {
        IVar7 = _objc_retainAutoreleaseReturnValue();
        return IVar7;
      }
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail(lVar4,_cmd);
}

@end
