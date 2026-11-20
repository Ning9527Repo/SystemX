//
//  SystemBoxClockSolidColorCell.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SystemBoxClockSolidColorCell.h"

@implementation SystemBoxClockSolidColorCell

// IMP 0x0000d77c  types @40@0:8q16@24@32
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
      undefined8 extraout_x1;
      undefined8 uVar13;
      long lVar14;
      undefined auVar15 [16];
      undefined auVar16 [16];
      undefined auVar17 [16];
      undefined auVar18 [16];
      ID local_90;
      undefined *puStack_88;
      undefined8 local_80;
      undefined8 local_78;
      undefined8 local_70;
      long local_68;

      local_68 = *(long *)PTR____stack_chk_guard_000180e0;
      uVar2 = _objc_retain(specifier);
      puStack_88 = PTR_PTR_0001e028;
      local_90 = self;
      auVar15 = _objc_msgSendSuper2(&local_90,PTR_s_initWithStyle_reuseIdentifier_sp_0001d8a8,initWithStyle,
                                    reuseIdentifier,uVar2);
      IVar3 = auVar15._0_8_;
      if (IVar3 != 0) {
        objc_msgSend_setSelectionStyle_(IVar3,auVar15._8_8_,0);
        FUN_0000cd1c(0,&cf_b_INer);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        lVar14 = (long)_button;
        uVar13 = *(undefined8 *)(IVar3 + lVar14);
        *(undefined8 *)(IVar3 + lVar14) = uVar4;
        _objc_release(uVar13);
        objc_msgSend_contentView(IVar3);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_addSubview_(auVar15._0_8_,auVar15._8_8_,*(undefined8 *)(IVar3 + lVar14));
        _objc_release(auVar15._0_8_);
        auVar15 = _objc_alloc(PTR__OBJC_CLASS___UITapGestureRecognizer_0001dfe0);
        uVar4 = objc_msgSend_initWithTarget_action_
                          (auVar15._0_8_,auVar15._8_8_,IVar3,PTR_s_openColorPicker_0001d9a0);
        objc_msgSend_contentView(IVar3);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_addGestureRecognizer_(auVar15._0_8_,auVar15._8_8_,uVar4);
        _objc_release(auVar15._0_8_);
        puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_0001def0;
        objc_msgSend_trailingAnchor(*(undefined8 *)(IVar3 + lVar14));
        uVar13 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_contentView(IVar3);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_layoutMarginsGuide();
        uVar6 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_trailingAnchor();
        auVar15 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintEqualToAnchor_(uVar13,auVar15._8_8_,auVar15._0_8_);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        local_80 = uVar7;
        objc_msgSend_centerYAnchor(*(undefined8 *)(IVar3 + lVar14));
        uVar8 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_contentView(IVar3);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_centerYAnchor();
        auVar16 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintEqualToAnchor_(uVar8,auVar16._8_8_,auVar16._0_8_);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        local_78 = uVar10;
        objc_msgSend_contentView(IVar3);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_heightAnchor();
        uVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_constraintGreaterThanOrEqualToConstant_(0x404a000000000000);
        auVar17 = _objc_retainAutoreleasedReturnValue();
        local_70 = auVar17._0_8_;
        objc_msgSend_arrayWithObjects_count_
                  (PTR__OBJC_CLASS___NSArray_0001def8,auVar17._8_8_,&local_80,3);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_activateConstraints_(puVar1,auVar18._8_8_,auVar18._0_8_);
        _objc_release(auVar18._0_8_);
        _objc_release(auVar17._0_8_);
        _objc_release(uVar12);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(auVar16._0_8_);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(auVar15._0_8_);
        _objc_release(uVar6);
        _objc_release(uVar5);
        _objc_release(uVar13);
        objc_msgSend_refreshCellContentsWithSpecifier_(IVar3,extraout_x1,uVar2);
        _objc_retain(IVar3);
        _objc_release(uVar4);
      }
      _objc_release(uVar2);
      _objc_release(IVar3);
      if (*(long *)PTR____stack_chk_guard_000180e0 == local_68) {
        return IVar3;
      }
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
}

// IMP 0x0000daac  types v16@0:8
- (void)openColorPicker {
      undefined8 uVar1;
      undefined8 uVar2;
      ulong uVar3;

      objc_msgSend_specifier();
      uVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_target();
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      uVar3 = _objc_opt_respondsToSelector(uVar2,PTR_s_chooseCustomClockColor_0001d698);
      if ((uVar3 & 1) != 0) {
        objc_msgSend_chooseCustomClockColor(uVar2);
      }
      _objc_release(uVar2);
      return;
}

// IMP 0x0000db0c  types v24@0:8@16
- (void)refreshCellContentsWithSpecifier:(id)refreshCellContentsWithSpecifier {
      undefined *puVar1;
      undefined *puVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      ulong uVar5;
      undefined8 uVar6;
      undefined8 extraout_x1;
      undefined auVar7 [16];
      undefined auVar8 [16];
      ID local_40;
      undefined *puStack_38;

      puStack_38 = PTR_PTR_0001e028;
      local_40 = self;
      _objc_msgSendSuper2(&local_40,PTR_s_refreshCellContentsWithSpecifier_0001da28);
      puVar1 = PTR__OBJC_CLASS___NSDictionary_0001df40;
      jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
      auVar7 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_dictionaryWithContentsOfFile_(puVar1,auVar7._8_8_,auVar7._0_8_);
      puVar2 = (undefined *)_objc_retainAutoreleasedReturnValue();
      puVar1 = PTR____NSDictionary0__struct_000180b0;
      if (puVar2 != (undefined *)0x0) {
        puVar1 = puVar2;
      }
      uVar3 = _objc_retain(puVar1);
      _objc_release(puVar2);
      _objc_release(auVar7._0_8_);
      objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1,&cf_Clock_CustomColor_Hex);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      uVar3 = _objc_opt_class(PTR__OBJC_CLASS___NSString_0001df48);
      uVar5 = _objc_opt_isKindOfClass(uVar4,uVar3);
      uVar3 = uVar4;
      if ((uVar5 & 1) == 0) {
        uVar3 = 0;
      }
      objc_msgSend_whiteColor(PTR__OBJC_CLASS___UIColor_0001deb8);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      FUN_0000d3d8(uVar3,uVar6);
      auVar7 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_viewWithTag_(*(undefined8 *)(self + (long)_button),auVar7._8_8_,100);
      auVar8 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setBackgroundColor_(auVar8._0_8_,auVar8._8_8_,auVar7._0_8_);
      _objc_release(auVar8._0_8_);
      _objc_release(auVar7._0_8_);
      _objc_release(uVar6);
      _objc_release(uVar4);
      return;
}

// IMP 0x0000dc70  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + (long)_button,0);
      return;
}

@end
