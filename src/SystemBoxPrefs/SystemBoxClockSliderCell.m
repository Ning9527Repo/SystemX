//
//  SystemBoxClockSliderCell.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SystemBoxClockSliderCell.h"

@implementation SystemBoxClockSliderCell

// IMP 0x0000e6b4  types @40@0:8q16@24@32
- (id)initWithStyle:(long long)initWithStyle reuseIdentifier:(id)reuseIdentifier specifier:(id)specifier {
      undefined *puVar1;
      undefined8 uVar2;
      ID IVar3;
      undefined8 uVar4;
      undefined8 uVar5;
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
      undefined8 uVar20;
      undefined8 uVar21;
      undefined8 uVar22;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      undefined8 extraout_x1_04;
      undefined8 uVar23;
      long lVar24;
      long lVar25;
      undefined auVar26 [16];
      undefined auVar27 [16];
      undefined auVar28 [16];
      undefined auVar29 [16];
      undefined auVar30 [16];
      undefined auVar31 [16];
      undefined auVar32 [16];
      ID local_b8;
      undefined *puStack_b0;
      undefined8 local_a8;
      undefined8 local_a0;
      undefined8 local_98;
      undefined8 local_90;
      undefined8 local_88;
      undefined8 local_80;
      undefined8 local_78;
      long local_70;

      local_70 = *(long *)PTR____stack_chk_guard_000180e0;
      uVar2 = _objc_retain(specifier);
      puStack_b0 = PTR_PTR_0001e030;
      local_b8 = self;
      IVar3 = _objc_msgSendSuper2(&local_b8,PTR_s_initWithStyle_reuseIdentifier_sp_0001d8a8,initWithStyle,
                                  reuseIdentifier,uVar2);
      if (IVar3 != 0) {
        uVar4 = _objc_alloc_init(PTR__OBJC_CLASS___UISlider_0001dff8);
        lVar25 = (long)_slider;
        uVar23 = *(undefined8 *)(IVar3 + lVar25);
        *(undefined8 *)(IVar3 + lVar25) = uVar4;
        _objc_release(uVar23);
        objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_
                  (*(undefined8 *)(IVar3 + lVar25),extraout_x1,0);
        objc_msgSend_setContinuous_(*(undefined8 *)(IVar3 + lVar25),extraout_x1_00,1);
        objc_msgSend_addTarget_action_forControlEvents_
                  (*(undefined8 *)(IVar3 + lVar25),extraout_x1_01,IVar3,PTR_s_sliderChanged__0001dd30,
                   0x1000);
        objc_msgSend_contentView(IVar3);
        auVar26 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_addSubview_(auVar26._0_8_,auVar26._8_8_,*(undefined8 *)(IVar3 + lVar25));
        _objc_release(auVar26._0_8_);
        uVar4 = _objc_alloc_init(PTR__OBJC_CLASS___UILabel_0001dee0);
        lVar24 = (long)_valueLabel;
        uVar23 = *(undefined8 *)(IVar3 + lVar24);
        *(undefined8 *)(IVar3 + lVar24) = uVar4;
        _objc_release(uVar23);
        objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_
                  (*(undefined8 *)(IVar3 + lVar24),extraout_x1_02,0);
        objc_msgSend_setTextAlignment_(*(undefined8 *)(IVar3 + lVar24),extraout_x1_03,2);
        objc_msgSend_monospacedDigitSystemFontOfSize_weight_
                  (0x402c000000000000,*(undefined8 *)PTR__UIFontWeightMedium_00018078,
                   PTR__OBJC_CLASS___UIFont_0001dee8);
        auVar26 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setFont_(*(undefined8 *)(IVar3 + lVar24),auVar26._8_8_,auVar26._0_8_);
        _objc_release(auVar26._0_8_);
        objc_msgSend_secondaryLabelColor(PTR__OBJC_CLASS___UIColor_0001deb8);
        auVar26 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setTextColor_(*(undefined8 *)(IVar3 + lVar24),auVar26._8_8_,auVar26._0_8_);
        _objc_release(auVar26._0_8_);
        objc_msgSend_contentView(IVar3);
        auVar26 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_addSubview_(auVar26._0_8_,auVar26._8_8_,*(undefined8 *)(IVar3 + lVar24));
        _objc_release(auVar26._0_8_);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_0001def0;
        objc_msgSend_leadingAnchor(*(undefined8 *)(IVar3 + lVar25));
        uVar4 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_contentView(IVar3);
        uVar23 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_layoutMarginsGuide();
        uVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_leadingAnchor();
        auVar26 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintEqualToAnchor_constant_
                  (0x4044000000000000,uVar4,auVar26._8_8_,auVar26._0_8_);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        local_a8 = uVar6;
        objc_msgSend_trailingAnchor(*(undefined8 *)(IVar3 + lVar25));
        uVar7 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_leadingAnchor(*(undefined8 *)(IVar3 + lVar24));
        auVar27 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintEqualToAnchor_constant_
                  (0xc028000000000000,uVar7,auVar27._8_8_,auVar27._0_8_);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        local_a0 = uVar8;
        objc_msgSend_centerYAnchor(*(undefined8 *)(IVar3 + lVar25));
        uVar9 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_contentView(IVar3);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_centerYAnchor();
        auVar28 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintEqualToAnchor_(uVar9,auVar28._8_8_,auVar28._0_8_);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        local_98 = uVar11;
        objc_msgSend_trailingAnchor(*(undefined8 *)(IVar3 + lVar24));
        uVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_contentView(IVar3);
        uVar13 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_layoutMarginsGuide();
        uVar14 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_trailingAnchor();
        auVar29 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintEqualToAnchor_(uVar12,auVar29._8_8_,auVar29._0_8_);
        uVar15 = _objc_retainAutoreleasedReturnValue();
        local_90 = uVar15;
        objc_msgSend_centerYAnchor(*(undefined8 *)(IVar3 + lVar24));
        uVar16 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_contentView(IVar3);
        uVar17 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_centerYAnchor();
        auVar30 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintEqualToAnchor_(uVar16,auVar30._8_8_,auVar30._0_8_);
        uVar18 = _objc_retainAutoreleasedReturnValue();
        local_88 = uVar18;
        objc_msgSend_widthAnchor(*(undefined8 *)(IVar3 + lVar24));
        uVar19 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintEqualToConstant_(0x4055000000000000);
        uVar20 = _objc_retainAutoreleasedReturnValue();
        local_80 = uVar20;
        objc_msgSend_contentView(IVar3);
        uVar21 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_heightAnchor();
        uVar22 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintGreaterThanOrEqualToConstant_(0x4048000000000000);
        auVar31 = _objc_retainAutoreleasedReturnValue();
        local_78 = auVar31._0_8_;
        objc_msgSend_arrayWithObjects_count_
                  (PTR__OBJC_CLASS___NSArray_0001def8,auVar31._8_8_,&local_a8,7);
        auVar32 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_activateConstraints_(puVar1,auVar32._8_8_,auVar32._0_8_);
        _objc_release(auVar32._0_8_);
        _objc_release(auVar31._0_8_);
        _objc_release(uVar22);
        _objc_release(uVar21);
        _objc_release(uVar20);
        _objc_release(uVar19);
        _objc_release(uVar18);
        _objc_release(auVar30._0_8_);
        _objc_release(uVar17);
        _objc_release(uVar16);
        _objc_release(uVar15);
        _objc_release(auVar29._0_8_);
        _objc_release(uVar14);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(auVar28._0_8_);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(auVar27._0_8_);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(auVar26._0_8_);
        _objc_release(uVar5);
        _objc_release(uVar23);
        _objc_release(uVar4);
        objc_msgSend_syncWithSpecifier_(IVar3,extraout_x1_04,uVar2);
        _objc_retain(IVar3);
      }
      _objc_release(uVar2);
      _objc_release(IVar3);
      if (*(long *)PTR____stack_chk_guard_000180e0 == local_70) {
        return IVar3;
      }
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
}

// IMP 0x0000ec2c  types v24@0:8@16
- (void)setSpecifier:(id)setSpecifier {
      undefined *puVar1;
      undefined8 uVar2;
      undefined8 extraout_x1;
      ID local_40;
      undefined *puStack_38;

      puVar1 = PTR_s_setSpecifier__0001dca0;
      puStack_38 = PTR_PTR_0001e030;
      local_40 = self;
      uVar2 = _objc_retain(setSpecifier);
      _objc_msgSendSuper2(&local_40,puVar1,uVar2);
      objc_msgSend_syncWithSpecifier_(self,extraout_x1,uVar2);
      _objc_release(uVar2);
      return;
}

// IMP 0x0000ec9c  types v24@0:8@16
- (void)syncWithSpecifier:(id)syncWithSpecifier {
      long lVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      long lVar4;
      undefined auVar5 [16];

      lVar1 = _objc_retain(syncWithSpecifier);
      if ((lVar1 != 0) && (lVar4 = (long)_slider, *(long *)(self + lVar4) != 0)) {
        objc_msgSend_textLabel(self);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setText_(auVar5._0_8_,auVar5._8_8_,0);
        _objc_release(auVar5._0_8_);
        objc_msgSend_textLabel(self);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setHidden_(auVar5._0_8_,auVar5._8_8_,1);
        _objc_release(auVar5._0_8_);
        objc_msgSend_propertyForKey_(lVar1,extraout_x1,&cf_min);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_floatValue();
        objc_msgSend_setMinimumValue_(*(undefined8 *)(self + lVar4));
        _objc_release(uVar2);
        objc_msgSend_propertyForKey_(lVar1,extraout_x1_00,&cf_max);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_floatValue();
        objc_msgSend_setMaximumValue_(*(undefined8 *)(self + lVar4));
        _objc_release(uVar2);
        objc_msgSend_performGetter(lVar1);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        uVar2 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001df30);
        auVar5 = _objc_opt_isKindOfClass(uVar3,uVar2);
        uVar2 = uVar3;
        if ((auVar5 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          objc_msgSend_propertyForKey_(lVar1,auVar5._8_8_,&cf_default);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar3);
        }
        objc_msgSend_floatValue(uVar2);
        objc_msgSend_setValue_(*(undefined8 *)(self + lVar4));
        objc_msgSend_propertyForKey_(lVar1,extraout_x1_01,&cf_sliderTitle);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setAccessibilityLabel_(*(undefined8 *)(self + lVar4),auVar5._8_8_,auVar5._0_8_);
        _objc_release(auVar5._0_8_);
        objc_msgSend_updateValueLabel(self);
        _objc_release(uVar2);
      }
      _objc_release(lVar1);
      return;
}

// IMP 0x0000ee3c  types v24@0:8@16
- (void)sliderChanged:(id)sliderChanged {
      undefined8 uVar1;
      undefined8 uVar2;
      long lVar3;
      float fVar4;
      float fVar5;
      undefined auVar6 [16];

      uVar1 = _objc_retain(sliderChanged);
      objc_msgSend_specifier(self);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_propertyForKey_(auVar6._0_8_,auVar6._8_8_,&cf_valueDecimals);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      lVar3 = objc_msgSend_integerValue();
      _objc_release(uVar2);
      _objc_release(auVar6._0_8_);
      fVar4 = (float)___exp10f((float)lVar3);
      fVar5 = (float)objc_msgSend_value(uVar1);
      _objc_release(uVar1);
      objc_msgSend_specifier(self);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_numberWithFloat_
                ((float)(int)(fVar4 * fVar5) / fVar4,PTR__OBJC_CLASS___NSNumber_0001df30);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_performSetterWithValue_(uVar1,auVar6._8_8_,auVar6._0_8_);
      _objc_release(auVar6._0_8_);
      _objc_release(uVar1);
      objc_msgSend_updateValueLabel(self);
      return;
}

// IMP 0x0000ef3c  types v16@0:8
- (void)updateValueLabel {
      cfstringStruct *pcVar1;
      undefined *puVar2;
      undefined8 uVar3;
      cfstringStruct *pcVar4;
      undefined8 uVar5;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined auVar6 [16];

      objc_msgSend_specifier();
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_propertyForKey_(auVar6._0_8_,auVar6._8_8_,&cf_valueDecimals);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_integerValue();
      _objc_release(uVar3);
      _objc_release(auVar6._0_8_);
      objc_msgSend_specifier(self);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_propertyForKey_(auVar6._0_8_,auVar6._8_8_,&cf_valueSuffix);
      pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
      pcVar1 = &cf___;
      if (pcVar4 != (cfstringStruct *)0x0) {
        pcVar1 = pcVar4;
      }
      uVar3 = _objc_retain(pcVar1);
      _objc_release(pcVar4);
      _objc_release(auVar6._0_8_);
      puVar2 = PTR__OBJC_CLASS___NSString_0001df48;
      objc_msgSend_valueself->_slider;
      objc_msgSend_stringWithFormat_(puVar2,extraout_x1,&cf____f__);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      objc_msgSend_setText_(*(undefined8 *)(self + (long)_valueLabel),extraout_x1_00,uVar5);
      _objc_release(uVar5);
      return;
}

// IMP 0x0000f068  types v24@0:8@16
- (void)refreshCellContentsWithSpecifier:(id)refreshCellContentsWithSpecifier {
      undefined *puVar1;
      undefined8 uVar2;
      undefined8 extraout_x1;
      ID local_40;
      undefined *puStack_38;

      puVar1 = PTR_s_refreshCellContentsWithSpecifier_0001da28;
      puStack_38 = PTR_PTR_0001e030;
      local_40 = self;
      uVar2 = _objc_retain(refreshCellContentsWithSpecifier);
      _objc_msgSendSuper2(&local_40,puVar1,uVar2);
      objc_msgSend_syncWithSpecifier_(self,extraout_x1,uVar2);
      _objc_release(uVar2);
      return;
}

// IMP 0x0000f0d8  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + (long)_valueLabel,0);
      _objc_storeStrong(self + (long)_slider,0);
      return;
}

@end
