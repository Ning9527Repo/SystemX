//
//  SBXLiveBackdropView.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SBXLiveBackdropView.h"

@implementation SBXLiveBackdropView

// IMP 0x00006974  types @56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
- (id)initWithFrame:(id)initWithFrame groupName:(id)groupName {
      undefined8 uVar1;
      ID IVar2;
      undefined8 uVar3;
      long lVar4;
      long lVar5;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      undefined8 extraout_x1_04;
      undefined8 extraout_x1_05;
      undefined8 extraout_x1_06;
      undefined8 extraout_x1_07;
      undefined auVar6 [16];
      ID local_70;
      undefined *puStack_68;

      uVar1 = _objc_retain(groupName);
      puStack_68 = PTR_PTR_0006faf8;
      local_70 = self;
      IVar2 = _objc_msgSendSuper2(&local_70,PTR_s_initWithFrame__0006e5a8);
      if (IVar2 != 0) {
        DAT_000704d8 = DAT_000704d8 + 1;
        *(int *)(IVar2 + (long)_lgId) = DAT_000704d8;
        auVar6 = objc_msgSend_length(uVar1);
        if (auVar6._0_8_ == 0) {
          objc_msgSend_stringWithFormat_
                    (PTR__OBJC_CLASS___NSString_0006f828,auVar6._8_8_,
                     &cf_com_wkk_systembox_liquidglass_g_u);
          uVar3 = _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar3 = objc_msgSend_copy(uVar1);
        }
        _objc_storeStrong(IVar2 + (long)_lgGroupName,uVar3);
        _objc_release(uVar3);
        *(undefined8 *)(IVar2 + (long)_appliedScale) = 0xbff0000000000000;
        *(undefined8 *)(IVar2 + (long)_appliedSpecularAngle) = 0x7fefffffffffffff;
        *(undefined8 *)(IVar2 + (long)_cachedRadiusStep) = 0x8000000000000000;
        objc_msgSend_setUserInteractionEnabled_(IVar2,extraout_x1,0);
        objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_0006f830);
        auVar6 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setBackgroundColor_(IVar2,auVar6._8_8_,auVar6._0_8_);
        _objc_release(auVar6._0_8_);
        objc_msgSend_setOpaque_(IVar2,extraout_x1_00,0);
        objc_msgSend_setAutoresizingMask_(IVar2,extraout_x1_01,0x12);
        *(undefined *)(IVar2 + (long)_usesDynamicRadius) = 1;
        *(undefined8 *)(IVar2 + (long)_desiredNativeBlurRadius) = 0x4008000000000000;
        *(undefined *)(IVar2 + (long)_defaultSpecularEnabled) = 1;
        uVar3 = extraout_x1_02;
        if (DAT_000704b8 == 0) {
          objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_0006f8a8);
          lVar4 = _objc_retainAutoreleasedReturnValue();
          lVar5 = DAT_000704b8;
          DAT_000704b8 = lVar4;
          _objc_release(lVar5);
          uVar3 = extraout_x1_03;
        }
        if ((DAT_000717b8 & 1) == 0) {
          DAT_000717b8 = 1;
          uVar3 = _CFNotificationCenterGetDarwinNotifyCenter();
          _CFNotificationCenterAddObserver
                    (uVar3,0,FUN_000296f0,&cf_com_wkk_systembox_liquidglass_ParametersReloaded,0,4);
          uVar3 = extraout_x1_04;
        }
        objc_msgSend_addObject_(DAT_000704b8,uVar3,IVar2);
        uVar3 = extraout_x1_05;
        if (DAT_000704c0 == 0) {
          objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_0006f8a8);
          lVar4 = _objc_retainAutoreleasedReturnValue();
          lVar5 = DAT_000704c0;
          DAT_000704c0 = lVar4;
          _objc_release(lVar5);
          uVar3 = extraout_x1_06;
        }
        if ((DAT_000717b9 & 1) == 0) {
          DAT_000717b9 = 1;
          objc_msgSend_sharedApplication(PTR__OBJC_CLASS___UIApplication_0006f8e8);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          lVar5 = objc_msgSend_applicationState();
          DAT_000701b0 = lVar5 != 2;
          _objc_release(uVar3);
          objc_msgSend_defaultCenter(PTR__OBJC_CLASS___NSNotificationCenter_0006f8f0);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_mainQueue(PTR__OBJC_CLASS___NSOperationQueue_0006f8f8);
          auVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_addObserverForName_object_queue_usingBlock_
                    (uVar3,auVar6._8_8_,
                     *(undefined8 *)PTR__UIApplicationDidEnterBackgroundNotification_00064178,0,
                     auVar6._0_8_,&PTR___NSConcreteGlobalBlock_000646f8);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(auVar6._0_8_);
          objc_msgSend_mainQueue(PTR__OBJC_CLASS___NSOperationQueue_0006f8f8);
          auVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_addObserverForName_object_queue_usingBlock_
                    (uVar3,auVar6._8_8_,
                     *(undefined8 *)PTR__UIApplicationDidBecomeActiveNotification_00064170,0,
                     auVar6._0_8_,&PTR___NSConcreteGlobalBlock_00064718);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(auVar6._0_8_);
          objc_msgSend_mainQueue(PTR__OBJC_CLASS___NSOperationQueue_0006f8f8);
          auVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_addObserverForName_object_queue_usingBlock_
                    (uVar3,auVar6._8_8_,
                     *(undefined8 *)PTR__UIApplicationWillTerminateNotification_00064180,0,auVar6._0_8_,
                     &PTR___NSConcreteGlobalBlock_00064738);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(auVar6._0_8_);
          _objc_release(uVar3);
          uVar3 = extraout_x1_07;
        }
        objc_msgSend_addObject_(DAT_000704c0,uVar3,IVar2);
        _objc_retain(IVar2);
      }
      _objc_release(uVar1);
      _objc_release(IVar2);
      return IVar2;
}

// IMP 0x00006da0  types v16@0:8
- (void)dealloc {
      undefined8 extraout_x1;
      ID local_30;
      undefined *puStack_28;

      objc_msgSend_removeObject_(DAT_000704b8,_cmd,self);
      objc_msgSend_removeObject_(DAT_000704c0,extraout_x1,self);
      FUN_00006e30();
      puStack_28 = PTR_PTR_0006faf8;
      local_30 = self;
      _objc_msgSendSuper2(&local_30,PTR_s_dealloc_0006e070);
      return;
}

// IMP 0x00007050  types @16@0:8
- (id)lgSpecularEnabledOverride {
      ID IVar1;

      IVar1 = _objc_retainAutoreleaseReturnValue
                        self->_lgSpecularEnabledOverride;
      return IVar1;
}

// IMP 0x00007060  types v24@0:8@16
- (void)setLgSpecularEnabledOverride:(id)setLgSpecularEnabledOverride {
      long lVar1;
      ulong uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      long lVar5;
      undefined auVar6 [16];

      auVar6 = _objc_retain(setLgSpecularEnabledOverride);
      lVar1 = auVar6._0_8_;
      lVar5 = (long)_lgSpecularEnabledOverride;
      if ((*(long *)(self + lVar5) != lVar1) &&
         (uVar2 = objc_msgSend_isEqualToNumber_(*(long *)(self + lVar5),auVar6._8_8_,lVar1),
         (uVar2 & 1) == 0)) {
        uVar3 = objc_msgSend_copy(lVar1);
        uVar4 = *(undefined8 *)(self + lVar5);
        *(undefined8 *)(self + lVar5) = uVar3;
        _objc_release(uVar4);
        objc_msgSend_updateSpecular(self);
      }
      _objc_release(lVar1);
      return;
}

// IMP 0x000070e8  types v16@0:8
- (void)invalidateEffectiveFilterType {
      undefined8 uVar1;

      *(undefined *)(self + (long)_hasEffectiveFilterCache) = 0;
      uVar1 = *(undefined8 *)(self + (long)_cachedEffectiveFilterType);
      *(undefined8 *)(self + (long)_cachedEffectiveFilterType) = 0;
      _objc_release(uVar1);
      *(undefined8 *)(self + (long)_cachedRadiusStep) = 0x8000000000000000;
      return;
}

// IMP 0x00007134  types @16@0:8
- (id)effectiveFilterType {
      undefined8 uVar1;
      long lVar2;
      ID IVar3;
      SEL extraout_x1;
      SEL extraout_x1_00;
      SEL extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 uVar4;
      long lVar5;
      long lVar6;
      double dVar7;
      double dVar8;
      undefined auVar9 [16];

      if (*(char *)(self + (long)_usesDynamicRadius) != '\0') {
        objc_msgSend_bounds(self);
        auVar9 = _CGRectIsEmpty();
        _cmd = auVar9._8_8_;
        if ((auVar9 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          objc_msgSend_bounds(self);
          dVar7 = (double)_CGRectGetWidth();
          objc_msgSend_bounds(self);
          dVar8 = (double)_CGRectGetHeight();
          objc_msgSend_bounds(self);
          if (dVar8 <= dVar7) {
            dVar7 = (double)_CGRectGetHeight();
            _cmd = extraout_x1_00;
          }
          else {
            dVar7 = (double)_CGRectGetWidth();
            _cmd = extraout_x1;
          }
          dVar8 = 0.0;
          if (0.0 < dVar7) {
            objc_msgSend_layer(self);
            uVar1 = _objc_retainAutoreleasedReturnValue();
            dVar8 = (double)objc_msgSend_cornerRadius();
            dVar8 = dVar8 / dVar7;
            _objc_release(uVar1);
            _cmd = extraout_x1_01;
          }
          dVar7 = (double)NEON_fmin(dVar8,0x3fe0000000000000);
          if (dVar7 <= 0.0) {
            dVar7 = 0.0;
          }
          lVar5 = (long)(dVar7 * 32.0);
          goto LAB_00007214;
        }
      }
      lVar5 = -1;
    LAB_00007214:
      objc_msgSend_traitCollection(self,_cmd);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      lVar2 = objc_msgSend_userInterfaceStyle();
      _objc_release(uVar1);
      lVar6 = (long)_hasEffectiveFilterCache;
      if (((*(char *)(self + lVar6) == '\0') ||
          (lVar5 != *(long *)(self + (long)_cachedRadiusStep))) ||
         (lVar2 != *(long *)(self + (long)_cachedInterfaceStyle))) {
        auVar9._8_8_ = extraout_x1_02;
        auVar9._0_8_ = &cf_com_wkk_systembox_liquidglassdock;
        if (-1 < lVar5) {
          objc_msgSend_stringByAppendingFormat_
                    (&cf_com_wkk_systembox_liquidglassdock,extraout_x1_02,&cf__r_ld);
          auVar9 = _objc_retainAutoreleasedReturnValue();
        }
        uVar4 = auVar9._0_8_;
        uVar1 = uVar4;
        if (lVar2 == 2) {
          objc_msgSend_stringByAppendingString_(uVar4,auVar9._8_8_,&cf__dark);
          uVar1 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar4);
        }
        _objc_storeStrong(self + (long)_cachedEffectiveFilterType,uVar1);
        *(long *)(self + (long)_cachedRadiusStep) = lVar5;
        *(long *)(self + (long)_cachedInterfaceStyle) = lVar2;
        *(undefined *)(self + lVar6) = 1;
      }
      else {
        uVar1 = _objc_retainself->_cachedEffectiveFilterType;
      }
      IVar3 = _objc_autoreleaseReturnValue(uVar1);
      return IVar3;
}

// IMP 0x00007354  types v16@0:8
- (void)didMoveToWindow {
      long lVar1;
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_0006faf8;
      local_30 = self;
      _objc_msgSendSuper2(&local_30,PTR_s_didMoveToWindow_0006e0f0);
      objc_msgSend_window(self);
      lVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar1 != 0) {
        objc_msgSend_applyFilters(self);
        objc_msgSend_setNeedsLayout(self);
      }
      FUN_00006e30();
      return;
}

// IMP 0x000073c4  types v16@0:8
- (void)didMoveToSuperview {
      ID local_20;
      undefined *puStack_18;

      puStack_18 = PTR_PTR_0006faf8;
      local_20 = self;
      _objc_msgSendSuper2(&local_20,PTR_s_didMoveToSuperview_0006e0e8);
      FUN_00006e30();
      return;
}

// IMP 0x000073fc  types v20@0:8B16
- (void)setHidden:(BOOL)setHidden {
      bool bVar1;
      ID local_30;
      undefined *puStack_28;

      bVar1 = objc_msgSend_isHidden();
      if (bVar1 != setHidden) {
        puStack_28 = PTR_PTR_0006faf8;
        local_30 = self;
        _objc_msgSendSuper2(&local_30,PTR_s_setHidden__0006f050,setHidden);
        FUN_00006e30();
      }
      return;
}

// IMP 0x00007454  types v24@0:8d16
- (void)setAlpha:(double)setAlpha {
      double dVar1;
      ID local_40;
      undefined *puStack_38;

      dVar1 = (double)objc_msgSend_alpha();
      if (DAT_00053648 < ABS(dVar1 - setAlpha)) {
        puStack_38 = PTR_PTR_0006faf8;
        local_40 = self;
        _objc_msgSendSuper2(setAlpha,&local_40,PTR_s_setAlpha__0006ee78);
        FUN_00006e30();
      }
      return;
}

// IMP 0x000074c0  types v24@0:8@16
- (void)traitCollectionDidChange:(id)traitCollectionDidChange {
      undefined8 uVar1;
      long lVar2;
      undefined8 uVar3;
      long lVar4;
      ID local_50;
      undefined *puStack_48;

      uVar1 = _objc_retain(traitCollectionDidChange);
      puStack_48 = PTR_PTR_0006faf8;
      local_50 = self;
      _objc_msgSendSuper2(&local_50,PTR_s_traitCollectionDidChange__0006f628,uVar1);
      lVar2 = objc_msgSend_userInterfaceStyle(uVar1);
      objc_msgSend_traitCollection(self);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      lVar4 = objc_msgSend_userInterfaceStyle();
      _objc_release(uVar3);
      if (lVar2 != lVar4) {
        objc_msgSend_invalidateEffectiveFilterType(self);
        *(undefined *)(self + (long)_filterAttached) = 0;
        *(undefined *)(self + (long)_waitingForFilterRegistration) = 0;
        uVar3 = *(undefined8 *)(self + (long)_appliedFilterType);
        *(undefined8 *)(self + (long)_appliedFilterType) = 0;
        _objc_release(uVar3);
        objc_msgSend_applyFilters(self);
      }
      _objc_release(uVar1);
      return;
}

// IMP 0x000075c0  types v16@0:8
- (void)layoutSubviews {
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_0006faf8;
      local_30 = self;
      _objc_msgSendSuper2(&local_30,PTR_s_layoutSubviews_0006e8c8);
      objc_msgSend_applyFilters(self);
      objc_msgSend_updateSpecular(self);
      return;
}

// IMP 0x00007610  types B16@0:8
- (BOOL)lgMotionHighlightsVisible {
      double dVar1;
      ulong uVar2;
      long lVar3;
      long lVar4;
      long lVar5;
      bool bVar6;
      double dVar7;

      if ((*(long *)(self + (long)_specular) == 0) ||
         (uVar2 = objc_msgSend_isHidden(), (uVar2 & 1) != 0)) {
    LAB_00007640:
        bVar6 = 0;
      }
      else {
        objc_msgSend_window(self);
        lVar3 = _objc_retainAutoreleasedReturnValue();
        if ((lVar3 == 0) ||
           ((uVar2 = objc_msgSend_isHidden(self), (uVar2 & 1) != 0 ||
            (dVar7 = (double)objc_msgSend_alpha(self), dVar1 = DAT_00053650, dVar7 <= DAT_00053650)))
           ) {
    LAB_00007704:
          bVar6 = 0;
        }
        else {
          objc_msgSend_bounds(self);
          uVar2 = _CGRectIsEmpty();
          _objc_release(lVar3);
          if ((uVar2 & 1) != 0) goto LAB_00007640;
          objc_msgSend_superview(self);
          lVar4 = _objc_retainAutoreleasedReturnValue();
          if (lVar4 == 0) {
            return 1;
          }
          bVar6 = 1;
          do {
            uVar2 = objc_msgSend_isHidden(lVar4);
            lVar3 = lVar4;
            if (((uVar2 & 1) != 0) || (dVar7 = (double)objc_msgSend_alpha(lVar4), dVar7 <= dVar1))
            goto LAB_00007704;
            objc_msgSend_superview(lVar4);
            lVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_release(lVar4);
            lVar3 = 0;
            lVar4 = lVar5;
          } while (lVar5 != 0);
        }
        _objc_release(lVar3);
      }
      return bVar6;
}

// IMP 0x00007748  types v32@0:8d16#24
- (void)updateNativeBlurOverlayWithRadius:(double)updateNativeBlurOverlayWithRadius filterClass:(Class)filterClass {
      ulong *puVar1;
      undefined auVar2 [16];
      int iVar3;
      uint uVar4;
      ulong uVar5;
      undefined8 uVar6;
      long lVar7;
      undefined8 uVar8;
      undefined8 uVar9;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      undefined8 extraout_x1_04;
      undefined8 extraout_x1_05;
      undefined8 extraout_x1_06;
      undefined8 extraout_x1_07;
      undefined8 extraout_x1_08;
      undefined8 extraout_x1_09;
      undefined8 extraout_x1_10;
      ulong uVar10;
      ulong uVar11;
      undefined8 uVar12;
      undefined8 uVar13;
      double dVar14;
      double dVar15;
      double in_d1;
      undefined8 in_d2;
      undefined8 in_d3;
      undefined8 uVar16;
      undefined auVar17 [16];
      ulong local_90;
      long local_88;

      local_88 = *(long *)PTR____stack_chk_guard_00064268;
      puVar1 = (ulong *)(self + (long)_nativeBlurLayer);
      if (updateNativeBlurOverlayWithRadius <= 0.0 || filterClass == 0) {
        if (*puVar1 != 0) {
          objc_msgSend_removeFromSuperlayer();
          uVar5 = *puVar1;
          *puVar1 = 0;
          _objc_release(uVar5);
          *(undefined8 *)(self + (long)_nativeBlurRadius) = 0;
        }
        goto LAB_00007c2c;
      }
      if ((*puVar1 == 0) ||
         (in_d1 = DAT_00053648,
         DAT_00053648 < ABS(*(double *)(self + (long)_nativeBlurRadius) - updateNativeBlurOverlayWithRadius))) {
        uVar6 = _sel_registerName("filterWithType:");
        uVar5 = _objc_opt_respondsToSelector(filterClass,uVar6);
        if ((uVar5 & 1) == 0) {
    LAB_00007834:
          uVar6 = _sel_registerName("filterWithName:");
          auVar17 = _objc_opt_respondsToSelector(filterClass,uVar6);
          _cmd = auVar17._8_8_;
          if ((auVar17 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_00007904;
          _objc_msgSend(filterClass,uVar6,&cf_gaussianBlur);
          auVar17 = _objc_retainAutoreleasedReturnValue();
          lVar7 = auVar17._0_8_;
          if (lVar7 != 0) goto LAB_00007878;
        }
        else {
          _objc_msgSend(filterClass,uVar6,&cf_gaussianBlur);
          lVar7 = _objc_retainAutoreleasedReturnValue();
          if (lVar7 == 0) goto LAB_00007834;
    LAB_00007878:
          objc_msgSend_numberWithDouble_(updateNativeBlurOverlayWithRadius,PTR__OBJC_CLASS___NSNumber_0006f850);
          auVar17 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setValue_forKey_(lVar7,auVar17._8_8_,auVar17._0_8_,&cf_inputRadius);
          _objc_release(auVar17._0_8_);
          objc_msgSend_setValue_forKey_
                    (lVar7,extraout_x1,PTR____kCFBooleanTrue_00064248,&cf_inputNormalizeEdges);
          auVar17._8_8_ = extraout_x1_00;
          auVar17._0_8_ = lVar7;
        }
      }
      else {
    LAB_00007904:
        auVar2._8_8_ = 0;
        auVar2._0_8_ = _cmd;
        auVar17 = auVar2 << 0x40;
      }
      uVar11 = auVar17._0_8_;
      uVar5 = *puVar1;
      if ((uVar5 | uVar11) != 0) {
        if (uVar5 == 0) {
          lVar7 = FUN_00006940(0,auVar17._8_8_);
          if (lVar7 == 0) goto LAB_00007c24;
          objc_msgSend_layer();
          uVar5 = _objc_retainAutoreleasedReturnValue();
          uVar10 = *puVar1;
          *puVar1 = uVar5;
          _objc_release(uVar10);
          objc_msgSend_setValue_forKey_
                    (*puVar1,extraout_x1_01,PTR____kCFBooleanFalse_00064240,
                     &cf_layerUsesCoreImageFilters);
          objc_msgSend_setValue_forKey_
                    (*puVar1,extraout_x1_02,PTR____kCFBooleanTrue_00064248,&cf_windowServerAware);
          uVar5 = *puVar1;
          objc_msgSend_stringByAppendingString_
                    (*(undefined8 *)(self + (long)_lgGroupName),extraout_x1_03,&cf__nativeblur);
          auVar17 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setValue_forKey_(uVar5,auVar17._8_8_,auVar17._0_8_,&cf_groupName);
          _objc_release(auVar17._0_8_);
          objc_msgSend_setValue_forKey_
                    (*puVar1,extraout_x1_04,&cf_com_wkk_systembox_liquidglass_nativeblur,
                     &cf_groupNamespace);
          objc_msgSend_setValue_forKey_
                    (*puVar1,extraout_x1_05,PTR____kCFBooleanTrue_00064248,&cf_ignoresScreenClip);
          objc_msgSend_setValue_forKey_
                    (*puVar1,extraout_x1_06,&PTR__OBJC_CLASS___NSConstantDoubleNumber_00069050,&cf_scale
                    );
          objc_msgSend_layer(self);
          auVar17 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_insertSublayer_atIndex_(auVar17._0_8_,auVar17._8_8_,*puVar1,0);
          _objc_release(auVar17._0_8_);
          uVar5 = *puVar1;
        }
        objc_msgSend_cornerCurve(uVar5);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_layer(self);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_cornerCurve();
        uVar9 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar6);
        uVar12 = objc_msgSend_frame(*puVar1);
        dVar14 = in_d1;
        uVar6 = in_d2;
        uVar16 = in_d3;
        uVar13 = objc_msgSend_bounds(self);
        iVar3 = _CGRectEqualToRect(uVar12,in_d1,in_d2,in_d3,uVar13,dVar14,uVar6,uVar16);
        if (iVar3 == 0) {
    LAB_00007b20:
          uVar4 = 1;
    LAB_00007b24:
          objc_msgSend_begin(PTR__OBJC_CLASS___CATransaction_0006f838);
          objc_msgSend_setDisableActions_(PTR__OBJC_CLASS___CATransaction_0006f838,extraout_x1_07,1);
          uVar6 = extraout_x1_08;
          if (uVar4 != 0) {
            objc_msgSend_bounds(self);
            objc_msgSend_setFrame_(*puVar1);
            objc_msgSend_layer(self);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_cornerRadius();
            objc_msgSend_setCornerRadius_(*puVar1);
            _objc_release(uVar6);
            objc_msgSend_layer(self);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_cornerCurve();
            auVar17 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setCornerCurve_(*puVar1,auVar17._8_8_,auVar17._0_8_);
            _objc_release(auVar17._0_8_);
            _objc_release(uVar6);
            objc_msgSend_setMasksToBounds_(*puVar1,extraout_x1_09,1);
            uVar6 = extraout_x1_10;
          }
          if (uVar11 != 0) {
            local_90 = uVar11;
            objc_msgSend_arrayWithObjects_count_(PTR__OBJC_CLASS___NSArray_0006f840,uVar6,&local_90,1);
            auVar17 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setFilters_(*puVar1,auVar17._8_8_,auVar17._0_8_);
            _objc_release(auVar17._0_8_);
            *(double *)(self + (long)_nativeBlurRadius) = updateNativeBlurOverlayWithRadius;
          }
          objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_0006f838);
        }
        else {
          dVar14 = (double)objc_msgSend_cornerRadius(*puVar1);
          objc_msgSend_layer(self);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          dVar15 = (double)objc_msgSend_cornerRadius();
          if ((DAT_00053648 < ABS(dVar14 - dVar15)) ||
             (iVar3 = objc_msgSend_masksToBounds(*puVar1), iVar3 == 0)) {
            _objc_release(uVar6);
            goto LAB_00007b20;
          }
          uVar4 = FUN_00007d58(uVar8,uVar9);
          _objc_release(uVar6);
          if ((uVar4 & 1 | (uint)(uVar11 != 0)) != 0) goto LAB_00007b24;
        }
        _objc_release(uVar9);
        _objc_release(uVar8);
      }
    LAB_00007c24:
      _objc_release(uVar11);
    LAB_00007c2c:
      if (*(long *)PTR____stack_chk_guard_00064268 == local_88) {
        return;
      }
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
}

// IMP 0x00007de0  types v16@0:8
- (void)updateSpecular {
      int iVar1;
      uint uVar2;
      uint uVar3;
      ulong uVar4;
      undefined8 uVar5;
      undefined8 uVar6;
      undefined8 uVar7;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      undefined8 extraout_x1_04;
      undefined8 extraout_x1_05;
      undefined8 extraout_x1_06;
      undefined8 extraout_x1_07;
      undefined8 extraout_x1_08;
      undefined8 extraout_x1_09;
      long lVar8;
      long lVar9;
      long lVar10;
      long lVar11;
      long lVar12;
      undefined8 uVar13;
      undefined8 uVar14;
      double dVar15;
      double dVar16;
      double in_d1;
      undefined8 in_d2;
      undefined8 in_d3;
      undefined8 uVar17;
      double dVar18;
      double dVar19;
      undefined auVar20 [16];
      undefined8 local_c8;
      undefined8 uStack_c0;
      undefined8 local_b8;
      undefined8 local_b0;
      undefined8 uStack_a8;
      undefined8 local_a0;
      long local_98;

      local_98 = *(long *)PTR____stack_chk_guard_00064268;
      objc_msgSend_bounds();
      iVar1 = _CGRectIsEmpty();
      if (iVar1 == 0) {
        if (*(long *)(self + (long)_lgSpecularEnabledOverride) == 0) {
          if (*(char *)(self + (long)_defaultSpecularEnabled) != '\0') goto LAB_00007ef4;
        }
        else {
          uVar4 = objc_msgSend_boolValue();
          if ((uVar4 & 1) != 0) {
    LAB_00007ef4:
            lVar11 = (long)_specular;
            lVar8 = *(long *)(self + lVar11);
            if (lVar8 == 0) {
              objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_0006f830);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = _objc_retainAutorelease();
              objc_msgSend_CGColor();
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar5);
              dVar15 = (double)___sincos_stret(DAT_00070130);
              objc_msgSend_layer(PTR__OBJC_CLASS___CAGradientLayer_0006f848);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              uVar7 = *(undefined8 *)(self + lVar11);
              *(undefined8 *)(self + lVar11) = uVar5;
              _objc_release(uVar7);
              uVar5 = DAT_00053658;
              objc_msgSend_colorWithWhite_alpha_
                        (0x3ff0000000000000,DAT_00053658,PTR__OBJC_CLASS___UIColor_0006f830);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = _objc_retainAutorelease();
              local_b0 = objc_msgSend_CGColor();
              uStack_a8 = uVar6;
              objc_msgSend_colorWithWhite_alpha_
                        (0x3ff0000000000000,uVar5,PTR__OBJC_CLASS___UIColor_0006f830);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = _objc_retainAutorelease();
              auVar20 = objc_msgSend_CGColor();
              local_a0 = auVar20._0_8_;
              objc_msgSend_arrayWithObjects_count_
                        (PTR__OBJC_CLASS___NSArray_0006f840,auVar20._8_8_,&local_b0,3);
              auVar20 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setColors_(*(undefined8 *)(self + lVar11),auVar20._8_8_,auVar20._0_8_);
              _objc_release(auVar20._0_8_);
              _objc_release(uVar5);
              _objc_release(uVar7);
              objc_msgSend_setLocations_
                        (*(undefined8 *)(self + lVar11),extraout_x1_02,
                         &PTR__OBJC_CLASS___NSConstantArray_000692f0);
              dVar16 = in_d1 * 0.5 + 0.5;
              dVar18 = dVar15 * 0.5 + 0.5;
              objc_msgSend_setStartPoint_(dVar16,dVar18,*(undefined8 *)(self + lVar11));
              dVar19 = 0.5 - in_d1 * 0.5;
              in_d1 = 0.5 - dVar15 * 0.5;
              objc_msgSend_setEndPoint_(dVar19,in_d1,*(undefined8 *)(self + lVar11));
              objc_msgSend_layer(PTR__OBJC_CLASS___CALayer_0006f820);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              lVar10 = (long)_specularMask;
              uVar7 = *(undefined8 *)(self + lVar10);
              *(undefined8 *)(self + lVar10) = uVar5;
              _objc_release(uVar7);
              objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_0006f830);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = _objc_retainAutorelease();
              auVar20 = objc_msgSend_CGColor();
              objc_msgSend_setBackgroundColor_
                        (*(undefined8 *)(self + lVar10),auVar20._8_8_,auVar20._0_8_);
              _objc_release(uVar5);
              objc_msgSend_blackColor(PTR__OBJC_CLASS___UIColor_0006f830);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = _objc_retainAutorelease();
              auVar20 = objc_msgSend_CGColor();
              objc_msgSend_setBorderColor_
                        (*(undefined8 *)(self + lVar10),auVar20._8_8_,auVar20._0_8_);
              _objc_release(uVar5);
              objc_msgSend_setMask_
                        (*(undefined8 *)(self + lVar11),extraout_x1_03,
                         *(undefined8 *)(self + lVar10));
              objc_msgSend_layer(self);
              auVar20 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_addSublayer_(auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(self + lVar11));
              _objc_release(auVar20._0_8_);
              objc_msgSend_layer(PTR__OBJC_CLASS___CAGradientLayer_0006f848);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              lVar12 = (long)_specularBoost;
              uVar7 = *(undefined8 *)(self + lVar12);
              *(undefined8 *)(self + lVar12) = uVar5;
              _objc_release(uVar7);
              uVar5 = DAT_00053660;
              objc_msgSend_colorWithWhite_alpha_
                        (0x3ff0000000000000,DAT_00053660,PTR__OBJC_CLASS___UIColor_0006f830);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = _objc_retainAutorelease();
              local_c8 = objc_msgSend_CGColor();
              uStack_c0 = uVar6;
              objc_msgSend_colorWithWhite_alpha_
                        (0x3ff0000000000000,uVar5,PTR__OBJC_CLASS___UIColor_0006f830);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = _objc_retainAutorelease();
              auVar20 = objc_msgSend_CGColor();
              local_b8 = auVar20._0_8_;
              objc_msgSend_arrayWithObjects_count_
                        (PTR__OBJC_CLASS___NSArray_0006f840,auVar20._8_8_,&local_c8,3);
              auVar20 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setColors_(*(undefined8 *)(self + lVar12),auVar20._8_8_,auVar20._0_8_);
              _objc_release(auVar20._0_8_);
              _objc_release(uVar5);
              _objc_release(uVar7);
              objc_msgSend_setLocations_
                        (*(undefined8 *)(self + lVar12),extraout_x1_04,
                         &PTR__OBJC_CLASS___NSConstantArray_00069308);
              objc_msgSend_setStartPoint_(dVar16,dVar18,*(undefined8 *)(self + lVar12));
              objc_msgSend_setEndPoint_(dVar19,in_d1,*(undefined8 *)(self + lVar12));
              objc_msgSend_setCompositingFilter_
                        (*(undefined8 *)(self + lVar12),extraout_x1_05,&cf_overlayBlendMode);
              objc_msgSend_layer(PTR__OBJC_CLASS___CALayer_0006f820);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              lVar9 = (long)_specularBoostMask;
              uVar7 = *(undefined8 *)(self + lVar9);
              *(undefined8 *)(self + lVar9) = uVar5;
              _objc_release(uVar7);
              objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_0006f830);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = _objc_retainAutorelease();
              auVar20 = objc_msgSend_CGColor();
              objc_msgSend_setBackgroundColor_
                        (*(undefined8 *)(self + lVar9),auVar20._8_8_,auVar20._0_8_);
              _objc_release(uVar5);
              objc_msgSend_blackColor(PTR__OBJC_CLASS___UIColor_0006f830);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = _objc_retainAutorelease();
              auVar20 = objc_msgSend_CGColor();
              objc_msgSend_setBorderColor_(*(undefined8 *)(self + lVar9),auVar20._8_8_,auVar20._0_8_)
              ;
              _objc_release(uVar5);
              objc_msgSend_setMask_
                        (*(undefined8 *)(self + lVar12),extraout_x1_06,
                         *(undefined8 *)(self + lVar9));
              objc_msgSend_layer(self);
              auVar20 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_addSublayer_(auVar20._0_8_,auVar20._8_8_,*(undefined8 *)(self + lVar12));
              _objc_release(auVar20._0_8_);
              _objc_release(uVar6);
            }
            else {
              lVar10 = (long)_specularMask;
            }
            objc_msgSend_cornerCurve(*(undefined8 *)(self + lVar10));
            uVar5 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_layer(self);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_cornerCurve();
            uVar7 = _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            if (lVar8 == 0) {
    LAB_00008404:
              uVar3 = 1;
            }
            else {
              uVar13 = objc_msgSend_frame(*(undefined8 *)(self + lVar11));
              dVar15 = in_d1;
              uVar6 = in_d2;
              uVar17 = in_d3;
              uVar14 = objc_msgSend_bounds(self);
              iVar1 = _CGRectEqualToRect(uVar13,in_d1,in_d2,in_d3,uVar14,dVar15,uVar6,uVar17);
              if (iVar1 == 0) goto LAB_00008404;
              uVar13 = objc_msgSend_frame(*(undefined8 *)(self + lVar10));
              dVar15 = in_d1;
              uVar6 = in_d2;
              uVar17 = in_d3;
              uVar14 = objc_msgSend_bounds(self);
              iVar1 = _CGRectEqualToRect(uVar13,in_d1,in_d2,in_d3,uVar14,dVar15,uVar6,uVar17);
              if (iVar1 == 0) goto LAB_00008404;
              dVar15 = (double)objc_msgSend_cornerRadius(*(undefined8 *)(self + lVar10));
              objc_msgSend_layer(self);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              dVar16 = (double)objc_msgSend_cornerRadius();
              if (ABS(dVar15 - dVar16) <= DAT_00053648) {
                uVar3 = FUN_00007d58(uVar5,uVar7);
              }
              else {
                uVar3 = 1;
              }
              _objc_release(uVar6);
            }
            uVar4 = objc_msgSend_isHidden(*(undefined8 *)(self + lVar11));
            if (((uVar4 & 1) != 0) ||
               (uVar2 = objc_msgSend_isHiddenself->_specularBoost,
               ((uVar3 | uVar2) & 1) != 0)) {
              objc_msgSend_begin(PTR__OBJC_CLASS___CATransaction_0006f838);
              objc_msgSend_setDisableActions_(PTR__OBJC_CLASS___CATransaction_0006f838,extraout_x1_07,1)
              ;
              objc_msgSend_setHidden_(*(undefined8 *)(self + lVar11),extraout_x1_08,0);
              lVar9 = (long)_specularBoost;
              objc_msgSend_setHidden_(*(undefined8 *)(self + lVar9),extraout_x1_09,0);
              if (uVar3 != 0) {
                objc_msgSend_bounds(self);
                objc_msgSend_setFrame_(*(undefined8 *)(self + lVar11));
                objc_msgSend_bounds(self);
                objc_msgSend_setFrame_(*(undefined8 *)(self + lVar9));
                objc_msgSend_bounds(self);
                objc_msgSend_setFrame_(*(undefined8 *)(self + lVar10));
                objc_msgSend_bounds(self);
                lVar11 = (long)_specularBoostMask;
                objc_msgSend_setFrame_(*(undefined8 *)(self + lVar11));
                objc_msgSend_layer(self);
                uVar6 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_cornerRadius();
                objc_msgSend_setCornerRadius_(*(undefined8 *)(self + lVar10));
                _objc_release(uVar6);
                objc_msgSend_layer(self);
                uVar6 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_cornerRadius();
                objc_msgSend_setCornerRadius_(*(undefined8 *)(self + lVar11));
                _objc_release(uVar6);
                objc_msgSend_layer(self);
                uVar6 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_cornerCurve();
                auVar20 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setCornerCurve_
                          (*(undefined8 *)(self + lVar10),auVar20._8_8_,auVar20._0_8_);
                _objc_release(auVar20._0_8_);
                _objc_release(uVar6);
                objc_msgSend_layer(self);
                uVar6 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_cornerCurve();
                auVar20 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setCornerCurve_
                          (*(undefined8 *)(self + lVar11),auVar20._8_8_,auVar20._0_8_);
                _objc_release(auVar20._0_8_);
                _objc_release(uVar6);
                objc_msgSend_setBorderWidth_(0x3fe8000000000000,*(undefined8 *)(self + lVar10));
                objc_msgSend_setBorderWidth_(0x3fe8000000000000,*(undefined8 *)(self + lVar11));
              }
              objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_0006f838);
              if (lVar8 == 0) {
                *(undefined8 *)(self + (long)_appliedSpecularAngle) = DAT_00070130;
              }
              else {
                objc_msgSend_applySpecularAngle_(self);
              }
            }
            FUN_00006e30();
            _objc_release(uVar7);
            _objc_release(uVar5);
            if (*(long *)PTR____stack_chk_guard_00064268 == local_98) {
              return;
            }
            goto LAB_00008634;
          }
        }
        lVar8 = (long)_specular;
        if ((*(long *)(self + lVar8) != 0) && (iVar1 = objc_msgSend_isHidden(), iVar1 == 0)) {
          objc_msgSend_begin(PTR__OBJC_CLASS___CATransaction_0006f838);
          objc_msgSend_setDisableActions_(PTR__OBJC_CLASS___CATransaction_0006f838,extraout_x1,1);
          objc_msgSend_setHidden_(*(undefined8 *)(self + lVar8),extraout_x1_00,1);
          objc_msgSend_setHidden_(*(undefined8 *)(self + (long)_specularBoost),extraout_x1_01,1);
          objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_0006f838);
        }
      }
      if (*(long *)PTR____stack_chk_guard_00064268 == local_98) {
        FUN_00006e30();
        return;
      }
    LAB_00008634:
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
}

// IMP 0x00008714  types v24@0:8d16
- (void)applySpecularAngle:(double)applySpecularAngle {
      ulong uVar1;
      undefined8 extraout_x1;
      long lVar2;
      long lVar3;
      double dVar4;
      double dVar5;
      double dVar6;
      double dVar7;

      lVar3 = (long)_specular;
      if ((*(long *)(self + lVar3) != 0) && (uVar1 = objc_msgSend_isHidden(), (uVar1 & 1) == 0)) {
        lVar2 = (long)_appliedSpecularAngle;
        dVar4 = *(double *)(self + lVar2);
        dVar7 = 1.797693134862316e+308;
        if (dVar4 != 1.797693134862316e+308) {
          ___sincos_stret(applySpecularAngle - dVar4);
          dVar4 = (double)_atan2();
          dVar7 = DAT_00053648;
          if (ABS(dVar4) < DAT_00053648) {
            return;
          }
        }
        dVar4 = (double)___sincos_stret(applySpecularAngle);
        dVar5 = dVar7 * 0.5 + 0.5;
        dVar6 = dVar4 * 0.5 + 0.5;
        dVar7 = 0.5 - dVar7 * 0.5;
        dVar4 = 0.5 - dVar4 * 0.5;
        objc_msgSend_begin(PTR__OBJC_CLASS___CATransaction_0006f838);
        objc_msgSend_setDisableActions_(PTR__OBJC_CLASS___CATransaction_0006f838,extraout_x1,1);
        objc_msgSend_setStartPoint_(dVar5,dVar6,*(undefined8 *)(self + lVar3));
        objc_msgSend_setEndPoint_(dVar7,dVar4,*(undefined8 *)(self + lVar3));
        lVar3 = (long)_specularBoost;
        objc_msgSend_setStartPoint_(dVar5,dVar6,*(undefined8 *)(self + lVar3));
        objc_msgSend_setEndPoint_(dVar7,dVar4,*(undefined8 *)(self + lVar3));
        objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_0006f838);
        *(double *)(self + lVar2) = applySpecularAngle;
      }
      return;
}

// IMP 0x00008838  types v16@0:8
- (void)applyFilters {
      undefined8 uVar1;
      long lVar2;
      undefined8 uVar3;
      ulong uVar4;
      undefined8 uVar5;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 uVar6;
      long lVar7;
      long lVar8;
      double dVar9;
      double in_d2;
      double in_d3;
      double dVar10;
      undefined auVar11 [16];
      long local_80;
      long local_78;

      local_78 = *(long *)PTR____stack_chk_guard_00064268;
      objc_msgSend_layer();
      uVar1 = _objc_retainAutoreleasedReturnValue();
      lVar2 = FUN_00006940();
      if (lVar2 != 0) {
        auVar11 = _objc_opt_isKindOfClass(uVar1);
        if ((auVar11 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          lVar2 = (long)_backdropConfigured;
          if (*(char *)(self + lVar2) == '\0') {
            objc_msgSend_setValue_forKey_
                      (uVar1,auVar11._8_8_,PTR____kCFBooleanFalse_00064240,&cf_layerUsesCoreImageFilters
                      );
            objc_msgSend_setValue_forKey_
                      (uVar1,extraout_x1,PTR____kCFBooleanTrue_00064248,&cf_windowServerAware);
            objc_msgSend_setValue_forKey_
                      (uVar1,extraout_x1_00,*(undefined8 *)(self + (long)_lgGroupName),&cf_groupName)
            ;
            objc_msgSend_setValue_forKey_
                      (uVar1,extraout_x1_01,&cf_com_wkk_systembox_liquidglass,&cf_groupNamespace);
            objc_msgSend_setValue_forKey_
                      (uVar1,extraout_x1_02,PTR____kCFBooleanTrue_00064248,&cf_ignoresScreenClip);
            *(undefined *)(self + lVar2) = 1;
          }
          objc_msgSend_bounds(self);
          lVar2 = (long)_hasScaleInputSize;
          dVar10 = 0.75;
          if (1.0 < in_d2 * in_d3) {
            dVar10 = SQRT(DAT_00053668 / (in_d2 * in_d3));
            if (dVar10 <= 0.25) {
              dVar10 = 0.25;
            }
            dVar10 = (double)NEON_fminnm(dVar10,0x3fe8000000000000);
          }
          lVar7 = (long)_appliedScale;
          dVar9 = ABS(dVar10 - *(double *)(self + lVar7));
          if (DAT_00053670 < dVar9) {
            objc_msgSend_numberWithDouble_(dVar10,PTR__OBJC_CLASS___NSNumber_0006f850);
            auVar11 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setValue_forKey_(uVar1,auVar11._8_8_,auVar11._0_8_,&cf_scale);
            dVar9 = (double)_objc_release(auVar11._0_8_);
            *(double *)(self + lVar7) = dVar10;
          }
          lVar7 = (long)_scaleInputSize;
          *(double *)(self + lVar7) = in_d2;
          ((double *)(self + lVar7))[1] = in_d3;
          *(undefined *)(self + lVar2) = 1;
          if (DAT_000717c8 == 0) {
            DAT_000717c8 = _NSClassFromString(dVar9,&cf_CAFilter);
          }
          auVar11 = _objc_retainAutorelease();
          lVar2 = auVar11._0_8_;
          objc_msgSend_updateNativeBlurOverlayWithRadius_filterClass_
                    (*(undefined8 *)(self + (long)_desiredNativeBlurRadius),self,auVar11._8_8_,
                     lVar2);
          objc_msgSend_effectiveFilterType(self);
          auVar11 = _objc_retainAutoreleasedReturnValue();
          uVar3 = auVar11._0_8_;
          lVar7 = (long)_filterAttached;
          if ((((*(char *)(self + lVar7) == '\0') ||
               (uVar4 = objc_msgSend_isEqualToString_
                                  (*(undefined8 *)(self + (long)_appliedFilterType),auVar11._8_8_,
                                   uVar3), (uVar4 & 1) == 0)) &&
              (lVar8 = (long)_waitingForFilterRegistration, *(char *)(self + lVar8) == '\0')) &&
             (lVar2 != 0)) {
            uVar5 = _sel_registerName("filterWithType:");
            uVar4 = _objc_opt_respondsToSelector(lVar2,uVar5);
            if ((uVar4 & 1) != 0) {
              _objc_msgSend(lVar2,uVar5,uVar3);
              auVar11 = _objc_retainAutoreleasedReturnValue();
              lVar2 = auVar11._0_8_;
              if (lVar2 != 0) {
                local_80 = lVar2;
                objc_msgSend_arrayWithObjects_count_
                          (PTR__OBJC_CLASS___NSArray_0006f840,auVar11._8_8_,&local_80,1);
                auVar11 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setFilters_(uVar1,auVar11._8_8_,auVar11._0_8_);
                _objc_release(auVar11._0_8_);
                uVar5 = objc_msgSend_copy(uVar3);
                uVar6 = *(undefined8 *)(self + (long)_appliedFilterType);
                *(undefined8 *)(self + (long)_appliedFilterType) = uVar5;
                _objc_release(uVar6);
                *(undefined *)(self + lVar7) = 1;
              }
              *(bool *)(self + lVar8) = lVar2 == 0;
              _objc_release(lVar2);
            }
          }
          _objc_release(uVar3);
        }
      }
      _objc_release(uVar1);
      if (*(long *)PTR____stack_chk_guard_00064268 != local_78) {
                        /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return;
}

// IMP 0x00008cf0  types v16@0:8
- (void)reapplyFilterForParameterReload {
      undefined8 uVar1;

      *(undefined *)(self + (long)_filterAttached) = 0;
      *(undefined *)(self + (long)_waitingForFilterRegistration) = 0;
      uVar1 = *(undefined8 *)(self + (long)_appliedFilterType);
      *(undefined8 *)(self + (long)_appliedFilterType) = 0;
      _objc_release(uVar1);
      objc_msgSend_applyFilters(self);
      objc_msgSend_layer(self);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setNeedsDisplay();
      _objc_release(uVar1);
      return;
}

// IMP 0x00008d70  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + (long)_appliedFilterType,0);
      _objc_storeStrong(self + (long)_cachedEffectiveFilterType,0);
      _objc_storeStrong(self + (long)_nativeBlurLayer,0);
      _objc_storeStrong(self + (long)_specularBoostMask,0);
      _objc_storeStrong(self + (long)_specularMask,0);
      _objc_storeStrong(self + (long)_specularBoost,0);
      _objc_storeStrong(self + (long)_specular,0);
      _objc_storeStrong(self + (long)_lgGroupName,0);
      _objc_storeStrong(self + (long)_lgSpecularEnabledOverride,0);
      return;
}

@end
