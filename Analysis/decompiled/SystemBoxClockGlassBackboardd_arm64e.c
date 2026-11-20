// SystemBoxClockGlassBackboardd  (arm64e)
// ===== 0x00008000  FUN_00008000

void ** FUN_00008000(void **param_1)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)param_1[2];
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return param_1;
}



// ===== 0x00008004  FUN_00008004

void FUN_00008004(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_0001c350;
  DAT_0001c350 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_0001c358;
  DAT_0001c358 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_0001c360;
  DAT_0001c360 = 0;
  _objc_release(uVar1);
  uVar1 = DAT_0001c368;
  DAT_0001c368 = 0;
  _objc_release(uVar1);
  if (DAT_0001c208 != -1) {
    _munmap(DAT_0001c208,DAT_0001c370);
    DAT_0001c208 = -1;
    DAT_0001c370 = 0;
  }
  return;
}



// ===== 0x00008090  FUN_00008090

void FUN_00008090(void)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  dispatch_time_t dVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  FILE *pFVar11;
  long lVar12;
  char *pcVar13;
  undefined8 extraout_x1;
  ulong uVar14;
  undefined auVar15 [16];
  undefined *local_4a8;
  undefined8 local_4a0;
  code *local_498;
  undefined *puStack_490;
  long local_488;
  size_t local_480;
  long lStack_478;
  ulong local_470;
  undefined8 local_468;
  long local_460;
  ulong uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_000182a8;
  uVar4 = _objc_autoreleasePoolPush();
  lVar5 = _opendir("/var/mobile/Library/Accessibility");
  if (lVar5 != 0) {
    lVar6 = _readdir();
    while (lVar6 != 0) {
      iVar2 = _strncmp((char *)(lVar6 + 0x15),"clockglass",10);
      if (iVar2 == 0) {
        _bzero(&local_460,0x400);
        _snprintf((char *)&local_460,0x400,"%s/%s");
        _unlink((char *)&local_460);
      }
      lVar6 = _readdir(lVar5);
    }
    _closedir(lVar5);
  }
  local_460 = 0;
  uStack_458 = 0;
  local_480 = 0x10;
  local_60 = 0x1500000001;
  iVar2 = _sysctl((int *)&local_60,2,&local_460,&local_480,(void *)0x0,0);
  lVar5 = local_460;
  if (iVar2 != 0) {
    lVar5 = 0;
  }
  local_460 = 0;
  uStack_458 = 0;
  iVar2 = _clock_gettime(6,&local_460);
  uVar14 = 0;
  if (iVar2 == 0) {
    uVar14 = local_460 * 1000 + uStack_458 / 1000000;
  }
  lStack_478 = 0;
  local_480 = 0;
  local_468 = 0;
  local_470 = 0;
  iVar2 = FUN_00009344(&local_480);
  if (((iVar2 == 0) || (lVar5 == 0)) || (lStack_478 != lVar5)) {
    local_470 = 0;
    local_468 = 0;
    local_480 = DAT_00010150;
    lStack_478 = lVar5;
  }
  else if (local_468._4_4_ != 0) goto LAB_000086b4;
  if (((local_470 == 0) || (uVar14 < local_470)) || (60000 < uVar14 - local_470)) {
    local_468 = CONCAT44(local_468._4_4_,1);
  }
  else {
    uVar3 = (int)local_468 + 1;
    local_468 = CONCAT44(local_468._4_4_,uVar3);
    if (2 < uVar3) {
      local_468 = CONCAT44(1,uVar3);
      local_470 = uVar14;
      FUN_000093d0(&local_480);
      iVar2 = _open("/var/mobile/Library/Accessibility/systembox-clockglass-safemode.log",0x1000209)
      ;
      if (-1 < iVar2) {
        uStack_3b8 = 0;
        local_3c0 = 0;
        uStack_3a8 = 0;
        uStack_3b0 = 0;
        uStack_3d8 = 0;
        local_3e0 = 0;
        uStack_3c8 = 0;
        uStack_3d0 = 0;
        uStack_3f8 = 0;
        local_400 = 0;
        uStack_3e8 = 0;
        uStack_3f0 = 0;
        uStack_418 = 0;
        local_420 = 0;
        uStack_408 = 0;
        uStack_410 = 0;
        uStack_438 = 0;
        local_440 = 0;
        uStack_428 = 0;
        uStack_430 = 0;
        uStack_458 = 0;
        local_460 = 0;
        uStack_448 = 0;
        local_450 = 0;
        uVar3 = _snprintf((char *)&local_460,0xc0,
                          "clockglass disabled its backboardd hooks after %u rapid starts\n");
        if (0 < (int)uVar3) {
          _write(iVar2,&local_460,(ulong)uVar3);
        }
        _close(iVar2);
      }
      iVar2 = _open("/var/mobile/Library/Accessibility/systembox-clockglass-backboardd-alert",
                    0x1000601);
      if (-1 < iVar2) {
        iVar2 = _close(iVar2);
      }
      uVar7 = _CFNotificationCenterGetDarwinNotifyCenter(iVar2);
      _CFNotificationCenterPostNotification
                (uVar7,&cf_com_wkk_systembox_clockglass_BackboarddSafeMode,0,0,1);
      goto LAB_000086b4;
    }
  }
  local_470 = uVar14;
  FUN_000093d0(&local_480);
  dVar8 = _dispatch_time(0,45000000000);
  _dispatch_get_global_queue(0x11,0);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  local_4a8 = PTR___NSConcreteStackBlock_00018290;
  local_4a0 = DAT_00010158;
  local_498 = FUN_000094cc;
  puStack_490 = &DAT_000182b0;
  local_488 = lVar5;
  _dispatch_after(dVar8,uVar7,&local_4a8);
  _objc_release(uVar7);
  puVar1 = PTR__OBJC_CLASS___NSDictionary_0001c1b0;
  FUN_000086f4();
  auVar15 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_dictionaryWithContentsOfFile_(puVar1,auVar15._8_8_,auVar15._0_8_);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar15._0_8_);
  objc_msgSend_objectForKeyedSubscript_(uVar7,extraout_x1,&cf_Debug_Logging_Enabled);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  uVar10 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
  uVar14 = _objc_opt_isKindOfClass(uVar9,uVar10);
  if ((uVar14 & 1) == 0) {
    _gLGBackboardDebugLogging = '\0';
  }
  else {
    _gLGBackboardDebugLogging = objc_msgSend_boolValue(uVar9);
  }
  _objc_release(uVar9);
  _objc_release(uVar7);
  if ((_gLGBackboardDebugLogging != '\0') &&
     (pFVar11 = _fopen("/var/mobile/Library/Accessibility/systembox-clockglass.log","w"),
     pFVar11 != (FILE *)0x0)) {
    _fclose(pFVar11);
  }
  objc_msgSend_processInfo(PTR__OBJC_CLASS___NSProcessInfo_0001c1c0);
  lVar5 = _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 0) {
    local_460 = 0;
    uStack_458 = 0;
    local_450 = 0;
  }
  else {
    objc_msgSend_operatingSystemVersion(lVar5);
  }
  _objc_release(lVar5);
  DAT_0001c3c8 = 0;
  DAT_0001c3c9 = 0;
  DAT_0001c3ca = 0;
  DAT_0001c3cb = local_460 < 0xf;
  FUN_00008748("===== LiquidGlass (backboardd) on iOS %ld.%ld.%ld =====");
  DAT_0001c210 = 0x14;
  if (0xe < local_460) {
    DAT_0001c210 = 0x18;
  }
  uVar7 = 0x108;
  if (local_460 < 0x12 && local_460 != 0xf) {
    uVar7 = 0xf8;
  }
  DAT_0001c218 = 0x60;
  if (local_460 < 0x11) {
    DAT_0001c218 = 0x58;
  }
  DAT_0001c228 = 0x110;
  if (local_460 != 0x10) {
    DAT_0001c228 = uVar7;
  }
  DAT_0001c220 = DAT_0001c218;
  FUN_00008748(
              "init: QuartzCore layout filterAtom=%#lx sourceTexture=%#lx destinationTexture=%#lx contextDestination=%#lx"
              );
  DAT_0001c3cc = 1;
  FUN_00008748("init: architecture=%s render registration=%s%s");
  iVar2 = _LGSymResolverInit();
  if (iVar2 == 0) {
    pcVar13 = "init: LGSymResolverInit failed, QuartzCore not loaded yet?";
  }
  else {
    lVar5 = _LGResolve_StopEncoders();
    FUN_00008858("stop_encoders",lVar5);
    lVar6 = _LGResolve_CAInternAtomWithCString();
    FUN_00008858("CAInternAtomWithCString",lVar6);
    lVar12 = _LGResolve_AddFilter();
    FUN_00008858("add_filter",lVar12);
    DAT_0001c3d0 = _LGSymMakeCallable(lVar5);
    DAT_0001c3d8 = _LGSymMakeCallable(lVar6);
    DAT_0001c3e0 = _LGSymMakeCallable(lVar12);
    FUN_00008748("init: stopEncoders=%p internAtom=%p addFilter=%p");
    pcVar13 = "init: required symbol(s) unresolved on this build, not activating (no fallback)";
    if (((lVar5 != 0) && (lVar6 != 0)) &&
       (pcVar13 = "init: required symbol(s) unresolved on this build, not activating (no fallback)",
       lVar12 != 0)) {
      DAT_0001c230 = _LGResolve_MetalCmdBufOffset
                               (
                               "init: required symbol(s) unresolved on this build, not activating (no fallback)"
                               );
      if (DAT_0001c230 < 0) {
        pcVar13 = 
        "init: command-buffer offset unresolved, filter registers but custom render pass is skipped"
        ;
      }
      else {
        pcVar13 = "init: MetalContext command-buffer offset = %#lx";
      }
      FUN_00008748(pcVar13);
      DAT_0001c3e8 = (undefined8 *)operator_new(0x28);
      DAT_0001c3e8[1] = 0;
      *DAT_0001c3e8 = 0;
      DAT_0001c3e8[3] = 0;
      DAT_0001c3e8[2] = 0;
      *(undefined4 *)(DAT_0001c3e8 + 4) = 0x3f800000;
      FUN_000088a8();
      pcVar13 = "ready";
    }
  }
  FUN_00008748(pcVar13);
LAB_000086b4:
  _objc_autoreleasePoolPop(uVar4);
  if (*(long *)PTR____stack_chk_guard_000182a8 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x000086f4  FUN_000086f4

void FUN_000086f4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  if (DAT_0001c3f8 != -1) {
    _dispatch_once(&DAT_0001c3f8,&PTR___NSConcreteGlobalBlock_000182f0);
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x872c);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_retainAutoreleaseReturnValue(DAT_0001c3f0);
  return;
}



// ===== 0x00008748  FUN_00008748

void FUN_00008748(FILE *param_1)

{
  uint uVar1;
  FILE *pFVar2;
  tm *ptVar3;
  timeval tStack_68;
  char acStack_58 [32];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_000182a8;
  pFVar2 = param_1;
  if ((_gLGBackboardDebugLogging != '\0') &&
     (pFVar2 = _fopen("/var/mobile/Library/Accessibility/systembox-clockglass.log","a"),
     pFVar2 != (FILE *)0x0)) {
    _gettimeofday(&tStack_68,(void *)0x0);
    ptVar3 = _localtime(&tStack_68.tv_sec);
    _strftime(acStack_58,0x20,"%H:%M:%S",ptVar3);
    _fprintf(pFVar2,"[LG %s.%03d] ");
    _vfprintf(pFVar2,(char *)param_1,&stack0x00000000);
    _fputc(10,pFVar2);
    uVar1 = _fclose(pFVar2);
    pFVar2 = (FILE *)(ulong)uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_000182a8 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(pFVar2);
}



// ===== 0x00008858  FUN_00008858

long FUN_00008858(undefined8 param_1,long param_2)

{
  char *pcVar1;
  
  if (param_2 == 0) {
    pcVar1 = "resolve %s: FAILED, build not supported by scanner (no fallback)";
  }
  else {
    pcVar1 = "resolve %s: scanner -> %p";
  }
  FUN_00008748(pcVar1);
  return param_2;
}



// ===== 0x000088a8  FUN_000088a8

void FUN_000088a8(void)

{
  undefined8 *puVar1;
  code *UNRECOVERED_JUMPTABLE_00;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  dispatch_time_t dVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  char *pcVar22;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined4 uVar23;
  undefined *puVar24;
  ulong unaff_x30;
  undefined auVar25 [16];
  int local_b0 [2];
  int local_a8 [2];
  int local_a0 [2];
  int local_98 [2];
  int local_90;
  int local_8c;
  undefined auStack_88 [8];
  int *local_80 [2];
  
  plVar6 = (long *)_LGResolve_FilterTableSlot();
  if (plVar6 == (long *)0x0) {
    pcVar22 = "registerCustomFilter: could not resolve filter_table, aborting (no fallback)";
    goto LAB_00008978;
  }
  if ((DAT_0001c400 & 1) != 0) {
    return;
  }
  plVar7 = (long *)_LGResolve_GaussianCtxSlot();
  if (plVar7 == (long *)0x0) {
    pcVar22 = "registerCustomFilter: could not resolve gaussian context, aborting (no fallback)";
    goto LAB_00008978;
  }
  DAT_0001c408 = (undefined8 *)_LGSymStripData(*plVar7);
  FUN_00008748("registerCustomFilter: g_gaussCtxValue = %p (raw from %p)");
  puVar1 = DAT_0001c408;
  if (DAT_0001c408 == (undefined8 *)0x0) {
    pcVar22 = "registerCustomFilter: gaussian vtable not found";
    goto LAB_00008978;
  }
  FUN_00008748("registerCustomFilter: gaussian vtable @ %p");
  uVar2 = _LGResolve_EdgeInfoVtableSlot(puVar1,0x16);
  if (0x15 < uVar2) {
    pcVar22 = "registerCustomFilter: could not resolve edge-info vtable slot (got %d), aborting";
    goto LAB_00008b34;
  }
  FUN_00008748("registerCustomFilter: edge-info vtable slot = %d");
  uVar8 = _LGResolve_RenderVtableSlot(puVar1,0x16);
  uVar3 = (uint)uVar8;
  if ((int)uVar3 < 0) {
    if ((DAT_0001c3cb != '\0') && (uVar8 = (ulong)(uVar2 - 3), 2 < uVar2)) {
      _LGSymStripCode(puVar1[uVar8]);
      iVar5 = _LGSymAddressInQuartzCoreImage();
      if (iVar5 != 0) {
        FUN_00008748("registerCustomFilter: iOS 14 direct render fallback vtable[%d]=%p");
        FUN_00008748("registerCustomFilter: render vtable slot = %d");
        goto LAB_00008a4c;
      }
    }
  }
  else if (uVar3 < 0x16) {
    FUN_00008748("registerCustomFilter: render vtable slot = %d");
    if (uVar2 == uVar3) {
      pcVar22 = "registerCustomFilter: render and edge-info resolved to the same slot, aborting";
      goto LAB_00008978;
    }
LAB_00008a4c:
    if ((DAT_0001c3cc == '\x01') && ((DAT_0001c410 & 1) == 0)) {
      uVar9 = FUN_00009578(*puVar1,puVar1[uVar2],puVar1[uVar8 & 0xffffffff]);
      if ((uVar9 & 1) == 0) {
        pcVar22 = "registerCustomFilter: Gaussian hooks install failed";
        goto LAB_00008978;
      }
      DAT_0001c410 = 1;
      FUN_00008748("registerCustomFilter: Gaussian hooks installed before filter registration");
    }
    if (*plVar6 == 0) {
      FUN_00008748("registerCustomFilter: filter_table null, retrying in 250ms");
      dVar11 = _dispatch_time(0,250000000);
      _dispatch_get_global_queue(0x11,0);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _dispatch_after(dVar11,uVar10,&PTR___NSConcreteGlobalBlock_00018310);
      if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
        _objc_release(uVar10);
        return;
      }
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0xc471,0x8bdc);
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    if ((DAT_0001c3d8 != (code *)0x0) && (DAT_0001c3e0 != 0)) {
      uVar10 = (*DAT_0001c3d8)("com.wkk.systembox.clockglass.refraction");
      (*DAT_0001c3d8)("gaussianBlur");
      FUN_00008748("registerCustomFilter: atom(\'%s\')=0x%x  gaussian=0x%x  collision=%s");
      if (DAT_0001c3cc == '\x01') {
        if ((DAT_0001c410 & 1) != 0) {
LAB_00008d38:
          FUN_0000ad24();
          DAT_0001c448 = (int)uVar10;
          FUN_0000ad74(uVar10,plVar7);
          objc_msgSend_stringWithUTF8String_
                    (PTR__OBJC_CLASS___NSString_0001c1c8,extraout_x1,
                     "com.wkk.systembox.clockglass.refraction");
          auVar25 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_stringByAppendingString_(auVar25._0_8_,auVar25._8_8_,&cf__refresh);
          uVar13 = _objc_retainAutoreleasedReturnValue();
          _objc_release(auVar25._0_8_);
          UNRECOVERED_JUMPTABLE_00 = DAT_0001c3d8;
          uVar13 = _objc_retainAutorelease(uVar13);
          objc_msgSend_UTF8String();
          local_8c = (*UNRECOVERED_JUMPTABLE_00)();
          if (local_8c != 0) {
            local_80[0] = &local_8c;
            lVar14 = FUN_0000d580(&DAT_0001c3a0,&local_8c,&DAT_000101d0,local_80,&local_90);
            *(undefined4 *)(lVar14 + 0x14) = 0;
            *(undefined *)(lVar14 + 0x18) = 0;
            FUN_0000ad74(local_8c,plVar7);
          }
          lVar14 = 1;
          do {
            puVar24 = (&PTR_s_com_wkk_systembox_clockglass_ref_00018330)[lVar14 * 10];
            auVar25 = (*DAT_0001c3d8)(puVar24);
            uVar15 = auVar25._8_8_;
            iVar5 = auVar25._0_4_;
            (&DAT_0001c448)[lVar14 * 0x14] = iVar5;
            if (iVar5 != 0 && iVar5 != (int)uVar10) {
              FUN_0000ad74(auVar25._0_8_,plVar7);
              uVar15 = extraout_x1_00;
            }
            objc_msgSend_stringWithUTF8String_(PTR__OBJC_CLASS___NSString_0001c1c8,uVar15,puVar24);
            auVar25 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_stringByAppendingString_(auVar25._0_8_,auVar25._8_8_,&cf__refresh);
            uVar15 = _objc_retainAutoreleasedReturnValue();
            _objc_release(auVar25._0_8_);
            UNRECOVERED_JUMPTABLE_00 = DAT_0001c3d8;
            uVar16 = _objc_retainAutorelease(uVar15);
            objc_msgSend_UTF8String();
            local_90 = (*UNRECOVERED_JUMPTABLE_00)();
            uVar23 = (undefined4)lVar14;
            uVar15 = extraout_x1_01;
            if (local_90 != 0) {
              local_80[0] = &local_90;
              lVar17 = FUN_0000d580(&DAT_0001c3a0,&local_90,&DAT_000101d0,local_80,local_98);
              *(undefined4 *)(lVar17 + 0x14) = uVar23;
              *(undefined *)(lVar17 + 0x18) = 0;
              FUN_0000ad74(local_90,plVar7);
              uVar15 = extraout_x1_02;
            }
            objc_msgSend_stringWithUTF8String_(PTR__OBJC_CLASS___NSString_0001c1c8,uVar15,puVar24);
            auVar25 = _objc_retainAutoreleasedReturnValue();
            objc_msgSend_stringByAppendingString_(auVar25._0_8_,auVar25._8_8_,&cf__dark);
            uVar15 = _objc_retainAutoreleasedReturnValue();
            _objc_release(auVar25._0_8_);
            UNRECOVERED_JUMPTABLE_00 = DAT_0001c3d8;
            uVar18 = _objc_retainAutorelease(uVar15);
            objc_msgSend_UTF8String();
            auVar25 = (*UNRECOVERED_JUMPTABLE_00)();
            uVar15 = auVar25._8_8_;
            iVar4 = auVar25._0_4_;
            (&DAT_0001cd48)[lVar14] = iVar4;
            if (iVar4 != 0 && iVar4 != iVar5) {
              FUN_0000ad74(auVar25._0_8_,plVar7);
              uVar15 = extraout_x1_03;
            }
            objc_msgSend_stringByAppendingString_(uVar18,uVar15,&cf__refresh);
            _objc_retainAutoreleasedReturnValue();
            UNRECOVERED_JUMPTABLE_00 = DAT_0001c3d8;
            uVar15 = _objc_retainAutorelease();
            objc_msgSend_UTF8String();
            local_98[0] = (*UNRECOVERED_JUMPTABLE_00)();
            if (local_98[0] != 0) {
              local_80[0] = local_98;
              lVar17 = FUN_0000d580(&DAT_0001c3a0,local_98,&DAT_000101d0,local_80,local_a0);
              *(undefined4 *)(lVar17 + 0x14) = uVar23;
              *(undefined *)(lVar17 + 0x18) = 1;
              FUN_0000ad74(local_98[0],plVar7);
            }
            iVar5 = _strcmp((&PTR_s_Default_00018338)[lVar14 * 10],"Clock");
            if (iVar5 != 0) {
              iVar5 = 0;
              do {
                objc_msgSend_stringWithUTF8String_(PTR__OBJC_CLASS___NSString_0001c1c8);
                auVar25 = _objc_retainAutoreleasedReturnValue();
                objc_msgSend_stringByAppendingFormat_(auVar25._0_8_,auVar25._8_8_,&cf__r_d);
                uVar19 = _objc_retainAutoreleasedReturnValue();
                _objc_release(auVar25._0_8_);
                UNRECOVERED_JUMPTABLE_00 = DAT_0001c3d8;
                uVar20 = _objc_retainAutorelease(uVar19);
                objc_msgSend_UTF8String();
                local_a0[0] = (*UNRECOVERED_JUMPTABLE_00)();
                uVar19 = extraout_x1_04;
                if (local_a0[0] != 0) {
                  local_80[0] = local_a0;
                  lVar17 = FUN_0000d9e8(&DAT_0001c378,local_a0,&DAT_000101d0,local_80,local_a8);
                  *(undefined4 *)(lVar17 + 0x14) = uVar23;
                  *(float *)(lVar17 + 0x18) = (float)iVar5 * 0.03125;
                  *(undefined *)(lVar17 + 0x1c) = 0;
                  FUN_0000ad74(local_a0[0],plVar7);
                  objc_msgSend_stringByAppendingString_(uVar20,extraout_x1_05,&cf__refresh);
                  _objc_retainAutoreleasedReturnValue();
                  UNRECOVERED_JUMPTABLE_00 = DAT_0001c3d8;
                  uVar19 = _objc_retainAutorelease();
                  objc_msgSend_UTF8String();
                  local_a8[0] = (*UNRECOVERED_JUMPTABLE_00)();
                  if (local_a8[0] != 0) {
                    local_80[0] = local_a8;
                    lVar17 = FUN_0000d9e8(&DAT_0001c378,local_a8,&DAT_000101d0,local_80,local_b0);
                    *(undefined4 *)(lVar17 + 0x14) = uVar23;
                    *(float *)(lVar17 + 0x18) = (float)iVar5 * 0.03125;
                    *(undefined *)(lVar17 + 0x1c) = 0;
                    FUN_0000ad74(local_a8[0],plVar7);
                  }
                  _objc_release(uVar19);
                  uVar19 = extraout_x1_06;
                }
                objc_msgSend_stringByAppendingString_(uVar20,uVar19,&cf__dark);
                _objc_retainAutoreleasedReturnValue();
                UNRECOVERED_JUMPTABLE_00 = DAT_0001c3d8;
                uVar19 = _objc_retainAutorelease();
                objc_msgSend_UTF8String();
                local_a8[0] = (*UNRECOVERED_JUMPTABLE_00)();
                if (local_a8[0] != 0) {
                  local_80[0] = local_a8;
                  lVar17 = FUN_0000d9e8(&DAT_0001c378,local_a8,&DAT_000101d0,local_80,local_b0);
                  *(undefined4 *)(lVar17 + 0x14) = uVar23;
                  *(float *)(lVar17 + 0x18) = (float)iVar5 * 0.03125;
                  *(undefined *)(lVar17 + 0x1c) = 1;
                  FUN_0000ad74(local_a8[0],plVar7);
                  objc_msgSend_stringByAppendingString_(uVar19,extraout_x1_07,&cf__refresh);
                  _objc_retainAutoreleasedReturnValue();
                  UNRECOVERED_JUMPTABLE_00 = DAT_0001c3d8;
                  uVar21 = _objc_retainAutorelease();
                  objc_msgSend_UTF8String();
                  local_b0[0] = (*UNRECOVERED_JUMPTABLE_00)();
                  if (local_b0[0] != 0) {
                    local_80[0] = local_b0;
                    lVar17 = FUN_0000d9e8(&DAT_0001c378,local_b0,&DAT_000101d0,local_80,auStack_88);
                    *(undefined4 *)(lVar17 + 0x14) = uVar23;
                    *(float *)(lVar17 + 0x18) = (float)iVar5 * 0.03125;
                    *(undefined *)(lVar17 + 0x1c) = 1;
                    FUN_0000ad74(local_b0[0],plVar7);
                  }
                  _objc_release(uVar21);
                }
                _objc_release(uVar19);
                _objc_release(uVar20);
                iVar5 = iVar5 + 1;
              } while (iVar5 != 0x11);
            }
            _objc_release(uVar15);
            _objc_release(uVar18);
            _objc_release(uVar16);
            lVar14 = lVar14 + 1;
          } while (lVar14 != 0x1d);
          DAT_0001c400 = 1;
          FUN_00008748(
                      "registerCustomFilter: done mode=%s descriptor=%p renderSlot=%d atom=0x%x hosts=%d"
                      );
          uVar10 = _CFNotificationCenterGetDarwinNotifyCenter();
          _CFNotificationCenterPostNotification
                    (uVar10,&cf_com_wkk_systembox_clockglass_ParametersReloaded,0,0,1);
          FUN_00008748("registerCustomFilter: registration-ready notification posted");
          _objc_release(uVar13);
          return;
        }
        pcVar22 = "registerCustomFilter: Gaussian hooks unexpectedly missing";
      }
      else {
        DAT_0001c418 = _LGSymMakeCallable(puVar1[uVar8 & 0xffffffff]);
        DAT_0001c420 = _LGSymMakeCallable(puVar1[uVar2]);
        FUN_00008748("registerCustomFilter: g_origGaussR13 = %p");
        lVar14 = DAT_0001c420;
        FUN_00008748("registerCustomFilter: g_origGaussEdgeInfo = %p");
        if ((DAT_0001c418 != 0) && (DAT_0001c420 != 0)) {
          puVar12 = (undefined8 *)_mmap(0,0xb0,3,&DAT_00001002,0xffffffff,0,in_x6,in_x7,lVar14);
          DAT_0001c428 = puVar12;
          if (puVar12 == (undefined8 *)0xffffffffffffffff) {
            ___error();
            FUN_00008748("registerCustomFilter: vtable mmap failed errno=%d");
          }
          else {
            uVar15 = puVar1[1];
            uVar13 = *puVar1;
            uVar16 = puVar1[2];
            uVar19 = puVar1[5];
            uVar18 = puVar1[4];
            puVar12[3] = puVar1[3];
            puVar12[2] = uVar16;
            puVar12[5] = uVar19;
            puVar12[4] = uVar18;
            puVar12[1] = uVar15;
            *puVar12 = uVar13;
            uVar15 = puVar1[7];
            uVar13 = puVar1[6];
            uVar18 = puVar1[9];
            uVar16 = puVar1[8];
            uVar19 = puVar1[10];
            uVar21 = puVar1[0xd];
            uVar20 = puVar1[0xc];
            puVar12[0xb] = puVar1[0xb];
            puVar12[10] = uVar19;
            puVar12[0xd] = uVar21;
            puVar12[0xc] = uVar20;
            puVar12[7] = uVar15;
            puVar12[6] = uVar13;
            puVar12[9] = uVar18;
            puVar12[8] = uVar16;
            uVar15 = puVar1[0xf];
            uVar13 = puVar1[0xe];
            uVar18 = puVar1[0x11];
            uVar16 = puVar1[0x10];
            uVar19 = puVar1[0x12];
            uVar21 = puVar1[0x15];
            uVar20 = puVar1[0x14];
            puVar12[0x13] = puVar1[0x13];
            puVar12[0x12] = uVar19;
            puVar12[0x15] = uVar21;
            puVar12[0x14] = uVar20;
            puVar12[0xf] = uVar15;
            puVar12[0xe] = uVar13;
            puVar12[0x11] = uVar18;
            puVar12[0x10] = uVar16;
            uVar13 = _LGSymStripCode(FUN_00009ba4);
            *DAT_0001c428 = uVar13;
            uVar13 = _LGSymStripCode(FUN_00009be8);
            DAT_0001c428[uVar2] = uVar13;
            uVar13 = _LGSymStripCode(FUN_00009c00);
            DAT_0001c428[uVar8 & 0xffffffff] = uVar13;
            plVar7 = (long *)_mmap(0,0x100,3,&DAT_00001002,0xffffffff,0);
            DAT_0001c430 = plVar7;
            if (plVar7 != (long *)0xffffffffffffffff) {
              *plVar7 = (long)DAT_0001c428;
              goto LAB_00008d38;
            }
            ___error();
            FUN_00008748("registerCustomFilter: ctx mmap failed errno=%d");
            _munmap(DAT_0001c428,0xb0);
          }
          DAT_0001c428 = (undefined8 *)0x0;
          return;
        }
        pcVar22 = "registerCustomFilter: Gaussian callable resolution failed";
      }
LAB_00008978:
      if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
        FUN_00008748(pcVar22);
        return;
      }
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0xc471,0x89a8);
      (*UNRECOVERED_JUMPTABLE_00)();
      return;
    }
    pcVar22 = "registerCustomFilter: internAtom=%p addFilter=%p, aborting";
    goto LAB_00008b34;
  }
  pcVar22 = "registerCustomFilter: could not resolve render vtable slot (got %d), aborting";
LAB_00008b34:
  FUN_00008748(pcVar22);
  return;
}



// ===== 0x00009344  FUN_00009344

int * FUN_00009344(int *param_1)

{
  int iVar1;
  ssize_t sVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = _open("/var/mobile/Library/Accessibility/systembox-clockglass-backboardd-guard.bin",
                  0x1000000);
    if (-1 < iVar1) {
      sVar2 = _read(iVar1,param_1,0x20);
      _close(iVar1);
      if ((sVar2 == 0x20) && (*param_1 == 0x4c47534d)) {
        return (int *)(ulong)(param_1[1] == 1);
      }
    }
    param_1 = (int *)0x0;
  }
  return param_1;
}



// ===== 0x000093d0  FUN_000093d0

void FUN_000093d0(void *param_1)

{
  uint uVar1;
  ssize_t sVar3;
  char acStack_438 [1024];
  long local_38;
  void *pvVar2;
  
  local_38 = *(long *)PTR____stack_chk_guard_000182a8;
  pvVar2 = param_1;
  if (param_1 != (void *)0x0) {
    _bzero(acStack_438,0x400);
    _getpid();
    _snprintf(acStack_438,0x400,"%s.%d.tmp");
    uVar1 = _open(acStack_438,0x1000601);
    pvVar2 = (void *)(ulong)uVar1;
    if (-1 < (int)uVar1) {
      sVar3 = _write(uVar1,param_1,0x20);
      if (sVar3 == 0x20) {
        _fsync(uVar1);
        _close(uVar1);
        uVar1 = _rename(acStack_438,
                        "/var/mobile/Library/Accessibility/systembox-clockglass-backboardd-guard.bin"
                       );
        pvVar2 = (void *)(ulong)uVar1;
        if (uVar1 == 0) goto LAB_0000949c;
      }
      else {
        _close(uVar1);
      }
      uVar1 = _unlink(acStack_438);
      pvVar2 = (void *)(ulong)uVar1;
    }
  }
LAB_0000949c:
  if (*(long *)PTR____stack_chk_guard_000182a8 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(pvVar2);
  }
  return;
}



// ===== 0x000094cc  FUN_000094cc

void FUN_000094cc(long param_1)

{
  int iVar1;
  undefined8 local_40;
  long lStack_38;
  undefined8 local_30;
  undefined8 local_28;
  
  lStack_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  iVar1 = FUN_00009344(&local_40);
  if ((iVar1 != 0) && (lStack_38 == *(long *)(param_1 + 0x20) && local_28._4_4_ == 0)) {
    local_28 = (ulong)local_28._4_4_ << 0x20;
    local_30 = 0;
    FUN_000093d0(&local_40);
  }
  return;
}



// ===== 0x00009530  FUN_00009530

void FUN_00009530(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_0001c3f0;
  DAT_0001c3f0 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x9574);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00009534  FUN_00009534

void FUN_00009534(void)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  ulong unaff_x30;
  
  jbroot((NSString *)&cf__var_mobile_Library_Preferences_com_wkk_systembox_plist);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_0001c3f0;
  DAT_0001c3f0 = uVar2;
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x9574);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_release(uVar1);
  return;
}



// ===== 0x00009578  FUN_00009578

bool FUN_00009578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  ssize_t sVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  FUN_00008748("hook: resolving MSHookFunction");
  pcVar4 = (code *)_dlsym(0xfffffffffffffffe,"MSHookFunction");
  if (pcVar4 == (code *)0x0) {
    lVar5 = 0;
    do {
      pcVar10 = *(char **)((long)&PTR_s__usr_lib_libellekit_dylib_00018c40 + lVar5);
      if ((*pcVar10 != '/') || (pcVar10 = (char *)_jbroot(pcVar10), pcVar10 != (char *)0x0)) {
        FUN_00008748("hook: trying backend %s");
        lVar8 = _dlopen(pcVar10,10);
        if (lVar8 == 0) {
          _dlerror();
          FUN_00008748("hook: backend load failed %s: %s");
        }
        else {
          pcVar4 = (code *)_dlsym(lVar8,"MSHookFunction");
          if (pcVar4 != (code *)0x0) {
            FUN_00008748("hook: resolved MSHookFunction from %s");
            goto LAB_000095d8;
          }
        }
      }
      lVar5 = lVar5 + 8;
      if (lVar5 == 0x28) {
        _dlerror();
        FUN_00008748("hook: MSHookFunction unavailable (%s)");
        DAT_0001cdc0 = (code *)0x0;
        return false;
      }
    } while( true );
  }
  FUN_00008748("hook: resolved MSHookFunction from linked/default namespace");
LAB_000095d8:
  DAT_0001cdc0 = pcVar4;
  lVar5 = _LGSymStripCode(param_1);
  if (lVar5 == 0) {
    uVar9 = 0;
  }
  else {
    lVar8 = 0;
    uVar9 = 0x14650fb0739d0383;
    do {
      uVar9 = (uVar9 ^ *(byte *)(lVar5 + lVar8)) * 0x100000001b3;
      lVar8 = lVar8 + 1;
    } while (lVar8 != 0x20);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  iVar3 = _access("/var/mobile/Library/Accessibility/systembox-clockglass-gaussian-identity-state.bin"
                  ,0);
  if (iVar3 == 0) {
    DAT_0001c3c8 = 1;
    DAT_0001c3c9 = 1;
    DAT_0001c3ca = '\x01';
    iVar3 = _open("/var/mobile/Library/Accessibility/systembox-clockglass-gaussian-identity-state.bin"
                  ,0x1000000);
    if (-1 < iVar3) {
      sVar6 = _read(iVar3,&local_78,0x18);
      _close(iVar3);
      if ((((sVar6 == 0x18) && ((int)local_78 == 0x4c474749)) && (local_78._4_4_ == 1)) &&
         ((int)local_68 == 0)) {
        FUN_0000adf8(uVar9,1);
      }
    }
    FUN_00008748(
                "hook: identity probe failed previously; disabling identity hook (fingerprint=%llx)"
                );
    if ((DAT_0001c3c8 & 1) == 0) goto LAB_000097d4;
    pcVar10 = "hook: skipping Gaussian identity hook after capability probe";
LAB_00009860:
    DAT_0001cdc8 = _LGSymMakeCallable(param_1);
    FUN_00008748(pcVar10);
  }
  else {
    DAT_0001c3c8 = 0;
LAB_000097d4:
    uVar9 = FUN_0000adf8(uVar9,0);
    if ((uVar9 & 1) == 0) {
      DAT_0001c3c8 = 1;
      pcVar10 = "hook: identity probe state unavailable; skipping identity hook";
      goto LAB_00009860;
    }
    local_80 = 0;
    uVar7 = _LGSymStripCode(FUN_0000af00);
    FUN_00008748("hook: installing Gaussian identity target=%p replacement=%p");
    (*DAT_0001cdc0)(lVar5,uVar7,&local_80);
    _unlink("/var/mobile/Library/Accessibility/systembox-clockglass-gaussian-identity-state.bin");
    DAT_0001cdc8 = _LGSymMakeCallable(local_80);
  }
  if (DAT_0001cdc8 == 0) {
    pcVar10 = "hook: Gaussian identity trampoline unavailable";
    goto LAB_00009978;
  }
  local_80 = 0;
  lVar5 = _LGSymStripCode(param_2);
  if ((DAT_0001c3c9 & 1) == 0) {
    if (lVar5 == 0) {
      uVar9 = 0;
    }
    else {
      lVar8 = 0;
      uVar9 = 0x14650fb0739d0383;
      do {
        uVar9 = (uVar9 ^ *(byte *)(lVar5 + lVar8)) * 0x100000001b3;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x20);
    }
    uVar9 = FUN_0000adf8(uVar9,2);
    if ((uVar9 & 1) == 0) {
      DAT_0001c3c9 = 1;
      pcVar10 = "hook: edge-info probe state unavailable; skipping hook";
      goto LAB_00009994;
    }
    uVar7 = _LGSymStripCode(FUN_0000afc8);
    FUN_00008748("hook: installing Gaussian edge-info target=%p replacement=%p");
    (*DAT_0001cdc0)(lVar5,uVar7,&local_80);
    _unlink("/var/mobile/Library/Accessibility/systembox-clockglass-gaussian-identity-state.bin");
    DAT_0001c420 = _LGSymMakeCallable(local_80);
  }
  else {
    pcVar10 = "hook: skipping Gaussian edge-info hook after capability probe";
LAB_00009994:
    DAT_0001c420 = _LGSymMakeCallable(param_2);
    FUN_00008748(pcVar10);
  }
  if (DAT_0001c420 == 0) {
    pcVar10 = "hook: Gaussian edge-info trampoline unavailable";
    DAT_0001c420 = 0;
LAB_00009978:
    FUN_00008748(pcVar10);
    return false;
  }
  lVar5 = _LGSymStripCode(param_3);
  cVar2 = DAT_0001c3cb;
  local_88 = 0;
  if (DAT_0001c3ca == '\x01') {
    uVar7 = _LGSymMakeCallable(param_3);
    puVar1 = &DAT_0001c418;
    if (cVar2 != '\0') {
      puVar1 = &DAT_0001cdd0;
    }
    *puVar1 = uVar7;
    pcVar10 = "hook: skipping Gaussian render hook after capability probe";
  }
  else {
    if (lVar5 == 0) {
      uVar9 = 0;
    }
    else {
      lVar8 = 0;
      uVar9 = 0x14650fb0739d0383;
      do {
        uVar9 = (uVar9 ^ *(byte *)(lVar5 + lVar8)) * 0x100000001b3;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x20);
    }
    uVar9 = FUN_0000adf8(uVar9,2);
    cVar2 = DAT_0001c3cb;
    if ((uVar9 & 1) != 0) {
      pcVar4 = FUN_0000b188;
      if (DAT_0001c3cb != '\0') {
        pcVar4 = FUN_0000afe0;
      }
      uVar7 = _LGSymStripCode(pcVar4);
      FUN_00008748("hook: installing Gaussian render target=%p replacement=%p");
      (*DAT_0001cdc0)(lVar5,uVar7,&local_88);
      _unlink("/var/mobile/Library/Accessibility/systembox-clockglass-gaussian-identity-state.bin");
      cVar2 = DAT_0001c3cb;
      lVar8 = _LGSymMakeCallable(local_88);
      lVar5 = lVar8;
      if (cVar2 != '\0') {
        lVar5 = DAT_0001c418;
        DAT_0001cdd0 = lVar8;
      }
      goto LAB_00009b00;
    }
    DAT_0001c3ca = '\x01';
    uVar7 = _LGSymMakeCallable(param_3);
    puVar1 = &DAT_0001c418;
    if (cVar2 != '\0') {
      puVar1 = &DAT_0001cdd0;
    }
    *puVar1 = uVar7;
    pcVar10 = "hook: render probe state unavailable; skipping hook";
  }
  FUN_00008748(pcVar10);
  lVar5 = DAT_0001c418;
LAB_00009b00:
  DAT_0001c418 = lVar5;
  FUN_00008748("hook: Gaussian trampolines identity=%p edge=%p renderRaw=%p render=%p ABI=%s");
  lVar5 = DAT_0001c418;
  if (DAT_0001c3cb != '\0') {
    lVar5 = DAT_0001cdd0;
  }
  return lVar5 != 0;
}



// ===== 0x00009ba4  FUN_00009ba4

undefined8 FUN_00009ba4(void)

{
  if ((DAT_0001cdec & 1) == 0) {
    DAT_0001cdec = 1;
    FUN_00008748(
                "ourIdentityStub: first call, CA is dispatching into our vtable (self=%p filter=%p)"
                );
  }
  return 0;
}



// ===== 0x00009be8  FUN_00009be8

undefined8 FUN_00009be8(void)

{
  undefined8 uVar1;
  
  if (DAT_0001c420 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00009bf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_0001c420)();
    return uVar1;
  }
  return 0;
}



// ===== 0x00009c00  FUN_00009c00

void FUN_00009c00(undefined4 param_1,float param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,long param_6,long param_7,undefined8 param_8,
                 undefined8 param_9_00,undefined8 param_10,undefined8 param_9)

{
  ulong uVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar7;
  char cVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  uint64_t uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  uint64_t uVar19;
  ulong uVar20;
  uint64_t uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint64_t uVar24;
  undefined8 extraout_x1;
  ulong extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long extraout_x8;
  code *extraout_x8_00;
  undefined (*extraout_x9) [16];
  int *piVar25;
  long lVar26;
  long lVar27;
  char *pcVar28;
  ulong unaff_x30;
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar33;
  undefined auVar32 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined auVar41 [16];
  int local_170;
  float fStack_16c;
  float local_168;
  float local_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  int local_154;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  
  uVar12 = _mach_absolute_time();
  uVar1 = DAT_0001ce10 + 1;
  DAT_0001ce10 = uVar1;
  if (uVar1 < 4) {
    FUN_00008748("R13[%llu] ENTER ctx=%p surface=%p opacity=%.2f scale=%.2f flag=%d");
  }
  if (DAT_0001c230 < 0) {
    pcVar28 = "ourCustomRender13: command-buffer offset unresolved, skipping";
    goto LAB_00009d2c;
  }
  if ((DAT_0001c218 < 0) ||
     (lVar26 = *(long *)(param_7 + DAT_0001c218),
     *(long *)(param_6 + DAT_0001c230) == 0 || lVar26 == 0)) {
    FUN_00008748("ourCustomRender13: early exit, cmdBuf=%p origTex=%p");
    return;
  }
  objc_msgSend_device(lVar26);
  lVar13 = _objc_unsafeClaimAutoreleasedReturnValue();
  if (lVar13 == 0) {
    pcVar28 = "ourCustomRender13: origTex has no device, skip";
    goto LAB_00009d2c;
  }
  uVar14 = objc_msgSend_width(lVar26);
  uVar15 = objc_msgSend_height(lVar26);
  if (uVar14 == 0 || uVar15 == 0) {
    pcVar28 = "ourCustomRender13: zero dims, skip";
    goto LAB_00009d2c;
  }
  if (uVar1 < 4) {
    FUN_00008748("R13[%llu] cmdBuf=%p origTex=%p device=%p dims=%llux%llu");
  }
  FUN_0000b45c(lVar13);
  if (DAT_0001c350 == 0) {
    pcVar28 = "ourCustomRender13: no shader library";
    goto LAB_00009d2c;
  }
  if (DAT_0001c358 == 0) {
    lVar18 = objc_msgSend_newBufferWithLength_options_(lVar13,extraout_x1,0xb0,0);
    lVar17 = DAT_0001c358;
    DAT_0001c358 = lVar18;
    _objc_release(lVar17);
    if (DAT_0001c358 != 0) {
      lVar17 = objc_msgSend_contents();
      *(undefined8 *)(lVar17 + 0x10) = DAT_00010160;
      *(undefined8 *)(lVar17 + 0x18) = 0;
      *(undefined8 *)(lVar17 + 0x38) = DAT_00010168;
      *(undefined4 *)(lVar17 + 0x40) = 0x3feccccd;
      uVar22 = DAT_00010170;
      *(undefined8 *)(lVar17 + 0x48) = 0;
      *(undefined8 *)(lVar17 + 0x50) = uVar22;
      *(undefined8 *)(lVar17 + 0x58) = DAT_00010178;
      *(undefined8 *)(lVar17 + 0x60) = 0;
      uVar22 = NEON_fmov(0x3f800000,4);
      *(undefined8 *)(lVar17 + 0x68) = uVar22;
      *(undefined4 *)(lVar17 + 0x70) = 0x3f800000;
      *(undefined8 *)(lVar17 + 0x78) = 0;
      *(undefined8 *)(lVar17 + 0x80) = 0;
      *(undefined4 *)(lVar17 + 0x88) = 0;
      *(undefined8 *)(lVar17 + 0x8c) = DAT_00010180;
      *(undefined4 *)(lVar17 + 0x94) = 0x40000000;
      FUN_00008748("uniforms buffer allocated (geometry refreshed per-frame)");
      if (DAT_0001c358 != 0) goto LAB_00009e00;
    }
    pcVar28 = "ourCustomRender13: no uniforms buf";
LAB_00009d2c:
    if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
      FUN_00008748(pcVar28);
      return;
    }
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0x9d64);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
LAB_00009e00:
  puVar16 = (undefined8 *)objc_msgSend_contents();
  auVar32._8_8_ = uVar15;
  auVar32._0_8_ = uVar14;
  auVar32 = NEON_ucvtf(auVar32,8);
  fVar29 = (float)auVar32._0_8_;
  fVar33 = (float)auVar32._8_8_;
  uVar22 = CONCAT44(fVar33,fVar29);
  fVar39 = (float)NEON_fminnm(fVar29,fVar33);
  *puVar16 = uVar22;
  puVar16[1] = uVar22;
  puVar16[4] = uVar22;
  puVar16[5] = 0;
  *(float *)(puVar16 + 6) = fVar39 * DAT_000101a0;
  *(undefined4 *)((long)puVar16 + 0x34) = 0x42080000;
  if (uVar1 < 4) {
    FUN_00008748("R13[%llu] pipeline+uniforms ready");
  }
  puVar16 = (undefined8 *)objc_msgSend_contents(DAT_0001c358);
  uStack_138 = puVar16[3];
  uStack_140 = puVar16[2];
  uStack_148 = puVar16[1];
  local_150 = *puVar16;
  uStack_128 = SUB168(*(undefined (*) [16])(puVar16 + 4),8);
  local_130 = SUB168(*(undefined (*) [16])(puVar16 + 4),0);
  uStack_f0 = puVar16[0xc];
  uStack_118 = puVar16[7];
  local_120 = puVar16[6];
  uStack_108 = puVar16[9];
  local_110 = puVar16[8];
  uStack_f8 = SUB168(*(undefined (*) [16])(puVar16 + 10),8);
  local_100 = SUB168(*(undefined (*) [16])(puVar16 + 10),0);
  uStack_e8 = (undefined4)puVar16[0xd];
  local_e4 = (undefined4)((ulong)puVar16[0xd] >> 0x20);
  uStack_a8 = puVar16[0x15];
  local_b0 = puVar16[0x14];
  uStack_d8 = puVar16[0xf];
  local_c8 = puVar16[0x11];
  uStack_d0 = puVar16[0x10];
  uStack_b8 = SUB168(*(undefined (*) [16])(puVar16 + 0x12),8);
  local_c0 = SUB168(*(undefined (*) [16])(puVar16 + 0x12),0);
  uStack_e0 = (undefined4)puVar16[0xe];
  uStack_dc = (undefined4)((ulong)puVar16[0xe] >> 0x20);
  if (param_4 == 0) {
    local_170 = 0;
  }
  else {
    local_170 = *(int *)(param_4 + DAT_0001c210);
  }
  local_154 = local_170;
  lVar17 = FUN_0000bf2c(&DAT_0001c378,&local_170);
  if (lVar17 == 0) {
    lVar17 = FUN_0000be78(&DAT_0001c3a0,&local_170);
    if (lVar17 == 0) {
      puVar16 = (undefined8 *)&DAT_0001c438;
      if (local_170 == 0) {
        cVar8 = '\0';
        puVar16 = (undefined8 *)&DAT_0001c438;
      }
      else {
        lVar17 = 0;
        piVar25 = &DAT_0001cd4c;
        do {
          if ((*(int *)((long)&DAT_0001c498 + lVar17) == local_170) || (*piVar25 == local_170)) {
            cVar8 = *piVar25 == local_170;
            puVar16 = (undefined8 *)(lVar17 + 0x1c488);
            break;
          }
          cVar8 = '\0';
          piVar25 = piVar25 + 1;
          lVar17 = lVar17 + 0x50;
        } while (lVar17 != 0x8c0);
      }
    }
    else {
      cVar8 = *(char *)(lVar17 + 0x18);
      puVar16 = (undefined8 *)(&DAT_0001c438 + (long)*(int *)(lVar17 + 0x14) * 0x50);
    }
  }
  else {
    puVar16 = (undefined8 *)(*(code *)PTR___tlv_bootstrap_0001c280)();
    auVar32 = *extraout_x9;
    puVar16[1] = auVar32._8_8_;
    *puVar16 = auVar32._0_8_;
    auVar32 = extraout_x9[1];
    uVar34 = *(undefined8 *)(extraout_x9[2] + 8);
    uVar23 = *(undefined8 *)extraout_x9[2];
    uVar35 = *(undefined8 *)extraout_x9[3];
    uVar37 = *(undefined8 *)(extraout_x9[4] + 8);
    uVar36 = *(undefined8 *)extraout_x9[4];
    puVar16[7] = *(undefined8 *)(extraout_x9[3] + 8);
    puVar16[6] = uVar35;
    puVar16[9] = uVar37;
    puVar16[8] = uVar36;
    puVar16[3] = auVar32._8_8_;
    puVar16[2] = auVar32._0_8_;
    puVar16[5] = uVar34;
    puVar16[4] = uVar23;
    *(undefined4 *)((long)puVar16 + 0x14) = *(undefined4 *)(extraout_x8 + 0x18);
    cVar8 = *(char *)(extraout_x8 + 0x1c);
  }
  lVar17 = FUN_0000bf2c(&DAT_0001c378,&local_154);
  pfVar2 = (float *)(lVar17 + 0x18);
  if (lVar17 == 0) {
    pfVar2 = (float *)((long)puVar16 + 0x14);
  }
  fVar38 = *pfVar2;
  local_120._0_4_ = fVar39 * fVar38;
  fVar40 = param_2 + param_2;
  if (param_2 + param_2 <= DAT_000101a4) {
    fVar40 = DAT_000101a4;
  }
  local_120._4_4_ = (float)NEON_fminnm(fVar40 * *(float *)(puVar16 + 3),fVar39 * 0.5);
  uStack_118 = *(undefined8 *)((long)puVar16 + 0x1c);
  local_110 = CONCAT44(local_110._4_4_,*(undefined4 *)((long)puVar16 + 0x24));
  local_c0._4_4_ = fVar40;
  local_c8._4_4_ = *(undefined4 *)(puVar16 + 5);
  iVar10 = _strcmp((char *)puVar16[1],"Clock");
  uVar30 = DAT_0001c238;
  if (iVar10 != 0) {
    uVar30 = 0;
  }
  local_c0 = CONCAT44(local_c0._4_4_,uVar30);
  puVar3 = (undefined4 *)((long)puVar16 + 0x34);
  puVar4 = (undefined4 *)((long)puVar16 + 0x2c);
  puVar5 = puVar16 + 7;
  puVar6 = puVar16 + 6;
  if (cVar8 != '\0') {
    puVar3 = (undefined4 *)((long)puVar16 + 0x44);
    puVar4 = (undefined4 *)((long)puVar16 + 0x3c);
    puVar5 = puVar16 + 9;
    puVar6 = puVar16 + 8;
  }
  uStack_a0 = *puVar3;
  uStack_9c = *(undefined4 *)puVar5;
  local_b0 = CONCAT44(*(undefined4 *)puVar6,*puVar4);
  iVar10 = _strcmp((char *)puVar16[1],"Keyboard");
  if (iVar10 == 0) {
    LOAcquire();
    iVar10 = DAT_0001ce18 + 1;
    LORelease();
    bVar7 = DAT_0001ce18 < 0x50;
    DAT_0001ce18 = iVar10;
    if (bVar7) {
      FUN_00008748(
                  "keyboard-geometry[%d] atom=0x%x tex=%llux%llu dark=%d route=%d routeHost=%d hostRatio=%.6f selectedRatio=%.6f radius=%.3f bezelWidth=%.3fpt bezel=%.3f"
                  );
    }
  }
  pcVar28 = (char *)puVar16[1];
  iVar10 = _strcmp(pcVar28,"PrefsSwitch");
  local_e4 = 0x3f400000;
  if (iVar10 != 0) {
    local_e4 = 0x3f800000;
  }
  uStack_e0 = 0x3f800000;
  iVar10 = _strcmp(pcVar28,"TabBarSelection");
  if (iVar10 == 0) {
    local_170 = 0;
    fStack_16c = 0.0;
    local_168 = 0.0;
    local_164 = 0.0;
    fStack_160 = 0.0;
    iVar10 = FUN_0000b58c(1,&local_170);
    if (iVar10 != 0) {
      local_e4 = (undefined4)DAT_00010188;
      uStack_e0 = (undefined4)((ulong)DAT_00010188 >> 0x20);
      uStack_d8 = CONCAT44(local_168 * fVar33,fStack_16c * fVar29);
      uStack_d0 = CONCAT44(fStack_160 * fVar33,local_164 * fVar29);
      fVar31 = (float)NEON_fminnm(local_164 * fVar29,fStack_160 * fVar33);
      local_120._0_4_ = fVar38 * fVar31;
      local_120._4_4_ = (float)NEON_fminnm(fVar40 * *(float *)(puVar16 + 3),fVar31 * 0.5);
    }
    pcVar28 = (char *)puVar16[1];
  }
  iVar10 = _strcmp(pcVar28,"PrefsSegment");
  if (iVar10 == 0) {
    local_e4 = 0x3f333333;
    local_170 = 0;
    fStack_16c = 0.0;
    local_168 = 0.0;
    local_164 = 0.0;
    fStack_160 = 0.0;
    iVar10 = FUN_0000b58c(0,&local_170);
    if (iVar10 == 0) {
      uStack_e0 = 0x3f400000;
      fVar31 = fVar39 * 0.75;
    }
    else {
      uStack_e0 = 0x3f800000;
      uStack_d8 = CONCAT44(local_168 * fVar33,fStack_16c * fVar29);
      uStack_d0 = CONCAT44(fStack_160 * fVar33,local_164 * fVar29);
      fVar31 = (float)NEON_fminnm(local_164 * fVar29,fStack_160 * fVar33);
    }
    local_120._0_4_ = fVar38 * fVar31;
    local_120._4_4_ = (float)NEON_fminnm(fVar40 * *(float *)(puVar16 + 3),fVar31 * 0.5);
    pcVar28 = (char *)puVar16[1];
  }
  iVar10 = _strcmp(pcVar28,"Clock");
  if (iVar10 == 0) {
    FUN_0000b6e4(lVar13);
    lVar17 = _objc_retainAutoreleasedReturnValue();
    local_c8._0_4_ = 0;
    if (lVar17 != 0) {
      local_c8._0_4_ = 0x3f800000;
      uVar20 = objc_msgSend_width(lVar17);
      fVar39 = (float)(unkuint9)uVar20 / DAT_0001c23c;
      uVar20 = objc_msgSend_height(lVar17);
      fVar29 = fVar29 / fVar39;
      if (fVar39 <= 0.0) {
        fVar29 = 1.0;
      }
      fVar33 = fVar33 / ((float)(unkuint9)uVar20 / DAT_0001c23c);
      if ((float)(unkuint9)uVar20 / DAT_0001c23c <= 0.0) {
        fVar33 = 1.0;
      }
      local_120._4_4_ = (float)NEON_fminnm(fVar29,fVar33);
      local_120._4_4_ = DAT_0001c240 * local_120._4_4_;
      if (local_120._4_4_ <= 0.0) {
        local_120._4_4_ = 0.0;
      }
    }
  }
  else {
    iVar10 = _strcmp(pcVar28,"Keyboard");
    if (iVar10 == 0) {
      lVar17 = 0;
      local_c8._0_4_ = 0x3e800000;
    }
    else {
      iVar10 = _strcmp(pcVar28,"CoverSheet");
      fVar40 = DAT_0001c244;
      if (iVar10 == 0) {
        local_c8._0_4_ = 0xbf800000;
        local_120._0_4_ = DAT_0001c244 + DAT_0001c244;
        local_170 = 0;
        fStack_16c = 0.0;
        local_168 = 0.0;
        local_164 = 0.0;
        local_158 = 0.0;
        fStack_160 = 0.0;
        fStack_15c = 0.0;
        bVar9 = FUN_0000bb20(&local_170);
        bVar9 = bVar9 & local_168 != 0.0;
        if (bVar9 != 0) {
          if (local_164 == 5.605194e-45) {
            uVar22 = NEON_rev64(uVar22,4);
            uStack_128 = CONCAT44(fStack_15c * (float)((ulong)uVar22 >> 0x20),
                                  fStack_160 * (float)uVar22);
            local_c8._0_4_ = 0xc0800000;
          }
          else if (local_164 == 4.203895e-45) {
            uStack_128 = 0;
            local_c8._0_4_ = 0xc0400000;
          }
          else if (local_164 == 2.802597e-45) {
            uStack_128 = 0;
            local_c8._0_4_ = 0xc0000000;
          }
          else {
            uStack_128 = CONCAT44(fStack_15c * fVar33,fStack_160 * fVar29);
          }
          if ((1.0 <= local_158) && (local_158 <= 4.0)) {
            local_120._0_4_ = fVar40 * local_158;
            local_120._4_4_ = (float)NEON_fminnm(local_158 * *(float *)(puVar16 + 3),fVar39 * 0.5);
            LOAcquire();
            iVar10 = DAT_0001ce1c + 1;
            LORelease();
            bVar7 = DAT_0001ce1c < 0xc;
            DAT_0001ce1c = iVar10;
            if (bVar7) {
              FUN_00008748("coversheet-bezel width=%.2fpt ppp=%.2f px=%.2f");
            }
          }
        }
        fVar29 = local_164;
        if (bVar9 == 0) {
          fVar29 = -NAN;
        }
        LOAcquire();
        LORelease();
        LOAcquire();
        iVar10 = DAT_0001ce20 + 1;
        LORelease();
        if ((DAT_0001c248 != fVar29) ||
           (bVar7 = DAT_0001ce20 < 0xc, DAT_0001c248 = fVar29, DAT_0001ce20 = iVar10, bVar7)) {
          DAT_0001c248 = fVar29;
          DAT_0001ce20 = iVar10;
          FUN_00008748(
                      "coversheet-state-read valid=%d active=%u orientation=%u ratio={%.4f,%.4f} ppp=%.2f tex=%llux%llu aux=%.1f lens={%.2f,%.2f} radius=%.2f"
                      );
        }
      }
      lVar17 = 0;
    }
  }
  lVar18 = FUN_0000bf2c(&DAT_0001c378,&local_154);
  if (lVar18 != 0) {
    LOAcquire();
    iVar10 = DAT_0001ce24 + 1;
    LORelease();
    bVar7 = DAT_0001ce24 < 0x14;
    DAT_0001ce24 = iVar10;
    if (bVar7) {
      FUN_00008748("prefs render atom=0x%x tex=%llux%llu ratio=%.4f radius=%.2f bezel=%.2f");
    }
  }
  if (uVar1 < 4) {
    FUN_00008748("R13[%llu] before g_origGaussR13(%p)");
  }
  pcVar28 = (char *)(*(code *)PTR___tlv_bootstrap_0001c250)();
  if ((*pcVar28 == '\0') || (DAT_0001cdd0 == 0)) {
    if (DAT_0001c418 != (code *)0x0) {
      (*DAT_0001c418)(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8,param_9_00,param_10,
                      param_9);
    }
  }
  else {
    puVar16 = (undefined8 *)(*(code *)PTR___tlv_bootstrap_0001c268)();
    (*extraout_x8_00)(param_1,0,*puVar16,param_3,param_4,param_5,param_6,param_7,param_9_00,param_10
                      ,param_9);
  }
  uVar19 = _mach_absolute_time();
  if (uVar1 < 4) {
    FUN_00008748("R13[%llu] after g_origGaussR13");
  }
  if (DAT_0001c228 < 0) {
    lVar18 = 0;
LAB_0000a7e0:
    LOAcquire();
    iVar10 = DAT_0001ce28 + 1;
    LORelease();
    bVar7 = 0x13 < DAT_0001ce28;
    DAT_0001ce28 = iVar10;
    if (bVar7) goto LAB_0000a840;
    objc_msgSend_width(lVar18);
    objc_msgSend_height(lVar18);
    objc_msgSend_usage(lVar18);
    pcVar28 = 
    "ourCustomRender13: unusable CA destination atom=0x%x surf=%p tex=%p src=%llux%llu dst=%lux%lu usage=%lu; kept stock pass"
    ;
  }
  else {
    lVar18 = 0;
    if (((*(ulong *)(param_6 + DAT_0001c228) < 0x10000) || (DAT_0001c220 < 0)) ||
       (lVar18 = *(long *)(*(ulong *)(param_6 + DAT_0001c228) + DAT_0001c220), lVar18 == 0))
    goto LAB_0000a7e0;
    lVar27 = *(long *)(param_6 + DAT_0001c230);
    uVar20 = objc_msgSend_width(lVar18);
    bVar7 = uVar14 - uVar20 < 9;
    if (uVar14 <= uVar20) {
      bVar7 = uVar20 - uVar14 < 0x41;
    }
    if (bVar7) {
      uVar14 = objc_msgSend_height(lVar18);
      bVar7 = 8 < uVar15 - uVar14;
      if (uVar15 <= uVar14) {
        bVar7 = 0x40 < uVar14 - uVar15;
      }
    }
    else {
      bVar7 = true;
    }
    if (lVar27 == 0) goto LAB_0000a7e0;
    objc_msgSend_device(lVar18);
    lVar27 = _objc_retainAutoreleasedReturnValue();
    if ((bool)(lVar27 != lVar13 | bVar7)) {
      _objc_release();
      goto LAB_0000a7e0;
    }
    uVar11 = objc_msgSend_usage(lVar18);
    _objc_release(lVar13);
    if ((uVar11 >> 2 & 1) == 0) goto LAB_0000a7e0;
    uVar14 = objc_msgSend_width(lVar18);
    uVar15 = objc_msgSend_height(lVar18);
    uStack_148 = CONCAT44((float)(unkuint9)uVar15,(float)(unkuint9)uVar14);
    _os_unfair_lock_lock(&DAT_0001ce2c);
    FUN_0000bfe0(&DAT_0001c328,&local_154,&local_154);
    _os_unfair_lock_unlock(&DAT_0001ce2c);
    if ((extraout_x1_00 & 1) != 0) {
      objc_msgSend_width(lVar18);
      objc_msgSend_height(lVar18);
      FUN_00008748(
                  "render destination ready atom=0x%x host=%s src=%llux%llu dst=%lux%lu radius=%.2f bezel=%.2f aux=%.1f"
                  );
    }
    if (uVar1 < 4) {
      objc_msgSend_width(lVar18);
      objc_msgSend_height(lVar18);
      FUN_00008748("R13[%llu] CA destination surf=%p tex=%p dims=%lux%lu");
      if (DAT_0001c3d0 == (code *)0x0) goto LAB_0000acbc;
      FUN_00008748("R13[%llu] before stopEncoders(%p)");
LAB_0000a9c0:
      (*DAT_0001c3d0)(param_6);
      uVar21 = _mach_absolute_time();
      if (uVar1 < 4) {
        FUN_00008748("R13[%llu] after stopEncoders, before encoder");
      }
      lVar27 = *(long *)(param_6 + DAT_0001c230);
      if (lVar27 == 0) {
        FUN_00008748("ourCustomRender13: command buffer unavailable after stopEncoders");
      }
      else {
        uVar22 = _objc_retain(lVar26);
        uVar23 = objc_msgSend_pixelFormat(lVar18);
        FUN_0000bc60(lVar13,uVar23);
        lVar26 = _objc_retainAutoreleasedReturnValue();
        if (lVar26 == 0) {
          FUN_00008748("ourCustomRender13: no render pipeline, kept stock pass");
        }
        else {
          objc_msgSend_renderPassDescriptor(PTR__OBJC_CLASS___MTLRenderPassDescriptor_0001c1d0);
          uVar23 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_colorAttachments();
          auVar32 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_objectAtIndexedSubscript_(auVar32._0_8_,auVar32._8_8_,0);
          auVar41 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setTexture_(auVar41._0_8_,auVar41._8_8_,lVar18);
          _objc_release(auVar41._0_8_);
          _objc_release(auVar32._0_8_);
          objc_msgSend_colorAttachments(uVar23);
          auVar32 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_objectAtIndexedSubscript_(auVar32._0_8_,auVar32._8_8_,0);
          auVar41 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setLoadAction_(auVar41._0_8_,auVar41._8_8_,0);
          _objc_release(auVar41._0_8_);
          _objc_release(auVar32._0_8_);
          objc_msgSend_colorAttachments(uVar23);
          auVar32 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_objectAtIndexedSubscript_(auVar32._0_8_,auVar32._8_8_,0);
          auVar41 = _objc_retainAutoreleasedReturnValue();
          objc_msgSend_setStoreAction_(auVar41._0_8_,auVar41._8_8_,1);
          _objc_release(auVar41._0_8_);
          _objc_release(auVar32._0_8_);
          objc_msgSend_renderCommandEncoderWithDescriptor_(lVar27,extraout_x1_01,uVar23);
          auVar32 = _objc_retainAutoreleasedReturnValue();
          lVar13 = auVar32._0_8_;
          if (lVar13 == 0) {
            FUN_00008748("ourCustomRender13: nil render encoder");
          }
          else {
            objc_msgSend_setRenderPipelineState_(lVar13,auVar32._8_8_,lVar26);
            objc_msgSend_setFragmentTexture_atIndex_(lVar13,extraout_x1_02,uVar22,0);
            objc_msgSend_setFragmentTexture_atIndex_(lVar13,extraout_x1_03,lVar17,1);
            objc_msgSend_setFragmentBytes_length_atIndex_(lVar13,extraout_x1_04,&local_150,0xb0,0);
            objc_msgSend_drawPrimitives_vertexStart_vertexCount_(lVar13,extraout_x1_05,3,0,3);
            objc_msgSend_endEncoding(lVar13);
            uVar24 = _mach_absolute_time();
            if (uVar1 < 4) {
              FUN_00008748("R13[%llu] after our compute dispatch");
              FUN_00008748("R13[%llu] DONE");
            }
            DAT_0001cdf0 = (uVar21 - uVar19) + DAT_0001cdf0;
            DAT_0001cdf8 = (uVar24 - uVar21) + DAT_0001cdf8;
            DAT_0001ce00 = (uVar19 - uVar12) + DAT_0001ce00;
            DAT_0001ce08 = DAT_0001ce08 + 1;
            if (0x176 < DAT_0001ce08 >> 4) {
              if (DAT_0001ce34 == 0) {
                _mach_timebase_info((mach_timebase_info_t)&DAT_0001ce30);
              }
              NEON_ucvtf((ulong)DAT_0001ce30);
              FUN_00008748(
                          "timing (avg over %llu calls): stopEncoders=%.0fus  ourRender=%.0fus  gaussCall=%.0fus  total=%.0fus (%.2fms)"
                          );
              DAT_0001ce00 = 0;
              DAT_0001cdf8 = 0;
              DAT_0001cdf0 = 0;
              DAT_0001ce08 = 0;
            }
          }
          _objc_release(lVar13);
          _objc_release(uVar23);
        }
        _objc_release(lVar26);
        _objc_release(uVar22);
      }
      goto LAB_0000a840;
    }
    if (DAT_0001c3d0 != (code *)0x0) goto LAB_0000a9c0;
LAB_0000acbc:
    pcVar28 = "ourCustomRender13: null stopEncoders";
  }
  FUN_00008748(pcVar28);
LAB_0000a840:
  _objc_release(lVar17);
  return;
}



// ===== 0x0000ad24  FUN_0000ad24

void FUN_0000ad24(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
  FUN_0000ca10();
  uVar1 = _CFNotificationCenterGetDarwinNotifyCenter();
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xad70);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _CFNotificationCenterAddObserver(uVar1,0,FUN_0000d29c,&cf_com_wkk_systembox_prefschanged,0,2);
  return;
}



// ===== 0x0000ad74  FUN_0000ad74

void FUN_0000ad74(int param_1,long param_2)

{
  ulong extraout_x1;
  int local_34;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    local_34 = param_1;
    _os_unfair_lock_lock(&DAT_0001cddc);
    FUN_0000bfe0(&DAT_0001c300,&local_34,&local_34);
    _os_unfair_lock_unlock(&DAT_0001cddc);
    if ((extraout_x1 & 1) != 0) {
      (*DAT_0001c3e0)(local_34,param_2);
    }
  }
  return;
}



// ===== 0x0000adf8  FUN_0000adf8

void FUN_0000adf8(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  ssize_t sVar2;
  undefined8 uVar3;
  undefined8 local_440;
  undefined8 local_438;
  undefined4 local_430;
  char acStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_000182a8;
  local_440 = DAT_00010198;
  local_438 = param_1;
  local_430 = param_2;
  _bzero(acStack_428,0x400);
  _getpid();
  _snprintf(acStack_428,0x400,"%s.%d.tmp");
  iVar1 = _open(acStack_428,0x1000601);
  if (-1 < iVar1) {
    sVar2 = _write(iVar1,&local_440,0x18);
    if (sVar2 == 0x18) {
      _fsync(iVar1);
      _close(iVar1);
      iVar1 = _rename(acStack_428,
                      "/var/mobile/Library/Accessibility/systembox-clockglass-gaussian-identity-state.bin"
                     );
      if (iVar1 == 0) {
        uVar3 = 1;
        goto LAB_0000aed4;
      }
    }
    else {
      _close(iVar1);
    }
    _unlink(acStack_428);
  }
  uVar3 = 0;
LAB_0000aed4:
  if (*(long *)PTR____stack_chk_guard_000182a8 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}



// ===== 0x0000af00  FUN_0000af00

undefined8 FUN_0000af00(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong unaff_x30;
  
  if (param_2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + DAT_0001c210);
  }
  iVar1 = FUN_0000b34c(uVar3);
  if (iVar1 == 0) {
    if (DAT_0001cdc8 != (code *)0x0) {
      if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0000afac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*DAT_0001cdc8)(param_1,param_2);
        return uVar2;
      }
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xafac);
      uVar2 = (*UNRECOVERED_JUMPTABLE)();
      return uVar2;
    }
  }
  else if (DAT_0001cdd8 == 0) {
    DAT_0001cdd8 = 1;
    FUN_00008748("hook: first custom identity forced nonidentity atom=0x%x self=%p filter=%p");
  }
  return 0;
}



// ===== 0x0000afc8  FUN_0000afc8

undefined8 FUN_0000afc8(void)

{
  undefined8 uVar1;
  
  if (DAT_0001c420 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0000afd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_0001c420)();
    return uVar1;
  }
  return 0;
}



// ===== 0x0000afe0  FUN_0000afe0

void FUN_0000afe0(undefined4 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  code *UNRECOVERED_JUMPTABLE;
  int iVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  ulong unaff_x30;
  
  if (param_5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_5 + DAT_0001c210);
  }
  iVar1 = FUN_0000b34c(uVar4);
  if (iVar1 == 0) {
    if (DAT_0001cdd0 != (code *)0x0) {
      if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0000b15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*DAT_0001cdd0)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                        param_10,param_11);
        return;
      }
                    /* WARNING: Treating indirect jump as call */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xb15c);
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    if (DAT_0001cde0 == 0) {
      DAT_0001cde0 = 1;
      FUN_00008748("hook: first iOS 14 custom render atom=0x%x self=%p filter=%p");
    }
    puVar2 = (undefined *)(*(code *)PTR___tlv_bootstrap_0001c250)();
    *puVar2 = 1;
    puVar3 = (undefined8 *)(*(code *)PTR___tlv_bootstrap_0001c268)();
    *puVar3 = param_3;
    FUN_00009c00(param_1,param_2,param_4,param_5,param_6,param_7,param_8,0,param_9,param_10,param_11
                );
    *puVar2 = 0;
  }
  return;
}



// ===== 0x0000b188  FUN_0000b188

void FUN_0000b188(undefined4 param_1,undefined4 param_2,undefined8 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar1;
  undefined4 uVar2;
  ulong unaff_x30;
  
  if (param_4 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_4 + DAT_0001c210);
  }
  iVar1 = FUN_0000b34c(uVar2);
  if (iVar1 == 0) {
    if (DAT_0001cde8 == 0) {
      DAT_0001cde8 = 1;
      FUN_00008748("hook: first stock Gaussian forwarded atom=0x%x self=%p filter=%p");
    }
    if (DAT_0001c418 == (code *)0x0) {
      return;
    }
    if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0000b324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_0001c418)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                      param_10);
      return;
    }
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0xc471,0xb324);
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (DAT_0001cde4 == 0) {
    DAT_0001cde4 = 1;
    FUN_00008748("hook: first custom render atom=0x%x self=%p filter=%p");
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    FUN_00009c00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(0xc471,0xb28c);
  (*UNRECOVERED_JUMPTABLE_00)();
  return;
}



// ===== 0x0000b34c  FUN_0000b34c

bool FUN_0000b34c(undefined4 param_1)

{
  long lVar1;
  undefined4 local_24;
  
  local_24 = param_1;
  _os_unfair_lock_lock(&DAT_0001cddc);
  lVar1 = FUN_0000b3a8(&DAT_0001c300,&local_24);
  _os_unfair_lock_unlock(&DAT_0001cddc);
  return lVar1 != 0;
}



// ===== 0x0000b3a8  FUN_0000b3a8

long * FUN_0000b3a8(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long **pplVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar1 = *param_2;
    uVar5 = (ulong)uVar1;
    uVar10 = NEON_cnt(uVar4,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
    if ((uVar11 & 0xffffffff) < 2) {
      uVar6 = (ulong)((int)uVar4 - 1U & uVar1);
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar5 / uVar4;
        }
        uVar6 = uVar5 - uVar6 * uVar4;
      }
    }
    pplVar7 = *(long ***)(*param_1 + uVar6 * 8);
    if (pplVar7 != (long **)0x0) {
      plVar3 = *pplVar7;
      if (plVar3 != (long *)0x0) {
        do {
          uVar8 = plVar3[1];
          if (uVar8 == uVar5) {
            if (*(uint *)(plVar3 + 2) == uVar1) {
              return plVar3;
            }
          }
          else {
            if ((uVar11 & 0xffffffff) < 2) {
              uVar8 = uVar8 & uVar4 - 1;
            }
            else if (uVar4 <= uVar8) {
              uVar2 = 0;
              if (uVar4 != 0) {
                uVar2 = uVar8 / uVar4;
              }
              uVar8 = uVar8 - uVar2 * uVar4;
            }
            if (uVar8 != uVar6) {
              return (long *)0x0;
            }
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      return plVar3;
    }
  }
  return (long *)0x0;
}



// ===== 0x0000b45c  FUN_0000b45c

void FUN_0000b45c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined auVar6 [16];
  undefined8 local_38;
  
  _os_unfair_lock_lock(&DAT_0001ce38);
  if ((DAT_0001ce3c & 1) == 0) {
    DAT_0001ce3c = 1;
    objc_msgSend_stringWithUTF8String_
              (PTR__OBJC_CLASS___NSString_0001c1c8,extraout_x1,
               "\n#include <metal_stdlib>\nusing namespace metal;\n\nstruct Uniforms {\n    float2 resolution;\n    float2 outputResolution;\n    float2 screenResolution;\n    float2 cardOrigin;\n    float2 wallpaperResolution;\n    float2 lensOrigin;\n    float  radius;\n    float  bezelWidth;\n    float  glassThickness;\n    float  refractionScale;\n    float  refractiveIndex;\n    float2 wallpaperOrigin;\n    float2 samplingTransformX;\n    float2 samplingTransformY;\n    float2 samplingTransformOffset;\n    float  samplingOrientation;\n    float  backdropZoom;\n    float  shapeScale;\n    float2 shapeOrigin;\n    float2 shapeSize;\n    float  useGlyphMask;\n    float  dispersionStrength;\n    float  fresnelGlareStrength;\n    float  borderWidthPixels;\n    float4 tintColor;\n};\n\nfloat quartzGlassEdgeProfile(float distanceFromEdge,\n                             float refractionHeight) {\n    float t = saturate(distanceFromEdge / max(refractionHeight, 0.001));\n    return 1.0 - sqrt(t * (2.0 - t));\n}\n\nfloat quartzGlassHighlight(float distanceFromEdge,\n                           float bezelWidth,\n                           float2 surfaceNormal,\n                           float strength,\n                           float angle) {\n    float normalLength = max(length(surfaceNormal), 0.001);\n    float2 normal = surfaceNormal / normalLength;\n    float ringWidth = clamp(bezelWidth * 0.24, 1.0, 2.5);\n    float aa = 1.0;\n\n    float outerCoverage = saturate(distanceFromEdge / aa + 0.5);\n    float innerCoverage = saturate((ringWidth - distanceFromEdge) / aa + 0.5);\n    float ring = outerCoverage * innerCoverage;\n    float radial = saturate(distanceFromEdge / ringWidth);\n    ring *= 1.0 - radial;\n\n    float2 lightDirection = float2(cos(angle), sin(angle));\n    float threshold = 0.15;\n    float directional = saturate((dot(lightDirection, normal) - threshold) /\n                                 max(1.0 - threshold, 0.0001));\n    float highlight = ring * directional;\n\n    float oppositeAttenuation = 1.35;\n    highlight /= max(1.0 + (1.0 - highlight) * oppositeAttenuation,\n   ..." /* TRUNCATED STRING LITERAL */
              );
    auVar6 = _objc_retainAutoreleasedReturnValue();
    uVar2 = auVar6._0_8_;
    local_38 = 0;
    lVar3 = objc_msgSend_newLibraryWithSource_options_error_(param_1,auVar6._8_8_,uVar2,0,&local_38)
    ;
    uVar4 = _objc_retain(local_38);
    lVar1 = DAT_0001c350;
    if (lVar3 == 0) {
      objc_msgSend_localizedDescription(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = _objc_retainAutorelease();
      objc_msgSend_UTF8String();
      FUN_00008748("Metal compile failed: %s");
      _objc_release(uVar5);
      _os_unfair_lock_unlock(&DAT_0001ce38);
      _objc_release(0);
      _objc_release(uVar4);
      _objc_release(uVar2);
      return;
    }
    DAT_0001c350 = lVar3;
    _objc_release(lVar1);
    FUN_00008748("shader library ready");
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _os_unfair_lock_unlock(&DAT_0001ce38);
  return;
}



// ===== 0x0000b58c  FUN_0000b58c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0000b58c(uint param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  float fVar5;
  undefined auVar6 [16];
  undefined auVar7 [16];
  undefined auVar8 [16];
  float fVar9;
  ulong local_40;
  int local_34;
  
  if (param_2 != (uint *)0x0) {
    uVar3 = (ulong)param_1;
    if ((&DAT_0001ce50)[param_1] == '\0') {
      iVar2 = 0x163de;
      if (param_1 != 1) {
        iVar2 = 0;
      }
      iVar1 = 0x163ab;
      if (param_1 != 0) {
        iVar1 = iVar2;
      }
      if (iVar1 == 0) {
        return 0;
      }
      local_34 = 0;
      iVar2 = _notify_register_check(iVar1,&local_34);
      if (iVar2 != 0) {
        return 0;
      }
      *(int *)(&DAT_0001ce40 + uVar3 * 4) = local_34;
      (&DAT_0001ce50)[uVar3] = 1;
      iVar2 = local_34;
    }
    else {
      iVar2 = *(int *)(&DAT_0001ce40 + uVar3 * 4);
    }
    if (-1 < iVar2) {
      local_40 = 0;
      iVar2 = _notify_get_state(iVar2,&local_40);
      fVar5 = DAT_000101a8;
      if (iVar2 == 0) {
        uVar4 = NEON_fmadd((float)(unkuint9)(local_40 >> 0x30) / DAT_000101a8,0x40000000,0xbf000000)
        ;
        param_2[1] = uVar4;
        auVar6._8_8_ = local_40;
        auVar6._0_8_ = local_40;
        auVar7[8] = (char)_UNK_000101b8;
        auVar7._0_8_ = _DAT_000101b0;
        auVar7[9] = (char)((ulong)_UNK_000101b8 >> 8);
        auVar7[10] = (char)((ulong)_UNK_000101b8 >> 0x10);
        auVar7[11] = (char)((ulong)_UNK_000101b8 >> 0x18);
        auVar7[12] = (char)((ulong)_UNK_000101b8 >> 0x20);
        auVar7[13] = (char)((ulong)_UNK_000101b8 >> 0x28);
        auVar7[14] = (char)((ulong)_UNK_000101b8 >> 0x30);
        auVar7[15] = (char)((ulong)_UNK_000101b8 >> 0x38);
        auVar7 = NEON_ushl(auVar6,auVar7,8);
        auVar8._2_6_ = 0;
        auVar8._0_2_ = auVar7._0_2_;
        auVar8[8] = auVar7[8];
        auVar8[9] = auVar7[9];
        auVar8._10_6_ = 0;
        auVar7 = NEON_ucvtf(auVar8,8);
        fVar9 = ((float)auVar7._8_8_ / 65535.0) * 2.0 + -0.5;
        *(ulong *)(param_2 + 2) = CONCAT44(fVar9,((float)auVar7._0_8_ / 65535.0) * 2.0 + -0.5);
        fVar5 = (float)NEON_fmadd((float)(unkuint9)(local_40 & 0xffff) / fVar5,0x40000000,0xbf000000
                                 );
        param_2[4] = (uint)fVar5;
        uVar4 = (uint)(0.0 < fVar9 && 0.0 < fVar5);
        *param_2 = uVar4;
        return uVar4;
      }
    }
  }
  return 0;
}



// ===== 0x0000b6e4  FUN_0000b6e4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000b6e4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulong in_tmp_ldXn;
  ulong uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong unaff_x30;
  ulong uVar11;
  uint uVar12;
  ushort uVar13;
  undefined auVar14 [16];
  undefined auVar15 [16];
  float fVar16;
  float fVar17;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  ulong uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined local_120 [32];
  __darwin_time_t _Stack_100;
  long lStack_f8;
  __darwin_time_t local_f0;
  long lStack_e8;
  __darwin_time_t _Stack_e0;
  long lStack_d8;
  __darwin_time_t local_d0;
  long lStack_c8;
  long local_c0;
  blkcnt_t bStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  __int64_t _Stack_a0;
  __int64_t _Stack_98;
  
  puVar6 = DAT_0001c208;
  lVar7 = DAT_0001c370;
  if (DAT_0001c208 == (undefined8 *)0xffffffffffffffff) {
    iVar4 = _open("/var/mobile/Library/Accessibility/systembox-clockglass-clock-mask-shared.bin",
                  0x1000000);
    if (-1 < iVar4) {
      uStack_a8._0_4_ = 0;
      uStack_a8._4_4_ = 0;
      local_b0._0_4_ = 0;
      local_b0._4_4_ = 0;
      _Stack_98 = 0;
      _Stack_a0 = 0;
      lStack_c8 = 0;
      local_d0 = 0;
      bStack_b8 = 0;
      local_c0 = 0;
      lStack_e8 = 0;
      local_f0 = 0;
      lStack_d8 = 0;
      _Stack_e0 = 0;
      local_120._24_4_ = 0;
      local_120._28_4_ = 0;
      local_120._16_4_ = 0.0;
      local_120._20_4_ = 0;
      lStack_f8 = 0;
      _Stack_100 = 0;
      local_120._8_8_ = 0;
      local_120._0_4_ = 0;
      local_120._4_2_ = 0;
      local_120._6_2_ = 0;
      iVar5 = _fstat(iVar4,(stat *)local_120);
      if ((iVar5 == 0) && (lVar7 = local_c0, 0x37 < local_c0)) {
        puVar6 = (undefined8 *)_mmap(0,local_c0,1,1,iVar4,0);
        _close(iVar4);
        if (puVar6 != (undefined8 *)0xffffffffffffffff) goto LAB_0000b724;
      }
      else {
        _close(iVar4);
      }
    }
  }
  else {
LAB_0000b724:
    DAT_0001c370 = lVar7;
    DAT_0001c208 = puVar6;
    puVar6 = DAT_0001c208;
    uVar1 = _UNK_000101c8;
    uVar8 = _DAT_000101c0;
    iVar4 = 3;
    do {
      if (in_tmp_ldXn == 0 || (in_tmp_ldXn & 1) != 0) break;
      uVar9 = puVar6[5];
      uVar11 = puVar6[4];
      auVar14._0_8_ = NEON_rev64(*puVar6,4);
      auVar14._8_8_ = uVar11;
      auVar15[8] = (char)uVar1;
      auVar15._0_8_ = uVar8;
      auVar15[9] = (char)((ulong)uVar1 >> 8);
      auVar15[10] = (char)((ulong)uVar1 >> 0x10);
      auVar15[11] = (char)((ulong)uVar1 >> 0x18);
      auVar15[12] = (char)((ulong)uVar1 >> 0x20);
      auVar15[13] = (char)((ulong)uVar1 >> 0x28);
      auVar15[14] = (char)((ulong)uVar1 >> 0x30);
      auVar15[15] = (char)((ulong)uVar1 >> 0x38);
      auVar15 = NEON_cmeq(auVar14,auVar15,4);
      uVar13 = NEON_umaxv(CONCAT17(auVar15[13],
                                   CONCAT16(auVar15[12],
                                            CONCAT15(auVar15[9],
                                                     CONCAT14(auVar15[8],
                                                              CONCAT13(~auVar15[5],
                                                                       CONCAT12(~auVar15[4],
                                                                                CONCAT11(~auVar15[1]
                                                                                         ,~auVar15[0
                                                  ]))))))),2);
      if ((((uVar13 & 1) != 0) || ((ulong)puVar6[1] < uVar9)) || (DAT_0001c370 - 0x38U < uVar9))
      break;
      uVar12 = (uint)(uVar11 >> 0x20);
      if (((((uVar9 != (ulong)uVar12 * (uVar11 & 0xffffffff)) ||
            (fVar16 = *(float *)(puVar6 + 6), ABS(fVar16) == INFINITY)) ||
           ((fVar16 < 0.5 ||
            ((4.0 < fVar16 || (fVar17 = *(float *)((long)puVar6 + 0x34), ABS(fVar17) == INFINITY))))
           )) || (fVar17 < 0.0)) || (100.0 < fVar17)) break;
      lVar10 = puVar6[3];
      uVar3 = in_tmp_ldXn;
      _os_unfair_lock_lock(&DAT_0001ce54);
      lVar7 = DAT_0001ce68;
      _os_unfair_lock_unlock(&DAT_0001ce54);
      if (lVar7 == lVar10) break;
      local_120._4_4_ = (uint)uVar11;
      local_120._0_4_ = 0x4c474333;
      local_120._8_8_ = CONCAT44(fVar16,uVar12);
      local_120._20_4_ = (undefined4)lVar10;
      local_120._24_4_ = (undefined4)((ulong)lVar10 >> 0x20);
      local_120._16_4_ = fVar17;
      objc_msgSend_dataWithBytes_length_
                (PTR__OBJC_CLASS___NSMutableData_0001c1e0,extraout_x1,(stat *)local_120,0x1c);
      auVar15 = _objc_retainAutoreleasedReturnValue();
      lVar7 = auVar15._0_8_;
      objc_msgSend_appendBytes_length_(lVar7,auVar15._8_8_,DAT_0001c208 + 7,uVar9);
      if ((in_tmp_ldXn == uVar3) && ((uVar3 & 1) == 0)) {
        _os_unfair_lock_lock(&DAT_0001ce54);
        lVar2 = DAT_0001c368;
        DAT_0001c368 = lVar7;
        _objc_release(lVar2);
        DAT_0001c23c = fVar16;
        DAT_0001c240 = fVar17;
        DAT_0001ce58 = (uint)uVar11;
        DAT_0001ce5c = uVar12;
        DAT_0001ce68 = lVar10;
        _os_unfair_lock_unlock(&DAT_0001ce54);
        break;
      }
      _objc_release(lVar7);
      iVar4 = iVar4 + -1;
      in_tmp_ldXn = uVar3;
    } while (iVar4 != 0);
  }
  _os_unfair_lock_lock(&DAT_0001ce54);
  uVar9 = (ulong)DAT_0001ce58;
  uVar11 = (ulong)DAT_0001ce5c;
  if ((DAT_0001c368 == 0 || DAT_0001ce58 == 0) || DAT_0001ce5c == 0) {
    uVar8 = 0;
    goto LAB_0000bad8;
  }
  uVar8 = extraout_x1_00;
  if ((DAT_0001c360 == 0) || (DAT_0001ce60 != DAT_0001ce68)) {
LAB_0000ba2c:
    objc_msgSend_texture2DDescriptorWithPixelFormat_width_height_mipmapped_
              (PTR__OBJC_CLASS___MTLTextureDescriptor_0001c1d8,uVar8,10,uVar9,uVar11,0);
    auVar15 = _objc_retainAutoreleasedReturnValue();
    uVar8 = auVar15._0_8_;
    objc_msgSend_setUsage_(uVar8,auVar15._8_8_,1);
    lVar7 = objc_msgSend_newTextureWithDescriptor_(param_1,extraout_x1_02,uVar8);
    if (lVar7 != 0) {
      auVar15 = objc_msgSend_bytes(DAT_0001c368);
      local_150 = 0;
      uStack_148 = 0;
      local_140 = 0;
      uStack_128 = 1;
      uStack_138 = uVar9;
      local_130 = uVar11;
      objc_msgSend_replaceRegion_mipmapLevel_withBytes_bytesPerRow_
                (lVar7,auVar15._8_8_,&local_150,0,auVar15._0_8_ + 0x1c,uVar9);
      _objc_storeStrong(&DAT_0001c360,lVar7);
      DAT_0001ce60 = DAT_0001ce68;
    }
    _objc_release(lVar7);
    _objc_release(uVar8);
  }
  else {
    objc_msgSend_device();
    lVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_release();
    uVar8 = extraout_x1_01;
    if (lVar7 != param_1) goto LAB_0000ba2c;
  }
  uVar8 = _objc_retain(DAT_0001c360);
LAB_0000bad8:
  _os_unfair_lock_unlock(&DAT_0001ce54);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) == 0) {
    _objc_autoreleaseReturnValue(uVar8);
    return;
  }
                    /* WARNING: Treating indirect jump as call */
  UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xbb1c);
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



// ===== 0x0000bb20  FUN_0000bb20

undefined * FUN_0000bb20(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined local_c0 [32];
  __darwin_time_t _Stack_a0;
  long lStack_98;
  __darwin_time_t local_90;
  long lStack_88;
  __darwin_time_t _Stack_80;
  long lStack_78;
  __darwin_time_t local_70;
  long lStack_68;
  long local_60;
  blkcnt_t bStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  __int64_t _Stack_40;
  __int64_t _Stack_38;
  
  if (param_1 == (undefined8 *)0x0) {
    return (undefined *)0x0;
  }
  if (DAT_0001ce70 == (undefined8 *)0x0) {
    uVar8 = 0x1b6;
    iVar3 = _open("/var/mobile/Library/Accessibility/systembox-clockglass-coversheet-state.bin",0);
    if (iVar3 < 0) {
      return (undefined *)0x0;
    }
    uStack_48._0_4_ = 0;
    uStack_48._4_4_ = 0;
    local_50._0_4_ = 0;
    local_50._4_4_ = 0;
    _Stack_38 = 0;
    _Stack_40 = 0;
    lStack_68 = 0;
    local_70 = 0;
    bStack_58 = 0;
    local_60 = 0;
    lStack_88 = 0;
    local_90 = 0;
    lStack_78 = 0;
    _Stack_80 = 0;
    local_c0._24_4_ = 0;
    local_c0._28_4_ = 0;
    local_c0._16_4_ = 0;
    local_c0._20_4_ = 0;
    lStack_98 = 0;
    _Stack_a0 = 0;
    local_c0._8_8_ = 0;
    local_c0._0_4_ = 0;
    local_c0._4_2_ = 0;
    local_c0._6_2_ = 0;
    iVar4 = _fstat(iVar3,(stat *)local_c0);
    if ((iVar4 != 0) || (local_60 < 0x1c)) {
      _close(iVar3);
      return (undefined *)0x0;
    }
    puVar5 = (undefined8 *)_mmap(0,0x1c,1,1,iVar3,0,in_x6,in_x7,uVar8);
    _close(iVar3);
    if (puVar5 == (undefined8 *)0xffffffffffffffff) {
      return (undefined *)0x0;
    }
    DAT_0001ce70 = puVar5;
    if (puVar5 == (undefined8 *)0x0) {
      return (undefined *)0x0;
    }
  }
  puVar5 = DAT_0001ce70;
  if (*(int *)DAT_0001ce70 == 0x4c474353) {
    iVar3 = 4;
    do {
      uVar1 = *(uint *)((long)puVar5 + 4);
      if ((uVar1 & 1) == 0) {
        uVar6 = puVar5[1];
        uVar8 = *puVar5;
        uVar7 = *(undefined8 *)((long)puVar5 + 0xc);
        *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)puVar5 + 0x14);
        *(undefined8 *)((long)param_1 + 0xc) = uVar7;
        param_1[1] = uVar6;
        *param_1 = uVar8;
        uVar2 = *(uint *)((long)puVar5 + 4);
        if ((uVar1 == uVar2 && (uVar2 & 1) == 0) && (*(int *)param_1 == 0x4c474353)) {
          return (undefined *)((long)&mach_header_00000000.magic + 1);
        }
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return (undefined *)0x0;
}



// ===== 0x0000bc60  FUN_0000bc60

void FUN_0000bc60(undefined8 param_1,undefined8 *****param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  ulong unaff_x30;
  undefined auVar7 [16];
  undefined auVar8 [16];
  undefined auVar9 [16];
  undefined8 *****local_70;
  undefined8 local_68;
  undefined auStack_60 [8];
  undefined8 *****local_58;
  
  FUN_0000b45c();
  if (DAT_0001c350 == 0 || DAT_0001c3e8 == 0) {
    lVar6 = 0;
  }
  else {
    _os_unfair_lock_lock(&DAT_0001ce38);
    local_58 = param_2;
    auVar7 = FUN_0000c474(DAT_0001c3e8,&local_58);
    if (auVar7._0_8_ == 0) {
      auVar7 = objc_msgSend_newFunctionWithName_(DAT_0001c350,auVar7._8_8_,&cf_liquidGlassVertex);
      uVar1 = objc_msgSend_newFunctionWithName_(DAT_0001c350,auVar7._8_8_,&cf_liquidGlassFragment);
      auVar8 = _objc_opt_new(PTR__OBJC_CLASS___MTLRenderPipelineDescriptor_0001c1e8);
      uVar2 = auVar8._0_8_;
      objc_msgSend_setVertexFunction_(uVar2,auVar8._8_8_,auVar7._0_8_);
      objc_msgSend_setFragmentFunction_(uVar2,extraout_x1,uVar1);
      objc_msgSend_colorAttachments(uVar2);
      auVar8 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_objectAtIndexedSubscript_(auVar8._0_8_,auVar8._8_8_,0);
      auVar9 = _objc_retainAutoreleasedReturnValue();
      objc_msgSend_setPixelFormat_(auVar9._0_8_,auVar9._8_8_,param_2);
      _objc_release(auVar9._0_8_);
      _objc_release(auVar8._0_8_);
      local_68 = 0;
      lVar6 = objc_msgSend_newRenderPipelineStateWithDescriptor_error_
                        (param_1,extraout_x1_00,uVar2,&local_68);
      uVar3 = _objc_retain(local_68);
      if (lVar6 == 0) {
        objc_msgSend_localizedDescription(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = _objc_retainAutorelease();
        objc_msgSend_UTF8String();
        FUN_00008748("Render pipeline state failed fmt=%lu: %s");
        _objc_release(uVar5);
      }
      else {
        local_58 = &local_70;
        local_70 = param_2;
        lVar4 = FUN_0000c528(DAT_0001c3e8,&local_70,&DAT_000101d0,&local_58,auStack_60);
        _objc_storeStrong(lVar4 + 0x18,lVar6);
        FUN_00008748("render pipeline ready fmt=%lu");
      }
      _os_unfair_lock_unlock(&DAT_0001ce38);
      _objc_release(uVar3);
      _objc_release(uVar2);
      _objc_release(uVar1);
      _objc_release(auVar7._0_8_);
    }
    else {
      lVar6 = _objc_retain(*(undefined8 *)(auVar7._0_8_ + 0x18));
      _os_unfair_lock_unlock(&DAT_0001ce38);
    }
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xbe74);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleaseReturnValue(lVar6);
  return;
}



// ===== 0x0000be78  FUN_0000be78

long * FUN_0000be78(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long **pplVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar1 = *param_2;
    uVar5 = (ulong)uVar1;
    uVar10 = NEON_cnt(uVar4,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
    if ((uVar11 & 0xffffffff) < 2) {
      uVar6 = (ulong)((int)uVar4 - 1U & uVar1);
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar5 / uVar4;
        }
        uVar6 = uVar5 - uVar6 * uVar4;
      }
    }
    pplVar7 = *(long ***)(*param_1 + uVar6 * 8);
    if (pplVar7 != (long **)0x0) {
      plVar3 = *pplVar7;
      if (plVar3 != (long *)0x0) {
        do {
          uVar8 = plVar3[1];
          if (uVar8 == uVar5) {
            if (*(uint *)(plVar3 + 2) == uVar1) {
              return plVar3;
            }
          }
          else {
            if ((uVar11 & 0xffffffff) < 2) {
              uVar8 = uVar8 & uVar4 - 1;
            }
            else if (uVar4 <= uVar8) {
              uVar2 = 0;
              if (uVar4 != 0) {
                uVar2 = uVar8 / uVar4;
              }
              uVar8 = uVar8 - uVar2 * uVar4;
            }
            if (uVar8 != uVar6) {
              return (long *)0x0;
            }
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      return plVar3;
    }
  }
  return (long *)0x0;
}



// ===== 0x0000bf2c  FUN_0000bf2c

long * FUN_0000bf2c(long *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long **pplVar7;
  ulong uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar4 = param_1[1];
  if (uVar4 != 0) {
    uVar1 = *param_2;
    uVar5 = (ulong)uVar1;
    uVar10 = NEON_cnt(uVar4,1);
    uVar9 = NEON_uaddlv(uVar10,1);
    uVar11 = CONCAT62((int6)((ulong)uVar10 >> 0x10),uVar9);
    if ((uVar11 & 0xffffffff) < 2) {
      uVar6 = (ulong)((int)uVar4 - 1U & uVar1);
    }
    else {
      uVar6 = uVar5;
      if (uVar4 <= uVar5) {
        uVar6 = 0;
        if (uVar4 != 0) {
          uVar6 = uVar5 / uVar4;
        }
        uVar6 = uVar5 - uVar6 * uVar4;
      }
    }
    pplVar7 = *(long ***)(*param_1 + uVar6 * 8);
    if (pplVar7 != (long **)0x0) {
      plVar3 = *pplVar7;
      if (plVar3 != (long *)0x0) {
        do {
          uVar8 = plVar3[1];
          if (uVar8 == uVar5) {
            if (*(uint *)(plVar3 + 2) == uVar1) {
              return plVar3;
            }
          }
          else {
            if ((uVar11 & 0xffffffff) < 2) {
              uVar8 = uVar8 & uVar4 - 1;
            }
            else if (uVar4 <= uVar8) {
              uVar2 = 0;
              if (uVar4 != 0) {
                uVar2 = uVar8 / uVar4;
              }
              uVar8 = uVar8 - uVar2 * uVar4;
            }
            if (uVar8 != uVar6) {
              return (long *)0x0;
            }
          }
          plVar3 = (long *)*plVar3;
        } while (plVar3 != (long *)0x0);
      }
      return plVar3;
    }
  }
  return (long *)0x0;
}



// ===== 0x0000bfe0  FUN_0000bfe0

undefined  [16] FUN_0000bfe0(long *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  ulong uVar2;
  long **pplVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  
  uVar1 = *param_2;
  plVar9 = (long *)(ulong)uVar1;
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar11 = NEON_cnt(plVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar2 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x24 = (long *)(ulong)((int)plVar8 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar9;
      if (plVar8 <= plVar9) {
        uVar4 = 0;
        if (plVar8 != (long *)0x0) {
          uVar4 = (ulong)plVar9 / (ulong)plVar8;
        }
        unaff_x24 = (long *)((long)plVar9 - uVar4 * (long)plVar8);
      }
    }
    pplVar7 = *(long ***)(*param_1 + (long)unaff_x24 * 8);
    if (pplVar7 != (long **)0x0) {
      do {
        pplVar7 = (long **)*pplVar7;
        if (pplVar7 == (long **)0x0) goto LAB_0000c0a8;
        plVar6 = pplVar7[1];
        if (plVar6 != plVar9) {
          if (uVar2 < 2) {
            plVar6 = (long *)((ulong)plVar6 & (ulong)((long)plVar8 + -1));
          }
          else if (plVar8 <= plVar6) {
            uVar4 = 0;
            if (plVar8 != (long *)0x0) {
              uVar4 = (ulong)plVar6 / (ulong)plVar8;
            }
            plVar6 = (long *)((long)plVar6 - uVar4 * (long)plVar8);
          }
          if (plVar6 != unaff_x24) goto LAB_0000c0a8;
        }
      } while (*(uint *)(pplVar7 + 2) != uVar1);
      uVar11 = 0;
      goto LAB_0000c1c8;
    }
  }
LAB_0000c0a8:
  pplVar7 = (long **)operator_new(0x18);
  *(undefined4 *)(pplVar7 + 2) = *param_3;
  *pplVar7 = (long *)0x0;
  pplVar7[1] = plVar9;
  if (*(float *)(param_1 + 4) * (float)ZEXT89(plVar8) < (float)(unkuint9)(param_1[3] + 1) ||
      plVar8 == (long *)0x0) {
    uVar2 = 1;
    if ((long *)((long)&mach_header_00000000.magic + 2) < plVar8) {
      uVar2 = (ulong)(((ulong)plVar8 & (ulong)((long)plVar8 + -1)) != 0);
    }
    uVar2 = uVar2 | (long)plVar8 << 1;
    uVar4 = (ulong)((float)(unkuint9)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_0000c228(param_1,uVar2);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (ulong)((long)plVar8 + -1)) == 0) {
      unaff_x24 = (long *)(ulong)((int)plVar8 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar9;
      if (plVar8 <= plVar9) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar8;
        }
        unaff_x24 = (long *)((long)plVar9 - uVar2 * (long)plVar8);
      }
    }
  }
  lVar5 = *param_1;
  plVar9 = *(long **)(lVar5 + (long)unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    pplVar3 = (long **)(param_1 + 2);
    *pplVar7 = *pplVar3;
    *pplVar3 = (long *)pplVar7;
    *(long ***)(lVar5 + (long)unaff_x24 * 8) = pplVar3;
    if (*pplVar7 != (long *)0x0) {
      plVar9 = *(long **)((long)*pplVar7 + 8);
      if (((ulong)plVar8 & (ulong)(undefined *)((long)plVar8 + -1)) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (ulong)(undefined *)((long)plVar8 + -1));
      }
      else if (plVar8 <= plVar9) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar8;
        }
        plVar9 = (long *)((long)plVar9 - uVar2 * (long)plVar8);
      }
      plVar9 = (long *)(*param_1 + (long)plVar9 * 8);
      goto LAB_0000c1b4;
    }
  }
  else {
    *pplVar7 = (long *)*plVar9;
LAB_0000c1b4:
    *plVar9 = (long)pplVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar11 = 1;
LAB_0000c1c8:
  auVar12._8_8_ = uVar11;
  auVar12._0_8_ = pplVar7;
  return auVar12;
}



// ===== 0x0000c1f4  FUN_0000c1f4

void FUN_0000c1f4(void)

{
  bad_array_new_length *this;
  undefined8 uVar1;
  
  this = (bad_array_new_length *)___cxa_allocate_exception(8);
  uVar1 = std::bad_array_new_length::bad_array_new_length(this);
                    /* WARNING: Subroutine does not return */
  ___cxa_throw(uVar1,PTR_typeinfo_000182a0,PTR__bad_array_new_length_00018298);
}



// ===== 0x0000c228  FUN_0000c228

void FUN_0000c228(long param_1,ulong param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x30;
  undefined2 uVar4;
  undefined8 uVar5;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__1::__next_prime(param_2);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < param_2) goto LAB_0000c2e0;
  if (uVar3 <= param_2) {
    return;
  }
  uVar2 = (ulong)((float)(unkuint9)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
  if (uVar3 < 3) {
LAB_0000c2cc:
    uVar2 = std::__1::__next_prime(uVar2);
  }
  else {
    uVar5 = NEON_cnt(uVar3,1);
    uVar4 = NEON_uaddlv(uVar5,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar4)) goto LAB_0000c2cc;
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
LAB_0000c2e0:
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xc304);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000c318(param_1,param_2);
  return;
}



// ===== 0x0000c318  FUN_0000c318

long * FUN_0000c318(long **param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  void **ppvVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void **ppvVar8;
  ulong uVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  undefined2 uVar13;
  undefined8 uVar14;
  undefined auVar15 [16];
  
  if (param_2 == (long *)0x0) {
    plVar3 = *param_1;
    *param_1 = (long *)0x0;
    if (plVar3 != (long *)0x0) {
      operator_delete(plVar3);
    }
    param_1[1] = (long *)0x0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      auVar15 = FUN_0000c1f4();
      uVar5 = auVar15._0_8_[1];
      if (uVar5 != 0) {
        uVar6 = *auVar15._8_8_;
        uVar14 = NEON_cnt(uVar5,1);
        uVar13 = NEON_uaddlv(uVar14,1);
        uVar7 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
        if (uVar7 < 2) {
          uVar9 = uVar5 - 1 & uVar6;
        }
        else {
          uVar9 = uVar6;
          if (uVar5 <= uVar6) {
            uVar9 = 0;
            if (uVar5 != 0) {
              uVar9 = uVar6 / uVar5;
            }
            uVar9 = uVar6 - uVar9 * uVar5;
          }
        }
        pplVar10 = *(long ***)(*auVar15._0_8_ + uVar9 * 8);
        if (pplVar10 != (long **)0x0) {
          plVar3 = *pplVar10;
          if (plVar3 != (long *)0x0) {
            do {
              uVar12 = plVar3[1];
              if (uVar12 == uVar6) {
                if (plVar3[2] == uVar6) {
                  return plVar3;
                }
              }
              else {
                if (uVar7 < 2) {
                  uVar12 = uVar12 & uVar5 - 1;
                }
                else if (uVar5 <= uVar12) {
                  uVar1 = 0;
                  if (uVar5 != 0) {
                    uVar1 = uVar12 / uVar5;
                  }
                  uVar12 = uVar12 - uVar1 * uVar5;
                }
                if (uVar12 != uVar9) {
                  return (long *)0x0;
                }
              }
              plVar3 = (long *)*plVar3;
            } while (plVar3 != (long *)0x0);
          }
          return plVar3;
        }
      }
      return (long *)0x0;
    }
    plVar2 = (long *)operator_new((long)param_2 << 3);
    plVar3 = *param_1;
    *param_1 = plVar2;
    if (plVar3 != (long *)0x0) {
      operator_delete(plVar3);
    }
    plVar2 = (long *)0x0;
    param_1[1] = param_2;
    do {
      (*param_1)[(long)plVar2] = 0;
      plVar2 = (long *)((long)plVar2 + 1);
    } while (param_2 != plVar2);
    ppvVar4 = (void **)param_1[2];
    if (ppvVar4 != (void **)0x0) {
      plVar2 = (long *)ppvVar4[1];
      uVar14 = NEON_cnt(param_2,1);
      uVar13 = NEON_uaddlv(uVar14,1);
      uVar5 = CONCAT62((int6)((ulong)uVar14 >> 0x10),uVar13) & 0xffffffff;
      if (uVar5 < 2) {
        plVar2 = (long *)((ulong)plVar2 & (long)param_2 - 1U);
      }
      else if (param_2 <= plVar2) {
        uVar6 = 0;
        if (param_2 != (long *)0x0) {
          uVar6 = (ulong)plVar2 / (ulong)param_2;
        }
        plVar2 = (long *)((long)plVar2 - uVar6 * (long)param_2);
      }
      (*param_1)[(long)plVar2] = (long)(param_1 + 2);
      ppvVar8 = (void **)*ppvVar4;
      if (ppvVar8 != (void **)0x0) {
        do {
          plVar11 = (long *)ppvVar8[1];
          if (uVar5 < 2) {
            plVar11 = (long *)((ulong)plVar11 & (long)param_2 - 1U);
          }
          else if (param_2 <= plVar11) {
            uVar6 = 0;
            if (param_2 != (long *)0x0) {
              uVar6 = (ulong)plVar11 / (ulong)param_2;
            }
            plVar11 = (long *)((long)plVar11 - uVar6 * (long)param_2);
          }
          if (plVar11 != plVar2) {
            if ((*param_1)[(long)plVar11] == 0) {
              (*param_1)[(long)plVar11] = (long)ppvVar4;
              plVar2 = plVar11;
            }
            else {
              *ppvVar4 = *ppvVar8;
              *ppvVar8 = *(void **)(*param_1)[(long)plVar11];
              *(void ***)(*param_1)[(long)plVar11] = ppvVar8;
              ppvVar8 = ppvVar4;
            }
          }
          ppvVar4 = ppvVar8;
          ppvVar8 = (void **)*ppvVar4;
        } while (ppvVar8 != (void **)0x0);
      }
    }
  }
  return plVar3;
}



// ===== 0x0000c474  FUN_0000c474

long * FUN_0000c474(long *param_1,ulong *param_2)

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



// ===== 0x0000c528  FUN_0000c528

undefined  [16] FUN_0000c528(long *param_1,long **param_2,undefined8 param_3,undefined8 *param_4)

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
        if (pplVar1 == (long **)0x0) goto LAB_0000c5f8;
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
          if (plVar6 != unaff_x24) goto LAB_0000c5f8;
        }
      } while (pplVar1[2] != plVar8);
      uVar10 = 0;
      goto LAB_0000c734;
    }
  }
LAB_0000c5f8:
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
    FUN_0000c76c(param_1,uVar2);
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
LAB_0000c734:
  auVar11._8_8_ = uVar10;
  auVar11._0_8_ = pplVar1;
  return auVar11;
}



// ===== 0x0000c76c  FUN_0000c76c

void FUN_0000c76c(long param_1,ulong param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x30;
  undefined2 uVar4;
  undefined8 uVar5;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__1::__next_prime(param_2);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < param_2) goto LAB_0000c824;
  if (uVar3 <= param_2) {
    return;
  }
  uVar2 = (ulong)((float)(unkuint9)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
  if (uVar3 < 3) {
LAB_0000c810:
    uVar2 = std::__1::__next_prime(uVar2);
  }
  else {
    uVar5 = NEON_cnt(uVar3,1);
    uVar4 = NEON_uaddlv(uVar5,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar4)) goto LAB_0000c810;
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
LAB_0000c824:
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xc848);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000c85c(param_1,param_2);
  return;
}



// ===== 0x0000c85c  FUN_0000c85c

/* WARNING: Removing unreachable block (ram,0x0000c9fc) */

void FUN_0000c85c(void **param_1,void *param_2)

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
      auVar9 = FUN_0000c1f4();
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



// ===== 0x0000c9b8  FUN_0000c9b8

void FUN_0000c9b8(long param_1,void *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong unaff_x30;
  
  if (*(char *)(param_1 + 8) == '\0') {
    if (param_2 == (void *)0x0) {
      return;
    }
  }
  else {
    _objc_release(*(undefined8 *)((long)param_2 + 0x18));
  }
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xca00);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  operator_delete(param_2);
  return;
}



// ===== 0x0000ca10  FUN_0000ca10

void FUN_0000ca10(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
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
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined auVar18 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = PTR__OBJC_CLASS___NSDictionary_0001c1b0;
  FUN_000086f4();
  auVar18 = _objc_retainAutoreleasedReturnValue();
  objc_msgSend_dictionaryWithContentsOfFile_(puVar2,auVar18._8_8_,auVar18._0_8_);
  lVar4 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar18._0_8_);
  objc_msgSend_objectForKeyedSubscript_(lVar4,extraout_x1,&cf_Debug_Logging_Enabled);
  uVar5 = _objc_retainAutoreleasedReturnValue();
  uVar6 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
  auVar18 = _objc_opt_isKindOfClass(uVar5,uVar6);
  uVar6 = auVar18._8_8_;
  if ((auVar18 & (undefined  [16])0x1) == (undefined  [16])0x0) {
    _gLGBackboardDebugLogging = 0;
  }
  else {
    _gLGBackboardDebugLogging = objc_msgSend_boolValue(uVar5);
    uVar6 = extraout_x1_00;
  }
  DAT_0001c238 = 0;
  DAT_0001c244 = 64.0;
  objc_msgSend_objectForKeyedSubscript_(lVar4,uVar6,&cf_CoverSheet_CornerRadius);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  uVar6 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
  auVar18 = _objc_opt_isKindOfClass(uVar7,uVar6);
  uVar6 = auVar18._8_8_;
  if (((auVar18 & (undefined  [16])0x1) != (undefined  [16])0x0) &&
     (DAT_0001c244 = (float)objc_msgSend_floatValue(uVar7), uVar6 = extraout_x1_01,
     DAT_0001c244 <= 0.0)) {
    DAT_0001c244 = 0.0;
  }
  lVar15 = 0;
  lVar14 = 0;
  do {
    if (DAT_0001ce78 == '\x01') {
      uVar16 = *(undefined4 *)((long)&DAT_0001c448 + lVar15);
      uVar13 = (&DAT_0001cd48)[lVar14];
    }
    else {
      uVar16 = 0;
      uVar13 = 0;
    }
    puVar1 = (undefined8 *)(&DAT_0001c438 + lVar15);
    *(undefined8 *)((long)&DAT_0001c460 + lVar15) = *(undefined8 *)(&UNK_00018358 + lVar15);
    *(undefined8 *)((long)&DAT_0001c458 + lVar15) = *(undefined8 *)(&DAT_00018350 + lVar15);
    *(undefined8 *)((long)&DAT_0001c470 + lVar15) = *(undefined8 *)(&UNK_00018368 + lVar15);
    *(undefined8 *)((long)&DAT_0001c468 + lVar15) = *(undefined8 *)(&DAT_00018360 + lVar15);
    uVar12 = *(undefined8 *)(&DAT_00018370 + lVar15);
    *(undefined8 *)(lVar15 + 0x1c480) = *(undefined8 *)(&UNK_00018378 + lVar15);
    *(undefined8 *)(&DAT_0001c478 + lVar15) = uVar12;
    uVar17 = *(undefined8 *)((long)&PTR_s_com_wkk_systembox_clockglass_ref_00018330 + lVar15);
    uVar9 = *(undefined8 *)(&UNK_00018348 + lVar15);
    uVar12 = *(undefined8 *)(&DAT_00018340 + lVar15);
    *(undefined8 *)(lVar15 + 0x1c440) = *(undefined8 *)((long)&PTR_s_Default_00018338 + lVar15);
    *puVar1 = uVar17;
    *(undefined8 *)((long)&DAT_0001c450 + lVar15) = uVar9;
    *(undefined8 *)((long)&DAT_0001c448 + lVar15) = uVar12;
    *(undefined4 *)((long)&DAT_0001c448 + lVar15) = uVar16;
    (&DAT_0001cd48)[lVar14] = uVar13;
    if (lVar15 != 0) {
      FUN_0000d328(lVar14,puVar1,0);
      FUN_0000d328(lVar14,puVar1,1);
      uVar6 = extraout_x1_02;
    }
    if (lVar4 != 0) {
      objc_msgSend_stringWithUTF8String_
                (PTR__OBJC_CLASS___NSString_0001c1c8,uVar6,
                 *(undefined8 *)((long)&PTR_s_Default_00018338 + lVar15));
      auVar18 = _objc_retainAutoreleasedReturnValue();
      uVar6 = auVar18._0_8_;
      if (lVar15 != 0x500) {
        objc_msgSend_stringByAppendingString_(uVar6,auVar18._8_8_,&cf__BezelWidth);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        uVar12 = auVar18._0_8_;
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,uVar12);
        lVar8 = _objc_retainAutoreleasedReturnValue();
        if (lVar8 == 0) {
          _objc_release(uVar12);
          uVar12 = extraout_x1_05;
        }
        else {
          uVar9 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
          uVar10 = _objc_opt_isKindOfClass(lVar8,uVar9);
          _objc_release(uVar12);
          uVar12 = extraout_x1_03;
          if ((uVar10 & 1) != 0) {
            uVar16 = objc_msgSend_floatValue(lVar8);
            *(undefined4 *)((long)&DAT_0001c450 + lVar15) = uVar16;
            uVar12 = extraout_x1_04;
          }
        }
        objc_msgSend_stringByAppendingString_(uVar6,uVar12,&cf__GlassThickness);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        uVar12 = auVar18._0_8_;
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,uVar12);
        lVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        if (lVar11 == 0) {
          _objc_release(uVar12);
          uVar12 = extraout_x1_08;
        }
        else {
          uVar9 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
          uVar10 = _objc_opt_isKindOfClass(lVar11,uVar9);
          _objc_release(uVar12);
          uVar12 = extraout_x1_06;
          if ((uVar10 & 1) != 0) {
            uVar16 = objc_msgSend_floatValue(lVar11);
            *(undefined4 *)((long)&DAT_0001c454 + lVar15) = uVar16;
            uVar12 = extraout_x1_07;
          }
        }
        objc_msgSend_stringByAppendingString_(uVar6,uVar12,&cf__RefractionScale);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        uVar12 = auVar18._0_8_;
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,uVar12);
        lVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        if (lVar8 == 0) {
          _objc_release(uVar12);
          uVar12 = extraout_x1_11;
        }
        else {
          uVar9 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
          uVar10 = _objc_opt_isKindOfClass(lVar8,uVar9);
          _objc_release(uVar12);
          uVar12 = extraout_x1_09;
          if ((uVar10 & 1) != 0) {
            uVar16 = objc_msgSend_floatValue(lVar8);
            *(undefined4 *)((long)&DAT_0001c458 + lVar15) = uVar16;
            uVar12 = extraout_x1_10;
          }
        }
        objc_msgSend_stringByAppendingString_(uVar6,uVar12,&cf__RefractiveIndex);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        uVar12 = auVar18._0_8_;
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,uVar12);
        lVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        if (lVar11 == 0) {
          _objc_release(uVar12);
          uVar12 = extraout_x1_14;
        }
        else {
          uVar9 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
          uVar10 = _objc_opt_isKindOfClass(lVar11,uVar9);
          _objc_release(uVar12);
          uVar12 = extraout_x1_12;
          if ((uVar10 & 1) != 0) {
            uVar16 = objc_msgSend_floatValue(lVar11);
            *(undefined4 *)((long)&DAT_0001c45c + lVar15) = uVar16;
            uVar12 = extraout_x1_13;
          }
        }
        objc_msgSend_stringByAppendingString_(uVar6,uVar12,&cf__DispersionStrength);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        uVar12 = auVar18._0_8_;
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,uVar12);
        lVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        if (lVar8 == 0) {
          _objc_release(uVar12);
          uVar12 = extraout_x1_17;
        }
        else {
          uVar9 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
          uVar10 = _objc_opt_isKindOfClass(lVar8,uVar9);
          _objc_release(uVar12);
          uVar12 = extraout_x1_15;
          if ((uVar10 & 1) != 0) {
            uVar16 = objc_msgSend_floatValue(lVar8);
            *(undefined4 *)((long)&DAT_0001c460 + lVar15) = uVar16;
            uVar12 = extraout_x1_16;
          }
        }
        objc_msgSend_stringByAppendingString_(uVar6,uVar12,&cf__TintR);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        uVar12 = auVar18._0_8_;
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,uVar12);
        lVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        if (lVar11 == 0) {
          _objc_release(uVar12);
          uVar12 = extraout_x1_20;
        }
        else {
          uVar9 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
          uVar10 = _objc_opt_isKindOfClass(lVar11,uVar9);
          _objc_release(uVar12);
          uVar12 = extraout_x1_18;
          if ((uVar10 & 1) != 0) {
            uVar16 = objc_msgSend_floatValue(lVar11);
            *(undefined4 *)((long)&DAT_0001c464 + lVar15) = uVar16;
            uVar12 = extraout_x1_19;
          }
        }
        objc_msgSend_stringByAppendingString_(uVar6,uVar12,&cf__TintG);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        uVar12 = auVar18._0_8_;
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,uVar12);
        lVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        if (lVar8 == 0) {
          _objc_release(uVar12);
          uVar12 = extraout_x1_23;
        }
        else {
          uVar9 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
          uVar10 = _objc_opt_isKindOfClass(lVar8,uVar9);
          _objc_release(uVar12);
          uVar12 = extraout_x1_21;
          if ((uVar10 & 1) != 0) {
            uVar16 = objc_msgSend_floatValue(lVar8);
            *(undefined4 *)((long)&DAT_0001c468 + lVar15) = uVar16;
            uVar12 = extraout_x1_22;
          }
        }
        objc_msgSend_stringByAppendingString_(uVar6,uVar12,&cf__TintB);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        uVar12 = auVar18._0_8_;
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,uVar12);
        lVar11 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        if (lVar11 == 0) {
          _objc_release(uVar12);
          uVar12 = extraout_x1_26;
        }
        else {
          uVar9 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
          uVar10 = _objc_opt_isKindOfClass(lVar11,uVar9);
          _objc_release(uVar12);
          uVar12 = extraout_x1_24;
          if ((uVar10 & 1) != 0) {
            uVar16 = objc_msgSend_floatValue(lVar11);
            *(undefined4 *)((long)&DAT_0001c46c + lVar15) = uVar16;
            uVar12 = extraout_x1_25;
          }
        }
        objc_msgSend_stringByAppendingString_(uVar6,uVar12,&cf__TintStrength);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        uVar12 = auVar18._0_8_;
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,uVar12);
        lVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar11);
        if (lVar8 == 0) {
          _objc_release(uVar12);
          uVar12 = extraout_x1_29;
        }
        else {
          uVar9 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
          uVar10 = _objc_opt_isKindOfClass(lVar8,uVar9);
          _objc_release(uVar12);
          uVar12 = extraout_x1_27;
          if ((uVar10 & 1) != 0) {
            uVar16 = objc_msgSend_floatValue(lVar8);
            *(undefined4 *)((long)&DAT_0001c470 + lVar15) = uVar16;
            uVar12 = extraout_x1_28;
          }
        }
        objc_msgSend_stringByAppendingString_(uVar6,uVar12,&cf__DispersionEnabled);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,auVar18._0_8_);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar18._0_8_);
        uVar9 = _objc_opt_class(PTR__OBJC_CLASS___NSNumber_0001c1b8);
        uVar10 = _objc_opt_isKindOfClass(uVar12,uVar9);
        if (((uVar10 & 1) != 0) && (uVar10 = objc_msgSend_boolValue(uVar12), (uVar10 & 1) == 0)) {
          *(undefined4 *)((long)&DAT_0001c460 + lVar15) = 0;
        }
        _objc_release(uVar12);
        objc_msgSend_stringByAppendingString_(uVar6,extraout_x1_30,&cf__LightTintColor);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,auVar18._0_8_);
        uVar12 = _objc_retainAutoreleasedReturnValue();
        _objc_release(auVar18._0_8_);
        iVar3 = FUN_0000d3d0(uVar12,&local_70);
        if (iVar3 != 0) {
          *(undefined8 *)((long)&DAT_0001c46c + lVar15) = uStack_68;
          *(undefined8 *)((long)&DAT_0001c464 + lVar15) = local_70;
        }
        objc_msgSend_stringByAppendingString_(uVar6,extraout_x1_31,&cf__DarkTintColor);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        objc_msgSend_objectForKeyedSubscript_(lVar4,auVar18._8_8_,auVar18._0_8_);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        iVar3 = FUN_0000d3d0(uVar9,&local_70);
        _objc_release(uVar9);
        _objc_release(auVar18._0_8_);
        if (iVar3 != 0) {
          *(undefined8 *)(lVar15 + 0x1c47c) = uStack_68;
          *(undefined8 *)(&DAT_0001c474 + lVar15) = local_70;
        }
        _objc_release(uVar12);
        _objc_release(lVar8);
      }
      _objc_release(uVar6);
      uVar6 = extraout_x1_32;
    }
    lVar14 = lVar14 + 1;
    lVar15 = lVar15 + 0x50;
  } while (lVar15 != 0x910);
  DAT_0001ce78 = 1;
  FUN_00008748("lgReloadHostPrefs: %s (%d hosts, %d overrides) banner.bezel=%.3f refr=%.2f");
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(lVar4);
  return;
}



// ===== 0x0000d29c  FUN_0000d29c

void FUN_0000d29c(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
  FUN_000086f4();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = _objc_retainAutorelease();
  objc_msgSend_UTF8String();
  FUN_00008748("prefs Reload received; re-reading %s");
  _objc_release(uVar1);
  FUN_0000ca10();
  uVar1 = _CFNotificationCenterGetDarwinNotifyCenter();
  _CFNotificationCenterPostNotification
            (uVar1,&cf_com_wkk_systembox_clockglass_ParametersReloaded,0,0,1);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd324);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_00008748("prefs parameters ready notification posted");
  return;
}



// ===== 0x0000d328  FUN_0000d328

void FUN_0000d328(ulong param_1,long param_2,int param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 != 0) {
    lVar1 = 0x40;
    if (param_3 == 0) {
      lVar1 = 0x38;
    }
    objc_msgSend_stringWithUTF8String_
              (PTR__OBJC_CLASS___NSString_0001c1c8,param_2,
               *(undefined8 *)
                ((long)&PTR_s_Default_00018c68 + lVar1 + (param_1 & 0xffffffff) * 0x48));
    uVar3 = _objc_retainAutoreleasedReturnValue();
    iVar2 = FUN_0000d3d0(uVar3,&local_40);
    if (iVar2 != 0) {
      lVar1 = 0x3c;
      if (param_3 == 0) {
        lVar1 = 0x2c;
      }
      ((undefined8 *)(param_2 + lVar1))[1] = uStack_38;
      *(undefined8 *)(param_2 + lVar1) = local_40;
    }
    _objc_release(uVar3);
  }
  return;
}



// ===== 0x0000d3d0  FUN_0000d3d0

undefined8 FUN_0000d3d0(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  undefined auVar11 [16];
  undefined auVar12 [16];
  uint local_44;
  
  uVar4 = _objc_retain();
  uVar5 = _objc_opt_class(PTR__OBJC_CLASS___NSString_0001c1c8);
  uVar6 = _objc_opt_isKindOfClass(uVar4,uVar5);
  uVar5 = 0;
  if ((param_2 != (undefined8 *)0x0) && ((uVar6 & 1) != 0)) {
    objc_msgSend_whitespaceAndNewlineCharacterSet(PTR__OBJC_CLASS___NSCharacterSet_0001c1f0);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_stringByTrimmingCharactersInSet_(uVar4,auVar11._8_8_,auVar11._0_8_);
    auVar12 = _objc_retainAutoreleasedReturnValue();
    objc_msgSend_stringByReplacingOccurrencesOfString_withString_
              (auVar12._0_8_,auVar12._8_8_,&cf__,&cf___);
    uVar7 = _objc_retainAutoreleasedReturnValue();
    _objc_release(auVar12._0_8_);
    _objc_release(auVar11._0_8_);
    auVar11 = objc_msgSend_length(uVar7);
    uVar5 = auVar11._8_8_;
    if ((auVar11._0_8_ == 6) ||
       (auVar11 = objc_msgSend_length(uVar7), uVar5 = auVar11._8_8_, auVar11._0_8_ == 8)) {
      local_44 = 0;
      objc_msgSend_scannerWithString_(PTR__OBJC_CLASS___NSScanner_0001c1f8,uVar5,uVar7);
      auVar11 = _objc_retainAutoreleasedReturnValue();
      uVar5 = objc_msgSend_scanHexInt_(auVar11._0_8_,auVar11._8_8_,&local_44);
      _objc_release(auVar11._0_8_);
      if ((int)uVar5 != 0) {
        lVar8 = objc_msgSend_length(uVar7);
        fVar9 = (float)(ulong)(local_44 & 0xff) / 255.0;
        uVar1 = local_44 >> 8;
        uVar2 = local_44 >> 0x18;
        uVar3 = local_44 >> 0x10;
        if (lVar8 == 6) {
          fVar9 = 1.0;
          uVar1 = local_44;
          uVar2 = local_44 >> 0x10 & 0xff;
          uVar3 = local_44 >> 8;
        }
        uVar10 = NEON_ucvtf(CONCAT44(uVar3,uVar2) & 0xffffffffff,4);
        param_2[1] = CONCAT44(fVar9,(float)(ulong)(uVar1 & 0xff) / 255.0);
        *param_2 = CONCAT44((float)((ulong)uVar10 >> 0x20) / 255.0,(float)uVar10 / 255.0);
      }
    }
    else {
      uVar5 = 0;
    }
    _objc_release(uVar7);
  }
  _objc_release(uVar4);
  return uVar5;
}



// ===== 0x0000d580  FUN_0000d580

undefined  [16] FUN_0000d580(long *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  long **pplVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  
  uVar1 = *param_2;
  plVar9 = (long *)(ulong)uVar1;
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar11 = NEON_cnt(plVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar2 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x24 = (long *)(ulong)((int)plVar8 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar9;
      if (plVar8 <= plVar9) {
        uVar4 = 0;
        if (plVar8 != (long *)0x0) {
          uVar4 = (ulong)plVar9 / (ulong)plVar8;
        }
        unaff_x24 = (long *)((long)plVar9 - uVar4 * (long)plVar8);
      }
    }
    pplVar7 = *(long ***)(*param_1 + (long)unaff_x24 * 8);
    if (pplVar7 != (long **)0x0) {
      do {
        pplVar7 = (long **)*pplVar7;
        if (pplVar7 == (long **)0x0) goto LAB_0000d648;
        plVar6 = pplVar7[1];
        if (plVar6 != plVar9) {
          if (uVar2 < 2) {
            plVar6 = (long *)((ulong)plVar6 & (ulong)((long)plVar8 + -1));
          }
          else if (plVar8 <= plVar6) {
            uVar4 = 0;
            if (plVar8 != (long *)0x0) {
              uVar4 = (ulong)plVar6 / (ulong)plVar8;
            }
            plVar6 = (long *)((long)plVar6 - uVar4 * (long)plVar8);
          }
          if (plVar6 != unaff_x24) goto LAB_0000d648;
        }
      } while (*(uint *)(pplVar7 + 2) != uVar1);
      uVar11 = 0;
      goto LAB_0000d770;
    }
  }
LAB_0000d648:
  pplVar7 = (long **)operator_new(0x20);
  *(undefined4 *)(pplVar7 + 2) = *(undefined4 *)*param_4;
  *(undefined8 *)((long)pplVar7 + 0x14) = 0;
  *pplVar7 = (long *)0x0;
  pplVar7[1] = plVar9;
  if (*(float *)(param_1 + 4) * (float)ZEXT89(plVar8) < (float)(unkuint9)(param_1[3] + 1) ||
      plVar8 == (long *)0x0) {
    uVar2 = 1;
    if ((long *)((long)&mach_header_00000000.magic + 2) < plVar8) {
      uVar2 = (ulong)(((ulong)plVar8 & (ulong)((long)plVar8 + -1)) != 0);
    }
    uVar2 = uVar2 | (long)plVar8 << 1;
    uVar4 = (ulong)((float)(unkuint9)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_0000d79c(param_1,uVar2);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (ulong)((long)plVar8 + -1)) == 0) {
      unaff_x24 = (long *)(ulong)((int)plVar8 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar9;
      if (plVar8 <= plVar9) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar8;
        }
        unaff_x24 = (long *)((long)plVar9 - uVar2 * (long)plVar8);
      }
    }
  }
  lVar5 = *param_1;
  plVar9 = *(long **)(lVar5 + (long)unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    pplVar3 = (long **)(param_1 + 2);
    *pplVar7 = *pplVar3;
    *pplVar3 = (long *)pplVar7;
    *(long ***)(lVar5 + (long)unaff_x24 * 8) = pplVar3;
    if (*pplVar7 != (long *)0x0) {
      plVar9 = *(long **)((long)*pplVar7 + 8);
      if (((ulong)plVar8 & (ulong)(undefined *)((long)plVar8 + -1)) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (ulong)(undefined *)((long)plVar8 + -1));
      }
      else if (plVar8 <= plVar9) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar8;
        }
        plVar9 = (long *)((long)plVar9 - uVar2 * (long)plVar8);
      }
      plVar9 = (long *)(*param_1 + (long)plVar9 * 8);
      goto LAB_0000d75c;
    }
  }
  else {
    *pplVar7 = (long *)*plVar9;
LAB_0000d75c:
    *plVar9 = (long)pplVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar11 = 1;
LAB_0000d770:
  auVar12._8_8_ = uVar11;
  auVar12._0_8_ = pplVar7;
  return auVar12;
}



// ===== 0x0000d79c  FUN_0000d79c

void FUN_0000d79c(long param_1,ulong param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x30;
  undefined2 uVar4;
  undefined8 uVar5;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__1::__next_prime(param_2);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < param_2) goto LAB_0000d854;
  if (uVar3 <= param_2) {
    return;
  }
  uVar2 = (ulong)((float)(unkuint9)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
  if (uVar3 < 3) {
LAB_0000d840:
    uVar2 = std::__1::__next_prime(uVar2);
  }
  else {
    uVar5 = NEON_cnt(uVar3,1);
    uVar4 = NEON_uaddlv(uVar5,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar4)) goto LAB_0000d840;
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
LAB_0000d854:
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xd878);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000d88c(param_1,param_2);
  return;
}



// ===== 0x0000d88c  FUN_0000d88c

undefined  [16] FUN_0000d88c(void **param_1,void *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar5;
  void **ppvVar6;
  ulong uVar7;
  long **pplVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  void **ppvVar12;
  void *pvVar13;
  long **pplVar14;
  long *plVar15;
  long *plVar16;
  long *unaff_x24;
  undefined2 uVar17;
  undefined8 uVar18;
  undefined auVar19 [16];
  undefined auVar20 [16];
  long *plVar4;
  
  pvVar5 = param_2;
  if (param_2 == (void *)0x0) {
    pvVar3 = *param_1;
    *param_1 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
      pvVar5 = param_2;
    }
    param_1[1] = (void *)0x0;
LAB_0000d9d8:
    auVar19._8_8_ = pvVar5;
    auVar19._0_8_ = pvVar3;
    return auVar19;
  }
  if ((ulong)param_2 >> 0x3d == 0) {
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
    ppvVar6 = (void **)param_1[2];
    if (ppvVar6 != (void **)0x0) {
      pvVar2 = ppvVar6[1];
      uVar18 = NEON_cnt(param_2,1);
      uVar17 = NEON_uaddlv(uVar18,1);
      uVar7 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
      if (uVar7 < 2) {
        pvVar2 = (void *)((ulong)pvVar2 & (long)param_2 - 1U);
      }
      else if (param_2 <= pvVar2) {
        uVar9 = 0;
        if (param_2 != (void *)0x0) {
          uVar9 = (ulong)pvVar2 / (ulong)param_2;
        }
        pvVar2 = (void *)((long)pvVar2 - uVar9 * (long)param_2);
      }
      *(void ***)((long)*param_1 + (long)pvVar2 * 8) = param_1 + 2;
      ppvVar12 = (void **)*ppvVar6;
      if (ppvVar12 != (void **)0x0) {
        do {
          pvVar13 = ppvVar12[1];
          if (uVar7 < 2) {
            pvVar13 = (void *)((ulong)pvVar13 & (long)param_2 - 1U);
          }
          else if (param_2 <= pvVar13) {
            uVar9 = 0;
            if (param_2 != (void *)0x0) {
              uVar9 = (ulong)pvVar13 / (ulong)param_2;
            }
            pvVar13 = (void *)((long)pvVar13 - uVar9 * (long)param_2);
          }
          if (pvVar13 != pvVar2) {
            if (*(long *)((long)*param_1 + (long)pvVar13 * 8) == 0) {
              *(void ***)((long)*param_1 + (long)pvVar13 * 8) = ppvVar6;
              pvVar2 = pvVar13;
            }
            else {
              *ppvVar6 = *ppvVar12;
              *ppvVar12 = **(void ***)((long)*param_1 + (long)pvVar13 * 8);
              **(void ***)((long)*param_1 + (long)pvVar13 * 8) = ppvVar12;
              ppvVar12 = ppvVar6;
            }
          }
          ppvVar6 = ppvVar12;
          ppvVar12 = (void **)*ppvVar6;
        } while (ppvVar12 != (void **)0x0);
      }
    }
    goto LAB_0000d9d8;
  }
  auVar19 = FUN_0000c1f4();
  plVar4 = auVar19._0_8_;
  uVar1 = *auVar19._8_8_;
  plVar16 = (long *)(ulong)uVar1;
  plVar15 = (long *)plVar4[1];
  if (plVar15 != (long *)0x0) {
    uVar18 = NEON_cnt(plVar15,1);
    uVar17 = NEON_uaddlv(uVar18,1);
    uVar7 = CONCAT62((int6)((ulong)uVar18 >> 0x10),uVar17) & 0xffffffff;
    if (uVar7 < 2) {
      unaff_x24 = (long *)(ulong)((int)plVar15 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar16;
      if (plVar15 <= plVar16) {
        uVar9 = 0;
        if (plVar15 != (long *)0x0) {
          uVar9 = (ulong)plVar16 / (ulong)plVar15;
        }
        unaff_x24 = (long *)((long)plVar16 - uVar9 * (long)plVar15);
      }
    }
    pplVar14 = *(long ***)(*plVar4 + (long)unaff_x24 * 8);
    if (pplVar14 != (long **)0x0) {
      do {
        pplVar14 = (long **)*pplVar14;
        if (pplVar14 == (long **)0x0) goto LAB_0000dab0;
        plVar11 = pplVar14[1];
        if (plVar11 != plVar16) {
          if (uVar7 < 2) {
            plVar11 = (long *)((ulong)plVar11 & (ulong)((long)plVar15 + -1));
          }
          else if (plVar15 <= plVar11) {
            uVar9 = 0;
            if (plVar15 != (long *)0x0) {
              uVar9 = (ulong)plVar11 / (ulong)plVar15;
            }
            plVar11 = (long *)((long)plVar11 - uVar9 * (long)plVar15);
          }
          if (plVar11 != unaff_x24) goto LAB_0000dab0;
        }
      } while (*(uint *)(pplVar14 + 2) != uVar1);
      uVar18 = 0;
      goto LAB_0000dbdc;
    }
  }
LAB_0000dab0:
  pplVar14 = (long **)operator_new(0x20);
  *(undefined4 *)(pplVar14 + 2) = *(undefined4 *)*param_4;
  *(undefined4 *)((long)pplVar14 + 0x1c) = 0;
  *(undefined8 *)((long)pplVar14 + 0x14) = 0;
  *pplVar14 = (long *)0x0;
  pplVar14[1] = plVar16;
  if (*(float *)(plVar4 + 4) * (float)ZEXT89(plVar15) < (float)(unkuint9)(plVar4[3] + 1) ||
      plVar15 == (long *)0x0) {
    uVar7 = 1;
    if ((long *)((long)&mach_header_00000000.magic + 2) < plVar15) {
      uVar7 = (ulong)(((ulong)plVar15 & (ulong)((long)plVar15 + -1)) != 0);
    }
    uVar7 = uVar7 | (long)plVar15 << 1;
    uVar9 = (ulong)((float)(unkuint9)(plVar4[3] + 1) / *(float *)(plVar4 + 4));
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    FUN_0000dc08(plVar4,uVar7);
    plVar15 = (long *)plVar4[1];
    if (((ulong)plVar15 & (ulong)((long)plVar15 + -1)) == 0) {
      unaff_x24 = (long *)(ulong)((int)plVar15 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar16;
      if (plVar15 <= plVar16) {
        uVar7 = 0;
        if (plVar15 != (long *)0x0) {
          uVar7 = (ulong)plVar16 / (ulong)plVar15;
        }
        unaff_x24 = (long *)((long)plVar16 - uVar7 * (long)plVar15);
      }
    }
  }
  lVar10 = *plVar4;
  plVar16 = *(long **)(lVar10 + (long)unaff_x24 * 8);
  if (plVar16 == (long *)0x0) {
    pplVar8 = (long **)(plVar4 + 2);
    *pplVar14 = *pplVar8;
    *pplVar8 = (long *)pplVar14;
    *(long ***)(lVar10 + (long)unaff_x24 * 8) = pplVar8;
    if (*pplVar14 != (long *)0x0) {
      plVar16 = *(long **)((long)*pplVar14 + 8);
      if (((ulong)plVar15 & (ulong)(undefined *)((long)plVar15 + -1)) == 0) {
        plVar16 = (long *)((ulong)plVar16 & (ulong)(undefined *)((long)plVar15 + -1));
      }
      else if (plVar15 <= plVar16) {
        uVar7 = 0;
        if (plVar15 != (long *)0x0) {
          uVar7 = (ulong)plVar16 / (ulong)plVar15;
        }
        plVar16 = (long *)((long)plVar16 - uVar7 * (long)plVar15);
      }
      plVar16 = (long *)(*plVar4 + (long)plVar16 * 8);
      goto LAB_0000dbc8;
    }
  }
  else {
    *pplVar14 = (long *)*plVar16;
LAB_0000dbc8:
    *plVar16 = (long)pplVar14;
  }
  plVar4[3] = plVar4[3] + 1;
  uVar18 = 1;
LAB_0000dbdc:
  auVar20._8_8_ = uVar18;
  auVar20._0_8_ = pplVar14;
  return auVar20;
}



// ===== 0x0000d9e8  FUN_0000d9e8

undefined  [16] FUN_0000d9e8(long *param_1,uint *param_2,undefined8 param_3,undefined8 *param_4)

{
  uint uVar1;
  ulong uVar2;
  long **pplVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long **pplVar7;
  long *plVar8;
  long *plVar9;
  long *unaff_x24;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined auVar12 [16];
  
  uVar1 = *param_2;
  plVar9 = (long *)(ulong)uVar1;
  plVar8 = (long *)param_1[1];
  if (plVar8 != (long *)0x0) {
    uVar11 = NEON_cnt(plVar8,1);
    uVar10 = NEON_uaddlv(uVar11,1);
    uVar2 = CONCAT62((int6)((ulong)uVar11 >> 0x10),uVar10) & 0xffffffff;
    if (uVar2 < 2) {
      unaff_x24 = (long *)(ulong)((int)plVar8 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar9;
      if (plVar8 <= plVar9) {
        uVar4 = 0;
        if (plVar8 != (long *)0x0) {
          uVar4 = (ulong)plVar9 / (ulong)plVar8;
        }
        unaff_x24 = (long *)((long)plVar9 - uVar4 * (long)plVar8);
      }
    }
    pplVar7 = *(long ***)(*param_1 + (long)unaff_x24 * 8);
    if (pplVar7 != (long **)0x0) {
      do {
        pplVar7 = (long **)*pplVar7;
        if (pplVar7 == (long **)0x0) goto LAB_0000dab0;
        plVar6 = pplVar7[1];
        if (plVar6 != plVar9) {
          if (uVar2 < 2) {
            plVar6 = (long *)((ulong)plVar6 & (ulong)((long)plVar8 + -1));
          }
          else if (plVar8 <= plVar6) {
            uVar4 = 0;
            if (plVar8 != (long *)0x0) {
              uVar4 = (ulong)plVar6 / (ulong)plVar8;
            }
            plVar6 = (long *)((long)plVar6 - uVar4 * (long)plVar8);
          }
          if (plVar6 != unaff_x24) goto LAB_0000dab0;
        }
      } while (*(uint *)(pplVar7 + 2) != uVar1);
      uVar11 = 0;
      goto LAB_0000dbdc;
    }
  }
LAB_0000dab0:
  pplVar7 = (long **)operator_new(0x20);
  *(undefined4 *)(pplVar7 + 2) = *(undefined4 *)*param_4;
  *(undefined4 *)((long)pplVar7 + 0x1c) = 0;
  *(undefined8 *)((long)pplVar7 + 0x14) = 0;
  *pplVar7 = (long *)0x0;
  pplVar7[1] = plVar9;
  if (*(float *)(param_1 + 4) * (float)ZEXT89(plVar8) < (float)(unkuint9)(param_1[3] + 1) ||
      plVar8 == (long *)0x0) {
    uVar2 = 1;
    if ((long *)((long)&mach_header_00000000.magic + 2) < plVar8) {
      uVar2 = (ulong)(((ulong)plVar8 & (ulong)((long)plVar8 + -1)) != 0);
    }
    uVar2 = uVar2 | (long)plVar8 << 1;
    uVar4 = (ulong)((float)(unkuint9)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar2 <= uVar4) {
      uVar2 = uVar4;
    }
    FUN_0000dc08(param_1,uVar2);
    plVar8 = (long *)param_1[1];
    if (((ulong)plVar8 & (ulong)((long)plVar8 + -1)) == 0) {
      unaff_x24 = (long *)(ulong)((int)plVar8 - 1U & uVar1);
    }
    else {
      unaff_x24 = plVar9;
      if (plVar8 <= plVar9) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar8;
        }
        unaff_x24 = (long *)((long)plVar9 - uVar2 * (long)plVar8);
      }
    }
  }
  lVar5 = *param_1;
  plVar9 = *(long **)(lVar5 + (long)unaff_x24 * 8);
  if (plVar9 == (long *)0x0) {
    pplVar3 = (long **)(param_1 + 2);
    *pplVar7 = *pplVar3;
    *pplVar3 = (long *)pplVar7;
    *(long ***)(lVar5 + (long)unaff_x24 * 8) = pplVar3;
    if (*pplVar7 != (long *)0x0) {
      plVar9 = *(long **)((long)*pplVar7 + 8);
      if (((ulong)plVar8 & (ulong)(undefined *)((long)plVar8 + -1)) == 0) {
        plVar9 = (long *)((ulong)plVar9 & (ulong)(undefined *)((long)plVar8 + -1));
      }
      else if (plVar8 <= plVar9) {
        uVar2 = 0;
        if (plVar8 != (long *)0x0) {
          uVar2 = (ulong)plVar9 / (ulong)plVar8;
        }
        plVar9 = (long *)((long)plVar9 - uVar2 * (long)plVar8);
      }
      plVar9 = (long *)(*param_1 + (long)plVar9 * 8);
      goto LAB_0000dbc8;
    }
  }
  else {
    *pplVar7 = (long *)*plVar9;
LAB_0000dbc8:
    *plVar9 = (long)pplVar7;
  }
  param_1[3] = param_1[3] + 1;
  uVar11 = 1;
LAB_0000dbdc:
  auVar12._8_8_ = uVar11;
  auVar12._0_8_ = pplVar7;
  return auVar12;
}



// ===== 0x0000dc08  FUN_0000dc08

void FUN_0000dc08(long param_1,ulong param_2)

{
  ulong uVar1;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar2;
  ulong uVar3;
  ulong unaff_x30;
  undefined2 uVar4;
  undefined8 uVar5;
  
  if (param_2 - 1 == 0) {
    param_2 = 2;
  }
  else if ((param_2 & param_2 - 1) != 0) {
    param_2 = std::__1::__next_prime(param_2);
  }
  uVar3 = *(ulong *)(param_1 + 8);
  if (uVar3 < param_2) goto LAB_0000dcc0;
  if (uVar3 <= param_2) {
    return;
  }
  uVar2 = (ulong)((float)(unkuint9)*(ulong *)(param_1 + 0x18) / *(float *)(param_1 + 0x20));
  if (uVar3 < 3) {
LAB_0000dcac:
    uVar2 = std::__1::__next_prime(uVar2);
  }
  else {
    uVar5 = NEON_cnt(uVar3,1);
    uVar4 = NEON_uaddlv(uVar5,1);
    if (1 < (uint)CONCAT62((int6)((ulong)uVar5 >> 0x10),uVar4)) goto LAB_0000dcac;
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
LAB_0000dcc0:
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xdce4);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  FUN_0000dcf8(param_1,param_2);
  return;
}



// ===== 0x0000dcf8  FUN_0000dcf8

void ** FUN_0000dcf8(void **param_1,void *param_2)

{
  ulong uVar1;
  void *pvVar2;
  void **ppvVar3;
  void **ppvVar4;
  ulong uVar5;
  void **ppvVar6;
  void *pvVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  
  if (param_2 == (void *)0x0) {
    ppvVar3 = (void **)*param_1;
    *param_1 = (void *)0x0;
    if (ppvVar3 != (void **)0x0) {
      operator_delete(ppvVar3);
    }
    param_1[1] = (void *)0x0;
  }
  else {
    if ((ulong)param_2 >> 0x3d != 0) {
      ppvVar4 = (void **)FUN_0000c1f4();
      ppvVar3 = (void **)ppvVar4[2];
      while (ppvVar3 != (void **)0x0) {
        pvVar2 = *ppvVar3;
        operator_delete(ppvVar3);
        ppvVar3 = (void **)pvVar2;
      }
      pvVar2 = *ppvVar4;
      *ppvVar4 = (void *)0x0;
      if (pvVar2 != (void *)0x0) {
        operator_delete(pvVar2);
      }
      return ppvVar4;
    }
    pvVar2 = operator_new((long)param_2 << 3);
    ppvVar3 = (void **)*param_1;
    *param_1 = pvVar2;
    if (ppvVar3 != (void **)0x0) {
      operator_delete(ppvVar3);
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
      uVar9 = NEON_cnt(param_2,1);
      uVar8 = NEON_uaddlv(uVar9,1);
      uVar5 = CONCAT62((int6)((ulong)uVar9 >> 0x10),uVar8) & 0xffffffff;
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
          pvVar7 = ppvVar6[1];
          if (uVar5 < 2) {
            pvVar7 = (void *)((ulong)pvVar7 & (long)param_2 - 1U);
          }
          else if (param_2 <= pvVar7) {
            uVar1 = 0;
            if (param_2 != (void *)0x0) {
              uVar1 = (ulong)pvVar7 / (ulong)param_2;
            }
            pvVar7 = (void *)((long)pvVar7 - uVar1 * (long)param_2);
          }
          if (pvVar7 != pvVar2) {
            if (*(long *)((long)*param_1 + (long)pvVar7 * 8) == 0) {
              *(void ***)((long)*param_1 + (long)pvVar7 * 8) = ppvVar4;
              pvVar2 = pvVar7;
            }
            else {
              *ppvVar4 = *ppvVar6;
              *ppvVar6 = **(void ***)((long)*param_1 + (long)pvVar7 * 8);
              **(void ***)((long)*param_1 + (long)pvVar7 * 8) = ppvVar6;
              ppvVar6 = ppvVar4;
            }
          }
          ppvVar4 = ppvVar6;
          ppvVar6 = (void **)*ppvVar4;
        } while (ppvVar6 != (void **)0x0);
      }
    }
  }
  return ppvVar3;
}



// ===== 0x0000de54  FUN_0000de54

void ** FUN_0000de54(void **param_1)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)param_1[2];
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return param_1;
}



// ===== 0x0000dea0  FUN_0000dea0

void ** FUN_0000dea0(void **param_1)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)param_1[2];
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return param_1;
}



// ===== 0x0000deec  FUN_0000deec

void ** FUN_0000deec(void **param_1)

{
  void **ppvVar1;
  void *pvVar2;
  
  ppvVar1 = (void **)param_1[2];
  while (ppvVar1 != (void **)0x0) {
    pvVar2 = *ppvVar1;
    operator_delete(ppvVar1);
    ppvVar1 = (void **)pvVar2;
  }
  pvVar2 = *param_1;
  *param_1 = (void *)0x0;
  if (pvVar2 != (void *)0x0) {
    operator_delete(pvVar2);
  }
  return param_1;
}



// ===== 0x0000df38  FUN_0000df38

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000df38(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  ulong unaff_x30;
  
  uVar1 = _objc_autoreleasePoolPush();
  uRam000000000001c308 = 0;
  _DAT_0001c300 = 0;
  uRam000000000001c318 = 0;
  _DAT_0001c310 = 0;
  DAT_0001c320 = 0x3f800000;
  ___cxa_atexit(0x8000,&DAT_0001c300,0);
  uRam000000000001c330 = 0;
  _DAT_0001c328 = 0;
  uRam000000000001c340 = 0;
  _DAT_0001c338 = 0;
  DAT_0001c348 = 0x3f800000;
  ___cxa_atexit(0x8000,&DAT_0001c328,0);
  uRam000000000001c380 = 0;
  _DAT_0001c378 = 0;
  uRam000000000001c390 = 0;
  _DAT_0001c388 = 0;
  DAT_0001c398 = 0x3f800000;
  ___cxa_atexit(thunk_FUN_0000dea0,&DAT_0001c378,0);
  uRam000000000001c3a8 = 0;
  _DAT_0001c3a0 = 0;
  uRam000000000001c3b8 = 0;
  _DAT_0001c3b0 = 0;
  DAT_0001c3c0 = 0x3f800000;
  ___cxa_atexit(thunk_FUN_0000deec,&DAT_0001c3a0,0);
  if (((unaff_x30 ^ unaff_x30 << 1) >> 0x3e & 1) != 0) {
                    /* WARNING: Treating indirect jump as call */
    UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(0xc471,0xe028);
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  _objc_autoreleasePoolPop(uVar1);
  return;
}



// ===== 0x0000e04c  _LGSymMakeCallable

undefined8 _LGSymMakeCallable(undefined8 param_1)

{
  return param_1;
}



// ===== 0x0000e068  _LGSymStripCode

long _LGSymStripCode(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1;
  }
  return lVar1;
}



// ===== 0x0000e078  _LGSymStripData

long _LGSymStripData(long param_1)

{
  long lVar1;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_1;
  }
  return lVar1;
}



// ===== 0x0000e088  _LGSymResolverInit

bool _LGSymResolverInit(void)

{
  ulong uVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  mach_header_64 *pmVar5;
  uint8_t *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint32_t uVar9;
  uint uVar10;
  ulong local_48;
  
  if (DAT_0001ce80 == '\0') {
    uVar3 = __dyld_image_count();
    if (uVar3 != 0) {
      uVar10 = 0;
      bVar2 = true;
LAB_0000e0d4:
      pcVar4 = (char *)__dyld_get_image_name(uVar10);
      if ((pcVar4 == (char *)0x0) || (pcVar4 = _strstr(pcVar4,"QuartzCore"), pcVar4 == (char *)0x0))
      goto LAB_0000e0ec;
      DAT_0001ce88 = __dyld_get_image_vmaddr_slide(uVar10);
      pmVar5 = (mach_header_64 *)__dyld_get_image_header(uVar10);
      local_48 = 0;
      puVar6 = _getsegmentdata(pmVar5,"__TEXT",&local_48);
      if (puVar6 != (uint8_t *)0x0) {
        DAT_0001ce98 = local_48;
        DAT_0001ce90 = puVar6;
      }
      uVar9 = pmVar5->ncmds;
      if (uVar9 != 0) {
        pmVar5 = pmVar5 + 1;
        uVar7 = DAT_0001cea0;
        uVar8 = DAT_0001cea8;
        do {
          if (pmVar5->magic == 0x19) {
            uVar1 = DAT_0001ce88 + *(long *)&pmVar5->flags;
            if ((uVar7 == 0) || (uVar1 < uVar7)) {
              uVar7 = uVar1;
              DAT_0001cea0 = uVar1;
            }
            uVar1 = uVar1 + *(long *)(pmVar5 + 1);
            if ((uVar8 == 0) || (uVar8 < uVar1)) {
              uVar8 = uVar1;
              DAT_0001cea8 = uVar1;
            }
          }
          pmVar5 = (mach_header_64 *)((long)&pmVar5->magic + (ulong)(uint)pmVar5->cputype);
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      DAT_0001ce80 = DAT_0001ce90 != (uint8_t *)0x0;
      FUN_0000e234("init: QuartzCore slide=%#tx __TEXT=%p size=%#zx fullImage=[%p,%p)");
      if (bVar2) {
        return DAT_0001ce80 != '\0';
      }
    }
LAB_0000e20c:
    FUN_0000e234("init: QuartzCore image not found");
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
LAB_0000e0ec:
  uVar10 = uVar10 + 1;
  bVar2 = uVar10 < uVar3;
  if (uVar3 == uVar10) goto LAB_0000e20c;
  goto LAB_0000e0d4;
}



// ===== 0x0000e234  FUN_0000e234

FILE * FUN_0000e234(FILE *param_1)

{
  uint uVar1;
  FILE *pFVar2;
  
  pFVar2 = param_1;
  if ((_gLGBackboardDebugLogging != '\0') &&
     (pFVar2 = _fopen("/var/mobile/Library/Accessibility/systembox-clockglass.log","a"),
     pFVar2 != (FILE *)0x0)) {
    _fputs("[LGSYM] ",pFVar2);
    _vfprintf(pFVar2,(char *)param_1,&stack0x00000000);
    _fputc(10,pFVar2);
    uVar1 = _fclose(pFVar2);
    pFVar2 = (FILE *)(ulong)uVar1;
  }
  return pFVar2;
}



// ===== 0x0000e2c4  _LGSymResolveExported

undefined8 _LGSymResolveExported(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = _dlsym(0xfffffffffffffffe,param_1);
  FUN_0000e234("dlsym(%s) = %p");
  return uVar1;
}



// ===== 0x0000e310  _LGSymScanText

ulong _LGSymScanText(long param_1,long param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  
  if ((DAT_0001ce80 == '\0') ||
     (uVar2 = (DAT_0001ce90 + DAT_0001ce98) - param_3, uVar3 = DAT_0001ce90, uVar2 < DAT_0001ce90))
  {
    uVar1 = 0;
  }
  else {
    while (uVar1 = DAT_0001ce90, param_3 != 0) {
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



// ===== 0x0000e3a4  _LGSymDecodeAdrpAdd

long _LGSymDecodeAdrpAdd(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x9f000000) == 0x90000000) {
    uVar2 = param_1[1];
    if ((uVar2 & 0x7f800000) == 0x11000000) {
      uVar4 = (ulong)(uVar2 >> 10) & 0xfff;
      if ((uVar2 & 0x400000) != 0) {
        uVar4 = uVar4 << 0xc;
      }
      return ((ulong)param_1 & 0xfffffffffffff000) +
             (((ulong)(uVar1 >> 3) & 0x1ffffc | (ulong)(uVar1 >> 0x1d) & 3) ^ 0x100000) * 0x1000 +
             uVar4 + -0x100000000;
    }
    pcVar3 = "decodeAdrpAdd: not ADD at %p";
  }
  else {
    pcVar3 = "decodeAdrpAdd: not ADRP at %p";
  }
  FUN_0000e234(pcVar3);
  return 0;
}



// ===== 0x0000e44c  _LGSymDecodeAdrpLdr

long _LGSymDecodeAdrpLdr(uint *param_1)

{
  uint uVar1;
  char *pcVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 0x9f000000) == 0x90000000) {
    if (param_1[1] >> 0x16 == 0x3e5) {
      return ((ulong)param_1 & 0xfffffffffffff000) +
             (((ulong)(uVar1 >> 3) & 0x1ffffc | (ulong)(uVar1 >> 0x1d) & 3) ^ 0x100000) * 0x1000 +
             ((ulong)(param_1[1] >> 7) & 0x7ff8) + -0x100000000;
    }
    pcVar2 = "decodeAdrpLdr: not LDR at %p";
  }
  else {
    pcVar2 = "decodeAdrpLdr: not ADRP at %p";
  }
  FUN_0000e234(pcVar2);
  return 0;
}



// ===== 0x0000e4e8  _LGResolve_CAInternAtomWithCString

int * _LGResolve_CAInternAtomWithCString(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *local_68 [8];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_000182a8;
  piVar1 = (int *)_dlsym(0xfffffffffffffffe,"CAInternAtomWithCString");
  FUN_0000e234("dlsym(%s) = %p");
  if (piVar1 == (int *)0x0) {
    if (DAT_0001ce80 != '\0') {
      piVar1 = (int *)((long)DAT_0001ce90 + DAT_0001ce98 + -0x18);
      if (DAT_0001ce90 < piVar1) {
        iVar4 = 0;
        piVar2 = DAT_0001ce90;
        do {
          if (((((*piVar2 == -0x5641b00c) && (piVar2[1] == -0x56fe8403)) &&
               (piVar2[2] == -0x6effbc03)) &&
              ((piVar2[3] == -0x55fffc0d && ((uint)piVar2[4] >> 0x1a == 0x25)))) &&
             ((piVar2[5] == -0x55fffc0c && ((piVar2[6] & 0x7f00001fU) == 0x35000000)))) {
            if ((piVar2 <= DAT_0001ce90) || (piVar3 = piVar2 + -1, piVar2[-1] != -0x2afcdc81)) {
              piVar3 = piVar2;
            }
            local_68[iVar4] = piVar3;
            iVar4 = iVar4 + 1;
          }
          piVar2 = piVar2 + 1;
        } while ((piVar2 < piVar1) && (iVar4 < 8));
        if (iVar4 != 0) {
          FUN_0000e234("CAInternAtom: %d validated wrapper candidate(s), using %p");
          piVar1 = local_68[0];
          goto LAB_0000e668;
        }
      }
      FUN_0000e234("CAInternAtom: prologue scan found no match");
    }
    piVar1 = (int *)0x0;
  }
LAB_0000e668:
  if (*(long *)PTR____stack_chk_guard_000182a8 == local_28) {
    return piVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000e698  _LGResolve_AddFilter

undefined8 _LGResolve_AddFilter(void)

{
  FUN_0000e6b8();
  return DAT_0001ceb8;
}



// ===== 0x0000e6b8  FUN_0000e6b8

void FUN_0000e6b8(void)

{
  uint *puVar1;
  uint *puVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint *puVar10;
  ulong uVar11;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined auStack_d8 [8];
  undefined4 auStack_d0 [8];
  undefined8 auStack_b0 [8];
  long local_70;
  
  puVar2 = DAT_0001ce90;
  local_70 = *(long *)PTR____stack_chk_guard_000182a8;
  if (((DAT_0001ceb0 & 1) != 0) || (DAT_0001ceb0 = 1, DAT_0001ce80 == '\0')) goto LAB_0000e8c8;
  puVar7 = (uint *)((long)DAT_0001ce90 + DAT_0001ce98 + -0x20);
  FUN_0000e234("scanGaussianSite: using built-in cluster position (constructor-safe)");
  puVar10 = puVar2;
  for (puVar6 = puVar2 + 2; puVar6 < puVar7; puVar6 = puVar6 + 1) {
    puVar10 = puVar10 + 1;
    local_dc = 0;
    lVar3 = FUN_0000f490(puVar6,puVar7,auStack_d8,&local_dc);
    if (lVar3 != 0) {
      uVar11 = 1;
      puVar8 = puVar6;
      do {
        puVar1 = puVar7;
        if (puVar8 + 0x10 <= puVar7) {
          puVar1 = puVar8 + 0x10;
        }
        local_e8 = 0;
        local_ec = 0;
        do {
          puVar8 = puVar8 + 1;
          if (puVar1 <= puVar8) {
            if ((uVar11 & 0xfffffffc) == 0) goto LAB_0000e7d4;
            goto LAB_0000e7fc;
          }
          lVar4 = FUN_0000f490(puVar8,puVar7,&local_e8,&local_ec);
        } while (lVar4 != lVar3);
        auStack_b0[uVar11] = local_e8;
        auStack_d0[uVar11] = local_ec;
        uVar11 = uVar11 + 1;
      } while (uVar11 != 8);
LAB_0000e7fc:
      if (puVar2 < puVar6 + -2) {
        uVar11 = 0xfffffffffffffffd;
        goto LAB_0000e818;
      }
      uVar9 = 0;
      goto LAB_0000e864;
    }
LAB_0000e7d4:
  }
  pcVar5 = "scanGaussianSite: no confirmed add_filter cluster found";
  goto LAB_0000e8c4;
  while( true ) {
    uVar9 = 0;
    if (uVar11 < 0xffffffffffffffe7) break;
    puVar6 = puVar10 + -2;
    puVar10 = puVar10 + -1;
    uVar11 = uVar11 - 1;
    if (puVar6 <= puVar2) break;
LAB_0000e818:
    if (((puVar10[-1] & 0x9f000000) == 0x90000000 && puVar10 < puVar7) &&
       (*puVar10 >> 0x16 == 0x3e5)) {
      uVar9 = _LGSymDecodeAdrpLdr(puVar10 + -1);
      break;
    }
  }
LAB_0000e864:
  DAT_0001cec0 = auStack_b0[1];
  DAT_0001ceb8 = lVar3;
  DAT_0001cec8 = uVar9;
  FUN_0000e234("scanGaussianSite: confirmed cluster of %d calls, start=%p gaussIdx=%d atom=0x%x");
  FUN_0000e234("  add_filter = %p");
  FUN_0000e234("  gaussian ctx = %p");
  pcVar5 = "  filter_table slot = %p";
LAB_0000e8c4:
  FUN_0000e234(pcVar5);
LAB_0000e8c8:
  if (*(long *)PTR____stack_chk_guard_000182a8 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000e914  _LGResolve_GaussianCtxSlot

undefined8 _LGResolve_GaussianCtxSlot(void)

{
  FUN_0000e6b8();
  return DAT_0001cec0;
}



// ===== 0x0000e934  _LGResolve_FilterTableSlot

undefined8 _LGResolve_FilterTableSlot(void)

{
  FUN_0000e6b8();
  return DAT_0001cec8;
}



// ===== 0x0000e954  _LGResolve_StopEncoders

uint * _LGResolve_StopEncoders(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (DAT_0001ce80 == '\0') {
    return (uint *)0x0;
  }
  lVar3 = FUN_0000eb20("!memoryless_in_use ()");
  if (lVar3 == 0) {
    pcVar5 = "stop_encoders: anchor string not found";
  }
  else {
    FUN_0000e234("stop_encoders: anchor string at %p");
    puVar8 = (uint *)((long)DAT_0001ce90 + DAT_0001ce98 + -4);
    for (puVar6 = DAT_0001ce90; puVar6 < puVar8; puVar6 = puVar6 + 1) {
      if ((((*puVar6 & 0x9f000000) == 0x90000000) && ((puVar6[1] & 0x7f800000) == 0x11000000)) &&
         (lVar4 = _LGSymDecodeAdrpAdd(puVar6), lVar4 == lVar3)) {
        FUN_0000e234("stop_encoders: xref site at %p");
        if (puVar6 < DAT_0001ce90) goto LAB_0000ea64;
        puVar8 = puVar6 + -0x200;
        goto LAB_0000ea94;
      }
    }
    pcVar5 = "stop_encoders: no xref to anchor string found";
  }
  goto LAB_0000ea20;
  while ((puVar6 = puVar6 + -1, puVar8 <= puVar6 && (DAT_0001ce90 <= puVar6))) {
LAB_0000ea94:
    uVar2 = *puVar6;
    puVar7 = puVar6;
    if (uVar2 == 0xd503237f) goto LAB_0000eaf4;
    uVar1 = uVar2 & 0xff8003ff;
    if ((uVar2 & 0xffe003e0) == 0xa9a003e0 || uVar1 == 0xd10003ff) {
      if ((uVar2 & 0xffe003e0) == 0xa9a003e0) {
        if (puVar6 <= DAT_0001ce90) goto LAB_0000eaf4;
      }
      else if ((uVar1 != 0xd10003ff || puVar6 < DAT_0001ce90) ||
               uVar1 == 0xd10003ff && puVar6 == DAT_0001ce90) goto LAB_0000eaf4;
      puVar7 = puVar6 + -1;
      if (puVar6[-1] != 0xd503237f) {
        puVar7 = puVar6;
      }
LAB_0000eaf4:
      FUN_0000e234("stop_encoders: resolved entry = %p");
      return puVar7;
    }
  }
LAB_0000ea64:
  pcVar5 = "stop_encoders: prologue not found within window";
LAB_0000ea20:
  FUN_0000e234(pcVar5);
  return (uint *)0x0;
}



// ===== 0x0000eb20  FUN_0000eb20

void * FUN_0000eb20(byte *param_1)

{
  void *pvVar1;
  byte bVar2;
  int iVar3;
  size_t sVar4;
  void *pvVar5;
  
  if (((DAT_0001ce80 != '\0') && (sVar4 = _strlen((char *)param_1), sVar4 < DAT_0001ce98)) &&
     (pvVar1 = (void *)((long)DAT_0001ce90 + ~sVar4 + DAT_0001ce98), DAT_0001ce90 <= pvVar1)) {
    bVar2 = *param_1;
    pvVar5 = DAT_0001ce90;
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



// ===== 0x0000ebd8  _LGResolve_MetalCmdBufOffset

ulong _LGResolve_MetalCmdBufOffset(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  
  if (DAT_0001ce80 == '\0') {
    return 0xffffffffffffffff;
  }
  lVar3 = FUN_0000eb20("Command buffer allocation failed!\n");
  if (lVar3 == 0) {
    pcVar5 = "cmdbuf: anchor string not found";
  }
  else {
    FUN_0000e234("cmdbuf: anchor string at %p");
    puVar13 = (uint *)((long)DAT_0001ce90 + DAT_0001ce98 + -4);
    for (puVar10 = DAT_0001ce90; puVar10 < puVar13; puVar10 = puVar10 + 1) {
      if ((((*puVar10 & 0x9f000000) == 0x90000000) && ((puVar10[1] & 0x7f800000) == 0x11000000)) &&
         (lVar4 = _LGSymDecodeAdrpAdd(puVar10), lVar4 == lVar3)) {
        FUN_0000e234("cmdbuf: xref site at %p");
        if (puVar10 < DAT_0001ce90) goto LAB_0000ece8;
        puVar7 = puVar10 + -0x400;
        goto LAB_0000ed18;
      }
    }
    pcVar5 = "cmdbuf: no xref to anchor string found";
  }
  goto LAB_0000eca4;
  while ((puVar10 = puVar10 + -1, puVar7 <= puVar10 && (DAT_0001ce90 <= puVar10))) {
LAB_0000ed18:
    uVar9 = *puVar10;
    puVar11 = puVar10;
    if (uVar9 == 0xd503237f) goto LAB_0000ed70;
    uVar1 = uVar9 & 0xff8003ff;
    if ((uVar9 & 0xffe003e0) == 0xa9a003e0 || uVar1 == 0xd10003ff) {
      if ((uVar9 & 0xffe003e0) == 0xa9a003e0) {
        if (DAT_0001ce90 < puVar10) {
LAB_0000ed60:
          puVar11 = puVar10 + -1;
          if (puVar10[-1] != 0xd503237f) {
            puVar11 = puVar10;
          }
        }
      }
      else if ((uVar1 == 0xd10003ff && DAT_0001ce90 <= puVar10) &&
               (uVar1 != 0xd10003ff || puVar10 != DAT_0001ce90)) goto LAB_0000ed60;
LAB_0000ed70:
      FUN_0000e234("cmdbuf: start_command_buffer entry = %p");
      if (puVar13 <= puVar11) goto LAB_0000ee28;
      uVar6 = 0;
      lVar3 = 4;
      uVar9 = 1;
      goto LAB_0000ed9c;
    }
  }
LAB_0000ece8:
  pcVar5 = "cmdbuf: prologue not found within window";
  goto LAB_0000eca4;
  while( true ) {
    uVar6 = uVar6 + 1;
    puVar10 = (uint *)((long)puVar11 + lVar3);
    lVar3 = lVar3 + 4;
    if (puVar13 <= puVar10) break;
LAB_0000ed9c:
    uVar1 = puVar11[uVar6];
    if ((uVar1 & 0xffe0ffe0) == 0xaa0003e0) {
      uVar8 = 1 << (ulong)(uVar1 & 0x1f);
      uVar1 = uVar9 >> (ulong)(uVar1 >> 0x10 & 0x1f);
      uVar2 = uVar8 | uVar9;
      uVar9 = uVar9 & (uVar8 ^ 0xffffffff);
      if ((uVar1 & 1) != 0) {
        uVar9 = uVar2;
      }
    }
    else if (uVar1 >> 0x17 == 0x1f2) {
      uVar12 = (ulong)(uVar1 >> 7) & 0x7ff8;
      if (0x3ff < (uint)uVar12 && (1 << (ulong)(uVar1 >> 5 & 0x1f) & uVar9) != 0) {
        FUN_0000e234("cmdbuf: MetalContext command-buffer offset = %#x");
        return uVar12;
      }
      uVar8 = 0xffffffff;
      if ((uVar1 & 0x400000) != 0) {
        uVar8 = ~(1 << (ulong)(uVar1 & 0x1f));
      }
      uVar9 = uVar8 & uVar9;
    }
    if (0x2e < uVar6) break;
  }
LAB_0000ee28:
  pcVar5 = "cmdbuf: command-buffer field access not found";
LAB_0000eca4:
  FUN_0000e234(pcVar5);
  return 0xffffffffffffffff;
}



// ===== 0x0000ee64  _LGResolve_RenderVtableSlot

ulong _LGResolve_RenderVtableSlot(long param_1,int param_2)

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
  
  if (param_1 != 0) {
    if (1 < param_2) {
      uVar7 = 0;
      uVar8 = 1;
      do {
        uVar5 = *(ulong *)(param_1 + uVar7 * 8);
        bVar4 = uVar5 == 0;
        bVar3 = DAT_0001ce80 == '\0';
        if ((((!bVar4 && !bVar3) && uVar5 > DAT_0001cea0 ||
             (!bVar4 && !bVar3) && DAT_0001cea0 == uVar5) && uVar5 <= DAT_0001cea8) &&
            (((bVar4 || bVar3) || uVar5 <= DAT_0001cea0) &&
             ((bVar4 || bVar3) || DAT_0001cea0 != uVar5) || DAT_0001cea8 != uVar5)) {
          uVar6 = 0;
          uVar10 = 2;
          uVar11 = 1;
          do {
            iVar1 = *(int *)(uVar5 + uVar6 * 4);
            if (iVar1 == -0x6bffff8) {
              uVar2 = *(uint *)(uVar5 + uVar11 * 4);
              uVar12 = (ulong)(uVar2 >> 10) & 0xfff;
              if ((uVar2 & 0xffc003ff) == 0xf9400108 && uVar8 == uVar12) {
                bVar3 = false;
                uVar13 = uVar10;
                do {
                  uVar2 = *(uint *)(uVar5 + uVar13 * 4);
                  bVar4 = (uVar2 & 0xffdfffff) == 0xd61f0100;
                  bVar3 = (bool)(bVar4 | bVar3);
                  uVar13 = uVar13 + 1;
                } while ((!bVar4 && uVar2 != 0xd65f03c0) && uVar13 < uVar6 + 0x10);
                if (bVar3) {
                  FUN_0000e234("render-slot: forwarder at vtable[%d] -> render vtable[%d]");
                  return uVar12;
                }
              }
            }
            else if (iVar1 == -0x6bffff0) {
              uVar12 = uVar6;
              uVar13 = uVar11;
              do {
                uVar9 = uVar13;
                uVar14 = uVar12;
                uVar12 = uVar14 + 1;
                if (0x16 < uVar12 || uVar6 + 10 <= uVar12) goto LAB_0000f014;
                uVar2 = *(uint *)(uVar5 + 4 + uVar14 * 4);
                uVar13 = uVar9 + 1;
              } while ((uVar2 & 0xffe00fff) != 0xf8400e08);
              uVar12 = (ulong)(uVar2 >> 0xf) & 0x3f;
              if (uVar8 == uVar12) {
                do {
                  uVar2 = *(uint *)(uVar5 + 4 + uVar9 * 4);
                  if ((uVar2 | 0x200000) >> 0xb == 0x1ae7e1) {
                    FUN_0000e234("render-slot: PAC forwarder at vtable[%d] -> render vtable[%d]");
                    return uVar12;
                  }
                  uVar13 = uVar9 + 2;
                  uVar9 = uVar9 + 1;
                  bVar3 = uVar13 < uVar14 + 0xb;
                } while ((uVar2 != 0xd65f03c0 && bVar3) && uVar9 < 0x16 ||
                         (uVar2 != 0xd65f03c0 && bVar3) && uVar9 == 0x16);
              }
            }
            else if (iVar1 == -0x29a0fc40) break;
LAB_0000f014:
            uVar6 = uVar6 + 1;
            uVar11 = uVar11 + 1;
            uVar10 = uVar10 + 1;
          } while (uVar6 != 0x17);
        }
        uVar7 = uVar7 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar7 != param_2 - 1);
    }
    FUN_0000e234("render-slot: render forwarder not found (checked %d slots)");
  }
  return 0xffffffff;
}



// ===== 0x0000f098  _LGSymAddressInQuartzCoreImage

bool _LGSymAddressInQuartzCoreImage(ulong param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 != 0) && (DAT_0001ce80 != '\0')) {
    bVar1 = (param_1 >= DAT_0001cea0 && param_1 <= DAT_0001cea8) &&
            (param_1 < DAT_0001cea0 || DAT_0001cea8 != param_1);
  }
  return bVar1;
}



// ===== 0x0000f0d0  _LGResolve_EdgeInfoVtableSlot

ulong _LGResolve_EdgeInfoVtableSlot(long param_1,uint param_2)

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
  
  if (param_1 != 0) {
    if (0 < (int)param_2) {
      uVar10 = 0;
      do {
        uVar8 = *(ulong *)(param_1 + uVar10 * 8);
        bVar7 = uVar8 == 0;
        bVar6 = DAT_0001ce80 == '\0';
        if ((((!bVar7 && !bVar6) && uVar8 > DAT_0001cea0 ||
             (!bVar7 && !bVar6) && DAT_0001cea0 == uVar8) && uVar8 <= DAT_0001cea8) &&
            (((bVar7 || bVar6) || uVar8 <= DAT_0001cea0) &&
             ((bVar7 || bVar6) || DAT_0001cea0 != uVar8) || DAT_0001cea8 != uVar8)) {
          uVar9 = 0;
          bVar5 = 0;
          bVar4 = 0;
          bVar3 = 0;
          bVar2 = 0;
          do {
            iVar1 = *(int *)(uVar8 + uVar9 * 4);
            bVar2 = iVar1 == -0x55fafc09 | bVar2;
            bVar3 = iVar1 == -0x55f9fc0c | bVar3;
            bVar4 = iVar1 == 0x2d0002e1 | bVar4;
            bVar5 = iVar1 == 0x39000288 | bVar5;
            if ((0x4e < uVar9) || (iVar1 == -0x29a0f001)) break;
            uVar9 = uVar9 + 1;
          } while (iVar1 != -0x29a0fc40);
          if ((bool)(bVar2 & bVar3 & bVar4 & bVar5)) {
            FUN_0000e234("edge-info-slot: Gaussian get_edge_info at vtable[%d]");
            return uVar10;
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != param_2);
    }
    FUN_0000e234("edge-info-slot: get_edge_info not found (checked %d slots)");
  }
  return 0xffffffff;
}



// ===== 0x0000f228  _LGSymResolverSaveCache

void _LGSymResolverSaveCache(undefined8 param_1,undefined8 param_2)

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
  
  local_58 = *(long *)PTR____stack_chk_guard_000182a8;
  objc_msgSend_bundleWithPath_
            (PTR__OBJC_CLASS___NSBundle_0001c200,param_2,
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
  puVar2 = PTR__OBJC_CLASS___NSNumber_0001c1b8;
  local_a8 = &cf_qcVersion;
  pcStack_a0 = &cf_addFilter;
  local_80 = uVar5;
  FUN_0000e6b8();
  objc_msgSend_numberWithUnsignedLong_(puVar2,extraout_x1,DAT_0001ceb8 - DAT_0001ce88);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_0001c1b8;
  local_98 = &cf_stopEncoders;
  local_78 = uVar6;
  auVar10 = _LGResolve_StopEncoders();
  objc_msgSend_numberWithUnsignedLong_(puVar2,auVar10._8_8_,auVar10._0_8_ - DAT_0001ce88);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_0001c1b8;
  local_90 = &cf_gaussianCtxSlot;
  local_70 = uVar7;
  FUN_0000e6b8();
  objc_msgSend_numberWithUnsignedLong_(puVar2,extraout_x1_00,DAT_0001cec0 - DAT_0001ce88);
  uVar8 = _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_0001c1b8;
  local_88 = &cf_filterTableSlot;
  local_68 = uVar8;
  FUN_0000e6b8();
  objc_msgSend_numberWithUnsignedLong_(puVar2,extraout_x1_01,DAT_0001cec8 - DAT_0001ce88);
  auVar10 = _objc_retainAutoreleasedReturnValue();
  local_60 = auVar10._0_8_;
  objc_msgSend_dictionaryWithObjects_forKeys_count_
            (PTR__OBJC_CLASS___NSDictionary_0001c1b0,auVar10._8_8_,&local_80,&local_a8,5);
  uVar9 = _objc_retainAutoreleasedReturnValue();
  _objc_release(auVar10._0_8_);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  objc_msgSend_writeToFile_atomically_(uVar9,extraout_x1_02,&cf__tmp_lg_symcache_plist,1);
  uVar5 = _objc_retainAutorelease(uVar5);
  objc_msgSend_UTF8String();
  _objc_release(uVar5);
  FUN_0000e234("cache saved for QuartzCore version %s");
  _objc_release(uVar9);
  _objc_release(uVar3);
  if (*(long *)PTR____stack_chk_guard_000182a8 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== 0x0000f490  FUN_0000f490

long FUN_0000f490(uint *param_1,uint *param_2,ulong *param_3,uint *param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  if (((((*param_1 & 0xff80001f) == 0x52800000) && ((param_1[-2] & 0x9f000000) == 0x90000000)) &&
      ((param_1[-1] & 0x7f800000) == 0x11000000)) &&
     ((uVar2 = _LGSymDecodeAdrpAdd(), uVar2 != 0 && ((uVar2 & 7) == 0)))) {
    lVar3 = 4;
    do {
      if (param_2 <= (uint *)((long)param_1 + lVar3)) {
        return 0;
      }
      uVar1 = *(uint *)((long)param_1 + lVar3);
      if (uVar1 >> 0x1a == 0x25) {
        lVar3 = (long)param_1 +
                lVar3 + (int)(-(uVar1 >> 0x19 & 1) & 0xf0000000 | (uVar1 & 0x3ffffff) << 2);
        *param_3 = uVar2;
        if (param_4 == (uint *)0x0) {
          return lVar3;
        }
        *param_4 = *param_1 >> 5 & 0xffff;
        return lVar3;
      }
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0x14);
  }
  return 0;
}



// ===== 0x0000fa78  objc_msgSend$UTF8String

void objc_msgSend_UTF8String(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_UTF8String_0001c000);
  return;
}



// ===== 0x0000fa98  objc_msgSend$appendBytes_length_

void objc_msgSend_appendBytes_length_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_appendBytes_length__0001c008);
  return;
}



// ===== 0x0000fab8  objc_msgSend$boolValue

void objc_msgSend_boolValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_boolValue_0001c010);
  return;
}



// ===== 0x0000fad8  objc_msgSend$bundleWithPath_

void objc_msgSend_bundleWithPath_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_bundleWithPath__0001c018);
  return;
}



// ===== 0x0000faf8  objc_msgSend$bytes

void objc_msgSend_bytes(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_bytes_0001c020);
  return;
}



// ===== 0x0000fb18  objc_msgSend$colorAttachments

void objc_msgSend_colorAttachments(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_colorAttachments_0001c028);
  return;
}



// ===== 0x0000fb38  objc_msgSend$contents

void objc_msgSend_contents(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_contents_0001c030);
  return;
}



// ===== 0x0000fb58  objc_msgSend$dataWithBytes_length_

void objc_msgSend_dataWithBytes_length_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_dataWithBytes_length__0001c038);
  return;
}



// ===== 0x0000fb78  objc_msgSend$device

void objc_msgSend_device(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_device_0001c040);
  return;
}



// ===== 0x0000fb98  objc_msgSend$dictionaryWithContentsOfFile_

void objc_msgSend_dictionaryWithContentsOfFile_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_dictionaryWithContentsOfFile__0001c048);
  return;
}



// ===== 0x0000fbb8  objc_msgSend$dictionaryWithObjects_forKeys_count_

void objc_msgSend_dictionaryWithObjects_forKeys_count_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_dictionaryWithObjects_forKeys_co_0001c050);
  return;
}



// ===== 0x0000fbd8  objc_msgSend$drawPrimitives_vertexStart_vertexCount_

void objc_msgSend_drawPrimitives_vertexStart_vertexCount_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_drawPrimitives_vertexStart_verte_0001c058);
  return;
}



// ===== 0x0000fbf8  objc_msgSend$endEncoding

void objc_msgSend_endEncoding(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_endEncoding_0001c060);
  return;
}



// ===== 0x0000fc18  objc_msgSend$floatValue

void objc_msgSend_floatValue(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_floatValue_0001c068);
  return;
}



// ===== 0x0000fc38  objc_msgSend$height

void objc_msgSend_height(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_height_0001c070);
  return;
}



// ===== 0x0000fc58  objc_msgSend$infoDictionary

void objc_msgSend_infoDictionary(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_infoDictionary_0001c078);
  return;
}



// ===== 0x0000fc78  objc_msgSend$length

void objc_msgSend_length(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_length_0001c080);
  return;
}



// ===== 0x0000fc98  objc_msgSend$localizedDescription

void objc_msgSend_localizedDescription(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_localizedDescription_0001c088);
  return;
}



// ===== 0x0000fcb8  objc_msgSend$newBufferWithLength_options_

void objc_msgSend_newBufferWithLength_options_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_newBufferWithLength_options__0001c090);
  return;
}



// ===== 0x0000fcd8  objc_msgSend$newFunctionWithName_

void objc_msgSend_newFunctionWithName_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_newFunctionWithName__0001c098);
  return;
}



// ===== 0x0000fcf8  objc_msgSend$newLibraryWithSource_options_error_

void objc_msgSend_newLibraryWithSource_options_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_newLibraryWithSource_options_err_0001c0a0);
  return;
}



// ===== 0x0000fd18  objc_msgSend$newRenderPipelineStateWithDescriptor_error_

void objc_msgSend_newRenderPipelineStateWithDescriptor_error_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_newRenderPipelineStateWithDescri_0001c0a8);
  return;
}



// ===== 0x0000fd38  objc_msgSend$newTextureWithDescriptor_

void objc_msgSend_newTextureWithDescriptor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_newTextureWithDescriptor__0001c0b0);
  return;
}



// ===== 0x0000fd58  objc_msgSend$numberWithUnsignedLong_

void objc_msgSend_numberWithUnsignedLong_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_numberWithUnsignedLong__0001c0b8);
  return;
}



// ===== 0x0000fd78  objc_msgSend$objectAtIndexedSubscript_

void objc_msgSend_objectAtIndexedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_objectAtIndexedSubscript__0001c0c0);
  return;
}



// ===== 0x0000fd98  objc_msgSend$objectForKeyedSubscript_

void objc_msgSend_objectForKeyedSubscript_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_objectForKeyedSubscript__0001c0c8);
  return;
}



// ===== 0x0000fdb8  objc_msgSend$operatingSystemVersion

void objc_msgSend_operatingSystemVersion(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_operatingSystemVersion_0001c0d0);
  return;
}



// ===== 0x0000fdd8  objc_msgSend$pixelFormat

void objc_msgSend_pixelFormat(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_pixelFormat_0001c0d8);
  return;
}



// ===== 0x0000fdf8  objc_msgSend$processInfo

void objc_msgSend_processInfo(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_processInfo_0001c0e0);
  return;
}



// ===== 0x0000fe18  objc_msgSend$renderCommandEncoderWithDescriptor_

void objc_msgSend_renderCommandEncoderWithDescriptor_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_renderCommandEncoderWithDescript_0001c0e8);
  return;
}



// ===== 0x0000fe38  objc_msgSend$renderPassDescriptor

void objc_msgSend_renderPassDescriptor(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_renderPassDescriptor_0001c0f0);
  return;
}



// ===== 0x0000fe58  objc_msgSend$replaceRegion_mipmapLevel_withBytes_bytesPerRow_

void objc_msgSend_replaceRegion_mipmapLevel_withBytes_bytesPerRow_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_replaceRegion_mipmapLevel_withBy_0001c0f8);
  return;
}



// ===== 0x0000fe78  objc_msgSend$scanHexInt_

void objc_msgSend_scanHexInt_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_scanHexInt__0001c100);
  return;
}



// ===== 0x0000fe98  objc_msgSend$scannerWithString_

void objc_msgSend_scannerWithString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_scannerWithString__0001c108);
  return;
}



// ===== 0x0000feb8  objc_msgSend$setFragmentBytes_length_atIndex_

void objc_msgSend_setFragmentBytes_length_atIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_setFragmentBytes_length_atIndex__0001c110);
  return;
}



// ===== 0x0000fed8  objc_msgSend$setFragmentFunction_

void objc_msgSend_setFragmentFunction_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_setFragmentFunction__0001c118);
  return;
}



// ===== 0x0000fef8  objc_msgSend$setFragmentTexture_atIndex_

void objc_msgSend_setFragmentTexture_atIndex_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_setFragmentTexture_atIndex__0001c120);
  return;
}



// ===== 0x0000ff18  objc_msgSend$setLoadAction_

void objc_msgSend_setLoadAction_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_setLoadAction__0001c128);
  return;
}



// ===== 0x0000ff38  objc_msgSend$setPixelFormat_

void objc_msgSend_setPixelFormat_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_setPixelFormat__0001c130);
  return;
}



// ===== 0x0000ff58  objc_msgSend$setRenderPipelineState_

void objc_msgSend_setRenderPipelineState_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_setRenderPipelineState__0001c138);
  return;
}



// ===== 0x0000ff78  objc_msgSend$setStoreAction_

void objc_msgSend_setStoreAction_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_setStoreAction__0001c140);
  return;
}



// ===== 0x0000ff98  objc_msgSend$setTexture_

void objc_msgSend_setTexture_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_setTexture__0001c148);
  return;
}



// ===== 0x0000ffb8  objc_msgSend$setUsage_

void objc_msgSend_setUsage_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_setUsage__0001c150);
  return;
}



// ===== 0x0000ffd8  objc_msgSend$setVertexFunction_

void objc_msgSend_setVertexFunction_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_setVertexFunction__0001c158);
  return;
}



// ===== 0x0000fff8  objc_msgSend$stringByAppendingFormat_

void objc_msgSend_stringByAppendingFormat_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_stringByAppendingFormat__0001c160);
  return;
}



// ===== 0x00010018  objc_msgSend$stringByAppendingString_

void objc_msgSend_stringByAppendingString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_stringByAppendingString__0001c168);
  return;
}



// ===== 0x00010038  objc_msgSend$stringByReplacingOccurrencesOfString_withString_

void objc_msgSend_stringByReplacingOccurrencesOfString_withString_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_stringByReplacingOccurrencesOfSt_0001c170);
  return;
}



// ===== 0x00010058  objc_msgSend$stringByTrimmingCharactersInSet_

void objc_msgSend_stringByTrimmingCharactersInSet_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_stringByTrimmingCharactersInSet__0001c178);
  return;
}



// ===== 0x00010078  objc_msgSend$stringWithUTF8String_

void objc_msgSend_stringWithUTF8String_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_stringWithUTF8String__0001c180);
  return;
}



// ===== 0x00010098  objc_msgSend$texture2DDescriptorWithPixelFormat_width_height_mipmapped_

void objc_msgSend_texture2DDescriptorWithPixelFormat_width_height_mipmapped_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_texture2DDescriptorWithPixelForm_0001c188);
  return;
}



// ===== 0x000100b8  objc_msgSend$usage

void objc_msgSend_usage(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_usage_0001c190);
  return;
}



// ===== 0x000100d8  objc_msgSend$whitespaceAndNewlineCharacterSet

void objc_msgSend_whitespaceAndNewlineCharacterSet(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_whitespaceAndNewlineCharacterSet_0001c198);
  return;
}



// ===== 0x000100f8  objc_msgSend$width

void objc_msgSend_width(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_width_0001c1a0);
  return;
}



// ===== 0x00010118  objc_msgSend$writeToFile_atomically_

void objc_msgSend_writeToFile_atomically_(undefined8 param_1)

{
  (*(code *)PTR__objc_msgSend_000181b0)(param_1,PTR_s_writeToFile_atomically__0001c1a8);
  return;
}



// ===== 0x00024098  ~bad_array_new_length

/* WARNING: Control flow encountered bad instruction data */
/* std::bad_array_new_length::~bad_array_new_length() */

void __thiscall std::bad_array_new_length::~bad_array_new_length(bad_array_new_length *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



