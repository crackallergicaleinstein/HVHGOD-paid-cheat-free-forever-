// FUN_180388f70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180388f70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018038b728) */
/* WARNING: Removing unreachable block (ram,0x00018038945b) */
/* WARNING: Removing unreachable block (ram,0x00018038bb48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_180388f70(undefined8 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  ULONGLONG UVar7;
  longlong *plVar8;
  undefined **ppuVar9;
  char *pcVar10;
  int *piVar11;
  ulonglong *puVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  undefined **ppuVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  bool bVar23;
  undefined8 uVar24;
  double dVar25;
  double dVar26;
  undefined1 in_ZMM6 [64];
  undefined1 auVar27 [64];
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  undefined1 auStack_b78 [32];
  undefined **local_b58;
  char *local_b50;
  undefined **local_b48;
  double local_b40;
  double local_b38;
  double local_b30;
  ulonglong local_b28;
  ulonglong local_b20;
  ulonglong local_b18;
  longlong local_b08;
  longlong local_b00;
  longlong local_af8;
  longlong local_af0;
  longlong local_ae8;
  longlong local_ae0;
  longlong local_ad8;
  longlong local_ad0;
  ulonglong local_ac8;
  longlong local_ac0;
  undefined8 local_ab8;
  undefined **ppuStack_ab0;
  longlong lStack_aa8;
  undefined8 uStack_aa0;
  undefined1 local_a98 [16];
  undefined1 local_a88 [16];
  undefined1 local_a78 [16];
  undefined1 local_a68 [16];
  undefined1 local_a58 [16];
  undefined1 local_a48 [16];
  undefined1 local_a38 [16];
  undefined1 local_a28 [16];
  undefined1 local_a18 [16];
  undefined1 local_a08 [16];
  undefined1 local_9f8 [16];
  undefined1 local_9e8 [16];
  undefined1 local_9d8 [16];
  undefined1 local_9c8 [16];
  undefined1 local_9b8 [16];
  undefined1 local_9a8 [16];
  undefined1 local_998 [16];
  undefined1 local_988 [16];
  undefined1 local_978 [16];
  undefined1 local_968 [16];
  undefined1 local_958 [16];
  undefined1 local_948 [16];
  undefined1 local_938 [16];
  undefined1 local_928 [16];
  undefined1 local_918 [16];
  undefined1 local_908 [16];
  undefined1 local_8f8 [16];
  undefined1 local_8e8 [16];
  undefined1 local_8d8 [16];
  longlong local_8c8;
  longlong local_8c0;
  longlong local_8b8;
  longlong local_8b0;
  longlong local_8a8;
  longlong local_8a0;
  longlong local_898;
  longlong local_890;
  longlong local_888;
  longlong local_880;
  longlong local_878;
  longlong local_870;
  longlong local_868;
  longlong local_860;
  longlong local_858;
  longlong local_850;
  longlong local_848;
  longlong local_840;
  undefined1 local_838 [16];
  undefined1 local_828 [16];
  undefined1 local_818 [16];
  undefined1 local_808 [16];
  undefined1 local_7f8 [16];
  undefined *local_7d0;
  undefined1 local_798 [24];
  undefined8 local_780;
  undefined **ppuStack_778;
  longlong lStack_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  longlong local_750;
  PSRWLOCK pRStack_748;
  ulonglong uStack_740;
  undefined8 uStack_738;
  undefined8 local_730;
  longlong local_728;
  undefined1 local_720 [16];
  undefined1 local_710 [16];
  undefined1 local_700 [16];
  undefined1 local_6f0 [16];
  undefined8 local_6e0;
  PSRWLOCK pRStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined1 local_6c0 [24];
  char local_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  char local_688 [1544];
  ulonglong local_80;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_b78;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  if ((DAT_180bb8ad0 & 1) != 0) {
    if ((param_2 == 7) && (((byte)DAT_180bb8ad0 & 0x4a) == 0x40)) {
      uVar6 = DAT_180bb8ad0;
      do {
        LOCK();
        bVar23 = uVar6 == DAT_180bb8ad0;
        if (bVar23) {
          DAT_180bb8ad0 = uVar6 | 8;
        }
        else {
          uVar6 = DAT_180bb8ad0;
        }
        UNLOCK();
      } while (!bVar23);
      if ((uVar6 & 8) == 0) {
        cVar1 = FUN_180380f50();
        if (cVar1 != '\0') {
          LOCK();
          DAT_180bb8ad0 = DAT_180bb8ad0 | 2;
          UNLOCK();
        }
        LOCK();
        DAT_180bb8ad0 = DAT_180bb8ad0 & 0xfffffff7;
        UNLOCK();
      }
    }
    if (DAT_180c70a10 != 0) {
      (*(code *)DAT_180c70a10)(param_1,param_2);
    }
    goto LAB_18038d271;
  }
  local_8e8 = ZEXT816(0x180807400);
  FUN_18017bf40(local_8e8 + 8);
  auVar34 = ZEXT864(0x412e848000000000);
  auVar33 = auVar34._0_16_;
  auVar29 = ZEXT816(0);
  auVar32 = ZEXT1664(auVar29);
  auVar30 = ZEXT864(0x408f400000000000);
  auVar31 = auVar30._0_16_;
  if (((param_2 == 7) && (DAT_180c70b40 != '\0')) && (DAT_1808d9bd9 == '\0')) {
    local_9d8 = ZEXT816(0x180807448);
    FUN_18017bf40(local_9d8 + 8);
    FUN_1803b1cd0();
    local_7d0 = &DAT_180903160;
    iVar3 = FUN_1805f68d0(&DAT_180903160);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809031ac == 0x7fffffff) {
      DAT_1809031ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    UVar7 = GetTickCount64();
    if ((DAT_180c70eb8 != '\0') && (DAT_180c70ea8 <= UVar7)) {
      DAT_180c70ea8 = UVar7 + 1000;
      cVar1 = FUN_1803884a0();
      if (cVar1 != '\0') {
        FUN_1803887f0();
      }
    }
    FUN_1805f68fc(&DAT_180903160);
    FUN_18017bf40(&local_8b0);
    uVar14 = local_8b0 - local_9d8._8_8_;
    plVar8 = (longlong *)FUN_180391850();
    auVar33 = auVar34._0_16_;
    auVar29 = auVar32._0_16_;
    auVar31 = auVar30._0_16_;
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_8b0 == plVar8[7]) || (plVar8[7] <= local_8b0)) {
      local_b38 = (double)(local_8b0 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      dVar25 = auVar30._0_8_;
      if (local_b38 <= auVar32._0_8_) {
        local_b30 = 0.0;
      }
      else {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_9d8._0_8_);
      auVar33 = auVar34._0_16_;
      auVar29 = auVar32._0_16_;
      auVar31 = auVar30._0_16_;
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_8b0;
      plVar8[7] = local_8b0 + 5000000000;
    }
  }
  local_6e0 = 0;
  pRStack_6d8 = (PSRWLOCK)0x0;
  uStack_6d0 = 0;
  uStack_6c8 = 0;
  auVar30 = ZEXT1664(auVar31);
  auVar32 = ZEXT1664(auVar29);
  auVar34 = ZEXT1664(auVar33);
  FUN_180244f40();
  auVar33 = auVar34._0_16_;
  auVar31 = auVar32._0_16_;
  auVar29 = auVar30._0_16_;
  if ((char)uStack_6c8 != '\0') {
    if ((param_2 == 7) && (DAT_180c70b40 != '\0')) {
      local_838[8] = 1;
      local_838._0_8_ = &DAT_180bb88c0;
      local_838._9_7_ = 0;
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_ab8 = _DAT_180bb8890;
      ppuStack_ab0 = ppuRam0000000180bb8898;
      lStack_aa8 = lRam0000000180bb88a0;
      uStack_aa0 = uRam0000000180bb88a8;
      auVar27 = ZEXT1664(CONCAT88(uRam0000000180bb88b8,_DAT_180bb88b0));
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar32 = ZEXT1664(auVar32._0_16_);
      auVar34 = ZEXT1664(auVar34._0_16_);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      auVar33 = auVar34._0_16_;
      auVar31 = auVar32._0_16_;
      auVar29 = auVar30._0_16_;
      if ((auVar27[8] != '\0') && (ppuStack_ab0 != (undefined **)0x0)) {
        uVar6 = 2;
        auVar30 = ZEXT1664(auVar29);
        auVar32 = ZEXT1664(auVar31);
        auVar34 = ZEXT1664(auVar33);
        ppuVar19 = ppuStack_ab0;
        ppuVar9 = (undefined **)FUN_1800efea0(&DAT_180c70e18);
        auVar33 = auVar34._0_16_;
        auVar31 = auVar32._0_16_;
        auVar29 = auVar30._0_16_;
        if (ppuVar9 == ppuVar19) {
          uVar4 = FUN_18015c120(&DAT_180c70e10);
          auVar33 = auVar34._0_16_;
          auVar31 = auVar32._0_16_;
          auVar29 = auVar30._0_16_;
          if (uVar6 <= uVar4) {
            FUN_1800a8050(local_720);
            FUN_180391200(local_720);
            FUN_1801e7150(&DAT_180b90250);
            FUN_180391000(local_720);
            auVar33 = auVar34._0_16_;
            auVar31 = auVar32._0_16_;
            auVar29 = auVar30._0_16_;
          }
        }
      }
    }
    local_828[8] = 1;
    local_828._0_8_ = &DAT_180b0e0f8;
    local_828._9_7_ = 0;
    auVar30 = ZEXT1664(auVar29);
    auVar32 = ZEXT1664(auVar31);
    auVar34 = ZEXT1664(auVar33);
    AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    lVar20 = DAT_180b0e0e8;
    lVar18 = DAT_180b0e0e0;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    if ((lVar18 == lVar20) &&
       ((UVar7 = GetTickCount64(), DAT_180b0e100 == 0 || (999 < UVar7 - DAT_180b0e100)))) {
      LOCK();
      UNLOCK();
      DAT_180b0e100 = UVar7;
      FUN_1803d3ae0();
    }
    local_818[8] = 1;
    local_818._0_8_ = &DAT_180bb88c0;
    local_818._9_7_ = 0;
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_ab8 = _DAT_180bb8890;
    ppuStack_ab0 = ppuRam0000000180bb8898;
    lStack_aa8 = lRam0000000180bb88a0;
    uStack_aa0 = uRam0000000180bb88a8;
    local_780 = _DAT_180bb8890;
    ppuStack_778 = ppuRam0000000180bb8898;
    lStack_770 = lRam0000000180bb88a0;
    uStack_768 = uRam0000000180bb88a8;
    local_760 = _DAT_180bb88b0;
    uStack_758 = uRam0000000180bb88b8;
    auVar30 = ZEXT1664(auVar30._0_16_);
    auVar32 = ZEXT1664(auVar32._0_16_);
    auVar34 = ZEXT1664(auVar34._0_16_);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    auVar29 = auVar30._0_16_;
    auVar31 = auVar32._0_16_;
    auVar33 = auVar34._0_16_;
    if (((ppuStack_ab0 == (undefined **)0x0) && (lStack_aa8 == 0)) || (DAT_180b8e2b0 == '\0')) {
      if (param_2 != 7) goto LAB_180389c66;
      DAT_180b8f9e8 = 0;
    }
    else if (param_2 == 7) {
      local_9c8 = ZEXT816(0x1808075e0);
      auVar30 = ZEXT1664(auVar29);
      auVar32 = ZEXT1664(auVar31);
      auVar34 = ZEXT1664(auVar33);
      FUN_18017bf40(local_9c8 + 8);
      FUN_18036b450();
      FUN_18017bf40(&local_8b8);
      uVar14 = local_8b8 - local_9c8._8_8_;
      plVar8 = (longlong *)FUN_180391c10();
      ppuVar19 = (undefined **)(*plVar8 + 1);
      *plVar8 = (longlong)ppuVar19;
      lVar18 = plVar8[1];
      plVar8[1] = lVar18 + uVar14;
      lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
      plVar8[3] = lVar20;
      lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
      plVar8[4] = lVar21;
      lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
      plVar8[5] = lVar22;
      uVar13 = plVar8[2];
      if ((ulonglong)plVar8[2] < uVar14) {
        plVar8[2] = uVar14;
        uVar13 = uVar14;
      }
      if ((local_8b8 == plVar8[7]) || (plVar8[7] <= local_8b8)) {
        local_b38 = (double)(local_8b8 - plVar8[6]) / auVar34._0_8_;
        dVar26 = (double)(lVar18 + uVar14);
        dVar25 = auVar30._0_8_;
        if (local_b38 <= auVar32._0_8_) {
          local_b30 = 0.0;
        }
        else {
          local_b30 = (dVar26 / dVar25) / local_b38;
        }
        local_b40 = dVar26 / auVar34._0_8_;
        local_b48 = (undefined **)((double)uVar13 / dVar25);
        local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
        local_b58 = ppuVar19;
        local_b28 = lVar20;
        local_b20 = lVar21;
        local_b18 = lVar22;
        FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_9c8._0_8_);
        plVar8[2] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = local_8b8;
        plVar8[7] = local_8b8 + 5000000000;
      }
      local_a98 = ZEXT816(0x1808075c0);
      FUN_18017bf40(local_a98 + 8);
      FUN_180374ee0();
      FUN_18017bf40(&local_8a8);
      uVar14 = local_8a8 - local_a98._8_8_;
      plVar8 = (longlong *)FUN_180391df0();
      ppuVar19 = (undefined **)(*plVar8 + 1);
      *plVar8 = (longlong)ppuVar19;
      lVar18 = plVar8[1];
      plVar8[1] = lVar18 + uVar14;
      lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
      plVar8[3] = lVar20;
      lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
      plVar8[4] = lVar21;
      lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
      plVar8[5] = lVar22;
      uVar13 = plVar8[2];
      if ((ulonglong)plVar8[2] < uVar14) {
        plVar8[2] = uVar14;
        uVar13 = uVar14;
      }
      if ((local_8a8 == plVar8[7]) || (plVar8[7] <= local_8a8)) {
        local_b38 = (double)(local_8a8 - plVar8[6]) / auVar34._0_8_;
        dVar26 = (double)(lVar18 + uVar14);
        dVar25 = auVar30._0_8_;
        if (local_b38 <= auVar32._0_8_) {
          local_b30 = 0.0;
        }
        else {
          local_b30 = (dVar26 / dVar25) / local_b38;
        }
        local_b40 = dVar26 / auVar34._0_8_;
        local_b48 = (undefined **)((double)uVar13 / dVar25);
        local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
        local_b58 = ppuVar19;
        local_b28 = lVar20;
        local_b20 = lVar21;
        local_b18 = lVar22;
        FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_a98._0_8_);
        plVar8[2] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = local_8a8;
        plVar8[7] = local_8a8 + 5000000000;
      }
      FUN_1800a8050(&local_730);
      FUN_180390bd0(&local_730);
      FUN_1802f5ed0();
      FUN_18017bf40(&local_8a0);
      uVar14 = local_8a0 - local_728;
      plVar8 = (longlong *)FUN_180391fd0();
      ppuVar19 = (undefined **)(*plVar8 + 1);
      *plVar8 = (longlong)ppuVar19;
      lVar18 = plVar8[1];
      plVar8[1] = lVar18 + uVar14;
      lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
      plVar8[3] = lVar20;
      lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
      plVar8[4] = lVar21;
      lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
      plVar8[5] = lVar22;
      uVar13 = plVar8[2];
      if ((ulonglong)plVar8[2] < uVar14) {
        plVar8[2] = uVar14;
        uVar13 = uVar14;
      }
      if ((local_8a0 == plVar8[7]) || (plVar8[7] <= local_8a0)) {
        local_b38 = (double)(local_8a0 - plVar8[6]) / auVar34._0_8_;
        dVar26 = (double)(lVar18 + uVar14);
        dVar25 = auVar30._0_8_;
        if (local_b38 <= auVar32._0_8_) {
          local_b30 = 0.0;
        }
        else {
          local_b30 = (dVar26 / dVar25) / local_b38;
        }
        local_b40 = dVar26 / auVar34._0_8_;
        local_b48 = (undefined **)((double)uVar13 / dVar25);
        local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
        local_b58 = ppuVar19;
        local_b28 = lVar20;
        local_b20 = lVar21;
        local_b18 = lVar22;
        FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_730);
        plVar8[2] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = local_8a0;
        plVar8[7] = local_8a0 + 5000000000;
      }
      local_a78 = ZEXT816(0x1808075f8);
      FUN_18017bf40(local_a78 + 8);
      FUN_1802cd990();
      FUN_18017bf40(&local_898);
      uVar14 = local_898 - local_a78._8_8_;
      plVar8 = (longlong *)FUN_1803921b0();
      auVar33 = auVar34._0_16_;
      auVar31 = auVar32._0_16_;
      auVar29 = auVar30._0_16_;
      ppuVar19 = (undefined **)(*plVar8 + 1);
      *plVar8 = (longlong)ppuVar19;
      lVar18 = plVar8[1];
      plVar8[1] = lVar18 + uVar14;
      lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
      plVar8[3] = lVar20;
      lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
      plVar8[4] = lVar21;
      lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
      plVar8[5] = lVar22;
      uVar13 = plVar8[2];
      if ((ulonglong)plVar8[2] < uVar14) {
        plVar8[2] = uVar14;
        uVar13 = uVar14;
      }
      if ((local_898 == plVar8[7]) || (plVar8[7] <= local_898)) {
        local_b38 = (double)(local_898 - plVar8[6]) / auVar34._0_8_;
        dVar26 = (double)(lVar18 + uVar14);
        dVar25 = auVar30._0_8_;
        if (local_b38 <= auVar32._0_8_) {
          local_b30 = 0.0;
        }
        else {
          local_b30 = (dVar26 / dVar25) / local_b38;
        }
        local_b40 = dVar26 / auVar34._0_8_;
        local_b48 = (undefined **)((double)uVar13 / dVar25);
        local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
        local_b58 = ppuVar19;
        local_b28 = lVar20;
        local_b20 = lVar21;
        local_b18 = lVar22;
        FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_a78._0_8_);
        auVar33 = auVar34._0_16_;
        auVar31 = auVar32._0_16_;
        auVar29 = auVar30._0_16_;
        plVar8[2] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = local_898;
        plVar8[7] = local_898 + 5000000000;
      }
    }
    else {
LAB_180389c66:
      if (param_2 == 6) {
        auVar30 = ZEXT1664(auVar29);
        auVar32 = ZEXT1664(auVar31);
        auVar34 = ZEXT1664(auVar33);
        FUN_1802b9330(&DAT_180902d10);
        auVar33 = auVar34._0_16_;
        auVar31 = auVar32._0_16_;
        auVar29 = auVar30._0_16_;
      }
    }
  }
  auVar30 = ZEXT1664(auVar29);
  auVar32 = ZEXT1664(auVar31);
  auVar34 = ZEXT1664(auVar33);
  FUN_180180bf0(&local_6e0);
  if ((char)uStack_6d0 != '\0') {
    ReleaseSRWLockShared(pRStack_6d8);
  }
  local_a28 = ZEXT816(0x180807560);
  FUN_18017bf40(local_a28 + 8);
  if (DAT_180c70a10 != 0) {
    (*(code *)DAT_180c70a10)(param_1,param_2);
  }
  FUN_18017bf40(&local_890);
  uVar14 = local_890 - local_a28._8_8_;
  plVar8 = (longlong *)FUN_180392390();
  ppuVar19 = (undefined **)(*plVar8 + 1);
  *plVar8 = (longlong)ppuVar19;
  lVar18 = plVar8[1];
  plVar8[1] = lVar18 + uVar14;
  lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
  plVar8[3] = lVar20;
  lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
  plVar8[4] = lVar21;
  lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
  plVar8[5] = lVar22;
  uVar13 = plVar8[2];
  if ((ulonglong)plVar8[2] < uVar14) {
    plVar8[2] = uVar14;
    uVar13 = uVar14;
  }
  if ((local_890 == plVar8[7]) || (plVar8[7] <= local_890)) {
    local_b38 = (double)(local_890 - plVar8[6]) / auVar34._0_8_;
    dVar26 = (double)(lVar18 + uVar14);
    dVar25 = auVar30._0_8_;
    if (local_b38 <= auVar32._0_8_) {
      local_b30 = 0.0;
    }
    else {
      local_b30 = (dVar26 / dVar25) / local_b38;
    }
    local_b40 = dVar26 / auVar34._0_8_;
    local_b48 = (undefined **)((double)uVar13 / dVar25);
    local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
    local_b58 = ppuVar19;
    local_b28 = lVar20;
    local_b20 = lVar21;
    local_b18 = lVar22;
    FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_a28._0_8_);
    plVar8[2] = 0;
    plVar8[1] = 0;
    *plVar8 = 0;
    plVar8[5] = 0;
    plVar8[4] = 0;
    plVar8[3] = 0;
    plVar8[6] = local_890;
    plVar8[7] = local_890 + 5000000000;
  }
  if ((((DAT_180c70b40 != '\0') && (param_2 == 7)) && (DAT_1808d9bd9 == '\0')) &&
     (DAT_180b0d998 != '\0')) {
    if ((DAT_180cd42e8 & 1) == 0) {
      DAT_180cd42e8 = DAT_180cd42e8 | 1;
      _DAT_180cd42f0 = (undefined1  [16])0x0;
      _DAT_180cd4300 = (undefined1  [16])0x0;
      lVar18 = -1;
      do {
        lVar20 = lVar18 + 1;
        lVar18 = lVar18 + 1;
      } while ("(function () {\n    if (typeof GameStateAPI === \'undefined\' || typeof LobbyAPI === \'undefined\' ||\n        GameStateAPI.IsLocalPlayerPlayingMatch()) return;\n    const root = $.GetContextPanel();\n    if (!root || !root.IsValid() || root.id !== \'CSGOPopups\') return;\n    const manager = root.FindChildTraverse(\'PopupManager\');\n    if (!manager || !manager.IsValid()) return;\n    const popup = manager.FindChildTraverse(\'id-accept-match\');\n    if (!popup || !popup.IsValid() || popup.BHasClass(\'hide\')) {\n        root.hvhgodReady = null;\n        return;\n    }\n    const button = popup.FindChildTraverse(\'AcceptMatchBtn\');\n    const layout = popup.GetParent();\n    if (!button || !button.IsValid() || !layout || !layout.IsValid()) return;\n    const key = layout.GetAttributeString(\'map_and_isreconnect\', \'\');\n    const reservation = key.split(\',\');\n    if (!reservation[0] || reservation[0][0] === \'@\' || reservation[1] === \'true\') return;\n    const remaining = LobbyAPI.GetReadyTimeRemainingSeconds();\n    if (!Number.isFinite(remaining) || remaining <= 0) {\n        root.hvhgodReady = null;\n        return;\n    }\n    let state = root.hvhgodReady;\n    if (!state || state.layout !== layout || state.key !== key || remaining > state.remaining + 1) {\n        state = root.hvhgodReady = { layout: layout, key: key, remaining: remaining,\n            attempts: 0, lastAttempt: 0, acknowledged: false };\n    }\n    state.remaining = remaining;\n    // The native popup hides its button after OnAcceptMatchPressed runs.\n    if (button.BHasClass(\'hidden\')) {\n        if (state.attempts && !state.acknowledged)\n            $.Msg(\'[HVHGOD Auto Accept] ready callback acknowledged\');\n        state.acknowledged = true;\n        return;\n    }\n    // Visibility/focus can change while tabbed out. The live reservation and\n    // native accepted state determine eligibility, not whether it is rendered.\n    if (state.acknowledged || !button.enabled) return;\n    const now = Date.now();\n    if (state.attempts >= 3 || (state.attempts && now - state.lastAttempt < 1500)) r..." /* TRUNCATED STRING LITERAL */
               [lVar20] != '\0');
      FUN_18015ba30(&DAT_180cd42f0);
      atexit(FUN_180663040);
    }
    FUN_1803eca40(&DAT_180cd42f0,2,&DAT_180c7c420);
  }
  if (((DAT_180c70b40 != '\0') && (param_2 == 7)) && (DAT_1808d9bd9 == '\0')) {
    FUN_1801f1250();
  }
  if (((DAT_180c70b40 != '\0') && (param_2 == 7)) && (DAT_1808d9bd9 == '\0')) {
    FUN_1802852b0(&DAT_180b8f8b0);
  }
  if (((DAT_180c70b40 != '\0') && (param_2 == 7)) && (DAT_1808d9bd9 == '\0')) {
    local_9e8 = ZEXT816(0x180807538);
    FUN_18017bf40(local_9e8 + 8);
    FUN_1802b0560(&DAT_180b8f830);
    FUN_18017bf40(&local_888);
    uVar14 = local_888 - local_9e8._8_8_;
    plVar8 = (longlong *)FUN_180392570();
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_888 == plVar8[7]) || (plVar8[7] <= local_888)) {
      local_b38 = (double)(local_888 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      local_b30 = auVar32._0_8_;
      dVar25 = auVar30._0_8_;
      if (local_b30 < local_b38) {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_9e8._0_8_);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_888;
      plVar8[7] = local_888 + 5000000000;
    }
  }
  if (((DAT_180c70b40 != '\0') && (param_2 == 7)) && (DAT_1808d9bd9 == '\0')) {
    local_9f8 = ZEXT816(0x180807598);
    FUN_18017bf40(local_9f8 + 8);
    FUN_1802836d0();
    FUN_18017bf40(&local_880);
    uVar14 = local_880 - local_9f8._8_8_;
    plVar8 = (longlong *)FUN_180392750();
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_880 == plVar8[7]) || (plVar8[7] <= local_880)) {
      local_b38 = (double)(local_880 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      local_b30 = auVar32._0_8_;
      dVar25 = auVar30._0_8_;
      if (local_b30 < local_b38) {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_9f8._0_8_);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_880;
      plVar8[7] = local_880 + 5000000000;
    }
  }
  if (((DAT_180c70b40 != '\0') && (param_2 == 7)) && (DAT_1808d9bd9 == '\0')) {
    local_8d8 = ZEXT816(0x180807578);
    FUN_18017bf40(local_8d8 + 8);
    FUN_18021f400(&DAT_180cc9e50);
    FUN_18017bf40(&local_878);
    uVar14 = local_878 - local_8d8._8_8_;
    plVar8 = (longlong *)FUN_180392930();
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_878 == plVar8[7]) || (plVar8[7] <= local_878)) {
      local_b38 = (double)(local_878 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      local_b30 = auVar32._0_8_;
      dVar25 = auVar30._0_8_;
      if (local_b30 < local_b38) {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_8d8._0_8_);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_878;
      plVar8[7] = local_878 + 5000000000;
    }
  }
  if (((DAT_180c70b40 != '\0') && (param_2 == 7)) && (DAT_1808d9bd9 == '\0')) {
    local_a08 = ZEXT816(0x1808076d8);
    FUN_18017bf40(local_a08 + 8);
    FUN_1801a4bb0();
    FUN_18017bf40(&local_870);
    uVar14 = local_870 - local_a08._8_8_;
    plVar8 = (longlong *)FUN_180392b10();
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_870 == plVar8[7]) || (plVar8[7] <= local_870)) {
      local_b38 = (double)(local_870 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      local_b30 = auVar32._0_8_;
      dVar25 = auVar30._0_8_;
      if (local_b30 < local_b38) {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_a08._0_8_);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_870;
      plVar8[7] = local_870 + 5000000000;
    }
  }
  auVar33 = auVar34._0_16_;
  auVar31 = auVar32._0_16_;
  auVar29 = auVar30._0_16_;
  if (((DAT_180c70b40 != '\0') && (param_2 == 7)) && (DAT_1808d9bd9 == '\0')) {
    local_9a8 = ZEXT816(0x1808076b8);
    FUN_18017bf40(local_9a8 + 8);
    local_a18 = ZEXT816(0x180807710);
    FUN_18017bf40(local_a18 + 8);
    FUN_1803ee530(&DAT_180cce340);
    puVar15 = &DAT_180cce780;
    do {
      FUN_1803ee530(puVar15);
      puVar15 = puVar15 + 0x440;
    } while (puVar15 != &DAT_180ccf000);
    FUN_18017bf40(&local_868);
    uVar14 = local_868 - local_a18._8_8_;
    plVar8 = (longlong *)FUN_180392ed0();
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_868 == plVar8[7]) || (plVar8[7] <= local_868)) {
      local_b38 = (double)(local_868 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      local_b30 = auVar32._0_8_;
      dVar25 = auVar30._0_8_;
      if (local_b30 < local_b38) {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_a18._0_8_);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_868;
      plVar8[7] = local_868 + 5000000000;
    }
    local_a38 = ZEXT816(0x1808076f0);
    FUN_18017bf40(local_a38 + 8);
    FUN_1803ee530(&DAT_180ccf000);
    FUN_18017bf40(&local_860);
    uVar14 = local_860 - local_a38._8_8_;
    plVar8 = (longlong *)FUN_1803930b0();
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_860 == plVar8[7]) || (plVar8[7] <= local_860)) {
      local_b38 = (double)(local_860 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      local_b30 = auVar32._0_8_;
      dVar25 = auVar30._0_8_;
      if (local_b30 < local_b38) {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_a38._0_8_);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_860;
      plVar8[7] = local_860 + 5000000000;
    }
    local_a48 = ZEXT816(0x180807650);
    FUN_18017bf40(local_a48 + 8);
    FUN_1803c0b50(&DAT_180ccf690);
    FUN_18017bf40(&local_858);
    uVar14 = local_858 - local_a48._8_8_;
    plVar8 = (longlong *)FUN_180393290();
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_858 == plVar8[7]) || (plVar8[7] <= local_858)) {
      local_b38 = (double)(local_858 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      local_b30 = auVar32._0_8_;
      dVar25 = auVar30._0_8_;
      if (local_b30 < local_b38) {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_a48._0_8_);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_858;
      plVar8[7] = local_858 + 5000000000;
    }
    local_a58 = ZEXT816(0x180807630);
    FUN_18017bf40(local_a58 + 8);
    FUN_1803c0b50(&DAT_180cd0770);
    FUN_18017bf40(&local_850);
    uVar14 = local_850 - local_a58._8_8_;
    plVar8 = (longlong *)FUN_180393470();
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_850 == plVar8[7]) || (plVar8[7] <= local_850)) {
      local_b38 = (double)(local_850 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      local_b30 = auVar32._0_8_;
      dVar25 = auVar30._0_8_;
      if (local_b30 < local_b38) {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_a58._0_8_);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_850;
      plVar8[7] = local_850 + 5000000000;
    }
    local_a68 = ZEXT816(0x180807690);
    FUN_18017bf40(local_a68 + 8);
    FUN_1803c0b50(&DAT_180cd1850);
    FUN_18017bf40(&local_848);
    uVar14 = local_848 - local_a68._8_8_;
    plVar8 = (longlong *)FUN_180393650();
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_848 == plVar8[7]) || (plVar8[7] <= local_848)) {
      local_b38 = (double)(local_848 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      local_b30 = auVar32._0_8_;
      dVar25 = auVar30._0_8_;
      if (local_b30 < local_b38) {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_a68._0_8_);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_848;
      plVar8[7] = local_848 + 5000000000;
    }
    local_a88 = ZEXT816(0x180807668);
    FUN_18017bf40(local_a88 + 8);
    FUN_1803c0b50(&DAT_180cd2930);
    FUN_18017bf40(&local_840);
    uVar14 = local_840 - local_a88._8_8_;
    plVar8 = (longlong *)FUN_180393830();
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_840 == plVar8[7]) || (plVar8[7] <= local_840)) {
      local_b38 = (double)(local_840 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      local_b30 = auVar32._0_8_;
      dVar25 = auVar30._0_8_;
      if (local_b30 < local_b38) {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_a88._0_8_);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_840;
      plVar8[7] = local_840 + 5000000000;
    }
    local_9b8 = ZEXT816(0x180807818);
    FUN_18017bf40(local_9b8 + 8);
    FUN_1803ed240(0);
    FUN_18017bf40(&local_8c8);
    uVar14 = local_8c8 - local_9b8._8_8_;
    plVar8 = (longlong *)FUN_180393a10();
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_8c8 == plVar8[7]) || (plVar8[7] <= local_8c8)) {
      local_b38 = (double)(local_8c8 - plVar8[6]) / auVar34._0_8_;
      dVar26 = (double)(lVar18 + uVar14);
      local_b30 = auVar32._0_8_;
      dVar25 = auVar30._0_8_;
      if (local_b30 < local_b38) {
        local_b30 = (dVar26 / dVar25) / local_b38;
      }
      local_b40 = dVar26 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar25);
      local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
      local_b58 = ppuVar19;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_9b8._0_8_);
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_8c8;
      plVar8[7] = local_8c8 + 5000000000;
    }
    FUN_18017bf40(&local_8c0);
    uVar14 = local_8c0 - local_9a8._8_8_;
    plVar8 = (longlong *)FUN_180392cf0();
    auVar33 = auVar34._0_16_;
    auVar31 = auVar32._0_16_;
    dVar26 = auVar32._0_8_;
    auVar29 = auVar30._0_16_;
    ppuVar19 = (undefined **)(*plVar8 + 1);
    *plVar8 = (longlong)ppuVar19;
    lVar18 = plVar8[1];
    plVar8[1] = lVar18 + uVar14;
    lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
    plVar8[3] = lVar20;
    lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
    plVar8[4] = lVar21;
    lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
    plVar8[5] = lVar22;
    uVar13 = plVar8[2];
    if ((ulonglong)plVar8[2] < uVar14) {
      plVar8[2] = uVar14;
      uVar13 = uVar14;
    }
    if ((local_8c0 == plVar8[7]) || (plVar8[7] <= local_8c0)) {
      local_b38 = (double)(local_8c0 - plVar8[6]) / auVar34._0_8_;
      dVar25 = (double)(lVar18 + uVar14);
      dVar28 = auVar30._0_8_;
      if (dVar26 < local_b38) {
        dVar26 = (dVar25 / dVar28) / local_b38;
      }
      local_b40 = dVar25 / auVar34._0_8_;
      local_b48 = (undefined **)((double)uVar13 / dVar28);
      local_b50 = (char *)((dVar25 / (double)ppuVar19) / dVar28);
      local_b58 = ppuVar19;
      local_b30 = dVar26;
      local_b28 = lVar20;
      local_b20 = lVar21;
      local_b18 = lVar22;
      FUN_1801af8a0(dVar25 / (double)ppuVar19,local_b50,local_9a8._0_8_);
      auVar33 = auVar34._0_16_;
      auVar31 = auVar32._0_16_;
      auVar29 = auVar30._0_16_;
      plVar8[2] = 0;
      plVar8[1] = 0;
      *plVar8 = 0;
      plVar8[5] = 0;
      plVar8[4] = 0;
      plVar8[3] = 0;
      plVar8[6] = local_8c0;
      plVar8[7] = local_8c0 + 5000000000;
    }
  }
  local_750 = 0;
  pRStack_748 = (PSRWLOCK)0x0;
  uStack_740 = 0;
  uStack_738 = 0;
  auVar30 = ZEXT1664(auVar29);
  auVar32 = ZEXT1664(auVar31);
  auVar34 = ZEXT1664(auVar33);
  uVar24 = FUN_180244f40();
  cVar1 = DAT_1808d9bd8;
  auVar33 = auVar34._0_16_;
  auVar31 = auVar32._0_16_;
  auVar29 = auVar30._0_16_;
  if ((char)uStack_738 == '\0') {
    if (((DAT_1808d9bd9 == '\0') && ((byte)(DAT_1808d9bd8 - 1U) < 2)) &&
       ((param_2 == 6 || (param_2 == 0xc)))) {
      local_808[8] = 1;
      local_808._0_8_ = &DAT_180b0e0f8;
      local_808._9_7_ = 0;
      AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
      lVar20 = DAT_180b0e0e8;
      lVar18 = DAT_180b0e0e0;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
      if ((lVar18 == lVar20) &&
         ((UVar7 = GetTickCount64(), DAT_180b0e100 == 0 || (999 < UVar7 - DAT_180b0e100)))) {
        LOCK();
        UNLOCK();
        DAT_180b0e100 = UVar7;
        FUN_1803d3ae0();
      }
      FUN_1803e11b0();
      if (param_2 == 0xc) {
        FUN_180419b00();
        FUN_1803d7740();
      }
      local_7f8[8] = 1;
      local_7f8._0_8_ = &DAT_180bb88c0;
      local_7f8._9_7_ = 0;
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_ab8 = _DAT_180bb8890;
      ppuStack_ab0 = ppuRam0000000180bb8898;
      lStack_aa8 = lRam0000000180bb88a0;
      uStack_aa0 = uRam0000000180bb88a8;
      local_6a0 = _DAT_180bb88b0;
      uStack_698 = uRam0000000180bb88b8;
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar32 = ZEXT1664(auVar32._0_16_);
      auVar34 = ZEXT1664(auVar34._0_16_);
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      ppuVar19 = ppuStack_ab0;
      auVar33 = auVar34._0_16_;
      auVar31 = auVar32._0_16_;
      auVar29 = auVar30._0_16_;
      if (((ppuStack_ab0 != (undefined **)0x0) || (lStack_aa8 != 0)) && (DAT_180b8e2b0 != '\0')) {
        auVar30 = ZEXT1664(auVar29);
        auVar32 = ZEXT1664(auVar31);
        auVar34 = ZEXT1664(auVar33);
        cVar2 = FUN_180388430();
        auVar33 = auVar34._0_16_;
        auVar31 = auVar32._0_16_;
        auVar29 = auVar30._0_16_;
        if (cVar2 != '\0') {
          uVar24 = FUN_1800ac940(local_6c0);
          FUN_180244f40(uVar24,local_6c0);
          if (local_6a8 == '\0') {
            FUN_180180bc0(local_6c0);
            auVar33 = auVar34._0_16_;
            auVar31 = auVar32._0_16_;
            auVar29 = auVar30._0_16_;
          }
          else {
            uVar24 = FUN_1803d3ae0();
            uVar24 = FUN_1803d44c0(uVar24,local_798,1);
            uVar24 = FUN_1801ac840(uVar24);
            local_b58 = (undefined **)FUN_1803d45a0();
            local_b50 = (char *)uVar24;
            FUN_1801a8050(0,"EntityCache","ENTITY_CACHE_WORLD_READY",
                          "entities=%zu controllers=%zu source=world_ready_bootstrap");
            FUN_1801abba0(local_798);
            FUN_180378230(cVar1,3,"world_dependencies_ready");
            pcVar10 = (char *)FUN_1803d45a0();
            uVar5 = FUN_18015c120(&DAT_180c70e00,0);
            local_b48 = ppuVar19;
            local_b58 = (undefined **)CONCAT44(local_b58._4_4_,uVar5);
            local_b50 = pcVar10;
            FUN_18038d2f0();
            FUN_180180bc0(local_6c0);
            auVar33 = auVar34._0_16_;
            auVar31 = auVar32._0_16_;
            auVar29 = auVar30._0_16_;
          }
        }
      }
    }
  }
  else {
    if (param_2 == 7) {
      FUN_1802fb540(uVar24,DAT_180b0c9f8);
LAB_18038b8d2:
      local_b58 = (undefined **)0x0;
      FUN_18024c5d0(&DAT_180b8e420,(param_2 != 7) + '\x04',0,0);
      if (param_2 == 7) {
        local_998 = ZEXT816(0x1808077b8);
        FUN_18017bf40(local_998 + 8);
        FUN_1802f60f0();
        FUN_18017bf40(&local_ac0);
        uVar14 = local_ac0 - local_998._8_8_;
        plVar8 = (longlong *)FUN_180393bf0();
        ppuVar19 = (undefined **)(*plVar8 + 1);
        *plVar8 = (longlong)ppuVar19;
        lVar18 = plVar8[1];
        plVar8[1] = lVar18 + uVar14;
        lVar20 = plVar8[3] + (ulonglong)(999999 < uVar14);
        plVar8[3] = lVar20;
        lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar14);
        plVar8[4] = lVar21;
        lVar22 = plVar8[5] + (ulonglong)(15999999 < uVar14);
        plVar8[5] = lVar22;
        uVar13 = plVar8[2];
        if ((ulonglong)plVar8[2] < uVar14) {
          plVar8[2] = uVar14;
          uVar13 = uVar14;
        }
        if ((local_ac0 == plVar8[7]) || (plVar8[7] <= local_ac0)) {
          local_b38 = (double)(local_ac0 - plVar8[6]) / auVar34._0_8_;
          dVar26 = (double)(lVar18 + uVar14);
          local_b30 = auVar32._0_8_;
          dVar25 = auVar30._0_8_;
          if (local_b30 < local_b38) {
            local_b30 = (dVar26 / dVar25) / local_b38;
          }
          local_b40 = dVar26 / auVar34._0_8_;
          local_b48 = (undefined **)((double)uVar13 / dVar25);
          local_b50 = (char *)((dVar26 / (double)ppuVar19) / dVar25);
          local_b58 = ppuVar19;
          local_b28 = lVar20;
          local_b20 = lVar21;
          local_b18 = lVar22;
          FUN_1801af8a0(dVar26 / (double)ppuVar19,local_b50,local_998._0_8_);
          plVar8[2] = 0;
          plVar8[1] = 0;
          *plVar8 = 0;
          plVar8[5] = 0;
          plVar8[4] = 0;
          plVar8[3] = 0;
          plVar8[6] = local_ac0;
          plVar8[7] = local_ac0 + 5000000000;
        }
      }
      else {
        if (param_2 != 0xc) goto LAB_18038baf2;
        FUN_180419b00();
        FUN_1803d7740();
        FUN_1802ccf00();
      }
    }
    else {
      if (param_2 == 0xc) goto LAB_18038b8d2;
LAB_18038baf2:
      if (param_2 == 6) {
        if ((((DAT_180c70920 == 0) || (DAT_180c70930 == 0)) ||
            ((DAT_180c708c0 == 0 || (DAT_180c708d0 == 0)))) &&
           ((UVar7 = GetTickCount64(), DAT_180b0e100 == 0 || (999 < UVar7 - DAT_180b0e100)))) {
          LOCK();
          UNLOCK();
          DAT_180b0e100 = UVar7;
          FUN_1803d3ae0();
        }
        local_988 = ZEXT816(0x180807798);
        FUN_18017bf40(local_988 + 8);
        FUN_1803e11b0();
        FUN_18017bf40(&local_b08);
        uVar16 = local_b08 - local_988._8_8_;
        plVar8 = (longlong *)FUN_180393dd0();
        ppuVar19 = (undefined **)(*plVar8 + 1);
        *plVar8 = (longlong)ppuVar19;
        uVar17 = plVar8[1] + uVar16;
        plVar8[1] = uVar17;
        lVar20 = plVar8[3] + (ulonglong)(999999 < uVar16);
        plVar8[3] = lVar20;
        lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar16);
        plVar8[4] = lVar21;
        uVar14 = (ulonglong)(15999999 < uVar16);
        lVar18 = plVar8[5];
        plVar8[5] = lVar18 + uVar14;
        uVar13 = plVar8[2];
        if ((ulonglong)plVar8[2] < uVar16) {
          plVar8[2] = uVar16;
          uVar13 = uVar16;
        }
        if ((local_b08 == plVar8[7]) || (plVar8[7] <= local_b08)) {
          local_b38 = (double)(local_b08 - plVar8[6]) / auVar34._0_8_;
          local_b30 = auVar32._0_8_;
          dVar26 = auVar30._0_8_;
          if (local_b30 < local_b38) {
            if ((longlong)uVar17 < 0) {
              local_b30 = ((double)uVar17 / dVar26) / local_b38;
            }
            else {
              local_b30 = ((double)(longlong)uVar17 / dVar26) / local_b38;
            }
          }
          local_b40 = (double)uVar17 / auVar34._0_8_;
          local_b48 = (undefined **)((double)uVar13 / dVar26);
          dVar25 = (double)uVar17 / (double)ppuVar19;
          local_b50 = (char *)(dVar25 / dVar26);
          local_b58 = ppuVar19;
          local_b28 = lVar20;
          local_b20 = lVar21;
          local_b18 = lVar18 + uVar14;
          FUN_1801af8a0(dVar25,local_b50,local_988._0_8_);
          plVar8[2] = 0;
          plVar8[1] = 0;
          *plVar8 = 0;
          plVar8[5] = 0;
          plVar8[4] = 0;
          plVar8[3] = 0;
          plVar8[6] = local_b08;
          uVar14 = local_b08 + 5000000000;
          plVar8[7] = uVar14;
        }
        cVar1 = FUN_18038d3c0(uVar14,&DAT_180c7e1f0,&DAT_180b0b320);
        if (cVar1 == '\0') {
          FUN_1802740d0();
        }
        local_978[8] = 1;
        local_978._0_8_ = &DAT_180bb88c0;
        local_978._9_7_ = 0;
        AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
        auVar33 = auVar34._0_16_;
        auVar31 = auVar32._0_16_;
        auVar29 = auVar30._0_16_;
        local_ab8 = _DAT_180bb8890;
        ppuStack_ab0 = ppuRam0000000180bb8898;
        lStack_aa8 = lRam0000000180bb88a0;
        uStack_aa0 = uRam0000000180bb88a8;
        uVar24 = uRam0000000180bb88b8;
        if (local_978[8] != '\0') {
          auVar30 = ZEXT1664(auVar29);
          auVar32 = ZEXT1664(auVar31);
          auVar34 = ZEXT1664(auVar33);
          ReleaseSRWLockShared((PSRWLOCK)local_978._0_8_);
          auVar33 = auVar34._0_16_;
          auVar31 = auVar32._0_16_;
          auVar29 = auVar30._0_16_;
        }
        if (((char)uVar24 == '\0') || (ppuStack_ab0 == (undefined **)0x0)) {
          auVar30 = ZEXT1664(auVar29);
          auVar32 = ZEXT1664(auVar31);
          auVar34 = ZEXT1664(auVar33);
          FUN_1801e7150(&DAT_180b90250);
          FUN_1801fb0c0();
          DAT_180c70e18 = (undefined **)0x0;
          DAT_180c70e10 = 0;
        }
        else if (DAT_180c70e18 == ppuStack_ab0) {
          auVar30 = ZEXT1664(auVar29);
          auVar32 = ZEXT1664(auVar31);
          auVar34 = ZEXT1664(auVar33);
          uVar6 = FUN_18015c120(&DAT_180c70e10,0);
          if (uVar6 < 3) {
            FUN_1801ad240(&DAT_180c70e10,uVar6 + 1,3);
          }
        }
        else {
          auVar30 = ZEXT1664(auVar29);
          auVar32 = ZEXT1664(auVar31);
          auVar34 = ZEXT1664(auVar33);
          ppuVar19 = ppuStack_ab0;
          FUN_18015e9b0(&DAT_180c70e18,ppuStack_ab0,3);
          FUN_1801ad240(&DAT_180c70e10,0);
          local_b58 = ppuVar19;
          FUN_1800e5f30(0,"FrameStage","PAWN_NETWORK_STABILIZING","pawn=0x%p");
        }
      }
    }
    local_968[8] = 1;
    local_968._0_8_ = &DAT_180bb88c0;
    local_968._9_7_ = 0;
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    auVar33 = auVar34._0_16_;
    auVar31 = auVar32._0_16_;
    auVar29 = auVar30._0_16_;
    local_ab8 = _DAT_180bb8890;
    ppuStack_ab0 = ppuRam0000000180bb8898;
    lStack_aa8 = lRam0000000180bb88a0;
    uStack_aa0 = uRam0000000180bb88a8;
    uVar24 = uRam0000000180bb88b8;
    if (local_968[8] != '\0') {
      auVar30 = ZEXT1664(auVar29);
      auVar32 = ZEXT1664(auVar31);
      auVar34 = ZEXT1664(auVar33);
      ReleaseSRWLockShared((PSRWLOCK)local_968._0_8_);
      auVar33 = auVar34._0_16_;
      auVar31 = auVar32._0_16_;
      auVar29 = auVar30._0_16_;
    }
    ppuVar19 = ppuStack_ab0;
    if (((((char)uVar24 == '\0') || (ppuStack_ab0 == (undefined **)0x0)) ||
        (DAT_180c70e18 != ppuStack_ab0)) || (DAT_180c70e10 < 2)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    if (param_2 == 6) {
      auVar30 = ZEXT1664(auVar29);
      auVar32 = ZEXT1664(auVar31);
      auVar34 = ZEXT1664(auVar33);
      FUN_1802f5a80();
      auVar33 = auVar34._0_16_;
      auVar31 = auVar32._0_16_;
      auVar29 = auVar30._0_16_;
    }
    if (((ppuVar19 == (undefined **)0x0) && (lStack_aa8 == 0)) || (DAT_180b8e2b0 == '\0')) {
      if (param_2 == 7) {
LAB_18038cc01:
        local_908 = ZEXT816(0x1808079b0);
        auVar30 = ZEXT1664(auVar29);
        auVar32 = ZEXT1664(auVar31);
        auVar34 = ZEXT1664(auVar33);
        FUN_18017bf40(local_908 + 8);
        FUN_18019f580();
        FUN_18017bf40(&local_ad8);
        uVar17 = local_ad8 - local_908._8_8_;
        plVar8 = (longlong *)FUN_180394eb0();
        auVar33 = auVar34._0_16_;
        auVar31 = auVar32._0_16_;
        auVar29 = auVar30._0_16_;
        ppuVar19 = (undefined **)(*plVar8 + 1);
        *plVar8 = (longlong)ppuVar19;
        uVar14 = plVar8[1] + uVar17;
        plVar8[1] = uVar14;
        lVar18 = plVar8[3] + (ulonglong)(999999 < uVar17);
        plVar8[3] = lVar18;
        lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar17);
        plVar8[4] = lVar21;
        lVar20 = plVar8[5] + (ulonglong)(15999999 < uVar17);
        plVar8[5] = lVar20;
        uVar13 = plVar8[2];
        if ((ulonglong)plVar8[2] < uVar17) {
          plVar8[2] = uVar17;
          uVar13 = uVar17;
        }
        if ((local_ad8 == plVar8[7]) || (plVar8[7] <= local_ad8)) {
          local_b38 = (double)(local_ad8 - plVar8[6]) / auVar34._0_8_;
          local_b30 = auVar32._0_8_;
          dVar26 = auVar30._0_8_;
          if (local_b30 < local_b38) {
            if ((longlong)uVar14 < 0) {
              local_b30 = ((double)uVar14 / dVar26) / local_b38;
            }
            else {
              local_b30 = ((double)(longlong)uVar14 / dVar26) / local_b38;
            }
          }
          local_b40 = (double)uVar14 / auVar34._0_8_;
          local_b48 = (undefined **)((double)uVar13 / dVar26);
          dVar25 = (double)uVar14 / (double)ppuVar19;
          local_b50 = (char *)(dVar25 / dVar26);
          local_b58 = ppuVar19;
          local_b28 = lVar18;
          local_b20 = lVar21;
          local_b18 = lVar20;
          FUN_1801af8a0(dVar25,local_b50,local_908._0_8_);
          auVar33 = auVar34._0_16_;
          auVar31 = auVar32._0_16_;
          auVar29 = auVar30._0_16_;
          plVar8[2] = 0;
          plVar8[1] = 0;
          *plVar8 = 0;
          plVar8[5] = 0;
          plVar8[4] = 0;
          plVar8[3] = 0;
          plVar8[6] = local_ad8;
          plVar8[7] = local_ad8 + 5000000000;
        }
      }
    }
    else if (param_2 == 6) {
      if (bVar23) {
        auVar30 = ZEXT1664(auVar29);
        auVar32 = ZEXT1664(auVar31);
        auVar34 = ZEXT1664(auVar33);
        FUN_1800a8050(local_710);
        FUN_18038e9a0(local_710);
        FUN_1801fdf90(&DAT_180cca8e0);
        FUN_18038e7a0(local_710);
        auVar33 = auVar34._0_16_;
        auVar31 = auVar32._0_16_;
        auVar29 = auVar30._0_16_;
      }
      local_958 = ZEXT816(0x1808078a0);
      auVar30 = ZEXT1664(auVar29);
      auVar32 = ZEXT1664(auVar31);
      auVar34 = ZEXT1664(auVar33);
      FUN_18017bf40(local_958 + 8);
      FUN_180271110(&DAT_180cc9398);
      FUN_18017bf40(&local_b00);
      uVar17 = local_b00 - local_958._8_8_;
      plVar8 = (longlong *)FUN_180394190();
      ppuVar19 = (undefined **)(*plVar8 + 1);
      *plVar8 = (longlong)ppuVar19;
      uVar14 = plVar8[1] + uVar17;
      plVar8[1] = uVar14;
      lVar18 = plVar8[3] + (ulonglong)(999999 < uVar17);
      plVar8[3] = lVar18;
      lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar17);
      plVar8[4] = lVar21;
      lVar20 = plVar8[5] + (ulonglong)(15999999 < uVar17);
      plVar8[5] = lVar20;
      uVar13 = plVar8[2];
      if ((ulonglong)plVar8[2] < uVar17) {
        plVar8[2] = uVar17;
        uVar13 = uVar17;
      }
      if ((local_b00 == plVar8[7]) || (plVar8[7] <= local_b00)) {
        local_b38 = (double)(local_b00 - plVar8[6]) / auVar34._0_8_;
        local_b30 = auVar32._0_8_;
        dVar26 = auVar30._0_8_;
        if (local_b30 < local_b38) {
          if ((longlong)uVar14 < 0) {
            local_b30 = ((double)uVar14 / dVar26) / local_b38;
          }
          else {
            local_b30 = ((double)(longlong)uVar14 / dVar26) / local_b38;
          }
        }
        local_b40 = (double)uVar14 / auVar34._0_8_;
        local_b48 = (undefined **)((double)uVar13 / dVar26);
        dVar25 = (double)uVar14 / (double)ppuVar19;
        local_b50 = (char *)(dVar25 / dVar26);
        local_b58 = ppuVar19;
        local_b28 = lVar18;
        local_b20 = lVar21;
        local_b18 = lVar20;
        FUN_1801af8a0(dVar25,local_b50,local_958._0_8_);
        plVar8[2] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = local_b00;
        plVar8[7] = local_b00 + 5000000000;
      }
      local_948 = ZEXT816(0x180807878);
      FUN_18017bf40(local_948 + 8);
      FUN_18028f060(&DAT_180cc9690);
      FUN_18017bf40(&local_af8);
      uVar17 = local_af8 - local_948._8_8_;
      plVar8 = (longlong *)FUN_180394370();
      ppuVar19 = (undefined **)(*plVar8 + 1);
      *plVar8 = (longlong)ppuVar19;
      uVar14 = plVar8[1] + uVar17;
      plVar8[1] = uVar14;
      lVar18 = plVar8[3] + (ulonglong)(999999 < uVar17);
      plVar8[3] = lVar18;
      lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar17);
      plVar8[4] = lVar21;
      lVar20 = plVar8[5] + (ulonglong)(15999999 < uVar17);
      plVar8[5] = lVar20;
      uVar13 = plVar8[2];
      if ((ulonglong)plVar8[2] < uVar17) {
        plVar8[2] = uVar17;
        uVar13 = uVar17;
      }
      if ((local_af8 == plVar8[7]) || (plVar8[7] <= local_af8)) {
        local_b38 = (double)(local_af8 - plVar8[6]) / auVar34._0_8_;
        local_b30 = auVar32._0_8_;
        dVar26 = auVar30._0_8_;
        if (local_b30 < local_b38) {
          if ((longlong)uVar14 < 0) {
            local_b30 = ((double)uVar14 / dVar26) / local_b38;
          }
          else {
            local_b30 = ((double)(longlong)uVar14 / dVar26) / local_b38;
          }
        }
        local_b40 = (double)uVar14 / auVar34._0_8_;
        local_b48 = (undefined **)((double)uVar13 / dVar26);
        dVar25 = (double)uVar14 / (double)ppuVar19;
        local_b50 = (char *)(dVar25 / dVar26);
        local_b58 = ppuVar19;
        local_b28 = lVar18;
        local_b20 = lVar21;
        local_b18 = lVar20;
        FUN_1801af8a0(dVar25,local_b50,local_948._0_8_);
        plVar8[2] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = local_af8;
        plVar8[7] = local_af8 + 5000000000;
      }
      local_938 = ZEXT816(0x1808078e0);
      FUN_18017bf40(local_938 + 8);
      FUN_180292bd0(&DAT_180cc96d0);
      FUN_18017bf40(&local_af0);
      uVar17 = local_af0 - local_938._8_8_;
      plVar8 = (longlong *)FUN_180394550();
      ppuVar19 = (undefined **)(*plVar8 + 1);
      *plVar8 = (longlong)ppuVar19;
      uVar14 = plVar8[1] + uVar17;
      plVar8[1] = uVar14;
      lVar18 = plVar8[3] + (ulonglong)(999999 < uVar17);
      plVar8[3] = lVar18;
      lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar17);
      plVar8[4] = lVar21;
      lVar20 = plVar8[5] + (ulonglong)(15999999 < uVar17);
      plVar8[5] = lVar20;
      uVar13 = plVar8[2];
      if ((ulonglong)plVar8[2] < uVar17) {
        plVar8[2] = uVar17;
        uVar13 = uVar17;
      }
      if ((local_af0 == plVar8[7]) || (plVar8[7] <= local_af0)) {
        local_b38 = (double)(local_af0 - plVar8[6]) / auVar34._0_8_;
        local_b30 = auVar32._0_8_;
        dVar26 = auVar30._0_8_;
        if (local_b30 < local_b38) {
          if ((longlong)uVar14 < 0) {
            local_b30 = ((double)uVar14 / dVar26) / local_b38;
          }
          else {
            local_b30 = ((double)(longlong)uVar14 / dVar26) / local_b38;
          }
        }
        local_b40 = (double)uVar14 / auVar34._0_8_;
        local_b48 = (undefined **)((double)uVar13 / dVar26);
        dVar25 = (double)uVar14 / (double)ppuVar19;
        local_b50 = (char *)(dVar25 / dVar26);
        local_b58 = ppuVar19;
        local_b28 = lVar18;
        local_b20 = lVar21;
        local_b18 = lVar20;
        FUN_1801af8a0(dVar25,local_b50,local_938._0_8_);
        plVar8[2] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = local_af0;
        plVar8[7] = local_af0 + 5000000000;
      }
      local_928 = ZEXT816(0x1808078c0);
      FUN_18017bf40(local_928 + 8);
      FUN_1802bde10();
      FUN_18017bf40(&local_ae8);
      uVar17 = local_ae8 - local_928._8_8_;
      plVar8 = (longlong *)FUN_180394730();
      ppuVar19 = (undefined **)(*plVar8 + 1);
      *plVar8 = (longlong)ppuVar19;
      uVar14 = plVar8[1] + uVar17;
      plVar8[1] = uVar14;
      lVar18 = plVar8[3] + (ulonglong)(999999 < uVar17);
      plVar8[3] = lVar18;
      lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar17);
      plVar8[4] = lVar21;
      lVar20 = plVar8[5] + (ulonglong)(15999999 < uVar17);
      plVar8[5] = lVar20;
      uVar13 = plVar8[2];
      if ((ulonglong)plVar8[2] < uVar17) {
        plVar8[2] = uVar17;
        uVar13 = uVar17;
      }
      if ((local_ae8 == plVar8[7]) || (plVar8[7] <= local_ae8)) {
        local_b38 = (double)(local_ae8 - plVar8[6]) / auVar34._0_8_;
        local_b30 = auVar32._0_8_;
        dVar26 = auVar30._0_8_;
        if (local_b30 < local_b38) {
          if ((longlong)uVar14 < 0) {
            local_b30 = ((double)uVar14 / dVar26) / local_b38;
          }
          else {
            local_b30 = ((double)(longlong)uVar14 / dVar26) / local_b38;
          }
        }
        local_b40 = (double)uVar14 / auVar34._0_8_;
        local_b48 = (undefined **)((double)uVar13 / dVar26);
        dVar25 = (double)uVar14 / (double)ppuVar19;
        local_b50 = (char *)(dVar25 / dVar26);
        local_b58 = ppuVar19;
        local_b28 = lVar18;
        local_b20 = lVar21;
        local_b18 = lVar20;
        FUN_1801af8a0(dVar25,local_b50,local_928._0_8_);
        plVar8[2] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = local_ae8;
        plVar8[7] = local_ae8 + 5000000000;
      }
      local_918 = ZEXT816(0x180807990);
      FUN_18017bf40(local_918 + 8);
      FUN_1802f9dc0();
      FUN_18017bf40(&local_ae0);
      uVar17 = local_ae0 - local_918._8_8_;
      plVar8 = (longlong *)FUN_180394910();
      auVar33 = auVar34._0_16_;
      auVar31 = auVar32._0_16_;
      auVar29 = auVar30._0_16_;
      ppuVar19 = (undefined **)(*plVar8 + 1);
      *plVar8 = (longlong)ppuVar19;
      uVar14 = plVar8[1] + uVar17;
      plVar8[1] = uVar14;
      lVar18 = plVar8[3] + (ulonglong)(999999 < uVar17);
      plVar8[3] = lVar18;
      lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar17);
      plVar8[4] = lVar21;
      lVar20 = plVar8[5] + (ulonglong)(15999999 < uVar17);
      plVar8[5] = lVar20;
      uVar13 = plVar8[2];
      if ((ulonglong)plVar8[2] < uVar17) {
        plVar8[2] = uVar17;
        uVar13 = uVar17;
      }
      if ((local_ae0 == plVar8[7]) || (plVar8[7] <= local_ae0)) {
        local_b38 = (double)(local_ae0 - plVar8[6]) / auVar34._0_8_;
        local_b30 = auVar32._0_8_;
        dVar26 = auVar30._0_8_;
        if (local_b30 < local_b38) {
          if ((longlong)uVar14 < 0) {
            local_b30 = ((double)uVar14 / dVar26) / local_b38;
          }
          else {
            local_b30 = ((double)(longlong)uVar14 / dVar26) / local_b38;
          }
        }
        local_b40 = (double)uVar14 / auVar34._0_8_;
        local_b48 = (undefined **)((double)uVar13 / dVar26);
        dVar25 = (double)uVar14 / (double)ppuVar19;
        local_b50 = (char *)(dVar25 / dVar26);
        local_b58 = ppuVar19;
        local_b28 = lVar18;
        local_b20 = lVar21;
        local_b18 = lVar20;
        FUN_1801af8a0(dVar25,local_b50,local_918._0_8_);
        auVar33 = auVar34._0_16_;
        auVar31 = auVar32._0_16_;
        auVar29 = auVar30._0_16_;
        plVar8[2] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = local_ae0;
        plVar8[7] = local_ae0 + 5000000000;
      }
    }
    else if (param_2 == 7) {
      if (bVar23) {
        auVar30 = ZEXT1664(auVar29);
        auVar32 = ZEXT1664(auVar31);
        auVar34 = ZEXT1664(auVar33);
        FUN_1800a8050(local_700);
        FUN_18038dd70(local_700);
        FUN_1801fb0c0();
        FUN_18038db70(local_700);
        FUN_1800a8050(local_6f0);
        FUN_18038db40(local_6f0);
        FUN_180212ce0(&DAT_180c70f10);
        FUN_18038d940(local_6f0);
        auVar33 = auVar34._0_16_;
        auVar31 = auVar32._0_16_;
        auVar29 = auVar30._0_16_;
      }
      goto LAB_18038cc01;
    }
    if (local_750 != 0) {
      if ((char)uStack_738 != '\0') {
        LOCK();
        *(int *)(local_750 + 0x5c) = *(int *)(local_750 + 0x5c) + -1;
        UNLOCK();
      }
      auVar30 = ZEXT1664(auVar29);
      auVar32 = ZEXT1664(auVar31);
      auVar34 = ZEXT1664(auVar33);
      piVar11 = (int *)FUN_1801acaf0();
      auVar33 = auVar34._0_16_;
      auVar31 = auVar32._0_16_;
      auVar29 = auVar30._0_16_;
      if ((uStack_738._1_1_ != '\0') && (*piVar11 != 0)) {
        *piVar11 = *piVar11 + -1;
      }
      if ((char)uStack_740 != '\0') {
        if (pRStack_748 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18017d0c0(1);
        }
        ReleaseSRWLockShared(pRStack_748);
        auVar33 = auVar34._0_16_;
        auVar31 = auVar32._0_16_;
        auVar29 = auVar30._0_16_;
        uStack_740 = uStack_740 & 0xffffffffffffff00;
      }
      uStack_738 = uStack_738 & 0xffffffffffffff00;
      local_750 = 0;
    }
    if (param_2 == 7) {
      auVar30 = ZEXT1664(auVar29);
      auVar32 = ZEXT1664(auVar31);
      auVar34 = ZEXT1664(auVar33);
      FUN_18044ffb0();
      local_8f8 = ZEXT816(0x180807958);
      FUN_18017bf40(local_8f8 + 8);
      FUN_1802f9360();
      FUN_18017bf40(&local_ad0);
      uVar17 = local_ad0 - local_8f8._8_8_;
      plVar8 = (longlong *)FUN_180395090();
      ppuVar19 = (undefined **)(*plVar8 + 1);
      *plVar8 = (longlong)ppuVar19;
      uVar14 = plVar8[1] + uVar17;
      plVar8[1] = uVar14;
      lVar18 = plVar8[3] + (ulonglong)(999999 < uVar17);
      plVar8[3] = lVar18;
      lVar21 = plVar8[4] + (ulonglong)(4999999 < uVar17);
      plVar8[4] = lVar21;
      lVar20 = plVar8[5] + (ulonglong)(15999999 < uVar17);
      plVar8[5] = lVar20;
      uVar13 = plVar8[2];
      if ((ulonglong)plVar8[2] < uVar17) {
        plVar8[2] = uVar17;
        uVar13 = uVar17;
      }
      if ((local_ad0 == plVar8[7]) || (plVar8[7] <= local_ad0)) {
        local_b38 = (double)(local_ad0 - plVar8[6]) / auVar34._0_8_;
        local_b30 = auVar32._0_8_;
        dVar26 = auVar30._0_8_;
        if (local_b30 < local_b38) {
          if ((longlong)uVar14 < 0) {
            local_b30 = ((double)uVar14 / dVar26) / local_b38;
          }
          else {
            local_b30 = ((double)(longlong)uVar14 / dVar26) / local_b38;
          }
        }
        local_b40 = (double)uVar14 / auVar34._0_8_;
        local_b48 = (undefined **)((double)uVar13 / dVar26);
        dVar25 = (double)uVar14 / (double)ppuVar19;
        local_b50 = (char *)(dVar25 / dVar26);
        local_b58 = ppuVar19;
        local_b28 = lVar18;
        local_b20 = lVar21;
        local_b18 = lVar20;
        FUN_1801af8a0(dVar25,local_b50,local_8f8._0_8_);
        plVar8[2] = 0;
        plVar8[1] = 0;
        *plVar8 = 0;
        plVar8[5] = 0;
        plVar8[4] = 0;
        plVar8[3] = 0;
        plVar8[6] = local_ad0;
        plVar8[7] = local_ad0 + 5000000000;
      }
      auVar33 = auVar34._0_16_;
      auVar31 = auVar32._0_16_;
      auVar29 = auVar30._0_16_;
      if ((bVar23) && (DAT_180b8fab0 != '\0')) {
        if (DAT_180b0d7e0 == '\0') {
          LOCK();
          DAT_180b8fab0 = '\0';
          UNLOCK();
          LOCK();
          DAT_180b8fab1 = '\0';
          UNLOCK();
          LOCK();
          DAT_180b8fad8 = 0;
          UNLOCK();
        }
        else {
          UVar7 = GetTickCount64();
          auVar33 = auVar34._0_16_;
          auVar31 = auVar32._0_16_;
          auVar29 = auVar30._0_16_;
          if (DAT_180b8fad0 <= UVar7) {
            if ((DAT_180b8fac8 == 0) || (UVar7 <= DAT_180b8fac8)) {
              if (1 < DAT_180b8fad8) {
                DAT_180b8fad0 = UVar7 + 0xfa;
                LOCK();
                UNLOCK();
                cVar1 = FUN_1802f7600();
                auVar33 = auVar34._0_16_;
                auVar31 = auVar32._0_16_;
                auVar29 = auVar30._0_16_;
                if (cVar1 != '\0') {
                  if (DAT_180b8fab1 == '\0') {
                    LOCK();
                    DAT_180b8fab0 = '\0';
                    UNLOCK();
                    DAT_180b8fad8 = 0;
                  }
                  else {
                    DAT_180b8fad0 = UVar7 + 0x5dc;
                    LOCK();
                    UNLOCK();
                  }
                }
              }
            }
            else {
              LOCK();
              DAT_180b8fab0 = '\0';
              UNLOCK();
              LOCK();
              DAT_180b8fab1 = '\0';
              UNLOCK();
              FUN_18063ab10(local_688,0,0x600);
              FUN_18015ad60(local_688,0x600,0xffffffffffffffff,
                            "reason=no_confirmed_purchase retry_budget_ms=10000");
              local_b58 = &PTR_180700558;
              if (local_688[0] != '\0') {
                local_b58 = (undefined **)&DAT_1806bcfc0;
              }
              local_b50 = local_688;
              FUN_1800f6900(2,local_b50,"RoundManager","ROUND_AUTOBUY_EXPIRED");
              auVar33 = auVar34._0_16_;
              auVar31 = auVar32._0_16_;
              auVar29 = auVar30._0_16_;
            }
          }
        }
      }
    }
  }
  auVar30 = ZEXT1664(auVar29);
  auVar32 = ZEXT1664(auVar31);
  auVar34 = ZEXT1664(auVar33);
  FUN_180180bf0(&local_750);
  if ((char)uStack_740 != '\0') {
    ReleaseSRWLockShared(pRStack_748);
  }
  FUN_18017bf40(&local_ac8);
  uVar17 = local_ac8 - local_8e8._8_8_;
  puVar12 = (ulonglong *)FUN_180391670();
  local_b30 = auVar32._0_8_;
  local_b58 = (undefined **)(*puVar12 + 1);
  *puVar12 = (ulonglong)local_b58;
  uVar14 = puVar12[1] + uVar17;
  puVar12[1] = uVar14;
  local_b28 = puVar12[3] + (ulonglong)(999999 < uVar17);
  puVar12[3] = local_b28;
  local_b20 = puVar12[4] + (ulonglong)(4999999 < uVar17);
  puVar12[4] = local_b20;
  local_b18 = puVar12[5] + (ulonglong)(15999999 < uVar17);
  puVar12[5] = local_b18;
  uVar13 = puVar12[2];
  if (puVar12[2] < uVar17) {
    puVar12[2] = uVar17;
    uVar13 = uVar17;
  }
  if ((local_ac8 == puVar12[7]) || ((longlong)puVar12[7] <= (longlong)local_ac8)) {
    local_b38 = (double)(longlong)(local_ac8 - puVar12[6]) / auVar34._0_8_;
    dVar26 = auVar30._0_8_;
    if (local_b30 < local_b38) {
      local_b30 = ((double)uVar14 / dVar26) / local_b38;
    }
    local_b40 = (double)uVar14 / auVar34._0_8_;
    local_b48 = (undefined **)((double)uVar13 / dVar26);
    dVar25 = (double)uVar14 / (double)local_b58;
    local_b50 = (char *)(dVar25 / dVar26);
    FUN_1801af8a0(dVar25,local_b50,local_8e8._0_8_);
    puVar12[2] = 0;
    puVar12[1] = 0;
    *puVar12 = 0;
    puVar12[5] = 0;
    puVar12[4] = 0;
    puVar12[3] = 0;
    puVar12[6] = local_ac8;
    puVar12[7] = local_ac8 + 5000000000;
  }
LAB_18038d271:
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



