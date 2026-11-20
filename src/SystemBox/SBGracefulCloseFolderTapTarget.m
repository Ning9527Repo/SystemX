//
//  SBGracefulCloseFolderTapTarget.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBGracefulCloseFolderTapTarget.h"

@implementation SBGracefulCloseFolderTapTarget

// IMP 0x00009d30  types B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch {
      int iVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      ulong uVar5;
      long lVar6;
      long lVar7;
      long lVar8;
      long lVar9;
      long lVar10;
      undefined8 extraout_x1;
      bool bVar11;
      long lVar12;
      undefined8 in_d1;
      undefined auVar13 [16];

      uVar2 = _objc_retain(gestureRecognizer);
      uVar3 = _objc_retain(shouldReceiveTouch);
      uVar4 = _objc_opt_class(PTR__OBJC_CLASS___UITapGestureRecognizer_0006f890);
      uVar5 = _objc_opt_isKindOfClass(uVar2,uVar4);
      if ((uVar5 & 1) == 0) {
        bVar11 = 0;
        goto LAB_00009f14;
      }
      objc_msgSend_containerView(self);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = _objc_retain();
      lVar7 = _objc_retain(uVar3);
      bVar11 = 0;
      if (((lVar7 != 0) && (lVar6 != 0)) && (DAT_00071558 != '\0')) {
        lVar8 = objc_msgSend_tapCount(lVar7);
        if (lVar8 == 1) {
          uVar5 = _objc_opt_respondsToSelector(lVar6,PTR_s_folderView_0006e228);
          if ((uVar5 & 1) == 0) {
            lVar8 = 0;
    LAB_00009ef0:
            bVar11 = 0;
          }
          else {
            objc_msgSend_folderView(lVar6);
            lVar8 = _objc_retainAutoreleasedReturnValue();
            if ((lVar8 == 0) ||
               ((uVar5 = _objc_opt_respondsToSelector(lVar8,PTR_s_isEditing_0006e740), (uVar5 & 1) != 0
                && (uVar5 = objc_msgSend_isEditing(lVar8), (uVar5 & 1) != 0)))) goto LAB_00009ef0;
            auVar13 = _objc_opt_respondsToSelector(lVar8,PTR_s_isScrolling_0006e810);
            uVar4 = auVar13._8_8_;
            if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) {
              auVar13 = objc_msgSend_isScrolling(lVar8);
              uVar4 = auVar13._8_8_;
              if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00009ef0;
            }
            uVar4 = objc_msgSend_locationInView_(lVar7,uVar4,lVar8);
            uVar5 = _objc_opt_respondsToSelector(lVar8,PTR_s_locationCountsAsInsideFolder__0006e948);
            if (((uVar5 & 1) != 0) &&
               (uVar5 = objc_msgSend_locationCountsAsInsideFolder_(uVar4,in_d1,lVar8), (uVar5 & 1) == 0)
               ) goto LAB_00009ef0;
            objc_msgSend_bounds(lVar8);
            iVar1 = _CGRectContainsPoint();
            if (iVar1 == 0) goto LAB_00009ef0;
            objc_msgSend_hitTest_withEvent_(uVar4,in_d1,lVar8,extraout_x1,0);
            lVar9 = _objc_retainAutoreleasedReturnValue();
            if (lVar9 == 0) {
              objc_msgSend_view(lVar7);
              _objc_retainAutoreleasedReturnValue();
              lVar9 = _objc_retain();
              _objc_retain(lVar8);
              if (lVar9 != 0) goto LAB_00009f70;
              lVar9 = 0;
              bVar11 = 1;
            }
            else {
              lVar9 = _objc_retain();
              _objc_retain(lVar8);
    LAB_00009f70:
              uVar5 = FUN_00029ec0(lVar9,&cf_SBIconView);
              if ((((uVar5 & 1) == 0) &&
                  (uVar5 = FUN_00029ec0(lVar9,&cf_SBIconListPageControl), (uVar5 & 1) == 0)) &&
                 (uVar5 = FUN_00029ec0(lVar9,&cf_SBFolderTitleTextField), (uVar5 & 1) == 0)) {
                lVar9 = _objc_retain(lVar9);
                if (lVar9 == lVar8) {
                  bVar11 = 1;
                  lVar10 = lVar8;
                }
                else {
                  bVar11 = 1;
                  lVar12 = lVar9;
                  while( true ) {
                    uVar4 = _objc_opt_class(PTR__OBJC_CLASS___UIControl_0006f810);
                    uVar5 = _objc_opt_isKindOfClass(lVar12,uVar4);
                    if ((uVar5 & 1) != 0) break;
                    uVar4 = _objc_opt_class(PTR__OBJC_CLASS___UITextField_0006f908);
                    uVar5 = _objc_opt_isKindOfClass(lVar12,uVar4);
                    if ((uVar5 & 1) != 0) break;
                    objc_msgSend_superview(lVar12);
                    lVar10 = _objc_retainAutoreleasedReturnValue();
                    _objc_release(lVar12);
                    if ((lVar10 == 0) || (lVar12 = lVar10, lVar10 == lVar8)) goto LAB_0000a078;
                  }
                  bVar11 = 0;
                  lVar10 = lVar12;
                }
    LAB_0000a078:
                _objc_release(lVar10);
              }
              else {
                bVar11 = 0;
              }
            }
            _objc_release(lVar8);
            _objc_release(lVar9);
            _objc_release(lVar9);
          }
          _objc_release(lVar8);
        }
        else {
          bVar11 = 0;
        }
      }
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar6);
    LAB_00009f14:
      _objc_release(uVar3);
      _objc_release(uVar2);
      return bVar11;
}

// IMP 0x0000a114  types v24@0:8@16
- (void)handleGracefulCloseFolderTap:(id)handleGracefulCloseFolderTap {
      undefined *puVar1;
      undefined8 uVar2;
      long lVar3;
      ulong uVar4;
      long lVar5;
      undefined8 uVar6;
      undefined8 uVar7;
      long lVar8;
      undefined8 uVar9;
      undefined auVar10 [16];

      uVar2 = _objc_retain(handleGracefulCloseFolderTap);
      lVar3 = objc_msgSend_state();
      if (lVar3 == 3) {
        objc_msgSend_containerView(self);
        _objc_retainAutoreleasedReturnValue();
        lVar3 = _objc_retain();
        if (((lVar3 != 0) && (DAT_00071558 != '\0')) &&
           (uVar4 = _objc_opt_respondsToSelector(lVar3,PTR_s_folderView_0006e228), (uVar4 & 1) != 0)) {
          objc_msgSend_folderView(lVar3);
          lVar5 = _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            uVar4 = _objc_opt_respondsToSelector(lVar5,PTR_s_delegate_0006e0a0);
            if ((uVar4 & 1) == 0) {
              uVar6 = 0;
            }
            else {
              objc_msgSend_delegate(lVar5);
              uVar6 = _objc_retainAutoreleasedReturnValue();
            }
            puVar1 = PTR_s_folderViewShouldClose_withPinchG_0006e230;
            uVar4 = _objc_opt_respondsToSelector(uVar6,PTR_s_folderViewShouldClose_withPinchG_0006e230);
            if ((uVar4 & 1) == 0) {
              uVar7 = _NSClassFromString(&cf_SBIconController);
              puVar1 = PTR_s_sharedInstance_0006f400;
              uVar4 = _objc_opt_respondsToSelector(uVar7,PTR_s_sharedInstance_0006f400);
              if ((uVar4 & 1) != 0) {
                _objc_msgSend(uVar7,puVar1);
                uVar7 = _objc_retainAutoreleasedReturnValue();
                puVar1 = PTR_s__openFolderController_0006d988;
                uVar4 = _objc_opt_respondsToSelector(uVar7,PTR_s__openFolderController_0006d988);
                if ((uVar4 & 1) == 0) {
                  lVar8 = 0;
                }
                else {
                  _objc_msgSend(uVar7,puVar1);
                  lVar8 = _objc_retainAutoreleasedReturnValue();
                  puVar1 = PTR_s__closeFolderController_animated__0006d8a8;
                  if (lVar8 != 0) {
                    uVar4 = _objc_opt_respondsToSelector
                                      (uVar7,PTR_s__closeFolderController_animated__0006d8a8);
                    if ((uVar4 & 1) == 0) {
                      objc_msgSend_iconManager(uVar7);
                      uVar9 = _objc_retainAutoreleasedReturnValue();
                      uVar4 = _objc_opt_respondsToSelector
                                        (uVar9,PTR_s_closeFolderAnimated_withCompleti_0006de90);
                      _objc_release(uVar9);
                      if ((uVar4 & 1) != 0) {
                        objc_msgSend_iconManager(uVar7);
                        auVar10 = _objc_retainAutoreleasedReturnValue();
                        objc_msgSend_closeFolderAnimated_withCompletion_
                                  (auVar10._0_8_,auVar10._8_8_,1,0);
                        _objc_release(auVar10._0_8_);
                      }
                    }
                    else {
                      _objc_msgSend(uVar7,puVar1,lVar8,1,0);
                    }
                  }
                }
                _objc_release(lVar8);
                _objc_release(uVar7);
              }
            }
            else {
              _objc_msgSend(uVar6,puVar1,lVar5,0);
            }
            _objc_release(uVar6);
            _objc_release(lVar5);
          }
        }
        _objc_release(lVar3);
        _objc_release(lVar3);
      }
      _objc_release(uVar2);
      return;
}

// IMP 0x0000a3e8  types @16@0:8
- (id)containerView {
      ID IVar1;

      _objc_loadWeakRetained(self + 8);
      IVar1 = _objc_autoreleaseReturnValue();
      return IVar1;
}

// IMP 0x0000a400  types v24@0:8@16
- (void)setContainerView:(id)setContainerView {
      _objc_storeWeak(self + 8,setContainerView);
      return;
}

// IMP 0x0000a40c  types v16@0:8
- (void).cxx_destruct {
      _objc_destroyWeak(self + 8);
      return;
}

@end
