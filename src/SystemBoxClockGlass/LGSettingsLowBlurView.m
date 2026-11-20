//
//  LGSettingsLowBlurView.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "LGSettingsLowBlurView.h"

@implementation LGSettingsLowBlurView

// IMP 0x00018eb8  types @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(id)initWithFrame {
      ID IVar1;
      undefined8 extraout_x1;
      undefined auVar2 [16];
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_00055c38;
      local_30 = self;
      auVar2 = _objc_msgSendSuper2(&local_30,PTR_s_initWithFrame__00055320);
      IVar1 = auVar2._0_8_;
      if (IVar1 != 0) {
        objc_msgSend_setUserInteractionEnabled_(IVar1,auVar2._8_8_,0);
        objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
        auVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setBackgroundColor_(IVar1,auVar2._8_8_,auVar2._0_8_);
        _objc_release(auVar2._0_8_);
        objc_msgSend_setOpaque_(IVar1,extraout_x1,0);
        *(undefined8 *)(IVar1 + (long)_lgBlurRadius) = 0x4008000000000000;
        objc_msgSend_lg_configure(IVar1);
        _objc_retain(IVar1);
      }
      _objc_release(IVar1);
      return IVar1;
}

// IMP 0x00018f6c  types v16@0:8
- (void)didMoveToWindow {
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_00055c38;
      local_30 = self;
      _objc_msgSendSuper2(&local_30,PTR_s_didMoveToWindow_00055210);
      objc_msgSend_lg_configure(self);
      return;
}

// IMP 0x00018fb4  types v16@0:8
- (void)layoutSubviews {
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_00055c38;
      local_30 = self;
      _objc_msgSendSuper2(&local_30,PTR_s_layoutSubviews_000553d8);
      objc_msgSend_lg_configure(self);
      return;
}

// IMP 0x00018ffc  types v24@0:8d16
- (void)setLgBlurRadius:(double)setLgBlurRadius {
      if (ABS(*(double *)(self + (long)_lgBlurRadius) - setLgBlurRadius) < DAT_0001e290) {
        return;
      }
      *(double *)(self + (long)_lgBlurRadius) = setLgBlurRadius;
      objc_msgSend_lg_configure();
      return;
}

// IMP 0x00019028  types v16@0:8
- (void)lg_configure {
      long lVar1;
      undefined8 uVar2;
      ulong uVar3;
      long lVar4;
      undefined8 uVar5;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined auVar6 [16];
      long local_50;
      long local_48;

      local_48 = *(long *)PTR____stack_chk_guard_000502b0;
      lVar1 = _NSClassFromString(&cf_CABackdropLayer);
      if (lVar1 != 0) {
        objc_msgSend_layer(self);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        uVar3 = _objc_opt_isKindOfClass(uVar2,lVar1);
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          lVar1 = (long)_lgBlurRadius;
          if (*(double *)(self + lVar1) <= 0.0) {
            objc_msgSend_layer(self);
            auVar6 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setFilters_(auVar6._0_8_,auVar6._8_8_,0);
            if (*(long *)PTR____stack_chk_guard_000502b0 == local_48) {
              _objc_release(auVar6._0_8_);
              return;
            }
            goto LAB_0001932c;
          }
          objc_msgSend_layer(self);
          auVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setValue_forKey_
                    (auVar6._0_8_,auVar6._8_8_,PTR____kCFBooleanFalse_00050288,
                     &cf_layerUsesCoreImageFilters);
          _objc_release(auVar6._0_8_);
          objc_msgSend_layer(self);
          auVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setValue_forKey_
                    (auVar6._0_8_,auVar6._8_8_,PTR____kCFBooleanTrue_00050290,&cf_windowServerAware);
          _objc_release(auVar6._0_8_);
          objc_msgSend_layer(self);
          auVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_valueForKey_(auVar6._0_8_,auVar6._8_8_,&cf_groupName);
          lVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(auVar6._0_8_);
          if (lVar4 == 0) {
            objc_msgSend_layer(self);
            uVar2 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_UUID(PTR__OBJC_CLASS___NSUUID_00055be8);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_UUIDString();
            auVar6 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setValue_forKey_(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_groupName);
            _objc_release(auVar6._0_8_);
            _objc_release(uVar5);
            _objc_release(uVar2);
          }
          lVar4 = _NSClassFromString(&cf_CAFilter);
          uVar2 = _NSSelectorFromString(&cf_filterWithName_);
          if ((lVar4 != 0) && (uVar3 = _objc_opt_respondsToSelector(lVar4,uVar2), (uVar3 & 1) != 0)) {
            _objc_msgSend(lVar4,uVar2,&cf_gaussianBlur);
            lVar4 = _objc_retainAutoreleasedReturnValue();
            if (lVar4 != 0) {
              objc_msgSend_numberWithDouble_
                        (*(undefined8 *)(self + lVar1),PTR__OBJC_CLASS___NSNumber_00055ae0);
              auVar6 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setValue_forKey_(lVar4,auVar6._8_8_,auVar6._0_8_,&cf_inputRadius);
              _objc_release(auVar6._0_8_);
              objc_msgSend_setValue_forKey_
                        (lVar4,extraout_x1,PTR____kCFBooleanTrue_00050290,&cf_inputNormalizeEdges);
              local_50 = lVar4;
              objc_msgSend_arrayWithObjects_count_
                        (PTR__OBJC_CLASS___NSArray_00055ad0,extraout_x1_00,&local_50,1);
              uVar2 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_layer(self);
              auVar6 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setFilters_(auVar6._0_8_,auVar6._8_8_,uVar2);
              _objc_release(auVar6._0_8_);
              _objc_release(uVar2);
              _objc_release(lVar4);
            }
          }
        }
      }
      if (*(long *)PTR____stack_chk_guard_000502b0 == local_48) {
        return;
      }
    LAB_0001932c:
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
}

// IMP 0x00019354  types d16@0:8
- (double)lgBlurRadius {
      return *(double *)(self + (long)_lgBlurRadius);
}

@end
