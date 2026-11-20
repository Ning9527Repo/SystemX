//
//  LGClockFontStore.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "LGClockFontStore.h"

@implementation LGClockFontStore

// IMP 0x0000806c  types @16@0:8
- (id)init {
      ID IVar1;
      undefined8 uVar2;
      undefined8 extraout_x1;
      undefined8 uVar3;
      ID local_30;
      undefined *puStack_28;

      puStack_28 = PTR_PTR_00055c18;
      local_30 = self;
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

// IMP 0x000080f4  types v16@0:8
- (void)dealloc {
      ID local_30;
      undefined *puStack_28;

      if (*(long *)(self + 8) != 0) {
        _CGFontRelease();
      }
      puStack_28 = PTR_PTR_00055c18;
      local_30 = self;
      _objc_msgSendSuper2(&local_30,PTR_s_dealloc_000551d0);
      return;
}

// IMP 0x00008140  types v16@0:8
- (void)loadFont {
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
          *(undefined8 *)(self + 8) = 0;
        }
        else {
          uVar4 = _CGFontCreateWithDataProvider();
          *(undefined8 *)(self + 8) = uVar4;
          _CGDataProviderRelease(lVar3);
          if (*(long *)(self + 8) != 0) {
            uVar4 = _CGFontCopyPostScriptName();
            uVar11 = *(undefined8 *)(self + 0x10);
            *(undefined8 *)(self + 0x10) = uVar4;
            _objc_release(uVar11);
            local_118 = 0;
            iVar1 = _CTFontManagerRegisterGraphicsFont(*(undefined8 *)(self + 8),&local_118);
            if (((iVar1 == 0) && (local_118 != 0)) && (lVar3 = _CFErrorGetCode(), lVar3 != 0x69)) {
              _LGLog(&cf_fontregistrationfailedps___error___);
            }
            if (local_118 != 0) {
              _CFRelease();
            }
            lVar3 = _CTFontCreateWithGraphicsFont(0x404e000000000000,*(undefined8 *)(self + 8),0,0);
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
            uVar12 = *(undefined8 *)(self + 0x18);
            *(undefined8 *)(self + 0x18) = uVar11;
            uVar11 = _objc_retain();
            _objc_release(uVar12);
            uVar12 = *(undefined8 *)(self + 0x20);
            *(undefined8 *)(self + 0x20) = uVar5;
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

// IMP 0x000086fc  types d24@0:8@16
- (double)clampedValueForAxis:(id)clampedValueForAxis {
      undefined8 uVar1;
      undefined8 uVar2;
      undefined8 extraout_x1;
      double dVar3;
      double dVar4;
      double dVar5;
      undefined auVar6 [16];

      uVar1 = _objc_retain(clampedValueForAxis);
      dVar3 = (double)FUN_000087f0();
      objc_msgSend_axisRanges(self);
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

// IMP 0x000088c4  types @24@0:8d16
- (id)fontAtPointSize:(double)fontAtPointSize {
      ID IVar1;
      undefined8 uVar2;

      uVar2 = FUN_000087f0(&cf_height);
      IVar1 = objc_msgSend_fontAtPointSize_heightAxis_(fontAtPointSize,uVar2,self);
      return IVar1;
}

// IMP 0x00008904  types d16@0:8
- (double)minimumHeightAxis {
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

// IMP 0x000089a4  types @32@0:8d16d24
- (id)fontAtPointSize:(double)fontAtPointSize heightAxis:(double)heightAxis {
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
        objc_msgSend_postScriptName(self);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        lVar2 = objc_msgSend_length();
        _objc_release(uVar3);
        puVar1 = PTR__OBJC_CLASS___NSString_00055ad8;
        if (lVar2 != 0) {
          if (fontAtPointSize <= 1.0) {
            fontAtPointSize = 1.0;
          }
          objc_msgSend_clampedValueForAxis_(self,extraout_x1,&cf_weight);
          objc_msgSend_clampedValueForAxis_(self,extraout_x1_00,&cf_width);
          objc_msgSend_clampedValueForAxis_(self,extraout_x1_01,&cf_softness);
          objc_msgSend_stringWithFormat_(puVar1,extraout_x1_02,&cf___2f___1f___1f___1f___1f);
          uVar3 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_cache(self);
          auVar10 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_objectForKey_(auVar10._0_8_,auVar10._8_8_,uVar3);
          lVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_release(auVar10._0_8_);
          if (lVar4 == 0) {
            objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_00055ac8);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_axisIDs(self);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            local_d0 = PTR___NSConcreteStackBlock_00050260;
            local_c8 = DAT_0001e278;
            local_c0 = FUN_00008ce4;
            puStack_b8 = &DAT_000505d8;
            auVar10 = _objc_retain(uVar5);
            uVar5 = auVar10._0_8_;
            local_b0 = uVar5;
            IStack_a8 = self;
            local_a0 = heightAxis;
            objc_msgSend_enumerateKeysAndObjectsUsingBlock_(uVar6,auVar10._8_8_,&local_d0);
            _objc_release(uVar6);
            local_98 = *(undefined8 *)PTR__kCTFontNameAttribute_000503a0;
            objc_msgSend_postScriptName(self);
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
              objc_msgSend_postScriptName(self);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _LGLog(&cf_fontcreatefailedps___size___2fvariations___);
              lVar2 = 0;
            }
            else {
              lVar2 = _CTFontCreateWithFontDescriptor(fontAtPointSize,lVar7,0);
              _CFRelease(lVar7);
              if (lVar2 == 0) goto LAB_00008c40;
              objc_msgSend_cache(self);
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
      objc_msgSend_graphicsFont(self);
      objc_msgSend_postScriptName(self);
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

// IMP 0x00008ddc  types ^{CGFont=}16@0:8
- (CGFont *)graphicsFont {
      return *(CGFont **)(self + 8);
}

// IMP 0x00008de4  types v24@0:8^{CGFont=}16
- (void)setGraphicsFont:(CGFont *)setGraphicsFont {
      *(CGFont **)(self + 8) = setGraphicsFont;
      return;
}

// IMP 0x00008dec  types @16@0:8
- (id)postScriptName {
      return *(ID *)(self + 0x10);
}

// IMP 0x00008df4  types v24@0:8@16
- (void)setPostScriptName:(id)setPostScriptName {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x00008dfc  types @16@0:8
- (id)axisIDs {
      return *(ID *)(self + 0x18);
}

// IMP 0x00008e04  types v24@0:8@16
- (void)setAxisIDs:(id)setAxisIDs {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x00008e0c  types @16@0:8
- (id)axisRanges {
      return *(ID *)(self + 0x20);
}

// IMP 0x00008e14  types v24@0:8@16
- (void)setAxisRanges:(id)setAxisRanges {
      _objc_setProperty_nonatomic_copy();
      return;
}

// IMP 0x00008e1c  types @16@0:8
- (id)cache {
      return *(ID *)(self + 0x28);
}

// IMP 0x00008e24  types v24@0:8@16
- (void)setCache:(id)setCache {
      _objc_storeStrong(self + 0x28,setCache);
      return;
}

// IMP 0x00008e30  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + 0x28,0);
      _objc_storeStrong(self + 0x20,0);
      _objc_storeStrong(self + 0x18,0);
      _objc_storeStrong(self + 0x10,0);
      return;
}

@end
