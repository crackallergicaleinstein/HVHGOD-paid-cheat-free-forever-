// FUN_18031bd00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031bd00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18031bd00(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  short sVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float *pfVar12;
  char *pcVar13;
  char *pcVar14;
  undefined8 *puVar15;
  float *pfVar16;
  ulonglong uVar17;
  byte bVar18;
  longlong lVar19;
  char cVar20;
  longlong lVar21;
  ulonglong uVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 extraout_var [56];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined4 uVar30;
  undefined1 auVar31 [16];
  float fVar32;
  float fVar33;
  undefined1 auVar34 [64];
  float fVar35;
  float fVar36;
  undefined1 auStack_548 [32];
  char *local_528;
  ulonglong local_518;
  float local_510 [2];
  undefined8 local_508;
  undefined8 *puStack_500;
  char *local_4f8;
  ulonglong uStack_4f0;
  undefined8 local_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 local_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  double local_488 [9];
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined1 local_3c8 [16];
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8 [4];
  undefined1 local_3a4 [8];
  float local_39c;
  float local_398;
  float local_394;
  float local_390;
  byte local_38c;
  char local_378;
  char local_368 [4];
  float fStack_364;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined1 local_248 [4];
  undefined1 local_244 [12];
  float local_238;
  float local_234;
  byte local_22c;
  char local_218;
  undefined8 local_208;
  undefined8 *puStack_200;
  undefined1 local_1f8 [280];
  char local_e0 [8];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_548;
  local_518 = local_518 & 0xffffffff00000000;
  if (*(char *)*param_1 == '\0') {
  }
  lVar21 = param_1[1];
  if (*(char *)(lVar21 + 0x68) != '\0') {
  }
  if (*(float *)param_1[2] < 60.0) {
  }
  if (1 < *(int *)(param_1[3] + 0x2c)) {
  }
  lVar19 = *(longlong *)(lVar21 + 0x78);
  if (((-1 < lVar19) && (lVar19 <= *(longlong *)param_1[4])) &&
     (*(longlong *)param_1[4] - lVar19 < 8)) {
  }
  if (0x6e < *(int *)(param_1[5] + 0x98) + 2) {
  }
  *(undefined8 *)(lVar21 + 0x78) = *(undefined8 *)param_1[4];
  cVar20 = *(char *)param_1[6];
  local_528 = (char *)CONCAT44(local_528._4_4_,(uint)(cVar20 != '\0'));
  auVar29 = ZEXT864(0);
  FUN_18031a9e0(param_1[7],local_3a8,0,0);
  auVar28 = ZEXT464((uint)(*(float *)param_1[8] + 90.0));
  sVar8 = thunk_FUN_180624430(*(float *)param_1[8] + 90.0);
  if (sVar8 < 1) {
    auVar28._0_8_ = FUN_180615070(auVar28._0_8_,0x43b40000);
    auVar28._8_56_ = extraout_var;
    auVar25 = auVar28._0_16_;
  }
  else {
    auVar25 = ZEXT816(0);
  }
  auVar28 = ZEXT1664(auVar25);
  local_528 = (char *)CONCAT44(local_528._4_4_,(uint)(cVar20 != '\0'));
  FUN_18031a9e0(param_1[7],local_248,1,auVar25._0_8_);
  auVar25 = auVar28._0_16_;
  auVar31 = auVar29._0_16_;
  bVar5 = false;
  bVar4 = false;
  bVar7 = false;
  bVar6 = false;
  lVar21 = 2;
  fVar27 = 1.0;
  if (local_378 != '\0') {
    local_e0[0] = '\0';
    local_528 = local_e0;
    fVar27 = 1.0;
    puVar9 = (undefined8 *)FUN_18030bef0(&local_4e8,param_1[5],param_1[5] + 0x7c,local_3a4);
    auVar25 = auVar28._0_16_;
    auVar31 = auVar29._0_16_;
    lVar19 = 2;
    pcVar13 = local_368;
    do {
      uVar1 = puVar9[1];
      uVar2 = puVar9[2];
      uVar3 = puVar9[3];
      *(undefined8 *)pcVar13 = *puVar9;
      *(undefined8 *)(pcVar13 + 8) = uVar1;
      *(undefined8 *)(pcVar13 + 0x10) = uVar2;
      *(undefined8 *)(pcVar13 + 0x18) = uVar3;
      uVar1 = puVar9[5];
      uVar2 = puVar9[6];
      uVar3 = puVar9[7];
      *(undefined8 *)(pcVar13 + 0x20) = puVar9[4];
      *(undefined8 *)(pcVar13 + 0x28) = uVar1;
      *(undefined8 *)(pcVar13 + 0x30) = uVar2;
      *(undefined8 *)(pcVar13 + 0x38) = uVar3;
      uVar1 = puVar9[9];
      uVar2 = puVar9[10];
      uVar3 = puVar9[0xb];
      *(undefined8 *)(pcVar13 + 0x40) = puVar9[8];
      *(undefined8 *)(pcVar13 + 0x48) = uVar1;
      *(undefined8 *)(pcVar13 + 0x50) = uVar2;
      *(undefined8 *)(pcVar13 + 0x58) = uVar3;
      uVar1 = puVar9[0xd];
      *(undefined8 *)(pcVar13 + 0x60) = puVar9[0xc];
      *(undefined8 *)(pcVar13 + 0x68) = uVar1;
      pcVar14 = pcVar13 + 0x80;
      uVar1 = puVar9[0xf];
      *(undefined8 *)(pcVar13 + 0x70) = puVar9[0xe];
      *(undefined8 *)(pcVar13 + 0x78) = uVar1;
      puVar9 = puVar9 + 0x10;
      lVar19 = lVar19 + -1;
      pcVar13 = pcVar14;
    } while (lVar19 != 0);
    *(undefined8 *)pcVar14 = *puVar9;
    if (((local_e0[0] != '\0') && (uStack_2b0._3_1_ == '\0')) && (fVar27 <= uStack_2c0._4_4_)) {
      bVar5 = true;
      bVar4 = true;
    }
  }
  if (local_218 != '\0') {
    local_e0[0] = '\0';
    local_528 = local_e0;
    auVar29 = ZEXT1664(auVar25);
    auVar28 = ZEXT1664(auVar31);
    puVar9 = (undefined8 *)FUN_18030bef0(&local_4e8,param_1[5],param_1[5] + 0x7c,local_244);
    auVar25 = auVar29._0_16_;
    auVar31 = auVar28._0_16_;
    lVar19 = 2;
    pcVar13 = local_368;
    do {
      uVar1 = puVar9[1];
      uVar2 = puVar9[2];
      uVar3 = puVar9[3];
      *(undefined8 *)pcVar13 = *puVar9;
      *(undefined8 *)(pcVar13 + 8) = uVar1;
      *(undefined8 *)(pcVar13 + 0x10) = uVar2;
      *(undefined8 *)(pcVar13 + 0x18) = uVar3;
      uVar1 = puVar9[5];
      uVar2 = puVar9[6];
      uVar3 = puVar9[7];
      *(undefined8 *)(pcVar13 + 0x20) = puVar9[4];
      *(undefined8 *)(pcVar13 + 0x28) = uVar1;
      *(undefined8 *)(pcVar13 + 0x30) = uVar2;
      *(undefined8 *)(pcVar13 + 0x38) = uVar3;
      uVar1 = puVar9[9];
      uVar2 = puVar9[10];
      uVar3 = puVar9[0xb];
      *(undefined8 *)(pcVar13 + 0x40) = puVar9[8];
      *(undefined8 *)(pcVar13 + 0x48) = uVar1;
      *(undefined8 *)(pcVar13 + 0x50) = uVar2;
      *(undefined8 *)(pcVar13 + 0x58) = uVar3;
      uVar1 = puVar9[0xd];
      *(undefined8 *)(pcVar13 + 0x60) = puVar9[0xc];
      *(undefined8 *)(pcVar13 + 0x68) = uVar1;
      pcVar14 = pcVar13 + 0x80;
      uVar1 = puVar9[0xf];
      *(undefined8 *)(pcVar13 + 0x70) = puVar9[0xe];
      *(undefined8 *)(pcVar13 + 0x78) = uVar1;
      puVar9 = puVar9 + 0x10;
      lVar19 = lVar19 + -1;
      pcVar13 = pcVar14;
    } while (lVar19 != 0);
    *(undefined8 *)pcVar14 = *puVar9;
    if (((local_e0[0] != '\0') && (uStack_2b0._3_1_ == '\0')) && (fVar27 <= uStack_2c0._4_4_)) {
      bVar7 = true;
      bVar6 = true;
    }
  }
  fVar35 = auVar25._0_4_;
  if (param_2 != 0) {
    if (local_378 == '\0') goto LAB_18031cb3e;
    if (local_218 != '\0') {
      local_528._0_4_ = 0x40000000;
      auVar29 = ZEXT1664(auVar25);
      uVar30 = 0x40000000;
      auVar28 = ZEXT1664(auVar31);
      puVar9 = (undefined8 *)FUN_18030c180(&local_4e8,param_1[5],local_3a4,param_2);
      lVar19 = 2;
      pcVar13 = local_368;
      do {
        pcVar14 = pcVar13;
        puVar10 = puVar9;
        uVar1 = puVar10[1];
        uVar2 = puVar10[2];
        uVar3 = puVar10[3];
        *(undefined8 *)pcVar14 = *puVar10;
        *(undefined8 *)(pcVar14 + 8) = uVar1;
        *(undefined8 *)(pcVar14 + 0x10) = uVar2;
        *(undefined8 *)(pcVar14 + 0x18) = uVar3;
        uVar1 = puVar10[5];
        uVar2 = puVar10[6];
        uVar3 = puVar10[7];
        *(undefined8 *)(pcVar14 + 0x20) = puVar10[4];
        *(undefined8 *)(pcVar14 + 0x28) = uVar1;
        *(undefined8 *)(pcVar14 + 0x30) = uVar2;
        *(undefined8 *)(pcVar14 + 0x38) = uVar3;
        uVar1 = puVar10[9];
        uVar2 = puVar10[10];
        uVar3 = puVar10[0xb];
        *(undefined8 *)(pcVar14 + 0x40) = puVar10[8];
        *(undefined8 *)(pcVar14 + 0x48) = uVar1;
        *(undefined8 *)(pcVar14 + 0x50) = uVar2;
        *(undefined8 *)(pcVar14 + 0x58) = uVar3;
        uVar1 = puVar10[0xd];
        *(undefined8 *)(pcVar14 + 0x60) = puVar10[0xc];
        *(undefined8 *)(pcVar14 + 0x68) = uVar1;
        uVar1 = puVar10[0xf];
        *(undefined8 *)(pcVar14 + 0x70) = puVar10[0xe];
        *(undefined8 *)(pcVar14 + 0x78) = uVar1;
        lVar19 = lVar19 + -1;
        puVar9 = puVar10 + 0x10;
        pcVar13 = pcVar14 + 0x80;
      } while (lVar19 != 0);
      uVar1 = puVar10[0x11];
      *(undefined8 *)(pcVar14 + 0x80) = puVar10[0x10];
      *(undefined8 *)(pcVar14 + 0x88) = uVar1;
      *(undefined8 *)(pcVar14 + 0x90) = puVar10[0x12];
      local_528 = (char *)CONCAT44(local_528._4_4_,uVar30);
      auVar29 = ZEXT1664(auVar29._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      puVar9 = (undefined8 *)FUN_18030c180(local_1f8,param_1[5],local_244,param_2);
      fVar35 = auVar29._0_4_;
      auVar31 = auVar28._0_16_;
      puVar10 = &local_4e8;
      do {
        puVar15 = puVar10;
        puVar11 = puVar9;
        uVar1 = puVar11[1];
        uVar2 = puVar11[2];
        uVar3 = puVar11[3];
        *puVar15 = *puVar11;
        puVar15[1] = uVar1;
        puVar15[2] = uVar2;
        puVar15[3] = uVar3;
        uVar1 = puVar11[5];
        uVar2 = puVar11[6];
        uVar3 = puVar11[7];
        puVar15[4] = puVar11[4];
        puVar15[5] = uVar1;
        puVar15[6] = uVar2;
        puVar15[7] = uVar3;
        uVar1 = puVar11[9];
        uVar2 = puVar11[10];
        uVar3 = puVar11[0xb];
        puVar15[8] = puVar11[8];
        puVar15[9] = uVar1;
        puVar15[10] = uVar2;
        puVar15[0xb] = uVar3;
        uVar1 = puVar11[0xd];
        puVar15[0xc] = puVar11[0xc];
        puVar15[0xd] = uVar1;
        uVar1 = puVar11[0xf];
        puVar15[0xe] = puVar11[0xe];
        puVar15[0xf] = uVar1;
        lVar21 = lVar21 + -1;
        puVar9 = puVar11 + 0x10;
        puVar10 = puVar15 + 0x10;
      } while (lVar21 != 0);
      uVar1 = puVar11[0x11];
      puVar15[0x10] = puVar11[0x10];
      puVar15[0x11] = uVar1;
      puVar15[0x12] = puVar11[0x12];
      if (local_368[0] != '\0') {
        bVar4 = bVar5;
        if (fStack_364 < fVar27) {
          bVar4 = false;
        }
      }
      if ((char)local_4e8 != '\0') {
        bVar6 = bVar7;
        if (local_4e8._4_4_ < fVar27) {
          bVar6 = false;
        }
      }
    }
  }
  if (((((local_378 != '\0') && (local_218 != '\0')) && (bVar4)) &&
      ((bVar6 && ((local_38c & 1) == 0)))) && ((local_22c & 1) == 0)) {
    lVar21 = param_1[5];
    fVar33 = *(float *)(lVar21 + 0x50);
    fVar32 = (*(float *)(lVar21 + 0x90) - local_390) / fVar33;
    fVar36 = *(float *)(lVar21 + 0x90) - (local_39c - *(float *)(lVar21 + 0x84)) / fVar33;
    if (fVar32 <= fVar27) {
      fVar26 = 0.5;
    }
    else {
      local_518 = CONCAT44(local_518._4_4_,fVar27);
      local_510[0] = auVar31._0_4_;
      fVar26 = fVar36 / (fVar33 * fVar32);
      local_508 = CONCAT44(local_508._4_4_,fVar26);
      pfVar16 = local_510;
      if (auVar31._0_4_ <= fVar26) {
        pfVar16 = (float *)&local_508;
      }
      pfVar12 = (float *)&local_518;
      if (fVar26 <= fVar27) {
        pfVar12 = pfVar16;
      }
      fVar26 = *pfVar12;
    }
    auVar29 = ZEXT464((uint)(fVar35 * 0.017453292));
    auVar28 = ZEXT1664(auVar31);
    auVar34 = ZEXT464((uint)fVar32);
    fVar23 = (float)FUN_180638e00();
    fVar24 = (float)FUN_180637540(auVar29._0_8_);
    fVar32 = (local_238 - local_398) * fVar24 + (local_234 - local_394) * fVar23;
    fVar35 = *(float *)(lVar21 + 0x60);
    auVar25 = vminss_avx(ZEXT416(*(uint *)(lVar21 + 0x5c)),ZEXT416((uint)fVar35));
    fVar23 = auVar25._0_4_ -
             (fVar23 * *(float *)(lVar21 + 0x8c) + fVar24 * *(float *)(lVar21 + 0x88));
    fVar24 = 3.0;
    if (auVar28._0_4_ < fVar23) {
      auVar25 = vminss_avx(ZEXT416((uint)(fVar35 * *(float *)(lVar21 + 0x58) * fVar33 *
                                         *(float *)(lVar21 + 100))),ZEXT416((uint)fVar23));
      auVar28 = ZEXT1664(auVar25);
      if (3.0 < auVar25._0_4_) {
        local_510[0] = 3.0;
        local_518 = CONCAT44(local_518._4_4_,0x3e4ccccd);
        fVar27 = fVar32 / auVar25._0_4_;
        local_508 = CONCAT44(local_508._4_4_,fVar27);
        pfVar16 = (float *)&local_518;
        if (0.2 <= fVar27) {
          pfVar16 = (float *)&local_508;
        }
        pfVar12 = local_510;
        if (fVar27 <= 3.0) {
          pfVar12 = pfVar16;
        }
        fVar27 = *pfVar12;
      }
    }
    sVar8 = thunk_FUN_180624430(auVar34._0_8_);
    fVar33 = auVar34._0_4_;
    if (((0 < sVar8) || (fVar33 <= *(float *)(lVar21 + 0x54) * 0.3)) ||
       (*(float *)(lVar21 + 0x54) * fVar24 <= fVar33)) {
      cVar20 = '\0';
    }
    else {
      cVar20 = '\x01';
    }
    local_4e8 = 0xdb35e39b27e1c185;
    uStack_4e0 = 0xa05181ee77d57a06;
    uStack_4d8 = 0x929654b1461b7377;
    uStack_4d0 = 0xa5cea54bfef7110;
    local_4c8 = 0xa70c9f7f916b7e19;
    uStack_4c0 = 0x2b2d6d82aa402c0a;
    uStack_4b8 = 0xc064ed9510bc010b;
    uStack_4b0 = 0xfec09918395f26c4;
    local_4a8 = 0x835e2313e2c48f8d;
    uStack_4a0 = 0xf863c3261a551f0e;
    uStack_498 = 0x56a0bc092c25563f;
    uStack_490 = 0x67ff882c0a9bdf38;
    local_488[0] = -3.397329245786183e+202;
    local_488[1] = 1.256394364812279e-131;
    local_488[2] = -3.274053720118996e+157;
    local_488[3] = 9.219521739633918e-27;
    local_488[4] = -3.785023793442884e-206;
    local_488[5] = -8.922102202732586e+28;
    local_488[6] = -1.1134988385222154e-184;
    local_488[7] = 3.0479808347199787e-230;
    local_488[8] = -2.3351055037742689e-181;
    uStack_440 = 0x91e97532caa6fc1a;
    local_438 = 0x4f948c455ded471b;
    local_518 = 0xb10776480ca86bd4;
    uStack_430 = 0xb10776480ca86bd4;
    _local_368 = 0x75736c657869705b;
    uStack_360 = 0x205d6c61632d6672;
    uStack_358 = 0x67207d7b3d646d63;
    uStack_350 = 0x3a7b3d726176635f;
    local_348 = 0x6d5f67207d66322e;
    uStack_340 = 0x3d64657275736165;
    uStack_338 = 0x73207d66332e3a7b;
    uStack_330 = 0x3d6572705f706574;
    local_328 = 0x67207d66342e3a7b;
    uStack_320 = 0x726174735f766172;
    uStack_318 = 0x7d66342e3a7b3d74;
    uStack_310 = 0x656d5f6e69616720;
    local_308 = 0x7b3d646572757361;
    uStack_300 = 0x6167207d66342e3a;
    uStack_2f8 = 0x6c65646f6d5f6e69;
    uStack_2f0 = 0x207d66342e3a7b3d;
    local_2e8 = 0x63735f6c65636361;
    uStack_2e0 = 0x342e3a7b3d656c61;
    uStack_2d8 = 0x735f78616d207d66;
    uStack_2d0 = 0x2e3a7b3d64656570;
    local_2c8 = 0x65657073207d6631;
    uStack_2c0 = 0x7d66312e3a7b3d64;
    local_2b8 = 0x6574706563636120;
    uStack_2b0 = 0xa7d7b3d64;
    uVar17 = 0xffffffffffffffff;
    do {
      uStack_4f0 = uVar17 + 1;
      lVar19 = uVar17 + 1;
      uVar17 = uStack_4f0;
    } while (local_368[lVar19] != '\0');
    local_4f8 = local_368;
    if (DAT_180bbeabc != '\0') {
      uStack_490 = *(undefined8 *)param_1[4];
      local_4e8 = 0x3000000000000000;
      local_488[0] = (double)*(float *)(lVar21 + 0x54);
      uStack_4e0 = 0x8000000000000008;
      local_488[1] = (double)fVar33;
      uStack_4d8 = 0x8000000000000010;
      local_488[2] = (double)fVar36;
      uStack_4d0 = 0x8000000000000018;
      local_488[3] = (double)fVar26;
      local_4c8 = 0x8000000000000020;
      local_488[4] = (double)fVar32;
      uStack_4c0 = 0x8000000000000028;
      local_488[5] = (double)auVar28._0_4_;
      uStack_4b8 = 0x8000000000000030;
      local_488[6] = (double)fVar27;
      uStack_4b0 = 0x8000000000000038;
      local_488[7] = (double)fVar35;
      local_4a8 = 0x8000000000000040;
      local_488[8] = (double)*(float *)param_1[2];
      uStack_4a0 = 0x8000000000000048;
      uStack_440 = CONCAT71(0x91e97532caa6fc,cVar20);
      uStack_498 = 0x5000000000000050;
      local_508 = 0xb;
      puStack_500 = &local_4e8;
      local_3b8 = 0;
      uStack_3b0 = 0xf;
      local_3c8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar25[0xf] = 0;
      auVar25._0_15_ = local_3c8._1_15_;
      local_3c8 = auVar25 << 8;
      local_518 = 0xb107764800000001;
      uVar17 = 0;
      uVar22 = 0;
      do {
        bVar18 = (byte)((ulonglong)local_488[uVar22 - 0xc] >> 0x3c);
        if (bVar18 == 0xc) {
          uVar17 = uVar17 + *(longlong *)
                             ((longlong)local_488 +
                             ((ulonglong)local_488[uVar22 - 0xc] & 0xfffffffffffffff));
        }
        else if (bVar18 == 0xb) {
          uVar17 = uVar17 + 0x20;
        }
        else {
          uVar17 = uVar17 + 8;
        }
        uVar22 = uVar22 + 1;
      } while (uVar22 < 0xb);
      lVar21 = uStack_4f0 + uVar17;
      if (CARRY8(uStack_4f0,uVar17)) {
        lVar21 = -1;
      }
      auVar29 = ZEXT1664(auVar34._0_16_);
      FUN_1800f5540(local_3c8,lVar21);
      local_208 = local_508;
      puStack_200 = puStack_500;
      local_528 = (char *)0x0;
      FUN_1801da050(&local_508,local_3c8,&local_4f8,&local_208);
      FUN_18030e280(local_3c8);
      FUN_18015c010(local_3c8);
      fVar33 = auVar29._0_4_;
    }
    if (cVar20 != '\0') {
      *(undefined1 *)(param_1[1] + 0x68) = 1;
      *(float *)(param_1[1] + 0x74) = fVar33;
      *(float *)(param_1[1] + 0x6c) = fVar26;
      *(float *)(param_1[1] + 0x70) = fVar27;
      *(float *)(param_1[5] + 0x54) = fVar33;
      *(float *)(param_1[5] + 0x6c) = fVar26;
      *(float *)(param_1[5] + 0x70) = fVar27;
    }
  }
LAB_18031cb3e:
  FUN_18030afc0(*(undefined8 *)param_1[9],*(undefined8 *)param_1[10],param_1[0xb]);
}



