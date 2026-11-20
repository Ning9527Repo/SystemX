// SystemBoxClockGlass  (arm64)
// ===== 0x00008000  shared

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::shared(ID param_1,SEL param_2)

{
  ID IVar1;
  SEL extraout_x1;
  
  if (DAT_00055fa0 != -1) {
    _dispatch_once(&DAT_00055fa0,&PTR___NSConcreteGlobalBlock_000505b8);
    param_2 = extraout_x1;
  }
  IVar1 = _objc_retainAutoreleaseReturnValue(DAT_00055f98,param_2);
  return IVar1;
}



// ===== 0x00008040  FUN_00008040

void FUN_00008040(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_new(PTR_PTR_00055ab8);
  uVar1 = DAT_00055f98;
  DAT_00055f98 = uVar2;
  _objc_release(uVar1);
  return;
}



// ===== 0x0000806c  LGClockFontStore__init

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::LGClockFontStore__init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00055c18;
  local_30 = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,PTR_s_init_00055310);
  if (IVar1 != 0) {
    uVar2 = _objc_opt_new(PTR__OBJC_CLASS___NSCache_00055ac0);
    uVar3 = *(undefined8 *)(IVar1 + 0x28);
    *(undefined8 *)(IVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    objc_msgSend_setCountLimit_(*(undefined8 *)(IVar1 + 0x28),extraout_x1,0x40);
    objc_msgSend_loadFont(IVar1);
    _objc_retain(IVar1);
  }
  _objc_release(IVar1);
  return IVar1;
}



// ===== 0x000080f4  LGClockFontStore__dealloc

/* Function Stack Size: 0x10 bytes */

void LGClockFontStore::LGClockFontStore__dealloc(ID param_1,SEL param_2)

{
  ID local_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 8) != 0) {
    _CGFontRelease();
  }
  puStack_28 = PTR_PTR_00055c18;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_dealloc_000551d0);
  return;
}



// ===== 0x00008140  LGClockFontStore__loadFont

/* Function Stack Size: 0x10 bytes */

void LGClockFontStore::LGClockFontStore__loadFont(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  cfstringStruct *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  undefined8 local_160;
  long lStack_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long local_118;
  undefined **local_110;
  undefined **local_108;
  undefined auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000502b0;
  _CACurrentMediaTime();
  if (DAT_00056188 != -1) {
    _dispatch_once(&DAT_00056188,&PTR___NSConcreteGlobalBlock_000506b8);
  }
  uVar2 = _objc_retain(DAT_00056180);
  lVar3 = objc_msgSend_length();
  if (lVar3 == 0) {
    pcVar16 = &cf_fontloadfailedpath___;
  }
  else {
    lVar3 = _CGDataProviderCreateWithCFData(uVar2);
    if (lVar3 == 0) {
      *(undefined8 *)(param_1 + 8) = 0;
    }
    else {
      uVar4 = _CGFontCreateWithDataProvider();
      *(undefined8 *)(param_1 + 8) = uVar4;
      _CGDataProviderRelease(lVar3);
      if (*(long *)(param_1 + 8) != 0) {
        uVar4 = _CGFontCopyPostScriptName();
        uVar11 = *(undefined8 *)(param_1 + 0x10);
        *(undefined8 *)(param_1 + 0x10) = uVar4;
        _objc_release(uVar11);
        local_118 = 0;
        iVar1 = _CTFontManagerRegisterGraphicsFont(*(undefined8 *)(param_1 + 8),&local_118);
        if (((iVar1 == 0) && (local_118 != 0)) && (lVar3 = _CFErrorGetCode(), lVar3 != 0x69)) {
          _LGLog(&cf_fontregistrationfailedps___error___);
        }
        if (local_118 != 0) {
          _CFRelease();
        }
        lVar3 = _CTFontCreateWithGraphicsFont(0x404e000000000000,*(undefined8 *)(param_1 + 8),0,0);
        if (lVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = _CTFontCopyVariationAxes();
          _CFRelease(lVar3);
        }
        objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_00055ac8);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_00055ac8);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        lStack_158 = 0;
        local_160 = 0;
        uStack_148 = 0;
        local_150 = (long *)0x0;
        uStack_138 = 0;
        local_140 = 0;
        uStack_128 = 0;
        uStack_130 = 0;
        auVar19 = _objc_retain(uVar4);
        uVar4 = auVar19._0_8_;
        auVar19 = objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar4,auVar19._8_8_,&local_160,auStack_100,0x10);
        if (auVar19._0_8_ != 0) {
          lVar3 = *local_150;
          uVar17 = *(undefined8 *)PTR__kCTFontVariationAxisNameKey_000503c8;
          uVar18 = *(undefined8 *)PTR__kCTFontVariationAxisIdentifierKey_000503b0;
          uVar13 = *(undefined8 *)PTR__kCTFontVariationAxisMinimumValueKey_000503c0;
          uVar12 = *(undefined8 *)PTR__kCTFontVariationAxisMaximumValueKey_000503b8;
          do {
            uVar6 = auVar19._8_8_;
            lVar14 = 0;
            do {
              if (*local_150 != lVar3) {
                _objc_enumerationMutation(uVar4);
                uVar6 = extraout_x1;
              }
              uVar15 = *(undefined8 *)(lStack_158 + lVar14 * 8);
              objc_msgSend_objectForKeyedSubscript_(uVar15,uVar6,uVar17);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_lowercaseString();
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar6);
              objc_msgSend_objectForKeyedSubscript_(uVar15,extraout_x1_00,uVar18);
              lVar8 = _objc_retainAutoreleasedReturnValue();
              if (lVar8 != 0) {
                iVar1 = objc_msgSend_unsignedIntValue(lVar8);
                uVar6 = extraout_x1_01;
                if (iVar1 < 0x77647468) {
                  if (iVar1 == 0x48474854) {
                    pcVar16 = &cf_height;
                  }
                  else if (iVar1 == 0x534f4654) {
                    pcVar16 = &cf_softness;
                  }
                  else {
LAB_00008430:
                    auVar20 = objc_msgSend_length(uVar7);
                    if (auVar20._0_8_ == 0) goto LAB_000085bc;
                    pcVar16 = &cf_weight;
                    auVar20 = objc_msgSend_containsString_(uVar7,auVar20._8_8_,&cf_weight);
                    uVar6 = auVar20._8_8_;
                    if ((auVar20 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                      auVar20 = objc_msgSend_containsString_(uVar7,uVar6,&cf_wght);
                      uVar6 = auVar20._8_8_;
                      pcVar16 = &cf_weight;
                      if ((auVar20 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                        pcVar16 = &cf_width;
                        auVar20 = objc_msgSend_containsString_(uVar7,uVar6,&cf_width);
                        uVar6 = auVar20._8_8_;
                        if ((auVar20 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                          auVar20 = objc_msgSend_containsString_(uVar7,uVar6,&cf_wdth);
                          uVar6 = auVar20._8_8_;
                          pcVar16 = &cf_width;
                          if ((auVar20 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                            pcVar16 = &cf_height;
                            auVar20 = objc_msgSend_containsString_(uVar7,uVar6,&cf_height);
                            uVar6 = auVar20._8_8_;
                            if ((auVar20 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                              auVar20 = objc_msgSend_containsString_(uVar7,uVar6,&cf_hght);
                              uVar6 = auVar20._8_8_;
                              pcVar16 = &cf_height;
                              if ((auVar20 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                                iVar1 = objc_msgSend_containsString_(uVar7,uVar6,&cf_soft);
                                pcVar16 = &cf_softness;
                                uVar6 = extraout_x1_02;
                                if (iVar1 == 0) goto LAB_000085bc;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                else if (iVar1 == 0x77676874) {
                  pcVar16 = &cf_weight;
                }
                else {
                  if (iVar1 != 0x77647468) goto LAB_00008430;
                  pcVar16 = &cf_width;
                }
                objc_msgSend_setObject_forKeyedSubscript_(uVar11,uVar6,lVar8,pcVar16);
                objc_msgSend_objectForKeyedSubscript_(uVar15,extraout_x1_03,uVar13);
                auVar20 = _objc_retainAutoreleasedReturnValue();
                ppuVar9 = auVar20._0_8_;
                local_110 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_00052d60;
                if (ppuVar9 != (undefined **)0x0) {
                  local_110 = ppuVar9;
                }
                objc_msgSend_objectForKeyedSubscript_(uVar15,auVar20._8_8_,uVar12);
                auVar20 = _objc_retainAutoreleasedReturnValue();
                ppuVar10 = auVar20._0_8_;
                local_108 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_00052d70;
                if (ppuVar10 != (undefined **)0x0) {
                  local_108 = ppuVar10;
                }
                objc_msgSend_arrayWithObjects_count_
                          (PTR__OBJC_CLASS___NSArray_00055ad0,auVar20._8_8_,&local_110,2);
                auVar20 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setObject_forKeyedSubscript_(uVar5,auVar20._8_8_,auVar20._0_8_,pcVar16)
                ;
                _objc_release(auVar20._0_8_);
                _objc_release(ppuVar10);
                _objc_release(ppuVar9);
              }
LAB_000085bc:
              _objc_release(lVar8);
              _objc_release(uVar7);
              lVar14 = lVar14 + 1;
              uVar6 = extraout_x1_04;
            } while (auVar19._0_8_ != lVar14);
            auVar19 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar4,extraout_x1_04,&local_160,auStack_100,0x10);
          } while (auVar19._0_8_ != 0);
        }
        _objc_release(uVar4);
        uVar12 = *(undefined8 *)(param_1 + 0x18);
        *(undefined8 *)(param_1 + 0x18) = uVar11;
        uVar11 = _objc_retain();
        _objc_release(uVar12);
        uVar12 = *(undefined8 *)(param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x20) = uVar5;
        uVar5 = _objc_retain();
        _objc_release(uVar12);
        objc_msgSend_length(uVar2);
        _CACurrentMediaTime();
        _LGLog(&cf_fontreadypath___ps___bytes__luaxes___load_ms___2f);
        _objc_release(uVar5);
        _objc_release(uVar11);
        _objc_release(uVar4);
        goto LAB_0000869c;
      }
    }
    objc_msgSend_length(uVar2);
    pcVar16 = &cf_fontdecodefailedpath___bytes__lu;
  }
  _LGLog(pcVar16);
LAB_0000869c:
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_000502b0 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x000086fc  LGClockFontStore__clampedValueForAxis_

/* Function Stack Size: 0x18 bytes */

double LGClockFontStore::LGClockFontStore__clampedValueForAxis_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined auVar6 [16];
  
  uVar1 = _objc_retain(param_3);
  dVar3 = (double)FUN_000087f0();
  objc_msgSend_axisRanges(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_objectForKeyedSubscript_(auVar6._0_8_,auVar6._8_8_,uVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(auVar6._0_8_);
  auVar6 = objc_msgSend_count(uVar2);
  if (auVar6._0_8_ == 2) {
    objc_msgSend_objectAtIndexedSubscript_(uVar2,auVar6._8_8_,0);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    dVar4 = (double)objc_msgSend_doubleValue();
    _objc_release(uVar1);
    if (dVar4 <= dVar3) {
      dVar4 = dVar3;
    }
    objc_msgSend_objectAtIndexedSubscript_(uVar2,extraout_x1,1);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    dVar5 = (double)objc_msgSend_doubleValue();
    _objc_release(uVar1);
    dVar3 = dVar4;
    if (dVar5 <= dVar4) {
      dVar3 = dVar5;
    }
  }
  _objc_release(uVar2);
  return dVar3;
}



// ===== 0x000087f0  FUN_000087f0

undefined8 FUN_000087f0(void)

{
  int iVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar4;
  undefined auVar5 [16];
  
  auVar5 = _objc_retain();
  uVar2 = auVar5._0_8_;
  iVar1 = objc_msgSend_isEqualToString_(uVar2,auVar5._8_8_,&cf_weight);
  if (iVar1 == 0) {
    iVar1 = objc_msgSend_isEqualToString_(uVar2,extraout_x1,&cf_width);
    if (iVar1 == 0) {
      iVar1 = objc_msgSend_isEqualToString_(uVar2,extraout_x1_00,&cf_height);
      if (iVar1 == 0) {
        iVar1 = objc_msgSend_isEqualToString_(uVar2,extraout_x1_01,&cf_softness);
        uVar4 = 0;
        if (iVar1 == 0) goto LAB_000088a8;
        pcVar3 = &cf_Clock_VariableFont_Softness;
        uVar4 = 0;
      }
      else {
        pcVar3 = &cf_Clock_VariableFont_Height;
        uVar4 = DAT_0001e268;
      }
    }
    else {
      pcVar3 = &cf_Clock_VariableFont_Width;
      uVar4 = 0x4059000000000000;
    }
  }
  else {
    pcVar3 = &cf_Clock_VariableFont_Weight;
    uVar4 = DAT_0001e270;
  }
  uVar4 = _LG_prefFloat(uVar4,pcVar3);
LAB_000088a8:
  _objc_release(uVar2);
  return uVar4;
}



// ===== 0x000088c4  LGClockFontStore__fontAtPointSize_

/* Function Stack Size: 0x18 bytes */

ID LGClockFontStore::LGClockFontStore__fontAtPointSize_(ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_000087f0(&cf_height);
  IVar1 = objc_msgSend_fontAtPointSize_heightAxis_(param_3,uVar2,param_1);
  return IVar1;
}



// ===== 0x00008904  LGClockFontStore__minimumHeightAxis

/* Function Stack Size: 0x10 bytes */

double LGClockFontStore::LGClockFontStore__minimumHeightAxis(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined auVar4 [16];
  
  objc_msgSend_axisRanges();
  auVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_objectForKeyedSubscript_(auVar4._0_8_,auVar4._8_8_,&cf_height);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar4._0_8_);
  auVar4 = objc_msgSend_count(uVar1);
  if (auVar4._0_8_ == 2) {
    objc_msgSend_objectAtIndexedSubscript_(uVar1,auVar4._8_8_,0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    dVar3 = (double)objc_msgSend_doubleValue();
    _objc_release(uVar2);
  }
  else {
    dVar3 = 100.0;
  }
  _objc_release(uVar1);
  return dVar3;
}



// ===== 0x000089a4  LGClockFontStore__fontAtPointSize_heightAxis_

/* Function Stack Size: 0x20 bytes */

ID LGClockFontStore::LGClockFontStore__fontAtPointSize_heightAxis_
             (ID param_1,SEL param_2,double param_3,double param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined auVar10 [16];
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  ID IStack_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_000502b0;
  lVar2 = objc_msgSend_graphicsFont();
  if (lVar2 != 0) {
    objc_msgSend_postScriptName(param_1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    lVar2 = objc_msgSend_length();
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___NSString_00055ad8;
    if (lVar2 != 0) {
      if (param_3 <= 1.0) {
        param_3 = 1.0;
      }
      objc_msgSend_clampedValueForAxis_(param_1,extraout_x1,&cf_weight);
      objc_msgSend_clampedValueForAxis_(param_1,extraout_x1_00,&cf_width);
      objc_msgSend_clampedValueForAxis_(param_1,extraout_x1_01,&cf_softness);
      objc_msgSend_stringWithFormat_(puVar1,extraout_x1_02,&cf___2f___1f___1f___1f___1f);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_cache(param_1);
      auVar10 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_objectForKey_(auVar10._0_8_,auVar10._8_8_,uVar3);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_release(auVar10._0_8_);
      if (lVar4 == 0) {
        objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_00055ac8);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_axisIDs(param_1);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        local_d0 = PTR___NSConcreteStackBlock_00050260;
        local_c8 = DAT_0001e278;
        local_c0 = FUN_00008ce4;
        puStack_b8 = &DAT_000505d8;
        auVar10 = _objc_retain(uVar5);
        uVar5 = auVar10._0_8_;
        local_b0 = uVar5;
        IStack_a8 = param_1;
        local_a0 = param_4;
        objc_msgSend_enumerateKeysAndObjectsUsingBlock_(uVar6,auVar10._8_8_,&local_d0);
        _objc_release(uVar6);
        local_98 = *(undefined8 *)PTR__kCTFontNameAttribute_000503a0;
        objc_msgSend_postScriptName(param_1);
        auVar10 = _objc_retainAutoreleasedReturnValue();
        local_90 = *(undefined8 *)PTR__kCTFontVariationAttribute_000503a8;
        uStack_88 = auVar10._0_8_;
        local_80 = uVar5;
        objc_msgSend_dictionaryWithObjects_forKeys_count_
                  (PTR__OBJC_CLASS___NSDictionary_00055ae8,auVar10._8_8_,&uStack_88,&local_98,2);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar10._0_8_);
        lVar7 = _CTFontDescriptorCreateWithAttributes(uVar6);
        if (lVar7 == 0) {
LAB_00008c40:
          objc_msgSend_postScriptName(param_1);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _LGLog(&cf_fontcreatefailedps___size___2fvariations___);
          lVar2 = 0;
        }
        else {
          lVar2 = _CTFontCreateWithFontDescriptor(param_3,lVar7,0);
          _CFRelease(lVar7);
          if (lVar2 == 0) goto LAB_00008c40;
          objc_msgSend_cache(param_1);
          auVar10 = _objc_retainAutoreleasedReturnValue();
          uVar8 = auVar10._0_8_;
          objc_msgSend_setObject_forKey_(uVar8,auVar10._8_8_,lVar2,uVar3);
        }
        _objc_release(uVar8);
        _objc_release(uVar6);
        _objc_release(local_b0);
        _objc_release(uVar5);
      }
      else {
        lVar2 = _objc_retain(lVar4);
      }
      _objc_release(lVar4);
      _objc_release(uVar3);
      goto LAB_00008ca0;
    }
  }
  objc_msgSend_graphicsFont(param_1);
  objc_msgSend_postScriptName(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _LGLog(&cf_fontrequestunavailablegraphics__pps___size___2fheight___1f);
  _objc_release(uVar3);
  lVar2 = 0;
LAB_00008ca0:
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_78) {
    IVar9 = _objc_autoreleaseReturnValue(lVar2);
    return IVar9;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00008ce4  FUN_00008ce4

void FUN_00008ce4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 uVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  uVar3 = _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_00055ae0;
  auVar5 = _objc_retain(param_3);
  iVar2 = objc_msgSend_isEqualToString_(uVar3,auVar5._8_8_,&cf_height);
  if (iVar2 == 0) {
    uVar4 = objc_msgSend_clampedValueForAxis_(*(undefined8 *)(param_1 + 0x28),extraout_x1,uVar3);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x30);
  }
  objc_msgSend_numberWithDouble_(uVar4,puVar1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setObject_forKeyedSubscript_
            (*(undefined8 *)(param_1 + 0x20),auVar6._8_8_,auVar6._0_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar3);
  return;
}



// ===== 0x00008d8c  FUN_00008d8c

void FUN_00008d8c(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}



// ===== 0x00008db4  FUN_00008db4

void FUN_00008db4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



// ===== 0x00008ddc  LGClockFontStore__graphicsFont

/* Function Stack Size: 0x10 bytes */

CGFont * LGClockFontStore::LGClockFontStore__graphicsFont(ID param_1,SEL param_2)

{
  return *(CGFont **)(param_1 + 8);
}



// ===== 0x00008de4  LGClockFontStore__setGraphicsFont_

/* Function Stack Size: 0x18 bytes */

void LGClockFontStore::LGClockFontStore__setGraphicsFont_(ID param_1,SEL param_2,CGFont *param_3)

{
  *(CGFont **)(param_1 + 8) = param_3;
  return;
}



// ===== 0x00008dec  LGClockFontStore__postScriptName

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::LGClockFontStore__postScriptName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



// ===== 0x00008df4  LGClockFontStore__setPostScriptName_

/* Function Stack Size: 0x18 bytes */

void LGClockFontStore::LGClockFontStore__setPostScriptName_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x00008dfc  LGClockFontStore__axisIDs

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::LGClockFontStore__axisIDs(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



// ===== 0x00008e04  LGClockFontStore__setAxisIDs_

/* Function Stack Size: 0x18 bytes */

void LGClockFontStore::LGClockFontStore__setAxisIDs_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x00008e0c  LGClockFontStore__axisRanges

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::LGClockFontStore__axisRanges(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



// ===== 0x00008e14  LGClockFontStore__setAxisRanges_

/* Function Stack Size: 0x18 bytes */

void LGClockFontStore::LGClockFontStore__setAxisRanges_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x00008e1c  LGClockFontStore__cache

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::LGClockFontStore__cache(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



// ===== 0x00008e24  LGClockFontStore__setCache_

/* Function Stack Size: 0x18 bytes */

void LGClockFontStore::LGClockFontStore__setCache_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x28,param_3);
  return;
}



// ===== 0x00008e30  LGClockFontStore___cxx_destruct

/* Function Stack Size: 0x10 bytes */

void LGClockFontStore::LGClockFontStore___cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
  return;
}



// ===== 0x00008e78  shared

/* Function Stack Size: 0x10 bytes */

ID LGClockMotionTracker::shared(ID param_1,SEL param_2)

{
  ID IVar1;
  SEL extraout_x1;
  
  if (DAT_00055fb0 != -1) {
    _dispatch_once(&DAT_00055fb0,&PTR___NSConcreteGlobalBlock_00050608);
    param_2 = extraout_x1;
  }
  IVar1 = _objc_retainAutoreleaseReturnValue(DAT_00055fa8,param_2);
  return IVar1;
}



// ===== 0x00008eb8  FUN_00008eb8

void FUN_00008eb8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _objc_opt_new(PTR_PTR_00055af0);
  uVar1 = DAT_00055fa8;
  DAT_00055fa8 = uVar2;
  _objc_release(uVar1);
  return;
}



// ===== 0x00008ee4  LGClockMotionTracker__init

/* Function Stack Size: 0x10 bytes */

ID LGClockMotionTracker::LGClockMotionTracker__init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined auVar4 [16];
  ID local_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_00055c20;
  local_40 = param_1;
  auVar4 = _objc_msgSendSuper2(&local_40,PTR_s_init_00055310);
  IVar1 = auVar4._0_8_;
  if (IVar1 != 0) {
    objc_msgSend_displayLinkWithTarget_selector_
              (PTR__OBJC_CLASS___CADisplayLink_00055af8,auVar4._8_8_,IVar1,PTR_s_tick__000559e0);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(IVar1 + 8);
    *(undefined8 *)(IVar1 + 8) = uVar2;
    _objc_release(uVar3);
    objc_msgSend_mainScreen(PTR__OBJC_CLASS___UIScreen_00055b00);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    auVar4 = objc_msgSend_maximumFramesPerSecond();
    objc_msgSend_setPreferredFramesPerSecond_(*(undefined8 *)(IVar1 + 8),auVar4._8_8_,auVar4._0_8_);
    _objc_release(uVar2);
    objc_msgSend_setPaused_(*(undefined8 *)(IVar1 + 8),extraout_x1,1);
    uVar2 = *(undefined8 *)(IVar1 + 8);
    objc_msgSend_mainRunLoop(PTR__OBJC_CLASS___NSRunLoop_00055b08);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_addToRunLoop_forMode_
              (uVar2,auVar4._8_8_,auVar4._0_8_,*(undefined8 *)PTR__NSRunLoopCommonModes_000501f8);
    _objc_release(auVar4._0_8_);
    _objc_retain(IVar1);
  }
  _objc_release(IVar1);
  return IVar1;
}



// ===== 0x00008fec  LGClockMotionTracker__trackMotion

/* Function Stack Size: 0x10 bytes */

void LGClockMotionTracker::LGClockMotionTracker__trackMotion(ID param_1,SEL param_2)

{
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)_CACurrentMediaTime();
  objc_msgSend_setDeadline_(dVar1 + DAT_0001e280,param_1);
  objc_msgSend_displayLink(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setPreferredFramesPerSecond_(auVar2._0_8_,auVar2._8_8_,0x78);
  _objc_release(auVar2._0_8_);
  objc_msgSend_displayLink(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setPaused_(auVar2._0_8_,auVar2._8_8_,0);
  _objc_release(auVar2._0_8_);
  return;
}



// ===== 0x00009064  LGClockMotionTracker__tick_

/* Function Stack Size: 0x18 bytes */

void LGClockMotionTracker::LGClockMotionTracker__tick_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  long lVar11;
  undefined extraout_b0;
  undefined extraout_b0_00;
  undefined extraout_var;
  undefined extraout_var_00;
  undefined extraout_var_01;
  undefined extraout_var_02;
  undefined extraout_var_03;
  undefined extraout_var_04;
  undefined extraout_var_05;
  undefined extraout_var_06;
  undefined extraout_var_07;
  undefined extraout_var_08;
  undefined extraout_var_09;
  undefined extraout_var_10;
  undefined extraout_var_11;
  undefined extraout_var_12;
  undefined auVar12 [16];
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000502b0;
  uVar2 = _objc_retain(param_3);
  _CACurrentMediaTime();
  objc_msgSend_deadline(param_1);
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  FUN_0000926c();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_allObjects();
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  lVar5 = objc_msgSend_countByEnumeratingWithState_objects_count_
                    (uVar4,extraout_x1,&local_140,auStack_100,0x10);
  if (lVar5 == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    lVar11 = *local_130;
    do {
      lVar8 = 0;
      do {
        if (*local_130 != lVar11) {
          _objc_enumerationMutation(uVar4);
        }
        uVar9 = *(undefined8 *)(lStack_138 + lVar8 * 8);
        objc_msgSend_host(uVar9);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_window();
        lVar6 = _objc_retainAutoreleasedReturnValue();
        if (lVar6 == 0) {
          _objc_release(uVar3);
          uVar3 = extraout_x1_02;
        }
        else {
          objc_msgSend_glassView(uVar9);
          lVar7 = _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar6);
          _objc_release(uVar3);
          uVar3 = extraout_x1_00;
          if (lVar7 != 0) {
            objc_msgSend_updatePullBlur(uVar9);
            uVar1 = objc_msgSend_pullBlurActive(uVar9);
            uVar10 = uVar10 | uVar1;
            auVar12 = objc_msgSend_applying(uVar9);
            uVar3 = auVar12._8_8_;
            if ((auVar12 & (undefined  [16])0x1) == (undefined  [16])0x0) {
              objc_msgSend_applyReason_(uVar9,uVar3,&cf_motion);
              uVar3 = extraout_x1_01;
            }
          }
        }
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      lVar5 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar4,uVar3,&local_140,auStack_100,0x10);
    } while (lVar5 != 0);
  }
  _objc_release(uVar4);
  if (((double)CONCAT17(extraout_var_12,
                        CONCAT16(extraout_var_10,
                                 CONCAT15(extraout_var_08,
                                          CONCAT14(extraout_var_06,
                                                   CONCAT13(extraout_var_04,
                                                            CONCAT12(extraout_var_02,
                                                                     CONCAT11(extraout_var_00,
                                                                              extraout_b0_00)))))))
       <= (double)CONCAT17(extraout_var_11,
                           CONCAT16(extraout_var_09,
                                    CONCAT15(extraout_var_07,
                                             CONCAT14(extraout_var_05,
                                                      CONCAT13(extraout_var_03,
                                                               CONCAT12(extraout_var_01,
                                                                        CONCAT11(extraout_var,
                                                                                 extraout_b0))))))))
     && ((uVar10 & 1) == 0)) {
    objc_msgSend_setPaused_(uVar2,extraout_x1_03,1);
  }
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_000502b0 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x0000926c  FUN_0000926c

void FUN_0000926c(void)

{
  if (DAT_00056198 != -1) {
    _dispatch_once(&DAT_00056198,&PTR___NSConcreteGlobalBlock_000506d8);
  }
  _objc_retainAutoreleaseReturnValue(DAT_00056190);
  return;
}



// ===== 0x000092ac  LGClockMotionTracker__displayLink

/* Function Stack Size: 0x10 bytes */

ID LGClockMotionTracker::LGClockMotionTracker__displayLink(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



// ===== 0x000092b4  LGClockMotionTracker__setDisplayLink_

/* Function Stack Size: 0x18 bytes */

void LGClockMotionTracker::LGClockMotionTracker__setDisplayLink_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 8,param_3);
  return;
}



// ===== 0x000092c0  LGClockMotionTracker__deadline

/* Function Stack Size: 0x10 bytes */

double LGClockMotionTracker::LGClockMotionTracker__deadline(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x10);
}



// ===== 0x000092c8  LGClockMotionTracker__setDeadline_

/* Function Stack Size: 0x18 bytes */

void LGClockMotionTracker::LGClockMotionTracker__setDeadline_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x10) = param_3;
  return;
}



// ===== 0x000092d0  LGClockMotionTracker___cxx_destruct

/* Function Stack Size: 0x10 bytes */

void LGClockMotionTracker::LGClockMotionTracker___cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + 8,0);
  return;
}



// ===== 0x000092dc  LGClockState__init

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__init(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined8 uVar2;
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00055c28;
  local_30 = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,PTR_s_init_00055310);
  if (IVar1 != 0) {
    uVar2 = _CACurrentMediaTime();
    *(undefined8 *)(IVar1 + 200) = uVar2;
  }
  return IVar1;
}



// ===== 0x0000932c  LGClockState__scheduleApply_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__scheduleApply_(ID param_1,SEL param_2,ID param_3)

{
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
  
  uVar2 = _objc_retain(param_3);
  auVar10 = objc_msgSend_layoutCalls(param_1);
  objc_msgSend_setLayoutCalls_(param_1,auVar10._8_8_,auVar10._0_8_ + 1);
  iVar1 = objc_msgSend_scheduled(param_1);
  if (iVar1 == 0) {
    objc_msgSend_setScheduled_(param_1,extraout_x1,1);
    _objc_initWeak(auStack_58,param_1);
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
      objc_msgSend_host(param_1);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_opt_class();
      _NSStringFromClass();
      uVar4 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_sourceLabel(param_1);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_text();
      lVar6 = _objc_retainAutoreleasedReturnValue();
      if (lVar6 == 0) {
        objc_msgSend_sourceLabel(param_1);
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



// ===== 0x00009520  FUN_00009520

void FUN_00009520(long param_1)

{
  long lVar1;
  undefined8 extraout_x1;
  undefined auVar2 [16];
  
  auVar2 = _objc_loadWeakRetained(param_1 + 0x28);
  lVar1 = auVar2._0_8_;
  if (lVar1 != 0) {
    objc_msgSend_setScheduled_(lVar1,auVar2._8_8_,0);
    objc_msgSend_applyReason_(lVar1,extraout_x1,*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar1);
  return;
}



// ===== 0x00009568  FUN_00009568

void FUN_00009568(long param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  return;
}



// ===== 0x00009598  FUN_00009598

void FUN_00009598(long param_1)

{
  _objc_destroyWeak(param_1 + 0x28);
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



// ===== 0x000095c0  LGClockState__updatePullBlur

/* Function Stack Size: 0x10 bytes */

void LGClockState::LGClockState__updatePullBlur(ID param_1,SEL param_2)

{
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
    objc_msgSend_glassView(param_1);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    if (lVar5 != 0) {
      objc_msgSend_pullBlurView(param_1);
      lVar6 = _objc_retainAutoreleasedReturnValue();
      if (lVar6 != 0) {
        objc_msgSend_sourceLabel(param_1);
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
        iVar1 = objc_msgSend_pullBlurKnown(param_1);
        uVar10 = extraout_x1_01;
        if ((iVar1 != 0) &&
           (uVar2 = objc_msgSend_pullBlurActive(param_1), uVar10 = extraout_x1_02, uVar11 == uVar2))
        goto LAB_00009b04;
        objc_msgSend_setPullBlurKnown_(param_1,uVar10,1);
        objc_msgSend_setPullBlurActive_(param_1,extraout_x1_03,uVar11);
        if (uVar11 == 0) {
          objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
          uVar10 = _objc_retainAutoreleasedReturnValue();
        }
        else {
          objc_msgSend_glassView(param_1);
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
        objc_msgSend_pullBlurView(param_1);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setBackgroundColor_(auVar18._0_8_,auVar18._8_8_,uVar10);
        _objc_release(auVar18._0_8_);
        if (uVar11 == 0) {
          _objc_release(uVar10);
          objc_msgSend_glassView(param_1);
          auVar18 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setMaskView_(auVar18._0_8_,auVar18._8_8_,0);
          _objc_release(auVar18._0_8_);
          objc_msgSend_pullBlurView(param_1);
          auVar18 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setMaskView_(auVar18._0_8_,auVar18._8_8_,0);
          _objc_release(auVar18._0_8_);
          objc_msgSend_glassView(param_1);
          lVar5 = _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(lVar5);
          objc_msgSend_pullBlurView(param_1);
          auVar18 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setValue_forKey_
                    (auVar18._0_8_,auVar18._8_8_,&PTR__OBJC_CLASS___NSConstantDoubleNumber_00052d80,
                     &cf_lgBlurRadius);
          _objc_release(auVar18._0_8_);
          objc_msgSend_glassView(param_1);
          auVar18 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setMaskView_(auVar18._0_8_,auVar18._8_8_,0);
          _objc_release(auVar18._0_8_);
          objc_msgSend_pullBlurView(param_1);
          auVar18 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setMaskView_(auVar18._0_8_,auVar18._8_8_,0);
          _objc_release(auVar18._0_8_);
          objc_msgSend_pullBlurView(param_1);
          lVar5 = _objc_retainAutoreleasedReturnValue();
        }
        objc_msgSend_glyphMaskView(param_1);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setMaskView_(lVar5,auVar18._8_8_,auVar18._0_8_);
        _objc_release(auVar18._0_8_);
        objc_msgSend_glassView(param_1);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setHidden_(auVar18._0_8_,auVar18._8_8_,uVar11);
        _objc_release(auVar18._0_8_);
        objc_msgSend_pullBlurView(param_1);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setHidden_(auVar18._0_8_,auVar18._8_8_,uVar11 ^ 1);
        _objc_release(auVar18._0_8_);
        if (uVar11 == 0) {
          objc_msgSend_glassView(param_1);
          auVar18 = _objc_retainAutoreleasedReturnValue();
        }
        else {
          objc_msgSend_pullBlurView();
          auVar18 = _objc_retainAutoreleasedReturnValue();
        }
        objc_msgSend_bringSubviewToFront_(lVar3,auVar18._8_8_,auVar18._0_8_);
        _objc_release(auVar18._0_8_);
        objc_msgSend_colorOverlayView(param_1);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_superview();
        lVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(uVar10);
        if (lVar6 == lVar3) {
          objc_msgSend_colorOverlayView(param_1);
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



// ===== 0x00009b58  LGClockState__nativeTimeNeedsHiding

/* Function Stack Size: 0x10 bytes */

bool LGClockState::LGClockState__nativeTimeNeedsHiding(ID param_1,SEL param_2)

{
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
  if ((iVar2 == 0) || (uVar3 = objc_msgSend_applying(param_1), (uVar3 & 1) != 0)) {
    return 0;
  }
  objc_msgSend_host(param_1);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_window();
  lVar5 = _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    bVar11 = 0;
    goto LAB_00009cb8;
  }
  objc_msgSend_sourceLabel(param_1);
  lVar6 = _objc_retainAutoreleasedReturnValue();
  if ((lVar6 == 0) || (iVar2 = objc_msgSend_hasRenderedGlyph(param_1), iVar2 == 0)) {
    bVar11 = 0;
  }
  else {
    objc_msgSend_glassView(param_1);
    lVar7 = _objc_retainAutoreleasedReturnValue();
    cVar1 = DAT_00055fb8;
    if (lVar7 == 0) {
      bVar11 = 0;
    }
    else {
      if (DAT_00055fb8 == '\0') {
        objc_msgSend_glassView(param_1);
        unaff_x24 = _objc_retainAutoreleasedReturnValue();
        uVar3 = objc_msgSend_lgFilterAttached();
        if ((uVar3 & 1) == 0) goto LAB_00009c40;
        bVar11 = 1;
      }
      else {
LAB_00009c40:
        objc_msgSend_colorOverlayView(param_1);
        lVar8 = _objc_retainAutoreleasedReturnValue();
        if (lVar8 == 0) {
          bVar11 = 0;
        }
        else {
          objc_msgSend_colorMaskLayer(param_1);
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



// ===== 0x00009ce8  LGClockState__reassertNativeTimeHidden

/* Function Stack Size: 0x10 bytes */

void LGClockState::LGClockState__reassertNativeTimeHidden(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  double dVar6;
  undefined auVar7 [16];
  
  iVar1 = objc_msgSend_nativeTimeNeedsHiding();
  if (iVar1 != 0) {
    objc_msgSend_sourceLabel(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    dVar6 = (double)objc_msgSend_alpha();
    _objc_release(uVar2);
    if (dVar6 != 0.0) {
      objc_msgSend_sourceLabel(param_1);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setAlpha_(0);
      _objc_release(uVar2);
    }
    objc_msgSend_visibleSourceView(param_1);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      objc_msgSend_sourceLabel(param_1);
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



// ===== 0x00009e34  LGClockState__applyReason_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__applyReason_(ID param_1,SEL param_2,ID param_3)

{
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
  uVar8 = _objc_retain(param_3);
  objc_msgSend_host(param_1);
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
  objc_msgSend_sourceLabel(param_1);
  lVar15 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 != lVar15) {
    objc_msgSend_restore(param_1);
    objc_msgSend_setSourceLabel_(param_1,extraout_x1_03,lVar10);
    FUN_0000dd5c(lVar10);
    auVar76 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setVisibleSourceView_(param_1,auVar76._8_8_,auVar76._0_8_);
    _objc_release(auVar76._0_8_);
    objc_msgSend_visibleSourceView(param_1);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_alpha();
    objc_msgSend_setOriginalVisibleSourceAlpha_(param_1);
    _objc_release(uVar14);
    objc_msgSend_visibleSourceView(param_1);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_layer();
    uVar12 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_opacity();
    objc_msgSend_setOriginalVisibleSourceLayerOpacity_(param_1);
    _objc_release(uVar12);
    _objc_release(uVar14);
    objc_msgSend_visibleSourceView(param_1);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    auVar76 = objc_msgSend_isHidden();
    objc_msgSend_setOriginalVisibleSourceHidden_(param_1,auVar76._8_8_,auVar76._0_8_);
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
      objc_msgSend_setOriginalFont_(param_1,auVar76._8_8_,auVar76._0_8_);
      _objc_release(auVar76._0_8_);
      local_318 = 0;
    }
    else {
LAB_0000a568:
      local_318 = auVar76._0_8_;
      objc_msgSend_setOriginalFont_(param_1,auVar76._8_8_,local_318);
    }
    objc_msgSend_alpha(lVar10);
    objc_msgSend_setOriginalLabelAlpha_(param_1);
    auVar76 = objc_msgSend_isHidden(lVar10);
    objc_msgSend_setOriginalLabelHidden_(param_1,auVar76._8_8_,auVar76._0_8_);
    objc_msgSend_frame(lVar10);
    objc_msgSend_setOriginalLabelFrame_(param_1);
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
    objc_msgSend_originalFont(param_1);
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
    objc_msgSend_visibleSourceView(param_1);
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
    objc_msgSend_originalFont(param_1);
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
      objc_msgSend_glassView(param_1);
      lVar49 = _objc_retainAutoreleasedReturnValue();
      if (lVar49 == 0) {
        uVar42 = 0;
      }
      else if ((lVar48 != 0 | bVar2) == 0) {
        uVar42 = 1;
      }
      else {
        objc_msgSend_colorOverlayView(param_1);
        lVar18 = _objc_retainAutoreleasedReturnValue();
        uVar42 = (uint)(lVar18 != 0);
        _objc_release();
      }
      _objc_release(lVar49);
    }
    objc_msgSend_lastSignature(param_1);
    auVar76 = _objc_retainAutoreleasedReturnValue();
    iVar6 = objc_msgSend_isEqualToString_(uVar14,auVar76._8_8_,auVar76._0_8_);
    _objc_release(auVar76._0_8_);
    if ((iVar6 == 0) || (uVar42 == 0)) {
      objc_msgSend_setLastSignature_(param_1,extraout_x1_20,uVar14);
      objc_msgSend_setApplying_(param_1,extraout_x1_21,1);
      dVar61 = dVar68;
      dVar62 = dVar68;
      if ((uVar7 & 1) == 0) {
        objc_msgSend_setHasRenderedGlyph_(param_1,extraout_x1_22,0);
        dVar52 = 0.0;
        objc_msgSend_setComplicationLayoutShift_(0,param_1);
        objc_msgSend_setNeedsLayout(lVar15);
        objc_msgSend_originalFont(param_1);
        lVar48 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar48 != 0) {
          objc_msgSend_originalFont(param_1);
          auVar76 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setFont_(lVar10,auVar76._8_8_,auVar76._0_8_);
          _objc_release(auVar76._0_8_);
        }
        objc_msgSend_originalLabelAlpha(param_1);
        objc_msgSend_setAlpha_(lVar10);
        auVar76 = objc_msgSend_originalLabelHidden(param_1);
        objc_msgSend_setHidden_(lVar10,auVar76._8_8_,auVar76._0_8_);
        auVar76 = objc_msgSend_originalVisibleSourceHidden(param_1);
        objc_msgSend_setHidden_(local_370,auVar76._8_8_,auVar76._0_8_);
        objc_msgSend_originalVisibleSourceAlpha(param_1);
        objc_msgSend_setAlpha_(local_370);
        uVar50 = objc_msgSend_originalVisibleSourceLayerOpacity(param_1);
        objc_msgSend_layer(local_370);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setOpacity_(uVar50);
        _objc_release(uVar12);
        objc_msgSend_glassView(param_1);
        auVar76 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setMaskView_(auVar76._0_8_,auVar76._8_8_,0);
        _objc_release(auVar76._0_8_);
        objc_msgSend_glassView(param_1);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_removeFromSuperview();
        _objc_release(uVar12);
        objc_msgSend_pullBlurView(param_1);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_removeFromSuperview();
        _objc_release(uVar12);
        objc_msgSend_colorOverlayView(param_1);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_removeFromSuperview();
        _objc_release(uVar12);
        objc_msgSend_setGlassView_(param_1,extraout_x1_23,0);
        objc_msgSend_setPullBlurView_(param_1,extraout_x1_24,0);
        objc_msgSend_setColorOverlayView_(param_1,extraout_x1_25,0);
        objc_msgSend_setColorGradientLayer_(param_1,extraout_x1_26,0);
        objc_msgSend_setColorMaskView_(param_1,extraout_x1_27,0);
        objc_msgSend_setColorMaskLayer_(param_1,extraout_x1_28,0);
        objc_msgSend_setGlyphMaskView_(param_1,extraout_x1_29,0);
        objc_msgSend_setGlyphMaskLayer_(param_1,extraout_x1_30,0);
        uVar12 = extraout_x1_31;
      }
      else {
        objc_msgSend_originalFont(param_1);
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
          objc_msgSend_originalFont(param_1);
          local_358 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_fontName();
          pcVar28 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
          objc_msgSend_originalFont(param_1);
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
                  objc_msgSend_originalFont(param_1);
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
                  objc_msgSend_lastFontDiagnostic(param_1);
                  auVar76 = _objc_retainAutoreleasedReturnValue();
                  uVar13 = objc_msgSend_isEqualToString_(uVar35,auVar76._8_8_,auVar76._0_8_);
                  _objc_release(auVar76._0_8_);
                  if ((uVar13 & 1) == 0) {
                    objc_msgSend_setLastFontDiagnostic_(param_1,extraout_x1_36,uVar35);
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
          objc_msgSend_originalLabelFrame(param_1);
          dVar52 = (double)_CGRectGetWidth();
          if (dVar52 <= (double)(long)(dVar54 + 40.0)) {
            dVar52 = (double)(long)(dVar54 + 40.0);
          }
          objc_msgSend_originalLabelFrame(param_1);
          dVar54 = (double)_CGRectGetHeight();
          if (dVar54 <= dVar75) {
            dVar54 = dVar75;
          }
          dVar57 = (double)objc_msgSend_renderCanvasSize(param_1);
          if (dVar52 <= dVar57) {
            dVar52 = dVar57;
          }
          objc_msgSend_renderCanvasSize(param_1);
          if (dVar54 <= dVar56) {
            dVar54 = dVar56;
          }
          objc_msgSend_setRenderCanvasSize_(dVar52,param_1);
          dVar75 = (double)objc_msgSend_renderCanvasSize(param_1);
          objc_msgSend_renderCanvasSize(param_1);
          uVar19 = _objc_retain(pcVar27);
          dVar60 = (double)_CGRectGetMinY(uVar16,in_d1,in_d2,in_d3);
          dVar52 = in_d1;
          dVar56 = in_d2;
          dVar57 = in_d3;
          uVar23 = _CGRectGetMidX(uVar16,in_d1);
          uVar30 = objc_msgSend_bounds(lVar15);
          objc_msgSend_glassView(param_1);
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
            objc_msgSend_setGlassView_(param_1,extraout_x1_39,lVar49);
          }
          objc_msgSend_pullBlurView(param_1);
          lVar18 = _objc_retainAutoreleasedReturnValue();
          if (lVar18 == 0) {
            _NSClassFromString(&cf_LGSettingsLowBlurView);
            _objc_alloc();
            auVar76 = objc_msgSend_initWithFrame_(uVar30,dVar52,dVar56,dVar57);
            lVar18 = auVar76._0_8_;
            objc_msgSend_setUserInteractionEnabled_(lVar18,auVar76._8_8_,0);
            objc_msgSend_setHidden_(lVar18,extraout_x1_40,1);
            objc_msgSend_setPullBlurView_(param_1,extraout_x1_41,lVar18);
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
          objc_msgSend_colorOverlayView(param_1);
          lVar25 = _objc_retainAutoreleasedReturnValue();
          if ((lVar48 != 0 | bVar2) == 0) {
            objc_msgSend_removeFromSuperview(lVar25);
            objc_msgSend_setColorOverlayView_(param_1,extraout_x1_52,0);
            objc_msgSend_setColorGradientLayer_(param_1,extraout_x1_53,0);
            objc_msgSend_setColorMaskView_(param_1,extraout_x1_54,0);
            objc_msgSend_setColorMaskLayer_(param_1,extraout_x1_55,0);
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
              objc_msgSend_setColorOverlayView_(param_1,extraout_x1_45,lVar25);
              objc_msgSend_setColorGradientLayer_(param_1,extraout_x1_46,uVar31);
              objc_msgSend_setColorMaskView_(param_1,extraout_x1_47,uVar32);
              objc_msgSend_setColorMaskLayer_(param_1,extraout_x1_48,uVar33);
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
          objc_msgSend_setRenderContainer_(param_1,uVar31,lVar15);
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
            objc_msgSend_colorMaskView(param_1);
            uVar30 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setFrame_(uVar31,dVar52);
            _objc_release(uVar30);
            objc_msgSend_colorMaskView(param_1);
            uVar30 = _objc_retainAutoreleasedReturnValue();
            uVar32 = objc_msgSend_bounds();
            objc_msgSend_colorMaskLayer(param_1);
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
              objc_msgSend_colorGradientLayer(param_1);
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
              objc_msgSend_colorGradientLayer(param_1);
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
          objc_msgSend_glyphMaskView(param_1);
          lVar48 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_glyphMaskLayer(param_1);
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
            objc_msgSend_setGlyphMaskView_(param_1,extraout_x1_63,lVar48);
            objc_msgSend_setGlyphMaskLayer_(param_1,extraout_x1_64,uVar31);
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
            objc_msgSend_setRenderedGlyphBottom_(param_1);
            objc_msgSend_setHasRenderedGlyph_(param_1,extraout_x1_66,1);
            objc_msgSend_setNeedsLayout(lVar15);
            dVar65 = dVar75;
            dVar64 = dVar54;
            if (lVar25 != 0) {
              objc_msgSend_colorMaskLayer(param_1);
              auVar76 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setPath_(auVar76._0_8_,auVar76._8_8_,lVar26);
              _objc_release(auVar76._0_8_);
              _CGPathGetBoundingBox(lVar26);
              uVar23 = _CGRectInset();
              objc_msgSend_colorGradientLayer(param_1);
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
            objc_msgSend_colorMaskLayer(param_1);
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
            objc_msgSend_originalLabelAlpha(0,param_1);
          }
          objc_msgSend_setAlpha_(lVar10);
          auVar76 = objc_msgSend_originalLabelHidden(param_1);
          objc_msgSend_setHidden_(lVar10,auVar76._8_8_,auVar76._0_8_);
          uVar22 = extraout_x1_69;
          if ((local_370 != 0) && (local_370 != lVar10)) {
            if ((uVar7 | uVar42) == 0) {
              auVar76 = objc_msgSend_originalVisibleSourceHidden(param_1);
              objc_msgSend_setHidden_(local_370,auVar76._8_8_,auVar76._0_8_);
              objc_msgSend_originalVisibleSourceAlpha(param_1);
              objc_msgSend_setAlpha_(local_370);
              uVar50 = objc_msgSend_originalVisibleSourceLayerOpacity(param_1);
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
          objc_msgSend_setPullBlurKnown_(param_1,uVar22,0);
          objc_msgSend_updatePullBlur(param_1);
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
            objc_msgSend_lastNearestObstacle(param_1);
            lVar26 = _objc_retainAutoreleasedReturnValue();
            _objc_release();
            objc_msgSend_lastRetractionPhase(param_1);
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
              dVar54 = (double)objc_msgSend_lastNearestTop(param_1);
              if ((dVar54 != 0.0) && (dVar53 != 1.797693134862316e+308)) {
                objc_msgSend_lastNearestTop(param_1);
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
            objc_msgSend_setLastNearestObstacle_(param_1,uVar22,lVar45);
            dVar54 = 0.0;
            if (dVar53 != 1.797693134862316e+308) {
              dVar54 = dVar53;
            }
            objc_msgSend_setLastNearestTop_(dVar54,param_1);
            objc_msgSend_setLastRetractionPhase_(param_1,extraout_x1_74,uVar19);
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
      objc_msgSend_setApplying_(param_1,uVar12,0);
      objc_msgSend_reassertNativeTimeHidden(param_1);
      auVar76 = objc_msgSend_appliedChanges(param_1);
      objc_msgSend_setAppliedChanges_(param_1,auVar76._8_8_,auVar76._0_8_ + 1);
      dVar63 = (double)_CACurrentMediaTime();
      dVar63 = dVar63 - dVar51;
      dVar53 = (double)objc_msgSend_totalApplyTime(param_1);
      objc_msgSend_setTotalApplyTime_(dVar53 + dVar63,param_1);
      dVar66 = (double)objc_msgSend_peakApplyTime(param_1);
      dVar53 = dVar63;
      if (dVar63 <= dVar66) {
        dVar53 = dVar66;
      }
      objc_msgSend_setPeakApplyTime_(dVar53,param_1);
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
      objc_msgSend_reassertNativeTimeHidden(param_1);
      auVar76 = objc_msgSend_skippedChanges(param_1);
      objc_msgSend_setSkippedChanges_(param_1,auVar76._8_8_,auVar76._0_8_ + 1);
      dVar53 = (double)_CACurrentMediaTime();
      FUN_0000e530(dVar68 - dVar51,0,0,dVar53 - dVar68,dVar53 - dVar51,0);
    }
    objc_msgSend_emitSummaryIfNeeded(param_1);
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



// ===== 0x0000dd5c  FUN_0000dd5c

void FUN_0000dd5c(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  
  lVar1 = _objc_retain();
  if (lVar1 != 0) {
    _objc_opt_class(lVar1);
    _NSStringFromClass();
    auVar6 = _objc_retainAutoreleasedReturnValue();
    uVar2 = objc_msgSend_isEqualToString_(auVar6._0_8_,auVar6._8_8_,&cf__UIAnimatingLabel);
    _objc_release(auVar6._0_8_);
    if ((uVar2 & 1) == 0) {
      lVar3 = _objc_retain(lVar1);
      lVar5 = lVar3;
      do {
        _objc_opt_class(lVar5);
        _NSStringFromClass();
        auVar6 = _objc_retainAutoreleasedReturnValue();
        uVar2 = objc_msgSend_isEqualToString_(auVar6._0_8_,auVar6._8_8_,&cf_SBUILegibilityLabel);
        _objc_release(auVar6._0_8_);
        if ((uVar2 & 1) != 0) goto LAB_0000ddb4;
        objc_msgSend_superview(lVar5);
        lVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        lVar5 = lVar4;
      } while (lVar4 != 0);
      lVar5 = _objc_retain(lVar3);
      goto LAB_0000ddb4;
    }
  }
  lVar5 = 0;
LAB_0000ddb4:
  _objc_release(lVar1);
  _objc_autoreleaseReturnValue(lVar5);
  return;
}



// ===== 0x0000de50  FUN_0000de50

undefined8 FUN_0000de50(void)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  objc_msgSend_fontName();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = objc_msgSend_containsString_(auVar2._0_8_,auVar2._8_8_,&cf_SFAdaptiveSoftNumeric);
  _objc_release(auVar2._0_8_);
  return uVar1;
}



// ===== 0x0000de94  FUN_0000de94

void FUN_0000de94(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  if (param_1 == 0) {
    pcVar6 = &cf_nil;
  }
  else {
    uVar2 = _objc_retain();
    objc_msgSend_fontDescriptor();
    uVar3 = _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_00055ad8;
    objc_msgSend_fontName(uVar2);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_familyName(uVar2);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_pointSize(uVar2);
    _objc_release(uVar2);
    objc_msgSend_symbolicTraits(uVar3);
    objc_msgSend_fontAttributes(uVar3);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_objectForKeyedSubscript_
              (auVar7._0_8_,auVar7._8_8_,*(undefined8 *)PTR__kCTFontVariationAttribute_000503a8);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_stringWithFormat_
              (puVar1,auVar8._8_8_,&cf_name___family___size___2ftraits__luvariation___);
    pcVar6 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
    _objc_release(auVar8._0_8_);
    _objc_release(auVar7._0_8_);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_autoreleaseReturnValue(pcVar6);
  return;
}



// ===== 0x0000dfe0  FUN_0000dfe0

void FUN_0000dfe0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  
  uVar1 = _objc_retain();
  objc_msgSend_attributedText();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = objc_msgSend_length();
  _objc_release(uVar2);
  if (lVar3 != 0) {
    objc_msgSend_attributedText(uVar1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_attribute_atIndex_effectiveRange_
              (auVar5._0_8_,auVar5._8_8_,*(undefined8 *)PTR__NSFontAttributeName_000501e8,0,0);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar5._0_8_);
    if (lVar4 == 0) {
      objc_msgSend_attributedText(uVar1);
      auVar5 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_attribute_atIndex_effectiveRange_
                (auVar5._0_8_,auVar5._8_8_,*(undefined8 *)PTR__kCTFontAttributeName_00050398,0,0);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_release(auVar5._0_8_);
    }
    else {
      lVar3 = _objc_retain(lVar4);
    }
    _objc_release(lVar4);
  }
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(lVar3);
  return;
}



// ===== 0x0000e0d4  FUN_0000e0d4

void FUN_0000e0d4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined auVar15 [16];
  long local_150;
  undefined8 local_140;
  long lStack_138;
  long *local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined auStack_100 [128];
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000502b0;
  uVar2 = _objc_retain();
  objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_00055b50);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  FUN_00011c64(uVar2,uVar3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00055b50;
  auVar15 = objc_msgSend_count(uVar3);
  objc_msgSend_arrayWithCapacity_(puVar1,auVar15._8_8_,auVar15._0_8_);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  auVar15 = _objc_retain(uVar3);
  uVar3 = auVar15._0_8_;
  local_150 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,auVar15._8_8_,&local_140,auStack_100,0x10);
  if (local_150 != 0) {
    lVar12 = *local_130;
    do {
      lVar13 = 0;
      do {
        if (*local_130 != lVar12) {
          _objc_enumerationMutation(uVar3);
        }
        uVar14 = *(undefined8 *)(lStack_138 + lVar13 * 8);
        objc_msgSend_text(uVar14);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        lVar6 = objc_msgSend_length();
        if (lVar6 == 0) {
          objc_msgSend_attributedText(uVar14);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_string();
          uVar7 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
        }
        else {
          objc_msgSend_text(uVar14);
          uVar7 = _objc_retainAutoreleasedReturnValue();
        }
        _objc_release(uVar5);
        puVar1 = PTR__OBJC_CLASS___NSString_00055ad8;
        _objc_opt_class(uVar14);
        _NSStringFromClass();
        uVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_font(uVar14);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_fontName();
        uVar9 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_font(uVar14);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_pointSize();
        objc_msgSend_frame(uVar14);
        _NSStringFromCGRect();
        uVar11 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_isHidden(uVar14);
        objc_msgSend_alpha(uVar14);
        objc_msgSend_stringWithFormat_
                  (puVar1,extraout_x1,&cf___text___font_____2fframe___hidden__dalpha___2f);
        auVar15 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_addObject_(uVar4,auVar15._8_8_,auVar15._0_8_);
        _objc_release(auVar15._0_8_);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar5);
        _objc_release(uVar7);
        lVar13 = lVar13 + 1;
      } while (local_150 != lVar13);
      local_150 = objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,extraout_x1_00,&local_140,auStack_100,0x10);
    } while (local_150 != 0);
  }
  _objc_release(uVar3);
  objc_msgSend_componentsJoinedByString_(uVar4,extraout_x1_01,&cf__);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_80) {
    _objc_autoreleaseReturnValue(uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000e3f4  FUN_0000e3f4

void FUN_0000e3f4(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined auVar8 [16];
  
  lVar2 = _objc_retain();
  iVar1 = FUN_00011c1c();
  if (iVar1 == 0) {
    lVar3 = _objc_retain(lVar2);
    objc_msgSend_superview();
    lVar4 = _objc_retainAutoreleasedReturnValue();
    while (lVar4 != 0) {
      _objc_opt_class(lVar4);
      _NSStringFromClass();
      auVar8 = _objc_retainAutoreleasedReturnValue();
      uVar5 = auVar8._0_8_;
      auVar8 = objc_msgSend_isEqualToString_(uVar5,auVar8._8_8_,&cf_CSProminentDisplayView);
      if ((auVar8 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        _objc_release(uVar5);
        goto LAB_0000e4f8;
      }
      iVar1 = objc_msgSend_isEqualToString_(uVar5,auVar8._8_8_,&cf_CSCoverSheetView);
      lVar6 = lVar3;
      if (iVar1 != 0) {
        lVar6 = _objc_retain(lVar4);
        _objc_release(lVar3);
      }
      _objc_release(uVar5);
      objc_msgSend_superview(lVar4);
      lVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar3 = lVar6;
      lVar4 = lVar7;
    }
    lVar3 = _objc_retain(lVar3);
    lVar4 = lVar3;
  }
  else {
    objc_msgSend_superview(lVar2);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    if (lVar3 != 0) {
      lVar4 = lVar3;
    }
    lVar4 = _objc_retain(lVar4);
  }
LAB_0000e4f8:
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_autoreleaseReturnValue(lVar4);
  return;
}



// ===== 0x0000e530  FUN_0000e530

void FUN_0000e530(double param_1,double param_2,double param_3,double param_4,double param_5,
                 ulong param_6)

{
  int iVar1;
  double dVar2;
  
  iVar1 = _LGDebugLoggingEnabled();
  if (iVar1 != 0) {
    if (DAT_000561f8 == 0.0) {
      DAT_000561f8 = (double)_CACurrentMediaTime();
    }
    DAT_000561c0 = DAT_000561c0 + (param_6 & 0xffffffff);
    DAT_000561b8 = DAT_000561b8 + 1;
    DAT_000561c8 = DAT_000561c8 + param_1;
    DAT_000561d0 = DAT_000561d0 + param_2;
    DAT_000561d8 = DAT_000561d8 + param_3;
    DAT_000561e0 = DAT_000561e0 + param_4;
    DAT_000561e8 = DAT_000561e8 + param_5;
    if (param_5 <= DAT_000561f0) {
      param_5 = DAT_000561f0;
    }
    DAT_000561f0 = param_5;
    dVar2 = (double)_CACurrentMediaTime();
    if (1.0 <= dVar2 - DAT_000561f8) {
      _LGLog(&
             cf__CLKPROF_calls__luapplies__luobstacle___3fmsprepare___3fmspublish___3fmsfinish___3fmstotal___3fmspeak___3fms
            );
      DAT_000561e0 = 0.0;
      DAT_000561d8 = 0.0;
      DAT_000561f0 = 0.0;
      DAT_000561e8 = 0.0;
      DAT_000561c0 = 0;
      DAT_000561b8 = 0;
      DAT_000561d0 = 0.0;
      DAT_000561c8 = 0.0;
      DAT_000561f8 = dVar2;
    }
  }
  return;
}



// ===== 0x0000e66c  FUN_0000e66c

void FUN_0000e66c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _LG_prefString(&cf_Clock_CustomColor_Hex,&cf__FFFFFF);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_whiteColor(PTR__OBJC_CLASS___UIColor_00055b10);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  FUN_00011f98(uVar1,uVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}



// ===== 0x0000e6f0  LGClockState__emitSummaryIfNeeded

/* Function Stack Size: 0x10 bytes */

void LGClockState::LGClockState__emitSummaryIfNeeded(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  double dVar3;
  double dVar4;
  
  dVar3 = (double)_CACurrentMediaTime();
  dVar4 = (double)objc_msgSend_sampleStart(param_1);
  if (dVar3 - dVar4 < 2.0) {
    return;
  }
  objc_msgSend_host(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  _NSStringFromClass();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_layoutCalls(param_1);
  objc_msgSend_appliedChanges(param_1);
  objc_msgSend_skippedChanges(param_1);
  objc_msgSend_totalApplyTime(param_1);
  objc_msgSend_peakApplyTime(param_1);
  _LGLog(&cf_perfhost___layouts__luapplies__luskips__lutotal_ms___3fpeak_ms___3f);
  _objc_release(uVar2);
  _objc_release(uVar1);
  objc_msgSend_setLayoutCalls_(param_1,extraout_x1,0);
  objc_msgSend_setAppliedChanges_(param_1,extraout_x1_00,0);
  objc_msgSend_setSkippedChanges_(param_1,extraout_x1_01,0);
  objc_msgSend_setTotalApplyTime_(0,param_1);
  objc_msgSend_setPeakApplyTime_(0,param_1);
  objc_msgSend_setSampleStart_(dVar3,param_1);
  return;
}



// ===== 0x0000e84c  LGClockState__restore

/* Function Stack Size: 0x10 bytes */

void LGClockState::LGClockState__restore(ID param_1,SEL param_2)

{
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
    objc_msgSend_host(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_sourceLabel(param_1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _lgHostEnabled(&cf_Clock);
    objc_msgSend_applying(param_1);
    objc_msgSend_scheduled(param_1);
    objc_msgSend_sourceLabel(param_1);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_text();
    lVar5 = _objc_retainAutoreleasedReturnValue();
    local_90 = lVar5;
    if (lVar5 == 0) {
      objc_msgSend_sourceLabel(param_1);
      local_e8 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_attributedText();
      local_f0 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_string();
      local_90 = _objc_retainAutoreleasedReturnValue();
    }
    objc_msgSend_sourceLabel(param_1);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_font();
    uVar7 = _objc_retainAutoreleasedReturnValue();
    FUN_0000de94();
    uVar8 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_sourceLabel(param_1);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    FUN_0000dfe0();
    uVar10 = _objc_retainAutoreleasedReturnValue();
    FUN_0000de94();
    uVar11 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_originalFont(param_1);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    FUN_0000de94();
    uVar13 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_sourceLabel(param_1);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    _objc_getAssociatedObject(uVar14,PTR_LOOP_00055f28);
    uVar15 = _objc_retainAutoreleasedReturnValue();
    FUN_0000de94();
    uVar16 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_glassView(param_1);
    uVar17 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_sourceLabel(param_1);
    uVar18 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_alpha();
    objc_msgSend_sourceLabel(param_1);
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
  objc_msgSend_sourceLabel(param_1);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    uVar20 = objc_msgSend_applying(param_1);
    _objc_release(lVar5);
    if ((uVar20 & 1) == 0) {
      objc_msgSend_setApplying_(param_1,extraout_x1,1);
      objc_msgSend_originalFont(param_1);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 != 0) {
        objc_msgSend_originalFont(param_1);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_sourceLabel(param_1);
        auVar22 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setFont_(auVar22._0_8_,auVar22._8_8_,uVar2);
        _objc_release(auVar22._0_8_);
        _objc_release(uVar2);
      }
      uVar3 = objc_msgSend_originalLabelAlpha(param_1);
      objc_msgSend_sourceLabel(param_1);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setAlpha_(uVar3);
      _objc_release(uVar2);
      uVar2 = objc_msgSend_originalLabelHidden(param_1);
      objc_msgSend_sourceLabel(param_1);
      auVar22 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setHidden_(auVar22._0_8_,auVar22._8_8_,uVar2);
      _objc_release(auVar22._0_8_);
      objc_msgSend_setApplying_(param_1,extraout_x1_00,0);
    }
  }
  iVar1 = _LGDebugLoggingEnabled();
  if (iVar1 != 0) {
    objc_msgSend_sourceLabel(param_1);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      objc_msgSend_sourceLabel(param_1);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_sourceLabel(param_1);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_font();
      uVar4 = _objc_retainAutoreleasedReturnValue();
      FUN_0000de94();
      uVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_sourceLabel(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      FUN_0000dfe0();
      uVar8 = _objc_retainAutoreleasedReturnValue();
      FUN_0000de94();
      uVar9 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_sourceLabel(param_1);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_alpha();
      objc_msgSend_sourceLabel(param_1);
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
  objc_msgSend_visibleSourceView(param_1);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    auVar22 = objc_msgSend_applying(param_1);
    objc_msgSend_setApplying_(param_1,auVar22._8_8_,1);
    uVar2 = objc_msgSend_originalVisibleSourceHidden(param_1);
    objc_msgSend_visibleSourceView(param_1);
    auVar23 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setHidden_(auVar23._0_8_,auVar23._8_8_,uVar2);
    _objc_release(auVar23._0_8_);
    uVar3 = objc_msgSend_originalVisibleSourceAlpha(param_1);
    objc_msgSend_visibleSourceView(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setAlpha_(uVar3);
    _objc_release(uVar2);
    uVar21 = objc_msgSend_originalVisibleSourceLayerOpacity(param_1);
    objc_msgSend_visibleSourceView(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_layer();
    uVar3 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setOpacity_(uVar21);
    _objc_release(uVar3);
    _objc_release(uVar2);
    objc_msgSend_setApplying_(param_1,extraout_x1_01,auVar22._0_8_);
  }
  objc_msgSend_glassView(param_1);
  auVar22 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setMaskView_(auVar22._0_8_,auVar22._8_8_,0);
  _objc_release(auVar22._0_8_);
  objc_msgSend_glassView(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_removeFromSuperview();
  _objc_release(uVar2);
  objc_msgSend_pullBlurView(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_removeFromSuperview();
  _objc_release(uVar2);
  objc_msgSend_colorOverlayView(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_removeFromSuperview();
  _objc_release(uVar2);
  objc_msgSend_setGlassView_(param_1,extraout_x1_02,0);
  objc_msgSend_setPullBlurView_(param_1,extraout_x1_03,0);
  objc_msgSend_setColorOverlayView_(param_1,extraout_x1_04,0);
  objc_msgSend_setColorGradientLayer_(param_1,extraout_x1_05,0);
  objc_msgSend_setColorMaskView_(param_1,extraout_x1_06,0);
  objc_msgSend_setColorMaskLayer_(param_1,extraout_x1_07,0);
  objc_msgSend_setGlyphMaskView_(param_1,extraout_x1_08,0);
  objc_msgSend_setGlyphMaskLayer_(param_1,extraout_x1_09,0);
  objc_msgSend_setRenderContainer_(param_1,extraout_x1_10,0);
  objc_msgSend_setSourceLabel_(param_1,extraout_x1_11,0);
  objc_msgSend_setVisibleSourceView_(param_1,extraout_x1_12,0);
  objc_msgSend_setOriginalFont_(param_1,extraout_x1_13,0);
  objc_msgSend_setRenderCanvasSize_
            (*(undefined8 *)PTR__CGSizeZero_00050160,*(undefined8 *)(PTR__CGSizeZero_00050160 + 8),
             param_1);
  objc_msgSend_setHasRenderedGlyph_(param_1,extraout_x1_14,0);
  objc_msgSend_setComplicationLayoutShift_(0,param_1);
  objc_msgSend_setComplicationRow_(param_1,extraout_x1_15,0);
  objc_msgSend_host(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  FUN_0000e3f4();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setNeedsLayout();
  _objc_release(uVar3);
  _objc_release(uVar2);
  objc_msgSend_setLastSignature_(param_1,extraout_x1_16,0);
  objc_msgSend_setLastFontDiagnostic_(param_1,extraout_x1_17,0);
  return;
}



// ===== 0x0000f024  LGClockState__host

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__host(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + 0x18);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000f03c  LGClockState__setHost_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setHost_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0x18,param_3);
  return;
}



// ===== 0x0000f048  LGClockState__sourceLabel

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__sourceLabel(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + 0x20);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000f060  LGClockState__setSourceLabel_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setSourceLabel_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0x20,param_3);
  return;
}



// ===== 0x0000f06c  LGClockState__visibleSourceView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__visibleSourceView(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + 0x28);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000f084  LGClockState__setVisibleSourceView_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setVisibleSourceView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0x28,param_3);
  return;
}



// ===== 0x0000f090  LGClockState__originalFont

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__originalFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



// ===== 0x0000f098  LGClockState__setOriginalFont_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setOriginalFont_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x30,param_3);
  return;
}



// ===== 0x0000f0a4  LGClockState__originalLabelAlpha

/* Function Stack Size: 0x10 bytes */

double LGClockState::LGClockState__originalLabelAlpha(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x38);
}



// ===== 0x0000f0ac  LGClockState__setOriginalLabelAlpha_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setOriginalLabelAlpha_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x38) = param_3;
  return;
}



// ===== 0x0000f0b4  LGClockState__originalLabelHidden

/* Function Stack Size: 0x10 bytes */

bool LGClockState::LGClockState__originalLabelHidden(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



// ===== 0x0000f0bc  LGClockState__setOriginalLabelHidden_

/* Function Stack Size: 0x14 bytes */

void LGClockState::LGClockState__setOriginalLabelHidden_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}



// ===== 0x0000f0c4  LGClockState__originalVisibleSourceAlpha

/* Function Stack Size: 0x10 bytes */

double LGClockState::LGClockState__originalVisibleSourceAlpha(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x40);
}



// ===== 0x0000f0cc  LGClockState__setOriginalVisibleSourceAlpha_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setOriginalVisibleSourceAlpha_
               (ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x40) = param_3;
  return;
}



// ===== 0x0000f0d4  LGClockState__originalVisibleSourceLayerOpacity

/* Function Stack Size: 0x10 bytes */

float LGClockState::LGClockState__originalVisibleSourceLayerOpacity(ID param_1,SEL param_2)

{
  return *(float *)(param_1 + 0x10);
}



// ===== 0x0000f0dc  LGClockState__setOriginalVisibleSourceLayerOpacity_

/* Function Stack Size: 0x14 bytes */

void LGClockState::LGClockState__setOriginalVisibleSourceLayerOpacity_
               (ID param_1,SEL param_2,float param_3)

{
  *(float *)(param_1 + 0x10) = param_3;
  return;
}



// ===== 0x0000f0e4  LGClockState__originalVisibleSourceHidden

/* Function Stack Size: 0x10 bytes */

bool LGClockState::LGClockState__originalVisibleSourceHidden(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 9);
}



// ===== 0x0000f0ec  LGClockState__setOriginalVisibleSourceHidden_

/* Function Stack Size: 0x14 bytes */

void LGClockState::LGClockState__setOriginalVisibleSourceHidden_
               (ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}



// ===== 0x0000f0f4  LGClockState__glassView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__glassView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



// ===== 0x0000f0fc  LGClockState__setGlassView_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setGlassView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x48,param_3);
  return;
}



// ===== 0x0000f108  LGClockState__pullBlurView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__pullBlurView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



// ===== 0x0000f110  LGClockState__setPullBlurView_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setPullBlurView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x50,param_3);
  return;
}



// ===== 0x0000f11c  LGClockState__glyphMaskView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__glyphMaskView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}



// ===== 0x0000f124  LGClockState__setGlyphMaskView_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setGlyphMaskView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x58,param_3);
  return;
}



// ===== 0x0000f130  LGClockState__glyphMaskLayer

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__glyphMaskLayer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}



// ===== 0x0000f138  LGClockState__setGlyphMaskLayer_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setGlyphMaskLayer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x60,param_3);
  return;
}



// ===== 0x0000f144  LGClockState__colorOverlayView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__colorOverlayView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}



// ===== 0x0000f14c  LGClockState__setColorOverlayView_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setColorOverlayView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x68,param_3);
  return;
}



// ===== 0x0000f158  LGClockState__colorGradientLayer

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__colorGradientLayer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x70);
}



// ===== 0x0000f160  LGClockState__setColorGradientLayer_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setColorGradientLayer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x70,param_3);
  return;
}



// ===== 0x0000f16c  LGClockState__colorMaskView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__colorMaskView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x78);
}



// ===== 0x0000f174  LGClockState__setColorMaskView_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setColorMaskView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x78,param_3);
  return;
}



// ===== 0x0000f180  LGClockState__colorMaskLayer

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__colorMaskLayer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x80);
}



// ===== 0x0000f188  LGClockState__setColorMaskLayer_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setColorMaskLayer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x80,param_3);
  return;
}



// ===== 0x0000f194  LGClockState__renderContainer

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__renderContainer(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + 0x88);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000f1ac  LGClockState__setRenderContainer_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setRenderContainer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0x88,param_3);
  return;
}



// ===== 0x0000f1b8  LGClockState__originalLabelFrame

/* Function Stack Size: 0x10 bytes */

CGRect * LGClockState::LGClockState__originalLabelFrame
                   (CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  return __return_storage_ptr__;
}



// ===== 0x0000f1c4  LGClockState__setOriginalLabelFrame_

/* Function Stack Size: 0x30 bytes */

void LGClockState::LGClockState__setOriginalLabelFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  
  *(undefined8 *)(param_1 + 0x118) = in_d0;
  *(undefined8 *)(param_1 + 0x120) = in_d1;
  *(undefined8 *)(param_1 + 0x128) = in_d2;
  *(undefined8 *)(param_1 + 0x130) = in_d3;
  return;
}



// ===== 0x0000f1d0  LGClockState__renderCanvasSize

/* Function Stack Size: 0x10 bytes */

CGSize LGClockState::LGClockState__renderCanvasSize(ID param_1,SEL param_2)

{
  CGSize CVar1;
  
  CVar1.field1_0x8 = (double)param_2;
  CVar1.field0_0x0 = (double)param_1;
  return CVar1;
}



// ===== 0x0000f1d8  LGClockState__setRenderCanvasSize_

/* Function Stack Size: 0x20 bytes */

void LGClockState::LGClockState__setRenderCanvasSize_(ID param_1,SEL param_2,CGSize param_3)

{
  undefined8 in_d0;
  undefined8 in_d1;
  
  *(undefined8 *)(param_1 + 0x108) = in_d0;
  *(undefined8 *)(param_1 + 0x110) = in_d1;
  return;
}



// ===== 0x0000f1e0  LGClockState__renderedGlyphBottom

/* Function Stack Size: 0x10 bytes */

double LGClockState::LGClockState__renderedGlyphBottom(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x90);
}



// ===== 0x0000f1e8  LGClockState__setRenderedGlyphBottom_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setRenderedGlyphBottom_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x90) = param_3;
  return;
}



// ===== 0x0000f1f0  LGClockState__hasRenderedGlyph

/* Function Stack Size: 0x10 bytes */

bool LGClockState::LGClockState__hasRenderedGlyph(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 10);
}



// ===== 0x0000f1f8  LGClockState__setHasRenderedGlyph_

/* Function Stack Size: 0x14 bytes */

void LGClockState::LGClockState__setHasRenderedGlyph_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 10) = (char)param_3;
  return;
}



// ===== 0x0000f200  LGClockState__complicationLayoutShift

/* Function Stack Size: 0x10 bytes */

double LGClockState::LGClockState__complicationLayoutShift(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x98);
}



// ===== 0x0000f208  LGClockState__setComplicationLayoutShift_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setComplicationLayoutShift_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x98) = param_3;
  return;
}



// ===== 0x0000f210  LGClockState__complicationLastTop

/* Function Stack Size: 0x10 bytes */

double LGClockState::LGClockState__complicationLastTop(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0xa0);
}



// ===== 0x0000f218  LGClockState__setComplicationLastTop_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setComplicationLastTop_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0xa0) = param_3;
  return;
}



// ===== 0x0000f220  LGClockState__complicationRow

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__complicationRow(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + 0xa8);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000f238  LGClockState__setComplicationRow_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setComplicationRow_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0xa8,param_3);
  return;
}



// ===== 0x0000f244  LGClockState__applying

/* Function Stack Size: 0x10 bytes */

bool LGClockState::LGClockState__applying(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0xb);
}



// ===== 0x0000f24c  LGClockState__setApplying_

/* Function Stack Size: 0x14 bytes */

void LGClockState::LGClockState__setApplying_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 0xb) = (char)param_3;
  return;
}



// ===== 0x0000f254  LGClockState__scheduled

/* Function Stack Size: 0x10 bytes */

bool LGClockState::LGClockState__scheduled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0xc);
}



// ===== 0x0000f25c  LGClockState__setScheduled_

/* Function Stack Size: 0x14 bytes */

void LGClockState::LGClockState__setScheduled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 0xc) = (char)param_3;
  return;
}



// ===== 0x0000f264  LGClockState__layoutCalls

/* Function Stack Size: 0x10 bytes */

unsigned_long_long LGClockState::LGClockState__layoutCalls(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0xb0);
}



// ===== 0x0000f26c  LGClockState__setLayoutCalls_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setLayoutCalls_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0xb0) = param_3;
  return;
}



// ===== 0x0000f274  LGClockState__appliedChanges

/* Function Stack Size: 0x10 bytes */

unsigned_long_long LGClockState::LGClockState__appliedChanges(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0xb8);
}



// ===== 0x0000f27c  LGClockState__setAppliedChanges_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setAppliedChanges_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0xb8) = param_3;
  return;
}



// ===== 0x0000f284  LGClockState__skippedChanges

/* Function Stack Size: 0x10 bytes */

unsigned_long_long LGClockState::LGClockState__skippedChanges(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0xc0);
}



// ===== 0x0000f28c  LGClockState__setSkippedChanges_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setSkippedChanges_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0xc0) = param_3;
  return;
}



// ===== 0x0000f294  LGClockState__sampleStart

/* Function Stack Size: 0x10 bytes */

double LGClockState::LGClockState__sampleStart(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 200);
}



// ===== 0x0000f29c  LGClockState__setSampleStart_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setSampleStart_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 200) = param_3;
  return;
}



// ===== 0x0000f2a4  LGClockState__lastNearestObstacle

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__lastNearestObstacle(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_loadWeakRetained(param_1 + 0xd0);
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000f2bc  LGClockState__setLastNearestObstacle_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setLastNearestObstacle_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0xd0,param_3);
  return;
}



// ===== 0x0000f2c8  LGClockState__lastNearestTop

/* Function Stack Size: 0x10 bytes */

double LGClockState::LGClockState__lastNearestTop(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0xd8);
}



// ===== 0x0000f2d0  LGClockState__setLastNearestTop_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setLastNearestTop_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0xd8) = param_3;
  return;
}



// ===== 0x0000f2d8  LGClockState__lastRetractionPhase

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__lastRetractionPhase(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xe0);
}



// ===== 0x0000f2e0  LGClockState__setLastRetractionPhase_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setLastRetractionPhase_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x0000f2e8  LGClockState__totalApplyTime

/* Function Stack Size: 0x10 bytes */

double LGClockState::LGClockState__totalApplyTime(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0xe8);
}



// ===== 0x0000f2f0  LGClockState__setTotalApplyTime_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setTotalApplyTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0xe8) = param_3;
  return;
}



// ===== 0x0000f2f8  LGClockState__peakApplyTime

/* Function Stack Size: 0x10 bytes */

double LGClockState::LGClockState__peakApplyTime(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0xf0);
}



// ===== 0x0000f300  LGClockState__setPeakApplyTime_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setPeakApplyTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0xf0) = param_3;
  return;
}



// ===== 0x0000f308  LGClockState__lastSignature

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__lastSignature(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xf8);
}



// ===== 0x0000f310  LGClockState__setLastSignature_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setLastSignature_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x0000f318  LGClockState__lastFontDiagnostic

/* Function Stack Size: 0x10 bytes */

ID LGClockState::LGClockState__lastFontDiagnostic(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x100);
}



// ===== 0x0000f320  LGClockState__setLastFontDiagnostic_

/* Function Stack Size: 0x18 bytes */

void LGClockState::LGClockState__setLastFontDiagnostic_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x0000f328  LGClockState__pullBlurActive

/* Function Stack Size: 0x10 bytes */

bool LGClockState::LGClockState__pullBlurActive(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0xd);
}



// ===== 0x0000f330  LGClockState__setPullBlurActive_

/* Function Stack Size: 0x14 bytes */

void LGClockState::LGClockState__setPullBlurActive_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 0xd) = (char)param_3;
  return;
}



// ===== 0x0000f338  LGClockState__pullBlurKnown

/* Function Stack Size: 0x10 bytes */

bool LGClockState::LGClockState__pullBlurKnown(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0xe);
}



// ===== 0x0000f340  LGClockState__setPullBlurKnown_

/* Function Stack Size: 0x14 bytes */

void LGClockState::LGClockState__setPullBlurKnown_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 0xe) = (char)param_3;
  return;
}



// ===== 0x0000f348  LGClockState___cxx_destruct

/* Function Stack Size: 0x10 bytes */

void LGClockState::LGClockState___cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_destroyWeak(param_1 + 0xd0);
  _objc_destroyWeak(param_1 + 0xa8);
  _objc_destroyWeak(param_1 + 0x88);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_destroyWeak(param_1 + 0x18);
  return;
}



// ===== 0x0000f420  _LGScheduleClockRecoveryRefreshForPresentationChange

void _LGScheduleClockRecoveryRefreshForPresentationChange(void)

{
  undefined8 uVar1;
  
  objc_msgSend_shared(PTR_PTR_00055af0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_trackMotion();
  _objc_release(uVar1);
  return;
}



// ===== 0x0000f458  FUN_0000f458

void FUN_0000f458(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  
  lVar6 = _objc_getClass("MRUArtworkView");
  if (lVar6 != 0) {
    uVar7 = _objc_getClass("MRUArtworkView");
    _MSHookMessageEx(uVar7,PTR_s_layoutSubviews_000553d8,FUN_0000fe18,&DAT_00055fc0);
    _MSHookMessageEx(uVar7,PTR_s_didMoveToWindow_00055210,FUN_0000fe44,&DAT_00055fc8);
    uVar8 = _sel_registerName("dealloc");
    _MSHookMessageEx(uVar7,uVar8,FUN_0000fe70,&DAT_00055fd0);
  }
  objc_msgSend_mainBundle(PTR__OBJC_CLASS___NSBundle_00055b58);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_bundleIdentifier();
  auVar9 = _objc_retainAutoreleasedReturnValue();
  iVar5 = objc_msgSend_isEqualToString_(auVar9._0_8_,auVar9._8_8_,&cf_com_apple_springboard);
  _objc_release(auVar9._0_8_);
  _objc_release(uVar7);
  if (iVar5 != 0) {
    DAT_00055fb8 = _LGBackboardSafeModeActive();
    uVar7 = _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterAddObserver
              (uVar7,0,FUN_0000ff14,&cf_com_wkk_systembox_clockglass_BackboarddSafeMode,0,4);
    lVar6 = _objc_getClass("CSProminentLayoutController");
    puVar1 = PTR_s_complicationElementBoundingTopY_00055110;
    if ((lVar6 != 0) &&
       (lVar6 = _class_getClassMethod(lVar6,PTR_s_complicationElementBoundingTopY_00055110),
       lVar6 != 0)) {
      _objc_getClass("CSProminentLayoutController");
      uVar7 = _object_getClass();
      _MSHookMessageEx(uVar7,puVar1,FUN_0000ff28,&DAT_00055fd8);
    }
    objc_msgSend_currentDevice(PTR__OBJC_CLASS___UIDevice_00055b60);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_systemVersion();
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _NSClassFromString(&cf_CSProminentTimeView);
    _NSClassFromString(&cf_SBFLockScreenDateView);
    _NSClassFromString(&cf__UIAnimatingLabel);
    _lgHostEnabled(&cf_Clock);
    _LGLog(&
           cf_rewritectoros___sim__dfont___hostModern___hostLegacy___animLabel___enabled__dvariable__d
          );
    _objc_release(uVar8);
    _objc_release(uVar7);
    objc_msgSend_shared(PTR_PTR_00055ab8);
    _objc_unsafeClaimAutoreleasedReturnValue();
    objc_msgSend_defaultCenter(PTR__OBJC_CLASS___NSNotificationCenter_00055b68);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_mainQueue(PTR__OBJC_CLASS___NSOperationQueue_00055b70);
    auVar9 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_addObserverForName_object_queue_usingBlock_
              (uVar7,auVar9._8_8_,&cf_LGLiveBackdropViewFilterDidAttach,0,auVar9._0_8_,
               &PTR___NSConcreteGlobalBlock_00050678);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(auVar9._0_8_);
    _objc_release(uVar7);
    _lgObservePreferenceReload(&PTR___NSConcreteGlobalBlock_00050698);
    uVar7 = _objc_getClass("_UIAnimatingLabel");
    _MSHookMessageEx(uVar7,PTR_s_setFont__00055748,FUN_00010580,&DAT_00055fe0);
    puVar3 = PTR_s_setText__00055900;
    _MSHookMessageEx(uVar7,PTR_s_setText__00055900,FUN_0001070c,&DAT_00055fe8);
    puVar2 = PTR_s_setAttributedText__00055658;
    _MSHookMessageEx(uVar7,PTR_s_setAttributedText__00055658,FUN_00010750,&DAT_00055ff0);
    uVar7 = _objc_getClass("UILabel");
    puVar4 = PTR_s_setAlpha__00055640;
    _MSHookMessageEx(uVar7,PTR_s_setAlpha__00055640,FUN_00010794,&DAT_00055ff8);
    _MSHookMessageEx(uVar7,puVar3,FUN_0001089c,&DAT_00056000);
    _MSHookMessageEx(uVar7,puVar2,FUN_00010908,&DAT_00056008);
    uVar7 = _objc_getClass("SBUILegibilityLabel");
    _MSHookMessageEx(uVar7,puVar4,FUN_00010974,&DAT_00056010);
    uVar7 = _objc_getClass("CSProminentTimeView");
    puVar2 = PTR_s_didMoveToWindow_00055210;
    _MSHookMessageEx(uVar7,PTR_s_didMoveToWindow_00055210,FUN_00010ad0,&DAT_00056018);
    puVar3 = PTR_s_layoutSubviews_000553d8;
    _MSHookMessageEx(uVar7,PTR_s_layoutSubviews_000553d8,FUN_00010afc,&DAT_00056020);
    _MSHookMessageEx(uVar7,PTR_s__updateTimeString_00054fa8,FUN_00010b30,&DAT_00056028);
    _MSHookMessageEx(uVar7,PTR_s_setDate__00055710,FUN_00010b64,&DAT_00056030);
    uVar7 = _objc_getClass("CSProminentDisplayView");
    _MSHookMessageEx(uVar7,puVar3,FUN_00010b98,&DAT_00056038);
    uVar7 = _objc_getClass("CSProminentLayoutController");
    _MSHookMessageEx(uVar7,puVar1,FUN_00010ea8,&DAT_00056040);
    uVar7 = _objc_getClass("SBFLockScreenDateView");
    _MSHookMessageEx(uVar7,puVar2,FUN_00010ee4,&DAT_00056048);
    _MSHookMessageEx(uVar7,puVar3,FUN_00010f44,&DAT_00056050);
    _MSHookMessageEx(uVar7,PTR_s__updateLabelAlpha_00054f98,FUN_00010fc4,&DAT_00056058);
    _MSHookMessageEx(uVar7,PTR_s__updateLabels_00054fa0,FUN_00011014,&DAT_00056060);
    uVar7 = _objc_getClass("SBFLockScreenDateSubtitleDateView");
    _MSHookMessageEx(uVar7,puVar2,FUN_00011064,&DAT_00056068);
    _MSHookMessageEx(uVar7,puVar3,FUN_00011104,&DAT_00056070);
    uVar7 = _objc_getClass("PLPlatterView");
    _MSHookMessageEx(uVar7,puVar2,FUN_000111a4,&DAT_00056078);
    _MSHookMessageEx(uVar7,puVar3,FUN_000111d0,&DAT_00056080);
    uVar7 = _objc_getClass("NCNotificationShortLookView");
    _MSHookMessageEx(uVar7,puVar2,FUN_000111fc,&DAT_00056088);
    _MSHookMessageEx(uVar7,puVar3,FUN_0001124c,&DAT_00056090);
    uVar7 = _objc_getClass("NCNotificationLongLookView");
    _MSHookMessageEx(uVar7,puVar2,FUN_0001129c,&DAT_00056098);
    _MSHookMessageEx(uVar7,puVar3,FUN_000112ec,&DAT_000560a0);
    uVar7 = _objc_getClass("NCNotificationListSectionRevealHintView");
    _MSHookMessageEx(uVar7,puVar2,FUN_0001133c,&DAT_000560a8);
    _MSHookMessageEx(uVar7,puVar3,FUN_0001138c,&DAT_000560b0);
    uVar7 = _objc_getClass("NCNotificationListHeaderTitleView");
    _MSHookMessageEx(uVar7,puVar2,FUN_000113dc,&DAT_000560b8);
    _MSHookMessageEx(uVar7,puVar3,FUN_00011410,&DAT_000560c0);
    uVar7 = _objc_getClass("NCNotificationListSectionHeaderView");
    puVar1 = PTR_s_traitCollectionDidChange__00055a10;
    _MSHookMessageEx(uVar7,PTR_s_traitCollectionDidChange__00055a10,FUN_00011444,&DAT_000560c8);
    _MSHookMessageEx(uVar7,puVar2,FUN_00011478,&DAT_000560d0);
    _MSHookMessageEx(uVar7,puVar3,FUN_000114a4,&DAT_000560d8);
    _MSHookMessageEx(uVar7,PTR_s__configureClearButtonIfNecessary_00054f80,FUN_000114d0,
                     &DAT_000560e0);
    _MSHookMessageEx(uVar7,PTR_s_resetClearButtonStateAnimated__000555d0,FUN_000114fc,&DAT_000560e8)
    ;
    uVar7 = _objc_getClass("PLGlyphControl");
    _MSHookMessageEx(uVar7,PTR_s_setBackgroundMaterialView__00055680,FUN_00011528,&DAT_000560f0);
    _MSHookMessageEx(uVar7,PTR_s__configureBackgroundMaterialView_00054f78,FUN_000115a0,
                     &DAT_000560f8);
    _MSHookMessageEx(uVar7,PTR_s__configureGlyphViewIfNecessaryWi_00054f88,FUN_00011618,
                     &DAT_00056100);
    uVar7 = _objc_getClass("NCToggleControl");
    _MSHookMessageEx(uVar7,puVar1,FUN_00011690,&DAT_00056108);
    puVar1 = PTR_s_didMoveToSuperview_00055208;
    _MSHookMessageEx(uVar7,PTR_s_didMoveToSuperview_00055208,FUN_000116c4,&DAT_00056110);
    _MSHookMessageEx(uVar7,puVar2,FUN_000116f0,&DAT_00056118);
    _MSHookMessageEx(uVar7,puVar3,FUN_0001171c,&DAT_00056120);
    _MSHookMessageEx(uVar7,PTR_s_setVisualStyle__00055928,FUN_00011748,&DAT_00056128);
    uVar7 = _objc_getClass("UIImageView");
    _MSHookMessageEx(uVar7,puVar4,FUN_00011774,&DAT_00056130);
    uVar7 = _objc_getClass("MTMaterialView");
    _MSHookMessageEx(uVar7,puVar1,FUN_000117d8,&DAT_00056138);
    _MSHookMessageEx(uVar7,puVar2,FUN_0001181c,&DAT_00056140);
    _MSHookMessageEx(uVar7,puVar4,FUN_00011860,&DAT_00056148);
    uVar7 = _objc_getClass("NCNotificationListView");
    _MSHookMessageEx(uVar7,PTR_s_setFrame__00055750,FUN_000118c4,&DAT_00056150);
    _MSHookMessageEx(uVar7,PTR_s_setContentOffset__000556f0,FUN_0001198c,&DAT_00056158);
    _MSHookMessageEx(uVar7,puVar2,FUN_000119d0,&DAT_00056160);
    _MSHookMessageEx(uVar7,puVar3,FUN_000119fc,&DAT_00056168);
    uVar7 = _objc_getClass("NCNotificationStructuredListViewController");
    _MSHookMessageEx(uVar7,PTR_s_viewWillLayoutSubviews_00055a70,FUN_00011a28,&DAT_00056170);
    _MSHookMessageEx(uVar7,PTR_s_viewDidLayoutSubviews_00055a68,FUN_00011ab4,&DAT_00056178);
    return;
  }
  return;
}



// ===== 0x0000fe18  FUN_0000fe18

void FUN_0000fe18(undefined8 param_1)

{
  (*DAT_00055fc0)();
  FUN_00012434(param_1);
  return;
}



// ===== 0x0000fe44  FUN_0000fe44

void FUN_0000fe44(undefined8 param_1)

{
  (*DAT_00055fc8)();
  FUN_00012434(param_1);
  return;
}



// ===== 0x0000fe70  FUN_0000fe70

void FUN_0000fe70(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int local_34;
  
  iVar1 = FUN_00012928();
  if (iVar1 != 0) {
    if (DAT_000561b4 != '\x01') {
      local_34 = 0;
      iVar1 = _notify_register_check("com.wkk.systembox.clockglass.lensrect.npartwork",&local_34);
      if (iVar1 != 0) goto LAB_0000feec;
      DAT_000561b4 = '\x01';
      DAT_000561b0 = local_34;
    }
    if (-1 < DAT_000561b0) {
      _notify_set_state(DAT_000561b0,0);
    }
  }
LAB_0000feec:
  (*DAT_00055fd0)(param_1,param_2);
  return;
}



// ===== 0x0000ff14  FUN_0000ff14

void FUN_0000ff14(void)

{
  _dispatch_async(PTR___dispatch_main_q_000502c0,&PTR___NSConcreteGlobalBlock_00050738);
  return;
}



// ===== 0x0000ff28  FUN_0000ff28

double FUN_0000ff28(void)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(*DAT_00055fd8)();
  dVar2 = DAT_00056248;
  if (DAT_00056240 == '\0') {
    dVar2 = 0.0;
  }
  return dVar1 + dVar2;
}



// ===== 0x0000ff64  FUN_0000ff64

void FUN_0000ff64(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  long lVar7;
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000502b0;
  objc_msgSend_object(param_2);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  FUN_0000926c();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_allObjects();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                    (uVar3,extraout_x1,&local_120,auStack_d8,0x10);
  if (lVar4 != 0) {
    lVar6 = *local_110;
    do {
      lVar7 = 0;
      do {
        if (*local_110 != lVar6) {
          _objc_enumerationMutation(uVar3);
        }
        uVar2 = *(undefined8 *)(lStack_118 + lVar7 * 8);
        objc_msgSend_glassView(uVar2);
        lVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 == lVar1) {
          objc_msgSend_reassertNativeTimeHidden(uVar2);
          goto LAB_00010074;
        }
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,extraout_x1_00,&local_120,auStack_d8,0x10);
    } while (lVar4 != 0);
  }
LAB_00010074:
  _objc_release(uVar3);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_000502b0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x000100bc  FUN_000100bc

void FUN_000100bc(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
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
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  undefined auVar26 [16];
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  long local_250;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined auStack_170 [128];
  undefined auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000502b0;
  DAT_00055fb8 = _LGBackboardSafeModeActive();
  FUN_0000926c();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_allObjects();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar4 = _lgHostEnabled(&cf_Clock);
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = (long *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  FUN_00013c04();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_allObjects();
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar6 = objc_msgSend_countByEnumeratingWithState_objects_count_
                    (uVar5,extraout_x1,&local_1b0,auStack_f0,0x10);
  if (lVar6 != 0) {
    lVar23 = *local_1a0;
    do {
      lVar24 = 0;
      do {
        if (*local_1a0 != lVar23) {
          _objc_enumerationMutation(uVar5);
        }
        FUN_00013ac8(*(undefined8 *)(lStack_1a8 + lVar24 * 8));
        lVar24 = lVar24 + 1;
      } while (lVar6 != lVar24);
      lVar6 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar5,extraout_x1_00,&local_1b0,auStack_f0,0x10);
    } while (lVar6 != 0);
  }
  _objc_release(uVar5);
  objc_msgSend_count(uVar3);
  _LGLog(&cf_prefsreconcileenabled__dstates__lu);
  if ((uVar4 & 1) == 0) {
    uStack_1c8 = 0;
    local_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lStack_1e8 = 0;
    local_1f0 = 0;
    uStack_1d8 = 0;
    local_1e0 = (long *)0x0;
    auVar26 = _objc_retain(uVar3);
    uVar2 = auVar26._0_8_;
    local_250 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar2,auVar26._8_8_,&local_1f0,auStack_170,0x10);
    if (local_250 != 0) {
      lVar6 = *local_1e0;
      do {
        lVar23 = 0;
        do {
          if (*local_1e0 != lVar6) {
            _objc_enumerationMutation(uVar2);
          }
          uVar25 = *(undefined8 *)(lStack_1e8 + lVar23 * 8);
          objc_msgSend_host(uVar25);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_sourceLabel(uVar25);
          uVar7 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_window(uVar5);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_opt_class();
          _NSStringFromClass();
          uVar9 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_sourceLabel(uVar25);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_text();
          lVar24 = _objc_retainAutoreleasedReturnValue();
          if (lVar24 == 0) {
            objc_msgSend_sourceLabel(uVar25);
            local_268 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_attributedText();
            local_270 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_string();
            local_278 = _objc_retainAutoreleasedReturnValue();
          }
          objc_msgSend_sourceLabel(uVar25);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_font();
          uVar12 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94();
          uVar13 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_sourceLabel(uVar25);
          uVar14 = _objc_retainAutoreleasedReturnValue();
          FUN_0000dfe0();
          uVar15 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94();
          uVar16 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_originalFont(uVar25);
          uVar17 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94();
          uVar18 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_sourceLabel(uVar25);
          uVar19 = _objc_retainAutoreleasedReturnValue();
          _objc_getAssociatedObject(uVar19,PTR_LOOP_00055f28);
          uVar20 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94();
          uVar21 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_glassView(uVar25);
          uVar22 = _objc_retainAutoreleasedReturnValue();
          _LGLog(&
                 cf_prefsdisablerestoringstate__phost__psource__phostWindow___sourceText___sourceDirect_____sourceAttributed_____cached_____associated_____glass__p
                );
          _objc_release(uVar22);
          _objc_release(uVar21);
          _objc_release(uVar20);
          _objc_release(uVar19);
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar13);
          _objc_release(uVar12);
          _objc_release(uVar11);
          if (lVar24 == 0) {
            _objc_release(local_278);
            _objc_release(local_270);
            _objc_release(local_268);
          }
          _objc_release(lVar24);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          _objc_release(uVar7);
          objc_msgSend_restore(uVar25);
          iVar1 = FUN_00011c1c(uVar5);
          if (iVar1 != 0) {
            FUN_00013ed4(uVar5);
          }
          _objc_release(uVar5);
          lVar23 = lVar23 + 1;
        } while (local_250 != lVar23);
        local_250 = objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar2,extraout_x1_01,&local_1f0,auStack_170,0x10);
      } while (local_250 != 0);
    }
    _objc_release(uVar2);
  }
  FUN_0001299c();
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00010580  FUN_00010580

void FUN_00010580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  
  uVar2 = _objc_retain(param_3);
  iVar1 = _LGDebugLoggingEnabled();
  if (iVar1 != 0) {
    objc_msgSend_text(param_1);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      objc_msgSend_attributedText(param_1);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_string();
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar9 = FUN_00011e90();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((uVar9 & 1) == 0) goto LAB_0001067c;
    }
    else {
      iVar1 = FUN_00011e90();
      _objc_release(lVar3);
      if (iVar1 == 0) goto LAB_0001067c;
    }
    FUN_0000de94(uVar2);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_font(param_1);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    FUN_0000de94();
    uVar6 = _objc_retainAutoreleasedReturnValue();
    FUN_0000dfe0(param_1);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    FUN_0000de94();
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _LGLog(&cf_setFontenteringlabel__psupplied_____currentDirect_____currentAttributed_____);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
LAB_0001067c:
  (*DAT_00055fe0)(param_1,param_2,uVar2);
  FUN_00014368(param_1,uVar2,&cf_setFont);
  _objc_release(uVar2);
  return;
}



// ===== 0x0001070c  FUN_0001070c

void FUN_0001070c(undefined8 param_1)

{
  ulong uVar1;
  
  (*DAT_00055fe8)();
  uVar1 = FUN_00014a74(param_1);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00014b74(param_1);
  return;
}



// ===== 0x00010750  FUN_00010750

void FUN_00010750(undefined8 param_1)

{
  ulong uVar1;
  
  (*DAT_00055ff0)();
  uVar1 = FUN_00014a74(param_1);
  if ((uVar1 & 1) != 0) {
    return;
  }
  FUN_00014b74(param_1);
  return;
}



// ===== 0x00010794  FUN_00010794

void FUN_00010794(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined auVar8 [16];
  
  uVar2 = _objc_retain();
  objc_msgSend_superview();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  _NSStringFromClass();
  auVar8 = _objc_retainAutoreleasedReturnValue();
  uVar4 = auVar8._0_8_;
  uVar5 = objc_msgSend_isEqualToString_(uVar4,auVar8._8_8_,&cf_NCNotificationListHeaderTitleView);
  if ((uVar5 & 1) == 0) {
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    objc_msgSend_superview(uVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    FUN_00013a1c();
    lVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar3);
    if (lVar7 != 0) {
      uVar3 = 1;
      goto LAB_00010858;
    }
  }
  uVar3 = FUN_00015128(uVar2);
LAB_00010858:
  pcVar1 = DAT_00055ff8;
  FUN_00015368(param_1,uVar2,uVar3);
  FUN_0001523c(uVar2);
  (*pcVar1)(uVar2,param_3);
  _objc_release(uVar2);
  return;
}



// ===== 0x0001089c  FUN_0001089c

void FUN_0001089c(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  (*DAT_00056000)();
  uVar2 = FUN_00014a74(param_1);
  if ((((uVar2 & 1) == 0) && (iVar1 = FUN_0001a7a8(2,0x10,0,0), iVar1 == 0)) &&
     (iVar1 = FUN_00011db4(param_1,0), iVar1 != 0)) {
    FUN_00014b74(param_1);
    return;
  }
  return;
}



// ===== 0x00010908  FUN_00010908

void FUN_00010908(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  
  (*DAT_00056008)();
  uVar2 = FUN_00014a74(param_1);
  if ((((uVar2 & 1) == 0) && (iVar1 = FUN_0001a7a8(2,0x10,0,0), iVar1 == 0)) &&
     (iVar1 = FUN_00011db4(param_1,0), iVar1 != 0)) {
    FUN_00014b74(param_1);
    return;
  }
  return;
}



// ===== 0x00010974  FUN_00010974

void FUN_00010974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  _objc_retain();
  pcVar1 = DAT_00056010;
  uVar4 = _objc_retain();
  _objc_opt_class();
  _NSStringFromClass();
  auVar9 = _objc_retainAutoreleasedReturnValue();
  iVar3 = objc_msgSend_isEqualToString_(auVar9._0_8_,auVar9._8_8_,&cf_SBUILegibilityLabel);
  if (iVar3 == 0) {
    bVar2 = false;
  }
  else {
    objc_msgSend_superview(uVar4);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_opt_class();
    _NSStringFromClass();
    auVar10 = _objc_retainAutoreleasedReturnValue();
    iVar3 = objc_msgSend_isEqualToString_
                      (auVar10._0_8_,auVar10._8_8_,&cf_NCNotificationListHeaderTitleView);
    if (iVar3 == 0) {
      bVar2 = false;
    }
    else {
      objc_msgSend_superview(uVar4);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_superview();
      uVar7 = _objc_retainAutoreleasedReturnValue();
      FUN_00013a1c();
      lVar8 = _objc_retainAutoreleasedReturnValue();
      bVar2 = lVar8 != 0;
      _objc_release();
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
    _objc_release(auVar10._0_8_);
    _objc_release(uVar5);
  }
  _objc_release(auVar9._0_8_);
  _objc_release(uVar4);
  FUN_00015368(param_1,uVar4,bVar2);
  FUN_0001523c(uVar4);
  (*pcVar1)(uVar4,param_3);
  _objc_release(uVar4);
  return;
}



// ===== 0x00010ad0  FUN_00010ad0

void FUN_00010ad0(undefined8 param_1)

{
  (*DAT_00056018)();
  FUN_00015434(param_1);
  return;
}



// ===== 0x00010afc  FUN_00010afc

void FUN_00010afc(undefined8 param_1)

{
  (*DAT_00056020)();
  FUN_000155ac(param_1);
  FUN_00015654(param_1);
  return;
}



// ===== 0x00010b30  FUN_00010b30

void FUN_00010b30(undefined8 param_1)

{
  (*DAT_00056028)();
  FUN_000155ac(param_1);
  FUN_00015654(param_1);
  return;
}



// ===== 0x00010b64  FUN_00010b64

void FUN_00010b64(undefined8 param_1)

{
  (*DAT_00056030)();
  FUN_000155ac(param_1);
  FUN_00015654(param_1);
  return;
}



// ===== 0x00010b98  FUN_00010b98

void FUN_00010b98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined auVar15 [16];
  
  uVar6 = _objc_retain();
  FUN_000141cc(uVar6,&cf_CSProminentTimeView);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  FUN_00012da8(uVar7,0);
  lVar8 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_complicationRowView_00055130;
  auVar15 = _objc_opt_respondsToSelector(uVar6,PTR_s_complicationRowView_00055130);
  if ((auVar15 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    lVar9 = 0;
  }
  else {
    objc_msgSend_performSelector_(uVar6,auVar15._8_8_,puVar1);
    lVar9 = _objc_retainAutoreleasedReturnValue();
    if (lVar9 != 0) {
      objc_msgSend_bounds(lVar9);
      objc_msgSend_convertRect_toView_(lVar9,extraout_x1,uVar6);
      dVar12 = (double)_CGRectGetMinY();
      bVar4 = false;
      goto LAB_00010c60;
    }
  }
  bVar4 = true;
  dVar12 = NAN;
LAB_00010c60:
  iVar5 = _lgHostEnabled(&cf_Clock);
  dVar14 = 0.0;
  if ((iVar5 != 0) && (iVar5 = objc_msgSend_hasRenderedGlyph(lVar8), iVar5 != 0)) {
    objc_msgSend_window(lVar9);
    lVar10 = _objc_retainAutoreleasedReturnValue();
    if ((lVar10 == 0) ||
       ((uVar11 = objc_msgSend_isHidden(lVar9), (uVar11 & 1) != 0 ||
        (dVar13 = (double)objc_msgSend_alpha(lVar9), dVar13 <= DAT_0001e290)))) {
      _objc_release(lVar10);
    }
    else {
      objc_msgSend_bounds(lVar9);
      dVar13 = (double)_CGRectGetHeight();
      _objc_release(lVar10);
      if (0.0 < dVar13) {
        objc_msgSend_complicationRow(lVar8);
        lVar10 = _objc_retainAutoreleasedReturnValue();
        dVar14 = 0.0;
        if (lVar10 == lVar9) {
          dVar13 = (double)objc_msgSend_complicationLastTop(lVar8);
          dVar14 = 0.0;
          if (ABS(dVar12 - dVar13) < 1.0) {
            dVar14 = (double)objc_msgSend_complicationLayoutShift(lVar8);
          }
        }
        _objc_release(lVar10);
        dVar12 = dVar12 - dVar14;
        dVar14 = (double)objc_msgSend_renderedGlyphBottom(lVar8);
        dVar14 = (dVar14 + 12.0) - dVar12;
      }
    }
  }
  uVar3 = DAT_00056248;
  uVar2 = DAT_00056240;
  DAT_00056240 = 1;
  DAT_00056248 = dVar14;
  (*DAT_00056038)(uVar6,param_2);
  if (bVar4) {
    dVar13 = NAN;
  }
  else {
    objc_msgSend_bounds(lVar9);
    objc_msgSend_convertRect_toView_(lVar9,extraout_x1_00,uVar6);
    dVar13 = (double)_CGRectGetMinY();
  }
  bVar4 = false;
  if ((0.0 < dVar14) && (ABS(dVar13) != INFINITY)) {
    bVar4 = ABS(dVar13 - (dVar14 + dVar12)) < 1.0;
  }
  DAT_00056240 = uVar2;
  DAT_00056248 = (double)uVar3;
  if (lVar8 != 0) {
    if (!bVar4) {
      dVar14 = 0.0;
    }
    objc_msgSend_setComplicationLayoutShift_(dVar14,lVar8);
    objc_msgSend_setComplicationRow_(lVar8,extraout_x1_01,lVar9);
    dVar12 = 0.0;
    if (ABS(dVar13) != INFINITY) {
      dVar12 = dVar13;
    }
    objc_msgSend_setComplicationLastTop_(dVar12,lVar8);
    iVar5 = _lgHostEnabled(&cf_Clock);
    if (iVar5 != 0) {
      auVar15 = objc_msgSend_hasRenderedGlyph(lVar8);
      if ((auVar15 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        objc_msgSend_scheduleApply_(lVar8,auVar15._8_8_,&cf_complication_layout);
      }
    }
  }
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  return;
}



// ===== 0x00010ea8  FUN_00010ea8

double FUN_00010ea8(void)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (double)(*DAT_00056040)();
  dVar2 = DAT_00056248;
  if (DAT_00056240 == '\0') {
    dVar2 = 0.0;
  }
  return dVar1 + dVar2;
}



// ===== 0x00010ee4  FUN_00010ee4

void FUN_00010ee4(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  (*DAT_00056048)();
  uVar2 = _objc_retain(param_1);
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 == 0) {
    FUN_00013ed4(uVar2);
  }
  FUN_00015434(uVar2);
  _objc_release(uVar2);
  return;
}



// ===== 0x00010f44  FUN_00010f44

void FUN_00010f44(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  (*DAT_00056050)();
  uVar2 = _objc_retain(param_1);
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 == 0) {
    FUN_00013ed4(uVar2);
  }
  FUN_000155ac(uVar2);
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 == 0) {
    FUN_00015654(uVar2);
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x00010fc4  FUN_00010fc4

void FUN_00010fc4(undefined8 param_1)

{
  int iVar1;
  
  (*DAT_00056058)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_00015654(param_1);
  return;
}



// ===== 0x00011014  FUN_00011014

void FUN_00011014(undefined8 param_1)

{
  int iVar1;
  
  (*DAT_00056060)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_00015654(param_1);
  return;
}



// ===== 0x00011064  FUN_00011064

void FUN_00011064(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  (*DAT_00056068)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 == 0) {
    objc_msgSend_superview(param_1);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    while ((lVar2 != 0 && (uVar3 = FUN_00011c1c(lVar2), (uVar3 & 1) == 0))) {
      objc_msgSend_superview(lVar2);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar4;
    }
    FUN_00013ed4(lVar2);
    _objc_release(lVar2);
    return;
  }
  return;
}



// ===== 0x00011104  FUN_00011104

void FUN_00011104(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  
  (*DAT_00056070)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 == 0) {
    objc_msgSend_superview(param_1);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    while ((lVar2 != 0 && (uVar3 = FUN_00011c1c(lVar2), (uVar3 & 1) == 0))) {
      objc_msgSend_superview(lVar2);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      lVar2 = lVar4;
    }
    FUN_00013ed4(lVar2);
    _objc_release(lVar2);
    return;
  }
  return;
}



// ===== 0x000111a4  FUN_000111a4

void FUN_000111a4(undefined8 param_1)

{
  (*DAT_00056078)();
  FUN_000156c8(param_1);
  return;
}



// ===== 0x000111d0  FUN_000111d0

void FUN_000111d0(undefined8 param_1)

{
  (*DAT_00056080)();
  FUN_000156c8(param_1);
  return;
}



// ===== 0x000111fc  FUN_000111fc

void FUN_000111fc(undefined8 param_1)

{
  int iVar1;
  
  (*DAT_00056088)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_000156c8(param_1);
  return;
}



// ===== 0x0001124c  FUN_0001124c

void FUN_0001124c(undefined8 param_1)

{
  int iVar1;
  
  (*DAT_00056090)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_000156c8(param_1);
  return;
}



// ===== 0x0001129c  FUN_0001129c

void FUN_0001129c(undefined8 param_1)

{
  int iVar1;
  
  (*DAT_00056098)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_000156c8(param_1);
  return;
}



// ===== 0x000112ec  FUN_000112ec

void FUN_000112ec(undefined8 param_1)

{
  int iVar1;
  
  (*DAT_000560a0)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_000156c8(param_1);
  return;
}



// ===== 0x0001133c  FUN_0001133c

void FUN_0001133c(undefined8 param_1)

{
  int iVar1;
  
  (*DAT_000560a8)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_000156c8(param_1);
  return;
}



// ===== 0x0001138c  FUN_0001138c

void FUN_0001138c(undefined8 param_1)

{
  int iVar1;
  
  (*DAT_000560b0)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  FUN_000156c8(param_1);
  return;
}



// ===== 0x000113dc  FUN_000113dc

void FUN_000113dc(undefined8 param_1)

{
  (*DAT_000560b8)();
  FUN_00013030(param_1);
  FUN_000156c8(param_1);
  return;
}



// ===== 0x00011410  FUN_00011410

void FUN_00011410(undefined8 param_1)

{
  (*DAT_000560c0)();
  FUN_00013030(param_1);
  FUN_000156c8(param_1);
  return;
}



// ===== 0x00011444  FUN_00011444

void FUN_00011444(undefined8 param_1)

{
  (*DAT_000560c8)();
  FUN_00015734(param_1);
  FUN_00015808(param_1);
  return;
}



// ===== 0x00011478  FUN_00011478

void FUN_00011478(undefined8 param_1)

{
  (*DAT_000560d0)();
  FUN_00015734(param_1);
  return;
}



// ===== 0x000114a4  FUN_000114a4

void FUN_000114a4(undefined8 param_1)

{
  (*DAT_000560d8)();
  FUN_00015734(param_1);
  return;
}



// ===== 0x000114d0  FUN_000114d0

void FUN_000114d0(undefined8 param_1)

{
  (*DAT_000560e0)();
  FUN_00015734(param_1);
  return;
}



// ===== 0x000114fc  FUN_000114fc

void FUN_000114fc(undefined8 param_1)

{
  (*DAT_000560e8)();
  FUN_00015734(param_1);
  return;
}



// ===== 0x00011528  FUN_00011528

void FUN_00011528(undefined8 param_1)

{
  int iVar1;
  undefined auVar2 [16];
  
  (*DAT_000560f0)();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_isEqualToString_(auVar2._0_8_,auVar2._8_8_,&cf_NCToggleControl);
  _objc_release(auVar2._0_8_);
  if (iVar1 != 0) {
    FUN_00013228(param_1);
    return;
  }
  return;
}



// ===== 0x000115a0  FUN_000115a0

void FUN_000115a0(undefined8 param_1)

{
  int iVar1;
  undefined auVar2 [16];
  
  (*DAT_000560f8)();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_isEqualToString_(auVar2._0_8_,auVar2._8_8_,&cf_NCToggleControl);
  _objc_release(auVar2._0_8_);
  if (iVar1 != 0) {
    FUN_00013228(param_1);
    return;
  }
  return;
}



// ===== 0x00011618  FUN_00011618

void FUN_00011618(undefined8 param_1)

{
  int iVar1;
  undefined auVar2 [16];
  
  (*DAT_00056100)();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_isEqualToString_(auVar2._0_8_,auVar2._8_8_,&cf_NCToggleControl);
  _objc_release(auVar2._0_8_);
  if (iVar1 != 0) {
    FUN_00013228(param_1);
    return;
  }
  return;
}



// ===== 0x00011690  FUN_00011690

void FUN_00011690(undefined8 param_1)

{
  (*DAT_00056108)();
  FUN_00013228(param_1);
  FUN_00015808(param_1);
  return;
}



// ===== 0x000116c4  FUN_000116c4

void FUN_000116c4(undefined8 param_1)

{
  (*DAT_00056110)();
  FUN_00013228(param_1);
  return;
}



// ===== 0x000116f0  FUN_000116f0

void FUN_000116f0(undefined8 param_1)

{
  (*DAT_00056118)();
  FUN_00013228(param_1);
  return;
}



// ===== 0x0001171c  FUN_0001171c

void FUN_0001171c(undefined8 param_1)

{
  (*DAT_00056120)();
  FUN_00013228(param_1);
  return;
}



// ===== 0x00011748  FUN_00011748

void FUN_00011748(undefined8 param_1)

{
  (*DAT_00056128)();
  FUN_00013228(param_1);
  return;
}



// ===== 0x00011774  FUN_00011774

void FUN_00011774(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = DAT_00056130;
  uVar2 = _objc_retain();
  uVar3 = FUN_00015128();
  FUN_00015368(param_1,uVar2,uVar3);
  (*pcVar1)(uVar2,param_3);
  _objc_release(uVar2);
  return;
}



// ===== 0x000117d8  FUN_000117d8

void FUN_000117d8(undefined8 param_1)

{
  int iVar1;
  
  (*DAT_00056138)();
  iVar1 = FUN_00015128(param_1);
  if (iVar1 != 0) {
    FUN_00013ac8(param_1);
    return;
  }
  return;
}



// ===== 0x0001181c  FUN_0001181c

void FUN_0001181c(undefined8 param_1)

{
  int iVar1;
  
  (*DAT_00056140)();
  iVar1 = FUN_00015128(param_1);
  if (iVar1 != 0) {
    FUN_00013ac8(param_1);
    return;
  }
  return;
}



// ===== 0x00011860  FUN_00011860

void FUN_00011860(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = DAT_00056148;
  uVar2 = _objc_retain();
  uVar3 = FUN_00015128();
  FUN_00015368(param_1,uVar2,uVar3);
  (*pcVar1)(uVar2,param_3);
  _objc_release(uVar2);
  return;
}



// ===== 0x000118c4  FUN_000118c4

void FUN_000118c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar1 = _objc_retain();
  _objc_getAssociatedObject(uVar1,PTR_LOOP_00055f48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = objc_msgSend_boolValue();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    param_1 = FUN_00013670(param_1,param_2,param_3,param_4,uVar1);
  }
  (*DAT_00056150)(param_1,param_2,param_3,param_4,uVar1,param_6);
  _objc_release(uVar1);
  return;
}



// ===== 0x0001198c  FUN_0001198c

void FUN_0001198c(void)

{
  undefined8 uVar1;
  
  (*DAT_00056158)();
  objc_msgSend_shared(PTR_PTR_00055af0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_trackMotion();
  _objc_release(uVar1);
  return;
}



// ===== 0x000119d0  FUN_000119d0

void FUN_000119d0(undefined8 param_1)

{
  (*DAT_00056160)();
  FUN_00012f28(param_1);
  return;
}



// ===== 0x000119fc  FUN_000119fc

void FUN_000119fc(undefined8 param_1)

{
  (*DAT_00056168)();
  FUN_00012f28(param_1);
  return;
}



// ===== 0x00011a28  FUN_00011a28

void FUN_00011a28(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  (*DAT_00056170)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  objc_msgSend_view(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  FUN_000141cc(uVar2,&cf_NCNotificationListView);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  FUN_00012f28(uVar3);
  _objc_release(uVar3);
  return;
}



// ===== 0x00011ab4  FUN_00011ab4

void FUN_00011ab4(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  (*DAT_00056178)();
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  objc_msgSend_view(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  FUN_000141cc(uVar2,&cf_NCNotificationListView);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  FUN_00012f28(uVar3);
  _objc_release(uVar3);
  return;
}



// ===== 0x00011b40  FUN_00011b40

void FUN_00011b40(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  Bytef *dest;
  uLongf local_28;
  
  objc_msgSend_dataWithLength_(PTR__OBJC_CLASS___NSMutableData_00055b78,param_2,0x72aa4);
  _objc_retainAutoreleasedReturnValue();
  local_28 = 0x72aa4;
  uVar2 = _objc_retainAutorelease();
  dest = (Bytef *)objc_msgSend_mutableBytes();
  iVar1 = _uncompress(dest,&local_28,&DAT_0001e2f0,0x2c461);
  if (iVar1 == 0 && local_28 == 0x72aa4) {
    _objc_storeStrong(&DAT_00056180,uVar2);
  }
  else {
    _LGLog(&cf_embeddedfontinflatefailedstatus__dbytes__lu);
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x00011be8  FUN_00011be8

void FUN_00011be8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_00056190;
  DAT_00056190 = uVar2;
  _objc_release(uVar1);
  return;
}



// ===== 0x00011c1c  FUN_00011c1c

undefined8 FUN_00011c1c(void)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  _objc_opt_class();
  _NSStringFromClass();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = objc_msgSend_isEqualToString_(auVar2._0_8_,auVar2._8_8_,&cf_SBFLockScreenDateView);
  _objc_release(auVar2._0_8_);
  return uVar1;
}



// ===== 0x00011c64  FUN_00011c64

void FUN_00011c64(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 extraout_x1;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000502b0;
  uVar1 = _objc_retain();
  uVar2 = _objc_retain(param_2);
  uVar3 = _objc_opt_class(PTR__OBJC_CLASS___UILabel_00055b88);
  auVar7 = _objc_opt_isKindOfClass(uVar1,uVar3);
  if ((auVar7 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_addObject_(uVar2,auVar7._8_8_,uVar1);
  }
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  objc_msgSend_subviews(uVar1);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  uVar3 = auVar7._0_8_;
  lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                    (uVar3,auVar7._8_8_,&local_120,auStack_d8,0x10);
  if (lVar4 != 0) {
    lVar5 = *local_110;
    do {
      lVar6 = 0;
      do {
        if (*local_110 != lVar5) {
          _objc_enumerationMutation(uVar3);
        }
        FUN_00011c64(*(undefined8 *)(lStack_118 + lVar6 * 8),uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,extraout_x1,&local_120,auStack_d8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00011db4  FUN_00011db4

ulong FUN_00011db4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined auVar5 [16];
  
  lVar1 = _objc_retain(param_2);
  objc_msgSend_superview(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  uVar4 = 0;
  lVar3 = lVar2;
  if ((lVar2 != 0) && (lVar2 != lVar1)) {
    while( true ) {
      _objc_opt_class(lVar2);
      _NSStringFromClass();
      auVar5 = _objc_retainAutoreleasedReturnValue();
      uVar4 = objc_msgSend_isEqualToString_(auVar5._0_8_,auVar5._8_8_,&cf_SBUILegibilityLabel);
      _objc_release(auVar5._0_8_);
      lVar3 = lVar2;
      if ((uVar4 & 1) != 0) break;
      objc_msgSend_superview(lVar2);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      if ((lVar3 == 0) || (lVar2 = lVar3, lVar3 == lVar1)) break;
    }
  }
  _objc_release(lVar3);
  _objc_release(lVar1);
  return uVar4;
}



// ===== 0x00011e90  FUN_00011e90

bool FUN_00011e90(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  
  uVar2 = _objc_retain();
  auVar4 = objc_msgSend_length();
  if ((auVar4._0_8_ == 0) ||
     (lVar3 = objc_msgSend_rangeOfString_(uVar2,auVar4._8_8_,&cf__), lVar3 == 0x7fffffffffffffff)) {
    bVar1 = false;
  }
  else {
    objc_msgSend_decimalDigitCharacterSet(PTR__OBJC_CLASS___NSCharacterSet_00055b90);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    lVar3 = objc_msgSend_rangeOfCharacterFromSet_(uVar2,auVar4._8_8_,auVar4._0_8_);
    bVar1 = lVar3 != 0x7fffffffffffffff;
    _objc_release(auVar4._0_8_);
  }
  _objc_release(uVar2);
  return bVar1;
}



// ===== 0x00011f24  FUN_00011f24

void FUN_00011f24(void)

{
  if (DAT_000561a8 != -1) {
    _dispatch_once(&DAT_000561a8,&PTR___NSConcreteGlobalBlock_000506f8);
  }
  _objc_retainAutoreleaseReturnValue(DAT_000561a0);
  return;
}



// ===== 0x00011f64  FUN_00011f64

void FUN_00011f64(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_000561a0;
  DAT_000561a0 = uVar2;
  _objc_release(uVar1);
  return;
}



// ===== 0x00011f98  FUN_00011f98

void FUN_00011f98(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  double *pdVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  uint local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000502b0;
  uVar4 = _objc_retain();
  _objc_retain(param_2);
  uVar5 = _objc_retain();
  uVar6 = _objc_opt_class(PTR__OBJC_CLASS___NSString_00055ad8);
  uVar7 = _objc_opt_isKindOfClass(uVar4,uVar6);
  if ((uVar7 & 1) == 0) {
    uVar6 = _objc_retain(uVar5);
    goto LAB_000122cc;
  }
  objc_msgSend_whitespaceAndNewlineCharacterSet(PTR__OBJC_CLASS___NSCharacterSet_00055b90);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_stringByTrimmingCharactersInSet_(uVar4,auVar13._8_8_,auVar13._0_8_);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar13._0_8_);
  auVar13 = objc_msgSend_hasPrefix_(uVar8,extraout_x1,&cf_p3_);
  iVar3 = objc_msgSend_hasPrefix_(uVar8,auVar13._8_8_,&cf_srgb_);
  if (((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) && (iVar3 == 0)) {
    objc_msgSend_stringByReplacingOccurrencesOfString_withString_(uVar8,extraout_x1_00,&cf__,&cf___)
    ;
    uVar9 = _objc_retainAutoreleasedReturnValue();
    auVar13 = objc_msgSend_length();
    uVar6 = auVar13._8_8_;
    if (auVar13._0_8_ != 6) {
      auVar13 = objc_msgSend_length(uVar9);
      uVar6 = auVar13._8_8_;
      if (auVar13._0_8_ != 8) goto LAB_00012284;
    }
    local_88 = 0;
    objc_msgSend_scannerWithString_(PTR__OBJC_CLASS___NSScanner_00055b98,uVar6,uVar9);
    auVar13 = _objc_retainAutoreleasedReturnValue();
    uVar11 = auVar13._0_8_;
    iVar3 = objc_msgSend_scanHexInt_(uVar11,auVar13._8_8_,&local_88);
    if ((iVar3 == 0) || (uVar7 = objc_msgSend_isAtEnd(uVar11), (uVar7 & 1) == 0)) {
      uVar6 = _objc_retain(uVar5);
    }
    else {
      lVar10 = objc_msgSend_length(uVar9);
      if (lVar10 == 6) {
        local_88 = local_88 << 8 | 0xff;
      }
      objc_msgSend_colorWithRed_green_blue_alpha_
                ((double)(ulong)(local_88 >> 0x18) / DAT_0001e288,
                 (double)(ulong)(local_88 >> 0x10 & 0xff) / DAT_0001e288,
                 (double)(ulong)(local_88 >> 8 & 0xff) / DAT_0001e288,
                 (double)(ulong)(local_88 & 0xff) / DAT_0001e288,PTR__OBJC_CLASS___UIColor_00055b10)
      ;
      uVar6 = _objc_retainAutoreleasedReturnValue();
    }
LAB_000122b8:
    _objc_release(uVar11);
  }
  else {
    uVar6 = 3;
    if (auVar13._0_4_ == 0) {
      uVar6 = 5;
    }
    objc_msgSend_substringFromIndex_(uVar8,extraout_x1_00,uVar6);
    auVar14 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_componentsSeparatedByString_(auVar14._0_8_,auVar14._8_8_,&cf__);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar14._0_8_);
    auVar14 = objc_msgSend_count(uVar9);
    uVar6 = auVar14._8_8_;
    if (auVar14._0_8_ == 4) {
      lVar10 = -4;
      pdVar12 = (double *)&local_88;
      do {
        puVar1 = PTR__OBJC_CLASS___NSScanner_00055b98;
        objc_msgSend_objectAtIndexedSubscript_(uVar9,uVar6,lVar10 + 4);
        auVar14 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_scannerWithString_(puVar1,auVar14._8_8_,auVar14._0_8_);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar14._0_8_);
        iVar3 = objc_msgSend_scanDouble_(uVar11,extraout_x1_01,pdVar12);
        if (((iVar3 == 0) || (iVar3 = objc_msgSend_isAtEnd(uVar11), iVar3 == 0)) ||
           (ABS(*pdVar12) == INFINITY)) {
          uVar6 = _objc_retain(uVar5);
          goto LAB_000122b8;
        }
        _objc_release(uVar11);
        pdVar12 = pdVar12 + 1;
        bVar2 = lVar10 != -1;
        lVar10 = lVar10 + 1;
        uVar6 = extraout_x1_02;
      } while (bVar2);
      if ((0.0 <= local_70) && (local_70 <= 1.0)) {
        if (auVar13._0_4_ == 0) {
          objc_msgSend_colorWithRed_green_blue_alpha_
                    (CONCAT44(uStack_84,local_88),uStack_80,local_78,
                     PTR__OBJC_CLASS___UIColor_00055b10);
          uVar6 = _objc_retainAutoreleasedReturnValue();
        }
        else {
          objc_msgSend_colorWithDisplayP3Red_green_blue_alpha_();
          uVar6 = _objc_retainAutoreleasedReturnValue();
        }
        goto LAB_000122bc;
      }
    }
LAB_00012284:
    uVar6 = _objc_retain(uVar5);
  }
LAB_000122bc:
  _objc_release(uVar9);
  _objc_release(uVar8);
LAB_000122cc:
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_68) {
    _objc_autoreleaseReturnValue(uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00012334  FUN_00012334

ulong FUN_00012334(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  
  uVar6 = 0x1b6;
  iVar1 = _open("/var/mobile/Library/Accessibility/systembox-clockglass-clock-mask-shared.bin",
                0x1000202);
  if (iVar1 < 0) {
    ___error();
    uVar4 = _LGLog(&cf_maskmapopenfailedpath__serrno__d);
    return uVar4;
  }
  iVar2 = _ftruncate(iVar1,0x2000038);
  if (iVar2 == 0) {
    _fchmod(iVar1,0x1b6);
    DAT_00055f30 = _mmap(0,0x2000038,3,1,iVar1,0,in_x6,in_x7,uVar6);
    if (DAT_00055f30 != -1) goto LAB_00012410;
    pcVar5 = &cf_maskmmapfailedbytes__zuerrno__d;
  }
  else {
    pcVar5 = &cf_masktruncatefailedbytes__zuerrno__d;
  }
  ___error();
  _LGLog(pcVar5);
LAB_00012410:
  uVar3 = _close(iVar1);
  return (ulong)uVar3;
}



// ===== 0x00012434  FUN_00012434

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00012434(undefined8 param_1,undefined4 param_2,double param_3,double param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined auVar21 [16];
  undefined8 local_160;
  long lStack_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  int local_120 [32];
  long local_a0;
  
  local_a0 = *(long *)PTR____stack_chk_guard_000502b0;
  uVar2 = _objc_retain();
  iVar1 = FUN_00012928();
  if (iVar1 == 0) goto LAB_000127e0;
  objc_msgSend_window(uVar2);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_retain(uVar2);
  uVar5 = _objc_opt_class();
  lVar6 = _class_getInstanceVariable(uVar5,"_artworkImageView");
  if (lVar6 == 0) {
LAB_000124f0:
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    local_150 = (long *)0x0;
    objc_msgSend_subviews(uVar4);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_reverseObjectEnumerator();
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    lVar6 = objc_msgSend_countByEnumeratingWithState_objects_count_
                      (uVar8,extraout_x1,&local_160,local_120,0x10);
    if (lVar6 != 0) {
      lVar11 = *local_150;
      do {
        lVar9 = 0;
        do {
          if (*local_150 != lVar11) {
            _objc_enumerationMutation(uVar8);
          }
          uVar10 = *(undefined8 *)(lStack_158 + lVar9 * 8);
          uVar5 = _objc_opt_class(PTR__OBJC_CLASS___UIImageView_00055ba0);
          auVar21 = _objc_opt_isKindOfClass(uVar10,uVar5);
          uVar5 = auVar21._8_8_;
          if ((auVar21 & (undefined  [16])0x1) != (undefined  [16])0x0) {
            auVar21 = objc_msgSend_isHidden(uVar10);
            uVar5 = auVar21._8_8_;
            if ((auVar21 & (undefined  [16])0x1) == (undefined  [16])0x0) {
              auVar21 = objc_msgSend_contentMode(uVar10);
              uVar5 = auVar21._8_8_;
              if (auVar21._0_8_ == 1) {
                objc_msgSend_layer(uVar10);
                uVar5 = _objc_retainAutoreleasedReturnValue();
                dVar15 = (double)objc_msgSend_cornerRadius();
                if (dVar15 <= 0.5) {
                  _objc_release(uVar5);
                  uVar5 = extraout_x1_01;
                }
                else {
                  uVar7 = objc_msgSend_clipsToBounds(uVar10);
                  _objc_release(uVar5);
                  uVar5 = extraout_x1_00;
                  if ((uVar7 & 1) != 0) {
                    lVar6 = _objc_retain(uVar10);
                    goto LAB_0001262c;
                  }
                }
              }
            }
          }
          lVar9 = lVar9 + 1;
        } while (lVar6 != lVar9);
        lVar6 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar8,uVar5,&local_160,local_120,0x10);
      } while (lVar6 != 0);
      lVar6 = 0;
    }
LAB_0001262c:
    _objc_release(uVar8);
  }
  else {
    _object_getIvar(uVar4,lVar6);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_opt_class(PTR__OBJC_CLASS___UIImageView_00055ba0);
    uVar7 = _objc_opt_isKindOfClass(lVar6,uVar5);
    if ((uVar7 & 1) == 0) {
      _objc_release(lVar6);
      goto LAB_000124f0;
    }
  }
  _objc_release(uVar4);
  if (((((lVar3 == 0) || (lVar6 == 0)) || (uVar7 = objc_msgSend_isHidden(lVar6), (uVar7 & 1) != 0))
      || ((dVar16 = (double)objc_msgSend_alpha(lVar6), dVar15 = DAT_0001e290, dVar16 <= DAT_0001e290
          || (uVar7 = objc_msgSend_isHidden(uVar4), (uVar7 & 1) != 0)))) ||
     (dVar16 = (double)objc_msgSend_alpha(uVar4), dVar16 <= dVar15)) {
LAB_00012778:
    if (DAT_000561b4 == '\x01') {
joined_r0x000127c4:
      if (-1 < DAT_000561b0) {
        uVar7 = 0;
        goto LAB_000127cc;
      }
    }
    else {
      local_120[0] = 0;
      iVar1 = _notify_register_check("com.wkk.systembox.clockglass.lensrect.npartwork",local_120);
      if (iVar1 == 0) {
        DAT_000561b4 = '\x01';
        DAT_000561b0 = local_120[0];
        goto joined_r0x000127c4;
      }
    }
  }
  else {
    objc_msgSend_image(lVar6);
    lVar11 = _objc_retainAutoreleasedReturnValue();
    if (lVar11 == 0) goto LAB_00012778;
    uVar7 = _lgHostEnabled(&cf_Clock);
    _objc_release(lVar11);
    if ((uVar7 & 1) == 0) goto LAB_00012778;
    objc_msgSend_bounds(lVar6);
    uVar4 = objc_msgSend_convertRect_toView_(lVar6,extraout_x1_02,lVar3);
    dVar15 = param_3;
    dVar16 = param_4;
    objc_msgSend_bounds(lVar3);
    if ((dVar15 < 1.0) || (dVar16 < 1.0)) goto LAB_000127d0;
    dVar17 = (double)_CGRectGetMinX(uVar4,param_2,param_3,param_4);
    dVar18 = (double)_CGRectGetMinY(uVar4,param_2,param_3,param_4);
    dVar19 = (double)_CGRectGetWidth(uVar4,param_2,param_3,param_4);
    dVar20 = (double)_CGRectGetHeight(uVar4,param_2,param_3,param_4);
    if (DAT_000561b4 != '\x01') {
      local_120[0] = 0;
      iVar1 = _notify_register_check("com.wkk.systembox.clockglass.lensrect.npartwork",local_120);
      if (iVar1 != 0) goto LAB_000127d0;
      DAT_000561b0 = local_120[0];
      DAT_000561b4 = '\x01';
    }
    if (DAT_000561b0 < 0) goto LAB_000127d0;
    fVar12 = ((float)(dVar17 / dVar15) + 0.5) * 0.5;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    uVar4 = NEON_fmaxnm(CONCAT44(((float)(dVar19 / dVar15) + 0.5) * 0.5,
                                 ((float)(dVar18 / dVar16) + 0.5) * 0.5),0,4);
    uVar5 = NEON_fmov(0x3f800000,4);
    uVar4 = NEON_fmin(uVar4,uVar5,4);
    uVar13 = NEON_fmin(fVar12,0x3f800000);
    fVar12 = (float)NEON_fmadd(uVar13,DAT_0001e2d0,0x3f000000);
    auVar21._0_8_ = (long)((float)uVar4 * 65535.0 + 0.5);
    auVar21._8_8_ = (long)((float)((ulong)uVar4 >> 0x20) * 65535.0 + 0.5);
    auVar21 = NEON_ushl(auVar21,_DAT_0001e2e0,8);
    fVar14 = ((float)(dVar20 / dVar16) + 0.5) * 0.5;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    uVar13 = NEON_fmin(fVar14,0x3f800000);
    fVar14 = (float)NEON_fmadd(uVar13,DAT_0001e2d0,0x3f000000);
    uVar7 = auVar21._0_8_ | (long)fVar12 << 0x30 | auVar21._8_8_ | (long)fVar14;
LAB_000127cc:
    _notify_set_state(DAT_000561b0,uVar7);
  }
LAB_000127d0:
  _objc_release(lVar6);
  _objc_release(lVar3);
LAB_000127e0:
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_000502b0 != local_a0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x00012928  FUN_00012928

undefined8 FUN_00012928(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar1 = _objc_retain();
  uVar2 = _hasAncestorOfClassName(uVar1,&cf_MediaRemoteUI_CoverSheetBackgroundView);
  if ((uVar2 & 1) == 0) {
    uVar3 = _hasAncestorOfClassName(uVar1,&cf_CoverSheetBackgroundView);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  return uVar3;
}



// ===== 0x00012980  FUN_00012980

void FUN_00012980(void)

{
  DAT_00055fb8 = _LGBackboardSafeModeActive();
  FUN_0001299c();
  return;
}



// ===== 0x0001299c  FUN_0001299c

void FUN_0001299c(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined auVar13 [16];
  long local_1f8;
  undefined8 local_1f0;
  long lStack_1e8;
  long *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  long lStack_1a8;
  long *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined auStack_170 [128];
  undefined auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000502b0;
  lStack_1a8 = 0;
  local_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = (long *)0x0;
  uStack_188 = 0;
  local_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  objc_msgSend_sharedApplication(PTR__OBJC_CLASS___UIApplication_00055ba8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_connectedScenes();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                    (uVar3,extraout_x1,&local_1b0,auStack_f0,0x10);
  if (lVar4 != 0) {
    lVar10 = *local_1a0;
    do {
      lVar12 = 0;
      do {
        if (*local_1a0 != lVar10) {
          _objc_enumerationMutation(uVar3);
        }
        uVar9 = *(undefined8 *)(lStack_1a8 + lVar12 * 8);
        uVar2 = _objc_opt_class(PTR__OBJC_CLASS___UIWindowScene_00055bb0);
        auVar13 = _objc_opt_isKindOfClass(uVar9,uVar2);
        uVar2 = auVar13._8_8_;
        if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          uStack_1c8 = 0;
          local_1d0 = 0;
          uStack_1b8 = 0;
          uStack_1c0 = 0;
          lStack_1e8 = 0;
          local_1f0 = 0;
          uStack_1d8 = 0;
          local_1e0 = (long *)0x0;
          objc_msgSend_windows(uVar9);
          auVar13 = _objc_retainAutoreleasedReturnValue();
          uVar2 = auVar13._0_8_;
          auVar13 = objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar2,auVar13._8_8_,&local_1f0,auStack_170,0x10);
          if (auVar13._0_8_ != 0) {
            lVar8 = *local_1e0;
            do {
              uVar9 = auVar13._8_8_;
              local_1f8 = auVar13._0_8_;
              lVar11 = 0;
              do {
                if (*local_1e0 != lVar8) {
                  _objc_enumerationMutation(uVar2);
                  uVar9 = extraout_x1_00;
                }
                objc_msgSend_arrayWithObject_
                          (PTR__OBJC_CLASS___NSMutableArray_00055b50,uVar9,
                           *(undefined8 *)(lStack_1e8 + lVar11 * 8));
                uVar9 = _objc_retainAutoreleasedReturnValue();
                while (lVar5 = objc_msgSend_count(uVar9), lVar5 != 0) {
                  objc_msgSend_lastObject(uVar9);
                  uVar6 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_removeLastObject(uVar9);
                  iVar1 = FUN_00012d38(uVar6);
                  if (iVar1 != 0) {
                    uVar7 = _lgHostEnabled(&cf_Clock);
                    FUN_00012da8(uVar6,uVar7);
                    uVar7 = _objc_retainAutoreleasedReturnValue();
                    iVar1 = _lgHostEnabled(&cf_Clock);
                    if (iVar1 == 0) {
                      objc_msgSend_restore(uVar7);
                    }
                    else {
                      objc_msgSend_scheduleApply_(uVar7,extraout_x1_01,&cf_prefs);
                    }
                    _objc_release(uVar7);
                  }
                  _objc_opt_class(uVar6);
                  _NSStringFromClass();
                  auVar13 = _objc_retainAutoreleasedReturnValue();
                  iVar1 = objc_msgSend_isEqualToString_
                                    (auVar13._0_8_,auVar13._8_8_,&cf_NCNotificationListView);
                  _objc_release(auVar13._0_8_);
                  if (iVar1 != 0) {
                    FUN_00012f28(uVar6);
                  }
                  _objc_opt_class(uVar6);
                  _NSStringFromClass();
                  auVar13 = _objc_retainAutoreleasedReturnValue();
                  iVar1 = objc_msgSend_isEqualToString_
                                    (auVar13._0_8_,auVar13._8_8_,
                                     &cf_NCNotificationListHeaderTitleView);
                  _objc_release(auVar13._0_8_);
                  if (iVar1 != 0) {
                    FUN_00013030(uVar6);
                  }
                  _objc_opt_class(uVar6);
                  _NSStringFromClass();
                  auVar13 = _objc_retainAutoreleasedReturnValue();
                  iVar1 = objc_msgSend_isEqualToString_
                                    (auVar13._0_8_,auVar13._8_8_,&cf_NCToggleControl);
                  _objc_release(auVar13._0_8_);
                  if (iVar1 != 0) {
                    FUN_00013228(uVar6);
                  }
                  objc_msgSend_subviews(uVar6);
                  auVar13 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_addObjectsFromArray_(uVar9,auVar13._8_8_,auVar13._0_8_);
                  _objc_release(auVar13._0_8_);
                  _objc_release(uVar6);
                }
                _objc_release(uVar9);
                lVar11 = lVar11 + 1;
                uVar9 = extraout_x1_02;
              } while (lVar11 != local_1f8);
              auVar13 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (uVar2,extraout_x1_02,&local_1f0,auStack_170,0x10);
            } while (auVar13._0_8_ != 0);
          }
          _objc_release(uVar2);
          uVar2 = extraout_x1_03;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != lVar4);
      lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,uVar2,&local_1b0,auStack_f0,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00012d38  FUN_00012d38

undefined8 FUN_00012d38(void)

{
  cfstringStruct *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  
  _objc_opt_class();
  _NSStringFromClass();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  iVar2 = FUN_0001a7a8(2,0x10,0,0);
  pcVar1 = &cf_SBFLockScreenDateView;
  if (iVar2 != 0) {
    pcVar1 = &cf_CSProminentTimeView;
  }
  uVar4 = objc_msgSend_isEqualToString_(uVar3,extraout_x1,pcVar1);
  _objc_release(uVar3);
  return uVar4;
}



// ===== 0x00012da8  FUN_00012da8

void FUN_00012da8(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  
  uVar2 = _objc_retain();
  iVar1 = FUN_00012d38();
  if (iVar1 == 0) {
    lVar3 = 0;
  }
  else {
    _objc_getAssociatedObject(uVar2,PTR_LOOP_00055f38);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0 && param_2 != 0) {
      auVar9 = _objc_opt_new(PTR_PTR_00055bb8);
      lVar3 = auVar9._0_8_;
      objc_msgSend_setHost_(lVar3,auVar9._8_8_,uVar2);
      FUN_0000926c();
      auVar9 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_addObject_(auVar9._0_8_,auVar9._8_8_,lVar3);
      _objc_release(auVar9._0_8_);
      _objc_setAssociatedObject(uVar2,PTR_LOOP_00055f38,lVar3,1);
      _objc_opt_class(uVar2);
      _NSStringFromClass();
      uVar4 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_frame(uVar2);
      _NSStringFromCGRect();
      uVar5 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_bounds(uVar2);
      _NSStringFromCGRect();
      uVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_window(uVar2);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_opt_class();
      _NSStringFromClass();
      uVar8 = _objc_retainAutoreleasedReturnValue();
      _LGLog(&cf_hostattachedclass___frame___bounds___window___);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
    }
  }
  _objc_release(uVar2);
  _objc_autoreleaseReturnValue(lVar3);
  return;
}



// ===== 0x00012f28  FUN_00012f28

void FUN_00012f28(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  uVar2 = _objc_retain();
  objc_msgSend_window();
  lVar3 = _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    iVar1 = FUN_0001a7a8(2,0x10,0,0);
    _objc_release(lVar3);
    if (iVar1 == 0) {
      _objc_getAssociatedObject(uVar2,PTR_LOOP_00055f40);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar5 = objc_msgSend_boolValue();
      _objc_release(uVar4);
      if ((uVar5 & 1) == 0) {
        _objc_setAssociatedObject(uVar2,PTR_LOOP_00055f40,PTR____kCFBooleanTrue_00050290,1);
        local_58 = PTR___NSConcreteStackBlock_00050260;
        local_50 = DAT_0001e278;
        local_48 = FUN_0001340c;
        puStack_40 = &DAT_00050758;
        local_38 = _objc_retain(uVar2);
        _dispatch_async(PTR___dispatch_main_q_000502c0,&local_58);
        _objc_release(local_38);
      }
    }
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x00013030  FUN_00013030

void FUN_00013030(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000502b0;
  uVar3 = _objc_retain();
  objc_msgSend_superview();
  uVar4 = _objc_retainAutoreleasedReturnValue();
  FUN_00013a1c();
  lVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar4);
  puVar1 = PTR_s_titleLabel_000559f0;
  if (lVar5 != 0) {
    uVar6 = _objc_opt_respondsToSelector(uVar3,PTR_s_titleLabel_000559f0);
    if ((uVar6 & 1) != 0) {
      _objc_msgSend(uVar3,puVar1);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar7 = _objc_opt_class(PTR__OBJC_CLASS___UIView_00055b28);
      uVar6 = _objc_opt_isKindOfClass(uVar4,uVar7);
      if ((uVar6 & 1) != 0) {
        FUN_00013ac8(uVar4);
      }
      _objc_release(uVar4);
    }
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    objc_msgSend_subviews(uVar3);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    uVar4 = auVar11._0_8_;
    lVar5 = objc_msgSend_countByEnumeratingWithState_objects_count_
                      (uVar4,auVar11._8_8_,&local_130,auStack_f0,0x10);
    if (lVar5 != 0) {
      lVar9 = *local_120;
      do {
        lVar10 = 0;
        do {
          if (*local_120 != lVar9) {
            _objc_enumerationMutation(uVar4);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
          uVar7 = _objc_opt_class(PTR__OBJC_CLASS___UILabel_00055b88);
          uVar6 = _objc_opt_isKindOfClass(uVar8,uVar7);
          if ((uVar6 & 1) == 0) {
            _objc_opt_class(uVar8);
            _NSStringFromClass();
            auVar11 = _objc_retainAutoreleasedReturnValue();
            iVar2 = objc_msgSend_isEqualToString_
                              (auVar11._0_8_,auVar11._8_8_,&cf_SBUILegibilityLabel);
            _objc_release(auVar11._0_8_);
            uVar7 = extraout_x1;
            if (iVar2 != 0) goto LAB_000131ac;
          }
          else {
LAB_000131ac:
            FUN_00013ac8(uVar8);
            uVar7 = extraout_x1_00;
          }
          lVar10 = lVar10 + 1;
        } while (lVar5 != lVar10);
        lVar5 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar4,uVar7,&local_130,auStack_f0,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00013228  FUN_00013228

void FUN_00013228(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 extraout_x1;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined auVar12 [16];
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000502b0;
  uVar2 = _objc_retain();
  iVar1 = FUN_00013c78();
  if (iVar1 != 0) {
    FUN_00013d18(uVar2,PTR_s_backgroundMaterialView_00055058,&cf_MTMaterialView);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    FUN_00013d18(uVar2,PTR_s_glyphView_000552d0,&cf_UIImageView);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    FUN_00013ac8(uVar3);
    FUN_00013ac8(uVar4);
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    local_130 = 0;
    uStack_118 = 0;
    local_120 = (long *)0x0;
    objc_msgSend_subviews(uVar2);
    auVar12 = _objc_retainAutoreleasedReturnValue();
    uVar5 = auVar12._0_8_;
    lVar6 = objc_msgSend_countByEnumeratingWithState_objects_count_
                      (uVar5,auVar12._8_8_,&local_130,auStack_f0,0x10);
    if (lVar6 != 0) {
      lVar11 = *local_120;
      do {
        lVar9 = 0;
        do {
          if (*local_120 != lVar11) {
            _objc_enumerationMutation(uVar5);
          }
          uVar10 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          uVar7 = _objc_opt_class(PTR__OBJC_CLASS___UIImageView_00055ba0);
          uVar8 = _objc_opt_isKindOfClass(uVar10,uVar7);
          if ((uVar8 & 1) == 0) {
            uVar7 = _objc_opt_class(PTR__OBJC_CLASS___UILabel_00055b88);
            uVar8 = _objc_opt_isKindOfClass(uVar10,uVar7);
            if ((uVar8 & 1) != 0) goto LAB_00013380;
            uVar7 = _NSClassFromString(&cf_MTMaterialView);
            auVar12 = _objc_opt_isKindOfClass(uVar10,uVar7);
            uVar7 = auVar12._8_8_;
            if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00013380;
          }
          else {
LAB_00013380:
            FUN_00013ac8(uVar10);
            uVar7 = extraout_x1;
          }
          lVar9 = lVar9 + 1;
        } while (lVar6 != lVar9);
        lVar6 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar5,uVar7,&local_130,auStack_f0,0x10);
      } while (lVar6 != 0);
    }
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0001340c  FUN_0001340c

void FUN_0001340c(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  _objc_setAssociatedObject(*(undefined8 *)(param_5 + 0x20),PTR_LOOP_00055f40,0,0);
  uVar3 = _objc_retain(*(undefined8 *)(param_5 + 0x20));
  objc_msgSend_window();
  lVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 == 0) goto LAB_00013604;
  _objc_getAssociatedObject(uVar3,PTR_LOOP_00055f48);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  uVar6 = objc_msgSend_boolValue();
  _objc_release(uVar5);
  if ((uVar6 & 1) != 0) goto LAB_00013604;
  dVar8 = (double)_CACurrentMediaTime();
  _objc_getAssociatedObject(uVar3,PTR_LOOP_00055f50);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  dVar9 = (double)objc_msgSend_doubleValue();
  if (dVar9 <= 0.0) {
LAB_000134e4:
    puVar1 = PTR_LOOP_00055f50;
    objc_msgSend_numberWithDouble_(dVar8,PTR__OBJC_CLASS___NSNumber_00055ae0);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,puVar1,uVar7,1);
    _objc_release(uVar7);
    _objc_getAssociatedObject(uVar3,PTR_LOOP_00055f58);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    iVar2 = FUN_00013634();
    if (iVar2 == 0) {
      if (lVar4 == 0) {
        uVar7 = objc_msgSend_frame(uVar3);
      }
      else {
        uVar7 = objc_msgSend_CGRectValue(lVar4);
      }
    }
    else {
      objc_msgSend_frame(uVar3);
      uVar7 = FUN_00013670(uVar3);
    }
    dVar8 = param_2;
    uVar11 = param_3;
    uVar12 = param_4;
    uVar10 = objc_msgSend_frame(uVar3);
    uVar6 = _CGRectEqualToRect(uVar7,param_2,param_3,param_4,uVar10,dVar8,uVar11,uVar12);
    if ((uVar6 & 1) == 0) {
      _objc_setAssociatedObject(uVar3,PTR_LOOP_00055f48,PTR____kCFBooleanTrue_00050290,1);
      objc_msgSend_setFrame_(uVar7,param_2,param_3,param_4,uVar3);
      _objc_setAssociatedObject(uVar3,PTR_LOOP_00055f48,0,0);
    }
    _objc_release(lVar4);
  }
  else {
    dVar9 = (double)objc_msgSend_doubleValue(uVar5);
    param_2 = DAT_0001e2c8;
    if (DAT_0001e2c8 <= dVar8 - dVar9) goto LAB_000134e4;
  }
  _objc_release(uVar5);
LAB_00013604:
  _objc_release(uVar3);
  return;
}



// ===== 0x00013624  FUN_00013624

void FUN_00013624(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}



// ===== 0x0001362c  FUN_0001362c

void FUN_0001362c(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



// ===== 0x00013634  FUN_00013634

undefined8 FUN_00013634(void)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = FUN_0001a7a8(2,0x10,0,0);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = _lgHostEnabled(&cf_Clock);
  return uVar2;
}



// ===== 0x00013670  FUN_00013670

undefined8 FUN_00013670(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 extraout_x1;
  
  uVar2 = _objc_retain();
  objc_msgSend_window();
  lVar3 = _objc_retainAutoreleasedReturnValue();
  if (lVar3 != 0) {
    iVar1 = FUN_00013634();
    _objc_release(lVar3);
    if (iVar1 != 0) {
      if (DAT_00056228 != -1) {
        _dispatch_once(&DAT_00056228,&PTR___NSConcreteGlobalBlock_00050788);
      }
      if (DAT_00056220 != 0) {
        objc_msgSend_superview(uVar2);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        uVar5 = _objc_opt_isKindOfClass(uVar4,DAT_00056220);
        _objc_release(uVar4);
        if ((uVar5 & 1) != 0) goto LAB_0001383c;
      }
      _objc_getAssociatedObject(uVar2,PTR_LOOP_00055f58);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        objc_msgSend_valueWithCGRect_
                  (param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_00055bc0);
        lVar3 = _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,PTR_LOOP_00055f58,lVar3,1);
      }
      objc_msgSend_superview(uVar2);
      lVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_window(uVar2);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      FUN_000138b0();
      lVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if ((lVar6 != 0) && (lVar7 != 0)) {
        objc_msgSend_bounds(lVar7);
        objc_msgSend_convertRect_fromView_(lVar6,extraout_x1,lVar7);
        _CGRectGetMaxY();
        _CGRectGetMinY(param_1,param_2,param_3,param_4);
      }
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar3);
    }
  }
LAB_0001383c:
  _objc_release(uVar2);
  return param_1;
}



// ===== 0x0001388c  FUN_0001388c

void FUN_0001388c(void)

{
  DAT_00056220 = _NSClassFromString(&cf_NCNotificationListView);
  return;
}



// ===== 0x000138b0  FUN_000138b0

void FUN_000138b0(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined auVar8 [16];
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000502b0;
  lVar2 = _objc_retain();
  if ((lVar2 != 0) && (iVar1 = FUN_0001a7a8(2,0x10,0,0), iVar1 == 0)) {
    iVar1 = FUN_00011c1c(lVar2);
    if (iVar1 != 0) {
      lVar5 = _objc_retain(lVar2);
      goto LAB_00013904;
    }
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = (long *)0x0;
    objc_msgSend_subviews(lVar2);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    uVar3 = auVar8._0_8_;
    lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                      (uVar3,auVar8._8_8_,&local_120,auStack_d8,0x10);
    if (lVar4 != 0) {
      lVar6 = *local_110;
      do {
        lVar7 = 0;
        do {
          if (*local_110 != lVar6) {
            _objc_enumerationMutation(uVar3);
          }
          FUN_000138b0(*(undefined8 *)(lStack_118 + lVar7 * 8));
          auVar8 = _objc_retainAutoreleasedReturnValue();
          lVar5 = auVar8._0_8_;
          if (lVar5 != 0) {
            _objc_release(uVar3);
            goto LAB_00013904;
          }
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
        lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar3,auVar8._8_8_,&local_120,auStack_d8,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(uVar3);
  }
  lVar5 = 0;
LAB_00013904:
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_58) {
    _objc_autoreleaseReturnValue(lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00013a1c  FUN_00013a1c

void FUN_00013a1c(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  
  _objc_retain();
  lVar1 = _objc_retain();
  lVar4 = lVar1;
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    do {
      _objc_opt_class(lVar4);
      _NSStringFromClass();
      auVar5 = _objc_retainAutoreleasedReturnValue();
      uVar2 = objc_msgSend_isEqualToString_
                        (auVar5._0_8_,auVar5._8_8_,&cf_NCNotificationListSectionHeaderView);
      _objc_release(auVar5._0_8_);
      lVar3 = lVar4;
      if ((uVar2 & 1) != 0) break;
      objc_msgSend_superview(lVar4);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar3;
    } while (lVar3 != 0);
  }
  _objc_release(lVar1);
  _objc_autoreleaseReturnValue(lVar3);
  return;
}



// ===== 0x00013ac8  FUN_00013ac8

void FUN_00013ac8(void)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  double dVar6;
  undefined auVar7 [16];
  
  lVar3 = _objc_retain();
  if (lVar3 != 0) {
    _objc_getAssociatedObject(lVar3,&DAT_0004a751);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    iVar2 = _LG_prefBool(&cf_Clock_HideNotificationCenterVisuals,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00055ae0;
    if (iVar2 == 0) {
      if (lVar4 != 0) {
        objc_msgSend_doubleValue(lVar4);
        objc_msgSend_setAlpha_(lVar3);
        _objc_setAssociatedObject(lVar3,&DAT_0004a751,0,1);
        FUN_00013c04();
        auVar7 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_removeObject_(auVar7._0_8_,auVar7._8_8_,lVar3);
        _objc_release(auVar7._0_8_);
      }
    }
    else {
      if (lVar4 == 0) {
        objc_msgSend_alpha(lVar3);
        objc_msgSend_numberWithDouble_(puVar1);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(lVar3,&DAT_0004a751,uVar5,1);
        _objc_release(uVar5);
        FUN_00013c04();
        auVar7 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_addObject_(auVar7._0_8_,auVar7._8_8_,lVar3);
        _objc_release(auVar7._0_8_);
      }
      dVar6 = (double)objc_msgSend_alpha(lVar3);
      if (dVar6 != 0.0) {
        objc_msgSend_setAlpha_(0,lVar3);
      }
    }
    _objc_release(lVar4);
  }
  _objc_release(lVar3);
  return;
}



// ===== 0x00013c04  FUN_00013c04

void FUN_00013c04(void)

{
  if (DAT_00056238 != -1) {
    _dispatch_once(&DAT_00056238,&PTR___NSConcreteGlobalBlock_000507a8);
  }
  _objc_retainAutoreleaseReturnValue(DAT_00056230);
  return;
}



// ===== 0x00013c44  FUN_00013c44

void FUN_00013c44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_00056230;
  DAT_00056230 = uVar2;
  _objc_release(uVar1);
  return;
}



// ===== 0x00013c78  FUN_00013c78

bool FUN_00013c78(void)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined auVar6 [16];
  
  uVar3 = _objc_retain();
  _objc_opt_class();
  _NSStringFromClass();
  auVar6 = _objc_retainAutoreleasedReturnValue();
  iVar2 = objc_msgSend_isEqualToString_(auVar6._0_8_,auVar6._8_8_,&cf_NCToggleControl);
  _objc_release(auVar6._0_8_);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    objc_msgSend_superview(uVar3);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    FUN_00013a1c();
    lVar5 = _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 != 0;
    _objc_release();
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  return bVar1;
}



// ===== 0x00013d18  FUN_00013d18

void FUN_00013d18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000502b0;
  uVar1 = _objc_retain();
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_opt_respondsToSelector(uVar1,param_2);
  if ((uVar3 & 1) != 0) {
    _objc_msgSend(uVar1,param_2);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_opt_class(PTR__OBJC_CLASS___UIView_00055b28);
    uVar3 = _objc_opt_isKindOfClass(lVar4,uVar5);
    if ((uVar3 & 1) != 0) goto LAB_00013e84;
    _objc_release(lVar4);
  }
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  objc_msgSend_subviews(uVar1);
  auVar9 = _objc_retainAutoreleasedReturnValue();
  uVar5 = auVar9._0_8_;
  lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                    (uVar5,auVar9._8_8_,&local_130,auStack_e8,0x10);
  if (lVar4 != 0) {
    lVar7 = *local_120;
    do {
      lVar8 = 0;
      do {
        if (*local_120 != lVar7) {
          _objc_enumerationMutation(uVar5);
        }
        uVar6 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        _objc_opt_class(uVar6);
        _NSStringFromClass();
        auVar9 = _objc_retainAutoreleasedReturnValue();
        uVar3 = objc_msgSend_isEqualToString_(auVar9._0_8_,auVar9._8_8_,uVar2);
        _objc_release(auVar9._0_8_);
        if ((uVar3 & 1) != 0) {
          lVar4 = _objc_retain(uVar6);
          goto LAB_00013e7c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar5,extraout_x1,&local_130,auStack_e8,0x10);
    } while (lVar4 != 0);
    lVar4 = 0;
  }
LAB_00013e7c:
  _objc_release(uVar5);
LAB_00013e84:
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_68) {
    _objc_autoreleaseReturnValue(lVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00013ed4  FUN_00013ed4

void FUN_00013ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined auVar17 [16];
  
  lVar3 = _objc_retain();
  if ((lVar3 != 0) && (iVar2 = FUN_00011c1c(lVar3), iVar2 != 0)) {
    objc_msgSend_superview(lVar3);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      FUN_000141cc(lVar3,&cf_SBFLockScreenDateSubtitleDateView);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      if (lVar4 != 0) {
        objc_msgSend_superview(lVar4);
        lVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          _objc_getAssociatedObject(lVar4,PTR_LOOP_00055f60);
          lVar5 = _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSValue_00055bc0;
          if (lVar5 == 0) {
            objc_msgSend_frame(lVar4);
            objc_msgSend_valueWithCGRect_(puVar1);
            lVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(lVar4,PTR_LOOP_00055f60,lVar5,1);
          }
          uVar6 = _lgHostEnabled(&cf_Clock);
          if ((uVar6 & 1) == 0) {
            objc_msgSend_CGRectValue(lVar5);
            objc_msgSend_setFrame_(lVar4);
          }
          else {
            objc_msgSend_superview(lVar3);
            auVar17 = _objc_retainAutoreleasedReturnValue();
            uVar7 = auVar17._0_8_;
            objc_msgSend_setClipsToBounds_(lVar3,auVar17._8_8_,0);
            objc_msgSend_layer(lVar3);
            auVar17 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_setMasksToBounds_(auVar17._0_8_,auVar17._8_8_,0);
            _objc_release(auVar17._0_8_);
            objc_msgSend_bounds(lVar3);
            uVar8 = objc_msgSend_convertRect_fromView_(uVar7,extraout_x1,lVar3);
            uVar14 = param_2;
            uVar15 = param_3;
            uVar16 = param_4;
            uVar9 = objc_msgSend_frame(lVar4);
            objc_msgSend_superview(lVar4);
            auVar17 = _objc_retainAutoreleasedReturnValue();
            uVar9 = objc_msgSend_convertRect_fromView_
                              (uVar9,uVar14,uVar15,uVar16,uVar7,auVar17._8_8_,auVar17._0_8_);
            _objc_release(auVar17._0_8_);
            uVar10 = _CGRectGetMidX(uVar8,param_2,param_3,param_4);
            uVar9 = _CGRectGetWidth(uVar9,uVar14,uVar15,uVar16);
            dVar11 = (double)NEON_fmadd(uVar9,0xbfe0000000000000,uVar10);
            dVar12 = (double)_CGRectGetMinY(uVar8,param_2,param_3,param_4);
            dVar13 = (double)_CGRectGetHeight((long)dVar11,uVar14,uVar15,uVar16);
            objc_msgSend_superview(lVar4);
            auVar17 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_convertRect_fromView_
                      ((long)dVar11,(long)((dVar12 - dVar13) + 10.0),uVar15,uVar16,auVar17._0_8_,
                       auVar17._8_8_,uVar7);
            objc_msgSend_setFrame_(lVar4);
            _objc_release(auVar17._0_8_);
            objc_msgSend_superview(lVar4);
            auVar17 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_bringSubviewToFront_(auVar17._0_8_,auVar17._8_8_,lVar4);
            _objc_release(auVar17._0_8_);
            _objc_release(uVar7);
          }
          _objc_release(lVar5);
        }
      }
      _objc_release(lVar4);
    }
  }
  _objc_release(lVar3);
  return;
}



// ===== 0x000141cc  FUN_000141cc

void FUN_000141cc(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined8 local_120;
  long lStack_118;
  long *local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined auStack_d8 [128];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000502b0;
  lVar2 = _objc_retain();
  uVar3 = _objc_retain(param_2);
  if ((lVar2 != 0) && (lVar4 = objc_msgSend_length(uVar3), lVar4 != 0)) {
    _objc_opt_class(lVar2);
    _NSStringFromClass();
    auVar9 = _objc_retainAutoreleasedReturnValue();
    iVar1 = objc_msgSend_isEqualToString_(auVar9._0_8_,auVar9._8_8_,uVar3);
    _objc_release(auVar9._0_8_);
    if (iVar1 != 0) {
      lVar5 = _objc_retain(lVar2);
      goto LAB_0001430c;
    }
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    lStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    local_110 = (long *)0x0;
    objc_msgSend_subviews(lVar2);
    auVar9 = _objc_retainAutoreleasedReturnValue();
    uVar6 = auVar9._0_8_;
    lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                      (uVar6,auVar9._8_8_,&local_120,auStack_d8,0x10);
    if (lVar4 != 0) {
      lVar7 = *local_110;
      do {
        lVar8 = 0;
        do {
          if (*local_110 != lVar7) {
            _objc_enumerationMutation(uVar6);
          }
          FUN_000141cc(*(undefined8 *)(lStack_118 + lVar8 * 8),uVar3);
          auVar9 = _objc_retainAutoreleasedReturnValue();
          lVar5 = auVar9._0_8_;
          if (lVar5 != 0) {
            _objc_release(uVar6);
            goto LAB_0001430c;
          }
          lVar8 = lVar8 + 1;
        } while (lVar4 != lVar8);
        lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar6,auVar9._8_8_,&local_120,auStack_d8,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(uVar6);
  }
  lVar5 = 0;
LAB_0001430c:
  _objc_release(uVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_58) {
    _objc_autoreleaseReturnValue(lVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00014368  FUN_00014368

void FUN_00014368(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined auVar23 [16];
  undefined8 local_110;
  long local_a0;
  undefined8 local_80;
  
  uVar2 = _objc_retain();
  lVar3 = _objc_retain(param_2);
  uVar4 = _objc_retain(param_3);
  objc_msgSend_superview(uVar2);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  do {
    if (lVar5 == 0) {
LAB_00014a3c:
      _objc_release(uVar4);
      _objc_release(lVar3);
      _objc_release(uVar2);
      return;
    }
    uVar6 = FUN_00012d38(lVar5);
    if ((uVar6 & 1) != 0) {
      FUN_0000dfe0(uVar2);
      lVar8 = _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar3;
      if ((lVar3 == 0) && (lVar7 = lVar8, lVar8 == 0)) {
        objc_msgSend_font(uVar2);
        lVar7 = _objc_retainAutoreleasedReturnValue();
      }
      else {
        lVar7 = _objc_retain(lVar7);
      }
      uVar6 = _lgHostEnabled(&cf_Clock);
      if ((uVar6 & 1) == 0) {
        iVar1 = _LGDebugLoggingEnabled();
        if (iVar1 != 0) {
          objc_msgSend_text(uVar2);
          lVar9 = _objc_retainAutoreleasedReturnValue();
          lVar13 = lVar9;
          if (lVar9 == 0) {
            objc_msgSend_attributedText(uVar2);
            local_80 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_string();
            lVar13 = _objc_retainAutoreleasedReturnValue();
          }
          FUN_0000de94(lVar3);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_font(uVar2);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94();
          uVar12 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94(lVar8);
          uVar14 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_alpha(uVar2);
          objc_msgSend_isHidden(uVar2);
          objc_msgSend_callStackSymbols(PTR__OBJC_CLASS___NSThread_00055bc8);
          uVar15 = _objc_retainAutoreleasedReturnValue();
          _LGLog(&
                 cf_fonteventpassive_disabledreason___label__phost__ptext___candidate_____direct_____attributed_____alpha___2fhidden__dstack___
                );
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
          if (lVar9 == 0) goto LAB_00014a08;
          goto LAB_00014a1c;
        }
      }
      else {
        FUN_00012da8(lVar5,1);
        lVar9 = _objc_retainAutoreleasedReturnValue();
        _objc_getAssociatedObject(uVar2,PTR_LOOP_00055f28);
        local_80 = _objc_retainAutoreleasedReturnValue();
        iVar1 = _LGDebugLoggingEnabled();
        if (iVar1 != 0) {
          objc_msgSend_window(lVar5);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          _objc_opt_class();
          _NSStringFromClass();
          uVar11 = _objc_retainAutoreleasedReturnValue();
          _lgHostEnabled(&cf_Clock);
          objc_msgSend_applying(lVar9);
          objc_msgSend_sourceLabel(lVar9);
          uVar12 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_text(uVar2);
          lVar13 = _objc_retainAutoreleasedReturnValue();
          local_a0 = lVar13;
          if (lVar13 == 0) {
            objc_msgSend_attributedText(uVar2);
            local_110 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_string();
            local_a0 = _objc_retainAutoreleasedReturnValue();
          }
          FUN_0000de94(lVar3);
          uVar14 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_font(uVar2);
          uVar15 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94();
          uVar16 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94(lVar8);
          uVar17 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_originalFont(lVar9);
          uVar18 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94();
          uVar19 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94(local_80);
          uVar20 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_glassView(lVar9);
          uVar21 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_alpha(uVar2);
          objc_msgSend_isHidden(uVar2);
          objc_msgSend_callStackSymbols(PTR__OBJC_CLASS___NSThread_00055bc8);
          uVar22 = _objc_retainAutoreleasedReturnValue();
          _LGLog(&
                 cf_fonteventreason___label__phost__pwindow___enabled__dvariable__dapplying__dsourceMatch__dtext___candidate_____direct_____attributed_____stateCached_____associatedCached_____glass__palpha___2fhidden__dstack___
                );
          _objc_release(uVar22);
          _objc_release(uVar21);
          _objc_release(uVar20);
          _objc_release(uVar19);
          _objc_release(uVar18);
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
          _objc_release(uVar14);
          if (lVar13 == 0) {
            _objc_release(local_a0);
            _objc_release(local_110);
          }
          _objc_release(lVar13);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
        }
        iVar1 = objc_msgSend_applying(lVar9);
        if ((iVar1 == 0) && (lVar7 != 0)) {
          objc_msgSend_fontName(lVar7);
          auVar23 = _objc_retainAutoreleasedReturnValue();
          iVar1 = objc_msgSend_containsString_
                            (auVar23._0_8_,auVar23._8_8_,&cf_SFAdaptiveSoftNumeric);
          _objc_release(auVar23._0_8_);
          if (iVar1 != 0) goto LAB_0001471c;
          objc_msgSend_originalFont(lVar9);
          auVar23 = _objc_retainAutoreleasedReturnValue();
          lVar13 = auVar23._0_8_;
          objc_msgSend_setOriginalFont_(lVar9,auVar23._8_8_,lVar7);
          _objc_setAssociatedObject(uVar2,PTR_LOOP_00055f28,lVar7,1);
          _lgHostEnabled(&cf_Clock);
          FUN_0000de94(lVar13);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94(lVar7);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_font(uVar2);
          uVar12 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94();
          uVar14 = _objc_retainAutoreleasedReturnValue();
          FUN_0000de94(lVar8);
          uVar15 = _objc_retainAutoreleasedReturnValue();
          _LGLog(&
                 cf_fontcaptureacceptedreason___enabled__dlabel__pprevious_____selected_____direct_____attributed_____
                );
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
LAB_00014a08:
          _objc_release(lVar13);
        }
        else {
LAB_0001471c:
          iVar1 = _LGDebugLoggingEnabled();
          if (iVar1 != 0) {
            objc_msgSend_applying(lVar9);
            objc_msgSend_fontName(lVar7);
            auVar23 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_containsString_(auVar23._0_8_,auVar23._8_8_,&cf_SFAdaptiveSoftNumeric);
            _objc_release(auVar23._0_8_);
            FUN_0000de94(lVar7);
            lVar13 = _objc_retainAutoreleasedReturnValue();
            _LGLog(&cf_fontcapturerejectedreason___applying__dmissing__dcustom__dselected_____);
            goto LAB_00014a08;
          }
        }
        _objc_release(local_80);
LAB_00014a1c:
        _objc_release(lVar9);
      }
      _objc_release(lVar7);
      _objc_release(lVar8);
      _objc_release(lVar5);
      goto LAB_00014a3c;
    }
    objc_msgSend_superview(lVar5);
    lVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar7;
  } while( true );
}



// ===== 0x00014a74  FUN_00014a74

long FUN_00014a74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined auVar6 [16];
  
  uVar1 = _objc_retain();
  uVar2 = _objc_opt_class(PTR__OBJC_CLASS___UILabel_00055b88);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  if ((uVar3 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    objc_msgSend_superview(uVar1);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    if (lVar4 != 0) {
      do {
        _objc_opt_class(lVar4);
        _NSStringFromClass();
        auVar6 = _objc_retainAutoreleasedReturnValue();
        uVar2 = auVar6._0_8_;
        auVar6 = objc_msgSend_isEqualToString_
                           (uVar2,auVar6._8_8_,&cf_SBFLockScreenDateSubtitleDateView);
        if (((auVar6 & (undefined  [16])0x1) != (undefined  [16])0x0) ||
           (uVar3 = objc_msgSend_isEqualToString_
                              (uVar2,auVar6._8_8_,&cf_CSProminentSubtitleDateView), (uVar3 & 1) != 0
           )) {
          _objc_release(uVar2);
          _objc_release(lVar4);
          lVar4 = 1;
          goto LAB_00014b54;
        }
        _objc_release(uVar2);
        objc_msgSend_superview(lVar4);
        lVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        lVar4 = lVar5;
      } while (lVar5 != 0);
      lVar4 = 0;
    }
  }
LAB_00014b54:
  _objc_release(uVar1);
  return lVar4;
}



// ===== 0x00014b74  FUN_00014b74

void FUN_00014b74(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 extraout_x1;
  cfstringStruct *pcVar18;
  ulong unaff_x22;
  undefined auVar19 [16];
  undefined8 local_90;
  undefined8 local_78;
  
  uVar2 = _objc_retain();
  objc_msgSend_superview();
  lVar3 = _objc_retainAutoreleasedReturnValue();
  while (lVar3 != 0) {
    uVar4 = FUN_00012d38(lVar3);
    if ((uVar4 & 1) != 0) {
      uVar4 = _lgHostEnabled(&cf_Clock);
      if ((uVar4 & 1) == 0) {
        iVar1 = _LGDebugLoggingEnabled();
        if (iVar1 == 0) goto LAB_000150f8;
        objc_msgSend_text(uVar2);
        lVar6 = _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar6;
        if (lVar6 == 0) {
          objc_msgSend_attributedText(uVar2);
          local_78 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_string();
          lVar5 = _objc_retainAutoreleasedReturnValue();
        }
        objc_msgSend_font(uVar2);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        FUN_0000de94();
        uVar8 = _objc_retainAutoreleasedReturnValue();
        FUN_0000dfe0(uVar2);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        FUN_0000de94();
        uVar10 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_window(lVar3);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_opt_class();
        _NSStringFromClass();
        uVar13 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_alpha(uVar2);
        objc_msgSend_isHidden(uVar2);
        _LGLog(&
               cf_timeeventpassive_disabledlabel__ptext___direct_____attributed_____host__pwindow___alpha___2fhidden__d
              );
        _objc_release(uVar13);
        _objc_release(uVar11);
        _objc_release(uVar10);
        _objc_release(uVar9);
        _objc_release(uVar8);
        _objc_release(uVar7);
        if (lVar6 == 0) {
          _objc_release(lVar5);
          _objc_release(local_78);
        }
      }
      else {
        FUN_00012da8(lVar3,1);
        lVar6 = _objc_retainAutoreleasedReturnValue();
        auVar19 = objc_msgSend_applying();
        uVar7 = auVar19._8_8_;
        if ((auVar19 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          FUN_00014368(uVar2,0,&cf_text);
          _objc_opt_class(uVar2);
          _NSStringFromClass();
          uVar7 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_text(uVar2);
          lVar12 = _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar12;
          if (lVar12 == 0) {
            objc_msgSend_attributedText(uVar2);
            local_90 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_string();
            lVar5 = _objc_retainAutoreleasedReturnValue();
          }
          objc_msgSend_font(uVar2);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_fontName();
          uVar9 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_font(uVar2);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_pointSize();
          _objc_opt_class(lVar3);
          _NSStringFromClass();
          uVar11 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_sourceLabel(lVar6);
          uVar13 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_text();
          lVar14 = _objc_retainAutoreleasedReturnValue();
          if (lVar14 == 0) {
            objc_msgSend_sourceLabel(lVar6);
            uVar15 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_attributedText();
            uVar16 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_string();
            uVar17 = _objc_retainAutoreleasedReturnValue();
            _LGLog(&cf_timeupdatelabel___text___font_____2fhost___stateSource___);
            _objc_release(uVar17);
            _objc_release(uVar16);
            _objc_release(uVar15);
          }
          else {
            _LGLog(&cf_timeupdatelabel___text___font_____2fhost___stateSource___);
          }
          _objc_release(lVar14);
          _objc_release(uVar13);
          _objc_release(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar8);
          if (lVar12 == 0) {
            _objc_release(lVar5);
            _objc_release(local_90);
          }
          _objc_release(lVar12);
          _objc_release(uVar7);
          pcVar18 = &cf_text;
          uVar7 = extraout_x1;
        }
        else {
          pcVar18 = &cf_text_after_apply;
        }
        objc_msgSend_scheduleApply_(lVar6,uVar7,pcVar18);
      }
      goto LAB_000150f0;
    }
    objc_msgSend_superview(lVar3);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar5;
  }
  iVar1 = _LGDebugLoggingEnabled();
  if (iVar1 == 0) {
LAB_00014ef4:
    lVar3 = 0;
  }
  else {
    objc_msgSend_text(uVar2);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      objc_msgSend_attributedText(uVar2);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_string();
      uVar8 = _objc_retainAutoreleasedReturnValue();
      unaff_x22 = FUN_00011e90();
      _objc_release(uVar8);
      _objc_release(uVar7);
      if ((unaff_x22 & 1) == 0) goto LAB_00014ef4;
    }
    else {
      iVar1 = FUN_00011e90();
      _objc_release(lVar3);
      if (iVar1 == 0) goto LAB_00014ef4;
    }
    _objc_opt_class(uVar2);
    _NSStringFromClass();
    lVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_text(uVar2);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar5;
    if (lVar5 == 0) {
      objc_msgSend_attributedText(uVar2);
      unaff_x22 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_string();
      lVar3 = _objc_retainAutoreleasedReturnValue();
    }
    objc_msgSend_font(uVar2);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_fontName();
    uVar8 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_font(uVar2);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_pointSize();
    objc_msgSend_window(uVar2);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_opt_class();
    _NSStringFromClass();
    uVar11 = _objc_retainAutoreleasedReturnValue();
    _LGLog(&cf_timeupdatehasnohostlabel___text___font_____2fwindow___);
    _objc_release(uVar11);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar7);
    if (lVar5 == 0) {
      _objc_release(lVar3);
      _objc_release(unaff_x22);
    }
    _objc_release(lVar5);
    lVar3 = 0;
LAB_000150f0:
    _objc_release(lVar6);
  }
LAB_000150f8:
  _objc_release(lVar3);
  _objc_release(uVar2);
  return;
}



// ===== 0x00015128  FUN_00015128

undefined8 FUN_00015128(void)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined auVar7 [16];
  
  objc_msgSend_superview();
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar6 = 0;
    while( true ) {
      _objc_opt_class(lVar2);
      _NSStringFromClass();
      auVar7 = _objc_retainAutoreleasedReturnValue();
      uVar3 = objc_msgSend_isEqualToString_(auVar7._0_8_,auVar7._8_8_,&cf_NCToggleControl);
      _objc_release(auVar7._0_8_);
      lVar4 = lVar2;
      if ((uVar3 & 1) != 0) {
        uVar5 = FUN_00013c78(lVar2);
        goto LAB_0001521c;
      }
      _objc_opt_class();
      _NSStringFromClass();
      auVar7 = _objc_retainAutoreleasedReturnValue();
      uVar3 = objc_msgSend_isEqualToString_
                        (auVar7._0_8_,auVar7._8_8_,&cf_NCNotificationListSectionHeaderView);
      _objc_release(auVar7._0_8_);
      if ((uVar3 & 1) != 0) break;
      objc_msgSend_superview(lVar2);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      uVar5 = 0;
      if ((lVar4 == 0) || (bVar1 = 2 < uVar6, lVar2 = lVar4, uVar6 = uVar6 + 1, bVar1))
      goto LAB_0001521c;
    }
    uVar5 = 0;
LAB_0001521c:
    _objc_release(lVar4);
  }
  return uVar5;
}



// ===== 0x0001523c  FUN_0001523c

double FUN_0001523c(double param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar2 = _objc_retain();
  if ((param_1 <= 0.0) || (iVar1 = _lgHostEnabled(&cf_Clock), iVar1 == 0)) goto LAB_00015344;
  objc_msgSend_superview(lVar2);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  while ((lVar3 != 0 && (uVar4 = FUN_00012d38(lVar3), (uVar4 & 1) == 0))) {
    objc_msgSend_superview(lVar3);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar5;
  }
  FUN_00012da8(lVar3,0);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_nativeTimeNeedsHiding();
  if (iVar1 != 0) {
    objc_msgSend_sourceLabel(uVar6);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    if (lVar5 == lVar2) {
      _objc_release(lVar2);
    }
    else {
      objc_msgSend_visibleSourceView(uVar6);
      lVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar5);
      if (lVar7 != lVar2) goto LAB_00015334;
    }
    param_1 = 0.0;
  }
LAB_00015334:
  _objc_release(uVar6);
  _objc_release(lVar3);
LAB_00015344:
  _objc_release(lVar2);
  return param_1;
}



// ===== 0x00015368  FUN_00015368

double FUN_00015368(double param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  undefined auVar5 [16];
  
  uVar2 = _objc_retain();
  dVar4 = param_1;
  if (((param_3 != 0) &&
      (iVar1 = _LG_prefBool(&cf_Clock_HideNotificationCenterVisuals,1), iVar1 != 0)) &&
     (dVar4 = 0.0, DAT_0001e290 < param_1)) {
    objc_msgSend_numberWithDouble_(param_1,PTR__OBJC_CLASS___NSNumber_00055ae0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,&DAT_0004a751,uVar3,1);
    _objc_release(uVar3);
    FUN_00013c04();
    auVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_addObject_(auVar5._0_8_,auVar5._8_8_,uVar2);
    _objc_release(auVar5._0_8_);
  }
  _objc_release(uVar2);
  return dVar4;
}



// ===== 0x00015434  FUN_00015434

void FUN_00015434(void)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  
  uVar2 = _objc_retain();
  uVar3 = _lgHostEnabled(&cf_Clock);
  if ((uVar3 & 1) == 0) {
    FUN_00012da8(uVar2,0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
  }
  else {
    objc_msgSend_window(uVar2);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    FUN_00012da8(uVar2,lVar4 != 0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
  }
  uVar3 = _lgHostEnabled(&cf_Clock);
  if ((uVar3 & 1) == 0) {
    iVar1 = _LGDebugLoggingEnabled();
    if (iVar1 != 0) {
      objc_msgSend_window(uVar2);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_opt_class();
      _NSStringFromClass();
      uVar7 = _objc_retainAutoreleasedReturnValue();
      FUN_0000e0d4(uVar2);
      uVar8 = _objc_retainAutoreleasedReturnValue();
      _LGLog(&cf_hostmovepassive_disabledhost__pwindow___existingState__plabels___);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar6);
    }
  }
  else {
    objc_msgSend_window(uVar2);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      objc_msgSend_scheduleApply_(uVar5,extraout_x1,&cf_window);
      goto LAB_00015588;
    }
  }
  objc_msgSend_restore(uVar5);
  _objc_setAssociatedObject(uVar2,PTR_LOOP_00055f38,0,0);
LAB_00015588:
  _objc_release(uVar5);
  _objc_release(uVar2);
  return;
}



// ===== 0x000155ac  FUN_000155ac

void FUN_000155ac(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  
  uVar2 = _objc_retain();
  iVar1 = _lgHostEnabled(&cf_Clock);
  if (iVar1 != 0) {
    FUN_00012da8(uVar2,1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_glassView();
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 == 0) {
      objc_msgSend_scheduleApply_(uVar3,extraout_x1,&cf_layout);
    }
    objc_msgSend_shared(PTR_PTR_00055af0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_trackMotion();
    _objc_release(uVar5);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x00015654  FUN_00015654

void FUN_00015654(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = _objc_retain();
  iVar1 = _lgHostEnabled(&cf_Clock);
  if (iVar1 != 0) {
    objc_msgSend_window(uVar2);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      FUN_00012da8(uVar2,0);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_reassertNativeTimeHidden();
      _objc_release(uVar4);
    }
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x000156c8  FUN_000156c8

void FUN_000156c8(long param_1)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  if (param_1 != 0) {
    uVar1 = _objc_retain();
    FUN_00011f24();
    auVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_addObject_(auVar2._0_8_,auVar2._8_8_,uVar1);
    _objc_release(uVar1);
    _objc_release(auVar2._0_8_);
  }
  objc_msgSend_shared(PTR_PTR_00055af0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_trackMotion();
  _objc_release(uVar1);
  return;
}



// ===== 0x00015734  FUN_00015734

void FUN_00015734(void)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  
  uVar3 = _objc_retain();
  _objc_opt_class();
  _NSStringFromClass();
  auVar6 = _objc_retainAutoreleasedReturnValue();
  iVar2 = objc_msgSend_isEqualToString_
                    (auVar6._0_8_,auVar6._8_8_,&cf_NCNotificationListSectionHeaderView);
  _objc_release(auVar6._0_8_);
  puVar1 = PTR_s_headerTitleView_000552f0;
  if (iVar2 != 0) {
    uVar4 = _objc_opt_respondsToSelector(uVar3,PTR_s_headerTitleView_000552f0);
    if ((uVar4 & 1) != 0) {
      _objc_msgSend(uVar3,puVar1);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      FUN_00013030();
      _objc_release(uVar5);
    }
    puVar1 = PTR_s_clearButton_000550a8;
    uVar4 = _objc_opt_respondsToSelector(uVar3,PTR_s_clearButton_000550a8);
    if ((uVar4 & 1) != 0) {
      _objc_msgSend(uVar3,puVar1);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      FUN_00013228();
      _objc_release(uVar5);
    }
  }
  _objc_release(uVar3);
  return;
}



// ===== 0x00015808  FUN_00015808

void FUN_00015808(undefined8 param_1)

{
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  undefined auStack_30 [8];
  undefined auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  local_50 = PTR___NSConcreteStackBlock_00050260;
  local_48 = DAT_0001e278;
  local_40 = FUN_00015894;
  puStack_38 = &DAT_000507c8;
  _objc_copyWeak(auStack_30,auStack_28);
  _dispatch_async(PTR___dispatch_main_q_000502c0,&local_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



// ===== 0x00015894  FUN_00015894

void FUN_00015894(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  
  uVar2 = _objc_loadWeakRetained(param_1 + 0x20);
  objc_msgSend_window();
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    _objc_opt_class(uVar2);
    _NSStringFromClass();
    auVar4 = _objc_retainAutoreleasedReturnValue();
    iVar1 = objc_msgSend_isEqualToString_
                      (auVar4._0_8_,auVar4._8_8_,&cf_NCNotificationListSectionHeaderView);
    _objc_release(auVar4._0_8_);
    if (iVar1 == 0) {
      _objc_opt_class(uVar2);
      _NSStringFromClass();
      auVar4 = _objc_retainAutoreleasedReturnValue();
      iVar1 = objc_msgSend_isEqualToString_(auVar4._0_8_,auVar4._8_8_,&cf_NCToggleControl);
      _objc_release(auVar4._0_8_);
      if (iVar1 != 0) {
        FUN_00013228(uVar2);
      }
    }
    else {
      FUN_00015734();
    }
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x00015954  FUN_00015954

void FUN_00015954(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x20,param_2 + 0x20);
  return;
}



// ===== 0x00015960  FUN_00015960

void FUN_00015960(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  return;
}



// ===== 0x00015968  _hasAncestorOfClassName

undefined8 _hasAncestorOfClassName(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar2 = _objc_retain();
  lVar3 = _NSClassFromString(param_2);
  lVar4 = _objc_retain(uVar2);
  lVar1 = lVar4;
  do {
    if (lVar1 == 0) {
      uVar2 = 0;
LAB_000159f0:
      _objc_release(lVar4);
      return uVar2;
    }
    if ((lVar3 != 0) && (uVar5 = _objc_opt_isKindOfClass(lVar1,lVar3), (uVar5 & 1) != 0)) {
      _objc_release(lVar1);
      uVar2 = 1;
      goto LAB_000159f0;
    }
    objc_msgSend_superview(lVar1);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar6;
  } while( true );
}



// ===== 0x00015a0c  _ancestorNameContains

undefined8 _ancestorNameContains(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined auVar7 [16];
  
  uVar1 = _objc_retain();
  uVar2 = _objc_retain(param_2);
  lVar3 = _objc_retain(uVar1);
  lVar6 = lVar3;
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    do {
      _objc_opt_class(lVar6);
      _NSStringFromClass();
      auVar7 = _objc_retainAutoreleasedReturnValue();
      uVar4 = objc_msgSend_containsString_(auVar7._0_8_,auVar7._8_8_,uVar2);
      _objc_release(auVar7._0_8_);
      if ((uVar4 & 1) != 0) {
        _objc_release(lVar6);
        uVar1 = 1;
        goto LAB_00015ab8;
      }
      objc_msgSend_superview(lVar6);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = lVar5;
    } while (lVar5 != 0);
    uVar1 = 0;
  }
LAB_00015ab8:
  _objc_release(uVar2);
  _objc_release(lVar3);
  return uVar1;
}



// ===== 0x00015ae0  _isExactClass

long _isExactClass(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  if (param_1 != 0) {
    uVar1 = _objc_retain(param_2);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    auVar2 = _objc_retainAutoreleasedReturnValue();
    param_1 = objc_msgSend_isEqualToString_(auVar2._0_8_,auVar2._8_8_,uVar1);
    _objc_release(uVar1);
    _objc_release(auVar2._0_8_);
  }
  return param_1;
}



// ===== 0x00015b4c  _lgHostEnabled

undefined8 _lgHostEnabled(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  iVar1 = objc_msgSend_isEqualToString_(param_1,param_2,&cf_Clock);
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    _LGGlassPreferenceValue(&cf_Clock_Enabled);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_00055ae0);
    uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = objc_msgSend_boolValue(uVar2);
    }
    _objc_release(uVar2);
  }
  return uVar3;
}



// ===== 0x00015bd0  _lgObservePreferenceReload

void _lgObservePreferenceReload(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  
  lVar2 = _objc_retain();
  if (lVar2 != 0) {
    if (DAT_00056250 == 0) {
      objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_00055b50);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      lVar1 = DAT_00056250;
      DAT_00056250 = lVar3;
      _objc_release(lVar1);
    }
    lVar1 = DAT_00056250;
    uVar4 = objc_msgSend_copy(lVar2);
    auVar5 = _objc_retainBlock();
    objc_msgSend_addObject_(lVar1,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
  return;
}



// ===== 0x00015c64  FUN_00015c64

void FUN_00015c64(void)

{
  undefined8 uVar1;
  
  uVar1 = _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver(uVar1,0,FUN_00015c94,&cf_com_wkk_systembox_prefschanged,0,4);
  return;
}



// ===== 0x00015c94  FUN_00015c94

void FUN_00015c94(void)

{
  _dispatch_async(PTR___dispatch_main_q_000502c0,&PTR___NSConcreteGlobalBlock_000507f8);
  return;
}



// ===== 0x00015ca8  FUN_00015ca8

void FUN_00015ca8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 extraout_x1;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_110;
  long lStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000502b0;
  _LGInvalidateGlassPreferenceCache();
  _LGReloadPreferences();
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  auVar5 = objc_msgSend_copy(DAT_00056250);
  uVar1 = auVar5._0_8_;
  lVar2 = objc_msgSend_countByEnumeratingWithState_objects_count_
                    (uVar1,auVar5._8_8_,&local_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar3 = *local_100;
    do {
      lVar4 = 0;
      do {
        if (*local_100 != lVar3) {
          _objc_enumerationMutation(uVar1);
        }
        (**(code **)(*(long *)(lStack_108 + lVar4 * 8) + 0x10))();
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar1,extraout_x1,&local_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00015da4  _LGGlassPreferenceValue

void _LGGlassPreferenceValue(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined auVar7 [16];
  
  uVar2 = _objc_retain();
  lVar3 = objc_msgSend_length();
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    _objc_opt_class(PTR_PTR_00055b20);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_sync_enter();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_00055ae8;
    uVar6 = extraout_x1;
    if (DAT_00056258 == 0) {
      if (DAT_00056290 != -1) {
        _dispatch_once(&DAT_00056290,&PTR___NSConcreteGlobalBlock_00051060);
      }
      auVar7 = _objc_retain(DAT_00056288);
      objc_msgSend_dictionaryWithContentsOfFile_(puVar1,auVar7._8_8_,auVar7._0_8_);
      puVar5 = (undefined *)_objc_retainAutoreleasedReturnValue();
      puVar1 = PTR____NSDictionary0__struct_00050278;
      if (puVar5 != (undefined *)0x0) {
        puVar1 = puVar5;
      }
      _objc_storeStrong(&DAT_00056258,puVar1);
      _objc_release(puVar5);
      _objc_release(auVar7._0_8_);
      uVar6 = extraout_x1_00;
    }
    objc_msgSend_objectForKeyedSubscript_(DAT_00056258,uVar6,uVar2);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_sync_exit(uVar4);
    _objc_release(uVar4);
  }
  _objc_release(uVar2);
  _objc_autoreleaseReturnValue(uVar6);
  return;
}



// ===== 0x00015edc  _LGInvalidateGlassPreferenceCache

void _LGInvalidateGlassPreferenceCache(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_opt_class(PTR_PTR_00055b20);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar1 = DAT_00056258;
  DAT_00056258 = 0;
  _objc_release(uVar1);
  _objc_sync_exit(uVar2);
  _objc_release(uVar2);
  return;
}



// ===== 0x00015f2c  _LGFilterTypeForHostPrefix

void _LGFilterTypeForHostPrefix(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  
  uVar2 = _objc_retain();
  lVar3 = objc_msgSend_length();
  if (lVar3 != 0) {
    _objc_retainAutorelease(uVar2);
    pcVar4 = (char *)objc_msgSend_UTF8String();
    if (pcVar4 == (char *)0x0) goto LAB_00015fb4;
    lVar3 = 0;
    do {
      iVar1 = _strcmp(*(char **)((long)&PTR_s_Default_00050828 + lVar3),pcVar4);
      if (iVar1 == 0) {
        objc_msgSend_stringWithUTF8String_(PTR__OBJC_CLASS___NSString_00055ad8);
        pcVar4 = (char *)_objc_retainAutoreleasedReturnValue();
        goto LAB_00015fb4;
      }
      lVar3 = lVar3 + 0x48;
    } while (lVar3 != 0x828);
  }
  pcVar4 = (char *)0x0;
LAB_00015fb4:
  _objc_release(uVar2);
  _objc_autoreleaseReturnValue(pcVar4);
  return;
}



// ===== 0x00015fd4  LGMotionDisplayLinkTarget__tick_

/* Function Stack Size: 0x18 bytes */

void LGMotionDisplayLinkTarget::LGMotionDisplayLinkTarget__tick_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  double dVar2;
  double dVar3;
  
  uVar1 = _objc_retain(param_3);
  dVar2 = (double)objc_msgSend_targetTimestamp();
  dVar3 = (double)objc_msgSend_timestamp(uVar1);
  if (dVar3 < dVar2) {
    objc_msgSend_targetTimestamp(uVar1);
    objc_msgSend_timestamp(uVar1);
  }
  FUN_0001603c();
  objc_msgSend_setPaused_(uVar1,extraout_x1,1);
  _objc_release(uVar1);
  return;
}



// ===== 0x0001603c  FUN_0001603c

void FUN_0001603c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined auVar17 [16];
  undefined8 local_160;
  long lStack_158;
  long *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined auStack_118 [128];
  long local_98;
  
  local_98 = *(long *)PTR____stack_chk_guard_000502b0;
  lVar4 = objc_msgSend_count(DAT_00056278);
  if (lVar4 != 0) {
    objc_msgSend_begin(PTR__OBJC_CLASS___CATransaction_00055b48);
    objc_msgSend_setDisableActions_(PTR__OBJC_CLASS___CATransaction_00055b48,extraout_x1,1);
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    lStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    local_150 = (long *)0x0;
    objc_msgSend_allObjects(DAT_00056278);
    auVar17 = _objc_retainAutoreleasedReturnValue();
    uVar5 = auVar17._0_8_;
    lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                      (uVar5,auVar17._8_8_,&local_160,auStack_118,0x10);
    uVar2 = DAT_0004a758;
    dVar1 = DAT_0001e290;
    if (lVar4 != 0) {
      lVar9 = *local_150;
      do {
        lVar10 = 0;
        do {
          uVar14 = param_2;
          uVar15 = param_3;
          uVar16 = param_4;
          if (*local_150 != lVar9) {
            _objc_enumerationMutation(uVar5);
            uVar14 = param_2;
            uVar15 = param_3;
            uVar16 = param_4;
          }
          uVar8 = *(undefined8 *)(lStack_158 + lVar10 * 8);
          objc_msgSend_window(uVar8);
          lVar6 = _objc_retainAutoreleasedReturnValue();
          param_2 = uVar14;
          param_3 = uVar15;
          param_4 = uVar16;
          if ((((lVar6 != 0) &&
               (uVar7 = objc_msgSend_isHidden(uVar8), param_2 = uVar14, param_3 = uVar15,
               param_4 = uVar16, (uVar7 & 1) == 0)) &&
              (dVar11 = (double)objc_msgSend_alpha(uVar8), param_2 = uVar14, param_3 = uVar15,
              param_4 = uVar16, dVar1 < dVar11)) &&
             ((uVar7 = objc_msgSend_isHidden(lVar6), param_2 = uVar14, param_3 = uVar15,
              param_4 = uVar16, (uVar7 & 1) == 0 &&
              (dVar11 = (double)objc_msgSend_alpha(lVar6), param_2 = uVar14, param_3 = uVar15,
              param_4 = uVar16, dVar1 < dVar11)))) {
            uVar12 = objc_msgSend_bounds(uVar8);
            param_2 = uVar14;
            param_3 = uVar15;
            param_4 = uVar16;
            uVar7 = _CGRectIsEmpty();
            if ((uVar7 & 1) == 0) {
              uVar13 = objc_msgSend_bounds(lVar6);
              objc_msgSend_convertRect_toView_(uVar12,uVar14,uVar15,uVar16,uVar8,extraout_x1_00,0);
              iVar3 = _CGRectIntersectsRect(uVar13);
              if (iVar3 != 0) {
                objc_msgSend_applySpecularAngle_(uVar2,uVar8);
              }
            }
          }
          _objc_release(lVar6);
          lVar10 = lVar10 + 1;
        } while (lVar4 != lVar10);
        lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar5,extraout_x1_01,&local_160,auStack_118,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(uVar5);
    objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_00055b48);
  }
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00016278  LGLiveBackdropView__lgEffectiveFilterType

/* Function Stack Size: 0x10 bytes */

ID LGLiveBackdropView::LGLiveBackdropView__lgEffectiveFilterType(ID param_1,SEL param_2)

{
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
  auVar15 = objc_msgSend_length(*(undefined8 *)(param_1 + lVar11));
  if (auVar15._0_8_ == 0) {
    objc_msgSend_stringWithUTF8String_
              (PTR__OBJC_CLASS___NSString_00055ad8,auVar15._8_8_,
               "com.wkk.systembox.clockglass.refraction");
    uVar2 = _objc_retainAutoreleasedReturnValue();
    goto LAB_00016558;
  }
  _objc_retain(*(undefined8 *)(param_1 + lVar11));
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
    objc_msgSend_bounds(param_1);
    uVar6 = _CGRectIsEmpty();
    if ((uVar6 & 1) == 0) {
      objc_msgSend_bounds(param_1);
      dVar13 = (double)_CGRectGetWidth();
      objc_msgSend_bounds(param_1);
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
              dVar14 = *(double *)(param_1 + (long)_lgShapeCornerRadius);
              goto LAB_00016448;
            }
            break;
          }
          lVar11 = lVar11 + 0x48;
        } while (lVar11 != 0x830);
      }
      objc_msgSend_layer(param_1);
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
      uVar10 = *(ulong *)(param_1 + (long)_lastRadiusStep);
      uVar6 = uVar9;
      if (ABS(dVar13 * 32.0 - (double)uVar10) < 0.75) {
        uVar6 = uVar10;
      }
      if ((uVar10 & 0x8000000000000000) == 0) {
        uVar9 = uVar6;
      }
      *(ulong *)(param_1 + (long)_lastRadiusStep) = uVar9;
      objc_msgSend_stringByAppendingFormat_(uVar3);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      goto LAB_000164c0;
    }
  }
LAB_000164c8:
  objc_msgSend_traitCollection(param_1);
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
  if (*(char *)(param_1 + (long)_parameterRefreshVariant) != '\0') {
    objc_msgSend_stringByAppendingString_(uVar7,extraout_x1,&cf__refresh);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar7);
  }
  _objc_release(uVar3);
LAB_00016558:
  IVar8 = _objc_autoreleaseReturnValue(uVar2);
  return IVar8;
}



// ===== 0x0001657c  layerClass

/* Function Stack Size: 0x10 bytes */

CLASS LGLiveBackdropView::layerClass(ID param_1,SEL param_2)

{
  long lVar1;
  CLASS CVar2;
  
  lVar1 = _NSClassFromString(&cf_CABackdropLayer);
  if (lVar1 == 0) {
    _objc_opt_class(PTR__OBJC_CLASS___CALayer_00055bd0);
  }
  CVar2 = _objc_retainAutoreleaseReturnValue();
  return CVar2;
}



// ===== 0x000165a8  LGLiveBackdropView__initWithFrame_

/* Function Stack Size: 0x30 bytes */

ID LGLiveBackdropView::LGLiveBackdropView__initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
  IVar1 = objc_msgSend_initWithFrame_groupName_filterType_(param_1,param_2,0,0);
  return IVar1;
}



// ===== 0x000165b4  LGLiveBackdropView__initWithFrame_groupName_

/* Function Stack Size: 0x38 bytes */

ID LGLiveBackdropView::LGLiveBackdropView__initWithFrame_groupName_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_msgSend_initWithFrame_groupName_filterType_();
  return IVar1;
}



// ===== 0x000165bc  LGLiveBackdropView__initWithFrame_groupName_filterType_

/* Function Stack Size: 0x40 bytes */

ID LGLiveBackdropView::LGLiveBackdropView__initWithFrame_groupName_filterType_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4,ID param_5)

{
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
  
  uVar6 = _objc_retain(param_4);
  uVar7 = _objc_retain(param_5);
  puStack_68 = PTR_PTR_00055c30;
  local_70 = param_1;
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



// ===== 0x0001690c  FUN_0001690c

void FUN_0001690c(void)

{
  DAT_00056264 = _arc4random();
  return;
}



// ===== 0x00016928  LGLiveBackdropView__dealloc

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::LGLiveBackdropView__dealloc(ID param_1,SEL param_2)

{
  undefined8 extraout_x1;
  ID local_30;
  undefined *puStack_28;
  
  objc_msgSend_removeObject_(DAT_00056270,param_2,param_1);
  objc_msgSend_removeObject_(DAT_00056278,extraout_x1,param_1);
  puStack_28 = PTR_PTR_00055c30;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_dealloc_000551d0);
  return;
}



// ===== 0x00016988  LGLiveBackdropView__didMoveToWindow

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::LGLiveBackdropView__didMoveToWindow(ID param_1,SEL param_2)

{
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00055c30;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_didMoveToWindow_00055210);
  objc_msgSend_applyFilters(param_1);
  return;
}



// ===== 0x000169d0  LGLiveBackdropView__traitCollectionDidChange_

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::LGLiveBackdropView__traitCollectionDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ID local_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_traitCollectionDidChange__00055a10;
  puStack_38 = PTR_PTR_00055c30;
  local_40 = param_1;
  uVar2 = _objc_retain(param_3);
  _objc_msgSendSuper2(&local_40,puVar1,uVar2);
  lVar3 = objc_msgSend_userInterfaceStyle(uVar2);
  _objc_release(uVar2);
  objc_msgSend_traitCollection(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar4 = objc_msgSend_userInterfaceStyle();
  _objc_release(uVar2);
  if (lVar3 != lVar4) {
    *(undefined *)(param_1 + (long)_filterAttached) = 0;
    objc_msgSend_applyFilters(param_1);
    objc_msgSend_updateSpecular(param_1);
  }
  return;
}



// ===== 0x00016a88  LGLiveBackdropView__lgSpecularEnabledOverride

/* Function Stack Size: 0x10 bytes */

ID LGLiveBackdropView::LGLiveBackdropView__lgSpecularEnabledOverride(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getAssociatedObject(param_1,PTR_LOOP_00055f68);
  return IVar1;
}



// ===== 0x00016a94  LGLiveBackdropView__setLgSpecularEnabledOverride_

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::LGLiveBackdropView__setLgSpecularEnabledOverride_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  
  lVar2 = _objc_retain(param_3);
  objc_msgSend_lgSpecularEnabledOverride(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  lVar3 = auVar6._0_8_;
  if ((lVar3 != lVar2) &&
     (uVar4 = objc_msgSend_isEqualToNumber_(lVar3,auVar6._8_8_,lVar2), puVar1 = PTR_LOOP_00055f68,
     (uVar4 & 1) == 0)) {
    uVar5 = objc_msgSend_copy(lVar2);
    _objc_setAssociatedObject(param_1,puVar1,uVar5,1);
    _objc_release(uVar5);
    objc_msgSend_updateSpecular(param_1);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  return;
}



// ===== 0x00016b3c  LGLiveBackdropView__layoutSubviews

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::LGLiveBackdropView__layoutSubviews(ID param_1,SEL param_2)

{
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00055c30;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_layoutSubviews_000553d8);
  objc_msgSend_applyFilters(param_1);
  objc_msgSend_updateSpecular(param_1);
  return;
}



// ===== 0x00016b8c  LGLiveBackdropView__updateNativeBlurOverlayWithRadius_

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::LGLiveBackdropView__updateNativeBlurOverlayWithRadius_
               (ID param_1,SEL param_2,double param_3)

{
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
  if (param_3 <= 0.0) {
    objc_msgSend_removeFromSuperview();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar2);
    *(undefined8 *)(param_1 + (long)_nativeBlurRadius) = 0;
    return;
  }
  if (*(long *)(param_1 + lVar4) == 0) {
    lVar1 = _NSClassFromString(&cf_LGSettingsLowBlurView);
    if (lVar1 == 0) {
      return;
    }
    uVar2 = _objc_alloc();
    objc_msgSend_bounds(param_1);
    uVar2 = objc_msgSend_initWithFrame_(uVar2);
    uVar3 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar2;
    _objc_release(uVar3);
    objc_msgSend_setUserInteractionEnabled_(*(undefined8 *)(param_1 + lVar4),extraout_x1,0);
    objc_msgSend_insertSubview_atIndex_(param_1,extraout_x1_00,*(undefined8 *)(param_1 + lVar4),0);
    param_2 = extraout_x1_01;
  }
  objc_msgSend_begin(PTR__OBJC_CLASS___CATransaction_00055b48,param_2);
  objc_msgSend_setDisableActions_(PTR__OBJC_CLASS___CATransaction_00055b48,extraout_x1_02,1);
  objc_msgSend_bounds(param_1);
  objc_msgSend_setFrame_(*(undefined8 *)(param_1 + lVar4));
  objc_msgSend_layer(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar5 = objc_msgSend_cornerRadius();
  objc_msgSend_layer(*(undefined8 *)(param_1 + lVar4));
  uVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setCornerRadius_(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  objc_msgSend_layer(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_cornerCurve();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_layer(*(undefined8 *)(param_1 + lVar4));
  auVar6 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setCornerCurve_(auVar6._0_8_,auVar6._8_8_,uVar3);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar3);
  _objc_release(uVar2);
  objc_msgSend_setClipsToBounds_(*(undefined8 *)(param_1 + lVar4),extraout_x1_03,1);
  lVar1 = (long)_nativeBlurRadius;
  if (DAT_0004a760 < ABS(*(double *)(param_1 + lVar1) - param_3)) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    objc_msgSend_numberWithDouble_(param_3,PTR__OBJC_CLASS___NSNumber_00055ae0);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setValue_forKey_(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_lgBlurRadius);
    _objc_release(auVar6._0_8_);
    *(double *)(param_1 + lVar1) = param_3;
  }
  objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_00055b48);
  return;
}



// ===== 0x00016da8  LGLiveBackdropView__setLgShapeRect_

/* Function Stack Size: 0x30 bytes */

void LGLiveBackdropView::LGLiveBackdropView__setLgShapeRect_(ID param_1,SEL param_2,CGRect param_3)

{
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
  
  puVar1 = (undefined8 *)(param_1 + (long)_lgShapeRect);
  uVar3 = _CGRectEqualToRect(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  if ((uVar3 & 1) != 0) {
    return;
  }
  *puVar1 = in_d0;
  puVar1[1] = in_d1;
  puVar1[2] = in_d2;
  puVar1[3] = in_d3;
  pcVar4 = (char *)objc_msgSend_UTF8String(*(undefined8 *)(param_1 + (long)_lgFilterType));
  if (pcVar4 != (char *)0x0) {
    lVar7 = 8;
    do {
      pcVar6 = *(char **)((long)&PTR_s_Default_00050818 + lVar7);
      sVar5 = _strlen(pcVar6);
      iVar2 = _strncmp(pcVar4,pcVar6,sVar5);
      if ((iVar2 == 0) && ((pcVar4[sVar5] == '\0' || (pcVar4[sVar5] == '.')))) {
        if (lVar7 == 0x6c8) {
          *(undefined *)(param_1 + (long)_filterAttached) = 0;
          objc_msgSend_applyFilters(param_1);
        }
        break;
      }
      lVar7 = lVar7 + 0x48;
    } while (lVar7 != 0x830);
  }
  objc_msgSend_updateSpecular(param_1);
  return;
}



// ===== 0x00016ecc  LGLiveBackdropView__setLgShapeCornerRadius_

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::LGLiveBackdropView__setLgShapeCornerRadius_
               (ID param_1,SEL param_2,double param_3)

{
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  
  if (ABS(*(double *)(param_1 + (long)_lgShapeCornerRadius) - param_3) < DAT_0001e290) {
    return;
  }
  *(double *)(param_1 + (long)_lgShapeCornerRadius) = param_3;
  pcVar2 = (char *)objc_msgSend_UTF8String(*(undefined8 *)(param_1 + (long)_lgFilterType));
  if (pcVar2 != (char *)0x0) {
    lVar5 = 8;
    do {
      pcVar4 = *(char **)((long)&PTR_s_Default_00050818 + lVar5);
      sVar3 = _strlen(pcVar4);
      iVar1 = _strncmp(pcVar2,pcVar4,sVar3);
      if ((iVar1 == 0) && ((pcVar2[sVar3] == '\0' || (pcVar2[sVar3] == '.')))) {
        if (lVar5 == 0x6c8) {
          *(undefined *)(param_1 + (long)_filterAttached) = 0;
          objc_msgSend_applyFilters(param_1);
        }
        break;
      }
      lVar5 = lVar5 + 0x48;
    } while (lVar5 != 0x830);
  }
  objc_msgSend_updateSpecular(param_1);
  return;
}



// ===== 0x00016fb8  LGLiveBackdropView__updateSpecular

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::LGLiveBackdropView__updateSpecular(ID param_1,SEL param_2)

{
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
  puVar1 = (undefined8 *)(param_1 + (long)_lgShapeRect);
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
    uVar19 = *(undefined8 *)(param_1 + (long)_lgShapeCornerRadius);
  }
  else {
LAB_00017030:
    uVar18 = objc_msgSend_bounds(param_1);
    objc_msgSend_layer(param_1);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar19 = objc_msgSend_cornerRadius();
    _objc_release(uVar5);
  }
  objc_msgSend_lgSpecularEnabledOverride(param_1);
  lVar6 = _objc_retainAutoreleasedReturnValue();
  if (lVar6 == 0) {
    lVar13 = (long)_lgFilterType;
    _objc_retainAutorelease(*(undefined8 *)(param_1 + lVar13));
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
  pcVar7 = (char *)objc_msgSend_UTF8String(*(undefined8 *)(param_1 + lVar13));
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
  if (((uVar2 & 1) != 0) || (*(long *)(param_1 + (long)_specularLayer) != 0)) {
    lVar17 = (long)_edge;
    if (*(long *)(param_1 + lVar17) == 0) {
      objc_msgSend_layer(PTR__OBJC_CLASS___CAShapeLayer_00055b38);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar17);
      *(undefined8 *)(param_1 + lVar17) = uVar5;
      _objc_release(uVar12);
      objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_retainAutorelease();
      auVar24 = objc_msgSend_CGColor();
      objc_msgSend_setBackgroundColor_
                (*(undefined8 *)(param_1 + lVar17),auVar24._8_8_,auVar24._0_8_);
      _objc_release(uVar5);
      objc_msgSend_setBorderWidth_(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar17));
      objc_msgSend_layer(param_1);
      auVar24 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_addSublayer_(auVar24._0_8_,auVar24._8_8_,*(undefined8 *)(param_1 + lVar17));
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
    if (*(long *)(param_1 + lVar13) == 0) {
      objc_msgSend_layer(PTR__OBJC_CLASS___CAGradientLayer_00055b30);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar12 = *(undefined8 *)(param_1 + lVar13);
      *(undefined8 *)(param_1 + lVar13) = uVar5;
      _objc_release(uVar12);
      objc_msgSend_setLocations_
                (*(undefined8 *)(param_1 + lVar13),extraout_x1,
                 &PTR__OBJC_CLASS___NSConstantArray_00052f70);
      objc_msgSend_layer(PTR__OBJC_CLASS___CAShapeLayer_00055b38);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      lVar14 = (long)_specularMask;
      uVar12 = *(undefined8 *)(param_1 + lVar14);
      *(undefined8 *)(param_1 + lVar14) = uVar5;
      _objc_release(uVar12);
      objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_retainAutorelease();
      auVar24 = objc_msgSend_CGColor();
      objc_msgSend_setBackgroundColor_
                (*(undefined8 *)(param_1 + lVar14),auVar24._8_8_,auVar24._0_8_);
      _objc_release(uVar5);
      objc_msgSend_blackColor(PTR__OBJC_CLASS___UIColor_00055b10);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_retainAutorelease();
      auVar24 = objc_msgSend_CGColor();
      objc_msgSend_setBorderColor_(*(undefined8 *)(param_1 + lVar14),auVar24._8_8_,auVar24._0_8_);
      _objc_release(uVar5);
      objc_msgSend_setBorderWidth_(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar14));
      objc_msgSend_setMask_
                (*(undefined8 *)(param_1 + lVar13),extraout_x1_00,*(undefined8 *)(param_1 + lVar14))
      ;
      objc_msgSend_layer(param_1);
      auVar24 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_addSublayer_(auVar24._0_8_,auVar24._8_8_,*(undefined8 *)(param_1 + lVar13));
      _objc_release(auVar24._0_8_);
    }
    lVar14 = (long)_appliedSpecularOpacity;
    if (DAT_0004a760 < ABS(*(double *)(param_1 + lVar14) - dVar20)) {
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
      objc_msgSend_setColors_(*(undefined8 *)(param_1 + lVar13),auVar24._8_8_,auVar24._0_8_);
      _objc_release(auVar24._0_8_);
      _objc_release(uVar11);
      _objc_release(uVar10);
      _objc_release(uVar9);
      _objc_release(uVar5);
      *(double *)(param_1 + lVar14) = dVar20;
      _objc_release(uVar12);
    }
    objc_msgSend_begin(PTR__OBJC_CLASS___CATransaction_00055b48);
    objc_msgSend_setDisableActions_(PTR__OBJC_CLASS___CATransaction_00055b48,extraout_x1_01,1);
    objc_msgSend_setHidden_(*(undefined8 *)(param_1 + lVar13),extraout_x1_02,uVar2 ^ 1);
    objc_msgSend_setFrame_(uVar18,uVar21,uVar22,uVar23,*(undefined8 *)(param_1 + lVar13));
    objc_msgSend_separatorColor(PTR__OBJC_CLASS___UIColor_00055b10);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_colorWithAlphaComponent_(DAT_0004a790);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    objc_msgSend_traitCollection(param_1);
    auVar24 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_resolvedColorWithTraitCollection_(uVar12,auVar24._8_8_,auVar24._0_8_);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    _objc_release(auVar24._0_8_);
    objc_msgSend_setHidden_(*(undefined8 *)(param_1 + lVar17),extraout_x1_03,0);
    objc_msgSend_setFrame_(uVar18,uVar21,uVar22,uVar23,*(undefined8 *)(param_1 + lVar17));
    objc_msgSend_setCornerRadius_(uVar19,*(undefined8 *)(param_1 + lVar17));
    objc_msgSend_layer(param_1);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_cornerCurve();
    auVar24 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setCornerCurve_(*(undefined8 *)(param_1 + lVar17),auVar24._8_8_,auVar24._0_8_);
    _objc_release(auVar24._0_8_);
    _objc_release(uVar12);
    objc_msgSend_setBorderWidth_(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar17));
    uVar5 = _objc_retainAutorelease(uVar5);
    auVar24 = objc_msgSend_CGColor();
    objc_msgSend_setBorderColor_(*(undefined8 *)(param_1 + lVar17),auVar24._8_8_,auVar24._0_8_);
    uVar12 = _CGRectGetWidth(uVar18,uVar21,uVar22,uVar23);
    uVar21 = _CGRectGetHeight(uVar18,uVar21,uVar22,uVar23);
    lVar13 = (long)_specularMask;
    objc_msgSend_setFrame_(0,0,uVar12,uVar21,*(undefined8 *)(param_1 + lVar13));
    objc_msgSend_setCornerRadius_(uVar19,*(undefined8 *)(param_1 + lVar13));
    objc_msgSend_layer(param_1);
    uVar21 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_cornerCurve();
    auVar24 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setCornerCurve_(*(undefined8 *)(param_1 + lVar13),auVar24._8_8_,auVar24._0_8_);
    _objc_release(auVar24._0_8_);
    _objc_release(uVar21);
    objc_msgSend_setBorderWidth_(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar13));
    objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_00055b48);
    objc_msgSend_applySpecularAngle_(DAT_0004a758,param_1);
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



// ===== 0x000178d4  LGLiveBackdropView__applySpecularAngle_

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::LGLiveBackdropView__applySpecularAngle_
               (ID param_1,SEL param_2,double param_3)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double in_d1;
  
  lVar2 = (long)_specularLayer;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 != 0) {
    dVar3 = (double)___sincos_stret();
    objc_msgSend_setStartPoint_(in_d1 * 0.5 + 0.5,dVar3 * 0.5 + 0.5,lVar1);
    objc_msgSend_setEndPoint_(0.5 - in_d1 * 0.5,0.5 - dVar3 * 0.5,*(undefined8 *)(param_1 + lVar2));
    return;
  }
  return;
}



// ===== 0x0001795c  LGLiveBackdropView__applyFilters

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::LGLiveBackdropView__applyFilters(ID param_1,SEL param_2)

{
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
  if (*(char *)(param_1 + lVar3) == '\0') {
    objc_msgSend_setValue_forKey_
              (uVar2,auVar19._8_8_,PTR____kCFBooleanFalse_00050288,&cf_layerUsesCoreImageFilters);
    objc_msgSend_setValue_forKey_
              (uVar2,extraout_x1,PTR____kCFBooleanFalse_00050288,&cf_windowServerAware);
    objc_msgSend_setValue_forKey_
              (uVar2,extraout_x1_00,*(undefined8 *)(param_1 + (long)_lgGroupName),&cf_groupName);
    objc_msgSend_setValue_forKey_(uVar2,extraout_x1_01,&cf_com_wkk_clockglass,&cf_groupNamespace);
    objc_msgSend_setValue_forKey_
              (uVar2,extraout_x1_02,PTR____kCFBooleanTrue_00050290,&cf_ignoresScreenClip);
    *(undefined *)(param_1 + lVar3) = 1;
  }
  lVar3 = (long)_lgFilterType;
  pcVar4 = (char *)objc_msgSend_UTF8String(*(undefined8 *)(param_1 + lVar3));
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
  _objc_retainAutorelease(*(undefined8 *)(param_1 + lVar3));
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
  objc_msgSend_bounds(param_1);
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
  dVar16 = *(double *)(param_1 + (long)_lgBackdropZoom);
  if (dVar16 <= 0.0) {
    dVar16 = 1.0;
  }
  dVar17 = *(double *)(param_1 + (long)_appliedBackdropZoom);
  if (((DAT_0004a760 < ABS(dVar16 + -1.0)) || (0.0 < dVar17)) &&
     (DAT_0004a760 < ABS(dVar16 - dVar17))) {
    *(double *)(param_1 + (long)_appliedBackdropZoom) = dVar16;
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
  if (DAT_0004a7a0 < ABS(dVar18 - *(double *)(param_1 + lVar14))) {
    objc_msgSend_numberWithDouble_(dVar18,PTR__OBJC_CLASS___NSNumber_00055ae0);
    auVar19 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setValue_forKey_(uVar2,auVar19._8_8_,auVar19._0_8_,&cf_scale);
    _objc_release(auVar19._0_8_);
    *(double *)(param_1 + lVar14) = dVar18;
  }
  objc_msgSend_lgEffectiveFilterType(param_1);
  lVar8 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_filters(uVar2);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  lVar9 = _NSClassFromString(&cf_CAFilter);
  lVar14 = lVar8;
  if (*(long *)(param_1 + lVar3) != 0) {
    lVar14 = *(long *)(param_1 + lVar3);
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
  objc_msgSend_updateNativeBlurOverlayWithRadius_(dVar18,param_1);
  lVar3 = (long)_filterAttached;
  if ((*(char *)(param_1 + lVar3) == '\0') || (lVar14 = objc_msgSend_count(uVar6), lVar14 != 1)) {
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
        *(undefined *)(param_1 + lVar3) = 1;
        objc_msgSend_defaultCenter(PTR__OBJC_CLASS___NSNotificationCenter_00055b68);
        auVar19 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_postNotificationName_object_
                  (auVar19._0_8_,auVar19._8_8_,&cf_LGLiveBackdropViewFilterDidAttach,param_1);
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



// ===== 0x00018144  FUN_00018144

void FUN_00018144(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  
  pcVar1 = "";
  if (param_1 != (char *)0x0) {
    pcVar1 = param_1;
  }
  objc_msgSend_stringWithUTF8String_(PTR__OBJC_CLASS___NSString_00055ad8,param_2,pcVar1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  auVar4 = _objc_alloc(PTR__OBJC_CLASS___NSString_00055ad8);
  uVar3 = objc_msgSend_initWithFormat_arguments_(auVar4._0_8_,auVar4._8_8_,uVar2,register0x00000008)
  ;
  _LGLog(&cf__LGSB___);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



// ===== 0x000181d0  LGLiveBackdropView__reapplyFilterForParameterReload

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::LGLiveBackdropView__reapplyFilterForParameterReload(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + (long)_parameterRefreshVariant) =
       *(byte *)(param_1 + (long)_parameterRefreshVariant) ^ 1;
  *(undefined8 *)(param_1 + (long)_appliedScale) = 0xbff0000000000000;
  *(undefined *)(param_1 + (long)_filterAttached) = 0;
  objc_msgSend_applyFilters();
  objc_msgSend_updateSpecular(param_1);
  objc_msgSend_layer(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setNeedsDisplay();
  _objc_release(uVar1);
  objc_msgSend_setNeedsDisplay(*(undefined8 *)(param_1 + (long)_specularLayer));
  return;
}



// ===== 0x00018254  LGLiveBackdropView__lgInvalidateFilterContents

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::LGLiveBackdropView__lgInvalidateFilterContents(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  
  *(byte *)(param_1 + (long)_parameterRefreshVariant) =
       *(byte *)(param_1 + (long)_parameterRefreshVariant) ^ 1;
  *(undefined *)(param_1 + (long)_filterAttached) = 0;
  objc_msgSend_applyFilters();
  objc_msgSend_layer(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setNeedsDisplay();
  _objc_release(uVar1);
  return;
}



// ===== 0x000182b0  LGLiveBackdropView__lgFilterAttached

/* Function Stack Size: 0x10 bytes */

bool LGLiveBackdropView::LGLiveBackdropView__lgFilterAttached(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_filterAttached);
}



// ===== 0x000182c0  LGLiveBackdropView__lgFilterType

/* Function Stack Size: 0x10 bytes */

ID LGLiveBackdropView::LGLiveBackdropView__lgFilterType(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_lgFilterType);
}



// ===== 0x000182d0  LGLiveBackdropView__setLgFilterType_

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::LGLiveBackdropView__setLgFilterType_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x000182dc  LGLiveBackdropView__lgShapeRect

/* Function Stack Size: 0x10 bytes */

CGRect * LGLiveBackdropView::LGLiveBackdropView__lgShapeRect
                   (CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  return __return_storage_ptr__;
}



// ===== 0x000182f4  LGLiveBackdropView__lgShapeCornerRadius

/* Function Stack Size: 0x10 bytes */

double LGLiveBackdropView::LGLiveBackdropView__lgShapeCornerRadius(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lgShapeCornerRadius);
}



// ===== 0x00018304  LGLiveBackdropView__lgBackdropZoom

/* Function Stack Size: 0x10 bytes */

double LGLiveBackdropView::LGLiveBackdropView__lgBackdropZoom(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lgBackdropZoom);
}



// ===== 0x00018314  LGLiveBackdropView__setLgBackdropZoom_

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::LGLiveBackdropView__setLgBackdropZoom_
               (ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lgBackdropZoom) = param_3;
  return;
}



// ===== 0x00018324  LGLiveBackdropView___cxx_destruct

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::LGLiveBackdropView___cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_lgFilterType,0);
  _objc_storeStrong(param_1 + (long)_nativeBlurView,0);
  _objc_storeStrong(param_1 + (long)_edge,0);
  _objc_storeStrong(param_1 + (long)_specularMask,0);
  _objc_storeStrong(param_1 + (long)_specularLayer,0);
  _objc_storeStrong(param_1 + (long)_lgGroupName,0);
  return;
}



// ===== 0x000183b4  _LGInjectGlassIntoMaterialGroupType

void _LGInjectGlassIntoMaterialGroupType
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  dispatch_time_t dVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar12;
  undefined8 extraout_x1_01;
  long lVar13;
  long lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined auVar21 [16];
  undefined *local_1a8;
  undefined8 local_1a0;
  code *local_198;
  undefined *puStack_190;
  undefined auStack_188 [8];
  undefined8 local_180;
  long lStack_178;
  long *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined auStack_138 [8];
  undefined auStack_130 [128];
  long local_b0;
  
  local_b0 = *(long *)PTR____stack_chk_guard_000502b0;
  dVar18 = param_2;
  dVar19 = param_3;
  dVar17 = param_4;
  uVar3 = _objc_retain();
  uVar4 = _objc_retain(param_8);
  uVar5 = _objc_retain(param_9);
  objc_msgSend_superview(uVar3);
  lVar6 = _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    dVar15 = (double)objc_msgSend_frame(uVar3);
    dVar20 = param_4 + param_2 + dVar19;
    dVar19 = param_3 + param_1 + dVar17;
    _objc_getAssociatedObject(uVar3,param_7);
    lVar7 = _objc_retainAutoreleasedReturnValue();
    if (lVar7 == 0) {
      auVar21 = _objc_alloc(PTR_PTR_00055b20);
      lVar7 = objc_msgSend_initWithFrame_groupName_filterType_
                        (dVar15 - param_2,dVar18 - param_1,dVar20,dVar19,auVar21._0_8_,auVar21._8_8_
                         ,uVar4,uVar5);
      _objc_initWeak(auStack_138);
      lStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      local_170 = (long *)0x0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      auVar21 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (&PTR__OBJC_CLASS___NSConstantArray_00052f88,extraout_x1,&local_180,
                           auStack_130,0x10);
      puVar2 = PTR___dispatch_main_q_000502c0;
      puVar1 = PTR___NSConcreteStackBlock_00050260;
      dVar17 = DAT_0004a7a8;
      uVar10 = DAT_0001e278;
      uVar12 = auVar21._8_8_;
      lVar9 = auVar21._0_8_;
      if (lVar9 != 0) {
        lVar13 = *local_170;
        do {
          lVar14 = 0;
          do {
            if (*local_170 != lVar13) {
              _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_00052f88);
            }
            dVar16 = (double)objc_msgSend_doubleValue(*(undefined8 *)(lStack_178 + lVar14 * 8));
            dVar8 = _dispatch_time(0,(long)(dVar16 * dVar17));
            local_1a8 = puVar1;
            local_1a0 = uVar10;
            local_198 = FUN_000188ac;
            puStack_190 = &DAT_000507c8;
            _objc_copyWeak(auStack_188,auStack_138);
            _dispatch_after(dVar8,puVar2,&local_1a8);
            _objc_destroyWeak(auStack_188);
            lVar14 = lVar14 + 1;
          } while (lVar9 != lVar14);
          auVar21 = objc_msgSend_countByEnumeratingWithState_objects_count_
                              (&PTR__OBJC_CLASS___NSConstantArray_00052f88,extraout_x1_00,&local_180
                               ,auStack_130,0x10);
          uVar12 = auVar21._8_8_;
          lVar9 = auVar21._0_8_;
        } while (lVar9 != 0);
      }
      objc_msgSend_insertSubview_aboveSubview_(lVar6,uVar12,lVar7,uVar3);
      _objc_setAssociatedObject(uVar3,param_7,lVar7,1);
      _objc_destroyWeak(auStack_138);
    }
    objc_msgSend_superview(lVar7);
    lVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 != lVar6) {
      objc_msgSend_insertSubview_aboveSubview_(lVar6,extraout_x1_01,lVar7,uVar3);
    }
    dVar17 = param_5;
    if (param_5 < 0.0) {
      objc_msgSend_layer(uVar3);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      dVar17 = (double)objc_msgSend_cornerRadius();
      _objc_release(uVar10);
    }
    objc_msgSend_frame(lVar7);
    uVar11 = _CGRectEqualToRect();
    if ((uVar11 & 1) == 0) {
      objc_msgSend_setFrame_(dVar15 - param_2,dVar18 - param_1,dVar20,dVar19,lVar7);
    }
    objc_msgSend_layer(lVar7);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    dVar18 = (double)objc_msgSend_cornerRadius();
    _objc_release(uVar10);
    if (0.5 < ABS(dVar18 - dVar17)) {
      objc_msgSend_layer(lVar7);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setCornerRadius_(dVar17);
      _objc_release(uVar10);
      objc_msgSend_updateSpecular(lVar7);
      objc_msgSend_applyFilters(lVar7);
    }
    uVar10 = *(undefined8 *)PTR__kCACornerCurveContinuous_00050390;
    objc_msgSend_layer(lVar7);
    auVar21 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setCornerCurve_(auVar21._0_8_,auVar21._8_8_,uVar10);
    _objc_release(auVar21._0_8_);
    objc_msgSend_layer(lVar7);
    auVar21 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setMasksToBounds_(auVar21._0_8_,auVar21._8_8_,1);
    _objc_release(auVar21._0_8_);
    puVar1 = PTR_LOOP_00055f70;
    objc_msgSend_valueWithUIEdgeInsets_
              (param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_00055bc0);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar7,puVar1,uVar10,1);
    _objc_release(uVar10);
    puVar1 = PTR_LOOP_00055f78;
    objc_msgSend_numberWithDouble_(param_5,PTR__OBJC_CLASS___NSNumber_00055ae0);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar7,puVar1,uVar10,1);
    _objc_release(uVar10);
    auVar21 = objc_msgSend_isHidden(uVar3);
    if ((auVar21 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      objc_msgSend_setHidden_(uVar3,auVar21._8_8_,1);
    }
    _objc_release(lVar7);
  }
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x000188ac  FUN_000188ac

void FUN_000188ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  objc_msgSend_applyFilters();
  _objc_release(uVar1);
  return;
}



// ===== 0x000188d8  _LGResyncGlassGeometry

void _LGResyncGlassGeometry
               (undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5,
               undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined auVar15 [16];
  
  uVar1 = _objc_retain();
  _objc_getAssociatedObject(uVar1,param_6);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) goto LAB_00018ae8;
  _objc_getAssociatedObject(lVar2,PTR_LOOP_00055f70);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_getAssociatedObject(lVar2,PTR_LOOP_00055f78);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    dVar9 = *(double *)PTR__UIEdgeInsetsZero_00050238;
    dVar13 = *(double *)(PTR__UIEdgeInsetsZero_00050238 + 8);
    dVar12 = *(double *)(PTR__UIEdgeInsetsZero_00050238 + 0x10);
    dVar14 = *(double *)(PTR__UIEdgeInsetsZero_00050238 + 0x18);
    if (lVar4 == 0) goto LAB_000189a0;
LAB_0001897c:
    dVar10 = (double)objc_msgSend_doubleValue(lVar4);
  }
  else {
    dVar9 = (double)objc_msgSend_UIEdgeInsetsValue(lVar3);
    dVar12 = param_3;
    dVar13 = param_2;
    dVar14 = param_4;
    if (lVar4 != 0) goto LAB_0001897c;
LAB_000189a0:
    dVar10 = -1.0;
  }
  uVar5 = _objc_retain(uVar1);
  _objc_getAssociatedObject(uVar5,param_6);
  lVar6 = _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    dVar11 = (double)objc_msgSend_frame(uVar5);
    if (dVar10 < 0.0) {
      objc_msgSend_layer(uVar5);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      dVar10 = (double)objc_msgSend_cornerRadius();
      _objc_release(uVar7);
    }
    objc_msgSend_frame(lVar6);
    uVar8 = _CGRectEqualToRect();
    if ((uVar8 & 1) == 0) {
      objc_msgSend_setFrame_
                (dVar11 - dVar13,param_2 - dVar9,dVar14 + dVar13 + param_3,dVar12 + dVar9 + param_4,
                 lVar6);
    }
    objc_msgSend_layer(lVar6);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    dVar12 = (double)objc_msgSend_cornerRadius();
    _objc_release(uVar7);
    if (0.5 < ABS(dVar12 - dVar10)) {
      objc_msgSend_layer(lVar6);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setCornerRadius_(dVar10);
      _objc_release(uVar7);
      objc_msgSend_updateSpecular(lVar6);
      objc_msgSend_applyFilters(lVar6);
    }
    auVar15 = objc_msgSend_isHidden(uVar5);
    if ((auVar15 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      objc_msgSend_setHidden_(uVar5,auVar15._8_8_,1);
    }
  }
  _objc_release(lVar6);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
LAB_00018ae8:
  _objc_release(lVar2);
  _objc_release(uVar1);
  return;
}



// ===== 0x00018b1c  _LGRemoveGlassFromMaterial

void _LGRemoveGlassFromMaterial(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 extraout_x1;
  
  uVar1 = _objc_retain();
  _objc_getAssociatedObject(uVar1,param_2);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    _objc_setAssociatedObject(uVar1,param_2,0,0);
    objc_msgSend_setHidden_(uVar1,extraout_x1,0);
    objc_msgSend_removeFromSuperview(lVar2);
  }
  _objc_release(lVar2);
  _objc_release(uVar1);
  return;
}



// ===== 0x00018b94  _LGMaterialHasGlass

bool _LGMaterialHasGlass(void)

{
  long lVar1;
  
  _objc_getAssociatedObject();
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



// ===== 0x00018bc8  FUN_00018bc8

void FUN_00018bc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_00056288;
  DAT_00056288 = uVar2;
  _objc_release(uVar1);
  return;
}



// ===== 0x00018bfc  FUN_00018bfc

void FUN_00018bfc(void)

{
  _dispatch_async(PTR___dispatch_main_q_000502c0,&PTR___NSConcreteGlobalBlock_00051080);
  return;
}



// ===== 0x00018c10  FUN_00018c10

void FUN_00018c10(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined8 local_110;
  long lStack_108;
  long *local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined auStack_c8 [128];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000502b0;
  _LGInvalidateGlassPreferenceCache();
  objc_msgSend_allObjects(DAT_00056270);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_count();
  _LGLog(&cf_renderparametersready_refreshing_lulivefilters);
  objc_msgSend_begin(PTR__OBJC_CLASS___CATransaction_00055b48);
  objc_msgSend_setDisableActions_(PTR__OBJC_CLASS___CATransaction_00055b48,extraout_x1,1);
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = (long *)0x0;
  auVar5 = _objc_retain(uVar1);
  uVar1 = auVar5._0_8_;
  lVar2 = objc_msgSend_countByEnumeratingWithState_objects_count_
                    (uVar1,auVar5._8_8_,&local_110,auStack_c8,0x10);
  if (lVar2 != 0) {
    lVar3 = *local_100;
    do {
      lVar4 = 0;
      do {
        if (*local_100 != lVar3) {
          _objc_enumerationMutation(uVar1);
        }
        objc_msgSend_reapplyFilterForParameterReload(*(undefined8 *)(lStack_108 + lVar4 * 8));
        lVar4 = lVar4 + 1;
      } while (lVar2 != lVar4);
      lVar2 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar1,extraout_x1_00,&local_110,auStack_c8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(uVar1);
  objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_00055b48);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00018d54  FUN_00018d54

undefined8 FUN_00018d54(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  objc_msgSend_mainBundle(PTR__OBJC_CLASS___NSBundle_00055b58);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_bundleIdentifier();
  auVar3 = _objc_retainAutoreleasedReturnValue();
  uVar2 = objc_msgSend_isEqualToString_(auVar3._0_8_,auVar3._8_8_,&cf_com_apple_springboard);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar1);
  return uVar2;
}



// ===== 0x00018dc0  FUN_00018dc0

void FUN_00018dc0(void)

{
  _dispatch_async(PTR___dispatch_main_q_000502c0,&PTR___NSConcreteGlobalBlock_000510a0);
  return;
}



// ===== 0x00018dd4  FUN_00018dd4

void FUN_00018dd4(void)

{
  double dVar1;
  
  dVar1 = DAT_00055f80;
  DAT_00055f80 = 0.0;
  if ((0.0 <= DAT_00055f88) && (ABS(dVar1) <= DAT_0001e290)) {
    DAT_00055f80 = 0.0;
    return;
  }
  DAT_00055f88 = 0.0;
  _LGLog(&cf_motionhighlightsprefsenabled__dsensitivity___2f);
  return;
}



// ===== 0x00018e30  FUN_00018e30

void FUN_00018e30(void)

{
  int iVar1;
  
  if ((DAT_00056299 == '\x01') && (iVar1 = FUN_00018d54(), iVar1 != 0)) {
    objc_msgSend_stopDeviceMotionUpdates(DAT_00056280);
    objc_msgSend_invalidate(0);
    FUN_0001603c();
    return;
  }
  return;
}



// ===== 0x00018e74  FUN_00018e74

void FUN_00018e74(void)

{
  _LGInvalidateGlassPreferenceCache();
  FUN_00018dd4();
  FUN_00018e30();
  return;
}



// ===== 0x00018e8c  layerClass

/* Function Stack Size: 0x10 bytes */

CLASS LGSettingsLowBlurView::layerClass(ID param_1,SEL param_2)

{
  long lVar1;
  CLASS CVar2;
  
  lVar1 = _NSClassFromString(&cf_CABackdropLayer);
  if (lVar1 == 0) {
    _objc_opt_class(PTR__OBJC_CLASS___CALayer_00055bd0);
  }
  CVar2 = _objc_retainAutoreleaseReturnValue();
  return CVar2;
}



// ===== 0x00018eb8  LGSettingsLowBlurView__initWithFrame_

/* Function Stack Size: 0x30 bytes */

ID LGSettingsLowBlurView::LGSettingsLowBlurView__initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  undefined8 extraout_x1;
  undefined auVar2 [16];
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00055c38;
  local_30 = param_1;
  auVar2 = _objc_msgSendSuper2(&local_30,PTR_s_initWithFrame__00055320);
  IVar1 = auVar2._0_8_;
  if (IVar1 != 0) {
    objc_msgSend_setUserInteractionEnabled_(IVar1,auVar2._8_8_,0);
    objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
    auVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setBackgroundColor_(IVar1,auVar2._8_8_,auVar2._0_8_);
    _objc_release(auVar2._0_8_);
    objc_msgSend_setOpaque_(IVar1,extraout_x1,0);
    *(undefined8 *)(IVar1 + (long)_lgBlurRadius) = 0x4008000000000000;
    objc_msgSend_lg_configure(IVar1);
    _objc_retain(IVar1);
  }
  _objc_release(IVar1);
  return IVar1;
}



// ===== 0x00018f6c  LGSettingsLowBlurView__didMoveToWindow

/* Function Stack Size: 0x10 bytes */

void LGSettingsLowBlurView::LGSettingsLowBlurView__didMoveToWindow(ID param_1,SEL param_2)

{
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00055c38;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_didMoveToWindow_00055210);
  objc_msgSend_lg_configure(param_1);
  return;
}



// ===== 0x00018fb4  LGSettingsLowBlurView__layoutSubviews

/* Function Stack Size: 0x10 bytes */

void LGSettingsLowBlurView::LGSettingsLowBlurView__layoutSubviews(ID param_1,SEL param_2)

{
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00055c38;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_layoutSubviews_000553d8);
  objc_msgSend_lg_configure(param_1);
  return;
}



// ===== 0x00018ffc  LGSettingsLowBlurView__setLgBlurRadius_

/* Function Stack Size: 0x18 bytes */

void LGSettingsLowBlurView::LGSettingsLowBlurView__setLgBlurRadius_
               (ID param_1,SEL param_2,double param_3)

{
  if (ABS(*(double *)(param_1 + (long)_lgBlurRadius) - param_3) < DAT_0001e290) {
    return;
  }
  *(double *)(param_1 + (long)_lgBlurRadius) = param_3;
  objc_msgSend_lg_configure();
  return;
}



// ===== 0x00019028  LGSettingsLowBlurView__lg_configure

/* Function Stack Size: 0x10 bytes */

void LGSettingsLowBlurView::LGSettingsLowBlurView__lg_configure(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined auVar6 [16];
  long local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_000502b0;
  lVar1 = _NSClassFromString(&cf_CABackdropLayer);
  if (lVar1 != 0) {
    objc_msgSend_layer(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_opt_isKindOfClass(uVar2,lVar1);
    _objc_release(uVar2);
    if ((uVar3 & 1) != 0) {
      lVar1 = (long)_lgBlurRadius;
      if (*(double *)(param_1 + lVar1) <= 0.0) {
        objc_msgSend_layer(param_1);
        auVar6 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setFilters_(auVar6._0_8_,auVar6._8_8_,0);
        if (*(long *)PTR____stack_chk_guard_000502b0 == local_48) {
          _objc_release(auVar6._0_8_);
          return;
        }
        goto LAB_0001932c;
      }
      objc_msgSend_layer(param_1);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setValue_forKey_
                (auVar6._0_8_,auVar6._8_8_,PTR____kCFBooleanFalse_00050288,
                 &cf_layerUsesCoreImageFilters);
      _objc_release(auVar6._0_8_);
      objc_msgSend_layer(param_1);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setValue_forKey_
                (auVar6._0_8_,auVar6._8_8_,PTR____kCFBooleanTrue_00050290,&cf_windowServerAware);
      _objc_release(auVar6._0_8_);
      objc_msgSend_layer(param_1);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_valueForKey_(auVar6._0_8_,auVar6._8_8_,&cf_groupName);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(auVar6._0_8_);
      if (lVar4 == 0) {
        objc_msgSend_layer(param_1);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_UUID(PTR__OBJC_CLASS___NSUUID_00055be8);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_UUIDString();
        auVar6 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setValue_forKey_(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_groupName);
        _objc_release(auVar6._0_8_);
        _objc_release(uVar5);
        _objc_release(uVar2);
      }
      lVar4 = _NSClassFromString(&cf_CAFilter);
      uVar2 = _NSSelectorFromString(&cf_filterWithName_);
      if ((lVar4 != 0) && (uVar3 = _objc_opt_respondsToSelector(lVar4,uVar2), (uVar3 & 1) != 0)) {
        _objc_msgSend(lVar4,uVar2,&cf_gaussianBlur);
        lVar4 = _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          objc_msgSend_numberWithDouble_
                    (*(undefined8 *)(param_1 + lVar1),PTR__OBJC_CLASS___NSNumber_00055ae0);
          auVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setValue_forKey_(lVar4,auVar6._8_8_,auVar6._0_8_,&cf_inputRadius);
          _objc_release(auVar6._0_8_);
          objc_msgSend_setValue_forKey_
                    (lVar4,extraout_x1,PTR____kCFBooleanTrue_00050290,&cf_inputNormalizeEdges);
          local_50 = lVar4;
          objc_msgSend_arrayWithObjects_count_
                    (PTR__OBJC_CLASS___NSArray_00055ad0,extraout_x1_00,&local_50,1);
          uVar2 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_layer(param_1);
          auVar6 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setFilters_(auVar6._0_8_,auVar6._8_8_,uVar2);
          _objc_release(auVar6._0_8_);
          _objc_release(uVar2);
          _objc_release(lVar4);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_48) {
    return;
  }
LAB_0001932c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00019354  LGSettingsLowBlurView__lgBlurRadius

/* Function Stack Size: 0x10 bytes */

double LGSettingsLowBlurView::LGSettingsLowBlurView__lgBlurRadius(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lgBlurRadius);
}



// ===== 0x00019364  _LGBackboardSafeModeActive

bool _LGBackboardSafeModeActive(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  undefined auVar5 [16];
  size_t local_68;
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  long local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSData_00055bf0;
  local_28 = *(long *)PTR____stack_chk_guard_000502b0;
  objc_msgSend_stringWithUTF8String_
            (PTR__OBJC_CLASS___NSString_00055ad8,param_2,
             "/var/mobile/Library/Accessibility/systembox-clockglass-backboardd-guard.bin");
  auVar5 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_dataWithContentsOfFile_(puVar1,auVar5._8_8_,auVar5._0_8_);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar5._0_8_);
  auVar5 = objc_msgSend_length(uVar4);
  if (auVar5._0_8_ == 0x20) {
    lStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    objc_msgSend_getBytes_length_(uVar4,auVar5._8_8_,&local_50,0x20);
    bVar2 = false;
    if ((((int)local_50 == 0x4c47534d) && (local_50._4_4_ == 1)) && (uStack_38._4_4_ != 0)) {
      local_60 = 0;
      uStack_58 = 0;
      local_68 = 0x10;
      local_30 = 0x1500000001;
      iVar3 = _sysctl((int *)&local_30,2,&local_60,&local_68,(void *)0x0,0);
      bVar2 = iVar3 == 0 && lStack_48 == local_60;
    }
  }
  else {
    bVar2 = false;
  }
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_28) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x000194a8  _LGClearBackboardSafeMode

int _LGClearBackboardSafeMode(void)

{
  int iVar1;
  
  _unlink("/var/mobile/Library/Accessibility/systembox-clockglass-backboardd-guard.bin");
  iVar1 = _unlink("/var/mobile/Library/Accessibility/systembox-clockglass-backboardd-alert");
  return iVar1;
}



// ===== 0x000194cc  _LGMainBundleIdentifier

void _LGMainBundleIdentifier(void)

{
  if (DAT_000562b0 != -1) {
    _dispatch_once(&DAT_000562b0,&PTR___NSConcreteGlobalBlock_00051128);
  }
  _objc_retainAutoreleaseReturnValue(DAT_000562a8);
  return;
}



// ===== 0x0001950c  FUN_0001950c

void FUN_0001950c(void)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  
  objc_msgSend_mainBundle(PTR__OBJC_CLASS___NSBundle_00055b58);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_bundleIdentifier();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  pcVar4 = (cfstringStruct *)objc_msgSend_copy();
  pcVar1 = &cf___;
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar1 = pcVar4;
  }
  _objc_storeStrong(&DAT_000562a8,pcVar1);
  _objc_release(pcVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  return;
}



// ===== 0x0001958c  _LGIsSpringBoardProcess

undefined8 _LGIsSpringBoardProcess(void)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  _LGMainBundleIdentifier();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = objc_msgSend_isEqualToString_(auVar2._0_8_,auVar2._8_8_,&cf_com_apple_springboard);
  _objc_release(auVar2._0_8_);
  return uVar1;
}



// ===== 0x000195d0  _LGIsPreferencesProcess

undefined8 _LGIsPreferencesProcess(void)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  _LGMainBundleIdentifier();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = objc_msgSend_isEqualToString_(auVar2._0_8_,auVar2._8_8_,&cf_com_apple_Preferences);
  _objc_release(auVar2._0_8_);
  return uVar1;
}



// ===== 0x00019614  _LGIsExcludedSystemProcess

undefined _LGIsExcludedSystemProcess(void)

{
  if (DAT_000562c0 != -1) {
    _dispatch_once(&DAT_000562c0,&PTR___NSConcreteGlobalBlock_00051148);
  }
  return DAT_000562b8;
}



// ===== 0x00019654  FUN_00019654

void FUN_00019654(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined auStack_e8 [128];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000502b0;
  _LGMainBundleIdentifier();
  pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf___;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar1 = pcVar2;
  }
  objc_msgSend_lowercaseString(pcVar1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar2);
  objc_msgSend_mainBundle(PTR__OBJC_CLASS___NSBundle_00055b58);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_executablePath();
  pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf___;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar1 = pcVar2;
  }
  objc_msgSend_lastPathComponent(pcVar1);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_lowercaseString();
  uVar6 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(pcVar2);
  _objc_release(uVar4);
  objc_msgSend_processInfo(PTR__OBJC_CLASS___NSProcessInfo_00055bf8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_processName();
  pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf___;
  if (pcVar2 != (cfstringStruct *)0x0) {
    pcVar1 = pcVar2;
  }
  objc_msgSend_lowercaseString(pcVar1);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(pcVar2);
  _objc_release(uVar4);
  auVar11 = objc_msgSend_isEqualToString_(uVar3,extraout_x1,&cf_com_apple_springboard);
  if ((auVar11 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    auVar11 = objc_msgSend_isEqualToString_(uVar3,auVar11._8_8_,&cf_com_apple_preferences);
    if (((auVar11 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
       (uVar7 = objc_msgSend_isEqualToString_(uVar3,auVar11._8_8_,&cf_com_apple_mobilesafari),
       (uVar7 & 1) == 0)) {
      auVar11 = objc_msgSend_length(uVar3);
      if (auVar11._0_8_ == 0) {
LAB_00019878:
        DAT_000562b8 = 1;
      }
      else {
        uStack_108 = 0;
        local_110 = 0;
        uStack_f8 = 0;
        uStack_100 = 0;
        lStack_128 = 0;
        local_130 = 0;
        uStack_118 = 0;
        local_120 = (long *)0x0;
        auVar11 = objc_msgSend_countByEnumeratingWithState_objects_count_
                            (&PTR__OBJC_CLASS___NSConstantArray_00052fa0,auVar11._8_8_,&local_130,
                             auStack_e8,0x10);
        if (auVar11._0_8_ != 0) {
          lVar9 = *local_120;
          do {
            uVar4 = auVar11._8_8_;
            lVar10 = 0;
            do {
              if (*local_120 != lVar9) {
                _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_00052fa0);
                uVar4 = extraout_x1_00;
              }
              uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
              auVar12 = objc_msgSend_containsString_(uVar3,uVar4,uVar8);
              if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00019878;
              auVar12 = objc_msgSend_containsString_(uVar6,auVar12._8_8_,uVar8);
              if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00019878;
              auVar12 = objc_msgSend_containsString_(uVar5,auVar12._8_8_,uVar8);
              uVar4 = auVar12._8_8_;
              if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00019878;
              lVar10 = lVar10 + 1;
            } while (auVar11._0_8_ != lVar10);
            auVar11 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                (&PTR__OBJC_CLASS___NSConstantArray_00052fa0,uVar4,&local_130,
                                 auStack_e8,0x10);
          } while (auVar11._0_8_ != 0);
        }
      }
    }
  }
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_000502b0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x000198d8  _LGIsAtLeastiOS16

undefined _LGIsAtLeastiOS16(void)

{
  if (DAT_000562d0 != -1) {
    _dispatch_once(&DAT_000562d0,&PTR___NSConcreteGlobalBlock_00051168);
  }
  return DAT_000562c8;
}



// ===== 0x00019918  FUN_00019918

void FUN_00019918(void)

{
  undefined auVar1 [16];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  objc_msgSend_processInfo(PTR__OBJC_CLASS___NSProcessInfo_00055bf8);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  local_30 = 0;
  uStack_28 = 0;
  local_38 = 0x10;
  DAT_000562c8 = objc_msgSend_isOperatingSystemAtLeastVersion_(auVar1._0_8_,auVar1._8_8_,&local_38);
  _objc_release(auVar1._0_8_);
  return;
}



// ===== 0x00019974  _LGRWBDefaultWidgetBundleIDsText

void _LGRWBDefaultWidgetBundleIDsText(void)

{
  if (DAT_000562e0 != -1) {
    _dispatch_once(&DAT_000562e0,&PTR___NSConcreteGlobalBlock_00051188);
  }
  _objc_retainAutoreleaseReturnValue(DAT_000562d8);
  return;
}



// ===== 0x000199b4  FUN_000199b4

void FUN_000199b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  objc_msgSend_componentsJoinedByString_
            (&PTR__OBJC_CLASS___NSConstantArray_00052fb8,param_2,&cf_newline_s_);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_000562d8;
  DAT_000562d8 = uVar2;
  _objc_release(uVar1);
  return;
}



// ===== 0x000199f0  _LGEffectiveBannerBlur

undefined8 _LGEffectiveBannerBlur(double param_1)

{
  undefined8 uVar1;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  uVar1 = NEON_fminnm(param_1 * DAT_0004a7b8,0x4054000000000000);
  return uVar1;
}



// ===== 0x00019a14  _LGReloadPreferences

void _LGReloadPreferences(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined auVar5 [16];
  
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_dictionaryWithContentsOfFile_
            (PTR__OBJC_CLASS___NSDictionary_00055ae8,auVar5._8_8_,auVar5._0_8_);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_00055ae8);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  puVar4 = PTR____NSDictionary0__struct_00050278;
  if ((uVar3 & 1) != 0) {
    puVar4 = (undefined *)_objc_retain(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(auVar5._0_8_);
  _os_unfair_lock_lock(&DAT_000562e8);
  uVar1 = DAT_000562a0;
  DAT_000562a0 = puVar4;
  _objc_release(uVar1);
  _os_unfair_lock_unlock(&DAT_000562e8);
  return;
}



// ===== 0x00019acc  _LGObservePreferenceChanges

void _LGObservePreferenceChanges(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  lVar1 = _objc_retain();
  if (lVar1 != 0) {
    objc_msgSend_defaultCenter(PTR__OBJC_CLASS___NSNotificationCenter_00055b68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_mainQueue(PTR__OBJC_CLASS___NSOperationQueue_00055b70);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_58 = PTR___NSConcreteStackBlock_00050260;
    local_50 = DAT_0001e278;
    local_48 = FUN_00019bac;
    puStack_40 = &DAT_000511a8;
    auVar4 = _objc_retain(lVar1);
    local_38 = auVar4._0_8_;
    objc_msgSend_addObserverForName_object_queue_usingBlock_
              (uVar2,auVar4._8_8_,&cf_com_wkk_systembox_ClockInProcessReload,0,uVar3,&local_58);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(local_38);
  }
  _objc_release(lVar1);
  return;
}



// ===== 0x00019bac  FUN_00019bac

void FUN_00019bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00019bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



// ===== 0x00019bb8  FUN_00019bb8

void FUN_00019bb8(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  return;
}



// ===== 0x00019bc8  _LGHasExplicitPreferenceValue

bool _LGHasExplicitPreferenceValue(void)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  
  uVar2 = _objc_retain();
  lVar3 = objc_msgSend_length();
  if (lVar3 == 0) {
    bVar1 = false;
  }
  else {
    if (DAT_00056310 != -1) {
      _dispatch_once(&DAT_00056310,&PTR___NSConcreteGlobalBlock_000511f8);
    }
    _os_unfair_lock_lock(&DAT_000562e8);
    uVar4 = _objc_retain(DAT_000562a0);
    _os_unfair_lock_unlock(&DAT_000562e8);
    objc_msgSend_objectForKeyedSubscript_(uVar4,extraout_x1,uVar2);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    bVar1 = lVar3 != 0;
    _objc_release(lVar3);
  }
  _objc_release(uVar2);
  return bVar1;
}



// ===== 0x00019c8c  _LG_prefBool

undefined8 _LG_prefBool(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_00019cec();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_00055ae0);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  if ((uVar3 & 1) != 0) {
    param_2 = objc_msgSend_boolValue(uVar1);
  }
  _objc_release(uVar1);
  return param_2;
}



// ===== 0x00019cec  FUN_00019cec

void FUN_00019cec(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  
  uVar1 = _objc_retain();
  lVar2 = objc_msgSend_length();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_00056310 != -1) {
      _dispatch_once(&DAT_00056310,&PTR___NSConcreteGlobalBlock_000511f8);
    }
    _os_unfair_lock_lock(&DAT_000562e8);
    uVar3 = _objc_retain(DAT_000562a0);
    _os_unfair_lock_unlock(&DAT_000562e8);
    objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1,uVar1);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}



// ===== 0x00019da0  _LG_prefFloat

undefined8 _LG_prefFloat(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_00019cec();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_00055ae0);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = objc_msgSend_doubleValue(uVar1);
  }
  _objc_release(uVar1);
  return param_1;
}



// ===== 0x00019e08  _LG_prefInteger

undefined8 _LG_prefInteger(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_00019cec();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_00055ae0);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  if ((uVar3 & 1) != 0) {
    param_2 = objc_msgSend_integerValue(uVar1);
  }
  _objc_release(uVar1);
  return param_2;
}



// ===== 0x00019e68  _LG_prefString

undefined8 _LG_prefString(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = _objc_retain(param_2);
  FUN_00019cec(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_opt_class(PTR__OBJC_CLASS___NSString_00055ad8);
  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);
  if (((uVar4 & 1) == 0) || (lVar5 = objc_msgSend_length(uVar2), uVar3 = uVar2, lVar5 == 0)) {
    uVar3 = uVar1;
  }
  uVar3 = _objc_retainAutoreleaseReturnValue(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



// ===== 0x00019efc  _LG_globalEnabled

void _LG_globalEnabled(void)

{
  _LG_prefBool(&cf_Global_Enabled,0);
  return;
}



// ===== 0x00019f0c  _LGDebugLoggingEnabled

void _LGDebugLoggingEnabled(void)

{
  _LG_prefBool(&cf_Debug_Logging_Enabled,0);
  return;
}



// ===== 0x00019f1c  _LGLog

void _LGLog(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined auVar8 [16];
  undefined *puVar9;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  uVar3 = _objc_retain();
  iVar2 = _LG_prefBool(&cf_Debug_Logging_Enabled,0);
  if (iVar2 != 0) {
    puVar9 = (undefined *)register0x00000008;
    auVar8 = _objc_alloc(PTR__OBJC_CLASS___NSString_00055ad8);
    uVar4 = objc_msgSend_initWithFormat_arguments_(auVar8._0_8_,auVar8._8_8_,uVar3,puVar9);
    _NSLog(&cf__LiquidAss___);
    objc_msgSend_stringWithFormat_
              (PTR__OBJC_CLASS___NSString_00055ad8,extraout_x1,&cf__LiquidAss___);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_retain();
    if (DAT_00056328 != -1) {
      _dispatch_once(&DAT_00056328,&PTR___NSConcreteGlobalBlock_00051288);
    }
    uVar6 = _objc_retain(DAT_00056320);
    lVar7 = objc_msgSend_length();
    if ((lVar7 != 0) && (lVar7 = objc_msgSend_length(uVar5), lVar7 != 0)) {
      if (DAT_00056318 != -1) {
        _dispatch_once(&DAT_00056318,&PTR___NSConcreteGlobalBlock_00051238);
      }
      uVar1 = DAT_00056300;
      local_70 = PTR___NSConcreteStackBlock_00050260;
      local_68 = DAT_0001e278;
      local_60 = FUN_0001a3d8;
      puStack_58 = &DAT_00051258;
      local_50 = _objc_retain(uVar6);
      local_48 = _objc_retain(uVar5);
      _dispatch_async(uVar1,&local_70);
      _objc_release(local_48);
      _objc_release(local_50);
    }
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  return;
}



// ===== 0x0001a0c4  _LGSharedRGBColorSpace

undefined8 _LGSharedRGBColorSpace(void)

{
  if (DAT_000562f8 != -1) {
    _dispatch_once(&DAT_000562f8,&PTR___NSConcreteGlobalBlock_000511d8);
  }
  return DAT_000562f0;
}



// ===== 0x0001a104  FUN_0001a104

void FUN_0001a104(void)

{
  DAT_000562f0 = _CGColorSpaceCreateDeviceRGB();
  return;
}



// ===== 0x0001a120  _LGNormalizedImageForUpload

void _LGNormalizedImageForUpload(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = _objc_retain();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    lVar2 = objc_msgSend_imageOrientation(lVar1);
    if (lVar2 == 0) {
      uVar4 = _objc_retain(lVar1);
    }
    else {
      uVar4 = objc_msgSend_size(lVar1);
      uVar5 = objc_msgSend_scale(lVar1);
      _UIGraphicsBeginImageContextWithOptions(uVar4,param_2,uVar5,0);
      uVar4 = objc_msgSend_size(lVar1);
      objc_msgSend_size(lVar1);
      objc_msgSend_drawInRect_(0,0,uVar4,param_2,lVar1);
      _UIGraphicsGetImageFromCurrentImageContext();
      lVar3 = _objc_retainAutoreleasedReturnValue();
      _UIGraphicsEndImageContext();
      lVar2 = lVar1;
      if (lVar3 != 0) {
        lVar2 = lVar3;
      }
      uVar4 = _objc_retain(lVar2);
      _objc_release(lVar3);
    }
  }
  _objc_release(lVar1);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}



// ===== 0x0001a208  _LGTextureScaleKey

void _LGTextureScaleKey(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)(double)(long)(param_1 * DAT_0001e260);
  if (lVar1 < 2) {
    lVar1 = 1;
  }
  objc_msgSend_numberWithInteger_(PTR__OBJC_CLASS___NSNumber_00055ae0,param_3,lVar1);
  return;
}



// ===== 0x0001a230  _LGBlurSettingKey

void _LGBlurSettingKey(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  lVar1 = (long)(double)(long)(param_1 * DAT_0001e260);
  if (lVar1 < 1) {
    lVar1 = 0;
  }
  objc_msgSend_numberWithInteger_(PTR__OBJC_CLASS___NSNumber_00055ae0,param_3,lVar1);
  return;
}



// ===== 0x0001a260  _LGImageStableCacheKey

void _LGImageStableCacheKey(long param_1)

{
  if (param_1 != 0) {
    _objc_getAssociatedObject(param_1,PTR_LOOP_00055f90);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_autoreleaseReturnValue();
  return;
}



// ===== 0x0001a264  FUN_0001a264

void FUN_0001a264(undefined8 param_1)

{
  _objc_getAssociatedObject(param_1,PTR_LOOP_00055f90);
  _objc_retainAutoreleasedReturnValue();
  _objc_autoreleaseReturnValue();
  return;
}



// ===== 0x0001a288  _LGSetImageStableCacheKey

void _LGSetImageStableCacheKey(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_LOOP_00055f90;
  if (param_1 != 0) {
    uVar2 = _objc_retain();
    uVar3 = objc_msgSend_copy(param_2);
    _objc_setAssociatedObject(uVar2,puVar1,uVar3,3);
    _objc_release(uVar2);
    _objc_release(uVar3);
    return;
  }
  return;
}



// ===== 0x0001a2f0  FUN_0001a2f0

void FUN_0001a2f0(void)

{
  undefined8 uVar1;
  
  _LGReloadPreferences();
  uVar1 = _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver(uVar1,0,FUN_0001a324,&cf_com_wkk_systembox_prefschanged,0,4);
  return;
}



// ===== 0x0001a324  FUN_0001a324

void FUN_0001a324(void)

{
  _dispatch_async(PTR___dispatch_main_q_000502c0,&PTR___NSConcreteGlobalBlock_00051218);
  return;
}



// ===== 0x0001a338  FUN_0001a338

void FUN_0001a338(void)

{
  undefined auVar1 [16];
  
  _LGReloadPreferences();
  objc_msgSend_defaultCenter(PTR__OBJC_CLASS___NSNotificationCenter_00055b68);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_postNotificationName_object_
            (auVar1._0_8_,auVar1._8_8_,&cf_com_wkk_systembox_ClockInProcessReload,0);
  _objc_release(auVar1._0_8_);
  return;
}



// ===== 0x0001a380  FUN_0001a380

int FUN_0001a380(void)

{
  undefined8 uVar1;
  int iVar2;
  dispatch_queue_t pdVar3;
  
  pdVar3 = _dispatch_queue_create("com.wkk.systembox.clockglass.logfile",(dispatch_queue_attr_t)0x0)
  ;
  uVar1 = DAT_00056300;
  DAT_00056300 = pdVar3;
  _objc_release(uVar1);
  iVar2 = _atexit(FUN_0001a3bc);
  return iVar2;
}



// ===== 0x0001a3bc  FUN_0001a3bc

void FUN_0001a3bc(void)

{
  if (DAT_00056300 != 0) {
    _dispatch_sync(DAT_00056300,&PTR___NSConcreteGlobalBlock_000512a8);
    return;
  }
  FUN_0001a5b4();
  return;
}



// ===== 0x0001a3d8  FUN_0001a3d8

void FUN_0001a3d8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_00055c00);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  auVar6 = objc_msgSend_fileExistsAtPath_(auVar5._0_8_,auVar5._8_8_,*(undefined8 *)(param_1 + 0x20))
  ;
  uVar4 = auVar6._8_8_;
  if ((auVar6 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    objc_msgSend_data(PTR__OBJC_CLASS___NSData_00055bf0);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    local_38 = 0;
    objc_msgSend_writeToFile_options_error_
              (auVar6._0_8_,auVar6._8_8_,*(undefined8 *)(param_1 + 0x20),1,&local_38);
    lVar1 = _objc_retain(local_38);
    _objc_release(auVar6._0_8_);
    uVar4 = extraout_x1;
    if (lVar1 == 0) goto LAB_0001a490;
    objc_msgSend_localizedDescription(lVar1);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    _NSLog(&cf__LiquidAss_logfilecreatefailed__);
  }
  else {
LAB_0001a490:
    objc_msgSend_dataUsingEncoding_(*(undefined8 *)(param_1 + 0x28),uVar4,4);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    auVar6 = objc_msgSend_length();
    uVar4 = auVar6._8_8_;
    if (auVar6._0_8_ == 0) goto LAB_0001a578;
    if (DAT_00056308 == 0) {
      objc_msgSend_fileHandleForWritingAtPath_
                (PTR__OBJC_CLASS___NSFileHandle_00055c08,uVar4,*(undefined8 *)(param_1 + 0x20));
      lVar3 = _objc_retainAutoreleasedReturnValue();
      lVar2 = DAT_00056308;
      DAT_00056308 = lVar3;
      _objc_release(lVar2);
      uVar4 = extraout_x1_00;
      if (DAT_00056308 == 0) {
        _NSLog(&cf__LiquidAss_logfileopenfailed__);
        goto LAB_0001a578;
      }
    }
    local_40 = 0;
    objc_msgSend_seekToEndReturningOffset_error_(DAT_00056308,uVar4,0,&local_40);
    auVar6 = _objc_retain(local_40);
    lVar2 = auVar6._0_8_;
    if (lVar2 == 0) {
      local_48 = 0;
      objc_msgSend_writeData_error_(DAT_00056308,auVar6._8_8_,lVar1,&local_48);
      lVar2 = _objc_retain(local_48);
      if (lVar2 == 0) goto LAB_0001a578;
    }
    FUN_0001a5b4();
    objc_msgSend_localizedDescription(lVar2);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _NSLog(&cf__LiquidAss_logfileappendfailed__);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
LAB_0001a578:
  _objc_release(lVar1);
  _objc_release(auVar5._0_8_);
  return;
}



// ===== 0x0001a5b4  FUN_0001a5b4

void FUN_0001a5b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  if (DAT_00056308 != 0) {
    objc_msgSend_closeAndReturnError_(DAT_00056308,param_2,0);
    lVar1 = DAT_00056308;
    DAT_00056308 = 0;
    _objc_release(lVar1);
    return;
  }
  return;
}



// ===== 0x0001a5f4  FUN_0001a5f4

void FUN_0001a5f4(void)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  undefined auVar5 [16];
  
  objc_msgSend_mainBundle(PTR__OBJC_CLASS___NSBundle_00055b58);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_bundleIdentifier();
  auVar5 = _objc_retainAutoreleasedReturnValue();
  iVar2 = objc_msgSend_isEqualToString_(auVar5._0_8_,auVar5._8_8_,&cf_com_apple_mobilesafari);
  _objc_release(auVar5._0_8_);
  _objc_release(uVar3);
  uVar3 = DAT_00056320;
  if (iVar2 == 0) {
    DAT_00056320 = &cf__var_mobile_Library_Accessibility_systembox_clockglass_log;
  }
  else {
    _NSTemporaryDirectory();
    auVar5 = _objc_retainAutoreleasedReturnValue();
    uVar3 = auVar5._0_8_;
    objc_msgSend_stringByAppendingPathComponent_(uVar3,auVar5._8_8_,&cf_clockglass_log);
    pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
    uVar1 = DAT_00056320;
    DAT_00056320 = pcVar4;
    _objc_release(uVar1);
  }
  _objc_release(uVar3);
  return;
}



// ===== 0x0001a6b8  FUN_0001a6b8

bool FUN_0001a6b8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_00056340 == -1) {
    iVar1 = DAT_00056330 - param_1;
    if (DAT_00056330 <= param_1) {
LAB_0001a72c:
      if (iVar1 < 0 != SBORROW4(DAT_00056330,param_1)) {
        return false;
      }
      if (param_2 < DAT_00056334) {
        return true;
      }
      if (DAT_00056334 < param_2) {
        return false;
      }
      return param_3 <= DAT_00056338;
    }
  }
  else {
    _dispatch_once_f(&DAT_00056340,(void *)0x0,FUN_0001a7a0);
    iVar1 = DAT_00056330 - param_1;
    if (DAT_00056330 <= param_1) goto LAB_0001a72c;
  }
  return true;
}



// ===== 0x0001a7a0  FUN_0001a7a0

void FUN_0001a7a0(void)

{
  FUN_0001a938(1);
  return;
}



// ===== 0x0001a7a8  FUN_0001a7a8

void FUN_0001a7a8(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_40;
  uint uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000502b0;
  if (DAT_00056348 == -1) {
    if (DAT_00056350 == 0) {
LAB_0001a850:
      if (DAT_00056340 == -1) {
        iVar1 = DAT_00056330 - param_2;
      }
      else {
        _dispatch_once_f(&DAT_00056340,(void *)0x0,FUN_0001a7a0);
        iVar1 = DAT_00056330 - param_2;
      }
      if (param_2 < DAT_00056330) {
LAB_0001a884:
        uVar2 = 1;
        if (*(long *)PTR____stack_chk_guard_000502b0 == local_38) {
          return;
        }
      }
      else {
        if (iVar1 < 0 == SBORROW4(DAT_00056330,param_2)) {
          if ((int)param_3 < DAT_00056334) goto LAB_0001a884;
          if (DAT_00056334 < (int)param_3) goto LAB_0001a8a8;
          uVar2 = (ulong)((int)param_4 <= DAT_00056338);
          lVar3 = *(long *)PTR____stack_chk_guard_000502b0;
        }
        else {
LAB_0001a8a8:
          uVar2 = 0;
          lVar3 = *(long *)PTR____stack_chk_guard_000502b0;
        }
        if (lVar3 == local_38) {
          return;
        }
      }
      goto LAB_0001a900;
    }
  }
  else {
    _dispatch_once_f(&DAT_00056348,(void *)0x0,FUN_0001a930);
    if (DAT_00056350 == 0) goto LAB_0001a850;
  }
  uStack_3c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
  local_40 = param_1;
  uVar2 = __availability_version_check(1,&local_40);
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_38) {
    return;
  }
LAB_0001a900:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}



// ===== 0x0001a930  FUN_0001a930

void FUN_0001a930(void)

{
  FUN_0001a938(0);
  return;
}



// ===== 0x0001a938  FUN_0001a938

void FUN_0001a938(FILE *param_1)

{
  int iVar1;
  uint uVar2;
  FILE *pFVar3;
  code *pcVar4;
  FILE *pFVar5;
  FILE *pFVar6;
  FILE *pFVar7;
  FILE *pFVar8;
  FILE *pFVar9;
  FILE *pFVar10;
  FILE *pFVar11;
  size_t sVar12;
  void *pvVar13;
  size_t sVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  uchar *puVar20;
  char acStack_88 [32];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_000502b0;
  if (DAT_00056350 == (undefined *)0x0 || (int)param_1 != 0) {
    if (PTR___availability_version_check_000502b8 != (undefined *)0x0) {
      DAT_00056350 = PTR___availability_version_check_000502b8;
    }
    if ((DAT_00056350 == (undefined *)0x0 || (int)param_1 != 0) &&
       (param_1 = (FILE *)_dlsym(0xfffffffffffffffe,"kCFAllocatorNull"), param_1 != (FILE *)0x0)) {
      puVar20 = param_1->_p;
      pFVar3 = (FILE *)_dlsym(0xfffffffffffffffe,"CFDataCreateWithBytesNoCopy");
      param_1 = pFVar3;
      if (pFVar3 != (FILE *)0x0) {
        pcVar4 = (code *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateWithData");
        pFVar5 = (FILE *)_dlsym(0xfffffffffffffffe,"CFPropertyListCreateFromXMLData");
        param_1 = pFVar5;
        if ((((((ulong)pcVar4 | (ulong)pFVar5) != 0) &&
             (pFVar6 = (FILE *)_dlsym(0xfffffffffffffffe,"CFStringCreateWithCStringNoCopy"),
             param_1 = pFVar6, pFVar6 != (FILE *)0x0)) &&
            (pFVar7 = (FILE *)_dlsym(0xfffffffffffffffe,"CFDictionaryGetValue"), param_1 = pFVar7,
            pFVar7 != (FILE *)0x0)) &&
           (((pFVar8 = (FILE *)_dlsym(0xfffffffffffffffe,"CFGetTypeID"), param_1 = pFVar8,
             pFVar8 != (FILE *)0x0 &&
             (pFVar9 = (FILE *)_dlsym(0xfffffffffffffffe,"CFStringGetTypeID"), param_1 = pFVar9,
             pFVar9 != (FILE *)0x0)) &&
            ((pFVar10 = (FILE *)_dlsym(0xfffffffffffffffe,"CFStringGetCString"), param_1 = pFVar10,
             pFVar10 != (FILE *)0x0 &&
             ((pFVar11 = (FILE *)_dlsym(0xfffffffffffffffe,"CFRelease"), param_1 = pFVar11,
              pFVar11 != (FILE *)0x0 &&
              (param_1 = _fopen("/System/Library/CoreServices/SystemVersion.plist","r"),
              param_1 != (FILE *)0x0)))))))) {
          _fseek(param_1,0,2);
          sVar12 = _ftell(param_1);
          if ((long)sVar12 < 0) {
            pvVar13 = (void *)0x0;
          }
          else {
            _rewind(param_1);
            pvVar13 = _malloc(sVar12);
            if (((pvVar13 != (void *)0x0) &&
                (sVar14 = _fread(pvVar13,1,sVar12,param_1), sVar14 == sVar12)) &&
               (lVar15 = (*(code *)pFVar3)(0,pvVar13,sVar12,puVar20), lVar15 != 0)) {
              if (pcVar4 == (code *)0x0) {
                lVar16 = (*(code *)pFVar5)(0,lVar15,0,0);
              }
              else {
                lVar16 = (*pcVar4)();
              }
              if (lVar16 != 0) {
                lVar17 = (*(code *)pFVar6)(0,"ProductVersion",0x600,puVar20);
                if (lVar17 != 0) {
                  lVar18 = (*(code *)pFVar7)(lVar16,lVar17);
                  (*(code *)pFVar11)(lVar17);
                  if (lVar18 != 0) {
                    lVar17 = (*(code *)pFVar8)(lVar18);
                    lVar19 = (*(code *)pFVar9)();
                    if ((lVar17 == lVar19) &&
                       (iVar1 = (*(code *)pFVar10)(lVar18,acStack_88,0x20,0x8000100), iVar1 != 0)) {
                      _sscanf(acStack_88,"%d.%d.%d");
                    }
                  }
                }
                (*(code *)pFVar11)(lVar16);
              }
              (*(code *)pFVar11)(lVar15);
            }
          }
          _free(pvVar13);
          uVar2 = _fclose(param_1);
          param_1 = (FILE *)(ulong)uVar2;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_000502b0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(param_1);
}



// ===== 0x0001b370  objc_msgSend$CGColor

void objc_msgSend_CGColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_CGColor_00054f48);
  return;
}



// ===== 0x0001b390  objc_msgSend$CGRectValue

void objc_msgSend_CGRectValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_CGRectValue_00054f50);
  return;
}



// ===== 0x0001b3b0  objc_msgSend$UIEdgeInsetsValue

void objc_msgSend_UIEdgeInsetsValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_UIEdgeInsetsValue_00054f58);
  return;
}



// ===== 0x0001b3d0  objc_msgSend$UTF8String

void objc_msgSend_UTF8String(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_UTF8String_00054f60);
  return;
}



// ===== 0x0001b3f0  objc_msgSend$UUID

void objc_msgSend_UUID(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_UUID_00054f68);
  return;
}



// ===== 0x0001b410  objc_msgSend$UUIDString

void objc_msgSend_UUIDString(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_UUIDString_00054f70);
  return;
}



// ===== 0x0001b430  objc_msgSend$addObject_

void objc_msgSend_addObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_addObject__00054fb0);
  return;
}



// ===== 0x0001b450  objc_msgSend$addObjectsFromArray_

void objc_msgSend_addObjectsFromArray_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_addObjectsFromArray__00054fb8);
  return;
}



// ===== 0x0001b470  objc_msgSend$addObserverForName_object_queue_usingBlock_

void objc_msgSend_addObserverForName_object_queue_usingBlock_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_addObserverForName_object_queue__00054fc0);
  return;
}



// ===== 0x0001b490  objc_msgSend$addSublayer_

void objc_msgSend_addSublayer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_addSublayer__00054fc8);
  return;
}



// ===== 0x0001b4b0  objc_msgSend$addSubview_

void objc_msgSend_addSubview_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_addSubview__00054fd0);
  return;
}



// ===== 0x0001b4d0  objc_msgSend$addToRunLoop_forMode_

void objc_msgSend_addToRunLoop_forMode_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_addToRunLoop_forMode__00054fd8);
  return;
}



// ===== 0x0001b4f0  objc_msgSend$allObjects

void objc_msgSend_allObjects(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_allObjects_00054fe0);
  return;
}



// ===== 0x0001b510  objc_msgSend$alpha

void objc_msgSend_alpha(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_alpha_00054fe8);
  return;
}



// ===== 0x0001b530  objc_msgSend$appliedChanges

void objc_msgSend_appliedChanges(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_appliedChanges_00054ff0);
  return;
}



// ===== 0x0001b550  objc_msgSend$applyFilters

void objc_msgSend_applyFilters(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_applyFilters_00054ff8);
  return;
}



// ===== 0x0001b570  objc_msgSend$applyReason_

void objc_msgSend_applyReason_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_applyReason__00055000);
  return;
}



// ===== 0x0001b590  objc_msgSend$applySpecularAngle_

void objc_msgSend_applySpecularAngle_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_applySpecularAngle__00055008);
  return;
}



// ===== 0x0001b5b0  objc_msgSend$applying

void objc_msgSend_applying(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_applying_00055010);
  return;
}



// ===== 0x0001b5d0  objc_msgSend$array

void objc_msgSend_array(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_array_00055018);
  return;
}



// ===== 0x0001b5f0  objc_msgSend$arrayWithCapacity_

void objc_msgSend_arrayWithCapacity_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_arrayWithCapacity__00055020);
  return;
}



// ===== 0x0001b610  objc_msgSend$arrayWithObject_

void objc_msgSend_arrayWithObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_arrayWithObject__00055028);
  return;
}



// ===== 0x0001b630  objc_msgSend$arrayWithObjects_count_

void objc_msgSend_arrayWithObjects_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_arrayWithObjects_count__00055030);
  return;
}



// ===== 0x0001b650  objc_msgSend$attribute_atIndex_effectiveRange_

void objc_msgSend_attribute_atIndex_effectiveRange_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_attribute_atIndex_effectiveRange_00055038);
  return;
}



// ===== 0x0001b670  objc_msgSend$attributedText

void objc_msgSend_attributedText(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_attributedText_00055040);
  return;
}



// ===== 0x0001b690  objc_msgSend$axisIDs

void objc_msgSend_axisIDs(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_axisIDs_00055048);
  return;
}



// ===== 0x0001b6b0  objc_msgSend$axisRanges

void objc_msgSend_axisRanges(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_axisRanges_00055050);
  return;
}



// ===== 0x0001b6d0  objc_msgSend$begin

void objc_msgSend_begin(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_begin_00055060);
  return;
}



// ===== 0x0001b6f0  objc_msgSend$blackColor

void objc_msgSend_blackColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_blackColor_00055068);
  return;
}



// ===== 0x0001b710  objc_msgSend$boolValue

void objc_msgSend_boolValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_boolValue_00055070);
  return;
}



// ===== 0x0001b730  objc_msgSend$bounds

void objc_msgSend_bounds(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_bounds_00055078);
  return;
}



// ===== 0x0001b750  objc_msgSend$bringSubviewToFront_

void objc_msgSend_bringSubviewToFront_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_bringSubviewToFront__00055080);
  return;
}



// ===== 0x0001b770  objc_msgSend$bundleIdentifier

void objc_msgSend_bundleIdentifier(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_bundleIdentifier_00055088);
  return;
}



// ===== 0x0001b790  objc_msgSend$cache

void objc_msgSend_cache(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_cache_00055090);
  return;
}



// ===== 0x0001b7b0  objc_msgSend$callStackSymbols

void objc_msgSend_callStackSymbols(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_callStackSymbols_00055098);
  return;
}



// ===== 0x0001b7d0  objc_msgSend$clampedValueForAxis_

void objc_msgSend_clampedValueForAxis_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_clampedValueForAxis__000550a0);
  return;
}



// ===== 0x0001b7f0  objc_msgSend$clearColor

void objc_msgSend_clearColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_clearColor_000550b0);
  return;
}



// ===== 0x0001b810  objc_msgSend$clipsToBounds

void objc_msgSend_clipsToBounds(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_clipsToBounds_000550b8);
  return;
}



// ===== 0x0001b830  objc_msgSend$closeAndReturnError_

void objc_msgSend_closeAndReturnError_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_closeAndReturnError__000550c0);
  return;
}



// ===== 0x0001b850  objc_msgSend$colorGradientLayer

void objc_msgSend_colorGradientLayer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_colorGradientLayer_000550c8);
  return;
}



// ===== 0x0001b870  objc_msgSend$colorMaskLayer

void objc_msgSend_colorMaskLayer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_colorMaskLayer_000550d0);
  return;
}



// ===== 0x0001b890  objc_msgSend$colorMaskView

void objc_msgSend_colorMaskView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_colorMaskView_000550d8);
  return;
}



// ===== 0x0001b8b0  objc_msgSend$colorOverlayView

void objc_msgSend_colorOverlayView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_colorOverlayView_000550e0);
  return;
}



// ===== 0x0001b8d0  objc_msgSend$colorWithAlphaComponent_

void objc_msgSend_colorWithAlphaComponent_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_colorWithAlphaComponent__000550e8);
  return;
}



// ===== 0x0001b8f0  objc_msgSend$colorWithDisplayP3Red_green_blue_alpha_

void objc_msgSend_colorWithDisplayP3Red_green_blue_alpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_colorWithDisplayP3Red_green_blue_000550f0);
  return;
}



// ===== 0x0001b910  objc_msgSend$colorWithRed_green_blue_alpha_

void objc_msgSend_colorWithRed_green_blue_alpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_colorWithRed_green_blue_alpha__000550f8);
  return;
}



// ===== 0x0001b930  objc_msgSend$colorWithWhite_alpha_

void objc_msgSend_colorWithWhite_alpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_colorWithWhite_alpha__00055100);
  return;
}



// ===== 0x0001b950  objc_msgSend$commit

void objc_msgSend_commit(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_commit_00055108);
  return;
}



// ===== 0x0001b970  objc_msgSend$complicationLastTop

void objc_msgSend_complicationLastTop(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_complicationLastTop_00055118);
  return;
}



// ===== 0x0001b990  objc_msgSend$complicationLayoutShift

void objc_msgSend_complicationLayoutShift(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_complicationLayoutShift_00055120);
  return;
}



// ===== 0x0001b9b0  objc_msgSend$complicationRow

void objc_msgSend_complicationRow(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_complicationRow_00055128);
  return;
}



// ===== 0x0001b9d0  objc_msgSend$componentsJoinedByString_

void objc_msgSend_componentsJoinedByString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_componentsJoinedByString__00055138);
  return;
}



// ===== 0x0001b9f0  objc_msgSend$componentsSeparatedByString_

void objc_msgSend_componentsSeparatedByString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_componentsSeparatedByString__00055140);
  return;
}



// ===== 0x0001ba10  objc_msgSend$connectedScenes

void objc_msgSend_connectedScenes(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_connectedScenes_00055148);
  return;
}



// ===== 0x0001ba30  objc_msgSend$containsString_

void objc_msgSend_containsString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_containsString__00055150);
  return;
}



// ===== 0x0001ba50  objc_msgSend$contentMode

void objc_msgSend_contentMode(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_contentMode_00055158);
  return;
}



// ===== 0x0001ba70  objc_msgSend$convertRect_fromLayer_

void objc_msgSend_convertRect_fromLayer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_convertRect_fromLayer__00055160);
  return;
}



// ===== 0x0001ba90  objc_msgSend$convertRect_fromView_

void objc_msgSend_convertRect_fromView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_convertRect_fromView__00055168);
  return;
}



// ===== 0x0001bab0  objc_msgSend$convertRect_toView_

void objc_msgSend_convertRect_toView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_convertRect_toView__00055170);
  return;
}



// ===== 0x0001bad0  objc_msgSend$copy

void objc_msgSend_copy(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_copy_00055178);
  return;
}



// ===== 0x0001baf0  objc_msgSend$cornerCurve

void objc_msgSend_cornerCurve(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_cornerCurve_00055180);
  return;
}



// ===== 0x0001bb10  objc_msgSend$cornerRadius

void objc_msgSend_cornerRadius(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_cornerRadius_00055188);
  return;
}



// ===== 0x0001bb30  objc_msgSend$count

void objc_msgSend_count(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_count_00055190);
  return;
}



// ===== 0x0001bb50  objc_msgSend$countByEnumeratingWithState_objects_count_

void objc_msgSend_countByEnumeratingWithState_objects_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_countByEnumeratingWithState_obje_00055198);
  return;
}



// ===== 0x0001bb70  objc_msgSend$currentDevice

void objc_msgSend_currentDevice(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_currentDevice_000551a0);
  return;
}



// ===== 0x0001bb90  objc_msgSend$data

void objc_msgSend_data(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_data_000551a8);
  return;
}



// ===== 0x0001bbb0  objc_msgSend$dataUsingEncoding_

void objc_msgSend_dataUsingEncoding_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_dataUsingEncoding__000551b0);
  return;
}



// ===== 0x0001bbd0  objc_msgSend$dataWithContentsOfFile_

void objc_msgSend_dataWithContentsOfFile_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_dataWithContentsOfFile__000551b8);
  return;
}



// ===== 0x0001bbf0  objc_msgSend$dataWithLength_

void objc_msgSend_dataWithLength_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_dataWithLength__000551c0);
  return;
}



// ===== 0x0001bc10  objc_msgSend$deadline

void objc_msgSend_deadline(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_deadline_000551c8);
  return;
}



// ===== 0x0001bc30  objc_msgSend$decimalDigitCharacterSet

void objc_msgSend_decimalDigitCharacterSet(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_decimalDigitCharacterSet_000551d8);
  return;
}



// ===== 0x0001bc50  objc_msgSend$defaultCenter

void objc_msgSend_defaultCenter(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_defaultCenter_000551e0);
  return;
}



// ===== 0x0001bc70  objc_msgSend$defaultManager

void objc_msgSend_defaultManager(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_defaultManager_000551e8);
  return;
}



// ===== 0x0001bc90  objc_msgSend$dictionary

void objc_msgSend_dictionary(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_dictionary_000551f0);
  return;
}



// ===== 0x0001bcb0  objc_msgSend$dictionaryWithContentsOfFile_

void objc_msgSend_dictionaryWithContentsOfFile_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_dictionaryWithContentsOfFile__000551f8);
  return;
}



// ===== 0x0001bcd0  objc_msgSend$dictionaryWithObjects_forKeys_count_

void objc_msgSend_dictionaryWithObjects_forKeys_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_dictionaryWithObjects_forKeys_co_00055200);
  return;
}



// ===== 0x0001bcf0  objc_msgSend$displayLink

void objc_msgSend_displayLink(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_displayLink_00055218);
  return;
}



// ===== 0x0001bd10  objc_msgSend$displayLinkWithTarget_selector_

void objc_msgSend_displayLinkWithTarget_selector_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_displayLinkWithTarget_selector__00055220);
  return;
}



// ===== 0x0001bd30  objc_msgSend$doubleValue

void objc_msgSend_doubleValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_doubleValue_00055228);
  return;
}



// ===== 0x0001bd50  objc_msgSend$drawInRect_

void objc_msgSend_drawInRect_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_drawInRect__00055230);
  return;
}



// ===== 0x0001bd70  objc_msgSend$emitSummaryIfNeeded

void objc_msgSend_emitSummaryIfNeeded(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_emitSummaryIfNeeded_00055238);
  return;
}



// ===== 0x0001bd90  objc_msgSend$enumerateKeysAndObjectsUsingBlock_

void objc_msgSend_enumerateKeysAndObjectsUsingBlock_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_enumerateKeysAndObjectsUsingBloc_00055240);
  return;
}



// ===== 0x0001bdb0  objc_msgSend$executablePath

void objc_msgSend_executablePath(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_executablePath_00055248);
  return;
}



// ===== 0x0001bdd0  objc_msgSend$familyName

void objc_msgSend_familyName(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_familyName_00055250);
  return;
}



// ===== 0x0001bdf0  objc_msgSend$fileExistsAtPath_

void objc_msgSend_fileExistsAtPath_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_fileExistsAtPath__00055258);
  return;
}



// ===== 0x0001be10  objc_msgSend$fileHandleForWritingAtPath_

void objc_msgSend_fileHandleForWritingAtPath_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_fileHandleForWritingAtPath__00055260);
  return;
}



// ===== 0x0001be30  objc_msgSend$filters

void objc_msgSend_filters(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_filters_00055268);
  return;
}



// ===== 0x0001be50  objc_msgSend$firstObject

void objc_msgSend_firstObject(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_firstObject_00055270);
  return;
}



// ===== 0x0001be70  objc_msgSend$font

void objc_msgSend_font(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_font_00055278);
  return;
}



// ===== 0x0001be90  objc_msgSend$fontAtPointSize_heightAxis_

void objc_msgSend_fontAtPointSize_heightAxis_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_fontAtPointSize_heightAxis__00055288);
  return;
}



// ===== 0x0001beb0  objc_msgSend$fontAttributes

void objc_msgSend_fontAttributes(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_fontAttributes_00055290);
  return;
}



// ===== 0x0001bed0  objc_msgSend$fontDescriptor

void objc_msgSend_fontDescriptor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_fontDescriptor_00055298);
  return;
}



// ===== 0x0001bef0  objc_msgSend$fontName

void objc_msgSend_fontName(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_fontName_000552a0);
  return;
}



// ===== 0x0001bf10  objc_msgSend$frame

void objc_msgSend_frame(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_frame_000552a8);
  return;
}



// ===== 0x0001bf30  objc_msgSend$getBytes_length_

void objc_msgSend_getBytes_length_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_getBytes_length__000552b0);
  return;
}



// ===== 0x0001bf50  objc_msgSend$glassView

void objc_msgSend_glassView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_glassView_000552b8);
  return;
}



// ===== 0x0001bf70  objc_msgSend$glyphMaskLayer

void objc_msgSend_glyphMaskLayer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_glyphMaskLayer_000552c0);
  return;
}



// ===== 0x0001bf90  objc_msgSend$glyphMaskView

void objc_msgSend_glyphMaskView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_glyphMaskView_000552c8);
  return;
}



// ===== 0x0001bfb0  objc_msgSend$graphicsFont

void objc_msgSend_graphicsFont(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_graphicsFont_000552d8);
  return;
}



// ===== 0x0001bfd0  objc_msgSend$hasPrefix_

void objc_msgSend_hasPrefix_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_hasPrefix__000552e0);
  return;
}



// ===== 0x0001bff0  objc_msgSend$hasRenderedGlyph

void objc_msgSend_hasRenderedGlyph(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_hasRenderedGlyph_000552e8);
  return;
}



// ===== 0x0001c010  objc_msgSend$host

void objc_msgSend_host(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_host_000552f8);
  return;
}



// ===== 0x0001c030  objc_msgSend$image

void objc_msgSend_image(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_image_00055300);
  return;
}



// ===== 0x0001c050  objc_msgSend$imageOrientation

void objc_msgSend_imageOrientation(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_imageOrientation_00055308);
  return;
}



// ===== 0x0001c070  objc_msgSend$initWithFormat_arguments_

void objc_msgSend_initWithFormat_arguments_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_initWithFormat_arguments__00055318);
  return;
}



// ===== 0x0001c090  objc_msgSend$initWithFrame_

void objc_msgSend_initWithFrame_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_initWithFrame__00055320);
  return;
}



// ===== 0x0001c0b0  objc_msgSend$initWithFrame_groupName_filterType_

void objc_msgSend_initWithFrame_groupName_filterType_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_initWithFrame_groupName_filterTy_00055330);
  return;
}



// ===== 0x0001c0d0  objc_msgSend$initWithString_attributes_

void objc_msgSend_initWithString_attributes_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_initWithString_attributes__00055338);
  return;
}



// ===== 0x0001c0f0  objc_msgSend$insertSubview_aboveSubview_

void objc_msgSend_insertSubview_aboveSubview_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_insertSubview_aboveSubview__00055340);
  return;
}



// ===== 0x0001c110  objc_msgSend$insertSubview_atIndex_

void objc_msgSend_insertSubview_atIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_insertSubview_atIndex__00055348);
  return;
}



// ===== 0x0001c130  objc_msgSend$integerValue

void objc_msgSend_integerValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_integerValue_00055350);
  return;
}



// ===== 0x0001c150  objc_msgSend$invalidate

void objc_msgSend_invalidate(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_invalidate_00055358);
  return;
}



// ===== 0x0001c170  objc_msgSend$isAtEnd

void objc_msgSend_isAtEnd(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_isAtEnd_00055360);
  return;
}



// ===== 0x0001c190  objc_msgSend$isEqualToNumber_

void objc_msgSend_isEqualToNumber_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_isEqualToNumber__00055368);
  return;
}



// ===== 0x0001c1b0  objc_msgSend$isEqualToString_

void objc_msgSend_isEqualToString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_isEqualToString__00055370);
  return;
}



// ===== 0x0001c1d0  objc_msgSend$isHidden

void objc_msgSend_isHidden(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_isHidden_00055378);
  return;
}



// ===== 0x0001c1f0  objc_msgSend$isOperatingSystemAtLeastVersion_

void objc_msgSend_isOperatingSystemAtLeastVersion_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_isOperatingSystemAtLeastVersion__00055380);
  return;
}



// ===== 0x0001c210  objc_msgSend$lastFontDiagnostic

void objc_msgSend_lastFontDiagnostic(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lastFontDiagnostic_00055388);
  return;
}



// ===== 0x0001c230  objc_msgSend$lastNearestObstacle

void objc_msgSend_lastNearestObstacle(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lastNearestObstacle_00055390);
  return;
}



// ===== 0x0001c250  objc_msgSend$lastNearestTop

void objc_msgSend_lastNearestTop(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lastNearestTop_00055398);
  return;
}



// ===== 0x0001c270  objc_msgSend$lastObject

void objc_msgSend_lastObject(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lastObject_000553a0);
  return;
}



// ===== 0x0001c290  objc_msgSend$lastPathComponent

void objc_msgSend_lastPathComponent(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lastPathComponent_000553a8);
  return;
}



// ===== 0x0001c2b0  objc_msgSend$lastRetractionPhase

void objc_msgSend_lastRetractionPhase(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lastRetractionPhase_000553b0);
  return;
}



// ===== 0x0001c2d0  objc_msgSend$lastSignature

void objc_msgSend_lastSignature(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lastSignature_000553b8);
  return;
}



// ===== 0x0001c2f0  objc_msgSend$layer

void objc_msgSend_layer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_layer_000553c0);
  return;
}



// ===== 0x0001c310  objc_msgSend$layoutCalls

void objc_msgSend_layoutCalls(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_layoutCalls_000553d0);
  return;
}



// ===== 0x0001c330  objc_msgSend$length

void objc_msgSend_length(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_length_000553e0);
  return;
}



// ===== 0x0001c350  objc_msgSend$lgEffectiveFilterType

void objc_msgSend_lgEffectiveFilterType(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lgEffectiveFilterType_000553f8);
  return;
}



// ===== 0x0001c370  objc_msgSend$lgFilterAttached

void objc_msgSend_lgFilterAttached(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lgFilterAttached_00055400);
  return;
}



// ===== 0x0001c390  objc_msgSend$lgInvalidateFilterContents

void objc_msgSend_lgInvalidateFilterContents(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lgInvalidateFilterContents_00055410);
  return;
}



// ===== 0x0001c3b0  objc_msgSend$lgSpecularEnabledOverride

void objc_msgSend_lgSpecularEnabledOverride(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lgSpecularEnabledOverride_00055428);
  return;
}



// ===== 0x0001c3d0  objc_msgSend$lg_configure

void objc_msgSend_lg_configure(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lg_configure_00055430);
  return;
}



// ===== 0x0001c3f0  objc_msgSend$loadFont

void objc_msgSend_loadFont(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_loadFont_00055438);
  return;
}



// ===== 0x0001c410  objc_msgSend$localizedDescription

void objc_msgSend_localizedDescription(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_localizedDescription_00055440);
  return;
}



// ===== 0x0001c430  objc_msgSend$lowercaseString

void objc_msgSend_lowercaseString(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_lowercaseString_00055448);
  return;
}



// ===== 0x0001c450  objc_msgSend$mainBundle

void objc_msgSend_mainBundle(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_mainBundle_00055450);
  return;
}



// ===== 0x0001c470  objc_msgSend$mainQueue

void objc_msgSend_mainQueue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_mainQueue_00055458);
  return;
}



// ===== 0x0001c490  objc_msgSend$mainRunLoop

void objc_msgSend_mainRunLoop(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_mainRunLoop_00055460);
  return;
}



// ===== 0x0001c4b0  objc_msgSend$mainScreen

void objc_msgSend_mainScreen(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_mainScreen_00055468);
  return;
}



// ===== 0x0001c4d0  objc_msgSend$maximumFramesPerSecond

void objc_msgSend_maximumFramesPerSecond(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_maximumFramesPerSecond_00055470);
  return;
}



// ===== 0x0001c4f0  objc_msgSend$minimumHeightAxis

void objc_msgSend_minimumHeightAxis(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_minimumHeightAxis_00055478);
  return;
}



// ===== 0x0001c510  objc_msgSend$mutableBytes

void objc_msgSend_mutableBytes(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_mutableBytes_00055480);
  return;
}



// ===== 0x0001c530  objc_msgSend$nativeTimeNeedsHiding

void objc_msgSend_nativeTimeNeedsHiding(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_nativeTimeNeedsHiding_00055488);
  return;
}



// ===== 0x0001c550  objc_msgSend$null

void objc_msgSend_null(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_null_00055490);
  return;
}



// ===== 0x0001c570  objc_msgSend$numberWithDouble_

void objc_msgSend_numberWithDouble_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_numberWithDouble__00055498);
  return;
}



// ===== 0x0001c590  objc_msgSend$numberWithInteger_

void objc_msgSend_numberWithInteger_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_numberWithInteger__000554a0);
  return;
}



// ===== 0x0001c5b0  objc_msgSend$object

void objc_msgSend_object(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_object_000554a8);
  return;
}



// ===== 0x0001c5d0  objc_msgSend$objectAtIndexedSubscript_

void objc_msgSend_objectAtIndexedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_objectAtIndexedSubscript__000554b0);
  return;
}



// ===== 0x0001c5f0  objc_msgSend$objectForKey_

void objc_msgSend_objectForKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_objectForKey__000554b8);
  return;
}



// ===== 0x0001c610  objc_msgSend$objectForKeyedSubscript_

void objc_msgSend_objectForKeyedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_objectForKeyedSubscript__000554c0);
  return;
}



// ===== 0x0001c630  objc_msgSend$opacity

void objc_msgSend_opacity(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_opacity_000554c8);
  return;
}



// ===== 0x0001c650  objc_msgSend$operatingSystemVersion

void objc_msgSend_operatingSystemVersion(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001c660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_operatingSystemVersion_000554d0);
  return;
}



// ===== 0x0001c670  objc_msgSend$originalFont

void objc_msgSend_originalFont(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_originalFont_000554d8);
  return;
}



// ===== 0x0001c690  objc_msgSend$originalLabelAlpha

void objc_msgSend_originalLabelAlpha(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_originalLabelAlpha_000554e0);
  return;
}



// ===== 0x0001c6b0  objc_msgSend$originalLabelFrame

void objc_msgSend_originalLabelFrame(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_originalLabelFrame_000554e8);
  return;
}



// ===== 0x0001c6d0  objc_msgSend$originalLabelHidden

void objc_msgSend_originalLabelHidden(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_originalLabelHidden_000554f0);
  return;
}



// ===== 0x0001c6f0  objc_msgSend$originalVisibleSourceAlpha

void objc_msgSend_originalVisibleSourceAlpha(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_originalVisibleSourceAlpha_000554f8);
  return;
}



// ===== 0x0001c710  objc_msgSend$originalVisibleSourceHidden

void objc_msgSend_originalVisibleSourceHidden(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_originalVisibleSourceHidden_00055500);
  return;
}



// ===== 0x0001c730  objc_msgSend$originalVisibleSourceLayerOpacity

void objc_msgSend_originalVisibleSourceLayerOpacity(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_originalVisibleSourceLayerOpacit_00055508);
  return;
}



// ===== 0x0001c750  objc_msgSend$path

void objc_msgSend_path(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_path_00055510);
  return;
}



// ===== 0x0001c770  objc_msgSend$peakApplyTime

void objc_msgSend_peakApplyTime(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_peakApplyTime_00055518);
  return;
}



// ===== 0x0001c790  objc_msgSend$performSelector_

void objc_msgSend_performSelector_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_performSelector__00055520);
  return;
}



// ===== 0x0001c7b0  objc_msgSend$pointSize

void objc_msgSend_pointSize(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_pointSize_00055528);
  return;
}



// ===== 0x0001c7d0  objc_msgSend$postNotificationName_object_

void objc_msgSend_postNotificationName_object_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_postNotificationName_object__00055530);
  return;
}



// ===== 0x0001c7f0  objc_msgSend$postScriptName

void objc_msgSend_postScriptName(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_postScriptName_00055538);
  return;
}



// ===== 0x0001c810  objc_msgSend$presentationLayer

void objc_msgSend_presentationLayer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_presentationLayer_00055540);
  return;
}



// ===== 0x0001c830  objc_msgSend$processInfo

void objc_msgSend_processInfo(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_processInfo_00055548);
  return;
}



// ===== 0x0001c850  objc_msgSend$processName

void objc_msgSend_processName(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_processName_00055550);
  return;
}



// ===== 0x0001c870  objc_msgSend$pullBlurActive

void objc_msgSend_pullBlurActive(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_pullBlurActive_00055558);
  return;
}



// ===== 0x0001c890  objc_msgSend$pullBlurKnown

void objc_msgSend_pullBlurKnown(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_pullBlurKnown_00055560);
  return;
}



// ===== 0x0001c8b0  objc_msgSend$pullBlurView

void objc_msgSend_pullBlurView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_pullBlurView_00055568);
  return;
}



// ===== 0x0001c8d0  objc_msgSend$rangeOfCharacterFromSet_

void objc_msgSend_rangeOfCharacterFromSet_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_rangeOfCharacterFromSet__00055570);
  return;
}



// ===== 0x0001c8f0  objc_msgSend$rangeOfString_

void objc_msgSend_rangeOfString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_rangeOfString__00055578);
  return;
}



// ===== 0x0001c910  objc_msgSend$reapplyFilterForParameterReload

void objc_msgSend_reapplyFilterForParameterReload(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_reapplyFilterForParameterReload_00055580);
  return;
}



// ===== 0x0001c930  objc_msgSend$reason

void objc_msgSend_reason(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001c940. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_reason_00055588);
  return;
}



// ===== 0x0001c950  objc_msgSend$reassertNativeTimeHidden

void objc_msgSend_reassertNativeTimeHidden(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_reassertNativeTimeHidden_00055590);
  return;
}



// ===== 0x0001c970  objc_msgSend$removeAllAnimations

void objc_msgSend_removeAllAnimations(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_removeAllAnimations_00055598);
  return;
}



// ===== 0x0001c990  objc_msgSend$removeFromSuperview

void objc_msgSend_removeFromSuperview(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_removeFromSuperview_000555a0);
  return;
}



// ===== 0x0001c9b0  objc_msgSend$removeLastObject

void objc_msgSend_removeLastObject(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_removeLastObject_000555a8);
  return;
}



// ===== 0x0001c9d0  objc_msgSend$removeObject_

void objc_msgSend_removeObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_removeObject__000555b0);
  return;
}



// ===== 0x0001c9f0  objc_msgSend$renderCanvasSize

void objc_msgSend_renderCanvasSize(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_renderCanvasSize_000555b8);
  return;
}



// ===== 0x0001ca10  objc_msgSend$renderContainer

void objc_msgSend_renderContainer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_renderContainer_000555c0);
  return;
}



// ===== 0x0001ca30  objc_msgSend$renderedGlyphBottom

void objc_msgSend_renderedGlyphBottom(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_renderedGlyphBottom_000555c8);
  return;
}



// ===== 0x0001ca50  objc_msgSend$resolvedColorWithTraitCollection_

void objc_msgSend_resolvedColorWithTraitCollection_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_resolvedColorWithTraitCollection_000555d8);
  return;
}



// ===== 0x0001ca70  objc_msgSend$restore

void objc_msgSend_restore(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_restore_000555e0);
  return;
}



// ===== 0x0001ca90  objc_msgSend$reverseObjectEnumerator

void objc_msgSend_reverseObjectEnumerator(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_reverseObjectEnumerator_000555e8);
  return;
}



// ===== 0x0001cab0  objc_msgSend$sampleStart

void objc_msgSend_sampleStart(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_sampleStart_000555f0);
  return;
}



// ===== 0x0001cad0  objc_msgSend$scale

void objc_msgSend_scale(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_scale_000555f8);
  return;
}



// ===== 0x0001caf0  objc_msgSend$scanDouble_

void objc_msgSend_scanDouble_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_scanDouble__00055600);
  return;
}



// ===== 0x0001cb10  objc_msgSend$scanHexInt_

void objc_msgSend_scanHexInt_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_scanHexInt__00055608);
  return;
}



// ===== 0x0001cb30  objc_msgSend$scannerWithString_

void objc_msgSend_scannerWithString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_scannerWithString__00055610);
  return;
}



// ===== 0x0001cb50  objc_msgSend$scheduleApply_

void objc_msgSend_scheduleApply_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_scheduleApply__00055618);
  return;
}



// ===== 0x0001cb70  objc_msgSend$scheduled

void objc_msgSend_scheduled(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_scheduled_00055620);
  return;
}



// ===== 0x0001cb90  objc_msgSend$seekToEndReturningOffset_error_

void objc_msgSend_seekToEndReturningOffset_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_seekToEndReturningOffset_error__00055628);
  return;
}



// ===== 0x0001cbb0  objc_msgSend$separatorColor

void objc_msgSend_separatorColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_separatorColor_00055630);
  return;
}



// ===== 0x0001cbd0  objc_msgSend$setActions_

void objc_msgSend_setActions_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setActions__00055638);
  return;
}



// ===== 0x0001cbf0  objc_msgSend$setAlpha_

void objc_msgSend_setAlpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setAlpha__00055640);
  return;
}



// ===== 0x0001cc10  objc_msgSend$setAppliedChanges_

void objc_msgSend_setAppliedChanges_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setAppliedChanges__00055648);
  return;
}



// ===== 0x0001cc30  objc_msgSend$setApplying_

void objc_msgSend_setApplying_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setApplying__00055650);
  return;
}



// ===== 0x0001cc50  objc_msgSend$setAutoresizingMask_

void objc_msgSend_setAutoresizingMask_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setAutoresizingMask__00055660);
  return;
}



// ===== 0x0001cc70  objc_msgSend$setBackgroundColor_

void objc_msgSend_setBackgroundColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setBackgroundColor__00055678);
  return;
}



// ===== 0x0001cc90  objc_msgSend$setBorderColor_

void objc_msgSend_setBorderColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setBorderColor__00055688);
  return;
}



// ===== 0x0001ccb0  objc_msgSend$setBorderWidth_

void objc_msgSend_setBorderWidth_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setBorderWidth__00055690);
  return;
}



// ===== 0x0001ccd0  objc_msgSend$setBounds_

void objc_msgSend_setBounds_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setBounds__00055698);
  return;
}



// ===== 0x0001ccf0  objc_msgSend$setClipsToBounds_

void objc_msgSend_setClipsToBounds_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setClipsToBounds__000556a8);
  return;
}



// ===== 0x0001cd10  objc_msgSend$setColorGradientLayer_

void objc_msgSend_setColorGradientLayer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setColorGradientLayer__000556b0);
  return;
}



// ===== 0x0001cd30  objc_msgSend$setColorMaskLayer_

void objc_msgSend_setColorMaskLayer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setColorMaskLayer__000556b8);
  return;
}



// ===== 0x0001cd50  objc_msgSend$setColorMaskView_

void objc_msgSend_setColorMaskView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setColorMaskView__000556c0);
  return;
}



// ===== 0x0001cd70  objc_msgSend$setColorOverlayView_

void objc_msgSend_setColorOverlayView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setColorOverlayView__000556c8);
  return;
}



// ===== 0x0001cd90  objc_msgSend$setColors_

void objc_msgSend_setColors_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setColors__000556d0);
  return;
}



// ===== 0x0001cdb0  objc_msgSend$setComplicationLastTop_

void objc_msgSend_setComplicationLastTop_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setComplicationLastTop__000556d8);
  return;
}



// ===== 0x0001cdd0  objc_msgSend$setComplicationLayoutShift_

void objc_msgSend_setComplicationLayoutShift_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setComplicationLayoutShift__000556e0);
  return;
}



// ===== 0x0001cdf0  objc_msgSend$setComplicationRow_

void objc_msgSend_setComplicationRow_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setComplicationRow__000556e8);
  return;
}



// ===== 0x0001ce10  objc_msgSend$setCornerCurve_

void objc_msgSend_setCornerCurve_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setCornerCurve__000556f8);
  return;
}



// ===== 0x0001ce30  objc_msgSend$setCornerRadius_

void objc_msgSend_setCornerRadius_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setCornerRadius__00055700);
  return;
}



// ===== 0x0001ce50  objc_msgSend$setCountLimit_

void objc_msgSend_setCountLimit_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setCountLimit__00055708);
  return;
}



// ===== 0x0001ce70  objc_msgSend$setDeadline_

void objc_msgSend_setDeadline_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setDeadline__00055718);
  return;
}



// ===== 0x0001ce90  objc_msgSend$setDisableActions_

void objc_msgSend_setDisableActions_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setDisableActions__00055720);
  return;
}



// ===== 0x0001ceb0  objc_msgSend$setEndPoint_

void objc_msgSend_setEndPoint_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setEndPoint__00055730);
  return;
}



// ===== 0x0001ced0  objc_msgSend$setFillColor_

void objc_msgSend_setFillColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setFillColor__00055738);
  return;
}



// ===== 0x0001cef0  objc_msgSend$setFilters_

void objc_msgSend_setFilters_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setFilters__00055740);
  return;
}



// ===== 0x0001cf10  objc_msgSend$setFont_

void objc_msgSend_setFont_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setFont__00055748);
  return;
}



// ===== 0x0001cf30  objc_msgSend$setFrame_

void objc_msgSend_setFrame_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setFrame__00055750);
  return;
}



// ===== 0x0001cf50  objc_msgSend$setGlassView_

void objc_msgSend_setGlassView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setGlassView__00055758);
  return;
}



// ===== 0x0001cf70  objc_msgSend$setGlyphMaskLayer_

void objc_msgSend_setGlyphMaskLayer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setGlyphMaskLayer__00055760);
  return;
}



// ===== 0x0001cf90  objc_msgSend$setGlyphMaskView_

void objc_msgSend_setGlyphMaskView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setGlyphMaskView__00055768);
  return;
}



// ===== 0x0001cfb0  objc_msgSend$setHasRenderedGlyph_

void objc_msgSend_setHasRenderedGlyph_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setHasRenderedGlyph__00055778);
  return;
}



// ===== 0x0001cfd0  objc_msgSend$setHidden_

void objc_msgSend_setHidden_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setHidden__00055780);
  return;
}



// ===== 0x0001cff0  objc_msgSend$setHost_

void objc_msgSend_setHost_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setHost__00055788);
  return;
}



// ===== 0x0001d010  objc_msgSend$setLastFontDiagnostic_

void objc_msgSend_setLastFontDiagnostic_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setLastFontDiagnostic__00055790);
  return;
}



// ===== 0x0001d030  objc_msgSend$setLastNearestObstacle_

void objc_msgSend_setLastNearestObstacle_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setLastNearestObstacle__00055798);
  return;
}



// ===== 0x0001d050  objc_msgSend$setLastNearestTop_

void objc_msgSend_setLastNearestTop_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setLastNearestTop__000557a0);
  return;
}



// ===== 0x0001d070  objc_msgSend$setLastRetractionPhase_

void objc_msgSend_setLastRetractionPhase_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setLastRetractionPhase__000557a8);
  return;
}



// ===== 0x0001d090  objc_msgSend$setLastSignature_

void objc_msgSend_setLastSignature_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setLastSignature__000557b0);
  return;
}



// ===== 0x0001d0b0  objc_msgSend$setLayoutCalls_

void objc_msgSend_setLayoutCalls_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setLayoutCalls__000557b8);
  return;
}



// ===== 0x0001d0d0  objc_msgSend$setLocations_

void objc_msgSend_setLocations_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setLocations__000557f0);
  return;
}



// ===== 0x0001d0f0  objc_msgSend$setMask_

void objc_msgSend_setMask_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setMask__000557f8);
  return;
}



// ===== 0x0001d110  objc_msgSend$setMaskView_

void objc_msgSend_setMaskView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setMaskView__00055800);
  return;
}



// ===== 0x0001d130  objc_msgSend$setMasksToBounds_

void objc_msgSend_setMasksToBounds_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setMasksToBounds__00055808);
  return;
}



// ===== 0x0001d150  objc_msgSend$setNeedsDisplay

void objc_msgSend_setNeedsDisplay(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setNeedsDisplay_00055810);
  return;
}



// ===== 0x0001d170  objc_msgSend$setNeedsLayout

void objc_msgSend_setNeedsLayout(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setNeedsLayout_00055818);
  return;
}



// ===== 0x0001d190  objc_msgSend$setObject_forKey_

void objc_msgSend_setObject_forKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setObject_forKey__00055820);
  return;
}



// ===== 0x0001d1b0  objc_msgSend$setObject_forKeyedSubscript_

void objc_msgSend_setObject_forKeyedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setObject_forKeyedSubscript__00055828);
  return;
}



// ===== 0x0001d1d0  objc_msgSend$setOpacity_

void objc_msgSend_setOpacity_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setOpacity__00055830);
  return;
}



// ===== 0x0001d1f0  objc_msgSend$setOpaque_

void objc_msgSend_setOpaque_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setOpaque__00055838);
  return;
}



// ===== 0x0001d210  objc_msgSend$setOriginalFont_

void objc_msgSend_setOriginalFont_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setOriginalFont__00055840);
  return;
}



// ===== 0x0001d230  objc_msgSend$setOriginalLabelAlpha_

void objc_msgSend_setOriginalLabelAlpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setOriginalLabelAlpha__00055848);
  return;
}



// ===== 0x0001d250  objc_msgSend$setOriginalLabelFrame_

void objc_msgSend_setOriginalLabelFrame_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setOriginalLabelFrame__00055850);
  return;
}



// ===== 0x0001d270  objc_msgSend$setOriginalLabelHidden_

void objc_msgSend_setOriginalLabelHidden_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setOriginalLabelHidden__00055858);
  return;
}



// ===== 0x0001d290  objc_msgSend$setOriginalVisibleSourceAlpha_

void objc_msgSend_setOriginalVisibleSourceAlpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setOriginalVisibleSourceAlpha__00055860);
  return;
}



// ===== 0x0001d2b0  objc_msgSend$setOriginalVisibleSourceHidden_

void objc_msgSend_setOriginalVisibleSourceHidden_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setOriginalVisibleSourceHidden__00055868);
  return;
}



// ===== 0x0001d2d0  objc_msgSend$setOriginalVisibleSourceLayerOpacity_

void objc_msgSend_setOriginalVisibleSourceLayerOpacity_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setOriginalVisibleSourceLayerOpa_00055870);
  return;
}



// ===== 0x0001d2f0  objc_msgSend$setPath_

void objc_msgSend_setPath_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setPath__00055878);
  return;
}



// ===== 0x0001d310  objc_msgSend$setPaused_

void objc_msgSend_setPaused_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setPaused__00055880);
  return;
}



// ===== 0x0001d330  objc_msgSend$setPeakApplyTime_

void objc_msgSend_setPeakApplyTime_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setPeakApplyTime__00055888);
  return;
}



// ===== 0x0001d350  objc_msgSend$setPosition_

void objc_msgSend_setPosition_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setPosition__00055890);
  return;
}



// ===== 0x0001d370  objc_msgSend$setPreferredFramesPerSecond_

void objc_msgSend_setPreferredFramesPerSecond_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setPreferredFramesPerSecond__000558a0);
  return;
}



// ===== 0x0001d390  objc_msgSend$setPullBlurActive_

void objc_msgSend_setPullBlurActive_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setPullBlurActive__000558a8);
  return;
}



// ===== 0x0001d3b0  objc_msgSend$setPullBlurKnown_

void objc_msgSend_setPullBlurKnown_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setPullBlurKnown__000558b0);
  return;
}



// ===== 0x0001d3d0  objc_msgSend$setPullBlurView_

void objc_msgSend_setPullBlurView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setPullBlurView__000558b8);
  return;
}



// ===== 0x0001d3f0  objc_msgSend$setRenderCanvasSize_

void objc_msgSend_setRenderCanvasSize_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setRenderCanvasSize__000558c0);
  return;
}



// ===== 0x0001d410  objc_msgSend$setRenderContainer_

void objc_msgSend_setRenderContainer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setRenderContainer__000558c8);
  return;
}



// ===== 0x0001d430  objc_msgSend$setRenderedGlyphBottom_

void objc_msgSend_setRenderedGlyphBottom_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setRenderedGlyphBottom__000558d0);
  return;
}



// ===== 0x0001d450  objc_msgSend$setSampleStart_

void objc_msgSend_setSampleStart_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setSampleStart__000558d8);
  return;
}



// ===== 0x0001d470  objc_msgSend$setScheduled_

void objc_msgSend_setScheduled_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setScheduled__000558e0);
  return;
}



// ===== 0x0001d490  objc_msgSend$setSkippedChanges_

void objc_msgSend_setSkippedChanges_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setSkippedChanges__000558e8);
  return;
}



// ===== 0x0001d4b0  objc_msgSend$setSourceLabel_

void objc_msgSend_setSourceLabel_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setSourceLabel__000558f0);
  return;
}



// ===== 0x0001d4d0  objc_msgSend$setStartPoint_

void objc_msgSend_setStartPoint_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setStartPoint__000558f8);
  return;
}



// ===== 0x0001d4f0  objc_msgSend$setTotalApplyTime_

void objc_msgSend_setTotalApplyTime_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setTotalApplyTime__00055908);
  return;
}



// ===== 0x0001d510  objc_msgSend$setUserInteractionEnabled_

void objc_msgSend_setUserInteractionEnabled_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setUserInteractionEnabled__00055910);
  return;
}



// ===== 0x0001d530  objc_msgSend$setValue_forKey_

void objc_msgSend_setValue_forKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setValue_forKey__00055918);
  return;
}



// ===== 0x0001d550  objc_msgSend$setVisibleSourceView_

void objc_msgSend_setVisibleSourceView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_setVisibleSourceView__00055920);
  return;
}



// ===== 0x0001d570  objc_msgSend$shared

void objc_msgSend_shared(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_shared_00055930);
  return;
}



// ===== 0x0001d590  objc_msgSend$sharedApplication

void objc_msgSend_sharedApplication(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_sharedApplication_00055938);
  return;
}



// ===== 0x0001d5b0  objc_msgSend$size

void objc_msgSend_size(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_size_00055940);
  return;
}



// ===== 0x0001d5d0  objc_msgSend$skippedChanges

void objc_msgSend_skippedChanges(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_skippedChanges_00055948);
  return;
}



// ===== 0x0001d5f0  objc_msgSend$sourceLabel

void objc_msgSend_sourceLabel(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_sourceLabel_00055950);
  return;
}



// ===== 0x0001d610  objc_msgSend$stopDeviceMotionUpdates

void objc_msgSend_stopDeviceMotionUpdates(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_stopDeviceMotionUpdates_00055958);
  return;
}



// ===== 0x0001d630  objc_msgSend$string

void objc_msgSend_string(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_string_00055960);
  return;
}



// ===== 0x0001d650  objc_msgSend$stringByAppendingFormat_

void objc_msgSend_stringByAppendingFormat_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_stringByAppendingFormat__00055968);
  return;
}



// ===== 0x0001d670  objc_msgSend$stringByAppendingPathComponent_

void objc_msgSend_stringByAppendingPathComponent_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_stringByAppendingPathComponent__00055970);
  return;
}



// ===== 0x0001d690  objc_msgSend$stringByAppendingString_

void objc_msgSend_stringByAppendingString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_stringByAppendingString__00055978);
  return;
}



// ===== 0x0001d6b0  objc_msgSend$stringByReplacingOccurrencesOfString_withString_

void objc_msgSend_stringByReplacingOccurrencesOfString_withString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_stringByReplacingOccurrencesOfSt_00055980);
  return;
}



// ===== 0x0001d6d0  objc_msgSend$stringByTrimmingCharactersInSet_

void objc_msgSend_stringByTrimmingCharactersInSet_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_stringByTrimmingCharactersInSet__00055988);
  return;
}



// ===== 0x0001d6f0  objc_msgSend$stringWithFormat_

void objc_msgSend_stringWithFormat_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_stringWithFormat__00055990);
  return;
}



// ===== 0x0001d710  objc_msgSend$stringWithUTF8String_

void objc_msgSend_stringWithUTF8String_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_stringWithUTF8String__00055998);
  return;
}



// ===== 0x0001d730  objc_msgSend$substringFromIndex_

void objc_msgSend_substringFromIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_substringFromIndex__000559a0);
  return;
}



// ===== 0x0001d750  objc_msgSend$subviews

void objc_msgSend_subviews(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_subviews_000559a8);
  return;
}



// ===== 0x0001d770  objc_msgSend$superview

void objc_msgSend_superview(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_superview_000559b0);
  return;
}



// ===== 0x0001d790  objc_msgSend$symbolicTraits

void objc_msgSend_symbolicTraits(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_symbolicTraits_000559b8);
  return;
}



// ===== 0x0001d7b0  objc_msgSend$systemVersion

void objc_msgSend_systemVersion(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_systemVersion_000559c0);
  return;
}



// ===== 0x0001d7d0  objc_msgSend$targetTimestamp

void objc_msgSend_targetTimestamp(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_targetTimestamp_000559c8);
  return;
}



// ===== 0x0001d7f0  objc_msgSend$text

void objc_msgSend_text(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_text_000559d0);
  return;
}



// ===== 0x0001d810  objc_msgSend$timestamp

void objc_msgSend_timestamp(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_timestamp_000559e8);
  return;
}



// ===== 0x0001d830  objc_msgSend$totalApplyTime

void objc_msgSend_totalApplyTime(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_totalApplyTime_000559f8);
  return;
}



// ===== 0x0001d850  objc_msgSend$trackMotion

void objc_msgSend_trackMotion(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_trackMotion_00055a00);
  return;
}



// ===== 0x0001d870  objc_msgSend$traitCollection

void objc_msgSend_traitCollection(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_traitCollection_00055a08);
  return;
}



// ===== 0x0001d890  objc_msgSend$transform

void objc_msgSend_transform(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_transform_00055a18);
  return;
}



// ===== 0x0001d8b0  objc_msgSend$unsignedIntValue

void objc_msgSend_unsignedIntValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_unsignedIntValue_00055a20);
  return;
}



// ===== 0x0001d8d0  objc_msgSend$updateNativeBlurOverlayWithRadius_

void objc_msgSend_updateNativeBlurOverlayWithRadius_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_updateNativeBlurOverlayWithRadiu_00055a28);
  return;
}



// ===== 0x0001d8f0  objc_msgSend$updatePullBlur

void objc_msgSend_updatePullBlur(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_updatePullBlur_00055a30);
  return;
}



// ===== 0x0001d910  objc_msgSend$updateSpecular

void objc_msgSend_updateSpecular(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_updateSpecular_00055a38);
  return;
}



// ===== 0x0001d930  objc_msgSend$userInterfaceStyle

void objc_msgSend_userInterfaceStyle(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_userInterfaceStyle_00055a40);
  return;
}



// ===== 0x0001d950  objc_msgSend$valueForKey_

void objc_msgSend_valueForKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_valueForKey__00055a48);
  return;
}



// ===== 0x0001d970  objc_msgSend$valueWithCGRect_

void objc_msgSend_valueWithCGRect_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_valueWithCGRect__00055a50);
  return;
}



// ===== 0x0001d990  objc_msgSend$valueWithUIEdgeInsets_

void objc_msgSend_valueWithUIEdgeInsets_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_valueWithUIEdgeInsets__00055a58);
  return;
}



// ===== 0x0001d9b0  objc_msgSend$view

void objc_msgSend_view(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_view_00055a60);
  return;
}



// ===== 0x0001d9d0  objc_msgSend$visibleSourceView

void objc_msgSend_visibleSourceView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_visibleSourceView_00055a78);
  return;
}



// ===== 0x0001d9f0  objc_msgSend$weakObjectsHashTable

void objc_msgSend_weakObjectsHashTable(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_weakObjectsHashTable_00055a80);
  return;
}



// ===== 0x0001da10  objc_msgSend$whiteColor

void objc_msgSend_whiteColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_whiteColor_00055a88);
  return;
}



// ===== 0x0001da30  objc_msgSend$whitespaceAndNewlineCharacterSet

void objc_msgSend_whitespaceAndNewlineCharacterSet(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_whitespaceAndNewlineCharacterSet_00055a90);
  return;
}



// ===== 0x0001da50  objc_msgSend$window

void objc_msgSend_window(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_window_00055a98);
  return;
}



// ===== 0x0001da70  objc_msgSend$windows

void objc_msgSend_windows(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_windows_00055aa0);
  return;
}



// ===== 0x0001da90  objc_msgSend$writeData_error_

void objc_msgSend_writeData_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_writeData_error__00055aa8);
  return;
}



// ===== 0x0001dab0  objc_msgSend$writeToFile_options_error_

void objc_msgSend_writeToFile_options_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_00050460)(param_1,PTR_s_writeToFile_options_error__00055ab0);
  return;
}



