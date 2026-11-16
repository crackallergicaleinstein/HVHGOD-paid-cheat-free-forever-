// FUN_180253240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180253240 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180253240(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                  float param_5,float param_6,float param_7,float param_8,char param_9,uint param_10
                  ,uint param_11,float param_12,float param_13,float param_14)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  undefined1 auVar5 [64];
  float fVar6;
  undefined1 auVar7 [64];
  float fVar8;
  undefined8 uVar9;
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [64];
  undefined1 auStack_188 [32];
  float local_168;
  float local_160;
  undefined4 local_158;
  float local_148 [2];
  float local_140 [2];
  float local_138 [2];
  float local_130 [2];
  float local_128 [6];
  float local_110 [6];
  float local_f8 [2];
  float *local_f0;
  undefined4 *local_e8;
  undefined8 local_e0;
  undefined4 *local_d8;
  undefined4 *local_d0;
  float local_c8 [2];
  ulonglong local_c0;
  
  local_c0 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  fVar13 = 10.0;
  fVar4 = 0.5;
  local_148[0] = 10.0;
  local_c8[0] = 0.5;
  local_138[0] = param_5;
  sVar1 = thunk_FUN_180624430(param_5);
  auVar5 = ZEXT464(0x3f800000);
  if (sVar1 < 1) {
    pfVar3 = local_c8;
    if (fVar4 <= param_5) {
      pfVar3 = local_138;
    }
    pfVar2 = local_148;
    if (param_5 <= fVar13) {
      pfVar2 = pfVar3;
    }
    local_148[0] = *pfVar2;
  }
  else {
    local_148[0] = 1.0;
  }
  fVar11 = 20.0;
  fVar13 = 0.0;
  local_140[0] = 20.0;
  local_c8[0] = 0.0;
  local_138[0] = param_6;
  sVar1 = thunk_FUN_180624430(param_6);
  fVar6 = 4.0;
  if (sVar1 < 1) {
    pfVar3 = local_c8;
    if (fVar13 <= param_6) {
      pfVar3 = local_138;
    }
    pfVar2 = local_140;
    if (param_6 <= fVar11) {
      pfVar2 = pfVar3;
    }
    local_138[0] = *pfVar2;
  }
  else {
    local_138[0] = 4.0;
  }
  fVar11 = 6.0;
  local_130[0] = 6.0;
  local_c8[0] = param_7;
  local_140[0] = fVar4;
  sVar1 = thunk_FUN_180624430(param_7);
  if (sVar1 < 1) {
    pfVar3 = local_140;
    if (fVar4 <= param_7) {
      pfVar3 = local_c8;
    }
    pfVar2 = local_130;
    if (param_7 <= fVar11) {
      pfVar2 = pfVar3;
    }
    auVar14 = ZEXT464((uint)*pfVar2);
  }
  else {
    auVar14 = ZEXT1664(auVar5._0_16_);
  }
  local_128[2] = param_8;
  fVar11 = param_8;
  local_128[0] = fVar13;
  local_128[4] = fVar6;
  sVar1 = thunk_FUN_180624430(param_8);
  if (sVar1 < 1) {
    pfVar3 = local_128;
    if (fVar13 <= fVar11) {
      pfVar3 = local_128 + 2;
    }
    pfVar2 = local_128 + 4;
    if (fVar11 <= fVar6) {
      pfVar2 = pfVar3;
    }
    auVar12 = ZEXT464((uint)*pfVar2);
  }
  else {
    auVar12 = ZEXT1664(auVar5._0_16_);
  }
  fVar8 = 8.0;
  fVar11 = 0.01;
  local_110[4] = 8.0;
  local_110[0] = 0.01;
  local_110[2] = param_12;
  fVar6 = param_12;
  sVar1 = thunk_FUN_180624430(param_12);
  if (sVar1 < 1) {
    pfVar3 = local_110;
    if (fVar11 <= fVar6) {
      pfVar3 = local_110 + 2;
    }
    pfVar2 = local_110 + 4;
    if (fVar6 <= fVar8) {
      pfVar2 = pfVar3;
    }
    auVar7 = ZEXT464((uint)*pfVar2);
  }
  else {
    auVar7 = ZEXT1664(auVar5._0_16_);
  }
  fVar6 = auVar7._0_4_;
  auVar10 = ZEXT464((uint)(fVar6 * local_148[0]));
  local_148[0] = fVar6 * auVar14._0_4_;
  fVar6 = fVar6 * auVar12._0_4_;
  local_140[0] = param_13;
  fVar11 = param_13;
  param_8 = fVar6;
  local_130[0] = fVar13;
  local_c8[0] = fVar8;
  sVar1 = thunk_FUN_180624430(param_13);
  if (sVar1 < 1) {
    pfVar3 = local_130;
    if (fVar13 <= fVar11) {
      pfVar3 = local_140;
    }
    pfVar2 = local_c8;
    if (fVar11 <= fVar8) {
      pfVar2 = pfVar3;
    }
    fVar11 = *pfVar2;
  }
  else {
    fVar11 = 0.0;
  }
  fVar11 = fVar11 * auVar7._0_4_;
  local_f8[0] = auVar5._0_4_;
  local_140[0] = param_14;
  fVar8 = param_14;
  local_130[0] = fVar13;
  local_c8[0] = fVar11;
  sVar1 = thunk_FUN_180624430(param_14);
  uVar9 = auVar10._0_8_;
  if (sVar1 < 1) {
    pfVar3 = local_130;
    if (fVar13 <= fVar8) {
      pfVar3 = local_140;
    }
    pfVar2 = local_f8;
    if (fVar8 <= auVar5._0_4_) {
      pfVar2 = pfVar3;
    }
    fVar8 = *pfVar2;
  }
  else {
    fVar8 = 0.0;
  }
  param_10 = CONCAT13((char)(int)((float)(param_10 >> 0x18) * fVar8),(undefined3)param_10);
  param_11 = CONCAT13((char)(int)((float)(param_11 >> 0x18) * fVar8),(undefined3)param_11);
  local_f0 = local_c8;
  local_e8 = &param_8;
  local_d8 = &param_11;
  local_d0 = &param_10;
  fVar8 = auVar10._0_4_;
  local_e0 = param_1;
  if (param_4 == 1) {
    auVar14 = ZEXT464((uint)local_148[0]);
    fVar11 = auVar7._0_4_ * local_138[0];
    fVar4 = local_148[0] * fVar4;
    fVar13 = (float)param_3 - fVar4;
    auVar5 = ZEXT464((uint)fVar13);
    local_168 = local_148[0];
    FUN_1802537c0(&local_f0,((float)param_2 - fVar11) - fVar8,fVar13,uVar9);
    fVar6 = (float)param_3;
    fVar13 = (float)param_2;
    local_168 = auVar14._0_4_;
    FUN_1802537c0(&local_f0,fVar13 + fVar11,auVar5._0_8_,auVar10._0_8_);
    auVar5 = ZEXT464((uint)(fVar13 - fVar4));
    local_168 = auVar10._0_4_;
    FUN_1802537c0(&local_f0,fVar13 - fVar4,(fVar6 - fVar11) - local_168,auVar14._0_8_);
    local_168 = auVar10._0_4_;
    FUN_1802537c0(&local_f0,auVar5._0_8_,fVar6 + fVar11,auVar14._0_8_);
    fVar4 = auVar7._0_4_;
  }
  else if (param_4 == 2) {
    fVar4 = local_148[0];
    if (fVar13 < fVar6) {
      local_160 = fVar6 + fVar6 + local_148[0] + fVar11 + fVar11;
      local_158 = 0x20;
      local_168 = (float)param_11;
      FUN_180433240(param_1,param_2,param_3,uVar9);
      uVar9 = auVar10._0_8_;
      fVar11 = local_c8[0];
    }
    local_160 = fVar11 * 2.0 + fVar4;
    local_158 = 0x20;
    local_168 = (float)param_10;
    FUN_180433240(param_1,param_2,param_3,uVar9);
    fVar13 = (float)param_2;
    fVar6 = (float)param_3;
    fVar4 = auVar7._0_4_;
  }
  else {
    local_168 = fVar8 + fVar8;
    FUN_1802537c0(&local_f0,(float)param_2 - fVar8,(float)param_3 - fVar8);
    fVar13 = (float)param_2;
    fVar6 = (float)param_3;
    fVar4 = auVar7._0_4_;
    if (1 < param_4 - 1U) {
    }
  }
  if (param_9 != '\0') {
    local_168 = fVar4 + fVar4;
    FUN_1802537c0(&local_f0,fVar13 - fVar4,fVar6 - fVar4);
  }
}



