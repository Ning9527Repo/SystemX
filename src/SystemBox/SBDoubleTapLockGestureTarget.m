//
//  SBDoubleTapLockGestureTarget.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBDoubleTapLockGestureTarget.h"

@implementation SBDoubleTapLockGestureTarget

// IMP 0x00005748  types B24@0:8@16
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizerShouldBegin {
      return (bool)(DAT_00070495 != '\0' && DAT_000703e0 == gestureRecognizerShouldBegin);
}

// IMP 0x00005768  types B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch {
      undefined8 uVar1;
      long lVar2;
      long lVar3;
      ulong uVar4;
      undefined8 uVar5;
      long lVar6;
      bool bVar7;

      uVar1 = _objc_retain(shouldReceiveTouch);
      if (DAT_00070495 == '\0' || DAT_000703e0 != gestureRecognizer) {
        bVar7 = 0;
      }
      else {
        objc_msgSend_view(uVar1);
        lVar2 = _objc_retainAutoreleasedReturnValue();
        lVar3 = _NSClassFromString(&cf_SBIconView);
        if (lVar2 == 0) {
          bVar7 = 1;
        }
        else {
          do {
            if ((lVar3 != 0) && (uVar4 = _objc_opt_isKindOfClass(lVar2,lVar3), (uVar4 & 1) != 0)) {
    LAB_00005834:
              bVar7 = 0;
              goto LAB_00005838;
            }
            uVar5 = _objc_opt_class(PTR__OBJC_CLASS___UIControl_0006f810);
            uVar4 = _objc_opt_isKindOfClass(lVar2,uVar5);
            if ((uVar4 & 1) != 0) goto LAB_00005834;
            objc_msgSend_superview(lVar2);
            lVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            lVar2 = lVar6;
          } while (lVar6 != 0);
          bVar7 = 1;
    LAB_00005838:
          _objc_release(lVar2);
        }
      }
      _objc_release(uVar1);
      return bVar7;
}

// IMP 0x00005890  types v24@0:8@16
- (void)handleDoubleTapToLock:(id)handleDoubleTapToLock {
      undefined8 uVar1;
      long lVar2;
      undefined8 uVar3;
      ulong uVar4;

      uVar1 = _objc_retain(handleDoubleTapToLock);
      if ((DAT_00070495 != '\0') && (lVar2 = objc_msgSend_state(uVar1), lVar2 == 3)) {
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
