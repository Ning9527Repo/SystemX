//
//  LGClockState.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "LGClockState.h"

@implementation LGClockState

// IMP 0x000092dc  types @16@0:8
- (id)init {
      ID IVar1;
      undefined8 uVar2;
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_00055c28;
      local_30 = self;
      IVar1 = _objc_msgSendSuper2(&local_30,PTR_s_init_00055310);
      if (IVar1 != 0) {
        uVar2 = _CACurrentMediaTime();
        *(undefined8 *)(IVar1 + 200) = uVar2;
      }
      return IVar1;
}

// IMP 0x0000932c  types v24@0:8@16
- (void)scheduleApply:(id)scheduleApply {
      int iVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      undefined8 uVar5;
      long lVar6;
      undefined8 uVar7;
      undefined8 uVar8;
      undefined8 uVar9;
      undefined8 extraout_x1;
      undefined auVar10 [16];
      undefined *local_88;
      undefined8 local_80;
      code *local_78;
      undefined *puStack_70;
      undefined8 local_68;
      undefined auStack_60 [8];
      undefined auStack_58 [8];

      uVar2 = _objc_retain(scheduleApply);
      auVar10 = objc_msgSend_layoutCalls(self);
      objc_msgSend_setLayoutCalls_(self,auVar10._8_8_,auVar10._0_8_ + 1);
      iVar1 = objc_msgSend_scheduled(self);
      if (iVar1 == 0) {
        objc_msgSend_setScheduled_(self,extraout_x1,1);
        _objc_initWeak(auStack_58,self);
        local_88 = PTR___NSConcreteStackBlock_00050260;
        local_80 = DAT_0001e278;
        local_78 = FUN_00009520;
        puStack_70 = &DAT_00050628;
        _objc_copyWeak(auStack_60,auStack_58);
        local_68 = _objc_retain(uVar2);
        _dispatch_async(PTR___dispatch_main_q_000502c0,&local_88);
        _objc_release(local_68);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
      else {
        iVar1 = objc_msgSend_isEqualToString_(uVar2,extraout_x1,&cf_text);
        if (iVar1 != 0) {
          objc_msgSend_host(self);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          _objc_opt_class();
          _NSStringFromClass();
          uVar4 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_sourceLabel(self);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_text();
          lVar6 = _objc_retainAutoreleasedReturnValue();
          if (lVar6 == 0) {
            objc_msgSend_sourceLabel(self);
            uVar7 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_attributedText();
            uVar8 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_string();
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _LGLog(&cf_textapplycoalescedhost___source___);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(uVar7);
          }
          else {
            _LGLog(&cf_textapplycoalescedhost___source___);
          }
          _objc_release(lVar6);
          _objc_release(uVar5);
          _objc_release(uVar4);
          _objc_release(uVar3);
        }
      }
      _objc_release(uVar2);
      return;
}

// IMP 0x000095c0  types v16@0:8
- (void)updatePullBlur {
      int iVar1;
      uint uVar2;
      long lVar3;
      long lVar4;
      long lVar5;
      long lVar6;
      long lVar7;
      undefined8 uVar8;
      undefined8 uVar9;
      undefined8 uVar10;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      uint uVar11;
      undefined8 uVar12;
      undefined8 uVar13;
      double dVar14;
      double dVar15;
      undefined8 in_d1;
      undefined8 in_d2;
      undefined8 in_d3;
      undefined8 uVar16;
      undefined8 uVar17;
      undefined auVar18 [16];

      objc_msgSend_renderContainer();
      lVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_window();
      lVar4 = _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        objc_msgSend_glassView(self);
        lVar5 = _objc_retainAutoreleasedReturnValue();
        if (lVar5 != 0) {
          objc_msgSend_pullBlurView(self);
          lVar6 = _objc_retainAutoreleasedReturnValue();
          if (lVar6 != 0) {
            objc_msgSend_sourceLabel(self);
            lVar7 = _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(lVar6);
            _objc_release(lVar5);
            if (lVar7 == 0) goto LAB_00009b04;
            objc_msgSend_bounds(lVar3);
            uVar12 = objc_msgSend_convertRect_toView_(lVar3,extraout_x1,lVar4);
            uVar10 = in_d1;
            uVar16 = in_d2;
            uVar17 = in_d3;
            uVar8 = _objc_retain(lVar4);
            objc_msgSend_layer(lVar3);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_presentationLayer();
            lVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            if (lVar5 == 0) {
              uVar13 = *(undefined8 *)PTR__CGRectNull_00050150;
              uVar10 = *(undefined8 *)(PTR__CGRectNull_00050150 + 8);
              uVar16 = *(undefined8 *)(PTR__CGRectNull_00050150 + 0x10);
              uVar17 = *(undefined8 *)(PTR__CGRectNull_00050150 + 0x18);
            }
            else {
              objc_msgSend_layer(uVar8);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_bounds(lVar5);
              uVar13 = objc_msgSend_convertRect_fromLayer_(uVar9,extraout_x1_00,lVar5);
              _objc_release(uVar9);
            }
            _objc_release(lVar5);
            _objc_release(uVar8);
            iVar1 = _CGRectIsNull(uVar13,uVar10,uVar16,uVar17);
            if (iVar1 == 0) {
              uVar12 = uVar13;
              in_d2 = uVar16;
              in_d3 = uVar17;
              in_d1 = uVar10;
            }
            dVar14 = (double)_CGRectGetMinX(uVar12,in_d1,in_d2,in_d3);
            objc_msgSend_bounds(uVar8);
            dVar15 = (double)_CGRectGetMinX();
            if (ABS(dVar14 - dVar15) <= 0.5) {
              dVar14 = (double)_CGRectGetMinY(uVar12,in_d1,in_d2,in_d3);
              objc_msgSend_bounds(uVar8);
              dVar15 = (double)_CGRectGetMinY();
              uVar11 = (uint)(0.5 < ABS(dVar14 - dVar15));
            }
            else {
              uVar11 = 1;
            }
            iVar1 = objc_msgSend_pullBlurKnown(self);
            uVar10 = extraout_x1_01;
            if ((iVar1 != 0) &&
               (uVar2 = objc_msgSend_pullBlurActive(self), uVar10 = extraout_x1_02, uVar11 == uVar2))
            goto LAB_00009b04;
            objc_msgSend_setPullBlurKnown_(self,uVar10,1);
            objc_msgSend_setPullBlurActive_(self,extraout_x1_03,uVar11);
            if (uVar11 == 0) {
              objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
              uVar10 = _objc_retainAutoreleasedReturnValue();
            }
            else {
              objc_msgSend_glassView(self);
              lVar5 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_traitCollection();
              uVar9 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_userInterfaceStyle();
              _sscanf("FFFFFF4C","%x");
              objc_msgSend_colorWithRed_green_blue_alpha_
                        (0.0 / DAT_0001e288,0.0 / DAT_0001e288,0.0 / DAT_0001e288,0.0 / DAT_0001e288,
                         PTR__OBJC_CLASS___UIColor_00055b10);
              uVar10 = _objc_retainAutoreleasedReturnValue();
            }
            objc_msgSend_pullBlurView(self);
            auVar18 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setBackgroundColor_(auVar18._0_8_,auVar18._8_8_,uVar10);
            _objc_release(auVar18._0_8_);
            if (uVar11 == 0) {
              _objc_release(uVar10);
              objc_msgSend_glassView(self);
              auVar18 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setMaskView_(auVar18._0_8_,auVar18._8_8_,0);
              _objc_release(auVar18._0_8_);
              objc_msgSend_pullBlurView(self);
              auVar18 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setMaskView_(auVar18._0_8_,auVar18._8_8_,0);
              _objc_release(auVar18._0_8_);
              objc_msgSend_glassView(self);
              lVar5 = _objc_retainAutoreleasedReturnValue();
            }
            else {
              _objc_release(uVar10);
              _objc_release(uVar9);
              _objc_release(lVar5);
              objc_msgSend_pullBlurView(self);
              auVar18 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setValue_forKey_
                        (auVar18._0_8_,auVar18._8_8_,&PTR__OBJC_CLASS___NSConstantDoubleNumber_00052d80,
                         &cf_lgBlurRadius);
              _objc_release(auVar18._0_8_);
              objc_msgSend_glassView(self);
              auVar18 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setMaskView_(auVar18._0_8_,auVar18._8_8_,0);
              _objc_release(auVar18._0_8_);
              objc_msgSend_pullBlurView(self);
              auVar18 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setMaskView_(auVar18._0_8_,auVar18._8_8_,0);
              _objc_release(auVar18._0_8_);
              objc_msgSend_pullBlurView(self);
              lVar5 = _objc_retainAutoreleasedReturnValue();
            }
            objc_msgSend_glyphMaskView(self);
            auVar18 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setMaskView_(lVar5,auVar18._8_8_,auVar18._0_8_);
            _objc_release(auVar18._0_8_);
            objc_msgSend_glassView(self);
            auVar18 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setHidden_(auVar18._0_8_,auVar18._8_8_,uVar11);
            _objc_release(auVar18._0_8_);
            objc_msgSend_pullBlurView(self);
            auVar18 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setHidden_(auVar18._0_8_,auVar18._8_8_,uVar11 ^ 1);
            _objc_release(auVar18._0_8_);
            if (uVar11 == 0) {
              objc_msgSend_glassView(self);
              auVar18 = _objc_retainAutoreleasedReturnValue();
            }
            else {
              objc_msgSend_pullBlurView();
              auVar18 = _objc_retainAutoreleasedReturnValue();
            }
            objc_msgSend_bringSubviewToFront_(lVar3,auVar18._8_8_,auVar18._0_8_);
            _objc_release(auVar18._0_8_);
            objc_msgSend_colorOverlayView(self);
            uVar10 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_superview();
            lVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_release();
            _objc_release(uVar10);
            if (lVar6 == lVar3) {
              objc_msgSend_colorOverlayView(self);
              auVar18 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_bringSubviewToFront_(lVar3,auVar18._8_8_,auVar18._0_8_);
              _objc_release(auVar18._0_8_);
            }
          }
          _objc_release(lVar5);
        }
      }
    LAB_00009b04:
      _objc_release(lVar4);
      _objc_release(lVar3);
      return;
}

// IMP 0x00009b58  types B16@0:8
- (BOOL)nativeTimeNeedsHiding {
      char cVar1;
      int iVar2;
      ulong uVar3;
      undefined8 uVar4;
      long lVar5;
      long lVar6;
      long lVar7;
      long lVar8;
      undefined8 uVar9;
      long lVar10;
      bool bVar11;
      undefined8 unaff_x24;

      iVar2 = _lgHostEnabled(&cf_Clock);
      if ((iVar2 == 0) || (uVar3 = objc_msgSend_applying(self), (uVar3 & 1) != 0)) {
        return 0;
      }
      objc_msgSend_host(self);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_window();
      lVar5 = _objc_retainAutoreleasedReturnValue();
      if (lVar5 == 0) {
        bVar11 = 0;
        goto LAB_00009cb8;
      }
      objc_msgSend_sourceLabel(self);
      lVar6 = _objc_retainAutoreleasedReturnValue();
      if ((lVar6 == 0) || (iVar2 = objc_msgSend_hasRenderedGlyph(self), iVar2 == 0)) {
        bVar11 = 0;
      }
      else {
        objc_msgSend_glassView(self);
        lVar7 = _objc_retainAutoreleasedReturnValue();
        cVar1 = DAT_00055fb8;
        if (lVar7 == 0) {
          bVar11 = 0;
        }
        else {
          if (DAT_00055fb8 == '\0') {
            objc_msgSend_glassView(self);
            unaff_x24 = _objc_retainAutoreleasedReturnValue();
            uVar3 = objc_msgSend_lgFilterAttached();
            if ((uVar3 & 1) == 0) goto LAB_00009c40;
            bVar11 = 1;
          }
          else {
    LAB_00009c40:
            objc_msgSend_colorOverlayView(self);
            lVar8 = _objc_retainAutoreleasedReturnValue();
            if (lVar8 == 0) {
              bVar11 = 0;
            }
            else {
              objc_msgSend_colorMaskLayer(self);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              lVar10 = objc_msgSend_path();
              bVar11 = (bool)(lVar10 != 0);
              _objc_release(uVar9);
              _objc_release(lVar8);
            }
            if (cVar1 != '\0') goto LAB_00009ca8;
          }
          _objc_release(unaff_x24);
        }
    LAB_00009ca8:
        _objc_release(lVar7);
      }
      _objc_release(lVar6);
    LAB_00009cb8:
      _objc_release(lVar5);
      _objc_release(uVar4);
      return bVar11;
}

// IMP 0x00009ce8  types v16@0:8
- (void)reassertNativeTimeHidden {
      int iVar1;
      undefined8 uVar2;
      long lVar3;
      long lVar4;
      float fVar5;
      double dVar6;
      undefined auVar7 [16];

      iVar1 = objc_msgSend_nativeTimeNeedsHiding();
      if (iVar1 != 0) {
        objc_msgSend_sourceLabel(self);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        dVar6 = (double)objc_msgSend_alpha();
        _objc_release(uVar2);
        if (dVar6 != 0.0) {
          objc_msgSend_sourceLabel(self);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setAlpha_(0);
          _objc_release(uVar2);
        }
        objc_msgSend_visibleSourceView(self);
        lVar3 = _objc_retainAutoreleasedReturnValue();
        if (lVar3 != 0) {
          objc_msgSend_sourceLabel(self);
          lVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar3 != lVar4) {
            auVar7 = objc_msgSend_isHidden(lVar3);
            if ((auVar7 & (undefined  [16])0x1) == (undefined  [16])0x0) {
              objc_msgSend_setHidden_(lVar3,auVar7._8_8_,1);
            }
            dVar6 = (double)objc_msgSend_alpha(lVar3);
            if (dVar6 != 0.0) {
              objc_msgSend_setAlpha_(0,lVar3);
            }
            objc_msgSend_layer(lVar3);
            uVar2 = _objc_retainAutoreleasedReturnValue();
            fVar5 = (float)objc_msgSend_opacity();
            _objc_release(uVar2);
            if (fVar5 != 0.0) {
              objc_msgSend_layer(lVar3);
              uVar2 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setOpacity_(0);
              _objc_release(uVar2);
            }
          }
        }
        _objc_release(lVar3);
        return;
      }
      return;
}

// IMP 0x00009e34  types v24@0:8@16
- (void)applyReason:(id)applyReason {
      long *plVar1;
      byte bVar2;
      bool bVar3;
      bool bVar4;
      ulong uVar5;
      int iVar6;
      undefined8 uVar8;
      undefined8 uVar9;
      long lVar10;
      undefined8 *puVar11;
      undefined8 uVar12;
      ulong uVar13;
      undefined8 uVar14;
      uint uVar7;
      long lVar15;
      undefined8 uVar16;
      undefined8 uVar17;
      long lVar18;
      undefined8 uVar19;
      undefined8 uVar20;
      undefined8 uVar21;
      undefined8 uVar22;
      undefined8 uVar23;
      undefined8 *puVar24;
      long lVar25;
      long lVar26;
      cfstringStruct *pcVar27;
      cfstringStruct *pcVar28;
      undefined *puVar29;
      undefined8 uVar30;
      undefined8 uVar31;
      undefined8 uVar32;
      undefined8 uVar33;
      undefined8 uVar34;
      undefined8 uVar35;
      size_t sVar36;
      void *pvVar37;
      void *pvVar38;
      long lVar39;
      long lVar40;
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
      undefined8 extraout_x1_11;
      undefined8 extraout_x1_12;
      undefined8 extraout_x1_13;
      undefined8 extraout_x1_14;
      undefined8 extraout_x1_15;
      undefined8 extraout_x1_16;
      undefined8 extraout_x1_17;
      undefined8 extraout_x1_18;
      undefined8 extraout_x1_19;
      undefined8 extraout_x1_20;
      undefined8 extraout_x1_21;
      undefined8 extraout_x1_22;
      undefined8 extraout_x1_23;
      undefined8 extraout_x1_24;
      undefined8 extraout_x1_25;
      undefined8 extraout_x1_26;
      undefined8 extraout_x1_27;
      undefined8 extraout_x1_28;
      undefined8 extraout_x1_29;
      undefined8 extraout_x1_30;
      undefined8 extraout_x1_31;
      undefined8 extraout_x1_32;
      undefined8 extraout_x1_33;
      undefined8 extraout_x1_34;
      undefined8 extraout_x1_35;
      undefined8 extraout_x1_36;
      undefined8 extraout_x1_37;
      undefined8 extraout_x1_38;
      undefined8 extraout_x1_39;
      undefined8 extraout_x1_40;
      undefined8 extraout_x1_41;
      undefined8 extraout_x1_42;
      undefined8 extraout_x1_43;
      undefined8 extraout_x1_44;
      undefined8 extraout_x1_45;
      undefined8 extraout_x1_46;
      undefined8 extraout_x1_47;
      undefined8 extraout_x1_48;
      undefined8 extraout_x1_49;
      undefined8 extraout_x1_50;
      undefined8 extraout_x1_51;
      undefined8 extraout_x1_52;
      undefined8 extraout_x1_53;
      undefined8 extraout_x1_54;
      undefined8 extraout_x1_55;
      undefined8 extraout_x1_56;
      undefined8 extraout_x1_57;
      undefined8 extraout_x1_58;
      undefined8 extraout_x1_59;
      undefined8 extraout_x1_60;
      undefined8 extraout_x1_61;
      undefined8 extraout_x1_62;
      undefined8 extraout_x1_63;
      undefined8 extraout_x1_64;
      undefined8 extraout_x1_65;
      undefined8 extraout_x1_66;
      undefined8 extraout_x1_67;
      undefined8 extraout_x1_68;
      undefined8 extraout_x1_69;
      undefined8 extraout_x1_70;
      undefined8 extraout_x1_71;
      undefined8 extraout_x1_72;
      undefined8 extraout_x1_73;
      undefined8 extraout_x1_74;
      undefined8 extraout_x1_75;
      undefined8 extraout_x1_76;
      undefined8 *puVar41;
      uint uVar42;
      undefined8 uVar43;
      ulong uVar44;
      long lVar45;
      size_t sVar46;
      ulong uVar47;
      long lVar48;
      long lVar49;
      undefined4 uVar50;
      double dVar51;
      double dVar52;
      double dVar53;
      double dVar54;
      double dVar55;
      double dVar56;
      double dVar57;
      double dVar58;
      double dVar59;
      double dVar60;
      double dVar61;
      double dVar62;
      double in_d1;
      double dVar63;
      double dVar64;
      double in_d2;
      double dVar65;
      double in_d3;
      double dVar66;
      float fVar67;
      double dVar68;
      double dVar69;
      float fVar70;
      double dVar71;
      float fVar72;
      double dVar73;
      float fVar74;
      double dVar75;
      undefined auVar76 [16];
      undefined auVar77 [16];
      undefined auVar78 [16];
      cfstringStruct *local_448;
      double local_440;
      double local_438;
      double local_430;
      long local_3e0;
      double local_3d8;
      double dStack_3d0;
      double local_3c8;
      undefined8 local_3c0;
      long local_370;
      long local_368;
      long local_358;
      double local_350;
      undefined8 local_338;
      undefined8 local_318;
      long local_2e8;
      undefined auStack_2e0 [48];
      undefined8 local_2b0;
      long lStack_2a8;
      long *local_2a0;
      undefined8 uStack_298;
      undefined8 local_290;
      undefined8 uStack_288;
      undefined8 uStack_280;
      undefined8 uStack_278;
      undefined8 *local_270;
      long lStack_268;
      long *local_260;
      undefined8 uStack_258;
      undefined8 local_250;
      undefined8 uStack_248;
      undefined8 uStack_240;
      undefined8 uStack_238;
      cfstringStruct *local_230;
      cfstringStruct *local_228;
      cfstringStruct *local_220;
      undefined8 local_218;
      undefined8 local_210;
      undefined8 local_208;
      undefined8 local_200;
      undefined8 local_1f8;
      cfstringStruct *local_1f0;
      undefined8 local_1e8;
      undefined8 local_1e0;
      long local_1d8;
      undefined8 local_1d0;
      long local_1c8;
      undefined8 local_1c0;
      long local_1b8;
      undefined8 local_1b0;
      long lStack_1a8;
      long *local_1a0;
      undefined8 uStack_198;
      undefined8 local_190;
      undefined8 uStack_188;
      undefined8 uStack_180;
      undefined8 uStack_178;
      undefined8 local_130;
      undefined8 local_128;
      undefined8 local_120;
      undefined8 local_118;
      double local_110;
      double local_108;
      long local_b0;

      local_b0 = *(long *)PTR____stack_chk_guard_000502b0;
      uVar8 = _objc_retain(applyReason);
      objc_msgSend_host(self);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_window();
      lVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 == 0) goto LAB_0000dc50;
      dVar51 = (double)_CACurrentMediaTime();
      puVar11 = (undefined8 *)_objc_retain(uVar9);
      iVar6 = FUN_00011c1c();
      puVar29 = PTR_s_textLabel_000559d8;
      if (iVar6 == 0) {
        uVar13 = _objc_opt_respondsToSelector(puVar11,PTR_s_textLabel_000559d8);
        if ((uVar13 & 1) == 0) {
    LAB_00009f78:
          objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_00055b50);
          uVar14 = _objc_retainAutoreleasedReturnValue();
          FUN_00011c64(puVar11,uVar14);
          uStack_188 = 0;
          local_190 = 0;
          uStack_178 = 0;
          uStack_180 = 0;
          lStack_1a8 = 0;
          local_1b0 = 0;
          uStack_198 = 0;
          local_1a0 = (long *)0x0;
          auVar76 = _objc_retain(uVar14);
          uVar12 = auVar76._0_8_;
          lVar15 = objc_msgSend_countByEnumeratingWithState_objects_count_
                             (uVar12,auVar76._8_8_,&local_1b0,&local_130,0x10);
          dVar53 = DAT_0001e260;
          uVar14 = uVar12;
          if (lVar15 == 0) {
            lVar10 = 0;
          }
          else {
            lVar10 = 0;
            lVar45 = *local_1a0;
            dVar68 = -1.797693134862316e+308;
            do {
              lVar48 = 0;
              lVar49 = lVar10;
              do {
                if (*local_1a0 != lVar45) {
                  _objc_enumerationMutation(uVar12);
                }
                uVar43 = *(undefined8 *)(lStack_1a8 + lVar48 * 8);
                objc_msgSend_text(uVar43);
                uVar16 = _objc_retainAutoreleasedReturnValue();
                lVar10 = objc_msgSend_length();
                if (lVar10 == 0) {
                  objc_msgSend_attributedText(uVar43);
                  uVar19 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_string();
                  uVar17 = _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar19);
                }
                else {
                  objc_msgSend_text(uVar43);
                  uVar17 = _objc_retainAutoreleasedReturnValue();
                }
                _objc_release(uVar16);
                lVar18 = objc_msgSend_length(uVar17);
                lVar10 = lVar49;
                if (lVar18 != 0) {
                  objc_msgSend_font(uVar43);
                  uVar16 = _objc_retainAutoreleasedReturnValue();
                  dVar52 = (double)objc_msgSend_pointSize();
                  _objc_release(uVar16);
                  iVar6 = FUN_00011e90(uVar17);
                  dVar63 = dVar52 + dVar53;
                  if (iVar6 == 0) {
                    dVar63 = dVar52;
                  }
                  _objc_opt_class(uVar43);
                  _NSStringFromClass();
                  auVar76 = _objc_retainAutoreleasedReturnValue();
                  iVar6 = objc_msgSend_isEqualToString_
                                    (auVar76._0_8_,auVar76._8_8_,&cf__UIAnimatingLabel);
                  _objc_release(auVar76._0_8_);
                  dVar52 = dVar63 + 200.0;
                  if (iVar6 == 0) {
                    dVar52 = dVar63;
                  }
                  if (dVar68 < dVar52) {
                    lVar10 = _objc_retain(uVar43);
                    _objc_release(lVar49);
                    dVar68 = dVar52;
                  }
                }
                _objc_release(uVar17);
                lVar48 = lVar48 + 1;
                lVar49 = lVar10;
              } while (lVar15 != lVar48);
              lVar15 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                 (uVar12,extraout_x1,&local_1b0,&local_130,0x10);
            } while (lVar15 != 0);
          }
          goto LAB_0000a430;
        }
        _objc_msgSend(puVar11,puVar29);
        lVar10 = _objc_retainAutoreleasedReturnValue();
        uVar14 = _objc_opt_class(PTR__OBJC_CLASS___UILabel_00055b88);
        uVar13 = _objc_opt_isKindOfClass(lVar10,uVar14);
        if ((uVar13 & 1) == 0) {
          _objc_release(lVar10);
          goto LAB_00009f78;
        }
      }
      else {
        objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_00055b50);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        puVar29 = PTR_s__timeLabel_00054f90;
        uVar13 = _objc_opt_respondsToSelector(puVar11,PTR_s__timeLabel_00054f90);
        if ((uVar13 & 1) == 0) {
          uVar14 = 0;
        }
        else {
          _objc_msgSend(puVar11,puVar29);
          uVar14 = _objc_retainAutoreleasedReturnValue();
        }
        _objc_opt_class(uVar14);
        _NSStringFromClass();
        auVar76 = _objc_retainAutoreleasedReturnValue();
        iVar6 = objc_msgSend_isEqualToString_(auVar76._0_8_,auVar76._8_8_,&cf_SBUILegibilityLabel);
        _objc_release(auVar76._0_8_);
        if (iVar6 == 0) {
          uStack_248 = 0;
          local_250 = 0;
          uStack_238 = 0;
          uStack_240 = 0;
          lStack_268 = 0;
          local_270 = (undefined8 *)0x0;
          uStack_258 = 0;
          local_260 = (long *)0x0;
          objc_msgSend_subviews(puVar11);
          auVar76 = _objc_retainAutoreleasedReturnValue();
          uVar16 = auVar76._0_8_;
          lVar10 = objc_msgSend_countByEnumeratingWithState_objects_count_
                             (uVar16,auVar76._8_8_,&local_270,&local_130,0x10);
          if (lVar10 != 0) {
            lVar15 = *local_260;
            do {
              lVar45 = 0;
              do {
                if (*local_260 != lVar15) {
                  _objc_enumerationMutation(uVar16);
                }
                uVar17 = *(undefined8 *)(lStack_268 + lVar45 * 8);
                _objc_opt_class(uVar17);
                _NSStringFromClass();
                auVar76 = _objc_retainAutoreleasedReturnValue();
                iVar6 = objc_msgSend_isEqualToString_
                                  (auVar76._0_8_,auVar76._8_8_,&cf_SBUILegibilityLabel);
                _objc_release(auVar76._0_8_);
                uVar43 = extraout_x1_00;
                if (iVar6 != 0) {
                  FUN_00011c64(uVar17,uVar12);
                  uVar43 = extraout_x1_01;
                }
                lVar45 = lVar45 + 1;
              } while (lVar10 != lVar45);
              lVar10 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                 (uVar16,uVar43,&local_270,&local_130,0x10);
            } while (lVar10 != 0);
          }
          _objc_release(uVar16);
        }
        else {
          FUN_00011c64(uVar14,uVar12);
        }
        uStack_288 = 0;
        local_290 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        lStack_2a8 = 0;
        local_2b0 = 0;
        uStack_298 = 0;
        local_2a0 = (long *)0x0;
        auVar76 = _objc_retain(uVar12);
        uVar12 = auVar76._0_8_;
        lVar15 = objc_msgSend_countByEnumeratingWithState_objects_count_
                           (uVar12,auVar76._8_8_,&local_2b0,&local_1b0,0x10);
        dVar53 = DAT_0001e260;
        if (lVar15 == 0) {
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          lVar45 = *local_2a0;
          dVar68 = -1.797693134862316e+308;
          do {
            lVar48 = 0;
            lVar49 = lVar10;
            do {
              if (*local_2a0 != lVar45) {
                _objc_enumerationMutation(uVar12);
              }
              uVar43 = *(undefined8 *)(lStack_2a8 + lVar48 * 8);
              objc_msgSend_text(uVar43);
              uVar16 = _objc_retainAutoreleasedReturnValue();
              lVar10 = objc_msgSend_length();
              if (lVar10 == 0) {
                objc_msgSend_attributedText(uVar43);
                uVar19 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_string();
                uVar17 = _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar19);
              }
              else {
                objc_msgSend_text(uVar43);
                uVar17 = _objc_retainAutoreleasedReturnValue();
              }
              _objc_release(uVar16);
              lVar18 = objc_msgSend_length(uVar17);
              lVar10 = lVar49;
              if ((lVar18 != 0) && (iVar6 = FUN_00011db4(uVar43,puVar11), iVar6 != 0)) {
                objc_msgSend_font(uVar43);
                uVar16 = _objc_retainAutoreleasedReturnValue();
                dVar52 = (double)objc_msgSend_pointSize();
                _objc_release(uVar16);
                iVar6 = FUN_00011e90(uVar17);
                dVar63 = dVar52 + dVar53;
                if (iVar6 == 0) {
                  dVar63 = dVar52;
                }
                if (dVar68 < dVar63) {
                  lVar10 = _objc_retain(uVar43);
                  _objc_release(lVar49);
                  dVar68 = dVar63;
                }
              }
              _objc_release(uVar17);
              lVar48 = lVar48 + 1;
              lVar49 = lVar10;
            } while (lVar15 != lVar48);
            lVar15 = objc_msgSend_countByEnumeratingWithState_objects_count_
                               (uVar12,extraout_x1_02,&local_2b0,&local_1b0,0x10);
          } while (lVar15 != 0);
        }
        _objc_release(uVar12);
    LAB_0000a430:
        _objc_release(uVar14);
        _objc_release(uVar12);
      }
      _objc_release(puVar11);
      objc_msgSend_sourceLabel(self);
      lVar15 = _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar10 != lVar15) {
        objc_msgSend_restore(self);
        objc_msgSend_setSourceLabel_(self,extraout_x1_03,lVar10);
        FUN_0000dd5c(lVar10);
        auVar76 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setVisibleSourceView_(self,auVar76._8_8_,auVar76._0_8_);
        _objc_release(auVar76._0_8_);
        objc_msgSend_visibleSourceView(self);
        uVar14 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_alpha();
        objc_msgSend_setOriginalVisibleSourceAlpha_(self);
        _objc_release(uVar14);
        objc_msgSend_visibleSourceView(self);
        uVar14 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_layer();
        uVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_opacity();
        objc_msgSend_setOriginalVisibleSourceLayerOpacity_(self);
        _objc_release(uVar12);
        _objc_release(uVar14);
        objc_msgSend_visibleSourceView(self);
        uVar14 = _objc_retainAutoreleasedReturnValue();
        auVar76 = objc_msgSend_isHidden();
        objc_msgSend_setOriginalVisibleSourceHidden_(self,auVar76._8_8_,auVar76._0_8_);
        _objc_release(uVar14);
        _objc_getAssociatedObject(lVar10,PTR_LOOP_00055f28);
        auVar76 = _objc_retainAutoreleasedReturnValue();
        if (auVar76._0_8_ == 0) {
          objc_msgSend_font(lVar10);
          uVar14 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_fontName();
          auVar76 = _objc_retainAutoreleasedReturnValue();
          uVar13 = objc_msgSend_containsString_(auVar76._0_8_,auVar76._8_8_,&cf_SFAdaptiveSoftNumeric);
          _objc_release(auVar76._0_8_);
          _objc_release(uVar14);
          if ((uVar13 & 1) == 0) {
            objc_msgSend_font(lVar10);
            lVar15 = _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(lVar10,PTR_LOOP_00055f28,lVar15,1);
            auVar76._8_8_ = extraout_x1_04;
            auVar76._0_8_ = lVar15;
            if (lVar15 != 0) goto LAB_0000a568;
          }
          objc_msgSend_font(lVar10);
          auVar76 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setOriginalFont_(self,auVar76._8_8_,auVar76._0_8_);
          _objc_release(auVar76._0_8_);
          local_318 = 0;
        }
        else {
    LAB_0000a568:
          local_318 = auVar76._0_8_;
          objc_msgSend_setOriginalFont_(self,auVar76._8_8_,local_318);
        }
        objc_msgSend_alpha(lVar10);
        objc_msgSend_setOriginalLabelAlpha_(self);
        auVar76 = objc_msgSend_isHidden(lVar10);
        objc_msgSend_setOriginalLabelHidden_(self,auVar76._8_8_,auVar76._0_8_);
        objc_msgSend_frame(lVar10);
        objc_msgSend_setOriginalLabelFrame_(self);
        _objc_opt_class(puVar11);
        _NSStringFromClass();
        uVar14 = _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(lVar10);
        _NSStringFromClass();
        uVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_frame(lVar10);
        _NSStringFromCGRect();
        uVar16 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_bounds(lVar10);
        _NSStringFromCGRect();
        uVar43 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_text(lVar10);
        lVar45 = _objc_retainAutoreleasedReturnValue();
        lVar15 = lVar45;
        if (lVar45 == 0) {
          objc_msgSend_attributedText(lVar10);
          local_338 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_string();
          lVar15 = _objc_retainAutoreleasedReturnValue();
        }
        objc_msgSend_font(lVar10);
        uVar17 = _objc_retainAutoreleasedReturnValue();
        FUN_0000de94();
        uVar19 = _objc_retainAutoreleasedReturnValue();
        FUN_0000dfe0(lVar10);
        uVar20 = _objc_retainAutoreleasedReturnValue();
        FUN_0000de94();
        uVar21 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_originalFont(self);
        uVar22 = _objc_retainAutoreleasedReturnValue();
        FUN_0000de94();
        uVar23 = _objc_retainAutoreleasedReturnValue();
        _LGLog(&
               cf_sourcehost___label___frame___bounds___text___directFont_____attributedFont_____savedFont_____savedAssociated__dvariablePref__d
              );
        _objc_release(uVar23);
        _objc_release(uVar22);
        _objc_release(uVar21);
        _objc_release(uVar20);
        _objc_release(uVar19);
        _objc_release(uVar17);
        if (lVar45 == 0) {
          _objc_release(lVar15);
          _objc_release(local_338);
        }
        _objc_release(lVar45);
        _objc_release(uVar43);
        _objc_release(uVar16);
        _objc_release(uVar12);
        _objc_release(uVar14);
        _objc_release(local_318);
      }
      if (lVar10 == 0) {
        _objc_opt_class(puVar11);
        _NSStringFromClass();
        uVar14 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_frame(puVar11);
        _NSStringFromCGRect();
        uVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_bounds(puVar11);
        _NSStringFromCGRect();
        uVar16 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_subviews(puVar11);
        uVar43 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_count();
        _LGLog(&cf_sourcemissinghost___frame___bounds___subviews__lu);
        _objc_release(uVar43);
        _objc_release(uVar16);
        _objc_release(uVar12);
        _objc_release(uVar14);
        FUN_0000e0d4(puVar11);
        local_370 = _objc_retainAutoreleasedReturnValue();
        _LGLog(&cf_sourcecandidates__);
      }
      else {
        objc_msgSend_visibleSourceView(self);
        lVar15 = _objc_retainAutoreleasedReturnValue();
        if (lVar15 == 0) {
          FUN_0000dd5c(lVar10);
          _objc_retainAutoreleasedReturnValue();
          local_370 = _objc_retain();
          _objc_release();
        }
        else {
          local_370 = _objc_retain(lVar15);
        }
        _objc_release(lVar15);
        uVar7 = _lgHostEnabled(&cf_Clock);
        FUN_0000e3f4(puVar11);
        uVar14 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_bounds(puVar11);
        uVar16 = objc_msgSend_convertRect_toView_(puVar11,extraout_x1_05,uVar14);
        lVar15 = _objc_retain(uVar14);
        uVar17 = *(undefined8 *)PTR__CGRectNull_00050150;
        dVar66 = *(double *)(PTR__CGRectNull_00050150 + 8);
        dVar69 = *(double *)(PTR__CGRectNull_00050150 + 0x10);
        dVar71 = *(double *)(PTR__CGRectNull_00050150 + 0x18);
        dVar68 = in_d1;
        dVar52 = in_d2;
        dVar62 = in_d3;
        uVar43 = _CGRectInset(uVar16);
        lStack_1a8 = 0;
        local_1b0 = 0;
        uStack_198 = 0;
        local_1a0 = (long *)0x0;
        uStack_188 = 0;
        local_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        dVar63 = dVar68;
        dVar61 = dVar52;
        dVar53 = dVar62;
        FUN_00011f24();
        uVar14 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_allObjects();
        uVar12 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        lVar45 = objc_msgSend_countByEnumeratingWithState_objects_count_
                           (uVar12,extraout_x1_06,&local_1b0,&local_130,0x10);
        puVar24 = puVar11;
        local_3d8 = dVar71;
        dStack_3d0 = dVar69;
        local_3c8 = dVar66;
        local_3c0 = uVar17;
        if (lVar45 == 0) {
          local_368 = 0;
          local_350 = 1.797693134862316e+308;
        }
        else {
          local_368 = 0;
          lVar48 = *local_1a0;
          local_350 = 1.797693134862316e+308;
          do {
            lVar49 = 0;
            puVar41 = puVar24;
            do {
              if (*local_1a0 != lVar48) {
                _objc_enumerationMutation(uVar12);
              }
              lVar18 = _objc_retain(*(undefined8 *)(lStack_1a8 + lVar49 * 8));
              uVar14 = _objc_retain(lVar15);
              objc_msgSend_window(lVar18);
              puVar24 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
              if (puVar24 == (undefined8 *)0x0) {
    LAB_0000aaf0:
                puVar24 = puVar41;
                _objc_release(uVar14);
    LAB_0000aaf8:
                _objc_release(lVar18);
                uVar19 = extraout_x1_07;
              }
              else {
                objc_msgSend_window(lVar18);
                lVar25 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_window(uVar14);
                lVar26 = _objc_retainAutoreleasedReturnValue();
                dVar55 = dVar61;
                dVar54 = dVar53;
                if ((lVar25 != lVar26) ||
                   (iVar6 = objc_msgSend_isHidden(lVar18), dVar55 = dVar61, dVar54 = dVar53, iVar6 != 0)
                   ) {
                  _objc_release(lVar26);
                  _objc_release(lVar25);
                  dVar56 = dVar63;
    LAB_0000aae8:
                  _objc_release(puVar24);
                  puVar41 = puVar24;
                  dVar63 = dVar56;
                  dVar61 = dVar55;
                  dVar53 = dVar54;
                  goto LAB_0000aaf0;
                }
                dVar55 = (double)objc_msgSend_alpha(lVar18);
                _objc_release(lVar25);
                _objc_release(lVar25);
                _objc_release(puVar24);
                puVar41 = puVar24;
                if (dVar55 < DAT_0001e290) goto LAB_0000aaf0;
                objc_msgSend_bounds(lVar18);
                uVar19 = objc_msgSend_convertRect_toView_(lVar18,extraout_x1_08,uVar14);
                _objc_opt_class(lVar18);
                _NSStringFromClass();
                auVar76 = _objc_retainAutoreleasedReturnValue();
                puVar24 = auVar76._0_8_;
                auVar76 = objc_msgSend_isEqualToString_
                                    (puVar24,auVar76._8_8_,&cf_NCNotificationListHeaderTitleView);
                dVar57 = 24.0;
                if ((auVar76 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                  iVar6 = objc_msgSend_isEqualToString_
                                    (puVar24,auVar76._8_8_,&cf_NCNotificationListSectionRevealHintView);
                  dVar57 = 24.0;
                  if (iVar6 == 0) {
                    dVar57 = 48.0;
                  }
                }
                dVar55 = dVar61;
                dVar54 = dVar53;
                dVar73 = (double)_CGRectGetWidth(uVar19,dVar63);
                dVar56 = DAT_0001e298;
                if (dVar73 < DAT_0001e298) goto LAB_0000aae8;
                dVar55 = (double)_CGRectGetHeight(uVar19);
                _objc_release(puVar24);
                _objc_release(uVar14);
                _objc_release(lVar18);
                uVar19 = extraout_x1_09;
                if (dVar57 <= dVar55) {
                  uVar20 = _objc_retain(lVar18);
                  uVar14 = _objc_retain(uVar14);
                  objc_msgSend_layer(uVar20);
                  uVar19 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_presentationLayer();
                  lVar18 = _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar19);
                  objc_msgSend_layer(uVar14);
                  uVar19 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_presentationLayer();
                  puVar24 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar19);
                  dVar55 = dVar63;
                  dVar54 = dVar61;
                  dVar56 = dVar53;
                  if ((lVar18 == 0) || (puVar24 == (undefined8 *)0x0)) {
    LAB_0000ad04:
                    objc_msgSend_bounds(uVar20);
                    uVar21 = objc_msgSend_convertRect_toView_(uVar20,extraout_x1_11,uVar14);
                    dVar57 = dVar56;
                    dVar73 = dVar54;
                    dVar59 = dVar55;
                  }
                  else {
                    objc_msgSend_bounds(lVar18);
                    uVar21 = objc_msgSend_convertRect_fromLayer_(puVar24,extraout_x1_10,lVar18);
                    dVar55 = dVar63;
                    dVar54 = dVar61;
                    dVar56 = dVar53;
                    uVar13 = _CGRectIsNull();
                    if (((uVar13 & 1) != 0) ||
                       (((dVar55 = dVar63, dVar54 = dVar61, dVar56 = dVar53,
                         uVar13 = _CGRectIsInfinite(uVar21), (uVar13 & 1) != 0 ||
                         (dVar55 = dVar63, dVar54 = dVar61, dVar56 = dVar53,
                         dVar57 = (double)_CGRectGetWidth(uVar21), dVar57 <= 0.0)) ||
                        (dVar55 = dVar63, dVar54 = dVar61, dVar56 = dVar53,
                        dVar75 = (double)_CGRectGetHeight(uVar21), dVar57 = dVar53, dVar73 = dVar61,
                        dVar59 = dVar63, dVar75 <= 0.0)))) goto LAB_0000ad04;
                  }
                  _objc_release(puVar24);
                  _objc_release(lVar18);
                  _objc_release(uVar14);
                  _objc_release(uVar20);
                  dVar55 = (double)_CGRectGetMaxX(uVar21,dVar59,dVar73,dVar57);
                  dVar63 = dVar68;
                  dVar61 = dVar52;
                  dVar53 = dVar62;
                  dVar54 = (double)_CGRectGetMinX(uVar43);
                  uVar19 = extraout_x1_12;
                  if (dVar55 <= dVar54) goto LAB_0000ab00;
                  dVar55 = (double)_CGRectGetMinX(uVar21,dVar59,dVar73,dVar57);
                  dVar63 = dVar68;
                  dVar61 = dVar52;
                  dVar53 = dVar62;
                  dVar54 = (double)_CGRectGetMaxX(uVar43);
                  uVar19 = extraout_x1_13;
                  if (dVar54 <= dVar55) goto LAB_0000ab00;
                  dVar55 = (double)_CGRectGetMaxY(uVar21,dVar59,dVar73,dVar57);
                  dVar63 = in_d1;
                  dVar61 = in_d2;
                  dVar53 = in_d3;
                  dVar54 = (double)_CGRectGetMinY(uVar16);
                  uVar19 = extraout_x1_14;
                  if ((dVar55 <= dVar54) ||
                     (dVar61 = dVar73, dVar53 = dVar57, dVar55 = (double)_CGRectGetMinY(uVar21,dVar59),
                     uVar19 = extraout_x1_15, dVar63 = local_350, local_350 <= dVar55))
                  goto LAB_0000ab00;
                  dVar63 = dVar59;
                  dVar61 = dVar73;
                  dVar53 = dVar57;
                  local_350 = (double)_CGRectGetMinY(uVar21);
                  lVar25 = _objc_retain(uVar20);
                  lVar18 = local_368;
                  local_3d8 = dVar57;
                  dStack_3d0 = dVar73;
                  local_3c8 = dVar59;
                  local_3c0 = uVar21;
                  local_368 = lVar25;
                  goto LAB_0000aaf8;
                }
              }
    LAB_0000ab00:
              lVar49 = lVar49 + 1;
              puVar41 = puVar24;
            } while (lVar45 != lVar49);
            lVar45 = objc_msgSend_countByEnumeratingWithState_objects_count_
                               (uVar12,uVar19,&local_1b0,&local_130,0x10);
          } while (lVar45 != 0);
        }
        _objc_release(uVar12);
        objc_msgSend_window(lVar15);
        lVar45 = _objc_retainAutoreleasedReturnValue();
        if (lVar45 != 0) {
          puVar41 = &DAT_00056000;
          if (DAT_000561b4 == '\x01') {
    joined_r0x0000af40:
            if (-1 < DAT_000561b0) {
              local_270 = (undefined8 *)0x0;
              iVar6 = _notify_get_state(DAT_000561b0,&local_270);
              puVar24 = local_270;
              fVar72 = DAT_0001e2d0;
              if (iVar6 == 0) {
                fVar67 = (float)NEON_fmadd((float)(unkuint9)((ulong)local_270 >> 0x10 & 0xffff) /
                                           DAT_0001e2d0,0x40000000,0xbf000000);
                _objc_release(lVar45);
                if ((0.0 < fVar67) &&
                   (fVar70 = (float)NEON_fmadd((float)(unkuint9)((ulong)puVar24 & 0xffff) / fVar72,
                                               0x40000000,0xbf000000), 0.0 < fVar70)) {
                  dVar63 = 5.304989477413181e-315;
                  fVar74 = (float)NEON_fmadd((float)(unkuint9)((ulong)puVar24 >> 0x20 & 0xffff) / fVar72
                                             ,0x40000000,0xbf000000);
                  fVar72 = (float)NEON_fmadd((float)(unkuint9)((ulong)puVar24 >> 0x30) / fVar72,
                                             0x40000000,0xbf000000);
                  objc_msgSend_window(lVar15);
                  uVar14 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_bounds();
                  _objc_release(uVar14);
                  dVar61 = dVar53 * (double)fVar74;
                  dVar55 = dVar63 * (double)fVar67;
                  dVar53 = dVar53 * (double)fVar70;
                  uVar14 = objc_msgSend_convertRect_fromView_
                                     (dVar63 * (double)fVar72,lVar15,extraout_x1_32,0);
                  dVar63 = (double)_CGRectGetWidth();
                  if ((DAT_0001e298 <= dVar63) &&
                     (dVar63 = (double)_CGRectGetHeight(uVar14,dVar61,dVar55,dVar53), 48.0 <= dVar63)) {
                    dVar63 = (double)_CGRectGetMaxX(uVar14,dVar61,dVar55,dVar53);
                    dVar54 = (double)_CGRectGetMinX(uVar43,dVar68,dVar52,dVar62);
                    if (dVar54 < dVar63) {
                      dVar63 = (double)_CGRectGetMinX(uVar14,dVar61,dVar55,dVar53);
                      dVar68 = (double)_CGRectGetMaxX(uVar43,dVar68,dVar52,dVar62);
                      if (dVar63 < dVar68) {
                        dVar68 = (double)_CGRectGetMaxY(uVar14,dVar61,dVar55,dVar53);
                        dVar63 = (double)_CGRectGetMinY(uVar16,in_d1,in_d2,in_d3);
                        if ((dVar63 < dVar68) &&
                           (dVar68 = (double)_CGRectGetMinY(uVar14,dVar61,dVar55,dVar53),
                           dVar68 < local_350)) {
                          local_350 = (double)_CGRectGetMinY(uVar14,dVar61,dVar55,dVar53);
                          lVar45 = local_368;
                          puVar41 = puVar24;
                          local_368 = 0;
                          local_3d8 = dVar53;
                          dStack_3d0 = dVar55;
                          local_3c8 = dVar61;
                          local_3c0 = uVar14;
                          goto LAB_0000af54;
                        }
                      }
                    }
                  }
                }
                goto LAB_0000af5c;
              }
            }
          }
          else {
            local_270 = (undefined8 *)((ulong)local_270 & 0xffffffff00000000);
            iVar6 = _notify_register_check("com.wkk.systembox.clockglass.lensrect.npartwork",&local_270)
            ;
            if (iVar6 == 0) {
              DAT_000561b4 = '\x01';
              DAT_000561b0 = (int)local_270;
              goto joined_r0x0000af40;
            }
          }
    LAB_0000af54:
          puVar24 = puVar41;
          _objc_release(lVar45);
        }
    LAB_0000af5c:
        uVar14 = _objc_retainAutorelease(local_368);
        _objc_release();
        _objc_release(lVar15);
        lVar45 = _objc_retain(uVar14);
        uVar13 = _LG_prefBool(&cf_Clock_Rainbow_Enabled,0);
        if ((uVar13 & 1) == 0) {
          iVar6 = _LG_prefBool(&cf_Clock_CustomColor_Enabled,0);
          lVar48 = 2;
          if (iVar6 == 0) {
            lVar48 = 0;
          }
        }
        else {
          lVar48 = 1;
        }
        bVar2 = DAT_00055fb8;
        dVar68 = (double)_CACurrentMediaTime();
        puVar29 = PTR__OBJC_CLASS___NSString_00055ad8;
        dVar53 = (double)(long)local_350;
        if (local_350 == 1.797693134862316e+308) {
          dVar53 = local_350;
        }
        objc_msgSend_text(lVar10);
        lVar18 = _objc_retainAutoreleasedReturnValue();
        lVar49 = lVar18;
        if (lVar18 == 0) {
          objc_msgSend_attributedText(lVar10);
          puVar24 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
          objc_msgSend_string();
          lVar49 = _objc_retainAutoreleasedReturnValue();
        }
        bVar2 = lVar48 == 0 & bVar2;
        objc_msgSend_originalFont(self);
        uVar14 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_pointSize();
        FUN_000087f0(&cf_weight);
        FUN_000087f0(&cf_width);
        FUN_000087f0(&cf_height);
        FUN_000087f0(&cf_softness);
        _LG_prefFloat(0x3ff4000000000000,&cf_Clock_VariableFont_SizeScale);
        _CGRectGetMinX(uVar16,in_d1,in_d2,in_d3);
        _CGRectGetMinY(uVar16,in_d1,in_d2,in_d3);
        _CGRectGetWidth(uVar16,in_d1,in_d2,in_d3);
        dVar63 = in_d2;
        dVar52 = in_d3;
        _CGRectGetHeight(uVar16,in_d1,in_d2,in_d3);
        objc_msgSend_stringWithFormat_
                  (puVar29,extraout_x1_16,
                   &cf__d__d______2f___1f___1f___1f___1f___1f___1f___1f___1f___1f___1f___1f);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar14);
        if (lVar18 == 0) {
          _objc_release(lVar49);
          _objc_release(puVar24);
        }
        _objc_release(lVar18);
        auVar77._8_8_ = extraout_x1_17;
        auVar77._0_8_ = &cf___;
        if (lVar48 == 2) {
          _LG_prefString(&cf_Clock_CustomColor_Hex,&cf__FFFFFF);
          auVar77 = _objc_retainAutoreleasedReturnValue();
        }
        objc_msgSend_stringByAppendingFormat_(uVar12,auVar77._8_8_,&cf___ld__d___);
        uVar14 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar12);
        if (lVar48 == 2) {
          _objc_release(auVar77._0_8_);
    LAB_0000b2cc:
          bVar3 = false;
        }
        else {
          if (lVar48 != 1) goto LAB_0000b2cc;
          lVar49 = 0;
          uVar12 = extraout_x1_18;
          uVar43 = uVar14;
          do {
            objc_msgSend_stringWithFormat_
                      (PTR__OBJC_CLASS___NSString_00055ad8,uVar12,&cf_Clock_Rainbow_Color__lu);
            uVar12 = _objc_retainAutoreleasedReturnValue();
            _LG_prefString(uVar12,(&PTR_cf__3DDEFA_00050570)[lVar49]);
            auVar76 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_stringByAppendingFormat_(uVar43,auVar76._8_8_,&cf____);
            uVar14 = _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar43);
            _objc_release(auVar76._0_8_);
            _objc_release(uVar12);
            lVar49 = lVar49 + 1;
            uVar12 = extraout_x1_19;
            uVar43 = uVar14;
          } while (lVar49 != 5);
          bVar3 = true;
        }
        if (uVar7 == 0) {
          uVar12 = _objc_retain(lVar10);
          objc_msgSend_font();
          uVar43 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_fontName();
          auVar76 = _objc_retainAutoreleasedReturnValue();
          uVar13 = objc_msgSend_containsString_(auVar76._0_8_,auVar76._8_8_,&cf_SFAdaptiveSoftNumeric);
          _objc_release(auVar76._0_8_);
          _objc_release(uVar43);
          if ((uVar13 & 1) == 0) {
            FUN_0000dfe0(uVar12);
            uVar43 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_fontName();
            auVar76 = _objc_retainAutoreleasedReturnValue();
            uVar42 = objc_msgSend_containsString_(auVar76._0_8_,auVar76._8_8_,&cf_SFAdaptiveSoftNumeric)
            ;
            _objc_release(auVar76._0_8_);
            _objc_release(uVar43);
          }
          else {
            uVar42 = 1;
          }
          _objc_release(uVar12);
          uVar42 = uVar42 ^ 1;
        }
        else {
          objc_msgSend_glassView(self);
          lVar49 = _objc_retainAutoreleasedReturnValue();
          if (lVar49 == 0) {
            uVar42 = 0;
          }
          else if ((lVar48 != 0 | bVar2) == 0) {
            uVar42 = 1;
          }
          else {
            objc_msgSend_colorOverlayView(self);
            lVar18 = _objc_retainAutoreleasedReturnValue();
            uVar42 = (uint)(lVar18 != 0);
            _objc_release();
          }
          _objc_release(lVar49);
        }
        objc_msgSend_lastSignature(self);
        auVar76 = _objc_retainAutoreleasedReturnValue();
        iVar6 = objc_msgSend_isEqualToString_(uVar14,auVar76._8_8_,auVar76._0_8_);
        _objc_release(auVar76._0_8_);
        if ((iVar6 == 0) || (uVar42 == 0)) {
          objc_msgSend_setLastSignature_(self,extraout_x1_20,uVar14);
          objc_msgSend_setApplying_(self,extraout_x1_21,1);
          dVar61 = dVar68;
          dVar62 = dVar68;
          if ((uVar7 & 1) == 0) {
            objc_msgSend_setHasRenderedGlyph_(self,extraout_x1_22,0);
            dVar52 = 0.0;
            objc_msgSend_setComplicationLayoutShift_(0,self);
            objc_msgSend_setNeedsLayout(lVar15);
            objc_msgSend_originalFont(self);
            lVar48 = _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar48 != 0) {
              objc_msgSend_originalFont(self);
              auVar76 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setFont_(lVar10,auVar76._8_8_,auVar76._0_8_);
              _objc_release(auVar76._0_8_);
            }
            objc_msgSend_originalLabelAlpha(self);
            objc_msgSend_setAlpha_(lVar10);
            auVar76 = objc_msgSend_originalLabelHidden(self);
            objc_msgSend_setHidden_(lVar10,auVar76._8_8_,auVar76._0_8_);
            auVar76 = objc_msgSend_originalVisibleSourceHidden(self);
            objc_msgSend_setHidden_(local_370,auVar76._8_8_,auVar76._0_8_);
            objc_msgSend_originalVisibleSourceAlpha(self);
            objc_msgSend_setAlpha_(local_370);
            uVar50 = objc_msgSend_originalVisibleSourceLayerOpacity(self);
            objc_msgSend_layer(local_370);
            uVar12 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setOpacity_(uVar50);
            _objc_release(uVar12);
            objc_msgSend_glassView(self);
            auVar76 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setMaskView_(auVar76._0_8_,auVar76._8_8_,0);
            _objc_release(auVar76._0_8_);
            objc_msgSend_glassView(self);
            uVar12 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_removeFromSuperview();
            _objc_release(uVar12);
            objc_msgSend_pullBlurView(self);
            uVar12 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_removeFromSuperview();
            _objc_release(uVar12);
            objc_msgSend_colorOverlayView(self);
            uVar12 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_removeFromSuperview();
            _objc_release(uVar12);
            objc_msgSend_setGlassView_(self,extraout_x1_23,0);
            objc_msgSend_setPullBlurView_(self,extraout_x1_24,0);
            objc_msgSend_setColorOverlayView_(self,extraout_x1_25,0);
            objc_msgSend_setColorGradientLayer_(self,extraout_x1_26,0);
            objc_msgSend_setColorMaskView_(self,extraout_x1_27,0);
            objc_msgSend_setColorMaskLayer_(self,extraout_x1_28,0);
            objc_msgSend_setGlyphMaskView_(self,extraout_x1_29,0);
            objc_msgSend_setGlyphMaskLayer_(self,extraout_x1_30,0);
            uVar12 = extraout_x1_31;
          }
          else {
            objc_msgSend_originalFont(self);
            uVar12 = _objc_retainAutoreleasedReturnValue();
            dVar54 = (double)objc_msgSend_pointSize();
            _objc_release(uVar12);
            dVar55 = (double)_LG_prefFloat(0x3ff4000000000000,&cf_Clock_VariableFont_SizeScale);
            dVar54 = dVar54 * dVar55;
            objc_msgSend_shared(PTR_PTR_00055ab8);
            _objc_retainAutoreleasedReturnValue();
            uVar12 = _objc_retain();
            _objc_release();
            dVar56 = (double)FUN_000087f0(&cf_height);
            dVar55 = dVar56;
            objc_msgSend_fontAtPointSize_heightAxis_(dVar54,uVar12);
            _objc_retainAutoreleasedReturnValue();
            local_358 = _objc_retain();
            _objc_release();
            if (local_358 == 0) {
              objc_msgSend_originalFont(self);
              local_358 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_fontName();
              pcVar28 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
              objc_msgSend_originalFont(self);
              uVar43 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_pointSize();
              objc_msgSend_text(lVar10);
              local_3e0 = _objc_retainAutoreleasedReturnValue();
              if (local_3e0 == 0) {
                objc_msgSend_attributedText(lVar10);
                uVar16 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_string();
                uVar17 = _objc_retainAutoreleasedReturnValue();
                _LGLog(&cf_renderfontunavailablevariable__doriginal_____2ftext___);
                _objc_release(uVar17);
                _objc_release(uVar16);
              }
              else {
                _LGLog(&cf_renderfontunavailablevariable__doriginal_____2ftext___);
              }
              dVar52 = 0.0;
            }
            else {
              objc_msgSend_text(lVar10);
              uVar43 = _objc_retainAutoreleasedReturnValue();
              lVar49 = objc_msgSend_length();
              if (lVar49 == 0) {
                objc_msgSend_attributedText(lVar10);
                pcVar27 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
                objc_msgSend_string();
                _objc_retainAutoreleasedReturnValue();
                pcVar28 = (cfstringStruct *)_objc_retain();
                _objc_release();
              }
              else {
                objc_msgSend_text(lVar10);
                _objc_retainAutoreleasedReturnValue();
                pcVar27 = (cfstringStruct *)_objc_retain();
                pcVar28 = pcVar27;
              }
              _objc_release(pcVar27);
              _objc_release(uVar43);
              uVar19 = *(undefined8 *)PTR__kCTFontAttributeName_00050398;
              local_1c0 = uVar19;
              local_1b8 = local_358;
              objc_msgSend_dictionaryWithObjects_forKeys_count_
                        (PTR__OBJC_CLASS___NSDictionary_00055ae8,extraout_x1_33,&local_1b8,&local_1c0,1)
              ;
              uVar43 = _objc_retainAutoreleasedReturnValue();
              auVar76 = _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_00055b18);
              pcVar27 = &cf___;
              if (pcVar28 != (cfstringStruct *)0x0) {
                pcVar27 = pcVar28;
              }
              local_3e0 = objc_msgSend_initWithString_attributes_
                                    (auVar76._0_8_,auVar76._8_8_,pcVar27,uVar43);
              lVar49 = _CTLineCreateWithAttributedString();
              if (lVar49 == 0) {
                uVar20 = *(undefined8 *)PTR__CGRectZero_00050158;
                dVar55 = *(double *)(PTR__CGRectZero_00050158 + 8);
                dVar63 = *(double *)(PTR__CGRectZero_00050158 + 0x10);
                dVar52 = *(double *)(PTR__CGRectZero_00050158 + 0x18);
              }
              else {
                uVar20 = _CTLineGetBoundsWithOptions(lVar49,8);
                _CFRelease(lVar49);
              }
              dVar73 = dVar63;
              dVar59 = dVar52;
              dVar57 = (double)_CGRectGetHeight(uVar20,dVar55,dVar63,dVar52);
              dVar75 = (double)(long)(dVar57 + 24.0);
              dVar57 = dVar75;
              if (dVar53 != 1.797693134862316e+308) {
                dVar73 = in_d2;
                dVar59 = in_d3;
                dVar57 = (double)_CGRectGetMinY(uVar16,in_d1,in_d2,in_d3);
                dVar57 = (dVar53 - dVar57) + -10.0;
                if (dVar57 <= 1.0) {
                  dVar57 = 1.0;
                }
              }
              dVar58 = (double)objc_msgSend_minimumHeightAxis(uVar12);
              dVar60 = dVar58;
              objc_msgSend_fontAtPointSize_heightAxis_(dVar54,uVar12);
              auVar76 = _objc_retainAutoreleasedReturnValue();
              lVar49 = auVar76._0_8_;
              puVar29 = PTR____NSDictionary0__struct_00050278;
              if (lVar49 != 0) {
                local_1d0 = uVar19;
                local_1c8 = lVar49;
                objc_msgSend_dictionaryWithObjects_forKeys_count_
                          (PTR__OBJC_CLASS___NSDictionary_00055ae8,auVar76._8_8_,&local_1c8,&local_1d0,1
                          );
                _objc_retainAutoreleasedReturnValue();
                puVar29 = (undefined *)_objc_retain();
                _objc_release();
              }
              auVar76 = _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_00055b18);
              uVar21 = objc_msgSend_initWithString_attributes_
                                 (auVar76._0_8_,auVar76._8_8_,pcVar27,puVar29);
              if ((lVar49 != 0) && (lVar18 = _CTLineCreateWithAttributedString(uVar21), lVar18 != 0)) {
                uVar20 = _CTLineGetBoundsWithOptions(lVar18,8);
                _CFRelease(lVar18);
                dVar52 = dVar59;
                dVar55 = dVar60;
                dVar63 = dVar73;
              }
              dVar52 = (double)_CGRectGetHeight(uVar20,dVar55,dVar63,dVar52);
              dVar73 = dVar57;
              if (dVar57 < dVar75) {
                dVar63 = dVar75 - (double)(long)(dVar52 + 24.0);
                if (dVar63 <= 1.0) {
                  dVar63 = 1.0;
                }
                dVar63 = (double)NEON_fmin((dVar57 - (double)(long)(dVar52 + 24.0)) / dVar63,
                                           0x3ff0000000000000);
                if (dVar63 <= 0.0) {
                  dVar63 = 0.0;
                }
                dVar56 = (double)NEON_fmadd(dVar56 - dVar58,dVar63,dVar58);
                dVar55 = dVar56;
                dVar63 = dVar58;
                objc_msgSend_fontAtPointSize_heightAxis_(dVar54,uVar12);
                lVar25 = _objc_retainAutoreleasedReturnValue();
                lVar18 = local_358;
                if (lVar25 != 0) {
                  lVar18 = lVar25;
                }
                lVar18 = _objc_retain(lVar18);
                _objc_release(local_358);
                _objc_release(lVar25);
                local_358 = lVar18;
              }
              _objc_release(uVar21);
              _objc_release(puVar29);
              _objc_release(lVar49);
              iVar6 = _LGDebugLoggingEnabled();
              uVar20 = extraout_x1_34;
              if (iVar6 != 0) {
                auVar76 = objc_msgSend_isEqualToString_(uVar8,extraout_x1_34,&cf_motion);
                uVar20 = auVar76._8_8_;
                if ((auVar76 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                  auVar76 = objc_msgSend_isEqualToString_(uVar8,uVar20,&cf_obstacle);
                  uVar20 = auVar76._8_8_;
                  if ((auVar76 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                    auVar76 = objc_msgSend_isEqualToString_(uVar8,uVar20,&cf_prefs);
                    puVar29 = PTR__OBJC_CLASS___NSString_00055ad8;
                    uVar20 = auVar76._8_8_;
                    if ((auVar76 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                      _objc_opt_class(puVar11);
                      _NSStringFromClass();
                      uVar20 = _objc_retainAutoreleasedReturnValue();
                      objc_msgSend_font(lVar10);
                      uVar21 = _objc_retainAutoreleasedReturnValue();
                      FUN_0000de94();
                      uVar22 = _objc_retainAutoreleasedReturnValue();
                      FUN_0000dfe0(lVar10);
                      uVar23 = _objc_retainAutoreleasedReturnValue();
                      FUN_0000de94();
                      uVar30 = _objc_retainAutoreleasedReturnValue();
                      objc_msgSend_originalFont(self);
                      uVar31 = _objc_retainAutoreleasedReturnValue();
                      FUN_0000de94();
                      uVar32 = _objc_retainAutoreleasedReturnValue();
                      FUN_0000de94(local_358);
                      uVar33 = _objc_retainAutoreleasedReturnValue();
                      FUN_0000de50(local_358);
                      _LG_prefFloat(0x3ff4000000000000,&cf_Clock_VariableFont_SizeScale);
                      objc_msgSend_axisIDs(uVar12);
                      uVar34 = _objc_retainAutoreleasedReturnValue();
                      FUN_000087f0(&cf_weight);
                      FUN_000087f0(&cf_width);
                      FUN_000087f0(&cf_softness);
                      dVar55 = dVar57;
                      objc_msgSend_stringWithFormat_
                                (puVar29,extraout_x1_35,
                                 &
                                 cf_host___label__ptext___variable__dsource_____attributed_____original_____render_____renderIsCustom__dsourceSize___2fscale___3faxes___requested_w___1fwd___1fh___1fsoft___1f_resolvedHeight___1favailableHeight___1freason___
                                );
                      uVar35 = _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar34);
                      _objc_release(uVar33);
                      _objc_release(uVar32);
                      _objc_release(uVar31);
                      _objc_release(uVar30);
                      _objc_release(uVar23);
                      _objc_release(uVar22);
                      _objc_release(uVar21);
                      _objc_release(uVar20);
                      objc_msgSend_lastFontDiagnostic(self);
                      auVar76 = _objc_retainAutoreleasedReturnValue();
                      uVar13 = objc_msgSend_isEqualToString_(uVar35,auVar76._8_8_,auVar76._0_8_);
                      _objc_release(auVar76._0_8_);
                      if ((uVar13 & 1) == 0) {
                        objc_msgSend_setLastFontDiagnostic_(self,extraout_x1_36,uVar35);
                        _LGLog(&cf_fontdecision__);
                      }
                      _objc_release(uVar35);
                      uVar20 = extraout_x1_37;
                    }
                  }
                }
              }
              local_1d8 = local_358;
              local_1e0 = uVar19;
              objc_msgSend_dictionaryWithObjects_forKeys_count_
                        (PTR__OBJC_CLASS___NSDictionary_00055ae8,uVar20,&local_1d8,&local_1e0,1);
              uVar20 = _objc_retainAutoreleasedReturnValue();
              auVar76 = _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_00055b18);
              uVar21 = objc_msgSend_initWithString_attributes_
                                 (auVar76._0_8_,auVar76._8_8_,pcVar27,uVar20);
              lVar49 = _CTLineCreateWithAttributedString();
              if (lVar49 == 0) {
                local_2e8 = 0;
                uVar22 = *(undefined8 *)PTR__CGRectZero_00050158;
                dVar55 = *(double *)(PTR__CGRectZero_00050158 + 8);
                dVar63 = *(double *)(PTR__CGRectZero_00050158 + 0x10);
                dVar73 = *(double *)(PTR__CGRectZero_00050158 + 0x18);
                dVar52 = 0.0;
                bVar4 = true;
    LAB_0000c15c:
                objc_msgSend_fontName(local_358);
                uVar19 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_pointSize(local_358);
                _NSStringFromCGRect(uVar22,dVar55,dVar63,dVar73);
                uVar23 = _objc_retainAutoreleasedReturnValue();
                _LGLog(&cf_glyphpathunavailabletext___font_____2fbounds___path__p);
                _objc_release(uVar23);
                _objc_release(uVar19);
              }
              else {
                uVar22 = _CTLineGetBoundsWithOptions(lVar49,8);
                dVar52 = (double)_CTLineGetTypographicBounds(lVar49,0,0,0);
                local_2e8 = _CGPathCreateMutable();
                uVar23 = _CTLineGetGlyphRuns(lVar49);
                lVar18 = _CFArrayGetCount();
                if (0 < lVar18) {
                  lVar25 = 0;
                  do {
                    uVar30 = _CFArrayGetValueAtIndex(uVar23,lVar25);
                    uVar31 = _CTRunGetAttributes();
                    lVar26 = _CFDictionaryGetValue(uVar31,uVar19);
                    sVar36 = _CTRunGetGlyphCount(uVar30);
                    if ((lVar26 != 0) && (0 < (long)sVar36)) {
                      pvVar37 = _calloc(sVar36,2);
                      pvVar38 = _calloc(sVar36,0x10);
                      if ((pvVar37 == (void *)0x0) || (pvVar38 == (void *)0x0)) {
                        _free(pvVar37);
                      }
                      else {
                        _CTRunGetGlyphs(uVar30,0,sVar36,pvVar37);
                        _CTRunGetPositions(uVar30,0,sVar36,pvVar38);
                        sVar46 = 0;
                        puVar11 = (undefined8 *)((long)pvVar38 + 8);
                        do {
                          lVar39 = _CTFontCreatePathForGlyph
                                             (lVar26,*(undefined2 *)((long)pvVar37 + sVar46 * 2),0);
                          if (lVar39 != 0) {
                            _CGAffineTransformMakeTranslation(puVar11[-1],*puVar11);
                            _CGPathAddPath(local_2e8,&local_130,lVar39);
                            _CGPathRelease(lVar39);
                          }
                          sVar46 = sVar46 + 1;
                          puVar11 = puVar11 + 2;
                        } while (sVar36 != sVar46);
                        _free(pvVar37);
                      }
                      _free(pvVar38);
                    }
                    lVar25 = lVar25 + 1;
                  } while (lVar25 != lVar18);
                }
                _CFRelease(lVar49);
                if (local_2e8 == 0) {
                  bVar4 = true;
                  goto LAB_0000c15c;
                }
                iVar6 = _CGRectIsEmpty(uVar22,dVar55,dVar63,dVar73);
                bVar4 = false;
                if (iVar6 != 0) goto LAB_0000c15c;
              }
              dVar54 = (double)_CGRectGetWidth(uVar22,dVar55,dVar63,dVar73);
              dVar59 = (double)_CGRectGetHeight(uVar22,dVar55,dVar63,dVar73);
              pcVar27 = &cf_translate;
              if (dVar58 + 0.5 < dVar56) {
                pcVar27 = &cf_axis;
              }
              dVar57 = (double)(long)(dVar59 + 24.0) - dVar57;
              if (dVar57 <= 0.0) {
                dVar57 = 0.0;
              }
              dVar59 = 0.0;
              if (dVar56 <= dVar58 + 0.5 && dVar53 != 1.797693134862316e+308) {
                dVar59 = dVar57;
              }
              if (dVar54 <= dVar52) {
                dVar54 = dVar52;
              }
              dVar56 = 40.0;
              objc_msgSend_originalLabelFrame(self);
              dVar52 = (double)_CGRectGetWidth();
              if (dVar52 <= (double)(long)(dVar54 + 40.0)) {
                dVar52 = (double)(long)(dVar54 + 40.0);
              }
              objc_msgSend_originalLabelFrame(self);
              dVar54 = (double)_CGRectGetHeight();
              if (dVar54 <= dVar75) {
                dVar54 = dVar75;
              }
              dVar57 = (double)objc_msgSend_renderCanvasSize(self);
              if (dVar52 <= dVar57) {
                dVar52 = dVar57;
              }
              objc_msgSend_renderCanvasSize(self);
              if (dVar54 <= dVar56) {
                dVar54 = dVar56;
              }
              objc_msgSend_setRenderCanvasSize_(dVar52,self);
              dVar75 = (double)objc_msgSend_renderCanvasSize(self);
              objc_msgSend_renderCanvasSize(self);
              uVar19 = _objc_retain(pcVar27);
              dVar60 = (double)_CGRectGetMinY(uVar16,in_d1,in_d2,in_d3);
              dVar52 = in_d1;
              dVar56 = in_d2;
              dVar57 = in_d3;
              uVar23 = _CGRectGetMidX(uVar16,in_d1);
              uVar30 = objc_msgSend_bounds(lVar15);
              objc_msgSend_glassView(self);
              lVar49 = _objc_retainAutoreleasedReturnValue();
              if (lVar49 == 0) {
                uVar31 = _objc_alloc(PTR_PTR_00055b20);
                _LGFilterTypeForHostPrefix(&cf_Clock);
                auVar76 = _objc_retainAutoreleasedReturnValue();
                lVar49 = objc_msgSend_initWithFrame_groupName_filterType_
                                   (uVar30,dVar52,dVar56,dVar57,uVar31,auVar76._8_8_,0,auVar76._0_8_);
                _objc_release(auVar76._0_8_);
                objc_msgSend_setUserInteractionEnabled_(lVar49,extraout_x1_38,0);
                objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
                auVar76 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setBackgroundColor_(lVar49,auVar76._8_8_,auVar76._0_8_);
                _objc_release(auVar76._0_8_);
                objc_msgSend_setGlassView_(self,extraout_x1_39,lVar49);
              }
              objc_msgSend_pullBlurView(self);
              lVar18 = _objc_retainAutoreleasedReturnValue();
              if (lVar18 == 0) {
                _NSClassFromString(&cf_LGSettingsLowBlurView);
                _objc_alloc();
                auVar76 = objc_msgSend_initWithFrame_(uVar30,dVar52,dVar56,dVar57);
                lVar18 = auVar76._0_8_;
                objc_msgSend_setUserInteractionEnabled_(lVar18,auVar76._8_8_,0);
                objc_msgSend_setHidden_(lVar18,extraout_x1_40,1);
                objc_msgSend_setPullBlurView_(self,extraout_x1_41,lVar18);
              }
              objc_msgSend_superview(lVar49);
              lVar25 = _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar25 != lVar15) {
                objc_msgSend_removeFromSuperview(lVar49);
                objc_msgSend_addSubview_(lVar15,extraout_x1_42,lVar49);
              }
              objc_msgSend_superview(lVar18);
              lVar25 = _objc_retainAutoreleasedReturnValue();
              _objc_release();
              if (lVar25 != lVar15) {
                objc_msgSend_removeFromSuperview(lVar18);
                objc_msgSend_addSubview_(lVar15,extraout_x1_43,lVar18);
              }
              objc_msgSend_colorOverlayView(self);
              lVar25 = _objc_retainAutoreleasedReturnValue();
              if ((lVar48 != 0 | bVar2) == 0) {
                objc_msgSend_removeFromSuperview(lVar25);
                objc_msgSend_setColorOverlayView_(self,extraout_x1_52,0);
                objc_msgSend_setColorGradientLayer_(self,extraout_x1_53,0);
                objc_msgSend_setColorMaskView_(self,extraout_x1_54,0);
                objc_msgSend_setColorMaskLayer_(self,extraout_x1_55,0);
                _objc_release(lVar25);
                lVar25 = 0;
                uVar31 = extraout_x1_56;
              }
              else {
                if (lVar25 == 0) {
                  _objc_alloc(PTR__OBJC_CLASS___UIView_00055b28);
                  auVar76 = objc_msgSend_initWithFrame_(uVar30,dVar52,dVar56,dVar57);
                  lVar25 = auVar76._0_8_;
                  objc_msgSend_setUserInteractionEnabled_(lVar25,auVar76._8_8_,0);
                  objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
                  auVar76 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_setBackgroundColor_(lVar25,auVar76._8_8_,auVar76._0_8_);
                  _objc_release(auVar76._0_8_);
                  objc_msgSend_layer(PTR__OBJC_CLASS___CAGradientLayer_00055b30);
                  uVar31 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_setStartPoint_(0,DAT_0001e2a0);
                  objc_msgSend_setEndPoint_(0x3ff0000000000000,DAT_0001e2a8,uVar31);
                  objc_msgSend_layer(lVar25);
                  auVar76 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_addSublayer_(auVar76._0_8_,auVar76._8_8_,uVar31);
                  _objc_release(auVar76._0_8_);
                  _objc_alloc(PTR__OBJC_CLASS___UIView_00055b28);
                  uVar32 = objc_msgSend_initWithFrame_(uVar30,dVar52,dVar56,dVar57);
                  objc_msgSend_layer(PTR__OBJC_CLASS___CAShapeLayer_00055b38);
                  uVar33 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_whiteColor(PTR__OBJC_CLASS___UIColor_00055b10);
                  _objc_retainAutoreleasedReturnValue();
                  uVar34 = _objc_retainAutorelease();
                  auVar76 = objc_msgSend_CGColor();
                  objc_msgSend_setFillColor_(uVar33,auVar76._8_8_,auVar76._0_8_);
                  _objc_release(uVar34);
                  local_1f0 = &cf_path;
                  objc_msgSend_null(PTR__OBJC_CLASS___NSNull_00055b40);
                  auVar76 = _objc_retainAutoreleasedReturnValue();
                  local_1e8 = auVar76._0_8_;
                  objc_msgSend_dictionaryWithObjects_forKeys_count_
                            (PTR__OBJC_CLASS___NSDictionary_00055ae8,auVar76._8_8_,&local_1e8,&local_1f0
                             ,1);
                  auVar77 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_setActions_(uVar33,auVar77._8_8_,auVar77._0_8_);
                  _objc_release(auVar77._0_8_);
                  _objc_release(auVar76._0_8_);
                  objc_msgSend_layer(uVar32);
                  auVar76 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_addSublayer_(auVar76._0_8_,auVar76._8_8_,uVar33);
                  _objc_release(auVar76._0_8_);
                  objc_msgSend_setMaskView_(lVar25,extraout_x1_44,uVar32);
                  objc_msgSend_setColorOverlayView_(self,extraout_x1_45,lVar25);
                  objc_msgSend_setColorGradientLayer_(self,extraout_x1_46,uVar31);
                  objc_msgSend_setColorMaskView_(self,extraout_x1_47,uVar32);
                  objc_msgSend_setColorMaskLayer_(self,extraout_x1_48,uVar33);
                  _objc_release(uVar33);
                  _objc_release(uVar32);
                  _objc_release(uVar31);
                }
                objc_msgSend_superview(lVar25);
                lVar48 = _objc_retainAutoreleasedReturnValue();
                _objc_release();
                uVar31 = extraout_x1_49;
                if (lVar48 != lVar15) {
                  objc_msgSend_removeFromSuperview(lVar25);
                  objc_msgSend_addSubview_(lVar15,extraout_x1_50,lVar25);
                  uVar31 = extraout_x1_51;
                }
              }
              objc_msgSend_setRenderContainer_(self,uVar31,lVar15);
              objc_msgSend_begin(PTR__OBJC_CLASS___CATransaction_00055b48);
              objc_msgSend_setDisableActions_(PTR__OBJC_CLASS___CATransaction_00055b48,extraout_x1_57,1)
              ;
              objc_msgSend_layer(lVar49);
              uVar31 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_removeAllAnimations();
              _objc_release(uVar31);
              uVar32 = *(undefined8 *)PTR__CGPointZero_000500d8;
              uVar33 = *(undefined8 *)(PTR__CGPointZero_000500d8 + 8);
              objc_msgSend_layer(lVar49);
              uVar31 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setBounds_(uVar32,uVar33,dVar56,dVar57);
              _objc_release(uVar31);
              uVar32 = _CGRectGetMidX(uVar30,dVar52,dVar56,dVar57);
              uVar33 = _CGRectGetMidY(uVar30,dVar52,dVar56,dVar57);
              objc_msgSend_layer(lVar49);
              uVar31 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setPosition_(uVar32,uVar33);
              _objc_release(uVar31);
              dVar58 = dVar52;
              dVar65 = dVar56;
              dVar64 = dVar57;
              objc_msgSend_setFrame_(uVar30,dVar52,lVar18);
              uVar31 = extraout_x1_58;
              if (lVar25 != 0) {
                objc_msgSend_setFrame_(uVar30,dVar52,lVar25);
                uVar31 = objc_msgSend_bounds(lVar25);
                objc_msgSend_colorMaskView(self);
                uVar30 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setFrame_(uVar31,dVar52);
                _objc_release(uVar30);
                objc_msgSend_colorMaskView(self);
                uVar30 = _objc_retainAutoreleasedReturnValue();
                uVar32 = objc_msgSend_bounds();
                objc_msgSend_colorMaskLayer(self);
                uVar31 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setFrame_(uVar32,dVar52);
                _objc_release(uVar31);
                _objc_release(uVar30);
                if (bVar3) {
                  objc_msgSend_arrayWithCapacity_
                            (PTR__OBJC_CLASS___NSMutableArray_00055b50,extraout_x1_59,5);
                  uVar30 = _objc_retainAutoreleasedReturnValue();
                  lVar48 = 0;
                  do {
                    puVar29 = (&PTR_cf__3DDEFA_00050570)[lVar48];
                    objc_msgSend_whiteColor(PTR__OBJC_CLASS___UIColor_00055b10);
                    uVar31 = _objc_retainAutoreleasedReturnValue();
                    FUN_00011f98(puVar29,uVar31);
                    uVar32 = _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar31);
                    objc_msgSend_stringWithFormat_
                              (PTR__OBJC_CLASS___NSString_00055ad8,extraout_x1_60,
                               &cf_Clock_Rainbow_Color__lu);
                    uVar31 = _objc_retainAutoreleasedReturnValue();
                    _LG_prefString(uVar31,puVar29);
                    uVar33 = _objc_retainAutoreleasedReturnValue();
                    FUN_00011f98(uVar33,uVar32);
                    uVar34 = _objc_retainAutoreleasedReturnValue();
                    _objc_release(uVar33);
                    _objc_release(uVar31);
                    uVar31 = _objc_retainAutorelease(uVar34);
                    auVar76 = objc_msgSend_CGColor();
                    objc_msgSend_addObject_(uVar30,auVar76._8_8_,auVar76._0_8_);
                    _objc_release(uVar31);
                    _objc_release(uVar32);
                    lVar48 = lVar48 + 1;
                  } while (lVar48 != 5);
                  objc_msgSend_colorGradientLayer(self);
                  auVar76 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_setColors_(auVar76._0_8_,auVar76._8_8_,uVar30);
                  _objc_release(auVar76._0_8_);
                  _objc_release(uVar30);
                  objc_msgSend_setAlpha_(DAT_0001e2b0,lVar25);
                  uVar31 = extraout_x1_61;
                  dVar58 = dVar52;
                  dVar65 = dVar56;
                  dVar64 = dVar57;
                }
                else {
                  if (bVar2 == 0) {
                    FUN_0000e66c();
                    _objc_retainAutoreleasedReturnValue();
                  }
                  else {
                    objc_msgSend_whiteColor(PTR__OBJC_CLASS___UIColor_00055b10);
                    _objc_retainAutoreleasedReturnValue();
                  }
                  uVar30 = _objc_retain();
                  _objc_release();
                  uVar30 = _objc_retainAutorelease(uVar30);
                  local_200 = objc_msgSend_CGColor();
                  uVar30 = _objc_retainAutorelease(uVar30);
                  auVar76 = objc_msgSend_CGColor();
                  local_1f8 = auVar76._0_8_;
                  objc_msgSend_arrayWithObjects_count_
                            (PTR__OBJC_CLASS___NSArray_00055ad0,auVar76._8_8_,&local_200,2);
                  uVar31 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_colorGradientLayer(self);
                  auVar76 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_setColors_(auVar76._0_8_,auVar76._8_8_,uVar31);
                  _objc_release(auVar76._0_8_);
                  _objc_release(uVar31);
                  objc_msgSend_setAlpha_(0x3ff0000000000000,lVar25);
                  _objc_release(uVar30);
                  uVar31 = extraout_x1_62;
                  dVar58 = dVar52;
                  dVar65 = dVar56;
                  dVar64 = dVar57;
                }
              }
              objc_msgSend_setClipsToBounds_(lVar49,uVar31,0);
              objc_msgSend_layer(lVar49);
              auVar76 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setMasksToBounds_(auVar76._0_8_,auVar76._8_8_,0);
              _objc_release(auVar76._0_8_);
              objc_msgSend_glyphMaskView(self);
              lVar48 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_glyphMaskLayer(self);
              uVar30 = _objc_retainAutoreleasedReturnValue();
              if (lVar48 == 0) {
                uVar31 = _objc_alloc(PTR__OBJC_CLASS___UIView_00055b28);
                objc_msgSend_bounds(lVar49);
                lVar48 = objc_msgSend_initWithFrame_(uVar31);
                objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
                auVar76 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setBackgroundColor_(lVar48,auVar76._8_8_,auVar76._0_8_);
                _objc_release(auVar76._0_8_);
                objc_msgSend_layer(PTR__OBJC_CLASS___CAShapeLayer_00055b38);
                uVar31 = _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar30);
                objc_msgSend_whiteColor(PTR__OBJC_CLASS___UIColor_00055b10);
                _objc_retainAutoreleasedReturnValue();
                uVar30 = _objc_retainAutorelease();
                auVar76 = objc_msgSend_CGColor();
                objc_msgSend_setFillColor_(uVar31,auVar76._8_8_,auVar76._0_8_);
                _objc_release(uVar30);
                local_230 = &cf_path;
                objc_msgSend_null(PTR__OBJC_CLASS___NSNull_00055b40);
                uVar30 = _objc_retainAutoreleasedReturnValue();
                local_228 = &cf_bounds;
                local_218 = uVar30;
                objc_msgSend_null(PTR__OBJC_CLASS___NSNull_00055b40);
                uVar32 = _objc_retainAutoreleasedReturnValue();
                local_220 = &cf_position;
                local_210 = uVar32;
                objc_msgSend_null(PTR__OBJC_CLASS___NSNull_00055b40);
                auVar76 = _objc_retainAutoreleasedReturnValue();
                local_208 = auVar76._0_8_;
                objc_msgSend_dictionaryWithObjects_forKeys_count_
                          (PTR__OBJC_CLASS___NSDictionary_00055ae8,auVar76._8_8_,&local_218,&local_230,3
                          );
                auVar77 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setActions_(uVar31,auVar77._8_8_,auVar77._0_8_);
                _objc_release(auVar77._0_8_);
                _objc_release(auVar76._0_8_);
                _objc_release(uVar32);
                _objc_release(uVar30);
                objc_msgSend_layer(lVar48);
                auVar76 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_addSublayer_(auVar76._0_8_,auVar76._8_8_,uVar31);
                _objc_release(auVar76._0_8_);
                objc_msgSend_setGlyphMaskView_(self,extraout_x1_63,lVar48);
                objc_msgSend_setGlyphMaskLayer_(self,extraout_x1_64,uVar31);
                uVar30 = uVar31;
              }
              uVar32 = objc_msgSend_bounds(lVar49);
              objc_msgSend_layer(lVar48);
              uVar31 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setBounds_(uVar32,dVar58);
              _objc_release(uVar31);
              objc_msgSend_bounds(lVar49);
              uVar32 = _CGRectGetMidX();
              objc_msgSend_bounds(lVar49);
              dVar56 = (double)_CGRectGetMidY();
              objc_msgSend_layer(lVar48);
              uVar31 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setPosition_(uVar32);
              _objc_release(uVar31);
              objc_msgSend_bounds(lVar48);
              objc_msgSend_setFrame_(uVar30);
              dVar52 = 0.0;
              uVar31 = extraout_x1_65;
              if (!bVar4) {
                dVar56 = (dVar60 - dVar59) + 10.0;
                uVar23 = NEON_fmsub(dVar75,0x3fe0000000000000,uVar23);
                dVar52 = (double)_CGRectGetWidth(uVar22,dVar55,dVar63,dVar73);
                dVar52 = dVar75 - dVar52;
                dVar61 = (double)_CGRectGetMinX(uVar22,dVar55,dVar63,dVar73);
                dVar62 = (double)_CGRectGetMinX(uVar23,dVar56,dVar75,dVar54);
                dVar63 = (double)_CGRectGetMaxY(uVar22,dVar55,dVar63,dVar73);
                local_108 = (double)_CGRectGetMinY(uVar23);
                local_108 = dVar63 + 12.0 + local_108;
                local_130 = 0x3ff0000000000000;
                local_128 = 0;
                local_120 = 0;
                local_118 = 0xbff0000000000000;
                local_110 = dVar62 + ((double)(long)(dVar52 * 0.5) - dVar61);
                auVar76 = _CGPathCreateCopyByTransformingPath(local_2e8,&local_130);
                lVar26 = auVar76._0_8_;
                objc_msgSend_setPath_(uVar30,auVar76._8_8_,lVar26);
                _CGPathGetBoundingBox(lVar26);
                _CGRectGetMaxY();
                objc_msgSend_setRenderedGlyphBottom_(self);
                objc_msgSend_setHasRenderedGlyph_(self,extraout_x1_66,1);
                objc_msgSend_setNeedsLayout(lVar15);
                dVar65 = dVar75;
                dVar64 = dVar54;
                if (lVar25 != 0) {
                  objc_msgSend_colorMaskLayer(self);
                  auVar76 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_setPath_(auVar76._0_8_,auVar76._8_8_,lVar26);
                  _objc_release(auVar76._0_8_);
                  _CGPathGetBoundingBox(lVar26);
                  uVar23 = _CGRectInset();
                  objc_msgSend_colorGradientLayer(self);
                  uVar22 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_setFrame_(uVar23);
                  _objc_release(uVar22);
                  dVar65 = dVar75;
                  dVar64 = dVar54;
                }
                dVar62 = (double)_CACurrentMediaTime();
                objc_msgSend_bounds(lVar49);
                if (((lVar26 == 0) || (dVar65 <= 0.0)) || (dVar64 <= 0.0)) {
                  dVar63 = dVar64;
                  _NSStringFromCGSize(dVar65);
                  uVar22 = _objc_retainAutoreleasedReturnValue();
                  _LGLog(&cf_maskpublishrejectedpath__psize___scale___2f);
                  _objc_release(uVar22);
                  dVar56 = dVar64;
                  dVar64 = dVar63;
    LAB_0000d218:
                  dVar61 = (double)_CACurrentMediaTime();
                  dVar52 = dVar61 - dVar62;
    LAB_0000d224:
                  objc_msgSend_bounds(lVar49);
                  _NSStringFromCGRect();
                  uVar22 = _objc_retainAutoreleasedReturnValue();
                  _CGPathGetBoundingBox(lVar26);
                  _NSStringFromCGRect();
                  uVar23 = _objc_retainAutoreleasedReturnValue();
                  _LGLog(&cf_maskpublishfailedreason___text___glass___path___);
                  _objc_release(uVar23);
                  _objc_release(uVar22);
                }
                else {
                  uVar7 = (uint)dVar65;
                  uVar44 = (ulong)uVar7;
                  uVar42 = (uint)dVar64;
                  uVar47 = (ulong)uVar42;
                  uVar13 = uVar44 * uVar47;
                  if (uVar44 * uVar47 - 0x2000001 < 0xfffffffffe000000) {
                    _LGLog(&cf_maskpublishsizerejecteddims__ux_ubytes__zucapacity__zu);
                    goto LAB_0000d218;
                  }
                  pvVar37 = DAT_00056200;
                  uVar5 = DAT_00056208;
                  if ((DAT_00056208 <= uVar13 && uVar13 - DAT_00056208 != 0) &&
                     (pvVar37 = _realloc(DAT_00056200,uVar13), uVar5 = uVar13, pvVar37 == (void *)0x0))
                  {
                    _LGLog(&cf_maskalphaallocationfailedbytes__zu);
                    goto LAB_0000d218;
                  }
                  DAT_00056208 = uVar5;
                  DAT_00056200 = pvVar37;
                  pvVar37 = DAT_00056200;
                  _bzero(DAT_00056200,uVar13);
                  lVar39 = _CGBitmapContextCreate(pvVar37,uVar44,uVar47,8,uVar44,0,7);
                  if (lVar39 == 0) {
                    _LGLog(&cf_maskbitmapcontextfaileddims__ux_u);
                    goto LAB_0000d218;
                  }
                  _CGContextTranslateCTM(0,(double)uVar47);
                  _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,lVar39);
                  _CGContextAddPath(lVar39,lVar26);
                  dVar56 = 1.0;
                  _CGContextSetGrayFillColor(0x3ff0000000000000,lVar39);
                  _CGContextFillPath(lVar39);
                  _CGContextRelease(lVar39);
                  if (DAT_00056218 != -1) {
                    _dispatch_once(&DAT_00056218,&PTR___NSConcreteGlobalBlock_00050718);
                  }
                  puVar11 = DAT_00055f30;
                  if ((long)DAT_00055f30 + 1U < 2) {
                    _LGLog(&cf_maskpublishhasnosharedmapping);
                  }
                  else {
                    plVar1 = DAT_00055f30 + 2;
                    lVar39 = (DAT_00055f30[2] & 1) + DAT_00055f30[2];
                    *plVar1 = lVar39 + 1;
                    *puVar11 = DAT_0001e2b8;
                    puVar11[1] = 0x2000000;
                    DAT_00056210 = DAT_00056210 + 1;
                    puVar11[3] = DAT_00056210;
                    *(uint *)(puVar11 + 4) = uVar7;
                    *(uint *)((long)puVar11 + 0x24) = uVar42;
                    puVar11[5] = uVar13;
                    puVar11[6] = DAT_0001e2c0;
                    _memcpy(puVar11 + 7,DAT_00056200,uVar13);
                    *plVar1 = lVar39 + 2;
                  }
                  dVar61 = (double)_CACurrentMediaTime();
                  dVar52 = dVar61 - dVar62;
                  if ((long)puVar11 + 1U < 2) goto LAB_0000d224;
                }
                objc_msgSend_lgInvalidateFilterContents(lVar49);
                _CGPathRelease(lVar26);
                _CGPathRelease(local_2e8);
                uVar31 = extraout_x1_67;
              }
              objc_msgSend_setMaskView_(lVar49,uVar31,lVar48);
              objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_00055b48);
              uVar13 = objc_msgSend_isEqualToString_(uVar8,extraout_x1_68,&cf_motion);
              if ((uVar13 & 1) == 0) {
                objc_msgSend_shared(PTR_PTR_00055af0);
                uVar22 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_trackMotion();
                _objc_release(uVar22);
              }
              if (DAT_00055fb8 == 0) {
                uVar7 = objc_msgSend_lgFilterAttached(lVar49);
                if (lVar25 == 0) goto LAB_0000d34c;
    LAB_0000d310:
                objc_msgSend_colorMaskLayer(self);
                uVar22 = _objc_retainAutoreleasedReturnValue();
                lVar26 = objc_msgSend_path();
                uVar42 = (uint)(lVar26 != 0);
                _objc_release(uVar22);
              }
              else {
                uVar7 = 0;
                if (lVar25 != 0) goto LAB_0000d310;
    LAB_0000d34c:
                uVar42 = 0;
              }
              if ((uVar7 & 1 | uVar42) == 0) {
                objc_msgSend_originalLabelAlpha(0,self);
              }
              objc_msgSend_setAlpha_(lVar10);
              auVar76 = objc_msgSend_originalLabelHidden(self);
              objc_msgSend_setHidden_(lVar10,auVar76._8_8_,auVar76._0_8_);
              uVar22 = extraout_x1_69;
              if ((local_370 != 0) && (local_370 != lVar10)) {
                if ((uVar7 | uVar42) == 0) {
                  auVar76 = objc_msgSend_originalVisibleSourceHidden(self);
                  objc_msgSend_setHidden_(local_370,auVar76._8_8_,auVar76._0_8_);
                  objc_msgSend_originalVisibleSourceAlpha(self);
                  objc_msgSend_setAlpha_(local_370);
                  uVar50 = objc_msgSend_originalVisibleSourceLayerOpacity(self);
                }
                else {
                  objc_msgSend_setHidden_(local_370,extraout_x1_69,1);
                  objc_msgSend_setAlpha_(0,local_370);
                  uVar50 = 0;
                }
                objc_msgSend_layer(local_370);
                uVar22 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setOpacity_(uVar50);
                _objc_release(uVar22);
                uVar22 = extraout_x1_70;
              }
              objc_msgSend_setPullBlurKnown_(self,uVar22,0);
              objc_msgSend_updatePullBlur(self);
              lVar26 = lVar49;
              if (lVar25 != 0) {
                lVar26 = lVar25;
              }
              objc_msgSend_bringSubviewToFront_(lVar15,extraout_x1_71,lVar26);
              iVar6 = _LGDebugLoggingEnabled();
              if (iVar6 != 0) {
                objc_msgSend_window(lVar49);
                lVar26 = _objc_retainAutoreleasedReturnValue();
                dVar54 = dVar56;
                dVar57 = dVar65;
                dVar73 = dVar64;
                dVar63 = dVar69;
                dVar59 = dVar66;
                dVar55 = dVar71;
                local_2e8 = uVar17;
                if (lVar26 != 0) {
                  uVar22 = objc_msgSend_bounds(lVar49);
                  objc_msgSend_window(lVar49);
                  auVar76 = _objc_retainAutoreleasedReturnValue();
                  local_2e8 = objc_msgSend_convertRect_toView_
                                        (uVar22,lVar49,auVar76._8_8_,auVar76._0_8_);
                  dVar54 = dVar56;
                  dVar57 = dVar65;
                  dVar73 = dVar64;
                  _objc_release(auVar76._0_8_);
                  dVar63 = dVar65;
                  dVar59 = dVar56;
                  dVar55 = dVar64;
                }
                _objc_release(lVar26);
                objc_msgSend_lastNearestObstacle(self);
                lVar26 = _objc_retainAutoreleasedReturnValue();
                _objc_release();
                objc_msgSend_lastRetractionPhase(self);
                auVar76 = _objc_retainAutoreleasedReturnValue();
                iVar6 = objc_msgSend_isEqualToString_(uVar19,auVar76._8_8_,auVar76._0_8_);
                _objc_release(auVar76._0_8_);
                if ((lVar45 != lVar26) || (uVar22 = extraout_x1_72, iVar6 != 1)) {
                  objc_msgSend_layer(lVar45);
                  uVar22 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_presentationLayer();
                  lVar39 = _objc_retainAutoreleasedReturnValue();
                  _objc_release(uVar22);
                  objc_msgSend_window(lVar45);
                  lVar40 = _objc_retainAutoreleasedReturnValue();
                  uVar22 = uVar17;
                  local_440 = dVar71;
                  local_438 = dVar69;
                  local_430 = dVar66;
                  if (lVar40 != 0) {
                    uVar22 = objc_msgSend_bounds(lVar45);
                    objc_msgSend_window(lVar45);
                    auVar76 = _objc_retainAutoreleasedReturnValue();
                    uVar22 = objc_msgSend_convertRect_toView_(uVar22,lVar45,auVar76._8_8_,auVar76._0_8_)
                    ;
                    _objc_release(auVar76._0_8_);
                    local_440 = dVar73;
                    local_438 = dVar57;
                    local_430 = dVar54;
                  }
                  _objc_release(lVar40);
                  dVar54 = (double)objc_msgSend_lastNearestTop(self);
                  if ((dVar54 != 0.0) && (dVar53 != 1.797693134862316e+308)) {
                    objc_msgSend_lastNearestTop(self);
                  }
                  if (lVar45 == 0) {
                    local_448 = &cf_none;
                  }
                  else {
                    _objc_opt_class(lVar45);
                    _NSStringFromClass();
                    local_448 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
                  }
                  _NSStringFromCGRect(local_3c0,local_3c8,dStack_3d0,local_3d8);
                  uVar23 = _objc_retainAutoreleasedReturnValue();
                  dVar54 = dVar66;
                  dVar56 = dVar69;
                  dVar57 = dVar71;
                  if (lVar39 != 0) {
                    objc_msgSend_frame(uVar17,dVar66,dVar69,dVar71,lVar39);
                  }
                  _NSStringFromCGRect();
                  uVar32 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_superview(lVar45);
                  lVar40 = _objc_retainAutoreleasedReturnValue();
                  uVar31 = uVar17;
                  if (lVar40 != 0) {
                    uVar31 = objc_msgSend_bounds(lVar45);
                    objc_msgSend_superview(lVar45);
                    auVar76 = _objc_retainAutoreleasedReturnValue();
                    lVar26 = auVar76._0_8_;
                    uVar31 = objc_msgSend_convertRect_toView_
                                       (uVar31,dVar54,dVar56,dVar57,lVar45,auVar76._8_8_,lVar26);
                  }
                  _NSStringFromCGRect(uVar31);
                  uVar31 = _objc_retainAutoreleasedReturnValue();
                  _NSStringFromCGRect(uVar22,local_430,local_438,local_440);
                  uVar22 = _objc_retainAutoreleasedReturnValue();
                  _NSStringFromCGRect(uVar16,in_d1,in_d2,in_d3);
                  uVar16 = _objc_retainAutoreleasedReturnValue();
                  _LGLog(&
                         cf_retractioneventreason___phase___phaseChanged__dcandidates__luobstacleChanged__dnearestJump___1fobstacle___model___present___container___window___source___
                        );
                  _objc_release(uVar16);
                  _objc_release(uVar22);
                  _objc_release(uVar31);
                  if (lVar40 != 0) {
                    _objc_release(lVar26);
                  }
                  _objc_release(lVar40);
                  _objc_release(uVar32);
                  _objc_release(uVar23);
                  if (lVar45 != 0) {
                    _objc_release(local_448);
                  }
                  _objc_release(lVar39);
                  uVar22 = extraout_x1_73;
                }
                objc_msgSend_setLastNearestObstacle_(self,uVar22,lVar45);
                dVar54 = 0.0;
                if (dVar53 != 1.797693134862316e+308) {
                  dVar54 = dVar53;
                }
                objc_msgSend_setLastNearestTop_(dVar54,self);
                objc_msgSend_setLastRetractionPhase_(self,extraout_x1_74,uVar19);
                uVar13 = _CGRectIsNull(local_2e8,dVar59,dVar63,dVar55);
                if ((uVar13 & 1) == 0) {
                  dVar54 = (double)_CGRectGetMinY(local_2e8,dVar59,dVar63,dVar55);
                  objc_msgSend_frame(lVar49);
                  dVar56 = (double)_CGRectGetMinY();
                  dVar53 = 12.0;
                  if (12.0 < ABS(dVar54 - dVar56)) {
                    objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_00055b50);
                    uVar16 = _objc_retainAutoreleasedReturnValue();
                    auVar78 = _objc_retain(lVar49);
                    lVar26 = auVar78._0_8_;
                    while( true ) {
                      uVar22 = auVar78._0_8_;
                      if (lVar26 == 0) break;
                      objc_msgSend_window(uVar22);
                      lVar26 = _objc_retainAutoreleasedReturnValue();
                      uVar23 = uVar17;
                      dVar54 = dVar66;
                      dVar56 = dVar69;
                      dVar57 = dVar71;
                      if (lVar26 != 0) {
                        uVar23 = objc_msgSend_bounds(uVar22);
                        objc_msgSend_window(uVar22);
                        auVar76 = _objc_retainAutoreleasedReturnValue();
                        uVar23 = objc_msgSend_convertRect_toView_
                                           (uVar23,dVar53,dVar63,dVar55,uVar22,auVar76._8_8_,
                                            auVar76._0_8_);
                        _objc_release(auVar76._0_8_);
                        dVar54 = dVar53;
                        dVar56 = dVar63;
                        dVar57 = dVar55;
                      }
                      _objc_release(lVar26);
                      objc_msgSend_layer(uVar22);
                      uVar31 = _objc_retainAutoreleasedReturnValue();
                      objc_msgSend_presentationLayer();
                      lVar26 = _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar31);
                      puVar29 = PTR__OBJC_CLASS___NSString_00055ad8;
                      _objc_opt_class(uVar22);
                      _NSStringFromClass();
                      uVar31 = _objc_retainAutoreleasedReturnValue();
                      objc_msgSend_frame(uVar22);
                      _NSStringFromCGRect();
                      uVar32 = _objc_retainAutoreleasedReturnValue();
                      if (lVar26 != 0) {
                        objc_msgSend_frame(uVar17,dVar66,dVar69,dVar71,lVar26);
                      }
                      _NSStringFromCGRect();
                      uVar33 = _objc_retainAutoreleasedReturnValue();
                      _NSStringFromCGRect(uVar23);
                      uVar23 = _objc_retainAutoreleasedReturnValue();
                      objc_msgSend_transform(uVar22);
                      _NSStringFromCGAffineTransform(auStack_2e0);
                      auVar76 = _objc_retainAutoreleasedReturnValue();
                      objc_msgSend_stringWithFormat_
                                (puVar29,auVar76._8_8_,&cf___model___present___window___transform___);
                      auVar77 = _objc_retainAutoreleasedReturnValue();
                      objc_msgSend_addObject_(uVar16,auVar77._8_8_,auVar77._0_8_);
                      _objc_release(auVar77._0_8_);
                      _objc_release(auVar76._0_8_);
                      _objc_release(uVar23);
                      _objc_release(uVar33);
                      _objc_release(uVar32);
                      _objc_release(uVar31);
                      _objc_release(lVar26);
                      objc_msgSend_superview(uVar22);
                      lVar26 = _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar22);
                      auVar78._8_8_ = extraout_x1_75;
                      auVar78._0_8_ = lVar26;
                      dVar53 = dVar54;
                      dVar63 = dVar56;
                      dVar55 = dVar57;
                    }
                    objc_msgSend_componentsJoinedByString_(uVar16,auVar78._8_8_,&cf_<_);
                    uVar17 = _objc_retainAutoreleasedReturnValue();
                    _LGLog(&cf_ancestormismatch__);
                    _objc_release(uVar17);
                    _objc_release(uVar16);
                  }
                }
              }
              _objc_release(uVar30);
              _objc_release(lVar48);
              _objc_release(lVar25);
              _objc_release(lVar18);
              _objc_release(lVar49);
              _objc_release(uVar19);
              _objc_release(uVar21);
              _objc_release(uVar20);
            }
            _objc_release(local_3e0);
            _objc_release(uVar43);
            _objc_release(pcVar28);
            _objc_release(local_358);
            _objc_release(uVar12);
            uVar12 = extraout_x1_76;
          }
          objc_msgSend_setApplying_(self,uVar12,0);
          objc_msgSend_reassertNativeTimeHidden(self);
          auVar76 = objc_msgSend_appliedChanges(self);
          objc_msgSend_setAppliedChanges_(self,auVar76._8_8_,auVar76._0_8_ + 1);
          dVar63 = (double)_CACurrentMediaTime();
          dVar63 = dVar63 - dVar51;
          dVar53 = (double)objc_msgSend_totalApplyTime(self);
          objc_msgSend_setTotalApplyTime_(dVar53 + dVar63,self);
          dVar66 = (double)objc_msgSend_peakApplyTime(self);
          dVar53 = dVar63;
          if (dVar63 <= dVar66) {
            dVar53 = dVar66;
          }
          objc_msgSend_setPeakApplyTime_(dVar53,self);
          dVar53 = dVar51 + dVar63;
          if (dVar62 != dVar68) {
            dVar53 = dVar62;
          }
          if (dVar52 <= 0.0) {
            dVar61 = dVar53;
          }
          FUN_0000e530(dVar68 - dVar51,dVar53 - dVar68,dVar52,(dVar51 + dVar63) - dVar61,dVar63,1);
        }
        else {
          objc_msgSend_reassertNativeTimeHidden(self);
          auVar76 = objc_msgSend_skippedChanges(self);
          objc_msgSend_setSkippedChanges_(self,auVar76._8_8_,auVar76._0_8_ + 1);
          dVar53 = (double)_CACurrentMediaTime();
          FUN_0000e530(dVar68 - dVar51,0,0,dVar53 - dVar68,dVar53 - dVar51,0);
        }
        objc_msgSend_emitSummaryIfNeeded(self);
        _objc_release(uVar14);
        _objc_release(lVar45);
        _objc_release(lVar15);
      }
      _objc_release(local_370);
      _objc_release(lVar10);
    LAB_0000dc50:
      _objc_release(uVar9);
      _objc_release(uVar8);
      if (*(long *)PTR____stack_chk_guard_000502b0 == local_b0) {
        return;
      }
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
}

// IMP 0x0000e6f0  types v16@0:8
- (void)emitSummaryIfNeeded {
      undefined8 uVar1;
      undefined8 uVar2;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      double dVar3;
      double dVar4;

      dVar3 = (double)_CACurrentMediaTime();
      dVar4 = (double)objc_msgSend_sampleStart(self);
      if (dVar3 - dVar4 < 2.0) {
        return;
      }
      objc_msgSend_host(self);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_opt_class();
      _NSStringFromClass();
      uVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_layoutCalls(self);
      objc_msgSend_appliedChanges(self);
      objc_msgSend_skippedChanges(self);
      objc_msgSend_totalApplyTime(self);
      objc_msgSend_peakApplyTime(self);
      _LGLog(&cf_perfhost___layouts__luapplies__luskips__lutotal_ms___3fpeak_ms___3f);
      _objc_release(uVar2);
      _objc_release(uVar1);
      objc_msgSend_setLayoutCalls_(self,extraout_x1,0);
      objc_msgSend_setAppliedChanges_(self,extraout_x1_00,0);
      objc_msgSend_setSkippedChanges_(self,extraout_x1_01,0);
      objc_msgSend_setTotalApplyTime_(0,self);
      objc_msgSend_setPeakApplyTime_(0,self);
      objc_msgSend_setSampleStart_(dVar3,self);
      return;
}

// IMP 0x0000e84c  types v16@0:8
- (void)restore {
      int iVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      long lVar5;
      undefined8 uVar6;
      undefined8 uVar7;
      undefined8 uVar8;
      undefined8 uVar9;
      undefined8 uVar10;
      undefined8 uVar11;
      undefined8 uVar12;
      undefined8 uVar13;
      undefined8 uVar14;
      undefined8 uVar15;
      undefined8 uVar16;
      undefined8 uVar17;
      undefined8 uVar18;
      undefined8 uVar19;
      ulong uVar20;
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
      undefined8 extraout_x1_11;
      undefined8 extraout_x1_12;
      undefined8 extraout_x1_13;
      undefined8 extraout_x1_14;
      undefined8 extraout_x1_15;
      undefined8 extraout_x1_16;
      undefined8 extraout_x1_17;
      undefined4 uVar21;
      undefined auVar22 [16];
      undefined auVar23 [16];
      undefined8 local_f0;
      undefined8 local_e8;
      long local_90;

      iVar1 = _LGDebugLoggingEnabled();
      if (iVar1 != 0) {
        objc_msgSend_host(self);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_sourceLabel(self);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        _lgHostEnabled(&cf_Clock);
        objc_msgSend_applying(self);
        objc_msgSend_scheduled(self);
        objc_msgSend_sourceLabel(self);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_text();
        lVar5 = _objc_retainAutoreleasedReturnValue();
        local_90 = lVar5;
        if (lVar5 == 0) {
          objc_msgSend_sourceLabel(self);
          local_e8 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_attributedText();
          local_f0 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_string();
          local_90 = _objc_retainAutoreleasedReturnValue();
        }
        objc_msgSend_sourceLabel(self);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_font();
        uVar7 = _objc_retainAutoreleasedReturnValue();
        FUN_0000de94();
        uVar8 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_sourceLabel(self);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        FUN_0000dfe0();
        uVar10 = _objc_retainAutoreleasedReturnValue();
        FUN_0000de94();
        uVar11 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_originalFont(self);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        FUN_0000de94();
        uVar13 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_sourceLabel(self);
        uVar14 = _objc_retainAutoreleasedReturnValue();
        _objc_getAssociatedObject(uVar14,PTR_LOOP_00055f28);
        uVar15 = _objc_retainAutoreleasedReturnValue();
        FUN_0000de94();
        uVar16 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_glassView(self);
        uVar17 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_sourceLabel(self);
        uVar18 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_alpha();
        objc_msgSend_sourceLabel(self);
        uVar19 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_isHidden();
        _LGLog(&
               cf_restorebeginstate__phost__psource__penabled__dapplying__dscheduled__dtext___direct_____attributed_____stateCached_____associatedCached_____glass__palpha___2fhidden__d
              );
        _objc_release(uVar19);
        _objc_release(uVar18);
        _objc_release(uVar17);
        _objc_release(uVar16);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        if (lVar5 == 0) {
          _objc_release(local_90);
          _objc_release(local_f0);
          _objc_release(local_e8);
        }
        _objc_release(lVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      objc_msgSend_sourceLabel(self);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        uVar20 = objc_msgSend_applying(self);
        _objc_release(lVar5);
        if ((uVar20 & 1) == 0) {
          objc_msgSend_setApplying_(self,extraout_x1,1);
          objc_msgSend_originalFont(self);
          lVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (lVar5 != 0) {
            objc_msgSend_originalFont(self);
            uVar2 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_sourceLabel(self);
            auVar22 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setFont_(auVar22._0_8_,auVar22._8_8_,uVar2);
            _objc_release(auVar22._0_8_);
            _objc_release(uVar2);
          }
          uVar3 = objc_msgSend_originalLabelAlpha(self);
          objc_msgSend_sourceLabel(self);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setAlpha_(uVar3);
          _objc_release(uVar2);
          uVar2 = objc_msgSend_originalLabelHidden(self);
          objc_msgSend_sourceLabel(self);
          auVar22 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setHidden_(auVar22._0_8_,auVar22._8_8_,uVar2);
          _objc_release(auVar22._0_8_);
          objc_msgSend_setApplying_(self,extraout_x1_00,0);
        }
      }
      iVar1 = _LGDebugLoggingEnabled();
      if (iVar1 != 0) {
        objc_msgSend_sourceLabel(self);
        lVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          objc_msgSend_sourceLabel(self);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_sourceLabel(self);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_font();
          uVar4 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94();
          uVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_sourceLabel(self);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          FUN_0000dfe0();
          uVar8 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94();
          uVar9 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_sourceLabel(self);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_alpha();
          objc_msgSend_sourceLabel(self);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_isHidden();
          _LGLog(&cf_restoreappliedstate__psource__pdirect_____attributed_____alpha___2fhidden__d);
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar4);
          _objc_release(uVar3);
          _objc_release(uVar2);
        }
      }
      objc_msgSend_visibleSourceView(self);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        auVar22 = objc_msgSend_applying(self);
        objc_msgSend_setApplying_(self,auVar22._8_8_,1);
        uVar2 = objc_msgSend_originalVisibleSourceHidden(self);
        objc_msgSend_visibleSourceView(self);
        auVar23 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setHidden_(auVar23._0_8_,auVar23._8_8_,uVar2);
        _objc_release(auVar23._0_8_);
        uVar3 = objc_msgSend_originalVisibleSourceAlpha(self);
        objc_msgSend_visibleSourceView(self);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setAlpha_(uVar3);
        _objc_release(uVar2);
        uVar21 = objc_msgSend_originalVisibleSourceLayerOpacity(self);
        objc_msgSend_visibleSourceView(self);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_layer();
        uVar3 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setOpacity_(uVar21);
        _objc_release(uVar3);
        _objc_release(uVar2);
        objc_msgSend_setApplying_(self,extraout_x1_01,auVar22._0_8_);
      }
      objc_msgSend_glassView(self);
      auVar22 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setMaskView_(auVar22._0_8_,auVar22._8_8_,0);
      _objc_release(auVar22._0_8_);
      objc_msgSend_glassView(self);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_removeFromSuperview();
      _objc_release(uVar2);
      objc_msgSend_pullBlurView(self);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_removeFromSuperview();
      _objc_release(uVar2);
      objc_msgSend_colorOverlayView(self);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_removeFromSuperview();
      _objc_release(uVar2);
      objc_msgSend_setGlassView_(self,extraout_x1_02,0);
      objc_msgSend_setPullBlurView_(self,extraout_x1_03,0);
      objc_msgSend_setColorOverlayView_(self,extraout_x1_04,0);
      objc_msgSend_setColorGradientLayer_(self,extraout_x1_05,0);
      objc_msgSend_setColorMaskView_(self,extraout_x1_06,0);
      objc_msgSend_setColorMaskLayer_(self,extraout_x1_07,0);
      objc_msgSend_setGlyphMaskView_(self,extraout_x1_08,0);
      objc_msgSend_setGlyphMaskLayer_(self,extraout_x1_09,0);
      objc_msgSend_setRenderContainer_(self,extraout_x1_10,0);
      objc_msgSend_setSourceLabel_(self,extraout_x1_11,0);
      objc_msgSend_setVisibleSourceView_(self,extraout_x1_12,0);
      objc_msgSend_setOriginalFont_(self,extraout_x1_13,0);
      objc_msgSend_setRenderCanvasSize_
                (*(undefined8 *)PTR__CGSizeZero_00050160,*(undefined8 *)(PTR__CGSizeZero_00050160 + 8),
                 self);
      objc_msgSend_setHasRenderedGlyph_(self,extraout_x1_14,0);
      objc_msgSend_setComplicationLayoutShift_(0,self);
      objc_msgSend_setComplicationRow_(self,extraout_x1_15,0);
      objc_msgSend_host(self);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      FUN_0000e3f4();
      uVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setNeedsLayout();
      _objc_release(uVar3);
      _objc_release(uVar2);
      objc_msgSend_setLastSignature_(self,extraout_x1_16,0);
      objc_msgSend_setLastFontDiagnostic_(self,extraout_x1_17,0);
      return;
}

// IMP 0x0000f024  types @16@0:8
- (id)host {
      ID IVar1;

      _objc_loadWeakRetained(self + 0x18);
      IVar1 = _objc_autoreleaseReturnValue();
      return IVar1;
}

// IMP 0x0000f03c  types v24@0:8@16
- (void)setHost:(id)setHost {
      _objc_storeWeak(self + 0x18,setHost);
      return;
}

// IMP 0x0000f048  types @16@0:8
- (id)sourceLabel {
      ID IVar1;

      _objc_loadWeakRetained(self + 0x20);
      IVar1 = _objc_autoreleaseReturnValue();
      return IVar1;
}

// IMP 0x0000f060  types v24@0:8@16
- (void)setSourceLabel:(id)setSourceLabel {
      _objc_storeWeak(self + 0x20,setSourceLabel);
      return;
}

// IMP 0x0000f06c  types @16@0:8
- (id)visibleSourceView {
      ID IVar1;

      _objc_loadWeakRetained(self + 0x28);
      IVar1 = _objc_autoreleaseReturnValue();
      return IVar1;
}

// IMP 0x0000f084  types v24@0:8@16
- (void)setVisibleSourceView:(id)setVisibleSourceView {
      _objc_storeWeak(self + 0x28,setVisibleSourceView);
      return;
}

// IMP 0x0000f090  types @16@0:8
- (id)originalFont {
      return *(ID *)(self + 0x30);
}

// IMP 0x0000f098  types v24@0:8@16
- (void)setOriginalFont:(id)setOriginalFont {
      _objc_storeStrong(self + 0x30,setOriginalFont);
      return;
}

// IMP 0x0000f0a4  types d16@0:8
- (double)originalLabelAlpha {
      return *(double *)(self + 0x38);
}

// IMP 0x0000f0ac  types v24@0:8d16
- (void)setOriginalLabelAlpha:(double)setOriginalLabelAlpha {
      *(double *)(self + 0x38) = setOriginalLabelAlpha;
      return;
}

// IMP 0x0000f0b4  types B16@0:8
- (BOOL)originalLabelHidden {
      return (bool)*(byte *)(self + 8);
}

// IMP 0x0000f0bc  types v20@0:8B16
- (void)setOriginalLabelHidden:(BOOL)setOriginalLabelHidden {
      *(char *)(self + 8) = (char)setOriginalLabelHidden;
      return;
}

// IMP 0x0000f0c4  types d16@0:8
- (double)originalVisibleSourceAlpha {
      return *(double *)(self + 0x40);
}

// IMP 0x0000f0cc  types v24@0:8d16
- (void)setOriginalVisibleSourceAlpha:(double)setOriginalVisibleSourceAlpha {
      *(double *)(self + 0x40) = setOriginalVisibleSourceAlpha;
      return;
}

// IMP 0x0000f0d4  types f16@0:8
- (float)originalVisibleSourceLayerOpacity {
      return *(float *)(self + 0x10);
}

// IMP 0x0000f0dc  types v20@0:8f16
- (void)setOriginalVisibleSourceLayerOpacity:(float)setOriginalVisibleSourceLayerOpacity {
      *(float *)(self + 0x10) = setOriginalVisibleSourceLayerOpacity;
      return;
}

// IMP 0x0000f0e4  types B16@0:8
- (BOOL)originalVisibleSourceHidden {
      return (bool)*(byte *)(self + 9);
}

// IMP 0x0000f0ec  types v20@0:8B16
- (void)setOriginalVisibleSourceHidden:(BOOL)setOriginalVisibleSourceHidden {
      *(char *)(self + 9) = (char)setOriginalVisibleSourceHidden;
      return;
}

// IMP 0x0000f0f4  types @16@0:8
- (id)glassView {
      return *(ID *)(self + 0x48);
}

// IMP 0x0000f0fc  types v24@0:8@16
- (void)setGlassView:(id)setGlassView {
      _objc_storeStrong(self + 0x48,setGlassView);
      return;
}

// IMP 0x0000f108  types @16@0:8
- (id)pullBlurView {
      return *(ID *)(self + 0x50);
}

// IMP 0x0000f110  types v24@0:8@16
- (void)setPullBlurView:(id)setPullBlurView {
      _objc_storeStrong(self + 0x50,setPullBlurView);
      return;
}

// IMP 0x0000f11c  types @16@0:8
- (id)glyphMaskView {
      return *(ID *)(self + 0x58);
}

// IMP 0x0000f124  types v24@0:8@16
- (void)setGlyphMaskView:(id)setGlyphMaskView {
      _objc_storeStrong(self + 0x58,setGlyphMaskView);
      return;
}

// IMP 0x0000f130  types @16@0:8
- (id)glyphMaskLayer {
      return *(ID *)(self + 0x60);
}

// IMP 0x0000f138  types v24@0:8@16
- (void)setGlyphMaskLayer:(id)setGlyphMaskLayer {
      _objc_storeStrong(self + 0x60,setGlyphMaskLayer);
      return;
}

// IMP 0x0000f144  types @16@0:8
- (id)colorOverlayView {
      return *(ID *)(self + 0x68);
}

// IMP 0x0000f14c  types v24@0:8@16
- (void)setColorOverlayView:(id)setColorOverlayView {
      _objc_storeStrong(self + 0x68,setColorOverlayView);
      return;
}

// IMP 0x0000f158  types @16@0:8
- (id)colorGradientLayer {
      return *(ID *)(self + 0x70);
}

// IMP 0x0000f160  types v24@0:8@16
- (void)setColorGradientLayer:(id)setColorGradientLayer {
      _objc_storeStrong(self + 0x70,setColorGradientLayer);
      return;
}

// IMP 0x0000f16c  types @16@0:8
- (id)colorMaskView {
      return *(ID *)(self + 0x78);
}

// IMP 0x0000f174  types v24@0:8@16
- (void)setColorMaskView:(id)setColorMaskView {
      _objc_storeStrong(self + 0x78,setColorMaskView);
      return;
}

// IMP 0x0000f180  types @16@0:8
- (id)colorMaskLayer {
      return *(ID *)(self + 0x80);
}

// IMP 0x0000f188  types v24@0:8@16
- (void)setColorMaskLayer:(id)setColorMaskLayer {
      _objc_storeStrong(self + 0x80,setColorMaskLayer);
      return;
}

// IMP 0x0000f194  types @16@0:8
- (id)renderContainer {
      ID IVar1;

      _objc_loadWeakRetained(self + 0x88);
      IVar1 = _objc_autoreleaseReturnValue();
      return IVar1;
}

// IMP 0x0000f1ac  types v24@0:8@16
- (void)setRenderContainer:(id)setRenderContainer {
      _objc_storeWeak(self + 0x88,setRenderContainer);
      return;
}

// IMP 0x0000f1b8  types {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
- (id)originalLabelFrame {
      return __return_storage_ptr__;
}

// IMP 0x0000f1c4  types v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
- (void)setOriginalLabelFrame:(id)setOriginalLabelFrame {
      undefined8 in_d0;
      undefined8 in_d1;
      undefined8 in_d2;
      undefined8 in_d3;

      *(undefined8 *)(self + 0x118) = in_d0;
      *(undefined8 *)(self + 0x120) = in_d1;
      *(undefined8 *)(self + 0x128) = in_d2;
      *(undefined8 *)(self + 0x130) = in_d3;
      return;
}

// IMP 0x0000f1d0  types {CGSize=dd}16@0:8
- (id)renderCanvasSize {
      CGSize CVar1;

      CVar1.field1_0x8 = (double)_cmd;
      CVar1.field0_0x0 = (double)self;
      return CVar1;
}

// IMP 0x0000f1d8  types v32@0:8{CGSize=dd}16
- (void)setRenderCanvasSize:(id)setRenderCanvasSize {
      undefined8 in_d0;
      undefined8 in_d1;

      *(undefined8 *)(self + 0x108) = in_d0;
      *(undefined8 *)(self + 0x110) = in_d1;
      return;
}

// IMP 0x0000f1e0  types d16@0:8
- (double)renderedGlyphBottom {
      return *(double *)(self + 0x90);
}

// IMP 0x0000f1e8  types v24@0:8d16
- (void)setRenderedGlyphBottom:(double)setRenderedGlyphBottom {
      *(double *)(self + 0x90) = setRenderedGlyphBottom;
      return;
}

// IMP 0x0000f1f0  types B16@0:8
- (BOOL)hasRenderedGlyph {
      return (bool)*(byte *)(self + 10);
}

// IMP 0x0000f1f8  types v20@0:8B16
- (void)setHasRenderedGlyph:(BOOL)setHasRenderedGlyph {
      *(char *)(self + 10) = (char)setHasRenderedGlyph;
      return;
}

// IMP 0x0000f200  types d16@0:8
- (double)complicationLayoutShift {
      return *(double *)(self + 0x98);
}

// IMP 0x0000f208  types v24@0:8d16
- (void)setComplicationLayoutShift:(double)setComplicationLayoutShift {
      *(double *)(self + 0x98) = setComplicationLayoutShift;
      return;
}

// IMP 0x0000f210  types d16@0:8
- (double)complicationLastTop {
      return *(double *)(self + 0xa0);
}

// IMP 0x0000f218  types v24@0:8d16
- (void)setComplicationLastTop:(double)setComplicationLastTop {
      *(double *)(self + 0xa0) = setComplicationLastTop;
      return;
}

// IMP 0x0000f220  types @16@0:8
- (id)complicationRow {
      ID IVar1;

      _objc_loadWeakRetained(self + 0xa8);
      IVar1 = _objc_autoreleaseReturnValue();
      return IVar1;
}

// IMP 0x0000f238  types v24@0:8@16
- (void)setComplicationRow:(id)setComplicationRow {
      _objc_storeWeak(self + 0xa8,setComplicationRow);
      return;
}

// IMP 0x0000f244  types B16@0:8
- (BOOL)applying {
      return (bool)*(byte *)(self + 0xb);
}

// IMP 0x0000f24c  types v20@0:8B16
- (void)setApplying:(BOOL)setApplying {
      *(char *)(self + 0xb) = (char)setApplying;
      return;
}

// IMP 0x0000f254  types B16@0:8
- (BOOL)scheduled {
      return (bool)*(byte *)(self + 0xc);
}

// IMP 0x0000f25c  types v20@0:8B16
- (void)setScheduled:(BOOL)setScheduled {
      *(char *)(self + 0xc) = (char)setScheduled;
      return;
}

// IMP 0x0000f264  types Q16@0:8
- (unsigned long long)layoutCalls {
      return *(unsigned_long_long *)(self + 0xb0);
}

// IMP 0x0000f26c  types v24@0:8Q16
- (void)setLayoutCalls:(unsigned long long)setLayoutCalls {
      *(unsigned_long_long *)(self + 0xb0) = setLayoutCalls;
      return;
}

// IMP 0x0000f274  types Q16@0:8
- (unsigned long long)appliedChanges {
      return *(unsigned_long_long *)(self + 0xb8);
}

// IMP 0x0000f27c  types v24@0:8Q16
- (void)setAppliedChanges:(unsigned long long)setAppliedChanges {
      *(unsigned_long_long *)(self + 0xb8) = setAppliedChanges;
      return;
}

// IMP 0x0000f284  types Q16@0:8
- (unsigned long long)skippedChanges {
      return *(unsigned_long_long *)(self + 0xc0);
}

// IMP 0x0000f28c  types v24@0:8Q16
- (void)setSkippedChanges:(unsigned long long)setSkippedChanges {
      *(unsigned_long_long *)(self + 0xc0) = setSkippedChanges;
      return;
}

// IMP 0x0000f294  types d16@0:8
- (double)sampleStart {
      return *(double *)(self + 200);
}

// IMP 0x0000f29c  types v24@0:8d16
- (void)setSampleStart:(double)setSampleStart {
      *(double *)(self + 200) = setSampleStart;
      return;
}

// IMP 0x0000f2a4  types @16@0:8
- (id)lastNearestObstacle {
      ID IVar1;

      _objc_loadWeakRetained(self + 0xd0);
      IVar1 = _objc_autoreleaseReturnValue();
      return IVar1;
}

// IMP 0x0000f2bc  types v24@0:8@16
- (void)setLastNearestObstacle:(id)setLastNearestObstacle {
      _objc_storeWeak(self + 0xd0,setLastNearestObstacle);
      return;
}

// IMP 0x0000f2c8  types d16@0:8
- (double)lastNearestTop {
      return *(double *)(self + 0xd8);
}

// IMP 0x0000f2d0  types v24@0:8d16
- (void)setLastNearestTop:(double)setLastNearestTop {
      *(double *)(self + 0xd8) = setLastNearestTop;
      return;
}

// IMP 0x0000f2d8  types @16@0:8
- (id)lastRetractionPhase {
      return *(ID *)(self + 0xe0);
}

// IMP 0x0000f2e0  types v24@0:8@16
- (void)setLastRetractionPhase:(id)setLastRetractionPhase {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x0000f2e8  types d16@0:8
- (double)totalApplyTime {
      return *(double *)(self + 0xe8);
}

// IMP 0x0000f2f0  types v24@0:8d16
- (void)setTotalApplyTime:(double)setTotalApplyTime {
      *(double *)(self + 0xe8) = setTotalApplyTime;
      return;
}

// IMP 0x0000f2f8  types d16@0:8
- (double)peakApplyTime {
      return *(double *)(self + 0xf0);
}

// IMP 0x0000f300  types v24@0:8d16
- (void)setPeakApplyTime:(double)setPeakApplyTime {
      *(double *)(self + 0xf0) = setPeakApplyTime;
      return;
}

// IMP 0x0000f308  types @16@0:8
- (id)lastSignature {
      return *(ID *)(self + 0xf8);
}

// IMP 0x0000f310  types v24@0:8@16
- (void)setLastSignature:(id)setLastSignature {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x0000f318  types @16@0:8
- (id)lastFontDiagnostic {
      return *(ID *)(self + 0x100);
}

// IMP 0x0000f320  types v24@0:8@16
- (void)setLastFontDiagnostic:(id)setLastFontDiagnostic {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x0000f328  types B16@0:8
- (BOOL)pullBlurActive {
      return (bool)*(byte *)(self + 0xd);
}

// IMP 0x0000f330  types v20@0:8B16
- (void)setPullBlurActive:(BOOL)setPullBlurActive {
      *(char *)(self + 0xd) = (char)setPullBlurActive;
      return;
}

// IMP 0x0000f338  types B16@0:8
- (BOOL)pullBlurKnown {
      return (bool)*(byte *)(self + 0xe);
}

// IMP 0x0000f340  types v20@0:8B16
- (void)setPullBlurKnown:(BOOL)setPullBlurKnown {
      *(char *)(self + 0xe) = (char)setPullBlurKnown;
      return;
}

// IMP 0x0000f348  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + 0x100,0);
      _objc_storeStrong(self + 0xf8,0);
      _objc_storeStrong(self + 0xe0,0);
      _objc_destroyWeak(self + 0xd0);
      _objc_destroyWeak(self + 0xa8);
      _objc_destroyWeak(self + 0x88);
      _objc_storeStrong(self + 0x80,0);
      _objc_storeStrong(self + 0x78,0);
      _objc_storeStrong(self + 0x70,0);
      _objc_storeStrong(self + 0x68,0);
      _objc_storeStrong(self + 0x60,0);
      _objc_storeStrong(self + 0x58,0);
      _objc_storeStrong(self + 0x50,0);
      _objc_storeStrong(self + 0x48,0);
      _objc_storeStrong(self + 0x30,0);
      _objc_destroyWeak(self + 0x28);
      _objc_destroyWeak(self + 0x20);
      _objc_destroyWeak(self + 0x18);
      return;
}

@end
