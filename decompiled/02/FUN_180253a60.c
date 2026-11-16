// FUN_180253a60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180253a60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180253a60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,float param_8,
                  undefined1 param_9,undefined4 param_10,undefined4 param_11,char *param_12,
                  undefined4 param_13)

{
  char *pcVar1;
  short sVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auVar10 [64];
  float fVar11;
  undefined8 uVar12;
  undefined1 auVar13 [64];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  float local_1d0;
  undefined1 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  float local_198 [6];
  float local_180 [6];
  float local_168 [6];
  float local_150 [6];
  float local_138 [6];
  undefined8 local_120;
  undefined4 *local_118;
  undefined4 *local_110;
  undefined4 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined4 *local_e8;
  undefined4 *local_e0;
  undefined4 *local_d8;
  undefined4 *local_d0;
  undefined4 *local_c8;
  longlong local_c0;
  undefined4 local_b8;
  undefined4 local_b0 [2];
  undefined4 local_a8 [2];
  undefined4 local_a0 [2];
  ulonglong local_98;
  
  pcVar1 = param_12;
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  local_b0[0] = (undefined4)param_2;
  local_a8[0] = (undefined4)param_3;
  auVar10 = ZEXT464(0x3f800000);
  auVar13 = ZEXT864(0);
  local_a0[0] = param_4;
  if (*param_12 == '\0') {
LAB_180253b2b:
    if (pcVar1[1] == '\0') {
LAB_180253e67:
      local_1a0 = auVar10._0_4_;
      local_1a8 = auVar13._0_4_;
      local_1b0 = param_13;
      local_1b8 = param_11;
      local_1c0 = param_10;
      local_1c8 = param_9;
      local_1d0 = param_8;
      local_1d8 = param_7;
      local_1e0 = param_6;
      local_1e8 = param_5;
      FUN_180253240(param_1,param_2,param_3,param_4);
    }
    local_180[4] = auVar10._0_4_;
    local_180[0] = auVar13._0_4_;
    fVar7 = *(float *)(pcVar1 + 8);
    local_180[2] = fVar7;
    sVar2 = thunk_FUN_180624430(fVar7);
    if (sVar2 < 1) {
      pfVar4 = local_180;
      if (auVar13._0_4_ <= fVar7) {
        pfVar4 = local_180 + 2;
      }
      pfVar3 = local_180 + 4;
      if (fVar7 <= auVar10._0_4_) {
        pfVar3 = pfVar4;
      }
      if (*pfVar3 <= auVar13._0_4_) goto LAB_180253e67;
    }
  }
  else {
    local_198[4] = 1.0;
    local_198[0] = 0.0;
    fVar7 = *(float *)(param_12 + 4);
    local_198[2] = fVar7;
    sVar2 = thunk_FUN_180624430(fVar7);
    if (sVar2 < 1) {
      pfVar4 = local_198;
      if (auVar13._0_4_ <= fVar7) {
        pfVar4 = local_198 + 2;
      }
      pfVar3 = local_198 + 4;
      if (fVar7 <= auVar10._0_4_) {
        pfVar3 = pfVar4;
      }
      if (*pfVar3 <= auVar13._0_4_) goto LAB_180253b2b;
    }
  }
  FUN_1802538a0(&local_c0,param_1,pcVar1,param_13);
  fVar14 = 4.0;
  local_168[4] = 4.0;
  local_168[0] = auVar13._0_4_;
  local_168[2] = param_8;
  fVar7 = param_8;
  sVar2 = thunk_FUN_180624430(param_8);
  iVar5 = 8;
  fVar15 = 0.125;
  fVar16 = 0.8;
  fVar11 = auVar13._0_4_;
  local_120 = param_1;
  if (sVar2 < 1) {
    pfVar4 = local_168;
    if (fVar11 <= fVar7) {
      pfVar4 = local_168 + 2;
    }
    pfVar3 = local_168 + 4;
    if (fVar7 <= fVar14) {
      pfVar3 = pfVar4;
    }
    if (*pfVar3 <= fVar11) goto LAB_180253d32;
  }
  local_118 = local_b0;
  local_110 = local_a8;
  local_108 = local_a0;
  local_100 = &param_5;
  local_f8 = &param_6;
  local_f0 = &param_7;
  local_e8 = &param_8;
  local_e0 = (undefined4 *)&param_9;
  local_d8 = &param_10;
  local_d0 = &param_11;
  local_c8 = &param_13;
  if (pcVar1[1] != '\0') {
    local_150[4] = auVar10._0_4_;
    fVar7 = *(float *)(pcVar1 + 8);
    local_150[0] = fVar11;
    local_150[2] = fVar7;
    sVar2 = thunk_FUN_180624430(fVar7);
    fVar11 = auVar10._0_4_;
    if (sVar2 < 1) {
      pfVar4 = local_150;
      if (auVar13._0_4_ <= fVar7) {
        pfVar4 = local_150 + 2;
      }
      pfVar3 = local_150 + 4;
      if (fVar7 <= fVar11) {
        pfVar3 = pfVar4;
      }
      fVar11 = *pfVar3;
    }
    if (auVar13._0_4_ < fVar11) {
      iVar6 = 8;
      fVar14 = fVar11 * 0.08;
      fVar7 = fVar11 * 6.0 + 2.0;
      do {
        FUN_180253f30(&local_120,fVar7 * (float)iVar6 * fVar15,
                      (auVar10._0_4_ - (float)iVar6 * fVar15 * fVar16) * fVar14);
        iVar6 = iVar6 + -1;
      } while (0 < iVar6);
    }
  }
  FUN_180253f30(&local_120,auVar13._0_8_,auVar10._0_8_);
LAB_180253d32:
  uVar12 = auVar13._0_8_;
  uVar9 = auVar10._0_8_;
  local_118 = local_b0;
  local_110 = local_a8;
  local_108 = local_a0;
  local_100 = &param_5;
  local_f8 = &param_6;
  local_f0 = &param_7;
  local_e8 = (undefined4 *)&param_9;
  local_e0 = &param_10;
  local_d8 = &param_11;
  local_d0 = &param_13;
  local_120 = param_1;
  if (pcVar1[1] != '\0') {
    local_138[4] = auVar10._0_4_;
    local_138[0] = auVar13._0_4_;
    fVar7 = *(float *)(pcVar1 + 8);
    local_138[2] = fVar7;
    sVar2 = thunk_FUN_180624430(fVar7);
    uVar12 = auVar13._0_8_;
    uVar9 = auVar10._0_8_;
    uVar8 = uVar9;
    if (sVar2 < 1) {
      pfVar4 = local_138;
      if (auVar13._0_4_ <= fVar7) {
        pfVar4 = local_138 + 2;
      }
      pfVar3 = local_138 + 4;
      if (fVar7 <= auVar10._0_4_) {
        pfVar3 = pfVar4;
      }
      uVar8 = (ulonglong)(uint)*pfVar3;
    }
    fVar7 = (float)uVar8;
    if (auVar13._0_4_ < fVar7) {
      fVar11 = fVar7 * 0.08;
      fVar7 = fVar7 * 6.0 + 2.0;
      do {
        FUN_180254020(&local_120,fVar7 * (float)iVar5 * fVar15,
                      (auVar10._0_4_ - (float)iVar5 * fVar15 * fVar16) * fVar11);
        uVar12 = auVar13._0_8_;
        uVar9 = auVar10._0_8_;
        iVar5 = iVar5 + -1;
      } while (0 < iVar5);
    }
  }
  FUN_180254020(&local_120,uVar12,uVar9);
  *(undefined4 *)(local_c0 + 0x90) = local_b8;
}



