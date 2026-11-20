// SystemBoxPrefs  (arm64)
// ===== 0x00004000  SystemBoxRootListController__sb_specifierPlistName

/* Function Stack Size: 0x10 bytes */

ID SystemBoxRootListController::SystemBoxRootListController__sb_specifierPlistName
             (ID param_1,SEL param_2)

{
  return 0x184b0;
}



// ===== 0x0000400c  SystemBoxRootListController__specifiers

/* Function Stack Size: 0x10 bytes */

ID SystemBoxRootListController::SystemBoxRootListController__specifiers(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  SEL extraout_x1;
  undefined8 uVar4;
  long lVar5;
  undefined auVar6 [16];
  
  lVar5 = (long)*(int *)PTR__OBJC_IVAR___PSListController__specifiers_00018060;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
    objc_msgSend_sb_specifierPlistName(param_1);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_loadSpecifiersFromPlistName_target_(param_1,auVar6._8_8_,auVar6._0_8_,param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar2;
    _objc_release(uVar4);
    _objc_release(auVar6._0_8_);
    lVar1 = *(long *)(param_1 + lVar5);
    param_2 = extraout_x1;
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(lVar1,param_2);
  return IVar3;
}



// ===== 0x0000408c  SystemBoxRootListController__viewDidLoad

/* Function Stack Size: 0x10 bytes */

void SystemBoxRootListController::SystemBoxRootListController__viewDidLoad(ID param_1,SEL param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  ID local_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_0001e000;
  local_40 = param_1;
  _objc_msgSendSuper2(&local_40,PTR_s_viewDidLoad_0001de58);
  auVar4 = _objc_alloc(PTR__OBJC_CLASS___UIBarButtonItem_0001deb0);
  uVar2 = objc_msgSend_initWithTitle_style_target_action_
                    (auVar4._0_8_,auVar4._8_8_,&cf_l,0,param_1,PTR_s_respring_0001da48);
  objc_msgSend_navigationItem(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setRightBarButtonItem_(auVar4._0_8_,auVar4._8_8_,uVar2);
  _objc_release(auVar4._0_8_);
  objc_msgSend_systemGroupedBackgroundColor(PTR__OBJC_CLASS___UIColor_0001deb8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_view(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setBackgroundColor_(auVar4._0_8_,auVar4._8_8_,uVar3);
  _objc_release(auVar4._0_8_);
  _objc_release(uVar3);
  objc_msgSend_sb_specifierPlistName(param_1);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_isEqualToString_(auVar4._0_8_,auVar4._8_8_,&cf_Root);
  _objc_release(auVar4._0_8_);
  if (iVar1 != 0) {
    objc_msgSend_navigationItem(param_1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setTitleView_(auVar4._0_8_,auVar4._8_8_,0);
    _objc_release(auVar4._0_8_);
    objc_msgSend_navigationItem(param_1);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setTitle_(auVar4._0_8_,auVar4._8_8_,&cf___);
    _objc_release(auVar4._0_8_);
    objc_msgSend_sb_installRootHeader(param_1);
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x000041f4  SystemBoxRootListController__viewDidAppear_

/* Function Stack Size: 0x14 bytes */

void SystemBoxRootListController::SystemBoxRootListController__viewDidAppear_
               (ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  cfstringStruct *pcVar19;
  undefined8 uVar20;
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
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  long local_308;
  long local_2c8;
  ID local_2c0;
  undefined *puStack_2b8;
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
  undefined8 local_230;
  long lStack_228;
  long *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined auStack_1f0 [128];
  undefined8 local_170;
  long lStack_168;
  long *local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000180e0;
  puStack_2b8 = PTR_PTR_0001e000;
  local_2c0 = param_1;
  _objc_msgSendSuper2(&local_2c0,PTR_s_viewDidAppear__0001de50,param_3);
  objc_msgSend_sb_specifierPlistName(param_1);
  auVar30 = _objc_retainAutoreleasedReturnValue();
  iVar2 = objc_msgSend_isEqualToString_(auVar30._0_8_,auVar30._8_8_,&cf_Root);
  _objc_release(auVar30._0_8_);
  if (iVar2 != 0) {
    objc_msgSend_table(param_1);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar7 = _objc_retain(param_1);
    objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_0001df88);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    jbroot((NSString *)&cf__var_lib_dpkg_status);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    auVar30 = objc_msgSend_length();
    uVar11 = auVar30._8_8_;
    if (auVar30._0_8_ != 0) {
      objc_msgSend_addObject_(uVar8,uVar11,uVar9);
      uVar11 = extraout_x1;
    }
    uStack_208 = 0;
    local_210 = 0;
    uStack_1f8 = 0;
    uStack_200 = 0;
    lStack_228 = 0;
    local_230 = 0;
    uStack_218 = 0;
    local_220 = (long *)0x0;
    auVar30 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (&PTR__OBJC_CLASS___NSConstantArray_00019b60,uVar11,&local_230,auStack_f0,
                         0x10);
    if (auVar30._0_8_ != 0) {
      lVar27 = *local_220;
      do {
        uVar11 = auVar30._8_8_;
        lVar29 = 0;
        do {
          if (*local_220 != lVar27) {
            _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_00019b60);
            uVar11 = extraout_x1_00;
          }
          uVar25 = *(undefined8 *)(lStack_228 + lVar29 * 8);
          auVar31 = objc_msgSend_containsObject_(uVar8,uVar11,uVar25);
          uVar11 = auVar31._8_8_;
          if ((auVar31 & (undefined  [16])0x1) == (undefined  [16])0x0) {
            objc_msgSend_addObject_(uVar8,uVar11,uVar25);
            uVar11 = extraout_x1_01;
          }
          lVar29 = lVar29 + 1;
        } while (auVar30._0_8_ != lVar29);
        auVar30 = objc_msgSend_countByEnumeratingWithState_objects_count_
                            (&PTR__OBJC_CLASS___NSConstantArray_00019b60,uVar11,&local_230,
                             auStack_f0,0x10);
      } while (auVar30._0_8_ != 0);
    }
    uStack_248 = 0;
    local_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    lStack_268 = 0;
    local_270 = 0;
    uStack_258 = 0;
    local_260 = (long *)0x0;
    auVar30 = _objc_retain(uVar8);
    uVar11 = auVar30._0_8_;
    auVar30 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar11,auVar30._8_8_,&local_270,&local_170,0x10);
    if (auVar30._0_8_ != 0) {
      lVar27 = *local_260;
      do {
        uVar8 = auVar30._8_8_;
        lVar29 = 0;
        do {
          if (*local_260 != lVar27) {
            _objc_enumerationMutation(uVar11);
            uVar8 = extraout_x1_02;
          }
          objc_msgSend_dataWithContentsOfFile_
                    (PTR__OBJC_CLASS___NSData_0001df90,uVar8,
                     *(undefined8 *)(lStack_268 + lVar29 * 8));
          uVar8 = _objc_retainAutoreleasedReturnValue();
          lVar10 = objc_msgSend_length();
          if (lVar10 != 0) {
            auVar31 = _objc_alloc(PTR__OBJC_CLASS___NSString_0001df48);
            uVar25 = objc_msgSend_initWithData_encoding_(auVar31._0_8_,auVar31._8_8_,uVar8,4);
            lVar10 = objc_msgSend_length();
            if (lVar10 != 0) {
              _objc_release(uVar8);
              goto LAB_00004464;
            }
            _objc_release(uVar25);
          }
          _objc_release(uVar8);
          lVar29 = lVar29 + 1;
          uVar8 = extraout_x1_03;
        } while (auVar30._0_8_ != lVar29);
        auVar30 = objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar11,extraout_x1_03,&local_270,&local_170,0x10);
      } while (auVar30._0_8_ != 0);
    }
    uVar25 = 0;
LAB_00004464:
    _objc_release(uVar11);
    _objc_release(uVar9);
    _objc_release(uVar11);
    auVar30 = objc_msgSend_length(uVar25);
    if (auVar30._0_8_ != 0) {
      objc_msgSend_stringByReplacingOccurrencesOfString_withString_
                (uVar25,auVar30._8_8_,&cf_format_s_,&cf_newline_s_);
      uVar11 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar25);
      uStack_288 = 0;
      local_290 = 0;
      uStack_278 = 0;
      uStack_280 = 0;
      lStack_2a8 = 0;
      local_2b0 = 0;
      uStack_298 = 0;
      local_2a0 = (long *)0x0;
      objc_msgSend_componentsSeparatedByString_(uVar11,extraout_x1_04,&cf_newline_s_);
      auVar30 = _objc_retainAutoreleasedReturnValue();
      uVar8 = auVar30._0_8_;
      lVar27 = objc_msgSend_countByEnumeratingWithState_objects_count_
                         (uVar8,auVar30._8_8_,&local_2b0,auStack_1f0,0x10);
      if (lVar27 != 0) {
        lVar29 = *local_2a0;
        do {
          lVar10 = 0;
          do {
            if (*local_2a0 != lVar29) {
              _objc_enumerationMutation(uVar8);
            }
            FUN_00009624(*(undefined8 *)(lStack_2a8 + lVar10 * 8));
            auVar30 = _objc_retainAutoreleasedReturnValue();
            uVar9 = auVar30._0_8_;
            objc_msgSend_objectForKeyedSubscript_(uVar9,auVar30._8_8_,&cf_Package);
            auVar30 = _objc_retainAutoreleasedReturnValue();
            uVar12 = objc_msgSend_isEqualToString_
                               (auVar30._0_8_,auVar30._8_8_,&cf_com_wkk_systembox);
            _objc_release(auVar30._0_8_);
            if ((uVar12 & 1) != 0) {
              objc_msgSend_objectForKeyedSubscript_(uVar9,extraout_x1_05,&cf_Status);
              auVar30 = _objc_retainAutoreleasedReturnValue();
              iVar2 = objc_msgSend_isEqualToString_
                                (auVar30._0_8_,auVar30._8_8_,&cf_installokinstalled);
              _objc_release(auVar30._0_8_);
              objc_msgSend_objectForKeyedSubscript_(uVar9,extraout_x1_07,&cf_Author);
              auVar30 = _objc_retainAutoreleasedReturnValue();
              iVar3 = objc_msgSend_isEqualToString_(auVar30._0_8_,auVar30._8_8_,&cf_wkk);
              _objc_release(auVar30._0_8_);
              objc_msgSend_objectForKeyedSubscript_(uVar9,extraout_x1_08,&cf_Maintainer);
              auVar30 = _objc_retainAutoreleasedReturnValue();
              iVar4 = objc_msgSend_isEqualToString_(auVar30._0_8_,auVar30._8_8_,&cf_wkk);
              _objc_release(auVar30._0_8_);
              _objc_release(uVar9);
              _objc_release(uVar8);
              _objc_release(uVar11);
              uVar24 = 0;
              uVar11 = extraout_x1_09;
              if (((iVar2 != 0) && (iVar3 != 0)) && (iVar4 != 0)) {
                lStack_228 = 0;
                local_230 = 0;
                uStack_218 = 0;
                local_220 = (long *)0x0;
                uStack_208 = 0;
                local_210 = 0;
                uStack_1f8 = 0;
                uStack_200 = 0;
                jbroot((NSString *)&cf__etc_apt_sources_list_d);
                uVar11 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_0001df58);
                auVar30 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_contentsOfDirectoryAtPath_error_(auVar30._0_8_,auVar30._8_8_,uVar11,0);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_release(auVar30._0_8_);
                objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_0001df88);
                uVar9 = _objc_retainAutoreleasedReturnValue();
                lStack_168 = 0;
                local_170 = 0;
                uStack_158 = 0;
                local_160 = (long *)0x0;
                uStack_148 = 0;
                local_150 = 0;
                uStack_138 = 0;
                uStack_140 = 0;
                auVar30 = _objc_retain(uVar8);
                uVar8 = auVar30._0_8_;
                lVar27 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                   (uVar8,auVar30._8_8_,&local_170,auStack_f0,0x10);
                if (lVar27 != 0) {
                  lVar29 = *local_160;
                  do {
                    lVar10 = 0;
                    do {
                      if (*local_160 != lVar29) {
                        _objc_enumerationMutation(uVar8);
                      }
                      uVar26 = *(undefined8 *)(lStack_168 + lVar10 * 8);
                      auVar30 = objc_msgSend_length(uVar26);
                      uVar25 = auVar30._8_8_;
                      if (auVar30._0_8_ != 0) {
                        objc_msgSend_stringByAppendingPathComponent_(uVar11,uVar25,uVar26);
                        auVar30 = _objc_retainAutoreleasedReturnValue();
                        objc_msgSend_addObject_(uVar9,auVar30._8_8_,auVar30._0_8_);
                        _objc_release(auVar30._0_8_);
                        uVar25 = extraout_x1_10;
                      }
                      lVar10 = lVar10 + 1;
                    } while (lVar27 != lVar10);
                    lVar27 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                       (uVar8,uVar25,&local_170,auStack_f0,0x10);
                  } while (lVar27 != 0);
                }
                _objc_release(uVar8);
                uVar25 = objc_msgSend_copy(uVar9);
                _objc_release(uVar9);
                _objc_release(uVar8);
                _objc_release(uVar11);
                auVar30 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                    (uVar25,extraout_x1_11,&local_230,auStack_f0,0x10);
                if (auVar30._0_8_ == 0) {
                  uVar24 = 0;
                }
                else {
                  uVar24 = 0;
                  lVar27 = *local_220;
                  do {
                    uVar11 = auVar30._8_8_;
                    lVar29 = 0;
                    do {
                      if (*local_220 != lVar27) {
                        _objc_enumerationMutation(uVar25);
                        uVar11 = extraout_x1_12;
                      }
                      objc_msgSend_stringWithContentsOfFile_encoding_error_
                                (PTR__OBJC_CLASS___NSString_0001df48,uVar11,
                                 *(undefined8 *)(lStack_228 + lVar29 * 8),4,0);
                      uVar11 = _objc_retainAutoreleasedReturnValue();
                      auVar31 = objc_msgSend_length();
                      if (auVar31._0_8_ != 0) {
                        objc_msgSend_stringByReplacingOccurrencesOfString_withString_
                                  (uVar11,auVar31._8_8_,&cf_format_s_,&cf_newline_s_);
                        uVar8 = _objc_retainAutoreleasedReturnValue();
                        _objc_release(uVar11);
                        uStack_248 = 0;
                        local_250 = 0;
                        uStack_238 = 0;
                        uStack_240 = 0;
                        lStack_268 = 0;
                        local_270 = 0;
                        uStack_258 = 0;
                        local_260 = (long *)0x0;
                        objc_msgSend_componentsSeparatedByString_
                                  (uVar8,extraout_x1_13,&cf_newline_s_);
                        auVar31 = _objc_retainAutoreleasedReturnValue();
                        uVar11 = auVar31._0_8_;
                        local_308 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                              (uVar11,auVar31._8_8_,&local_270,&local_170,0x10);
                        if (local_308 != 0) {
                          lVar10 = *local_260;
                          do {
                            lVar22 = 0;
                            do {
                              if (*local_260 != lVar10) {
                                _objc_enumerationMutation(uVar11);
                              }
                              FUN_00009624(*(undefined8 *)(lStack_268 + lVar22 * 8));
                              auVar31 = _objc_retainAutoreleasedReturnValue();
                              uVar9 = auVar31._0_8_;
                              objc_msgSend_objectForKeyedSubscript_(uVar9,auVar31._8_8_,&cf_Enabled)
                              ;
                              uVar26 = _objc_retainAutoreleasedReturnValue();
                              objc_msgSend_lowercaseString();
                              uVar13 = _objc_retainAutoreleasedReturnValue();
                              _objc_release(uVar26);
                              auVar31 = objc_msgSend_isEqualToString_(uVar13,extraout_x1_14,&cf_no);
                              if ((auVar31 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                                auVar31 = objc_msgSend_isEqualToString_
                                                    (uVar13,auVar31._8_8_,&cf_false);
                                if ((auVar31 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                                  auVar31 = objc_msgSend_isEqualToString_
                                                      (uVar13,auVar31._8_8_,&cf_0);
                                  if ((auVar31 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                                    uStack_288 = 0;
                                    local_290 = 0;
                                    uStack_278 = 0;
                                    uStack_280 = 0;
                                    lStack_2a8 = 0;
                                    local_2b0 = 0;
                                    uStack_298 = 0;
                                    local_2a0 = (long *)0x0;
                                    objc_msgSend_objectForKeyedSubscript_
                                              (uVar9,auVar31._8_8_,&cf_URIs);
                                    uVar26 = _objc_retainAutoreleasedReturnValue();
                                    objc_msgSend_whitespaceAndNewlineCharacterSet
                                              (PTR__OBJC_CLASS___NSCharacterSet_0001df70);
                                    auVar31 = _objc_retainAutoreleasedReturnValue();
                                    objc_msgSend_componentsSeparatedByCharactersInSet_
                                              (uVar26,auVar31._8_8_,auVar31._0_8_);
                                    uVar14 = _objc_retainAutoreleasedReturnValue();
                                    _objc_release(auVar31._0_8_);
                                    _objc_release(uVar26);
                                    local_2c8 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                                          (uVar14,extraout_x1_15,&local_2b0,
                                                           auStack_1f0,0x10);
                                    if (local_2c8 != 0) {
                                      lVar21 = *local_2a0;
                                      do {
                                        lVar28 = 0;
                                        do {
                                          if (*local_2a0 != lVar21) {
                                            _objc_enumerationMutation(uVar14);
                                          }
                                          uVar23 = *(undefined8 *)(lStack_2a8 + lVar28 * 8);
                                          auVar31 = objc_msgSend_length(uVar23);
                                          uVar26 = auVar31._8_8_;
                                          if (auVar31._0_8_ != 0) {
                                            objc_msgSend_componentsWithString_
                                                      (PTR__OBJC_CLASS___NSURLComponents_0001df98,
                                                       uVar26,uVar23);
                                            uVar26 = _objc_retainAutoreleasedReturnValue();
                                            objc_msgSend_scheme();
                                            uVar15 = _objc_retainAutoreleasedReturnValue();
                                            objc_msgSend_lowercaseString();
                                            uVar16 = _objc_retainAutoreleasedReturnValue();
                                            _objc_release(uVar15);
                                            objc_msgSend_host(uVar26);
                                            uVar15 = _objc_retainAutoreleasedReturnValue();
                                            objc_msgSend_lowercaseString();
                                            uVar17 = _objc_retainAutoreleasedReturnValue();
                                            _objc_release(uVar15);
                                            auVar31 = objc_msgSend_isEqualToString_
                                                                (uVar16,extraout_x1_16,&cf_http);
                                            if ((((auVar31 & (undefined  [16])0x1) ==
                                                  (undefined  [16])0x0) &&
                                                (iVar2 = objc_msgSend_isEqualToString_
                                                                   (uVar16,auVar31._8_8_,&cf_https),
                                                iVar2 == 0)) ||
                                               (lVar18 = objc_msgSend_length(uVar17), lVar18 == 0))
                                            {
LAB_00004bc8:
                                              _objc_release(uVar17);
                                              _objc_release(uVar16);
                                              _objc_release(uVar26);
                                              uVar26 = extraout_x1_20;
                                            }
                                            else {
                                              objc_msgSend_percentEncodedPath(uVar26);
                                              uVar15 = _objc_retainAutoreleasedReturnValue();
                                              objc_msgSend_lowercaseString();
                                              pcVar19 = (cfstringStruct *)
                                                        _objc_retainAutoreleasedReturnValue();
                                              pcVar1 = &cf___;
                                              if (pcVar19 != (cfstringStruct *)0x0) {
                                                pcVar1 = pcVar19;
                                              }
                                              uVar20 = _objc_retain(pcVar1);
                                              _objc_release(pcVar19);
                                              _objc_release(uVar15);
                                              auVar31 = objc_msgSend_isEqualToString_
                                                                  (uVar17,extraout_x1_17,
                                                                   &cf_axs_yourepo_com);
                                              if ((auVar31 & (undefined  [16])0x1) !=
                                                  (undefined  [16])0x0) {
LAB_00004de0:
                                                _objc_release(uVar20);
                                                _objc_release(uVar17);
                                                _objc_release(uVar16);
                                                _objc_release(uVar26);
LAB_00004e00:
                                                _objc_release(uVar14);
                                                _objc_release(uVar13);
                                                _objc_release(uVar9);
                                                _objc_release(uVar11);
                                                _objc_release(uVar8);
                                                uVar24 = 0;
                                                goto LAB_00004e38;
                                              }
                                              iVar2 = objc_msgSend_isEqualToString_
                                                                (uVar17,auVar31._8_8_,
                                                                 &cf_axs66_github_io);
                                              if (iVar2 == 0) {
                                                _objc_release(uVar20);
                                                goto LAB_00004bc8;
                                              }
                                              auVar31 = objc_msgSend_isEqualToString_
                                                                  (uVar20,extraout_x1_18,&cf__pro);
                                              if ((auVar31 & (undefined  [16])0x1) !=
                                                  (undefined  [16])0x0) goto LAB_00004de0;
                                              uVar12 = objc_msgSend_hasPrefix_
                                                                 (uVar20,auVar31._8_8_,&cf__pro_);
                                              _objc_release(uVar20);
                                              _objc_release(uVar17);
                                              _objc_release(uVar16);
                                              _objc_release(uVar26);
                                              uVar26 = extraout_x1_19;
                                              if ((uVar12 & 1) != 0) goto LAB_00004e00;
                                            }
                                            objc_msgSend_componentsWithString_
                                                      (PTR__OBJC_CLASS___NSURLComponents_0001df98,
                                                       uVar26,uVar23);
                                            uVar26 = _objc_retainAutoreleasedReturnValue();
                                            objc_msgSend_percentEncodedPath();
                                            pcVar19 = (cfstringStruct *)
                                                      _objc_retainAutoreleasedReturnValue();
                                            pcVar1 = &cf___;
                                            if (pcVar19 != (cfstringStruct *)0x0) {
                                              pcVar1 = pcVar19;
                                            }
                                            uVar23 = _objc_retain(pcVar1);
                                            _objc_release(pcVar19);
                                            objc_msgSend_scheme(uVar26);
                                            uVar15 = _objc_retainAutoreleasedReturnValue();
                                            objc_msgSend_lowercaseString();
                                            auVar31 = _objc_retainAutoreleasedReturnValue();
                                            iVar2 = objc_msgSend_isEqualToString_
                                                              (auVar31._0_8_,auVar31._8_8_,&cf_https
                                                              );
                                            if (iVar2 == 0) {
                                              uVar5 = 0;
                                            }
                                            else {
                                              objc_msgSend_host(uVar26);
                                              uVar16 = _objc_retainAutoreleasedReturnValue();
                                              objc_msgSend_lowercaseString();
                                              auVar32 = _objc_retainAutoreleasedReturnValue();
                                              iVar2 = objc_msgSend_isEqualToString_
                                                                (auVar32._0_8_,auVar32._8_8_,
                                                                 &cf_wkkyy00_github_io);
                                              if (iVar2 == 0) {
                                                uVar5 = 0;
                                              }
                                              else {
                                                auVar33 = objc_msgSend_length(uVar23);
                                                if (auVar33._0_8_ == 0) {
                                                  uVar5 = 1;
                                                }
                                                else {
                                                  uVar5 = objc_msgSend_isEqualToString_
                                                                    (uVar23,auVar33._8_8_,&cf__);
                                                }
                                              }
                                              _objc_release(auVar32._0_8_);
                                              _objc_release(uVar16);
                                            }
                                            _objc_release(auVar31._0_8_);
                                            _objc_release(uVar15);
                                            _objc_release(uVar23);
                                            _objc_release(uVar26);
                                            uVar24 = uVar5 | uVar24;
                                            uVar26 = extraout_x1_21;
                                          }
                                          lVar28 = lVar28 + 1;
                                        } while (local_2c8 != lVar28);
                                        local_2c8 = 
                                                  objc_msgSend_countByEnumeratingWithState_objects_count_
                                                            (uVar14,uVar26,&local_2b0,auStack_1f0,
                                                             0x10);
                                      } while (local_2c8 != 0);
                                    }
                                    _objc_release(uVar14);
                                  }
                                }
                              }
                              _objc_release(uVar13);
                              _objc_release(uVar9);
                              lVar22 = lVar22 + 1;
                            } while (lVar22 != local_308);
                            local_308 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                                  (uVar11,extraout_x1_22,&local_270,&local_170,0x10)
                            ;
                          } while (local_308 != 0);
                        }
                        _objc_release(uVar11);
                        uVar11 = uVar8;
                      }
                      _objc_release(uVar11);
                      lVar29 = lVar29 + 1;
                      uVar11 = extraout_x1_23;
                    } while (lVar29 != auVar30._0_8_);
                    auVar30 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                        (uVar25,extraout_x1_23,&local_230,auStack_f0,0x10);
                  } while (auVar30._0_8_ != 0);
                }
LAB_00004e38:
                _objc_release(uVar25);
                uVar11 = extraout_x1_25;
              }
              goto LAB_00004e40;
            }
            _objc_release(uVar9);
            lVar10 = lVar10 + 1;
          } while (lVar27 != lVar10);
          lVar27 = objc_msgSend_countByEnumeratingWithState_objects_count_
                             (uVar8,extraout_x1_06,&local_2b0,auStack_1f0,0x10);
        } while (lVar27 != 0);
      }
      _objc_release(uVar8);
      uVar25 = uVar11;
    }
    _objc_release(uVar25);
    uVar24 = 0;
    uVar11 = extraout_x1_24;
LAB_00004e40:
    objc_msgSend_setUserInteractionEnabled_(uVar6,uVar11,uVar24 & 1);
    objc_msgSend_navigationItem(uVar7);
    uVar11 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_rightBarButtonItem();
    auVar30 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setEnabled_(auVar30._0_8_,auVar30._8_8_,uVar24 & 1);
    _objc_release(auVar30._0_8_);
    _objc_release(uVar11);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  if (*(long *)PTR____stack_chk_guard_000180e0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



// ===== 0x00004ee0  SystemBoxRootListController__sb_installRootHeader

/* Function Stack Size: 0x10 bytes */

void SystemBoxRootListController::SystemBoxRootListController__sb_installRootHeader
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
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
  undefined8 in_d2;
  undefined auVar26 [16];
  undefined auVar27 [16];
  undefined auVar28 [16];
  undefined auVar29 [16];
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000180e0;
  objc_msgSend_mainScreen(PTR__OBJC_CLASS___UIScreen_0001dec0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_bounds();
  _objc_release(uVar2);
  _objc_alloc(PTR__OBJC_CLASS___UIView_0001dec8);
  uVar2 = objc_msgSend_initWithFrame_(0,0,in_d2,DAT_00011f70);
  objc_msgSend_clearColor(PTR__OBJC_CLASS___UIColor_0001deb8);
  auVar26 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setBackgroundColor_(uVar2,auVar26._8_8_,auVar26._0_8_);
  _objc_release(auVar26._0_8_);
  objc_msgSend_imageNamed_(PTR__OBJC_CLASS___UIImage_0001ded0,extraout_x1,&cf_icon);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  auVar26 = _objc_alloc(PTR__OBJC_CLASS___UIImageView_0001ded8);
  auVar26 = objc_msgSend_initWithImage_(auVar26._0_8_,auVar26._8_8_,uVar3);
  uVar4 = auVar26._0_8_;
  objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar4,auVar26._8_8_,0);
  objc_msgSend_setContentMode_(uVar4,extraout_x1_00,1);
  objc_msgSend_setClipsToBounds_(uVar4,extraout_x1_01,1);
  objc_msgSend_layer(uVar4);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setCornerRadius_(0x402c000000000000);
  _objc_release(uVar5);
  objc_msgSend_addSubview_(uVar2,extraout_x1_02,uVar4);
  auVar26 = _objc_alloc_init(PTR__OBJC_CLASS___UILabel_0001dee0);
  uVar5 = auVar26._0_8_;
  objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar5,auVar26._8_8_,0);
  objc_msgSend_setText_(uVar5,extraout_x1_03,&cf_SystemX);
  objc_msgSend_setTextAlignment_(uVar5,extraout_x1_04,1);
  objc_msgSend_systemFontOfSize_weight_
            (0x4046000000000000,*(undefined8 *)PTR__UIFontWeightHeavy_00018070,
             PTR__OBJC_CLASS___UIFont_0001dee8);
  auVar26 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setFont_(uVar5,auVar26._8_8_,auVar26._0_8_);
  _objc_release(auVar26._0_8_);
  objc_msgSend_colorWithRed_green_blue_alpha_
            (DAT_00011f78,0x3fe0000000000000,DAT_00011f80,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_0001deb8);
  auVar26 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setTextColor_(uVar5,auVar26._8_8_,auVar26._0_8_);
  _objc_release(auVar26._0_8_);
  objc_msgSend_setAdjustsFontSizeToFitWidth_(uVar5,extraout_x1_05,1);
  objc_msgSend_setMinimumScaleFactor_(0x3fe8000000000000,uVar5);
  objc_msgSend_addSubview_(uVar2,extraout_x1_06,uVar5);
  auVar26 = _objc_alloc_init(PTR__OBJC_CLASS___UILabel_0001dee0);
  uVar6 = auVar26._0_8_;
  objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar6,auVar26._8_8_,0);
  objc_msgSend_setText_(uVar6,extraout_x1_07,&cf_V);
  objc_msgSend_setTextAlignment_(uVar6,extraout_x1_08,1);
  objc_msgSend_systemFontOfSize_weight_
            (0x4031000000000000,*(undefined8 *)PTR__UIFontWeightRegular_00018080,
             PTR__OBJC_CLASS___UIFont_0001dee8);
  auVar26 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setFont_(uVar6,auVar26._8_8_,auVar26._0_8_);
  _objc_release(auVar26._0_8_);
  objc_msgSend_secondaryLabelColor(PTR__OBJC_CLASS___UIColor_0001deb8);
  auVar26 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setTextColor_(uVar6,auVar26._8_8_,auVar26._0_8_);
  _objc_release(auVar26._0_8_);
  objc_msgSend_setAdjustsFontSizeToFitWidth_(uVar6,extraout_x1_09,1);
  objc_msgSend_setMinimumScaleFactor_(0x3fe8000000000000,uVar6);
  objc_msgSend_addSubview_(uVar2,extraout_x1_10,uVar6);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_0001def0;
  objc_msgSend_topAnchor(uVar4);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_topAnchor(uVar2);
  auVar26 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToAnchor_constant_(DAT_00011f88,uVar7,auVar26._8_8_,auVar26._0_8_);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar8;
  objc_msgSend_centerXAnchor(uVar4);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_centerXAnchor(uVar2);
  auVar27 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToAnchor_(uVar9,auVar27._8_8_,auVar27._0_8_);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar10;
  objc_msgSend_widthAnchor(uVar4);
  uVar11 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToConstant_(0x404d000000000000);
  uVar12 = _objc_retainAutoreleasedReturnValue();
  local_c0 = uVar12;
  objc_msgSend_heightAnchor(uVar4);
  uVar13 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToConstant_(0x404d000000000000);
  uVar14 = _objc_retainAutoreleasedReturnValue();
  local_b8 = uVar14;
  objc_msgSend_topAnchor(uVar5);
  uVar15 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_bottomAnchor(uVar4);
  auVar28 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToAnchor_constant_
            (0x4032000000000000,uVar15,auVar28._8_8_,auVar28._0_8_);
  uVar16 = _objc_retainAutoreleasedReturnValue();
  local_b0 = uVar16;
  objc_msgSend_leadingAnchor(uVar5);
  uVar17 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_leadingAnchor(uVar2);
  auVar29 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToAnchor_constant_
            (0x403c000000000000,uVar17,auVar29._8_8_,auVar29._0_8_);
  uVar18 = _objc_retainAutoreleasedReturnValue();
  local_a8 = uVar18;
  objc_msgSend_trailingAnchor(uVar5);
  uVar19 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_trailingAnchor(uVar2);
  auVar30 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToAnchor_constant_
            (0xc03c000000000000,uVar19,auVar30._8_8_,auVar30._0_8_);
  uVar20 = _objc_retainAutoreleasedReturnValue();
  local_a0 = uVar20;
  objc_msgSend_topAnchor(uVar6);
  uVar21 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_bottomAnchor(uVar5);
  auVar31 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToAnchor_constant_
            (0x4010000000000000,uVar21,auVar31._8_8_,auVar31._0_8_);
  uVar22 = _objc_retainAutoreleasedReturnValue();
  local_98 = uVar22;
  objc_msgSend_leadingAnchor(uVar6);
  uVar23 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_leadingAnchor(uVar2);
  auVar32 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToAnchor_constant_
            (0x403c000000000000,uVar23,auVar32._8_8_,auVar32._0_8_);
  uVar24 = _objc_retainAutoreleasedReturnValue();
  local_90 = uVar24;
  objc_msgSend_trailingAnchor(uVar6);
  uVar25 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_trailingAnchor(uVar2);
  auVar33 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToAnchor_constant_
            (0xc03c000000000000,uVar25,auVar33._8_8_,auVar33._0_8_);
  auVar34 = _objc_retainAutoreleasedReturnValue();
  local_88 = auVar34._0_8_;
  objc_msgSend_arrayWithObjects_count_
            (PTR__OBJC_CLASS___NSArray_0001def8,auVar34._8_8_,&local_d0,10);
  auVar35 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_activateConstraints_(puVar1,auVar35._8_8_,auVar35._0_8_);
  _objc_release(auVar35._0_8_);
  _objc_release(auVar34._0_8_);
  _objc_release(auVar33._0_8_);
  _objc_release(uVar25);
  _objc_release(uVar24);
  _objc_release(auVar32._0_8_);
  _objc_release(uVar23);
  _objc_release(uVar22);
  _objc_release(auVar31._0_8_);
  _objc_release(uVar21);
  _objc_release(uVar20);
  _objc_release(auVar30._0_8_);
  _objc_release(uVar19);
  _objc_release(uVar18);
  _objc_release(auVar29._0_8_);
  _objc_release(uVar17);
  _objc_release(uVar16);
  _objc_release(auVar28._0_8_);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(auVar27._0_8_);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(auVar26._0_8_);
  _objc_release(uVar7);
  objc_msgSend_table(param_1);
  auVar26 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setTableHeaderView_(auVar26._0_8_,auVar26._8_8_,uVar2);
  _objc_release(auVar26._0_8_);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00005620  SystemBoxRootListController__tableView_cellForRowAtIndexPath_

/* Function Stack Size: 0x20 bytes */

ID SystemBoxRootListController::SystemBoxRootListController__tableView_cellForRowAtIndexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ID IVar11;
  undefined *puVar12;
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
  undefined auVar13 [16];
  undefined auVar14 [16];
  ID local_70;
  undefined *puStack_68;
  
  uVar2 = _objc_retain(param_4);
  auVar13 = _objc_retain(param_3);
  uVar6 = auVar13._0_8_;
  objc_msgSend_specifierAtIndexPath_(param_1,auVar13._8_8_,uVar2);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  uVar3 = auVar13._0_8_;
  objc_msgSend_propertyForKey_(uVar3,auVar13._8_8_,&cf_developerProfile);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_boolValue();
  _objc_release(uVar4);
  if (iVar1 != 0) {
    objc_msgSend_sb_developerProfileCellForTableView_(param_1,extraout_x1,uVar6);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    goto LAB_00005df8;
  }
  puStack_68 = PTR_PTR_0001e000;
  local_70 = param_1;
  _objc_msgSendSuper2(&local_70,PTR_s_tableView_cellForRowAtIndexPath__0001dde0,uVar6,uVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  objc_msgSend_propertyForKey_(uVar3,extraout_x1_00,&cf_systemImage);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  auVar13 = objc_msgSend_length();
  uVar4 = auVar13._8_8_;
  if (auVar13._0_8_ != 0) {
    objc_msgSend_configurationWithPointSize_weight_
              (0x4032000000000000,PTR__OBJC_CLASS___UIImageSymbolConfiguration_0001df00,uVar4,6);
    auVar13 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_systemImageNamed_withConfiguration_
              (PTR__OBJC_CLASS___UIImage_0001ded0,auVar13._8_8_,uVar6,auVar13._0_8_);
    auVar14 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_imageWithRenderingMode_(auVar14._0_8_,auVar14._8_8_,2);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar14._0_8_);
    objc_msgSend_imageView(uVar5);
    auVar14 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setImage_(auVar14._0_8_,auVar14._8_8_,uVar4);
    _objc_release(auVar14._0_8_);
    objc_msgSend_colorWithRed_green_blue_alpha_
              (DAT_00011f78,0x3fe0000000000000,DAT_00011f80,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_0001deb8);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_imageView(uVar5);
    auVar14 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setTintColor_(auVar14._0_8_,auVar14._8_8_,uVar7);
    _objc_release(auVar14._0_8_);
    _objc_release(uVar7);
    _objc_release(uVar4);
    _objc_release(auVar13._0_8_);
    uVar4 = extraout_x1_01;
  }
  objc_msgSend_propertyForKey_(uVar3,uVar4,&cf_subtitle);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  auVar13 = objc_msgSend_length();
  uVar4 = auVar13._8_8_;
  if (auVar13._0_8_ != 0) {
    objc_msgSend_detailTextLabel(uVar5);
    lVar8 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar4 = extraout_x1_02;
    if (lVar8 != 0) {
      objc_msgSend_detailTextLabel(uVar5);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setText_(auVar13._0_8_,auVar13._8_8_,uVar7);
      _objc_release(auVar13._0_8_);
      objc_msgSend_detailTextLabel(uVar5);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setNumberOfLines_(auVar13._0_8_,auVar13._8_8_,2);
      _objc_release(auVar13._0_8_);
      objc_msgSend_secondaryLabelColor(PTR__OBJC_CLASS___UIColor_0001deb8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_detailTextLabel(uVar5);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setTextColor_(auVar13._0_8_,auVar13._8_8_,uVar4);
      _objc_release(auVar13._0_8_);
      _objc_release(uVar4);
      uVar4 = extraout_x1_03;
    }
  }
  objc_msgSend_propertyForKey_(uVar3,uVar4,&cf_action);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_isEqual_(auVar13._0_8_,auVar13._8_8_,&cf_chooseVPNStatusBarColor);
  _objc_release(auVar13._0_8_);
  if (iVar1 == 0) {
    objc_msgSend_propertyForKey_(uVar3,extraout_x1_04,&cf_action);
    auVar13 = _objc_retainAutoreleasedReturnValue();
    iVar1 = objc_msgSend_isEqual_(auVar13._0_8_,auVar13._8_8_,&cf_chooseRunIndicatorColor);
    _objc_release(auVar13._0_8_);
    if (iVar1 != 0) {
      _objc_alloc(PTR__OBJC_CLASS___UIView_0001dec8);
      auVar13 = objc_msgSend_initWithFrame_(0,0,0x4038000000000000,0x4038000000000000);
      uVar4 = auVar13._0_8_;
      objc_msgSend_setTag_(uVar4,auVar13._8_8_,&DAT_000167e1);
      objc_msgSend_setUserInteractionEnabled_(uVar4,extraout_x1_07,0);
      objc_msgSend_layer(uVar4);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setCornerRadius_(0x4028000000000000);
      _objc_release(uVar9);
      objc_msgSend_layer(uVar4);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setBorderWidth_(0x3ff0000000000000);
      _objc_release(uVar9);
      objc_msgSend_separatorColor(PTR__OBJC_CLASS___UIColor_0001deb8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = _objc_retainAutorelease();
      uVar10 = objc_msgSend_CGColor();
      objc_msgSend_layer(uVar4);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setBorderColor_(auVar13._0_8_,auVar13._8_8_,uVar10);
      _objc_release(auVar13._0_8_);
      _objc_release(uVar9);
      uVar9 = _objc_alloc(PTR__OBJC_CLASS___UIView_0001dec8);
      objc_msgSend_bounds(uVar4);
      _CGRectInset();
      auVar13 = objc_msgSend_initWithFrame_(uVar9);
      uVar9 = auVar13._0_8_;
      objc_msgSend_setAutoresizingMask_(uVar9,auVar13._8_8_,0x12);
      objc_msgSend_layer(uVar9);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setCornerRadius_(0x4022000000000000);
      _objc_release(uVar10);
      FUN_00006154();
      auVar13 = _objc_retainAutoreleasedReturnValue();
      goto LAB_00005d44;
    }
    objc_msgSend_propertyForKey_(uVar3,extraout_x1_06,&cf_action);
    auVar13 = _objc_retainAutoreleasedReturnValue();
    iVar1 = objc_msgSend_isEqual_(auVar13._0_8_,auVar13._8_8_,&cf_chooseDesktopTextColor);
    _objc_release(auVar13._0_8_);
    if (iVar1 != 0) {
      _objc_alloc(PTR__OBJC_CLASS___UIView_0001dec8);
      auVar13 = objc_msgSend_initWithFrame_(0,0,0x4038000000000000,0x4038000000000000);
      uVar4 = auVar13._0_8_;
      objc_msgSend_setTag_(uVar4,auVar13._8_8_,&DAT_000167e6);
      objc_msgSend_setUserInteractionEnabled_(uVar4,extraout_x1_08,0);
      objc_msgSend_layer(uVar4);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setCornerRadius_(0x4028000000000000);
      _objc_release(uVar9);
      objc_msgSend_layer(uVar4);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setBorderWidth_(0x3ff0000000000000);
      _objc_release(uVar9);
      objc_msgSend_separatorColor(PTR__OBJC_CLASS___UIColor_0001deb8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = _objc_retainAutorelease();
      uVar10 = objc_msgSend_CGColor();
      objc_msgSend_layer(uVar4);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setBorderColor_(auVar13._0_8_,auVar13._8_8_,uVar10);
      _objc_release(auVar13._0_8_);
      _objc_release(uVar9);
      uVar9 = _objc_alloc(PTR__OBJC_CLASS___UIView_0001dec8);
      objc_msgSend_bounds(uVar4);
      _CGRectInset();
      auVar13 = objc_msgSend_initWithFrame_(uVar9);
      uVar9 = auVar13._0_8_;
      objc_msgSend_setAutoresizingMask_(uVar9,auVar13._8_8_,0x12);
      objc_msgSend_layer(uVar9);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setCornerRadius_(0x4022000000000000);
      _objc_release(uVar10);
      FUN_000063b8();
      auVar13 = _objc_retainAutoreleasedReturnValue();
      goto LAB_00005d44;
    }
    objc_msgSend_accessoryView(uVar5);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    puVar12 = (undefined *)objc_msgSend_tag();
    _objc_release(uVar4);
    uVar4 = extraout_x1_11;
    if (puVar12 == &DAT_000167df) {
LAB_00005ee0:
      objc_msgSend_setAccessoryView_(uVar5,uVar4,0);
    }
    else {
      objc_msgSend_accessoryView(uVar5);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      puVar12 = (undefined *)objc_msgSend_tag();
      _objc_release(uVar4);
      if (puVar12 == &DAT_000167e1) {
        objc_msgSend_setAccessoryView_(uVar5,extraout_x1_12,0);
      }
      else {
        objc_msgSend_accessoryView(uVar5);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        puVar12 = (undefined *)objc_msgSend_tag();
        _objc_release(uVar4);
        uVar4 = extraout_x1_13;
        if (puVar12 == &DAT_000167e6) goto LAB_00005ee0;
      }
    }
  }
  else {
    _objc_alloc(PTR__OBJC_CLASS___UIView_0001dec8);
    auVar13 = objc_msgSend_initWithFrame_(0,0,0x4038000000000000,0x4038000000000000);
    uVar4 = auVar13._0_8_;
    objc_msgSend_setTag_(uVar4,auVar13._8_8_,&DAT_000167df);
    objc_msgSend_setUserInteractionEnabled_(uVar4,extraout_x1_05,0);
    objc_msgSend_layer(uVar4);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setCornerRadius_(0x4028000000000000);
    _objc_release(uVar9);
    objc_msgSend_layer(uVar4);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setBorderWidth_(0x3ff0000000000000);
    _objc_release(uVar9);
    objc_msgSend_separatorColor(PTR__OBJC_CLASS___UIColor_0001deb8);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = _objc_retainAutorelease();
    uVar10 = objc_msgSend_CGColor();
    objc_msgSend_layer(uVar4);
    auVar13 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setBorderColor_(auVar13._0_8_,auVar13._8_8_,uVar10);
    _objc_release(auVar13._0_8_);
    _objc_release(uVar9);
    uVar9 = _objc_alloc(PTR__OBJC_CLASS___UIView_0001dec8);
    objc_msgSend_bounds(uVar4);
    _CGRectInset();
    auVar13 = objc_msgSend_initWithFrame_(uVar9);
    uVar9 = auVar13._0_8_;
    objc_msgSend_setAutoresizingMask_(uVar9,auVar13._8_8_,0x12);
    objc_msgSend_layer(uVar9);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setCornerRadius_(0x4022000000000000);
    _objc_release(uVar10);
    FUN_00005ef0();
    auVar13 = _objc_retainAutoreleasedReturnValue();
LAB_00005d44:
    objc_msgSend_setBackgroundColor_(uVar9,auVar13._8_8_,auVar13._0_8_);
    _objc_release(auVar13._0_8_);
    objc_msgSend_addSubview_(uVar4,extraout_x1_09,uVar9);
    objc_msgSend_setAccessoryView_(uVar5,extraout_x1_10,uVar4);
    _objc_release(uVar9);
    _objc_release(uVar4);
  }
  objc_msgSend_labelColor(PTR__OBJC_CLASS___UIColor_0001deb8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_textLabel(uVar5);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setTextColor_(auVar13._0_8_,auVar13._8_8_,uVar4);
  _objc_release(auVar13._0_8_);
  _objc_release(uVar4);
  objc_msgSend_secondarySystemGroupedBackgroundColor(PTR__OBJC_CLASS___UIColor_0001deb8);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setBackgroundColor_(uVar5,auVar13._8_8_,auVar13._0_8_);
  _objc_release(auVar13._0_8_);
  _objc_release(uVar7);
LAB_00005df8:
  _objc_release(uVar6);
  _objc_release(uVar3);
  _objc_release(uVar2);
  IVar11 = _objc_autoreleaseReturnValue(uVar5);
  return IVar11;
}



// ===== 0x00005ef0  FUN_00005ef0

void FUN_00005ef0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  undefined auVar10 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_0001df40;
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_dictionaryWithContentsOfFile_(puVar1,auVar10._8_8_,auVar10._0_8_);
  puVar2 = (undefined *)_objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_000180b0;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  uVar3 = _objc_retain(puVar1);
  _objc_release(puVar2);
  _objc_release(auVar10._0_8_);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1,&cf_vpnStatusBarColorRed);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_doubleValue_0001d7e0;
  auVar10 = _objc_opt_respondsToSelector(uVar4,PTR_s_doubleValue_0001d7e0);
  uVar9 = DAT_00011f90;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_vpnStatusBarColorRed);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar9 = objc_msgSend_doubleValue();
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1_00,&cf_vpnStatusBarColorGreen);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  auVar10 = _objc_opt_respondsToSelector(uVar5,puVar1);
  uVar4 = DAT_00011f98;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_vpnStatusBarColorGreen);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar4 = objc_msgSend_doubleValue();
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1_01,&cf_vpnStatusBarColorBlue);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  auVar10 = _objc_opt_respondsToSelector(uVar6,puVar1);
  uVar5 = DAT_00011fa0;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_vpnStatusBarColorBlue);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar5 = objc_msgSend_doubleValue();
    _objc_release(uVar7);
  }
  _objc_release(uVar6);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1_02,&cf_vpnStatusBarColorAlpha);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  auVar10 = _objc_opt_respondsToSelector(uVar6,puVar1);
  uVar7 = 0x3ff0000000000000;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_vpnStatusBarColorAlpha);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    uVar7 = objc_msgSend_doubleValue();
    _objc_release(uVar8);
  }
  _objc_release(uVar6);
  objc_msgSend_colorWithRed_green_blue_alpha_
            (uVar9,uVar4,uVar5,uVar7,PTR__OBJC_CLASS___UIColor_0001deb8);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_autoreleaseReturnValue(uVar9);
  return;
}



// ===== 0x00006154  FUN_00006154

void FUN_00006154(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar9;
  undefined auVar10 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_0001df40;
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_dictionaryWithContentsOfFile_(puVar1,auVar10._8_8_,auVar10._0_8_);
  puVar2 = (undefined *)_objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_000180b0;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  uVar3 = _objc_retain(puVar1);
  _objc_release(puVar2);
  _objc_release(auVar10._0_8_);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1,&cf_runIndicatorColorRed);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_doubleValue_0001d7e0;
  auVar10 = _objc_opt_respondsToSelector(uVar4,PTR_s_doubleValue_0001d7e0);
  uVar9 = DAT_00011fa8;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_runIndicatorColorRed);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar9 = objc_msgSend_doubleValue();
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1_00,&cf_runIndicatorColorGreen);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  auVar10 = _objc_opt_respondsToSelector(uVar5,puVar1);
  uVar4 = DAT_00011fb0;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_runIndicatorColorGreen);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar4 = objc_msgSend_doubleValue();
    _objc_release(uVar6);
  }
  _objc_release(uVar5);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1_01,&cf_runIndicatorColorBlue);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  auVar10 = _objc_opt_respondsToSelector(uVar6,puVar1);
  uVar5 = DAT_00011fb8;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_runIndicatorColorBlue);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar5 = objc_msgSend_doubleValue();
    _objc_release(uVar7);
  }
  _objc_release(uVar6);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1_02,&cf_runIndicatorColorAlpha);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  auVar10 = _objc_opt_respondsToSelector(uVar6,puVar1);
  uVar7 = 0x3ff0000000000000;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_runIndicatorColorAlpha);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    uVar7 = objc_msgSend_doubleValue();
    _objc_release(uVar8);
  }
  _objc_release(uVar6);
  objc_msgSend_colorWithRed_green_blue_alpha_
            (uVar9,uVar4,uVar5,uVar7,PTR__OBJC_CLASS___UIColor_0001deb8);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_autoreleaseReturnValue(uVar9);
  return;
}



// ===== 0x000063b8  FUN_000063b8

void FUN_000063b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined auVar10 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_0001df40;
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_dictionaryWithContentsOfFile_(puVar1,auVar10._8_8_,auVar10._0_8_);
  puVar2 = (undefined *)_objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSDictionary0__struct_000180b0;
  if (puVar2 != (undefined *)0x0) {
    puVar1 = puVar2;
  }
  uVar3 = _objc_retain(puVar1);
  _objc_release(puVar2);
  _objc_release(auVar10._0_8_);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1,&cf_desktopTextColorRed);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_doubleValue_0001d7e0;
  auVar10 = _objc_opt_respondsToSelector(uVar4,PTR_s_doubleValue_0001d7e0);
  uVar8 = 0;
  uVar9 = 0;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_desktopTextColorRed);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar9 = objc_msgSend_doubleValue();
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1_00,&cf_desktopTextColorGreen);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  auVar10 = _objc_opt_respondsToSelector(uVar4,puVar1);
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_desktopTextColorGreen);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar8 = objc_msgSend_doubleValue();
    _objc_release(uVar5);
  }
  _objc_release(uVar4);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1_01,&cf_desktopTextColorBlue);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  auVar10 = _objc_opt_respondsToSelector(uVar4,puVar1);
  uVar5 = 0;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_desktopTextColorBlue);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar5 = objc_msgSend_doubleValue();
    _objc_release(uVar6);
  }
  _objc_release(uVar4);
  objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1_02,&cf_desktopTextColorAlpha);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  auVar10 = _objc_opt_respondsToSelector(uVar4,puVar1);
  uVar6 = 0x3ff0000000000000;
  if ((auVar10 & (undefined  [16])0x1) != (undefined  [16])0x0) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,auVar10._8_8_,&cf_desktopTextColorAlpha);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    uVar6 = objc_msgSend_doubleValue();
    _objc_release(uVar7);
  }
  _objc_release(uVar4);
  objc_msgSend_colorWithRed_green_blue_alpha_
            (uVar9,uVar8,uVar5,uVar6,PTR__OBJC_CLASS___UIColor_0001deb8);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_autoreleaseReturnValue(uVar4);
  return;
}



// ===== 0x00006604  SystemBoxRootListController__tableView_heightForRowAtIndexPath_

/* Function Stack Size: 0x20 bytes */

double SystemBoxRootListController::SystemBoxRootListController__tableView_heightForRowAtIndexPath_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  double dVar5;
  undefined auVar6 [16];
  ID local_60;
  undefined *puStack_58;
  
  uVar1 = _objc_retain(param_3);
  auVar6 = _objc_retain(param_4);
  uVar2 = auVar6._0_8_;
  objc_msgSend_specifierAtIndexPath_(param_1,auVar6._8_8_,uVar2);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_propertyForKey_(auVar6._0_8_,auVar6._8_8_,&cf_developerProfile);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar4 = objc_msgSend_boolValue();
  _objc_release(uVar3);
  if ((uVar4 & 1) == 0) {
    puStack_58 = PTR_PTR_0001e000;
    local_60 = param_1;
    dVar5 = (double)_objc_msgSendSuper2(&local_60,PTR_s_tableView_heightForRowAtIndexPat_0001ddf0,
                                        uVar1,uVar2);
  }
  else {
    dVar5 = 60.0;
  }
  _objc_release(auVar6._0_8_);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return dVar5;
}



// ===== 0x000066f0  SystemBoxRootListController__sb_developerProfileCellForTableView_

/* Function Stack Size: 0x18 bytes */

ID SystemBoxRootListController::SystemBoxRootListController__sb_developerProfileCellForTableView_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
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
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ID IVar29;
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
  undefined auVar30 [16];
  undefined auVar31 [16];
  undefined auVar32 [16];
  undefined auVar33 [16];
  undefined auVar34 [16];
  undefined auVar35 [16];
  undefined auVar36 [16];
  undefined auVar37 [16];
  undefined auVar38 [16];
  undefined auVar39 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  
  local_80 = *(long *)PTR____stack_chk_guard_000180e0;
  objc_msgSend_dequeueReusableCellWithIdentifier_(param_3,param_2,&cf_SystemBoxDeveloperProfileCell)
  ;
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    auVar30 = _objc_alloc(PTR__OBJC_CLASS___UITableViewCell_0001df08);
    auVar30 = objc_msgSend_initWithStyle_reuseIdentifier_
                        (auVar30._0_8_,auVar30._8_8_,0,&cf_SystemBoxDeveloperProfileCell);
    lVar2 = auVar30._0_8_;
    objc_msgSend_setSelectionStyle_(lVar2,auVar30._8_8_,3);
    objc_msgSend_setAccessoryType_(lVar2,extraout_x1,0);
    auVar30 = _objc_alloc(PTR__OBJC_CLASS___UIImageView_0001ded8);
    objc_msgSend_dataWithBytes_length_
              (PTR__OBJC_CLASS___NSData_0001df90,auVar30._8_8_,&JPEG_00011fd8,0x78d);
    auVar31 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_imageWithData_(PTR__OBJC_CLASS___UIImage_0001ded0,auVar31._8_8_,auVar31._0_8_);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar31._0_8_);
    uVar4 = objc_msgSend_initWithImage_(auVar30._0_8_,extraout_x1_00,uVar3);
    _objc_release(uVar3);
    objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar4,extraout_x1_01,0);
    objc_msgSend_setTag_(uVar4,extraout_x1_02,&DAT_000167e3);
    objc_msgSend_setContentMode_(uVar4,extraout_x1_03,2);
    objc_msgSend_setClipsToBounds_(uVar4,extraout_x1_04,1);
    objc_msgSend_layer(uVar4);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setCornerRadius_(0x4034000000000000);
    _objc_release(uVar3);
    objc_msgSend_layer(uVar4);
    auVar30 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setMasksToBounds_(auVar30._0_8_,auVar30._8_8_,1);
    _objc_release(auVar30._0_8_);
    objc_msgSend_contentView(lVar2);
    auVar30 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_addSubview_(auVar30._0_8_,auVar30._8_8_,uVar4);
    _objc_release(auVar30._0_8_);
    auVar30 = _objc_alloc_init(PTR__OBJC_CLASS___UILabel_0001dee0);
    uVar3 = auVar30._0_8_;
    objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar3,auVar30._8_8_,0);
    objc_msgSend_setTag_(uVar3,extraout_x1_05,&DAT_000167e4);
    objc_msgSend_setText_(uVar3,extraout_x1_06,&cf_wkk);
    objc_msgSend_systemFontOfSize_weight_
              (0x4032000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_00018088,
               PTR__OBJC_CLASS___UIFont_0001dee8);
    auVar30 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setFont_(uVar3,auVar30._8_8_,auVar30._0_8_);
    _objc_release(auVar30._0_8_);
    objc_msgSend_labelColor(PTR__OBJC_CLASS___UIColor_0001deb8);
    auVar30 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setTextColor_(uVar3,auVar30._8_8_,auVar30._0_8_);
    _objc_release(auVar30._0_8_);
    objc_msgSend_contentView(lVar2);
    auVar30 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_addSubview_(auVar30._0_8_,auVar30._8_8_,uVar3);
    _objc_release(auVar30._0_8_);
    auVar30 = _objc_alloc_init(PTR__OBJC_CLASS___UILabel_0001dee0);
    uVar5 = auVar30._0_8_;
    objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar5,auVar30._8_8_,0);
    objc_msgSend_setTag_(uVar5,extraout_x1_07,&DAT_000167e5);
    objc_msgSend_setText_(uVar5,extraout_x1_08,&cf_https___Wkkyy00_github_io_);
    objc_msgSend_systemFontOfSize_weight_
              (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightRegular_00018080,
               PTR__OBJC_CLASS___UIFont_0001dee8);
    auVar30 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setFont_(uVar5,auVar30._8_8_,auVar30._0_8_);
    _objc_release(auVar30._0_8_);
    objc_msgSend_secondaryLabelColor(PTR__OBJC_CLASS___UIColor_0001deb8);
    auVar30 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setTextColor_(uVar5,auVar30._8_8_,auVar30._0_8_);
    _objc_release(auVar30._0_8_);
    objc_msgSend_setAdjustsFontSizeToFitWidth_(uVar5,extraout_x1_09,1);
    objc_msgSend_setMinimumScaleFactor_(0x3fe8000000000000,uVar5);
    objc_msgSend_contentView(lVar2);
    auVar30 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_addSubview_(auVar30._0_8_,auVar30._8_8_,uVar5);
    _objc_release(auVar30._0_8_);
    puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_0001def0;
    objc_msgSend_leadingAnchor(uVar4);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_contentView(lVar2);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_leadingAnchor();
    auVar30 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_constraintEqualToAnchor_constant_
              (0x4030000000000000,uVar6,auVar30._8_8_,auVar30._0_8_);
    uVar8 = _objc_retainAutoreleasedReturnValue();
    local_d0 = uVar8;
    objc_msgSend_centerYAnchor(uVar4);
    uVar9 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_contentView(lVar2);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_centerYAnchor();
    auVar31 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_constraintEqualToAnchor_(uVar9,auVar31._8_8_,auVar31._0_8_);
    uVar11 = _objc_retainAutoreleasedReturnValue();
    local_c8 = uVar11;
    objc_msgSend_widthAnchor(uVar4);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_constraintEqualToConstant_(0x4044000000000000);
    uVar13 = _objc_retainAutoreleasedReturnValue();
    local_c0 = uVar13;
    objc_msgSend_heightAnchor(uVar4);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_constraintEqualToConstant_(0x4044000000000000);
    uVar15 = _objc_retainAutoreleasedReturnValue();
    local_b8 = uVar15;
    objc_msgSend_leadingAnchor(uVar3);
    uVar16 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_trailingAnchor(uVar4);
    auVar32 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_constraintEqualToAnchor_constant_
              (0x402c000000000000,uVar16,auVar32._8_8_,auVar32._0_8_);
    uVar17 = _objc_retainAutoreleasedReturnValue();
    local_b0 = uVar17;
    objc_msgSend_trailingAnchor(uVar3);
    uVar18 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_contentView(lVar2);
    uVar19 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_trailingAnchor();
    auVar33 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_constraintEqualToAnchor_constant_
              (0xc030000000000000,uVar18,auVar33._8_8_,auVar33._0_8_);
    uVar20 = _objc_retainAutoreleasedReturnValue();
    local_a8 = uVar20;
    objc_msgSend_topAnchor(uVar3);
    uVar21 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_contentView(lVar2);
    uVar22 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_topAnchor();
    auVar34 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_constraintEqualToAnchor_constant_
              (0x4024000000000000,uVar21,auVar34._8_8_,auVar34._0_8_);
    uVar23 = _objc_retainAutoreleasedReturnValue();
    local_a0 = uVar23;
    objc_msgSend_leadingAnchor(uVar5);
    uVar24 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_leadingAnchor(uVar3);
    auVar35 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_constraintEqualToAnchor_(uVar24,auVar35._8_8_,auVar35._0_8_);
    uVar25 = _objc_retainAutoreleasedReturnValue();
    local_98 = uVar25;
    objc_msgSend_trailingAnchor(uVar5);
    uVar26 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_trailingAnchor(uVar3);
    auVar36 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_constraintEqualToAnchor_(uVar26,auVar36._8_8_,auVar36._0_8_);
    uVar27 = _objc_retainAutoreleasedReturnValue();
    local_90 = uVar27;
    objc_msgSend_topAnchor(uVar5);
    uVar28 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_bottomAnchor(uVar3);
    auVar37 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_constraintEqualToAnchor_constant_
              (0x4008000000000000,uVar28,auVar37._8_8_,auVar37._0_8_);
    auVar38 = _objc_retainAutoreleasedReturnValue();
    local_88 = auVar38._0_8_;
    objc_msgSend_arrayWithObjects_count_
              (PTR__OBJC_CLASS___NSArray_0001def8,auVar38._8_8_,&local_d0,10);
    auVar39 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_activateConstraints_(puVar1,auVar39._8_8_,auVar39._0_8_);
    _objc_release(auVar39._0_8_);
    _objc_release(auVar38._0_8_);
    _objc_release(auVar37._0_8_);
    _objc_release(uVar28);
    _objc_release(uVar27);
    _objc_release(auVar36._0_8_);
    _objc_release(uVar26);
    _objc_release(uVar25);
    _objc_release(auVar35._0_8_);
    _objc_release(uVar24);
    _objc_release(uVar23);
    _objc_release(auVar34._0_8_);
    _objc_release(uVar22);
    _objc_release(uVar21);
    _objc_release(uVar20);
    _objc_release(auVar33._0_8_);
    _objc_release(uVar19);
    _objc_release(uVar18);
    _objc_release(uVar17);
    _objc_release(auVar32._0_8_);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(uVar14);
    _objc_release(uVar13);
    _objc_release(uVar12);
    _objc_release(uVar11);
    _objc_release(auVar31._0_8_);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(auVar30._0_8_);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  objc_msgSend_secondarySystemGroupedBackgroundColor(PTR__OBJC_CLASS___UIColor_0001deb8);
  auVar30 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setBackgroundColor_(lVar2,auVar30._8_8_,auVar30._0_8_);
  _objc_release(auVar30._0_8_);
  objc_msgSend_labelColor(PTR__OBJC_CLASS___UIColor_0001deb8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_contentView(lVar2);
  auVar30 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_viewWithTag_(auVar30._0_8_,auVar30._8_8_,&DAT_000167e4);
  auVar31 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setTextColor_(auVar31._0_8_,auVar31._8_8_,uVar3);
  _objc_release(auVar31._0_8_);
  _objc_release(auVar30._0_8_);
  _objc_release(uVar3);
  objc_msgSend_secondaryLabelColor(PTR__OBJC_CLASS___UIColor_0001deb8);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_contentView(lVar2);
  auVar30 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_viewWithTag_(auVar30._0_8_,auVar30._8_8_,&DAT_000167e5);
  auVar31 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setTextColor_(auVar31._0_8_,auVar31._8_8_,uVar3);
  _objc_release(auVar31._0_8_);
  _objc_release(auVar30._0_8_);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_80) {
    IVar29 = _objc_autoreleaseReturnValue(lVar2);
    return IVar29;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00006fa0  SystemBoxRootListController__tableView_didSelectRowAtIndexPath_

/* Function Stack Size: 0x20 bytes */

void SystemBoxRootListController::SystemBoxRootListController__tableView_didSelectRowAtIndexPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined auVar5 [16];
  ID local_50;
  undefined *puStack_48;
  
  uVar2 = _objc_retain(param_4);
  auVar5 = _objc_retain(param_3);
  uVar3 = auVar5._0_8_;
  objc_msgSend_specifierAtIndexPath_(param_1,auVar5._8_8_,uVar2);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_propertyForKey_(auVar5._0_8_,auVar5._8_8_,&cf_developerProfile);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_boolValue();
  _objc_release(uVar4);
  if (iVar1 == 0) {
    puStack_48 = PTR_PTR_0001e000;
    local_50 = param_1;
    _objc_msgSendSuper2(&local_50,PTR_s_tableView_didSelectRowAtIndexPat_0001dde8,uVar3,uVar2);
    _objc_release(uVar2);
    _objc_release(uVar3);
  }
  else {
    objc_msgSend_deselectRowAtIndexPath_animated_(uVar3,extraout_x1,uVar2,1);
    _objc_release(uVar2);
    _objc_release(uVar3);
    objc_msgSend_sb_openDeveloperSileoSource(param_1);
  }
  _objc_release(auVar5._0_8_);
  return;
}



// ===== 0x0000709c  SystemBoxRootListController__sb_openDeveloperSileoSource

/* Function Stack Size: 0x10 bytes */

void SystemBoxRootListController::SystemBoxRootListController__sb_openDeveloperSileoSource
               (ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  objc_msgSend_URLWithString_
            (PTR__OBJC_CLASS___NSURL_0001df10,param_2,&cf_sileo___source_https___Wkkyy00_github_io_)
  ;
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_URLWithString_
            (PTR__OBJC_CLASS___NSURL_0001df10,auVar3._8_8_,&cf_https___Wkkyy00_github_io_);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_sharedApplication(PTR__OBJC_CLASS___UIApplication_0001df18);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_60 = PTR___NSConcreteStackBlock_00018090;
  local_58 = DAT_00011fc0;
  local_50 = FUN_0000719c;
  puStack_48 = &DAT_00018218;
  local_40 = uVar2;
  local_38 = uVar1;
  uVar1 = _objc_retain(uVar1);
  auVar4 = _objc_retain(uVar2);
  objc_msgSend_openURL_options_completionHandler_
            (auVar4._0_8_,auVar4._8_8_,auVar3._0_8_,PTR____NSDictionary0__struct_000180b0,&local_60)
  ;
  _objc_release(local_38);
  _objc_release(local_40);
  _objc_release(uVar1);
  _objc_release(auVar4._0_8_);
  _objc_release(auVar3._0_8_);
  return;
}



// ===== 0x0000719c  FUN_0000719c

void FUN_0000719c(long param_1,uint param_2)

{
  if ((param_2 & 1) != 0) {
    return;
  }
  objc_msgSend_openURL_options_completionHandler_
            (*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
             PTR____NSDictionary0__struct_000180b0,0);
  return;
}



// ===== 0x000071bc  FUN_000071bc

void FUN_000071bc(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  return;
}



// ===== 0x000071e4  FUN_000071e4

void FUN_000071e4(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



// ===== 0x0000720c  SystemBoxRootListController__tableView_willDisplayFooterView_forSection_

/* Function Stack Size: 0x28 bytes */

void SystemBoxRootListController::
     SystemBoxRootListController__tableView_willDisplayFooterView_forSection_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined auVar6 [16];
  
  uVar2 = _objc_retain(param_4);
  uVar3 = _objc_opt_class(PTR__OBJC_CLASS___UITableViewHeaderFooterView_0001df20);
  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);
  if ((uVar4 & 1) != 0) {
    uVar3 = _objc_retain(uVar2);
    objc_msgSend_textLabel();
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setTextAlignment_(auVar6._0_8_,auVar6._8_8_,4);
    _objc_release(auVar6._0_8_);
    objc_msgSend_textLabel(uVar3);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setNumberOfLines_(auVar6._0_8_,auVar6._8_8_,0);
    _objc_release(auVar6._0_8_);
    objc_msgSend_secondaryLabelColor(PTR__OBJC_CLASS___UIColor_0001deb8);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_textLabel(uVar3);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setTextColor_(auVar6._0_8_,auVar6._8_8_,uVar5);
    _objc_release(auVar6._0_8_);
    _objc_release(uVar5);
    objc_msgSend_textLabel(uVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_text();
    auVar6 = _objc_retainAutoreleasedReturnValue();
    iVar1 = objc_msgSend_containsString_(auVar6._0_8_,auVar6._8_8_,&cf_wkk_wkkyy0_);
    _objc_release(auVar6._0_8_);
    _objc_release(uVar5);
    if (iVar1 != 0) {
      objc_msgSend_textLabel(uVar3);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setTextAlignment_(auVar6._0_8_,auVar6._8_8_,1);
      _objc_release(auVar6._0_8_);
      objc_msgSend_textLabel(uVar3);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setNumberOfLines_(auVar6._0_8_,auVar6._8_8_,1);
      _objc_release(auVar6._0_8_);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x0000738c  SystemBoxRootListController__sb_specifierForPreferenceKey_

/* Function Stack Size: 0x18 bytes */

ID SystemBoxRootListController::SystemBoxRootListController__sb_specifierForPreferenceKey_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ID IVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
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
  
  local_68 = *(long *)PTR____stack_chk_guard_000180e0;
  uVar1 = _objc_retain(param_3);
  lVar2 = objc_msgSend_length();
  if (lVar2 == 0) {
    uVar6 = 0;
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
    objc_msgSend_specifiers(param_1);
    auVar9 = _objc_retainAutoreleasedReturnValue();
    uVar3 = auVar9._0_8_;
    auVar9 = objc_msgSend_countByEnumeratingWithState_objects_count_
                       (uVar3,auVar9._8_8_,&local_130,auStack_e8,0x10);
    if (auVar9._0_8_ != 0) {
      lVar2 = *local_120;
      do {
        uVar6 = auVar9._8_8_;
        lVar8 = 0;
        do {
          if (*local_120 != lVar2) {
            _objc_enumerationMutation(uVar3);
            uVar6 = extraout_x1;
          }
          uVar7 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          objc_msgSend_propertyForKey_(uVar7,uVar6,&cf_key);
          auVar10 = _objc_retainAutoreleasedReturnValue();
          uVar4 = objc_msgSend_isEqualToString_(auVar10._0_8_,auVar10._8_8_,uVar1);
          _objc_release(auVar10._0_8_);
          if ((uVar4 & 1) != 0) {
            uVar6 = _objc_retain(uVar7);
            goto LAB_000074ac;
          }
          lVar8 = lVar8 + 1;
          uVar6 = extraout_x1_00;
        } while (auVar9._0_8_ != lVar8);
        auVar9 = objc_msgSend_countByEnumeratingWithState_objects_count_
                           (uVar3,extraout_x1_00,&local_130,auStack_e8,0x10);
      } while (auVar9._0_8_ != 0);
    }
    uVar6 = 0;
LAB_000074ac:
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_68) {
    IVar5 = _objc_autoreleaseReturnValue(uVar6);
    return IVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00007504  SystemBoxRootListController__sb_specifierForAction_

/* Function Stack Size: 0x18 bytes */

ID SystemBoxRootListController::SystemBoxRootListController__sb_specifierForAction_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ID IVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
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
  
  local_68 = *(long *)PTR____stack_chk_guard_000180e0;
  uVar1 = _objc_retain(param_3);
  lVar2 = objc_msgSend_length();
  if (lVar2 == 0) {
    uVar6 = 0;
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
    objc_msgSend_specifiers(param_1);
    auVar9 = _objc_retainAutoreleasedReturnValue();
    uVar3 = auVar9._0_8_;
    auVar9 = objc_msgSend_countByEnumeratingWithState_objects_count_
                       (uVar3,auVar9._8_8_,&local_130,auStack_e8,0x10);
    if (auVar9._0_8_ != 0) {
      lVar2 = *local_120;
      do {
        uVar6 = auVar9._8_8_;
        lVar8 = 0;
        do {
          if (*local_120 != lVar2) {
            _objc_enumerationMutation(uVar3);
            uVar6 = extraout_x1;
          }
          uVar7 = *(undefined8 *)(lStack_128 + lVar8 * 8);
          objc_msgSend_propertyForKey_(uVar7,uVar6,&cf_action);
          auVar10 = _objc_retainAutoreleasedReturnValue();
          uVar4 = objc_msgSend_isEqualToString_(auVar10._0_8_,auVar10._8_8_,uVar1);
          _objc_release(auVar10._0_8_);
          if ((uVar4 & 1) != 0) {
            uVar6 = _objc_retain(uVar7);
            goto LAB_00007624;
          }
          lVar8 = lVar8 + 1;
          uVar6 = extraout_x1_00;
        } while (auVar9._0_8_ != lVar8);
        auVar9 = objc_msgSend_countByEnumeratingWithState_objects_count_
                           (uVar3,extraout_x1_00,&local_130,auStack_e8,0x10);
      } while (auVar9._0_8_ != 0);
    }
    uVar6 = 0;
LAB_00007624:
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_68) {
    IVar5 = _objc_autoreleaseReturnValue(uVar6);
    return IVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000767c  SystemBoxRootListController__sb_updateVisibleSwitchForKey_value_

/* Function Stack Size: 0x1c bytes */

void SystemBoxRootListController::SystemBoxRootListController__sb_updateVisibleSwitchForKey_value_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined auVar7 [16];
  
  objc_msgSend_sb_specifierForPreferenceKey_();
  auVar7 = _objc_retainAutoreleasedReturnValue();
  lVar1 = auVar7._0_8_;
  if (lVar1 != 0) {
    objc_msgSend_cachedCellForSpecifier_(param_1,auVar7._8_8_,lVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = _objc_opt_class(PTR__OBJC_CLASS___PSControlTableCell_0001df28);
    uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);
    if ((uVar4 & 1) != 0) {
      auVar7 = _objc_retain(uVar2);
      uVar3 = auVar7._0_8_;
      objc_msgSend_numberWithBool_(PTR__OBJC_CLASS___NSNumber_0001df30,auVar7._8_8_,param_4);
      auVar7 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setValue_(uVar3,auVar7._8_8_,auVar7._0_8_);
      _objc_release(auVar7._0_8_);
      objc_msgSend_control(uVar3);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      uVar6 = _objc_opt_class(PTR__OBJC_CLASS___UISwitch_0001df38);
      uVar4 = _objc_opt_isKindOfClass(uVar5,uVar6);
      _objc_release(uVar5);
      if ((uVar4 & 1) != 0) {
        objc_msgSend_control(uVar3);
        auVar7 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setOn_animated_(auVar7._0_8_,auVar7._8_8_,param_4,0);
        _objc_release(auVar7._0_8_);
      }
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



// ===== 0x000077a8  SystemBoxRootListController__sb_updateVisibleColorAccessoryForAction_tag_color_

/* Function Stack Size: 0x28 bytes */

void SystemBoxRootListController::
     SystemBoxRootListController__sb_updateVisibleColorAccessoryForAction_tag_color_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long_long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined auVar7 [16];
  undefined auVar8 [16];
  
  auVar7 = _objc_retain(param_5);
  objc_msgSend_sb_specifierForAction_(param_1,auVar7._8_8_,param_3);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  lVar1 = auVar8._0_8_;
  if (lVar1 != 0) {
    objc_msgSend_cachedCellForSpecifier_(param_1,auVar8._8_8_,lVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_accessoryView();
    uVar3 = _objc_retainAutoreleasedReturnValue();
    lVar4 = objc_msgSend_tag();
    if (lVar4 == param_4) {
      objc_msgSend_subviews(uVar3);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_firstObject();
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar5);
      objc_msgSend_setBackgroundColor_(uVar6,extraout_x1,auVar7._0_8_);
      _objc_release(uVar6);
    }
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(auVar7._0_8_);
  return;
}



// ===== 0x00007894  SystemBoxRootListController__readPreferenceValue_

/* Function Stack Size: 0x18 bytes */

ID SystemBoxRootListController::SystemBoxRootListController__readPreferenceValue_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined8 extraout_x1;
  undefined auVar8 [16];
  
  auVar8 = _objc_retain(param_3);
  uVar2 = auVar8._0_8_;
  objc_msgSend_propertyForKey_(uVar2,auVar8._8_8_,&cf_key);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_0001df40;
  if (lVar3 == 0) {
    uVar6 = 0;
  }
  else {
    jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_dictionaryWithContentsOfFile_(puVar1,auVar8._8_8_,auVar8._0_8_);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar8._0_8_);
    objc_msgSend_objectForKeyedSubscript_(uVar4,extraout_x1,lVar3);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    lVar5 = auVar8._0_8_;
    if (lVar5 == 0) {
      objc_msgSend_propertyForKey_(uVar2,auVar8._8_8_,&cf_default);
      uVar6 = _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar6 = _objc_retain(lVar5);
    }
    _objc_release(lVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
  IVar7 = _objc_autoreleaseReturnValue(uVar6);
  return IVar7;
}



// ===== 0x00007994  SystemBoxRootListController__setPreferenceValue_specifier_

/* Function Stack Size: 0x20 bytes */

void SystemBoxRootListController::SystemBoxRootListController__setPreferenceValue_specifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
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
  undefined8 uVar7;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 extraout_x1_43;
  undefined8 extraout_x1_44;
  undefined *puVar8;
  long lVar9;
  cfstringStruct *pcVar10;
  double dVar11;
  undefined8 uVar12;
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  ID local_68;
  
  auVar13 = _objc_retain(param_3);
  lVar9 = auVar13._0_8_;
  objc_msgSend_propertyForKey_(param_4,auVar13._8_8_,&cf_key);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  lVar2 = auVar13._0_8_;
  if (lVar2 == 0) goto LAB_0000802c;
  iVar1 = objc_msgSend_isEqualToString_(lVar2,auVar13._8_8_,&cf_fakeBatteryPercent);
  if (iVar1 == 0) {
    iVar1 = objc_msgSend_isEqualToString_(lVar2,extraout_x1,&cf_lockScreenBottomCornerRadius);
    if (iVar1 != 0) {
      auVar13 = _objc_opt_respondsToSelector(lVar9,PTR_s_doubleValue_0001d7e0);
      uVar7 = auVar13._8_8_;
      if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        objc_msgSend_doubleValue(lVar9);
        uVar7 = extraout_x1_01;
      }
LAB_00007b6c:
      pcVar10 = &cf___2f;
LAB_00007b94:
      objc_msgSend_stringWithFormat_(PTR__OBJC_CLASS___NSString_0001df48,uVar7,pcVar10);
      lVar3 = _objc_retainAutoreleasedReturnValue();
      goto LAB_00007ba0;
    }
    iVar1 = objc_msgSend_isEqualToString_(lVar2,extraout_x1_00,&cf_homeIconScale);
    if (iVar1 != 0) {
      auVar13 = _objc_opt_respondsToSelector(lVar9,PTR_s_doubleValue_0001d7e0);
      uVar7 = auVar13._8_8_;
      dVar11 = 1.0;
      if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        dVar11 = (double)objc_msgSend_doubleValue(lVar9);
        uVar7 = extraout_x1_03;
      }
      if (dVar11 <= 0.5) {
        dVar11 = 0.5;
      }
      uVar12 = 0x4000000000000000;
LAB_00007b68:
      NEON_fmin(dVar11,uVar12);
      goto LAB_00007b6c;
    }
    iVar1 = objc_msgSend_isEqualToString_(lVar2,extraout_x1_02,&cf_folderPreviewIconScale);
    if (iVar1 != 0) {
      auVar13 = _objc_opt_respondsToSelector(lVar9,PTR_s_doubleValue_0001d7e0);
      uVar7 = auVar13._8_8_;
      dVar11 = DAT_00011fc8;
      if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        dVar11 = (double)objc_msgSend_doubleValue(lVar9);
        uVar7 = extraout_x1_05;
      }
      if (dVar11 <= DAT_00011fd0) {
        dVar11 = DAT_00011fd0;
      }
      uVar12 = 0x3ff0000000000000;
      goto LAB_00007b68;
    }
    iVar1 = objc_msgSend_isEqualToString_(lVar2,extraout_x1_04,&cf_switcherClearButtonFontSize);
    if (iVar1 != 0) {
      auVar13 = _objc_opt_respondsToSelector(lVar9,PTR_s_doubleValue_0001d7e0);
      uVar7 = auVar13._8_8_;
      dVar11 = 16.0;
      if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        dVar11 = (double)objc_msgSend_doubleValue(lVar9);
        uVar7 = extraout_x1_07;
      }
      if (dVar11 <= 8.0) {
        dVar11 = 8.0;
      }
      uVar12 = 0x4044000000000000;
LAB_00008138:
      NEON_fmin(dVar11,uVar12);
      pcVar10 = &cf___0f;
      goto LAB_00007b94;
    }
    iVar1 = objc_msgSend_isEqualToString_(lVar2,extraout_x1_06,&cf_switcherClearButtonSize);
    if (iVar1 != 0) {
      auVar13 = _objc_opt_respondsToSelector(lVar9,PTR_s_doubleValue_0001d7e0);
      uVar7 = auVar13._8_8_;
      if ((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) {
        dVar11 = 80.0;
      }
      else {
        dVar11 = (double)objc_msgSend_doubleValue(lVar9);
        uVar7 = extraout_x1_34;
      }
      if (dVar11 <= 50.0) {
        dVar11 = 50.0;
      }
      uVar12 = 0x4064000000000000;
      goto LAB_00008138;
    }
    iVar1 = objc_msgSend_isEqualToString_(lVar2,extraout_x1_33,&cf_desktopIconShadowScale);
    if (iVar1 != 0) {
      auVar13 = _objc_opt_respondsToSelector(lVar9,PTR_s_doubleValue_0001d7e0);
      uVar7 = auVar13._8_8_;
      dVar11 = 0.0;
      if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) {
        dVar11 = (double)objc_msgSend_doubleValue(lVar9);
        uVar7 = extraout_x1_36;
      }
      if (dVar11 <= -20.0) {
        dVar11 = -20.0;
      }
      uVar12 = 0x4034000000000000;
      goto LAB_00007b68;
    }
  }
  else {
    auVar13 = _objc_opt_respondsToSelector(lVar9,PTR_s_integerValue_0001d8c0);
    if ((auVar13 & (undefined  [16])0x1) == (undefined  [16])0x0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = auVar13._8_8_;
      auVar14 = auVar14 << 0x40;
    }
    else {
      auVar14 = objc_msgSend_integerValue(lVar9);
    }
    uVar5 = auVar14._0_8_;
    if ((long)uVar5 < 1) {
      uVar5 = 0;
    }
    if (99 < uVar5) {
      uVar5 = 100;
    }
    objc_msgSend_numberWithInteger_(PTR__OBJC_CLASS___NSNumber_0001df30,auVar14._8_8_,uVar5);
    lVar3 = _objc_retainAutoreleasedReturnValue();
LAB_00007ba0:
    _objc_release(lVar9);
    lVar9 = lVar3;
  }
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  uVar7 = auVar13._0_8_;
  objc_msgSend_dictionaryWithContentsOfFile_
            (PTR__OBJC_CLASS___NSMutableDictionary_0001df50,auVar13._8_8_,uVar7);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  if (lVar3 == 0) {
    objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_0001df50);
    lVar3 = _objc_retainAutoreleasedReturnValue();
  }
  objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_0001df50);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  uVar12 = auVar13._0_8_;
  if (lVar9 == 0) {
    objc_msgSend_removeObjectForKey_(lVar3,auVar13._8_8_,lVar2);
  }
  else {
    objc_msgSend_setObject_forKeyedSubscript_(lVar3,auVar13._8_8_,lVar9,lVar2);
  }
  auVar13 = _objc_opt_respondsToSelector(lVar9,PTR_s_boolValue_0001d650);
  uVar4 = auVar13._8_8_;
  if (((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) &&
     (iVar1 = objc_msgSend_boolValue(lVar9), uVar4 = extraout_x1_08, iVar1 != 0)) {
    iVar1 = objc_msgSend_isEqualToString_(lVar2,extraout_x1_08,&cf_changeDesktopIcons);
    puVar8 = PTR____kCFBooleanFalse_000180c0;
    if (iVar1 == 0) {
      iVar1 = objc_msgSend_isEqualToString_(lVar2,extraout_x1_09,&cf_batchChangeDesktopIcons);
      puVar8 = PTR____kCFBooleanFalse_000180c0;
      if (iVar1 == 0) {
        iVar1 = objc_msgSend_isEqualToString_(lVar2,extraout_x1_14,&cf_irregularChangeDesktopIcons);
        puVar8 = PTR____kCFBooleanFalse_000180c0;
        if (iVar1 == 0) {
          iVar1 = objc_msgSend_isEqualToString_(lVar2,extraout_x1_18,&cf_homePullDownControlCenter);
          if (iVar1 == 0) {
            iVar1 = objc_msgSend_isEqualToString_
                              (lVar2,extraout_x1_35,&cf_homePullDownNotificationCenter);
            if (iVar1 == 0) {
              iVar1 = objc_msgSend_isEqualToString_
                                (lVar2,extraout_x1_37,&cf_homePullUpNotificationCenter);
              if (iVar1 == 0) {
                iVar1 = objc_msgSend_isEqualToString_
                                  (lVar2,extraout_x1_38,&cf_homePullUpControlCenter);
                if (iVar1 == 0) {
                  iVar1 = objc_msgSend_isEqualToString_
                                    (lVar2,extraout_x1_39,&cf_desktopIconShadowStyle1);
                  if (iVar1 == 0) {
                    iVar1 = objc_msgSend_isEqualToString_
                                      (lVar2,extraout_x1_40,&cf_desktopIconShadowStyle2);
                    if (iVar1 == 0) {
                      iVar1 = objc_msgSend_isEqualToString_
                                        (lVar2,extraout_x1_41,&cf_desktopBadgeCustom);
                      if (iVar1 == 0) {
                        iVar1 = objc_msgSend_isEqualToString_
                                          (lVar2,extraout_x1_42,&cf_desktopBadgeTint);
                        uVar4 = extraout_x1_43;
                        if (iVar1 == 0) goto LAB_00007df0;
                        pcVar10 = &cf_desktopBadgeCustom;
                      }
                      else {
                        pcVar10 = &cf_desktopBadgeTint;
                        uVar4 = extraout_x1_42;
                      }
                    }
                    else {
                      pcVar10 = &cf_desktopIconShadowStyle1;
                      uVar4 = extraout_x1_41;
                    }
                  }
                  else {
                    pcVar10 = &cf_desktopIconShadowStyle2;
                    uVar4 = extraout_x1_40;
                  }
                }
                else {
                  pcVar10 = &cf_homePullUpNotificationCenter;
                  uVar4 = extraout_x1_39;
                }
              }
              else {
                pcVar10 = &cf_homePullUpControlCenter;
                uVar4 = extraout_x1_38;
              }
            }
            else {
              pcVar10 = &cf_homePullDownControlCenter;
              uVar4 = extraout_x1_37;
            }
          }
          else {
            pcVar10 = &cf_homePullDownNotificationCenter;
            uVar4 = extraout_x1_35;
          }
          puVar8 = PTR____kCFBooleanFalse_000180c0;
          objc_msgSend_setObject_forKeyedSubscript_
                    (lVar3,uVar4,PTR____kCFBooleanFalse_000180c0,pcVar10);
          uVar4 = extraout_x1_44;
          goto LAB_00007cbc;
        }
        objc_msgSend_setObject_forKeyedSubscript_
                  (lVar3,extraout_x1_18,PTR____kCFBooleanFalse_000180c0,&cf_changeDesktopIcons);
        objc_msgSend_setObject_forKeyedSubscript_
                  (lVar3,extraout_x1_19,puVar8,&cf_batchChangeDesktopIcons);
        objc_msgSend_setObject_forKeyedSubscript_
                  (uVar12,extraout_x1_20,puVar8,&cf_changeDesktopIcons);
        objc_msgSend_setObject_forKeyedSubscript_
                  (uVar12,extraout_x1_21,puVar8,&cf_batchChangeDesktopIcons);
        objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_0001df58);
        auVar13 = _objc_retainAutoreleasedReturnValue();
        pcVar10 = &cf__var_mobile_Documents_SystemBox_IrregularIcons;
      }
      else {
        objc_msgSend_setObject_forKeyedSubscript_
                  (lVar3,extraout_x1_14,PTR____kCFBooleanFalse_000180c0,&cf_changeDesktopIcons);
        objc_msgSend_setObject_forKeyedSubscript_
                  (lVar3,extraout_x1_15,puVar8,&cf_irregularChangeDesktopIcons);
        objc_msgSend_setObject_forKeyedSubscript_
                  (uVar12,extraout_x1_16,puVar8,&cf_changeDesktopIcons);
        objc_msgSend_setObject_forKeyedSubscript_
                  (uVar12,extraout_x1_17,puVar8,&cf_irregularChangeDesktopIcons);
        objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_0001df58);
        auVar13 = _objc_retainAutoreleasedReturnValue();
        pcVar10 = &cf__var_mobile_Documents_SystemBox_BatchIcons;
      }
      objc_msgSend_createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                (auVar13._0_8_,auVar13._8_8_,pcVar10,1,0,0);
      _objc_release(auVar13._0_8_);
      uVar4 = extraout_x1_22;
    }
    else {
      objc_msgSend_setObject_forKeyedSubscript_
                (lVar3,extraout_x1_09,PTR____kCFBooleanFalse_000180c0,&cf_batchChangeDesktopIcons);
      pcVar10 = &cf_irregularChangeDesktopIcons;
      objc_msgSend_setObject_forKeyedSubscript_
                (lVar3,extraout_x1_10,puVar8,&cf_irregularChangeDesktopIcons);
      objc_msgSend_setObject_forKeyedSubscript_
                (uVar12,extraout_x1_11,puVar8,&cf_batchChangeDesktopIcons);
      uVar4 = extraout_x1_12;
LAB_00007cbc:
      objc_msgSend_setObject_forKeyedSubscript_(uVar12,uVar4,puVar8,pcVar10);
      uVar4 = extraout_x1_13;
    }
  }
LAB_00007df0:
  iVar1 = objc_msgSend_isEqualToString_(lVar2,uVar4,&cf_desktopIconShadowStyle1);
  uVar4 = extraout_x1_23;
  if (iVar1 == 0) {
LAB_00007e40:
    iVar1 = objc_msgSend_isEqualToString_(lVar2,uVar4,&cf_desktopIconShadowStyle2);
    uVar4 = extraout_x1_25;
    if (iVar1 != 0) {
      auVar13 = objc_msgSend_boolValue(lVar9);
      uVar4 = auVar13._8_8_;
      if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00007e90;
      objc_msgSend_objectForKeyedSubscript_(lVar3,uVar4,&cf_desktopIconShadowStyle1);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      uVar5 = objc_msgSend_boolValue();
      _objc_release(uVar4);
      uVar4 = extraout_x1_26;
      if ((uVar5 & 1) != 0) goto LAB_00007e90;
LAB_00007f2c:
      pcVar10 = &cf_desktopIconShadowStyle1;
      goto LAB_00007f3c;
    }
LAB_00007e90:
    iVar1 = objc_msgSend_isEqualToString_(lVar2,uVar4,&cf_desktopIconShadow);
    if ((iVar1 != 0) && (iVar1 = objc_msgSend_boolValue(lVar9), iVar1 != 0)) {
      objc_msgSend_objectForKeyedSubscript_(lVar3,extraout_x1_27,&cf_desktopIconShadowStyle1);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      iVar1 = objc_msgSend_boolValue();
      if (iVar1 == 0) {
        objc_msgSend_objectForKeyedSubscript_(lVar3,extraout_x1_28,&cf_desktopIconShadowStyle2);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        uVar5 = objc_msgSend_boolValue();
        _objc_release(uVar6);
        _objc_release(uVar4);
        uVar4 = extraout_x1_29;
        if ((uVar5 & 1) == 0) goto LAB_00007f2c;
      }
      else {
        _objc_release(uVar4);
      }
    }
  }
  else {
    auVar13 = objc_msgSend_boolValue(lVar9);
    uVar4 = auVar13._8_8_;
    if ((auVar13 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_00007e40;
    objc_msgSend_objectForKeyedSubscript_(lVar3,uVar4,&cf_desktopIconShadowStyle2);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    uVar5 = objc_msgSend_boolValue();
    _objc_release(uVar4);
    uVar4 = extraout_x1_24;
    if ((uVar5 & 1) != 0) goto LAB_00007e40;
    pcVar10 = &cf_desktopIconShadowStyle2;
LAB_00007f3c:
    puVar8 = PTR____kCFBooleanTrue_000180c8;
    objc_msgSend_setObject_forKeyedSubscript_(lVar3,uVar4,PTR____kCFBooleanTrue_000180c8,pcVar10);
    objc_msgSend_setObject_forKeyedSubscript_(uVar12,extraout_x1_30,puVar8,pcVar10);
  }
  objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_0001df58);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_stringByDeletingLastPathComponent(uVar7);
  auVar13 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_createDirectoryAtPath_withIntermediateDirectories_attributes_error_
            (uVar4,auVar13._8_8_,auVar13._0_8_,1,0,0);
  _objc_release(auVar13._0_8_);
  _objc_release(uVar4);
  objc_msgSend_writeToFile_atomically_(lVar3,extraout_x1_31,uVar7,1);
  uVar4 = _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterPostNotification(uVar4,&cf_com_wkk_systembox_prefschanged,0,0,1);
  local_88 = PTR___NSConcreteStackBlock_00018090;
  local_80 = DAT_00011fc0;
  local_78 = FUN_00008264;
  puStack_70 = &DAT_00018248;
  local_68 = param_1;
  objc_msgSend_enumerateKeysAndObjectsUsingBlock_(uVar12,extraout_x1_32,&local_88);
  _objc_release(uVar12);
  _objc_release(lVar3);
  _objc_release(uVar7);
LAB_0000802c:
  _objc_release(lVar2);
  _objc_release(lVar9);
  return;
}



// ===== 0x00008264  FUN_00008264

void FUN_00008264(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = _objc_retain(param_2);
  auVar3 = objc_msgSend_boolValue(param_3);
  objc_msgSend_sb_updateVisibleSwitchForKey_value_(uVar2,auVar3._8_8_,uVar1,auVar3._0_8_);
  _objc_release(uVar1);
  return;
}



// ===== 0x000082b4  FUN_000082b4

void FUN_000082b4(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  return;
}



// ===== 0x000082bc  FUN_000082bc

void FUN_000082bc(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



// ===== 0x000082c4  SystemBoxRootListController__sb_openIconDirectory_

/* Function Stack Size: 0x18 bytes */

void SystemBoxRootListController::SystemBoxRootListController__sb_openIconDirectory_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *pcVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined auVar10 [16];
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  ID IStack_50;
  undefined8 local_48;
  
  uVar3 = _objc_retain(param_3);
  objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_0001df58);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  local_48 = 0;
  uVar4 = objc_msgSend_createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                    (auVar10._0_8_,auVar10._8_8_,uVar3,1,0,&local_48);
  uVar5 = _objc_retain(local_48);
  _objc_release(auVar10._0_8_);
  puVar2 = PTR__OBJC_CLASS___UIAlertController_0001df60;
  if ((uVar4 & 1) == 0) {
    objc_msgSend_localizedDescription(uVar5);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    pcVar9 = auVar10._0_8_;
    pcVar1 = &cf_hgvU_CgP0;
    if (pcVar9 != (cfstringStruct *)0x0) {
      pcVar1 = pcVar9;
    }
    objc_msgSend_alertControllerWithTitle_message_preferredStyle_
              (puVar2,auVar10._8_8_,&cf_elR_vU_,pcVar1,1);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release(pcVar9);
    objc_msgSend_actionWithTitle_style_handler_
              (PTR__OBJC_CLASS___UIAlertAction_0001df68,extraout_x1_00,&cf_nx_,1,0);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_addAction_(uVar6,auVar10._8_8_,auVar10._0_8_);
    _objc_release(auVar10._0_8_);
    objc_msgSend_presentViewController_animated_completion_(param_1,extraout_x1_01,uVar6,1,0);
  }
  else {
    objc_msgSend_URLPathAllowedCharacterSet(PTR__OBJC_CLASS___NSCharacterSet_0001df70);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_stringByAddingPercentEncodingWithAllowedCharacters_
              (uVar3,auVar10._8_8_,auVar10._0_8_);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar10._0_8_);
    puVar2 = PTR__OBJC_CLASS___NSURL_0001df10;
    objc_msgSend_stringWithFormat_
              (PTR__OBJC_CLASS___NSString_0001df48,extraout_x1,&cf_filza___view__);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_URLWithString_(puVar2,auVar10._8_8_,auVar10._0_8_);
    lVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar10._0_8_);
    if (lVar7 != 0) {
      objc_msgSend_sharedApplication(PTR__OBJC_CLASS___UIApplication_0001df18);
      uVar8 = _objc_retainAutoreleasedReturnValue();
      local_78 = PTR___NSConcreteStackBlock_00018090;
      local_70 = DAT_00011fc0;
      local_68 = FUN_00008518;
      puStack_60 = &DAT_00018218;
      auVar10 = _objc_retain(uVar3);
      local_58 = auVar10._0_8_;
      IStack_50 = param_1;
      objc_msgSend_openURL_options_completionHandler_
                (uVar8,auVar10._8_8_,lVar7,PTR____NSDictionary0__struct_000180b0,&local_78);
      _objc_release(uVar8);
      _objc_release(local_58);
    }
    _objc_release(lVar7);
  }
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  return;
}



// ===== 0x00008518  FUN_00008518

void FUN_00008518(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined4 extraout_w1;
  undefined4 extraout_w1_00;
  undefined4 extraout_w1_01;
  undefined8 uVar2;
  undefined auVar3 [12];
  
  if ((param_2 & 1) != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  objc_msgSend_generalPasteboard(PTR__OBJC_CLASS___UIPasteboard_0001df78);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setString_(auVar3._0_8_,auVar3._8_4_,uVar2);
  _objc_release(auVar3._0_8_);
  puVar1 = PTR__OBJC_CLASS___UIAlertController_0001df60;
  objc_msgSend_stringWithFormat_(PTR__OBJC_CLASS___NSString_0001df48,extraout_w1,&cf_lghKm0RSvcSb);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_alertControllerWithTitle_message_preferredStyle_
            (puVar1,auVar3._8_4_,&cf_vU___Y6R,auVar3._0_8_,1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  objc_msgSend_actionWithTitle_style_handler_
            (PTR__OBJC_CLASS___UIAlertAction_0001df68,extraout_w1_00,&cf_nx_,1,0);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_addAction_(uVar2,auVar3._8_4_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  objc_msgSend_presentViewController_animated_completion_
            (*(undefined8 *)(param_1 + 0x28),extraout_w1_01,uVar2,1,0);
  _objc_release(uVar2);
  return;
}



// ===== 0x00008520  FUN_00008520

void FUN_00008520(long param_1)

{
  undefined *puVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  objc_msgSend_generalPasteboard(PTR__OBJC_CLASS___UIPasteboard_0001df78);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setString_(auVar3._0_8_,auVar3._8_8_,uVar2);
  _objc_release(auVar3._0_8_);
  puVar1 = PTR__OBJC_CLASS___UIAlertController_0001df60;
  objc_msgSend_stringWithFormat_(PTR__OBJC_CLASS___NSString_0001df48,extraout_x1,&cf_lghKm0RSvcSb);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_alertControllerWithTitle_message_preferredStyle_
            (puVar1,auVar3._8_8_,&cf_vU___Y6R,auVar3._0_8_,1);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar3._0_8_);
  objc_msgSend_actionWithTitle_style_handler_
            (PTR__OBJC_CLASS___UIAlertAction_0001df68,extraout_x1_00,&cf_nx_,1,0);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_addAction_(uVar2,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  objc_msgSend_presentViewController_animated_completion_
            (*(undefined8 *)(param_1 + 0x28),extraout_x1_01,uVar2,1,0);
  _objc_release(uVar2);
  return;
}



// ===== 0x00008628  SystemBoxRootListController__openBatchIconDirectory

/* Function Stack Size: 0x10 bytes */

void SystemBoxRootListController::SystemBoxRootListController__openBatchIconDirectory
               (ID param_1,SEL param_2)

{
  objc_msgSend_sb_openIconDirectory_(param_1,param_2,&cf__var_mobile_Documents_SystemBox_BatchIcons)
  ;
  return;
}



// ===== 0x00008634  SystemBoxRootListController__openIrregularIconDirectory

/* Function Stack Size: 0x10 bytes */

void SystemBoxRootListController::SystemBoxRootListController__openIrregularIconDirectory
               (ID param_1,SEL param_2)

{
  objc_msgSend_sb_openIconDirectory_
            (param_1,param_2,&cf__var_mobile_Documents_SystemBox_IrregularIcons);
  return;
}



// ===== 0x00008640  SystemBoxRootListController__chooseVPNStatusBarColor

/* Function Stack Size: 0x10 bytes */

void SystemBoxRootListController::SystemBoxRootListController__chooseVPNStatusBarColor
               (ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined auVar2 [16];
  
  objc_msgSend_setColorPickerTarget_(param_1,param_2,0);
  auVar2 = _objc_alloc_init(PTR__OBJC_CLASS___UIColorPickerViewController_0001df80);
  uVar1 = auVar2._0_8_;
  objc_msgSend_setDelegate_(uVar1,auVar2._8_8_,param_1);
  FUN_00005ef0();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setSelectedColor_(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  objc_msgSend_setSupportsAlpha_(uVar1,extraout_x1,1);
  objc_msgSend_setTitle_(uVar1,extraout_x1_00,&cf_V);
  objc_msgSend_presentViewController_animated_completion_(param_1,extraout_x1_01,uVar1,1,0);
  _objc_release(uVar1);
  return;
}



// ===== 0x000086dc  SystemBoxRootListController__sb_saveColorFromActivePicker_

/* Function Stack Size: 0x18 bytes */

void SystemBoxRootListController::SystemBoxRootListController__sb_saveColorFromActivePicker_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  uVar1 = _objc_retain(param_3);
  auVar3 = objc_msgSend_colorPickerTarget(param_1);
  uVar2 = auVar3._8_8_;
  if (auVar3._0_8_ == 2) {
    objc_msgSend_sb_saveDesktopTextColor_(param_1,uVar2,uVar1);
  }
  else if (auVar3._0_8_ == 1) {
    objc_msgSend_sb_saveRunIndicatorColor_(param_1,uVar2,uVar1);
  }
  else {
    objc_msgSend_sb_saveVPNStatusBarColor_(param_1,uVar2,uVar1);
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x0000874c  SystemBoxRootListController__colorPickerViewControllerDidSelectColor_

/* Function Stack Size: 0x18 bytes */

void SystemBoxRootListController::
     SystemBoxRootListController__colorPickerViewControllerDidSelectColor_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined auVar1 [16];
  
  objc_msgSend_selectedColor(param_3);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_sb_saveColorFromActivePicker_(param_1,auVar1._8_8_,auVar1._0_8_);
  _objc_release(auVar1._0_8_);
  return;
}



// ===== 0x0000878c  SystemBoxRootListController__colorPickerViewControllerDidFinish_

/* Function Stack Size: 0x18 bytes */

void SystemBoxRootListController::SystemBoxRootListController__colorPickerViewControllerDidFinish_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 extraout_x1;
  undefined auVar1 [16];
  
  objc_msgSend_selectedColor(param_3);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_sb_saveColorFromActivePicker_(param_1,auVar1._8_8_,auVar1._0_8_);
  _objc_release(auVar1._0_8_);
  objc_msgSend_setColorPickerTarget_(param_1,extraout_x1,0);
  return;
}



// ===== 0x000087d8  SystemBoxRootListController__sb_saveVPNStatusBarColor_

/* Function Stack Size: 0x18 bytes */

void SystemBoxRootListController::SystemBoxRootListController__sb_saveVPNStatusBarColor_
               (ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined auVar6 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  auVar6 = _objc_retain(param_3);
  uVar2 = auVar6._0_8_;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0x3ff0000000000000;
  local_58 = 0;
  iVar1 = objc_msgSend_getRed_green_blue_alpha_
                    (uVar2,auVar6._8_8_,&local_48,&local_50,&local_58,&local_60);
  if (iVar1 != 0) {
    FUN_000089ec();
    uVar3 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_numberWithDouble_(local_48,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_vpnStatusBarColorRed);
    _objc_release(auVar6._0_8_);
    objc_msgSend_numberWithDouble_(local_50,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_vpnStatusBarColorGreen);
    _objc_release(auVar6._0_8_);
    objc_msgSend_numberWithDouble_(local_58,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_vpnStatusBarColorBlue);
    _objc_release(auVar6._0_8_);
    objc_msgSend_numberWithDouble_(local_60,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_vpnStatusBarColorAlpha);
    _objc_release(auVar6._0_8_);
    jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_0001df58);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_stringByDeletingLastPathComponent(uVar4);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_createDirectoryAtPath_withIntermediateDirectories_attributes_error_
              (uVar5,auVar6._8_8_,auVar6._0_8_,1,0,0);
    _objc_release(auVar6._0_8_);
    _objc_release(uVar5);
    objc_msgSend_writeToFile_atomically_(uVar3,extraout_x1,uVar4,1);
    uVar5 = _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterPostNotification(uVar5,&cf_com_wkk_systembox_prefschanged,0,0,1);
    objc_msgSend_sb_updateVisibleColorAccessoryForAction_tag_color_
              (param_1,extraout_x1_00,&cf_chooseVPNStatusBarColor,&DAT_000167df,uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x000089ec  FUN_000089ec

void FUN_000089ec(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_0001df50;
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_dictionaryWithContentsOfFile_(puVar1,auVar4._8_8_,auVar4._0_8_);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar4._0_8_);
  if (lVar2 == 0) {
    objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_0001df50);
    uVar3 = _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar3 = _objc_retain(lVar2);
  }
  _objc_release(lVar2);
  _objc_autoreleaseReturnValue(uVar3);
  return;
}



// ===== 0x00008a7c  SystemBoxRootListController__chooseRunIndicatorColor

/* Function Stack Size: 0x10 bytes */

void SystemBoxRootListController::SystemBoxRootListController__chooseRunIndicatorColor
               (ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined auVar2 [16];
  
  objc_msgSend_setColorPickerTarget_(param_1,param_2,1);
  auVar2 = _objc_alloc_init(PTR__OBJC_CLASS___UIColorPickerViewController_0001df80);
  uVar1 = auVar2._0_8_;
  objc_msgSend_setDelegate_(uVar1,auVar2._8_8_,param_1);
  FUN_00006154();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setSelectedColor_(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  objc_msgSend_setSupportsAlpha_(uVar1,extraout_x1,1);
  objc_msgSend_setTitle_(uVar1,extraout_x1_00,&cf_c_yprb);
  objc_msgSend_presentViewController_animated_completion_(param_1,extraout_x1_01,uVar1,1,0);
  _objc_release(uVar1);
  return;
}



// ===== 0x00008b18  SystemBoxRootListController__sb_saveRunIndicatorColor_

/* Function Stack Size: 0x18 bytes */

void SystemBoxRootListController::SystemBoxRootListController__sb_saveRunIndicatorColor_
               (ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined auVar6 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  auVar6 = _objc_retain(param_3);
  uVar2 = auVar6._0_8_;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0x3ff0000000000000;
  local_58 = 0;
  iVar1 = objc_msgSend_getRed_green_blue_alpha_
                    (uVar2,auVar6._8_8_,&local_48,&local_50,&local_58,&local_60);
  if (iVar1 != 0) {
    FUN_000089ec();
    uVar3 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_numberWithDouble_(local_48,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_runIndicatorColorRed);
    _objc_release(auVar6._0_8_);
    objc_msgSend_numberWithDouble_(local_50,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_runIndicatorColorGreen);
    _objc_release(auVar6._0_8_);
    objc_msgSend_numberWithDouble_(local_58,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_runIndicatorColorBlue);
    _objc_release(auVar6._0_8_);
    objc_msgSend_numberWithDouble_(local_60,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_runIndicatorColorAlpha);
    _objc_release(auVar6._0_8_);
    jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_0001df58);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_stringByDeletingLastPathComponent(uVar4);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_createDirectoryAtPath_withIntermediateDirectories_attributes_error_
              (uVar5,auVar6._8_8_,auVar6._0_8_,1,0,0);
    _objc_release(auVar6._0_8_);
    _objc_release(uVar5);
    objc_msgSend_writeToFile_atomically_(uVar3,extraout_x1,uVar4,1);
    uVar5 = _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterPostNotification(uVar5,&cf_com_wkk_systembox_prefschanged,0,0,1);
    objc_msgSend_sb_updateVisibleColorAccessoryForAction_tag_color_
              (param_1,extraout_x1_00,&cf_chooseRunIndicatorColor,&DAT_000167e1,uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x00008d2c  SystemBoxRootListController__chooseDesktopTextColor

/* Function Stack Size: 0x10 bytes */

void SystemBoxRootListController::SystemBoxRootListController__chooseDesktopTextColor
               (ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined auVar2 [16];
  
  objc_msgSend_setColorPickerTarget_(param_1,param_2,2);
  auVar2 = _objc_alloc_init(PTR__OBJC_CLASS___UIColorPickerViewController_0001df80);
  uVar1 = auVar2._0_8_;
  objc_msgSend_setDelegate_(uVar1,auVar2._8_8_,param_1);
  FUN_000063b8();
  auVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setSelectedColor_(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  objc_msgSend_setSupportsAlpha_(uVar1,extraout_x1,1);
  objc_msgSend_setTitle_(uVar1,extraout_x1_00,&cf_eW_rb);
  objc_msgSend_presentViewController_animated_completion_(param_1,extraout_x1_01,uVar1,1,0);
  _objc_release(uVar1);
  return;
}



// ===== 0x00008dc8  SystemBoxRootListController__sb_saveDesktopTextColor_

/* Function Stack Size: 0x18 bytes */

void SystemBoxRootListController::SystemBoxRootListController__sb_saveDesktopTextColor_
               (ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined auVar6 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  
  auVar6 = _objc_retain(param_3);
  uVar2 = auVar6._0_8_;
  local_50 = 0;
  local_48 = 0;
  local_60 = 0x3ff0000000000000;
  local_58 = 0;
  iVar1 = objc_msgSend_getRed_green_blue_alpha_
                    (uVar2,auVar6._8_8_,&local_48,&local_50,&local_58,&local_60);
  if (iVar1 != 0) {
    FUN_000089ec();
    uVar3 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_numberWithDouble_(local_48,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_desktopTextColorRed);
    _objc_release(auVar6._0_8_);
    objc_msgSend_numberWithDouble_(local_50,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_desktopTextColorGreen);
    _objc_release(auVar6._0_8_);
    objc_msgSend_numberWithDouble_(local_58,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_desktopTextColorBlue);
    _objc_release(auVar6._0_8_);
    objc_msgSend_numberWithDouble_(local_60,PTR__OBJC_CLASS___NSNumber_0001df30);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setObject_forKeyedSubscript_
              (uVar3,auVar6._8_8_,auVar6._0_8_,&cf_desktopTextColorAlpha);
    _objc_release(auVar6._0_8_);
    jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_0001df58);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_stringByDeletingLastPathComponent(uVar4);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_createDirectoryAtPath_withIntermediateDirectories_attributes_error_
              (uVar5,auVar6._8_8_,auVar6._0_8_,1,0,0);
    _objc_release(auVar6._0_8_);
    _objc_release(uVar5);
    objc_msgSend_writeToFile_atomically_(uVar3,extraout_x1,uVar4,1);
    uVar5 = _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterPostNotification(uVar5,&cf_com_wkk_systembox_prefschanged,0,0,1);
    objc_msgSend_sb_updateVisibleColorAccessoryForAction_tag_color_
              (param_1,extraout_x1_00,&cf_chooseDesktopTextColor,&DAT_000167e6,uVar2);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
  return;
}



// ===== 0x00008fdc  SystemBoxRootListController__respring

/* Function Stack Size: 0x10 bytes */

void SystemBoxRootListController::SystemBoxRootListController__respring(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined auVar2 [16];
  
  objc_msgSend_alertControllerWithTitle_message_preferredStyle_
            (PTR__OBJC_CLASS___UIAlertController_0001df60,param_2,&cf_l,&cf_nx_l,1);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = auVar2._0_8_;
  objc_msgSend_actionWithTitle_style_handler_
            (PTR__OBJC_CLASS___UIAlertAction_0001df68,auVar2._8_8_,&cf_Sm,1,0);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_addAction_(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  objc_msgSend_actionWithTitle_style_handler_
            (PTR__OBJC_CLASS___UIAlertAction_0001df68,extraout_x1,&cf_nx_,2,
             &PTR___NSConcreteGlobalBlock_00018298);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_addAction_(uVar1,auVar2._8_8_,auVar2._0_8_);
  _objc_release(auVar2._0_8_);
  objc_msgSend_presentViewController_animated_completion_(param_1,extraout_x1_00,uVar1,1,0);
  _objc_release(uVar1);
  return;
}



// ===== 0x000090bc  FUN_000090bc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000090bc(void)

{
  uint uVar1;
  char *pcVar2;
  pid_t local_54;
  undefined8 local_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  char *local_30;
  undefined8 uStack_28;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_000180e0;
  uStack_28 = _UNK_000182c0;
  local_30 = PTR_s_sbreload_000182b8;
  pcVar2 = (char *)FUN_00009194("/var/jb/usr/bin/sbreload","/usr/bin/sbreload");
  if (pcVar2 != (char *)0x0) {
    local_50 = (char *)((ulong)local_50._4_4_ << 0x20);
    uVar1 = _posix_spawn((pid_t *)&local_50,pcVar2,(posix_spawn_file_actions_t *)0x0,
                         (posix_spawnattr_t *)0x0,&local_30,(char **)0x0);
    pcVar2 = (char *)(ulong)uVar1;
    if (uVar1 == 0) goto LAB_0000916c;
  }
  puStack_48 = PTR_s__9_000182d0;
  local_50 = PTR_s_killall_000182c8;
  uStack_38 = _UNK_000182e0;
  puStack_40 = PTR_s_SpringBoard_000182d8;
  pcVar2 = (char *)FUN_00009194("/var/jb/usr/bin/killall","/usr/bin/killall");
  if (pcVar2 != (char *)0x0) {
    local_54 = 0;
    uVar1 = _posix_spawn(&local_54,pcVar2,(posix_spawn_file_actions_t *)0x0,(posix_spawnattr_t *)0x0
                         ,(char **)&local_50,(char **)0x0);
    pcVar2 = (char *)(ulong)uVar1;
  }
LAB_0000916c:
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(pcVar2);
}



// ===== 0x00009194  FUN_00009194

char * FUN_00009194(char *param_1,char *param_2)

{
  int iVar1;
  code *pcVar2;
  char *pcVar3;
  
  pcVar2 = (code *)_dlsym(0xfffffffffffffffe,"jbroot");
  if ((((pcVar2 == (code *)0x0) || (pcVar3 = (char *)(*pcVar2)(param_2), pcVar3 == (char *)0x0)) ||
      (iVar1 = _access(pcVar3,1), iVar1 != 0)) &&
     (((param_1 == (char *)0x0 || (iVar1 = _access(param_1,1), pcVar3 = param_1, iVar1 != 0)) &&
      ((param_2 == (char *)0x0 || (iVar1 = _access(param_2,1), pcVar3 = param_2, iVar1 != 0)))))) {
    pcVar3 = (char *)0x0;
  }
  return pcVar3;
}



// ===== 0x00009228  SystemBoxRootListController__colorPickerTarget

/* Function Stack Size: 0x10 bytes */

long_long SystemBoxRootListController::SystemBoxRootListController__colorPickerTarget
                    (ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + (long)_colorPickerTarget);
}



// ===== 0x00009238  SystemBoxRootListController__setColorPickerTarget_

/* Function Stack Size: 0x18 bytes */

void SystemBoxRootListController::SystemBoxRootListController__setColorPickerTarget_
               (ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + (long)_colorPickerTarget) = param_3;
  return;
}



// ===== 0x00009248  SystemBoxGeneralListController__sb_specifierPlistName

/* Function Stack Size: 0x10 bytes */

ID SystemBoxGeneralListController::SystemBoxGeneralListController__sb_specifierPlistName
             (ID param_1,SEL param_2)

{
  return 0x18c90;
}



// ===== 0x00009254  SystemBoxGeneralListController__specifiers

/* Function Stack Size: 0x10 bytes */

ID SystemBoxGeneralListController::SystemBoxGeneralListController__specifiers
             (ID param_1,SEL param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  SEL extraout_x1_01;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
  undefined auVar15 [16];
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
  
  local_70 = *(long *)PTR____stack_chk_guard_000180e0;
  plVar1 = (long *)(param_1 + (long)*(int *)PTR__OBJC_IVAR___PSListController__specifiers_00018060);
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    objc_msgSend_sb_specifierPlistName(param_1);
    auVar12 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_loadSpecifiersFromPlistName_target_(param_1,auVar12._8_8_,auVar12._0_8_,param_1);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar6 = objc_msgSend_mutableCopy();
    _objc_release(uVar5);
    _objc_release(auVar12._0_8_);
    iVar3 = FUN_0000f208(2,0x11,0,0);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_0001df88;
    if (iVar3 == 0) {
      auVar12 = objc_msgSend_count(uVar6);
      objc_msgSend_arrayWithCapacity_(puVar2,auVar12._8_8_,auVar12._0_8_);
      lVar4 = _objc_retainAutoreleasedReturnValue();
      lStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = (long *)0x0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      auVar12 = _objc_retain(uVar6);
      uVar5 = auVar12._0_8_;
      auVar12 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar5,auVar12._8_8_,&local_130,auStack_f0,0x10);
      if (auVar12._0_8_ != 0) {
        lVar10 = *local_120;
        do {
          uVar8 = auVar12._8_8_;
          lVar11 = 0;
          do {
            if (*local_120 != lVar10) {
              _objc_enumerationMutation(uVar5);
              uVar8 = extraout_x1;
            }
            uVar9 = *(undefined8 *)(lStack_128 + lVar11 * 8);
            objc_msgSend_propertyForKey_(uVar9,uVar8,&cf_key);
            auVar13 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_propertyForKey_(uVar9,auVar13._8_8_,&cf_id);
            auVar14 = _objc_retainAutoreleasedReturnValue();
            auVar15 = objc_msgSend_isEqualToString_
                                (auVar13._0_8_,auVar14._8_8_,&cf_force5GAStatusBar);
            if (((auVar15 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
               (auVar15 = objc_msgSend_isEqualToString_
                                    (auVar14._0_8_,auVar15._8_8_,&cf_force5GAStatusBarGroup),
               (auVar15 & (undefined  [16])0x1) == (undefined  [16])0x0)) {
              objc_msgSend_addObject_(lVar4,auVar15._8_8_,uVar9);
            }
            _objc_release(auVar14._0_8_);
            _objc_release(auVar13._0_8_);
            lVar11 = lVar11 + 1;
            uVar8 = extraout_x1_00;
          } while (auVar12._0_8_ != lVar11);
          auVar12 = objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar5,extraout_x1_00,&local_130,auStack_f0,0x10);
        } while (auVar12._0_8_ != 0);
      }
      _objc_release(uVar5);
      lVar10 = *plVar1;
      *plVar1 = lVar4;
      _objc_release(lVar10);
    }
    else {
      _objc_storeStrong(plVar1,uVar6);
    }
    _objc_release(uVar6);
    lVar4 = *plVar1;
    param_2 = extraout_x1_01;
  }
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_70) {
    IVar7 = _objc_retainAutoreleaseReturnValue();
    return IVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar4,param_2);
}



// ===== 0x000094b0  SystemBoxDesktopListController__sb_specifierPlistName

/* Function Stack Size: 0x10 bytes */

ID SystemBoxDesktopListController::SystemBoxDesktopListController__sb_specifierPlistName
             (ID param_1,SEL param_2)

{
  return 0x18d10;
}



// ===== 0x000094bc  SystemBoxDateTimeListController__sb_specifierPlistName

/* Function Stack Size: 0x10 bytes */

ID SystemBoxDateTimeListController::SystemBoxDateTimeListController__sb_specifierPlistName
             (ID param_1,SEL param_2)

{
  return 0x18d30;
}



// ===== 0x000094c8  SystemBoxFolderListController__sb_specifierPlistName

/* Function Stack Size: 0x10 bytes */

ID SystemBoxFolderListController::SystemBoxFolderListController__sb_specifierPlistName
             (ID param_1,SEL param_2)

{
  return 0x18d50;
}



// ===== 0x000094d4  SystemBoxPhotosListController__sb_specifierPlistName

/* Function Stack Size: 0x10 bytes */

ID SystemBoxPhotosListController::SystemBoxPhotosListController__sb_specifierPlistName
             (ID param_1,SEL param_2)

{
  return 0x18d70;
}



// ===== 0x000094e0  SystemBoxDisableListController__sb_specifierPlistName

/* Function Stack Size: 0x10 bytes */

ID SystemBoxDisableListController::SystemBoxDisableListController__sb_specifierPlistName
             (ID param_1,SEL param_2)

{
  return 0x18d90;
}



// ===== 0x000094ec  SystemBoxDisableListController__specifiers

/* Function Stack Size: 0x10 bytes */

ID SystemBoxDisableListController::SystemBoxDisableListController__specifiers
             (ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 extraout_x1;
  SEL extraout_x1_00;
  long lVar6;
  undefined auVar7 [16];
  
  lVar6 = (long)*(int *)PTR__OBJC_IVAR___PSListController__specifiers_00018060;
  lVar1 = *(long *)(param_1 + lVar6);
  if (lVar1 == 0) {
    objc_msgSend_loadSpecifiersFromPlistName_target_(param_1,param_2,&cf_Disable,param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = objc_msgSend_mutableCopy();
    _objc_release(uVar2);
    objc_msgSend_loadSpecifiersFromPlistName_target_(param_1,extraout_x1,&cf_Hide,param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    auVar7 = objc_msgSend_count();
    if (auVar7._0_8_ != 0) {
      objc_msgSend_addObjectsFromArray_(uVar3,auVar7._8_8_,uVar2);
    }
    uVar4 = *(undefined8 *)(param_1 + lVar6);
    *(undefined8 *)(param_1 + lVar6) = uVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    lVar1 = *(long *)(param_1 + lVar6);
    param_2 = extraout_x1_00;
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(lVar1,param_2);
  return IVar5;
}



// ===== 0x000095a0  SystemBoxDisableListController__viewDidLoad

/* Function Stack Size: 0x10 bytes */

void SystemBoxDisableListController::SystemBoxDisableListController__viewDidLoad
               (ID param_1,SEL param_2)

{
  undefined auVar1 [16];
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_0001e008;
  local_30 = param_1;
  SystemBoxRootListController::SystemBoxRootListController__viewDidLoad
            ((ID)&local_30,(SEL)PTR_s_viewDidLoad_0001de58);
  objc_msgSend_setTitle_(param_1);
  objc_msgSend_navigationItem(param_1);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setTitle_(auVar1._0_8_,auVar1._8_8_,&cf_y_u);
  _objc_release(auVar1._0_8_);
  return;
}



// ===== 0x00009618  SystemBoxHideListController__sb_specifierPlistName

/* Function Stack Size: 0x10 bytes */

ID SystemBoxHideListController::SystemBoxHideListController__sb_specifierPlistName
             (ID param_1,SEL param_2)

{
  return 0x18db0;
}



// ===== 0x00009624  FUN_00009624

void FUN_00009624(void)

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
  
  local_70 = *(long *)PTR____stack_chk_guard_000180e0;
  uVar4 = _objc_retain();
  objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_0001df50);
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
              objc_msgSend_whitespaceCharacterSet(PTR__OBJC_CLASS___NSCharacterSet_0001df70);
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
                goto LAB_000097c4;
              }
LAB_000097cc:
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
              objc_msgSend_whitespaceCharacterSet(PTR__OBJC_CLASS___NSCharacterSet_0001df70);
              auVar16 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_stringByTrimmingCharactersInSet_(uVar11,auVar16._8_8_,auVar16._0_8_);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_release(auVar16._0_8_);
              puVar2 = PTR__OBJC_CLASS___NSString_0001df48;
              objc_msgSend_objectForKeyedSubscript_(uVar5,extraout_x1_00,uVar15);
              auVar16 = _objc_retainAutoreleasedReturnValue();
              pcVar10 = auVar16._0_8_;
              objc_msgSend_stringWithFormat_(puVar2,auVar16._8_8_,&cf_____);
              auVar16 = _objc_retainAutoreleasedReturnValue();
              objc_msgSend_setObject_forKeyedSubscript_(uVar5,auVar16._8_8_,auVar16._0_8_,uVar15);
              uVar14 = auVar16._0_8_;
LAB_000097c4:
              _objc_release(uVar14);
              uVar14 = uVar15;
              goto LAB_000097cc;
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
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_70) {
    _objc_autoreleaseReturnValue(uVar5);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x00009974  SBWhitelistCell__initWithStyle_reuseIdentifier_specifier_

/* Function Stack Size: 0x28 bytes */

ID SBWhitelistCell::SBWhitelistCell__initWithStyle_reuseIdentifier_specifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
  ID IVar1;
  undefined auVar2 [16];
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_0001e010;
  local_30 = param_1;
  IVar1 = _objc_msgSendSuper2(&local_30,PTR_s_initWithStyle_reuseIdentifier_sp_0001d8a8,3);
  if (IVar1 != 0) {
    auVar2 = _objc_alloc_init(PTR__OBJC_CLASS___UISwitch_0001df38);
    objc_msgSend_setWhitelistSwitch_(IVar1,auVar2._8_8_,auVar2._0_8_);
    _objc_release(auVar2._0_8_);
    objc_msgSend_whitelistSwitch(IVar1);
    auVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setAccessoryView_(IVar1,auVar2._8_8_,auVar2._0_8_);
    _objc_release(auVar2._0_8_);
    objc_msgSend_whitelistSwitch(IVar1);
    auVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_addTarget_action_forControlEvents_
              (auVar2._0_8_,auVar2._8_8_,IVar1,PTR_s_switchToggled__0001ddb0,0x1000);
    _objc_release(auVar2._0_8_);
  }
  return IVar1;
}



// ===== 0x00009a3c  SBWhitelistCell__prepareForReuse

/* Function Stack Size: 0x10 bytes */

void SBWhitelistCell::SBWhitelistCell__prepareForReuse(ID param_1,SEL param_2)

{
  undefined8 extraout_x1;
  undefined auVar1 [16];
  ID local_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_0001e010;
  local_30 = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_prepareForReuse_0001d9f8);
  objc_msgSend_imageView(param_1);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setImage_(auVar1._0_8_,auVar1._8_8_,0);
  _objc_release(auVar1._0_8_);
  objc_msgSend_setIconLoadToken_(param_1,extraout_x1,0);
  return;
}



// ===== 0x00009aac  SBWhitelistCell__refreshCellContentsWithSpecifier_

/* Function Stack Size: 0x18 bytes */

void SBWhitelistCell::SBWhitelistCell__refreshCellContentsWithSpecifier_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined auVar5 [16];
  undefined *local_88;
  undefined8 local_80;
  code *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  ID IStack_60;
  undefined8 local_58;
  ID local_50;
  undefined *puStack_48;
  
  lVar1 = _objc_retain(param_3);
  puStack_48 = PTR_PTR_0001e010;
  local_50 = param_1;
  _objc_msgSendSuper2(&local_50,PTR_s_refreshCellContentsWithSpecifier_0001da28,lVar1);
  if (lVar1 != 0) {
    objc_msgSend_propertyForKey_(lVar1,extraout_x1,&cf_bundleID);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    uVar4 = auVar5._0_8_;
    objc_msgSend_setAppBundleID_(param_1,auVar5._8_8_,uVar4);
    objc_msgSend_name(lVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_textLabel(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setText_(auVar5._0_8_,auVar5._8_8_,uVar2);
    _objc_release(auVar5._0_8_);
    _objc_release(uVar2);
    objc_msgSend_detailTextLabel(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setText_(auVar5._0_8_,auVar5._8_8_,uVar4);
    _objc_release(auVar5._0_8_);
    objc_msgSend_performGetter(lVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar3 = objc_msgSend_boolValue();
    objc_msgSend_whitelistSwitch(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setOn_(auVar5._0_8_,auVar5._8_8_,uVar3);
    _objc_release(auVar5._0_8_);
    objc_msgSend_imageView(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setImage_(auVar5._0_8_,auVar5._8_8_,0);
    _objc_release(auVar5._0_8_);
    auVar5 = _objc_retain(uVar4);
    uVar4 = auVar5._0_8_;
    objc_msgSend_setIconLoadToken_(param_1,auVar5._8_8_,uVar4);
    _dispatch_get_global_queue(9,0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_88 = PTR___NSConcreteStackBlock_00018090;
    local_80 = DAT_00011fc0;
    local_78 = FUN_00009cac;
    puStack_70 = &DAT_000182e8;
    local_68 = uVar4;
    IStack_60 = param_1;
    local_58 = uVar4;
    uVar4 = _objc_retain(uVar4);
    _dispatch_async(uVar3,&local_88);
    _objc_release(uVar3);
    _objc_release(local_58);
    _objc_release(local_68);
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



// ===== 0x00009cac  FUN_00009cac

void FUN_00009cac(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 uVar3;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_0001ded0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  objc_msgSend_mainScreen(PTR__OBJC_CLASS___UIScreen_0001dec0);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_scale();
  objc_msgSend__applicationIconImageForBundleIdentifier_format_scale_(puVar1,extraout_x1,uVar3,0);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  local_68 = PTR___NSConcreteStackBlock_00018090;
  local_60 = DAT_00011fc0;
  local_58 = FUN_00009d94;
  puStack_50 = &DAT_000182e8;
  local_48 = *(undefined8 *)(param_1 + 0x28);
  local_40 = _objc_retain(*(undefined8 *)(param_1 + 0x30));
  local_38 = uVar3;
  uVar2 = _objc_retain(uVar3);
  _dispatch_async(PTR___dispatch_main_q_000180f0,&local_68);
  _objc_release(local_38);
  _objc_release(local_40);
  _objc_release(uVar2);
  return;
}



// ===== 0x00009d94  FUN_00009d94

void FUN_00009d94(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  objc_msgSend_iconLoadToken(*(undefined8 *)(param_1 + 0x20));
  auVar3 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_isEqualToString_(auVar3._0_8_,auVar3._8_8_,*(undefined8 *)(param_1 + 0x28));
  _objc_release(auVar3._0_8_);
  if (iVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    objc_msgSend_imageView(*(undefined8 *)(param_1 + 0x20));
    auVar3 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setImage_(auVar3._0_8_,auVar3._8_8_,uVar2);
    _objc_release(auVar3._0_8_);
    objc_msgSend_setNeedsLayout(*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



// ===== 0x00009e20  FUN_00009e20

void FUN_00009e20(undefined8 param_1,long param_2)

{
  _objc_retain(*(undefined8 *)(param_2 + 0x20));
  _objc_retain(*(undefined8 *)(param_2 + 0x28));
  _objc_retain(*(undefined8 *)(param_2 + 0x30));
  return;
}



// ===== 0x00009e50  FUN_00009e50

void FUN_00009e50(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
  _objc_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



// ===== 0x00009e80  SBWhitelistCell__switchToggled_

/* Function Stack Size: 0x18 bytes */

void SBWhitelistCell::SBWhitelistCell__switchToggled_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined auVar4 [16];
  
  uVar2 = _objc_retain(param_3);
  objc_msgSend_specifier(param_1);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_0001df30;
  if (lVar3 != 0) {
    auVar4 = objc_msgSend_isOn(uVar2);
    objc_msgSend_numberWithBool_(puVar1,auVar4._8_8_,auVar4._0_8_);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_performSetterWithValue_(lVar3,auVar4._8_8_,auVar4._0_8_);
    _objc_release(auVar4._0_8_);
  }
  _objc_release(lVar3);
  _objc_release(uVar2);
  return;
}



// ===== 0x00009f10  SBWhitelistCell__whitelistSwitch

/* Function Stack Size: 0x10 bytes */

ID SBWhitelistCell::SBWhitelistCell__whitelistSwitch(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_whitelistSwitch);
}



// ===== 0x00009f20  SBWhitelistCell__setWhitelistSwitch_

/* Function Stack Size: 0x18 bytes */

void SBWhitelistCell::SBWhitelistCell__setWhitelistSwitch_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_whitelistSwitch,param_3);
  return;
}



// ===== 0x00009f34  SBWhitelistCell__appBundleID

/* Function Stack Size: 0x10 bytes */

ID SBWhitelistCell::SBWhitelistCell__appBundleID(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_appBundleID);
}



// ===== 0x00009f44  SBWhitelistCell__setAppBundleID_

/* Function Stack Size: 0x18 bytes */

void SBWhitelistCell::SBWhitelistCell__setAppBundleID_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x00009f50  SBWhitelistCell__iconLoadToken

/* Function Stack Size: 0x10 bytes */

ID SBWhitelistCell::SBWhitelistCell__iconLoadToken(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_iconLoadToken);
}



// ===== 0x00009f60  SBWhitelistCell__setIconLoadToken_

/* Function Stack Size: 0x18 bytes */

void SBWhitelistCell::SBWhitelistCell__setIconLoadToken_(ID param_1,SEL param_2,ID param_3)

{
  _objc_setProperty_nonatomic_copy();
  return;
}



// ===== 0x00009f6c  SBWhitelistCell___cxx_destruct

/* Function Stack Size: 0x10 bytes */

void SBWhitelistCell::SBWhitelistCell___cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_iconLoadToken,0);
  _objc_storeStrong(param_1 + (long)_appBundleID,0);
  _objc_storeStrong(param_1 + (long)_whitelistSwitch,0);
  return;
}



// ===== 0x00009fc0  SystemBoxWhitelistController__allApps

/* Function Stack Size: 0x10 bytes */

ID SystemBoxWhitelistController::SystemBoxWhitelistController__allApps(ID param_1,SEL param_2)

{
  int iVar1;
  long lVar2;
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
  undefined *puVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  ID IVar26;
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
  SEL extraout_x1_29;
  long lVar27;
  undefined8 uVar28;
  long lVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined auVar39 [16];
  undefined auVar40 [16];
  undefined auVar41 [16];
  undefined *local_990;
  long local_960;
  undefined8 local_8f8;
  undefined8 local_8b0;
  long lStack_8a8;
  long *local_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 local_870;
  long lStack_868;
  long *local_860;
  undefined8 uStack_858;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 local_830;
  long lStack_828;
  long *local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  long lStack_7e8;
  long *local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  long lStack_7a8;
  long *local_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined *local_770;
  undefined8 local_768;
  code *local_760;
  undefined *local_758;
  undefined8 local_750;
  undefined8 local_748;
  undefined8 local_740;
  long lStack_738;
  long *local_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 local_700;
  long lStack_6f8;
  long *local_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  long lStack_6b8;
  long *local_6b0;
  undefined8 uStack_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  char local_671;
  undefined8 local_670;
  long lStack_668;
  long *local_660;
  undefined8 uStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 local_630;
  long lStack_628;
  long *local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  long lStack_5e8;
  long *local_5e0;
  undefined8 uStack_5d8;
  undefined8 local_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  cfstringStruct *local_5b0;
  cfstringStruct *local_5a8;
  long local_5a0;
  long local_598;
  undefined auStack_590 [128];
  undefined auStack_510 [128];
  undefined auStack_490 [128];
  undefined auStack_410 [128];
  undefined auStack_390 [128];
  undefined auStack_310 [128];
  undefined auStack_290 [128];
  undefined auStack_210 [128];
  undefined auStack_190 [128];
  cfstringStruct *local_110;
  cfstringStruct *pcStack_108;
  long local_100;
  undefined8 uStack_f8;
  undefined auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_000180e0;
  lVar29 = (long)_allApps;
  lVar2 = *(long *)(param_1 + lVar29);
  if (lVar2 == 0) {
    _dlopen("/System/Library/Frameworks/CoreServices.framework/CoreServices",1);
    _dlopen("/System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices",1);
    lVar2 = _NSClassFromString(&cf_LSApplicationWorkspace);
    uVar3 = _NSSelectorFromString(&cf_defaultWorkspace);
    local_990 = PTR____NSArray0__struct_000180a8;
    if ((lVar2 != 0) &&
       (uVar4 = _objc_opt_respondsToSelector(lVar2,uVar3),
       local_990 = PTR____NSArray0__struct_000180a8, (uVar4 & 1) != 0)) {
      _objc_msgSend(lVar2,uVar3);
      lVar2 = _objc_retainAutoreleasedReturnValue();
      local_990 = PTR____NSArray0__struct_000180a8;
      if (lVar2 != 0) {
        objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_0001df88);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_set(PTR__OBJC_CLASS___NSMutableSet_0001dfa0);
        auVar39 = _objc_retainAutoreleasedReturnValue();
        uVar5 = auVar39._0_8_;
        lStack_738 = 0;
        local_740 = 0;
        uStack_728 = 0;
        local_730 = (long *)0x0;
        uStack_718 = 0;
        local_720 = 0;
        uStack_708 = 0;
        uStack_710 = 0;
        lVar6 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (&PTR__OBJC_CLASS___NSConstantArray_00019b78,auVar39._8_8_,&local_740,
                           auStack_390,0x10);
        if (lVar6 != 0) {
          lVar31 = *local_730;
          do {
            lVar35 = 0;
            do {
              if (*local_730 != lVar31) {
                _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_00019b78);
              }
              uVar7 = _NSSelectorFromString(*(undefined8 *)(lStack_738 + lVar35 * 8));
              auVar39 = _objc_opt_respondsToSelector(lVar2,uVar7);
              uVar8 = auVar39._8_8_;
              if ((auVar39 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                _objc_msgSend(lVar2,uVar7);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                uVar7 = _objc_opt_class(PTR__OBJC_CLASS___NSArray_0001def8);
                auVar39 = _objc_opt_isKindOfClass(uVar8,uVar7);
                if ((auVar39 & (undefined  [16])0x1) == (undefined  [16])0x0) {
                  uVar7 = _objc_opt_class(PTR__OBJC_CLASS___NSSet_0001dfa8);
                  uVar4 = _objc_opt_isKindOfClass(uVar8,uVar7);
                  if ((uVar4 & 1) != 0) {
                    objc_msgSend_allObjects(uVar8);
                    auVar39 = _objc_retainAutoreleasedReturnValue();
                    objc_msgSend_addObjectsFromArray_(uVar3,auVar39._8_8_,auVar39._0_8_);
                    _objc_release(auVar39._0_8_);
                  }
                }
                else {
                  objc_msgSend_addObjectsFromArray_(uVar3,auVar39._8_8_,uVar8);
                }
                _objc_release(uVar8);
                uVar8 = extraout_x1;
              }
              lVar35 = lVar35 + 1;
            } while (lVar6 != lVar35);
            lVar6 = objc_msgSend_countByEnumeratingWithState_objects_count_
                              (&PTR__OBJC_CLASS___NSConstantArray_00019b78,uVar8,&local_740,
                               auStack_390,0x10);
          } while (lVar6 != 0);
        }
        uVar8 = _NSSelectorFromString(&cf_enumerateApplicationsOfType_block_);
        uVar4 = _objc_opt_respondsToSelector(lVar2,uVar8);
        if ((uVar4 & 1) != 0) {
          local_770 = PTR___NSConcreteStackBlock_00018090;
          local_768 = DAT_00011fc0;
          local_760 = FUN_0000c50c;
          local_758 = &DAT_00018378;
          local_750 = _objc_retain(uVar3);
          local_748 = _objc_retain(uVar5);
          _objc_msgSend(lVar2,uVar8,3,&local_770);
          _objc_release(local_748);
          _objc_release(local_750);
        }
        uVar8 = _NSSelectorFromString(&cf_applicationsOfType_);
        uVar4 = _objc_opt_respondsToSelector(lVar2,uVar8);
        if ((uVar4 & 1) != 0) {
          _objc_msgSend(lVar2,uVar8,3);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          uVar7 = _objc_opt_class(PTR__OBJC_CLASS___NSArray_0001def8);
          uVar4 = _objc_opt_isKindOfClass(uVar8,uVar7);
          if ((uVar4 & 1) != 0) {
            uStack_788 = 0;
            local_790 = 0;
            uStack_778 = 0;
            uStack_780 = 0;
            lStack_7a8 = 0;
            local_7b0 = 0;
            uStack_798 = 0;
            local_7a0 = (long *)0x0;
            auVar39 = _objc_retain(uVar8);
            uVar7 = auVar39._0_8_;
            auVar39 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar7,auVar39._8_8_,&local_7b0,auStack_410,0x10);
            if (auVar39._0_8_ != 0) {
              lVar6 = *local_7a0;
              do {
                uVar9 = auVar39._8_8_;
                lVar31 = 0;
                do {
                  if (*local_7a0 != lVar6) {
                    _objc_enumerationMutation(uVar7);
                    uVar9 = extraout_x1_00;
                  }
                  uVar30 = *(undefined8 *)(lStack_7a8 + lVar31 * 8);
                  objc_msgSend_addObject_(uVar3,uVar9,uVar30);
                  FUN_0000c58c(uVar30);
                  uVar9 = _objc_retainAutoreleasedReturnValue();
                  auVar40 = objc_msgSend_length();
                  if (auVar40._0_8_ != 0) {
                    objc_msgSend_addObject_(uVar5,auVar40._8_8_,uVar9);
                  }
                  _objc_release(uVar9);
                  lVar31 = lVar31 + 1;
                  uVar9 = extraout_x1_01;
                } while (auVar39._0_8_ != lVar31);
                auVar39 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                    (uVar7,extraout_x1_01,&local_7b0,auStack_410,0x10);
              } while (auVar39._0_8_ != 0);
            }
            _objc_release(uVar7);
          }
          _objc_release(uVar8);
        }
        objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_0001df50);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        uVar7 = _NSSelectorFromString(&cf_isPlaceholder);
        uVar9 = _NSSelectorFromString(&cf_isInstalled);
        uVar30 = _NSSelectorFromString(&cf_isLaunchProhibited);
        uVar10 = _NSSelectorFromString(&cf_isWatchKitApp);
        uVar11 = _NSSelectorFromString(&cf_applicationType);
        uVar12 = _NSSelectorFromString(&cf_appTags);
        uVar13 = _NSSelectorFromString(&cf_bundleURL);
        lStack_7e8 = 0;
        local_7f0 = 0;
        uStack_7d8 = 0;
        local_7e0 = (long *)0x0;
        uStack_7c8 = 0;
        local_7d0 = 0;
        uStack_7b8 = 0;
        uStack_7c0 = 0;
        auVar39 = _objc_retain(uVar3);
        uVar3 = auVar39._0_8_;
        lVar6 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar3,auVar39._8_8_,&local_7f0,auStack_490,0x10);
        if (lVar6 != 0) {
          lVar31 = *local_7e0;
          do {
            lVar35 = 0;
            do {
              if (*local_7e0 != lVar31) {
                _objc_enumerationMutation(uVar3);
              }
              uVar38 = *(undefined8 *)(lStack_7e8 + lVar35 * 8);
              uVar4 = _objc_opt_respondsToSelector(uVar38,uVar7);
              if ((uVar4 & 1) == 0) {
LAB_0000a4d0:
                uVar4 = _objc_opt_respondsToSelector(uVar38,uVar9);
                if (((uVar4 & 1) == 0) ||
                   (iVar1 = _objc_msgSend(uVar38,uVar9), uVar14 = extraout_x1_02, iVar1 != 0)) {
                  uVar4 = _objc_opt_respondsToSelector(uVar38,uVar30);
                  if ((uVar4 & 1) != 0) {
                    auVar39 = _objc_msgSend(uVar38,uVar30);
                    uVar14 = auVar39._8_8_;
                    if ((auVar39 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_0000a8c8;
                  }
                  uVar4 = _objc_opt_respondsToSelector(uVar38,uVar10);
                  if ((uVar4 & 1) != 0) {
                    auVar39 = _objc_msgSend(uVar38,uVar10);
                    uVar14 = auVar39._8_8_;
                    if ((auVar39 & (undefined  [16])0x1) != (undefined  [16])0x0) goto LAB_0000a8c8;
                  }
                  uVar4 = _objc_opt_respondsToSelector(uVar38,uVar11);
                  if ((uVar4 & 1) == 0) {
                    uVar14 = 0;
                  }
                  else {
                    _objc_msgSend(uVar38,uVar11);
                    uVar14 = _objc_retainAutoreleasedReturnValue();
                  }
                  FUN_0000c58c(uVar38);
                  auVar39 = _objc_retainAutoreleasedReturnValue();
                  lVar33 = auVar39._0_8_;
                  auVar39 = objc_msgSend_containsObject_
                                      (&PTR__OBJC_CLASS___NSConstantArray_00019b90,auVar39._8_8_,
                                       uVar14);
                  if (((auVar39 & (undefined  [16])0x1) != (undefined  [16])0x0) ||
                     (iVar1 = objc_msgSend_containsObject_(uVar5,auVar39._8_8_,lVar33), iVar1 != 0))
                  {
                    uVar4 = _objc_opt_respondsToSelector(uVar38,uVar13);
                    if ((uVar4 & 1) == 0) {
                      uVar15 = 0;
                    }
                    else {
                      _objc_msgSend(uVar38,uVar13);
                      uVar15 = _objc_retainAutoreleasedReturnValue();
                    }
                    uVar16 = _objc_opt_class(PTR__OBJC_CLASS___NSURL_0001df10);
                    uVar4 = _objc_opt_isKindOfClass(uVar15,uVar16);
                    if ((uVar4 & 1) != 0) {
                      objc_msgSend_pathExtension(uVar15);
                      uVar16 = _objc_retainAutoreleasedReturnValue();
                      objc_msgSend_lowercaseString();
                      auVar39 = _objc_retainAutoreleasedReturnValue();
                      iVar1 = objc_msgSend_isEqualToString_(auVar39._0_8_,auVar39._8_8_,&cf_app);
                      _objc_release(auVar39._0_8_);
                      _objc_release(uVar16);
                      if (iVar1 != 0) {
                        uVar4 = _objc_opt_respondsToSelector(uVar38,uVar12);
                        if ((uVar4 & 1) == 0) {
                          puVar17 = (undefined *)0x0;
                        }
                        else {
                          _objc_msgSend(uVar38,uVar12);
                          puVar17 = (undefined *)_objc_retainAutoreleasedReturnValue();
                        }
                        uStack_808 = 0;
                        local_810 = 0;
                        uStack_7f8 = 0;
                        uStack_800 = 0;
                        lStack_828 = 0;
                        local_830 = 0;
                        uStack_818 = 0;
                        local_820 = (long *)0x0;
                        uVar16 = _objc_opt_class(PTR__OBJC_CLASS___NSArray_0001def8);
                        uVar4 = _objc_opt_isKindOfClass(puVar17,uVar16);
                        puVar20 = puVar17;
                        if ((uVar4 & 1) == 0) {
                          puVar20 = PTR____NSArray0__struct_000180a8;
                        }
                        auVar39 = _objc_retain(puVar20);
                        lVar19 = auVar39._0_8_;
                        lVar18 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                           (lVar19,auVar39._8_8_,&local_830,auStack_510,0x10);
                        if (lVar18 != 0) {
                          lVar36 = *local_820;
                          do {
                            lVar32 = 0;
                            do {
                              if (*local_820 != lVar36) {
                                _objc_enumerationMutation(lVar19);
                              }
                              uVar28 = *(undefined8 *)(lStack_828 + lVar32 * 8);
                              uVar16 = _objc_opt_class(PTR__OBJC_CLASS___NSString_0001df48);
                              auVar39 = _objc_opt_isKindOfClass(uVar28,uVar16);
                              uVar16 = auVar39._8_8_;
                              if ((auVar39 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                                objc_msgSend_lowercaseString(uVar28);
                                auVar39 = _objc_retainAutoreleasedReturnValue();
                                uVar4 = objc_msgSend_containsString_
                                                  (auVar39._0_8_,auVar39._8_8_,&cf_hidden);
                                _objc_release(auVar39._0_8_);
                                uVar16 = extraout_x1_03;
                                if ((uVar4 & 1) != 0) goto LAB_0000a890;
                              }
                              lVar32 = lVar32 + 1;
                            } while (lVar18 != lVar32);
                            lVar18 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                               (lVar19,uVar16,&local_830,auStack_510,0x10);
                          } while (lVar18 != 0);
                        }
                        _objc_release(lVar19);
                        auVar39 = objc_msgSend_length(lVar33);
                        if (auVar39._0_8_ != 0) {
                          objc_msgSend_objectForKeyedSubscript_(uVar8,auVar39._8_8_,lVar33);
                          lVar19 = _objc_retainAutoreleasedReturnValue();
                          _objc_release();
                          if (lVar19 == 0) {
                            uStack_848 = 0;
                            local_850 = 0;
                            uStack_838 = 0;
                            uStack_840 = 0;
                            lStack_868 = 0;
                            local_870 = 0;
                            uStack_858 = 0;
                            local_860 = (long *)0x0;
                            lVar19 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                               (&PTR__OBJC_CLASS___NSConstantArray_00019ba8,
                                                extraout_x1_04,&local_870,auStack_590,0x10);
                            if (lVar19 != 0) {
                              lVar18 = *local_860;
                              do {
                                lVar36 = 0;
                                do {
                                  if (*local_860 != lVar18) {
                                    _objc_enumerationMutation
                                              (&PTR__OBJC_CLASS___NSConstantArray_00019ba8);
                                  }
                                  uVar28 = _NSSelectorFromString
                                                     (*(undefined8 *)(lStack_868 + lVar36 * 8));
                                  auVar39 = _objc_opt_respondsToSelector(uVar38,uVar28);
                                  uVar16 = auVar39._8_8_;
                                  if ((auVar39 & (undefined  [16])0x1) != (undefined  [16])0x0) {
                                    _objc_msgSend(uVar38,uVar28);
                                    uVar16 = _objc_retainAutoreleasedReturnValue();
                                    uVar28 = _objc_opt_class(PTR__OBJC_CLASS___NSString_0001df48);
                                    uVar4 = _objc_opt_isKindOfClass(uVar16,uVar28);
                                    if (((uVar4 & 1) != 0) &&
                                       (lVar32 = objc_msgSend_length(uVar16), lVar32 != 0)) {
                                      lVar19 = _objc_retain(uVar16);
                                      _objc_release();
                                      goto LAB_0000a8ec;
                                    }
                                    _objc_release(uVar16);
                                    uVar16 = extraout_x1_05;
                                  }
                                  lVar36 = lVar36 + 1;
                                } while (lVar19 != lVar36);
                                lVar19 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                                   (&PTR__OBJC_CLASS___NSConstantArray_00019ba8,
                                                    uVar16,&local_870,auStack_590,0x10);
                              } while (lVar19 != 0);
                              lVar19 = 0;
                            }
LAB_0000a8ec:
                            local_5b0 = &cf_bundleID;
                            local_5a8 = &cf_name;
                            local_5a0 = lVar33;
                            auVar39 = objc_msgSend_length(lVar19);
                            local_598 = lVar33;
                            if (auVar39._0_8_ != 0) {
                              local_598 = lVar19;
                            }
                            objc_msgSend_dictionaryWithObjects_forKeys_count_
                                      (PTR__OBJC_CLASS___NSDictionary_0001df40,auVar39._8_8_,
                                       &local_5a0,&local_5b0,2);
                            auVar39 = _objc_retainAutoreleasedReturnValue();
                            objc_msgSend_setObject_forKeyedSubscript_
                                      (uVar8,auVar39._8_8_,auVar39._0_8_,lVar33);
                            _objc_release(auVar39._0_8_);
LAB_0000a890:
                            _objc_release(lVar19);
                          }
                        }
                        _objc_release(puVar17);
                      }
                    }
                    _objc_release(uVar15);
                  }
                  _objc_release(lVar33);
                  _objc_release(uVar14);
                  uVar14 = extraout_x1_06;
                }
              }
              else {
                auVar39 = _objc_msgSend(uVar38,uVar7);
                uVar14 = auVar39._8_8_;
                if ((auVar39 & (undefined  [16])0x1) == (undefined  [16])0x0) goto LAB_0000a4d0;
              }
LAB_0000a8c8:
              lVar35 = lVar35 + 1;
            } while (lVar35 != lVar6);
            lVar6 = objc_msgSend_countByEnumeratingWithState_objects_count_
                              (uVar3,uVar14,&local_7f0,auStack_490,0x10);
          } while (lVar6 != 0);
        }
        _objc_release(uVar3);
        uStack_888 = 0;
        local_890 = 0;
        uStack_878 = 0;
        uStack_880 = 0;
        lStack_8a8 = 0;
        local_8b0 = 0;
        uStack_898 = 0;
        local_8a0 = (long *)0x0;
        objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_0001df58);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_0001df88);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_set(PTR__OBJC_CLASS___NSMutableSet_0001dfa0);
        auVar39 = _objc_retainAutoreleasedReturnValue();
        uVar30 = auVar39._0_8_;
        lStack_628 = 0;
        local_630 = 0;
        uStack_618 = 0;
        local_620 = (long *)0x0;
        uStack_608 = 0;
        local_610 = 0;
        uStack_5f8 = 0;
        uStack_600 = 0;
        local_960 = objc_msgSend_countByEnumeratingWithState_objects_count_
                              (&PTR__OBJC_CLASS___NSConstantArray_00019bd8,auVar39._8_8_,&local_630,
                               auStack_190,0x10);
        if (local_960 != 0) {
          lVar6 = *local_620;
          do {
            lVar31 = 0;
            do {
              if (*local_620 != lVar6) {
                _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_00019bd8);
              }
              objc_msgSend_stringByStandardizingPath(*(undefined8 *)(lStack_628 + lVar31 * 8));
              auVar39 = _objc_retainAutoreleasedReturnValue();
              uVar10 = auVar39._0_8_;
              auVar39 = objc_msgSend_containsObject_(uVar30,auVar39._8_8_,uVar10);
              if (((auVar39 & (undefined  [16])0x1) == (undefined  [16])0x0) &&
                 (iVar1 = objc_msgSend_fileExistsAtPath_(uVar7,auVar39._8_8_,uVar10), iVar1 != 0)) {
                objc_msgSend_addObject_(uVar30,extraout_x1_07,uVar10);
                objc_msgSend_contentsOfDirectoryAtPath_error_(uVar7,extraout_x1_08,uVar10,0);
                puVar20 = (undefined *)_objc_retainAutoreleasedReturnValue();
                puVar17 = PTR____NSArray0__struct_000180a8;
                if (puVar20 != (undefined *)0x0) {
                  puVar17 = puVar20;
                }
                uVar11 = _objc_retain(puVar17);
                _objc_release(puVar20);
                uStack_648 = 0;
                local_650 = 0;
                uStack_638 = 0;
                uStack_640 = 0;
                lStack_668 = 0;
                local_670 = 0;
                uStack_658 = 0;
                local_660 = (long *)0x0;
                auVar39 = _objc_retain(uVar11);
                uVar11 = auVar39._0_8_;
                auVar39 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                    (uVar11,auVar39._8_8_,&local_670,auStack_210,0x10);
                if (auVar39._0_8_ != 0) {
                  lVar35 = *local_660;
                  do {
                    uVar12 = auVar39._8_8_;
                    lVar33 = 0;
                    do {
                      if (*local_660 != lVar35) {
                        _objc_enumerationMutation(uVar11);
                        uVar12 = extraout_x1_09;
                      }
                      objc_msgSend_stringByAppendingPathComponent_
                                (uVar10,uVar12,*(undefined8 *)(lStack_668 + lVar33 * 8));
                      auVar40 = _objc_retainAutoreleasedReturnValue();
                      uVar12 = auVar40._0_8_;
                      local_671 = '\0';
                      iVar1 = objc_msgSend_fileExistsAtPath_isDirectory_
                                        (uVar7,auVar40._8_8_,uVar12,&local_671);
                      if (iVar1 != 0 && local_671 != '\0') {
                        objc_msgSend_arrayWithObject_
                                  (PTR__OBJC_CLASS___NSMutableArray_0001df88,extraout_x1_10,uVar12);
                        uVar13 = _objc_retainAutoreleasedReturnValue();
                        objc_msgSend_pathExtension(uVar12);
                        uVar38 = _objc_retainAutoreleasedReturnValue();
                        objc_msgSend_lowercaseString();
                        auVar40 = _objc_retainAutoreleasedReturnValue();
                        uVar4 = objc_msgSend_isEqualToString_(auVar40._0_8_,auVar40._8_8_,&cf_app);
                        _objc_release(auVar40._0_8_);
                        _objc_release(uVar38);
                        if ((uVar4 & 1) == 0) {
                          objc_msgSend_contentsOfDirectoryAtPath_error_
                                    (uVar7,extraout_x1_11,uVar12,0);
                          puVar20 = (undefined *)_objc_retainAutoreleasedReturnValue();
                          puVar17 = PTR____NSArray0__struct_000180a8;
                          if (puVar20 != (undefined *)0x0) {
                            puVar17 = puVar20;
                          }
                          uVar38 = _objc_retain(puVar17);
                          _objc_release(puVar20);
                          uStack_698 = 0;
                          local_6a0 = 0;
                          uStack_688 = 0;
                          uStack_690 = 0;
                          lStack_6b8 = 0;
                          local_6c0 = 0;
                          uStack_6a8 = 0;
                          local_6b0 = (long *)0x0;
                          auVar40 = _objc_retain(uVar38);
                          uVar38 = auVar40._0_8_;
                          auVar40 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                              (uVar38,auVar40._8_8_,&local_6c0,auStack_290,0x10);
                          if (auVar40._0_8_ != 0) {
                            lVar19 = *local_6b0;
                            do {
                              uVar14 = auVar40._8_8_;
                              lVar18 = 0;
                              do {
                                if (*local_6b0 != lVar19) {
                                  _objc_enumerationMutation(uVar38);
                                  uVar14 = extraout_x1_12;
                                }
                                objc_msgSend_stringByAppendingPathComponent_
                                          (uVar12,uVar14,*(undefined8 *)(lStack_6b8 + lVar18 * 8));
                                uVar14 = _objc_retainAutoreleasedReturnValue();
                                objc_msgSend_pathExtension();
                                uVar15 = _objc_retainAutoreleasedReturnValue();
                                objc_msgSend_lowercaseString();
                                auVar41 = _objc_retainAutoreleasedReturnValue();
                                iVar1 = objc_msgSend_isEqualToString_
                                                  (auVar41._0_8_,auVar41._8_8_,&cf_app);
                                _objc_release(auVar41._0_8_);
                                _objc_release(uVar15);
                                if (iVar1 != 0) {
                                  objc_msgSend_addObject_(uVar13,extraout_x1_13,uVar14);
                                }
                                _objc_release(uVar14);
                                lVar18 = lVar18 + 1;
                                uVar14 = extraout_x1_14;
                              } while (auVar40._0_8_ != lVar18);
                              auVar40 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                                  (uVar38,extraout_x1_14,&local_6c0,auStack_290,0x10
                                                  );
                            } while (auVar40._0_8_ != 0);
                          }
                          _objc_release(uVar38);
                          _objc_release(uVar38);
                        }
                        uStack_6d8 = 0;
                        local_6e0 = 0;
                        uStack_6c8 = 0;
                        uStack_6d0 = 0;
                        lStack_6f8 = 0;
                        local_700 = 0;
                        uStack_6e8 = 0;
                        local_6f0 = (long *)0x0;
                        auVar40 = _objc_retain(uVar13);
                        uVar13 = auVar40._0_8_;
                        lVar19 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                           (uVar13,auVar40._8_8_,&local_700,auStack_310,0x10);
                        if (lVar19 != 0) {
                          lVar18 = *local_6f0;
                          do {
                            lVar36 = 0;
                            do {
                              if (*local_6f0 != lVar18) {
                                _objc_enumerationMutation(uVar13);
                              }
                              uVar14 = *(undefined8 *)(lStack_6f8 + lVar36 * 8);
                              objc_msgSend_pathExtension(uVar14);
                              uVar38 = _objc_retainAutoreleasedReturnValue();
                              objc_msgSend_lowercaseString();
                              auVar40 = _objc_retainAutoreleasedReturnValue();
                              iVar1 = objc_msgSend_isEqualToString_
                                                (auVar40._0_8_,auVar40._8_8_,&cf_app);
                              _objc_release(auVar40._0_8_);
                              _objc_release(uVar38);
                              uVar38 = extraout_x1_15;
                              if (iVar1 != 0) {
                                objc_msgSend_fileURLWithPath_isDirectory_
                                          (PTR__OBJC_CLASS___NSURL_0001df10,extraout_x1_15,uVar14,1)
                                ;
                                _objc_retainAutoreleasedReturnValue();
                                uVar38 = _objc_retain();
                                uVar14 = _objc_opt_class(PTR__OBJC_CLASS___NSURL_0001df10);
                                uVar4 = _objc_opt_isKindOfClass(uVar38,uVar14);
                                if ((uVar4 & 1) == 0) {
LAB_0000aefc:
                                  lVar32 = 0;
                                }
                                else {
                                  objc_msgSend_pathExtension(uVar38);
                                  uVar14 = _objc_retainAutoreleasedReturnValue();
                                  objc_msgSend_lowercaseString();
                                  auVar40 = _objc_retainAutoreleasedReturnValue();
                                  iVar1 = objc_msgSend_isEqualToString_
                                                    (auVar40._0_8_,auVar40._8_8_,&cf_app);
                                  _objc_release(auVar40._0_8_);
                                  _objc_release(uVar14);
                                  if (iVar1 == 0) goto LAB_0000aefc;
                                  objc_msgSend_bundleWithURL_
                                            (PTR__OBJC_CLASS___NSBundle_0001dfd0,extraout_x1_16,
                                             uVar38);
                                  uVar14 = _objc_retainAutoreleasedReturnValue();
                                  objc_msgSend_infoDictionary();
                                  uVar15 = _objc_retainAutoreleasedReturnValue();
                                  uVar16 = _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_0001df40);
                                  auVar40 = _objc_opt_isKindOfClass(uVar15,uVar16);
                                  if ((auVar40 & (undefined  [16])0x1) == (undefined  [16])0x0) {
LAB_0000af04:
                                    lVar32 = 0;
                                  }
                                  else {
                                    objc_msgSend_objectForKeyedSubscript_
                                              (uVar15,auVar40._8_8_,&cf_CFBundlePackageType);
                                    uVar16 = _objc_retainAutoreleasedReturnValue();
                                    FUN_0000c7fc();
                                    auVar40 = _objc_retainAutoreleasedReturnValue();
                                    iVar1 = objc_msgSend_isEqualToString_
                                                      (auVar40._0_8_,auVar40._8_8_,&cf_APPL);
                                    _objc_release(auVar40._0_8_);
                                    _objc_release(uVar16);
                                    if (iVar1 == 0) goto LAB_0000af04;
                                    objc_msgSend_bundleIdentifier(uVar14);
                                    auVar40 = _objc_retainAutoreleasedReturnValue();
                                    lVar32 = auVar40._0_8_;
                                    if (lVar32 == 0) {
                                      objc_msgSend_objectForKeyedSubscript_
                                                (uVar15,auVar40._8_8_,&cf_CFBundleIdentifier);
                                      uVar16 = _objc_retainAutoreleasedReturnValue();
                                      FUN_0000c7fc();
                                      lVar21 = _objc_retainAutoreleasedReturnValue();
                                      _objc_release(uVar16);
                                    }
                                    else {
                                      lVar21 = _objc_retain(lVar32);
                                    }
                                    _objc_release(lVar32);
                                    objc_msgSend_objectForKeyedSubscript_
                                              (uVar15,extraout_x1_17,&cf_CFBundleExecutable);
                                    uVar16 = _objc_retainAutoreleasedReturnValue();
                                    FUN_0000c7fc();
                                    uVar28 = _objc_retainAutoreleasedReturnValue();
                                    _objc_release(uVar16);
                                    lVar32 = objc_msgSend_length(lVar21);
                                    if ((lVar32 == 0) ||
                                       (lVar32 = objc_msgSend_length(uVar28), lVar32 == 0)) {
                                      lVar32 = 0;
                                    }
                                    else {
                                      objc_msgSend_defaultManager
                                                (PTR__OBJC_CLASS___NSFileManager_0001df58);
                                      uVar16 = _objc_retainAutoreleasedReturnValue();
                                      objc_msgSend_path(uVar38);
                                      auVar40 = _objc_retainAutoreleasedReturnValue();
                                      objc_msgSend_stringByAppendingPathComponent_
                                                (auVar40._0_8_,auVar40._8_8_,uVar28);
                                      auVar41 = _objc_retainAutoreleasedReturnValue();
                                      iVar1 = objc_msgSend_fileExistsAtPath_
                                                        (uVar16,auVar41._8_8_,auVar41._0_8_);
                                      _objc_release(auVar41._0_8_);
                                      _objc_release(auVar40._0_8_);
                                      _objc_release(uVar16);
                                      if (iVar1 == 0) {
                                        lVar32 = 0;
                                      }
                                      else {
                                        objc_msgSend_objectForKeyedSubscript_
                                                  (uVar15,extraout_x1_18,&cf_SBAppTags);
                                        puVar20 = (undefined *)_objc_retainAutoreleasedReturnValue()
                                        ;
                                        lStack_5e8 = 0;
                                        local_5f0 = 0;
                                        uStack_5d8 = 0;
                                        local_5e0 = (long *)0x0;
                                        uStack_5c8 = 0;
                                        local_5d0 = 0;
                                        uStack_5b8 = 0;
                                        uStack_5c0 = 0;
                                        uVar16 = _objc_opt_class(PTR__OBJC_CLASS___NSArray_0001def8)
                                        ;
                                        uVar4 = _objc_opt_isKindOfClass(puVar20,uVar16);
                                        puVar17 = puVar20;
                                        if ((uVar4 & 1) == 0) {
                                          puVar17 = PTR____NSArray0__struct_000180a8;
                                        }
                                        auVar40 = _objc_retain(puVar17);
                                        uVar16 = auVar40._0_8_;
                                        lVar32 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                                           (uVar16,auVar40._8_8_,&local_5f0,
                                                            auStack_f0,0x10);
                                        if (lVar32 != 0) {
                                          lVar34 = *local_5e0;
                                          do {
                                            lVar27 = 0;
                                            do {
                                              if (*local_5e0 != lVar34) {
                                                _objc_enumerationMutation(uVar16);
                                              }
                                              uVar37 = *(undefined8 *)(lStack_5e8 + lVar27 * 8);
                                              uVar22 = _objc_opt_class(
                                                  PTR__OBJC_CLASS___NSString_0001df48);
                                              auVar40 = _objc_opt_isKindOfClass(uVar37,uVar22);
                                              uVar22 = auVar40._8_8_;
                                              if ((auVar40 & (undefined  [16])0x1) !=
                                                  (undefined  [16])0x0) {
                                                objc_msgSend_lowercaseString(uVar37);
                                                auVar40 = _objc_retainAutoreleasedReturnValue();
                                                uVar4 = objc_msgSend_containsString_
                                                                  (auVar40._0_8_,auVar40._8_8_,
                                                                   &cf_hidden);
                                                _objc_release(auVar40._0_8_);
                                                uVar22 = extraout_x1_19;
                                                if ((uVar4 & 1) != 0) {
                                                  lVar32 = 0;
                                                  goto LAB_0000b324;
                                                }
                                              }
                                              lVar27 = lVar27 + 1;
                                            } while (lVar32 != lVar27);
                                            lVar32 = 
                                                  objc_msgSend_countByEnumeratingWithState_objects_count_
                                                            (uVar16,uVar22,&local_5f0,auStack_f0,
                                                             0x10);
                                          } while (lVar32 != 0);
                                        }
                                        _objc_release(uVar16);
                                        objc_msgSend_localizedInfoDictionary(uVar14);
                                        auVar40 = _objc_retainAutoreleasedReturnValue();
                                        uVar16 = auVar40._0_8_;
                                        objc_msgSend_objectForKeyedSubscript_
                                                  (uVar16,auVar40._8_8_,&cf_CFBundleDisplayName);
                                        uVar22 = _objc_retainAutoreleasedReturnValue();
                                        FUN_0000c7fc();
                                        auVar40 = _objc_retainAutoreleasedReturnValue();
                                        lVar32 = auVar40._0_8_;
                                        if (lVar32 == 0) {
                                          objc_msgSend_objectForKeyedSubscript_
                                                    (uVar16,auVar40._8_8_,&cf_CFBundleName);
                                          uVar37 = _objc_retainAutoreleasedReturnValue();
                                          FUN_0000c7fc();
                                          auVar40 = _objc_retainAutoreleasedReturnValue();
                                          if (auVar40._0_8_ == 0) {
                                            objc_msgSend_objectForKeyedSubscript_
                                                      (uVar15,auVar40._8_8_,&cf_CFBundleDisplayName)
                                            ;
                                            uVar23 = _objc_retainAutoreleasedReturnValue();
                                            FUN_0000c7fc();
                                            auVar41 = _objc_retainAutoreleasedReturnValue();
                                            lVar34 = auVar41._0_8_;
                                            if (lVar34 == 0) {
                                              objc_msgSend_objectForKeyedSubscript_
                                                        (uVar15,auVar41._8_8_,&cf_CFBundleName);
                                              uVar24 = _objc_retainAutoreleasedReturnValue();
                                              FUN_0000c7fc();
                                              lVar25 = _objc_retainAutoreleasedReturnValue();
                                              lVar27 = lVar21;
                                              if (lVar25 != 0) {
                                                lVar27 = lVar25;
                                              }
                                              local_8f8 = _objc_retain(lVar27);
                                              _objc_release(lVar25);
                                              _objc_release(uVar24);
                                            }
                                            else {
                                              local_8f8 = _objc_retain(lVar34);
                                            }
                                            _objc_release(lVar34);
                                            _objc_release(uVar23);
                                          }
                                          else {
                                            local_8f8 = _objc_retain();
                                          }
                                          _objc_release(auVar40._0_8_);
                                          _objc_release(uVar37);
                                        }
                                        else {
                                          local_8f8 = _objc_retain(lVar32);
                                        }
                                        _objc_release(lVar32);
                                        _objc_release(uVar22);
                                        local_110 = &cf_bundleID;
                                        pcStack_108 = &cf_name;
                                        uStack_f8 = local_8f8;
                                        local_100 = lVar21;
                                        objc_msgSend_dictionaryWithObjects_forKeys_count_
                                                  (PTR__OBJC_CLASS___NSDictionary_0001df40,
                                                   extraout_x1_20,&local_100,&local_110,2);
                                        lVar32 = _objc_retainAutoreleasedReturnValue();
                                        _objc_release(local_8f8);
LAB_0000b324:
                                        _objc_release(uVar16);
                                        _objc_release(puVar20);
                                      }
                                    }
                                    _objc_release(uVar28);
                                    _objc_release(lVar21);
                                  }
                                  _objc_release(uVar15);
                                  _objc_release(uVar14);
                                }
                                _objc_release(uVar38);
                                _objc_release(uVar38);
                                if (lVar32 != 0) {
                                  objc_msgSend_addObject_(uVar9,extraout_x1_21,lVar32);
                                }
                                _objc_release(lVar32);
                                uVar38 = extraout_x1_22;
                              }
                              lVar36 = lVar36 + 1;
                            } while (lVar36 != lVar19);
                            lVar19 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                               (uVar13,uVar38,&local_700,auStack_310,0x10);
                          } while (lVar19 != 0);
                        }
                        _objc_release(uVar13);
                        _objc_release(uVar13);
                      }
                      _objc_release(uVar12);
                      lVar33 = lVar33 + 1;
                      uVar12 = extraout_x1_23;
                    } while (lVar33 != auVar39._0_8_);
                    auVar39 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                        (uVar11,extraout_x1_23,&local_670,auStack_210,0x10);
                  } while (auVar39._0_8_ != 0);
                }
                _objc_release(uVar11);
                _objc_release(uVar11);
              }
              _objc_release(uVar10);
              lVar31 = lVar31 + 1;
            } while (lVar31 != local_960);
            local_960 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                  (&PTR__OBJC_CLASS___NSConstantArray_00019bd8,extraout_x1_24,
                                   &local_630,auStack_190,0x10);
          } while (local_960 != 0);
        }
        _objc_release(uVar30);
        _objc_release(uVar7);
        auVar39 = objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar9,extraout_x1_25,&local_8b0,auStack_f0,0x10);
        if (auVar39._0_8_ != 0) {
          lVar6 = *local_8a0;
          do {
            uVar7 = auVar39._8_8_;
            lVar31 = 0;
            do {
              if (*local_8a0 != lVar6) {
                _objc_enumerationMutation(uVar9);
                uVar7 = extraout_x1_26;
              }
              uVar30 = *(undefined8 *)(lStack_8a8 + lVar31 * 8);
              objc_msgSend_objectForKeyedSubscript_(uVar30,uVar7,&cf_bundleID);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              auVar40 = objc_msgSend_length();
              if (auVar40._0_8_ != 0) {
                objc_msgSend_objectForKeyedSubscript_(uVar8,auVar40._8_8_,uVar7);
                lVar35 = _objc_retainAutoreleasedReturnValue();
                _objc_release();
                if (lVar35 == 0) {
                  objc_msgSend_setObject_forKeyedSubscript_(uVar8,extraout_x1_27,uVar30,uVar7);
                }
              }
              _objc_release(uVar7);
              lVar31 = lVar31 + 1;
              uVar7 = extraout_x1_28;
            } while (auVar39._0_8_ != lVar31);
            auVar39 = objc_msgSend_countByEnumeratingWithState_objects_count_
                                (uVar9,extraout_x1_28,&local_8b0,auStack_f0,0x10);
          } while (auVar39._0_8_ != 0);
        }
        _objc_release(uVar9);
        objc_msgSend_allValues(uVar8);
        auVar39 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_sortedArrayUsingComparator_
                  (auVar39._0_8_,auVar39._8_8_,&PTR___NSConcreteGlobalBlock_000183c8);
        local_990 = (undefined *)_objc_retainAutoreleasedReturnValue();
        _objc_release(auVar39._0_8_);
        _objc_release(uVar8);
        _objc_release(uVar5);
        _objc_release(uVar3);
      }
      _objc_release(lVar2);
    }
    uVar3 = *(undefined8 *)(param_1 + lVar29);
    *(undefined **)(param_1 + lVar29) = local_990;
    _objc_release(uVar3);
    lVar2 = *(long *)(param_1 + lVar29);
    param_2 = extraout_x1_29;
  }
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_70) {
    IVar26 = _objc_retainAutoreleaseReturnValue();
    return IVar26;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(lVar2,param_2);
}



// ===== 0x0000b63c  SystemBoxWhitelistController__whitelistPreferenceKey

/* Function Stack Size: 0x10 bytes */

ID SystemBoxWhitelistController::SystemBoxWhitelistController__whitelistPreferenceKey
             (ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  undefined auVar7 [16];
  
  objc_msgSend_specifier();
  auVar7 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_propertyForKey_(auVar7._0_8_,auVar7._8_8_,&cf_whitelistPreferenceKey);
  pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
  _objc_release(auVar7._0_8_);
  uVar2 = _objc_opt_class(PTR__OBJC_CLASS___NSString_0001df48);
  uVar3 = _objc_opt_isKindOfClass(pcVar1,uVar2);
  pcVar6 = &cf_killBackgroundWhitelist;
  if (((uVar3 & 1) != 0) && (lVar4 = objc_msgSend_length(pcVar1), lVar4 != 0)) {
    pcVar6 = pcVar1;
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(pcVar6);
  _objc_release(pcVar1);
  return IVar5;
}



// ===== 0x0000b6d0  SystemBoxWhitelistController__filteredApps

/* Function Stack Size: 0x10 bytes */

ID SystemBoxWhitelistController::SystemBoxWhitelistController__filteredApps(ID param_1,SEL param_2)

{
  long lVar1;
  undefined8 uVar2;
  ID IVar3;
  SEL extraout_x1;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = (long)_filteredApps;
  lVar1 = *(long *)(param_1 + lVar5);
  if (lVar1 == 0) {
    objc_msgSend_allApps(param_1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_1 + lVar5);
    *(undefined8 *)(param_1 + lVar5) = uVar2;
    _objc_release(uVar4);
    lVar1 = *(long *)(param_1 + lVar5);
    param_2 = extraout_x1;
  }
  IVar3 = _objc_retainAutoreleaseReturnValue(lVar1,param_2);
  return IVar3;
}



// ===== 0x0000b720  SystemBoxWhitelistController__appsWithSelectedFirst_

/* Function Stack Size: 0x18 bytes */

ID SystemBoxWhitelistController::SystemBoxWhitelistController__appsWithSelectedFirst_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_00018090;
  local_30 = DAT_00011fc0;
  local_28 = FUN_0000b780;
  puStack_20 = &DAT_00018318;
  local_18 = param_1;
  objc_msgSend_sortedArrayUsingComparator_(param_3,param_2,&local_38);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = _objc_autoreleaseReturnValue();
  return IVar1;
}



// ===== 0x0000b780  FUN_0000b780

long FUN_0000b780(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined auVar6 [16];
  undefined auVar7 [16];
  
  uVar3 = _objc_retain(param_2);
  uVar4 = _objc_retain(param_3);
  objc_msgSend_pinnedBundleIDs(*(undefined8 *)(param_1 + 0x20));
  auVar6 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_objectForKeyedSubscript_(uVar3,auVar6._8_8_,&cf_bundleID);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  iVar1 = objc_msgSend_containsObject_(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  _objc_release(auVar6._0_8_);
  objc_msgSend_pinnedBundleIDs(*(undefined8 *)(param_1 + 0x20));
  auVar6 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_objectForKeyedSubscript_(uVar4,auVar6._8_8_,&cf_bundleID);
  auVar7 = _objc_retainAutoreleasedReturnValue();
  iVar2 = objc_msgSend_containsObject_(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_);
  _objc_release(auVar7._0_8_);
  _objc_release(auVar6._0_8_);
  if (iVar1 == iVar2) {
    objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1,&cf_name);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_objectForKeyedSubscript_(uVar4,auVar6._8_8_,&cf_name);
    auVar7 = _objc_retainAutoreleasedReturnValue();
    lVar5 = objc_msgSend_localizedCaseInsensitiveCompare_(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_);
    _objc_release(auVar7._0_8_);
    _objc_release(auVar6._0_8_);
    if (lVar5 == 0) {
      objc_msgSend_objectForKeyedSubscript_(uVar3,extraout_x1_00,&cf_bundleID);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_objectForKeyedSubscript_(uVar4,auVar6._8_8_,&cf_bundleID);
      auVar7 = _objc_retainAutoreleasedReturnValue();
      lVar5 = objc_msgSend_compare_(auVar6._0_8_,auVar7._8_8_,auVar7._0_8_);
      _objc_release(auVar7._0_8_);
      _objc_release(auVar6._0_8_);
    }
  }
  else {
    lVar5 = 1;
    if (iVar1 != 0) {
      lVar5 = -1;
    }
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  return lVar5;
}



// ===== 0x0000b950  SystemBoxWhitelistController__viewDidLoad

/* Function Stack Size: 0x10 bytes */

void SystemBoxWhitelistController::SystemBoxWhitelistController__viewDidLoad(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined auVar3 [16];
  ID local_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_0001e018;
  local_40 = param_1;
  _objc_msgSendSuper2(&local_40,PTR_s_viewDidLoad_0001de58);
  objc_msgSend_whitelistPreferenceKey(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  FUN_0000bb40();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  objc_msgSend_setWithArray_(PTR__OBJC_CLASS___NSMutableSet_0001dfa0,extraout_x1,uVar2);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setSelectedBundleIDs_(param_1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  objc_msgSend_setWithArray_(PTR__OBJC_CLASS___NSSet_0001dfa8,extraout_x1_00,uVar2);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setPinnedBundleIDs_(param_1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  objc_msgSend_systemGroupedBackgroundColor(PTR__OBJC_CLASS___UIColor_0001deb8);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_view(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setBackgroundColor_(auVar3._0_8_,auVar3._8_8_,uVar1);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar1);
  objc_msgSend_setTitle_(param_1,extraout_x1_01,&cf__IN_vTUS);
  auVar3 = _objc_alloc(PTR__OBJC_CLASS___UISearchController_0001dfb0);
  auVar3 = objc_msgSend_initWithSearchResultsController_(auVar3._0_8_,auVar3._8_8_,0);
  objc_msgSend_setSearchController_(param_1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  objc_msgSend_searchController(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setSearchResultsUpdater_(auVar3._0_8_,auVar3._8_8_,param_1);
  _objc_release(auVar3._0_8_);
  objc_msgSend_searchController(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setObscuresBackgroundDuringPresentation_(auVar3._0_8_,auVar3._8_8_,0);
  _objc_release(auVar3._0_8_);
  objc_msgSend_searchController(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_navigationItem(param_1);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setSearchController_(auVar3._0_8_,auVar3._8_8_,uVar1);
  _objc_release(auVar3._0_8_);
  _objc_release(uVar1);
  objc_msgSend_setDefinesPresentationContext_(param_1,extraout_x1_02,1);
  _objc_release(uVar2);
  return;
}



// ===== 0x0000bb40  FUN_0000bb40

void FUN_0000bb40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 extraout_x1;
  undefined auVar6 [16];
  
  puVar5 = PTR__OBJC_CLASS___NSDictionary_0001df40;
  uVar1 = _objc_retain();
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_dictionaryWithContentsOfFile_(puVar5,auVar6._8_8_,auVar6._0_8_);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar6._0_8_);
  objc_msgSend_objectForKeyedSubscript_(uVar2,extraout_x1,uVar1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = _objc_opt_class(PTR__OBJC_CLASS___NSArray_0001def8);
  uVar4 = _objc_opt_isKindOfClass(uVar3,uVar1);
  puVar5 = PTR____NSArray0__struct_000180a8;
  if ((uVar4 & 1) != 0) {
    puVar5 = (undefined *)_objc_retain(uVar3);
  }
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_autoreleaseReturnValue(puVar5);
  return;
}



// ===== 0x0000bc10  SystemBoxWhitelistController__viewWillAppear_

/* Function Stack Size: 0x14 bytes */

void SystemBoxWhitelistController::SystemBoxWhitelistController__viewWillAppear_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined auVar3 [16];
  ID local_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_0001e018;
  local_40 = param_1;
  _objc_msgSendSuper2(&local_40,PTR_s_viewWillAppear__0001de60,param_3);
  objc_msgSend_whitelistPreferenceKey(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  FUN_0000bb40();
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  objc_msgSend_setWithArray_(PTR__OBJC_CLASS___NSMutableSet_0001dfa0,extraout_x1,uVar2);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setSelectedBundleIDs_(param_1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  objc_msgSend_setWithArray_(PTR__OBJC_CLASS___NSSet_0001dfa8,extraout_x1_00,uVar2);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setPinnedBundleIDs_(param_1,auVar3._8_8_,auVar3._0_8_);
  _objc_release(auVar3._0_8_);
  objc_msgSend_reloadSpecifiers(param_1);
  _objc_release(uVar2);
  return;
}



// ===== 0x0000bcf4  SystemBoxWhitelistController__updateSearchResultsForSearchController_

/* Function Stack Size: 0x18 bytes */

void SystemBoxWhitelistController::
     SystemBoxWhitelistController__updateSearchResultsForSearchController_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  objc_msgSend_searchBar(param_3);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_text();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  lVar4 = objc_msgSend_length(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_0001dfb8;
  if (lVar4 == 0) {
    objc_msgSend_allApps(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    uVar2 = auVar5._0_8_;
    objc_msgSend_setFilteredApps_(param_1,auVar5._8_8_,uVar2);
  }
  else {
    local_68 = PTR___NSConcreteStackBlock_00018090;
    local_60 = DAT_00011fc0;
    local_58 = FUN_0000be44;
    puStack_50 = &DAT_00018348;
    auVar5 = _objc_retain(uVar3);
    local_48 = auVar5._0_8_;
    objc_msgSend_predicateWithBlock_(puVar1,auVar5._8_8_,&local_68);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_allApps(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_filteredArrayUsingPredicate_(auVar5._0_8_,auVar5._8_8_,uVar2);
    auVar6 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setFilteredApps_(param_1,auVar6._8_8_,auVar6._0_8_);
    _objc_release(auVar6._0_8_);
    _objc_release(auVar5._0_8_);
    _objc_release(uVar2);
    uVar2 = local_48;
  }
  _objc_release(uVar2);
  objc_msgSend_reloadSpecifiers(param_1);
  _objc_release(uVar3);
  return;
}



// ===== 0x0000be44  FUN_0000be44

undefined8 FUN_0000be44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 extraout_x1;
  undefined8 uVar2;
  undefined auVar3 [16];
  undefined auVar4 [16];
  
  auVar3 = _objc_retain(param_2);
  uVar2 = auVar3._0_8_;
  objc_msgSend_objectForKeyedSubscript_(uVar2,auVar3._8_8_,&cf_name);
  auVar3 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_objectForKeyedSubscript_(uVar2,auVar3._8_8_,&cf_bundleID);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  auVar4 = objc_msgSend_localizedCaseInsensitiveContainsString_
                     (auVar3._0_8_,extraout_x1,*(undefined8 *)(param_1 + 0x20));
  if ((auVar4 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    uVar2 = objc_msgSend_localizedCaseInsensitiveContainsString_
                      (uVar1,auVar4._8_8_,*(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar2 = 1;
  }
  _objc_release(uVar1);
  _objc_release(auVar3._0_8_);
  return uVar2;
}



// ===== 0x0000beec  SystemBoxWhitelistController__specifiers

/* Function Stack Size: 0x10 bytes */

ID SystemBoxWhitelistController::SystemBoxWhitelistController__specifiers(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  undefined auVar13 [16];
  undefined auVar14 [16];
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
  
  local_70 = *(long *)PTR____stack_chk_guard_000180e0;
  objc_msgSend_array(PTR__OBJC_CLASS___NSMutableArray_0001df88);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  objc_msgSend_filteredApps(param_1);
  auVar11 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_appsWithSelectedFirst_(param_1,auVar11._8_8_,auVar11._0_8_);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar11._0_8_);
  auVar11 = objc_msgSend_countByEnumeratingWithState_objects_count_
                      (uVar4,extraout_x1,&local_130,auStack_f0,0x10);
  if (auVar11._0_8_ != 0) {
    lVar7 = *local_120;
    uVar9 = *(undefined8 *)PTR__PSCellClassKey_00018068;
    do {
      puVar2 = PTR_s_whitelistValue__0001de88;
      puVar1 = PTR_s_setWhitelistValue_specifier__0001dd18;
      uVar6 = auVar11._8_8_;
      lVar8 = 0;
      do {
        if (*local_120 != lVar7) {
          _objc_enumerationMutation(uVar4);
          uVar6 = extraout_x1_00;
        }
        uVar10 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        objc_msgSend_objectForKeyedSubscript_(uVar10,uVar6,&cf_bundleID);
        auVar12 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_objectForKeyedSubscript_(uVar10,auVar12._8_8_,&cf_name);
        auVar13 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_preferenceSpecifierNamed_target_set_get_detail_cell_edit_
                  (PTR__OBJC_CLASS___PSSpecifier_0001dfc0,auVar13._8_8_,auVar13._0_8_,param_1,puVar1
                   ,puVar2,0,6,0);
        auVar14 = _objc_retainAutoreleasedReturnValue();
        uVar6 = auVar14._0_8_;
        objc_msgSend_setProperty_forKey_(uVar6,auVar14._8_8_,auVar12._0_8_,&cf_bundleID);
        objc_msgSend_setProperty_forKey_
                  (uVar6,extraout_x1_01,PTR____kCFBooleanFalse_000180c0,&cf_default);
        auVar14 = _objc_opt_class(PTR_PTR_0001dfc8);
        objc_msgSend_setProperty_forKey_(uVar6,auVar14._8_8_,auVar14._0_8_,uVar9);
        objc_msgSend_addObject_(uVar3,extraout_x1_02,uVar6);
        _objc_release(uVar6);
        _objc_release(auVar13._0_8_);
        _objc_release(auVar12._0_8_);
        lVar8 = lVar8 + 1;
        uVar6 = extraout_x1_03;
      } while (auVar11._0_8_ != lVar8);
      auVar11 = objc_msgSend_countByEnumeratingWithState_objects_count_
                          (uVar4,extraout_x1_03,&local_130,auStack_f0,0x10);
    } while (auVar11._0_8_ != 0);
  }
  _objc_release(uVar4);
  lVar7 = (long)*(int *)PTR__OBJC_IVAR___PSListController__specifiers_00018060;
  uVar4 = *(undefined8 *)(param_1 + lVar7);
  *(undefined8 *)(param_1 + lVar7) = uVar3;
  uVar3 = _objc_retain();
  _objc_release(uVar4);
  IVar5 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(param_1 + lVar7));
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_70) {
    return IVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000c164  SystemBoxWhitelistController__whitelistValue_

/* Function Stack Size: 0x18 bytes */

ID SystemBoxWhitelistController::SystemBoxWhitelistController__whitelistValue_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined auVar5 [16];
  undefined auVar6 [16];
  
  objc_msgSend_propertyForKey_(param_3,param_2,&cf_bundleID);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_0001df30;
  objc_msgSend_selectedBundleIDs(param_1);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  auVar6 = objc_msgSend_containsObject_(auVar5._0_8_,auVar5._8_8_,uVar2);
  objc_msgSend_numberWithBool_(puVar1,auVar6._8_8_,auVar6._0_8_);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar5._0_8_);
  _objc_release(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}



// ===== 0x0000c1f8  SystemBoxWhitelistController__setWhitelistValue_specifier_

/* Function Stack Size: 0x20 bytes */

void SystemBoxWhitelistController::SystemBoxWhitelistController__setWhitelistValue_specifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  undefined auVar9 [16];
  undefined auVar10 [16];
  
  auVar9 = _objc_retain(param_3);
  objc_msgSend_propertyForKey_(param_4,auVar9._8_8_,&cf_bundleID);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    iVar1 = objc_msgSend_boolValue(auVar9._0_8_);
    objc_msgSend_selectedBundleIDs(param_1);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    if (iVar1 == 0) {
      objc_msgSend_removeObject_(auVar10._0_8_,auVar10._8_8_,lVar2);
    }
    else {
      objc_msgSend_addObject_();
    }
    _objc_release(auVar10._0_8_);
    objc_msgSend_selectedBundleIDs(param_1);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_allObjects();
    uVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_whitelistPreferenceKey(param_1);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar4 = _objc_retain(uVar4);
    jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    uVar6 = auVar10._0_8_;
    objc_msgSend_dictionaryWithContentsOfFile_
              (PTR__OBJC_CLASS___NSMutableDictionary_0001df50,auVar10._8_8_,uVar6);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    if (auVar10._0_8_ == 0) {
      objc_msgSend_dictionary(PTR__OBJC_CLASS___NSMutableDictionary_0001df50);
      auVar10 = _objc_retainAutoreleasedReturnValue();
    }
    uVar8 = auVar10._0_8_;
    objc_msgSend_setObject_forKeyedSubscript_(uVar8,auVar10._8_8_,uVar4,uVar5);
    objc_msgSend_defaultManager(PTR__OBJC_CLASS___NSFileManager_0001df58);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_stringByDeletingLastPathComponent(uVar6);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_createDirectoryAtPath_withIntermediateDirectories_attributes_error_
              (uVar7,auVar10._8_8_,auVar10._0_8_,1,0,0);
    _objc_release(auVar10._0_8_);
    _objc_release(uVar7);
    objc_msgSend_writeToFile_atomically_(uVar8,extraout_x1,uVar6,1);
    uVar7 = _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterPostNotification(uVar7,&cf_com_wkk_systembox_prefschanged,0,0,1);
    _objc_release(uVar8);
    _objc_release(uVar6);
    _objc_release(uVar4);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(lVar2);
  _objc_release(auVar9._0_8_);
  return;
}



// ===== 0x0000c3fc  SystemBoxWhitelistController__selectedBundleIDs

/* Function Stack Size: 0x10 bytes */

ID SystemBoxWhitelistController::SystemBoxWhitelistController__selectedBundleIDs
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_selectedBundleIDs);
}



// ===== 0x0000c40c  SystemBoxWhitelistController__setSelectedBundleIDs_

/* Function Stack Size: 0x18 bytes */

void SystemBoxWhitelistController::SystemBoxWhitelistController__setSelectedBundleIDs_
               (ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_selectedBundleIDs,param_3);
  return;
}



// ===== 0x0000c420  SystemBoxWhitelistController__pinnedBundleIDs

/* Function Stack Size: 0x10 bytes */

ID SystemBoxWhitelistController::SystemBoxWhitelistController__pinnedBundleIDs
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_pinnedBundleIDs);
}



// ===== 0x0000c430  SystemBoxWhitelistController__setPinnedBundleIDs_

/* Function Stack Size: 0x18 bytes */

void SystemBoxWhitelistController::SystemBoxWhitelistController__setPinnedBundleIDs_
               (ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_pinnedBundleIDs,param_3);
  return;
}



// ===== 0x0000c444  SystemBoxWhitelistController__setAllApps_

/* Function Stack Size: 0x18 bytes */

void SystemBoxWhitelistController::SystemBoxWhitelistController__setAllApps_
               (ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_allApps,param_3);
  return;
}



// ===== 0x0000c458  SystemBoxWhitelistController__setFilteredApps_

/* Function Stack Size: 0x18 bytes */

void SystemBoxWhitelistController::SystemBoxWhitelistController__setFilteredApps_
               (ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_filteredApps,param_3);
  return;
}



// ===== 0x0000c46c  SystemBoxWhitelistController__searchController

/* Function Stack Size: 0x10 bytes */

ID SystemBoxWhitelistController::SystemBoxWhitelistController__searchController
             (ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + (long)_searchController);
}



// ===== 0x0000c47c  SystemBoxWhitelistController__setSearchController_

/* Function Stack Size: 0x18 bytes */

void SystemBoxWhitelistController::SystemBoxWhitelistController__setSearchController_
               (ID param_1,SEL param_2,ID param_3)

{
  _objc_storeStrong(param_1 + (long)_searchController,param_3);
  return;
}



// ===== 0x0000c490  SystemBoxWhitelistController___cxx_destruct

/* Function Stack Size: 0x10 bytes */

void SystemBoxWhitelistController::SystemBoxWhitelistController___cxx_destruct
               (ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_searchController,0);
  _objc_storeStrong(param_1 + (long)_filteredApps,0);
  _objc_storeStrong(param_1 + (long)_allApps,0);
  _objc_storeStrong(param_1 + (long)_pinnedBundleIDs,0);
  _objc_storeStrong(param_1 + (long)_selectedBundleIDs,0);
  return;
}



// ===== 0x0000c50c  FUN_0000c50c

void FUN_0000c50c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined auVar3 [16];
  
  if (param_2 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    auVar3 = _objc_retain(param_2);
    uVar1 = auVar3._0_8_;
    objc_msgSend_addObject_(uVar2,auVar3._8_8_,uVar1);
    FUN_0000c58c(uVar1);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    auVar3 = objc_msgSend_length(uVar2);
    if (auVar3._0_8_ != 0) {
      objc_msgSend_addObject_(*(undefined8 *)(param_1 + 0x28),auVar3._8_8_,uVar2);
    }
    _objc_release(uVar2);
    return;
  }
  return;
}



// ===== 0x0000c58c  FUN_0000c58c

void FUN_0000c58c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 extraout_x1;
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
  
  local_58 = *(long *)PTR____stack_chk_guard_000180e0;
  auVar9 = _objc_retain();
  uVar1 = auVar9._0_8_;
  lStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  local_110 = (long *)0x0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = objc_msgSend_countByEnumeratingWithState_objects_count_
                    (&PTR__OBJC_CLASS___NSConstantArray_00019bc0,auVar9._8_8_,&local_120,auStack_d8,
                     0x10);
  if (lVar2 != 0) {
    lVar7 = *local_110;
    do {
      lVar8 = 0;
      do {
        if (*local_110 != lVar7) {
          _objc_enumerationMutation(&PTR__OBJC_CLASS___NSConstantArray_00019bc0);
        }
        uVar3 = _NSSelectorFromString(*(undefined8 *)(lStack_118 + lVar8 * 8));
        auVar9 = _objc_opt_respondsToSelector(uVar1,uVar3);
        uVar4 = auVar9._8_8_;
        if ((auVar9 & (undefined  [16])0x1) != (undefined  [16])0x0) {
          _objc_msgSend(uVar1,uVar3);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          uVar3 = _objc_opt_class(PTR__OBJC_CLASS___NSString_0001df48);
          uVar5 = _objc_opt_isKindOfClass(uVar4,uVar3);
          if (((uVar5 & 1) != 0) && (lVar6 = objc_msgSend_length(uVar4), lVar6 != 0))
          goto LAB_0000c6ac;
          _objc_release(uVar4);
          uVar4 = extraout_x1;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = objc_msgSend_countByEnumeratingWithState_objects_count_
                        (&PTR__OBJC_CLASS___NSConstantArray_00019bc0,uVar4,&local_120,auStack_d8,
                         0x10);
    } while (lVar2 != 0);
  }
  uVar4 = 0;
LAB_0000c6ac:
  _objc_release(uVar1);
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_58) {
    _objc_autoreleaseReturnValue(uVar4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000c6f0  FUN_0000c6f0

long FUN_0000c6f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 extraout_x1;
  undefined auVar4 [16];
  undefined auVar5 [16];
  
  uVar1 = _objc_retain(param_2);
  auVar4 = _objc_retain(param_3);
  uVar2 = auVar4._0_8_;
  objc_msgSend_objectForKeyedSubscript_(uVar1,auVar4._8_8_,&cf_name);
  auVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_objectForKeyedSubscript_(uVar2,auVar4._8_8_,&cf_name);
  auVar5 = _objc_retainAutoreleasedReturnValue();
  lVar3 = objc_msgSend_localizedCaseInsensitiveCompare_(auVar4._0_8_,auVar5._8_8_,auVar5._0_8_);
  _objc_release(auVar5._0_8_);
  _objc_release(auVar4._0_8_);
  if (lVar3 == 0) {
    objc_msgSend_objectForKeyedSubscript_(uVar1,extraout_x1,&cf_bundleID);
    auVar4 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_objectForKeyedSubscript_(uVar2,auVar4._8_8_,&cf_bundleID);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    lVar3 = objc_msgSend_compare_(auVar4._0_8_,auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    _objc_release(auVar4._0_8_);
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  return lVar3;
}



// ===== 0x0000c7fc  FUN_0000c7fc

undefined8 FUN_0000c7fc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSString_0001df48;
  uVar2 = _objc_retain();
  uVar3 = _objc_opt_class(puVar1);
  uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);
  uVar3 = uVar2;
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  uVar3 = _objc_retainAutoreleaseReturnValue(uVar3);
  _objc_release(uVar2);
  return uVar3;
}



// ===== 0x0000c854  SystemBoxClockGradientCell__initWithStyle_reuseIdentifier_specifier_

/* Function Stack Size: 0x28 bytes */

ID SystemBoxClockGradientCell::SystemBoxClockGradientCell__initWithStyle_reuseIdentifier_specifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
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
  uVar3 = _objc_retain(param_5);
  puStack_a0 = PTR_PTR_0001e020;
  local_a8 = param_1;
  auVar23 = _objc_msgSendSuper2(&local_a8,PTR_s_initWithStyle_reuseIdentifier_sp_0001d8a8,param_3,
                                param_4,uVar3);
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



// ===== 0x0000cd1c  FUN_0000cd1c

void FUN_0000cd1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined auVar15 [16];
  undefined auVar16 [16];
  undefined auVar17 [16];
  undefined auVar18 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  puVar1 = PTR__OBJC_CLASS___UIButton_0001dfe8;
  local_78 = *(long *)PTR____stack_chk_guard_000180e0;
  auVar15 = _objc_retain(param_2);
  objc_msgSend_buttonWithType_(puVar1,auVar15._8_8_,0);
  auVar16 = _objc_retainAutoreleasedReturnValue();
  uVar2 = auVar16._0_8_;
  objc_msgSend_setTag_(uVar2,auVar16._8_8_,param_1);
  objc_msgSend_setAccessibilityLabel_(uVar2,extraout_x1,auVar15._0_8_);
  _objc_release(auVar15._0_8_);
  objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar2,extraout_x1_00,0);
  auVar15 = _objc_alloc_init(PTR__OBJC_CLASS___UIView_0001dec8);
  uVar3 = auVar15._0_8_;
  objc_msgSend_setTag_(uVar3,auVar15._8_8_,100);
  objc_msgSend_setUserInteractionEnabled_(uVar3,extraout_x1_01,0);
  objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(uVar3,extraout_x1_02,0);
  objc_msgSend_layer(uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setCornerRadius_(0x402c000000000000);
  _objc_release(uVar4);
  objc_msgSend_layer(uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setBorderWidth_(0x3ff8000000000000);
  _objc_release(uVar4);
  objc_msgSend_whiteColor(PTR__OBJC_CLASS___UIColor_0001deb8);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = _objc_retainAutorelease();
  uVar5 = objc_msgSend_CGColor();
  objc_msgSend_layer(uVar3);
  auVar15 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setBorderColor_(auVar15._0_8_,auVar15._8_8_,uVar5);
  _objc_release(auVar15._0_8_);
  _objc_release(uVar4);
  objc_msgSend_addSubview_(uVar2,extraout_x1_03,uVar3);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_0001def0;
  objc_msgSend_widthAnchor(uVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToConstant_(0x4046000000000000);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  local_a8 = uVar5;
  objc_msgSend_heightAnchor(uVar2);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToConstant_(0x4046000000000000);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  local_a0 = uVar7;
  objc_msgSend_widthAnchor(uVar3);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToConstant_(0x403c000000000000);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  local_98 = uVar9;
  objc_msgSend_heightAnchor(uVar3);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToConstant_(0x403c000000000000);
  uVar11 = _objc_retainAutoreleasedReturnValue();
  local_90 = uVar11;
  objc_msgSend_centerXAnchor(uVar3);
  uVar12 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_centerXAnchor(uVar2);
  auVar15 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToAnchor_(uVar12,auVar15._8_8_,auVar15._0_8_);
  uVar13 = _objc_retainAutoreleasedReturnValue();
  local_88 = uVar13;
  objc_msgSend_centerYAnchor(uVar3);
  uVar14 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_centerYAnchor(uVar2);
  auVar16 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_constraintEqualToAnchor_(uVar14,auVar16._8_8_,auVar16._0_8_);
  auVar17 = _objc_retainAutoreleasedReturnValue();
  local_80 = auVar17._0_8_;
  objc_msgSend_arrayWithObjects_count_(PTR__OBJC_CLASS___NSArray_0001def8,auVar17._8_8_,&local_a8,6)
  ;
  auVar18 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_activateConstraints_(puVar1,auVar18._8_8_,auVar18._0_8_);
  _objc_release(auVar18._0_8_);
  _objc_release(auVar17._0_8_);
  _objc_release(auVar16._0_8_);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(auVar15._0_8_);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_78) {
    _objc_autoreleaseReturnValue(uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000d0b8  SystemBoxClockGradientCell__colorTapped_

/* Function Stack Size: 0x18 bytes */

void SystemBoxClockGradientCell::SystemBoxClockGradientCell__colorTapped_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined auVar4 [16];
  
  uVar1 = _objc_retain(param_3);
  objc_msgSend_specifier(param_1);
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



// ===== 0x0000d140  SystemBoxClockGradientCell__refreshCellContentsWithSpecifier_

/* Function Stack Size: 0x18 bytes */

void SystemBoxClockGradientCell::SystemBoxClockGradientCell__refreshCellContentsWithSpecifier_
               (ID param_1,SEL param_2,ID param_3)

{
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
  local_100 = param_1;
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
  objc_msgSend_arrangedSubviews(*(undefined8 *)(param_1 + (long)_colors));
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



// ===== 0x0000d3d8  FUN_0000d3d8

void FUN_0000d3d8(undefined8 param_1,undefined8 param_2)

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
  
  local_68 = *(long *)PTR____stack_chk_guard_000180e0;
  uVar4 = _objc_retain();
  uVar5 = _objc_retain(param_2);
  uVar6 = _objc_opt_class(PTR__OBJC_CLASS___NSString_0001df48);
  uVar7 = _objc_opt_isKindOfClass(uVar4,uVar6);
  if ((uVar7 & 1) == 0) {
    uVar6 = _objc_retain(uVar5);
    goto LAB_0000d708;
  }
  objc_msgSend_whitespaceAndNewlineCharacterSet(PTR__OBJC_CLASS___NSCharacterSet_0001df70);
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
      if (auVar13._0_8_ != 8) goto LAB_0000d6c0;
    }
    local_88 = 0;
    objc_msgSend_scannerWithString_(PTR__OBJC_CLASS___NSScanner_0001dff0,uVar6,uVar9);
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
                ((double)(ulong)(local_88 >> 0x18) / DAT_00012768,
                 (double)(ulong)(local_88 >> 0x10 & 0xff) / DAT_00012768,
                 (double)(ulong)(local_88 >> 8 & 0xff) / DAT_00012768,
                 (double)(ulong)(local_88 & 0xff) / DAT_00012768,PTR__OBJC_CLASS___UIColor_0001deb8)
      ;
      uVar6 = _objc_retainAutoreleasedReturnValue();
    }
LAB_0000d6f4:
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
        puVar1 = PTR__OBJC_CLASS___NSScanner_0001dff0;
        objc_msgSend_objectAtIndexedSubscript_(uVar9,uVar6,lVar10 + 4);
        auVar14 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_scannerWithString_(puVar1,auVar14._8_8_,auVar14._0_8_);
        uVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar14._0_8_);
        iVar3 = objc_msgSend_scanDouble_(uVar11,extraout_x1_01,pdVar12);
        if (((iVar3 == 0) || (iVar3 = objc_msgSend_isAtEnd(uVar11), iVar3 == 0)) ||
           (ABS(*pdVar12) == INFINITY)) {
          uVar6 = _objc_retain(uVar5);
          goto LAB_0000d6f4;
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
                     PTR__OBJC_CLASS___UIColor_0001deb8);
          uVar6 = _objc_retainAutoreleasedReturnValue();
        }
        else {
          objc_msgSend_colorWithDisplayP3Red_green_blue_alpha_();
          uVar6 = _objc_retainAutoreleasedReturnValue();
        }
        goto LAB_0000d6f8;
      }
    }
LAB_0000d6c0:
    uVar6 = _objc_retain(uVar5);
  }
LAB_0000d6f8:
  _objc_release(uVar9);
  _objc_release(uVar8);
LAB_0000d708:
  _objc_release(uVar5);
  _objc_release(uVar4);
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_68) {
    _objc_autoreleaseReturnValue(uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000d768  SystemBoxClockGradientCell___cxx_destruct

/* Function Stack Size: 0x10 bytes */

void SystemBoxClockGradientCell::SystemBoxClockGradientCell___cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_colors,0);
  return;
}



// ===== 0x0000d77c  SystemBoxClockSolidColorCell__initWithStyle_reuseIdentifier_specifier_

/* Function Stack Size: 0x28 bytes */

ID SystemBoxClockSolidColorCell::
   SystemBoxClockSolidColorCell__initWithStyle_reuseIdentifier_specifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
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
  uVar2 = _objc_retain(param_5);
  puStack_88 = PTR_PTR_0001e028;
  local_90 = param_1;
  auVar15 = _objc_msgSendSuper2(&local_90,PTR_s_initWithStyle_reuseIdentifier_sp_0001d8a8,param_3,
                                param_4,uVar2);
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



// ===== 0x0000daac  SystemBoxClockSolidColorCell__openColorPicker

/* Function Stack Size: 0x10 bytes */

void SystemBoxClockSolidColorCell::SystemBoxClockSolidColorCell__openColorPicker
               (ID param_1,SEL param_2)

{
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



// ===== 0x0000db0c  SystemBoxClockSolidColorCell__refreshCellContentsWithSpecifier_

/* Function Stack Size: 0x18 bytes */

void SystemBoxClockSolidColorCell::SystemBoxClockSolidColorCell__refreshCellContentsWithSpecifier_
               (ID param_1,SEL param_2,ID param_3)

{
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
  local_40 = param_1;
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
  objc_msgSend_viewWithTag_(*(undefined8 *)(param_1 + (long)_button),auVar7._8_8_,100);
  auVar8 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_setBackgroundColor_(auVar8._0_8_,auVar8._8_8_,auVar7._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(auVar7._0_8_);
  _objc_release(uVar6);
  _objc_release(uVar4);
  return;
}



// ===== 0x0000dc70  SystemBoxClockSolidColorCell___cxx_destruct

/* Function Stack Size: 0x10 bytes */

void SystemBoxClockSolidColorCell::SystemBoxClockSolidColorCell___cxx_destruct
               (ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_button,0);
  return;
}



// ===== 0x0000dc84  SystemBoxClockListController__sb_specifierPlistName

/* Function Stack Size: 0x10 bytes */

ID SystemBoxClockListController::SystemBoxClockListController__sb_specifierPlistName
             (ID param_1,SEL param_2)

{
  return 0x197f0;
}



// ===== 0x0000dc90  SystemBoxClockListController__setPreferenceValue_specifier_

/* Function Stack Size: 0x20 bytes */

void SystemBoxClockListController::SystemBoxClockListController__setPreferenceValue_specifier_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
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
  
  auVar9 = _objc_retain(param_3);
  lVar3 = auVar9._0_8_;
  objc_msgSend_propertyForKey_(param_4,auVar9._8_8_,&cf_key);
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
    objc_msgSend_reloadSpecifiers(param_1);
  }
  _objc_release(uVar7);
LAB_0000de08:
  _objc_release(uVar4);
  _objc_release(lVar3);
  return;
}



// ===== 0x0000de2c  FUN_0000de2c

void FUN_0000de2c(void)

{
  undefined8 uVar1;
  undefined auVar2 [16];
  
  uVar1 = _objc_retain();
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  auVar2 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_writeToFile_atomically_(uVar1,auVar2._8_8_,auVar2._0_8_,1);
  _objc_release(uVar1);
  _objc_release(auVar2._0_8_);
  uVar1 = _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterPostNotification(uVar1,&cf_com_wkk_systembox_prefschanged,0,0,1);
  return;
}



// ===== 0x0000de9c  SystemBoxClockListController__presentClockColorPicker_title_alpha_

/* Function Stack Size: 0x24 bytes */

void SystemBoxClockListController::
     SystemBoxClockListController__presentClockColorPicker_title_alpha_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
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
  uVar2 = _objc_retain(param_4);
  uVar3 = _objc_retain(param_3);
  auVar5 = _objc_alloc_init(puVar1);
  uVar4 = auVar5._0_8_;
  objc_msgSend_setDelegate_(uVar4,auVar5._8_8_,param_1);
  objc_msgSend_setSelectedColor_(uVar4,extraout_x1,uVar3);
  _objc_release(uVar3);
  objc_msgSend_setSupportsAlpha_(uVar4,extraout_x1_00,param_5);
  objc_msgSend_setTitle_(uVar4,extraout_x1_01,uVar2);
  _objc_release(uVar2);
  objc_msgSend_presentViewController_animated_completion_(param_1,extraout_x1_02,uVar4,1,0);
  _objc_release(uVar4);
  return;
}



// ===== 0x0000df50  SystemBoxClockListController__chooseGradientColor_

/* Function Stack Size: 0x18 bytes */

void SystemBoxClockListController::SystemBoxClockListController__chooseGradientColor_
               (ID param_1,SEL param_2,ID param_3)

{
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
  
  uVar1 = objc_msgSend_tag(param_3);
  lVar7 = (long)_pickerGradientIndex;
  *(undefined8 *)(param_1 + lVar7) = uVar1;
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
  puVar6 = (&PTR_cf__3DDEFA_000183e8)[*(long *)(param_1 + lVar7)];
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
            (param_1,auVar9._8_8_,auVar8._0_8_,auVar9._0_8_,0);
  _objc_release(auVar9._0_8_);
  _objc_release(auVar8._0_8_);
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}



// ===== 0x0000e120  SystemBoxClockListController__chooseCustomClockColor

/* Function Stack Size: 0x10 bytes */

void SystemBoxClockListController::SystemBoxClockListController__chooseCustomClockColor
               (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined auVar7 [16];
  
  *(undefined8 *)(param_1 + (long)_pickerGradientIndex) = 0xffffffffffffffff;
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
  objc_msgSend_presentClockColorPicker_title_alpha_(param_1,extraout_x1_00,uVar3,&cf__INer,1);
  _objc_release(uVar3);
  _objc_release(uVar4);
  return;
}



// ===== 0x0000e254  SystemBoxClockListController__savePickerColor_

/* Function Stack Size: 0x18 bytes */

void SystemBoxClockListController::SystemBoxClockListController__savePickerColor_
               (ID param_1,SEL param_2,ID param_3)

{
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
  
  _objc_retain(param_3);
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
    if (*(ulong *)(param_1 + (long)_pickerGradientIndex) < 5) {
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



// ===== 0x0000e62c  SystemBoxClockListController__colorPickerViewControllerDidSelectColor_

/* Function Stack Size: 0x18 bytes */

void SystemBoxClockListController::
     SystemBoxClockListController__colorPickerViewControllerDidSelectColor_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined auVar1 [16];
  
  objc_msgSend_selectedColor(param_3);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_savePickerColor_(param_1,auVar1._8_8_,auVar1._0_8_);
  _objc_release(auVar1._0_8_);
  return;
}



// ===== 0x0000e66c  SystemBoxClockListController__colorPickerViewControllerDidFinish_

/* Function Stack Size: 0x18 bytes */

void SystemBoxClockListController::SystemBoxClockListController__colorPickerViewControllerDidFinish_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined auVar1 [16];
  
  objc_msgSend_selectedColor(param_3);
  auVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_savePickerColor_(param_1,auVar1._8_8_,auVar1._0_8_);
  _objc_release(auVar1._0_8_);
  objc_msgSend_reloadSpecifiers(param_1);
  return;
}



// ===== 0x0000e6b4  SystemBoxClockSliderCell__initWithStyle_reuseIdentifier_specifier_

/* Function Stack Size: 0x28 bytes */

ID SystemBoxClockSliderCell::SystemBoxClockSliderCell__initWithStyle_reuseIdentifier_specifier_
             (ID param_1,SEL param_2,long_long param_3,ID param_4,ID param_5)

{
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
  uVar2 = _objc_retain(param_5);
  puStack_b0 = PTR_PTR_0001e030;
  local_b8 = param_1;
  IVar3 = _objc_msgSendSuper2(&local_b8,PTR_s_initWithStyle_reuseIdentifier_sp_0001d8a8,param_3,
                              param_4,uVar2);
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



// ===== 0x0000ec2c  SystemBoxClockSliderCell__setSpecifier_

/* Function Stack Size: 0x18 bytes */

void SystemBoxClockSliderCell::SystemBoxClockSliderCell__setSpecifier_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  ID local_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_setSpecifier__0001dca0;
  puStack_38 = PTR_PTR_0001e030;
  local_40 = param_1;
  uVar2 = _objc_retain(param_3);
  _objc_msgSendSuper2(&local_40,puVar1,uVar2);
  objc_msgSend_syncWithSpecifier_(param_1,extraout_x1,uVar2);
  _objc_release(uVar2);
  return;
}



// ===== 0x0000ec9c  SystemBoxClockSliderCell__syncWithSpecifier_

/* Function Stack Size: 0x18 bytes */

void SystemBoxClockSliderCell::SystemBoxClockSliderCell__syncWithSpecifier_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar4;
  undefined auVar5 [16];
  
  lVar1 = _objc_retain(param_3);
  if ((lVar1 != 0) && (lVar4 = (long)_slider, *(long *)(param_1 + lVar4) != 0)) {
    objc_msgSend_textLabel(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setText_(auVar5._0_8_,auVar5._8_8_,0);
    _objc_release(auVar5._0_8_);
    objc_msgSend_textLabel(param_1);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setHidden_(auVar5._0_8_,auVar5._8_8_,1);
    _objc_release(auVar5._0_8_);
    objc_msgSend_propertyForKey_(lVar1,extraout_x1,&cf_min);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_floatValue();
    objc_msgSend_setMinimumValue_(*(undefined8 *)(param_1 + lVar4));
    _objc_release(uVar2);
    objc_msgSend_propertyForKey_(lVar1,extraout_x1_00,&cf_max);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_floatValue();
    objc_msgSend_setMaximumValue_(*(undefined8 *)(param_1 + lVar4));
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
    objc_msgSend_setValue_(*(undefined8 *)(param_1 + lVar4));
    objc_msgSend_propertyForKey_(lVar1,extraout_x1_01,&cf_sliderTitle);
    auVar5 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_setAccessibilityLabel_(*(undefined8 *)(param_1 + lVar4),auVar5._8_8_,auVar5._0_8_);
    _objc_release(auVar5._0_8_);
    objc_msgSend_updateValueLabel(param_1);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  return;
}



// ===== 0x0000ee3c  SystemBoxClockSliderCell__sliderChanged_

/* Function Stack Size: 0x18 bytes */

void SystemBoxClockSliderCell::SystemBoxClockSliderCell__sliderChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  float fVar4;
  float fVar5;
  undefined auVar6 [16];
  
  uVar1 = _objc_retain(param_3);
  objc_msgSend_specifier(param_1);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_propertyForKey_(auVar6._0_8_,auVar6._8_8_,&cf_valueDecimals);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  lVar3 = objc_msgSend_integerValue();
  _objc_release(uVar2);
  _objc_release(auVar6._0_8_);
  fVar4 = (float)___exp10f((float)lVar3);
  fVar5 = (float)objc_msgSend_value(uVar1);
  _objc_release(uVar1);
  objc_msgSend_specifier(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_numberWithFloat_
            ((float)(int)(fVar4 * fVar5) / fVar4,PTR__OBJC_CLASS___NSNumber_0001df30);
  auVar6 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_performSetterWithValue_(uVar1,auVar6._8_8_,auVar6._0_8_);
  _objc_release(auVar6._0_8_);
  _objc_release(uVar1);
  objc_msgSend_updateValueLabel(param_1);
  return;
}



// ===== 0x0000ef3c  SystemBoxClockSliderCell__updateValueLabel

/* Function Stack Size: 0x10 bytes */

void SystemBoxClockSliderCell::SystemBoxClockSliderCell__updateValueLabel(ID param_1,SEL param_2)

{
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
  objc_msgSend_specifier(param_1);
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
  objc_msgSend_value(*(undefined8 *)(param_1 + (long)_slider));
  objc_msgSend_stringWithFormat_(puVar2,extraout_x1,&cf____f__);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  objc_msgSend_setText_(*(undefined8 *)(param_1 + (long)_valueLabel),extraout_x1_00,uVar5);
  _objc_release(uVar5);
  return;
}



// ===== 0x0000f068  SystemBoxClockSliderCell__refreshCellContentsWithSpecifier_

/* Function Stack Size: 0x18 bytes */

void SystemBoxClockSliderCell::SystemBoxClockSliderCell__refreshCellContentsWithSpecifier_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 extraout_x1;
  ID local_40;
  undefined *puStack_38;
  
  puVar1 = PTR_s_refreshCellContentsWithSpecifier_0001da28;
  puStack_38 = PTR_PTR_0001e030;
  local_40 = param_1;
  uVar2 = _objc_retain(param_3);
  _objc_msgSendSuper2(&local_40,puVar1,uVar2);
  objc_msgSend_syncWithSpecifier_(param_1,extraout_x1,uVar2);
  _objc_release(uVar2);
  return;
}



// ===== 0x0000f0d8  SystemBoxClockSliderCell___cxx_destruct

/* Function Stack Size: 0x10 bytes */

void SystemBoxClockSliderCell::SystemBoxClockSliderCell___cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + (long)_valueLabel,0);
  _objc_storeStrong(param_1 + (long)_slider,0);
  return;
}



// ===== 0x0000f118  FUN_0000f118

bool FUN_0000f118(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (DAT_0001e600 == -1) {
    iVar1 = DAT_0001e5f0 - param_1;
    if (DAT_0001e5f0 <= param_1) {
LAB_0000f18c:
      if (iVar1 < 0 != SBORROW4(DAT_0001e5f0,param_1)) {
        return false;
      }
      if (param_2 < DAT_0001e5f4) {
        return true;
      }
      if (DAT_0001e5f4 < param_2) {
        return false;
      }
      return param_3 <= DAT_0001e5f8;
    }
  }
  else {
    _dispatch_once_f(&DAT_0001e600,(void *)0x0,FUN_0000f200);
    iVar1 = DAT_0001e5f0 - param_1;
    if (DAT_0001e5f0 <= param_1) goto LAB_0000f18c;
  }
  return true;
}



// ===== 0x0000f200  FUN_0000f200

void FUN_0000f200(void)

{
  FUN_0000f398(1);
  return;
}



// ===== 0x0000f208  FUN_0000f208

void FUN_0000f208(undefined4 param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_40;
  uint uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000180e0;
  if (DAT_0001e608 == -1) {
    if (DAT_0001e610 == 0) {
LAB_0000f2b0:
      if (DAT_0001e600 == -1) {
        iVar1 = DAT_0001e5f0 - param_2;
      }
      else {
        _dispatch_once_f(&DAT_0001e600,(void *)0x0,FUN_0000f200);
        iVar1 = DAT_0001e5f0 - param_2;
      }
      if (param_2 < DAT_0001e5f0) {
LAB_0000f2e4:
        uVar2 = 1;
        if (*(long *)PTR____stack_chk_guard_000180e0 == local_38) {
          return;
        }
      }
      else {
        if (iVar1 < 0 == SBORROW4(DAT_0001e5f0,param_2)) {
          if ((int)param_3 < DAT_0001e5f4) goto LAB_0000f2e4;
          if (DAT_0001e5f4 < (int)param_3) goto LAB_0000f308;
          uVar2 = (ulong)((int)param_4 <= DAT_0001e5f8);
          lVar3 = *(long *)PTR____stack_chk_guard_000180e0;
        }
        else {
LAB_0000f308:
          uVar2 = 0;
          lVar3 = *(long *)PTR____stack_chk_guard_000180e0;
        }
        if (lVar3 == local_38) {
          return;
        }
      }
      goto LAB_0000f360;
    }
  }
  else {
    _dispatch_once_f(&DAT_0001e608,(void *)0x0,FUN_0000f390);
    if (DAT_0001e610 == 0) goto LAB_0000f2b0;
  }
  uStack_3c = param_2 << 0x10 | (param_3 & 0xff) << 8 | param_4 & 0xff;
  local_40 = param_1;
  uVar2 = __availability_version_check(1,&local_40);
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_38) {
    return;
  }
LAB_0000f360:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar2);
}



// ===== 0x0000f390  FUN_0000f390

void FUN_0000f390(void)

{
  FUN_0000f398(0);
  return;
}



// ===== 0x0000f398  FUN_0000f398

void FUN_0000f398(FILE *param_1)

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
  
  local_68 = *(long *)PTR____stack_chk_guard_000180e0;
  if (DAT_0001e610 == (undefined *)0x0 || (int)param_1 != 0) {
    if (PTR___availability_version_check_000180e8 != (undefined *)0x0) {
      DAT_0001e610 = PTR___availability_version_check_000180e8;
    }
    if ((DAT_0001e610 == (undefined *)0x0 || (int)param_1 != 0) &&
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
  if (*(long *)PTR____stack_chk_guard_000180e0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(param_1);
}



// ===== 0x0000f6c8  FUN_0000f6c8

void FUN_0000f6c8(void)

{
  _objc_begin_catch();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_end_catch();
  return;
}



// ===== 0x0000f6ec  FUN_0000f6ec

void FUN_0000f6ec(void)

{
  _objc_begin_catch();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_end_catch();
  return;
}



// ===== 0x0000f968  objc_msgSend$CGColor

void objc_msgSend_CGColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_CGColor_0001d588);
  return;
}



// ===== 0x0000f988  objc_msgSend$URLPathAllowedCharacterSet

void objc_msgSend_URLPathAllowedCharacterSet(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_URLPathAllowedCharacterSet_0001d590);
  return;
}



// ===== 0x0000f9a8  objc_msgSend$URLWithString_

void objc_msgSend_URLWithString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_URLWithString__0001d598);
  return;
}



// ===== 0x0000f9c8  objc_msgSend$_applicationIconImageForBundleIdentifier_format_scale_

void objc_msgSend__applicationIconImageForBundleIdentifier_format_scale_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s__applicationIconImageForBundleId_0001d5a0);
  return;
}



// ===== 0x0000f9e8  objc_msgSend$accessoryView

void objc_msgSend_accessoryView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_accessoryView_0001d5a8);
  return;
}



// ===== 0x0000fa08  objc_msgSend$actionWithTitle_style_handler_

void objc_msgSend_actionWithTitle_style_handler_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_actionWithTitle_style_handler__0001d5b0);
  return;
}



// ===== 0x0000fa28  objc_msgSend$activateConstraints_

void objc_msgSend_activateConstraints_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_activateConstraints__0001d5b8);
  return;
}



// ===== 0x0000fa48  objc_msgSend$addAction_

void objc_msgSend_addAction_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_addAction__0001d5c0);
  return;
}



// ===== 0x0000fa68  objc_msgSend$addArrangedSubview_

void objc_msgSend_addArrangedSubview_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_addArrangedSubview__0001d5c8);
  return;
}



// ===== 0x0000fa88  objc_msgSend$addGestureRecognizer_

void objc_msgSend_addGestureRecognizer_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_addGestureRecognizer__0001d5d0);
  return;
}



// ===== 0x0000faa8  objc_msgSend$addObject_

void objc_msgSend_addObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_addObject__0001d5d8);
  return;
}



// ===== 0x0000fac8  objc_msgSend$addObjectsFromArray_

void objc_msgSend_addObjectsFromArray_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_addObjectsFromArray__0001d5e0);
  return;
}



// ===== 0x0000fae8  objc_msgSend$addSubview_

void objc_msgSend_addSubview_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_addSubview__0001d5e8);
  return;
}



// ===== 0x0000fb08  objc_msgSend$addTarget_action_forControlEvents_

void objc_msgSend_addTarget_action_forControlEvents_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_addTarget_action_forControlEvent_0001d5f0);
  return;
}



// ===== 0x0000fb28  objc_msgSend$alertControllerWithTitle_message_preferredStyle_

void objc_msgSend_alertControllerWithTitle_message_preferredStyle_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_alertControllerWithTitle_message_0001d5f8);
  return;
}



// ===== 0x0000fb48  objc_msgSend$allApps

void objc_msgSend_allApps(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_allApps_0001d600);
  return;
}



// ===== 0x0000fb68  objc_msgSend$allObjects

void objc_msgSend_allObjects(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_allObjects_0001d608);
  return;
}



// ===== 0x0000fb88  objc_msgSend$allValues

void objc_msgSend_allValues(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_allValues_0001d610);
  return;
}



// ===== 0x0000fba8  objc_msgSend$appsWithSelectedFirst_

void objc_msgSend_appsWithSelectedFirst_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_appsWithSelectedFirst__0001d620);
  return;
}



// ===== 0x0000fbc8  objc_msgSend$arrangedSubviews

void objc_msgSend_arrangedSubviews(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_arrangedSubviews_0001d628);
  return;
}



// ===== 0x0000fbe8  objc_msgSend$array

void objc_msgSend_array(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_array_0001d630);
  return;
}



// ===== 0x0000fc08  objc_msgSend$arrayWithCapacity_

void objc_msgSend_arrayWithCapacity_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_arrayWithCapacity__0001d638);
  return;
}



// ===== 0x0000fc28  objc_msgSend$arrayWithObject_

void objc_msgSend_arrayWithObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_arrayWithObject__0001d640);
  return;
}



// ===== 0x0000fc48  objc_msgSend$arrayWithObjects_count_

void objc_msgSend_arrayWithObjects_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_arrayWithObjects_count__0001d648);
  return;
}



// ===== 0x0000fc68  objc_msgSend$boolValue

void objc_msgSend_boolValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_boolValue_0001d650);
  return;
}



// ===== 0x0000fc88  objc_msgSend$bottomAnchor

void objc_msgSend_bottomAnchor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_bottomAnchor_0001d658);
  return;
}



// ===== 0x0000fca8  objc_msgSend$bounds

void objc_msgSend_bounds(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_bounds_0001d660);
  return;
}



// ===== 0x0000fcc8  objc_msgSend$bundleIdentifier

void objc_msgSend_bundleIdentifier(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_bundleIdentifier_0001d668);
  return;
}



// ===== 0x0000fce8  objc_msgSend$bundleWithURL_

void objc_msgSend_bundleWithURL_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_bundleWithURL__0001d670);
  return;
}



// ===== 0x0000fd08  objc_msgSend$buttonWithType_

void objc_msgSend_buttonWithType_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_buttonWithType__0001d678);
  return;
}



// ===== 0x0000fd28  objc_msgSend$cachedCellForSpecifier_

void objc_msgSend_cachedCellForSpecifier_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_cachedCellForSpecifier__0001d680);
  return;
}



// ===== 0x0000fd48  objc_msgSend$centerXAnchor

void objc_msgSend_centerXAnchor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_centerXAnchor_0001d688);
  return;
}



// ===== 0x0000fd68  objc_msgSend$centerYAnchor

void objc_msgSend_centerYAnchor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_centerYAnchor_0001d690);
  return;
}



// ===== 0x0000fd88  objc_msgSend$chooseCustomClockColor

void objc_msgSend_chooseCustomClockColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_chooseCustomClockColor_0001d698);
  return;
}



// ===== 0x0000fda8  objc_msgSend$chooseGradientColor_

void objc_msgSend_chooseGradientColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_chooseGradientColor__0001d6a8);
  return;
}



// ===== 0x0000fdc8  objc_msgSend$clearColor

void objc_msgSend_clearColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_clearColor_0001d6c0);
  return;
}



// ===== 0x0000fde8  objc_msgSend$colorPickerTarget

void objc_msgSend_colorPickerTarget(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_colorPickerTarget_0001d6c8);
  return;
}



// ===== 0x0000fe08  objc_msgSend$colorWithDisplayP3Red_green_blue_alpha_

void objc_msgSend_colorWithDisplayP3Red_green_blue_alpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_colorWithDisplayP3Red_green_blue_0001d6e8);
  return;
}



// ===== 0x0000fe28  objc_msgSend$colorWithRed_green_blue_alpha_

void objc_msgSend_colorWithRed_green_blue_alpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_colorWithRed_green_blue_alpha__0001d6f0);
  return;
}



// ===== 0x0000fe48  objc_msgSend$compare_

void objc_msgSend_compare_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_compare__0001d6f8);
  return;
}



// ===== 0x0000fe68  objc_msgSend$componentsSeparatedByCharactersInSet_

void objc_msgSend_componentsSeparatedByCharactersInSet_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_componentsSeparatedByCharactersI_0001d700);
  return;
}



// ===== 0x0000fe88  objc_msgSend$componentsSeparatedByString_

void objc_msgSend_componentsSeparatedByString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_componentsSeparatedByString__0001d708);
  return;
}



// ===== 0x0000fea8  objc_msgSend$componentsWithString_

void objc_msgSend_componentsWithString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_componentsWithString__0001d710);
  return;
}



// ===== 0x0000fec8  objc_msgSend$configurationWithPointSize_weight_

void objc_msgSend_configurationWithPointSize_weight_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_configurationWithPointSize_weigh_0001d718);
  return;
}



// ===== 0x0000fee8  objc_msgSend$constraintEqualToAnchor_

void objc_msgSend_constraintEqualToAnchor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_constraintEqualToAnchor__0001d720);
  return;
}



// ===== 0x0000ff08  objc_msgSend$constraintEqualToAnchor_constant_

void objc_msgSend_constraintEqualToAnchor_constant_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_constraintEqualToAnchor_constant_0001d728);
  return;
}



// ===== 0x0000ff28  objc_msgSend$constraintEqualToConstant_

void objc_msgSend_constraintEqualToConstant_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_constraintEqualToConstant__0001d730);
  return;
}



// ===== 0x0000ff48  objc_msgSend$constraintGreaterThanOrEqualToAnchor_

void objc_msgSend_constraintGreaterThanOrEqualToAnchor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_constraintGreaterThanOrEqualToAn_0001d738);
  return;
}



// ===== 0x0000ff68  objc_msgSend$constraintGreaterThanOrEqualToConstant_

void objc_msgSend_constraintGreaterThanOrEqualToConstant_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_constraintGreaterThanOrEqualToCo_0001d740);
  return;
}



// ===== 0x0000ff88  objc_msgSend$constraintLessThanOrEqualToAnchor_

void objc_msgSend_constraintLessThanOrEqualToAnchor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_constraintLessThanOrEqualToAncho_0001d748);
  return;
}



// ===== 0x0000ffa8  objc_msgSend$containsObject_

void objc_msgSend_containsObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_containsObject__0001d750);
  return;
}



// ===== 0x0000ffc8  objc_msgSend$containsString_

void objc_msgSend_containsString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_containsString__0001d758);
  return;
}



// ===== 0x0000ffe8  objc_msgSend$contentView

void objc_msgSend_contentView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_contentView_0001d760);
  return;
}



// ===== 0x00010008  objc_msgSend$contentsOfDirectoryAtPath_error_

void objc_msgSend_contentsOfDirectoryAtPath_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_contentsOfDirectoryAtPath_error__0001d768);
  return;
}



// ===== 0x00010028  objc_msgSend$control

void objc_msgSend_control(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_control_0001d770);
  return;
}



// ===== 0x00010048  objc_msgSend$copy

void objc_msgSend_copy(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_copy_0001d778);
  return;
}



// ===== 0x00010068  objc_msgSend$count

void objc_msgSend_count(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_count_0001d780);
  return;
}



// ===== 0x00010088  objc_msgSend$countByEnumeratingWithState_objects_count_

void objc_msgSend_countByEnumeratingWithState_objects_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_countByEnumeratingWithState_obje_0001d788);
  return;
}



// ===== 0x000100a8  objc_msgSend$createDirectoryAtPath_withIntermediateDirectories_attributes_error_

void objc_msgSend_createDirectoryAtPath_withIntermediateDirectories_attributes_error_
               (undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_createDirectoryAtPath_withInterm_0001d790);
  return;
}



// ===== 0x000100c8  objc_msgSend$dataWithBytes_length_

void objc_msgSend_dataWithBytes_length_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_dataWithBytes_length__0001d798);
  return;
}



// ===== 0x000100e8  objc_msgSend$dataWithContentsOfFile_

void objc_msgSend_dataWithContentsOfFile_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_dataWithContentsOfFile__0001d7a0);
  return;
}



// ===== 0x00010108  objc_msgSend$defaultManager

void objc_msgSend_defaultManager(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_defaultManager_0001d7a8);
  return;
}



// ===== 0x00010128  objc_msgSend$dequeueReusableCellWithIdentifier_

void objc_msgSend_dequeueReusableCellWithIdentifier_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_dequeueReusableCellWithIdentifie_0001d7b0);
  return;
}



// ===== 0x00010148  objc_msgSend$deselectRowAtIndexPath_animated_

void objc_msgSend_deselectRowAtIndexPath_animated_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_deselectRowAtIndexPath_animated__0001d7b8);
  return;
}



// ===== 0x00010168  objc_msgSend$detailTextLabel

void objc_msgSend_detailTextLabel(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_detailTextLabel_0001d7c0);
  return;
}



// ===== 0x00010188  objc_msgSend$dictionary

void objc_msgSend_dictionary(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_dictionary_0001d7c8);
  return;
}



// ===== 0x000101a8  objc_msgSend$dictionaryWithContentsOfFile_

void objc_msgSend_dictionaryWithContentsOfFile_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_dictionaryWithContentsOfFile__0001d7d0);
  return;
}



// ===== 0x000101c8  objc_msgSend$dictionaryWithObjects_forKeys_count_

void objc_msgSend_dictionaryWithObjects_forKeys_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_dictionaryWithObjects_forKeys_co_0001d7d8);
  return;
}



// ===== 0x000101e8  objc_msgSend$doubleValue

void objc_msgSend_doubleValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_doubleValue_0001d7e0);
  return;
}



// ===== 0x00010208  objc_msgSend$enumerateKeysAndObjectsUsingBlock_

void objc_msgSend_enumerateKeysAndObjectsUsingBlock_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_enumerateKeysAndObjectsUsingBloc_0001d7e8);
  return;
}



// ===== 0x00010228  objc_msgSend$fileExistsAtPath_

void objc_msgSend_fileExistsAtPath_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_fileExistsAtPath__0001d7f0);
  return;
}



// ===== 0x00010248  objc_msgSend$fileExistsAtPath_isDirectory_

void objc_msgSend_fileExistsAtPath_isDirectory_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_fileExistsAtPath_isDirectory__0001d7f8);
  return;
}



// ===== 0x00010268  objc_msgSend$fileURLWithPath_isDirectory_

void objc_msgSend_fileURLWithPath_isDirectory_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_fileURLWithPath_isDirectory__0001d800);
  return;
}



// ===== 0x00010288  objc_msgSend$filteredApps

void objc_msgSend_filteredApps(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_filteredApps_0001d808);
  return;
}



// ===== 0x000102a8  objc_msgSend$filteredArrayUsingPredicate_

void objc_msgSend_filteredArrayUsingPredicate_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_filteredArrayUsingPredicate__0001d810);
  return;
}



// ===== 0x000102c8  objc_msgSend$firstObject

void objc_msgSend_firstObject(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_firstObject_0001d818);
  return;
}



// ===== 0x000102e8  objc_msgSend$floatValue

void objc_msgSend_floatValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_floatValue_0001d820);
  return;
}



// ===== 0x00010308  objc_msgSend$generalPasteboard

void objc_msgSend_generalPasteboard(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_generalPasteboard_0001d828);
  return;
}



// ===== 0x00010328  objc_msgSend$getRed_green_blue_alpha_

void objc_msgSend_getRed_green_blue_alpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_getRed_green_blue_alpha__0001d830);
  return;
}



// ===== 0x00010348  objc_msgSend$hasPrefix_

void objc_msgSend_hasPrefix_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_hasPrefix__0001d838);
  return;
}



// ===== 0x00010368  objc_msgSend$heightAnchor

void objc_msgSend_heightAnchor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_heightAnchor_0001d840);
  return;
}



// ===== 0x00010388  objc_msgSend$host

void objc_msgSend_host(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_host_0001d848);
  return;
}



// ===== 0x000103a8  objc_msgSend$iconLoadToken

void objc_msgSend_iconLoadToken(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_iconLoadToken_0001d850);
  return;
}



// ===== 0x000103c8  objc_msgSend$imageNamed_

void objc_msgSend_imageNamed_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_imageNamed__0001d858);
  return;
}



// ===== 0x000103e8  objc_msgSend$imageView

void objc_msgSend_imageView(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_imageView_0001d860);
  return;
}



// ===== 0x00010408  objc_msgSend$imageWithData_

void objc_msgSend_imageWithData_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_imageWithData__0001d868);
  return;
}



// ===== 0x00010428  objc_msgSend$imageWithRenderingMode_

void objc_msgSend_imageWithRenderingMode_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_imageWithRenderingMode__0001d870);
  return;
}



// ===== 0x00010448  objc_msgSend$infoDictionary

void objc_msgSend_infoDictionary(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_infoDictionary_0001d878);
  return;
}



// ===== 0x00010468  objc_msgSend$initWithData_encoding_

void objc_msgSend_initWithData_encoding_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_initWithData_encoding__0001d880);
  return;
}



// ===== 0x00010488  objc_msgSend$initWithFrame_

void objc_msgSend_initWithFrame_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_initWithFrame__0001d888);
  return;
}



// ===== 0x000104a8  objc_msgSend$initWithImage_

void objc_msgSend_initWithImage_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_initWithImage__0001d890);
  return;
}



// ===== 0x000104c8  objc_msgSend$initWithSearchResultsController_

void objc_msgSend_initWithSearchResultsController_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_initWithSearchResultsController__0001d898);
  return;
}



// ===== 0x000104e8  objc_msgSend$initWithStyle_reuseIdentifier_

void objc_msgSend_initWithStyle_reuseIdentifier_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_initWithStyle_reuseIdentifier__0001d8a0);
  return;
}



// ===== 0x00010508  objc_msgSend$initWithTarget_action_

void objc_msgSend_initWithTarget_action_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_initWithTarget_action__0001d8b0);
  return;
}



// ===== 0x00010528  objc_msgSend$initWithTitle_style_target_action_

void objc_msgSend_initWithTitle_style_target_action_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_initWithTitle_style_target_actio_0001d8b8);
  return;
}



// ===== 0x00010548  objc_msgSend$integerValue

void objc_msgSend_integerValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_integerValue_0001d8c0);
  return;
}



// ===== 0x00010568  objc_msgSend$isAtEnd

void objc_msgSend_isAtEnd(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_isAtEnd_0001d8c8);
  return;
}



// ===== 0x00010588  objc_msgSend$isEqual_

void objc_msgSend_isEqual_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_isEqual__0001d8d0);
  return;
}



// ===== 0x000105a8  objc_msgSend$isEqualToString_

void objc_msgSend_isEqualToString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_isEqualToString__0001d8d8);
  return;
}



// ===== 0x000105c8  objc_msgSend$isOn

void objc_msgSend_isOn(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_isOn_0001d8e0);
  return;
}



// ===== 0x000105e8  objc_msgSend$labelColor

void objc_msgSend_labelColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_labelColor_0001d8e8);
  return;
}



// ===== 0x00010608  objc_msgSend$layer

void objc_msgSend_layer(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_layer_0001d8f0);
  return;
}



// ===== 0x00010628  objc_msgSend$layoutMarginsGuide

void objc_msgSend_layoutMarginsGuide(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_layoutMarginsGuide_0001d8f8);
  return;
}



// ===== 0x00010648  objc_msgSend$leadingAnchor

void objc_msgSend_leadingAnchor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_leadingAnchor_0001d900);
  return;
}



// ===== 0x00010668  objc_msgSend$length

void objc_msgSend_length(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_length_0001d908);
  return;
}



// ===== 0x00010688  objc_msgSend$loadSpecifiersFromPlistName_target_

void objc_msgSend_loadSpecifiersFromPlistName_target_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_loadSpecifiersFromPlistName_targ_0001d910);
  return;
}



// ===== 0x000106a8  objc_msgSend$localizedCaseInsensitiveCompare_

void objc_msgSend_localizedCaseInsensitiveCompare_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_localizedCaseInsensitiveCompare__0001d918);
  return;
}



// ===== 0x000106c8  objc_msgSend$localizedCaseInsensitiveContainsString_

void objc_msgSend_localizedCaseInsensitiveContainsString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_localizedCaseInsensitiveContains_0001d920);
  return;
}



// ===== 0x000106e8  objc_msgSend$localizedDescription

void objc_msgSend_localizedDescription(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_localizedDescription_0001d928);
  return;
}



// ===== 0x00010708  objc_msgSend$localizedInfoDictionary

void objc_msgSend_localizedInfoDictionary(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_localizedInfoDictionary_0001d930);
  return;
}



// ===== 0x00010728  objc_msgSend$lowercaseString

void objc_msgSend_lowercaseString(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_lowercaseString_0001d938);
  return;
}



// ===== 0x00010748  objc_msgSend$mainScreen

void objc_msgSend_mainScreen(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_mainScreen_0001d940);
  return;
}



// ===== 0x00010768  objc_msgSend$monospacedDigitSystemFontOfSize_weight_

void objc_msgSend_monospacedDigitSystemFontOfSize_weight_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_monospacedDigitSystemFontOfSize__0001d948);
  return;
}



// ===== 0x00010788  objc_msgSend$mutableCopy

void objc_msgSend_mutableCopy(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_mutableCopy_0001d950);
  return;
}



// ===== 0x000107a8  objc_msgSend$name

void objc_msgSend_name(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_name_0001d958);
  return;
}



// ===== 0x000107c8  objc_msgSend$navigationItem

void objc_msgSend_navigationItem(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_navigationItem_0001d960);
  return;
}



// ===== 0x000107e8  objc_msgSend$numberWithBool_

void objc_msgSend_numberWithBool_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_numberWithBool__0001d968);
  return;
}



// ===== 0x00010808  objc_msgSend$numberWithDouble_

void objc_msgSend_numberWithDouble_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_numberWithDouble__0001d970);
  return;
}



// ===== 0x00010828  objc_msgSend$numberWithFloat_

void objc_msgSend_numberWithFloat_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_numberWithFloat__0001d978);
  return;
}



// ===== 0x00010848  objc_msgSend$numberWithInteger_

void objc_msgSend_numberWithInteger_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_numberWithInteger__0001d980);
  return;
}



// ===== 0x00010868  objc_msgSend$objectAtIndexedSubscript_

void objc_msgSend_objectAtIndexedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_objectAtIndexedSubscript__0001d988);
  return;
}



// ===== 0x00010888  objc_msgSend$objectForKeyedSubscript_

void objc_msgSend_objectForKeyedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_objectForKeyedSubscript__0001d990);
  return;
}



// ===== 0x000108a8  objc_msgSend$openURL_options_completionHandler_

void objc_msgSend_openURL_options_completionHandler_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_openURL_options_completionHandle_0001d9b0);
  return;
}



// ===== 0x000108c8  objc_msgSend$path

void objc_msgSend_path(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_path_0001d9b8);
  return;
}



// ===== 0x000108e8  objc_msgSend$pathExtension

void objc_msgSend_pathExtension(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_pathExtension_0001d9c0);
  return;
}



// ===== 0x00010908  objc_msgSend$percentEncodedPath

void objc_msgSend_percentEncodedPath(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_percentEncodedPath_0001d9c8);
  return;
}



// ===== 0x00010928  objc_msgSend$performGetter

void objc_msgSend_performGetter(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_performGetter_0001d9d0);
  return;
}



// ===== 0x00010948  objc_msgSend$performSetterWithValue_

void objc_msgSend_performSetterWithValue_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_performSetterWithValue__0001d9d8);
  return;
}



// ===== 0x00010968  objc_msgSend$pinnedBundleIDs

void objc_msgSend_pinnedBundleIDs(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_pinnedBundleIDs_0001d9e0);
  return;
}



// ===== 0x00010988  objc_msgSend$predicateWithBlock_

void objc_msgSend_predicateWithBlock_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_predicateWithBlock__0001d9e8);
  return;
}



// ===== 0x000109a8  objc_msgSend$preferenceSpecifierNamed_target_set_get_detail_cell_edit_

void objc_msgSend_preferenceSpecifierNamed_target_set_get_detail_cell_edit_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_preferenceSpecifierNamed_target__0001d9f0);
  return;
}



// ===== 0x000109c8  objc_msgSend$presentClockColorPicker_title_alpha_

void objc_msgSend_presentClockColorPicker_title_alpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_presentClockColorPicker_title_al_0001da00);
  return;
}



// ===== 0x000109e8  objc_msgSend$presentViewController_animated_completion_

void objc_msgSend_presentViewController_animated_completion_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_presentViewController_animated_c_0001da08);
  return;
}



// ===== 0x00010a08  objc_msgSend$propertyForKey_

void objc_msgSend_propertyForKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_propertyForKey__0001da10);
  return;
}



// ===== 0x00010a28  objc_msgSend$rangeOfString_

void objc_msgSend_rangeOfString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_rangeOfString__0001da18);
  return;
}



// ===== 0x00010a48  objc_msgSend$refreshCellContentsWithSpecifier_

void objc_msgSend_refreshCellContentsWithSpecifier_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_refreshCellContentsWithSpecifier_0001da28);
  return;
}



// ===== 0x00010a68  objc_msgSend$reloadSpecifiers

void objc_msgSend_reloadSpecifiers(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_reloadSpecifiers_0001da30);
  return;
}



// ===== 0x00010a88  objc_msgSend$removeObject_

void objc_msgSend_removeObject_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_removeObject__0001da38);
  return;
}



// ===== 0x00010aa8  objc_msgSend$removeObjectForKey_

void objc_msgSend_removeObjectForKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_removeObjectForKey__0001da40);
  return;
}



// ===== 0x00010ac8  objc_msgSend$rightBarButtonItem

void objc_msgSend_rightBarButtonItem(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_rightBarButtonItem_0001da50);
  return;
}



// ===== 0x00010ae8  objc_msgSend$savePickerColor_

void objc_msgSend_savePickerColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_savePickerColor__0001da58);
  return;
}



// ===== 0x00010b08  objc_msgSend$sb_developerProfileCellForTableView_

void objc_msgSend_sb_developerProfileCellForTableView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_developerProfileCellForTableV_0001da60);
  return;
}



// ===== 0x00010b28  objc_msgSend$sb_installRootHeader

void objc_msgSend_sb_installRootHeader(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_installRootHeader_0001da68);
  return;
}



// ===== 0x00010b48  objc_msgSend$sb_openDeveloperSileoSource

void objc_msgSend_sb_openDeveloperSileoSource(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_openDeveloperSileoSource_0001da70);
  return;
}



// ===== 0x00010b68  objc_msgSend$sb_openIconDirectory_

void objc_msgSend_sb_openIconDirectory_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_openIconDirectory__0001da78);
  return;
}



// ===== 0x00010b88  objc_msgSend$sb_saveColorFromActivePicker_

void objc_msgSend_sb_saveColorFromActivePicker_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_saveColorFromActivePicker__0001da80);
  return;
}



// ===== 0x00010ba8  objc_msgSend$sb_saveDesktopTextColor_

void objc_msgSend_sb_saveDesktopTextColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_saveDesktopTextColor__0001da88);
  return;
}



// ===== 0x00010bc8  objc_msgSend$sb_saveRunIndicatorColor_

void objc_msgSend_sb_saveRunIndicatorColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_saveRunIndicatorColor__0001da90);
  return;
}



// ===== 0x00010be8  objc_msgSend$sb_saveVPNStatusBarColor_

void objc_msgSend_sb_saveVPNStatusBarColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_saveVPNStatusBarColor__0001da98);
  return;
}



// ===== 0x00010c08  objc_msgSend$sb_specifierForAction_

void objc_msgSend_sb_specifierForAction_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_specifierForAction__0001daa0);
  return;
}



// ===== 0x00010c28  objc_msgSend$sb_specifierForPreferenceKey_

void objc_msgSend_sb_specifierForPreferenceKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_specifierForPreferenceKey__0001daa8);
  return;
}



// ===== 0x00010c48  objc_msgSend$sb_specifierPlistName

void objc_msgSend_sb_specifierPlistName(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_specifierPlistName_0001dab0);
  return;
}



// ===== 0x00010c68  objc_msgSend$sb_updateVisibleColorAccessoryForAction_tag_color_

void objc_msgSend_sb_updateVisibleColorAccessoryForAction_tag_color_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_updateVisibleColorAccessoryFo_0001dab8);
  return;
}



// ===== 0x00010c88  objc_msgSend$sb_updateVisibleSwitchForKey_value_

void objc_msgSend_sb_updateVisibleSwitchForKey_value_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sb_updateVisibleSwitchForKey_val_0001dac0);
  return;
}



// ===== 0x00010ca8  objc_msgSend$scale

void objc_msgSend_scale(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_scale_0001dac8);
  return;
}



// ===== 0x00010cc8  objc_msgSend$scanDouble_

void objc_msgSend_scanDouble_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_scanDouble__0001dad0);
  return;
}



// ===== 0x00010ce8  objc_msgSend$scanHexInt_

void objc_msgSend_scanHexInt_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_scanHexInt__0001dad8);
  return;
}



// ===== 0x00010d08  objc_msgSend$scannerWithString_

void objc_msgSend_scannerWithString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_scannerWithString__0001dae0);
  return;
}



// ===== 0x00010d28  objc_msgSend$scheme

void objc_msgSend_scheme(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_scheme_0001dae8);
  return;
}



// ===== 0x00010d48  objc_msgSend$searchBar

void objc_msgSend_searchBar(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_searchBar_0001daf0);
  return;
}



// ===== 0x00010d68  objc_msgSend$searchController

void objc_msgSend_searchController(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_searchController_0001daf8);
  return;
}



// ===== 0x00010d88  objc_msgSend$secondaryLabelColor

void objc_msgSend_secondaryLabelColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_secondaryLabelColor_0001db00);
  return;
}



// ===== 0x00010da8  objc_msgSend$secondarySystemGroupedBackgroundColor

void objc_msgSend_secondarySystemGroupedBackgroundColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_secondarySystemGroupedBackground_0001db08);
  return;
}



// ===== 0x00010dc8  objc_msgSend$selectedBundleIDs

void objc_msgSend_selectedBundleIDs(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_selectedBundleIDs_0001db10);
  return;
}



// ===== 0x00010de8  objc_msgSend$selectedColor

void objc_msgSend_selectedColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_selectedColor_0001db18);
  return;
}



// ===== 0x00010e08  objc_msgSend$separatorColor

void objc_msgSend_separatorColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_separatorColor_0001db20);
  return;
}



// ===== 0x00010e28  objc_msgSend$set

void objc_msgSend_set(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_set_0001db28);
  return;
}



// ===== 0x00010e48  objc_msgSend$setAccessibilityLabel_

void objc_msgSend_setAccessibilityLabel_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setAccessibilityLabel__0001db30);
  return;
}



// ===== 0x00010e68  objc_msgSend$setAccessoryType_

void objc_msgSend_setAccessoryType_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setAccessoryType__0001db38);
  return;
}



// ===== 0x00010e88  objc_msgSend$setAccessoryView_

void objc_msgSend_setAccessoryView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setAccessoryView__0001db40);
  return;
}



// ===== 0x00010ea8  objc_msgSend$setAdjustsFontSizeToFitWidth_

void objc_msgSend_setAdjustsFontSizeToFitWidth_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setAdjustsFontSizeToFitWidth__0001db48);
  return;
}



// ===== 0x00010ec8  objc_msgSend$setAlignment_

void objc_msgSend_setAlignment_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setAlignment__0001db50);
  return;
}



// ===== 0x00010ee8  objc_msgSend$setAppBundleID_

void objc_msgSend_setAppBundleID_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setAppBundleID__0001db60);
  return;
}



// ===== 0x00010f08  objc_msgSend$setAutoresizingMask_

void objc_msgSend_setAutoresizingMask_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setAutoresizingMask__0001db68);
  return;
}



// ===== 0x00010f28  objc_msgSend$setAxis_

void objc_msgSend_setAxis_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setAxis__0001db70);
  return;
}



// ===== 0x00010f48  objc_msgSend$setBackgroundColor_

void objc_msgSend_setBackgroundColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setBackgroundColor__0001db78);
  return;
}



// ===== 0x00010f68  objc_msgSend$setBorderColor_

void objc_msgSend_setBorderColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setBorderColor__0001db80);
  return;
}



// ===== 0x00010f88  objc_msgSend$setBorderWidth_

void objc_msgSend_setBorderWidth_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setBorderWidth__0001db88);
  return;
}



// ===== 0x00010fa8  objc_msgSend$setClipsToBounds_

void objc_msgSend_setClipsToBounds_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setClipsToBounds__0001db90);
  return;
}



// ===== 0x00010fc8  objc_msgSend$setColorPickerTarget_

void objc_msgSend_setColorPickerTarget_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setColorPickerTarget__0001db98);
  return;
}



// ===== 0x00010fe8  objc_msgSend$setContentMode_

void objc_msgSend_setContentMode_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setContentMode__0001dba0);
  return;
}



// ===== 0x00011008  objc_msgSend$setContinuous_

void objc_msgSend_setContinuous_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setContinuous__0001dba8);
  return;
}



// ===== 0x00011028  objc_msgSend$setCornerRadius_

void objc_msgSend_setCornerRadius_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setCornerRadius__0001dbb0);
  return;
}



// ===== 0x00011048  objc_msgSend$setDefinesPresentationContext_

void objc_msgSend_setDefinesPresentationContext_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setDefinesPresentationContext__0001dbb8);
  return;
}



// ===== 0x00011068  objc_msgSend$setDelegate_

void objc_msgSend_setDelegate_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setDelegate__0001dbc0);
  return;
}



// ===== 0x00011088  objc_msgSend$setDistribution_

void objc_msgSend_setDistribution_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setDistribution__0001dbc8);
  return;
}



// ===== 0x000110a8  objc_msgSend$setEnabled_

void objc_msgSend_setEnabled_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setEnabled__0001dbd0);
  return;
}



// ===== 0x000110c8  objc_msgSend$setFilteredApps_

void objc_msgSend_setFilteredApps_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setFilteredApps__0001dbd8);
  return;
}



// ===== 0x000110e8  objc_msgSend$setFont_

void objc_msgSend_setFont_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setFont__0001dbe0);
  return;
}



// ===== 0x00011108  objc_msgSend$setHidden_

void objc_msgSend_setHidden_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setHidden__0001dbe8);
  return;
}



// ===== 0x00011128  objc_msgSend$setIconLoadToken_

void objc_msgSend_setIconLoadToken_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setIconLoadToken__0001dbf0);
  return;
}



// ===== 0x00011148  objc_msgSend$setImage_

void objc_msgSend_setImage_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setImage__0001dbf8);
  return;
}



// ===== 0x00011168  objc_msgSend$setMasksToBounds_

void objc_msgSend_setMasksToBounds_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setMasksToBounds__0001dc00);
  return;
}



// ===== 0x00011188  objc_msgSend$setMaximumValue_

void objc_msgSend_setMaximumValue_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setMaximumValue__0001dc08);
  return;
}



// ===== 0x000111a8  objc_msgSend$setMinimumScaleFactor_

void objc_msgSend_setMinimumScaleFactor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setMinimumScaleFactor__0001dc10);
  return;
}



// ===== 0x000111c8  objc_msgSend$setMinimumValue_

void objc_msgSend_setMinimumValue_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setMinimumValue__0001dc18);
  return;
}



// ===== 0x000111e8  objc_msgSend$setNeedsLayout

void objc_msgSend_setNeedsLayout(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setNeedsLayout_0001dc20);
  return;
}



// ===== 0x00011208  objc_msgSend$setNumberOfLines_

void objc_msgSend_setNumberOfLines_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setNumberOfLines__0001dc28);
  return;
}



// ===== 0x00011228  objc_msgSend$setObject_forKeyedSubscript_

void objc_msgSend_setObject_forKeyedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setObject_forKeyedSubscript__0001dc30);
  return;
}



// ===== 0x00011248  objc_msgSend$setObscuresBackgroundDuringPresentation_

void objc_msgSend_setObscuresBackgroundDuringPresentation_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setObscuresBackgroundDuringPrese_0001dc38);
  return;
}



// ===== 0x00011268  objc_msgSend$setOn_

void objc_msgSend_setOn_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setOn__0001dc40);
  return;
}



// ===== 0x00011288  objc_msgSend$setOn_animated_

void objc_msgSend_setOn_animated_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setOn_animated__0001dc48);
  return;
}



// ===== 0x000112a8  objc_msgSend$setPinnedBundleIDs_

void objc_msgSend_setPinnedBundleIDs_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setPinnedBundleIDs__0001dc50);
  return;
}



// ===== 0x000112c8  objc_msgSend$setProperty_forKey_

void objc_msgSend_setProperty_forKey_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setProperty_forKey__0001dc60);
  return;
}



// ===== 0x000112e8  objc_msgSend$setRightBarButtonItem_

void objc_msgSend_setRightBarButtonItem_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setRightBarButtonItem__0001dc68);
  return;
}



// ===== 0x00011308  objc_msgSend$setSearchController_

void objc_msgSend_setSearchController_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setSearchController__0001dc70);
  return;
}



// ===== 0x00011328  objc_msgSend$setSearchResultsUpdater_

void objc_msgSend_setSearchResultsUpdater_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setSearchResultsUpdater__0001dc78);
  return;
}



// ===== 0x00011348  objc_msgSend$setSelectedBundleIDs_

void objc_msgSend_setSelectedBundleIDs_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setSelectedBundleIDs__0001dc80);
  return;
}



// ===== 0x00011368  objc_msgSend$setSelectedColor_

void objc_msgSend_setSelectedColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setSelectedColor__0001dc88);
  return;
}



// ===== 0x00011388  objc_msgSend$setSelectionStyle_

void objc_msgSend_setSelectionStyle_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setSelectionStyle__0001dc90);
  return;
}



// ===== 0x000113a8  objc_msgSend$setSpacing_

void objc_msgSend_setSpacing_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setSpacing__0001dc98);
  return;
}



// ===== 0x000113c8  objc_msgSend$setString_

void objc_msgSend_setString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setString__0001dca8);
  return;
}



// ===== 0x000113e8  objc_msgSend$setSupportsAlpha_

void objc_msgSend_setSupportsAlpha_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setSupportsAlpha__0001dcb0);
  return;
}



// ===== 0x00011408  objc_msgSend$setTableHeaderView_

void objc_msgSend_setTableHeaderView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setTableHeaderView__0001dcb8);
  return;
}



// ===== 0x00011428  objc_msgSend$setTag_

void objc_msgSend_setTag_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setTag__0001dcc0);
  return;
}



// ===== 0x00011448  objc_msgSend$setText_

void objc_msgSend_setText_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setText__0001dcc8);
  return;
}



// ===== 0x00011468  objc_msgSend$setTextAlignment_

void objc_msgSend_setTextAlignment_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setTextAlignment__0001dcd0);
  return;
}



// ===== 0x00011488  objc_msgSend$setTextColor_

void objc_msgSend_setTextColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setTextColor__0001dcd8);
  return;
}



// ===== 0x000114a8  objc_msgSend$setTintColor_

void objc_msgSend_setTintColor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setTintColor__0001dce0);
  return;
}



// ===== 0x000114c8  objc_msgSend$setTitle_

void objc_msgSend_setTitle_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setTitle__0001dce8);
  return;
}



// ===== 0x000114e8  objc_msgSend$setTitleView_

void objc_msgSend_setTitleView_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setTitleView__0001dcf0);
  return;
}



// ===== 0x00011508  objc_msgSend$setTranslatesAutoresizingMaskIntoConstraints_

void objc_msgSend_setTranslatesAutoresizingMaskIntoConstraints_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setTranslatesAutoresizingMaskInt_0001dcf8);
  return;
}



// ===== 0x00011528  objc_msgSend$setUserInteractionEnabled_

void objc_msgSend_setUserInteractionEnabled_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setUserInteractionEnabled__0001dd00);
  return;
}



// ===== 0x00011548  objc_msgSend$setValue_

void objc_msgSend_setValue_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setValue__0001dd08);
  return;
}



// ===== 0x00011568  objc_msgSend$setWhitelistSwitch_

void objc_msgSend_setWhitelistSwitch_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setWhitelistSwitch__0001dd10);
  return;
}



// ===== 0x00011588  objc_msgSend$setWithArray_

void objc_msgSend_setWithArray_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_setWithArray__0001dd20);
  return;
}



// ===== 0x000115a8  objc_msgSend$sharedApplication

void objc_msgSend_sharedApplication(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sharedApplication_0001dd28);
  return;
}



// ===== 0x000115c8  objc_msgSend$sortedArrayUsingComparator_

void objc_msgSend_sortedArrayUsingComparator_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_sortedArrayUsingComparator__0001dd38);
  return;
}



// ===== 0x000115e8  objc_msgSend$specifier

void objc_msgSend_specifier(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_specifier_0001dd40);
  return;
}



// ===== 0x00011608  objc_msgSend$specifierAtIndexPath_

void objc_msgSend_specifierAtIndexPath_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_specifierAtIndexPath__0001dd48);
  return;
}



// ===== 0x00011628  objc_msgSend$specifiers

void objc_msgSend_specifiers(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_specifiers_0001dd50);
  return;
}



// ===== 0x00011648  objc_msgSend$stringByAddingPercentEncodingWithAllowedCharacters_

void objc_msgSend_stringByAddingPercentEncodingWithAllowedCharacters_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_stringByAddingPercentEncodingWit_0001dd58);
  return;
}



// ===== 0x00011668  objc_msgSend$stringByAppendingPathComponent_

void objc_msgSend_stringByAppendingPathComponent_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_stringByAppendingPathComponent__0001dd60);
  return;
}



// ===== 0x00011688  objc_msgSend$stringByDeletingLastPathComponent

void objc_msgSend_stringByDeletingLastPathComponent(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_stringByDeletingLastPathComponen_0001dd68);
  return;
}



// ===== 0x000116a8  objc_msgSend$stringByReplacingOccurrencesOfString_withString_

void objc_msgSend_stringByReplacingOccurrencesOfString_withString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_stringByReplacingOccurrencesOfSt_0001dd70);
  return;
}



// ===== 0x000116c8  objc_msgSend$stringByStandardizingPath

void objc_msgSend_stringByStandardizingPath(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_stringByStandardizingPath_0001dd78);
  return;
}



// ===== 0x000116e8  objc_msgSend$stringByTrimmingCharactersInSet_

void objc_msgSend_stringByTrimmingCharactersInSet_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_stringByTrimmingCharactersInSet__0001dd80);
  return;
}



// ===== 0x00011708  objc_msgSend$stringWithContentsOfFile_encoding_error_

void objc_msgSend_stringWithContentsOfFile_encoding_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_stringWithContentsOfFile_encodin_0001dd88);
  return;
}



// ===== 0x00011728  objc_msgSend$stringWithFormat_

void objc_msgSend_stringWithFormat_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_stringWithFormat__0001dd90);
  return;
}



// ===== 0x00011748  objc_msgSend$substringFromIndex_

void objc_msgSend_substringFromIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_substringFromIndex__0001dd98);
  return;
}



// ===== 0x00011768  objc_msgSend$substringToIndex_

void objc_msgSend_substringToIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_substringToIndex__0001dda0);
  return;
}



// ===== 0x00011788  objc_msgSend$subviews

void objc_msgSend_subviews(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_subviews_0001dda8);
  return;
}



// ===== 0x000117a8  objc_msgSend$syncWithSpecifier_

void objc_msgSend_syncWithSpecifier_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_syncWithSpecifier__0001ddb8);
  return;
}



// ===== 0x000117c8  objc_msgSend$systemFontOfSize_weight_

void objc_msgSend_systemFontOfSize_weight_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_systemFontOfSize_weight__0001ddc0);
  return;
}



// ===== 0x000117e8  objc_msgSend$systemGroupedBackgroundColor

void objc_msgSend_systemGroupedBackgroundColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_systemGroupedBackgroundColor_0001ddc8);
  return;
}



// ===== 0x00011808  objc_msgSend$systemImageNamed_withConfiguration_

void objc_msgSend_systemImageNamed_withConfiguration_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_systemImageNamed_withConfigurati_0001ddd0);
  return;
}



// ===== 0x00011828  objc_msgSend$table

void objc_msgSend_table(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_table_0001ddd8);
  return;
}



// ===== 0x00011848  objc_msgSend$tag

void objc_msgSend_tag(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_tag_0001de00);
  return;
}



// ===== 0x00011868  objc_msgSend$target

void objc_msgSend_target(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_target_0001de08);
  return;
}



// ===== 0x00011888  objc_msgSend$text

void objc_msgSend_text(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_text_0001de10);
  return;
}



// ===== 0x000118a8  objc_msgSend$textLabel

void objc_msgSend_textLabel(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_textLabel_0001de18);
  return;
}



// ===== 0x000118c8  objc_msgSend$topAnchor

void objc_msgSend_topAnchor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_topAnchor_0001de20);
  return;
}



// ===== 0x000118e8  objc_msgSend$trailingAnchor

void objc_msgSend_trailingAnchor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_trailingAnchor_0001de28);
  return;
}



// ===== 0x00011908  objc_msgSend$updateValueLabel

void objc_msgSend_updateValueLabel(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_updateValueLabel_0001de38);
  return;
}



// ===== 0x00011928  objc_msgSend$value

void objc_msgSend_value(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_value_0001de40);
  return;
}



// ===== 0x00011948  objc_msgSend$view

void objc_msgSend_view(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_view_0001de48);
  return;
}



// ===== 0x00011968  objc_msgSend$viewWithTag_

void objc_msgSend_viewWithTag_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_viewWithTag__0001de68);
  return;
}



// ===== 0x00011988  objc_msgSend$whiteColor

void objc_msgSend_whiteColor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_whiteColor_0001de70);
  return;
}



// ===== 0x000119a8  objc_msgSend$whitelistPreferenceKey

void objc_msgSend_whitelistPreferenceKey(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_whitelistPreferenceKey_0001de78);
  return;
}



// ===== 0x000119c8  objc_msgSend$whitelistSwitch

void objc_msgSend_whitelistSwitch(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_whitelistSwitch_0001de80);
  return;
}



// ===== 0x000119e8  objc_msgSend$whitespaceAndNewlineCharacterSet

void objc_msgSend_whitespaceAndNewlineCharacterSet(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_whitespaceAndNewlineCharacterSet_0001de90);
  return;
}



// ===== 0x00011a08  objc_msgSend$whitespaceCharacterSet

void objc_msgSend_whitespaceCharacterSet(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_whitespaceCharacterSet_0001de98);
  return;
}



// ===== 0x00011a28  objc_msgSend$widthAnchor

void objc_msgSend_widthAnchor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_widthAnchor_0001dea0);
  return;
}



// ===== 0x00011a48  objc_msgSend$writeToFile_atomically_

void objc_msgSend_writeToFile_atomically_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181a0)(param_1,PTR_s_writeToFile_atomically__0001dea8);
  return;
}



