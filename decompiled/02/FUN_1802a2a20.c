// FUN_1802a2a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a2a20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a2a20(undefined8 param_1,undefined8 param_2,float *param_3,longlong param_4,
                  longlong param_5)

{
  float *pfVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  float *pfVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auStackY_378 [32];
  undefined8 local_338;
  float local_330;
  float local_32c;
  undefined1 local_328 [8];
  undefined **ppuStack_320;
  undefined1 local_318 [16];
  undefined *local_308;
  undefined8 *puStack_300;
  undefined *local_2f8;
  undefined1 *puStack_2f0;
  undefined1 local_2d8 [32];
  float local_2b8 [68];
  undefined1 local_1a8 [264];
  undefined1 local_a0 [16];
  longlong local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStackY_378;
  local_338 = DAT_180b90858;
  puVar10 = &local_338;
  if (DAT_180b90858 == 0) {
    puVar10 = &DAT_180bbade0;
  }
  if (DAT_180bbadd0 == DAT_180bbadd8) {
    FUN_1801b6250(&DAT_180bbadc8);
  }
  else {
    *DAT_180bbadd0 = *puVar10;
    DAT_180bbadd0 = DAT_180bbadd0 + 1;
  }
  local_a0 = (undefined1  [16])0x0;
  local_90 = 0;
  if (*(char *)(param_5 + 0x68) != '\0') {
    local_330 = *(float *)(param_4 + 0x20);
    local_338 = 0x1000000000000000;
    local_2f8 = &DAT_1807d126c;
    puStack_2f0 = (undefined1 *)0x3;
    local_308 = (undefined *)0x1;
    puStack_300 = &local_338;
    ppuStack_320 = (undefined **)0x3;
    local_328 = (undefined1  [8])&DAT_1807d126c;
    FUN_1801d97f0(&local_2f8,local_328);
    uVar3 = local_a0._8_8_;
    if (local_a0._8_8_ == local_90) {
      FUN_1802ad770(local_a0,local_a0._8_8_);
    }
    else {
      FUN_18015b360(local_a0._8_8_,&local_2f8);
      *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)(param_5 + 0x7c);
      local_a0._8_8_ = local_a0._8_8_ + 0x28;
    }
    FUN_18015c010(&local_2f8);
  }
  if ((*(char *)(param_5 + 0x69) != '\0') && (0 < *(int *)(param_4 + 0x24))) {
    puVar8 = &DAT_1806bbed8;
    if (*(char *)(param_4 + 0x33) != '\0') {
      puVar8 = &DAT_1807d1270;
    }
    _local_328 = (undefined1  [16])0x0;
    local_318 = (undefined1  [16])0x0;
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (puVar8[lVar11] != '\0');
    FUN_18015ba30(local_328);
    uVar3 = local_a0._8_8_;
    if (local_a0._8_8_ == local_90) {
      FUN_1802ad770(local_a0,local_a0._8_8_);
    }
    else {
      FUN_18015b360(local_a0._8_8_,local_328);
      *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)(param_5 + 0x80);
      local_a0._8_8_ = local_a0._8_8_ + 0x28;
    }
    FUN_18015c010(local_328);
  }
  if ((*(char *)(param_5 + 0x6a) != '\0') && (*(char *)(param_4 + 0x34) != '\0')) {
    _local_328 = (undefined1  [16])0x0;
    local_318 = (undefined1  [16])0x0;
    FUN_18015ba30(local_328,&DAT_1806bdf80);
    uVar3 = local_a0._8_8_;
    if (local_a0._8_8_ == local_90) {
      FUN_1802ad770(local_a0,local_a0._8_8_);
    }
    else {
      FUN_18015b360(local_a0._8_8_,local_328);
      *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)(param_5 + 0x84);
      local_a0._8_8_ = local_a0._8_8_ + 0x28;
    }
    FUN_18015c010(local_328);
  }
  if ((*(char *)(param_5 + 0x6b) != '\0') && (*(char *)(param_4 + 0x37) != '\0')) {
    _local_328 = (undefined1  [16])0x0;
    local_318 = (undefined1  [16])0x0;
    FUN_18015ba30(local_328,&DAT_1807d1254);
    uVar3 = local_a0._8_8_;
    if (local_a0._8_8_ == local_90) {
      FUN_1802ad770(local_a0,local_a0._8_8_);
    }
    else {
      FUN_18015b360(local_a0._8_8_,local_328);
      *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)(param_5 + 0x88);
      local_a0._8_8_ = local_a0._8_8_ + 0x28;
    }
    FUN_18015c010(local_328);
  }
  if ((*(char *)(param_5 + 0x6c) != '\0') && (*(char *)(param_4 + 0x38) != '\0')) {
    _local_328 = (undefined1  [16])0x0;
    local_318 = (undefined1  [16])0x0;
    FUN_18015ba30(local_328,"defusing");
    uVar3 = local_a0._8_8_;
    if (local_a0._8_8_ == local_90) {
      FUN_1802ad770(local_a0,local_a0._8_8_);
    }
    else {
      FUN_18015b360(local_a0._8_8_,local_328);
      *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)(param_5 + 0x8c);
      local_a0._8_8_ = local_a0._8_8_ + 0x28;
    }
    FUN_18015c010(local_328);
  }
  if ((*(char *)(param_5 + 0x6d) != '\0') && (*(char *)(param_4 + 0x39) != '\0')) {
    _local_328 = (undefined1  [16])0x0;
    local_318 = (undefined1  [16])0x0;
    FUN_18015ba30(local_328,"flashed");
    uVar3 = local_a0._8_8_;
    if (local_a0._8_8_ == local_90) {
      FUN_1802ad770(local_a0,local_a0._8_8_);
    }
    else {
      FUN_18015b360(local_a0._8_8_,local_328);
      *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)(param_5 + 0x90);
      local_a0._8_8_ = local_a0._8_8_ + 0x28;
    }
    FUN_18015c010(local_328);
  }
  if (*(char *)(param_5 + 0x6e) != '\0') {
    iVar2 = *(int *)(param_4 + 0x28);
    if (iVar2 < 0x15) {
      local_338 = CONCAT44(local_338._4_4_,0xff6dd962);
    }
    else if (iVar2 < 0x33) {
      local_338 = CONCAT44(local_338._4_4_,0xff89cee6);
    }
    else {
      local_338 = CONCAT44(local_338._4_4_,0xff6e9ce6);
      if (0x46 < iVar2) {
        local_338 = CONCAT44(local_338._4_4_,0xff3b3bde);
      }
    }
    puStack_300 = (undefined8 *)CONCAT44(puStack_300._4_4_,iVar2);
    local_308 = (undefined *)0x1000000000000000;
    ppuStack_320 = &local_308;
    local_328 = (undefined1  [8])0x1;
    local_2f8 = &DAT_1807d1298;
    puStack_2f0 = (undefined1 *)0x4;
    FUN_1801d97f0(local_2d8,&local_2f8);
    uVar3 = local_a0._8_8_;
    if (local_a0._8_8_ == local_90) {
      FUN_1802ad770(local_a0,local_a0._8_8_);
    }
    else {
      FUN_18015b360(local_a0._8_8_,local_2d8);
      *(undefined4 *)(uVar3 + 0x20) = (undefined4)local_338;
      local_a0._8_8_ = local_a0._8_8_ + 0x28;
    }
    FUN_18015c010(local_2d8);
  }
  if (*(char *)(param_5 + 0x6f) != '\0') {
    ppuStack_320._0_4_ = *(undefined4 *)(param_4 + 0x2c);
    local_328 = (undefined1  [8])0x7000000000000000;
    local_2f8 = (undefined *)0x1;
    puStack_2f0 = local_328;
    local_308 = &DAT_1807d1278;
    puStack_300 = (undefined8 *)0x7;
    FUN_1801d97f0(local_2d8,&local_308);
    uVar3 = local_a0._8_8_;
    if (local_a0._8_8_ == local_90) {
      FUN_1802ad770(local_a0,local_a0._8_8_);
    }
    else {
      FUN_18015b360(local_a0._8_8_,local_2d8);
      *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)(param_5 + 0x94);
      local_a0._8_8_ = local_a0._8_8_ + 0x28;
    }
    FUN_18015c010(local_2d8);
  }
  if ((*(char *)(param_5 + 0x70) != '\0') && (*(char *)(param_4 + 0x3a) != '\0')) {
    _local_328 = (undefined1  [16])0x0;
    local_318 = (undefined1  [16])0x0;
    FUN_18015ba30(local_328,"PROTECTED");
    uVar3 = local_a0._8_8_;
    if (local_a0._8_8_ == local_90) {
      FUN_1802ad770(local_a0,local_a0._8_8_);
    }
    else {
      FUN_18015b360(local_a0._8_8_,local_328);
      *(undefined4 *)(uVar3 + 0x20) = *(undefined4 *)(param_5 + 0x98);
      local_a0._8_8_ = local_a0._8_8_ + 0x28;
    }
    FUN_18015c010(local_328);
  }
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uVar12 = 0;
  uVar9 = 0;
  auVar16 = ZEXT864(0);
  auVar15 = auVar16._0_16_;
  uVar3 = local_a0._8_8_;
  for (puVar10 = (undefined8 *)local_a0._0_8_; puVar10 != (undefined8 *)uVar3; puVar10 = puVar10 + 5
      ) {
    auVar15 = auVar16._0_16_;
    local_328 = (undefined1  [8])puVar10;
    if (0xf < (ulonglong)puVar10[3]) {
      local_328 = (undefined1  [8])*puVar10;
    }
    if (DAT_180bbadc8 == DAT_180bbadd0) {
      lVar11 = DAT_180bbade0;
    }
    else {
      lVar11 = DAT_180bbadd0[-1];
    }
    if (lVar11 == 0) {
      local_338._0_4_ = 0;
      auVar13 = ZEXT816(0);
      local_338 = 0;
    }
    else {
      ppuStack_320 = (undefined **)puVar10[2];
      auVar16 = ZEXT1664(auVar15);
      FUN_180430010(lVar11,&local_338);
      auVar15 = auVar16._0_16_;
      auVar13 = ZEXT416(local_338._4_4_);
    }
    *(undefined4 *)((longlong)&local_88 + uVar12 * 4) = (undefined4)local_338;
    uVar9 = (int)uVar12 + 1;
    uVar12 = (ulonglong)uVar9;
    auVar15 = vmaxss_avx(auVar13,auVar15);
    auVar16 = ZEXT1664(auVar15);
  }
  uVar12 = (ulonglong)uVar9;
  ppuStack_320._0_4_ = uVar9;
  local_328 = (undefined1  [8])&local_88;
  ppuStack_320._4_4_ = 0;
  auVar16 = ZEXT1664(auVar15);
  FUN_18029b970(*(undefined4 *)(param_5 + 0x74));
  auVar15 = vmaxss_avx(SUB6416(ZEXT464(0x43340000),0),ZEXT416((uint)(param_3[2] - *param_3)));
  puVar10 = (undefined8 *)FUN_18029c500(local_1a8,local_328,auVar16._0_8_,auVar15._0_8_);
  lVar11 = 2;
  pfVar7 = local_2b8;
  do {
    uVar3 = puVar10[1];
    uVar4 = puVar10[2];
    uVar5 = puVar10[3];
    *(undefined8 *)pfVar7 = *puVar10;
    *(undefined8 *)(pfVar7 + 2) = uVar3;
    *(undefined8 *)(pfVar7 + 4) = uVar4;
    *(undefined8 *)(pfVar7 + 6) = uVar5;
    uVar3 = puVar10[5];
    uVar4 = puVar10[6];
    uVar5 = puVar10[7];
    *(undefined8 *)(pfVar7 + 8) = puVar10[4];
    *(undefined8 *)(pfVar7 + 10) = uVar3;
    *(undefined8 *)(pfVar7 + 0xc) = uVar4;
    *(undefined8 *)(pfVar7 + 0xe) = uVar5;
    uVar3 = puVar10[9];
    uVar4 = puVar10[10];
    uVar5 = puVar10[0xb];
    *(undefined8 *)(pfVar7 + 0x10) = puVar10[8];
    *(undefined8 *)(pfVar7 + 0x12) = uVar3;
    *(undefined8 *)(pfVar7 + 0x14) = uVar4;
    *(undefined8 *)(pfVar7 + 0x16) = uVar5;
    uVar3 = puVar10[0xd];
    *(undefined8 *)(pfVar7 + 0x18) = puVar10[0xc];
    *(undefined8 *)(pfVar7 + 0x1a) = uVar3;
    pfVar1 = pfVar7 + 0x20;
    uVar3 = puVar10[0xf];
    *(undefined8 *)(pfVar7 + 0x1c) = puVar10[0xe];
    *(undefined8 *)(pfVar7 + 0x1e) = uVar3;
    puVar10 = puVar10 + 0x10;
    lVar11 = lVar11 + -1;
    pfVar7 = pfVar1;
  } while (lVar11 != 0);
  *(undefined8 *)pfVar1 = *puVar10;
  local_338 = *(longlong *)param_3;
  local_330 = param_3[2] - *param_3;
  local_32c = param_3[3] - param_3[1];
  pauVar6 = (undefined1 (*) [16])FUN_18029b9f0(local_328,&local_338);
  _local_328 = *pauVar6;
  if (uVar9 != 0) {
    lVar11 = 0;
    pfVar7 = local_2b8;
    fVar14 = (float)local_328._4_4_;
    fVar17 = (float)local_328._0_4_;
    do {
      puVar10 = (undefined8 *)(local_a0._0_8_ + lVar11);
      local_328 = (undefined1  [8])puVar10;
      if (0xf < (ulonglong)puVar10[3]) {
        local_328 = (undefined1  [8])*puVar10;
      }
      ppuStack_320 = (undefined **)puVar10[2];
      auVar15 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar14 + pfVar7[1])),1);
      auVar13 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar17 + *pfVar7)),1);
      FUN_180434550(param_2,auVar13._0_8_,auVar15._0_8_);
      lVar11 = lVar11 + 0x28;
      pfVar7 = pfVar7 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  if (1 < (ulonglong)((longlong)DAT_180bbadd0 - (longlong)DAT_180bbadc8 >> 3)) {
    DAT_180bbadd0 = DAT_180bbadd0 + -1;
  }
  if (local_a0._0_8_ != 0) {
    uVar3 = local_a0._8_8_;
    lVar11 = local_a0._0_8_;
    if (local_a0._0_8_ != local_a0._8_8_) {
      do {
        FUN_18015c010(lVar11);
        lVar11 = lVar11 + 0x28;
      } while (lVar11 != uVar3);
    }
    lVar11 = local_a0._0_8_;
    if ((0xfff < (ulonglong)(((local_90 - local_a0._0_8_) / 0x28) * 0x28)) &&
       (lVar11 = *(longlong *)(local_a0._0_8_ + -8), 0x1f < (local_a0._0_8_ - lVar11) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar11);
  }
}



