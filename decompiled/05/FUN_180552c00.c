// FUN_180552c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180552c00 */

void FUN_180552c00(undefined4 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 ****ppppuVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  undefined **ppuVar12;
  int iVar13;
  bool bVar14;
  undefined1 local_a8 [16];
  size_t sStack_98;
  ulonglong uStack_90;
  undefined8 ****local_88 [2];
  size_t local_78;
  ulonglong local_70;
  undefined1 local_68 [32];
  undefined8 ****local_48;
  undefined8 uStack_40;
  size_t sStack_38;
  ulonglong uStack_30;
  
  lVar11 = param_2[2];
  if (0x7fffffffffffffffU - lVar11 < 6) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  puVar7 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar7 = (undefined8 *)*param_2;
  }
  FUN_18015a9c0(local_88,lVar11,param_3,puVar7,lVar11," - all",6);
  ppppuVar8 = local_88;
  if (0xf < local_70) {
    ppppuVar8 = local_88[0];
  }
  sVar1 = param_3[2];
  puVar7 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    puVar7 = (undefined8 *)*param_3;
  }
  if (sVar1 == local_78) {
    if (sVar1 == 0) {
      FUN_18015c010(local_88);
    }
    else {
      iVar13 = memcmp(puVar7,ppppuVar8,sVar1);
      FUN_18015c010(local_88);
      if (iVar13 != 0) goto LAB_180552cd2;
    }
    *param_1 = 0;
  }
  else {
    FUN_18015c010(local_88);
  }
LAB_180552cd2:
  iVar13 = 0;
  ppuVar12 = &PTR_s_Pistols_1806ff970;
  do {
    local_a8 = (undefined1  [16])0x0;
    sStack_98 = 0;
    uStack_90 = 0;
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while ((*ppuVar12)[lVar11] != '\0');
    FUN_18015ba30(local_a8);
    pbVar9 = local_a8;
    if (0xf < uStack_90) {
      pbVar9 = (byte *)local_a8._0_8_;
    }
    pbVar10 = pbVar9 + sStack_98;
    sVar1 = sStack_98;
    uVar4 = uStack_90;
    for (; pbVar9 != pbVar10; pbVar9 = pbVar9 + 1) {
      sStack_98 = sVar1;
      uStack_90 = uVar4;
      iVar5 = tolower((uint)*pbVar9);
      *pbVar9 = (byte)iVar5;
      if ((byte)iVar5 == 0x5f) {
        *pbVar9 = 0x20;
      }
      sVar1 = sStack_98;
      uVar4 = uStack_90;
    }
    local_48 = (undefined8 ****)local_a8._0_8_;
    uStack_40 = local_a8._8_8_;
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_a8._1_15_;
    local_a8 = auVar3 << 8;
    iVar5 = 0;
    sStack_98 = 0;
    uStack_90 = 0xf;
    sStack_38 = sVar1;
    uStack_30 = uVar4;
    FUN_18015c010(local_a8);
    if (0x7fffffffffffffff - param_2[2] < 0xb) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    FUN_18015a9c0(local_68);
    FUN_18015a6e0(local_88);
    ppppuVar8 = local_88;
    if (0xf < local_70) {
      ppppuVar8 = local_88[0];
    }
    sVar1 = param_3[2];
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    if (sVar1 == local_78) {
      if (sVar1 == 0) {
        bVar14 = true;
      }
      else {
        iVar6 = memcmp(puVar7,ppppuVar8,sVar1);
        bVar14 = iVar6 == 0;
      }
    }
    else {
      bVar14 = false;
    }
    FUN_18015c010(local_88);
    FUN_18015c010(local_68);
    FUN_18015c010(&local_48);
    if (bVar14) {
      *param_1 = 1;
      param_1[1] = iVar13;
    }
    iVar13 = iVar13 + 1;
    ppuVar12 = ppuVar12 + 1;
  } while (iVar13 < 7);
  ppuVar12 = &PTR_DAT_1806ff3d8;
  do {
    puVar2 = *ppuVar12;
    if (0x7fffffffffffffff - param_2[2] < 0xc) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    FUN_18015a9c0(local_68);
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (puVar2[lVar11] != '\0');
    puVar7 = (undefined8 *)FUN_18015b2a0(local_68,puVar2);
    local_48 = (undefined8 ****)*puVar7;
    uStack_40 = puVar7[1];
    sStack_38 = puVar7[2];
    uStack_30 = puVar7[3];
    *(undefined1 *)puVar7 = 0;
    puVar7[2] = 0;
    puVar7[3] = 0xf;
    ppppuVar8 = &local_48;
    if (0xf < uStack_30) {
      ppppuVar8 = local_48;
    }
    sVar1 = param_3[2];
    puVar7 = param_3;
    if (0xf < (ulonglong)param_3[3]) {
      puVar7 = (undefined8 *)*param_3;
    }
    if (sVar1 == sStack_38) {
      if (sVar1 == 0) {
        bVar14 = true;
      }
      else {
        iVar13 = memcmp(puVar7,ppppuVar8,sVar1);
        bVar14 = iVar13 == 0;
      }
    }
    else {
      bVar14 = false;
    }
    FUN_18015c010(&local_48);
    FUN_18015c010(local_68);
    if (bVar14) {
      *param_1 = 2;
      param_1[2] = iVar5;
    }
    iVar5 = iVar5 + 1;
    ppuVar12 = ppuVar12 + 4;
  } while (iVar5 < 0x2c);
  return;
}



