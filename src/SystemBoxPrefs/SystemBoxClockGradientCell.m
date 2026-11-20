//
//  SystemBoxClockGradientCell.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SystemBoxClockGradientCell.h"

@implementation SystemBoxClockGradientCell

// IMP 0x0000c854  types @40@0:8q16@24@32
- (id)initWithStyle:(long long)initWithStyle reuseIdentifier:(id)reuseIdentifier specifier:(id)specifier {
      long lVar1;
      undefined *puVar2;
      undefined8 uVar3;
      ID IVar4;
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
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      undefined8 extraout_x1_04;
      undefined8 extraout_x1_05;
      undefined8 extraout_x1_06;
      undefined8 uVar20;
      long lVar21;
      long lVar22;
      undefined auVar23 [16];
      undefined auVar24 [16];
      undefined auVar25 [16];
      undefined auVar26 [16];
      undefined auVar27 [16];
      undefined auVar28 [16];
      ID local_a8;
      undefined *puStack_a0;
      undefined8 local_98;
      undefined8 local_90;
      undefined8 local_88;
      undefined8 local_80;
      undefined8 local_78;
      long local_70;

      local_70 = *(long *)PTR____stack_chk_guard_000180e0;
      uVar3 = _objc_retain(specifier);
      puStack_a0 = PTR_PTR_0001e020;
      local_a8 = self;
      auVar23 = _objc_msgSendSuper2(&local_a8,PTR_s_initWithStyle_reuseIdentifier_sp_0001d8a8,initWithStyle,
                                    reuseIdentifier,uVar3);
      IVar4 = auVar23._0_8_;
      if (IVar4 != 0) {
        objc_msgSend_setSelectionStyle_(IVar4,auVar23._8_8_,0);
        objc_msgSend_textLabel(IVar4);
        auVar23 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setHidden_(auVar23._0_8_,auVar23._8_8_,1);
        _objc_release(auVar23._0_8_);
        uVar5 = _objc_alloc_init(PTR__OBJC_CLASS___UIStackView_0001dfd8);
        lVar22 = (long)_colors;
        uVar20 = *(undefined8 *)(IVar4 + lVar22);
        *(undefined8 *)(IVar4 + lVar22) = uVar5;
        _objc_release(uVar20);
        objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_
                  (*(undefined8 *)(IVar4 + lVar22),extraout_x1,0);
        objc_msgSend_setAxis_(*(undefined8 *)(IVar4 + lVar22),extraout_x1_00,0);
        objc_msgSend_setDistribution_(*(undefined8 *)(IVar4 + lVar22),extraout_x1_01,0);
        objc_msgSend_setSpacing_(0x4028000000000000,*(undefined8 *)(IVar4 + lVar22));
        objc_msgSend_setAlignment_(*(undefined8 *)(IVar4 + lVar22),extraout_x1_02,3);
        objc_msgSend_contentView(IVar4);
        auVar23 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_addSubview_(auVar23._0_8_,auVar23._8_8_,*(undefined8 *)(IVar4 + lVar22));
        _objc_release(auVar23._0_8_);
        puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_0001def0;
        objc_msgSend_centerXAnchor(*(undefined8 *)(IVar4 + lVar22));
        uVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_contentView(IVar4);
        uVar20 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_centerXAnchor();
        auVar23 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintEqualToAnchor_(uVar5,auVar23._8_8_,auVar23._0_8_);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        local_98 = uVar6;
        objc_msgSend_leadingAnchor(*(undefined8 *)(IVar4 + lVar22));
        uVar7 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_contentView(IVar4);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_layoutMarginsGuide();
        uVar9 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_leadingAnchor();
        auVar24 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintGreaterThanOrEqualToAnchor_(uVar7,auVar24._8_8_,auVar24._0_8_);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        local_90 = uVar10;
        objc_msgSend_trailingAnchor(*(undefined8 *)(IVar4 + lVar22));
        uVar11 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_contentView(IVar4);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_layoutMarginsGuide();
        uVar13 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_trailingAnchor();
        auVar25 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintLessThanOrEqualToAnchor_(uVar11,auVar25._8_8_,auVar25._0_8_);
        uVar14 = _objc_retainAutoreleasedReturnValue();
        local_88 = uVar14;
        objc_msgSend_centerYAnchor(*(undefined8 *)(IVar4 + lVar22));
        uVar15 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_contentView(IVar4);
        uVar16 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_centerYAnchor();
        auVar26 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintEqualToAnchor_(uVar15,auVar26._8_8_,auVar26._0_8_);
        uVar17 = _objc_retainAutoreleasedReturnValue();
        local_80 = uVar17;
        objc_msgSend_contentView(IVar4);
        uVar18 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_heightAnchor();
        uVar19 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintGreaterThanOrEqualToConstant_(0x404a000000000000);
        auVar27 = _objc_retainAutoreleasedReturnValue();
        local_78 = auVar27._0_8_;
        objc_msgSend_arrayWithObjects_count_
                  (PTR__OBJC_CLASS___NSArray_0001def8,auVar27._8_8_,&local_98,5);
        auVar28 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_activateConstraints_(puVar2,auVar28._8_8_,auVar28._0_8_);
        _objc_release(auVar28._0_8_);
        _objc_release(auVar27._0_8_);
        _objc_release(uVar19);
        _objc_release(uVar18);
        _objc_release(uVar17);
        _objc_release(auVar26._0_8_);
        _objc_release(uVar16);
        _objc_release(uVar15);
        _objc_release(uVar14);
        _objc_release(auVar25._0_8_);
        _objc_release(uVar13);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(auVar24._0_8_);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar6);
        _objc_release(auVar23._0_8_);
        _objc_release(uVar20);
        _objc_release(uVar5);
        puVar2 = PTR_s_colorTapped__0001d6e0;
        uVar5 = extraout_x1_03;
        lVar21 = 0;
        do {
          lVar1 = lVar21 + 1;
          objc_msgSend_stringWithFormat_(PTR__OBJC_CLASS___NSString_0001df48,uVar5,&cf_nSr);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          FUN_0000cd1c(lVar21,uVar5);
          uVar20 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          objc_msgSend_addTarget_action_forControlEvents_(uVar20,extraout_x1_04,IVar4,puVar2,0x40);
          objc_msgSend_addArrangedSubview_(*(undefined8 *)(IVar4 + lVar22),extraout_x1_05,uVar20);
          _objc_release(uVar20);
          uVar5 = extraout_x1_06;
          lVar21 = lVar1;
        } while (lVar1 != 5);
        objc_msgSend_refreshCellContentsWithSpecifier_(IVar4,extraout_x1_06,uVar3);
        _objc_retain(IVar4);
      }
      _objc_release(uVar3);
      _objc_release(IVar4);
      if (*(long *)PTR____stack_chk_guard_000180e0 == local_70) {
        return IVar4;
      }
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
}

// IMP 0x0000d0b8  types v24@0:8@16
- (void)colorTapped:(id)colorTapped {
      undefined8 uVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined auVar4 [16];

      uVar1 = _objc_retain(colorTapped);
      objc_msgSend_specifier(self);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_target();
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      auVar4 = _objc_opt_respondsToSelector(uVar3,PTR_s_chooseGradientColor__0001d6a8);
      if ((auVar4 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        objc_msgSend_chooseGradientColor_(uVar3,auVar4._8_8_,uVar1);
      }
      _objc_release(uVar3);
      _objc_release(uVar1);
      return;
}

// IMP 0x0000d140  types v24@0:8@16
- (void)refreshCellContentsWithSpecifier:(id)refreshCellContentsWithSpecifier {
      undefined *puVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      long lVar4;
      long lVar5;
      undefined8 uVar6;
      undefined8 uVar7;
      undefined8 uVar8;
      ulong uVar9;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      long lVar10;
      undefined *puVar11;
      undefined8 uVar12;
      long lVar13;
      undefined auVar14 [16];
      undefined auVar15 [16];
      undefined8 local_140;
      long lStack_138;
      long *local_130;
      undefined8 uStack_128;
      undefined8 local_120;
      undefined8 uStack_118;
      undefined8 uStack_110;
      undefined8 uStack_108;
      ID local_100;
      undefined *puStack_f8;
      undefined auStack_f0 [128];
      long local_70;

      local_70 = *(long *)PTR____stack_chk_guard_000180e0;
      puStack_f8 = PTR_PTR_0001e020;
      local_100 = self;
      _objc_msgSendSuper2(&local_100,PTR_s_refreshCellContentsWithSpecifier_0001da28);
      puVar11 = PTR__OBJC_CLASS___NSDictionary_0001df40;
      jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
      auVar14 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_dictionaryWithContentsOfFile_(puVar11,auVar14._8_8_,auVar14._0_8_);
      puVar1 = (undefined *)_objc_retainAutoreleasedReturnValue();
      puVar11 = PTR____NSDictionary0__struct_000180b0;
      if (puVar1 != (undefined *)0x0) {
        puVar11 = puVar1;
      }
      uVar2 = _objc_retain(puVar11);
      _objc_release(puVar1);
      _objc_release(auVar14._0_8_);
      uStack_118 = 0;
      local_120 = 0;
      uStack_108 = 0;
      uStack_110 = 0;
      lStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      local_130 = (long *)0x0;
      objc_msgSend_arrangedSubviewsself->_colors;
      auVar14 = _objc_retainAutoreleasedReturnValue();
      uVar3 = auVar14._0_8_;
      lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,auVar14._8_8_,&local_140,auStack_f0,0x10);
      if (lVar4 != 0) {
        lVar13 = *local_130;
        do {
          lVar10 = 0;
          do {
            if (*local_130 != lVar13) {
              _objc_enumerationMutation(uVar3);
            }
            uVar12 = *(undefined8 *)(lStack_138 + lVar10 * 8);
            lVar5 = objc_msgSend_tag(uVar12);
            puVar11 = (&PTR_cf__3DDEFA_000183e8)[lVar5];
            objc_msgSend_whiteColor(PTR__OBJC_CLASS___UIColor_0001deb8);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            FUN_0000d3d8(puVar11,uVar6);
            uVar7 = _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar6);
            objc_msgSend_stringWithFormat_
                      (PTR__OBJC_CLASS___NSString_0001df48,extraout_x1,&cf_Clock_Rainbow_Color__lu);
            auVar14 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_objectForKeyedSubscript_(uVar2,auVar14._8_8_,auVar14._0_8_);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_release(auVar14._0_8_);
            uVar6 = _objc_opt_class(PTR__OBJC_CLASS___NSString_0001df48);
            uVar9 = _objc_opt_isKindOfClass(uVar8,uVar6);
            uVar6 = uVar8;
            if ((uVar9 & 1) == 0) {
              uVar6 = 0;
            }
            FUN_0000d3d8(uVar6,uVar7);
            auVar14 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_viewWithTag_(uVar12,auVar14._8_8_,100);
            auVar15 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setBackgroundColor_(auVar15._0_8_,auVar15._8_8_,auVar14._0_8_);
            _objc_release(auVar15._0_8_);
            _objc_release(auVar14._0_8_);
            _objc_release(uVar8);
            _objc_release(uVar7);
            lVar10 = lVar10 + 1;
          } while (lVar4 != lVar10);
          lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,extraout_x1_00,&local_140,auStack_f0,0x10);
        } while (lVar4 != 0);
      }
      _objc_release(uVar3);
      _objc_release(uVar2);
      if (*(long *)PTR____stack_chk_guard_000180e0 == local_70) {
        return;
      }
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
}

// IMP 0x0000d768  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + (long)_colors,0);
      return;
}

@end
