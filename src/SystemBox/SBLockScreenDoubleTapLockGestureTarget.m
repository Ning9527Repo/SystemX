//
//  SBLockScreenDoubleTapLockGestureTarget.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBLockScreenDoubleTapLockGestureTarget.h"

@implementation SBLockScreenDoubleTapLockGestureTarget

// IMP 0x00006308  types B24@0:8@16
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizerShouldBegin {
      uint uVar1;

      if ((DAT_00070495 == '\0' || DAT_00070497 != '\0') || DAT_000703e8 != gestureRecognizerShouldBegin) {
        uVar1 = 0;
      }
      else {
        uVar1 = FUN_00005a9c();
        uVar1 = uVar1 ^ 1;
      }
      return uVar1;
}

// IMP 0x00006350  types B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch {
      uint uVar1;
      long lVar2;
      undefined8 uVar3;
      ulong uVar4;
      undefined8 uVar5;

      lVar2 = _objc_retain(gestureRecognizer);
      uVar3 = _objc_retain(shouldReceiveTouch);
      if (((DAT_00070495 != '\0' && DAT_00070497 == '\0') && DAT_000703e8 == lVar2) &&
         (uVar4 = FUN_00005a9c(), (uVar4 & 1) == 0)) {
        objc_msgSend_view(uVar3);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        uVar4 = FUN_00005dbc();
        _objc_release(uVar5);
        if ((uVar4 & 1) == 0) {
          uVar1 = FUN_00005fb8(uVar3,lVar2);
          uVar1 = uVar1 ^ 1;
          goto LAB_000063d8;
        }
      }
      uVar1 = 0;
    LAB_000063d8:
      _objc_release(uVar3);
      _objc_release(lVar2);
      return uVar1;
}

// IMP 0x00006440  types v24@0:8@16
- (void)handleLockScreenDoubleTapToLock:(id)handleLockScreenDoubleTapToLock {
      undefined8 uVar1;
      long lVar2;
      ulong uVar3;
      undefined8 uVar4;

      uVar1 = _objc_retain(handleLockScreenDoubleTapToLock);
      if (((DAT_00070495 != '\0' && DAT_00070497 == '\0') &&
          (lVar2 = objc_msgSend_state(uVar1), lVar2 == 3)) && (uVar3 = FUN_00005a9c(), (uVar3 & 1) == 0)
         ) {
        if (DAT_000717a0 == 0) {
          DAT_000717a0 = _objc_getClass("SpringBoard");
        }
        _objc_retainAutorelease();
        objc_msgSend_sharedApplication();
        uVar4 = _objc_retainAutoreleasedReturnValue();
        uVar3 = _objc_opt_respondsToSelector(uVar4,PTR_s__simulateLockButtonPress_0006da18);
        if ((uVar3 & 1) != 0) {
          objc_msgSend__simulateLockButtonPress(uVar4);
        }
        _objc_release(uVar4);
      }
      _objc_release(uVar1);
      return;
}

@end
