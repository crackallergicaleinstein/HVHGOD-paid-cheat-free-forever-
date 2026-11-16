// FUN_1802bb070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bb070 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bb070(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,float param_6,float param_7,undefined1 param_8,uint *param_9,
                  float param_10,float param_11)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint *puVar3;
  short sVar4;
  float *pfVar5;
  float *pfVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  float fVar20;
  undefined1 auVar21 [64];
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  float fVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined4 local_res10 [2];
  undefined4 local_res18 [4];
  undefined1 auStack_218 [32];
  float local_1f8 [6];
  float local_1e0 [6];
  float local_1c8 [6];
  float local_1b0 [6];
  float *local_198;
  undefined4 *local_190;
  float *local_188;
  undefined4 *local_180;
  undefined4 *local_178;
  float *local_170;
  undefined1 *local_168;
  undefined8 local_160;
  float *local_158;
  undefined4 *local_150;
  uint *local_148;
  undefined4 *local_140;
  undefined1 *local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108 [4];
  undefined1 local_f8 [8];
  float local_f0 [2];
  float local_e8 [2];
  ulonglong local_e0;
  
  puVar3 = param_9;
  local_res18[0] = in_ZMM2._0_4_;
  local_res10[0] = (undefined4)param_2;
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_218;
  auVar15 = ZEXT1664(in_ZMM3._0_16_);
  auVar18 = ZEXT1664(in_ZMM2._0_16_);
  sVar4 = thunk_FUN_180624430(param_2);
  if (0 < sVar4) {
  }
  sVar4 = thunk_FUN_180624430(auVar18._0_8_);
  if (0 < sVar4) {
  }
  fVar12 = 500.0;
  auVar18 = ZEXT864(0);
  local_1f8[4] = 500.0;
  local_1f8[0] = 0.0;
  local_1f8[2] = auVar15._0_4_;
  sVar4 = thunk_FUN_180624430(auVar15._0_8_);
  local_f0[0] = auVar18._0_4_;
  if (sVar4 < 1) {
    pfVar6 = local_1f8;
    if (local_f0[0] <= auVar15._0_4_) {
      pfVar6 = local_1f8 + 2;
    }
    pfVar5 = local_1f8 + 4;
    if (auVar15._0_4_ <= fVar12) {
      pfVar5 = pfVar6;
    }
    fVar12 = *pfVar5;
  }
  else {
    fVar12 = 0.0;
  }
  fVar17 = 2048.0;
  local_108[0] = 2048.0;
  local_108[2] = param_5;
  fVar13 = param_5;
  sVar4 = thunk_FUN_180624430(param_5);
  fVar20 = 8.0;
  if (sVar4 < 1) {
    pfVar6 = local_f0;
    if (auVar18._0_4_ <= fVar13) {
      pfVar6 = local_108 + 2;
    }
    pfVar5 = local_108;
    if (fVar13 <= fVar17) {
      pfVar5 = pfVar6;
    }
    fVar13 = *pfVar5;
  }
  else {
    fVar13 = 8.0;
  }
  fVar14 = 6.0;
  fVar17 = 0.5;
  local_108[0] = 6.0;
  local_f0[0] = 0.5;
  local_108[2] = param_6;
  sVar4 = thunk_FUN_180624430(param_6);
  if (sVar4 < 1) {
    pfVar6 = local_f0;
    if (fVar17 <= param_6) {
      pfVar6 = local_108 + 2;
    }
    pfVar5 = local_108;
    if (param_6 <= fVar14) {
      pfVar5 = pfVar6;
    }
    fVar17 = *pfVar5;
  }
  auVar15 = ZEXT464(0x3f800000);
  local_1e0[4] = 1.0;
  local_1e0[0] = auVar18._0_4_;
  local_1e0[2] = param_7;
  param_6 = fVar17;
  sVar4 = thunk_FUN_180624430(param_7);
  if (sVar4 < 1) {
    pfVar6 = local_1e0;
    if (auVar18._0_4_ <= param_7) {
      pfVar6 = local_1e0 + 2;
    }
    pfVar5 = local_1e0 + 4;
    if (param_7 <= auVar15._0_4_) {
      pfVar5 = pfVar6;
    }
    param_7 = *pfVar5;
  }
  else {
    param_7 = 0.0;
  }
  fVar14 = 0.01;
  if (fVar12 < 0.01) {
  }
  if (param_7 <= auVar18._0_4_) {
  }
  uVar7 = *puVar3;
  if (uVar7 < 4) {
    if (uVar7 != 0) {
      lVar10 = (ulonglong)(uVar7 == 3) + 2;
      goto LAB_1802bb301;
    }
  }
  else {
    uVar7 = 0;
  }
  lVar10 = 4;
LAB_1802bb301:
  uVar1 = puVar3[1];
  local_f8[0] = uVar1 == 2;
  local_1c8[0] = 0.01;
  local_1c8[2] = param_10;
  fVar11 = param_10;
  local_1c8[4] = fVar20;
  sVar4 = thunk_FUN_180624430(param_10);
  if (sVar4 < 1) {
    pfVar6 = local_1c8;
    if (fVar14 <= fVar11) {
      pfVar6 = local_1c8 + 2;
    }
    pfVar5 = local_1c8 + 4;
    if (fVar11 <= fVar20) {
      pfVar5 = pfVar6;
    }
    auVar16 = ZEXT464((uint)*pfVar5);
  }
  else {
    auVar16 = ZEXT1664(auVar15._0_16_);
  }
  fVar14 = (float)puVar3[3];
  fVar22 = 32.0;
  fVar25 = 2.0;
  local_1b0[4] = 32.0;
  local_1b0[0] = 2.0;
  local_1b0[2] = fVar14;
  sVar4 = thunk_FUN_180624430(fVar14);
  fVar11 = fVar20;
  if (sVar4 < 1) {
    pfVar6 = local_1b0;
    if (fVar25 <= fVar14) {
      pfVar6 = local_1b0 + 2;
    }
    pfVar5 = local_1b0 + 4;
    if (fVar14 <= fVar22) {
      pfVar5 = pfVar6;
    }
    fVar11 = *pfVar5;
  }
  fVar14 = auVar16._0_4_;
  fVar11 = fVar11 * fVar14;
  param_5 = fVar14 * fVar13;
  local_f0[0] = fVar14 * fVar12;
  auVar19 = ZEXT464((uint)local_f0[0]);
  if (fVar14 != auVar15._0_4_) {
    auVar2 = vmaxss_avx(ZEXT416((uint)(fVar14 * fVar17)),ZEXT416(0x3f400000));
    param_6 = auVar2._0_4_;
  }
  local_108[2] = auVar18._0_4_;
  local_108[0] = param_11;
  fVar12 = param_11;
  local_e8[0] = fVar20;
  sVar4 = thunk_FUN_180624430(param_11);
  if (sVar4 < 1) {
    pfVar6 = local_108 + 2;
    if (auVar18._0_4_ <= fVar12) {
      pfVar6 = local_108;
    }
    pfVar5 = local_e8;
    if (fVar12 <= fVar20) {
      pfVar5 = pfVar6;
    }
    fVar12 = *pfVar5;
  }
  else {
    fVar12 = 0.0;
  }
  uVar23 = 0x3f800000bf800000;
  uVar24 = 0;
  uVar26 = 0;
  uVar27 = 0x3f800000bf800000;
  fVar13 = 3.1415927;
  auVar21 = ZEXT464(0xbf800000);
  local_e8[0] = fVar12 * auVar16._0_4_;
  uVar8 = 0;
  lVar9 = 0;
  do {
    local_108[0] = auVar18._0_4_;
    local_108[2] = auVar18._0_4_;
    if (uVar7 == 3) {
      fVar12 = ((float)(int)uVar8 * fVar13 + (float)(int)uVar8 * fVar13) / 3.0 - 1.5707964;
      auVar16 = ZEXT464((uint)fVar12);
      local_108[0] = (float)FUN_180637540(fVar12);
      local_108[2] = (float)FUN_180638e00(auVar16._0_8_);
    }
    else if (uVar7 == 1) {
      auVar2 = vpcmpeqd_avx(ZEXT416(uVar8),SUB6416(ZEXT464(0),0));
      auVar2 = vblendvps_avx(auVar15._0_16_,auVar21._0_16_,auVar2);
      local_108[0] = auVar2._0_4_;
    }
    else if (uVar7 == 2) {
      auVar2 = vpcmpeqd_avx(ZEXT416(uVar8),SUB6416(ZEXT464(0),0));
      auVar2 = vblendvps_avx(auVar15._0_16_,auVar21._0_16_,auVar2);
      local_108[2] = auVar2._0_4_;
    }
    else {
      local_128 = uVar26;
      uStack_120 = uVar27;
      local_108[0] = local_108[lVar9 + -8];
      local_118 = uVar23;
      uStack_110 = uVar24;
      local_108[2] = local_108[lVar9 + -4];
    }
    local_198 = local_e8;
    local_190 = local_res10;
    local_188 = local_108;
    local_180 = &param_5;
    local_178 = local_res18;
    local_170 = local_108 + 2;
    local_168 = local_f8;
    local_158 = local_f0;
    local_150 = &param_6;
    local_140 = &param_7;
    local_138 = &param_8;
    local_148 = puVar3;
    local_160 = param_1;
    if (uVar1 == 1) {
      auVar16 = ZEXT1664(auVar18._0_16_);
      if (auVar18._0_4_ < auVar19._0_4_) {
        fVar12 = fVar11 + fVar11;
        do {
          auVar2 = vminss_avx(auVar19._0_16_,ZEXT416((uint)(auVar16._0_4_ + fVar11)));
          FUN_1802bb6a0(&local_198,auVar16._0_8_,auVar2._0_8_);
          auVar19 = ZEXT464((uint)local_f0[0]);
          fVar17 = auVar16._0_4_ + fVar12;
          auVar16 = ZEXT464((uint)fVar17);
        } while (fVar17 < local_f0[0]);
      }
    }
    else {
      FUN_1802bb6a0(&local_198,auVar18._0_8_,auVar19._0_8_);
      auVar19 = ZEXT464((uint)local_f0[0]);
    }
    uVar8 = uVar8 + 1;
    lVar9 = lVar9 + 1;
  } while (lVar9 < lVar10);
}



