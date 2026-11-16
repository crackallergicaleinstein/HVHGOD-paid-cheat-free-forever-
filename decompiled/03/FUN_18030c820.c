// FUN_18030c820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030c820 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030c820(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  float param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char *pcVar9;
  char cVar10;
  short sVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  char *pcVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  undefined1 uVar19;
  longlong lVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 in_ZMM2 [64];
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auStack_3e8 [32];
  char *local_3c8;
  undefined8 local_3b8;
  float local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  uint *local_388;
  undefined4 *puStack_380;
  float *local_378;
  undefined8 local_368 [18];
  uint local_2d8;
  uint local_2d4;
  uint local_2d0;
  float local_2bc;
  char local_2ad;
  char local_248 [4];
  float fStack_244;
  char local_128 [8];
  uint local_120 [2];
  undefined8 local_118;
  float local_110;
  int local_108;
  uint local_104;
  undefined8 local_100;
  float local_f8;
  undefined4 local_f0 [2];
  float local_e8 [2];
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_3e8;
  local_e8[0] = param_5;
  local_120[0] = in_ZMM2._0_4_;
  auVar29 = ZEXT1664(in_ZMM2._0_16_);
  local_100 = param_1;
  local_f0[0] = param_4;
  FUN_18063ab10(param_5,0,0x138);
  *(undefined8 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0x4e6e6b28;
  *(undefined8 *)(param_1 + 0x20) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x4e6e6b28;
  *(undefined8 *)(param_1 + 0x54) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x74) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x4e6e6b28;
  *(undefined8 *)(param_1 + 0x88) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0x4e6e6b28;
  *(undefined8 *)(param_1 + 0xbc) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xc4) = 0;
  *(undefined8 *)(param_1 + 0xd4) = 0;
  *(undefined8 *)(param_1 + 0xdc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x4e6e6b28;
  *(undefined8 *)(param_1 + 0xf0) = 0x3f800000;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x4e6e6b28;
  *(undefined8 *)(param_1 + 0x124) = 0x3f800000;
  *(undefined8 *)(param_1 + 300) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x158) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  FUN_18063ab10(param_1 + 0x170,0,0x500);
  FUN_180330620(param_1 + 0x170);
  auVar33 = ZEXT464(0x3c8efa35);
  *(undefined8 *)(param_1 + 0x670) = 0;
  pfVar21 = (float *)&DAT_180701d90;
  lVar20 = 2;
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(param_2 + 0x94);
  local_3a0 = &local_108;
  local_398 = &local_104;
  local_388 = local_120;
  puStack_380 = local_f0;
  local_378 = local_e8;
  local_108 = 0;
  local_104 = 0;
  auVar34 = ZEXT464(0x43b40000);
  auVar35 = ZEXT464(0x3d800000);
  local_3a8 = param_1;
  local_390 = param_2;
  do {
    auVar32 = ZEXT464((uint)(*pfVar21 * auVar33._0_4_));
    auVar29 = ZEXT1664(auVar29._0_16_);
    auVar30 = ZEXT464((uint)*pfVar21);
    auVar33 = ZEXT1664(auVar33._0_16_);
    auVar34 = ZEXT1664(auVar34._0_16_);
    auVar35 = ZEXT1664(auVar35._0_16_);
    auVar31._0_8_ = FUN_180637540();
    auVar31._8_56_ = extraout_var;
    auVar31 = ZEXT1664(auVar31._0_16_);
    auVar32._0_8_ = FUN_180638e00(auVar32._0_8_);
    auVar32._8_56_ = extraout_var_00;
    auVar32 = ZEXT1664(auVar32._0_16_);
    iVar18 = 0;
    uVar17 = 0;
    do {
      if (*(char *)(param_2 + 0x9c) != '\0') break;
      local_108 = (int)auVar30._0_4_;
      local_104 = uVar17 >> 4;
      auVar27 = ZEXT464((uint)((float)iVar18 * auVar34._0_4_ * auVar35._0_4_ * auVar33._0_4_));
      auVar29 = ZEXT1664(auVar29._0_16_);
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar31 = ZEXT1664(auVar31._0_16_);
      auVar32 = ZEXT1664(auVar32._0_16_);
      auVar33 = ZEXT1664(auVar33._0_16_);
      auVar34 = ZEXT1664(auVar34._0_16_);
      auVar35 = ZEXT1664(auVar35._0_16_);
      fVar22 = (float)FUN_180637540();
      fVar22 = fVar22 * auVar31._0_4_;
      local_118 = CONCAT44(local_118._4_4_,fVar22);
      fVar23 = (float)FUN_180638e00(auVar27._0_8_);
      fVar23 = fVar23 * auVar31._0_4_;
      fVar24 = auVar29._0_4_;
      local_118 = CONCAT44(fVar23,(undefined4)local_118);
      local_128[0] = '\0';
      local_110 = auVar32._0_4_;
      local_3b0 = fVar24 * local_110 + *(float *)(param_2 + 0x84);
      local_3c8 = local_128;
      local_3b8 = CONCAT44(fVar23 * fVar24 + *(float *)(param_2 + 0x80),
                           fVar22 * fVar24 + *(float *)(param_2 + 0x7c));
      puVar12 = (undefined8 *)FUN_18030bef0(local_248,param_2,(float *)(param_2 + 0x7c),&local_3b8);
      lVar15 = 2;
      puVar13 = local_368;
      do {
        puVar1 = puVar13 + 0x10;
        uVar6 = puVar12[1];
        uVar7 = puVar12[2];
        uVar8 = puVar12[3];
        uVar3 = puVar12[0xe];
        uVar5 = puVar12[0xf];
        puVar2 = puVar12 + 0x10;
        *puVar13 = *puVar12;
        puVar13[1] = uVar6;
        puVar13[2] = uVar7;
        puVar13[3] = uVar8;
        uVar6 = puVar12[5];
        uVar7 = puVar12[6];
        uVar8 = puVar12[7];
        puVar13[4] = puVar12[4];
        puVar13[5] = uVar6;
        puVar13[6] = uVar7;
        puVar13[7] = uVar8;
        uVar6 = puVar12[9];
        uVar7 = puVar12[10];
        uVar8 = puVar12[0xb];
        puVar13[8] = puVar12[8];
        puVar13[9] = uVar6;
        puVar13[10] = uVar7;
        puVar13[0xb] = uVar8;
        uVar6 = puVar12[0xd];
        puVar13[0xc] = puVar12[0xc];
        puVar13[0xd] = uVar6;
        puVar13[0xe] = uVar3;
        puVar13[0xf] = uVar5;
        lVar15 = lVar15 + -1;
        puVar12 = puVar2;
        puVar13 = puVar1;
      } while (lVar15 != 0);
      *puVar1 = *puVar2;
      if (local_128[0] != '\0') {
        auVar30 = ZEXT1664(auVar30._0_16_);
        auVar31 = ZEXT1664(auVar31._0_16_);
        auVar32 = ZEXT1664(auVar32._0_16_);
        auVar33 = ZEXT1664(auVar33._0_16_);
        auVar34 = ZEXT1664(auVar34._0_16_);
        auVar35 = ZEXT1664(auVar35._0_16_);
        FUN_18030d2e0(&local_3a8,local_368,&local_118);
      }
      auVar29 = ZEXT464(local_120[0]);
      iVar18 = iVar18 + 1;
      uVar17 = uVar17 + 0x168;
    } while ((int)uVar17 < 0x1680);
    lVar15 = local_100;
    pfVar21 = pfVar21 + 1;
  } while (pfVar21 != (float *)&DAT_180701d9c);
  auVar34 = ZEXT464(0x3f800000);
  auVar33 = ZEXT1264(ZEXT812(0)) << 0x20;
  if (*(char *)(param_2 + 0x9c) == '\0') {
    fVar22 = auVar29._0_4_ * 0.0;
    local_128[0] = '\0';
    local_110 = -1.0;
    local_3b8 = CONCAT44(fVar22 + *(float *)(param_2 + 0x80),fVar22 + *(float *)(param_2 + 0x7c));
    local_3b0 = *(float *)(param_2 + 0x84) - auVar29._0_4_ * 1.0;
    local_3c8 = local_128;
    local_108 = -0x5a;
    local_118 = 0;
    local_104 = 0;
    auVar33 = ZEXT1264(ZEXT812(0)) << 0x20;
    auVar34 = ZEXT1664(auVar34._0_16_);
    puVar12 = (undefined8 *)FUN_18030bef0(local_248,param_2,(float *)(param_2 + 0x7c),&local_3b8);
    lVar16 = 2;
    puVar13 = local_368;
    do {
      puVar1 = puVar13 + 0x10;
      uVar6 = puVar12[1];
      uVar7 = puVar12[2];
      uVar8 = puVar12[3];
      uVar3 = puVar12[0xe];
      uVar5 = puVar12[0xf];
      puVar2 = puVar12 + 0x10;
      *puVar13 = *puVar12;
      puVar13[1] = uVar6;
      puVar13[2] = uVar7;
      puVar13[3] = uVar8;
      uVar6 = puVar12[5];
      uVar7 = puVar12[6];
      uVar8 = puVar12[7];
      puVar13[4] = puVar12[4];
      puVar13[5] = uVar6;
      puVar13[6] = uVar7;
      puVar13[7] = uVar8;
      uVar6 = puVar12[9];
      uVar7 = puVar12[10];
      uVar8 = puVar12[0xb];
      puVar13[8] = puVar12[8];
      puVar13[9] = uVar6;
      puVar13[10] = uVar7;
      puVar13[0xb] = uVar8;
      uVar6 = puVar12[0xd];
      puVar13[0xc] = puVar12[0xc];
      puVar13[0xd] = uVar6;
      puVar13[0xe] = uVar3;
      puVar13[0xf] = uVar5;
      lVar16 = lVar16 + -1;
      puVar12 = puVar2;
      puVar13 = puVar1;
    } while (lVar16 != 0);
    *puVar1 = *puVar2;
    if (local_128[0] != '\0') {
      auVar33 = ZEXT1664(auVar33._0_16_);
      auVar34 = ZEXT1664(auVar34._0_16_);
      FUN_18030d2e0(&local_3a8,local_368,&local_118);
    }
  }
  uVar3 = *(undefined8 *)(param_2 + 0x7c);
  local_f8 = *(float *)(param_2 + 0x84);
  iVar18 = 0;
  auVar29 = ZEXT464(*(uint *)(param_2 + 0x50));
  local_100._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
  local_100._0_4_ = (float)uVar3;
  fVar22 = *(float *)(param_2 + 0x90);
  local_3b8._4_4_ = (float)((ulonglong)*(undefined8 *)(param_2 + 0x88) >> 0x20);
  auVar35 = ZEXT464((uint)local_3b8._4_4_);
  local_3b8._0_4_ = (float)*(undefined8 *)(param_2 + 0x88);
  auVar31 = ZEXT464((uint)(float)local_3b8);
  local_3b8._4_4_ = local_100._4_4_;
  local_3b8._0_4_ = (float)local_100;
  local_100 = uVar3;
  do {
    if (*(char *)(param_2 + 0x9c) != '\0') goto LAB_18030d261;
    fVar23 = *(float *)(param_2 + 0x54) * *(float *)(param_2 + 0x50);
    fVar22 = fVar22 - fVar23 * *(float *)(param_2 + 0x6c);
    fVar24 = auVar29._0_4_;
    local_3b0 = fVar22 * fVar24 + local_f8;
    local_3b8 = CONCAT44(auVar35._0_4_ * fVar24 + local_3b8._4_4_,
                         auVar31._0_4_ * fVar24 + (float)local_3b8);
    local_3c8 = local_128;
    local_128[0] = '\0';
    fVar22 = fVar22 - (auVar34._0_4_ - *(float *)(param_2 + 0x6c)) * fVar23;
    auVar33 = ZEXT1664(auVar33._0_16_);
    auVar29 = ZEXT1664(auVar29._0_16_);
    auVar34 = ZEXT1664(auVar34._0_16_);
    auVar35 = ZEXT1664(auVar35._0_16_);
    auVar31 = ZEXT1664(auVar31._0_16_);
    puVar12 = (undefined8 *)FUN_18030bef0(local_248,param_2,&local_100,&local_3b8);
    lVar16 = 2;
    puVar13 = local_368;
    do {
      puVar1 = puVar13 + 0x10;
      uVar6 = puVar12[1];
      uVar7 = puVar12[2];
      uVar8 = puVar12[3];
      uVar3 = puVar12[0xe];
      uVar5 = puVar12[0xf];
      puVar2 = puVar12 + 0x10;
      *puVar13 = *puVar12;
      puVar13[1] = uVar6;
      puVar13[2] = uVar7;
      puVar13[3] = uVar8;
      uVar6 = puVar12[5];
      uVar7 = puVar12[6];
      uVar8 = puVar12[7];
      puVar13[4] = puVar12[4];
      puVar13[5] = uVar6;
      puVar13[6] = uVar7;
      puVar13[7] = uVar8;
      uVar6 = puVar12[9];
      uVar7 = puVar12[10];
      uVar8 = puVar12[0xb];
      puVar13[8] = puVar12[8];
      puVar13[9] = uVar6;
      puVar13[10] = uVar7;
      puVar13[0xb] = uVar8;
      uVar6 = puVar12[0xd];
      puVar13[0xc] = puVar12[0xc];
      puVar13[0xd] = uVar6;
      puVar13[0xe] = uVar3;
      puVar13[0xf] = uVar5;
      lVar16 = lVar16 + -1;
      puVar12 = puVar2;
      puVar13 = puVar1;
    } while (lVar16 != 0);
    *puVar1 = *puVar2;
    if (local_128[0] == '\0') goto LAB_18030d261;
    *(int *)(lVar15 + 0x160) = *(int *)(lVar15 + 0x160) + 1;
    if (local_2ad == '\0') {
      auVar33 = ZEXT1664(auVar33._0_16_);
      auVar29 = ZEXT1664(auVar29._0_16_);
      auVar34 = ZEXT1664(auVar34._0_16_);
      auVar35 = ZEXT1664(auVar35._0_16_);
      auVar31 = ZEXT1664(auVar31._0_16_);
      fVar23 = local_2bc;
      sVar11 = thunk_FUN_180624430();
      if (((sVar11 < 1) && (auVar33._0_4_ <= fVar23)) && (fVar23 < auVar34._0_4_)) {
        auVar32 = ZEXT464(local_2d8);
        sVar11 = thunk_FUN_180624430(local_2d8);
        if (sVar11 < 1) {
          auVar30 = ZEXT464(local_2d4);
          sVar11 = thunk_FUN_180624430(local_2d4);
          if (sVar11 < 1) {
            auVar27 = ZEXT464(local_2d0);
            sVar11 = thunk_FUN_180624430(local_2d0);
            if (sVar11 < 1) {
              fVar22 = auVar32._0_4_ * auVar32._0_4_ + auVar30._0_4_ * auVar30._0_4_ +
                       auVar27._0_4_ * auVar27._0_4_;
              if (fVar22 < 0.0) {
                auVar29._0_8_ = FUN_18061e150(fVar22);
                auVar29._8_56_ = extraout_var_01;
                auVar25 = auVar29._0_16_;
              }
              else {
                auVar25 = ZEXT416((uint)SQRT(fVar22));
              }
              auVar29 = ZEXT1664(auVar25);
              sVar11 = thunk_FUN_180624430(auVar25._0_8_);
              local_110 = auVar34._0_4_;
              if ((0 < sVar11) || (fVar22 = auVar29._0_4_, fVar22 < 1e-06)) {
                auVar26 = auVar33._0_16_;
                auVar25 = auVar26;
              }
              else {
                auVar26._0_4_ = auVar32._0_4_ / fVar22;
                auVar26._4_12_ = auVar32._4_12_;
                auVar25._0_4_ = auVar30._0_4_ / fVar22;
                auVar25._4_12_ = auVar30._4_12_;
                local_110 = auVar27._0_4_ / fVar22;
              }
              auVar25 = vunpcklps_avx(auVar26,auVar25);
              local_118 = auVar25._0_8_;
              local_3c8 = (char *)CONCAT44(local_3c8._4_4_,local_120[0]);
              puVar12 = (undefined8 *)FUN_18030c180(local_368,param_2,param_2 + 0x7c,&local_118);
              pcVar9 = local_248;
              do {
                pcVar14 = pcVar9;
                puVar13 = puVar12;
                uVar6 = puVar13[1];
                uVar7 = puVar13[2];
                uVar8 = puVar13[3];
                uVar3 = puVar13[0xe];
                uVar5 = puVar13[0xf];
                *(undefined8 *)pcVar14 = *puVar13;
                *(undefined8 *)(pcVar14 + 8) = uVar6;
                *(undefined8 *)(pcVar14 + 0x10) = uVar7;
                *(undefined8 *)(pcVar14 + 0x18) = uVar8;
                uVar6 = puVar13[5];
                uVar7 = puVar13[6];
                uVar8 = puVar13[7];
                *(undefined8 *)(pcVar14 + 0x20) = puVar13[4];
                *(undefined8 *)(pcVar14 + 0x28) = uVar6;
                *(undefined8 *)(pcVar14 + 0x30) = uVar7;
                *(undefined8 *)(pcVar14 + 0x38) = uVar8;
                uVar6 = puVar13[9];
                uVar7 = puVar13[10];
                uVar8 = puVar13[0xb];
                *(undefined8 *)(pcVar14 + 0x40) = puVar13[8];
                *(undefined8 *)(pcVar14 + 0x48) = uVar6;
                *(undefined8 *)(pcVar14 + 0x50) = uVar7;
                *(undefined8 *)(pcVar14 + 0x58) = uVar8;
                uVar6 = puVar13[0xd];
                *(undefined8 *)(pcVar14 + 0x60) = puVar13[0xc];
                *(undefined8 *)(pcVar14 + 0x68) = uVar6;
                *(undefined8 *)(pcVar14 + 0x70) = uVar3;
                *(undefined8 *)(pcVar14 + 0x78) = uVar5;
                fVar22 = local_110;
                lVar20 = lVar20 + -1;
                puVar12 = puVar13 + 0x10;
                pcVar9 = pcVar14 + 0x80;
              } while (lVar20 != 0);
              uVar5 = puVar13[0x10];
              uVar6 = puVar13[0x11];
              uVar3 = puVar13[0x12];
              uVar19 = 0x42;
              *(int *)(lVar15 + 0x164) = *(int *)(lVar15 + 0x164) + 1;
              *(undefined8 *)(pcVar14 + 0x80) = uVar5;
              *(undefined8 *)(pcVar14 + 0x88) = uVar6;
              *(undefined8 *)(pcVar14 + 0x90) = uVar3;
              fVar28 = auVar33._0_4_;
              fVar24 = fVar28;
              if (local_248[0] != '\0') {
                auVar29 = ZEXT1664(auVar33._0_16_);
                cVar10 = FUN_180308330(&local_118,param_2 + 0x50);
                if (cVar10 == '\x03') {
                  auVar33._0_8_ = FUN_18030c4c0(&local_118,local_f0[0]);
                  auVar33._8_56_ = extraout_var_02;
                  fVar24 = (float)auVar33._0_8_;
                  local_388 = (uint *)0x3f800000;
                  puStack_380 = (undefined4 *)0x0;
                  local_3a8 = CONCAT71(local_3a8._1_7_,1);
                  local_378 = (float *)CONCAT71(local_378._1_7_,local_e8[0] < fVar24);
                  local_3a8 = CONCAT44((undefined4)local_118,(undefined4)local_3a8);
                  local_3a0 = (int *)CONCAT44(local_110,local_118._4_4_);
                  local_398 = (uint *)CONCAT44(fVar24,fStack_244);
                  auVar33 = ZEXT1664(auVar33._0_16_);
                  if (local_e8[0] < fVar24) {
                    *(undefined1 *)(lVar15 + 0x676) = 1;
                  }
                  auVar25 = vpcmpeqd_avx(ZEXT116(local_e8[0] < fVar24),SUB6416(ZEXT464(0),0));
                  auVar25 = vblendvps_avx(SUB6416(ZEXT464(0x41c80000),0),auVar29._0_16_,auVar25);
                  local_390 = CONCAT44(1,fVar24 * 0.05 + fStack_244 + (float)iVar18 * 0.1 +
                                         auVar25._0_4_);
                  FUN_18030c6e0(lVar15,&local_3a8);
                  fVar28 = auVar33._0_4_;
                  uVar19 = 0x42;
                  fVar24 = fStack_244;
                }
                else {
                  uVar19 = 0x42;
                  fVar28 = auVar29._0_4_;
                  fVar24 = fStack_244;
                  if (cVar10 == '\x01') {
                    *(undefined1 *)(lVar15 + 0x674) = 1;
                    uVar19 = 0x62;
                  }
                }
              }
              iVar4 = *(int *)(lVar15 + 0x670);
              lVar20 = (longlong)iVar4;
              if (iVar4 < 0x40) {
                *(int *)(lVar15 + 0x670) = iVar4 + 1;
                *(undefined1 *)(lVar15 + 0x170 + lVar20 * 0x14) = uVar19;
                *(char *)(lVar15 + 0x171 + lVar20 * 0x14) = (char)iVar18;
                *(undefined2 *)(lVar15 + 0x172 + lVar20 * 0x14) = 0;
                *(float *)(lVar15 + 0x174 + lVar20 * 0x14) = fVar23;
                *(float *)(lVar15 + 0x178 + lVar20 * 0x14) = fVar22;
                *(float *)(lVar15 + 0x17c + lVar20 * 0x14) = fVar24;
                *(float *)(lVar15 + 0x180 + lVar20 * 0x14) = fVar28;
              }
LAB_18030d261:
              *(undefined4 *)(lVar15 + 0x16c) = *(undefined4 *)(param_2 + 0x94);
            }
          }
        }
      }
    }
    iVar18 = iVar18 + 1;
    local_100 = local_3b8;
    local_f8 = local_3b0;
    if (9 < iVar18) goto LAB_18030d261;
  } while( true );
}



