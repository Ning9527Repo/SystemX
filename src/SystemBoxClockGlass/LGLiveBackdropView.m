//
//  LGLiveBackdropView.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "LGLiveBackdropView.h"

@implementation LGLiveBackdropView

// IMP 0x00016278  types @16@0:8
- (id)lgEffectiveFilterType {
      int iVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      char *pcVar4;
      size_t sVar5;
      ulong uVar6;
      undefined8 uVar7;
      ID IVar8;
      undefined8 extraout_x1;
      ulong uVar9;
      ulong uVar10;
      long lVar11;
      char *pcVar12;
      double dVar13;
      double dVar14;
      undefined auVar15 [16];

      lVar11 = (long)_lgFilterType;
      auVar15 = objc_msgSend_length(*(undefined8 *)(self + lVar11));
      if (auVar15._0_8_ == 0) {
        objc_msgSend_stringWithUTF8String_
                  (PTR__OBJC_CLASS___NSString_00055ad8,auVar15._8_8_,
                   "com.wkk.systembox.clockglass.refraction");
        uVar2 = _objc_retainAutoreleasedReturnValue();
        goto LAB_00016558;
      }
      _objc_retain(*(undefined8 *)(self + lVar11));
      uVar2 = _objc_retain();
      lVar11 = objc_msgSend_length();
      uVar3 = uVar2;
      if (lVar11 == 0) {
    LAB_000164c0:
        _objc_release(uVar2);
      }
      else {
        uVar3 = _objc_retainAutorelease(uVar2);
        pcVar4 = (char *)objc_msgSend_UTF8String();
        if (pcVar4 != (char *)0x0) {
          lVar11 = 8;
          do {
            pcVar12 = *(char **)((long)&PTR_s_Default_00050818 + lVar11);
            sVar5 = _strlen(pcVar12);
            iVar1 = _strncmp(pcVar4,pcVar12,sVar5);
            if ((iVar1 == 0) && ((pcVar4[sVar5] == '\0' || (pcVar4[sVar5] == '.')))) {
              _objc_release(uVar3);
              if (lVar11 == 0x488) goto LAB_000164c8;
              goto LAB_00016338;
            }
            lVar11 = lVar11 + 0x48;
          } while (lVar11 != 0x830);
        }
        _objc_release(uVar3);
    LAB_00016338:
        objc_msgSend_bounds(self);
        uVar6 = _CGRectIsEmpty();
        if ((uVar6 & 1) == 0) {
          objc_msgSend_bounds(self);
          dVar13 = (double)_CGRectGetWidth();
          objc_msgSend_bounds(self);
          dVar14 = (double)_CGRectGetHeight();
          if (dVar14 <= dVar13) {
            dVar13 = dVar14;
          }
          uVar3 = _objc_retainAutorelease(uVar3);
          pcVar4 = (char *)objc_msgSend_UTF8String();
          if (pcVar4 != (char *)0x0) {
            lVar11 = 8;
            do {
              pcVar12 = *(char **)((long)&PTR_s_Default_00050818 + lVar11);
              sVar5 = _strlen(pcVar12);
              iVar1 = _strncmp(pcVar4,pcVar12,sVar5);
              if ((iVar1 == 0) && ((pcVar4[sVar5] == '\0' || (pcVar4[sVar5] == '.')))) {
                if (lVar11 == 0x6c8) {
                  dVar14 = *(double *)(self + (long)_lgShapeCornerRadius);
                  goto LAB_00016448;
                }
                break;
              }
              lVar11 = lVar11 + 0x48;
            } while (lVar11 != 0x830);
          }
          objc_msgSend_layer(self);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          dVar14 = (double)objc_msgSend_cornerRadius();
          _objc_release(uVar7);
    LAB_00016448:
          dVar14 = dVar14 / dVar13;
          if (dVar13 <= 0.0) {
            dVar14 = 0.0;
          }
          dVar13 = (double)NEON_fmin(dVar14,0x3fe0000000000000);
          if (dVar13 <= 0.0) {
            dVar13 = 0.0;
          }
          uVar9 = (ulong)(dVar13 * 32.0);
          uVar10 = *(ulong *)(self + (long)_lastRadiusStep);
          uVar6 = uVar9;
          if (ABS(dVar13 * 32.0 - (double)uVar10) < 0.75) {
            uVar6 = uVar10;
          }
          if ((uVar10 & 0x8000000000000000) == 0) {
            uVar9 = uVar6;
          }
          *(ulong *)(self + (long)_lastRadiusStep) = uVar9;
          objc_msgSend_stringByAppendingFormat_(uVar3);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          goto LAB_000164c0;
        }
      }
    LAB_000164c8:
      objc_msgSend_traitCollection(self);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      auVar15 = objc_msgSend_userInterfaceStyle();
      if (auVar15._0_8_ == 2) {
        objc_msgSend_stringByAppendingString_(uVar3,auVar15._8_8_,&cf__dark);
        uVar7 = _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar7 = _objc_retain(uVar3);
      }
      _objc_release(uVar2);
      uVar2 = uVar7;
      if (*(char *)(self + (long)_parameterRefreshVariant) != '\0') {
        objc_msgSend_stringByAppendingString_(uVar7,extraout_x1,&cf__refresh);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
      }
      _objc_release(uVar3);
    LAB_00016558:
      IVar8 = _objc_autoreleaseReturnValue(uVar2);
      return IVar8;
}

// IMP 0x000165a8  types @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (id)initWithFrame:(id)initWithFrame {
      ID IVar1;

      IVar1 = objc_msgSend_initWithFrame_groupName_filterType_(self,_cmd,0,0);
      return IVar1;
}

// IMP 0x000165b4  types @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
- (id)initWithFrame:(id)initWithFrame groupName:(id)groupName {
      ID IVar1;

      IVar1 = objc_msgSend_initWithFrame_groupName_filterType_();
      return IVar1;
}

// IMP 0x000165bc  types @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56
- (id)initWithFrame:(id)initWithFrame groupName:(id)groupName filterType:(id)filterType {
      undefined8 *puVar1;
      char cVar2;
      bool bVar3;
      undefined *puVar4;
      int iVar5;
      undefined8 uVar6;
      undefined8 uVar7;
      ID IVar8;
      undefined8 uVar9;
      long lVar10;
      long lVar11;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      undefined8 extraout_x1_04;
      undefined8 extraout_x1_05;
      undefined8 extraout_x1_06;
      undefined8 uVar12;
      undefined8 uVar13;
      undefined auVar14 [16];
      ID local_70;
      undefined *puStack_68;

      uVar6 = _objc_retain(groupName);
      uVar7 = _objc_retain(filterType);
      puStack_68 = PTR_PTR_00055c30;
      local_70 = self;
      IVar8 = _objc_msgSendSuper2(&local_70,PTR_s_initWithFrame__00055320);
      if (IVar8 != 0) {
        *(undefined8 *)(IVar8 + (long)_lastRadiusStep) = 0xffffffffffffffff;
        *(undefined8 *)(IVar8 + (long)_appliedSpecularOpacity) = 0xbff0000000000000;
        puVar1 = (undefined8 *)(IVar8 + (long)_lgShapeRect);
        uVar13 = *(undefined8 *)PTR__CGRectNull_00050150;
        uVar12 = *(undefined8 *)(PTR__CGRectNull_00050150 + 0x18);
        uVar9 = *(undefined8 *)(PTR__CGRectNull_00050150 + 0x10);
        puVar1[1] = *(undefined8 *)(PTR__CGRectNull_00050150 + 8);
        *puVar1 = uVar13;
        puVar1[3] = uVar12;
        puVar1[2] = uVar9;
        uVar9 = objc_msgSend_copy(uVar7);
        uVar12 = *(undefined8 *)(IVar8 + (long)_lgFilterType);
        *(undefined8 *)(IVar8 + (long)_lgFilterType) = uVar9;
        _objc_release(uVar12);
        do {
          iVar5 = DAT_00056260 + 1;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(0x56260,0x10);
          if (bVar3) {
            cVar2 = ExclusiveMonitorsStatus();
            DAT_00056260 = iVar5;
          }
        } while (cVar2 != '\0');
        *(int *)(IVar8 + (long)_lgId) = iVar5;
        lVar10 = objc_msgSend_length(uVar6);
        if (lVar10 == 0) {
          if (DAT_00056268 != -1) {
            _dispatch_once(&DAT_00056268,&PTR___NSConcreteGlobalBlock_00051040);
          }
          puVar4 = PTR__OBJC_CLASS___NSString_00055ad8;
          _getpid();
          objc_msgSend_stringWithFormat_(puVar4);
          uVar9 = _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar9 = objc_msgSend_copy(uVar6);
        }
        uVar12 = *(undefined8 *)(IVar8 + (long)_lgGroupName);
        *(undefined8 *)(IVar8 + (long)_lgGroupName) = uVar9;
        _objc_release(uVar12);
        objc_msgSend_setUserInteractionEnabled_(IVar8,extraout_x1,0);
        objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
        auVar14 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setBackgroundColor_(IVar8,auVar14._8_8_,auVar14._0_8_);
        _objc_release(auVar14._0_8_);
        objc_msgSend_setOpaque_(IVar8,extraout_x1_00,0);
        objc_msgSend_setAutoresizingMask_(IVar8,extraout_x1_01,0x12);
        uVar9 = extraout_x1_02;
        if (DAT_00056270 == 0) {
          objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
          lVar11 = _objc_retainAutoreleasedReturnValue();
          lVar10 = DAT_00056270;
          DAT_00056270 = lVar11;
          _objc_release(lVar10);
          uVar9 = extraout_x1_03;
        }
        if ((DAT_00056298 & 1) == 0) {
          DAT_00056298 = 1;
          uVar9 = _CFNotificationCenterGetDarwinNotifyCenter();
          _CFNotificationCenterAddObserver
                    (uVar9,0,FUN_00018bfc,&cf_com_wkk_systembox_clockglass_ParametersReloaded,0,4);
          uVar9 = extraout_x1_04;
        }
        objc_msgSend_addObject_(DAT_00056270,uVar9,IVar8);
        iVar5 = FUN_00018d54();
        uVar9 = extraout_x1_05;
        if (iVar5 != 0) {
          if (DAT_00056278 == 0) {
            objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
            lVar11 = _objc_retainAutoreleasedReturnValue();
            lVar10 = DAT_00056278;
            DAT_00056278 = lVar11;
            _objc_release(lVar10);
          }
          if (DAT_00056280 == 0) {
            lVar11 = _objc_opt_new(PTR__OBJC_CLASS___CMMotionManager_00055bd8);
            lVar10 = DAT_00056280;
            DAT_00056280 = lVar11;
            _objc_release(lVar10);
          }
          if ((DAT_00056299 & 1) == 0) {
            DAT_00056299 = 1;
            uVar9 = _CFNotificationCenterGetDarwinNotifyCenter();
            _CFNotificationCenterAddObserver
                      (uVar9,0,FUN_00018dc0,&cf_com_wkk_systembox_prefschanged,0,4);
          }
          FUN_00018dd4();
          FUN_00018e30();
          uVar9 = extraout_x1_06;
        }
        objc_msgSend_addObject_(DAT_00056278,uVar9,IVar8);
        objc_msgSend_applyFilters(IVar8);
        _objc_retain(IVar8);
      }
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(IVar8);
      return IVar8;
}

// IMP 0x00016928  types v16@0:8
- (void)dealloc {
      undefined8 extraout_x1;
      ID local_30;
      undefined *puStack_28;

      objc_msgSend_removeObject_(DAT_00056270,_cmd,self);
      objc_msgSend_removeObject_(DAT_00056278,extraout_x1,self);
      puStack_28 = PTR_PTR_00055c30;
      local_30 = self;
      _objc_msgSendSuper2(&local_30,PTR_s_dealloc_000551d0);
      return;
}

// IMP 0x00016988  types v16@0:8
- (void)didMoveToWindow {
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_00055c30;
      local_30 = self;
      _objc_msgSendSuper2(&local_30,PTR_s_didMoveToWindow_00055210);
      objc_msgSend_applyFilters(self);
      return;
}

// IMP 0x000169d0  types v24@0:8@16
- (void)traitCollectionDidChange:(id)traitCollectionDidChange {
      undefined *puVar1;
      undefined8 uVar2;
      long lVar3;
      long lVar4;
      ID local_40;
      undefined *puStack_38;

      puVar1 = PTR_s_traitCollectionDidChange__00055a10;
      puStack_38 = PTR_PTR_00055c30;
      local_40 = self;
      uVar2 = _objc_retain(traitCollectionDidChange);
      _objc_msgSendSuper2(&local_40,puVar1,uVar2);
      lVar3 = objc_msgSend_userInterfaceStyle(uVar2);
      _objc_release(uVar2);
      objc_msgSend_traitCollection(self);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      lVar4 = objc_msgSend_userInterfaceStyle();
      _objc_release(uVar2);
      if (lVar3 != lVar4) {
        *(undefined *)(self + (long)_filterAttached) = 0;
        objc_msgSend_applyFilters(self);
        objc_msgSend_updateSpecular(self);
      }
      return;
}

// IMP 0x00016a88  types @16@0:8
- (id)lgSpecularEnabledOverride {
      ID IVar1;

      IVar1 = _objc_getAssociatedObject(self,PTR_LOOP_00055f68);
      return IVar1;
}

// IMP 0x00016a94  types v24@0:8@16
- (void)setLgSpecularEnabledOverride:(id)setLgSpecularEnabledOverride {
      undefined *puVar1;
      long lVar2;
      long lVar3;
      ulong uVar4;
      undefined8 uVar5;
      undefined auVar6 [16];

      lVar2 = _objc_retain(setLgSpecularEnabledOverride);
      objc_msgSend_lgSpecularEnabledOverride(self);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      lVar3 = auVar6._0_8_;
      if ((lVar3 != lVar2) &&
         (uVar4 = objc_msgSend_isEqualToNumber_(lVar3,auVar6._8_8_,lVar2), puVar1 = PTR_LOOP_00055f68,
         (uVar4 & 1) == 0)) {
        uVar5 = objc_msgSend_copy(lVar2);
        _objc_setAssociatedObject(self,puVar1,uVar5,1);
        _objc_release(uVar5);
        objc_msgSend_updateSpecular(self);
      }
      _objc_release(lVar3);
      _objc_release(lVar2);
      return;
}

// IMP 0x00016b3c  types v16@0:8
- (void)layoutSubviews {
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_00055c30;
      local_30 = self;
      _objc_msgSendSuper2(&local_30,PTR_s_layoutSubviews_000553d8);
      objc_msgSend_applyFilters(self);
      objc_msgSend_updateSpecular(self);
      return;
}

// IMP 0x00016b8c  types v24@0:8d16
- (void)updateNativeBlurOverlayWithRadius:(double)updateNativeBlurOverlayWithRadius {
      long lVar1;
      undefined8 uVar2;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      SEL extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      undefined8 uVar3;
      long lVar4;
      undefined8 uVar5;
      undefined auVar6 [16];

      lVar4 = (long)_nativeBlurView;
      if (updateNativeBlurOverlayWithRadius <= 0.0) {
        objc_msgSend_removeFromSuperview();
        uVar2 = *(undefined8 *)(self + lVar4);
        *(undefined8 *)(self + lVar4) = 0;
        _objc_release(uVar2);
        *(undefined8 *)(self + (long)_nativeBlurRadius) = 0;
        return;
      }
      if (*(long *)(self + lVar4) == 0) {
        lVar1 = _NSClassFromString(&cf_LGSettingsLowBlurView);
        if (lVar1 == 0) {
          return;
        }
        uVar2 = _objc_alloc();
        objc_msgSend_bounds(self);
        uVar2 = objc_msgSend_initWithFrame_(uVar2);
        uVar3 = *(undefined8 *)(self + lVar4);
        *(undefined8 *)(self + lVar4) = uVar2;
        _objc_release(uVar3);
        objc_msgSend_setUserInteractionEnabled_(*(undefined8 *)(self + lVar4),extraout_x1,0);
        objc_msgSend_insertSubview_atIndex_(self,extraout_x1_00,*(undefined8 *)(self + lVar4),0);
        _cmd = extraout_x1_01;
      }
      objc_msgSend_begin(PTR__OBJC_CLASS___CATransaction_00055b48,_cmd);
      objc_msgSend_setDisableActions_(PTR__OBJC_CLASS___CATransaction_00055b48,extraout_x1_02,1);
      objc_msgSend_bounds(self);
      objc_msgSend_setFrame_(*(undefined8 *)(self + lVar4));
      objc_msgSend_layer(self);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      uVar5 = objc_msgSend_cornerRadius();
      objc_msgSend_layer(*(undefined8 *)(self + lVar4));
      uVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setCornerRadius_(uVar5);
      _objc_release(uVar3);
      _objc_release(uVar2);
      objc_msgSend_layer(self);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_cornerCurve();
      uVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_layer(*(undefined8 *)(self + lVar4));
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setCornerCurve_(auVar6._0_8_,auVar6._8_8_,uVar3);
      _objc_release(auVar6._0_8_);
      _objc_release(uVar3);
      _objc_release(uVar2);
      objc_msgSend_setClipsToBounds_(*(undefined8 *)(self + lVar4),extraout_x1_03,1);
      lVar1 = (long)_nativeBlurRadius;
      if (DAT_0004a760 < ABS(*(double *)(self + lVar1) - updateNativeBlurOverlayWithRadius)) {
        uVar2 = *(undefined8 *)(self + lVar4);
        objc_msgSend_numberWithDouble_(updateNativeBlurOverlayWithRadius,PTR__OBJC_CLASS___NSNumber_00055ae0);
        auVar6 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setValue_forKey_(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_lgBlurRadius);
        _objc_release(auVar6._0_8_);
        *(double *)(self + lVar1) = updateNativeBlurOverlayWithRadius;
      }
      objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_00055b48);
      return;
}

// IMP 0x00016da8  types v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setLgShapeRect:(id)setLgShapeRect {
      undefined8 *puVar1;
      int iVar2;
      ulong uVar3;
      char *pcVar4;
      size_t sVar5;
      char *pcVar6;
      long lVar7;
      undefined8 in_d0;
      undefined8 in_d1;
      undefined8 in_d2;
      undefined8 in_d3;

      puVar1 = (undefined8 *)(self + (long)_lgShapeRect);
      uVar3 = _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
      if ((uVar3 & 1) != 0) {
        return;
      }
      *puVar1 = in_d0;
      puVar1[1] = in_d1;
      puVar1[2] = in_d2;
      puVar1[3] = in_d3;
      pcVar4 = (char *)objc_msgSend_UTF8Stringself->_lgFilterType;
      if (pcVar4 != (char *)0x0) {
        lVar7 = 8;
        do {
          pcVar6 = *(char **)((long)&PTR_s_Default_00050818 + lVar7);
          sVar5 = _strlen(pcVar6);
          iVar2 = _strncmp(pcVar4,pcVar6,sVar5);
          if ((iVar2 == 0) && ((pcVar4[sVar5] == '\0' || (pcVar4[sVar5] == '.')))) {
            if (lVar7 == 0x6c8) {
              *(undefined *)(self + (long)_filterAttached) = 0;
              objc_msgSend_applyFilters(self);
            }
            break;
          }
          lVar7 = lVar7 + 0x48;
        } while (lVar7 != 0x830);
      }
      objc_msgSend_updateSpecular(self);
      return;
}

// IMP 0x00016ecc  types v24@0:8d16
- (void)setLgShapeCornerRadius:(double)setLgShapeCornerRadius {
      int iVar1;
      char *pcVar2;
      size_t sVar3;
      char *pcVar4;
      long lVar5;

      if (ABS(*(double *)(self + (long)_lgShapeCornerRadius) - setLgShapeCornerRadius) < DAT_0001e290) {
        return;
      }
      *(double *)(self + (long)_lgShapeCornerRadius) = setLgShapeCornerRadius;
      pcVar2 = (char *)objc_msgSend_UTF8Stringself->_lgFilterType;
      if (pcVar2 != (char *)0x0) {
        lVar5 = 8;
        do {
          pcVar4 = *(char **)((long)&PTR_s_Default_00050818 + lVar5);
          sVar3 = _strlen(pcVar4);
          iVar1 = _strncmp(pcVar2,pcVar4,sVar3);
          if ((iVar1 == 0) && ((pcVar2[sVar3] == '\0' || (pcVar2[sVar3] == '.')))) {
            if (lVar5 == 0x6c8) {
              *(undefined *)(self + (long)_filterAttached) = 0;
              objc_msgSend_applyFilters(self);
            }
            break;
          }
          lVar5 = lVar5 + 0x48;
        } while (lVar5 != 0x830);
      }
      objc_msgSend_updateSpecular(self);
      return;
}

// IMP 0x00016fb8  types v16@0:8
- (void)updateSpecular {
      undefined8 *puVar1;
      uint uVar2;
      int iVar3;
      ulong uVar4;
      undefined8 uVar5;
      long lVar6;
      char *pcVar7;
      size_t sVar8;
      undefined8 uVar9;
      undefined8 uVar10;
      undefined8 uVar11;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      undefined8 uVar12;
      long lVar13;
      long lVar14;
      undefined **ppuVar15;
      char *pcVar16;
      long lVar17;
      undefined8 uVar18;
      undefined8 uVar19;
      double dVar20;
      undefined8 uVar21;
      undefined8 uVar22;
      undefined8 uVar23;
      undefined auVar24 [16];
      undefined8 local_c8;
      undefined8 local_c0;
      undefined8 uStack_b8;
      undefined8 local_b0;
      undefined8 local_a8;
      undefined8 local_a0;
      long local_98;

      local_98 = *(long *)PTR____stack_chk_guard_000502b0;
      objc_msgSend_bounds();
      uVar4 = _CGRectIsEmpty();
      if ((uVar4 & 1) != 0) goto LAB_0001786c;
      puVar1 = (undefined8 *)(self + (long)_lgShapeRect);
      uVar21 = puVar1[1];
      uVar22 = puVar1[2];
      uVar23 = puVar1[3];
      uVar4 = _CGRectIsNull(*puVar1,uVar21,uVar22,uVar23);
      if ((uVar4 & 1) == 0) {
        uVar21 = puVar1[1];
        uVar22 = puVar1[2];
        uVar23 = puVar1[3];
        uVar4 = _CGRectIsEmpty(*puVar1,uVar21,uVar22,uVar23);
        if ((uVar4 & 1) != 0) goto LAB_00017030;
        uVar18 = *puVar1;
        uVar21 = puVar1[1];
        uVar22 = puVar1[2];
        uVar23 = puVar1[3];
        uVar19 = *(undefined8 *)(self + (long)_lgShapeCornerRadius);
      }
      else {
    LAB_00017030:
        uVar18 = objc_msgSend_bounds(self);
        objc_msgSend_layer(self);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        uVar19 = objc_msgSend_cornerRadius();
        _objc_release(uVar5);
      }
      objc_msgSend_lgSpecularEnabledOverride(self);
      lVar6 = _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        lVar13 = (long)_lgFilterType;
        _objc_retainAutorelease(*(undefined8 *)(self + lVar13));
        pcVar7 = (char *)objc_msgSend_UTF8String();
        if (pcVar7 != (char *)0x0) {
          uVar4 = 0;
          ppuVar15 = &PTR_s_Default_00050828;
          do {
            pcVar16 = ppuVar15[-1];
            sVar8 = _strlen(pcVar16);
            iVar3 = _strncmp(pcVar7,pcVar16,sVar8);
            if ((iVar3 == 0) && ((pcVar7[sVar8] == '\0' || (pcVar7[sVar8] == '.')))) {
              if ((uVar4 != 0x15) && ((0x1edeffffUL >> (uVar4 & 0x3f) & 1) != 0)) {
                objc_msgSend_stringWithUTF8String_(PTR__OBJC_CLASS___NSString_00055ad8);
                uVar5 = _objc_retainAutoreleasedReturnValue();
                goto LAB_00017120;
              }
              uVar2 = 0;
              goto LAB_000171c4;
            }
            uVar4 = uVar4 + 1;
            ppuVar15 = ppuVar15 + 9;
          } while (uVar4 != 0x1d);
        }
        uVar5 = 0;
    LAB_00017120:
        auVar24 = objc_msgSend_length(uVar5);
        if (auVar24._0_8_ == 0) {
          uVar2 = 1;
        }
        else {
          objc_msgSend_stringByAppendingString_(uVar5,auVar24._8_8_,&cf__SpecularEnabled);
          uVar12 = _objc_retainAutoreleasedReturnValue();
          _LGGlassPreferenceValue();
          uVar9 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar12);
          uVar12 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_00055ae0);
          uVar4 = _objc_opt_isKindOfClass(uVar9,uVar12);
          if ((uVar4 & 1) == 0) {
            uVar2 = 1;
          }
          else {
            uVar2 = objc_msgSend_boolValue(uVar9);
          }
          _objc_release(uVar9);
        }
        _objc_release(uVar5);
      }
      else {
        uVar2 = objc_msgSend_boolValue(lVar6);
        lVar13 = (long)_lgFilterType;
      }
    LAB_000171c4:
      pcVar7 = (char *)objc_msgSend_UTF8String(*(undefined8 *)(self + lVar13));
      if (pcVar7 != (char *)0x0) {
        lVar13 = 0;
        do {
          pcVar16 = *(char **)((long)&PTR_s_com_wkk_systembox_clockglass_ref_00050820 + lVar13);
          sVar8 = _strlen(pcVar16);
          iVar3 = _strncmp(pcVar7,pcVar16,sVar8);
          if ((iVar3 == 0) && ((pcVar7[sVar8] == '\0' || (pcVar7[sVar8] == '.')))) {
            if (lVar13 == 0x480) goto LAB_00017864;
            lVar13 = (long)&PTR_s_Default_00050818 + lVar13;
            goto LAB_00017228;
          }
          lVar13 = lVar13 + 0x48;
        } while (lVar13 != 0x828);
      }
      lVar13 = 0;
    LAB_00017228:
      if (((uVar2 & 1) != 0) || (*(long *)(self + (long)_specularLayer) != 0)) {
        lVar17 = (long)_edge;
        if (*(long *)(self + lVar17) == 0) {
          objc_msgSend_layer(PTR__OBJC_CLASS___CAShapeLayer_00055b38);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(self + lVar17);
          *(undefined8 *)(self + lVar17) = uVar5;
          _objc_release(uVar12);
          objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = _objc_retainAutorelease();
          auVar24 = objc_msgSend_CGColor();
          objc_msgSend_setBackgroundColor_
                    (*(undefined8 *)(self + lVar17),auVar24._8_8_,auVar24._0_8_);
          _objc_release(uVar5);
          objc_msgSend_setBorderWidth_(0x3ff0000000000000,*(undefined8 *)(self + lVar17));
          objc_msgSend_layer(self);
          auVar24 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_addSublayer_(auVar24._0_8_,auVar24._8_8_,*(undefined8 *)(self + lVar17));
          _objc_release(auVar24._0_8_);
        }
        dVar20 = DAT_0004a768;
        if (lVar13 != 0) {
          objc_msgSend_stringWithUTF8String_(PTR__OBJC_CLASS___NSString_00055ad8);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          auVar24 = objc_msgSend_length();
          if (auVar24._0_8_ == 0) {
            uVar12 = 0;
          }
          else {
            objc_msgSend_stringByAppendingString_(uVar5,auVar24._8_8_,&cf__SpecularOpacity);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _LGGlassPreferenceValue();
            uVar12 = _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
          }
          uVar4 = _objc_opt_respondsToSelector(uVar12,PTR_s_doubleValue_00055228);
          if ((uVar4 & 1) == 0) {
            dVar20 = DAT_0004a768;
            if (DAT_0004a7b0 < *(float *)(lVar13 + 0x30)) {
              dVar20 = (double)*(float *)(lVar13 + 0x30);
            }
          }
          else {
            dVar20 = (double)objc_msgSend_doubleValue(uVar12);
          }
          _objc_release(uVar12);
          _objc_release(uVar5);
        }
        dVar20 = (double)NEON_fminnm(dVar20,0x3ff0000000000000);
        if (dVar20 <= 0.0) {
          dVar20 = 0.0;
        }
        lVar13 = (long)_specularLayer;
        if (*(long *)(self + lVar13) == 0) {
          objc_msgSend_layer(PTR__OBJC_CLASS___CAGradientLayer_00055b30);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          uVar12 = *(undefined8 *)(self + lVar13);
          *(undefined8 *)(self + lVar13) = uVar5;
          _objc_release(uVar12);
          objc_msgSend_setLocations_
                    (*(undefined8 *)(self + lVar13),extraout_x1,
                     &PTR__OBJC_CLASS___NSConstantArray_00052f70);
          objc_msgSend_layer(PTR__OBJC_CLASS___CAShapeLayer_00055b38);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          lVar14 = (long)_specularMask;
          uVar12 = *(undefined8 *)(self + lVar14);
          *(undefined8 *)(self + lVar14) = uVar5;
          _objc_release(uVar12);
          objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = _objc_retainAutorelease();
          auVar24 = objc_msgSend_CGColor();
          objc_msgSend_setBackgroundColor_
                    (*(undefined8 *)(self + lVar14),auVar24._8_8_,auVar24._0_8_);
          _objc_release(uVar5);
          objc_msgSend_blackColor(PTR__OBJC_CLASS___UIColor_00055b10);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = _objc_retainAutorelease();
          auVar24 = objc_msgSend_CGColor();
          objc_msgSend_setBorderColor_(*(undefined8 *)(self + lVar14),auVar24._8_8_,auVar24._0_8_);
          _objc_release(uVar5);
          objc_msgSend_setBorderWidth_(0x3ff0000000000000,*(undefined8 *)(self + lVar14));
          objc_msgSend_setMask_
                    (*(undefined8 *)(self + lVar13),extraout_x1_00,*(undefined8 *)(self + lVar14))
          ;
          objc_msgSend_layer(self);
          auVar24 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_addSublayer_(auVar24._0_8_,auVar24._8_8_,*(undefined8 *)(self + lVar13));
          _objc_release(auVar24._0_8_);
        }
        lVar14 = (long)_appliedSpecularOpacity;
        if (DAT_0004a760 < ABS(*(double *)(self + lVar14) - dVar20)) {
          objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = _objc_retainAutorelease();
          objc_msgSend_CGColor();
          uVar12 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          objc_msgSend_colorWithWhite_alpha_
                    (0x3ff0000000000000,dVar20 * DAT_0004a770,PTR__OBJC_CLASS___UIColor_00055b10);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = _objc_retainAutorelease();
          local_c8 = objc_msgSend_CGColor();
          objc_msgSend_colorWithWhite_alpha_
                    (0x3ff0000000000000,dVar20 * DAT_0004a778,PTR__OBJC_CLASS___UIColor_00055b10);
          _objc_retainAutoreleasedReturnValue();
          uVar9 = _objc_retainAutorelease();
          local_c0 = objc_msgSend_CGColor();
          uStack_b8 = uVar12;
          local_b0 = uVar12;
          objc_msgSend_colorWithWhite_alpha_(0,dVar20 * DAT_0004a780,PTR__OBJC_CLASS___UIColor_00055b10)
          ;
          _objc_retainAutoreleasedReturnValue();
          uVar10 = _objc_retainAutorelease();
          local_a8 = objc_msgSend_CGColor();
          objc_msgSend_colorWithWhite_alpha_
                    (0x3ff0000000000000,dVar20 * DAT_0004a788,PTR__OBJC_CLASS___UIColor_00055b10);
          _objc_retainAutoreleasedReturnValue();
          uVar11 = _objc_retainAutorelease();
          auVar24 = objc_msgSend_CGColor();
          local_a0 = auVar24._0_8_;
          objc_msgSend_arrayWithObjects_count_
                    (PTR__OBJC_CLASS___NSArray_00055ad0,auVar24._8_8_,&local_c8,6);
          auVar24 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setColors_(*(undefined8 *)(self + lVar13),auVar24._8_8_,auVar24._0_8_);
          _objc_release(auVar24._0_8_);
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar5);
          *(double *)(self + lVar14) = dVar20;
          _objc_release(uVar12);
        }
        objc_msgSend_begin(PTR__OBJC_CLASS___CATransaction_00055b48);
        objc_msgSend_setDisableActions_(PTR__OBJC_CLASS___CATransaction_00055b48,extraout_x1_01,1);
        objc_msgSend_setHidden_(*(undefined8 *)(self + lVar13),extraout_x1_02,uVar2 ^ 1);
        objc_msgSend_setFrame_(uVar18,uVar21,uVar22,uVar23,*(undefined8 *)(self + lVar13));
        objc_msgSend_separatorColor(PTR__OBJC_CLASS___UIColor_00055b10);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_colorWithAlphaComponent_(DAT_0004a790);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        objc_msgSend_traitCollection(self);
        auVar24 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_resolvedColorWithTraitCollection_(uVar12,auVar24._8_8_,auVar24._0_8_);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        _objc_release(auVar24._0_8_);
        objc_msgSend_setHidden_(*(undefined8 *)(self + lVar17),extraout_x1_03,0);
        objc_msgSend_setFrame_(uVar18,uVar21,uVar22,uVar23,*(undefined8 *)(self + lVar17));
        objc_msgSend_setCornerRadius_(uVar19,*(undefined8 *)(self + lVar17));
        objc_msgSend_layer(self);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_cornerCurve();
        auVar24 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setCornerCurve_(*(undefined8 *)(self + lVar17),auVar24._8_8_,auVar24._0_8_);
        _objc_release(auVar24._0_8_);
        _objc_release(uVar12);
        objc_msgSend_setBorderWidth_(0x3ff0000000000000,*(undefined8 *)(self + lVar17));
        uVar5 = _objc_retainAutorelease(uVar5);
        auVar24 = objc_msgSend_CGColor();
        objc_msgSend_setBorderColor_(*(undefined8 *)(self + lVar17),auVar24._8_8_,auVar24._0_8_);
        uVar12 = _CGRectGetWidth(uVar18,uVar21,uVar22,uVar23);
        uVar21 = _CGRectGetHeight(uVar18,uVar21,uVar22,uVar23);
        lVar13 = (long)_specularMask;
        objc_msgSend_setFrame_(0,0,uVar12,uVar21,*(undefined8 *)(self + lVar13));
        objc_msgSend_setCornerRadius_(uVar19,*(undefined8 *)(self + lVar13));
        objc_msgSend_layer(self);
        uVar21 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_cornerCurve();
        auVar24 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setCornerCurve_(*(undefined8 *)(self + lVar13),auVar24._8_8_,auVar24._0_8_);
        _objc_release(auVar24._0_8_);
        _objc_release(uVar21);
        objc_msgSend_setBorderWidth_(0x3ff0000000000000,*(undefined8 *)(self + lVar13));
        objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_00055b48);
        objc_msgSend_applySpecularAngle_(DAT_0004a758,self);
        _objc_release(uVar5);
      }
    LAB_00017864:
      _objc_release(lVar6);
    LAB_0001786c:
      if (*(long *)PTR____stack_chk_guard_000502b0 != local_98) {
                        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
}

// IMP 0x000178d4  types v24@0:8d16
- (void)applySpecularAngle:(double)applySpecularAngle {
      long lVar1;
      long lVar2;
      double dVar3;
      double in_d1;

      lVar2 = (long)_specularLayer;
      lVar1 = *(long *)(self + lVar2);
      if (lVar1 != 0) {
        dVar3 = (double)___sincos_stret();
        objc_msgSend_setStartPoint_(in_d1 * 0.5 + 0.5,dVar3 * 0.5 + 0.5,lVar1);
        objc_msgSend_setEndPoint_(0.5 - in_d1 * 0.5,0.5 - dVar3 * 0.5,*(undefined8 *)(self + lVar2));
        return;
      }
      return;
}

// IMP 0x0001795c  types v16@0:8
- (void)applyFilters {
      int iVar1;
      undefined8 uVar2;
      long lVar3;
      char *pcVar4;
      size_t sVar5;
      undefined8 uVar6;
      ulong uVar7;
      long lVar8;
      long lVar9;
      undefined8 uVar10;
      undefined8 uVar11;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      undefined8 extraout_x1_04;
      long lVar12;
      char *pcVar13;
      long lVar14;
      undefined **ppuVar15;
      double dVar16;
      double dVar17;
      double in_d2;
      double in_d3;
      double dVar18;
      undefined auVar19 [16];

      lVar12 = *(long *)PTR____stack_chk_guard_000502b0;
      objc_msgSend_layer();
      uVar2 = _objc_retainAutoreleasedReturnValue();
      lVar3 = _NSClassFromString(&cf_CABackdropLayer);
      if (lVar3 == 0) goto LAB_00018038;
      auVar19 = _objc_opt_isKindOfClass(uVar2,lVar3);
      if ((auVar19 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_00018038;
      lVar3 = (long)_backdropConfigured;
      if (*(char *)(self + lVar3) == '\0') {
        objc_msgSend_setValue_forKey_
                  (uVar2,auVar19._8_8_,PTR____kCFBooleanFalse_00050288,&cf_layerUsesCoreImageFilters);
        objc_msgSend_setValue_forKey_
                  (uVar2,extraout_x1,PTR____kCFBooleanFalse_00050288,&cf_windowServerAware);
        objc_msgSend_setValue_forKey_
                  (uVar2,extraout_x1_00,*(undefined8 *)(self + (long)_lgGroupName),&cf_groupName);
        objc_msgSend_setValue_forKey_(uVar2,extraout_x1_01,&cf_com_wkk_clockglass,&cf_groupNamespace);
        objc_msgSend_setValue_forKey_
                  (uVar2,extraout_x1_02,PTR____kCFBooleanTrue_00050290,&cf_ignoresScreenClip);
        *(undefined *)(self + lVar3) = 1;
      }
      lVar3 = (long)_lgFilterType;
      pcVar4 = (char *)objc_msgSend_UTF8String(*(undefined8 *)(self + lVar3));
      if (pcVar4 != (char *)0x0) {
        lVar14 = 0;
        ppuVar15 = &PTR_s_com_wkk_systembox_clockglass_ref_00050820;
        do {
          pcVar13 = *ppuVar15;
          sVar5 = _strlen(pcVar13);
          iVar1 = _strncmp(pcVar4,pcVar13,sVar5);
          if ((iVar1 == 0) && ((pcVar4[sVar5] == '\0' || (pcVar4[sVar5] == '.')))) {
            dVar18 = 0.5;
            if (((int)lVar14 == -0x10) || (dVar18 = 1.0, -(int)lVar14 - 0x15U < 3)) goto LAB_00017c08;
            break;
          }
          lVar14 = lVar14 + -1;
          ppuVar15 = ppuVar15 + 9;
        } while (lVar14 != -0x1d);
      }
      _objc_retainAutorelease(*(undefined8 *)(self + lVar3));
      pcVar4 = (char *)objc_msgSend_UTF8String();
      if (pcVar4 != (char *)0x0) {
        lVar14 = 0;
        ppuVar15 = &PTR_s_com_wkk_systembox_clockglass_ref_00050820;
        do {
          pcVar13 = *ppuVar15;
          sVar5 = _strlen(pcVar13);
          iVar1 = _strncmp(pcVar4,pcVar13,sVar5);
          if ((iVar1 == 0) && ((pcVar4[sVar5] == '\0' || (pcVar4[sVar5] == '.')))) {
            dVar18 = 1.5;
            if (-(int)lVar14 - 0x11U < 4) goto LAB_00017c08;
            break;
          }
          lVar14 = lVar14 + -1;
          ppuVar15 = ppuVar15 + 9;
        } while (lVar14 != -0x1d);
      }
      objc_msgSend_bounds(self);
      dVar18 = 0.75;
      if (1.0 < in_d2 * in_d3) {
        _LGGlassPreferenceValue(&cf_Global_Quality);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        uVar7 = _objc_opt_respondsToSelector(uVar6,PTR_s_doubleValue_00055228);
        dVar18 = 1.0;
        if ((uVar7 & 1) != 0) {
          dVar18 = (double)objc_msgSend_doubleValue(uVar6);
        }
        dVar16 = 1.0;
        if (ABS(dVar18) != INFINITY) {
          dVar16 = dVar18;
        }
        if (dVar16 <= DAT_0004a778) {
          dVar16 = DAT_0004a778;
        }
        dVar18 = (double)NEON_fminnm(dVar16,0x3ff0000000000000);
        _objc_release(uVar6);
        dVar18 = SQRT((dVar18 * DAT_0004a798) / (in_d2 * in_d3));
        if (dVar18 <= 0.25) {
          dVar18 = 0.25;
        }
        dVar18 = (double)NEON_fminnm(dVar18,0x3fe8000000000000);
      }
    LAB_00017c08:
      dVar16 = *(double *)(self + (long)_lgBackdropZoom);
      if (dVar16 <= 0.0) {
        dVar16 = 1.0;
      }
      dVar17 = *(double *)(self + (long)_appliedBackdropZoom);
      if (((DAT_0004a760 < ABS(dVar16 + -1.0)) || (0.0 < dVar17)) &&
         (DAT_0004a760 < ABS(dVar16 - dVar17))) {
        *(double *)(self + (long)_appliedBackdropZoom) = dVar16;
        objc_msgSend_numberWithDouble_(dVar16,PTR__OBJC_CLASS___NSNumber_00055ae0);
        auVar19 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setValue_forKey_(uVar2,auVar19._8_8_,auVar19._0_8_,&cf_zoom);
        _objc_release(auVar19._0_8_);
        objc_msgSend_valueForKey_(uVar2,extraout_x1_03,&cf_zoom);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _LGLog(&cf_glass__uzoomtype___want___3freadback___);
        _objc_release(uVar6);
      }
      lVar14 = (long)_appliedScale;
      if (DAT_0004a7a0 < ABS(dVar18 - *(double *)(self + lVar14))) {
        objc_msgSend_numberWithDouble_(dVar18,PTR__OBJC_CLASS___NSNumber_00055ae0);
        auVar19 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setValue_forKey_(uVar2,auVar19._8_8_,auVar19._0_8_,&cf_scale);
        _objc_release(auVar19._0_8_);
        *(double *)(self + lVar14) = dVar18;
      }
      objc_msgSend_lgEffectiveFilterType(self);
      lVar8 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_filters(uVar2);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      lVar9 = _NSClassFromString(&cf_CAFilter);
      lVar14 = lVar8;
      if (*(long *)(self + lVar3) != 0) {
        lVar14 = *(long *)(self + lVar3);
      }
      _objc_retainAutorelease(lVar14);
      pcVar4 = (char *)objc_msgSend_UTF8String();
      dVar18 = 0.0;
      if (pcVar4 != (char *)0x0) {
        lVar3 = 0;
        do {
          pcVar13 = *(char **)((long)&PTR_s_com_wkk_systembox_clockglass_ref_00050820 + lVar3);
          sVar5 = _strlen(pcVar13);
          iVar1 = _strncmp(pcVar4,pcVar13,sVar5);
          if ((iVar1 == 0) && ((pcVar4[sVar5] == '\0' || (pcVar4[sVar5] == '.')))) {
            if (lVar3 != 0x480) {
              objc_msgSend_stringWithUTF8String_(PTR__OBJC_CLASS___NSString_00055ad8);
              auVar19 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_stringByAppendingString_(auVar19._0_8_,auVar19._8_8_,&cf__Blur);
              uVar11 = _objc_retainAutoreleasedReturnValue();
              _LGGlassPreferenceValue();
              uVar10 = _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar11);
              uVar7 = _objc_opt_respondsToSelector(uVar10,PTR_s_doubleValue_00055228);
              if ((uVar7 & 1) == 0) {
                dVar18 = (double)*(float *)((long)&DAT_00050844 + lVar3);
              }
              else {
                dVar18 = (double)objc_msgSend_doubleValue(uVar10);
                if (dVar18 <= 0.0) {
                  dVar18 = 0.0;
                }
              }
              _objc_release(uVar10);
              _objc_release(auVar19._0_8_);
            }
            break;
          }
          lVar3 = lVar3 + 0x48;
        } while (lVar3 != 0x828);
      }
      objc_msgSend_updateNativeBlurOverlayWithRadius_(dVar18,self);
      lVar3 = (long)_filterAttached;
      if ((*(char *)(self + lVar3) == '\0') || (lVar14 = objc_msgSend_count(uVar6), lVar14 != 1)) {
    LAB_00017f24:
        if (lVar9 == 0) {
          FUN_00018144("CAFilter class not found");
        }
        else {
          uVar11 = _NSSelectorFromString(&cf_filterWithType_);
          _objc_msgSend(lVar9,uVar11,lVar8);
          lVar14 = _objc_retainAutoreleasedReturnValue();
          if (lVar14 == 0) {
            _LGLog(&cf_glass__ufilterWithTypenil_notregisteredyet__);
          }
          else {
            iVar1 = _access("/var/mobile/Library/Accessibility/systembox-clockglass-gaussian-identity-state.bin"
                            ,0);
            if (iVar1 == 0) {
              objc_msgSend_setValue_forKey_(lVar14);
            }
            objc_msgSend_arrayWithObjects_count_(PTR__OBJC_CLASS___NSArray_00055ad0);
            auVar19 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setFilters_(uVar2,auVar19._8_8_,auVar19._0_8_);
            _objc_release(auVar19._0_8_);
            *(undefined *)(self + lVar3) = 1;
            objc_msgSend_defaultCenter(PTR__OBJC_CLASS___NSNotificationCenter_00055b68);
            auVar19 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_postNotificationName_object_
                      (auVar19._0_8_,auVar19._8_8_,&cf_LGLiveBackdropViewFilterDidAttach,self);
            _objc_release(auVar19._0_8_);
          }
          _objc_release(lVar14);
        }
      }
      else {
        objc_msgSend_firstObject(uVar6);
        auVar19 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_valueForKey_(auVar19._0_8_,auVar19._8_8_,&cf_type);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar19._0_8_);
        uVar7 = objc_msgSend_isEqualToString_(uVar11,extraout_x1_04,lVar8);
        _objc_release(uVar11);
        if ((uVar7 & 1) == 0) goto LAB_00017f24;
      }
      _objc_release(uVar6);
      _objc_release(lVar8);
    LAB_00018038:
      _objc_release(uVar2);
      if (*(long *)PTR____stack_chk_guard_000502b0 == lVar12) {
        return;
      }
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
}

// IMP 0x000181d0  types v16@0:8
- (void)reapplyFilterForParameterReload {
      undefined8 uVar1;

      *(byte *)(self + (long)_parameterRefreshVariant) =
           *(byte *)(self + (long)_parameterRefreshVariant) ^ 1;
      *(undefined8 *)(self + (long)_appliedScale) = 0xbff0000000000000;
      *(undefined *)(self + (long)_filterAttached) = 0;
      objc_msgSend_applyFilters();
      objc_msgSend_updateSpecular(self);
      objc_msgSend_layer(self);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setNeedsDisplay();
      _objc_release(uVar1);
      objc_msgSend_setNeedsDisplayself->_specularLayer;
      return;
}

// IMP 0x00018254  types v16@0:8
- (void)lgInvalidateFilterContents {
      undefined8 uVar1;

      *(byte *)(self + (long)_parameterRefreshVariant) =
           *(byte *)(self + (long)_parameterRefreshVariant) ^ 1;
      *(undefined *)(self + (long)_filterAttached) = 0;
      objc_msgSend_applyFilters();
      objc_msgSend_layer(self);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setNeedsDisplay();
      _objc_release(uVar1);
      return;
}

// IMP 0x000182b0  types B16@0:8
- (BOOL)lgFilterAttached {
      return (bool)*(byte *)(self + (long)_filterAttached);
}

// IMP 0x000182c0  types @16@0:8
- (id)lgFilterType {
      return *(ID *)(self + (long)_lgFilterType);
}

// IMP 0x000182d0  types v24@0:8@16
- (void)setLgFilterType:(id)setLgFilterType {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x000182dc  types {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (id)lgShapeRect {
      return __return_storage_ptr__;
}

// IMP 0x000182f4  types d16@0:8
- (double)lgShapeCornerRadius {
      return *(double *)(self + (long)_lgShapeCornerRadius);
}

// IMP 0x00018304  types d16@0:8
- (double)lgBackdropZoom {
      return *(double *)(self + (long)_lgBackdropZoom);
}

// IMP 0x00018314  types v24@0:8d16
- (void)setLgBackdropZoom:(double)setLgBackdropZoom {
      *(double *)(self + (long)_lgBackdropZoom) = setLgBackdropZoom;
      return;
}

// IMP 0x00018324  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + (long)_lgFilterType,0);
      _objc_storeStrong(self + (long)_nativeBlurView,0);
      _objc_storeStrong(self + (long)_edge,0);
      _objc_storeStrong(self + (long)_specularMask,0);
      _objc_storeStrong(self + (long)_specularLayer,0);
      _objc_storeStrong(self + (long)_lgGroupName,0);
      return;
}

@end
