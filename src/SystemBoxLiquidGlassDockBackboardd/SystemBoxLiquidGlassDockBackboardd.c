//
//  SystemBoxLiquidGlassDockBackboardd
//
//  This component has no Objective-C classes. It resolves QuartzCore
//  internals with dlsym and patches the render pipeline directly.
//  Every recovered function follows, in address order.
//

#import "DecompiledRuntime.h"

// ---- 0x00004000
void FUN_00004000(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_000102e8;
  DAT_000102e8 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_000102f0;
  DAT_000102f0 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_000102f8;
  DAT_000102f8 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_00010300;
  DAT_00010300 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_00010308;
  DAT_00010308 = 0;
  _objc_release(uVar1);
  return;
}

// ---- 0x0000405c
void FUN_0000405c(void)

{
  cfstringStruct *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  cfstringStruct *pcVar18;
  undefined8 uVar19;
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
  long lVar20;
  long lVar21;
  long lVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  long local_3b0;
  long local_378;
  undefined8 local_370;
  long lStack_368;
  long *local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  long lStack_328;
  long *local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  long lStack_2e8;
  long *local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  long lStack_2a8;
  long *local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  long lStack_268;
  long *local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined auStack_1f0 [128];
  undefined auStack_170 [128];
  long local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_0000c098;
  uVar6 = _objc_autoreleasePoolPush();
  objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_00010220);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  jbroot((NSString *)&cf__var_lib_dpkg_status);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  auVar29 = objc_msgSend_length();
  uVar10 = auVar29._8_8_;
  if (auVar29._0_8_ != 0) {
    objc_msgSend_addObject_(uVar7,uVar10,uVar8);
    uVar10 = extraout_x1;
  }
  uStack_248 = 0;
  local_250 = 0;
  uStack_238 = 0;
  uStack_240 = 0;
  lStack_268 = 0;
  local_270 = 0;
  uStack_258 = 0;
  local_260 = (long *)0x0;
  auVar29 = objc_msgSend_countByEnumeratingWithState_objects_count_
                      (&PTR__OBJC_CLASS___NSConstantArray_0000c7f0,uVar10,&local_270,&local_f0,0x10)
  ;
  if (auVar29._0_8_ != 0) {
    lVar26 = *local_260;
    do {
      uVar10 = auVar29._8_8_;
      lVar28 = 0;
      do {
        if (*local_260 != lVar26) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_0000c7f0);
          uVar10 = extraout_x1_00;
        }
        uVar24 = *(undefined8 *)(lStack_268 + lVar28 * 8);
        auVar30 = objc_msgSend_containsObject_(uVar7,uVar10,uVar24);
        uVar10 = auVar30._8_8_;
        if ((auVar30 & (undefined  [16])0x1) == (undefined  [16])0x0) {
          objc_msgSend_addObject_(uVar7,uVar10,uVar24);
          uVar10 = extraout_x1_01;
        }
        lVar28 = lVar28 + 1;
      } while (auVar29._0_8_ != lVar28);
      auVar29 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (&PTR__OBJC_CLASS___NSConstantArray_0000c7f0,uVar10,&local_270,&local_f0,
                           0x10);
    } while (auVar29._0_8_ != 0);
  }
  uStack_288 = 0;
  local_290 = 0;
  uStack_278 = 0;
  uStack_280 = 0;
  lStack_2a8 = 0;
  local_2b0 = 0;
  uStack_298 = 0;
  local_2a0 = (long *)0x0;
  auVar29 = _objc_retain(uVar7);
  uVar10 = auVar29._0_8_;
  auVar29 = objc_msgSend_countByEnumeratingWithState_objects_count_
                      (uVar10,auVar29._8_8_,&local_2b0,auStack_170,0x10);
  if (auVar29._0_8_ != 0) {
    lVar26 = *local_2a0;
    do {
      uVar7 = auVar29._8_8_;
      lVar28 = 0;
      do {
        if (*local_2a0 != lVar26) {
          _objc_enumerationMutation(uVar10);
          uVar7 = extraout_x1_02;
        }
        objc_msgSend_dataWithContentsOfFile_
                  (PTR__OBJC_CLASS___NSData_00010228,uVar7,*(undefined8 *)(lStack_2a8 + lVar28 * 8))
        ;
        uVar7 = _objc_retainAutoreleasedReturnValue();
        lVar9 = objc_msgSend_length();
        if (lVar9 != 0) {
          auVar30 = _objc_alloc(PTR__OBJC_CLASS___NSString_00010230);
          uVar24 = objc_msgSend_initWithData_encoding_(auVar30._0_8_,auVar30._8_8_,uVar7,4);
          lVar9 = objc_msgSend_length();
          if (lVar9 != 0) {
            _objc_release(uVar7);
            goto LAB_00004264;
          }
          _objc_release(uVar24);
        }
        _objc_release(uVar7);
        lVar28 = lVar28 + 1;
        uVar7 = extraout_x1_03;
      } while (auVar29._0_8_ != lVar28);
      auVar29 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar10,extraout_x1_03,&local_2b0,auStack_170,0x10);
    } while (auVar29._0_8_ != 0);
  }
  uVar24 = 0;
LAB_00004264:
  _objc_release(uVar10);
  _objc_release(uVar8);
  _objc_release(uVar10);
  auVar29 = objc_msgSend_length(uVar24);
  if (auVar29._0_8_ != 0) {
    objc_msgSend_stringByReplacingOccurrencesOfString_withString_
              (uVar24,auVar29._8_8_,&cf_format_s_,&cf_newline_s_);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar24);
    uStack_2c8 = 0;
    local_2d0 = 0;
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    lStack_2e8 = 0;
    local_2f0 = 0;
    uStack_2d8 = 0;
    local_2e0 = (long *)0x0;
    objc_msgSend_componentsSeparatedByString_(uVar10,extraout_x1_04,&cf_newline_s_);
    auVar29 = _objc_retainAutoreleasedReturnValue();
    uVar7 = auVar29._0_8_;
    lVar26 = objc_msgSend_countByEnumeratingWithState_objects_count_
                       (uVar7,auVar29._8_8_,&local_2f0,auStack_1f0,0x10);
    if (lVar26 != 0) {
      lVar28 = *local_2e0;
LAB_0000430c:
      lVar9 = 0;
LAB_00004310:
      if (*local_2e0 != lVar28) {
        _objc_enumerationMutation(uVar7);
      }
      FUN_00005508(*(undefined8 *)(lStack_2e8 + lVar9 * 8));
      auVar29 = _objc_retainAutoreleasedReturnValue();
      uVar8 = auVar29._0_8_;
      objc_msgSend_objectForKeyedSubscript_(uVar8,auVar29._8_8_,&cf_Package);
      auVar29 = _objc_retainAutoreleasedReturnValue();
      uVar11 = objc_msgSend_isEqualToString_(auVar29._0_8_,auVar29._8_8_,&cf_com_wkk_systembox);
      _objc_release(auVar29._0_8_);
      if ((uVar11 & 1) == 0) goto code_r0x0000436c;
      objc_msgSend_objectForKeyedSubscript_(uVar8,extraout_x1_05,&cf_Status);
      auVar29 = _objc_retainAutoreleasedReturnValue();
      iVar2 = objc_msgSend_isEqualToString_(auVar29._0_8_,auVar29._8_8_,&cf_installokinstalled);
      _objc_release(auVar29._0_8_);
      objc_msgSend_objectForKeyedSubscript_(uVar8,extraout_x1_07,&cf_Author);
      auVar29 = _objc_retainAutoreleasedReturnValue();
      iVar3 = objc_msgSend_isEqualToString_(auVar29._0_8_,auVar29._8_8_,&cf_wkk);
      _objc_release(auVar29._0_8_);
      objc_msgSend_objectForKeyedSubscript_(uVar8,extraout_x1_08,&cf_Maintainer);
      auVar29 = _objc_retainAutoreleasedReturnValue();
      iVar4 = objc_msgSend_isEqualToString_(auVar29._0_8_,auVar29._8_8_,&cf_wkk);
      _objc_release(auVar29._0_8_);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar10);
      if (((iVar2 != 0) && (iVar3 != 0)) && (iVar4 != 0)) {
        lStack_2e8 = 0;
        local_2f0 = 0;
        uStack_2d8 = 0;
        local_2e0 = (long *)0x0;
        uStack_2c8 = 0;
        local_2d0 = 0;
        uStack_2b8 = 0;
        uStack_2c0 = 0;
        jbroot((NSString *)&cf__etc_apt_sources_list_d);
        uVar10 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_00010248);
        auVar29 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_contentsOfDirectoryAtPath_error_(auVar29._0_8_,auVar29._8_8_,uVar10,0);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar29._0_8_);
        objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_00010220);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        lStack_2a8 = 0;
        local_2b0 = 0;
        uStack_298 = 0;
        local_2a0 = (long *)0x0;
        uStack_288 = 0;
        local_290 = 0;
        uStack_278 = 0;
        uStack_280 = 0;
        auVar29 = _objc_retain(uVar7);
        uVar7 = auVar29._0_8_;
        lVar26 = objc_msgSend_countByEnumeratingWithState_objects_count_
                           (uVar7,auVar29._8_8_,&local_2b0,&local_f0,0x10);
        if (lVar26 != 0) {
          lVar28 = *local_2a0;
          do {
            lVar9 = 0;
            do {
              if (*local_2a0 != lVar28) {
                _objc_enumerationMutation(uVar7);
              }
              uVar25 = *(undefined8 *)(lStack_2a8 + lVar9 * 8);
              auVar29 = objc_msgSend_length(uVar25);
              uVar24 = auVar29._8_8_;
              if (auVar29._0_8_ != 0) {
                objc_msgSend_stringByAppendingPathComponent_(uVar10,uVar24,uVar25);
                auVar29 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_addObject_(uVar8,auVar29._8_8_,auVar29._0_8_);
                _objc_release(auVar29._0_8_);
                uVar24 = extraout_x1_09;
              }
              lVar9 = lVar9 + 1;
            } while (lVar26 != lVar9);
            lVar26 = objc_msgSend_countByEnumeratingWithState_objects_count_
                               (uVar7,uVar24,&local_2b0,&local_f0,0x10);
          } while (lVar26 != 0);
        }
        _objc_release(uVar7);
        uVar24 = objc_msgSend_copy(uVar8);
        _objc_release(uVar8);
        _objc_release(uVar7);
        _objc_release(uVar10);
        auVar29 = objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar24,extraout_x1_10,&local_2f0,auStack_170,0x10);
        if (auVar29._0_8_ != 0) {
          uVar23 = 0;
          lVar26 = *local_2e0;
          do {
            uVar10 = auVar29._8_8_;
            lVar28 = 0;
            do {
              if (*local_2e0 != lVar26) {
                _objc_enumerationMutation(uVar24);
                uVar10 = extraout_x1_11;
              }
              objc_msgSend_stringWithContentsOfFile_encoding_error_
                        (PTR__OBJC_CLASS___NSString_00010230,uVar10,
                         *(undefined8 *)(lStack_2e8 + lVar28 * 8),4,0);
              uVar10 = _objc_retainAutoreleasedReturnValue();
              auVar30 = objc_msgSend_length();
              if (auVar30._0_8_ != 0) {
                objc_msgSend_stringByReplacingOccurrencesOfString_withString_
                          (uVar10,auVar30._8_8_,&cf_format_s_,&cf_newline_s_);
                uVar7 = _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar10);
                uStack_308 = 0;
                local_310 = 0;
                uStack_2f8 = 0;
                uStack_300 = 0;
                lStack_328 = 0;
                local_330 = 0;
                uStack_318 = 0;
                local_320 = (long *)0x0;
                objc_msgSend_componentsSeparatedByString_(uVar7,extraout_x1_12,&cf_newline_s_);
                auVar30 = _objc_retainAutoreleasedReturnValue();
                uVar10 = auVar30._0_8_;
                local_3b0 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                      (uVar10,auVar30._8_8_,&local_330,auStack_1f0,0x10);
                if (local_3b0 != 0) {
                  lVar9 = *local_320;
                  do {
                    lVar22 = 0;
                    do {
                      if (*local_320 != lVar9) {
                        _objc_enumerationMutation(uVar10);
                      }
                      FUN_00005508(*(undefined8 *)(lStack_328 + lVar22 * 8));
                      auVar30 = _objc_retainAutoreleasedReturnValue();
                      uVar8 = auVar30._0_8_;
                      objc_msgSend_objectForKeyedSubscript_(uVar8,auVar30._8_8_,&cf_Enabled);
                      uVar25 = _objc_retainAutoreleasedReturnValue();
                      objc_msgSend_lowercaseString();
                      uVar12 = _objc_retainAutoreleasedReturnValue();
                      _objc_release(uVar25);
                      auVar30 = objc_msgSend_isEqualToString_(uVar12,extraout_x1_13,&cf_no);
                      if ((auVar30 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                        auVar30 = objc_msgSend_isEqualToString_(uVar12,auVar30._8_8_,&cf_false);
                        if ((auVar30 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                          auVar30 = objc_msgSend_isEqualToString_(uVar12,auVar30._8_8_,&cf_0);
                          if ((auVar30 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                            uStack_348 = 0;
                            local_350 = 0;
                            uStack_338 = 0;
                            uStack_340 = 0;
                            lStack_368 = 0;
                            local_370 = 0;
                            uStack_358 = 0;
                            local_360 = (long *)0x0;
                            objc_msgSend_objectForKeyedSubscript_(uVar8,auVar30._8_8_,&cf_URIs);
                            uVar25 = _objc_retainAutoreleasedReturnValue();
                            objc_msgSend_whitespaceAndNewlineCharacterSet
                                      (PTR__OBJC_CLASS___NSCharacterSet_00010240);
                            auVar30 = _objc_retainAutoreleasedReturnValue();
                            objc_msgSend_componentsSeparatedByCharactersInSet_
                                      (uVar25,auVar30._8_8_,auVar30._0_8_);
                            uVar13 = _objc_retainAutoreleasedReturnValue();
                            _objc_release(auVar30._0_8_);
                            _objc_release(uVar25);
                            local_378 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                                  (uVar13,extraout_x1_14,&local_370,&local_270,0x10)
                            ;
                            if (local_378 != 0) {
                              lVar20 = *local_360;
                              do {
                                lVar21 = 0;
                                do {
                                  if (*local_360 != lVar20) {
                                    _objc_enumerationMutation(uVar13);
                                  }
                                  uVar27 = *(undefined8 *)(lStack_368 + lVar21 * 8);
                                  auVar30 = objc_msgSend_length(uVar27);
                                  uVar25 = auVar30._8_8_;
                                  if (auVar30._0_8_ != 0) {
                                    objc_msgSend_componentsWithString_
                                              (PTR__OBJC_CLASS___NSURLComponents_00010250,uVar25,
                                               uVar27);
                                    uVar25 = _objc_retainAutoreleasedReturnValue();
                                    objc_msgSend_scheme();
                                    uVar14 = _objc_retainAutoreleasedReturnValue();
                                    objc_msgSend_lowercaseString();
                                    uVar15 = _objc_retainAutoreleasedReturnValue();
                                    _objc_release(uVar14);
                                    objc_msgSend_host(uVar25);
                                    uVar14 = _objc_retainAutoreleasedReturnValue();
                                    objc_msgSend_lowercaseString();
                                    uVar16 = _objc_retainAutoreleasedReturnValue();
                                    _objc_release(uVar14);
                                    auVar30 = objc_msgSend_isEqualToString_
                                                        (uVar15,extraout_x1_15,&cf_http);
                                    if ((((auVar30 & (undefined  [16])0x1) == (undefined  [16])0x0)
                                        && (iVar2 = objc_msgSend_isEqualToString_
                                                              (uVar15,auVar30._8_8_,&cf_https),
                                           iVar2 == 0)) ||
                                       (lVar17 = objc_msgSend_length(uVar16), lVar17 == 0)) {
LAB_000049b4:
                                      _objc_release(uVar16);
                                      _objc_release(uVar15);
                                      _objc_release(uVar25);
                                      uVar25 = extraout_x1_19;
                                    }
                                    else {
                                      objc_msgSend_percentEncodedPath(uVar25);
                                      uVar14 = _objc_retainAutoreleasedReturnValue();
                                      objc_msgSend_lowercaseString();
                                      pcVar18 = (cfstringStruct *)
                                                _objc_retainAutoreleasedReturnValue();
                                      pcVar1 = &cf___;
                                      if (pcVar18 != (cfstringStruct *)0x0) {
                                        pcVar1 = pcVar18;
                                      }
                                      uVar19 = _objc_retain(pcVar1);
                                      _objc_release(pcVar18);
                                      _objc_release(uVar14);
                                      auVar30 = objc_msgSend_isEqualToString_
                                                          (uVar16,extraout_x1_16,&cf_axs_yourepo_com
                                                          );
                                      if ((auVar30 & (undefined  [16])0x1) != (undefined  [16])0x0)
                                      {
LAB_00004bf4:
                                        _objc_release(uVar19);
                                        _objc_release(uVar16);
                                        _objc_release(uVar15);
                                        _objc_release(uVar25);
LAB_00004c14:
                                        _objc_release(uVar13);
                                        _objc_release(uVar12);
                                        _objc_release(uVar8);
                                        _objc_release(uVar10);
                                        _objc_release(uVar7);
                                        goto LAB_00004c44;
                                      }
                                      iVar2 = objc_msgSend_isEqualToString_
                                                        (uVar16,auVar30._8_8_,&cf_axs66_github_io);
                                      if (iVar2 == 0) {
                                        _objc_release(uVar19);
                                        goto LAB_000049b4;
                                      }
                                      auVar30 = objc_msgSend_isEqualToString_
                                                          (uVar19,extraout_x1_17,&cf__pro);
                                      if ((auVar30 & (undefined  [16])0x1) != (undefined  [16])0x0)
                                      goto LAB_00004bf4;
                                      uVar11 = objc_msgSend_hasPrefix_
                                                         (uVar19,auVar30._8_8_,&cf__pro_);
                                      _objc_release(uVar19);
                                      _objc_release(uVar16);
                                      _objc_release(uVar15);
                                      _objc_release(uVar25);
                                      uVar25 = extraout_x1_18;
                                      if ((uVar11 & 1) != 0) goto LAB_00004c14;
                                    }
                                    objc_msgSend_componentsWithString_
                                              (PTR__OBJC_CLASS___NSURLComponents_00010250,uVar25,
                                               uVar27);
                                    uVar25 = _objc_retainAutoreleasedReturnValue();
                                    objc_msgSend_percentEncodedPath();
                                    pcVar18 = (cfstringStruct *)
                                              _objc_retainAutoreleasedReturnValue();
                                    pcVar1 = &cf___;
                                    if (pcVar18 != (cfstringStruct *)0x0) {
                                      pcVar1 = pcVar18;
                                    }
                                    uVar27 = _objc_retain(pcVar1);
                                    _objc_release(pcVar18);
                                    objc_msgSend_scheme(uVar25);
                                    uVar14 = _objc_retainAutoreleasedReturnValue();
                                    objc_msgSend_lowercaseString();
                                    auVar30 = _objc_retainAutoreleasedReturnValue();
                                    iVar2 = objc_msgSend_isEqualToString_
                                                      (auVar30._0_8_,auVar30._8_8_,&cf_https);
                                    if (iVar2 == 0) {
                                      uVar5 = 0;
                                    }
                                    else {
                                      objc_msgSend_host(uVar25);
                                      uVar15 = _objc_retainAutoreleasedReturnValue();
                                      objc_msgSend_lowercaseString();
                                      auVar31 = _objc_retainAutoreleasedReturnValue();
                                      iVar2 = objc_msgSend_isEqualToString_
                                                        (auVar31._0_8_,auVar31._8_8_,
                                                         &cf_wkkyy00_github_io);
                                      if (iVar2 == 0) {
                                        uVar5 = 0;
                                      }
                                      else {
                                        auVar32 = objc_msgSend_length(uVar27);
                                        if (auVar32._0_8_ == 0) {
                                          uVar5 = 1;
                                        }
                                        else {
                                          uVar5 = objc_msgSend_isEqualToString_
                                                            (uVar27,auVar32._8_8_,&cf__);
                                        }
                                      }
                                      _objc_release(auVar31._0_8_);
                                      _objc_release(uVar15);
                                    }
                                    _objc_release(auVar30._0_8_);
                                    _objc_release(uVar14);
                                    _objc_release(uVar27);
                                    _objc_release(uVar25);
                                    uVar23 = uVar5 | uVar23;
                                    uVar25 = extraout_x1_20;
                                  }
                                  lVar21 = lVar21 + 1;
                                } while (local_378 != lVar21);
                                local_378 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                                      (uVar13,uVar25,&local_370,&local_270,0x10);
                              } while (local_378 != 0);
                            }
                            _objc_release(uVar13);
                          }
                        }
                      }
                      _objc_release(uVar12);
                      _objc_release(uVar8);
                      lVar22 = lVar22 + 1;
                    } while (lVar22 != local_3b0);
                    local_3b0 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                          (uVar10,extraout_x1_21,&local_330,auStack_1f0,0x10);
                  } while (local_3b0 != 0);
                }
                _objc_release(uVar10);
                uVar10 = uVar7;
              }
              _objc_release(uVar10);
              lVar28 = lVar28 + 1;
              uVar10 = extraout_x1_22;
            } while (lVar28 != auVar29._0_8_);
            auVar29 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar24,extraout_x1_22,&local_2f0,auStack_170,0x10);
          } while (auVar29._0_8_ != 0);
          _objc_release(uVar24);
          if ((uVar23 & 1) == 0) goto LAB_00004c48;
          objc_msgSend_processInfo(PTR__OBJC_CLASS___NSProcessInfo_00010218);
          lVar26 = _objc_retainAutoreleasedReturnValue();
          if (lVar26 == 0) {
            local_f0 = 0;
            uStack_e8 = 0;
            local_e0 = 0;
          }
          else {
            objc_msgSend_operatingSystemVersion(lVar26);
          }
          _objc_release(lVar26);
          DAT_00010310 = local_f0 < 0xf;
          DAT_00010280 = 0x14;
          if (0xe < local_f0) {
            DAT_00010280 = 0x18;
          }
          DAT_00010288 = 0x60;
          if (local_f0 < 0x11) {
            DAT_00010288 = 0x58;
          }
          DAT_00010290 = DAT_00010288;
          if (local_f0 == 0x10) {
            DAT_00010298 = 0x110;
LAB_00004d20:
            iVar2 = _access("/var/mobile/Library/Accessibility/lg_force_hook",0);
            DAT_00010311 = iVar2 == 0;
          }
          else {
            DAT_00010298 = 0x108;
            if (local_f0 < 0x12 && local_f0 != 0xf) {
              DAT_00010298 = 0xf8;
            }
            if (0xfffffffffffffffd < local_f0 - 0x11U) goto LAB_00004d20;
            DAT_00010311 = true;
          }
          iVar2 = _SBXLSymResolverInit();
          if (iVar2 != 0) {
            lVar26 = _SBXLResolve_StopEncoders();
            lVar28 = _SBXLResolve_CAInternAtomWithCString();
            lVar9 = _SBXLResolve_AddFilter();
            DAT_00010318 = _SBXLSymMakeCallable(lVar26);
            DAT_00010320 = _SBXLSymMakeCallable(lVar28);
            DAT_00010328 = _SBXLSymMakeCallable(lVar9);
            if (((lVar26 != 0) && (lVar28 != 0)) && (lVar9 != 0)) {
              DAT_000102a0 = _SBXLResolve_MetalCmdBufOffset();
              DAT_00010330 = (undefined8 *)operator_new(0x28);
              DAT_00010330[1] = 0;
              *DAT_00010330 = 0;
              DAT_00010330[3] = 0;
              DAT_00010330[2] = 0;
              *(undefined4 *)(DAT_00010330 + 4) = 0x3f800000;
              FUN_00004dd4();
            }
          }
          goto LAB_00004c48;
        }
        goto LAB_00004c44;
      }
      goto LAB_00004c48;
    }
LAB_0000439c:
    _objc_release(uVar7);
    uVar24 = uVar10;
  }
LAB_00004c44:
  _objc_release(uVar24);
LAB_00004c48:
  _objc_autoreleasePoolPop(uVar6);
  if (*(long *)PTR____stack_chk_guard_0000c098 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
code_r0x0000436c:
  _objc_release(uVar8);
  lVar9 = lVar9 + 1;
  if (lVar26 == lVar9) goto code_r0x00004380;
  goto LAB_00004310;
code_r0x00004380:
  lVar26 = objc_msgSend_countByEnumeratingWithState_objects_count_
                     (uVar7,extraout_x1_06,&local_2f0,auStack_1f0,0x10);
  if (lVar26 == 0) goto LAB_0000439c;
  goto LAB_0000430c;
}

// ---- 0x00004dd4
void FUN_00004dd4(void)

{
  undefined uVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  dispatch_time_t dVar19;
  undefined8 *puVar20;
  long lVar21;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  uint uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  uint local_230 [2];
  ulong local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_0000c098;
  if (((DAT_0001033c & 1) != 0) ||
     (plVar9 = (long *)_SBXLResolve_FilterTableSlot(), plVar9 == (long *)0x0)) {
LAB_00005198:
    if (*(long *)PTR____stack_chk_guard_0000c098 == local_80) {
      return;
    }
    goto LAB_00005504;
  }
  if (*plVar9 == 0) {
    do {
      if (DAT_0001033c._1_1_ != '\0') {
        ClearExclusiveLocal();
        goto LAB_00005198;
      }
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(0x1033d,0x10);
      if (bVar3) {
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    dVar19 = _dispatch_time(0,250000000);
    _dispatch_get_global_queue(0x11,0);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar19,uVar10,&PTR___NSConcreteGlobalBlock_0000c1d0);
    if (*(long *)PTR____stack_chk_guard_0000c098 == local_80) {
      _objc_release(uVar10);
      return;
    }
    goto LAB_00005504;
  }
  _os_unfair_lock_lock(&DAT_00010338);
  if ((((DAT_0001033c & 1) == 0) && (DAT_00010320 != (code *)0x0)) && (DAT_00010328 != (code *)0x0))
  {
    uStack_a0 = 0;
    local_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_c0 = 0;
    local_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    uStack_e0 = 0;
    local_e8 = 0;
    uStack_d0 = 0;
    uStack_d8 = 0;
    uStack_100 = 0;
    local_108 = 0;
    uStack_f0 = 0;
    uStack_f8 = 0;
    uStack_120 = 0;
    local_128 = 0;
    uStack_110 = 0;
    uStack_118 = 0;
    local_88 = 0;
    uStack_130 = 0;
    local_138 = 0;
    uStack_140 = 0;
    local_148 = 0;
    uStack_150 = 0;
    local_158 = 0;
    uStack_160 = 0;
    local_168 = 0;
    uStack_170 = 0;
    local_178 = 0;
    uStack_180 = 0;
    local_188 = 0;
    uStack_190 = 0;
    local_198 = 0;
    uStack_1a0 = 0;
    local_1a8 = 0;
    uStack_1b0 = 0;
    local_1b8 = 0;
    uStack_1c0 = 0;
    local_1c8 = 0;
    uStack_1d0 = 0;
    local_1d8 = 0;
    uStack_1e0 = 0;
    local_1e8 = 0;
    uStack_1f0 = 0;
    local_1f8 = 0;
    uStack_200 = 0;
    local_208 = 0;
    uStack_210 = 0;
    local_218 = 0;
    uStack_220 = 0;
    local_228 = 0;
    objc_msgSend_stringWithUTF8String_
              (PTR__OBJC_CLASS___NSString_00010230,extraout_x1,"com.wkk.systembox.liquidglassdock");
    uVar10 = _objc_retainAutoreleasedReturnValue();
    lVar11 = objc_msgSend_length();
    pcVar4 = DAT_00010320;
    if (lVar11 != 0) {
      uVar12 = _objc_retainAutorelease(uVar10);
      objc_msgSend_UTF8String();
      uVar5 = (*pcVar4)();
      if (uVar5 != 0) {
        local_230[1] = 0x3eb33333;
        local_228 = local_228 & 0xffffffffffffff00;
        local_230[0] = uVar5;
        objc_msgSend_stringByAppendingString_(uVar12,extraout_x1_00,&cf__dark);
        uVar13 = _objc_retainAutoreleasedReturnValue();
        lVar11 = objc_msgSend_length();
        pcVar4 = DAT_00010320;
        if (lVar11 != 0) {
          uVar13 = _objc_retainAutorelease(uVar13);
          objc_msgSend_UTF8String();
          iVar6 = (*pcVar4)();
          if (iVar6 != 0) {
            local_228 = CONCAT44(iVar6,(undefined4)local_228);
            uStack_220 = CONCAT35(uStack_220._5_3_,0x13eb33333);
            _objc_release(uVar13);
            iVar6 = 0;
            uVar13 = extraout_x1_01;
            puVar23 = (undefined *)((long)&local_208 + 4);
            do {
              objc_msgSend_stringByAppendingFormat_(uVar12,uVar13,&cf__r_d);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = _objc_retain();
              lVar11 = objc_msgSend_length();
              pcVar4 = DAT_00010320;
              if (lVar11 == 0) {
LAB_000051dc:
                _objc_release(uVar13);
                goto LAB_00005200;
              }
              uVar14 = _objc_retainAutorelease(uVar13);
              objc_msgSend_UTF8String();
              iVar7 = (*pcVar4)();
              if (iVar7 == 0) goto LAB_000051dc;
              *(int *)(puVar23 + -0x14) = iVar7;
              *(float *)(puVar23 + -0x10) = (float)iVar6 * 0.03125;
              puVar23[-0xc] = 0;
              _objc_release(uVar14);
              objc_msgSend_stringByAppendingString_(uVar14,extraout_x1_02,&cf__dark);
              _objc_retainAutoreleasedReturnValue();
              uVar13 = _objc_retain();
              lVar11 = objc_msgSend_length();
              pcVar4 = DAT_00010320;
              if (lVar11 == 0) {
LAB_000051ec:
                _objc_release(uVar13);
                _objc_release(uVar13);
                uVar13 = uVar14;
                goto LAB_00005200;
              }
              uVar15 = _objc_retainAutorelease(uVar13);
              objc_msgSend_UTF8String();
              iVar7 = (*pcVar4)();
              if (iVar7 == 0) goto LAB_000051ec;
              *(int *)(puVar23 + -8) = iVar7;
              *(float *)(puVar23 + -4) = (float)iVar6 * 0.03125;
              *puVar23 = 1;
              _objc_release(uVar15);
              _objc_release(uVar15);
              _objc_release(uVar14);
              iVar6 = iVar6 + 1;
              uVar13 = extraout_x1_03;
              puVar23 = puVar23 + 0x18;
            } while (iVar6 != 0x11);
            uVar8 = (*DAT_00010320)("gaussianBlur");
            if (((uVar8 != 0) && (uVar5 != uVar8)) &&
               ((plVar9 = (long *)_SBXLResolve_GaussianCtxSlot(), plVar9 != (long *)0x0 &&
                (puVar16 = (undefined8 *)_SBXLSymStripData(*plVar9), DAT_00010340 = puVar16,
                puVar16 != (undefined8 *)0x0)))) {
              uVar17 = _SBXLResolve_RenderVtableSlot(puVar16,0x16);
              if (((int)(uint)uVar17 < 0) && (DAT_00010310 != '\0')) {
                iVar6 = _SBXLResolve_EdgeInfoVtableSlot(puVar16,0x16);
                uVar17 = (ulong)(iVar6 - 3U);
                if (iVar6 - 3U < 0x13) {
                  _SBXLSymStripCode(puVar16[uVar17]);
                  uVar18 = _SBXLSymAddressInQuartzCoreImage();
                  if ((uVar18 & 1) != 0) goto LAB_00005260;
                }
              }
              else if ((uint)uVar17 < 0x16) {
LAB_00005260:
                if (DAT_00010311 == '\0') {
                  DAT_00010348 = _SBXLSymMakeCallable(puVar16[uVar17 & 0xffffffff]);
                  if (DAT_00010348 != 0) {
                    puVar20 = (undefined8 *)_mmap(0,0xb0,3,&DAT_00001002,0xffffffff,0);
                    if (puVar20 != (undefined8 *)0xffffffffffffffff) {
                      uVar14 = puVar16[1];
                      uVar13 = *puVar16;
                      uVar15 = puVar16[2];
                      uVar25 = puVar16[5];
                      uVar24 = puVar16[4];
                      DAT_00010350 = puVar20;
                      puVar20[3] = puVar16[3];
                      puVar20[2] = uVar15;
                      puVar20[5] = uVar25;
                      puVar20[4] = uVar24;
                      puVar20[1] = uVar14;
                      *puVar20 = uVar13;
                      uVar14 = puVar16[7];
                      uVar13 = puVar16[6];
                      uVar24 = puVar16[9];
                      uVar15 = puVar16[8];
                      uVar25 = puVar16[10];
                      uVar27 = puVar16[0xd];
                      uVar26 = puVar16[0xc];
                      puVar20[0xb] = puVar16[0xb];
                      puVar20[10] = uVar25;
                      puVar20[0xd] = uVar27;
                      puVar20[0xc] = uVar26;
                      puVar20[7] = uVar14;
                      puVar20[6] = uVar13;
                      puVar20[9] = uVar24;
                      puVar20[8] = uVar15;
                      uVar14 = puVar16[0xf];
                      uVar13 = puVar16[0xe];
                      uVar24 = puVar16[0x11];
                      uVar15 = puVar16[0x10];
                      uVar25 = puVar16[0x12];
                      uVar27 = puVar16[0x15];
                      uVar26 = puVar16[0x14];
                      puVar20[0x13] = puVar16[0x13];
                      puVar20[0x12] = uVar25;
                      puVar20[0x15] = uVar27;
                      puVar20[0x14] = uVar26;
                      puVar20[0xf] = uVar14;
                      puVar20[0xe] = uVar13;
                      puVar20[0x11] = uVar24;
                      puVar20[0x10] = uVar15;
                      uVar13 = _SBXLSymStripCode(FUN_00005a90);
                      *DAT_00010350 = uVar13;
                      uVar13 = _SBXLSymStripCode(FUN_00005aac);
                      DAT_00010350[uVar17 & 0xffffffff] = uVar13;
                      plVar9 = (long *)_mmap(0,0x100,3,&DAT_00001002,0xffffffff,0);
                      DAT_00010358 = plVar9;
                      if (plVar9 != (long *)0xffffffffffffffff) {
                        *plVar9 = (long)DAT_00010350;
                        goto LAB_00005360;
                      }
                      _munmap(DAT_00010350,0xb0);
                    }
                    DAT_00010350 = (undefined8 *)0x0;
                  }
                }
                else {
                  uVar17 = FUN_00005868(*puVar16,puVar16[uVar17 & 0xffffffff]);
                  if ((uVar17 & 1) != 0) {
LAB_00005360:
                    lVar11 = 0;
                    do {
                      uVar5 = local_230[lVar11 * 3];
                      if (uVar5 == 0 || DAT_00010328 == (code *)0x0) goto LAB_00005208;
                      uVar8 = local_230[lVar11 * 3 + 1];
                      uVar1 = *(undefined *)((long)&local_228 + lVar11 * 0xc);
                      lVar21 = FUN_00005ed4(uVar5);
                      if (lVar21 == 0) {
                        if (0x23 < DAT_00010a08) goto LAB_00005208;
                        uVar22 = (uVar5 ^ uVar5 >> 0x10) * 0x7feb352d;
                        uVar22 = (uVar22 ^ uVar22 >> 0xf) * -0x7b935975;
                        uVar22 = uVar22 ^ uVar22 >> 0x10;
                        iVar6 = 0x80;
                        while( true ) {
                          lVar21 = (ulong)(uVar22 & 0x7f) * 0xc;
                          if (*(uint *)(&DAT_000103ac + lVar21) == 0) break;
                          uVar22 = (uVar22 & 0x7f) + 1;
                          iVar6 = iVar6 + -1;
                          if (iVar6 == 0) goto LAB_00005208;
                        }
                        *(uint *)(&DAT_000103b0 + lVar21) = uVar8;
                        (&DAT_000103b4)[lVar21] = uVar1;
                        *(uint *)(&DAT_000103ac + lVar21) = uVar5;
                        DAT_00010a08 = DAT_00010a08 + 1;
                        (*DAT_00010328)(uVar5,plVar9);
                      }
                      lVar11 = lVar11 + 1;
                    } while (lVar11 != 0x24);
                    _objc_release(uVar12);
                    DAT_0001033c = 1;
                    _os_unfair_lock_unlock(&DAT_00010338);
                    lVar11 = _MTLCreateSystemDefaultDevice();
                    if (lVar11 != 0) {
                      lVar21 = 0;
                      do {
                        FUN_000064a8(lVar11,*(undefined8 *)((long)&DAT_00008be0 + lVar21));
                        _objc_unsafeClaimAutoreleasedReturnValue();
                        lVar21 = lVar21 + 8;
                      } while (lVar21 != 0x38);
                    }
                    _objc_release(lVar11);
                    uVar10 = _CFNotificationCenterGetDarwinNotifyCenter();
                    if (*(long *)PTR____stack_chk_guard_0000c098 == local_80) {
                      _CFNotificationCenterPostNotification
                                (uVar10,&cf_com_wkk_systembox_liquidglass_ParametersReloaded,0,0,1);
                      return;
                    }
                    goto LAB_00005504;
                  }
                }
              }
            }
            goto LAB_00005208;
          }
        }
LAB_00005200:
        _objc_release(uVar13);
      }
    }
LAB_00005208:
    _objc_release(uVar10);
  }
  if (*(long *)PTR____stack_chk_guard_0000c098 == local_80) {
    _os_unfair_lock_unlock(&DAT_00010338);
    return;
  }
LAB_00005504:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

// ---- 0x00005508
void FUN_00005508(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined auVar16 [16];
  undefined auVar17 [16];
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
  
  local_70 = *(long *)PTR____stack_chk_guard_0000c098;
  uVar4 = _objc_retain();
  objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_00010238);
  auVar16 = _objc_retainAutoreleasedReturnValue();
  uVar5 = auVar16._0_8_;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  objc_msgSend_componentsSeparatedByString_(uVar4,auVar16._8_8_,&cf_newline_s_);
  auVar16 = _objc_retainAutoreleasedReturnValue();
  uVar6 = auVar16._0_8_;
  lVar7 = objc_msgSend_countByEnumeratingWithState_objects_count_
                    (uVar6,auVar16._8_8_,&local_130,auStack_f0,0x10);
  if (lVar7 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    lVar13 = *local_120;
    do {
      lVar12 = 0;
      uVar15 = uVar14;
      do {
        if (*local_120 != lVar13) {
          _objc_enumerationMutation(uVar6);
        }
        uVar11 = *(undefined8 *)(lStack_128 + lVar12 * 8);
        auVar16 = objc_msgSend_length(uVar11);
        uVar8 = auVar16._8_8_;
        uVar14 = uVar15;
        if (auVar16._0_8_ != 0) {
          auVar16 = objc_msgSend_hasPrefix_(uVar11,uVar8,&cf_space_s_);
          if (((auVar16 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
             (iVar3 = objc_msgSend_hasPrefix_(uVar11,auVar16._8_8_,&cf_tab_s_), iVar3 == 0)) {
            auVar16 = objc_msgSend_rangeOfString_(uVar11,extraout_x1,&cf__);
            lVar9 = auVar16._0_8_;
            if (lVar9 == 0x7fffffffffffffff) {
              uVar14 = 0;
            }
            else {
              objc_msgSend_substringToIndex_(uVar11,auVar16._8_8_,lVar9);
              auVar17 = _objc_retainAutoreleasedReturnValue();
              uVar8 = auVar17._0_8_;
              objc_msgSend_substringFromIndex_(uVar11,auVar17._8_8_,lVar9 + auVar16._8_8_);
              uVar11 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_whitespaceCharacterSet(PTR__OBJC_CLASS___NSCharacterSet_00010240);
              auVar16 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_stringByTrimmingCharactersInSet_(uVar11,auVar16._8_8_,auVar16._0_8_);
              pcVar10 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
              _objc_release(auVar16._0_8_);
              _objc_release(uVar11);
              auVar16 = objc_msgSend_length(uVar8);
              if (auVar16._0_8_ != 0) {
                pcVar1 = &cf___;
                if (pcVar10 != (cfstringStruct *)0x0) {
                  pcVar1 = pcVar10;
                }
                objc_msgSend_setObject_forKeyedSubscript_(uVar5,auVar16._8_8_,pcVar1,uVar8);
                uVar8 = _objc_retain(uVar8);
                uVar15 = uVar8;
                goto LAB_000056a8;
              }
LAB_000056b0:
              _objc_release(pcVar10);
              uVar15 = uVar8;
            }
            _objc_release(uVar15);
            uVar8 = extraout_x1_01;
          }
          else {
            auVar16 = objc_msgSend_length(uVar15);
            uVar8 = auVar16._8_8_;
            if (auVar16._0_8_ != 0) {
              objc_msgSend_whitespaceCharacterSet(PTR__OBJC_CLASS___NSCharacterSet_00010240);
              auVar16 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_stringByTrimmingCharactersInSet_(uVar11,auVar16._8_8_,auVar16._0_8_);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_release(auVar16._0_8_);
              puVar2 = PTR__OBJC_CLASS___NSString_00010230;
              objc_msgSend_objectForKeyedSubscript_(uVar5,extraout_x1_00,uVar15);
              auVar16 = _objc_retainAutoreleasedReturnValue();
              pcVar10 = auVar16._0_8_;
              objc_msgSend_stringWithFormat_(puVar2,auVar16._8_8_,&cf_____);
              auVar16 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setObject_forKeyedSubscript_(uVar5,auVar16._8_8_,auVar16._0_8_,uVar15);
              uVar14 = auVar16._0_8_;
LAB_000056a8:
              _objc_release(uVar14);
              uVar14 = uVar15;
              goto LAB_000056b0;
            }
          }
        }
        lVar12 = lVar12 + 1;
        uVar15 = uVar14;
      } while (lVar7 != lVar12);
      lVar7 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar6,uVar8,&local_130,auStack_f0,0x10);
    } while (lVar7 != 0);
  }
  _objc_release(uVar6);
  _objc_release(uVar14);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_0000c098 == local_70) {
    _objc_autoreleaseReturnValue(uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

// ---- 0x00005858
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005858(void)

{
  ram0x0001033d = 0;
  FUN_00004dd4();
  return;
}

// ---- 0x00005868
ulong FUN_00005868(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_50;
  undefined8 local_48;
  
  pcVar3 = (code *)_dlsym(0xfffffffffffffffe,"MSHookFunction");
  if (pcVar3 == (code *)0x0) {
    if (((DAT_000103a0 & 1) == 0) && (iVar2 = ___cxa_guard_acquire(&DAT_000103a0), iVar2 != 0)) {
      DAT_00010378 = _jbroot("/usr/lib/libellekit.dylib");
      DAT_00010380 = _jbroot("/usr/lib/libsubstrate.dylib");
      DAT_00010388 = _jbroot("/Library/Frameworks/CydiaSubstrate.framework/CydiaSubstrate");
      DAT_00010390 = "libellekit.dylib";
      DAT_00010398 = "libsubstrate.dylib";
      ___cxa_guard_release(&DAT_000103a0);
    }
    lVar8 = 0;
    do {
      lVar7 = _dlopen(*(undefined8 *)((long)&DAT_00010378 + lVar8),10);
      if (lVar7 == 0) {
        _dlerror();
      }
      else {
        pcVar3 = (code *)_dlsym(lVar7,"MSHookFunction");
        if (pcVar3 != (code *)0x0) goto LAB_0000589c;
      }
      lVar8 = lVar8 + 8;
    } while (lVar8 != 0x28);
    _dlerror();
    uVar6 = 0;
    DAT_00010360 = (code *)0x0;
  }
  else {
LAB_0000589c:
    local_48 = 0;
    DAT_00010360 = pcVar3;
    uVar4 = _SBXLSymStripCode(param_1);
    uVar5 = _SBXLSymStripCode(FUN_00005b64);
    (*DAT_00010360)(uVar4,uVar5,&local_48);
    uVar6 = _SBXLSymMakeCallable(local_48);
    DAT_00010368 = uVar6;
    if (uVar6 != 0) {
      local_50 = 0;
      uVar4 = _SBXLSymStripCode(param_2);
      pcVar3 = FUN_00005d70;
      if (DAT_00010310 != '\0') {
        pcVar3 = FUN_00005bec;
      }
      uVar5 = _SBXLSymStripCode(pcVar3);
      (*DAT_00010360)(uVar4,uVar5,&local_50);
      cVar1 = DAT_00010310;
      lVar7 = _SBXLSymMakeCallable(local_50);
      lVar8 = lVar7;
      if (cVar1 != '\0') {
        lVar8 = DAT_00010348;
        DAT_00010370 = lVar7;
      }
      DAT_00010348 = lVar8;
      lVar8 = DAT_00010348;
      if (DAT_00010310 != '\0') {
        lVar8 = DAT_00010370;
      }
      uVar6 = (ulong)(lVar8 != 0);
    }
  }
  return uVar6;
}

// ---- 0x00005a90
undefined8 FUN_00005a90(void)

{
  if ((DAT_00010a04 & 1) == 0) {
    DAT_00010a04 = 1;
  }
  return 0;
}

// ---- 0x00005aac
void FUN_00005aac(undefined4 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9_00,undefined8 param_9)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_3 + DAT_00010280);
  }
  uVar2 = FUN_00005ed4(uVar1);
  FUN_00005f3c(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9_00,param_9,
               uVar2);
  return;
}

// ---- 0x00005b64
undefined8 FUN_00005b64(undefined8 param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar5;
  long lVar4;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + DAT_00010280);
  }
  lVar4 = FUN_00005ed4(uVar3);
  if (lVar4 == 0) {
    if (DAT_00010368 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00005bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*DAT_00010368)(param_1,param_2);
      return uVar5;
    }
  }
  else {
    do {
      if (DAT_000103a8 != 0) {
        ClearExclusiveLocal();
        return 0;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x103a8,0x10);
      if (bVar2) {
        DAT_000103a8 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return 0;
}

// ---- 0x00005bec
void FUN_00005bec(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x8;
  long lVar4;
  
  if (param_5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_5 + DAT_00010280);
  }
  lVar4 = FUN_00005ed4(uVar3);
  if (lVar4 == 0) {
    if (DAT_00010370 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00005ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00010370)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10,param_11);
      return;
    }
  }
  else {
    do {
      if (DAT_000109ac != 0) {
        ClearExclusiveLocal();
        break;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x109ac,0x10);
      if (bVar2) {
        DAT_000109ac = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    puVar5 = (undefined *)(*(code *)PTR___tlv_bootstrap_000102a8)();
    *puVar5 = 1;
    puVar6 = (undefined8 *)(*(code *)PTR___tlv_bootstrap_000102c0)();
    *puVar6 = param_3;
    FUN_00005f3c(param_1,param_4,param_5,param_6,param_7,param_8,0,param_9,param_10,param_11,
                 extraout_x8);
    *puVar5 = 0;
  }
  return;
}

// ---- 0x00005d70
void FUN_00005d70(undefined4 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9_00,undefined8 param_10,undefined8 param_9)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  long lVar4;
  
  if (param_4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_4 + DAT_00010280);
  }
  lVar4 = FUN_00005ed4(uVar3);
  if (lVar4 == 0) {
    do {
      if (DAT_00010a00 != 0) {
        ClearExclusiveLocal();
        break;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x10a00,0x10);
      if (bVar2) {
        DAT_00010a00 = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    if (DAT_00010348 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00005ed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00010348)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9_00,
                      param_10);
      return;
    }
  }
  else {
    do {
      if (DAT_000109fc != 0) {
        ClearExclusiveLocal();
        break;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x109fc,0x10);
      if (bVar2) {
        DAT_000109fc = 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
    FUN_00005f3c(param_1,param_3,param_4,param_5,param_6,param_7,param_8,param_9_00,param_10,param_9
                 ,lVar4);
  }
  return;
}

// ---- 0x00005ed4
undefined8 * FUN_00005ed4(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 != 0) {
    uVar1 = (param_1 ^ param_1 >> 0x10) * 0x7feb352d;
    uVar1 = (uVar1 ^ uVar1 >> 0xf) * -0x7b935975;
    uVar1 = uVar1 ^ uVar1 >> 0x10;
    iVar2 = 0x80;
    do {
      uVar3 = (uint)*(undefined8 *)(&DAT_000103ac + (ulong)(uVar1 & 0x7f) * 0xc);
      if (uVar3 == 0) {
        return (undefined8 *)0x0;
      }
      if (uVar3 == param_1) {
        return (undefined8 *)(&DAT_000103ac + (ulong)(uVar1 & 0x7f) * 0xc);
      }
      uVar1 = (uVar1 & 0x7f) + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return (undefined8 *)0x0;
}

// ---- 0x00005f3c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 long param_10)

{
  undefined4 uVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  undefined auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined auVar17 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  
  if ((((param_4 != 0) && (param_5 != 0)) && (-1 < DAT_000102a0)) &&
     ((-1 < DAT_00010288 &&
      (lVar10 = *(long *)(param_5 + DAT_00010288),
      *(long *)(param_4 + DAT_000102a0) != 0 && lVar10 != 0)))) {
    objc_msgSend_device(lVar10);
    lVar4 = _objc_unsafeClaimAutoreleasedReturnValue();
    uVar5 = objc_msgSend_width(lVar10);
    uVar6 = objc_msgSend_height(lVar10);
    if ((lVar4 != 0 && uVar5 != 0) && uVar6 != 0) {
      fVar14 = DAT_00008bd0;
      bStack_80 = DAT_00008bb0;
      bStack_7f = UNK_00008bb1;
      bStack_7e = UNK_00008bb2;
      bStack_7d = UNK_00008bb3;
      bStack_7c = UNK_00008bb4;
      bStack_7b = UNK_00008bb5;
      bStack_7a = UNK_00008bb6;
      bStack_79 = UNK_00008bb7;
      if (param_10 != 0) {
        auVar13 = NEON_cmeq(ZEXT116(*(byte *)(param_10 + 8)),ZEXT816(0),1);
        bVar12 = auVar13[0];
        fVar14 = *(float *)(param_10 + 4);
        bStack_80 = DAT_00008bb0 & bVar12;
        bStack_7f = UNK_00008bb1 & bVar12;
        bStack_7e = UNK_00008bb2 & bVar12;
        bStack_7d = UNK_00008bb3 & bVar12;
        bStack_7c = UNK_00008bb4 & bVar12;
        bStack_7b = UNK_00008bb5 & bVar12;
        bStack_7a = UNK_00008bb6 & bVar12;
        bStack_79 = UNK_00008bb7 & bVar12;
      }
      fVar15 = (float)(unkuint9)uVar6;
      fVar16 = (float)NEON_fminnm((float)(unkuint9)uVar5,fVar15);
      uStack_a8 = 0;
      local_b0 = CONCAT17((char)((uint)fVar15 >> 0x18),
                          CONCAT16((char)((uint)fVar15 >> 0x10),
                                   CONCAT15((char)((uint)fVar15 >> 8),
                                            CONCAT14(SUB41(fVar15,0),(float)(unkuint9)uVar5))));
      uVar1 = NEON_fminnm(fVar16 * DAT_00008bd4,0x42080000);
      local_a0 = CONCAT44(uVar1,fVar16 * fVar14);
      uStack_88 = 0;
      local_90 = _UNK_00008bc8;
      uStack_98 = _DAT_00008bc0;
      FUN_00006418(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
      if (((-1 < DAT_00010298) && (0xffff < *(ulong *)(param_4 + DAT_00010298))) &&
         ((-1 < DAT_00010290 &&
          (lVar11 = *(long *)(*(ulong *)(param_4 + DAT_00010298) + DAT_00010290), lVar11 != 0)))) {
        lVar9 = *(long *)(param_4 + DAT_000102a0);
        uVar7 = objc_msgSend_width(lVar11);
        bVar2 = uVar5 - uVar7 < 9;
        if (uVar5 <= uVar7) {
          bVar2 = uVar7 - uVar5 < 0x41;
        }
        if (bVar2) {
          uVar5 = objc_msgSend_height(lVar11);
          bVar2 = 8 < uVar6 - uVar5;
          if (uVar6 <= uVar5) {
            bVar2 = 0x40 < uVar5 - uVar6;
          }
        }
        else {
          bVar2 = true;
        }
        if (lVar9 != 0) {
          objc_msgSend_device(lVar11);
          lVar9 = _objc_retainAutoreleasedReturnValue();
          if ((bool)(lVar9 != lVar4 | bVar2)) {
            _objc_release();
            return;
          }
          uVar3 = objc_msgSend_usage(lVar11);
          _objc_release(lVar4);
          if ((uVar3 >> 2 & 1) != 0) {
            uVar5 = objc_msgSend_width(lVar11);
            uVar6 = objc_msgSend_height(lVar11);
            uStack_a8 = CONCAT44((float)(unkuint9)uVar6,(float)(unkuint9)uVar5);
            uVar8 = objc_msgSend_pixelFormat(lVar11);
            FUN_000064a8(lVar4,uVar8);
            lVar4 = _objc_retainAutoreleasedReturnValue();
            if ((lVar4 != 0) && (DAT_00010318 != (code *)0x0)) {
              (*DAT_00010318)(param_4);
              lVar9 = *(long *)(param_4 + DAT_000102a0);
              if (lVar9 != 0) {
                objc_msgSend_renderPassDescriptor
                          (PTR__OBJC_CLASS___MTLRenderPassDescriptor_00010258);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_colorAttachments();
                auVar13 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_objectAtIndexedSubscript_(auVar13._0_8_,auVar13._8_8_,0);
                auVar17 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setTexture_(auVar17._0_8_,auVar17._8_8_,lVar11);
                _objc_release(auVar17._0_8_);
                _objc_release(auVar13._0_8_);
                objc_msgSend_colorAttachments(uVar8);
                auVar13 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_objectAtIndexedSubscript_(auVar13._0_8_,auVar13._8_8_,0);
                auVar17 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setLoadAction_(auVar17._0_8_,auVar17._8_8_,0);
                _objc_release(auVar17._0_8_);
                _objc_release(auVar13._0_8_);
                objc_msgSend_colorAttachments(uVar8);
                auVar13 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_objectAtIndexedSubscript_(auVar13._0_8_,auVar13._8_8_,0);
                auVar17 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_setStoreAction_(auVar17._0_8_,auVar17._8_8_,1);
                _objc_release(auVar17._0_8_);
                _objc_release(auVar13._0_8_);
                objc_msgSend_renderCommandEncoderWithDescriptor_(lVar9,extraout_x1,uVar8);
                auVar13 = _objc_retainAutoreleasedReturnValue();
                lVar11 = auVar13._0_8_;
                if (lVar11 != 0) {
                  objc_msgSend_setRenderPipelineState_(lVar11,auVar13._8_8_,lVar4);
                  objc_msgSend_setFragmentTexture_atIndex_(lVar11,extraout_x1_00,lVar10,0);
                  objc_msgSend_setFragmentBytes_length_atIndex_
                            (lVar11,extraout_x1_01,&local_b0,0x40,0);
                  objc_msgSend_drawPrimitives_vertexStart_vertexCount_(lVar11,extraout_x1_02,3,0,3);
                  objc_msgSend_endEncoding(lVar11);
                }
                _objc_release(lVar11);
                _objc_release(uVar8);
              }
            }
            _objc_release(lVar4);
          }
        }
      }
      return;
    }
  }
  FUN_00006418(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

// ---- 0x00006418
void FUN_00006418(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  
  pcVar1 = (char *)(*(code *)PTR___tlv_bootstrap_000102a8)();
  if (*pcVar1 != '\0' && DAT_00010370 != 0) {
    puVar2 = (undefined8 *)(*(code *)PTR___tlv_bootstrap_000102c0)();
                    /* WARNING: Could not recover jumptable at 0x0000649c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(extraout_d0_00,0,*puVar2,extraout_x8_00);
    return;
  }
  if (DAT_00010348 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0000646c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_00010348)(extraout_d0,0,extraout_x8);
    return;
  }
  return;
}

// ---- 0x000064a8
void FUN_000064a8(long param_1,undefined *param_2)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  long lVar8;
  long lVar9;
  undefined auVar10 [16];
  undefined auVar11 [16];
  undefined *local_80;
  undefined8 local_78;
  undefined auStack_70 [8];
  undefined **local_68;
  
  bVar2 = false;
  lVar9 = 0xffffffff;
  switch(param_2) {
  case (undefined *)0x228:
    lVar9 = 2;
    break;
  case (undefined *)0x229:
    lVar9 = 3;
    break;
  case (undefined *)0x22a:
    lVar9 = 4;
    break;
  case (undefined *)0x22b:
    lVar9 = 5;
    break;
  default:
    if ((qword *)param_2 == &segment_command_00000020.filesize) {
      lVar9 = 0;
    }
    else if (param_2 == (undefined *)((long)&segment_command_00000020.filesize + 1)) {
      lVar9 = 1;
    }
    else {
      if (param_2 != section_00000068.sectname + 0xb) goto switchD_00006508_caseD_4;
      lVar9 = 6;
    }
    break;
  case (undefined *)0xbad1abe1:
    goto switchD_00006508_caseD_4;
  }
  if ((DAT_000109f0 == param_1) && ((&DAT_000109b0)[lVar9] != 0)) {
    lVar8 = _objc_retain();
  }
  else {
    bVar2 = true;
switchD_00006508_caseD_4:
    _os_unfair_lock_lock(&DAT_000109e8);
    if (DAT_00010300 != 0 && DAT_00010300 != param_1) {
      lVar8 = 0;
      DAT_000109f0 = 0;
      do {
        *(undefined8 *)((long)&DAT_000109b0 + lVar8) = 0;
        lVar5 = DAT_000102e8;
        lVar8 = lVar8 + 8;
      } while (lVar8 != 0x38);
      DAT_000102e8 = 0;
      _objc_release(lVar5);
      lVar8 = DAT_000102f0;
      DAT_000102f0 = 0;
      _objc_release(lVar8);
      lVar8 = DAT_000102f8;
      DAT_000102f8 = 0;
      _objc_release(lVar8);
      lVar8 = DAT_00010300;
      DAT_00010300 = 0;
      _objc_release(lVar8);
      DAT_000109f8 = '\0';
      if (DAT_00010330 != 0) {
        FUN_00006990();
      }
    }
    if (((DAT_000102e8 == 0) || (DAT_000102f0 == 0)) || (DAT_000102f8 == 0)) {
      if (DAT_000109f8 == '\x01') {
        _os_unfair_lock_unlock(&DAT_000109e8);
        lVar8 = 0;
        goto LAB_0000696c;
      }
      DAT_000109f8 = '\x01';
      jbroot((NSString *)&cf__Library_ApplicationSupport_SystemBoxLiquidGlassDock_DockGlass_metallib
            );
      auVar10 = _objc_retainAutoreleasedReturnValue();
      uVar3 = auVar10._0_8_;
      local_68 = (undefined **)0x0;
      lVar8 = objc_msgSend_newLibraryWithFile_error_(param_1,auVar10._8_8_,uVar3,&local_68);
      auVar10 = _objc_retain(local_68);
      if (lVar8 == 0) {
        _objc_retainAutorelease(uVar3);
        objc_msgSend_UTF8String();
        objc_msgSend_localizedDescription(auVar10._0_8_);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = _objc_retainAutorelease();
        objc_msgSend_UTF8String();
        _objc_release(uVar4);
        _os_unfair_lock_unlock(&DAT_000109e8);
        bVar1 = false;
      }
      else {
        auVar11 = objc_msgSend_newFunctionWithName_(lVar8,auVar10._8_8_,&cf_liquidGlassVertex);
        lVar5 = auVar11._0_8_;
        lVar6 = objc_msgSend_newFunctionWithName_(lVar8,auVar11._8_8_,&cf_liquidGlassFragment);
        bVar1 = lVar5 != 0 && lVar6 != 0;
        if (lVar5 != 0 && lVar6 != 0) {
          _objc_storeStrong(&DAT_000102e8,lVar8);
          _objc_storeStrong(&DAT_000102f0,lVar5);
          _objc_storeStrong(&DAT_000102f8,lVar6);
          _objc_storeStrong(&DAT_00010300,param_1);
        }
        _objc_retainAutorelease(uVar3);
        objc_msgSend_UTF8String();
        _os_unfair_lock_unlock(&DAT_000109e8);
        _objc_release(lVar6);
        _objc_release(lVar5);
      }
      _objc_release(lVar8);
      _objc_release(auVar10._0_8_);
      _objc_release(uVar3);
    }
    else {
      _os_unfair_lock_unlock(&DAT_000109e8);
      bVar1 = true;
    }
    lVar8 = 0;
    if ((bVar1) && (DAT_00010330 != 0)) {
      _os_unfair_lock_lock(&DAT_000109e8);
      local_68 = (undefined **)param_2;
      lVar8 = FUN_00006a20(DAT_00010330,&local_68);
      if (lVar8 == 0) {
        auVar10 = _objc_opt_new(PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_00010260);
        uVar3 = auVar10._0_8_;
        objc_msgSend_setVertexFunction_(uVar3,auVar10._8_8_,DAT_000102f0);
        objc_msgSend_setFragmentFunction_(uVar3,extraout_x1,DAT_000102f8);
        objc_msgSend_colorAttachments(uVar3);
        auVar10 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_objectAtIndexedSubscript_(auVar10._0_8_,auVar10._8_8_,0);
        auVar11 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setPixelFormat_(auVar11._0_8_,auVar11._8_8_,param_2);
        _objc_release(auVar11._0_8_);
        _objc_release(auVar10._0_8_);
        local_78 = 0;
        lVar8 = objc_msgSend_newRenderPipelineStateWithDescriptor_error_
                          (param_1,extraout_x1_00,uVar3,&local_78);
        uVar4 = _objc_retain(local_78);
        if (lVar8 == 0) {
          objc_msgSend_localizedDescription(uVar4);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = _objc_retainAutorelease();
          objc_msgSend_UTF8String();
          _objc_release(uVar7);
        }
        else {
          local_80 = param_2;
          local_68 = &local_80;
          lVar5 = FUN_00006ad4(DAT_00010330,&local_80,&DAT_00008bdc,&local_68,auStack_70);
          _objc_storeStrong(lVar5 + 0x18,lVar8);
          if (bVar2) {
            uVar7 = extraout_x1_01;
            if (DAT_00010308 == 0) {
              lVar6 = _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_00010220);
              lVar5 = DAT_00010308;
              DAT_00010308 = lVar6;
              _objc_release(lVar5);
              uVar7 = extraout_x1_02;
            }
            objc_msgSend_addObject_(DAT_00010308,uVar7,lVar8);
            (&DAT_000109b0)[lVar9] = lVar8;
            DAT_000109f0 = param_1;
          }
        }
        _os_unfair_lock_unlock(&DAT_000109e8);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      else {
        lVar8 = _objc_retain(*(undefined8 *)(lVar8 + 0x18));
        _os_unfair_lock_unlock(&DAT_000109e8);
      }
    }
  }
LAB_0000696c:
  _objc_autoreleaseReturnValue(lVar8);
  return;
}

// ---- 0x00006990
void FUN_00006990(long *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1[3] != 0) {
    FUN_000069e4(param_1,param_1[2]);
    param_1[2] = 0;
    lVar1 = param_1[1];
    if (lVar1 != 0) {
      lVar2 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar2 * 8) = 0;
        lVar2 = lVar2 + 1;
      } while (lVar1 != lVar2);
    }
    param_1[3] = 0;
  }
  return;
}

// ---- 0x000069e4
void FUN_000069e4(undefined8 param_1,void **param_2)

{
  void *pvVar1;
  
  if (param_2 != (void **)0x0) {
    do {
      pvVar1 = *param_2;
      _objc_release(param_2[3]);
      operator_delete(param_2);
      param_2 = (void **)pvVar1;
    } while (pvVar1 != (void *)0x0);
  }
  return;
}

// ---- 0x00006a20
long * FUN_00006a20(long *param_1,ulong *param_2)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long **pplVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  
  uVar3 = param_1[1];
  if (uVar3 != 0) {
    uVar4 = *param_2;
    uVar9 = NEON_cnt(uVar3,1);
    uVar8 = NEON_uaddlv(uVar9,1);
    uVar10 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8);
    if ((uVar10 & 0xffffffff) < 2) {
      uVar5 = uVar3 - 1 & uVar4;
    }
    else {
      uVar5 = uVar4;
      if (uVar3 <= uVar4) {
        uVar5 = 0;
        if (uVar3 != 0) {
          uVar5 = uVar4 / uVar3;
        }
        uVar5 = uVar4 - uVar5 * uVar3;
      }
    }
    pplVar6 = *(long ***)(*param_1 + uVar5 * 8);
    if (pplVar6 != (long **)0x0) {
      plVar2 = *pplVar6;
      if (plVar2 != (long *)0x0) {
        do {
          uVar7 = plVar2[1];
          if (uVar7 == uVar4) {
            if (plVar2[2] == uVar4) {
              return plVar2;
            }
          }
          else {
            if ((uVar10 & 0xffffffff) < 2) {
              uVar7 = uVar7 & uVar3 - 1;
            }
            else if (uVar3 <= uVar7) {
              uVar1 = 0;
              if (uVar3 != 0) {
                uVar1 = uVar7 / uVar3;
              }
              uVar7 = uVar7 - uVar1 * uVar3;
            }
            if (uVar7 != uVar5) {
              return (long *)0x0;
            }
          }
          plVar2 = (long *)*plVar2;
        } while (plVar2 != (long *)0x0);
      }
      return plVar2;
    }
  }
  return (long *)0x0;
}

// ---- 0x00006ad4
undefined  [16] FUN_00006ad4(long *param_1,long **param_2,undefined8 param_3,undefined8 *param_4)

{
  long **pplVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long **pplVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *unaff_x24;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  
  plVar8 = *param_2;
  plVar7 = (long *)param_1[1];
  if (plVar7 != (long *)0x0) {
    uVar10 = NEON_cnt(plVar7,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar2 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x24 = (long *)((ulong)((long)plVar7 + -1) & (ulong)plVar8);
    }
    else {
      unaff_x24 = plVar8;
      if (plVar7 <= plVar8) {
        uVar4 = 0;
        if (plVar7 != (long *)0x0) {
          uVar4 = (ulong)plVar8 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)plVar8 - uVar4 * (long)plVar7);
      }
    }
    pplVar1 = *(long ***)(*param_1 + (long)unaff_x24 * 8);
    if (pplVar1 != (long **)0x0) {
      do {
        pplVar1 = (long **)*pplVar1;
        if (pplVar1 == (long **)0x0) goto LAB_00006ba0;
        plVar6 = pplVar1[1];
        if (plVar6 != plVar8) {
          if (uVar2 < 2) {
            plVar6 = (long *)((ulong)plVar6 & (ulong)((long)plVar7 + -1));
          }
          else if (plVar7 <= plVar6) {
            uVar4 = 0;
            if (plVar7 != (long *)0x0) {
              uVar4 = (ulong)plVar6 / (ulong)plVar7;
            }
            plVar6 = (long *)((long)plVar6 - uVar4 * (long)plVar7);
          }
          if (plVar6 != unaff_x24) goto LAB_00006ba0;
        }
      } while (pplVar1[2] != plVar8);
      uVar10 = 0;
      goto LAB_00006cdc;
    }
  }
LAB_00006ba0:
  plVar6 = param_1 + 2;
  pplVar1 = (long **)operator_new(0x20);
  pplVar1[2] = *(long **)*param_4;
  pplVar1[3] = (long *)0x0;
  *pplVar1 = (long *)0x0;
  pplVar1[1] = plVar8;
  if (*(float *)(param_1 + 4) * (float)ZEXT89(plVar7) < (float)(unkuint9)(param_1[3] + 1) ||
      plVar7 == (long *)0x0) {
    uVar2 = 1;
    if ((long *)((long)&mach_header_00000000.magic + 2) < plVar7) {
      uVar2 = (ulong)(((ulong)plVar7 & (ulong)((long)plVar7 + -1)) != 0);
    }
    uVar2 = uVar2 | (long)plVar7 << 1;
    uVar4 = (ulong)((float)(unkuint9)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_00006d3c(param_1,uVar2);
    plVar7 = (long *)param_1[1];
    if (((ulong)plVar7 & (ulong)(undefined *)((long)plVar7 + -1)) == 0) {
      unaff_x24 = (long *)((ulong)(undefined *)((long)plVar7 + -1) & (ulong)plVar8);
    }
    else {
      unaff_x24 = plVar8;
      if (plVar7 <= plVar8) {
        uVar2 = 0;
        if (plVar7 != (long *)0x0) {
          uVar2 = (ulong)plVar8 / (ulong)plVar7;
        }
        unaff_x24 = (long *)((long)plVar8 - uVar2 * (long)plVar7);
      }
    }
  }
  lVar3 = *param_1;
  pplVar5 = *(long ***)(lVar3 + (long)unaff_x24 * 8);
  if (pplVar5 == (long **)0x0) {
    *pplVar1 = (long *)*plVar6;
    *plVar6 = (long)pplVar1;
    *(long **)(lVar3 + (long)unaff_x24 * 8) = plVar6;
    if (*pplVar1 != (long *)0x0) {
      plVar8 = (long *)(*pplVar1)[1];
      if (((ulong)plVar7 & (ulong)(undefined *)((long)plVar7 + -1)) == 0) {
        plVar8 = (long *)((ulong)plVar8 & (ulong)(undefined *)((long)plVar7 + -1));
      }
      else if (plVar7 <= plVar8) {
        uVar2 = 0;
        if (plVar7 != (long *)0x0) {
          uVar2 = (ulong)plVar8 / (ulong)plVar7;
        }
        plVar8 = (long *)((long)plVar8 - uVar2 * (long)plVar7);
      }
      *(long ***)(*param_1 + (long)plVar8 * 8) = pplVar1;
    }
  }
  else {
    *pplVar1 = *pplVar5;
    *pplVar5 = (long *)pplVar1;
  }
  param_1[3] = param_1[3] + 1;
  uVar10 = 1;
LAB_00006cdc:
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = pplVar1;
  return auVar11;
}

// ---- 0x00006d14
void FUN_00006d14(void)

{
  bad_array_new_length *this;
  undefined8 uVar1;
  
  this = (bad_array_new_length *)___cxa_allocate_exception(8);
  uVar1 = std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar1,PTR_typeinfo_0000c040,PTR__bad_array_new_length_0000c030);
}

// ---- 0x00006d3c
void FUN_00006d3c(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__1::__next_prime(param_2);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < param_2) goto LAB_00006df0;
  if (uVar3 <= param_2) {
    return;
  }
  uVar2 = (ulong)((float)(unkuint9)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
  if (uVar3 < 3) {
LAB_00006ddc:
    uVar2 = std::__1::__next_prime(uVar2);
  }
  else {
    uVar5 = NEON_cnt(uVar3,1);
    uVar4 = NEON_uaddlv(uVar5,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar4)) goto LAB_00006ddc;
    uVar1 = uVar2 - 1 | uVar2 - 1 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar1 = uVar1 | uVar1 >> 0x20;
    uVar1 = ((uVar1 & 0xaaaaaaaaaaaaaaaa) >> 1) + (uVar1 & 0x5555555555555555);
    uVar1 = ((uVar1 & 0xcccccccccccccccc) >> 2) + (uVar1 & 0x3333333333333333);
    uVar1 = ((uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4) + (uVar1 & 0xf0f0f0f0f0f0f0f);
    uVar1 = ((uVar1 & 0xff00ff00ff00ff00) >> 8) + (uVar1 & 0xff00ff00ff00ff);
    uVar1 = ((uVar1 & 0xffff0000ffff0000) >> 0x10) + (uVar1 & 0xffff0000ffff);
    if (1 < uVar2) {
      uVar2 = 1L << (-(0x40 - ((uVar1 >> 0x20) + (uVar1 & 0xffffffff))) & 0x3f);
    }
  }
  if (param_2 <= uVar2) {
    param_2 = uVar2;
  }
  if (uVar3 <= param_2) {
    return;
  }
LAB_00006df0:
  FUN_00006e18(param_1,param_2);
  return;
}

// ---- 0x00006e18
void FUN_00006e18(void **param_1,void *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  void **ppvVar4;
  ulong uVar5;
  void **ppvVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  
  if (param_2 == (void *)0x0) {
    pvVar2 = *param_1;
    *param_1 = (void *)0x0;
    if (pvVar2 != (void *)0x0) {
      operator_delete(pvVar2);
    }
    param_1[1] = (void *)0x0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      auVar9 = FUN_00006d14();
      pvVar2 = auVar9._8_8_;
      if (*(char *)(auVar9._0_8_ + 8) == '\0') {
        if (pvVar2 == (void *)0x0) {
          return;
        }
      }
      else {
        _objc_release(*(undefined8 *)((long)pvVar2 + 0x18));
      }
      operator_delete(pvVar2);
      return;
    }
    pvVar2 = operator_new((long)param_2 << 3);
    pvVar3 = *param_1;
    *param_1 = pvVar2;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
    pvVar2 = (void *)0x0;
    param_1[1] = param_2;
    do {
      *(undefined8 *)((long)*param_1 + (long)pvVar2 * 8) = 0;
      pvVar2 = (void *)((long)pvVar2 + 1);
    } while (param_2 != pvVar2);
    ppvVar4 = (void **)param_1[2];
    if (ppvVar4 != (void **)0x0) {
      pvVar2 = ppvVar4[1];
      uVar8 = NEON_cnt(param_2,1);
      uVar7 = NEON_uaddlv(uVar8,1);
      uVar5 = CONCAT62((int6)((ulong)uVar8 >> 0x10),uVar7) & 0xffffffff;
      if (uVar5 < 2) {
        pvVar2 = (void *)((ulong)pvVar2 & (long)param_2 - 1U);
      }
      else if (param_2 <= pvVar2) {
        uVar1 = 0;
        if (param_2 != (void *)0x0) {
          uVar1 = (ulong)pvVar2 / (ulong)param_2;
        }
        pvVar2 = (void *)((long)pvVar2 - uVar1 * (long)param_2);
      }
      *(void ***)((long)*param_1 + (long)pvVar2 * 8) = param_1 + 2;
      ppvVar6 = (void **)*ppvVar4;
      if (ppvVar6 != (void **)0x0) {
        do {
          pvVar3 = ppvVar6[1];
          if (uVar5 < 2) {
            pvVar3 = (void *)((ulong)pvVar3 & (long)param_2 - 1U);
          }
          else if (param_2 <= pvVar3) {
            uVar1 = 0;
            if (param_2 != (void *)0x0) {
              uVar1 = (ulong)pvVar3 / (ulong)param_2;
            }
            pvVar3 = (void *)((long)pvVar3 - uVar1 * (long)param_2);
          }
          if (pvVar3 != pvVar2) {
            if (*(long *)((long)*param_1 + (long)pvVar3 * 8) == 0) {
              *(void ***)((long)*param_1 + (long)pvVar3 * 8) = ppvVar4;
              pvVar2 = pvVar3;
            }
            else {
              *ppvVar4 = *ppvVar6;
              *ppvVar6 = **(void ***)((long)*param_1 + (long)pvVar3 * 8);
              **(void ***)((long)*param_1 + (long)pvVar3 * 8) = ppvVar6;
              ppvVar6 = ppvVar4;
            }
          }
          ppvVar4 = ppvVar6;
          ppvVar6 = (void **)*ppvVar4;
        } while (ppvVar6 != (void **)0x0);
      }
    }
  }
  return;
}

// ---- 0x00006f70
void FUN_00006f70(long param_1,void *param_2)

{
  if (*(char *)(param_1 + 8) == '\0') {
    if (param_2 == (void *)0x0) {
      return;
    }
  }
  else {
    _objc_release(*(undefined8 *)((long)param_2 + 0x18));
  }
  operator_delete(param_2);
  return;
}

// ---- 0x00006fcc
void _SBXLSymMakeCallable(void)

{
  return;
}

// ---- 0x00006fd0
void _SBXLSymStripCode(void)

{
  return;
}

// ---- 0x00006fd4
void _SBXLSymStripData(void)

{
  return;
}

// ---- 0x00006fd8
bool _SBXLSymResolverInit(void)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  mach_header_64 *pmVar5;
  uint8_t *puVar6;
  uint32_t uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  ulong local_48;
  
  if (DAT_00010a10 == '\0') {
    uVar3 = __dyld_image_count();
    if (uVar3 != 0) {
      uVar10 = 0;
      bVar2 = true;
LAB_00007020:
      pcVar4 = (char *)__dyld_get_image_name(uVar10);
      if ((pcVar4 == (char *)0x0) || (pcVar4 = _strstr(pcVar4,"QuartzCore"), pcVar4 == (char *)0x0))
      goto LAB_00007038;
      DAT_00010a18 = __dyld_get_image_vmaddr_slide(uVar10);
      pmVar5 = (mach_header_64 *)__dyld_get_image_header(uVar10);
      local_48 = 0;
      puVar6 = _getsegmentdata(pmVar5,"__TEXT",&local_48);
      if (puVar6 != (uint8_t *)0x0) {
        DAT_00010a28 = local_48;
        DAT_00010a20 = puVar6;
      }
      uVar7 = pmVar5->ncmds;
      if (uVar7 != 0) {
        pmVar5 = pmVar5 + 1;
        uVar8 = DAT_00010a38;
        uVar9 = DAT_00010a30;
        do {
          if (pmVar5->magic == 0x19) {
            uVar1 = DAT_00010a18 + *(long *)&pmVar5->flags;
            if ((uVar9 == 0) || (uVar1 < uVar9)) {
              uVar9 = uVar1;
              DAT_00010a30 = uVar1;
            }
            uVar1 = uVar1 + *(long *)(pmVar5 + 1);
            if ((uVar8 == 0) || (uVar8 < uVar1)) {
              uVar8 = uVar1;
              DAT_00010a38 = uVar1;
            }
          }
          pmVar5 = (mach_header_64 *)((long)&pmVar5->magic + (ulong)(uint)pmVar5->cputype);
          uVar7 = uVar7 - 1;
        } while (uVar7 != 0);
      }
      DAT_00010a10 = DAT_00010a20 != (uint8_t *)0x0;
      if (bVar2) {
        return (bool)DAT_00010a10;
      }
    }
LAB_00007120:
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
LAB_00007038:
  uVar10 = uVar10 + 1;
  bVar2 = uVar10 < uVar3;
  if (uVar3 == uVar10) goto LAB_00007120;
  goto LAB_00007020;
}

// ---- 0x0000713c
void _SBXLSymResolveExported(undefined8 param_1)

{
  _dlsym(0xfffffffffffffffe,param_1);
  return;
}

// ---- 0x00007148
ulong _SBXLSymScanText(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_00010a10 == '\0') ||
     (uVar2 = (DAT_00010a20 + DAT_00010a28) - param_3, uVar3 = DAT_00010a20, uVar2 < DAT_00010a20))
  {
    uVar1 = 0;
  }
  else {
    while (uVar1 = DAT_00010a20, param_3 != 0) {
      lVar4 = 0;
      while ((*(char *)(param_2 + lVar4) != 'x' ||
             (*(char *)(uVar3 + lVar4) == *(char *)(param_1 + lVar4)))) {
        lVar4 = lVar4 + 1;
        if (param_3 == lVar4) {
          return uVar3;
        }
      }
      uVar3 = uVar3 + 1;
      if (uVar2 < uVar3) {
        return 0;
      }
    }
  }
  return uVar1;
}

// ---- 0x000071dc
long _SBXLSymDecodeAdrpAdd(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x9f000000) == 0x90000000) {
    uVar2 = param_1[1];
    if ((uVar2 & 0x7f800000) == 0x11000000) {
      uVar3 = (ulong)(uVar2 >> 10) & 0xfff;
      if ((uVar2 & 0x400000) != 0) {
        uVar3 = uVar3 << 0xc;
      }
      return ((ulong)param_1 & 0xfffffffffffff000) +
             (((ulong)(uVar1 >> 3) & 0x1ffffc | (ulong)(uVar1 >> 0x1d) & 3) ^ 0x100000) * 0x1000 +
             uVar3 + -0x100000000;
    }
  }
  return 0;
}

// ---- 0x00007248
long _SBXLSymDecodeAdrpLdr(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  if (((uVar1 & 0x9f000000) == 0x90000000) && (param_1[1] >> 0x16 == 0x3e5)) {
    return ((ulong)param_1 & 0xfffffffffffff000) +
           (((ulong)(uVar1 >> 3) & 0x1ffffc | (ulong)(uVar1 >> 0x1d) & 3) ^ 0x100000) * 0x1000 +
           ((ulong)(param_1[1] >> 7) & 0x7ff8) + -0x100000000;
  }
  return 0;
}

// ---- 0x000072a8
void _SBXLResolve_CAInternAtomWithCString(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *local_58 [8];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_0000c098;
  piVar1 = (int *)_dlsym(0xfffffffffffffffe,"CAInternAtomWithCString");
  if (piVar1 == (int *)0x0) {
    if ((DAT_00010a10 != '\0') &&
       (piVar1 = (int *)((long)DAT_00010a20 + DAT_00010a28 + -0x18), DAT_00010a20 < piVar1)) {
      iVar4 = 0;
      piVar2 = DAT_00010a20;
      do {
        if (((((*piVar2 == -0x5641b00c) && (piVar2[1] == -0x56fe8403)) && (piVar2[2] == -0x6effbc03)
             ) && ((piVar2[3] == -0x55fffc0d && ((uint)piVar2[4] >> 0x1a == 0x25)))) &&
           ((piVar2[5] == -0x55fffc0c && ((piVar2[6] & 0x7f00001fU) == 0x35000000)))) {
          if ((piVar2 <= DAT_00010a20) || (piVar3 = piVar2 + -1, piVar2[-1] != -0x2afcdc81)) {
            piVar3 = piVar2;
          }
          local_58[iVar4] = piVar3;
          iVar4 = iVar4 + 1;
        }
        piVar2 = piVar2 + 1;
      } while ((piVar2 < piVar1) && (iVar4 < 8));
      piVar1 = local_58[0];
      if (iVar4 != 0) goto LAB_000073ec;
    }
    piVar1 = (int *)0x0;
  }
LAB_000073ec:
  if (*(long *)PTR____stack_chk_guard_0000c098 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(piVar1);
  }
  return;
}

// ---- 0x00007414
undefined8 _SBXLResolve_AddFilter(void)

{
  FUN_00007430();
  return DAT_00010a48;
}

// ---- 0x00007430
void FUN_00007430(void)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined auStack_b0 [8];
  undefined8 auStack_a8 [8];
  long local_68;
  
  puVar2 = DAT_00010a20;
  local_68 = *(long *)PTR____stack_chk_guard_0000c098;
  if (((DAT_00010a40 & 1) == 0) && (DAT_00010a40 = 1, DAT_00010a10 != '\0')) {
    puVar7 = (uint *)((long)DAT_00010a20 + DAT_00010a28 + -0x20);
    puVar9 = DAT_00010a20;
    for (puVar6 = DAT_00010a20 + 2; puVar6 < puVar7; puVar6 = puVar6 + 1) {
      puVar9 = puVar9 + 1;
      local_b4 = 0;
      lVar3 = FUN_00007fe0(puVar6,puVar7,auStack_b0,&local_b4);
      if (lVar3 != 0) {
        uVar10 = 1;
        puVar8 = puVar6;
        do {
          puVar1 = puVar7;
          if (puVar8 + 0x10 <= puVar7) {
            puVar1 = puVar8 + 0x10;
          }
          local_c0 = 0;
          local_c4 = 0;
          do {
            puVar8 = puVar8 + 1;
            if (puVar1 <= puVar8) {
              if ((uVar10 & 0xfffffffc) == 0) goto LAB_00007530;
              goto LAB_00007544;
            }
            lVar4 = FUN_00007fe0(puVar8,puVar7,&local_c0,&local_c4);
          } while (lVar4 != lVar3);
          auStack_a8[uVar10] = local_c0;
          uVar10 = uVar10 + 1;
        } while (uVar10 != 8);
LAB_00007544:
        if (puVar2 < puVar6 + -2) {
          uVar10 = 0xfffffffffffffffd;
          goto LAB_00007560;
        }
        uVar5 = 0;
        goto LAB_000075ac;
      }
LAB_00007530:
    }
  }
  goto LAB_000075c4;
  while( true ) {
    uVar5 = 0;
    if (uVar10 < 0xffffffffffffffe7) break;
    puVar6 = puVar9 + -2;
    puVar9 = puVar9 + -1;
    uVar10 = uVar10 - 1;
    if (puVar6 <= puVar2) break;
LAB_00007560:
    if (((puVar9[-1] & 0x9f000000) == 0x90000000 && puVar9 < puVar7) && (*puVar9 >> 0x16 == 0x3e5))
    {
      uVar5 = _SBXLSymDecodeAdrpLdr(puVar9 + -1);
      break;
    }
  }
LAB_000075ac:
  DAT_00010a50 = auStack_a8[1];
  DAT_00010a48 = lVar3;
  DAT_00010a58 = uVar5;
LAB_000075c4:
  if (*(long *)PTR____stack_chk_guard_0000c098 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

// ---- 0x0000760c
undefined8 _SBXLResolve_GaussianCtxSlot(void)

{
  FUN_00007430();
  return DAT_00010a50;
}

// ---- 0x00007628
undefined8 _SBXLResolve_FilterTableSlot(void)

{
  FUN_00007430();
  return DAT_00010a58;
}

// ---- 0x00007644
uint * _SBXLResolve_StopEncoders(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  
  if (DAT_00010a10 != '\0') {
    lVar4 = FUN_000077b4("!memoryless_in_use ()");
    puVar3 = DAT_00010a20;
    if (lVar4 == 0) {
      return (uint *)0x0;
    }
    puVar7 = (uint *)((long)DAT_00010a20 + DAT_00010a28 + -4);
    for (puVar6 = DAT_00010a20; puVar6 < puVar7; puVar6 = puVar6 + 1) {
      if ((((*puVar6 & 0x9f000000) == 0x90000000) && ((puVar6[1] & 0x7f800000) == 0x11000000)) &&
         (lVar5 = _SBXLSymDecodeAdrpAdd(puVar6), lVar5 == lVar4)) {
        if (puVar6 < puVar3) {
          return (uint *)0x0;
        }
        puVar7 = puVar6 + -0x200;
        do {
          uVar2 = *puVar6;
          if (uVar2 == 0xd503237f) {
            return puVar6;
          }
          uVar1 = uVar2 & 0xff8003ff;
          if ((uVar2 & 0xffe003e0) == 0xa9a003e0 || uVar1 == 0xd10003ff) {
            if ((uVar2 & 0xffe003e0) == 0xa9a003e0) {
              if (puVar6 <= puVar3) {
                return puVar6;
              }
            }
            else if ((uVar1 != 0xd10003ff || puVar6 < puVar3) ||
                     uVar1 == 0xd10003ff && puVar6 == puVar3) {
              return puVar6;
            }
            if (puVar6[-1] != 0xd503237f) {
              return puVar6;
            }
            return puVar6 + -1;
          }
          puVar6 = puVar6 + -1;
          if (puVar6 < puVar7) {
            return (uint *)0x0;
          }
        } while (puVar3 <= puVar6);
        return (uint *)0x0;
      }
    }
  }
  return (uint *)0x0;
}

// ---- 0x000077b4
void * FUN_000077b4(byte *param_1)

{
  void *pvVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  
  if (((DAT_00010a10 != '\0') && (sVar4 = _strlen((char *)param_1), sVar4 < DAT_00010a28)) &&
     (pvVar1 = (void *)((long)DAT_00010a20 + ~sVar4 + DAT_00010a28), DAT_00010a20 <= pvVar1)) {
    bVar2 = *param_1;
    pvVar5 = DAT_00010a20;
    do {
      pvVar5 = _memchr(pvVar5,(uint)bVar2,(long)pvVar1 + (1 - (long)pvVar5));
      if (pvVar5 == (void *)0x0) {
        return (void *)0x0;
      }
      iVar3 = _memcmp(pvVar5,param_1,sVar4 + 1);
      if (iVar3 == 0) {
        return pvVar5;
      }
      pvVar5 = (void *)((long)pvVar5 + 1);
    } while (pvVar5 <= pvVar1);
  }
  return (void *)0x0;
}

// ---- 0x00007868
ulong _SBXLResolve_MetalCmdBufOffset(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  
  if ((DAT_00010a10 != '\0') &&
     (lVar4 = FUN_000077b4("Command buffer allocation failed!\n"), puVar1 = DAT_00010a20, lVar4 != 0
     )) {
    puVar13 = (uint *)((long)DAT_00010a20 + DAT_00010a28 + -4);
    for (puVar11 = DAT_00010a20; puVar11 < puVar13; puVar11 = puVar11 + 1) {
      if ((((*puVar11 & 0x9f000000) == 0x90000000) && ((puVar11[1] & 0x7f800000) == 0x11000000)) &&
         (lVar5 = _SBXLSymDecodeAdrpAdd(puVar11), lVar5 == lVar4)) {
        if (puVar11 < puVar1) {
          return 0xffffffffffffffff;
        }
        puVar8 = puVar11 + -0x400;
        goto LAB_00007958;
      }
    }
  }
  return 0xffffffffffffffff;
LAB_00007958:
  uVar10 = *puVar11;
  puVar12 = puVar11;
  if (uVar10 == 0xd503237f) goto LAB_000079b0;
  uVar2 = uVar10 & 0xff8003ff;
  if ((uVar10 & 0xffe003e0) == 0xa9a003e0 || uVar2 == 0xd10003ff) {
    if ((uVar10 & 0xffe003e0) == 0xa9a003e0) {
      if (puVar11 <= puVar1) goto LAB_000079b0;
    }
    else if ((uVar2 != 0xd10003ff || puVar11 < puVar1) || uVar2 == 0xd10003ff && puVar11 == puVar1)
    goto LAB_000079b0;
    puVar12 = puVar11 + -1;
    if (puVar11[-1] != 0xd503237f) {
      puVar12 = puVar11;
    }
LAB_000079b0:
    if (puVar13 <= puVar12) {
      return 0xffffffffffffffff;
    }
    uVar7 = 0;
    lVar4 = 4;
    uVar10 = 1;
    while( true ) {
      uVar2 = puVar12[uVar7];
      if ((uVar2 & 0xffe0ffe0) == 0xaa0003e0) {
        uVar9 = 1 << (ulong)(uVar2 & 0x1f);
        uVar2 = uVar10 >> (ulong)(uVar2 >> 0x10 & 0x1f);
        uVar3 = uVar9 | uVar10;
        uVar10 = uVar10 & (uVar9 ^ 0xffffffff);
        if ((uVar2 & 1) != 0) {
          uVar10 = uVar3;
        }
      }
      else if (uVar2 >> 0x17 == 0x1f2) {
        uVar6 = (ulong)(uVar2 >> 7) & 0x7ff8;
        if (0x3ff < (uint)uVar6 && (1 << (ulong)(uVar2 >> 5 & 0x1f) & uVar10) != 0) {
          return uVar6;
        }
        uVar9 = 0xffffffff;
        if ((uVar2 & 0x400000) != 0) {
          uVar9 = ~(1 << (ulong)(uVar2 & 0x1f));
        }
        uVar10 = uVar9 & uVar10;
      }
      if (0x2e < uVar7) break;
      uVar7 = uVar7 + 1;
      puVar1 = (uint *)((long)puVar12 + lVar4);
      lVar4 = lVar4 + 4;
      if (puVar13 <= puVar1) {
        return 0xffffffffffffffff;
      }
    }
    return 0xffffffffffffffff;
  }
  puVar11 = puVar11 + -1;
  if (puVar11 < puVar8) {
    return 0xffffffffffffffff;
  }
  if (puVar11 < puVar1) {
    return 0xffffffffffffffff;
  }
  goto LAB_00007958;
}

// ---- 0x00007a78
ulong _SBXLResolve_RenderVtableSlot(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  if ((param_1 != 0) && (1 < param_2)) {
    uVar8 = 0;
    uVar9 = 1;
    do {
      uVar5 = *(ulong *)(param_1 + uVar8 * 8);
      bVar4 = uVar5 == 0;
      bVar3 = DAT_00010a10 == '\0';
      if ((((!bVar4 && !bVar3) && uVar5 > DAT_00010a30 ||
           (!bVar4 && !bVar3) && DAT_00010a30 == uVar5) && uVar5 <= DAT_00010a38) &&
          (((bVar4 || bVar3) || uVar5 <= DAT_00010a30) &&
           ((bVar4 || bVar3) || DAT_00010a30 != uVar5) || DAT_00010a38 != uVar5)) {
        uVar6 = 0;
        uVar10 = 2;
        uVar11 = 1;
        do {
          iVar1 = *(int *)(uVar5 + uVar6 * 4);
          if (iVar1 == -0x6bffff8) {
            uVar2 = *(uint *)(uVar5 + uVar11 * 4);
            uVar12 = (ulong)(uVar2 >> 10) & 0xfff;
            if ((uVar2 & 0xffc003ff) == 0xf9400108 && uVar9 == uVar12) {
              bVar3 = false;
              uVar13 = uVar10;
              do {
                uVar2 = *(uint *)(uVar5 + uVar13 * 4);
                bVar4 = (uVar2 & 0xffdfffff) == 0xd61f0100;
                bVar3 = (bool)(bVar4 | bVar3);
                uVar13 = uVar13 + 1;
              } while ((!bVar4 && uVar2 != 0xd65f03c0) && uVar13 < uVar6 + 0x10);
              if (bVar3) {
                return uVar12;
              }
            }
          }
          else if (iVar1 == -0x6bffff0) {
            uVar12 = uVar6;
            uVar13 = uVar11;
            do {
              uVar7 = uVar13;
              uVar14 = uVar12;
              uVar12 = uVar14 + 1;
              if (0x16 < uVar12 || uVar6 + 10 <= uVar12) goto LAB_00007c10;
              uVar2 = *(uint *)(uVar5 + 4 + uVar14 * 4);
              uVar13 = uVar7 + 1;
            } while ((uVar2 & 0xffe00fff) != 0xf8400e08);
            uVar12 = (ulong)(uVar2 >> 0xf) & 0x3f;
            if (uVar9 == uVar12) {
              do {
                uVar2 = *(uint *)(uVar5 + 4 + uVar7 * 4);
                if ((uVar2 | 0x200000) >> 0xb == 0x1ae7e1) {
                  return uVar12;
                }
                uVar13 = uVar7 + 2;
                uVar7 = uVar7 + 1;
                bVar3 = uVar13 < uVar14 + 0xb;
              } while ((uVar2 != 0xd65f03c0 && bVar3) && uVar7 < 0x16 ||
                       (uVar2 != 0xd65f03c0 && bVar3) && uVar7 == 0x16);
            }
          }
          else if (iVar1 == -0x29a0fc40) break;
LAB_00007c10:
          uVar6 = uVar6 + 1;
          uVar11 = uVar11 + 1;
          uVar10 = uVar10 + 1;
        } while (uVar6 != 0x17);
      }
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 1;
    } while (uVar8 != param_2 - 1);
  }
  return 0xffffffff;
}

// ---- 0x00007c4c
bool _SBXLSymAddressInQuartzCoreImage(ulong param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (DAT_00010a10 != '\0')) {
    bVar1 = (param_1 >= DAT_00010a30 && param_1 <= DAT_00010a38) &&
            (param_1 < DAT_00010a30 || DAT_00010a38 != param_1);
  }
  return bVar1;
}

// ---- 0x00007c84
ulong _SBXLResolve_EdgeInfoVtableSlot(long param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if ((param_1 != 0) && (0 < (int)param_2)) {
    uVar8 = 0;
    do {
      uVar9 = *(ulong *)(param_1 + uVar8 * 8);
      bVar7 = uVar9 == 0;
      bVar6 = DAT_00010a10 == '\0';
      if ((((!bVar7 && !bVar6) && uVar9 > DAT_00010a30 ||
           (!bVar7 && !bVar6) && DAT_00010a30 == uVar9) && uVar9 <= DAT_00010a38) &&
          (((bVar7 || bVar6) || uVar9 <= DAT_00010a30) &&
           ((bVar7 || bVar6) || DAT_00010a30 != uVar9) || DAT_00010a38 != uVar9)) {
        uVar10 = 0;
        bVar5 = 0;
        bVar4 = 0;
        bVar3 = 0;
        bVar2 = 0;
        do {
          iVar1 = *(int *)(uVar9 + uVar10 * 4);
          bVar2 = iVar1 == -0x55fafc09 | bVar2;
          bVar3 = iVar1 == -0x55f9fc0c | bVar3;
          bVar4 = iVar1 == 0x2d0002e1 | bVar4;
          bVar5 = iVar1 == 0x39000288 | bVar5;
          if ((0x4e < uVar10) || (iVar1 == -0x29a0f001)) break;
          uVar10 = uVar10 + 1;
        } while (iVar1 != -0x29a0fc40);
        if ((bool)(bVar2 & bVar3 & bVar4 & bVar5)) {
          return uVar8;
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != param_2);
  }
  return 0xffffffff;
}

// ---- 0x00007d90
void _SBXLSymResolverSaveCache(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined auVar10 [16];
  cfstringStruct *local_a8;
  cfstringStruct *pcStack_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_0000c098;
  objc_msgSend_bundleWithPath_
            (PTR__OBJC_CLASS___NSBundle_00010268,param_2,
             &cf__System_Library_Frameworks_QuartzCore_framework);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_infoDictionary();
  auVar10 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_objectForKeyedSubscript_(auVar10._0_8_,auVar10._8_8_,&cf_CFBundleVersion);
  pcVar4 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
  pcVar1 = &cf_unknown;
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar1 = pcVar4;
  }
  uVar5 = _objc_retain(pcVar1);
  _objc_release(pcVar4);
  _objc_release(auVar10._0_8_);
  puVar2 = PTR__OBJC_CLASS___NSNumber_00010270;
  local_a8 = &cf_qcVersion;
  pcStack_a0 = &cf_addFilter;
  local_80 = uVar5;
  FUN_00007430();
  objc_msgSend_numberWithUnsignedLong_(puVar2,extraout_x1,DAT_00010a48 - DAT_00010a18);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00010270;
  local_98 = &cf_stopEncoders;
  local_78 = uVar6;
  auVar10 = _SBXLResolve_StopEncoders();
  objc_msgSend_numberWithUnsignedLong_(puVar2,auVar10._8_8_,auVar10._0_8_ - DAT_00010a18);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00010270;
  local_90 = &cf_gaussianCtxSlot;
  local_70 = uVar7;
  FUN_00007430();
  objc_msgSend_numberWithUnsignedLong_(puVar2,extraout_x1_00,DAT_00010a50 - DAT_00010a18);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_00010270;
  local_88 = &cf_filterTableSlot;
  local_68 = uVar8;
  FUN_00007430();
  objc_msgSend_numberWithUnsignedLong_(puVar2,extraout_x1_01,DAT_00010a58 - DAT_00010a18);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  local_60 = auVar10._0_8_;
  objc_msgSend_dictionaryWithObjects_forKeys_count_
            (PTR__OBJC_CLASS___NSDictionary_00010278,auVar10._8_8_,&local_80,&local_a8,5);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar10._0_8_);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  objc_msgSend_writeToFile_atomically_(uVar9,extraout_x1_02,&cf__tmp_lg_symcache_plist,1);
  uVar5 = _objc_retainAutorelease(uVar5);
  objc_msgSend_UTF8String();
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_0000c098 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

// ---- 0x00007fe0
long FUN_00007fe0(uint *param_1,uint *param_2,ulong *param_3,uint *param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *param_1;
  if (((((uVar2 & 0xff80001f) == 0x52800000) && ((param_1[-2] & 0x9f000000) == 0x90000000)) &&
      ((param_1[-1] & 0x7f800000) == 0x11000000)) &&
     ((uVar4 = _SBXLSymDecodeAdrpAdd(), uVar4 != 0 && ((uVar4 & 7) == 0)))) {
    lVar5 = 0;
    do {
      puVar1 = (uint *)((long)param_1 + lVar5 + 4);
      if (param_2 <= puVar1) {
        return 0;
      }
      uVar3 = *puVar1;
      if (uVar3 >> 0x1a == 0x25) {
        lVar5 = (long)param_1 +
                lVar5 + (int)(-(uVar3 >> 0x19 & 1) & 0xf0000000 | (uVar3 & 0x3ffffff) << 2) + 4;
        *param_3 = uVar4;
        if (param_4 == (uint *)0x0) {
          return lVar5;
        }
        *param_4 = uVar2 >> 5 & 0xffff;
        return lVar5;
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 != 0x10);
  }
  return 0;
}

// ---- 0x00008318
void objc_msgSend_UTF8String(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_UTF8String_00010000);
  return;
}

// ---- 0x00008338
void objc_msgSend_addObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_addObject__00010008);
  return;
}

// ---- 0x00008358
void objc_msgSend_array(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_array_00010010);
  return;
}

// ---- 0x00008378
void objc_msgSend_bundleWithPath_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_bundleWithPath__00010018);
  return;
}

// ---- 0x00008398
void objc_msgSend_colorAttachments(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_colorAttachments_00010020);
  return;
}

// ---- 0x000083b8
void objc_msgSend_componentsSeparatedByCharactersInSet_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_componentsSeparatedByCharactersI_00010028);
  return;
}

// ---- 0x000083d8
void objc_msgSend_componentsSeparatedByString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_componentsSeparatedByString__00010030);
  return;
}

// ---- 0x000083f8
void objc_msgSend_componentsWithString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_componentsWithString__00010038);
  return;
}

// ---- 0x00008418
void objc_msgSend_containsObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_containsObject__00010040);
  return;
}

// ---- 0x00008438
void objc_msgSend_contentsOfDirectoryAtPath_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_contentsOfDirectoryAtPath_error__00010048);
  return;
}

// ---- 0x00008458
void objc_msgSend_copy(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_copy_00010050);
  return;
}

// ---- 0x00008478
void objc_msgSend_countByEnumeratingWithState_objects_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_countByEnumeratingWithState_obje_00010058);
  return;
}

// ---- 0x00008498
void objc_msgSend_dataWithContentsOfFile_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_dataWithContentsOfFile__00010060);
  return;
}

// ---- 0x000084b8
void objc_msgSend_defaultManager(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_defaultManager_00010068);
  return;
}

// ---- 0x000084d8
void objc_msgSend_device(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_device_00010070);
  return;
}

// ---- 0x000084f8
void objc_msgSend_dictionary(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_dictionary_00010078);
  return;
}

// ---- 0x00008518
void objc_msgSend_dictionaryWithObjects_forKeys_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_dictionaryWithObjects_forKeys_co_00010080);
  return;
}

// ---- 0x00008538
void objc_msgSend_drawPrimitives_vertexStart_vertexCount_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_drawPrimitives_vertexStart_verte_00010088);
  return;
}

// ---- 0x00008558
void objc_msgSend_endEncoding(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_endEncoding_00010090);
  return;
}

// ---- 0x00008578
void objc_msgSend_hasPrefix_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_hasPrefix__00010098);
  return;
}

// ---- 0x00008598
void objc_msgSend_height(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_height_000100a0);
  return;
}

// ---- 0x000085b8
void objc_msgSend_host(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_host_000100a8);
  return;
}

// ---- 0x000085d8
void objc_msgSend_infoDictionary(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_infoDictionary_000100b0);
  return;
}

// ---- 0x000085f8
void objc_msgSend_initWithData_encoding_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_initWithData_encoding__000100b8);
  return;
}

// ---- 0x00008618
void objc_msgSend_isEqualToString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_isEqualToString__000100c0);
  return;
}

// ---- 0x00008638
void objc_msgSend_length(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_length_000100c8);
  return;
}

// ---- 0x00008658
void objc_msgSend_localizedDescription(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_localizedDescription_000100d0);
  return;
}

// ---- 0x00008678
void objc_msgSend_lowercaseString(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_lowercaseString_000100d8);
  return;
}

// ---- 0x00008698
void objc_msgSend_newFunctionWithName_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_newFunctionWithName__000100e0);
  return;
}

// ---- 0x000086b8
void objc_msgSend_newLibraryWithFile_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_newLibraryWithFile_error__000100e8);
  return;
}

// ---- 0x000086d8
void objc_msgSend_newRenderPipelineStateWithDescriptor_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_newRenderPipelineStateWithDescri_000100f0);
  return;
}

// ---- 0x000086f8
void objc_msgSend_numberWithUnsignedLong_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_numberWithUnsignedLong__000100f8);
  return;
}

// ---- 0x00008718
void objc_msgSend_objectAtIndexedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_objectAtIndexedSubscript__00010100);
  return;
}

// ---- 0x00008738
void objc_msgSend_objectForKeyedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_objectForKeyedSubscript__00010108);
  return;
}

// ---- 0x00008758
void objc_msgSend_operatingSystemVersion(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_operatingSystemVersion_00010110);
  return;
}

// ---- 0x00008778
void objc_msgSend_percentEncodedPath(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_percentEncodedPath_00010118);
  return;
}

// ---- 0x00008798
void objc_msgSend_pixelFormat(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_pixelFormat_00010120);
  return;
}

// ---- 0x000087b8
void objc_msgSend_processInfo(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_processInfo_00010128);
  return;
}

// ---- 0x000087d8
void objc_msgSend_rangeOfString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_rangeOfString__00010130);
  return;
}

// ---- 0x000087f8
void objc_msgSend_renderCommandEncoderWithDescriptor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_renderCommandEncoderWithDescript_00010138);
  return;
}

// ---- 0x00008818
void objc_msgSend_renderPassDescriptor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_renderPassDescriptor_00010140);
  return;
}

// ---- 0x00008838
void objc_msgSend_scheme(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_scheme_00010148);
  return;
}

// ---- 0x00008858
void objc_msgSend_setFragmentBytes_length_atIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_setFragmentBytes_length_atIndex__00010150);
  return;
}

// ---- 0x00008878
void objc_msgSend_setFragmentFunction_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_setFragmentFunction__00010158);
  return;
}

// ---- 0x00008898
void objc_msgSend_setFragmentTexture_atIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_setFragmentTexture_atIndex__00010160);
  return;
}

// ---- 0x000088b8
void objc_msgSend_setLoadAction_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_setLoadAction__00010168);
  return;
}

// ---- 0x000088d8
void objc_msgSend_setObject_forKeyedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_setObject_forKeyedSubscript__00010170);
  return;
}

// ---- 0x000088f8
void objc_msgSend_setPixelFormat_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_setPixelFormat__00010178);
  return;
}

// ---- 0x00008918
void objc_msgSend_setRenderPipelineState_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_setRenderPipelineState__00010180);
  return;
}

// ---- 0x00008938
void objc_msgSend_setStoreAction_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_setStoreAction__00010188);
  return;
}

// ---- 0x00008958
void objc_msgSend_setTexture_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_setTexture__00010190);
  return;
}

// ---- 0x00008978
void objc_msgSend_setVertexFunction_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_setVertexFunction__00010198);
  return;
}

// ---- 0x00008998
void objc_msgSend_stringByAppendingFormat_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_stringByAppendingFormat__000101a0);
  return;
}

// ---- 0x000089b8
void objc_msgSend_stringByAppendingPathComponent_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_stringByAppendingPathComponent__000101a8);
  return;
}

// ---- 0x000089d8
void objc_msgSend_stringByAppendingString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_stringByAppendingString__000101b0);
  return;
}

// ---- 0x000089f8
void objc_msgSend_stringByReplacingOccurrencesOfString_withString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_stringByReplacingOccurrencesOfSt_000101b8);
  return;
}

// ---- 0x00008a18
void objc_msgSend_stringByTrimmingCharactersInSet_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_stringByTrimmingCharactersInSet__000101c0);
  return;
}

// ---- 0x00008a38
void objc_msgSend_stringWithContentsOfFile_encoding_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_stringWithContentsOfFile_encodin_000101c8);
  return;
}

// ---- 0x00008a58
void objc_msgSend_stringWithFormat_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_stringWithFormat__000101d0);
  return;
}

// ---- 0x00008a78
void objc_msgSend_stringWithUTF8String_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_stringWithUTF8String__000101d8);
  return;
}

// ---- 0x00008a98
void objc_msgSend_substringFromIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_substringFromIndex__000101e0);
  return;
}

// ---- 0x00008ab8
void objc_msgSend_substringToIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_substringToIndex__000101e8);
  return;
}

// ---- 0x00008ad8
void objc_msgSend_usage(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_usage_000101f0);
  return;
}

// ---- 0x00008af8
void objc_msgSend_whitespaceAndNewlineCharacterSet(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_whitespaceAndNewlineCharacterSet_000101f8);
  return;
}

// ---- 0x00008b18
void objc_msgSend_whitespaceCharacterSet(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_whitespaceCharacterSet_00010200);
  return;
}

// ---- 0x00008b38
void objc_msgSend_width(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_width_00010208);
  return;
}

// ---- 0x00008b58
void objc_msgSend_writeToFile_atomically_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_0000c150)(param_1,PTR_s_writeToFile_atomically__00010210);
  return;
}

// ---- 0x000180a8
/* WARNING: Control flow encountered bad instruction data */
/* std::bad_array_new_length::~bad_array_new_length() */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
