// FUN_1801e9800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e9800 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e9800(longlong *param_1)

{
  byte bVar1;
  char cVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined1 (*pauVar8) [16];
  undefined1 *puVar9;
  undefined8 uVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  undefined8 *puVar18;
  char *pcVar19;
  undefined *puVar20;
  char cVar21;
  char *pcVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  bool bVar25;
  undefined1 auStack_778 [32];
  undefined **local_758;
  char *local_750;
  undefined4 local_748;
  undefined *local_738;
  undefined4 local_730;
  undefined *local_728;
  undefined1 local_720 [16];
  undefined1 local_710 [16];
  undefined1 local_700 [16];
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined1 local_6e0 [16];
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined1 local_6c0 [32];
  undefined1 local_6a0 [32];
  undefined1 local_680 [32];
  undefined1 local_660 [16];
  ulonglong local_650;
  ulonglong local_648;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_778;
  local_738 = (undefined *)((ulonglong)local_738 & 0xffffffff00000000);
  FUN_1801ef940(*param_1,"pawn_bound_ERROR_or_incomplete_AG2_resource");
  local_730 = 1;
  if (*(longlong *)param_1[1] == 0) {
    puVar18 = (undefined8 *)param_1[2];
    puVar14 = puVar18;
    if (0xf < (ulonglong)puVar18[3]) {
      puVar14 = (undefined8 *)*puVar18;
    }
    if (((ulonglong)puVar18[2] < 7) || (iVar6 = memcmp(puVar14,"agents/",7), iVar6 != 0)) {
      local_6f0 = 0;
      uStack_6e8 = 0xf;
      local_700._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar3[0xf] = 0;
      auVar3._0_15_ = local_700._1_15_;
      local_700 = auVar3 << 8;
      puVar9 = local_700;
      uVar17 = 4;
    }
    else {
      puVar9 = (undefined1 *)FUN_18015b360(local_6a0,puVar18);
      uVar17 = 2;
    }
    local_738 = (undefined *)CONCAT44(local_738._4_4_,uVar17);
    pauVar8 = (undefined1 (*) [16])FUN_18015b360(local_6c0,puVar9);
    uVar17 = uVar17 | 8;
  }
  else {
    pauVar8 = (undefined1 (*) [16])FUN_18015b360(local_680,*(longlong *)param_1[1] + 0x68);
    uVar17 = 1;
  }
  local_738 = (undefined *)CONCAT44(local_738._4_4_,uVar17);
  local_660 = (undefined1  [16])0x0;
  local_650 = 0;
  local_648 = 0;
  uVar24 = *(ulonglong *)pauVar8[1];
  if (0xf < *(ulonglong *)(pauVar8[1] + 8)) {
    pauVar8 = *(undefined1 (**) [16])*pauVar8;
  }
  local_728 = (undefined *)0x7fffffffffffffff;
  if (0x7fffffffffffffff < uVar24) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  if (uVar24 < 0x10) {
    local_648 = 0xf;
    local_660 = *pauVar8;
    local_650 = uVar24;
  }
  else {
    uVar23 = uVar24 | 0xf;
    if (uVar23 < 0x8000000000000000) {
      if (uVar23 < 0x16) {
        uVar23 = 0x16;
      }
    }
    else {
      uVar23 = 0x7fffffffffffffff;
    }
    uVar10 = FUN_18015bca0(uVar23 + 1);
    local_660._0_8_ = uVar10;
    local_650 = uVar24;
    local_648 = uVar23;
    FUN_18063aed0(uVar10,pauVar8,uVar24 + 1);
  }
  if ((uVar17 & 8) != 0) {
    uVar17 = uVar17 & 0xfffffff7;
    FUN_18015c010(local_6c0);
  }
  if ((uVar17 & 4) != 0) {
    uVar17 = uVar17 & 0xfffffffb;
    FUN_18015c010(local_700);
  }
  if ((uVar17 & 2) != 0) {
    uVar17 = uVar17 & 0xfffffffd;
    FUN_18015c010(local_6a0);
  }
  if ((uVar17 & 1) != 0) {
    uVar17 = uVar17 & 0xfffffffe;
    FUN_18015c010(local_680);
  }
  if ((local_650 != 0) && (FUN_1801f8ab0(*(undefined8 *)(param_1[3] + 8),0,0), local_650 != 0)) {
    puVar9 = local_660;
    if (0xf < local_648) {
      puVar9 = (undefined1 *)local_660._0_8_;
    }
    cVar5 = FUN_180182cb0(*(undefined8 *)(param_1[3] + 8),puVar9);
    if (cVar5 != '\0') goto LAB_1801e9a23;
  }
  local_730 = 0;
LAB_1801e9a23:
  iVar6 = DAT_180c6315c;
  if (DAT_180c6315c == 0) {
    UVar11 = GetTickCount64();
    if (UVar11 < DAT_180c63160) {
      iVar6 = 0;
    }
    else {
      local_738 = &DAT_1808e6d00;
      iVar6 = FUN_1805f68d0(&DAT_1808e6d00);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e6d4c == 0x7fffffff) {
        DAT_1808e6d4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6315c == 0) && (DAT_180c63160 <= UVar11)) {
        DAT_180c6315c = FUN_1804174b0("CModelState",0xd7a1d881);
        if (DAT_180c6315c == 0) {
          DAT_180c63160 = UVar11 + 1000;
        }
        else {
          DAT_180c63160 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c6315c;
      FUN_1805f68fc(&DAT_1808e6d00);
    }
  }
  lVar13 = *(longlong *)param_1[4];
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  if (lVar13 + iVar6 == 0) {
    bVar25 = false;
    puVar20 = local_728;
  }
  else {
    local_738 = (undefined *)0x0;
    cVar5 = FUN_1804514f0(&local_738,lVar13 + iVar6,8);
    if (cVar5 == '\0') {
      bVar25 = false;
      puVar20 = local_728;
    }
    else {
      bVar25 = true;
      puVar20 = local_738;
    }
  }
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if (!bVar25) {
    puVar20 = (undefined *)0x0;
  }
  lVar13 = *param_1;
  pcVar19 = (char *)(lVar13 + 0x40);
  if (0xf < *(ulonglong *)(lVar13 + 0x58)) {
    pcVar19 = *(char **)(lVar13 + 0x40);
  }
  uVar24 = *(ulonglong *)(lVar13 + 0x50);
  puVar14 = (undefined8 *)FUN_180184460(local_700,puVar20);
  puVar18 = puVar14;
  if (0xf < (ulonglong)puVar14[3]) {
    puVar18 = (undefined8 *)*puVar14;
  }
  uVar23 = puVar14[2];
  if (1 < uVar23) {
    bVar1 = *(byte *)((longlong)puVar18 + (uVar23 - 2));
    bVar25 = bVar1 < 0x5f;
    if ((bVar1 == 0x5f) &&
       (bVar1 = *(byte *)((longlong)puVar18 + (uVar23 - 1)), bVar25 = bVar1 < 99, bVar1 == 99)) {
      uVar7 = 0;
    }
    else {
      uVar7 = -(uint)bVar25 | 1;
    }
    if (uVar7 == 0) {
      uVar23 = uVar23 - 2;
    }
  }
  if (1 < uVar24) {
    bVar25 = (byte)pcVar19[uVar24 - 2] < 0x5f;
    if ((pcVar19[uVar24 - 2] == 0x5f) &&
       (bVar25 = (byte)pcVar19[uVar24 - 1] < 99, pcVar19[uVar24 - 1] == 99)) {
      uVar7 = 0;
    }
    else {
      uVar7 = -(uint)bVar25 | 1;
    }
    if (uVar7 == 0) {
      uVar24 = uVar24 - 2;
    }
  }
  if ((uVar23 == 0) || (uVar23 != uVar24)) {
LAB_1801e9c14:
    bVar25 = false;
  }
  else {
    if (uVar23 != 0) {
      pcVar22 = pcVar19;
      do {
        cVar5 = pcVar22[(longlong)puVar18 - (longlong)pcVar19];
        cVar2 = *pcVar22;
        cVar21 = cVar5 + ' ';
        if (0x19 < (byte)(cVar5 + 0xbfU)) {
          cVar21 = cVar5;
        }
        cVar5 = cVar2 + ' ';
        if (0x19 < (byte)(cVar2 + 0xbfU)) {
          cVar5 = cVar2;
        }
        if (cVar21 != cVar5) goto LAB_1801e9c14;
        pcVar22 = pcVar22 + 1;
      } while ((ulonglong)((longlong)pcVar22 - (longlong)pcVar19) < uVar23);
    }
    bVar25 = true;
  }
  FUN_18015c010(local_700);
  *(undefined8 *)(param_1[2] + 0xb0) = 0;
  if (bVar25) {
    lVar13 = *param_1;
    pauVar8 = (undefined1 (*) [16])(lVar13 + 0x40);
    local_720 = (undefined1  [16])0x0;
    local_710 = (undefined1  [16])0x0;
    uVar24 = *(ulonglong *)(lVar13 + 0x50);
    if (0xf < *(ulonglong *)(lVar13 + 0x58)) {
      pauVar8 = *(undefined1 (**) [16])*pauVar8;
    }
    if (0x7fffffffffffffff < uVar24) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (uVar24 < 0x10) {
      local_710._8_8_ = 0xf;
      local_710._0_8_ = uVar24;
      puVar16 = *(undefined1 **)*pauVar8;
      local_720 = *pauVar8;
    }
    else {
      puVar15 = (undefined *)(uVar24 | 0xf);
      puVar20 = (undefined *)0x7fffffffffffffff;
      if (puVar15 < (undefined *)0x8000000000000000) {
        if (puVar15 < (undefined *)0x16) {
          puVar15 = (undefined *)0x16;
        }
        puVar20 = puVar15;
        local_728 = puVar15;
      }
      puVar16 = (undefined1 *)FUN_18015bca0(puVar20 + 1);
      local_720._0_8_ = puVar16;
      local_710._8_8_ = local_728;
      local_710._0_8_ = uVar24;
      FUN_18063aed0(puVar16,pauVar8,uVar24 + 1);
    }
    puVar9 = local_720;
    uVar17 = uVar17 | 0x10;
  }
  else {
    local_6d0 = 0;
    uStack_6c8 = 0xf;
    local_6e0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar4[0xf] = 0;
    auVar4._0_15_ = local_6e0._1_15_;
    local_6e0 = auVar4 << 8;
    puVar9 = local_6e0;
    uVar17 = uVar17 | 0x20;
    puVar16 = (undefined1 *)0x0;
  }
  local_738 = (undefined *)CONCAT44(local_738._4_4_,uVar17);
  if ((undefined1 *)(param_1[2] + 0x40) != puVar9) {
    if (*(ulonglong *)(puVar9 + 0x18) < 0x10) {
      puVar16 = puVar9;
    }
    FUN_180113930((undefined1 *)(param_1[2] + 0x40),puVar16,*(undefined8 *)(puVar9 + 0x10));
  }
  if ((uVar17 & 0x20) != 0) {
    uVar17 = uVar17 & 0xffffffdf;
    FUN_18015c010(local_6e0);
  }
  if ((uVar17 & 0x10) != 0) {
    FUN_18015c010(local_720);
  }
  *(undefined1 *)(param_1[2] + 0xbb) = 0;
  DAT_180bbeb00 = *(undefined8 *)(param_1[3] + 8);
  if (!bVar25) {
    DAT_180bbeb00 = 0;
    FUN_1801f92b0(*(undefined8 *)(param_1[3] + 8),0);
  }
  puVar9 = local_660;
  if (0xf < local_648) {
    puVar9 = (undefined1 *)local_660._0_8_;
  }
  puVar18 = (undefined8 *)(*param_1 + 0x40);
  if (0xf < *(ulonglong *)(*param_1 + 0x58)) {
    puVar18 = (undefined8 *)*puVar18;
  }
  FUN_18063ab10(local_638,0,0x600);
  local_748 = local_730;
  local_758 = (undefined **)puVar18;
  local_750 = puVar9;
  FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                "desired=%s fallback=%s submitted=%d readback=unverified");
  local_758 = &PTR_180700558;
  if (local_638[0] != '\0') {
    local_758 = (undefined **)&DAT_1806bcfc0;
  }
  local_750 = local_638;
  FUN_1800f6900(2,local_750,"SkinChanger","CUSTOM_AGENT_NATIVE_FALLBACK");
  FUN_18015c010(local_660);
}



