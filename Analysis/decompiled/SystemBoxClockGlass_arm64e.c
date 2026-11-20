// SystemBoxClockGlass  (arm64e)
// ===== 0x00004000  shared

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::shared(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ID IVar1;
  SEL extraout_x1;
  ulong unaff_x30;
  
  if (DAT_00055fa0 != -1) {
    _dispatch_once(&DAT_00055fa0,&PTR___NSConcreteGlobalBlock_000505c0);
    param_2 = extraout_x1;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4038);
    IVar1 = (*UNRECOVERED_JUMPTABLE)();
    return IVar1;
  }
  IVar1 = _objc_retainAutoreleaseReturnValue(DAT_00055f98,param_2);
  return IVar1;
}



// ===== 0x00004054  FUN_00004054

void FUN_00004054(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  uVar2 = _objc_opt_new(PTR_PTR_00055ab8);
  uVar1 = DAT_00055f98;
  DAT_00055f98 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4090);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00004058  FUN_00004058

void FUN_00004058(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  uVar2 = _objc_opt_new(PTR_PTR_00055ab8);
  uVar1 = DAT_00055f98;
  DAT_00055f98 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4090);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00004094  init

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::init(ID param_1,SEL param_2)

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



// ===== 0x00004120  dealloc

/* Function Stack Size: 0x10 bytes */

void LGClockFontStore::dealloc(ID param_1,SEL param_2)

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



// ===== 0x00004170  loadFont

/* Function Stack Size: 0x10 bytes */

void LGClockFontStore::loadFont(ID param_1,SEL param_2)

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
  
  local_80 = *(long *)PTR____stack_chk_guard_00050520;
  _CACurrentMediaTime();
  if (DAT_00056188 != -1) {
    _dispatch_once(&DAT_00056188,&PTR___NSConcreteGlobalBlock_000506c0);
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
          uVar17 = *(undefined8 *)PTR__kCTFontVariationAxisNameKey_00050568;
          uVar18 = *(undefined8 *)PTR__kCTFontVariationAxisIdentifierKey_00050550;
          uVar13 = *(undefined8 *)PTR__kCTFontVariationAxisMinimumValueKey_00050560;
          uVar12 = *(undefined8 *)PTR__kCTFontVariationAxisMaximumValueKey_00050558;
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
LAB_00004464:
                    auVar20 = objc_msgSend_length(uVar7);
                    if (auVar20._0_8_ == 0) goto LAB_000045f0;
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
                                if (iVar1 == 0) goto LAB_000045f0;
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
                  if (iVar1 != 0x77647468) goto LAB_00004464;
                  pcVar16 = &cf_width;
                }
                objc_msgSend_setObject_forKeyedSubscript_(uVar11,uVar6,lVar8,pcVar16);
                objc_msgSend_objectForKeyedSubscript_(uVar15,extraout_x1_03,uVar13);
                auVar20 = _objc_retainAutoreleasedReturnValue();
                ppuVar9 = auVar20._0_8_;
                local_110 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_00052d68;
                if (ppuVar9 != (undefined **)0x0) {
                  local_110 = ppuVar9;
                }
                objc_msgSend_objectForKeyedSubscript_(uVar15,auVar20._8_8_,uVar12);
                auVar20 = _objc_retainAutoreleasedReturnValue();
                ppuVar10 = auVar20._0_8_;
                local_108 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_00052d78;
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
LAB_000045f0:
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
        goto LAB_000046d0;
      }
    }
    objc_msgSend_length(uVar2);
    pcVar16 = &cf_fontdecodefailedpath___bytes__lu;
  }
  _LGLog(pcVar16);
LAB_000046d0:
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_00050520 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x00004730  clampedValueForAxis:

/* Function Stack Size: 0x18 bytes */

double LGClockFontStore::clampedValueForAxis_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined auVar6 [16];
  
  uVar1 = _objc_retain(param_3);
  dVar3 = (double)FUN_00004828();
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



// ===== 0x00004828  FUN_00004828

undefined8 FUN_00004828(void)

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
        if (iVar1 == 0) goto LAB_000048e4;
        pcVar3 = &cf_Clock_VariableFont_Softness;
        uVar4 = 0;
      }
      else {
        pcVar3 = &cf_Clock_VariableFont_Height;
        uVar4 = DAT_0001b478;
      }
    }
    else {
      pcVar3 = &cf_Clock_VariableFont_Width;
      uVar4 = 0x4059000000000000;
    }
  }
  else {
    pcVar3 = &cf_Clock_VariableFont_Weight;
    uVar4 = DAT_0001b480;
  }
  uVar4 = _LG_prefFloat(uVar4,pcVar3);
LAB_000048e4:
  _objc_release(uVar2);
  return uVar4;
}



// ===== 0x00004900  fontAtPointSize:

/* Function Stack Size: 0x18 bytes */

ID LGClockFontStore::fontAtPointSize_(ID param_1,SEL param_2,double param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  ID IVar1;
  ulong unaff_x30;
  undefined8 uVar2;
  
  uVar2 = FUN_00004828(&cf_height);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4950);
    IVar1 = (*UNRECOVERED_JUMPTABLE)();
    return IVar1;
  }
  IVar1 = objc_msgSend_fontAtPointSize_heightAxis_(param_3,uVar2,param_1);
  return IVar1;
}



// ===== 0x00004954  minimumHeightAxis

/* Function Stack Size: 0x10 bytes */

double LGClockFontStore::minimumHeightAxis(ID param_1,SEL param_2)

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



// ===== 0x000049f8  fontAtPointSize:heightAxis:

/* Function Stack Size: 0x20 bytes */

ID LGClockFontStore::fontAtPointSize_heightAxis_
             (ID param_1,SEL param_2,double param_3,double param_4)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
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
  ulong unaff_x30;
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
  
  local_78 = *(long *)PTR____stack_chk_guard_00050520;
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
        local_d0 = PTR___NSConcreteStackBlock_00050500;
        local_c8 = DAT_0001b488;
        local_c0 = FUN_00004d64;
        puStack_b8 = &DAT_000505e0;
        auVar10 = _objc_retain(uVar5);
        uVar5 = auVar10._0_8_;
        local_b0 = uVar5;
        IStack_a8 = param_1;
        local_a0 = param_4;
        objc_msgSend_enumerateKeysAndObjectsUsingBlock_(uVar6,auVar10._8_8_,&local_d0);
        _objc_release(uVar6);
        local_98 = *(undefined8 *)PTR__kCTFontNameAttribute_00050540;
        objc_msgSend_postScriptName(param_1);
        auVar10 = _objc_retainAutoreleasedReturnValue();
        local_90 = *(undefined8 *)PTR__kCTFontVariationAttribute_00050548;
        uStack_88 = auVar10._0_8_;
        local_80 = uVar5;
        objc_msgSend_dictionaryWithObjects_forKeys_count_
                  (PTR__OBJC_CLASS___NSDictionary_00055ae8,auVar10._8_8_,&uStack_88,&local_98,2);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar10._0_8_);
        lVar7 = _CTFontDescriptorCreateWithAttributes(uVar6);
        if (lVar7 == 0) {
LAB_00004cb0:
          objc_msgSend_postScriptName(param_1);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _LGLog(&cf_fontcreatefailedps___size___2fvariations___);
          lVar2 = 0;
        }
        else {
          lVar2 = _CTFontCreateWithFontDescriptor(param_3,lVar7,0);
          _CFRelease(lVar7);
          if (lVar2 == 0) goto LAB_00004cb0;
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
      goto LAB_00004d10;
    }
  }
  objc_msgSend_graphicsFont(param_1);
  objc_msgSend_postScriptName(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _LGLog(&cf_fontrequestunavailablegraphics__pps___size___2fheight___1f);
  _objc_release(uVar3);
  lVar2 = 0;
LAB_00004d10:
  if (*(long *)PTR____stack_chk_guard_00050520 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4d5c);
    IVar9 = (*UNRECOVERED_JUMPTABLE)();
    return IVar9;
  }
  IVar9 = _objc_autoreleaseReturnValue(lVar2);
  return IVar9;
}



// ===== 0x00004d64  FUN_00004d64

void FUN_00004d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  ulong unaff_x30;
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4e1c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar3);
  return;
}



// ===== 0x00004e20  FUN_00004e20

void FUN_00004e20(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4e58);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}



// ===== 0x00004e5c  FUN_00004e5c

void FUN_00004e5c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4e94);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



// ===== 0x00004e98  graphicsFont

/* Function Stack Size: 0x10 bytes */

CGFont * LGClockFontStore::graphicsFont(ID param_1,SEL param_2)

{
  return *(CGFont **)(param_1 + 8);
}



// ===== 0x00004ea0  setGraphicsFont:

/* Function Stack Size: 0x18 bytes */

void LGClockFontStore::setGraphicsFont_(ID param_1,SEL param_2,CGFont *param_3)

{
  *(CGFont **)(param_1 + 8) = param_3;
  return;
}



// ===== 0x00004ea8  postScriptName

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::postScriptName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



// ===== 0x00004eb0  setPostScriptName:

/* Function Stack Size: 0x18 bytes */

void LGClockFontStore::setPostScriptName_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x00004eb8  axisIDs

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::axisIDs(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



// ===== 0x00004ec0  setAxisIDs:

/* Function Stack Size: 0x18 bytes */

void LGClockFontStore::setAxisIDs_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x00004ec8  axisRanges

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::axisRanges(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



// ===== 0x00004ed0  setAxisRanges:

/* Function Stack Size: 0x18 bytes */

void LGClockFontStore::setAxisRanges_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x00004ed8  cache

/* Function Stack Size: 0x10 bytes */

ID LGClockFontStore::cache(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x28);
}



// ===== 0x00004ee0  setCache:

/* Function Stack Size: 0x18 bytes */

void LGClockFontStore::setCache_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x28,param_3);
  return;
}



// ===== 0x00004eec  .cxx_destruct

/* Function Stack Size: 0x10 bytes */

void LGClockFontStore::_cxx_destruct(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4f44);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_storeStrong(param_1 + 0x10,0);
  return;
}



// ===== 0x00004f48  shared

/* Function Stack Size: 0x10 bytes */

ID LGClockMotionTracker::shared(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ID IVar1;
  SEL extraout_x1;
  ulong unaff_x30;
  
  if (DAT_00055fb0 != -1) {
    _dispatch_once(&DAT_00055fb0,&PTR___NSConcreteGlobalBlock_00050610);
    param_2 = extraout_x1;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4f80);
    IVar1 = (*UNRECOVERED_JUMPTABLE)();
    return IVar1;
  }
  IVar1 = _objc_retainAutoreleaseReturnValue(DAT_00055fa8,param_2);
  return IVar1;
}



// ===== 0x00004f9c  FUN_00004f9c

void FUN_00004f9c(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  uVar2 = _objc_opt_new(PTR_PTR_00055af0);
  uVar1 = DAT_00055fa8;
  DAT_00055fa8 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4fd8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00004fa0  FUN_00004fa0

void FUN_00004fa0(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  uVar2 = _objc_opt_new(PTR_PTR_00055af0);
  uVar1 = DAT_00055fa8;
  DAT_00055fa8 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x4fd8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00004fdc  init

/* Function Stack Size: 0x10 bytes */

ID LGClockMotionTracker::init(ID param_1,SEL param_2)

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
              (uVar2,auVar4._8_8_,auVar4._0_8_,*(undefined8 *)PTR__NSRunLoopCommonModes_000504e8);
    _objc_release(auVar4._0_8_);
    _objc_retain(IVar1);
  }
  _objc_release(IVar1);
  return IVar1;
}



// ===== 0x000050e8  trackMotion

/* Function Stack Size: 0x10 bytes */

void LGClockMotionTracker::trackMotion(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  double dVar1;
  undefined auVar2 [16];
  
  dVar1 = (double)_CACurrentMediaTime();
  objc_msgSend_setDeadline_(dVar1 + DAT_0001b490,param_1);
  objc_msgSend_displayLink(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setPreferredFramesPerSecond_(auVar2._0_8_,auVar2._8_8_,0x78);
  _objc_release(auVar2._0_8_);
  objc_msgSend_displayLink(param_1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setPaused_(auVar2._0_8_,auVar2._8_8_,0);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x5170);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(auVar2._0_8_);
  return;
}



// ===== 0x00005174  tick:

/* Function Stack Size: 0x18 bytes */

void LGClockMotionTracker::tick_(ID param_1,SEL param_2,ID param_3)

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
  double dVar12;
  double dVar13;
  undefined auVar14 [16];
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
  
  local_80 = *(long *)PTR____stack_chk_guard_00050520;
  uVar2 = _objc_retain(param_3);
  dVar12 = (double)_CACurrentMediaTime();
  dVar13 = (double)objc_msgSend_deadline(param_1);
  lStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  local_130 = (long *)0x0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  FUN_00005380();
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
            auVar14 = objc_msgSend_applying(uVar9);
            uVar3 = auVar14._8_8_;
            if ((auVar14 & (undefined  [16])0x1) == (undefined  [16])0x0) {
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
  if ((dVar13 <= dVar12) && ((uVar10 & 1) == 0)) {
    objc_msgSend_setPaused_(uVar2,extraout_x1_03,1);
  }
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_00050520 != local_80) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x00005380  FUN_00005380

void FUN_00005380(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  if (DAT_00056198 != -1) {
    _dispatch_once(&DAT_00056198,&PTR___NSConcreteGlobalBlock_000506e0);
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x53b8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_retainAutoreleaseReturnValue(DAT_00056190);
  return;
}



// ===== 0x000053d4  displayLink

/* Function Stack Size: 0x10 bytes */

ID LGClockMotionTracker::displayLink(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



// ===== 0x000053dc  setDisplayLink:

/* Function Stack Size: 0x18 bytes */

void LGClockMotionTracker::setDisplayLink_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 8,param_3);
  return;
}



// ===== 0x000053e8  deadline

/* Function Stack Size: 0x10 bytes */

double LGClockMotionTracker::deadline(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x10);
}



// ===== 0x000053f0  setDeadline:

/* Function Stack Size: 0x18 bytes */

void LGClockMotionTracker::setDeadline_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x10) = param_3;
  return;
}



// ===== 0x000053f8  .cxx_destruct

/* Function Stack Size: 0x10 bytes */

void LGClockMotionTracker::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + 8,0);
  return;
}



// ===== 0x00005404  init

/* Function Stack Size: 0x10 bytes */

ID LGClockState::init(ID param_1,SEL param_2)

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



// ===== 0x00005458  scheduleApply:

/* Function Stack Size: 0x18 bytes */

void LGClockState::scheduleApply_(ID param_1,SEL param_2,ID param_3)

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
    local_88 = PTR___NSConcreteStackBlock_00050500;
    local_80 = DAT_0001b488;
    local_78 = FUN_00005664;
    puStack_70 = &DAT_00050630;
    _objc_copyWeak(auStack_60,auStack_58);
    local_68 = _objc_retain(uVar2);
    _dispatch_async(PTR___dispatch_main_q_00050528,&local_88);
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



// ===== 0x00005664  FUN_00005664

void FUN_00005664(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined8 extraout_x1;
  ulong unaff_x30;
  undefined auVar2 [16];
  
  auVar2 = _objc_loadWeakRetained(param_1 + 0x28);
  lVar1 = auVar2._0_8_;
  if (lVar1 != 0) {
    objc_msgSend_setScheduled_(lVar1,auVar2._8_8_,0);
    objc_msgSend_applyReason_(lVar1,extraout_x1,*(undefined8 *)(param_1 + 0x20));
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x56bc);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(lVar1);
  return;
}



// ===== 0x000056c0  FUN_000056c0

void FUN_000056c0(long param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x5700);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_copyWeak(param_1 + 0x28,param_2 + 0x28);
  return;
}



// ===== 0x00005704  FUN_00005704

void FUN_00005704(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  _objc_destroyWeak(param_1 + 0x28);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x573c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



// ===== 0x00005740  updatePullBlur

/* Function Stack Size: 0x10 bytes */

void LGClockState::updatePullBlur(ID param_1,SEL param_2)

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
        if (lVar7 == 0) goto LAB_00005c88;
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
          uVar13 = *(undefined8 *)PTR__CGRectNull_000504c8;
          uVar10 = *(undefined8 *)(PTR__CGRectNull_000504c8 + 8);
          uVar16 = *(undefined8 *)(PTR__CGRectNull_000504c8 + 0x10);
          uVar17 = *(undefined8 *)(PTR__CGRectNull_000504c8 + 0x18);
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
        goto LAB_00005c88;
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
                    (0.0 / DAT_0001b498,0.0 / DAT_0001b498,0.0 / DAT_0001b498,0.0 / DAT_0001b498,
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
                    (auVar18._0_8_,auVar18._8_8_,&PTR__OBJC_CLASS___NSConstantDoubleNumber_00052d88,
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
LAB_00005c88:
  _objc_release(lVar4);
  _objc_release(lVar3);
  return;
}



// ===== 0x00005cdc  nativeTimeNeedsHiding

/* Function Stack Size: 0x10 bytes */

bool LGClockState::nativeTimeNeedsHiding(ID param_1,SEL param_2)

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
    goto LAB_00005e40;
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
        if ((uVar3 & 1) == 0) goto LAB_00005dc8;
        bVar11 = 1;
      }
      else {
LAB_00005dc8:
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
        if (cVar1 != '\0') goto LAB_00005e30;
      }
      _objc_release(unaff_x24);
    }
LAB_00005e30:
    _objc_release(lVar7);
  }
  _objc_release(lVar6);
LAB_00005e40:
  _objc_release(lVar5);
  _objc_release(uVar4);
  return bVar11;
}



// ===== 0x00005e70  reassertNativeTimeHidden

/* Function Stack Size: 0x10 bytes */

void LGClockState::reassertNativeTimeHidden(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong unaff_x30;
  float fVar5;
  double dVar6;
  undefined auVar7 [16];
  
  iVar1 = objc_msgSend_nativeTimeNeedsHiding();
  if (iVar1 == 0) {
    return;
  }
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x5fbc);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(lVar3);
  return;
}



// ===== 0x00005fd0  applyReason:

/* Function Stack Size: 0x18 bytes */

void LGClockState::applyReason_(ID param_1,SEL param_2,ID param_3)

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
  
  local_b0 = *(long *)PTR____stack_chk_guard_00050520;
  uVar8 = _objc_retain(param_3);
  objc_msgSend_host(param_1);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_window();
  lVar10 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar10 == 0) goto LAB_00009df0;
  dVar51 = (double)_CACurrentMediaTime();
  puVar11 = (undefined8 *)_objc_retain(uVar9);
  iVar6 = FUN_0000e530();
  puVar29 = PTR_s_textLabel_000559d8;
  if (iVar6 == 0) {
    uVar13 = _objc_opt_respondsToSelector(puVar11,PTR_s_textLabel_000559d8);
    if ((uVar13 & 1) == 0) {
LAB_00006118:
      objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_00055b50);
      uVar14 = _objc_retainAutoreleasedReturnValue();
      FUN_0000e57c(puVar11,uVar14);
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
      dVar53 = DAT_0001b470;
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
              iVar6 = FUN_0000e7b0(uVar17);
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
      goto LAB_000065d0;
    }
    _objc_msgSend(puVar11,puVar29);
    lVar10 = _objc_retainAutoreleasedReturnValue();
    uVar14 = _objc_opt_class(PTR__OBJC_CLASS___UILabel_00055b88);
    uVar13 = _objc_opt_isKindOfClass(lVar10,uVar14);
    if ((uVar13 & 1) == 0) {
      _objc_release(lVar10);
      goto LAB_00006118;
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
              FUN_0000e57c(uVar17,uVar12);
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
      FUN_0000e57c(uVar14,uVar12);
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
    dVar53 = DAT_0001b470;
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
          if ((lVar18 != 0) && (iVar6 = FUN_0000e6d0(uVar43,puVar11), iVar6 != 0)) {
            objc_msgSend_font(uVar43);
            uVar16 = _objc_retainAutoreleasedReturnValue();
            dVar52 = (double)objc_msgSend_pointSize();
            _objc_release(uVar16);
            iVar6 = FUN_0000e7b0(uVar17);
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
LAB_000065d0:
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
    FUN_00009efc(lVar10);
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
        if (lVar15 != 0) goto LAB_00006708;
      }
      objc_msgSend_font(lVar10);
      auVar76 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setOriginalFont_(param_1,auVar76._8_8_,auVar76._0_8_);
      _objc_release(auVar76._0_8_);
      local_318 = 0;
    }
    else {
LAB_00006708:
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
    FUN_0000a04c();
    uVar19 = _objc_retainAutoreleasedReturnValue();
    FUN_0000a1ac(lVar10);
    uVar20 = _objc_retainAutoreleasedReturnValue();
    FUN_0000a04c();
    uVar21 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_originalFont(param_1);
    uVar22 = _objc_retainAutoreleasedReturnValue();
    FUN_0000a04c();
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
    FUN_0000a2b4(puVar11);
    local_370 = _objc_retainAutoreleasedReturnValue();
    _LGLog(&cf_sourcecandidates__);
  }
  else {
    objc_msgSend_visibleSourceView(param_1);
    lVar15 = _objc_retainAutoreleasedReturnValue();
    if (lVar15 == 0) {
      FUN_00009efc(lVar10);
      _objc_retainAutoreleasedReturnValue();
      local_370 = _objc_retain();
      _objc_release();
    }
    else {
      local_370 = _objc_retain(lVar15);
    }
    _objc_release(lVar15);
    uVar7 = _lgHostEnabled(&cf_Clock);
    FUN_0000a5e8(puVar11);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_bounds(puVar11);
    uVar16 = objc_msgSend_convertRect_toView_(puVar11,extraout_x1_05,uVar14);
    lVar15 = _objc_retain(uVar14);
    uVar17 = *(undefined8 *)PTR__CGRectNull_000504c8;
    dVar66 = *(double *)(PTR__CGRectNull_000504c8 + 8);
    dVar69 = *(double *)(PTR__CGRectNull_000504c8 + 0x10);
    dVar71 = *(double *)(PTR__CGRectNull_000504c8 + 0x18);
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
    FUN_0000e848();
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
LAB_00006c90:
            puVar24 = puVar41;
            _objc_release(uVar14);
LAB_00006c98:
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
LAB_00006c88:
              _objc_release(puVar24);
              puVar41 = puVar24;
              dVar63 = dVar56;
              dVar61 = dVar55;
              dVar53 = dVar54;
              goto LAB_00006c90;
            }
            dVar55 = (double)objc_msgSend_alpha(lVar18);
            _objc_release(lVar25);
            _objc_release(lVar25);
            _objc_release(puVar24);
            puVar41 = puVar24;
            if (dVar55 < DAT_0001b4a0) goto LAB_00006c90;
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
            dVar56 = DAT_0001b4a8;
            if (dVar73 < DAT_0001b4a8) goto LAB_00006c88;
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
LAB_00006ea4:
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
                    dVar59 = dVar63, dVar75 <= 0.0)))) goto LAB_00006ea4;
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
              if (dVar55 <= dVar54) goto LAB_00006ca0;
              dVar55 = (double)_CGRectGetMinX(uVar21,dVar59,dVar73,dVar57);
              dVar63 = dVar68;
              dVar61 = dVar52;
              dVar53 = dVar62;
              dVar54 = (double)_CGRectGetMaxX(uVar43);
              uVar19 = extraout_x1_13;
              if (dVar54 <= dVar55) goto LAB_00006ca0;
              dVar55 = (double)_CGRectGetMaxY(uVar21,dVar59,dVar73,dVar57);
              dVar63 = in_d1;
              dVar61 = in_d2;
              dVar53 = in_d3;
              dVar54 = (double)_CGRectGetMinY(uVar16);
              uVar19 = extraout_x1_14;
              if ((dVar55 <= dVar54) ||
                 (dVar61 = dVar73, dVar53 = dVar57, dVar55 = (double)_CGRectGetMinY(uVar21,dVar59),
                 uVar19 = extraout_x1_15, dVar63 = local_350, local_350 <= dVar55))
              goto LAB_00006ca0;
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
              goto LAB_00006c98;
            }
          }
LAB_00006ca0:
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
joined_r0x000070e0:
        if (-1 < DAT_000561b0) {
          local_270 = (undefined8 *)0x0;
          iVar6 = _notify_get_state(DAT_000561b0,&local_270);
          puVar24 = local_270;
          fVar72 = DAT_0001b4e0;
          if (iVar6 == 0) {
            fVar67 = (float)NEON_fmadd((float)(unkuint9)((ulong)local_270 >> 0x10 & 0xffff) /
                                       DAT_0001b4e0,0x40000000,0xbf000000);
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
              if ((DAT_0001b4a8 <= dVar63) &&
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
                      goto LAB_000070f4;
                    }
                  }
                }
              }
            }
            goto LAB_000070fc;
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
          goto joined_r0x000070e0;
        }
      }
LAB_000070f4:
      puVar24 = puVar41;
      _objc_release(lVar45);
    }
LAB_000070fc:
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
    FUN_00004828(&cf_weight);
    FUN_00004828(&cf_width);
    FUN_00004828(&cf_height);
    FUN_00004828(&cf_softness);
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
LAB_0000746c:
      bVar3 = false;
    }
    else {
      if (lVar48 != 1) goto LAB_0000746c;
      lVar49 = 0;
      uVar12 = extraout_x1_18;
      uVar43 = uVar14;
      do {
        objc_msgSend_stringWithFormat_
                  (PTR__OBJC_CLASS___NSString_00055ad8,uVar12,&cf_Clock_Rainbow_Color__lu);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        _LG_prefString(uVar12,(&PTR_cf__3DDEFA_00050578)[lVar49]);
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
        FUN_0000a1ac(uVar12);
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
        dVar56 = (double)FUN_00004828(&cf_height);
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
          uVar19 = *(undefined8 *)PTR__kCTFontAttributeName_00050538;
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
            uVar20 = *(undefined8 *)PTR__CGRectZero_000504d0;
            dVar55 = *(double *)(PTR__CGRectZero_000504d0 + 8);
            dVar63 = *(double *)(PTR__CGRectZero_000504d0 + 0x10);
            dVar52 = *(double *)(PTR__CGRectZero_000504d0 + 0x18);
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
          puVar29 = PTR____NSDictionary0__struct_00050508;
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
                  FUN_0000a04c();
                  uVar22 = _objc_retainAutoreleasedReturnValue();
                  FUN_0000a1ac(lVar10);
                  uVar23 = _objc_retainAutoreleasedReturnValue();
                  FUN_0000a04c();
                  uVar30 = _objc_retainAutoreleasedReturnValue();
                  objc_msgSend_originalFont(param_1);
                  uVar31 = _objc_retainAutoreleasedReturnValue();
                  FUN_0000a04c();
                  uVar32 = _objc_retainAutoreleasedReturnValue();
                  FUN_0000a04c(local_358);
                  uVar33 = _objc_retainAutoreleasedReturnValue();
                  FUN_0000a004(local_358);
                  _LG_prefFloat(0x3ff4000000000000,&cf_Clock_VariableFont_SizeScale);
                  objc_msgSend_axisIDs(uVar12);
                  uVar34 = _objc_retainAutoreleasedReturnValue();
                  FUN_00004828(&cf_weight);
                  FUN_00004828(&cf_width);
                  FUN_00004828(&cf_softness);
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
            uVar22 = *(undefined8 *)PTR__CGRectZero_000504d0;
            dVar55 = *(double *)(PTR__CGRectZero_000504d0 + 8);
            dVar63 = *(double *)(PTR__CGRectZero_000504d0 + 0x10);
            dVar73 = *(double *)(PTR__CGRectZero_000504d0 + 0x18);
            dVar52 = 0.0;
            bVar4 = true;
LAB_000082fc:
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
              goto LAB_000082fc;
            }
            iVar6 = _CGRectIsEmpty(uVar22,dVar55,dVar63,dVar73);
            bVar4 = false;
            if (iVar6 != 0) goto LAB_000082fc;
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
              objc_msgSend_setStartPoint_(0,DAT_0001b4b0);
              objc_msgSend_setEndPoint_(0x3ff0000000000000,DAT_0001b4b8,uVar31);
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
          uVar32 = *(undefined8 *)PTR__CGPointZero_000504c0;
          uVar33 = *(undefined8 *)(PTR__CGPointZero_000504c0 + 8);
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
                puVar29 = (&PTR_cf__3DDEFA_00050578)[lVar48];
                objc_msgSend_whiteColor(PTR__OBJC_CLASS___UIColor_00055b10);
                uVar31 = _objc_retainAutoreleasedReturnValue();
                FUN_0000e8e4(puVar29,uVar31);
                uVar32 = _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar31);
                objc_msgSend_stringWithFormat_
                          (PTR__OBJC_CLASS___NSString_00055ad8,extraout_x1_60,
                           &cf_Clock_Rainbow_Color__lu);
                uVar31 = _objc_retainAutoreleasedReturnValue();
                _LG_prefString(uVar31,puVar29);
                uVar33 = _objc_retainAutoreleasedReturnValue();
                FUN_0000e8e4(uVar33,uVar32);
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
              objc_msgSend_setAlpha_(DAT_0001b4c0,lVar25);
              uVar31 = extraout_x1_61;
              dVar58 = dVar52;
              dVar65 = dVar56;
              dVar64 = dVar57;
            }
            else {
              if (bVar2 == 0) {
                FUN_0000a878();
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
LAB_000093b8:
              dVar61 = (double)_CACurrentMediaTime();
              dVar52 = dVar61 - dVar62;
LAB_000093c4:
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
                goto LAB_000093b8;
              }
              pvVar37 = DAT_00056200;
              uVar5 = DAT_00056208;
              if ((DAT_00056208 <= uVar13 && uVar13 - DAT_00056208 != 0) &&
                 (pvVar37 = _realloc(DAT_00056200,uVar13), uVar5 = uVar13, pvVar37 == (void *)0x0))
              {
                _LGLog(&cf_maskalphaallocationfailedbytes__zu);
                goto LAB_000093b8;
              }
              DAT_00056208 = uVar5;
              DAT_00056200 = pvVar37;
              pvVar37 = DAT_00056200;
              _bzero(DAT_00056200,uVar13);
              lVar39 = _CGBitmapContextCreate(pvVar37,uVar44,uVar47,8,uVar44,0,7);
              if (lVar39 == 0) {
                _LGLog(&cf_maskbitmapcontextfaileddims__ux_u);
                goto LAB_000093b8;
              }
              _CGContextTranslateCTM(0,(double)uVar47);
              _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,lVar39);
              _CGContextAddPath(lVar39,lVar26);
              dVar56 = 1.0;
              _CGContextSetGrayFillColor(0x3ff0000000000000,lVar39);
              _CGContextFillPath(lVar39);
              _CGContextRelease(lVar39);
              if (DAT_00056218 != -1) {
                _dispatch_once(&DAT_00056218,&PTR___NSConcreteGlobalBlock_00050720);
              }
              puVar11 = DAT_00055f30;
              if ((long)DAT_00055f30 + 1U < 2) {
                _LGLog(&cf_maskpublishhasnosharedmapping);
              }
              else {
                plVar1 = DAT_00055f30 + 2;
                lVar39 = (DAT_00055f30[2] & 1) + DAT_00055f30[2];
                *plVar1 = lVar39 + 1;
                *puVar11 = DAT_0001b4c8;
                puVar11[1] = 0x2000000;
                DAT_00056210 = DAT_00056210 + 1;
                puVar11[3] = DAT_00056210;
                *(uint *)(puVar11 + 4) = uVar7;
                *(uint *)((long)puVar11 + 0x24) = uVar42;
                puVar11[5] = uVar13;
                puVar11[6] = DAT_0001b4d0;
                _memcpy(puVar11 + 7,DAT_00056200,uVar13);
                *plVar1 = lVar39 + 2;
              }
              dVar61 = (double)_CACurrentMediaTime();
              dVar52 = dVar61 - dVar62;
              if ((long)puVar11 + 1U < 2) goto LAB_000093c4;
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
            if (lVar25 == 0) goto LAB_000094ec;
LAB_000094b0:
            objc_msgSend_colorMaskLayer(param_1);
            uVar22 = _objc_retainAutoreleasedReturnValue();
            lVar26 = objc_msgSend_path();
            uVar42 = (uint)(lVar26 != 0);
            _objc_release(uVar22);
          }
          else {
            uVar7 = 0;
            if (lVar25 != 0) goto LAB_000094b0;
LAB_000094ec:
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
      FUN_0000a738(dVar68 - dVar51,dVar53 - dVar68,dVar52,(dVar51 + dVar63) - dVar61,dVar63,1);
    }
    else {
      objc_msgSend_reassertNativeTimeHidden(param_1);
      auVar76 = objc_msgSend_skippedChanges(param_1);
      objc_msgSend_setSkippedChanges_(param_1,auVar76._8_8_,auVar76._0_8_ + 1);
      dVar53 = (double)_CACurrentMediaTime();
      FUN_0000a738(dVar68 - dVar51,0,0,dVar53 - dVar68,dVar53 - dVar51,0);
    }
    objc_msgSend_emitSummaryIfNeeded(param_1);
    _objc_release(uVar14);
    _objc_release(lVar45);
    _objc_release(lVar15);
  }
  _objc_release(local_370);
  _objc_release(lVar10);
LAB_00009df0:
  _objc_release(uVar9);
  _objc_release(uVar8);
  if (*(long *)PTR____stack_chk_guard_00050520 == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00009efc  FUN_00009efc

void FUN_00009efc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong unaff_x30;
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
        if ((uVar2 & 1) != 0) goto LAB_00009f58;
        objc_msgSend_superview(lVar5);
        lVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar5);
        lVar5 = lVar4;
      } while (lVar4 != 0);
      lVar5 = _objc_retain(lVar3);
      goto LAB_00009f58;
    }
  }
  lVar5 = 0;
LAB_00009f58:
  _objc_release(lVar1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x9f84);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(lVar5);
  return;
}



// ===== 0x0000a004  FUN_0000a004

undefined8 FUN_0000a004(void)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  objc_msgSend_fontName();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = objc_msgSend_containsString_(auVar2._0_8_,auVar2._8_8_,&cf_SFAdaptiveSoftNumeric);
  _objc_release(auVar2._0_8_);
  return uVar1;
}



// ===== 0x0000a04c  FUN_0000a04c

void FUN_0000a04c(long param_1)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  cfstringStruct *pcVar6;
  ulong unaff_x30;
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
              (auVar7._0_8_,auVar7._8_8_,*(undefined8 *)PTR__kCTFontVariationAttribute_00050548);
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xa1a8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(pcVar6);
  return;
}



// ===== 0x0000a1ac  FUN_0000a1ac

void FUN_0000a1ac(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong unaff_x30;
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
              (auVar5._0_8_,auVar5._8_8_,*(undefined8 *)PTR__NSFontAttributeName_000504e0,0,0);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar5._0_8_);
    if (lVar4 == 0) {
      objc_msgSend_attributedText(uVar1);
      auVar5 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_attribute_atIndex_effectiveRange_
                (auVar5._0_8_,auVar5._8_8_,*(undefined8 *)PTR__kCTFontAttributeName_00050538,0,0);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_release(auVar5._0_8_);
    }
    else {
      lVar3 = _objc_retain(lVar4);
    }
    _objc_release(lVar4);
  }
  _objc_release(uVar1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xa2b0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(lVar3);
  return;
}



// ===== 0x0000a2b4  FUN_0000a2b4

void FUN_0000a2b4(void)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
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
  ulong unaff_x30;
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
  
  local_80 = *(long *)PTR____stack_chk_guard_00050520;
  uVar2 = _objc_retain();
  objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_00055b50);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  FUN_0000e57c(uVar2,uVar3);
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
  if (*(long *)PTR____stack_chk_guard_00050520 == local_80) {
    if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xa5e0);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    _objc_autoreleaseReturnValue(uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000a5e8  FUN_0000a5e8

void FUN_0000a5e8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong unaff_x30;
  undefined auVar8 [16];
  
  lVar2 = _objc_retain();
  iVar1 = FUN_0000e530();
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
        goto LAB_0000a6f0;
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
LAB_0000a6f0:
  _objc_release(lVar3);
  _objc_release(lVar2);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xa728);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(lVar4);
  return;
}



// ===== 0x0000a738  FUN_0000a738

void FUN_0000a738(double param_1,double param_2,double param_3,double param_4,double param_5,
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



// ===== 0x0000a878  FUN_0000a878

void FUN_0000a878(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong unaff_x30;
  
  _LG_prefString(&cf_Clock_CustomColor_Hex,&cf__FFFFFF);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_whiteColor(PTR__OBJC_CLASS___UIColor_00055b10);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  FUN_0000e8e4(uVar1,uVar2);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xa90c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(uVar3);
  return;
}



// ===== 0x0000a910  emitSummaryIfNeeded

/* Function Stack Size: 0x10 bytes */

void LGClockState::emitSummaryIfNeeded(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  ulong unaff_x30;
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xaa7c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  objc_msgSend_setSampleStart_(dVar3,param_1);
  return;
}



// ===== 0x0000aa80  restore

/* Function Stack Size: 0x10 bytes */

void LGClockState::restore(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
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
  ulong unaff_x30;
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
    FUN_0000a04c();
    uVar8 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_sourceLabel(param_1);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    FUN_0000a1ac();
    uVar10 = _objc_retainAutoreleasedReturnValue();
    FUN_0000a04c();
    uVar11 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_originalFont(param_1);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    FUN_0000a04c();
    uVar13 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_sourceLabel(param_1);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    _objc_getAssociatedObject(uVar14,PTR_LOOP_00055f28);
    uVar15 = _objc_retainAutoreleasedReturnValue();
    FUN_0000a04c();
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
      FUN_0000a04c();
      uVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_sourceLabel(param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      FUN_0000a1ac();
      uVar8 = _objc_retainAutoreleasedReturnValue();
      FUN_0000a04c();
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
            (*(undefined8 *)PTR__CGSizeZero_000504d8,*(undefined8 *)(PTR__CGSizeZero_000504d8 + 8),
             param_1);
  objc_msgSend_setHasRenderedGlyph_(param_1,extraout_x1_14,0);
  objc_msgSend_setComplicationLayoutShift_(0,param_1);
  objc_msgSend_setComplicationRow_(param_1,extraout_x1_15,0);
  objc_msgSend_host(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  FUN_0000a5e8();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setNeedsLayout();
  _objc_release(uVar3);
  _objc_release(uVar2);
  objc_msgSend_setLastSignature_(param_1,extraout_x1_16,0);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xb268);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  objc_msgSend_setLastFontDiagnostic_(param_1,extraout_x1_17,0);
  return;
}



// ===== 0x0000b26c  host

/* Function Stack Size: 0x10 bytes */

ID LGClockState::host(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ID IVar1;
  ulong unaff_x30;
  
  _objc_loadWeakRetained(param_1 + 0x18);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xb294);
    IVar1 = (*UNRECOVERED_JUMPTABLE)();
    return IVar1;
  }
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000b298  setHost:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setHost_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0x18,param_3);
  return;
}



// ===== 0x0000b2a4  sourceLabel

/* Function Stack Size: 0x10 bytes */

ID LGClockState::sourceLabel(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ID IVar1;
  ulong unaff_x30;
  
  _objc_loadWeakRetained(param_1 + 0x20);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xb2cc);
    IVar1 = (*UNRECOVERED_JUMPTABLE)();
    return IVar1;
  }
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000b2d0  setSourceLabel:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setSourceLabel_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0x20,param_3);
  return;
}



// ===== 0x0000b2dc  visibleSourceView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::visibleSourceView(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ID IVar1;
  ulong unaff_x30;
  
  _objc_loadWeakRetained(param_1 + 0x28);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xb304);
    IVar1 = (*UNRECOVERED_JUMPTABLE)();
    return IVar1;
  }
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000b308  setVisibleSourceView:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setVisibleSourceView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0x28,param_3);
  return;
}



// ===== 0x0000b314  originalFont

/* Function Stack Size: 0x10 bytes */

ID LGClockState::originalFont(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x30);
}



// ===== 0x0000b31c  setOriginalFont:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setOriginalFont_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x30,param_3);
  return;
}



// ===== 0x0000b328  originalLabelAlpha

/* Function Stack Size: 0x10 bytes */

double LGClockState::originalLabelAlpha(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x38);
}



// ===== 0x0000b330  setOriginalLabelAlpha:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setOriginalLabelAlpha_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x38) = param_3;
  return;
}



// ===== 0x0000b338  originalLabelHidden

/* Function Stack Size: 0x10 bytes */

bool LGClockState::originalLabelHidden(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 8);
}



// ===== 0x0000b340  setOriginalLabelHidden:

/* Function Stack Size: 0x14 bytes */

void LGClockState::setOriginalLabelHidden_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 8) = (char)param_3;
  return;
}



// ===== 0x0000b348  originalVisibleSourceAlpha

/* Function Stack Size: 0x10 bytes */

double LGClockState::originalVisibleSourceAlpha(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x40);
}



// ===== 0x0000b350  setOriginalVisibleSourceAlpha:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setOriginalVisibleSourceAlpha_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x40) = param_3;
  return;
}



// ===== 0x0000b358  originalVisibleSourceLayerOpacity

/* Function Stack Size: 0x10 bytes */

float LGClockState::originalVisibleSourceLayerOpacity(ID param_1,SEL param_2)

{
  return *(float *)(param_1 + 0x10);
}



// ===== 0x0000b360  setOriginalVisibleSourceLayerOpacity:

/* Function Stack Size: 0x14 bytes */

void LGClockState::setOriginalVisibleSourceLayerOpacity_(ID param_1,SEL param_2,float param_3)

{
  *(float *)(param_1 + 0x10) = param_3;
  return;
}



// ===== 0x0000b368  originalVisibleSourceHidden

/* Function Stack Size: 0x10 bytes */

bool LGClockState::originalVisibleSourceHidden(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 9);
}



// ===== 0x0000b370  setOriginalVisibleSourceHidden:

/* Function Stack Size: 0x14 bytes */

void LGClockState::setOriginalVisibleSourceHidden_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 9) = (char)param_3;
  return;
}



// ===== 0x0000b378  glassView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::glassView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x48);
}



// ===== 0x0000b380  setGlassView:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setGlassView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x48,param_3);
  return;
}



// ===== 0x0000b38c  pullBlurView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::pullBlurView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x50);
}



// ===== 0x0000b394  setPullBlurView:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setPullBlurView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x50,param_3);
  return;
}



// ===== 0x0000b3a0  glyphMaskView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::glyphMaskView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x58);
}



// ===== 0x0000b3a8  setGlyphMaskView:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setGlyphMaskView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x58,param_3);
  return;
}



// ===== 0x0000b3b4  glyphMaskLayer

/* Function Stack Size: 0x10 bytes */

ID LGClockState::glyphMaskLayer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x60);
}



// ===== 0x0000b3bc  setGlyphMaskLayer:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setGlyphMaskLayer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x60,param_3);
  return;
}



// ===== 0x0000b3c8  colorOverlayView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::colorOverlayView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x68);
}



// ===== 0x0000b3d0  setColorOverlayView:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setColorOverlayView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x68,param_3);
  return;
}



// ===== 0x0000b3dc  colorGradientLayer

/* Function Stack Size: 0x10 bytes */

ID LGClockState::colorGradientLayer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x70);
}



// ===== 0x0000b3e4  setColorGradientLayer:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setColorGradientLayer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x70,param_3);
  return;
}



// ===== 0x0000b3f0  colorMaskView

/* Function Stack Size: 0x10 bytes */

ID LGClockState::colorMaskView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x78);
}



// ===== 0x0000b3f8  setColorMaskView:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setColorMaskView_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x78,param_3);
  return;
}



// ===== 0x0000b404  colorMaskLayer

/* Function Stack Size: 0x10 bytes */

ID LGClockState::colorMaskLayer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x80);
}



// ===== 0x0000b40c  setColorMaskLayer:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setColorMaskLayer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + 0x80,param_3);
  return;
}



// ===== 0x0000b418  renderContainer

/* Function Stack Size: 0x10 bytes */

ID LGClockState::renderContainer(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ID IVar1;
  ulong unaff_x30;
  
  _objc_loadWeakRetained(param_1 + 0x88);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xb440);
    IVar1 = (*UNRECOVERED_JUMPTABLE)();
    return IVar1;
  }
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000b444  setRenderContainer:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setRenderContainer_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0x88,param_3);
  return;
}



// ===== 0x0000b450  originalLabelFrame

/* Function Stack Size: 0x10 bytes */

CGRect * LGClockState::originalLabelFrame(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  return __return_storage_ptr__;
}



// ===== 0x0000b45c  setOriginalLabelFrame:

/* Function Stack Size: 0x30 bytes */

void LGClockState::setOriginalLabelFrame_(ID param_1,SEL param_2,CGRect param_3)

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



// ===== 0x0000b468  renderCanvasSize

/* Function Stack Size: 0x10 bytes */

CGSize LGClockState::renderCanvasSize(ID param_1,SEL param_2)

{
  CGSize CVar1;
  
  CVar1.field1_0x8 = (double)param_2;
  CVar1.field0_0x0 = (double)param_1;
  return CVar1;
}



// ===== 0x0000b470  setRenderCanvasSize:

/* Function Stack Size: 0x20 bytes */

void LGClockState::setRenderCanvasSize_(ID param_1,SEL param_2,CGSize param_3)

{
  undefined8 in_d0;
  undefined8 in_d1;
  
  *(undefined8 *)(param_1 + 0x108) = in_d0;
  *(undefined8 *)(param_1 + 0x110) = in_d1;
  return;
}



// ===== 0x0000b478  renderedGlyphBottom

/* Function Stack Size: 0x10 bytes */

double LGClockState::renderedGlyphBottom(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x90);
}



// ===== 0x0000b480  setRenderedGlyphBottom:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setRenderedGlyphBottom_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x90) = param_3;
  return;
}



// ===== 0x0000b488  hasRenderedGlyph

/* Function Stack Size: 0x10 bytes */

bool LGClockState::hasRenderedGlyph(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 10);
}



// ===== 0x0000b490  setHasRenderedGlyph:

/* Function Stack Size: 0x14 bytes */

void LGClockState::setHasRenderedGlyph_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 10) = (char)param_3;
  return;
}



// ===== 0x0000b498  complicationLayoutShift

/* Function Stack Size: 0x10 bytes */

double LGClockState::complicationLayoutShift(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0x98);
}



// ===== 0x0000b4a0  setComplicationLayoutShift:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setComplicationLayoutShift_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0x98) = param_3;
  return;
}



// ===== 0x0000b4a8  complicationLastTop

/* Function Stack Size: 0x10 bytes */

double LGClockState::complicationLastTop(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0xa0);
}



// ===== 0x0000b4b0  setComplicationLastTop:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setComplicationLastTop_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0xa0) = param_3;
  return;
}



// ===== 0x0000b4b8  complicationRow

/* Function Stack Size: 0x10 bytes */

ID LGClockState::complicationRow(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ID IVar1;
  ulong unaff_x30;
  
  _objc_loadWeakRetained(param_1 + 0xa8);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xb4e0);
    IVar1 = (*UNRECOVERED_JUMPTABLE)();
    return IVar1;
  }
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000b4e4  setComplicationRow:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setComplicationRow_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0xa8,param_3);
  return;
}



// ===== 0x0000b4f0  applying

/* Function Stack Size: 0x10 bytes */

bool LGClockState::applying(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0xb);
}



// ===== 0x0000b4f8  setApplying:

/* Function Stack Size: 0x14 bytes */

void LGClockState::setApplying_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 0xb) = (char)param_3;
  return;
}



// ===== 0x0000b500  scheduled

/* Function Stack Size: 0x10 bytes */

bool LGClockState::scheduled(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0xc);
}



// ===== 0x0000b508  setScheduled:

/* Function Stack Size: 0x14 bytes */

void LGClockState::setScheduled_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 0xc) = (char)param_3;
  return;
}



// ===== 0x0000b510  layoutCalls

/* Function Stack Size: 0x10 bytes */

unsigned_long_long LGClockState::layoutCalls(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0xb0);
}



// ===== 0x0000b518  setLayoutCalls:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setLayoutCalls_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0xb0) = param_3;
  return;
}



// ===== 0x0000b520  appliedChanges

/* Function Stack Size: 0x10 bytes */

unsigned_long_long LGClockState::appliedChanges(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0xb8);
}



// ===== 0x0000b528  setAppliedChanges:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setAppliedChanges_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0xb8) = param_3;
  return;
}



// ===== 0x0000b530  skippedChanges

/* Function Stack Size: 0x10 bytes */

unsigned_long_long LGClockState::skippedChanges(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + 0xc0);
}



// ===== 0x0000b538  setSkippedChanges:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setSkippedChanges_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + 0xc0) = param_3;
  return;
}



// ===== 0x0000b540  sampleStart

/* Function Stack Size: 0x10 bytes */

double LGClockState::sampleStart(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 200);
}



// ===== 0x0000b548  setSampleStart:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setSampleStart_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 200) = param_3;
  return;
}



// ===== 0x0000b550  lastNearestObstacle

/* Function Stack Size: 0x10 bytes */

ID LGClockState::lastNearestObstacle(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ID IVar1;
  ulong unaff_x30;
  
  _objc_loadWeakRetained(param_1 + 0xd0);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xb578);
    IVar1 = (*UNRECOVERED_JUMPTABLE)();
    return IVar1;
  }
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000b57c  setLastNearestObstacle:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setLastNearestObstacle_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + 0xd0,param_3);
  return;
}



// ===== 0x0000b588  lastNearestTop

/* Function Stack Size: 0x10 bytes */

double LGClockState::lastNearestTop(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0xd8);
}



// ===== 0x0000b590  setLastNearestTop:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setLastNearestTop_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0xd8) = param_3;
  return;
}



// ===== 0x0000b598  lastRetractionPhase

/* Function Stack Size: 0x10 bytes */

ID LGClockState::lastRetractionPhase(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xe0);
}



// ===== 0x0000b5a0  setLastRetractionPhase:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setLastRetractionPhase_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x0000b5a8  totalApplyTime

/* Function Stack Size: 0x10 bytes */

double LGClockState::totalApplyTime(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0xe8);
}



// ===== 0x0000b5b0  setTotalApplyTime:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setTotalApplyTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0xe8) = param_3;
  return;
}



// ===== 0x0000b5b8  peakApplyTime

/* Function Stack Size: 0x10 bytes */

double LGClockState::peakApplyTime(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + 0xf0);
}



// ===== 0x0000b5c0  setPeakApplyTime:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setPeakApplyTime_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + 0xf0) = param_3;
  return;
}



// ===== 0x0000b5c8  lastSignature

/* Function Stack Size: 0x10 bytes */

ID LGClockState::lastSignature(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0xf8);
}



// ===== 0x0000b5d0  setLastSignature:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setLastSignature_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x0000b5d8  lastFontDiagnostic

/* Function Stack Size: 0x10 bytes */

ID LGClockState::lastFontDiagnostic(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x100);
}



// ===== 0x0000b5e0  setLastFontDiagnostic:

/* Function Stack Size: 0x18 bytes */

void LGClockState::setLastFontDiagnostic_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x0000b5e8  pullBlurActive

/* Function Stack Size: 0x10 bytes */

bool LGClockState::pullBlurActive(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0xd);
}



// ===== 0x0000b5f0  setPullBlurActive:

/* Function Stack Size: 0x14 bytes */

void LGClockState::setPullBlurActive_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 0xd) = (char)param_3;
  return;
}



// ===== 0x0000b5f8  pullBlurKnown

/* Function Stack Size: 0x10 bytes */

bool LGClockState::pullBlurKnown(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + 0xe);
}



// ===== 0x0000b600  setPullBlurKnown:

/* Function Stack Size: 0x14 bytes */

void LGClockState::setPullBlurKnown_(ID param_1,SEL param_2,bool param_3)

{
  *(char *)(param_1 + 0xe) = (char)param_3;
  return;
}



// ===== 0x0000b608  .cxx_destruct

/* Function Stack Size: 0x10 bytes */

void LGClockState::_cxx_destruct(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xb6f0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_destroyWeak(param_1 + 0x18);
  return;
}



// ===== 0x0000b6f4  _LGScheduleClockRecoveryRefreshForPresentationChange

void _LGScheduleClockRecoveryRefreshForPresentationChange(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
  objc_msgSend_shared(PTR_PTR_00055af0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_trackMotion();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xb73c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0000b740  FUN_0000b740

void FUN_0000b740(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong unaff_x30;
  undefined auVar9 [16];
  
  lVar6 = _objc_getClass("MRUArtworkView");
  if (lVar6 != 0) {
    uVar7 = _objc_getClass("MRUArtworkView");
    _MSHookMessageEx(uVar7,PTR_s_layoutSubviews_000553d8,FUN_0000c2dc,&DAT_00055fc0);
    _MSHookMessageEx(uVar7,PTR_s_didMoveToWindow_00055210,FUN_0000c31c,&DAT_00055fc8);
    uVar8 = _sel_registerName("dealloc");
    _MSHookMessageEx(uVar7,uVar8,FUN_0000c35c,&DAT_00055fd0);
  }
  objc_msgSend_mainBundle(PTR__OBJC_CLASS___NSBundle_00055b58);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_bundleIdentifier();
  auVar9 = _objc_retainAutoreleasedReturnValue();
  iVar5 = objc_msgSend_isEqualToString_(auVar9._0_8_,auVar9._8_8_,&cf_com_apple_springboard);
  _objc_release(auVar9._0_8_);
  _objc_release(uVar7);
  if (iVar5 == 0) {
    return;
  }
  DAT_00055fb8 = _LGBackboardSafeModeActive();
  uVar7 = _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterAddObserver
            (uVar7,0,FUN_0000c404,&cf_com_wkk_systembox_clockglass_BackboarddSafeMode,0,4);
  lVar6 = _objc_getClass("CSProminentLayoutController");
  puVar1 = PTR_s_complicationElementBoundingTopY_00055110;
  if ((lVar6 != 0) &&
     (lVar6 = _class_getClassMethod(lVar6,PTR_s_complicationElementBoundingTopY_00055110),
     lVar6 != 0)) {
    _objc_getClass("CSProminentLayoutController");
    uVar7 = _object_getClass();
    _MSHookMessageEx(uVar7,puVar1,FUN_0000c418,&DAT_00055fd8);
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
             &PTR___NSConcreteGlobalBlock_00050680);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(auVar9._0_8_);
  _objc_release(uVar7);
  _lgObservePreferenceReload(&PTR___NSConcreteGlobalBlock_000506a0);
  uVar7 = _objc_getClass("_UIAnimatingLabel");
  _MSHookMessageEx(uVar7,PTR_s_setFont__00055748,FUN_0000ca7c,&DAT_00055fe0);
  puVar3 = PTR_s_setText__00055900;
  _MSHookMessageEx(uVar7,PTR_s_setText__00055900,FUN_0000cc1c,&DAT_00055fe8);
  puVar2 = PTR_s_setAttributedText__00055658;
  _MSHookMessageEx(uVar7,PTR_s_setAttributedText__00055658,FUN_0000cc74,&DAT_00055ff0);
  uVar7 = _objc_getClass("UILabel");
  puVar4 = PTR_s_setAlpha__00055640;
  _MSHookMessageEx(uVar7,PTR_s_setAlpha__00055640,FUN_0000cccc,&DAT_00055ff8);
  _MSHookMessageEx(uVar7,puVar3,FUN_0000cde8,&DAT_00056000);
  _MSHookMessageEx(uVar7,puVar2,FUN_0000ce68,&DAT_00056008);
  uVar7 = _objc_getClass("SBUILegibilityLabel");
  _MSHookMessageEx(uVar7,puVar4,FUN_0000cee8,&DAT_00056010);
  uVar7 = _objc_getClass("CSProminentTimeView");
  puVar2 = PTR_s_didMoveToWindow_00055210;
  _MSHookMessageEx(uVar7,PTR_s_didMoveToWindow_00055210,FUN_0000d058,&DAT_00056018);
  puVar3 = PTR_s_layoutSubviews_000553d8;
  _MSHookMessageEx(uVar7,PTR_s_layoutSubviews_000553d8,FUN_0000d098,&DAT_00056020);
  _MSHookMessageEx(uVar7,PTR_s__updateTimeString_00054fa8,FUN_0000d0e0,&DAT_00056028);
  _MSHookMessageEx(uVar7,PTR_s_setDate__00055710,FUN_0000d128,&DAT_00056030);
  uVar7 = _objc_getClass("CSProminentDisplayView");
  _MSHookMessageEx(uVar7,puVar3,FUN_0000d170,&DAT_00056038);
  uVar7 = _objc_getClass("CSProminentLayoutController");
  _MSHookMessageEx(uVar7,puVar1,FUN_0000d494,&DAT_00056040);
  uVar7 = _objc_getClass("SBFLockScreenDateView");
  _MSHookMessageEx(uVar7,puVar2,FUN_0000d4d4,&DAT_00056048);
  _MSHookMessageEx(uVar7,puVar3,FUN_0000d548,&DAT_00056050);
  _MSHookMessageEx(uVar7,PTR_s__updateLabelAlpha_00054f98,FUN_0000d5dc,&DAT_00056058);
  _MSHookMessageEx(uVar7,PTR_s__updateLabels_00054fa0,FUN_0000d640,&DAT_00056060);
  uVar7 = _objc_getClass("SBFLockScreenDateSubtitleDateView");
  _MSHookMessageEx(uVar7,puVar2,FUN_0000d6a4,&DAT_00056068);
  _MSHookMessageEx(uVar7,puVar3,FUN_0000d758,&DAT_00056070);
  uVar7 = _objc_getClass("PLPlatterView");
  _MSHookMessageEx(uVar7,puVar2,FUN_0000d80c,&DAT_00056078);
  _MSHookMessageEx(uVar7,puVar3,FUN_0000d84c,&DAT_00056080);
  uVar7 = _objc_getClass("NCNotificationShortLookView");
  _MSHookMessageEx(uVar7,puVar2,FUN_0000d88c,&DAT_00056088);
  _MSHookMessageEx(uVar7,puVar3,FUN_0000d8f0,&DAT_00056090);
  uVar7 = _objc_getClass("NCNotificationLongLookView");
  _MSHookMessageEx(uVar7,puVar2,FUN_0000d954,&DAT_00056098);
  _MSHookMessageEx(uVar7,puVar3,FUN_0000d9b8,&DAT_000560a0);
  uVar7 = _objc_getClass("NCNotificationListSectionRevealHintView");
  _MSHookMessageEx(uVar7,puVar2,FUN_0000da1c,&DAT_000560a8);
  _MSHookMessageEx(uVar7,puVar3,FUN_0000da80,&DAT_000560b0);
  uVar7 = _objc_getClass("NCNotificationListHeaderTitleView");
  _MSHookMessageEx(uVar7,puVar2,FUN_0000dae4,&DAT_000560b8);
  _MSHookMessageEx(uVar7,puVar3,FUN_0000db2c,&DAT_000560c0);
  uVar7 = _objc_getClass("NCNotificationListSectionHeaderView");
  puVar1 = PTR_s_traitCollectionDidChange__00055a10;
  _MSHookMessageEx(uVar7,PTR_s_traitCollectionDidChange__00055a10,FUN_0000db74,&DAT_000560c8);
  _MSHookMessageEx(uVar7,puVar2,FUN_0000dbbc,&DAT_000560d0);
  _MSHookMessageEx(uVar7,puVar3,FUN_0000dbfc,&DAT_000560d8);
  _MSHookMessageEx(uVar7,PTR_s__configureClearButtonIfNecessary_00054f80,FUN_0000dc3c,&DAT_000560e0)
  ;
  _MSHookMessageEx(uVar7,PTR_s_resetClearButtonStateAnimated__000555d0,FUN_0000dc7c,&DAT_000560e8);
  uVar7 = _objc_getClass("PLGlyphControl");
  _MSHookMessageEx(uVar7,PTR_s_setBackgroundMaterialView__00055680,FUN_0000dcbc,&DAT_000560f0);
  _MSHookMessageEx(uVar7,PTR_s__configureBackgroundMaterialView_00054f78,FUN_0000dd48,&DAT_000560f8)
  ;
  _MSHookMessageEx(uVar7,PTR_s__configureGlyphViewIfNecessaryWi_00054f88,FUN_0000ddd4,&DAT_00056100)
  ;
  uVar7 = _objc_getClass("NCToggleControl");
  _MSHookMessageEx(uVar7,puVar1,FUN_0000de60,&DAT_00056108);
  puVar1 = PTR_s_didMoveToSuperview_00055208;
  _MSHookMessageEx(uVar7,PTR_s_didMoveToSuperview_00055208,FUN_0000dea8,&DAT_00056110);
  _MSHookMessageEx(uVar7,puVar2,FUN_0000dee8,&DAT_00056118);
  _MSHookMessageEx(uVar7,puVar3,FUN_0000df28,&DAT_00056120);
  _MSHookMessageEx(uVar7,PTR_s_setVisualStyle__00055928,FUN_0000df68,&DAT_00056128);
  uVar7 = _objc_getClass("UIImageView");
  _MSHookMessageEx(uVar7,puVar4,FUN_0000dfa8,&DAT_00056130);
  uVar7 = _objc_getClass("MTMaterialView");
  _MSHookMessageEx(uVar7,puVar1,FUN_0000e020,&DAT_00056138);
  _MSHookMessageEx(uVar7,puVar2,FUN_0000e078,&DAT_00056140);
  _MSHookMessageEx(uVar7,puVar4,FUN_0000e0d0,&DAT_00056148);
  uVar7 = _objc_getClass("NCNotificationListView");
  _MSHookMessageEx(uVar7,PTR_s_setFrame__00055750,FUN_0000e148,&DAT_00056150);
  _MSHookMessageEx(uVar7,PTR_s_setContentOffset__000556f0,FUN_0000e224,&DAT_00056158);
  _MSHookMessageEx(uVar7,puVar2,FUN_0000e27c,&DAT_00056160);
  _MSHookMessageEx(uVar7,puVar3,FUN_0000e2bc,&DAT_00056168);
  uVar7 = _objc_getClass("NCNotificationStructuredListViewController");
  _MSHookMessageEx(uVar7,PTR_s_viewWillLayoutSubviews_00055a70,FUN_0000e2fc,&DAT_00056170);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xc2bc);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _MSHookMessageEx(uVar7,PTR_s_viewDidLayoutSubviews_00055a68,FUN_0000e39c,&DAT_00056178);
  return;
}



// ===== 0x0000c2dc  FUN_0000c2dc

void FUN_0000c2dc(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00055fc0)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xc318);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000eda8(param_1);
  return;
}



// ===== 0x0000c31c  FUN_0000c31c

void FUN_0000c31c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00055fc8)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xc358);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000eda8(param_1);
  return;
}



// ===== 0x0000c35c  FUN_0000c35c

void FUN_0000c35c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int local_34;
  
  iVar1 = FUN_0000f2a0();
  if (iVar1 != 0) {
    if (DAT_000561b4 != '\x01') {
      local_34 = 0;
      iVar1 = _notify_register_check("com.wkk.systembox.clockglass.lensrect.npartwork",&local_34);
      if (iVar1 != 0) goto LAB_0000c3dc;
      DAT_000561b4 = '\x01';
      DAT_000561b0 = local_34;
    }
    if (-1 < DAT_000561b0) {
      _notify_set_state(DAT_000561b0,0);
    }
  }
LAB_0000c3dc:
  (*DAT_00055fd0)(param_1,param_2);
  return;
}



// ===== 0x0000c404  FUN_0000c404

void FUN_0000c404(void)

{
  _dispatch_async(PTR___dispatch_main_q_00050528,&PTR___NSConcreteGlobalBlock_00050740);
  return;
}



// ===== 0x0000c418  FUN_0000c418

double FUN_0000c418(void)

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



// ===== 0x0000c41c  FUN_0000c41c

double FUN_0000c41c(void)

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



// ===== 0x0000c458  FUN_0000c458

void FUN_0000c458(undefined8 param_1,undefined8 param_2)

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
  
  local_58 = *(long *)PTR____stack_chk_guard_00050520;
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
  FUN_00005380();
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
          goto LAB_0000c56c;
        }
        lVar7 = lVar7 + 1;
      } while (lVar4 != lVar7);
      lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,extraout_x1_00,&local_120,auStack_d8,0x10);
    } while (lVar4 != 0);
  }
LAB_0000c56c:
  _objc_release(uVar3);
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_00050520 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x0000c5b4  FUN_0000c5b4

void FUN_0000c5b4(void)

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
  
  local_70 = *(long *)PTR____stack_chk_guard_00050520;
  DAT_00055fb8 = _LGBackboardSafeModeActive();
  FUN_00005380();
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
  FUN_00010640();
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
        FUN_000104f0(*(undefined8 *)(lStack_1a8 + lVar24 * 8));
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
          FUN_0000a04c();
          uVar13 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_sourceLabel(uVar25);
          uVar14 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a1ac();
          uVar15 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c();
          uVar16 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_originalFont(uVar25);
          uVar17 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c();
          uVar18 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_sourceLabel(uVar25);
          uVar19 = _objc_retainAutoreleasedReturnValue();
          _objc_getAssociatedObject(uVar19,PTR_LOOP_00055f28);
          uVar20 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c();
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
          iVar1 = FUN_0000e530(uVar5);
          if (iVar1 != 0) {
            FUN_00010950(uVar5);
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
  FUN_0000f32c();
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_00050520 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000ca7c  FUN_0000ca7c

void FUN_0000ca7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong unaff_x30;
  
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
      uVar9 = FUN_0000e7b0();
      _objc_release(uVar5);
      _objc_release(uVar4);
      if ((uVar9 & 1) == 0) goto LAB_0000cb7c;
    }
    else {
      iVar1 = FUN_0000e7b0();
      _objc_release(lVar3);
      if (iVar1 == 0) goto LAB_0000cb7c;
    }
    FUN_0000a04c(uVar2);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_font(param_1);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    FUN_0000a04c();
    uVar6 = _objc_retainAutoreleasedReturnValue();
    FUN_0000a1ac(param_1);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    FUN_0000a04c();
    uVar8 = _objc_retainAutoreleasedReturnValue();
    _LGLog(&cf_setFontenteringlabel__psupplied_____currentDirect_____currentAttributed_____);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
LAB_0000cb7c:
  (*DAT_00055fe0)(param_1,param_2,uVar2);
  FUN_00010e0c(param_1,uVar2,&cf_setFont);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    _objc_release(uVar2);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xcbd4);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== 0x0000cc1c  FUN_0000cc1c

void FUN_0000cc1c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong unaff_x30;
  
  (*DAT_00055fe8)();
  uVar1 = FUN_0001152c(param_1);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xcc70);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00011630(param_1);
  return;
}



// ===== 0x0000cc74  FUN_0000cc74

void FUN_0000cc74(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  ulong unaff_x30;
  
  (*DAT_00055ff0)();
  uVar1 = FUN_0001152c(param_1);
  if ((uVar1 & 1) != 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xccc8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00011630(param_1);
  return;
}



// ===== 0x0000cccc  FUN_0000cccc

void FUN_0000cccc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong unaff_x30;
  undefined auVar7 [16];
  
  uVar1 = _objc_retain();
  objc_msgSend_superview();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_opt_class();
  _NSStringFromClass();
  auVar7 = _objc_retainAutoreleasedReturnValue();
  uVar3 = auVar7._0_8_;
  uVar4 = objc_msgSend_isEqualToString_(uVar3,auVar7._8_8_,&cf_NCNotificationListHeaderTitleView);
  if ((uVar4 & 1) == 0) {
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    objc_msgSend_superview(uVar2);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    FUN_00010430();
    lVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar2);
    if (lVar6 != 0) {
      uVar2 = 1;
      goto LAB_0000cd94;
    }
  }
  uVar2 = FUN_00011bf8(uVar1);
LAB_0000cd94:
  UNRECOVERED_JUMPTABLE = DAT_00055ff8;
  FUN_00011e40(param_1,uVar1,uVar2);
  FUN_00011d10(uVar1);
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_3);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xcde4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0000cde8  FUN_0000cde8

void FUN_0000cde8(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong uVar2;
  ulong unaff_x30;
  
  (*DAT_00056000)();
  uVar2 = FUN_0001152c(param_1);
  if ((((uVar2 & 1) == 0) && (iVar1 = FUN_00017740(2,0x10,0,0), iVar1 == 0)) &&
     (iVar1 = FUN_0000e6d0(param_1,0), iVar1 != 0)) {
    if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xce58);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    FUN_00011630(param_1);
    return;
  }
  return;
}



// ===== 0x0000ce68  FUN_0000ce68

void FUN_0000ce68(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong uVar2;
  ulong unaff_x30;
  
  (*DAT_00056008)();
  uVar2 = FUN_0001152c(param_1);
  if ((((uVar2 & 1) == 0) && (iVar1 = FUN_00017740(2,0x10,0,0), iVar1 == 0)) &&
     (iVar1 = FUN_0000e6d0(param_1,0), iVar1 != 0)) {
    if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xced8);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    FUN_00011630(param_1);
    return;
  }
  return;
}



// ===== 0x0000cee8  FUN_0000cee8

void FUN_0000cee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong unaff_x30;
  undefined auVar8 [16];
  undefined auVar9 [16];
  
  _objc_retain();
  UNRECOVERED_JUMPTABLE = DAT_00056010;
  uVar3 = _objc_retain();
  _objc_opt_class();
  _NSStringFromClass();
  auVar8 = _objc_retainAutoreleasedReturnValue();
  iVar2 = objc_msgSend_isEqualToString_(auVar8._0_8_,auVar8._8_8_,&cf_SBUILegibilityLabel);
  if (iVar2 == 0) {
    bVar1 = false;
  }
  else {
    objc_msgSend_superview(uVar3);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_opt_class();
    _NSStringFromClass();
    auVar9 = _objc_retainAutoreleasedReturnValue();
    iVar2 = objc_msgSend_isEqualToString_
                      (auVar9._0_8_,auVar9._8_8_,&cf_NCNotificationListHeaderTitleView);
    if (iVar2 == 0) {
      bVar1 = false;
    }
    else {
      objc_msgSend_superview(uVar3);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_superview();
      uVar6 = _objc_retainAutoreleasedReturnValue();
      FUN_00010430();
      lVar7 = _objc_retainAutoreleasedReturnValue();
      bVar1 = lVar7 != 0;
      _objc_release();
      _objc_release(uVar6);
      _objc_release(uVar5);
    }
    _objc_release(auVar9._0_8_);
    _objc_release(uVar4);
  }
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  FUN_00011e40(param_1,uVar3,bVar1);
  FUN_00011d10(uVar3);
  (*UNRECOVERED_JUMPTABLE)(uVar3,param_3);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd054);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar3);
  return;
}



// ===== 0x0000d058  FUN_0000d058

void FUN_0000d058(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056018)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd094);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00011f10(param_1);
  return;
}



// ===== 0x0000d098  FUN_0000d098

void FUN_0000d098(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056020)();
  FUN_0001209c(param_1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd0dc);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00012158(param_1);
  return;
}



// ===== 0x0000d0e0  FUN_0000d0e0

void FUN_0000d0e0(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056028)();
  FUN_0001209c(param_1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd124);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00012158(param_1);
  return;
}



// ===== 0x0000d128  FUN_0000d128

void FUN_0000d128(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056030)();
  FUN_0001209c(param_1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd16c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00012158(param_1);
  return;
}



// ===== 0x0000d170  FUN_0000d170

void FUN_0000d170(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
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
  ulong unaff_x30;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined auVar15 [16];
  
  uVar6 = _objc_retain();
  FUN_00010c5c(uVar6,&cf_CSProminentTimeView);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  FUN_0000f740(uVar7,0);
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
      goto LAB_0000d23c;
    }
  }
  bVar4 = true;
  dVar12 = NAN;
LAB_0000d23c:
  iVar5 = _lgHostEnabled(&cf_Clock);
  dVar14 = 0.0;
  if ((iVar5 != 0) && (iVar5 = objc_msgSend_hasRenderedGlyph(lVar8), iVar5 != 0)) {
    objc_msgSend_window(lVar9);
    lVar10 = _objc_retainAutoreleasedReturnValue();
    if ((lVar10 == 0) ||
       ((uVar11 = objc_msgSend_isHidden(lVar9), (uVar11 & 1) != 0 ||
        (dVar13 = (double)objc_msgSend_alpha(lVar9), dVar13 <= DAT_0001b4a0)))) {
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    _objc_release(uVar6);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd490);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== 0x0000d494  FUN_0000d494

double FUN_0000d494(void)

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



// ===== 0x0000d498  FUN_0000d498

double FUN_0000d498(void)

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



// ===== 0x0000d4d4  FUN_0000d4d4

void FUN_0000d4d4(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  ulong unaff_x30;
  
  (*DAT_00056048)();
  uVar2 = _objc_retain(param_1);
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 == 0) {
    FUN_00010950(uVar2);
  }
  FUN_00011f10(uVar2);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd544);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x0000d548  FUN_0000d548

void FUN_0000d548(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  ulong unaff_x30;
  
  (*DAT_00056050)();
  uVar2 = _objc_retain(param_1);
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 == 0) {
    FUN_00010950(uVar2);
  }
  FUN_0001209c(uVar2);
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 == 0) {
    FUN_00012158(uVar2);
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd5d8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x0000d5dc  FUN_0000d5dc

void FUN_0000d5dc(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  
  (*DAT_00056058)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd63c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00012158(param_1);
  return;
}



// ===== 0x0000d640  FUN_0000d640

void FUN_0000d640(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  
  (*DAT_00056060)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd6a0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00012158(param_1);
  return;
}



// ===== 0x0000d6a4  FUN_0000d6a4

void FUN_0000d6a4(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong unaff_x30;
  
  (*DAT_00056068)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  objc_msgSend_superview(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  while ((lVar2 != 0 && (uVar3 = FUN_0000e530(lVar2), (uVar3 & 1) == 0))) {
    objc_msgSend_superview(lVar2);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar4;
  }
  FUN_00010950(lVar2);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    _objc_release(lVar2);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd754);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== 0x0000d758  FUN_0000d758

void FUN_0000d758(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong unaff_x30;
  
  (*DAT_00056070)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  objc_msgSend_superview(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  while ((lVar2 != 0 && (uVar3 = FUN_0000e530(lVar2), (uVar3 & 1) == 0))) {
    objc_msgSend_superview(lVar2);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar4;
  }
  FUN_00010950(lVar2);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    _objc_release(lVar2);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd808);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== 0x0000d80c  FUN_0000d80c

void FUN_0000d80c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056078)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd848);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000121e0(param_1);
  return;
}



// ===== 0x0000d84c  FUN_0000d84c

void FUN_0000d84c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056080)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd888);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000121e0(param_1);
  return;
}



// ===== 0x0000d88c  FUN_0000d88c

void FUN_0000d88c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  
  (*DAT_00056088)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd8ec);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000121e0(param_1);
  return;
}



// ===== 0x0000d8f0  FUN_0000d8f0

void FUN_0000d8f0(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  
  (*DAT_00056090)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd950);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000121e0(param_1);
  return;
}



// ===== 0x0000d954  FUN_0000d954

void FUN_0000d954(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  
  (*DAT_00056098)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd9b4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000121e0(param_1);
  return;
}



// ===== 0x0000d9b8  FUN_0000d9b8

void FUN_0000d9b8(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  
  (*DAT_000560a0)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xda18);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000121e0(param_1);
  return;
}



// ===== 0x0000da1c  FUN_0000da1c

void FUN_0000da1c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  
  (*DAT_000560a8)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xda7c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000121e0(param_1);
  return;
}



// ===== 0x0000da80  FUN_0000da80

void FUN_0000da80(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  
  (*DAT_000560b0)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdae0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000121e0(param_1);
  return;
}



// ===== 0x0000dae4  FUN_0000dae4

void FUN_0000dae4(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_000560b8)();
  FUN_0000f9f8(param_1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdb28);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000121e0(param_1);
  return;
}



// ===== 0x0000db2c  FUN_0000db2c

void FUN_0000db2c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_000560c0)();
  FUN_0000f9f8(param_1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdb70);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000121e0(param_1);
  return;
}



// ===== 0x0000db74  FUN_0000db74

void FUN_0000db74(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_000560c8)();
  FUN_00012260(param_1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdbb8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00012348(param_1);
  return;
}



// ===== 0x0000dbbc  FUN_0000dbbc

void FUN_0000dbbc(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_000560d0)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdbf8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00012260(param_1);
  return;
}



// ===== 0x0000dbfc  FUN_0000dbfc

void FUN_0000dbfc(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_000560d8)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdc38);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00012260(param_1);
  return;
}



// ===== 0x0000dc3c  FUN_0000dc3c

void FUN_0000dc3c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_000560e0)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdc78);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00012260(param_1);
  return;
}



// ===== 0x0000dc7c  FUN_0000dc7c

void FUN_0000dc7c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_000560e8)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdcb8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00012260(param_1);
  return;
}



// ===== 0x0000dcbc  FUN_0000dcbc

void FUN_0000dcbc(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  undefined auVar2 [16];
  
  (*DAT_000560f0)();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_isEqualToString_(auVar2._0_8_,auVar2._8_8_,&cf_NCToggleControl);
  _objc_release(auVar2._0_8_);
  if (iVar1 == 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdd34);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000fbf4(param_1);
  return;
}



// ===== 0x0000dd48  FUN_0000dd48

void FUN_0000dd48(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  undefined auVar2 [16];
  
  (*DAT_000560f8)();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_isEqualToString_(auVar2._0_8_,auVar2._8_8_,&cf_NCToggleControl);
  _objc_release(auVar2._0_8_);
  if (iVar1 == 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xddc0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000fbf4(param_1);
  return;
}



// ===== 0x0000ddd4  FUN_0000ddd4

void FUN_0000ddd4(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  undefined auVar2 [16];
  
  (*DAT_00056100)();
  _objc_opt_class(param_1);
  _NSStringFromClass();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_isEqualToString_(auVar2._0_8_,auVar2._8_8_,&cf_NCToggleControl);
  _objc_release(auVar2._0_8_);
  if (iVar1 == 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xde4c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000fbf4(param_1);
  return;
}



// ===== 0x0000de60  FUN_0000de60

void FUN_0000de60(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056108)();
  FUN_0000fbf4(param_1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdea4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00012348(param_1);
  return;
}



// ===== 0x0000dea8  FUN_0000dea8

void FUN_0000dea8(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056110)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdee4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000fbf4(param_1);
  return;
}



// ===== 0x0000dee8  FUN_0000dee8

void FUN_0000dee8(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056118)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdf24);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000fbf4(param_1);
  return;
}



// ===== 0x0000df28  FUN_0000df28

void FUN_0000df28(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056120)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdf64);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000fbf4(param_1);
  return;
}



// ===== 0x0000df68  FUN_0000df68

void FUN_0000df68(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056128)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdfa4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000fbf4(param_1);
  return;
}



// ===== 0x0000dfa8  FUN_0000dfa8

void FUN_0000dfa8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  ulong unaff_x30;
  
  UNRECOVERED_JUMPTABLE = DAT_00056130;
  uVar1 = _objc_retain();
  uVar2 = FUN_00011bf8();
  FUN_00011e40(param_1,uVar1,uVar2);
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_3);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe01c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0000e020  FUN_0000e020

void FUN_0000e020(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  
  (*DAT_00056138)();
  iVar1 = FUN_00011bf8(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe068);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000104f0(param_1);
  return;
}



// ===== 0x0000e078  FUN_0000e078

void FUN_0000e078(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  
  (*DAT_00056140)();
  iVar1 = FUN_00011bf8(param_1);
  if (iVar1 == 0) {
    return;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe0c0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_000104f0(param_1);
  return;
}



// ===== 0x0000e0d0  FUN_0000e0d0

void FUN_0000e0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  ulong unaff_x30;
  
  UNRECOVERED_JUMPTABLE = DAT_00056148;
  uVar1 = _objc_retain();
  uVar2 = FUN_00011bf8();
  FUN_00011e40(param_1,uVar1,uVar2);
  (*UNRECOVERED_JUMPTABLE)(uVar1,param_3);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe144);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0000e148  FUN_0000e148

void FUN_0000e148(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong unaff_x30;
  
  uVar1 = _objc_retain();
  _objc_getAssociatedObject(uVar1,PTR_LOOP_00055f48);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = objc_msgSend_boolValue();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    param_1 = FUN_00010068(param_1,param_2,param_3,param_4,uVar1);
  }
  (*DAT_00056150)(param_1,param_2,param_3,param_4,uVar1,param_6);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe220);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0000e224  FUN_0000e224

void FUN_0000e224(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
  (*DAT_00056158)();
  objc_msgSend_shared(PTR_PTR_00055af0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_trackMotion();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe278);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0000e27c  FUN_0000e27c

void FUN_0000e27c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056160)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe2b8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000f8d4(param_1);
  return;
}



// ===== 0x0000e2bc  FUN_0000e2bc

void FUN_0000e2bc(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  (*DAT_00056168)();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe2f8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000f8d4(param_1);
  return;
}



// ===== 0x0000e2fc  FUN_0000e2fc

void FUN_0000e2fc(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong unaff_x30;
  
  (*DAT_00056170)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  objc_msgSend_view(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  FUN_00010c5c(uVar2,&cf_NCNotificationListView);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  FUN_0000f8d4(uVar3);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe398);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar3);
  return;
}



// ===== 0x0000e39c  FUN_0000e39c

void FUN_0000e39c(undefined8 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong unaff_x30;
  
  (*DAT_00056178)();
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return;
  }
  objc_msgSend_view(param_1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  FUN_00010c5c(uVar2,&cf_NCNotificationListView);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  FUN_0000f8d4(uVar3);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe438);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar3);
  return;
}



// ===== 0x0000e43c  FUN_0000e43c

void FUN_0000e43c(undefined8 param_1,undefined8 param_2)

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
  iVar1 = _uncompress(dest,&local_28,&DAT_0001b500,0x2c461);
  if (iVar1 == 0 && local_28 == 0x72aa4) {
    _objc_storeStrong(&DAT_00056180,uVar2);
  }
  else {
    _LGLog(&cf_embeddedfontinflatefailedstatus__dbytes__lu);
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x0000e4e8  FUN_0000e4e8

void FUN_0000e4e8(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_00056190;
  DAT_00056190 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe52c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0000e4ec  FUN_0000e4ec

void FUN_0000e4ec(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_00056190;
  DAT_00056190 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe52c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0000e530  FUN_0000e530

undefined8 FUN_0000e530(void)

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



// ===== 0x0000e57c  FUN_0000e57c

void FUN_0000e57c(undefined8 param_1,undefined8 param_2)

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
  
  local_58 = *(long *)PTR____stack_chk_guard_00050520;
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
        FUN_0000e57c(*(undefined8 *)(lStack_118 + lVar6 * 8),uVar2);
        lVar6 = lVar6 + 1;
      } while (lVar4 != lVar6);
      lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,extraout_x1,&local_120,auStack_d8,0x10);
    } while (lVar4 != 0);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_00050520 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000e6d0  FUN_0000e6d0

ulong FUN_0000e6d0(undefined8 param_1,undefined8 param_2)

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



// ===== 0x0000e7b0  FUN_0000e7b0

bool FUN_0000e7b0(void)

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



// ===== 0x0000e848  FUN_0000e848

void FUN_0000e848(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  if (DAT_000561a8 != -1) {
    _dispatch_once(&DAT_000561a8,&PTR___NSConcreteGlobalBlock_00050700);
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe880);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_retainAutoreleaseReturnValue(DAT_000561a0);
  return;
}



// ===== 0x0000e89c  FUN_0000e89c

void FUN_0000e89c(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_000561a0;
  DAT_000561a0 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe8e0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0000e8a0  FUN_0000e8a0

void FUN_0000e8a0(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_000561a0;
  DAT_000561a0 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe8e0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0000e8e4  FUN_0000e8e4

void FUN_0000e8e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
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
  ulong unaff_x30;
  undefined auVar13 [16];
  undefined auVar14 [16];
  uint local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined8 local_78;
  double local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_00050520;
  uVar4 = _objc_retain();
  _objc_retain(param_2);
  uVar5 = _objc_retain();
  uVar6 = _objc_opt_class(PTR__OBJC_CLASS___NSString_00055ad8);
  uVar7 = _objc_opt_isKindOfClass(uVar4,uVar6);
  if ((uVar7 & 1) == 0) {
    uVar6 = _objc_retain(uVar5);
    goto LAB_0000ec1c;
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
      if (auVar13._0_8_ != 8) goto LAB_0000ebd4;
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
                ((double)(ulong)(local_88 >> 0x18) / DAT_0001b498,
                 (double)(ulong)(local_88 >> 0x10 & 0xff) / DAT_0001b498,
                 (double)(ulong)(local_88 >> 8 & 0xff) / DAT_0001b498,
                 (double)(ulong)(local_88 & 0xff) / DAT_0001b498,PTR__OBJC_CLASS___UIColor_00055b10)
      ;
      uVar6 = _objc_retainAutoreleasedReturnValue();
    }
LAB_0000ec08:
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
          goto LAB_0000ec08;
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
        goto LAB_0000ec0c;
      }
    }
LAB_0000ebd4:
    uVar6 = _objc_retain(uVar5);
  }
LAB_0000ec0c:
  _objc_release(uVar9);
  _objc_release(uVar8);
LAB_0000ec1c:
  _objc_release(uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_00050520 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xec7c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(uVar6);
  return;
}



// ===== 0x0000ec94  FUN_0000ec94

ulong FUN_0000ec94(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  cfstringStruct *pcVar5;
  ulong unaff_x30;
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
    if (DAT_00055f30 != -1) goto LAB_0000ed74;
    pcVar5 = &cf_maskmmapfailedbytes__zuerrno__d;
  }
  else {
    pcVar5 = &cf_masktruncatefailedbytes__zuerrno__d;
  }
  ___error();
  _LGLog(pcVar5);
LAB_0000ed74:
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xed98);
    uVar4 = (*UNRECOVERED_JUMPTABLE)();
    return uVar4;
  }
  uVar3 = _close(iVar1);
  return (ulong)uVar3;
}



// ===== 0x0000eda8  FUN_0000eda8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000eda8(undefined8 param_1,undefined4 param_2,double param_3,double param_4)

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
  
  local_a0 = *(long *)PTR____stack_chk_guard_00050520;
  uVar2 = _objc_retain();
  iVar1 = FUN_0000f2a0();
  if (iVar1 == 0) goto LAB_0000f158;
  objc_msgSend_window(uVar2);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_retain(uVar2);
  uVar5 = _objc_opt_class();
  lVar6 = _class_getInstanceVariable(uVar5,"_artworkImageView");
  if (lVar6 == 0) {
LAB_0000ee68:
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
                    goto LAB_0000efa4;
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
LAB_0000efa4:
    _objc_release(uVar8);
  }
  else {
    _object_getIvar(uVar4,lVar6);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_opt_class(PTR__OBJC_CLASS___UIImageView_00055ba0);
    uVar7 = _objc_opt_isKindOfClass(lVar6,uVar5);
    if ((uVar7 & 1) == 0) {
      _objc_release(lVar6);
      goto LAB_0000ee68;
    }
  }
  _objc_release(uVar4);
  if (((((lVar3 == 0) || (lVar6 == 0)) || (uVar7 = objc_msgSend_isHidden(lVar6), (uVar7 & 1) != 0))
      || ((dVar16 = (double)objc_msgSend_alpha(lVar6), dVar15 = DAT_0001b4a0, dVar16 <= DAT_0001b4a0
          || (uVar7 = objc_msgSend_isHidden(uVar4), (uVar7 & 1) != 0)))) ||
     (dVar16 = (double)objc_msgSend_alpha(uVar4), dVar16 <= dVar15)) {
LAB_0000f0f0:
    if (DAT_000561b4 == '\x01') {
joined_r0x0000f13c:
      if (-1 < DAT_000561b0) {
        uVar7 = 0;
        goto LAB_0000f144;
      }
    }
    else {
      local_120[0] = 0;
      iVar1 = _notify_register_check("com.wkk.systembox.clockglass.lensrect.npartwork",local_120);
      if (iVar1 == 0) {
        DAT_000561b4 = '\x01';
        DAT_000561b0 = local_120[0];
        goto joined_r0x0000f13c;
      }
    }
  }
  else {
    objc_msgSend_image(lVar6);
    lVar11 = _objc_retainAutoreleasedReturnValue();
    if (lVar11 == 0) goto LAB_0000f0f0;
    uVar7 = _lgHostEnabled(&cf_Clock);
    _objc_release(lVar11);
    if ((uVar7 & 1) == 0) goto LAB_0000f0f0;
    objc_msgSend_bounds(lVar6);
    uVar4 = objc_msgSend_convertRect_toView_(lVar6,extraout_x1_02,lVar3);
    dVar15 = param_3;
    dVar16 = param_4;
    objc_msgSend_bounds(lVar3);
    if ((dVar15 < 1.0) || (dVar16 < 1.0)) goto LAB_0000f148;
    dVar17 = (double)_CGRectGetMinX(uVar4,param_2,param_3,param_4);
    dVar18 = (double)_CGRectGetMinY(uVar4,param_2,param_3,param_4);
    dVar19 = (double)_CGRectGetWidth(uVar4,param_2,param_3,param_4);
    dVar20 = (double)_CGRectGetHeight(uVar4,param_2,param_3,param_4);
    if (DAT_000561b4 != '\x01') {
      local_120[0] = 0;
      iVar1 = _notify_register_check("com.wkk.systembox.clockglass.lensrect.npartwork",local_120);
      if (iVar1 != 0) goto LAB_0000f148;
      DAT_000561b0 = local_120[0];
      DAT_000561b4 = '\x01';
    }
    if (DAT_000561b0 < 0) goto LAB_0000f148;
    fVar12 = ((float)(dVar17 / dVar15) + 0.5) * 0.5;
    if (fVar12 <= 0.0) {
      fVar12 = 0.0;
    }
    uVar4 = NEON_fmaxnm(CONCAT44(((float)(dVar19 / dVar15) + 0.5) * 0.5,
                                 ((float)(dVar18 / dVar16) + 0.5) * 0.5),0,4);
    uVar5 = NEON_fmov(0x3f800000,4);
    uVar4 = NEON_fmin(uVar4,uVar5,4);
    uVar13 = NEON_fmin(fVar12,0x3f800000);
    fVar12 = (float)NEON_fmadd(uVar13,DAT_0001b4e0,0x3f000000);
    auVar21._0_8_ = (long)((float)uVar4 * 65535.0 + 0.5);
    auVar21._8_8_ = (long)((float)((ulong)uVar4 >> 0x20) * 65535.0 + 0.5);
    auVar21 = NEON_ushl(auVar21,_DAT_0001b4f0,8);
    fVar14 = ((float)(dVar20 / dVar16) + 0.5) * 0.5;
    if (fVar14 <= 0.0) {
      fVar14 = 0.0;
    }
    uVar13 = NEON_fmin(fVar14,0x3f800000);
    fVar14 = (float)NEON_fmadd(uVar13,DAT_0001b4e0,0x3f000000);
    uVar7 = auVar21._0_8_ | (long)fVar12 << 0x30 | auVar21._8_8_ | (long)fVar14;
LAB_0000f144:
    _notify_set_state(DAT_000561b0,uVar7);
  }
LAB_0000f148:
  _objc_release(lVar6);
  _objc_release(lVar3);
LAB_0000f158:
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_00050520 != local_a0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x0000f2a0  FUN_0000f2a0

undefined8 FUN_0000f2a0(void)

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



// ===== 0x0000f2fc  FUN_0000f2fc

void FUN_0000f2fc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  DAT_00055fb8 = _LGBackboardSafeModeActive();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xf328);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000f32c();
  return;
}



// ===== 0x0000f300  FUN_0000f300

void FUN_0000f300(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  DAT_00055fb8 = _LGBackboardSafeModeActive();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xf328);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000f32c();
  return;
}



// ===== 0x0000f32c  FUN_0000f32c

void FUN_0000f32c(void)

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
  
  local_70 = *(long *)PTR____stack_chk_guard_00050520;
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
                  iVar1 = FUN_0000f6cc(uVar6);
                  if (iVar1 != 0) {
                    uVar7 = _lgHostEnabled(&cf_Clock);
                    FUN_0000f740(uVar6,uVar7);
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
                    FUN_0000f8d4(uVar6);
                  }
                  _objc_opt_class(uVar6);
                  _NSStringFromClass();
                  auVar13 = _objc_retainAutoreleasedReturnValue();
                  iVar1 = objc_msgSend_isEqualToString_
                                    (auVar13._0_8_,auVar13._8_8_,
                                     &cf_NCNotificationListHeaderTitleView);
                  _objc_release(auVar13._0_8_);
                  if (iVar1 != 0) {
                    FUN_0000f9f8(uVar6);
                  }
                  _objc_opt_class(uVar6);
                  _NSStringFromClass();
                  auVar13 = _objc_retainAutoreleasedReturnValue();
                  iVar1 = objc_msgSend_isEqualToString_
                                    (auVar13._0_8_,auVar13._8_8_,&cf_NCToggleControl);
                  _objc_release(auVar13._0_8_);
                  if (iVar1 != 0) {
                    FUN_0000fbf4(uVar6);
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
  if (*(long *)PTR____stack_chk_guard_00050520 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000f6cc  FUN_0000f6cc

undefined8 FUN_0000f6cc(void)

{
  cfstringStruct *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  
  _objc_opt_class();
  _NSStringFromClass();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  iVar2 = FUN_00017740(2,0x10,0,0);
  pcVar1 = &cf_SBFLockScreenDateView;
  if (iVar2 != 0) {
    pcVar1 = &cf_CSProminentTimeView;
  }
  uVar4 = objc_msgSend_isEqualToString_(uVar3,extraout_x1,pcVar1);
  _objc_release(uVar3);
  return uVar4;
}



// ===== 0x0000f740  FUN_0000f740

void FUN_0000f740(undefined8 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong unaff_x30;
  undefined auVar9 [16];
  
  uVar2 = _objc_retain();
  iVar1 = FUN_0000f6cc();
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
      FUN_00005380();
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xf8d0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(lVar3);
  return;
}



// ===== 0x0000f8d4  FUN_0000f8d4

void FUN_0000f8d4(void)

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
    iVar1 = FUN_00017740(2,0x10,0,0);
    _objc_release(lVar3);
    if (iVar1 == 0) {
      _objc_getAssociatedObject(uVar2,PTR_LOOP_00055f40);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar5 = objc_msgSend_boolValue();
      _objc_release(uVar4);
      if ((uVar5 & 1) == 0) {
        _objc_setAssociatedObject(uVar2,PTR_LOOP_00055f40,PTR____kCFBooleanTrue_00050518,1);
        local_58 = PTR___NSConcreteStackBlock_00050500;
        local_50 = DAT_0001b488;
        local_48 = FUN_0000fddc;
        puStack_40 = &DAT_00050760;
        local_38 = _objc_retain(uVar2);
        _dispatch_async(PTR___dispatch_main_q_00050528,&local_58);
        _objc_release(local_38);
      }
    }
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x0000f9f8  FUN_0000f9f8

void FUN_0000f9f8(void)

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
  
  local_70 = *(long *)PTR____stack_chk_guard_00050520;
  uVar3 = _objc_retain();
  objc_msgSend_superview();
  uVar4 = _objc_retainAutoreleasedReturnValue();
  FUN_00010430();
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
        FUN_000104f0(uVar4);
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
            if (iVar2 != 0) goto LAB_0000fb78;
          }
          else {
LAB_0000fb78:
            FUN_000104f0(uVar8);
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
  if (*(long *)PTR____stack_chk_guard_00050520 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000fbf4  FUN_0000fbf4

void FUN_0000fbf4(void)

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
  
  local_70 = *(long *)PTR____stack_chk_guard_00050520;
  uVar2 = _objc_retain();
  iVar1 = FUN_000106dc();
  if (iVar1 != 0) {
    FUN_00010780(uVar2,PTR_s_backgroundMaterialView_00055058,&cf_MTMaterialView);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    FUN_00010780(uVar2,PTR_s_glyphView_000552d0,&cf_UIImageView);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    FUN_000104f0(uVar3);
    FUN_000104f0(uVar4);
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
            if ((uVar8 & 1) != 0) goto LAB_0000fd50;
            uVar7 = _NSClassFromString(&cf_MTMaterialView);
            auVar12 = _objc_opt_isKindOfClass(uVar10,uVar7);
            uVar7 = auVar12._8_8_;
            if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_0000fd50;
          }
          else {
LAB_0000fd50:
            FUN_000104f0(uVar10);
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
  if (*(long *)PTR____stack_chk_guard_00050520 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000fddc  FUN_0000fddc

void FUN_0000fddc(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong unaff_x30;
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
  if (lVar4 == 0) goto LAB_0000ffd8;
  _objc_getAssociatedObject(uVar3,PTR_LOOP_00055f48);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  uVar6 = objc_msgSend_boolValue();
  _objc_release(uVar5);
  if ((uVar6 & 1) != 0) goto LAB_0000ffd8;
  dVar8 = (double)_CACurrentMediaTime();
  _objc_getAssociatedObject(uVar3,PTR_LOOP_00055f50);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  dVar9 = (double)objc_msgSend_doubleValue();
  if (dVar9 <= 0.0) {
LAB_0000feb8:
    puVar1 = PTR_LOOP_00055f50;
    objc_msgSend_numberWithDouble_(dVar8,PTR__OBJC_CLASS___NSNumber_00055ae0);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,puVar1,uVar7,1);
    _objc_release(uVar7);
    _objc_getAssociatedObject(uVar3,PTR_LOOP_00055f58);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    iVar2 = FUN_00010018();
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
      uVar7 = FUN_00010068(uVar3);
    }
    dVar8 = param_2;
    uVar11 = param_3;
    uVar12 = param_4;
    uVar10 = objc_msgSend_frame(uVar3);
    uVar6 = _CGRectEqualToRect(uVar7,param_2,param_3,param_4,uVar10,dVar8,uVar11,uVar12);
    if ((uVar6 & 1) == 0) {
      _objc_setAssociatedObject(uVar3,PTR_LOOP_00055f48,PTR____kCFBooleanTrue_00050518,1);
      objc_msgSend_setFrame_(uVar7,param_2,param_3,param_4,uVar3);
      _objc_setAssociatedObject(uVar3,PTR_LOOP_00055f48,0,0);
    }
    _objc_release(lVar4);
  }
  else {
    dVar9 = (double)objc_msgSend_doubleValue(uVar5);
    param_2 = DAT_0001b4d8;
    if (DAT_0001b4d8 <= dVar8 - dVar9) goto LAB_0000feb8;
  }
  _objc_release(uVar5);
LAB_0000ffd8:
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x10004);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar3);
  return;
}



// ===== 0x00010008  FUN_00010008

void FUN_00010008(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}



// ===== 0x00010010  FUN_00010010

void FUN_00010010(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



// ===== 0x00010018  FUN_00010018

undefined8 FUN_00010018(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  ulong unaff_x30;
  
  iVar1 = FUN_00017740(2,0x10,0,0);
  if (iVar1 != 0) {
    return 0;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x10064);
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  uVar2 = _lgHostEnabled(&cf_Clock);
  return uVar2;
}



// ===== 0x00010068  FUN_00010068

undefined8 FUN_00010068(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
    iVar1 = FUN_00010018();
    _objc_release(lVar3);
    if (iVar1 != 0) {
      if (DAT_00056228 != -1) {
        _dispatch_once(&DAT_00056228,&PTR___NSConcreteGlobalBlock_00050790);
      }
      if (DAT_00056220 != 0) {
        objc_msgSend_superview(uVar2);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        uVar5 = _objc_opt_isKindOfClass(uVar4,DAT_00056220);
        _objc_release(uVar4);
        if ((uVar5 & 1) != 0) goto LAB_00010238;
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
      FUN_000102b0();
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
LAB_00010238:
  _objc_release(uVar2);
  return param_1;
}



// ===== 0x00010288  FUN_00010288

void FUN_00010288(void)

{
  DAT_00056220 = _NSClassFromString(&cf_NCNotificationListView);
  return;
}



// ===== 0x0001028c  FUN_0001028c

void FUN_0001028c(void)

{
  DAT_00056220 = _NSClassFromString(&cf_NCNotificationListView);
  return;
}



// ===== 0x000102b0  FUN_000102b0

void FUN_000102b0(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong unaff_x30;
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
  
  local_58 = *(long *)PTR____stack_chk_guard_00050520;
  lVar2 = _objc_retain();
  if ((lVar2 != 0) && (iVar1 = FUN_00017740(2,0x10,0,0), iVar1 == 0)) {
    iVar1 = FUN_0000e530(lVar2);
    if (iVar1 != 0) {
      lVar5 = _objc_retain(lVar2);
      goto LAB_00010308;
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
          FUN_000102b0(*(undefined8 *)(lStack_118 + lVar7 * 8));
          auVar8 = _objc_retainAutoreleasedReturnValue();
          lVar5 = auVar8._0_8_;
          if (lVar5 != 0) {
            _objc_release(uVar3);
            goto LAB_00010308;
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
LAB_00010308:
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_00050520 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x10354);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(lVar5);
  return;
}



// ===== 0x00010430  FUN_00010430

void FUN_00010430(void)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong unaff_x30;
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    _objc_autoreleaseReturnValue(lVar3);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x104ec);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== 0x000104f0  FUN_000104f0

void FUN_000104f0(void)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong unaff_x30;
  double dVar6;
  undefined auVar7 [16];
  
  lVar3 = _objc_retain();
  if (lVar3 != 0) {
    _objc_getAssociatedObject(lVar3,&DAT_00047961);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    iVar2 = _LG_prefBool(&cf_Clock_HideNotificationCenterVisuals,1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_00055ae0;
    if (iVar2 == 0) {
      if (lVar4 != 0) {
        objc_msgSend_doubleValue(lVar4);
        objc_msgSend_setAlpha_(lVar3);
        _objc_setAssociatedObject(lVar3,&DAT_00047961,0,1);
        FUN_00010640();
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
        _objc_setAssociatedObject(lVar3,&DAT_00047961,uVar5,1);
        _objc_release(uVar5);
        FUN_00010640();
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x1063c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(lVar3);
  return;
}



// ===== 0x00010640  FUN_00010640

void FUN_00010640(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  if (DAT_00056238 != -1) {
    _dispatch_once(&DAT_00056238,&PTR___NSConcreteGlobalBlock_000507b0);
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x10678);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_retainAutoreleaseReturnValue(DAT_00056230);
  return;
}



// ===== 0x00010694  FUN_00010694

void FUN_00010694(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_00056230;
  DAT_00056230 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x106d8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00010698  FUN_00010698

void FUN_00010698(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_00056230;
  DAT_00056230 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x106d8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x000106dc  FUN_000106dc

bool FUN_000106dc(void)

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
    FUN_00010430();
    lVar5 = _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar5 != 0;
    _objc_release();
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  return bVar1;
}



// ===== 0x00010780  FUN_00010780

void FUN_00010780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong unaff_x30;
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
  
  local_68 = *(long *)PTR____stack_chk_guard_00050520;
  uVar1 = _objc_retain();
  uVar2 = _objc_retain(param_3);
  uVar3 = _objc_opt_respondsToSelector(uVar1,param_2);
  if ((uVar3 & 1) != 0) {
    _objc_msgSend(uVar1,param_2);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    uVar5 = _objc_opt_class(PTR__OBJC_CLASS___UIView_00055b28);
    uVar3 = _objc_opt_isKindOfClass(lVar4,uVar5);
    if ((uVar3 & 1) != 0) goto LAB_000108f0;
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
          goto LAB_000108e8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar4 != lVar8);
      lVar4 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar5,extraout_x1,&local_130,auStack_e8,0x10);
    } while (lVar4 != 0);
    lVar4 = 0;
  }
LAB_000108e8:
  _objc_release(uVar5);
LAB_000108f0:
  _objc_release(uVar2);
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_00050520 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x10948);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(lVar4);
  return;
}



// ===== 0x00010950  FUN_00010950

void FUN_00010950(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  ulong unaff_x30;
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
  if ((lVar3 != 0) && (iVar2 = FUN_0000e530(lVar3), iVar2 != 0)) {
    objc_msgSend_superview(lVar3);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar4 != 0) {
      FUN_00010c5c(lVar3,&cf_SBFLockScreenDateSubtitleDateView);
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x10c58);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(lVar3);
  return;
}



// ===== 0x00010c5c  FUN_00010c5c

void FUN_00010c5c(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong unaff_x30;
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
  
  local_58 = *(long *)PTR____stack_chk_guard_00050520;
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
      goto LAB_00010da0;
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
          FUN_00010c5c(*(undefined8 *)(lStack_118 + lVar8 * 8),uVar3);
          auVar9 = _objc_retainAutoreleasedReturnValue();
          lVar5 = auVar9._0_8_;
          if (lVar5 != 0) {
            _objc_release(uVar6);
            goto LAB_00010da0;
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
LAB_00010da0:
  _objc_release(uVar3);
  _objc_release(lVar2);
  if (*(long *)PTR____stack_chk_guard_00050520 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x10df4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(lVar5);
  return;
}



// ===== 0x00010e0c  FUN_00010e0c

void FUN_00010e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
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
  ulong unaff_x30;
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
LAB_000114e4:
      _objc_release(uVar4);
      _objc_release(lVar3);
      if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x11528);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      _objc_release(uVar2);
      return;
    }
    uVar6 = FUN_0000f6cc(lVar5);
    if ((uVar6 & 1) != 0) {
      FUN_0000a1ac(uVar2);
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
          FUN_0000a04c(lVar3);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_font(uVar2);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c();
          uVar12 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c(lVar8);
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
          if (lVar9 == 0) goto LAB_000114b0;
          goto LAB_000114c4;
        }
      }
      else {
        FUN_0000f740(lVar5,1);
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
          FUN_0000a04c(lVar3);
          uVar14 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_font(uVar2);
          uVar15 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c();
          uVar16 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c(lVar8);
          uVar17 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_originalFont(lVar9);
          uVar18 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c();
          uVar19 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c(local_80);
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
          if (iVar1 != 0) goto LAB_000111c4;
          objc_msgSend_originalFont(lVar9);
          auVar23 = _objc_retainAutoreleasedReturnValue();
          lVar13 = auVar23._0_8_;
          objc_msgSend_setOriginalFont_(lVar9,auVar23._8_8_,lVar7);
          _objc_setAssociatedObject(uVar2,PTR_LOOP_00055f28,lVar7,1);
          _lgHostEnabled(&cf_Clock);
          FUN_0000a04c(lVar13);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c(lVar7);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_font(uVar2);
          uVar12 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c();
          uVar14 = _objc_retainAutoreleasedReturnValue();
          FUN_0000a04c(lVar8);
          uVar15 = _objc_retainAutoreleasedReturnValue();
          _LGLog(&
                 cf_fontcaptureacceptedreason___enabled__dlabel__pprevious_____selected_____direct_____attributed_____
                );
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar12);
          _objc_release(uVar11);
          _objc_release(uVar10);
LAB_000114b0:
          _objc_release(lVar13);
        }
        else {
LAB_000111c4:
          iVar1 = _LGDebugLoggingEnabled();
          if (iVar1 != 0) {
            objc_msgSend_applying(lVar9);
            objc_msgSend_fontName(lVar7);
            auVar23 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_containsString_(auVar23._0_8_,auVar23._8_8_,&cf_SFAdaptiveSoftNumeric);
            _objc_release(auVar23._0_8_);
            FUN_0000a04c(lVar7);
            lVar13 = _objc_retainAutoreleasedReturnValue();
            _LGLog(&cf_fontcapturerejectedreason___applying__dmissing__dcustom__dselected_____);
            goto LAB_000114b0;
          }
        }
        _objc_release(local_80);
LAB_000114c4:
        _objc_release(lVar9);
      }
      _objc_release(lVar7);
      _objc_release(lVar8);
      _objc_release(lVar5);
      goto LAB_000114e4;
    }
    objc_msgSend_superview(lVar5);
    lVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    lVar5 = lVar7;
  } while( true );
}



// ===== 0x0001152c  FUN_0001152c

long FUN_0001152c(void)

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
          goto LAB_00011610;
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
LAB_00011610:
  _objc_release(uVar1);
  return lVar4;
}



// ===== 0x00011630  FUN_00011630

void FUN_00011630(void)

{
  code *UNRECOVERED_JUMPTABLE;
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
  ulong unaff_x30;
  undefined auVar19 [16];
  undefined8 local_90;
  undefined8 local_78;
  
  uVar2 = _objc_retain();
  objc_msgSend_superview();
  lVar3 = _objc_retainAutoreleasedReturnValue();
  while (lVar3 != 0) {
    uVar4 = FUN_0000f6cc(lVar3);
    if ((uVar4 & 1) != 0) {
      uVar4 = _lgHostEnabled(&cf_Clock);
      if ((uVar4 & 1) == 0) {
        iVar1 = _LGDebugLoggingEnabled();
        if (iVar1 == 0) goto LAB_00011bb8;
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
        FUN_0000a04c();
        uVar8 = _objc_retainAutoreleasedReturnValue();
        FUN_0000a1ac(uVar2);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        FUN_0000a04c();
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
        FUN_0000f740(lVar3,1);
        lVar6 = _objc_retainAutoreleasedReturnValue();
        auVar19 = objc_msgSend_applying();
        uVar7 = auVar19._8_8_;
        if ((auVar19 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          FUN_00010e0c(uVar2,0,&cf_text);
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
      goto LAB_00011bb0;
    }
    objc_msgSend_superview(lVar3);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar5;
  }
  iVar1 = _LGDebugLoggingEnabled();
  if (iVar1 == 0) {
LAB_000119b4:
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
      unaff_x22 = FUN_0000e7b0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      if ((unaff_x22 & 1) == 0) goto LAB_000119b4;
    }
    else {
      iVar1 = FUN_0000e7b0();
      _objc_release(lVar3);
      if (iVar1 == 0) goto LAB_000119b4;
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
LAB_00011bb0:
    _objc_release(lVar6);
  }
LAB_00011bb8:
  _objc_release(lVar3);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x11bf4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x00011bf8  FUN_00011bf8

undefined8 FUN_00011bf8(void)

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
        uVar5 = FUN_000106dc(lVar2);
        goto LAB_00011cf0;
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
      goto LAB_00011cf0;
    }
    uVar5 = 0;
LAB_00011cf0:
    _objc_release(lVar4);
  }
  return uVar5;
}



// ===== 0x00011d10  FUN_00011d10

double FUN_00011d10(double param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar2 = _objc_retain();
  if ((param_1 <= 0.0) || (iVar1 = _lgHostEnabled(&cf_Clock), iVar1 == 0)) goto LAB_00011e1c;
  objc_msgSend_superview(lVar2);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  while ((lVar3 != 0 && (uVar4 = FUN_0000f6cc(lVar3), (uVar4 & 1) == 0))) {
    objc_msgSend_superview(lVar3);
    lVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = lVar5;
  }
  FUN_0000f740(lVar3,0);
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
      if (lVar7 != lVar2) goto LAB_00011e0c;
    }
    param_1 = 0.0;
  }
LAB_00011e0c:
  _objc_release(uVar6);
  _objc_release(lVar3);
LAB_00011e1c:
  _objc_release(lVar2);
  return param_1;
}



// ===== 0x00011e40  FUN_00011e40

double FUN_00011e40(double param_1,undefined8 param_2,int param_3)

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
     (dVar4 = 0.0, DAT_0001b4a0 < param_1)) {
    objc_msgSend_numberWithDouble_(param_1,PTR__OBJC_CLASS___NSNumber_00055ae0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,&DAT_00047961,uVar3,1);
    _objc_release(uVar3);
    FUN_00010640();
    auVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_addObject_(auVar5._0_8_,auVar5._8_8_,uVar2);
    _objc_release(auVar5._0_8_);
  }
  _objc_release(uVar2);
  return dVar4;
}



// ===== 0x00011f10  FUN_00011f10

void FUN_00011f10(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  ulong unaff_x30;
  
  uVar2 = _objc_retain();
  uVar3 = _lgHostEnabled(&cf_Clock);
  if ((uVar3 & 1) == 0) {
    FUN_0000f740(uVar2,0);
    uVar5 = _objc_retainAutoreleasedReturnValue();
  }
  else {
    objc_msgSend_window(uVar2);
    lVar4 = _objc_retainAutoreleasedReturnValue();
    FUN_0000f740(uVar2,lVar4 != 0);
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
      FUN_0000a2b4(uVar2);
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
      goto LAB_00012068;
    }
  }
  objc_msgSend_restore(uVar5);
  _objc_setAssociatedObject(uVar2,PTR_LOOP_00055f38,0,0);
LAB_00012068:
  _objc_release(uVar5);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x12098);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x0001209c  FUN_0001209c

void FUN_0001209c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  ulong unaff_x30;
  
  uVar2 = _objc_retain();
  iVar1 = _lgHostEnabled(&cf_Clock);
  if (iVar1 != 0) {
    FUN_0000f740(uVar2,1);
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x12154);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x00012158  FUN_00012158

void FUN_00012158(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  ulong unaff_x30;
  
  uVar2 = _objc_retain();
  iVar1 = _lgHostEnabled(&cf_Clock);
  if (iVar1 != 0) {
    objc_msgSend_window(uVar2);
    lVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      FUN_0000f740(uVar2,0);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_reassertNativeTimeHidden();
      _objc_release(uVar4);
    }
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x121dc);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x000121e0  FUN_000121e0

void FUN_000121e0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  undefined auVar2 [16];
  
  if (param_1 != 0) {
    uVar1 = _objc_retain();
    FUN_0000e848();
    auVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_addObject_(auVar2._0_8_,auVar2._8_8_,uVar1);
    _objc_release(uVar1);
    _objc_release(auVar2._0_8_);
  }
  objc_msgSend_shared(PTR_PTR_00055af0);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_trackMotion();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x1225c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00012260  FUN_00012260

void FUN_00012260(void)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong unaff_x30;
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
      FUN_0000f9f8();
      _objc_release(uVar5);
    }
    puVar1 = PTR_s_clearButton_000550a8;
    uVar4 = _objc_opt_respondsToSelector(uVar3,PTR_s_clearButton_000550a8);
    if ((uVar4 & 1) != 0) {
      _objc_msgSend(uVar3,puVar1);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      FUN_0000fbf4();
      _objc_release(uVar5);
    }
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x12344);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar3);
  return;
}



// ===== 0x00012348  FUN_00012348

void FUN_00012348(undefined8 param_1)

{
  undefined *local_50;
  undefined8 local_48;
  code *local_40;
  undefined *puStack_38;
  undefined auStack_30 [8];
  undefined auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  local_50 = PTR___NSConcreteStackBlock_00050500;
  local_48 = DAT_0001b488;
  local_40 = FUN_000123ec;
  puStack_38 = &DAT_000507d0;
  _objc_copyWeak(auStack_30,auStack_28);
  _dispatch_async(PTR___dispatch_main_q_00050528,&local_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



// ===== 0x000123ec  FUN_000123ec

void FUN_000123ec(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong unaff_x30;
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
        FUN_0000fbf4(uVar2);
      }
    }
    else {
      FUN_00012260();
    }
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x124bc);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x000124c0  FUN_000124c0

void FUN_000124c0(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x20,param_2 + 0x20);
  return;
}



// ===== 0x000124cc  FUN_000124cc

void FUN_000124cc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x20);
  return;
}



// ===== 0x000124d4  _hasAncestorOfClassName

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
LAB_00012560:
      _objc_release(lVar4);
      return uVar2;
    }
    if ((lVar3 != 0) && (uVar5 = _objc_opt_isKindOfClass(lVar1,lVar3), (uVar5 & 1) != 0)) {
      _objc_release(lVar1);
      uVar2 = 1;
      goto LAB_00012560;
    }
    objc_msgSend_superview(lVar1);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar6;
  } while( true );
}



// ===== 0x0001257c  _ancestorNameContains

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
        goto LAB_0001262c;
      }
      objc_msgSend_superview(lVar6);
      lVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      lVar6 = lVar5;
    } while (lVar5 != 0);
    uVar1 = 0;
  }
LAB_0001262c:
  _objc_release(uVar2);
  _objc_release(lVar3);
  return uVar1;
}



// ===== 0x00012654  _isExactClass

undefined8 _isExactClass(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  if (param_1 != 0) {
    uVar1 = _objc_retain(param_2);
    _objc_opt_class(param_1);
    _NSStringFromClass();
    auVar3 = _objc_retainAutoreleasedReturnValue();
    uVar2 = objc_msgSend_isEqualToString_(auVar3._0_8_,auVar3._8_8_,uVar1);
    _objc_release(uVar1);
    _objc_release(auVar3._0_8_);
    return uVar2;
  }
  return 0;
}



// ===== 0x000126c8  _lgHostEnabled

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



// ===== 0x00012750  _lgObservePreferenceReload

void _lgObservePreferenceReload(void)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong unaff_x30;
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x127f4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(lVar2);
  return;
}



// ===== 0x000127f8  FUN_000127f8

void FUN_000127f8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
  uVar1 = _CFNotificationCenterGetDarwinNotifyCenter();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x12840);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _CFNotificationCenterAddObserver(uVar1,0,FUN_00012844,&cf_com_wkk_systembox_prefschanged,0,4);
  return;
}



// ===== 0x000127fc  FUN_000127fc

void FUN_000127fc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
  uVar1 = _CFNotificationCenterGetDarwinNotifyCenter();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x12840);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _CFNotificationCenterAddObserver(uVar1,0,FUN_00012844,&cf_com_wkk_systembox_prefschanged,0,4);
  return;
}



// ===== 0x00012844  FUN_00012844

void FUN_00012844(void)

{
  _dispatch_async(PTR___dispatch_main_q_00050528,&PTR___NSConcreteGlobalBlock_00050800);
  return;
}



// ===== 0x00012858  FUN_00012858

void FUN_00012858(void)

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
  
  local_48 = *(long *)PTR____stack_chk_guard_00050520;
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
  if (*(long *)PTR____stack_chk_guard_00050520 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0001295c  _LGGlassPreferenceValue

void _LGGlassPreferenceValue(void)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong unaff_x30;
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
        _dispatch_once(&DAT_00056290,&PTR___NSConcreteGlobalBlock_00051068);
      }
      auVar7 = _objc_retain(DAT_00056288);
      objc_msgSend_dictionaryWithContentsOfFile_(puVar1,auVar7._8_8_,auVar7._0_8_);
      puVar5 = (undefined *)_objc_retainAutoreleasedReturnValue();
      puVar1 = PTR____NSDictionary0__struct_00050508;
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x12a78);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(uVar6);
  return;
}



// ===== 0x00012aa8  _LGInvalidateGlassPreferenceCache

void _LGInvalidateGlassPreferenceCache(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  _objc_opt_class(PTR_PTR_00055b20);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  uVar1 = DAT_00056258;
  DAT_00056258 = 0;
  _objc_release(uVar1);
  _objc_sync_exit(uVar2);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x12b08);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x00012b0c  _LGFilterTypeForHostPrefix

void _LGFilterTypeForHostPrefix(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  ulong unaff_x30;
  
  uVar2 = _objc_retain();
  lVar3 = objc_msgSend_length();
  if (lVar3 != 0) {
    _objc_retainAutorelease(uVar2);
    pcVar4 = (char *)objc_msgSend_UTF8String();
    if (pcVar4 == (char *)0x0) goto LAB_00012b98;
    lVar3 = 0;
    do {
      iVar1 = _strcmp(*(char **)((long)&PTR_s_Default_00050830 + lVar3),pcVar4);
      if (iVar1 == 0) {
        objc_msgSend_stringWithUTF8String_(PTR__OBJC_CLASS___NSString_00055ad8);
        pcVar4 = (char *)_objc_retainAutoreleasedReturnValue();
        goto LAB_00012b98;
      }
      lVar3 = lVar3 + 0x48;
    } while (lVar3 != 0x828);
  }
  pcVar4 = (char *)0x0;
LAB_00012b98:
  _objc_release(uVar2);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x12bc4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(pcVar4);
  return;
}



// ===== 0x00012bc8  tick:

/* Function Stack Size: 0x18 bytes */

void LGMotionDisplayLinkTarget::tick_(ID param_1,SEL param_2,ID param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 extraout_x1;
  ulong unaff_x30;
  double dVar2;
  double dVar3;
  
  uVar1 = _objc_retain(param_3);
  dVar2 = (double)objc_msgSend_targetTimestamp();
  dVar3 = (double)objc_msgSend_timestamp(uVar1);
  if (dVar3 < dVar2) {
    objc_msgSend_targetTimestamp(uVar1);
    objc_msgSend_timestamp(uVar1);
  }
  FUN_00012c44();
  objc_msgSend_setPaused_(uVar1,extraout_x1,1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x12c40);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00012c44  FUN_00012c44

void FUN_00012c44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  
  local_98 = *(long *)PTR____stack_chk_guard_00050520;
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
    uVar2 = DAT_00047968;
    dVar1 = DAT_0001b4a0;
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
  if (*(long *)PTR____stack_chk_guard_00050520 == local_98) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00012e84  lgEffectiveFilterType

/* Function Stack Size: 0x10 bytes */

ID LGLiveBackdropView::lgEffectiveFilterType(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
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
  ulong unaff_x30;
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
    goto LAB_00013168;
  }
  _objc_retain(*(undefined8 *)(param_1 + lVar11));
  uVar2 = _objc_retain();
  lVar11 = objc_msgSend_length();
  uVar3 = uVar2;
  if (lVar11 == 0) {
LAB_000130d0:
    _objc_release(uVar2);
  }
  else {
    uVar3 = _objc_retainAutorelease(uVar2);
    pcVar4 = (char *)objc_msgSend_UTF8String();
    if (pcVar4 != (char *)0x0) {
      lVar11 = 8;
      do {
        pcVar12 = *(char **)((long)&PTR_s_Default_00050820 + lVar11);
        sVar5 = _strlen(pcVar12);
        iVar1 = _strncmp(pcVar4,pcVar12,sVar5);
        if ((iVar1 == 0) && ((pcVar4[sVar5] == '\0' || (pcVar4[sVar5] == '.')))) {
          _objc_release(uVar3);
          if (lVar11 == 0x488) goto LAB_000130d8;
          goto LAB_00012f48;
        }
        lVar11 = lVar11 + 0x48;
      } while (lVar11 != 0x830);
    }
    _objc_release(uVar3);
LAB_00012f48:
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
          pcVar12 = *(char **)((long)&PTR_s_Default_00050820 + lVar11);
          sVar5 = _strlen(pcVar12);
          iVar1 = _strncmp(pcVar4,pcVar12,sVar5);
          if ((iVar1 == 0) && ((pcVar4[sVar5] == '\0' || (pcVar4[sVar5] == '.')))) {
            if (lVar11 == 0x6c8) {
              dVar14 = *(double *)(param_1 + (long)_lgShapeCornerRadius);
              goto LAB_00013058;
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
LAB_00013058:
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
      goto LAB_000130d0;
    }
  }
LAB_000130d8:
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
LAB_00013168:
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    IVar8 = _objc_autoreleaseReturnValue(uVar2);
    return IVar8;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x13198);
  IVar8 = (*UNRECOVERED_JUMPTABLE)();
  return IVar8;
}



// ===== 0x0001319c  layerClass

/* Function Stack Size: 0x10 bytes */

CLASS LGLiveBackdropView::layerClass(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  CLASS CVar2;
  ulong unaff_x30;
  
  lVar1 = _NSClassFromString(&cf_CABackdropLayer);
  if (lVar1 == 0) {
    _objc_opt_class(PTR__OBJC_CLASS___CALayer_00055bd0);
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x131d8);
    CVar2 = (*UNRECOVERED_JUMPTABLE)();
    return CVar2;
  }
  CVar2 = _objc_retainAutoreleaseReturnValue();
  return CVar2;
}



// ===== 0x000131dc  initWithFrame:

/* Function Stack Size: 0x30 bytes */

ID LGLiveBackdropView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  ID IVar1;
  
  IVar1 = objc_msgSend_initWithFrame_groupName_filterType_(param_1,param_2,0,0);
  return IVar1;
}



// ===== 0x000131e8  initWithFrame:groupName:

/* Function Stack Size: 0x38 bytes */

ID LGLiveBackdropView::initWithFrame_groupName_(ID param_1,SEL param_2,CGRect param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_msgSend_initWithFrame_groupName_filterType_();
  return IVar1;
}



// ===== 0x000131f0  initWithFrame:groupName:filterType:

/* Function Stack Size: 0x40 bytes */

ID LGLiveBackdropView::initWithFrame_groupName_filterType_
             (ID param_1,SEL param_2,CGRect param_3,ID param_4,ID param_5)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  ID local_70;
  undefined *puStack_68;
  
  uVar4 = _objc_retain(param_4);
  uVar5 = _objc_retain(param_5);
  puStack_68 = PTR_PTR_00055c30;
  local_70 = param_1;
  IVar6 = _objc_msgSendSuper2(&local_70,PTR_s_initWithFrame__00055320);
  if (IVar6 != 0) {
    *(undefined8 *)(IVar6 + (long)_lastRadiusStep) = 0xffffffffffffffff;
    *(undefined8 *)(IVar6 + (long)_appliedSpecularOpacity) = 0xbff0000000000000;
    puVar1 = (undefined8 *)(IVar6 + (long)_lgShapeRect);
    uVar11 = *(undefined8 *)PTR__CGRectNull_000504c8;
    uVar10 = *(undefined8 *)(PTR__CGRectNull_000504c8 + 0x18);
    uVar7 = *(undefined8 *)(PTR__CGRectNull_000504c8 + 0x10);
    puVar1[1] = *(undefined8 *)(PTR__CGRectNull_000504c8 + 8);
    *puVar1 = uVar11;
    puVar1[3] = uVar10;
    puVar1[2] = uVar7;
    uVar7 = objc_msgSend_copy(uVar5);
    uVar10 = *(undefined8 *)(IVar6 + (long)_lgFilterType);
    *(undefined8 *)(IVar6 + (long)_lgFilterType) = uVar7;
    _objc_release(uVar10);
    LOAcquire();
    LORelease();
    iVar3 = DAT_00056260 + 1;
    DAT_00056260 = DAT_00056260 + 1;
    *(int *)(IVar6 + (long)_lgId) = iVar3;
    lVar8 = objc_msgSend_length(uVar4);
    if (lVar8 == 0) {
      if (DAT_00056268 != -1) {
        _dispatch_once(&DAT_00056268,&PTR___NSConcreteGlobalBlock_00051048);
      }
      puVar2 = PTR__OBJC_CLASS___NSString_00055ad8;
      _getpid();
      objc_msgSend_stringWithFormat_(puVar2);
      uVar7 = _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar7 = objc_msgSend_copy(uVar4);
    }
    uVar10 = *(undefined8 *)(IVar6 + (long)_lgGroupName);
    *(undefined8 *)(IVar6 + (long)_lgGroupName) = uVar7;
    _objc_release(uVar10);
    objc_msgSend_setUserInteractionEnabled_(IVar6,extraout_x1,0);
    objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
    auVar12 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setBackgroundColor_(IVar6,auVar12._8_8_,auVar12._0_8_);
    _objc_release(auVar12._0_8_);
    objc_msgSend_setOpaque_(IVar6,extraout_x1_00,0);
    objc_msgSend_setAutoresizingMask_(IVar6,extraout_x1_01,0x12);
    uVar7 = extraout_x1_02;
    if (DAT_00056270 == 0) {
      objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
      lVar9 = _objc_retainAutoreleasedReturnValue();
      lVar8 = DAT_00056270;
      DAT_00056270 = lVar9;
      _objc_release(lVar8);
      uVar7 = extraout_x1_03;
    }
    if ((DAT_00056298 & 1) == 0) {
      DAT_00056298 = 1;
      uVar7 = _CFNotificationCenterGetDarwinNotifyCenter();
      _CFNotificationCenterAddObserver
                (uVar7,0,FUN_0001596c,&cf_com_wkk_systembox_clockglass_ParametersReloaded,0,4);
      uVar7 = extraout_x1_04;
    }
    objc_msgSend_addObject_(DAT_00056270,uVar7,IVar6);
    iVar3 = FUN_00015ac8();
    uVar7 = extraout_x1_05;
    if (iVar3 != 0) {
      if (DAT_00056278 == 0) {
        objc_msgSend_weakObjectsHashTable(PTR__OBJC_CLASS___NSHashTable_00055b80);
        lVar9 = _objc_retainAutoreleasedReturnValue();
        lVar8 = DAT_00056278;
        DAT_00056278 = lVar9;
        _objc_release(lVar8);
      }
      if (DAT_00056280 == 0) {
        lVar9 = _objc_opt_new(PTR__OBJC_CLASS___CMMotionManager_00055bd8);
        lVar8 = DAT_00056280;
        DAT_00056280 = lVar9;
        _objc_release(lVar8);
      }
      if ((DAT_00056299 & 1) == 0) {
        DAT_00056299 = 1;
        uVar7 = _CFNotificationCenterGetDarwinNotifyCenter();
        _CFNotificationCenterAddObserver
                  (uVar7,0,FUN_00015b38,&cf_com_wkk_systembox_prefschanged,0,4);
      }
      FUN_00015b4c();
      FUN_00015bac();
      uVar7 = extraout_x1_06;
    }
    objc_msgSend_addObject_(DAT_00056278,uVar7,IVar6);
    objc_msgSend_applyFilters(IVar6);
    _objc_retain(IVar6);
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(IVar6);
  return IVar6;
}



// ===== 0x00013550  FUN_00013550

void FUN_00013550(void)

{
  DAT_00056264 = _arc4random();
  return;
}



// ===== 0x00013554  FUN_00013554

void FUN_00013554(void)

{
  DAT_00056264 = _arc4random();
  return;
}



// ===== 0x00013570  dealloc

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::dealloc(ID param_1,SEL param_2)

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



// ===== 0x000135d4  didMoveToWindow

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::didMoveToWindow(ID param_1,SEL param_2)

{
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00055c30;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_didMoveToWindow_00055210);
  objc_msgSend_applyFilters(param_1);
  return;
}



// ===== 0x00013620  traitCollectionDidChange:

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::traitCollectionDidChange_(ID param_1,SEL param_2,ID param_3)

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



// ===== 0x000136dc  lgSpecularEnabledOverride

/* Function Stack Size: 0x10 bytes */

ID LGLiveBackdropView::lgSpecularEnabledOverride(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = _objc_getAssociatedObject(param_1,PTR_LOOP_00055f68);
  return IVar1;
}



// ===== 0x000136e8  setLgSpecularEnabledOverride:

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::setLgSpecularEnabledOverride_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong unaff_x30;
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x137a0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(lVar2);
  return;
}



// ===== 0x000137a4  layoutSubviews

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::layoutSubviews(ID param_1,SEL param_2)

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



// ===== 0x000137f8  updateNativeBlurOverlayWithRadius:

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::updateNativeBlurOverlayWithRadius_(ID param_1,SEL param_2,double param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  SEL extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar3;
  long lVar4;
  ulong unaff_x30;
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
  if (DAT_00047970 < ABS(*(double *)(param_1 + lVar1) - param_3)) {
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    objc_msgSend_numberWithDouble_(param_3,PTR__OBJC_CLASS___NSNumber_00055ae0);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setValue_forKey_(uVar2,auVar6._8_8_,auVar6._0_8_,&cf_lgBlurRadius);
    _objc_release(auVar6._0_8_);
    *(double *)(param_1 + lVar1) = param_3;
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    objc_msgSend_commit(PTR__OBJC_CLASS___CATransaction_00055b48);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x139e4);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== 0x00013a28  setLgShapeRect:

/* Function Stack Size: 0x30 bytes */

void LGLiveBackdropView::setLgShapeRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  size_t sVar5;
  char *pcVar6;
  long lVar7;
  ulong unaff_x30;
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
      pcVar6 = *(char **)((long)&PTR_s_Default_00050820 + lVar7);
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    objc_msgSend_updateSpecular(param_1);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x13b5c);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== 0x00013b60  setLgShapeCornerRadius:

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::setLgShapeCornerRadius_(ID param_1,SEL param_2,double param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  char *pcVar2;
  size_t sVar3;
  char *pcVar4;
  long lVar5;
  ulong unaff_x30;
  
  if (ABS(*(double *)(param_1 + (long)_lgShapeCornerRadius) - param_3) < DAT_0001b4a0) {
    return;
  }
  *(double *)(param_1 + (long)_lgShapeCornerRadius) = param_3;
  pcVar2 = (char *)objc_msgSend_UTF8String(*(undefined8 *)(param_1 + (long)_lgFilterType));
  if (pcVar2 != (char *)0x0) {
    lVar5 = 8;
    do {
      pcVar4 = *(char **)((long)&PTR_s_Default_00050820 + lVar5);
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    objc_msgSend_updateSpecular(param_1);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x13c5c);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== 0x00013c60  updateSpecular

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::updateSpecular(ID param_1,SEL param_2)

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
  
  local_98 = *(long *)PTR____stack_chk_guard_00050520;
  objc_msgSend_bounds();
  uVar4 = _CGRectIsEmpty();
  if ((uVar4 & 1) != 0) goto LAB_00014518;
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
    if ((uVar4 & 1) != 0) goto LAB_00013cdc;
    uVar18 = *puVar1;
    uVar21 = puVar1[1];
    uVar22 = puVar1[2];
    uVar23 = puVar1[3];
    uVar19 = *(undefined8 *)(param_1 + (long)_lgShapeCornerRadius);
  }
  else {
LAB_00013cdc:
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
      ppuVar15 = &PTR_s_Default_00050830;
      do {
        pcVar16 = ppuVar15[-1];
        sVar8 = _strlen(pcVar16);
        iVar3 = _strncmp(pcVar7,pcVar16,sVar8);
        if ((iVar3 == 0) && ((pcVar7[sVar8] == '\0' || (pcVar7[sVar8] == '.')))) {
          if ((uVar4 != 0x15) && ((0x1edeffffUL >> (uVar4 & 0x3f) & 1) != 0)) {
            objc_msgSend_stringWithUTF8String_(PTR__OBJC_CLASS___NSString_00055ad8);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            goto LAB_00013dcc;
          }
          uVar2 = 0;
          goto LAB_00013e70;
        }
        uVar4 = uVar4 + 1;
        ppuVar15 = ppuVar15 + 9;
      } while (uVar4 != 0x1d);
    }
    uVar5 = 0;
LAB_00013dcc:
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
LAB_00013e70:
  pcVar7 = (char *)objc_msgSend_UTF8String(*(undefined8 *)(param_1 + lVar13));
  if (pcVar7 != (char *)0x0) {
    lVar13 = 0;
    do {
      pcVar16 = *(char **)((long)&PTR_s_com_wkk_systembox_clockglass_ref_00050828 + lVar13);
      sVar8 = _strlen(pcVar16);
      iVar3 = _strncmp(pcVar7,pcVar16,sVar8);
      if ((iVar3 == 0) && ((pcVar7[sVar8] == '\0' || (pcVar7[sVar8] == '.')))) {
        if (lVar13 == 0x480) goto LAB_00014510;
        lVar13 = (long)&PTR_s_Default_00050820 + lVar13;
        goto LAB_00013ed4;
      }
      lVar13 = lVar13 + 0x48;
    } while (lVar13 != 0x828);
  }
  lVar13 = 0;
LAB_00013ed4:
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
    dVar20 = DAT_00047978;
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
        dVar20 = DAT_00047978;
        if (DAT_000479c0 < *(float *)(lVar13 + 0x30)) {
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
                 &PTR__OBJC_CLASS___NSConstantArray_00052f78);
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
    if (DAT_00047970 < ABS(*(double *)(param_1 + lVar14) - dVar20)) {
      objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_00055b10);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_retainAutorelease();
      objc_msgSend_CGColor();
      uVar12 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      objc_msgSend_colorWithWhite_alpha_
                (0x3ff0000000000000,dVar20 * DAT_00047980,PTR__OBJC_CLASS___UIColor_00055b10);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_retainAutorelease();
      local_c8 = objc_msgSend_CGColor();
      objc_msgSend_colorWithWhite_alpha_
                (0x3ff0000000000000,dVar20 * DAT_00047988,PTR__OBJC_CLASS___UIColor_00055b10);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = _objc_retainAutorelease();
      local_c0 = objc_msgSend_CGColor();
      uStack_b8 = uVar12;
      local_b0 = uVar12;
      objc_msgSend_colorWithWhite_alpha_(0,dVar20 * DAT_00047990,PTR__OBJC_CLASS___UIColor_00055b10)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar10 = _objc_retainAutorelease();
      local_a8 = objc_msgSend_CGColor();
      objc_msgSend_colorWithWhite_alpha_
                (0x3ff0000000000000,dVar20 * DAT_00047998,PTR__OBJC_CLASS___UIColor_00055b10);
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
    objc_msgSend_colorWithAlphaComponent_(DAT_000479a0);
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
    objc_msgSend_applySpecularAngle_(DAT_00047968,param_1);
    _objc_release(uVar5);
  }
LAB_00014510:
  _objc_release(lVar6);
LAB_00014518:
  if (*(long *)PTR____stack_chk_guard_00050520 != local_98) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x00014580  applySpecularAngle:

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::applySpecularAngle_(ID param_1,SEL param_2,double param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long lVar2;
  ulong unaff_x30;
  double dVar3;
  double in_d1;
  
  lVar2 = (long)_specularLayer;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    return;
  }
  dVar3 = (double)___sincos_stret();
  objc_msgSend_setStartPoint_(in_d1 * 0.5 + 0.5,dVar3 * 0.5 + 0.5,lVar1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x14600);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  objc_msgSend_setEndPoint_(0.5 - in_d1 * 0.5,0.5 - dVar3 * 0.5,*(undefined8 *)(param_1 + lVar2));
  return;
}



// ===== 0x0001461c  applyFilters

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::applyFilters(ID param_1,SEL param_2)

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
  
  lVar12 = *(long *)PTR____stack_chk_guard_00050520;
  objc_msgSend_layer();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = _NSClassFromString(&cf_CABackdropLayer);
  if (lVar3 == 0) goto LAB_00014cfc;
  auVar19 = _objc_opt_isKindOfClass(uVar2,lVar3);
  if ((auVar19 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_00014cfc;
  lVar3 = (long)_backdropConfigured;
  if (*(char *)(param_1 + lVar3) == '\0') {
    objc_msgSend_setValue_forKey_
              (uVar2,auVar19._8_8_,PTR____kCFBooleanFalse_00050510,&cf_layerUsesCoreImageFilters);
    objc_msgSend_setValue_forKey_
              (uVar2,extraout_x1,PTR____kCFBooleanFalse_00050510,&cf_windowServerAware);
    objc_msgSend_setValue_forKey_
              (uVar2,extraout_x1_00,*(undefined8 *)(param_1 + (long)_lgGroupName),&cf_groupName);
    objc_msgSend_setValue_forKey_(uVar2,extraout_x1_01,&cf_com_wkk_clockglass,&cf_groupNamespace);
    objc_msgSend_setValue_forKey_
              (uVar2,extraout_x1_02,PTR____kCFBooleanTrue_00050518,&cf_ignoresScreenClip);
    *(undefined *)(param_1 + lVar3) = 1;
  }
  lVar3 = (long)_lgFilterType;
  pcVar4 = (char *)objc_msgSend_UTF8String(*(undefined8 *)(param_1 + lVar3));
  if (pcVar4 != (char *)0x0) {
    lVar14 = 0;
    ppuVar15 = &PTR_s_com_wkk_systembox_clockglass_ref_00050828;
    do {
      pcVar13 = *ppuVar15;
      sVar5 = _strlen(pcVar13);
      iVar1 = _strncmp(pcVar4,pcVar13,sVar5);
      if ((iVar1 == 0) && ((pcVar4[sVar5] == '\0' || (pcVar4[sVar5] == '.')))) {
        dVar18 = 0.5;
        if (((int)lVar14 == -0x10) || (dVar18 = 1.0, -(int)lVar14 - 0x15U < 3)) goto LAB_000148cc;
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
    ppuVar15 = &PTR_s_com_wkk_systembox_clockglass_ref_00050828;
    do {
      pcVar13 = *ppuVar15;
      sVar5 = _strlen(pcVar13);
      iVar1 = _strncmp(pcVar4,pcVar13,sVar5);
      if ((iVar1 == 0) && ((pcVar4[sVar5] == '\0' || (pcVar4[sVar5] == '.')))) {
        dVar18 = 1.5;
        if (-(int)lVar14 - 0x11U < 4) goto LAB_000148cc;
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
    if (dVar16 <= DAT_00047988) {
      dVar16 = DAT_00047988;
    }
    dVar18 = (double)NEON_fminnm(dVar16,0x3ff0000000000000);
    _objc_release(uVar6);
    dVar18 = SQRT((dVar18 * DAT_000479a8) / (in_d2 * in_d3));
    if (dVar18 <= 0.25) {
      dVar18 = 0.25;
    }
    dVar18 = (double)NEON_fminnm(dVar18,0x3fe8000000000000);
  }
LAB_000148cc:
  dVar16 = *(double *)(param_1 + (long)_lgBackdropZoom);
  if (dVar16 <= 0.0) {
    dVar16 = 1.0;
  }
  dVar17 = *(double *)(param_1 + (long)_appliedBackdropZoom);
  if (((DAT_00047970 < ABS(dVar16 + -1.0)) || (0.0 < dVar17)) &&
     (DAT_00047970 < ABS(dVar16 - dVar17))) {
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
  if (DAT_000479b0 < ABS(dVar18 - *(double *)(param_1 + lVar14))) {
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
      pcVar13 = *(char **)((long)&PTR_s_com_wkk_systembox_clockglass_ref_00050828 + lVar3);
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
            dVar18 = (double)*(float *)((long)&DAT_0005084c + lVar3);
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
LAB_00014be8:
    if (lVar9 == 0) {
      FUN_00014e08("CAFilter class not found");
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
    if ((uVar7 & 1) == 0) goto LAB_00014be8;
  }
  _objc_release(uVar6);
  _objc_release(lVar8);
LAB_00014cfc:
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_00050520 == lVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00014e08  FUN_00014e08

void FUN_00014e08(char *param_1,undefined8 param_2)

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



// ===== 0x00014e98  reapplyFilterForParameterReload

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::reapplyFilterForParameterReload(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x14f2c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  objc_msgSend_setNeedsDisplay(*(undefined8 *)(param_1 + (long)_specularLayer));
  return;
}



// ===== 0x00014f30  lgInvalidateFilterContents

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::lgInvalidateFilterContents(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
  *(byte *)(param_1 + (long)_parameterRefreshVariant) =
       *(byte *)(param_1 + (long)_parameterRefreshVariant) ^ 1;
  *(undefined *)(param_1 + (long)_filterAttached) = 0;
  objc_msgSend_applyFilters();
  objc_msgSend_layer(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setNeedsDisplay();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x14f9c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00014fa0  lgFilterAttached

/* Function Stack Size: 0x10 bytes */

bool LGLiveBackdropView::lgFilterAttached(ID param_1,SEL param_2)

{
  return (bool)*(byte *)(param_1 + (long)_filterAttached);
}



// ===== 0x00014fb0  lgFilterType

/* Function Stack Size: 0x10 bytes */

ID LGLiveBackdropView::lgFilterType(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_lgFilterType);
}



// ===== 0x00014fc0  setLgFilterType:

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::setLgFilterType_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x00014fcc  lgShapeRect

/* Function Stack Size: 0x10 bytes */

CGRect * LGLiveBackdropView::lgShapeRect(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  return __return_storage_ptr__;
}



// ===== 0x00014fe4  lgShapeCornerRadius

/* Function Stack Size: 0x10 bytes */

double LGLiveBackdropView::lgShapeCornerRadius(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lgShapeCornerRadius);
}



// ===== 0x00014ff4  lgBackdropZoom

/* Function Stack Size: 0x10 bytes */

double LGLiveBackdropView::lgBackdropZoom(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lgBackdropZoom);
}



// ===== 0x00015004  setLgBackdropZoom:

/* Function Stack Size: 0x18 bytes */

void LGLiveBackdropView::setLgBackdropZoom_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + (long)_lgBackdropZoom) = param_3;
  return;
}



// ===== 0x00015014  .cxx_destruct

/* Function Stack Size: 0x10 bytes */

void LGLiveBackdropView::_cxx_destruct(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  _objc_storeStrong(param_1 + (long)_lgFilterType,0);
  _objc_storeStrong(param_1 + (long)_nativeBlurView,0);
  _objc_storeStrong(param_1 + (long)_edge,0);
  _objc_storeStrong(param_1 + (long)_specularMask,0);
  _objc_storeStrong(param_1 + (long)_specularLayer,0);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x150b4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_storeStrong(param_1 + (long)_lgGroupName,0);
  return;
}



// ===== 0x000150b8  _LGInjectGlassIntoMaterialGroupType

void _LGInjectGlassIntoMaterialGroupType
               (double param_1,double param_2,double param_3,double param_4,double param_5,
               undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  dispatch_time_t dVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar11;
  undefined8 extraout_x1_01;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined auVar20 [16];
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
  
  local_b0 = *(long *)PTR____stack_chk_guard_00050520;
  dVar17 = param_2;
  dVar18 = param_3;
  dVar16 = param_4;
  uVar2 = _objc_retain();
  uVar3 = _objc_retain(param_8);
  uVar4 = _objc_retain(param_9);
  objc_msgSend_superview(uVar2);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    dVar14 = (double)objc_msgSend_frame(uVar2);
    dVar19 = param_4 + param_2 + dVar18;
    dVar18 = param_3 + param_1 + dVar16;
    _objc_getAssociatedObject(uVar2,param_7);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    if (lVar6 == 0) {
      auVar20 = _objc_alloc(PTR_PTR_00055b20);
      lVar6 = objc_msgSend_initWithFrame_groupName_filterType_
                        (dVar14 - param_2,dVar17 - param_1,dVar19,dVar18,auVar20._0_8_,auVar20._8_8_
                         ,uVar3,uVar4);
      _objc_initWeak(auStack_138);
      lStack_178 = 0;
      local_180 = 0;
      uStack_168 = 0;
      local_170 = (long *)0x0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      uStack_150 = 0;
      auVar20 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (&PTR__OBJC_CLASS___NSConstantArray_00052f90,extraout_x1,&local_180,
                           auStack_130,0x10);
      puVar1 = PTR___dispatch_main_q_00050528;
      dVar16 = DAT_000479b8;
      uVar9 = DAT_0001b488;
      uVar11 = auVar20._8_8_;
      lVar8 = auVar20._0_8_;
      if (lVar8 != 0) {
        lVar12 = *local_170;
        do {
          lVar13 = 0;
          do {
            if (*local_170 != lVar12) {
              _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_00052f90);
            }
            dVar15 = (double)objc_msgSend_doubleValue(*(undefined8 *)(lStack_178 + lVar13 * 8));
            dVar7 = _dispatch_time(0,(long)(dVar15 * dVar16));
            local_1a8 = PTR___NSConcreteStackBlock_00050500;
            local_1a0 = uVar9;
            local_198 = FUN_000155c8;
            puStack_190 = &DAT_000507d0;
            _objc_copyWeak(auStack_188,auStack_138);
            _dispatch_after(dVar7,puVar1,&local_1a8);
            _objc_destroyWeak(auStack_188);
            lVar13 = lVar13 + 1;
          } while (lVar8 != lVar13);
          auVar20 = objc_msgSend_countByEnumeratingWithState_objects_count_
                              (&PTR__OBJC_CLASS___NSConstantArray_00052f90,extraout_x1_00,&local_180
                               ,auStack_130,0x10);
          uVar11 = auVar20._8_8_;
          lVar8 = auVar20._0_8_;
        } while (lVar8 != 0);
      }
      objc_msgSend_insertSubview_aboveSubview_(lVar5,uVar11,lVar6,uVar2);
      _objc_setAssociatedObject(uVar2,param_7,lVar6,1);
      _objc_destroyWeak(auStack_138);
    }
    objc_msgSend_superview(lVar6);
    lVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 != lVar5) {
      objc_msgSend_insertSubview_aboveSubview_(lVar5,extraout_x1_01,lVar6,uVar2);
    }
    dVar16 = param_5;
    if (param_5 < 0.0) {
      objc_msgSend_layer(uVar2);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      dVar16 = (double)objc_msgSend_cornerRadius();
      _objc_release(uVar9);
    }
    objc_msgSend_frame(lVar6);
    uVar10 = _CGRectEqualToRect();
    if ((uVar10 & 1) == 0) {
      objc_msgSend_setFrame_(dVar14 - param_2,dVar17 - param_1,dVar19,dVar18,lVar6);
    }
    objc_msgSend_layer(lVar6);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    dVar17 = (double)objc_msgSend_cornerRadius();
    _objc_release(uVar9);
    if (0.5 < ABS(dVar17 - dVar16)) {
      objc_msgSend_layer(lVar6);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setCornerRadius_(dVar16);
      _objc_release(uVar9);
      objc_msgSend_updateSpecular(lVar6);
      objc_msgSend_applyFilters(lVar6);
    }
    uVar9 = *(undefined8 *)PTR__kCACornerCurveContinuous_00050530;
    objc_msgSend_layer(lVar6);
    auVar20 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setCornerCurve_(auVar20._0_8_,auVar20._8_8_,uVar9);
    _objc_release(auVar20._0_8_);
    objc_msgSend_layer(lVar6);
    auVar20 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setMasksToBounds_(auVar20._0_8_,auVar20._8_8_,1);
    _objc_release(auVar20._0_8_);
    puVar1 = PTR_LOOP_00055f70;
    objc_msgSend_valueWithUIEdgeInsets_
              (param_1,param_2,param_3,param_4,PTR__OBJC_CLASS___NSValue_00055bc0);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar6,puVar1,uVar9,1);
    _objc_release(uVar9);
    puVar1 = PTR_LOOP_00055f78;
    objc_msgSend_numberWithDouble_(param_5,PTR__OBJC_CLASS___NSNumber_00055ae0);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar6,puVar1,uVar9,1);
    _objc_release(uVar9);
    auVar20 = objc_msgSend_isHidden(uVar2);
    if ((auVar20 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      objc_msgSend_setHidden_(uVar2,auVar20._8_8_,1);
    }
    _objc_release(lVar6);
  }
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_00050520 == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x000155c8  FUN_000155c8

void FUN_000155c8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
  uVar1 = _objc_loadWeakRetained(param_1 + 0x20);
  objc_msgSend_applyFilters();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x15604);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00015608  _LGResyncGlassGeometry

void _LGResyncGlassGeometry
               (undefined8 param_1,double param_2,double param_3,double param_4,undefined8 param_5,
               undefined8 param_6)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong unaff_x30;
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
  if (lVar2 == 0) goto LAB_0001581c;
  _objc_getAssociatedObject(lVar2,PTR_LOOP_00055f70);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_getAssociatedObject(lVar2,PTR_LOOP_00055f78);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    dVar9 = *(double *)PTR__UIEdgeInsetsZero_000504f8;
    dVar13 = *(double *)(PTR__UIEdgeInsetsZero_000504f8 + 8);
    dVar12 = *(double *)(PTR__UIEdgeInsetsZero_000504f8 + 0x10);
    dVar14 = *(double *)(PTR__UIEdgeInsetsZero_000504f8 + 0x18);
    if (lVar4 == 0) goto LAB_000156d4;
LAB_000156b0:
    dVar10 = (double)objc_msgSend_doubleValue(lVar4);
  }
  else {
    dVar9 = (double)objc_msgSend_UIEdgeInsetsValue(lVar3);
    dVar12 = param_3;
    dVar13 = param_2;
    dVar14 = param_4;
    if (lVar4 != 0) goto LAB_000156b0;
LAB_000156d4:
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
LAB_0001581c:
  _objc_release(lVar2);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x1585c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00015860  _LGRemoveGlassFromMaterial

void _LGRemoveGlassFromMaterial(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  undefined8 extraout_x1;
  ulong unaff_x30;
  
  uVar1 = _objc_retain();
  _objc_getAssociatedObject(uVar1,param_2);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    _objc_setAssociatedObject(uVar1,param_2,0,0);
    objc_msgSend_setHidden_(uVar1,extraout_x1,0);
    objc_msgSend_removeFromSuperview(lVar2);
  }
  _objc_release(lVar2);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x158e8);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x000158ec  _LGMaterialHasGlass

bool _LGMaterialHasGlass(void)

{
  long lVar1;
  
  _objc_getAssociatedObject();
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return lVar1 != 0;
}



// ===== 0x00015924  FUN_00015924

void FUN_00015924(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_00056288;
  DAT_00056288 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x15968);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00015928  FUN_00015928

void FUN_00015928(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_00056288;
  DAT_00056288 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x15968);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0001596c  FUN_0001596c

void FUN_0001596c(void)

{
  _dispatch_async(PTR___dispatch_main_q_00050528,&PTR___NSConcreteGlobalBlock_00051088);
  return;
}



// ===== 0x00015980  FUN_00015980

void FUN_00015980(void)

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
  
  local_48 = *(long *)PTR____stack_chk_guard_00050520;
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
  if (*(long *)PTR____stack_chk_guard_00050520 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00015ac8  FUN_00015ac8

undefined8 FUN_00015ac8(void)

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



// ===== 0x00015b38  FUN_00015b38

void FUN_00015b38(void)

{
  _dispatch_async(PTR___dispatch_main_q_00050528,&PTR___NSConcreteGlobalBlock_000510a8);
  return;
}



// ===== 0x00015b4c  FUN_00015b4c

void FUN_00015b4c(void)

{
  double dVar1;
  
  dVar1 = DAT_00055f80;
  DAT_00055f80 = 0.0;
  if ((0.0 <= DAT_00055f88) && (ABS(dVar1) <= DAT_0001b4a0)) {
    DAT_00055f80 = 0.0;
    return;
  }
  DAT_00055f88 = 0.0;
  _LGLog(&cf_motionhighlightsprefsenabled__dsensitivity___2f);
  return;
}



// ===== 0x00015bac  FUN_00015bac

void FUN_00015bac(void)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  ulong unaff_x30;
  
  if ((DAT_00056299 == '\x01') && (iVar1 = FUN_00015ac8(), iVar1 != 0)) {
    objc_msgSend_stopDeviceMotionUpdates(DAT_00056280);
    objc_msgSend_invalidate(0);
    if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x15bf8);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    FUN_00012c44();
    return;
  }
  return;
}



// ===== 0x00015c04  FUN_00015c04

void FUN_00015c04(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  _LGInvalidateGlassPreferenceCache();
  FUN_00015b4c();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x15c2c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00015bac();
  return;
}



// ===== 0x00015c08  FUN_00015c08

void FUN_00015c08(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  _LGInvalidateGlassPreferenceCache();
  FUN_00015b4c();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x15c2c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00015bac();
  return;
}



// ===== 0x00015c30  layerClass

/* Function Stack Size: 0x10 bytes */

CLASS LGSettingsLowBlurView::layerClass(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  CLASS CVar2;
  ulong unaff_x30;
  
  lVar1 = _NSClassFromString(&cf_CABackdropLayer);
  if (lVar1 == 0) {
    _objc_opt_class(PTR__OBJC_CLASS___CALayer_00055bd0);
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x15c6c);
    CVar2 = (*UNRECOVERED_JUMPTABLE)();
    return CVar2;
  }
  CVar2 = _objc_retainAutoreleaseReturnValue();
  return CVar2;
}



// ===== 0x00015c70  initWithFrame:

/* Function Stack Size: 0x30 bytes */

ID LGSettingsLowBlurView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

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



// ===== 0x00015d28  didMoveToWindow

/* Function Stack Size: 0x10 bytes */

void LGSettingsLowBlurView::didMoveToWindow(ID param_1,SEL param_2)

{
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00055c38;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_didMoveToWindow_00055210);
  objc_msgSend_lg_configure(param_1);
  return;
}



// ===== 0x00015d74  layoutSubviews

/* Function Stack Size: 0x10 bytes */

void LGSettingsLowBlurView::layoutSubviews(ID param_1,SEL param_2)

{
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_00055c38;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_layoutSubviews_000553d8);
  objc_msgSend_lg_configure(param_1);
  return;
}



// ===== 0x00015dc0  setLgBlurRadius:

/* Function Stack Size: 0x18 bytes */

void LGSettingsLowBlurView::setLgBlurRadius_(ID param_1,SEL param_2,double param_3)

{
  if (ABS(*(double *)(param_1 + (long)_lgBlurRadius) - param_3) < DAT_0001b4a0) {
    return;
  }
  *(double *)(param_1 + (long)_lgBlurRadius) = param_3;
  objc_msgSend_lg_configure();
  return;
}



// ===== 0x00015dec  lg_configure

/* Function Stack Size: 0x10 bytes */

void LGSettingsLowBlurView::lg_configure(ID param_1,SEL param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  ulong unaff_x30;
  undefined auVar6 [16];
  long local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_00050520;
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
        if (*(long *)PTR____stack_chk_guard_00050520 == local_48) {
          if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x16100);
            (*UNRECOVERED_JUMPTABLE)();
            return;
          }
          _objc_release(auVar6._0_8_);
          return;
        }
        goto LAB_00016104;
      }
      objc_msgSend_layer(param_1);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setValue_forKey_
                (auVar6._0_8_,auVar6._8_8_,PTR____kCFBooleanFalse_00050510,
                 &cf_layerUsesCoreImageFilters);
      _objc_release(auVar6._0_8_);
      objc_msgSend_layer(param_1);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setValue_forKey_
                (auVar6._0_8_,auVar6._8_8_,PTR____kCFBooleanTrue_00050518,&cf_windowServerAware);
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
                    (lVar4,extraout_x1,PTR____kCFBooleanTrue_00050518,&cf_inputNormalizeEdges);
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
  if (*(long *)PTR____stack_chk_guard_00050520 == local_48) {
    return;
  }
LAB_00016104:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0001612c  lgBlurRadius

/* Function Stack Size: 0x10 bytes */

double LGSettingsLowBlurView::lgBlurRadius(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + (long)_lgBlurRadius);
}



// ===== 0x0001613c  _LGBackboardSafeModeActive

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
  local_28 = *(long *)PTR____stack_chk_guard_00050520;
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
  if (*(long *)PTR____stack_chk_guard_00050520 == local_28) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00016284  _LGClearBackboardSafeMode

ulong _LGClearBackboardSafeMode(void)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  ulong uVar2;
  ulong unaff_x30;
  
  _unlink("/var/mobile/Library/Accessibility/systembox-clockglass-backboardd-guard.bin");
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x162b8);
    uVar2 = (*UNRECOVERED_JUMPTABLE)();
    return uVar2;
  }
  uVar1 = _unlink("/var/mobile/Library/Accessibility/systembox-clockglass-backboardd-alert");
  return (ulong)uVar1;
}



// ===== 0x000162bc  _LGMainBundleIdentifier

void _LGMainBundleIdentifier(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  if (DAT_000562b0 != -1) {
    _dispatch_once(&DAT_000562b0,&PTR___NSConcreteGlobalBlock_00051130);
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x162f4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_retainAutoreleaseReturnValue(DAT_000562a8);
  return;
}



// ===== 0x00016310  FUN_00016310

void FUN_00016310(void)

{
  cfstringStruct *pcVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  ulong unaff_x30;
  
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x163a0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x000163a4  _LGIsSpringBoardProcess

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



// ===== 0x000163ec  _LGIsPreferencesProcess

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



// ===== 0x00016434  _LGIsExcludedSystemProcess

undefined _LGIsExcludedSystemProcess(void)

{
  if (DAT_000562c0 != -1) {
    _dispatch_once(&DAT_000562c0,&PTR___NSConcreteGlobalBlock_00051150);
  }
  return DAT_000562b8;
}



// ===== 0x00016478  FUN_00016478

void FUN_00016478(void)

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
  
  local_68 = *(long *)PTR____stack_chk_guard_00050520;
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
LAB_000166a0:
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
                            (&PTR__OBJC_CLASS___NSConstantArray_00052fa8,auVar11._8_8_,&local_130,
                             auStack_e8,0x10);
        if (auVar11._0_8_ != 0) {
          lVar9 = *local_120;
          do {
            uVar4 = auVar11._8_8_;
            lVar10 = 0;
            do {
              if (*local_120 != lVar9) {
                _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_00052fa8);
                uVar4 = extraout_x1_00;
              }
              uVar8 = *(undefined8 *)(lStack_128 + lVar10 * 8);
              auVar12 = objc_msgSend_containsString_(uVar3,uVar4,uVar8);
              if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_000166a0;
              auVar12 = objc_msgSend_containsString_(uVar6,auVar12._8_8_,uVar8);
              if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_000166a0;
              auVar12 = objc_msgSend_containsString_(uVar5,auVar12._8_8_,uVar8);
              uVar4 = auVar12._8_8_;
              if ((auVar12 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_000166a0;
              lVar10 = lVar10 + 1;
            } while (auVar11._0_8_ != lVar10);
            auVar11 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                (&PTR__OBJC_CLASS___NSConstantArray_00052fa8,uVar4,&local_130,
                                 auStack_e8,0x10);
          } while (auVar11._0_8_ != 0);
        }
      }
    }
  }
  _objc_release(uVar5);
  _objc_release(uVar6);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_00050520 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x00016700  _LGIsAtLeastiOS16

undefined _LGIsAtLeastiOS16(void)

{
  if (DAT_000562d0 != -1) {
    _dispatch_once(&DAT_000562d0,&PTR___NSConcreteGlobalBlock_00051170);
  }
  return DAT_000562c8;
}



// ===== 0x00016744  FUN_00016744

void FUN_00016744(void)

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



// ===== 0x000167a4  _LGRWBDefaultWidgetBundleIDsText

void _LGRWBDefaultWidgetBundleIDsText(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  if (DAT_000562e0 != -1) {
    _dispatch_once(&DAT_000562e0,&PTR___NSConcreteGlobalBlock_00051190);
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x167dc);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_retainAutoreleaseReturnValue(DAT_000562d8);
  return;
}



// ===== 0x000167a8  FUN_000167a8

void FUN_000167a8(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  if (DAT_000562e0 != -1) {
    _dispatch_once(&DAT_000562e0,&PTR___NSConcreteGlobalBlock_00051190);
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x167dc);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_retainAutoreleaseReturnValue(DAT_000562d8);
  return;
}



// ===== 0x000167f8  FUN_000167f8

void FUN_000167f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  objc_msgSend_componentsJoinedByString_
            (&PTR__OBJC_CLASS___NSConstantArray_00052fc0,param_2,&cf_newline_s_);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_000562d8;
  DAT_000562d8 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x16844);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x000167fc  FUN_000167fc

void FUN_000167fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  objc_msgSend_componentsJoinedByString_
            (&PTR__OBJC_CLASS___NSConstantArray_00052fc0,param_2,&cf_newline_s_);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_000562d8;
  DAT_000562d8 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x16844);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00016848  _LGEffectiveBannerBlur

undefined8 _LGEffectiveBannerBlur(double param_1)

{
  undefined8 uVar1;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  uVar1 = NEON_fminnm(param_1 * DAT_000479c8,0x4054000000000000);
  return uVar1;
}



// ===== 0x0001686c  _LGReloadPreferences

void _LGReloadPreferences(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong unaff_x30;
  undefined auVar5 [16];
  
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_dictionaryWithContentsOfFile_
            (PTR__OBJC_CLASS___NSDictionary_00055ae8,auVar5._8_8_,auVar5._0_8_);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_00055ae8);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  puVar4 = PTR____NSDictionary0__struct_00050508;
  if ((uVar3 & 1) != 0) {
    puVar4 = (undefined *)_objc_retain(uVar1);
  }
  _objc_release(uVar1);
  _objc_release(auVar5._0_8_);
  _os_unfair_lock_lock(&DAT_000562e8);
  uVar1 = DAT_000562a0;
  DAT_000562a0 = puVar4;
  _objc_release(uVar1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    _os_unfair_lock_unlock(&DAT_000562e8);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x16934);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== 0x00016938  _LGObservePreferenceChanges

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
    local_58 = PTR___NSConcreteStackBlock_00050500;
    local_50 = DAT_0001b488;
    local_48 = FUN_00016a34;
    puStack_40 = &DAT_000511b0;
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



// ===== 0x00016a34  FUN_00016a34

void FUN_00016a34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00016a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



// ===== 0x00016a44  FUN_00016a44

void FUN_00016a44(long param_1,long param_2)

{
  __Block_object_assign((void *)(param_1 + 0x20),*(void **)(param_2 + 0x20),7);
  return;
}



// ===== 0x00016a54  _LGHasExplicitPreferenceValue

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
      _dispatch_once(&DAT_00056310,&PTR___NSConcreteGlobalBlock_00051200);
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



// ===== 0x00016b1c  _LG_prefBool

undefined8 _LG_prefBool(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_00016b80();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_00055ae0);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  if ((uVar3 & 1) != 0) {
    param_2 = objc_msgSend_boolValue(uVar1);
  }
  _objc_release(uVar1);
  return param_2;
}



// ===== 0x00016b80  FUN_00016b80

void FUN_00016b80(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  ulong unaff_x30;
  
  uVar1 = _objc_retain();
  lVar2 = objc_msgSend_length();
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    if (DAT_00056310 != -1) {
      _dispatch_once(&DAT_00056310,&PTR___NSConcreteGlobalBlock_00051200);
    }
    _os_unfair_lock_lock(&DAT_000562e8);
    uVar3 = _objc_retain(DAT_000562a0);
    _os_unfair_lock_unlock(&DAT_000562e8);
    objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1,uVar1);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x16c2c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(uVar4);
  return;
}



// ===== 0x00016c48  _LG_prefFloat

undefined8 _LG_prefFloat(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_00016b80();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_00055ae0);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  if ((uVar3 & 1) != 0) {
    param_1 = objc_msgSend_doubleValue(uVar1);
  }
  _objc_release(uVar1);
  return param_1;
}



// ===== 0x00016cb4  _LG_prefInteger

undefined8 _LG_prefInteger(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  FUN_00016b80();
  uVar1 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_00055ae0);
  uVar3 = _objc_opt_isKindOfClass(uVar1,uVar2);
  if ((uVar3 & 1) != 0) {
    param_2 = objc_msgSend_integerValue(uVar1);
  }
  _objc_release(uVar1);
  return param_2;
}



// ===== 0x00016d18  _LG_prefString

undefined8 _LG_prefString(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = _objc_retain(param_2);
  FUN_00016b80(param_1);
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



// ===== 0x00016db0  _LG_globalEnabled

void _LG_globalEnabled(void)

{
  _LG_prefBool(&cf_Global_Enabled,0);
  return;
}



// ===== 0x00016dc0  _LGDebugLoggingEnabled

void _LGDebugLoggingEnabled(void)

{
  _LG_prefBool(&cf_Debug_Logging_Enabled,0);
  return;
}



// ===== 0x00016dd0  _LGLog

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
      _dispatch_once(&DAT_00056328,&PTR___NSConcreteGlobalBlock_00051290);
    }
    uVar6 = _objc_retain(DAT_00056320);
    lVar7 = objc_msgSend_length();
    if ((lVar7 != 0) && (lVar7 = objc_msgSend_length(uVar5), lVar7 != 0)) {
      if (DAT_00056318 != -1) {
        _dispatch_once(&DAT_00056318,&PTR___NSConcreteGlobalBlock_00051240);
      }
      uVar1 = DAT_00056300;
      local_70 = PTR___NSConcreteStackBlock_00050500;
      local_68 = DAT_0001b488;
      local_60 = FUN_00017338;
      puStack_58 = &DAT_00051260;
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



// ===== 0x00016f94  _LGSharedRGBColorSpace

undefined8 _LGSharedRGBColorSpace(void)

{
  if (DAT_000562f8 != -1) {
    _dispatch_once(&DAT_000562f8,&PTR___NSConcreteGlobalBlock_000511e0);
  }
  return DAT_000562f0;
}



// ===== 0x00016fd8  FUN_00016fd8

void FUN_00016fd8(void)

{
  DAT_000562f0 = _CGColorSpaceCreateDeviceRGB();
  return;
}



// ===== 0x00016fdc  FUN_00016fdc

void FUN_00016fdc(void)

{
  DAT_000562f0 = _CGColorSpaceCreateDeviceRGB();
  return;
}



// ===== 0x00016ff8  _LGNormalizedImageForUpload

void _LGNormalizedImageForUpload(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  long lVar2;
  long lVar3;
  ulong unaff_x30;
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x170f0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(uVar4);
  return;
}



// ===== 0x000170f4  _LGTextureScaleKey

void _LGTextureScaleKey(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)(double)(long)(param_1 * DAT_0001b470);
  if (lVar1 < 2) {
    lVar1 = 1;
  }
  objc_msgSend_numberWithInteger_(PTR__OBJC_CLASS___NSNumber_00055ae0,param_3,lVar1);
  return;
}



// ===== 0x0001711c  _LGBlurSettingKey

void _LGBlurSettingKey(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  lVar1 = (long)(double)(long)(param_1 * DAT_0001b470);
  if (lVar1 < 1) {
    lVar1 = 0;
  }
  objc_msgSend_numberWithInteger_(PTR__OBJC_CLASS___NSNumber_00055ae0,param_3,lVar1);
  return;
}



// ===== 0x0001714c  _LGImageStableCacheKey

void _LGImageStableCacheKey(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  if (param_1 != 0) {
    _objc_getAssociatedObject(param_1,PTR_LOOP_00055f90);
    _objc_retainAutoreleasedReturnValue();
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x17184);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue();
  return;
}



// ===== 0x00017188  _LGSetImageStableCacheKey

void _LGSetImageStableCacheKey(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong unaff_x30;
  
  puVar1 = PTR_LOOP_00055f90;
  if (param_1 == 0) {
    return;
  }
  uVar2 = _objc_retain();
  uVar3 = objc_msgSend_copy(param_2);
  _objc_setAssociatedObject(uVar2,puVar1,uVar3,3);
  _objc_release(uVar2);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x171fc);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar3);
  return;
}



// ===== 0x00017204  FUN_00017204

void FUN_00017204(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
  _LGReloadPreferences();
  uVar1 = _CFNotificationCenterGetDarwinNotifyCenter();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x17250);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _CFNotificationCenterAddObserver(uVar1,0,FUN_00017254,&cf_com_wkk_systembox_prefschanged,0,4);
  return;
}



// ===== 0x00017208  FUN_00017208

void FUN_00017208(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
  _LGReloadPreferences();
  uVar1 = _CFNotificationCenterGetDarwinNotifyCenter();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x17250);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _CFNotificationCenterAddObserver(uVar1,0,FUN_00017254,&cf_com_wkk_systembox_prefschanged,0,4);
  return;
}



// ===== 0x00017254  FUN_00017254

void FUN_00017254(void)

{
  _dispatch_async(PTR___dispatch_main_q_00050528,&PTR___NSConcreteGlobalBlock_00051220);
  return;
}



// ===== 0x00017268  FUN_00017268

void FUN_00017268(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  undefined auVar1 [16];
  
  _LGReloadPreferences();
  objc_msgSend_defaultCenter(PTR__OBJC_CLASS___NSNotificationCenter_00055b68);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_postNotificationName_object_
            (auVar1._0_8_,auVar1._8_8_,&cf_com_wkk_systembox_ClockInProcessReload,0);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x172c0);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(auVar1._0_8_);
  return;
}



// ===== 0x000172c4  FUN_000172c4

ulong FUN_000172c4(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  dispatch_queue_t pdVar3;
  ulong uVar4;
  ulong unaff_x30;
  
  pdVar3 = _dispatch_queue_create("com.wkk.systembox.clockglass.logfile",(dispatch_queue_attr_t)0x0)
  ;
  uVar1 = DAT_00056300;
  DAT_00056300 = pdVar3;
  _objc_release(uVar1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,95000);
    uVar4 = (*UNRECOVERED_JUMPTABLE)();
    return uVar4;
  }
  uVar2 = _atexit(FUN_0001731c);
  return (ulong)uVar2;
}



// ===== 0x000172c8  FUN_000172c8

ulong FUN_000172c8(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar2;
  dispatch_queue_t pdVar3;
  ulong uVar4;
  ulong unaff_x30;
  
  pdVar3 = _dispatch_queue_create("com.wkk.systembox.clockglass.logfile",(dispatch_queue_attr_t)0x0)
  ;
  uVar1 = DAT_00056300;
  DAT_00056300 = pdVar3;
  _objc_release(uVar1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,95000);
    uVar4 = (*UNRECOVERED_JUMPTABLE)();
    return uVar4;
  }
  uVar2 = _atexit(FUN_0001731c);
  return (ulong)uVar2;
}



// ===== 0x0001731c  FUN_0001731c

void FUN_0001731c(void)

{
  if (DAT_00056300 != 0) {
    _dispatch_sync(DAT_00056300,&PTR___NSConcreteGlobalBlock_000512b0);
    return;
  }
  FUN_00017518();
  return;
}



// ===== 0x00017338  FUN_00017338

void FUN_00017338(long param_1)

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
    if (lVar1 == 0) goto LAB_000173f4;
    objc_msgSend_localizedDescription(lVar1);
    lVar2 = _objc_retainAutoreleasedReturnValue();
    _NSLog(&cf__LiquidAss_logfilecreatefailed__);
  }
  else {
LAB_000173f4:
    objc_msgSend_dataUsingEncoding_(*(undefined8 *)(param_1 + 0x28),uVar4,4);
    lVar1 = _objc_retainAutoreleasedReturnValue();
    auVar6 = objc_msgSend_length();
    uVar4 = auVar6._8_8_;
    if (auVar6._0_8_ == 0) goto LAB_000174dc;
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
        goto LAB_000174dc;
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
      if (lVar2 == 0) goto LAB_000174dc;
    }
    FUN_00017518();
    objc_msgSend_localizedDescription(lVar2);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _NSLog(&cf__LiquidAss_logfileappendfailed__);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
LAB_000174dc:
  _objc_release(lVar1);
  _objc_release(auVar5._0_8_);
  return;
}



// ===== 0x00017518  FUN_00017518

void FUN_00017518(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  if (DAT_00056308 == 0) {
    return;
  }
  objc_msgSend_closeAndReturnError_(DAT_00056308,param_2,0);
  lVar1 = DAT_00056308;
  DAT_00056308 = 0;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x1755c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(lVar1);
  return;
}



// ===== 0x0001756c  FUN_0001756c

void FUN_0001756c(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  ulong unaff_x30;
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
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x1763c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar3);
  return;
}



// ===== 0x00017644  FUN_00017644

bool FUN_00017644(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_00056340 == -1) {
    iVar1 = DAT_00056330 - param_1;
    if (DAT_00056330 <= param_1) {
LAB_000176c4:
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
    _dispatch_once_f(&DAT_00056340,(void *)0x0,FUN_00017738);
    iVar1 = DAT_00056330 - param_1;
    if (DAT_00056330 <= param_1) goto LAB_000176c4;
  }
  return true;
}



// ===== 0x00017738  FUN_00017738

void FUN_00017738(void)

{
  FUN_000178e4(1);
  return;
}



// ===== 0x00017740  FUN_00017740

void FUN_00017740(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_40;
  uint uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_00050520;
  if (DAT_00056348 == -1) {
    if (DAT_00056350 == 0) {
LAB_000177f4:
      if (DAT_00056340 == -1) {
        iVar1 = DAT_00056330 - param_2;
      }
      else {
        _dispatch_once_f(&DAT_00056340,(void *)0x0,FUN_00017738);
        iVar1 = DAT_00056330 - param_2;
      }
      if (param_2 < DAT_00056330) {
LAB_00017828:
        uVar2 = 1;
        if (*(long *)PTR____stack_chk_guard_00050520 == local_38) {
          return;
        }
      }
      else {
        if (iVar1 < 0 == SBORROW4(DAT_00056330,param_2)) {
          if ((int)param_3 < DAT_00056334) goto LAB_00017828;
          if (DAT_00056334 < (int)param_3) goto LAB_0001784c;
          uVar2 = (ulong)((int)param_4 <= DAT_00056338);
          lVar3 = *(long *)PTR____stack_chk_guard_00050520;
        }
        else {
LAB_0001784c:
          uVar2 = 0;
          lVar3 = *(long *)PTR____stack_chk_guard_00050520;
        }
        if (lVar3 == local_38) {
          return;
        }
      }
      goto LAB_000178a4;
    }
  }
  else {
    _dispatch_once_f(&DAT_00056348,(void *)0x0,FUN_000178dc);
    if (DAT_00056350 == 0) goto LAB_000177f4;
  }
  uStack_3c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
  local_40 = param_1;
  uVar2 = __availability_version_check(1,&local_40);
  if (*(long *)PTR____stack_chk_guard_00050520 == local_38) {
    return;
  }
LAB_000178a4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}



// ===== 0x000178dc  FUN_000178dc

void FUN_000178dc(void)

{
  FUN_000178e4(0);
  return;
}



// ===== 0x000178e4  FUN_000178e4

void FUN_000178e4(FILE *param_1)

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
  
  local_68 = *(long *)PTR____stack_chk_guard_00050520;
  if (DAT_00056350 == (undefined *)0x0 || (int)param_1 != 0) {
    if (PTR___availability_version_check_00050570 != (undefined *)0x0) {
      DAT_00056350 = PTR___availability_version_check_00050570;
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
  if (*(long *)PTR____stack_chk_guard_00050520 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(param_1);
}



// ===== 0x0001857c  objc_msgSend$CGColor

void objc_msgSend_CGColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_CGColor_00054f48);
  return;
}



// ===== 0x0001859c  objc_msgSend$CGRectValue

void objc_msgSend_CGRectValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_CGRectValue_00054f50);
  return;
}



// ===== 0x000185bc  objc_msgSend$UIEdgeInsetsValue

void objc_msgSend_UIEdgeInsetsValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_UIEdgeInsetsValue_00054f58);
  return;
}



// ===== 0x000185dc  objc_msgSend$UTF8String

void objc_msgSend_UTF8String(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_UTF8String_00054f60);
  return;
}



// ===== 0x000185fc  objc_msgSend$UUID

void objc_msgSend_UUID(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_UUID_00054f68);
  return;
}



// ===== 0x0001861c  objc_msgSend$UUIDString

void objc_msgSend_UUIDString(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_UUIDString_00054f70);
  return;
}



// ===== 0x0001863c  objc_msgSend$addObject_

void objc_msgSend_addObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_addObject__00054fb0);
  return;
}



// ===== 0x0001865c  objc_msgSend$addObjectsFromArray_

void objc_msgSend_addObjectsFromArray_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_addObjectsFromArray__00054fb8);
  return;
}



// ===== 0x0001867c  objc_msgSend$addObserverForName_object_queue_usingBlock_

void objc_msgSend_addObserverForName_object_queue_usingBlock_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_addObserverForName_object_queue__00054fc0);
  return;
}



// ===== 0x0001869c  objc_msgSend$addSublayer_

void objc_msgSend_addSublayer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_addSublayer__00054fc8);
  return;
}



// ===== 0x000186bc  objc_msgSend$addSubview_

void objc_msgSend_addSubview_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_addSubview__00054fd0);
  return;
}



// ===== 0x000186dc  objc_msgSend$addToRunLoop_forMode_

void objc_msgSend_addToRunLoop_forMode_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_addToRunLoop_forMode__00054fd8);
  return;
}



// ===== 0x000186fc  objc_msgSend$allObjects

void objc_msgSend_allObjects(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_allObjects_00054fe0);
  return;
}



// ===== 0x0001871c  objc_msgSend$alpha

void objc_msgSend_alpha(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_alpha_00054fe8);
  return;
}



// ===== 0x0001873c  objc_msgSend$appliedChanges

void objc_msgSend_appliedChanges(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_appliedChanges_00054ff0);
  return;
}



// ===== 0x0001875c  objc_msgSend$applyFilters

void objc_msgSend_applyFilters(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_applyFilters_00054ff8);
  return;
}



// ===== 0x0001877c  objc_msgSend$applyReason_

void objc_msgSend_applyReason_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_applyReason__00055000);
  return;
}



// ===== 0x0001879c  objc_msgSend$applySpecularAngle_

void objc_msgSend_applySpecularAngle_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_applySpecularAngle__00055008);
  return;
}



// ===== 0x000187bc  objc_msgSend$applying

void objc_msgSend_applying(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_applying_00055010);
  return;
}



// ===== 0x000187dc  objc_msgSend$array

void objc_msgSend_array(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_array_00055018);
  return;
}



// ===== 0x000187fc  objc_msgSend$arrayWithCapacity_

void objc_msgSend_arrayWithCapacity_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_arrayWithCapacity__00055020);
  return;
}



// ===== 0x0001881c  objc_msgSend$arrayWithObject_

void objc_msgSend_arrayWithObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_arrayWithObject__00055028);
  return;
}



// ===== 0x0001883c  objc_msgSend$arrayWithObjects_count_

void objc_msgSend_arrayWithObjects_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_arrayWithObjects_count__00055030);
  return;
}



// ===== 0x0001885c  objc_msgSend$attribute_atIndex_effectiveRange_

void objc_msgSend_attribute_atIndex_effectiveRange_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_attribute_atIndex_effectiveRange_00055038);
  return;
}



// ===== 0x0001887c  objc_msgSend$attributedText

void objc_msgSend_attributedText(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_attributedText_00055040);
  return;
}



// ===== 0x0001889c  objc_msgSend$axisIDs

void objc_msgSend_axisIDs(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_axisIDs_00055048);
  return;
}



// ===== 0x000188bc  objc_msgSend$axisRanges

void objc_msgSend_axisRanges(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_axisRanges_00055050);
  return;
}



// ===== 0x000188dc  objc_msgSend$begin

void objc_msgSend_begin(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_begin_00055060);
  return;
}



// ===== 0x000188fc  objc_msgSend$blackColor

void objc_msgSend_blackColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_blackColor_00055068);
  return;
}



// ===== 0x0001891c  objc_msgSend$boolValue

void objc_msgSend_boolValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_boolValue_00055070);
  return;
}



// ===== 0x0001893c  objc_msgSend$bounds

void objc_msgSend_bounds(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_bounds_00055078);
  return;
}



// ===== 0x0001895c  objc_msgSend$bringSubviewToFront_

void objc_msgSend_bringSubviewToFront_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_bringSubviewToFront__00055080);
  return;
}



// ===== 0x0001897c  objc_msgSend$bundleIdentifier

void objc_msgSend_bundleIdentifier(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_bundleIdentifier_00055088);
  return;
}



// ===== 0x0001899c  objc_msgSend$cache

void objc_msgSend_cache(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_cache_00055090);
  return;
}



// ===== 0x000189bc  objc_msgSend$callStackSymbols

void objc_msgSend_callStackSymbols(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_callStackSymbols_00055098);
  return;
}



// ===== 0x000189dc  objc_msgSend$clampedValueForAxis_

void objc_msgSend_clampedValueForAxis_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_clampedValueForAxis__000550a0);
  return;
}



// ===== 0x000189fc  objc_msgSend$clearColor

void objc_msgSend_clearColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_clearColor_000550b0);
  return;
}



// ===== 0x00018a1c  objc_msgSend$clipsToBounds

void objc_msgSend_clipsToBounds(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_clipsToBounds_000550b8);
  return;
}



// ===== 0x00018a3c  objc_msgSend$closeAndReturnError_

void objc_msgSend_closeAndReturnError_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_closeAndReturnError__000550c0);
  return;
}



// ===== 0x00018a5c  objc_msgSend$colorGradientLayer

void objc_msgSend_colorGradientLayer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_colorGradientLayer_000550c8);
  return;
}



// ===== 0x00018a7c  objc_msgSend$colorMaskLayer

void objc_msgSend_colorMaskLayer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_colorMaskLayer_000550d0);
  return;
}



// ===== 0x00018a9c  objc_msgSend$colorMaskView

void objc_msgSend_colorMaskView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_colorMaskView_000550d8);
  return;
}



// ===== 0x00018abc  objc_msgSend$colorOverlayView

void objc_msgSend_colorOverlayView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_colorOverlayView_000550e0);
  return;
}



// ===== 0x00018adc  objc_msgSend$colorWithAlphaComponent_

void objc_msgSend_colorWithAlphaComponent_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_colorWithAlphaComponent__000550e8);
  return;
}



// ===== 0x00018afc  objc_msgSend$colorWithDisplayP3Red_green_blue_alpha_

void objc_msgSend_colorWithDisplayP3Red_green_blue_alpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_colorWithDisplayP3Red_green_blue_000550f0);
  return;
}



// ===== 0x00018b1c  objc_msgSend$colorWithRed_green_blue_alpha_

void objc_msgSend_colorWithRed_green_blue_alpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_colorWithRed_green_blue_alpha__000550f8);
  return;
}



// ===== 0x00018b3c  objc_msgSend$colorWithWhite_alpha_

void objc_msgSend_colorWithWhite_alpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_colorWithWhite_alpha__00055100);
  return;
}



// ===== 0x00018b5c  objc_msgSend$commit

void objc_msgSend_commit(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_commit_00055108);
  return;
}



// ===== 0x00018b7c  objc_msgSend$complicationLastTop

void objc_msgSend_complicationLastTop(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_complicationLastTop_00055118);
  return;
}



// ===== 0x00018b9c  objc_msgSend$complicationLayoutShift

void objc_msgSend_complicationLayoutShift(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_complicationLayoutShift_00055120);
  return;
}



// ===== 0x00018bbc  objc_msgSend$complicationRow

void objc_msgSend_complicationRow(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_complicationRow_00055128);
  return;
}



// ===== 0x00018bdc  objc_msgSend$componentsJoinedByString_

void objc_msgSend_componentsJoinedByString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_componentsJoinedByString__00055138);
  return;
}



// ===== 0x00018bfc  objc_msgSend$componentsSeparatedByString_

void objc_msgSend_componentsSeparatedByString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_componentsSeparatedByString__00055140);
  return;
}



// ===== 0x00018c1c  objc_msgSend$connectedScenes

void objc_msgSend_connectedScenes(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_connectedScenes_00055148);
  return;
}



// ===== 0x00018c3c  objc_msgSend$containsString_

void objc_msgSend_containsString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_containsString__00055150);
  return;
}



// ===== 0x00018c5c  objc_msgSend$contentMode

void objc_msgSend_contentMode(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_contentMode_00055158);
  return;
}



// ===== 0x00018c7c  objc_msgSend$convertRect_fromLayer_

void objc_msgSend_convertRect_fromLayer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_convertRect_fromLayer__00055160);
  return;
}



// ===== 0x00018c9c  objc_msgSend$convertRect_fromView_

void objc_msgSend_convertRect_fromView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_convertRect_fromView__00055168);
  return;
}



// ===== 0x00018cbc  objc_msgSend$convertRect_toView_

void objc_msgSend_convertRect_toView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_convertRect_toView__00055170);
  return;
}



// ===== 0x00018cdc  objc_msgSend$copy

void objc_msgSend_copy(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_copy_00055178);
  return;
}



// ===== 0x00018cfc  objc_msgSend$cornerCurve

void objc_msgSend_cornerCurve(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_cornerCurve_00055180);
  return;
}



// ===== 0x00018d1c  objc_msgSend$cornerRadius

void objc_msgSend_cornerRadius(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_cornerRadius_00055188);
  return;
}



// ===== 0x00018d3c  objc_msgSend$count

void objc_msgSend_count(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_count_00055190);
  return;
}



// ===== 0x00018d5c  objc_msgSend$countByEnumeratingWithState_objects_count_

void objc_msgSend_countByEnumeratingWithState_objects_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_countByEnumeratingWithState_obje_00055198);
  return;
}



// ===== 0x00018d7c  objc_msgSend$currentDevice

void objc_msgSend_currentDevice(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_currentDevice_000551a0);
  return;
}



// ===== 0x00018d9c  objc_msgSend$data

void objc_msgSend_data(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_data_000551a8);
  return;
}



// ===== 0x00018dbc  objc_msgSend$dataUsingEncoding_

void objc_msgSend_dataUsingEncoding_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_dataUsingEncoding__000551b0);
  return;
}



// ===== 0x00018ddc  objc_msgSend$dataWithContentsOfFile_

void objc_msgSend_dataWithContentsOfFile_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_dataWithContentsOfFile__000551b8);
  return;
}



// ===== 0x00018dfc  objc_msgSend$dataWithLength_

void objc_msgSend_dataWithLength_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_dataWithLength__000551c0);
  return;
}



// ===== 0x00018e1c  objc_msgSend$deadline

void objc_msgSend_deadline(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_deadline_000551c8);
  return;
}



// ===== 0x00018e3c  objc_msgSend$decimalDigitCharacterSet

void objc_msgSend_decimalDigitCharacterSet(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_decimalDigitCharacterSet_000551d8);
  return;
}



// ===== 0x00018e5c  objc_msgSend$defaultCenter

void objc_msgSend_defaultCenter(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_defaultCenter_000551e0);
  return;
}



// ===== 0x00018e7c  objc_msgSend$defaultManager

void objc_msgSend_defaultManager(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_defaultManager_000551e8);
  return;
}



// ===== 0x00018e9c  objc_msgSend$dictionary

void objc_msgSend_dictionary(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_dictionary_000551f0);
  return;
}



// ===== 0x00018ebc  objc_msgSend$dictionaryWithContentsOfFile_

void objc_msgSend_dictionaryWithContentsOfFile_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_dictionaryWithContentsOfFile__000551f8);
  return;
}



// ===== 0x00018edc  objc_msgSend$dictionaryWithObjects_forKeys_count_

void objc_msgSend_dictionaryWithObjects_forKeys_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_dictionaryWithObjects_forKeys_co_00055200);
  return;
}



// ===== 0x00018efc  objc_msgSend$displayLink

void objc_msgSend_displayLink(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_displayLink_00055218);
  return;
}



// ===== 0x00018f1c  objc_msgSend$displayLinkWithTarget_selector_

void objc_msgSend_displayLinkWithTarget_selector_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_displayLinkWithTarget_selector__00055220);
  return;
}



// ===== 0x00018f3c  objc_msgSend$doubleValue

void objc_msgSend_doubleValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_doubleValue_00055228);
  return;
}



// ===== 0x00018f5c  objc_msgSend$drawInRect_

void objc_msgSend_drawInRect_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_drawInRect__00055230);
  return;
}



// ===== 0x00018f7c  objc_msgSend$emitSummaryIfNeeded

void objc_msgSend_emitSummaryIfNeeded(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_emitSummaryIfNeeded_00055238);
  return;
}



// ===== 0x00018f9c  objc_msgSend$enumerateKeysAndObjectsUsingBlock_

void objc_msgSend_enumerateKeysAndObjectsUsingBlock_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_enumerateKeysAndObjectsUsingBloc_00055240);
  return;
}



// ===== 0x00018fbc  objc_msgSend$executablePath

void objc_msgSend_executablePath(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_executablePath_00055248);
  return;
}



// ===== 0x00018fdc  objc_msgSend$familyName

void objc_msgSend_familyName(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_familyName_00055250);
  return;
}



// ===== 0x00018ffc  objc_msgSend$fileExistsAtPath_

void objc_msgSend_fileExistsAtPath_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_fileExistsAtPath__00055258);
  return;
}



// ===== 0x0001901c  objc_msgSend$fileHandleForWritingAtPath_

void objc_msgSend_fileHandleForWritingAtPath_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_fileHandleForWritingAtPath__00055260);
  return;
}



// ===== 0x0001903c  objc_msgSend$filters

void objc_msgSend_filters(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_filters_00055268);
  return;
}



// ===== 0x0001905c  objc_msgSend$firstObject

void objc_msgSend_firstObject(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_firstObject_00055270);
  return;
}



// ===== 0x0001907c  objc_msgSend$font

void objc_msgSend_font(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_font_00055278);
  return;
}



// ===== 0x0001909c  objc_msgSend$fontAtPointSize_heightAxis_

void objc_msgSend_fontAtPointSize_heightAxis_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_fontAtPointSize_heightAxis__00055288);
  return;
}



// ===== 0x000190bc  objc_msgSend$fontAttributes

void objc_msgSend_fontAttributes(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_fontAttributes_00055290);
  return;
}



// ===== 0x000190dc  objc_msgSend$fontDescriptor

void objc_msgSend_fontDescriptor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_fontDescriptor_00055298);
  return;
}



// ===== 0x000190fc  objc_msgSend$fontName

void objc_msgSend_fontName(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_fontName_000552a0);
  return;
}



// ===== 0x0001911c  objc_msgSend$frame

void objc_msgSend_frame(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_frame_000552a8);
  return;
}



// ===== 0x0001913c  objc_msgSend$getBytes_length_

void objc_msgSend_getBytes_length_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_getBytes_length__000552b0);
  return;
}



// ===== 0x0001915c  objc_msgSend$glassView

void objc_msgSend_glassView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_glassView_000552b8);
  return;
}



// ===== 0x0001917c  objc_msgSend$glyphMaskLayer

void objc_msgSend_glyphMaskLayer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_glyphMaskLayer_000552c0);
  return;
}



// ===== 0x0001919c  objc_msgSend$glyphMaskView

void objc_msgSend_glyphMaskView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_glyphMaskView_000552c8);
  return;
}



// ===== 0x000191bc  objc_msgSend$graphicsFont

void objc_msgSend_graphicsFont(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_graphicsFont_000552d8);
  return;
}



// ===== 0x000191dc  objc_msgSend$hasPrefix_

void objc_msgSend_hasPrefix_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_hasPrefix__000552e0);
  return;
}



// ===== 0x000191fc  objc_msgSend$hasRenderedGlyph

void objc_msgSend_hasRenderedGlyph(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_hasRenderedGlyph_000552e8);
  return;
}



// ===== 0x0001921c  objc_msgSend$host

void objc_msgSend_host(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_host_000552f8);
  return;
}



// ===== 0x0001923c  objc_msgSend$image

void objc_msgSend_image(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_image_00055300);
  return;
}



// ===== 0x0001925c  objc_msgSend$imageOrientation

void objc_msgSend_imageOrientation(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_imageOrientation_00055308);
  return;
}



// ===== 0x0001927c  objc_msgSend$initWithFormat_arguments_

void objc_msgSend_initWithFormat_arguments_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_initWithFormat_arguments__00055318);
  return;
}



// ===== 0x0001929c  objc_msgSend$initWithFrame_

void objc_msgSend_initWithFrame_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_initWithFrame__00055320);
  return;
}



// ===== 0x000192bc  objc_msgSend$initWithFrame_groupName_filterType_

void objc_msgSend_initWithFrame_groupName_filterType_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_initWithFrame_groupName_filterTy_00055330);
  return;
}



// ===== 0x000192dc  objc_msgSend$initWithString_attributes_

void objc_msgSend_initWithString_attributes_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_initWithString_attributes__00055338);
  return;
}



// ===== 0x000192fc  objc_msgSend$insertSubview_aboveSubview_

void objc_msgSend_insertSubview_aboveSubview_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_insertSubview_aboveSubview__00055340);
  return;
}



// ===== 0x0001931c  objc_msgSend$insertSubview_atIndex_

void objc_msgSend_insertSubview_atIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_insertSubview_atIndex__00055348);
  return;
}



// ===== 0x0001933c  objc_msgSend$integerValue

void objc_msgSend_integerValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_integerValue_00055350);
  return;
}



// ===== 0x0001935c  objc_msgSend$invalidate

void objc_msgSend_invalidate(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_invalidate_00055358);
  return;
}



// ===== 0x0001937c  objc_msgSend$isAtEnd

void objc_msgSend_isAtEnd(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_isAtEnd_00055360);
  return;
}



// ===== 0x0001939c  objc_msgSend$isEqualToNumber_

void objc_msgSend_isEqualToNumber_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_isEqualToNumber__00055368);
  return;
}



// ===== 0x000193bc  objc_msgSend$isEqualToString_

void objc_msgSend_isEqualToString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_isEqualToString__00055370);
  return;
}



// ===== 0x000193dc  objc_msgSend$isHidden

void objc_msgSend_isHidden(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_isHidden_00055378);
  return;
}



// ===== 0x000193fc  objc_msgSend$isOperatingSystemAtLeastVersion_

void objc_msgSend_isOperatingSystemAtLeastVersion_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_isOperatingSystemAtLeastVersion__00055380);
  return;
}



// ===== 0x0001941c  objc_msgSend$lastFontDiagnostic

void objc_msgSend_lastFontDiagnostic(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lastFontDiagnostic_00055388);
  return;
}



// ===== 0x0001943c  objc_msgSend$lastNearestObstacle

void objc_msgSend_lastNearestObstacle(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lastNearestObstacle_00055390);
  return;
}



// ===== 0x0001945c  objc_msgSend$lastNearestTop

void objc_msgSend_lastNearestTop(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lastNearestTop_00055398);
  return;
}



// ===== 0x0001947c  objc_msgSend$lastObject

void objc_msgSend_lastObject(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lastObject_000553a0);
  return;
}



// ===== 0x0001949c  objc_msgSend$lastPathComponent

void objc_msgSend_lastPathComponent(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lastPathComponent_000553a8);
  return;
}



// ===== 0x000194bc  objc_msgSend$lastRetractionPhase

void objc_msgSend_lastRetractionPhase(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lastRetractionPhase_000553b0);
  return;
}



// ===== 0x000194dc  objc_msgSend$lastSignature

void objc_msgSend_lastSignature(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lastSignature_000553b8);
  return;
}



// ===== 0x000194fc  objc_msgSend$layer

void objc_msgSend_layer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_layer_000553c0);
  return;
}



// ===== 0x0001951c  objc_msgSend$layoutCalls

void objc_msgSend_layoutCalls(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_layoutCalls_000553d0);
  return;
}



// ===== 0x0001953c  objc_msgSend$length

void objc_msgSend_length(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_length_000553e0);
  return;
}



// ===== 0x0001955c  objc_msgSend$lgEffectiveFilterType

void objc_msgSend_lgEffectiveFilterType(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lgEffectiveFilterType_000553f8);
  return;
}



// ===== 0x0001957c  objc_msgSend$lgFilterAttached

void objc_msgSend_lgFilterAttached(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lgFilterAttached_00055400);
  return;
}



// ===== 0x0001959c  objc_msgSend$lgInvalidateFilterContents

void objc_msgSend_lgInvalidateFilterContents(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lgInvalidateFilterContents_00055410);
  return;
}



// ===== 0x000195bc  objc_msgSend$lgSpecularEnabledOverride

void objc_msgSend_lgSpecularEnabledOverride(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lgSpecularEnabledOverride_00055428);
  return;
}



// ===== 0x000195dc  objc_msgSend$lg_configure

void objc_msgSend_lg_configure(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lg_configure_00055430);
  return;
}



// ===== 0x000195fc  objc_msgSend$loadFont

void objc_msgSend_loadFont(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_loadFont_00055438);
  return;
}



// ===== 0x0001961c  objc_msgSend$localizedDescription

void objc_msgSend_localizedDescription(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_localizedDescription_00055440);
  return;
}



// ===== 0x0001963c  objc_msgSend$lowercaseString

void objc_msgSend_lowercaseString(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_lowercaseString_00055448);
  return;
}



// ===== 0x0001965c  objc_msgSend$mainBundle

void objc_msgSend_mainBundle(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_mainBundle_00055450);
  return;
}



// ===== 0x0001967c  objc_msgSend$mainQueue

void objc_msgSend_mainQueue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_mainQueue_00055458);
  return;
}



// ===== 0x0001969c  objc_msgSend$mainRunLoop

void objc_msgSend_mainRunLoop(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_mainRunLoop_00055460);
  return;
}



// ===== 0x000196bc  objc_msgSend$mainScreen

void objc_msgSend_mainScreen(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_mainScreen_00055468);
  return;
}



// ===== 0x000196dc  objc_msgSend$maximumFramesPerSecond

void objc_msgSend_maximumFramesPerSecond(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_maximumFramesPerSecond_00055470);
  return;
}



// ===== 0x000196fc  objc_msgSend$minimumHeightAxis

void objc_msgSend_minimumHeightAxis(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_minimumHeightAxis_00055478);
  return;
}



// ===== 0x0001971c  objc_msgSend$mutableBytes

void objc_msgSend_mutableBytes(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_mutableBytes_00055480);
  return;
}



// ===== 0x0001973c  objc_msgSend$nativeTimeNeedsHiding

void objc_msgSend_nativeTimeNeedsHiding(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_nativeTimeNeedsHiding_00055488);
  return;
}



// ===== 0x0001975c  objc_msgSend$null

void objc_msgSend_null(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_null_00055490);
  return;
}



// ===== 0x0001977c  objc_msgSend$numberWithDouble_

void objc_msgSend_numberWithDouble_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_numberWithDouble__00055498);
  return;
}



// ===== 0x0001979c  objc_msgSend$numberWithInteger_

void objc_msgSend_numberWithInteger_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_numberWithInteger__000554a0);
  return;
}



// ===== 0x000197bc  objc_msgSend$object

void objc_msgSend_object(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_object_000554a8);
  return;
}



// ===== 0x000197dc  objc_msgSend$objectAtIndexedSubscript_

void objc_msgSend_objectAtIndexedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_objectAtIndexedSubscript__000554b0);
  return;
}



// ===== 0x000197fc  objc_msgSend$objectForKey_

void objc_msgSend_objectForKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_objectForKey__000554b8);
  return;
}



// ===== 0x0001981c  objc_msgSend$objectForKeyedSubscript_

void objc_msgSend_objectForKeyedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_objectForKeyedSubscript__000554c0);
  return;
}



// ===== 0x0001983c  objc_msgSend$opacity

void objc_msgSend_opacity(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_opacity_000554c8);
  return;
}



// ===== 0x0001985c  objc_msgSend$operatingSystemVersion

void objc_msgSend_operatingSystemVersion(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00019870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_operatingSystemVersion_000554d0);
  return;
}



// ===== 0x0001987c  objc_msgSend$originalFont

void objc_msgSend_originalFont(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_originalFont_000554d8);
  return;
}



// ===== 0x0001989c  objc_msgSend$originalLabelAlpha

void objc_msgSend_originalLabelAlpha(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_originalLabelAlpha_000554e0);
  return;
}



// ===== 0x000198bc  objc_msgSend$originalLabelFrame

void objc_msgSend_originalLabelFrame(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_originalLabelFrame_000554e8);
  return;
}



// ===== 0x000198dc  objc_msgSend$originalLabelHidden

void objc_msgSend_originalLabelHidden(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_originalLabelHidden_000554f0);
  return;
}



// ===== 0x000198fc  objc_msgSend$originalVisibleSourceAlpha

void objc_msgSend_originalVisibleSourceAlpha(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_originalVisibleSourceAlpha_000554f8);
  return;
}



// ===== 0x0001991c  objc_msgSend$originalVisibleSourceHidden

void objc_msgSend_originalVisibleSourceHidden(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_originalVisibleSourceHidden_00055500);
  return;
}



// ===== 0x0001993c  objc_msgSend$originalVisibleSourceLayerOpacity

void objc_msgSend_originalVisibleSourceLayerOpacity(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_originalVisibleSourceLayerOpacit_00055508);
  return;
}



// ===== 0x0001995c  objc_msgSend$path

void objc_msgSend_path(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_path_00055510);
  return;
}



// ===== 0x0001997c  objc_msgSend$peakApplyTime

void objc_msgSend_peakApplyTime(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_peakApplyTime_00055518);
  return;
}



// ===== 0x0001999c  objc_msgSend$performSelector_

void objc_msgSend_performSelector_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_performSelector__00055520);
  return;
}



// ===== 0x000199bc  objc_msgSend$pointSize

void objc_msgSend_pointSize(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_pointSize_00055528);
  return;
}



// ===== 0x000199dc  objc_msgSend$postNotificationName_object_

void objc_msgSend_postNotificationName_object_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_postNotificationName_object__00055530);
  return;
}



// ===== 0x000199fc  objc_msgSend$postScriptName

void objc_msgSend_postScriptName(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_postScriptName_00055538);
  return;
}



// ===== 0x00019a1c  objc_msgSend$presentationLayer

void objc_msgSend_presentationLayer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_presentationLayer_00055540);
  return;
}



// ===== 0x00019a3c  objc_msgSend$processInfo

void objc_msgSend_processInfo(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_processInfo_00055548);
  return;
}



// ===== 0x00019a5c  objc_msgSend$processName

void objc_msgSend_processName(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_processName_00055550);
  return;
}



// ===== 0x00019a7c  objc_msgSend$pullBlurActive

void objc_msgSend_pullBlurActive(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_pullBlurActive_00055558);
  return;
}



// ===== 0x00019a9c  objc_msgSend$pullBlurKnown

void objc_msgSend_pullBlurKnown(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_pullBlurKnown_00055560);
  return;
}



// ===== 0x00019abc  objc_msgSend$pullBlurView

void objc_msgSend_pullBlurView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_pullBlurView_00055568);
  return;
}



// ===== 0x00019adc  objc_msgSend$rangeOfCharacterFromSet_

void objc_msgSend_rangeOfCharacterFromSet_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_rangeOfCharacterFromSet__00055570);
  return;
}



// ===== 0x00019afc  objc_msgSend$rangeOfString_

void objc_msgSend_rangeOfString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_rangeOfString__00055578);
  return;
}



// ===== 0x00019b1c  objc_msgSend$reapplyFilterForParameterReload

void objc_msgSend_reapplyFilterForParameterReload(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_reapplyFilterForParameterReload_00055580);
  return;
}



// ===== 0x00019b3c  objc_msgSend$reason

void objc_msgSend_reason(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00019b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_reason_00055588);
  return;
}



// ===== 0x00019b5c  objc_msgSend$reassertNativeTimeHidden

void objc_msgSend_reassertNativeTimeHidden(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_reassertNativeTimeHidden_00055590);
  return;
}



// ===== 0x00019b7c  objc_msgSend$removeAllAnimations

void objc_msgSend_removeAllAnimations(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_removeAllAnimations_00055598);
  return;
}



// ===== 0x00019b9c  objc_msgSend$removeFromSuperview

void objc_msgSend_removeFromSuperview(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_removeFromSuperview_000555a0);
  return;
}



// ===== 0x00019bbc  objc_msgSend$removeLastObject

void objc_msgSend_removeLastObject(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_removeLastObject_000555a8);
  return;
}



// ===== 0x00019bdc  objc_msgSend$removeObject_

void objc_msgSend_removeObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_removeObject__000555b0);
  return;
}



// ===== 0x00019bfc  objc_msgSend$renderCanvasSize

void objc_msgSend_renderCanvasSize(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_renderCanvasSize_000555b8);
  return;
}



// ===== 0x00019c1c  objc_msgSend$renderContainer

void objc_msgSend_renderContainer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_renderContainer_000555c0);
  return;
}



// ===== 0x00019c3c  objc_msgSend$renderedGlyphBottom

void objc_msgSend_renderedGlyphBottom(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_renderedGlyphBottom_000555c8);
  return;
}



// ===== 0x00019c5c  objc_msgSend$resolvedColorWithTraitCollection_

void objc_msgSend_resolvedColorWithTraitCollection_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_resolvedColorWithTraitCollection_000555d8);
  return;
}



// ===== 0x00019c7c  objc_msgSend$restore

void objc_msgSend_restore(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_restore_000555e0);
  return;
}



// ===== 0x00019c9c  objc_msgSend$reverseObjectEnumerator

void objc_msgSend_reverseObjectEnumerator(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_reverseObjectEnumerator_000555e8);
  return;
}



// ===== 0x00019cbc  objc_msgSend$sampleStart

void objc_msgSend_sampleStart(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_sampleStart_000555f0);
  return;
}



// ===== 0x00019cdc  objc_msgSend$scale

void objc_msgSend_scale(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_scale_000555f8);
  return;
}



// ===== 0x00019cfc  objc_msgSend$scanDouble_

void objc_msgSend_scanDouble_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_scanDouble__00055600);
  return;
}



// ===== 0x00019d1c  objc_msgSend$scanHexInt_

void objc_msgSend_scanHexInt_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_scanHexInt__00055608);
  return;
}



// ===== 0x00019d3c  objc_msgSend$scannerWithString_

void objc_msgSend_scannerWithString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_scannerWithString__00055610);
  return;
}



// ===== 0x00019d5c  objc_msgSend$scheduleApply_

void objc_msgSend_scheduleApply_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_scheduleApply__00055618);
  return;
}



// ===== 0x00019d7c  objc_msgSend$scheduled

void objc_msgSend_scheduled(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_scheduled_00055620);
  return;
}



// ===== 0x00019d9c  objc_msgSend$seekToEndReturningOffset_error_

void objc_msgSend_seekToEndReturningOffset_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_seekToEndReturningOffset_error__00055628);
  return;
}



// ===== 0x00019dbc  objc_msgSend$separatorColor

void objc_msgSend_separatorColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_separatorColor_00055630);
  return;
}



// ===== 0x00019ddc  objc_msgSend$setActions_

void objc_msgSend_setActions_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setActions__00055638);
  return;
}



// ===== 0x00019dfc  objc_msgSend$setAlpha_

void objc_msgSend_setAlpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setAlpha__00055640);
  return;
}



// ===== 0x00019e1c  objc_msgSend$setAppliedChanges_

void objc_msgSend_setAppliedChanges_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setAppliedChanges__00055648);
  return;
}



// ===== 0x00019e3c  objc_msgSend$setApplying_

void objc_msgSend_setApplying_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setApplying__00055650);
  return;
}



// ===== 0x00019e5c  objc_msgSend$setAutoresizingMask_

void objc_msgSend_setAutoresizingMask_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setAutoresizingMask__00055660);
  return;
}



// ===== 0x00019e7c  objc_msgSend$setBackgroundColor_

void objc_msgSend_setBackgroundColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setBackgroundColor__00055678);
  return;
}



// ===== 0x00019e9c  objc_msgSend$setBorderColor_

void objc_msgSend_setBorderColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setBorderColor__00055688);
  return;
}



// ===== 0x00019ebc  objc_msgSend$setBorderWidth_

void objc_msgSend_setBorderWidth_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setBorderWidth__00055690);
  return;
}



// ===== 0x00019edc  objc_msgSend$setBounds_

void objc_msgSend_setBounds_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setBounds__00055698);
  return;
}



// ===== 0x00019efc  objc_msgSend$setClipsToBounds_

void objc_msgSend_setClipsToBounds_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setClipsToBounds__000556a8);
  return;
}



// ===== 0x00019f1c  objc_msgSend$setColorGradientLayer_

void objc_msgSend_setColorGradientLayer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setColorGradientLayer__000556b0);
  return;
}



// ===== 0x00019f3c  objc_msgSend$setColorMaskLayer_

void objc_msgSend_setColorMaskLayer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setColorMaskLayer__000556b8);
  return;
}



// ===== 0x00019f5c  objc_msgSend$setColorMaskView_

void objc_msgSend_setColorMaskView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setColorMaskView__000556c0);
  return;
}



// ===== 0x00019f7c  objc_msgSend$setColorOverlayView_

void objc_msgSend_setColorOverlayView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setColorOverlayView__000556c8);
  return;
}



// ===== 0x00019f9c  objc_msgSend$setColors_

void objc_msgSend_setColors_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setColors__000556d0);
  return;
}



// ===== 0x00019fbc  objc_msgSend$setComplicationLastTop_

void objc_msgSend_setComplicationLastTop_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setComplicationLastTop__000556d8);
  return;
}



// ===== 0x00019fdc  objc_msgSend$setComplicationLayoutShift_

void objc_msgSend_setComplicationLayoutShift_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setComplicationLayoutShift__000556e0);
  return;
}



// ===== 0x00019ffc  objc_msgSend$setComplicationRow_

void objc_msgSend_setComplicationRow_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setComplicationRow__000556e8);
  return;
}



// ===== 0x0001a01c  objc_msgSend$setCornerCurve_

void objc_msgSend_setCornerCurve_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setCornerCurve__000556f8);
  return;
}



// ===== 0x0001a03c  objc_msgSend$setCornerRadius_

void objc_msgSend_setCornerRadius_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setCornerRadius__00055700);
  return;
}



// ===== 0x0001a05c  objc_msgSend$setCountLimit_

void objc_msgSend_setCountLimit_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setCountLimit__00055708);
  return;
}



// ===== 0x0001a07c  objc_msgSend$setDeadline_

void objc_msgSend_setDeadline_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setDeadline__00055718);
  return;
}



// ===== 0x0001a09c  objc_msgSend$setDisableActions_

void objc_msgSend_setDisableActions_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setDisableActions__00055720);
  return;
}



// ===== 0x0001a0bc  objc_msgSend$setEndPoint_

void objc_msgSend_setEndPoint_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setEndPoint__00055730);
  return;
}



// ===== 0x0001a0dc  objc_msgSend$setFillColor_

void objc_msgSend_setFillColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setFillColor__00055738);
  return;
}



// ===== 0x0001a0fc  objc_msgSend$setFilters_

void objc_msgSend_setFilters_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setFilters__00055740);
  return;
}



// ===== 0x0001a11c  objc_msgSend$setFont_

void objc_msgSend_setFont_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setFont__00055748);
  return;
}



// ===== 0x0001a13c  objc_msgSend$setFrame_

void objc_msgSend_setFrame_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setFrame__00055750);
  return;
}



// ===== 0x0001a15c  objc_msgSend$setGlassView_

void objc_msgSend_setGlassView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setGlassView__00055758);
  return;
}



// ===== 0x0001a17c  objc_msgSend$setGlyphMaskLayer_

void objc_msgSend_setGlyphMaskLayer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setGlyphMaskLayer__00055760);
  return;
}



// ===== 0x0001a19c  objc_msgSend$setGlyphMaskView_

void objc_msgSend_setGlyphMaskView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setGlyphMaskView__00055768);
  return;
}



// ===== 0x0001a1bc  objc_msgSend$setHasRenderedGlyph_

void objc_msgSend_setHasRenderedGlyph_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setHasRenderedGlyph__00055778);
  return;
}



// ===== 0x0001a1dc  objc_msgSend$setHidden_

void objc_msgSend_setHidden_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setHidden__00055780);
  return;
}



// ===== 0x0001a1fc  objc_msgSend$setHost_

void objc_msgSend_setHost_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setHost__00055788);
  return;
}



// ===== 0x0001a21c  objc_msgSend$setLastFontDiagnostic_

void objc_msgSend_setLastFontDiagnostic_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setLastFontDiagnostic__00055790);
  return;
}



// ===== 0x0001a23c  objc_msgSend$setLastNearestObstacle_

void objc_msgSend_setLastNearestObstacle_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setLastNearestObstacle__00055798);
  return;
}



// ===== 0x0001a25c  objc_msgSend$setLastNearestTop_

void objc_msgSend_setLastNearestTop_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setLastNearestTop__000557a0);
  return;
}



// ===== 0x0001a27c  objc_msgSend$setLastRetractionPhase_

void objc_msgSend_setLastRetractionPhase_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setLastRetractionPhase__000557a8);
  return;
}



// ===== 0x0001a29c  objc_msgSend$setLastSignature_

void objc_msgSend_setLastSignature_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setLastSignature__000557b0);
  return;
}



// ===== 0x0001a2bc  objc_msgSend$setLayoutCalls_

void objc_msgSend_setLayoutCalls_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setLayoutCalls__000557b8);
  return;
}



// ===== 0x0001a2dc  objc_msgSend$setLocations_

void objc_msgSend_setLocations_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setLocations__000557f0);
  return;
}



// ===== 0x0001a2fc  objc_msgSend$setMask_

void objc_msgSend_setMask_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setMask__000557f8);
  return;
}



// ===== 0x0001a31c  objc_msgSend$setMaskView_

void objc_msgSend_setMaskView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setMaskView__00055800);
  return;
}



// ===== 0x0001a33c  objc_msgSend$setMasksToBounds_

void objc_msgSend_setMasksToBounds_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setMasksToBounds__00055808);
  return;
}



// ===== 0x0001a35c  objc_msgSend$setNeedsDisplay

void objc_msgSend_setNeedsDisplay(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setNeedsDisplay_00055810);
  return;
}



// ===== 0x0001a37c  objc_msgSend$setNeedsLayout

void objc_msgSend_setNeedsLayout(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setNeedsLayout_00055818);
  return;
}



// ===== 0x0001a39c  objc_msgSend$setObject_forKey_

void objc_msgSend_setObject_forKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setObject_forKey__00055820);
  return;
}



// ===== 0x0001a3bc  objc_msgSend$setObject_forKeyedSubscript_

void objc_msgSend_setObject_forKeyedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setObject_forKeyedSubscript__00055828);
  return;
}



// ===== 0x0001a3dc  objc_msgSend$setOpacity_

void objc_msgSend_setOpacity_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setOpacity__00055830);
  return;
}



// ===== 0x0001a3fc  objc_msgSend$setOpaque_

void objc_msgSend_setOpaque_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setOpaque__00055838);
  return;
}



// ===== 0x0001a41c  objc_msgSend$setOriginalFont_

void objc_msgSend_setOriginalFont_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setOriginalFont__00055840);
  return;
}



// ===== 0x0001a43c  objc_msgSend$setOriginalLabelAlpha_

void objc_msgSend_setOriginalLabelAlpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setOriginalLabelAlpha__00055848);
  return;
}



// ===== 0x0001a45c  objc_msgSend$setOriginalLabelFrame_

void objc_msgSend_setOriginalLabelFrame_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setOriginalLabelFrame__00055850);
  return;
}



// ===== 0x0001a47c  objc_msgSend$setOriginalLabelHidden_

void objc_msgSend_setOriginalLabelHidden_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setOriginalLabelHidden__00055858);
  return;
}



// ===== 0x0001a49c  objc_msgSend$setOriginalVisibleSourceAlpha_

void objc_msgSend_setOriginalVisibleSourceAlpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setOriginalVisibleSourceAlpha__00055860);
  return;
}



// ===== 0x0001a4bc  objc_msgSend$setOriginalVisibleSourceHidden_

void objc_msgSend_setOriginalVisibleSourceHidden_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setOriginalVisibleSourceHidden__00055868);
  return;
}



// ===== 0x0001a4dc  objc_msgSend$setOriginalVisibleSourceLayerOpacity_

void objc_msgSend_setOriginalVisibleSourceLayerOpacity_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setOriginalVisibleSourceLayerOpa_00055870);
  return;
}



// ===== 0x0001a4fc  objc_msgSend$setPath_

void objc_msgSend_setPath_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setPath__00055878);
  return;
}



// ===== 0x0001a51c  objc_msgSend$setPaused_

void objc_msgSend_setPaused_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setPaused__00055880);
  return;
}



// ===== 0x0001a53c  objc_msgSend$setPeakApplyTime_

void objc_msgSend_setPeakApplyTime_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setPeakApplyTime__00055888);
  return;
}



// ===== 0x0001a55c  objc_msgSend$setPosition_

void objc_msgSend_setPosition_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setPosition__00055890);
  return;
}



// ===== 0x0001a57c  objc_msgSend$setPreferredFramesPerSecond_

void objc_msgSend_setPreferredFramesPerSecond_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setPreferredFramesPerSecond__000558a0);
  return;
}



// ===== 0x0001a59c  objc_msgSend$setPullBlurActive_

void objc_msgSend_setPullBlurActive_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setPullBlurActive__000558a8);
  return;
}



// ===== 0x0001a5bc  objc_msgSend$setPullBlurKnown_

void objc_msgSend_setPullBlurKnown_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setPullBlurKnown__000558b0);
  return;
}



// ===== 0x0001a5dc  objc_msgSend$setPullBlurView_

void objc_msgSend_setPullBlurView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setPullBlurView__000558b8);
  return;
}



// ===== 0x0001a5fc  objc_msgSend$setRenderCanvasSize_

void objc_msgSend_setRenderCanvasSize_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setRenderCanvasSize__000558c0);
  return;
}



// ===== 0x0001a61c  objc_msgSend$setRenderContainer_

void objc_msgSend_setRenderContainer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setRenderContainer__000558c8);
  return;
}



// ===== 0x0001a63c  objc_msgSend$setRenderedGlyphBottom_

void objc_msgSend_setRenderedGlyphBottom_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setRenderedGlyphBottom__000558d0);
  return;
}



// ===== 0x0001a65c  objc_msgSend$setSampleStart_

void objc_msgSend_setSampleStart_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setSampleStart__000558d8);
  return;
}



// ===== 0x0001a67c  objc_msgSend$setScheduled_

void objc_msgSend_setScheduled_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setScheduled__000558e0);
  return;
}



// ===== 0x0001a69c  objc_msgSend$setSkippedChanges_

void objc_msgSend_setSkippedChanges_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setSkippedChanges__000558e8);
  return;
}



// ===== 0x0001a6bc  objc_msgSend$setSourceLabel_

void objc_msgSend_setSourceLabel_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setSourceLabel__000558f0);
  return;
}



// ===== 0x0001a6dc  objc_msgSend$setStartPoint_

void objc_msgSend_setStartPoint_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setStartPoint__000558f8);
  return;
}



// ===== 0x0001a6fc  objc_msgSend$setTotalApplyTime_

void objc_msgSend_setTotalApplyTime_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setTotalApplyTime__00055908);
  return;
}



// ===== 0x0001a71c  objc_msgSend$setUserInteractionEnabled_

void objc_msgSend_setUserInteractionEnabled_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setUserInteractionEnabled__00055910);
  return;
}



// ===== 0x0001a73c  objc_msgSend$setValue_forKey_

void objc_msgSend_setValue_forKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setValue_forKey__00055918);
  return;
}



// ===== 0x0001a75c  objc_msgSend$setVisibleSourceView_

void objc_msgSend_setVisibleSourceView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_setVisibleSourceView__00055920);
  return;
}



// ===== 0x0001a77c  objc_msgSend$shared

void objc_msgSend_shared(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_shared_00055930);
  return;
}



// ===== 0x0001a79c  objc_msgSend$sharedApplication

void objc_msgSend_sharedApplication(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_sharedApplication_00055938);
  return;
}



// ===== 0x0001a7bc  objc_msgSend$size

void objc_msgSend_size(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_size_00055940);
  return;
}



// ===== 0x0001a7dc  objc_msgSend$skippedChanges

void objc_msgSend_skippedChanges(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_skippedChanges_00055948);
  return;
}



// ===== 0x0001a7fc  objc_msgSend$sourceLabel

void objc_msgSend_sourceLabel(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_sourceLabel_00055950);
  return;
}



// ===== 0x0001a81c  objc_msgSend$stopDeviceMotionUpdates

void objc_msgSend_stopDeviceMotionUpdates(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_stopDeviceMotionUpdates_00055958);
  return;
}



// ===== 0x0001a83c  objc_msgSend$string

void objc_msgSend_string(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_string_00055960);
  return;
}



// ===== 0x0001a85c  objc_msgSend$stringByAppendingFormat_

void objc_msgSend_stringByAppendingFormat_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_stringByAppendingFormat__00055968);
  return;
}



// ===== 0x0001a87c  objc_msgSend$stringByAppendingPathComponent_

void objc_msgSend_stringByAppendingPathComponent_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_stringByAppendingPathComponent__00055970);
  return;
}



// ===== 0x0001a89c  objc_msgSend$stringByAppendingString_

void objc_msgSend_stringByAppendingString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_stringByAppendingString__00055978);
  return;
}



// ===== 0x0001a8bc  objc_msgSend$stringByReplacingOccurrencesOfString_withString_

void objc_msgSend_stringByReplacingOccurrencesOfString_withString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_stringByReplacingOccurrencesOfSt_00055980);
  return;
}



// ===== 0x0001a8dc  objc_msgSend$stringByTrimmingCharactersInSet_

void objc_msgSend_stringByTrimmingCharactersInSet_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_stringByTrimmingCharactersInSet__00055988);
  return;
}



// ===== 0x0001a8fc  objc_msgSend$stringWithFormat_

void objc_msgSend_stringWithFormat_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_stringWithFormat__00055990);
  return;
}



// ===== 0x0001a91c  objc_msgSend$stringWithUTF8String_

void objc_msgSend_stringWithUTF8String_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_stringWithUTF8String__00055998);
  return;
}



// ===== 0x0001a93c  objc_msgSend$substringFromIndex_

void objc_msgSend_substringFromIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_substringFromIndex__000559a0);
  return;
}



// ===== 0x0001a95c  objc_msgSend$subviews

void objc_msgSend_subviews(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_subviews_000559a8);
  return;
}



// ===== 0x0001a97c  objc_msgSend$superview

void objc_msgSend_superview(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_superview_000559b0);
  return;
}



// ===== 0x0001a99c  objc_msgSend$symbolicTraits

void objc_msgSend_symbolicTraits(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_symbolicTraits_000559b8);
  return;
}



// ===== 0x0001a9bc  objc_msgSend$systemVersion

void objc_msgSend_systemVersion(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_systemVersion_000559c0);
  return;
}



// ===== 0x0001a9dc  objc_msgSend$targetTimestamp

void objc_msgSend_targetTimestamp(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_targetTimestamp_000559c8);
  return;
}



// ===== 0x0001a9fc  objc_msgSend$text

void objc_msgSend_text(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_text_000559d0);
  return;
}



// ===== 0x0001aa1c  objc_msgSend$timestamp

void objc_msgSend_timestamp(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_timestamp_000559e8);
  return;
}



// ===== 0x0001aa3c  objc_msgSend$totalApplyTime

void objc_msgSend_totalApplyTime(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_totalApplyTime_000559f8);
  return;
}



// ===== 0x0001aa5c  objc_msgSend$trackMotion

void objc_msgSend_trackMotion(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_trackMotion_00055a00);
  return;
}



// ===== 0x0001aa7c  objc_msgSend$traitCollection

void objc_msgSend_traitCollection(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_traitCollection_00055a08);
  return;
}



// ===== 0x0001aa9c  objc_msgSend$transform

void objc_msgSend_transform(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_transform_00055a18);
  return;
}



// ===== 0x0001aabc  objc_msgSend$unsignedIntValue

void objc_msgSend_unsignedIntValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_unsignedIntValue_00055a20);
  return;
}



// ===== 0x0001aadc  objc_msgSend$updateNativeBlurOverlayWithRadius_

void objc_msgSend_updateNativeBlurOverlayWithRadius_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_updateNativeBlurOverlayWithRadiu_00055a28);
  return;
}



// ===== 0x0001aafc  objc_msgSend$updatePullBlur

void objc_msgSend_updatePullBlur(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_updatePullBlur_00055a30);
  return;
}



// ===== 0x0001ab1c  objc_msgSend$updateSpecular

void objc_msgSend_updateSpecular(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_updateSpecular_00055a38);
  return;
}



// ===== 0x0001ab3c  objc_msgSend$userInterfaceStyle

void objc_msgSend_userInterfaceStyle(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_userInterfaceStyle_00055a40);
  return;
}



// ===== 0x0001ab5c  objc_msgSend$valueForKey_

void objc_msgSend_valueForKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_valueForKey__00055a48);
  return;
}



// ===== 0x0001ab7c  objc_msgSend$valueWithCGRect_

void objc_msgSend_valueWithCGRect_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_valueWithCGRect__00055a50);
  return;
}



// ===== 0x0001ab9c  objc_msgSend$valueWithUIEdgeInsets_

void objc_msgSend_valueWithUIEdgeInsets_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_valueWithUIEdgeInsets__00055a58);
  return;
}



// ===== 0x0001abbc  objc_msgSend$view

void objc_msgSend_view(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_view_00055a60);
  return;
}



// ===== 0x0001abdc  objc_msgSend$visibleSourceView

void objc_msgSend_visibleSourceView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_visibleSourceView_00055a78);
  return;
}



// ===== 0x0001abfc  objc_msgSend$weakObjectsHashTable

void objc_msgSend_weakObjectsHashTable(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_weakObjectsHashTable_00055a80);
  return;
}



// ===== 0x0001ac1c  objc_msgSend$whiteColor

void objc_msgSend_whiteColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_whiteColor_00055a88);
  return;
}



// ===== 0x0001ac3c  objc_msgSend$whitespaceAndNewlineCharacterSet

void objc_msgSend_whitespaceAndNewlineCharacterSet(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_whitespaceAndNewlineCharacterSet_00055a90);
  return;
}



// ===== 0x0001ac5c  objc_msgSend$window

void objc_msgSend_window(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_window_00055a98);
  return;
}



// ===== 0x0001ac7c  objc_msgSend$windows

void objc_msgSend_windows(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_windows_00055aa0);
  return;
}



// ===== 0x0001ac9c  objc_msgSend$writeData_error_

void objc_msgSend_writeData_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_writeData_error__00055aa8);
  return;
}



// ===== 0x0001acbc  objc_msgSend$writeToFile_options_error_

void objc_msgSend_writeToFile_options_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000503a8)(param_1,PTR_s_writeToFile_options_error__00055ab0);
  return;
}



