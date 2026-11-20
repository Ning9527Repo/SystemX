//
//  SBHomeHalfPullGestureTarget.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBHomeHalfPullGestureTarget.h"

@implementation SBHomeHalfPullGestureTarget

// IMP 0x00005174  types B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch {
      char cVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      ulong uVar4;
      long lVar5;
      undefined8 uVar6;
      undefined8 uVar7;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      bool bVar8;
      double dVar9;
      double dVar10;

      uVar2 = _objc_retain(gestureRecognizer);
      uVar3 = _objc_retain(shouldReceiveTouch);
      uVar4 = FUN_000040bc();
      if ((uVar4 & 1) == 0) {
        objc_msgSend_view(uVar2);
        lVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          objc_msgSend_view(uVar2);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_window();
          lVar5 = _objc_retainAutoreleasedReturnValue();
          if (lVar5 == 0) {
            objc_msgSend_view(uVar2);
            uVar7 = _objc_retainAutoreleasedReturnValue();
          }
          else {
            uVar7 = _objc_retain(lVar5);
          }
          _objc_release(lVar5);
          _objc_release(uVar6);
          dVar9 = (double)objc_msgSend_locationInView_(uVar3,extraout_x1,uVar7);
          objc_msgSend_bounds(uVar7);
          dVar10 = (double)_CGRectGetWidth();
          bVar8 = 0;
          if ((((ABS(dVar9) != INFINITY) && (0.0 < dVar10)) && (0.0 <= dVar9)) && (dVar9 <= dVar10)) {
            objc_msgSend_setRightHalf_(self,extraout_x1_00,dVar10 * 0.5 <= dVar9);
            uVar4 = objc_msgSend_rightHalf(self);
            cVar1 = DAT_000706f8;
            if ((uVar4 & 1) != 0) {
              cVar1 = DAT_000706f9;
            }
            if (cVar1 == '\0') {
              uVar4 = objc_msgSend_rightHalf(self);
              cVar1 = DAT_000706fa;
              if ((uVar4 & 1) != 0) {
                cVar1 = DAT_000706fb;
              }
              if (cVar1 == '\0') {
                bVar8 = 0;
                goto LAB_000052dc;
              }
            }
            bVar8 = 1;
          }
    LAB_000052dc:
          _objc_release(uVar7);
          goto LAB_000052e4;
        }
      }
      bVar8 = 0;
    LAB_000052e4:
      _objc_release(uVar3);
      _objc_release(uVar2);
      return bVar8;
}

// IMP 0x000053e0  types B24@0:8@16
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizerShouldBegin {
      undefined8 uVar1;
      undefined8 uVar2;
      ulong uVar3;
      undefined8 uVar4;
      undefined8 uVar5;
      long lVar6;
      undefined8 extraout_x1;
      bool bVar7;
      double dVar8;
      double in_d1;
      undefined auVar9 [16];

      uVar1 = _objc_retain(gestureRecognizerShouldBegin);
      uVar2 = _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_0006f808);
      uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
      if ((uVar3 & 1) == 0) {
        bVar7 = 0;
      }
      else {
        uVar2 = _objc_retain(uVar1);
        objc_msgSend_view();
        auVar9 = _objc_retainAutoreleasedReturnValue();
        dVar8 = (double)objc_msgSend_velocityInView_(uVar2,auVar9._8_8_,auVar9._0_8_);
        _objc_release(auVar9._0_8_);
        if ((ABS(in_d1) <= 120.0) || (ABS(in_d1) <= ABS(dVar8) * 1.25)) {
          bVar7 = 0;
        }
        else {
          objc_msgSend_setDownward_(self,extraout_x1,0.0 < in_d1);
          uVar4 = objc_msgSend_rightHalf(self);
          uVar5 = objc_msgSend_downward(self);
          auVar9 = FUN_00005368(uVar4,uVar5);
          objc_msgSend_setAction_(self,auVar9._8_8_,auVar9._0_8_);
          lVar6 = objc_msgSend_action(self);
          bVar7 = (bool)(lVar6 != 0);
        }
        _objc_release(uVar2);
      }
      _objc_release(uVar1);
      return bVar7;
}

// IMP 0x00005538  types B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)shouldRecognizeSimultaneouslyWithGestureRecognizer {
      return 1;
}

// IMP 0x00005540  types v24@0:8@16
- (void)handleHomeHalfPull:(id)handleHomeHalfPull {
      int iVar1;
      undefined8 uVar2;
      long lVar3;
      ulong uVar4;
      undefined8 extraout_x1;
      undefined8 uVar5;
      undefined8 extraout_x1_00;
      double in_d1;
      double dVar6;
      undefined auVar7 [16];

      uVar2 = _objc_retain(handleHomeHalfPull);
      auVar7 = objc_msgSend_state();
      if (auVar7._0_8_ == 1) {
        objc_msgSend_setDidPresent_(self,auVar7._8_8_,0);
      }
      lVar3 = objc_msgSend_state(uVar2);
      if (((lVar3 == 2) && (uVar4 = objc_msgSend_didPresent(self), (uVar4 & 1) == 0)) &&
         (lVar3 = objc_msgSend_action(self), lVar3 != 0)) {
        objc_msgSend_view(uVar2);
        auVar7 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_translationInView_(uVar2,auVar7._8_8_,auVar7._0_8_);
        dVar6 = in_d1;
        _objc_release(auVar7._0_8_);
        objc_msgSend_view(uVar2);
        auVar7 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_velocityInView_(uVar2,auVar7._8_8_,auVar7._0_8_);
        _objc_release(auVar7._0_8_);
        iVar1 = objc_msgSend_downward(self);
        if (iVar1 == 0) {
          if ((in_d1 < -44.0) || (dVar6 < DAT_00053630)) goto LAB_0000564c;
        }
        else if ((44.0 < in_d1) || (DAT_00053628 < dVar6)) {
    LAB_0000564c:
          objc_msgSend_setDidPresent_(self,extraout_x1,1);
          lVar3 = objc_msgSend_action(self);
          if (lVar3 == 1) {
            FUN_000049d4();
          }
          else {
            FUN_000045c4();
          }
        }
      }
      auVar7 = objc_msgSend_state(uVar2);
      uVar5 = auVar7._8_8_;
      if (auVar7._0_8_ != 3) {
        auVar7 = objc_msgSend_state(uVar2);
        uVar5 = auVar7._8_8_;
        if (auVar7._0_8_ != 4) {
          auVar7 = objc_msgSend_state(uVar2);
          uVar5 = auVar7._8_8_;
          if (auVar7._0_8_ != 5) goto LAB_000056bc;
        }
      }
      objc_msgSend_setDidPresent_(self,uVar5,0);
      objc_msgSend_setAction_(self,extraout_x1_00,0);
    LAB_000056bc:
      _objc_release(uVar2);
      return;
}

// IMP 0x00005708  types B16@0:8
- (BOOL)rightHalf {
      return (bool)*(byte *)(self + 8);
}

// IMP 0x00005710  types v20@0:8B16
- (void)setRightHalf:(BOOL)setRightHalf {
      *(char *)(self + 8) = (char)setRightHalf;
      return;
}

// IMP 0x00005718  types B16@0:8
- (BOOL)downward {
      return (bool)*(byte *)(self + 9);
}

// IMP 0x00005720  types v20@0:8B16
- (void)setDownward:(BOOL)setDownward {
      *(char *)(self + 9) = (char)setDownward;
      return;
}

// IMP 0x00005728  types B16@0:8
- (BOOL)didPresent {
      return (bool)*(byte *)(self + 10);
}

// IMP 0x00005730  types v20@0:8B16
- (void)setDidPresent:(BOOL)setDidPresent {
      *(char *)(self + 10) = (char)setDidPresent;
      return;
}

// IMP 0x00005738  types Q16@0:8
- (unsigned long long)action {
      return *(unsigned_long_long *)(self + 0x10);
}

// IMP 0x00005740  types v24@0:8Q16
- (void)setAction:(unsigned long long)setAction {
      *(unsigned_long_long *)(self + 0x10) = setAction;
      return;
}

@end
