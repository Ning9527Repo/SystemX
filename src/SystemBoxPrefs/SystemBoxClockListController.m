//
//  SystemBoxClockListController.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SystemBoxClockListController.h"

@implementation SystemBoxClockListController

// IMP 0x0000dc84  types @16@0:8
- (id)sb_specifierPlistName {
      return 0x197f0;
}

// IMP 0x0000dc90  types v32@0:8@16@24
- (void)setPreferenceValue:(id)setPreferenceValue specifier:(id)specifier {
      undefined *puVar1;
      int iVar2;
      long lVar3;
      undefined8 uVar4;
      long lVar5;
      undefined8 uVar6;
      undefined8 uVar7;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      cfstringStruct *pcVar8;
      undefined auVar9 [16];

      auVar9 = _objc_retain(setPreferenceValue);
      lVar3 = auVar9._0_8_;
      objc_msgSend_propertyForKey_(specifier,auVar9._8_8_,&cf_key);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      lVar5 = objc_msgSend_length();
      puVar1 = PTR__OBJC_CLASS___NSDictionary_0001df40;
      if (lVar5 == 0) goto LAB_0000de08;
      jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
      auVar9 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_dictionaryWithContentsOfFile_(puVar1,auVar9._8_8_,auVar9._0_8_);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      lVar5 = objc_msgSend_mutableCopy();
      if (lVar5 == 0) {
        objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_0001df50);
        uVar7 = _objc_retainAutoreleasedReturnValue();
      }
      else {
        uVar7 = _objc_retain(lVar5);
      }
      _objc_release(lVar5);
      _objc_release(uVar6);
      _objc_release(auVar9._0_8_);
      if (lVar3 == 0) {
        objc_msgSend_removeObjectForKey_(uVar7,extraout_x1,uVar4);
      }
      else {
        objc_msgSend_setObject_forKeyedSubscript_(uVar7,extraout_x1,lVar3,uVar4);
      }
      iVar2 = objc_msgSend_boolValue(lVar3);
      if ((iVar2 == 0) ||
         (auVar9 = objc_msgSend_isEqualToString_(uVar4,extraout_x1_00,&cf_Clock_Rainbow_Enabled),
         uVar6 = auVar9._8_8_, (auVar9 & (undefined  [16])0x1) == (undefined  [16])0x0)) {
        iVar2 = objc_msgSend_boolValue(lVar3);
        if ((iVar2 != 0) &&
           (auVar9 = objc_msgSend_isEqualToString_(uVar4,extraout_x1_01,&cf_Clock_CustomColor_Enabled),
           uVar6 = auVar9._8_8_, (auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0)) {
          pcVar8 = &cf_Clock_Rainbow_Enabled;
          goto LAB_0000ddd4;
        }
        FUN_0000de2c(uVar7);
      }
      else {
        pcVar8 = &cf_Clock_CustomColor_Enabled;
    LAB_0000ddd4:
        objc_msgSend_setObject_forKeyedSubscript_(uVar7,uVar6,PTR____kCFBooleanFalse_000180c0,pcVar8);
        FUN_0000de2c(uVar7);
        objc_msgSend_reloadSpecifiers(self);
      }
      _objc_release(uVar7);
    LAB_0000de08:
      _objc_release(uVar4);
      _objc_release(lVar3);
      return;
}

// IMP 0x0000de9c  types v36@0:8@16@24B32
- (void)presentClockColorPicker:(id)presentClockColorPicker title:(id)title alpha:(BOOL)alpha {
      undefined *puVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined auVar5 [16];

      puVar1 = PTR__OBJC_CLASS___UIColorPickerViewController_0001df80;
      uVar2 = _objc_retain(title);
      uVar3 = _objc_retain(presentClockColorPicker);
      auVar5 = _objc_alloc_init(puVar1);
      uVar4 = auVar5._0_8_;
      objc_msgSend_setDelegate_(uVar4,auVar5._8_8_,self);
      objc_msgSend_setSelectedColor_(uVar4,extraout_x1,uVar3);
      _objc_release(uVar3);
      objc_msgSend_setSupportsAlpha_(uVar4,extraout_x1_00,alpha);
      objc_msgSend_setTitle_(uVar4,extraout_x1_01,uVar2);
      _objc_release(uVar2);
      objc_msgSend_presentViewController_animated_completion_(self,extraout_x1_02,uVar4,1,0);
      _objc_release(uVar4);
      return;
}

// IMP 0x0000df50  types v24@0:8@16
- (void)chooseGradientColor:(id)chooseGradientColor {
      undefined8 uVar1;
      undefined *puVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      ulong uVar5;
      undefined8 extraout_x1;
      undefined *puVar6;
      long lVar7;
      undefined auVar8 [16];
      undefined auVar9 [16];

      uVar1 = objc_msgSend_tag(chooseGradientColor);
      lVar7 = (long)_pickerGradientIndex;
      *(undefined8 *)(self + lVar7) = uVar1;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_0001df40;
      jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
      auVar8 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_dictionaryWithContentsOfFile_(puVar6,auVar8._8_8_,auVar8._0_8_);
      puVar2 = (undefined *)_objc_retainAutoreleasedReturnValue();
      puVar6 = PTR____NSDictionary0__struct_000180b0;
      if (puVar2 != (undefined *)0x0) {
        puVar6 = puVar2;
      }
      uVar1 = _objc_retain(puVar6);
      _objc_release(puVar2);
      _objc_release(auVar8._0_8_);
      puVar6 = (&PTR_cf__3DDEFA_000183e8)[*(long *)(self + lVar7)];
      objc_msgSend_whiteColor(PTR__OBJC_CLASS___UIColor_0001deb8);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      FUN_0000d3d8(puVar6,uVar3);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      objc_msgSend_stringWithFormat_
                (PTR__OBJC_CLASS___NSString_0001df48,extraout_x1,&cf_Clock_Rainbow_Color__lu);
      auVar8 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_objectForKeyedSubscript_(uVar1,auVar8._8_8_,auVar8._0_8_);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(auVar8._0_8_);
      uVar1 = _objc_opt_class(PTR__OBJC_CLASS___NSString_0001df48);
      uVar5 = _objc_opt_isKindOfClass(uVar3,uVar1);
      uVar1 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar1 = 0;
      }
      FUN_0000d3d8(uVar1,uVar4);
      auVar8 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_stringWithFormat_(PTR__OBJC_CLASS___NSString_0001df48,auVar8._8_8_,&cf_nSr);
      auVar9 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_presentClockColorPicker_title_alpha_
                (self,auVar9._8_8_,auVar8._0_8_,auVar9._0_8_,0);
      _objc_release(auVar9._0_8_);
      _objc_release(auVar8._0_8_);
      _objc_release(uVar3);
      _objc_release(uVar4);
      return;
}

// IMP 0x0000e120  types v16@0:8
- (void)chooseCustomClockColor {
      undefined *puVar1;
      undefined *puVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      ulong uVar5;
      undefined8 uVar6;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined auVar7 [16];

      *(undefined8 *)(self + (long)_pickerGradientIndex) = 0xffffffffffffffff;
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
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar6);
      objc_msgSend_presentClockColorPicker_title_alpha_(self,extraout_x1_00,uVar3,&cf__INer,1);
      _objc_release(uVar3);
      _objc_release(uVar4);
      return;
}

// IMP 0x0000e254  types v24@0:8@16
- (void)savePickerColor:(id)savePickerColor {
      undefined *puVar1;
      int iVar2;
      long lVar3;
      undefined8 uVar4;
      undefined8 uVar5;
      long lVar6;
      double *pdVar7;
      undefined8 uVar8;
      long lVar9;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined8 extraout_x1_02;
      undefined8 extraout_x1_03;
      undefined8 extraout_x1_04;
      undefined8 extraout_x1_05;
      cfstringStruct *pcVar10;
      cfstringStruct *pcVar11;
      undefined auVar12 [16];
      double local_70;
      double local_68;
      double local_60;
      double local_58;

      _objc_retain(savePickerColor);
      lVar3 = _objc_retain();
      if (lVar3 == 0) goto LAB_0000e608;
      uVar4 = _objc_retainAutorelease(lVar3);
      uVar5 = objc_msgSend_CGColor();
      lVar6 = _CGColorGetColorSpace();
      auVar12 = _CGColorGetComponents(uVar5);
      uVar8 = auVar12._8_8_;
      pdVar7 = auVar12._0_8_;
      if (((lVar6 == 0) || (pdVar7 == (double *)0x0)) ||
         (iVar2 = _CGColorSpaceGetModel(lVar6), uVar8 = extraout_x1, iVar2 != 1)) {
    LAB_0000e3d4:
        local_60 = 0.0;
        local_58 = 0.0;
        local_70 = 1.0;
        local_68 = 0.0;
        iVar2 = objc_msgSend_getRed_green_blue_alpha_
                          (uVar4,uVar8,&local_58,&local_60,&local_68,&local_70);
        lVar6 = 0;
        if (((iVar2 != 0) && (lVar6 = 0, ABS(local_58) != INFINITY)) &&
           ((lVar6 = 0, ABS(local_60) != INFINITY &&
            ((lVar6 = 0, ABS(local_68) != INFINITY && (lVar6 = 0, ABS(local_70) != INFINITY)))))) {
          objc_msgSend_stringWithFormat_
                    (PTR__OBJC_CLASS___NSString_0001df48,extraout_x1_01,&cf_srgb___17g___17g___17g___17g
                    );
          lVar6 = _objc_retainAutoreleasedReturnValue();
        }
      }
      else {
        auVar12 = _CGColorGetNumberOfComponents(uVar5);
        uVar8 = auVar12._8_8_;
        if (auVar12._0_8_ != 4) goto LAB_0000e3d4;
        lVar6 = _CGColorSpaceGetName(lVar6);
        pcVar11 = &cf_srgb_;
        if (lVar6 != 0) {
          iVar2 = _CFEqual(lVar6,*(undefined8 *)PTR__kCGColorSpaceDisplayP3_00018158);
          if (iVar2 != 0) {
            pcVar11 = &cf_p3_;
          }
        }
        auVar12 = _objc_retain(pcVar11);
        if (((ABS(*pdVar7) == INFINITY) || (ABS(pdVar7[1]) == INFINITY)) ||
           ((ABS(pdVar7[2]) == INFINITY || (ABS(pdVar7[3]) == INFINITY)))) {
          _objc_release(auVar12._0_8_);
          uVar8 = extraout_x1_00;
          goto LAB_0000e3d4;
        }
        objc_msgSend_stringWithFormat_
                  (PTR__OBJC_CLASS___NSString_0001df48,auVar12._8_8_,&cf_____17g___17g___17g___17g);
        lVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar12._0_8_);
      }
      _objc_release(uVar4);
      puVar1 = PTR__OBJC_CLASS___NSDictionary_0001df40;
      if (lVar6 != 0) {
        jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
        auVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_dictionaryWithContentsOfFile_(puVar1,auVar12._8_8_,auVar12._0_8_);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        lVar9 = objc_msgSend_mutableCopy();
        if (lVar9 == 0) {
          objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_0001df50);
          uVar4 = _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar4 = _objc_retain(lVar9);
        }
        _objc_release(lVar9);
        _objc_release(uVar8);
        _objc_release(auVar12._0_8_);
        if (*(ulong *)(self + (long)_pickerGradientIndex) < 5) {
          objc_msgSend_stringWithFormat_
                    (PTR__OBJC_CLASS___NSString_0001df48,extraout_x1_02,&cf_Clock_Rainbow_Color__lu);
          auVar12 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setObject_forKeyedSubscript_(uVar4,auVar12._8_8_,lVar6,auVar12._0_8_);
          _objc_release(auVar12._0_8_);
          pcVar11 = &cf_Clock_CustomColor_Enabled;
          pcVar10 = &cf_Clock_Rainbow_Enabled;
          uVar8 = extraout_x1_03;
        }
        else {
          objc_msgSend_setObject_forKeyedSubscript_
                    (uVar4,extraout_x1_02,lVar6,&cf_Clock_CustomColor_Hex);
          pcVar11 = &cf_Clock_Rainbow_Enabled;
          pcVar10 = &cf_Clock_CustomColor_Enabled;
          uVar8 = extraout_x1_04;
        }
        objc_msgSend_setObject_forKeyedSubscript_(uVar4,uVar8,PTR____kCFBooleanTrue_000180c8,pcVar10);
        objc_msgSend_setObject_forKeyedSubscript_
                  (uVar4,extraout_x1_05,PTR____kCFBooleanFalse_000180c0,pcVar11);
        FUN_0000de2c(uVar4);
        _objc_release(uVar4);
        _objc_release(lVar6);
      }
    LAB_0000e608:
      _objc_release(lVar3);
      return;
}

// IMP 0x0000e62c  types v24@0:8@16
- (void)colorPickerViewControllerDidSelectColor:(id)colorPickerViewControllerDidSelectColor {
      undefined auVar1 [16];

      objc_msgSend_selectedColor(colorPickerViewControllerDidSelectColor);
      auVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_savePickerColor_(self,auVar1._8_8_,auVar1._0_8_);
      _objc_release(auVar1._0_8_);
      return;
}

// IMP 0x0000e66c  types v24@0:8@16
- (void)colorPickerViewControllerDidFinish:(id)colorPickerViewControllerDidFinish {
      undefined auVar1 [16];

      objc_msgSend_selectedColor(colorPickerViewControllerDidFinish);
      auVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_savePickerColor_(self,auVar1._8_8_,auVar1._0_8_);
      _objc_release(auVar1._0_8_);
      objc_msgSend_reloadSpecifiers(self);
      return;
}

@end
