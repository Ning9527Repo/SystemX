//
//  SBHomePullUpNotificationCenterGestureTarget.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBHomePullUpNotificationCenterGestureTarget.h"

@implementation SBHomePullUpNotificationCenterGestureTarget

// IMP 0x00004694  types B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch {
      uint uVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      ulong uVar4;

      uVar2 = _objc_retain(gestureRecognizer);
      uVar3 = _objc_retain(shouldReceiveTouch);
      uVar4 = FUN_000040bc();
      if ((uVar4 & 1) == 0) {
        uVar1 = FUN_00004204(uVar3,uVar2,0);
        uVar1 = uVar1 ^ 1;
      }
      else {
        uVar1 = 0;
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
      return uVar1;
}

// IMP 0x00004724  types B24@0:8@16
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizerShouldBegin {
      undefined8 uVar1;
      undefined8 uVar2;
      ulong uVar3;
      uint uVar4;
      double dVar5;
      double in_d1;
      undefined auVar6 [16];

      uVar1 = _objc_retain(gestureRecognizerShouldBegin);
      if (DAT_00070492 != '\0' && DAT_00070491 == '\0') {
        uVar2 = _objc_opt_class(PTR__OBJC_CLASS___UIPanGestureRecognizer_0006f808);
        uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
        if ((uVar3 & 1) != 0) {
          uVar2 = _objc_retain(uVar1);
          objc_msgSend_view();
          auVar6 = _objc_retainAutoreleasedReturnValue();
          dVar5 = (double)objc_msgSend_velocityInView_(uVar2,auVar6._8_8_,auVar6._0_8_);
          _objc_release(auVar6._0_8_);
          uVar4 = (uint)(in_d1 < -120.0 && ABS(dVar5) * 1.25 < ABS(in_d1));
          _objc_release(uVar2);
          goto LAB_000047f0;
        }
      }
      uVar4 = 0;
    LAB_000047f0:
      _objc_release(uVar1);
      return uVar4;
}

// IMP 0x00004848  types B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)shouldRecognizeSimultaneouslyWithGestureRecognizer {
      return 1;
}

// IMP 0x00004850  types v24@0:8@16
- (void)handleHomePullUpNC:(id)handleHomePullUpNC {
      undefined8 uVar1;
      long lVar2;
      ulong uVar3;
      undefined8 extraout_x1;
      undefined8 uVar4;
      double in_d1;
      double dVar5;
      undefined auVar6 [16];

      uVar1 = _objc_retain(handleHomePullUpNC);
      if (DAT_00070492 != '\0' && DAT_00070491 == '\0') {
        auVar6 = objc_msgSend_state(uVar1);
        if (auVar6._0_8_ == 1) {
          objc_msgSend_setDidPresent_(self,auVar6._8_8_,0);
        }
        lVar2 = objc_msgSend_state(uVar1);
        if ((lVar2 == 2) && (uVar3 = objc_msgSend_didPresent(self), (uVar3 & 1) == 0)) {
          objc_msgSend_view(uVar1);
          auVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_translationInView_(uVar1,auVar6._8_8_,auVar6._0_8_);
          dVar5 = in_d1;
          _objc_release(auVar6._0_8_);
          objc_msgSend_view(uVar1);
          auVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_velocityInView_(uVar1,auVar6._8_8_,auVar6._0_8_);
          _objc_release(auVar6._0_8_);
          if ((in_d1 < -44.0) || (dVar5 < DAT_00053630)) {
            objc_msgSend_setDidPresent_(self,extraout_x1,1);
            FUN_000049d4();
          }
        }
        auVar6 = objc_msgSend_state(uVar1);
        uVar4 = auVar6._8_8_;
        if (auVar6._0_8_ != 3) {
          auVar6 = objc_msgSend_state(uVar1);
          uVar4 = auVar6._8_8_;
          if (auVar6._0_8_ != 4) {
            auVar6 = objc_msgSend_state(uVar1);
            uVar4 = auVar6._8_8_;
            if (auVar6._0_8_ != 5) goto LAB_0000498c;
          }
        }
        objc_msgSend_setDidPresent_(self,uVar4,0);
      }
    LAB_0000498c:
      _objc_release(uVar1);
      return;
}

// IMP 0x00004a94  types B16@0:8
- (BOOL)didPresent {
      return (bool)*(byte *)(self + 8);
}

// IMP 0x00004a9c  types v20@0:8B16
- (void)setDidPresent:(BOOL)setDidPresent {
      *(char *)(self + 8) = (char)setDidPresent;
      return;
}

@end
