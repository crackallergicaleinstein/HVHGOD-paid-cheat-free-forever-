// FUN_1805527a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805527a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1805527a0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 ****ppppuVar7;
  byte *pbVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  byte *pbVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_148 [32];
  size_t local_128;
  char *local_120;
  undefined8 local_118;
  undefined1 local_108 [16];
  size_t sStack_f8;
  ulonglong uStack_f0;
  undefined8 ****local_e8 [2];
  size_t local_d8;
  ulonglong local_d0;
  undefined8 ****local_c0;
  undefined8 uStack_b8;
  size_t sStack_b0;
  ulonglong uStack_a8;
  undefined1 local_a0 [32];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 ****local_60;
  undefined8 uStack_58;
  size_t sStack_50;
  ulonglong uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  local_80 = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  FUN_18015ba30(local_80,*param_2,param_2[1]);
  puVar6 = (undefined8 *)FUN_18015b2a0(local_80,&DAT_1806bfbdc,3);
  local_c0 = (undefined8 ****)*puVar6;
  uStack_b8 = puVar6[1];
  sStack_b0 = puVar6[2];
  uStack_a8 = puVar6[3];
  *(undefined1 *)puVar6 = 0;
  puVar6[2] = 0;
  puVar6[3] = 0xf;
  local_60 = local_c0;
  uStack_58 = uStack_b8;
  sStack_50 = sStack_b0;
  uStack_48 = uStack_a8;
  FUN_18015c010(local_80);
  local_128 = sStack_b0;
  if (0x7fffffffffffffff - sStack_b0 < 0xb) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  local_118 = 0xb;
  local_120 = "all weapons";
  FUN_18015a9c0(local_e8);
  ppppuVar7 = local_e8;
  if (0xf < local_d0) {
    ppppuVar7 = local_e8[0];
  }
  sVar1 = param_3[2];
  puVar6 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar6 = (undefined8 *)*param_3;
  }
  if (sVar1 == local_d8) {
    if (sVar1 == 0) {
      FUN_18015c010(local_e8);
    }
    else {
      iVar5 = memcmp(puVar6,ppppuVar7,sVar1);
      FUN_18015c010(local_e8);
      if (iVar5 != 0) goto LAB_1805528f0;
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  else {
    FUN_18015c010(local_e8);
  }
LAB_1805528f0:
  uVar9 = 0;
  do {
    local_108 = (undefined1  [16])0x0;
    sStack_f8 = 0;
    uStack_f0 = 0;
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while ((&PTR_s_Pistols_1806ffe00)[uVar9][lVar12] != '\0');
    FUN_18015ba30(local_108);
    pbVar8 = local_108;
    if (0xf < uStack_f0) {
      pbVar8 = (byte *)local_108._0_8_;
    }
    pbVar11 = pbVar8 + sStack_f8;
    sVar1 = sStack_f8;
    uVar4 = uStack_f0;
    for (; pbVar8 != pbVar11; pbVar8 = pbVar8 + 1) {
      sStack_f8 = sVar1;
      uStack_f0 = uVar4;
      iVar5 = tolower((uint)*pbVar8);
      *pbVar8 = (byte)iVar5;
      if ((byte)iVar5 == 0x5f) {
        *pbVar8 = 0x20;
      }
      sVar1 = sStack_f8;
      uVar4 = uStack_f0;
    }
    local_c0 = (undefined8 ****)local_108._0_8_;
    uStack_b8 = local_108._8_8_;
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_108._1_15_;
    local_108 = auVar3 << 8;
    sStack_f8 = 0;
    uStack_f0 = 0xf;
    sStack_b0 = sVar1;
    uStack_a8 = uVar4;
    FUN_18015c010(local_108);
    if (0x7fffffffffffffff - sStack_50 < 8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_118 = 8;
    local_120 = "group - ";
    local_128 = sStack_50;
    FUN_18015a9c0(local_a0);
    FUN_18015a6e0(local_e8);
    ppppuVar7 = local_e8;
    if (0xf < local_d0) {
      ppppuVar7 = local_e8[0];
    }
    sVar1 = param_3[2];
    puVar6 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar6 = (undefined8 *)*param_3;
    }
    if (sVar1 == local_d8) {
      if (sVar1 == 0) {
        bVar13 = true;
      }
      else {
        iVar5 = memcmp(puVar6,ppppuVar7,sVar1);
        bVar13 = iVar5 == 0;
      }
    }
    else {
      bVar13 = false;
    }
    FUN_18015c010(local_e8);
    FUN_18015c010(local_a0);
    FUN_18015c010(&local_c0);
    if (bVar13) {
      *(undefined4 *)(param_1 + 0x6c) = 1;
      *(int *)(param_1 + 0x70) = (int)uVar9;
      goto LAB_180552bad;
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 6);
  uVar9 = 0;
  ppuVar10 = &PTR_DAT_1806ff9c8;
  while( true ) {
    puVar2 = *ppuVar10;
    if (0x7fffffffffffffff - sStack_50 < 9) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_118 = 9;
    local_120 = "weapon - ";
    local_128 = sStack_50;
    FUN_18015a9c0(local_a0);
    lVar12 = -1;
    do {
      lVar12 = lVar12 + 1;
    } while (puVar2[lVar12] != '\0');
    puVar6 = (undefined8 *)FUN_18015b2a0(local_a0,puVar2);
    local_c0 = (undefined8 ****)*puVar6;
    uStack_b8 = puVar6[1];
    sStack_b0 = puVar6[2];
    uStack_a8 = puVar6[3];
    *(undefined1 *)puVar6 = 0;
    puVar6[2] = 0;
    puVar6[3] = 0xf;
    ppppuVar7 = &local_c0;
    if (0xf < uStack_a8) {
      ppppuVar7 = local_c0;
    }
    sVar1 = param_3[2];
    puVar6 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar6 = (undefined8 *)*param_3;
    }
    if (sVar1 == sStack_b0) {
      if (sVar1 == 0) {
        bVar13 = true;
      }
      else {
        iVar5 = memcmp(puVar6,ppppuVar7,sVar1);
        bVar13 = iVar5 == 0;
      }
    }
    else {
      bVar13 = false;
    }
    FUN_18015c010(&local_c0);
    FUN_18015c010(local_a0);
    if (bVar13) break;
    uVar9 = uVar9 + 1;
    ppuVar10 = ppuVar10 + 4;
    if (0x21 < uVar9) {
LAB_180552bad:
      FUN_18015c010(&local_60);
    }
  }
  *(undefined4 *)(param_1 + 0x6c) = 2;
  *(int *)(param_1 + 0x74) = (int)uVar9;
  goto LAB_180552bad;
}



