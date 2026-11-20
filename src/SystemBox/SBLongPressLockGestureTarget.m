//
//  SBLongPressLockGestureTarget.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBLongPressLockGestureTarget.h"

@implementation SBLongPressLockGestureTarget

// IMP 0x0000651c  types B24@0:8@16
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizerShouldBegin {
      return (bool)(DAT_00070498 != '\0' && DAT_000703f8 == gestureRecognizerShouldBegin);
}

// IMP 0x0000653c  types B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch {
      undefined8 uVar1;
      long lVar2;
      long lVar3;
      ulong uVar4;
      long lVar5;
      bool bVar6;

      uVar1 = _objc_retain(shouldReceiveTouch);
      if (DAT_00070498 == '\0' || DAT_000703f8 != gestureRecognizer) {
        bVar6 = 0;
      }
      else {
        objc_msgSend_view(uVar1);
        lVar2 = _objc_retainAutoreleasedReturnValue();
        lVar3 = _NSClassFromString(&cf_SBIconView);
        if (lVar2 == 0) {
          bVar6 = 1;
        }
        else {
          do {
            if ((lVar3 != 0) && (uVar4 = _objc_opt_isKindOfClass(lVar2,lVar3), (uVar4 & 1) != 0)) {
              bVar6 = 0;
              goto LAB_000065f4;
            }
            objc_msgSend_superview(lVar2);
            lVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            lVar2 = lVar5;
          } while (lVar5 != 0);
          bVar6 = 1;
    LAB_000065f4:
          _objc_release(lVar2);
        }
      }
      _objc_release(uVar1);
      return bVar6;
}

// IMP 0x00006640  types v24@0:8@16
- (void)handleLongPressToLock:(id)handleLongPressToLock {
      undefined8 uVar1;
      long lVar2;
      undefined8 uVar3;
      ulong uVar4;

      uVar1 = _objc_retain(handleLongPressToLock);
      if ((DAT_00070498 != '\0') && (lVar2 = objc_msgSend_state(uVar1), lVar2 == 1)) {
        if (DAT_000717a0 == 0) {
          DAT_000717a0 = _objc_getClass("SpringBoard");
        }
        _objc_retainAutorelease();
        objc_msgSend_sharedApplication();
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar4 = _objc_opt_respondsToSelector(uVar3,PTR_s__simulateLockButtonPress_0006da18);
        if ((uVar4 & 1) != 0) {
          objc_msgSend__simulateLockButtonPress(uVar3);
        }
        _objc_release(uVar3);
      }
      _objc_release(uVar1);
      return;
}

@end
