//
//  SBKillBackgroundGestureTarget.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBKillBackgroundGestureTarget.h"

@implementation SBKillBackgroundGestureTarget

// IMP 0x00006704  types B24@0:8@16
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizerShouldBegin {
      return (bool)(DAT_000704a8 != '\0' && DAT_00070400 == gestureRecognizerShouldBegin);
}

// IMP 0x00006724  types B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch {
      undefined8 uVar1;
      long lVar2;
      long lVar3;
      ulong uVar4;
      long lVar5;
      bool bVar6;

      uVar1 = _objc_retain(shouldReceiveTouch);
      if (DAT_000704a8 == '\0' || DAT_00070400 != gestureRecognizer) {
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
              goto LAB_000067dc;
            }
            objc_msgSend_superview(lVar2);
            lVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar2);
            lVar2 = lVar5;
          } while (lVar5 != 0);
          bVar6 = 1;
    LAB_000067dc:
          _objc_release(lVar2);
        }
      }
      _objc_release(uVar1);
      return bVar6;
}

// IMP 0x00006828  types v24@0:8@16
- (void)handleKillBackground:(id)handleKillBackground {
      undefined8 uVar1;
      long lVar2;
      undefined8 uVar3;
      dispatch_time_t dVar4;
      undefined8 extraout_x1;
      undefined auVar5 [16];

      uVar1 = _objc_retain(handleKillBackground);
      if ((DAT_000704a8 != '\0') && (lVar2 = objc_msgSend_state(uVar1), lVar2 == 1)) {
        auVar5 = _objc_alloc(PTR__OBJC_CLASS___UIImpactFeedbackGenerator_0006f818);
        uVar3 = objc_msgSend_initWithStyle_(auVar5._0_8_,auVar5._8_8_,1);
        objc_msgSend_prepare();
        objc_msgSend_impactOccurred(uVar3);
        FUN_00028ea4(DAT_000717a9,DAT_000703c8);
        _objc_unsafeClaimAutoreleasedReturnValue();
        if (DAT_00070400 != 0) {
          objc_msgSend_setEnabled_(DAT_00070400,extraout_x1,0);
          dVar4 = _dispatch_time(0,1000000000);
          _dispatch_after(dVar4,PTR___dispatch_main_q_00064278,&PTR___NSConcreteGlobalBlock_00064648);
        }
        _objc_release(uVar3);
      }
      _objc_release(uVar1);
      return;
}

@end
