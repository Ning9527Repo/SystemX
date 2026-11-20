//
//  SystemBoxWhitelistController.m
//  Bodies are Ghidra decompilation of the original IMPs.
//  Every method carries the original address; hand-tune the C where needed.
//

#import "SystemBoxWhitelistController.h"

@implementation SystemBoxWhitelistController

// IMP 0x00009fc0  types @16@0:8
- (id)allApps {
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
      lVar2 = *(long *)(self + lVar29);
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
        uVar3 = *(undefined8 *)(self + lVar29);
        *(undefined **)(self + lVar29) = local_990;
        _objc_release(uVar3);
        lVar2 = *(long *)(self + lVar29);
        _cmd = extraout_x1_29;
      }
      if (*(long *)PTR____stack_chk_guard_000180e0 == local_70) {
        IVar26 = _objc_retainAutoreleaseReturnValue();
        return IVar26;
      }
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail(lVar2,_cmd);
}

// IMP 0x0000b63c  types @16@0:8
- (id)whitelistPreferenceKey {
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

// IMP 0x0000b6d0  types @16@0:8
- (id)filteredApps {
      long lVar1;
      undefined8 uVar2;
      ID IVar3;
      SEL extraout_x1;
      undefined8 uVar4;
      long lVar5;

      lVar5 = (long)_filteredApps;
      lVar1 = *(long *)(self + lVar5);
      if (lVar1 == 0) {
        objc_msgSend_allApps(self);
        uVar2 = _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)(self + lVar5);
        *(undefined8 *)(self + lVar5) = uVar2;
        _objc_release(uVar4);
        lVar1 = *(long *)(self + lVar5);
        _cmd = extraout_x1;
      }
      IVar3 = _objc_retainAutoreleaseReturnValue(lVar1,_cmd);
      return IVar3;
}

// IMP 0x0000b720  types @24@0:8@16
- (id)appsWithSelectedFirst:(id)appsWithSelectedFirst {
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
      local_18 = self;
      objc_msgSend_sortedArrayUsingComparator_(appsWithSelectedFirst,_cmd,&local_38);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = _objc_autoreleaseReturnValue();
      return IVar1;
}

// IMP 0x0000b950  types v16@0:8
- (void)viewDidLoad {
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
      local_40 = self;
      _objc_msgSendSuper2(&local_40,PTR_s_viewDidLoad_0001de58);
      objc_msgSend_whitelistPreferenceKey(self);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      FUN_0000bb40();
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      objc_msgSend_setWithArray_(PTR__OBJC_CLASS___NSMutableSet_0001dfa0,extraout_x1,uVar2);
      auVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setSelectedBundleIDs_(self,auVar3._8_8_,auVar3._0_8_);
      _objc_release(auVar3._0_8_);
      objc_msgSend_setWithArray_(PTR__OBJC_CLASS___NSSet_0001dfa8,extraout_x1_00,uVar2);
      auVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setPinnedBundleIDs_(self,auVar3._8_8_,auVar3._0_8_);
      _objc_release(auVar3._0_8_);
      objc_msgSend_systemGroupedBackgroundColor(PTR__OBJC_CLASS___UIColor_0001deb8);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_view(self);
      auVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setBackgroundColor_(auVar3._0_8_,auVar3._8_8_,uVar1);
      _objc_release(auVar3._0_8_);
      _objc_release(uVar1);
      objc_msgSend_setTitle_(self,extraout_x1_01,&cf__IN_vTUS);
      auVar3 = _objc_alloc(PTR__OBJC_CLASS___UISearchController_0001dfb0);
      auVar3 = objc_msgSend_initWithSearchResultsController_(auVar3._0_8_,auVar3._8_8_,0);
      objc_msgSend_setSearchController_(self,auVar3._8_8_,auVar3._0_8_);
      _objc_release(auVar3._0_8_);
      objc_msgSend_searchController(self);
      auVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setSearchResultsUpdater_(auVar3._0_8_,auVar3._8_8_,self);
      _objc_release(auVar3._0_8_);
      objc_msgSend_searchController(self);
      auVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setObscuresBackgroundDuringPresentation_(auVar3._0_8_,auVar3._8_8_,0);
      _objc_release(auVar3._0_8_);
      objc_msgSend_searchController(self);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_navigationItem(self);
      auVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setSearchController_(auVar3._0_8_,auVar3._8_8_,uVar1);
      _objc_release(auVar3._0_8_);
      _objc_release(uVar1);
      objc_msgSend_setDefinesPresentationContext_(self,extraout_x1_02,1);
      _objc_release(uVar2);
      return;
}

// IMP 0x0000bc10  types v20@0:8B16
- (void)viewWillAppear:(BOOL)viewWillAppear {
      undefined8 uVar1;
      undefined8 uVar2;
      undefined8 extraout_x1;
      undefined8 extraout_x1_00;
      undefined auVar3 [16];
      ID local_40;
      undefined *puStack_38;

      puStack_38 = PTR_PTR_0001e018;
      local_40 = self;
      _objc_msgSendSuper2(&local_40,PTR_s_viewWillAppear__0001de60,viewWillAppear);
      objc_msgSend_whitelistPreferenceKey(self);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      FUN_0000bb40();
      uVar2 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      objc_msgSend_setWithArray_(PTR__OBJC_CLASS___NSMutableSet_0001dfa0,extraout_x1,uVar2);
      auVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setSelectedBundleIDs_(self,auVar3._8_8_,auVar3._0_8_);
      _objc_release(auVar3._0_8_);
      objc_msgSend_setWithArray_(PTR__OBJC_CLASS___NSSet_0001dfa8,extraout_x1_00,uVar2);
      auVar3 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setPinnedBundleIDs_(self,auVar3._8_8_,auVar3._0_8_);
      _objc_release(auVar3._0_8_);
      objc_msgSend_reloadSpecifiers(self);
      _objc_release(uVar2);
      return;
}

// IMP 0x0000bcf4  types v24@0:8@16
- (void)updateSearchResultsForSearchController:(id)updateSearchResultsForSearchController {
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

      objc_msgSend_searchBar(updateSearchResultsForSearchController);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_text();
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar4 = objc_msgSend_length(uVar3);
      puVar1 = PTR__OBJC_CLASS___NSPredicate_0001dfb8;
      if (lVar4 == 0) {
        objc_msgSend_allApps(self);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        uVar2 = auVar5._0_8_;
        objc_msgSend_setFilteredApps_(self,auVar5._8_8_,uVar2);
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
        objc_msgSend_allApps(self);
        auVar5 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_filteredArrayUsingPredicate_(auVar5._0_8_,auVar5._8_8_,uVar2);
        auVar6 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_setFilteredApps_(self,auVar6._8_8_,auVar6._0_8_);
        _objc_release(auVar6._0_8_);
        _objc_release(auVar5._0_8_);
        _objc_release(uVar2);
        uVar2 = local_48;
      }
      _objc_release(uVar2);
      objc_msgSend_reloadSpecifiers(self);
      _objc_release(uVar3);
      return;
}

// IMP 0x0000beec  types @16@0:8
- (id)specifiers {
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
      objc_msgSend_filteredApps(self);
      auVar11 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_appsWithSelectedFirst_(self,auVar11._8_8_,auVar11._0_8_);
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
                      (PTR__OBJC_CLASS___PSSpecifier_0001dfc0,auVar13._8_8_,auVar13._0_8_,self,puVar1
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
      uVar4 = *(undefined8 *)(self + lVar7);
      *(undefined8 *)(self + lVar7) = uVar3;
      uVar3 = _objc_retain();
      _objc_release(uVar4);
      IVar5 = _objc_retainAutoreleaseReturnValue(*(undefined8 *)(self + lVar7));
      _objc_release(uVar3);
      if (*(long *)PTR____stack_chk_guard_000180e0 == local_70) {
        return IVar5;
      }
                        /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
}

// IMP 0x0000c164  types @24@0:8@16
- (id)whitelistValue:(id)whitelistValue {
      undefined *puVar1;
      undefined8 uVar2;
      undefined8 uVar3;
      ID IVar4;
      undefined auVar5 [16];
      undefined auVar6 [16];

      objc_msgSend_propertyForKey_(whitelistValue,_cmd,&cf_bundleID);
      uVar2 = _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSNumber_0001df30;
      objc_msgSend_selectedBundleIDs(self);
      auVar5 = _objc_retainAutoreleasedReturnValue();
      auVar6 = objc_msgSend_containsObject_(auVar5._0_8_,auVar5._8_8_,uVar2);
      objc_msgSend_numberWithBool_(puVar1,auVar6._8_8_,auVar6._0_8_);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      _objc_release(auVar5._0_8_);
      _objc_release(uVar2);
      IVar4 = _objc_autoreleaseReturnValue(uVar3);
      return IVar4;
}

// IMP 0x0000c1f8  types v32@0:8@16@24
- (void)setWhitelistValue:(id)setWhitelistValue specifier:(id)specifier {
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

      auVar9 = _objc_retain(setWhitelistValue);
      objc_msgSend_propertyForKey_(specifier,auVar9._8_8_,&cf_bundleID);
      lVar2 = _objc_retainAutoreleasedReturnValue();
      if (lVar2 != 0) {
        iVar1 = objc_msgSend_boolValue(auVar9._0_8_);
        objc_msgSend_selectedBundleIDs(self);
        auVar10 = _objc_retainAutoreleasedReturnValue();
        if (iVar1 == 0) {
          objc_msgSend_removeObject_(auVar10._0_8_,auVar10._8_8_,lVar2);
        }
        else {
          objc_msgSend_addObject_();
        }
        _objc_release(auVar10._0_8_);
        objc_msgSend_selectedBundleIDs(self);
        uVar3 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_allObjects();
        uVar4 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_whitelistPreferenceKey(self);
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

// IMP 0x0000c3fc  types @16@0:8
- (id)selectedBundleIDs {
      return *(ID *)(self + (long)_selectedBundleIDs);
}

// IMP 0x0000c40c  types v24@0:8@16
- (void)setSelectedBundleIDs:(id)setSelectedBundleIDs {
      _objc_storeStrong(self + (long)_selectedBundleIDs,setSelectedBundleIDs);
      return;
}

// IMP 0x0000c420  types @16@0:8
- (id)pinnedBundleIDs {
      return *(ID *)(self + (long)_pinnedBundleIDs);
}

// IMP 0x0000c430  types v24@0:8@16
- (void)setPinnedBundleIDs:(id)setPinnedBundleIDs {
      _objc_storeStrong(self + (long)_pinnedBundleIDs,setPinnedBundleIDs);
      return;
}

// IMP 0x0000c444  types v24@0:8@16
- (void)setAllApps:(id)setAllApps {
      _objc_storeStrong(self + (long)_allApps,setAllApps);
      return;
}

// IMP 0x0000c458  types v24@0:8@16
- (void)setFilteredApps:(id)setFilteredApps {
      _objc_storeStrong(self + (long)_filteredApps,setFilteredApps);
      return;
}

// IMP 0x0000c46c  types @16@0:8
- (id)searchController {
      return *(ID *)(self + (long)_searchController);
}

// IMP 0x0000c47c  types v24@0:8@16
- (void)setSearchController:(id)setSearchController {
      _objc_storeStrong(self + (long)_searchController,setSearchController);
      return;
}

// IMP 0x0000c490  types v16@0:8
- (void).cxx_destruct {
      _objc_storeStrong(self + (long)_searchController,0);
      _objc_storeStrong(self + (long)_filteredApps,0);
      _objc_storeStrong(self + (long)_allApps,0);
      _objc_storeStrong(self + (long)_pinnedBundleIDs,0);
      _objc_storeStrong(self + (long)_selectedBundleIDs,0);
      return;
}

@end
