//
//  SBTwoFingerDoubleTapClearNotificationsTarget.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBTwoFingerDoubleTapClearNotificationsTarget.h"

@implementation SBTwoFingerDoubleTapClearNotificationsTarget

// IMP 0x00005954  types B24@0:8@16
- (BOOL)gestureRecognizerShouldBegin:(id)gestureRecognizerShouldBegin {
      undefined *puVar1;
      ulong uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      long lVar5;
      long lVar6;
      long lVar7;
      bool bVar8;

      if ((DAT_00070496 == '\0' || DAT_000703f0 != gestureRecognizerShouldBegin) ||
         (uVar2 = FUN_00005a9c(), (uVar2 & 1) != 0)) {
        bVar8 = 0;
      }
      else {
        uVar3 = _objc_loadWeakRetained(&DAT_00070430);
        objc_msgSend_view();
        uVar4 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_window();
        lVar5 = _objc_retainAutoreleasedReturnValue();
        if (lVar5 == 0) {
          bVar8 = 0;
        }
        else {
          FUN_00028958();
          lVar6 = _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR_s_notificationCount_0006ea18;
          if (lVar6 == 0) {
            bVar8 = 0;
          }
          else {
            uVar2 = _objc_opt_respondsToSelector(lVar6,PTR_s_notificationCount_0006ea18);
            if ((uVar2 & 1) == 0) {
              bVar8 = 1;
            }
            else {
              lVar7 = _objc_msgSend(lVar6,puVar1);
              bVar8 = (bool)(lVar7 != 0);
            }
          }
          _objc_release(lVar6);
        }
        _objc_release(lVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      return bVar8;
}

// IMP 0x00005b78  types B32@0:8@16@24
- (BOOL)gestureRecognizer:(id)gestureRecognizer shouldReceiveTouch:(id)shouldReceiveTouch {
      long lVar1;
      long lVar2;
      undefined8 uVar3;
      ulong uVar4;
      undefined8 uVar5;
      long lVar6;
      long lVar7;
      bool bVar8;
      undefined auVar9 [16];

      lVar2 = _objc_retain(gestureRecognizer);
      uVar3 = _objc_retain(shouldReceiveTouch);
      if ((DAT_00070496 != '\0' && DAT_000703f0 == lVar2) && (uVar4 = FUN_00005a9c(), (uVar4 & 1) == 0))
      {
        objc_msgSend_view(uVar3);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        uVar4 = FUN_00005dbc();
        _objc_release(uVar5);
        if (((uVar4 & 1) == 0) && (uVar4 = FUN_00005fb8(uVar3,lVar2), (uVar4 & 1) == 0)) {
          objc_msgSend_view(uVar3);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          lVar6 = _objc_retain();
          lVar1 = lVar6;
          while (lVar1 != 0) {
            uVar5 = _objc_opt_class(PTR__OBJC_CLASS___UIControl_0006f810);
            uVar4 = _objc_opt_isKindOfClass(lVar1,uVar5);
            if ((uVar4 & 1) != 0) {
    LAB_00005d44:
              _objc_release(lVar1);
              bVar8 = 0;
              goto LAB_00005d50;
            }
            _objc_opt_class(lVar1);
            _NSStringFromClass();
            auVar9 = _objc_retainAutoreleasedReturnValue();
            uVar5 = auVar9._0_8_;
            auVar9 = objc_msgSend_containsString_(uVar5,auVar9._8_8_,&cf_Passcode);
            if ((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    LAB_00005d3c:
              _objc_release(uVar5);
              goto LAB_00005d44;
            }
            auVar9 = objc_msgSend_containsString_(uVar5,auVar9._8_8_,&cf_EmergencyCall);
            if ((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00005d3c;
            auVar9 = objc_msgSend_containsString_(uVar5,auVar9._8_8_,&cf_CSMediaControls);
            if ((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00005d3c;
            auVar9 = objc_msgSend_containsString_(uVar5,auVar9._8_8_,&cf_MRUCoverSheet);
            if (((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) ||
               (uVar4 = objc_msgSend_containsString_(uVar5,auVar9._8_8_,&cf_MRUNowPlaying),
               (uVar4 & 1) != 0)) goto LAB_00005d3c;
            _objc_release(uVar5);
            objc_msgSend_superview(lVar1);
            lVar7 = _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar1);
            lVar1 = lVar7;
          }
          bVar8 = 1;
    LAB_00005d50:
          _objc_release(lVar6);
          _objc_release(lVar6);
          goto LAB_00005c10;
        }
      }
      bVar8 = 0;
    LAB_00005c10:
      _objc_release(uVar3);
      _objc_release(lVar2);
      return bVar8;
}

// IMP 0x00006198  types v24@0:8@16
- (void)handleTwoFingerDoubleTapClearNotifications:(id)handleTwoFingerDoubleTapClearNotifications {
      undefined *puVar1;
      int iVar2;
      long lVar3;
      long lVar4;
      ulong uVar5;
      undefined8 uVar6;
      long lVar7;

      lVar3 = _objc_retain(handleTwoFingerDoubleTapClearNotifications);
      if ((((DAT_00070496 != '\0' && DAT_000703f0 == lVar3) &&
           (lVar4 = objc_msgSend_state(lVar3), lVar4 == 3)) &&
          (uVar5 = FUN_00005a9c(), (uVar5 & 1) == 0)) &&
         (iVar2 = objc_msgSend_isMainThread(PTR__OBJC_CLASS___NSThread_0006f8d8), iVar2 != 0)) {
        FUN_00028958();
        lVar4 = _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_s_isPerformingClearAll_0006e7e0;
        if ((lVar4 != 0) &&
           ((uVar5 = _objc_opt_respondsToSelector(lVar4,PTR_s_isPerformingClearAll_0006e7e0),
            (uVar5 & 1) == 0 || (uVar5 = _objc_msgSend(lVar4,puVar1), (uVar5 & 1) == 0)))) {
          uVar6 = _NSSelectorFromString(&cf__clearAllNotifications_supplementaryViewControllers_);
          uVar5 = _objc_opt_respondsToSelector(lVar4,uVar6);
          if ((uVar5 & 1) == 0) {
            FUN_00028a20();
            lVar7 = _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR_s_notificationListComponentRequest_0006ea20;
            if ((lVar7 != 0) &&
               (uVar5 = _objc_opt_respondsToSelector
                                  (lVar7,PTR_s_notificationListComponentRequest_0006ea20),
               (uVar5 & 1) != 0)) {
              _objc_msgSend(lVar7,puVar1,lVar4);
            }
            _objc_release(lVar7);
          }
          else {
            _objc_msgSend(lVar4,uVar6,1,0);
          }
        }
        _objc_release(lVar4);
      }
      _objc_release(lVar3);
      return;
}

@end
