// FUN_180207540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180207540 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180207540(void)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  char cVar5;
  uint uVar6;
  DWORD dwMilliseconds;
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  longlong *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  byte bVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined1 (*pauVar16) [16];
  short *psVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  undefined8 uVar24;
  undefined1 auStack_a08 [32];
  longlong local_9e8;
  ulonglong local_9e0;
  short *local_9d8;
  ulonglong local_9d0;
  ulonglong local_9c8;
  uint local_9c0 [2];
  char *local_9b8;
  ulonglong *puStack_9b0;
  uint local_9a8;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  int local_968;
  uint local_964;
  uint local_960;
  int local_95c;
  int local_958;
  ulonglong local_950;
  uint local_948;
  ulonglong local_940;
  ulonglong local_938;
  char *local_928;
  longlong lStack_920;
  ulonglong local_918;
  ulonglong local_910;
  ulonglong local_908;
  ulonglong local_900;
  longlong local_8f8 [2];
  ulonglong local_8e8 [9];
  longlong local_8a0 [4];
  longlong local_880;
  longlong local_878;
  longlong local_870;
  undefined1 local_868 [16];
  undefined1 (*pauStack_858) [16];
  ulonglong uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_a08;
  local_964 = 0;
  local_940 = 0;
  local_938 = 0;
  local_960 = 0;
  local_95c = 0;
  local_958 = 0;
  FUN_1800aa120("stage: econ schema wait");
  local_968 = 0;
  lVar20 = -1;
  local_950 = local_9d0;
  local_9a8 = (uint)local_9c8;
LAB_1802075d0:
  lVar8 = DAT_180c63938;
  uVar19 = 0;
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  if (lVar8 == 0) {
    bVar2 = false;
  }
  else {
    local_9d0 = 0;
    cVar5 = FUN_1804514f0(&local_9d0,lVar8,8);
    if (cVar5 == '\0') {
      bVar2 = false;
    }
    else {
      local_918 = local_9d0;
      bVar2 = true;
    }
  }
  uVar21 = local_918;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  uVar15 = uVar19;
  if (bVar2) {
    uVar15 = uVar21;
  }
  if (local_968 == 0) {
    FUN_18063ab10(local_838,0,0x800);
    local_9e8 = DAT_180c63938;
    local_9e0 = uVar15;
    FUN_18015ad60(local_838,0x800,0xffffffffffffffff,"econ item-system slot=0x%llX system=0x%llX");
    FUN_1800a9e50(1);
  }
  if (uVar15 == 0) goto LAB_180207b20;
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (uVar15 + 8 == 0) {
    bVar2 = false;
  }
  else {
    local_9d0 = 0;
    cVar5 = FUN_1804514f0(&local_9d0,uVar15 + 8,8);
    if (cVar5 == '\0') {
      bVar2 = false;
    }
    else {
      local_910 = local_9d0;
      bVar2 = true;
    }
  }
  uVar21 = local_910;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  uVar15 = uVar19;
  if (bVar2) {
    uVar15 = uVar21;
  }
  local_9d0 = uVar15;
  if (uVar15 == 0) goto LAB_180207b20;
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (uVar15 + 0x128 == 0) {
    bVar2 = false;
  }
  else {
    local_9c0[0] = 0;
    cVar5 = FUN_1804514f0(local_9c0,uVar15 + 0x128,4);
    if (cVar5 == '\0') {
      bVar2 = false;
    }
    else {
      local_948 = local_9c0[0];
      bVar2 = true;
    }
  }
  uVar18 = local_948;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  uVar21 = uVar19;
  if (bVar2) {
    uVar21 = (ulonglong)uVar18;
  }
  uVar18 = (uint)uVar21;
  local_9c0[0] = uVar18;
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (uVar15 + 0x130 == 0) {
    bVar2 = false;
  }
  else {
    local_9c8 = 0;
    cVar5 = FUN_1804514f0(&local_9c8,uVar15 + 0x130,8);
    if (cVar5 == '\0') {
      bVar2 = false;
    }
    else {
      local_908 = local_9c8;
      bVar2 = true;
    }
  }
  uVar21 = local_908;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  uVar22 = uVar19;
  if (bVar2) {
    uVar22 = uVar21;
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (uVar15 + 0x2a0 == 0) {
    bVar2 = false;
  }
  else {
    local_9c8 = local_9c8 & 0xffffffff00000000;
    cVar5 = FUN_1804514f0(&local_9c8,uVar15 + 0x2a0,4);
    if (cVar5 == '\0') {
      bVar2 = false;
    }
    else {
      local_964 = (uint)local_9c8;
      bVar2 = true;
    }
  }
  uVar4 = local_964;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if (bVar2) {
    uVar19 = (ulonglong)uVar4;
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (uVar15 + 0x2a8 == 0) {
    bVar2 = false;
  }
  else {
    local_9c8 = 0;
    cVar5 = FUN_1804514f0(&local_9c8,uVar15 + 0x2a8,8);
    if (cVar5 == '\0') {
      bVar2 = false;
    }
    else {
      local_900 = local_9c8;
      bVar2 = true;
    }
  }
  uVar21 = local_900;
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  uVar15 = 0;
  if (bVar2) {
    uVar15 = uVar21;
  }
  iVar23 = (int)uVar19;
  if ((((9999 < uVar18 - 1) || (uVar22 == 0)) || (9999 < iVar23 - 1U)) || (uVar15 == 0))
  goto LAB_180207b20;
  local_868 = (undefined1  [16])0x0;
  pauStack_858 = (undefined1 (*) [16])0x0;
  uVar19 = (ulonglong)(int)uVar18;
  if (0x7ffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  pauVar9 = (undefined1 (*) [16])FUN_18015bca0(uVar19 * 0x20);
  pauStack_858 = pauVar9 + uVar19 * 2;
  pauVar16 = pauVar9;
  if (uVar19 != 0) {
    do {
      *pauVar16 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar16[1] = 0;
      *(undefined8 *)(pauVar16[1] + 8) = 0;
      pauVar16 = pauVar16 + 2;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
  local_868._8_8_ = pauVar16;
  local_868._0_8_ = pauVar9;
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  cVar5 = FUN_1804514f0(pauVar9,uVar22,(longlong)pauVar16 - (longlong)pauVar9 & 0xffffffffffffffe0);
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if (cVar5 == '\0') {
LAB_180207ab9:
    uVar19 = local_9d0;
LAB_180207ac2:
    uVar18 = local_9c0[0];
LAB_180207ac6:
    bVar2 = false;
LAB_180207ac8:
    local_958 = 0;
    local_960 = uVar18;
    if (bVar2) goto LAB_180207af2;
LAB_180207afb:
    local_95c = iVar23;
    local_940 = uVar22;
    local_938 = uVar15;
    FUN_18020f720(local_868);
    goto LAB_180207b20;
  }
  local_928 = (char *)local_868._0_8_;
  lStack_920 = (longlong)(local_868._8_8_ - local_868._0_8_) >> 5;
  cVar5 = FUN_18020e400(&local_928);
  if (cVar5 == '\0') goto LAB_180207ab9;
  lVar8 = FUN_18017ea70();
  uVar19 = local_9d0;
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (local_9d0 + 0x128 == 0) {
    bVar2 = false;
  }
  else {
    local_9c8 = local_9c8 & 0xffffffff00000000;
    cVar5 = FUN_1804514f0(&local_9c8,local_9d0 + 0x128,4);
    if (cVar5 == '\0') {
      bVar2 = false;
    }
    else {
      local_9a8 = (uint)local_9c8;
      bVar2 = true;
    }
  }
  uVar4 = local_9a8;
  lVar8 = FUN_18017ea70();
  uVar18 = local_9c0[0];
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  uVar6 = 0;
  if (bVar2) {
    uVar6 = uVar4;
  }
  if (uVar6 != local_9c0[0]) goto LAB_180207ac2;
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  if (uVar19 + 0x130 == 0) {
    bVar2 = false;
  }
  else {
    local_9d0 = 0;
    cVar5 = FUN_1804514f0(&local_9d0,uVar19 + 0x130,8);
    if (cVar5 == '\0') {
      bVar2 = false;
    }
    else {
      local_950 = local_9d0;
      bVar2 = true;
    }
  }
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if ((!bVar2) || (local_950 != uVar22)) goto LAB_180207ac6;
  bVar2 = true;
  if (((uVar22 != local_940) || (uVar15 != local_938)) ||
     ((uVar18 != local_960 || (iVar23 != local_95c)))) goto LAB_180207ac8;
  local_958 = local_958 + 1;
  local_960 = uVar18;
LAB_180207af2:
  if (local_958 < 2) goto LAB_180207afb;
  local_95c = iVar23;
  local_940 = uVar22;
  local_938 = uVar15;
  FUN_18020f720(local_868);
  uVar24 = FUN_1800aa120("stage: econ item definitions");
  cVar5 = FUN_180208d10(uVar24,uVar19);
  if (cVar5 != '\0') {
    uVar24 = FUN_1800aa120("stage: econ paint kits");
    cVar5 = FUN_180209610(uVar24,uVar19);
    if (cVar5 == '\0') {
      local_868._8_8_ = 0xa05181ee77d57a06;
      local_868._0_8_ = 0xdb35e39b27e1c185;
      pauStack_858 = (undefined1 (*) [16])0x929654b1461b7377;
      uStack_850 = 0xa5cea54bfef7110;
      local_848 = 0xa70c9f7f916b7e19;
      uStack_840 = 0x2b2d6d82aa402c0a;
      local_998 = 0x66205d6e6f63655b;
      uStack_990 = 0x6f742064656c6961;
      uStack_988 = 0x7020657372617020;
      uStack_980 = 0x74696b20746e6961;
      local_978 = 0x73;
      uStack_970 = 0;
      do {
        puStack_9b0 = (ulonglong *)(lVar20 + 1);
        lVar8 = lVar20 + 1;
        lVar20 = (longlong)puStack_9b0;
      } while (*(char *)((longlong)&local_998 + lVar8) != '\0');
      goto LAB_180207e09;
    }
    FUN_1800aa120("stage: econ indices");
    uVar19 = 0;
    lVar20 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(DAT_180cc9c00 - DAT_180cc9bf8),8) +
             (DAT_180cc9c00 - DAT_180cc9bf8);
    if (lVar20 >> 7 == lVar20 >> 0x3f) goto LAB_180208287;
    lVar20 = 0;
    goto LAB_1802081c0;
  }
  local_868._8_8_ = 0xa05181ee77d57a06;
  local_868._0_8_ = 0xdb35e39b27e1c185;
  pauStack_858 = (undefined1 (*) [16])0x929654b1461b7377;
  uStack_850 = 0xa5cea54bfef7110;
  local_848 = 0xa70c9f7f916b7e19;
  uStack_840 = 0x2b2d6d82aa402c0a;
  local_998 = 0x66205d6e6f63655b;
  uStack_990 = 0x6f742064656c6961;
  uStack_988 = 0x6920657372617020;
  uStack_980 = 0x69666564206d6574;
  local_978 = 0x736e6f6974696e;
  uStack_970 = 0;
  do {
    puStack_9b0 = (ulonglong *)(lVar20 + 1);
    lVar8 = lVar20 + 1;
    lVar20 = (longlong)puStack_9b0;
  } while (*(char *)((longlong)&local_998 + lVar8) != '\0');
  goto LAB_180207e09;
LAB_180207b20:
  if (local_968 == 0) {
    local_998 = 0xdb35e39b27e1c185;
    uStack_990 = 0xa05181ee77d57a06;
    uStack_988 = 0x929654b1461b7377;
    local_9d0 = 0xa5cea54bfef7110;
    uStack_980 = 0xa5cea54bfef7110;
    local_868._8_8_ = 0x6620676e69746961;
    local_868._0_8_ = 0x77205d6e6f63655b;
    pauStack_858 = (undefined1 (*) [16])0x206d65746920726f;
    uStack_850 = 0x616d65686373;
    lVar8 = -1;
    do {
      puStack_9b0 = (ulonglong *)(lVar8 + 1);
      lVar7 = lVar8 + 1;
      lVar8 = (longlong)puStack_9b0;
    } while (local_868[lVar7] != '\0');
    local_9b8 = local_868;
    FUN_18020e620(&local_9b8);
  }
  FUN_18017bf40(local_8f8);
  if (local_8f8[0] < 0x7ffffffffa0a1eff) {
    psVar17 = (short *)(local_8f8[0] + 100000000);
  }
  else {
    psVar17 = (short *)0x7fffffffffffffff;
  }
  while ((FUN_18017bf40(&local_9d8), psVar17 != local_9d8 &&
         ((longlong)local_9d8 <= (longlong)psVar17))) {
    local_9d0 = (longlong)psVar17 - (longlong)local_9d8;
    dwMilliseconds = FUN_18017b210(&local_9d0);
    Sleep(dwMilliseconds);
  }
  local_968 = local_968 + 1;
  if (299 < local_968) goto code_r0x000180207cba;
  goto LAB_1802075d0;
code_r0x000180207cba:
  local_868._8_8_ = 0xa05181ee77d57a06;
  local_868._0_8_ = 0xdb35e39b27e1c185;
  pauStack_858 = (undefined1 (*) [16])0x929654b1461b7377;
  uStack_850 = 0xa5cea54bfef7110;
  local_848 = 0xa70c9f7f916b7e19;
  uStack_840 = 0x2b2d6d82aa402c0a;
  local_998 = 0x74205d6e6f63655b;
  uStack_990 = 0x74756f2064656d69;
  uStack_988 = 0x676e697469617720;
  uStack_980 = 0x65746920726f6620;
  local_978 = 0x616d65686373206d;
  uStack_970 = 0;
  do {
    puStack_9b0 = (ulonglong *)(lVar20 + 1);
    lVar8 = lVar20 + 1;
    lVar20 = (longlong)puStack_9b0;
  } while (*(char *)((longlong)&local_998 + lVar8) != '\0');
  goto LAB_180207e09;
LAB_1802081c0:
  do {
    psVar17 = (short *)(DAT_180cc9bf8 + lVar20);
    plVar10 = (longlong *)FUN_1802106f0(&DAT_180cc9c88,&local_9b8,psVar17);
    *(ulonglong *)(*plVar10 + 0x18) = uVar19;
    cVar5 = (char)psVar17[0x58];
    if (cVar5 == '\0') {
      puVar14 = &DAT_180cc9c58;
LAB_18020822f:
      local_9d8 = psVar17;
      FUN_1801543a0(puVar14,&local_9d8);
    }
    else {
      if (cVar5 == '\x01') {
        if (*psVar17 < 500) goto LAB_18020823e;
        puVar14 = &DAT_180cc9c10;
        goto LAB_18020822f;
      }
      if (cVar5 == '\x02') {
        if ((*psVar17 != 0x13a4) && (*psVar17 != 0x13a5)) {
          puVar14 = &DAT_180cc9c28;
          goto LAB_18020822f;
        }
      }
      else if (cVar5 == '\x03') {
        puVar14 = &DAT_180cc9c40;
        goto LAB_18020822f;
      }
    }
LAB_18020823e:
    uVar19 = uVar19 + 1;
    lVar20 = lVar20 + 0xb8;
    lVar8 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(DAT_180cc9c00 - DAT_180cc9bf8),8) +
            (DAT_180cc9c00 - DAT_180cc9bf8);
  } while (uVar19 < (ulonglong)((lVar8 >> 7) - (lVar8 >> 0x3f)));
LAB_180208287:
  uVar19 = 0;
  if ((DAT_180cc9bb8 - DAT_180cc9bb0) / 0x98 != 0) {
    lVar20 = 0;
    do {
      plVar10 = (longlong *)FUN_180210440(&DAT_180cc9cc8,&local_9b8,DAT_180cc9bb0 + lVar20);
      *(ulonglong *)(*plVar10 + 0x18) = uVar19;
      uVar19 = uVar19 + 1;
      lVar20 = lVar20 + 0x98;
    } while (uVar19 < (ulonglong)((DAT_180cc9bb8 - DAT_180cc9bb0) / 0x98));
  }
  FUN_1800aa120("stage: econ localization");
  FUN_180209c70();
  FUN_1800aa120("stage: econ vpk index");
  cVar5 = FUN_180209e00(&DAT_180cc9bb0);
  if (cVar5 != '\0') {
    FUN_1800aa120("stage: econ skin index");
    uVar24 = FUN_18020b6b0();
    lVar8 = DAT_180cc9c00;
    lVar20 = DAT_180cc9bf8;
    if (DAT_180cc9c70 != DAT_180cc9c78) {
      for (; lVar20 != lVar8; lVar20 = lVar20 + 0xb8) {
        if ((*(char *)(lVar20 + 0xb0) != '\x04') && (*(longlong *)(lVar20 + 0x98) != 0)) {
          uVar24 = FUN_180208940(uVar24,lVar20 + 0x88);
        }
      }
      local_878 = 0;
      for (lVar20 = DAT_180cc9bb0; lVar20 != DAT_180cc9bb8; lVar20 = lVar20 + 0x98) {
        lVar8 = local_878 + 1;
        if (*(char *)(lVar20 + 0x90) == '\0') {
          lVar8 = local_878;
        }
        local_878 = lVar8;
      }
      lVar20 = (DAT_180cc9bb8 - DAT_180cc9bb0) / 0x26 + (DAT_180cc9bb8 - DAT_180cc9bb0 >> 0x3f);
      lVar8 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(DAT_180cc9c00 - DAT_180cc9bf8),8) +
              (DAT_180cc9c00 - DAT_180cc9bf8);
      local_928 = 
      "[econ] schema ready: definitions={} guns={} knives={} gloves={} agents={} paint_kits={} legacy_paint_kits={} compatible_skins={}"
      ;
      lStack_920 = 0x80;
      local_8e8[8] = (lVar8 >> 7) - (lVar8 >> 0x3f);
      local_8e8[0] = 0x4000000000000000;
      local_8a0[0] = DAT_180cc9c60 - DAT_180cc9c58 >> 3;
      local_8e8[1] = 0x4000000000000008;
      local_8a0[1] = DAT_180cc9c18 - DAT_180cc9c10 >> 3;
      local_8e8[2] = 0x4000000000000010;
      local_8a0[2] = DAT_180cc9c30 - DAT_180cc9c28 >> 3;
      local_8e8[3] = 0x4000000000000018;
      local_8a0[3] = DAT_180cc9c48 - DAT_180cc9c40 >> 3;
      local_8e8[4] = 0x4000000000000020;
      local_880 = (lVar20 >> 2) - (lVar20 >> 0x3f);
      local_8e8[5] = 0x4000000000000028;
      local_8e8[6] = 0x4000000000000030;
      local_870 = DAT_180cc9c78 - DAT_180cc9c70 >> 3;
      local_8e8[7] = 0x4000000000000038;
      local_9b8 = (char *)0x8;
      puStack_9b0 = local_8e8;
      pauStack_858 = (undefined1 (*) [16])0x0;
      uStack_850 = 0xf;
      local_868._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar3[0xf] = 0;
      auVar3._0_15_ = local_868._1_15_;
      local_868 = auVar3 << 8;
      local_964 = 1;
      uVar19 = 0;
      uVar21 = 0;
      do {
        bVar13 = (byte)(local_8e8[uVar21] >> 0x3c);
        if (bVar13 == 0xc) {
          uVar19 = uVar19 + *(longlong *)
                             ((longlong)local_8a0 + (local_8e8[uVar21] & 0xfffffffffffffff));
        }
        else if (bVar13 == 0xb) {
          uVar19 = uVar19 + 0x20;
        }
        else {
          uVar19 = uVar19 + 8;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < 8);
      lVar20 = uVar19 + 0x80;
      if (0xffffffffffffff7f < uVar19) {
        lVar20 = -1;
      }
      FUN_1800f5540(local_868,lVar20);
      local_9e8 = 0;
      FUN_1801da050(&local_9d8,local_868,&local_928,&local_9b8);
      puVar12 = local_868;
      if (0xf < uStack_850) {
        puVar12 = (undefined1 *)local_868._0_8_;
        if ((undefined1 *)local_868._0_8_ == (undefined1 *)0x0) goto LAB_1802087da;
      }
      puVar11 = (undefined1 *)FUN_1803b0a60();
      uVar1 = *puVar11;
      puVar11 = (undefined1 *)FUN_1803b0a60();
      *puVar11 = 1;
      FUN_1800a9e50(1,puVar12);
      puVar12 = (undefined1 *)FUN_1803b0a60();
      *puVar12 = uVar1;
LAB_1802087da:
      FUN_18015c010(local_868);
    }
    local_9b8 = "[econ] no compatible finishes found; skin catalog validation failed";
    puStack_9b0 = (ulonglong *)0x43;
    goto LAB_180207e20;
  }
  local_868._8_8_ = 0xa05181ee77d57a06;
  local_868._0_8_ = 0xdb35e39b27e1c185;
  pauStack_858 = (undefined1 (*) [16])0x929654b1461b7377;
  uStack_850 = 0xa5cea54bfef7110;
  local_848 = 0xa70c9f7f916b7e19;
  uStack_840 = 0x2b2d6d82aa402c0a;
  local_998 = 0x66205d6e6f63655b;
  uStack_990 = 0x6f742064656c6961;
  uStack_988 = 0x5620646c69756220;
  uStack_980 = 0x7865646e69204b50;
  local_978 = 0;
  uStack_970 = 0;
  lVar20 = -1;
  do {
    puStack_9b0 = (ulonglong *)(lVar20 + 1);
    lVar8 = lVar20 + 1;
    lVar20 = (longlong)puStack_9b0;
  } while (*(char *)((longlong)&local_998 + lVar8) != '\0');
LAB_180207e09:
  uStack_970 = 0;
  uStack_840 = 0x2b2d6d82aa402c0a;
  local_848 = 0xa70c9f7f916b7e19;
  uStack_850 = 0xa5cea54bfef7110;
  pauStack_858 = (undefined1 (*) [16])0x929654b1461b7377;
  local_868._8_8_ = 0xa05181ee77d57a06;
  local_868._0_8_ = 0xdb35e39b27e1c185;
  local_9d8 = (short *)0x2b2d6d82aa402c0a;
  local_9b8 = (char *)&local_998;
LAB_180207e20:
  FUN_18020e620(&local_9b8);
}



