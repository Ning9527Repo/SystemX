//
//  SystemBoxRootListController.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SystemBoxRootListController.h"

@implementation SystemBoxRootListController

// IMP 0x00004000  types @16@0:8
- (id)sb_specifierPlistName {
      return 0x184b0;
}

// IMP 0x0000400c  types @16@0:8
- (id)specifiers {
      long lVar1;
      undefined8 uVar2;
      ID IVar3;
      SEL extraout_x1;
      undefined8 uVar4;
      long lVar5;
      undefined auVar6 [16];

      lVar5 = (long)*(int *)PTR__OBJC_IVAR___PSListController__specifiers_00018060;
      lVar1 = *(long *)(self + lVar5);
      if (lVar1 == 0) {
        objc_msgSend_sb_specifierPlistName(self);
        auVar6 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_loadSpecifiersFromPlistName_target_(self,auVar6._8_8_,auVar6._0_8_,self);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(self + lVar5);
        *(undefined8 *)(self + lVar5) = uVar2;
        _objc_release(uVar4);
        _objc_release(auVar6._0_8_);
        lVar1 = *(long *)(self + lVar5);
        _cmd = extraout_x1;
      }
      IVar3 = _objc_retainAutoreleaseReturnValue(lVar1,_cmd);
      return IVar3;
}

// IMP 0x0000408c  types v16@0:8
- (void)viewDidLoad {
      int iVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined auVar4 [16];
      ID local_40;
      undefined *puStack_38;

      puStack_38 = PTR_PTR_0001e000;
      local_40 = self;
      _objc_msgSendSuper2(&local_40,PTR_s_viewDidLoad_0001de58);
      auVar4 = _objc_alloc(PTR__OBJC_CLASS___UIBarButtonItem_0001deb0);
      uVar2 = objc_msgSend_initWithTitle_style_target_action_
                        (auVar4._0_8_,auVar4._8_8_,&cf_l,0,self,PTR_s_respring_0001da48);
      objc_msgSend_navigationItem(self);
      auVar4 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setRightBarButtonItem_(auVar4._0_8_,auVar4._8_8_,uVar2);
      _objc_release(auVar4._0_8_);
      objc_msgSend_systemGroupedBackgroundColor(PTR__OBJC_CLASS___UIColor_0001deb8);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_view(self);
      auVar4 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setBackgroundColor_(auVar4._0_8_,auVar4._8_8_,uVar3);
      _objc_release(auVar4._0_8_);
      _objc_release(uVar3);
      objc_msgSend_sb_specifierPlistName(self);
      auVar4 = _objc_retainAutoreleasedReturnValue();
      iVar1 = objc_msgSend_isEqualToString_(auVar4._0_8_,auVar4._8_8_,&cf_Root);
      _objc_release(auVar4._0_8_);
      if (iVar1 != 0) {
        objc_msgSend_navigationItem(self);
        auVar4 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setTitleView_(auVar4._0_8_,auVar4._8_8_,0);
        _objc_release(auVar4._0_8_);
        objc_msgSend_navigationItem(self);
        auVar4 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setTitle_(auVar4._0_8_,auVar4._8_8_,&cf___);
        _objc_release(auVar4._0_8_);
        objc_msgSend_sb_installRootHeader(self);
      }
      _objc_release(uVar2);
      return;
}

// IMP 0x000041f4  types v20@0:8B16
- (void)viewDidAppear:(BOOL)viewDidAppear {
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
      local_2c0 = self;
      _objc_msgSendSuper2(&local_2c0,PTR_s_viewDidAppear__0001de50,viewDidAppear);
      objc_msgSend_sb_specifierPlistName(self);
      auVar30 = _objc_retainAutoreleasedReturnValue();
      iVar2 = objc_msgSend_isEqualToString_(auVar30._0_8_,auVar30._8_8_,&cf_Root);
      _objc_release(auVar30._0_8_);
      if (iVar2 != 0) {
        objc_msgSend_table(self);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        uVar7 = _objc_retain(self);
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

// IMP 0x00004ee0  types v16@0:8
- (void)sb_installRootHeader {
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
      objc_msgSend_table(self);
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

// IMP 0x00005620  types @32@0:8@16@24
- (id)tableView:(id)tableView cellForRowAtIndexPath:(id)cellForRowAtIndexPath {
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

      uVar2 = _objc_retain(cellForRowAtIndexPath);
      auVar13 = _objc_retain(tableView);
      uVar6 = auVar13._0_8_;
      objc_msgSend_specifierAtIndexPath_(self,auVar13._8_8_,uVar2);
      auVar13 = _objc_retainAutoreleasedReturnValue();
      uVar3 = auVar13._0_8_;
      objc_msgSend_propertyForKey_(uVar3,auVar13._8_8_,&cf_developerProfile);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      iVar1 = objc_msgSend_boolValue();
      _objc_release(uVar4);
      if (iVar1 != 0) {
        objc_msgSend_sb_developerProfileCellForTableView_(self,extraout_x1,uVar6);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        goto LAB_00005df8;
      }
      puStack_68 = PTR_PTR_0001e000;
      local_70 = self;
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

// IMP 0x00006604  types d32@0:8@16@24
- (double)tableView:(id)tableView heightForRowAtIndexPath:(id)heightForRowAtIndexPath {
      undefined8 uVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      ulong uVar4;
      double dVar5;
      undefined auVar6 [16];
      ID local_60;
      undefined *puStack_58;

      uVar1 = _objc_retain(tableView);
      auVar6 = _objc_retain(heightForRowAtIndexPath);
      uVar2 = auVar6._0_8_;
      objc_msgSend_specifierAtIndexPath_(self,auVar6._8_8_,uVar2);
      auVar6 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_propertyForKey_(auVar6._0_8_,auVar6._8_8_,&cf_developerProfile);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      uVar4 = objc_msgSend_boolValue();
      _objc_release(uVar3);
      if ((uVar4 & 1) == 0) {
        puStack_58 = PTR_PTR_0001e000;
        local_60 = self;
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

// IMP 0x000066f0  types @24@0:8@16
- (id)sb_developerProfileCellForTableView:(id)sb_developerProfileCellForTableView {
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
      objc_msgSend_dequeueReusableCellWithIdentifier_(sb_developerProfileCellForTableView,_cmd,&cf_SystemBoxDeveloperProfileCell)
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

// IMP 0x00006fa0  types v32@0:8@16@24
- (void)tableView:(id)tableView didSelectRowAtIndexPath:(id)didSelectRowAtIndexPath {
      int iVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      undefined8 uVar4;
      undefined8 extraout_x1;
      undefined auVar5 [16];
      ID local_50;
      undefined *puStack_48;

      uVar2 = _objc_retain(didSelectRowAtIndexPath);
      auVar5 = _objc_retain(tableView);
      uVar3 = auVar5._0_8_;
      objc_msgSend_specifierAtIndexPath_(self,auVar5._8_8_,uVar2);
      auVar5 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_propertyForKey_(auVar5._0_8_,auVar5._8_8_,&cf_developerProfile);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      iVar1 = objc_msgSend_boolValue();
      _objc_release(uVar4);
      if (iVar1 == 0) {
        puStack_48 = PTR_PTR_0001e000;
        local_50 = self;
        _objc_msgSendSuper2(&local_50,PTR_s_tableView_didSelectRowAtIndexPat_0001dde8,uVar3,uVar2);
        _objc_release(uVar2);
        _objc_release(uVar3);
      }
      else {
        objc_msgSend_deselectRowAtIndexPath_animated_(uVar3,extraout_x1,uVar2,1);
        _objc_release(uVar2);
        _objc_release(uVar3);
        objc_msgSend_sb_openDeveloperSileoSource(self);
      }
      _objc_release(auVar5._0_8_);
      return;
}

// IMP 0x0000709c  types v16@0:8
- (void)sb_openDeveloperSileoSource {
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
                (PTR__OBJC_CLASS___NSURL_0001df10,_cmd,&cf_sileo___source_https___Wkkyy00_github_io_)
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

// IMP 0x0000720c  types v40@0:8@16@24q32
- (void)tableView:(id)tableView willDisplayFooterView:(id)willDisplayFooterView forSection:(long long)forSection {
      int iVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      ulong uVar4;
      undefined8 uVar5;
      undefined auVar6 [16];

      uVar2 = _objc_retain(willDisplayFooterView);
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

// IMP 0x0000738c  types @24@0:8@16
- (id)sb_specifierForPreferenceKey:(id)sb_specifierForPreferenceKey {
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
      uVar1 = _objc_retain(sb_specifierForPreferenceKey);
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
        objc_msgSend_specifiers(self);
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

// IMP 0x00007504  types @24@0:8@16
- (id)sb_specifierForAction:(id)sb_specifierForAction {
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
      uVar1 = _objc_retain(sb_specifierForAction);
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
        objc_msgSend_specifiers(self);
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

// IMP 0x0000767c  types v28@0:8@16B24
- (void)sb_updateVisibleSwitchForKey:(id)sb_updateVisibleSwitchForKey value:(BOOL)value {
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
        objc_msgSend_cachedCellForSpecifier_(self,auVar7._8_8_,lVar1);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        uVar3 = _objc_opt_class(PTR__OBJC_CLASS___PSControlTableCell_0001df28);
        uVar4 = _objc_opt_isKindOfClass(uVar2,uVar3);
        if ((uVar4 & 1) != 0) {
          auVar7 = _objc_retain(uVar2);
          uVar3 = auVar7._0_8_;
          objc_msgSend_numberWithBool_(PTR__OBJC_CLASS___NSNumber_0001df30,auVar7._8_8_,value);
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
            objc_msgSend_setOn_animated_(auVar7._0_8_,auVar7._8_8_,value,0);
            _objc_release(auVar7._0_8_);
          }
          _objc_release(uVar3);
        }
        _objc_release(uVar2);
      }
      _objc_release(lVar1);
      return;
}

// IMP 0x000077a8  types v40@0:8@16q24@32
- (void)sb_updateVisibleColorAccessoryForAction:(id)sb_updateVisibleColorAccessoryForAction tag:(long long)tag color:(id)color {
      long lVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      long_long lVar4;
      undefined8 uVar5;
      undefined8 uVar6;
      undefined8 extraout_x1;
      undefined auVar7 [16];
      undefined auVar8 [16];

      auVar7 = _objc_retain(color);
      objc_msgSend_sb_specifierForAction_(self,auVar7._8_8_,sb_updateVisibleColorAccessoryForAction);
      auVar8 = _objc_retainAutoreleasedReturnValue();
      lVar1 = auVar8._0_8_;
      if (lVar1 != 0) {
        objc_msgSend_cachedCellForSpecifier_(self,auVar8._8_8_,lVar1);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_accessoryView();
        uVar3 = _objc_retainAutoreleasedReturnValue();
        lVar4 = objc_msgSend_tag();
        if (lVar4 == tag) {
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

// IMP 0x00007894  types @24@0:8@16
- (id)readPreferenceValue:(id)readPreferenceValue {
      undefined *puVar1;
      undefined8 uVar2;
      long lVar3;
      undefined8 uVar4;
      long lVar5;
      undefined8 uVar6;
      ID IVar7;
      undefined8 extraout_x1;
      undefined auVar8 [16];

      auVar8 = _objc_retain(readPreferenceValue);
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

// IMP 0x00007994  types v32@0:8@16@24
- (void)setPreferenceValue:(id)setPreferenceValue specifier:(id)specifier {
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

      auVar13 = _objc_retain(setPreferenceValue);
      lVar9 = auVar13._0_8_;
      objc_msgSend_propertyForKey_(specifier,auVar13._8_8_,&cf_key);
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
      local_68 = self;
      objc_msgSend_enumerateKeysAndObjectsUsingBlock_(uVar12,extraout_x1_32,&local_88);
      _objc_release(uVar12);
      _objc_release(lVar3);
      _objc_release(uVar7);
    LAB_0000802c:
      _objc_release(lVar2);
      _objc_release(lVar9);
      return;
}

// IMP 0x000082c4  types v24@0:8@16
- (void)sb_openIconDirectory:(id)sb_openIconDirectory {
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

      uVar3 = _objc_retain(sb_openIconDirectory);
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
        objc_msgSend_presentViewController_animated_completion_(self,extraout_x1_01,uVar6,1,0);
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
          IStack_50 = self;
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

// IMP 0x00008628  types v16@0:8
- (void)openBatchIconDirectory {
      objc_msgSend_sb_openIconDirectory_(self,_cmd,&cf__var_mobile_Documents_SystemBox_BatchIcons)
      ;
      return;
}

// IMP 0x00008634  types v16@0:8
- (void)openIrregularIconDirectory {
      objc_msgSend_sb_openIconDirectory_
                (self,_cmd,&cf__var_mobile_Documents_SystemBox_IrregularIcons);
      return;
}

// IMP 0x00008640  types v16@0:8
- (void)chooseVPNStatusBarColor {
      undefined8 uVar1;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined auVar2 [16];

      objc_msgSend_setColorPickerTarget_(self,_cmd,0);
      auVar2 = _objc_alloc_init(PTR__OBJC_CLASS___UIColorPickerViewController_0001df80);
      uVar1 = auVar2._0_8_;
      objc_msgSend_setDelegate_(uVar1,auVar2._8_8_,self);
      FUN_00005ef0();
      auVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setSelectedColor_(uVar1,auVar2._8_8_,auVar2._0_8_);
      _objc_release(auVar2._0_8_);
      objc_msgSend_setSupportsAlpha_(uVar1,extraout_x1,1);
      objc_msgSend_setTitle_(uVar1,extraout_x1_00,&cf_V);
      objc_msgSend_presentViewController_animated_completion_(self,extraout_x1_01,uVar1,1,0);
      _objc_release(uVar1);
      return;
}

// IMP 0x000086dc  types v24@0:8@16
- (void)sb_saveColorFromActivePicker:(id)sb_saveColorFromActivePicker {
      undefined8 uVar1;
      undefined8 uVar2;
      undefined auVar3 [16];

      uVar1 = _objc_retain(sb_saveColorFromActivePicker);
      auVar3 = objc_msgSend_colorPickerTarget(self);
      uVar2 = auVar3._8_8_;
      if (auVar3._0_8_ == 2) {
        objc_msgSend_sb_saveDesktopTextColor_(self,uVar2,uVar1);
      }
      else if (auVar3._0_8_ == 1) {
        objc_msgSend_sb_saveRunIndicatorColor_(self,uVar2,uVar1);
      }
      else {
        objc_msgSend_sb_saveVPNStatusBarColor_(self,uVar2,uVar1);
      }
      _objc_release(uVar1);
      return;
}

// IMP 0x0000874c  types v24@0:8@16
- (void)colorPickerViewControllerDidSelectColor:(id)colorPickerViewControllerDidSelectColor {
      undefined auVar1 [16];

      objc_msgSend_selectedColor(colorPickerViewControllerDidSelectColor);
      auVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_sb_saveColorFromActivePicker_(self,auVar1._8_8_,auVar1._0_8_);
      _objc_release(auVar1._0_8_);
      return;
}

// IMP 0x0000878c  types v24@0:8@16
- (void)colorPickerViewControllerDidFinish:(id)colorPickerViewControllerDidFinish {
      undefined8 extraout_x1;
      undefined auVar1 [16];

      objc_msgSend_selectedColor(colorPickerViewControllerDidFinish);
      auVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_sb_saveColorFromActivePicker_(self,auVar1._8_8_,auVar1._0_8_);
      _objc_release(auVar1._0_8_);
      objc_msgSend_setColorPickerTarget_(self,extraout_x1,0);
      return;
}

// IMP 0x000087d8  types v24@0:8@16
- (void)sb_saveVPNStatusBarColor:(id)sb_saveVPNStatusBarColor {
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

      auVar6 = _objc_retain(sb_saveVPNStatusBarColor);
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
                  (self,extraout_x1_00,&cf_chooseVPNStatusBarColor,&DAT_000167df,uVar2);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
      return;
}

// IMP 0x00008a7c  types v16@0:8
- (void)chooseRunIndicatorColor {
      undefined8 uVar1;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined auVar2 [16];

      objc_msgSend_setColorPickerTarget_(self,_cmd,1);
      auVar2 = _objc_alloc_init(PTR__OBJC_CLASS___UIColorPickerViewController_0001df80);
      uVar1 = auVar2._0_8_;
      objc_msgSend_setDelegate_(uVar1,auVar2._8_8_,self);
      FUN_00006154();
      auVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setSelectedColor_(uVar1,auVar2._8_8_,auVar2._0_8_);
      _objc_release(auVar2._0_8_);
      objc_msgSend_setSupportsAlpha_(uVar1,extraout_x1,1);
      objc_msgSend_setTitle_(uVar1,extraout_x1_00,&cf_c_yprb);
      objc_msgSend_presentViewController_animated_completion_(self,extraout_x1_01,uVar1,1,0);
      _objc_release(uVar1);
      return;
}

// IMP 0x00008b18  types v24@0:8@16
- (void)sb_saveRunIndicatorColor:(id)sb_saveRunIndicatorColor {
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

      auVar6 = _objc_retain(sb_saveRunIndicatorColor);
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
                  (self,extraout_x1_00,&cf_chooseRunIndicatorColor,&DAT_000167e1,uVar2);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
      return;
}

// IMP 0x00008d2c  types v16@0:8
- (void)chooseDesktopTextColor {
      undefined8 uVar1;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined8 extraout_x1_01;
      undefined auVar2 [16];

      objc_msgSend_setColorPickerTarget_(self,_cmd,2);
      auVar2 = _objc_alloc_init(PTR__OBJC_CLASS___UIColorPickerViewController_0001df80);
      uVar1 = auVar2._0_8_;
      objc_msgSend_setDelegate_(uVar1,auVar2._8_8_,self);
      FUN_000063b8();
      auVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setSelectedColor_(uVar1,auVar2._8_8_,auVar2._0_8_);
      _objc_release(auVar2._0_8_);
      objc_msgSend_setSupportsAlpha_(uVar1,extraout_x1,1);
      objc_msgSend_setTitle_(uVar1,extraout_x1_00,&cf_eW_rb);
      objc_msgSend_presentViewController_animated_completion_(self,extraout_x1_01,uVar1,1,0);
      _objc_release(uVar1);
      return;
}

// IMP 0x00008dc8  types v24@0:8@16
- (void)sb_saveDesktopTextColor:(id)sb_saveDesktopTextColor {
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

      auVar6 = _objc_retain(sb_saveDesktopTextColor);
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
                  (self,extraout_x1_00,&cf_chooseDesktopTextColor,&DAT_000167e6,uVar2);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      _objc_release(uVar2);
      return;
}

// IMP 0x00008fdc  types v16@0:8
- (void)respring {
      undefined8 uVar1;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined auVar2 [16];

      objc_msgSend_alertControllerWithTitle_message_preferredStyle_
                (PTR__OBJC_CLASS___UIAlertController_0001df60,_cmd,&cf_l,&cf_nx_l,1);
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
      objc_msgSend_presentViewController_animated_completion_(self,extraout_x1_00,uVar1,1,0);
      _objc_release(uVar1);
      return;
}

// IMP 0x00009228  types q16@0:8
- (long long)colorPickerTarget {
      return *(long_long *)(self + (long)_colorPickerTarget);
}

// IMP 0x00009238  types v24@0:8q16
- (void)setColorPickerTarget:(long long)setColorPickerTarget {
      *(long_long *)(self + (long)_colorPickerTarget) = setColorPickerTarget;
      return;
}

@end
