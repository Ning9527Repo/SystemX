//
//  LGClockMotionTracker.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "LGClockMotionTracker.h"

@implementation LGClockMotionTracker

// IMP 0x00008ee4  types @16@0:8
- (id)init {
      ID IVar1;
      undefined8 uVar2;
      undefined8 extraout_x1;
      undefined8 uVar3;
      undefined auVar4 [16];
      ID local_40;
      undefined *puStack_38;

      puStack_38 = PTR_PTR_00055c20;
      local_40 = self;
      auVar4 = _objc_msgSendSuper2(&local_40,PTR_s_init_00055310);
      IVar1 = auVar4._0_8_;
      if (IVar1 != 0) {
        objc_msgSend_displayLinkWithTarget_selector_
                  (PTR__OBJC_CLASS___CADisplayLink_00055af8,auVar4._8_8_,IVar1,PTR_s_tick__000559e0);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        uVar3 = *(undefined8 *)(IVar1 + 8);
        *(undefined8 *)(IVar1 + 8) = uVar2;
        _objc_release(uVar3);
        objc_msgSend_mainScreen(PTR__OBJC_CLASS___UIScreen_00055b00);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        auVar4 = objc_msgSend_maximumFramesPerSecond();
        objc_msgSend_setPreferredFramesPerSecond_(*(undefined8 *)(IVar1 + 8),auVar4._8_8_,auVar4._0_8_);
        _objc_release(uVar2);
        objc_msgSend_setPaused_(*(undefined8 *)(IVar1 + 8),extraout_x1,1);
        uVar2 = *(undefined8 *)(IVar1 + 8);
        objc_msgSend_mainRunLoop(PTR__OBJC_CLASS___NSRunLoop_00055b08);
        auVar4 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_addToRunLoop_forMode_
                  (uVar2,auVar4._8_8_,auVar4._0_8_,*(undefined8 *)PTR__NSRunLoopCommonModes_000501f8);
        _objc_release(auVar4._0_8_);
        _objc_retain(IVar1);
      }
      _objc_release(IVar1);
      return IVar1;
}

// IMP 0x00008fec  types v16@0:8
- (void)trackMotion {
      double dVar1;
      undefined auVar2 [16];

      dVar1 = (double)_CACurrentMediaTime();
      objc_msgSend_setDeadline_(dVar1 + DAT_0001e280,self);
      objc_msgSend_displayLink(self);
      auVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setPreferredFramesPerSecond_(auVar2._0_8_,auVar2._8_8_,0x78);
      _objc_release(auVar2._0_8_);
      objc_msgSend_displayLink(self);
      auVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setPaused_(auVar2._0_8_,auVar2._8_8_,0);
      _objc_release(auVar2._0_8_);
      return;
}

// IMP 0x00009064  types v24@0:8@16
- (void)tick:(id)tick {
      uint uVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      long lVar5;
      long lVar6;
      long lVar7;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      long lVar8;
      undefined8 uVar9;
      uint uVar10;
      long lVar11;
      undefined extraout_b0;
      undefined extraout_b0_00;
      undefined extraout_var;
      undefined extraout_var_00;
      undefined extraout_var_01;
      undefined extraout_var_02;
      undefined extraout_var_03;
      undefined extraout_var_04;
      undefined extraout_var_05;
      undefined extraout_var_06;
      undefined extraout_var_07;
      undefined extraout_var_08;
      undefined extraout_var_09;
      undefined extraout_var_10;
      undefined extraout_var_11;
      undefined extraout_var_12;
      undefined auVar12 [16];
      undefined8 local_140;
      long lStack_138;
      long *local_130;
      undefined8 uStack_128;
      undefined8 local_120;
      undefined8 uStack_118;
      undefined8 uStack_110;
      undefined8 uStack_108;
      undefined auStack_100 [128];
      long local_80;

      local_80 = *(long *)PTR____stack_chk_guard_000502b0;
      uVar2 = _objc_retain(tick);
      _CACurrentMediaTime();
      objc_msgSend_deadline(self);
      lStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      local_130 = (long *)0x0;
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      FUN_0000926c();
      uVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_allObjects();
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      lVar5 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar4,extraout_x1,&local_140,auStack_100,0x10);
      if (lVar5 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        lVar11 = *local_130;
        do {
          lVar8 = 0;
          do {
            if (*local_130 != lVar11) {
              _objc_enumerationMutation(uVar4);
            }
            uVar9 = *(undefined8 *)(lStack_138 + lVar8 * 8);
            objc_msgSend_host(uVar9);
            uVar3 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_window();
            lVar6 = _objc_retainAutoreleasedReturnValue();
            if (lVar6 == 0) {
              _objc_release(uVar3);
              uVar3 = extraout_x1_02;
            }
            else {
              objc_msgSend_glassView(uVar9);
              lVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_release();
              _objc_release(lVar6);
              _objc_release(uVar3);
              uVar3 = extraout_x1_00;
              if (lVar7 != 0) {
                objc_msgSend_updatePullBlur(uVar9);
                uVar1 = objc_msgSend_pullBlurActive(uVar9);
                uVar10 = uVar10 | uVar1;
                auVar12 = objc_msgSend_applying(uVar9);
                uVar3 = auVar12._8_8_;
                if ((auVar12 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                  objc_msgSend_applyReason_(uVar9,uVar3,&cf_motion);
                  uVar3 = extraout_x1_01;
                }
              }
            }
            lVar8 = lVar8 + 1;
          } while (lVar5 != lVar8);
          lVar5 = objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar4,uVar3,&local_140,auStack_100,0x10);
        } while (lVar5 != 0);
      }
      _objc_release(uVar4);
      if (((double)CONCAT17(extraout_var_12,
                            CONCAT16(extraout_var_10,
                                     CONCAT15(extraout_var_08,
                                              CONCAT14(extraout_var_06,
                                                       CONCAT13(extraout_var_04,
                                                                CONCAT12(extraout_var_02,
                                                                         CONCAT11(extraout_var_00,
                                                                                  extraout_b0_00)))))))
           <= (double)CONCAT17(extraout_var_11,
                               CONCAT16(extraout_var_09,
                                        CONCAT15(extraout_var_07,
                                                 CONCAT14(extraout_var_05,
                                                          CONCAT13(extraout_var_03,
                                                                   CONCAT12(extraout_var_01,
                                                                            CONCAT11(extraout_var,
                                                                                     extraout_b0))))))))
         && ((uVar10 & 1) == 0)) {
        objc_msgSend_setPaused_(uVar2,extraout_x1_03,1);
      }
      _objc_release(uVar2);
      if (*(long *)PTR____stack_chk_guard_000502b0 != local_80) {
                        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
}

// IMP 0x000092ac  types @16@0:8
- (id)displayLink {
      return *(ID *)(self + 8);
}

// IMP 0x000092b4  types v24@0:8@16
- (void)setDisplayLink:(id)setDisplayLink {
      _objc_storeStrong(self + 8,setDisplayLink);
      return;
}

// IMP 0x000092c0  types d16@0:8
- (double)deadline {
      return *(double *)(self + 0x10);
}

// IMP 0x000092c8  types v24@0:8d16
- (void)setDeadline:(double)setDeadline {
      *(double *)(self + 0x10) = setDeadline;
      return;
}

// IMP 0x000092d0  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + 8,0);
      return;
}

@end
