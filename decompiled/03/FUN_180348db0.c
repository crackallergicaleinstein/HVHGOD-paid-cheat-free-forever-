// FUN_180348db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180348db0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180348db0(undefined8 *param_1,float *param_2,int param_3,float param_4,int param_5,
                  int param_6,float param_7,int param_8)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  short sVar4;
  undefined8 *puVar5;
  float *pfVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_338 [32];
  undefined8 *local_318;
  undefined8 local_310;
  int local_308;
  undefined4 local_300;
  undefined4 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e0;
  int local_2d8;
  undefined4 local_2d0;
  undefined4 local_2c8;
  int local_2c0;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  int local_298;
  undefined8 local_288;
  undefined4 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined1 auStack_260 [8];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [176];
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  int local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_338;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  *param_2 = param_4;
  pcVar2 = (char *)*param_1;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  if ((*pcVar2 == '\0') && (0 < param_8)) {
  }
  fVar7 = (param_4 + *(float *)param_1[1]) - *(float *)param_1[2];
  auVar11 = ZEXT464((uint)fVar7);
  local_298 = param_3;
  sVar4 = thunk_FUN_180624430(fVar7);
  auVar10 = ZEXT464(0x43b40000);
  uVar9 = 0;
  if (sVar4 < 1) {
    fVar7 = (float)FUN_180615070(auVar11._0_8_,auVar10._0_8_);
  }
  else {
    fVar7 = 0.0;
  }
  if (*(float *)param_1[3] < ABS(fVar7)) {
  }
  if (param_8 != 0) {
    fVar7 = (param_7 + *(float *)param_1[1]) - *(float *)param_1[2];
    auVar11 = ZEXT464((uint)fVar7);
    sVar4 = thunk_FUN_180624430(fVar7);
    if (sVar4 < 1) {
      fVar7 = (float)FUN_180615070(auVar11._0_8_,auVar10._0_8_);
    }
    else {
      fVar7 = 0.0;
    }
    if (*(float *)param_1[3] < ABS(fVar7)) {
    }
  }
  if (*(char *)param_1[4] == '\0') {
    if (0.001 < ABS(param_4)) {
    }
    if (0 < param_8) {
    }
  }
  iVar1 = *(int *)param_1[5];
  if (iVar1 < 1) {
  }
  if (param_6 < 1) {
  }
  if (DAT_180bbec89 != '\0') {
  }
  *(int *)param_1[5] = iVar1 + -1;
  auVar11 = ZEXT464((uint)(param_7 + *(float *)param_1[1]));
  sVar4 = thunk_FUN_180624430(param_7 + *(float *)param_1[1]);
  if (sVar4 < 1) {
    uVar8 = FUN_180615070(auVar11._0_8_);
  }
  else {
    uVar8 = 0;
  }
  uVar12 = *(undefined4 *)param_1[0xe];
  uVar13 = *(undefined4 *)param_1[0xd];
  uVar14 = *(undefined4 *)param_1[0xc];
  uVar15 = *(undefined4 *)param_1[0xb];
  auVar11 = ZEXT464((uint)(param_4 + *(float *)param_1[1]));
  sVar4 = thunk_FUN_180624430(param_4 + *(float *)param_1[1]);
  if (sVar4 < 1) {
    local_308 = FUN_180615070(auVar11._0_8_,auVar10._0_8_);
  }
  else {
    local_308 = 0;
  }
  local_288 = *(undefined8 *)param_1[7];
  local_280 = *(undefined4 *)((undefined8 *)param_1[7] + 1);
  local_2d8 = param_8;
  local_2b8 = *(undefined8 *)param_1[6];
  uStack_2b0 = *(undefined4 *)((undefined8 *)param_1[6] + 1);
  local_310 = CONCAT44(local_310._4_4_,*(undefined4 *)param_1[10]);
  local_300 = uVar15;
  local_2f8 = uVar14;
  local_2f0 = uVar13;
  local_2e8 = uVar12;
  local_2e0 = uVar8;
  cVar3 = FUN_180340670(&local_2b8,&local_288,param_6,param_1[8]);
  if (cVar3 != '\0') {
    *(undefined1 *)(param_2 + 2) = 1;
  }
  if (DAT_180bbec89 != '\0') {
  }
  puVar5 = (undefined8 *)param_1[0xf];
  pfVar6 = (float *)*puVar5;
  auVar11 = ZEXT464((uint)(param_4 + *pfVar6));
  sVar4 = thunk_FUN_180624430(param_4 + *pfVar6);
  if (sVar4 < 1) {
    uVar8 = FUN_180615070(auVar11._0_8_,auVar10._0_8_);
    pfVar6 = (float *)*puVar5;
  }
  else {
    uVar8 = 0;
  }
  local_e4 = 0;
  uStack_104 = 0x42900000;
  uStack_ec = 0x42580000;
  if (*(char *)puVar5[1] == '\0') {
    if (local_298 == 1) {
      local_e8 = 0x41900000;
      local_e4 = 1;
      if (1 < param_5) {
        local_e4 = param_5;
      }
      goto LAB_18034920a;
    }
    uStack_2a4 = 0x42900000;
  }
  else {
    uStack_104 = 0x42580000;
    uStack_2a4 = 0x42580000;
  }
  uStack_2a8 = 0x41800000;
  local_2b8 = 0xc1800000c1800000;
  uStack_2b0 = 0;
  uStack_2ac = 0x41800000;
  uStack_ec = uStack_2a4;
  local_e8 = uVar9;
LAB_18034920a:
  uStack_f0 = 0x41800000;
  uStack_f4 = 0x41800000;
  uStack_f8 = 0;
  local_100 = 0xc1800000c1800000;
  uStack_108 = 0x41800000;
  uStack_10c = 0x41800000;
  uStack_110 = 0;
  local_118 = 0xc1800000c1800000;
  auVar11 = ZEXT464((uint)(param_7 + *pfVar6));
  sVar4 = thunk_FUN_180624430(param_7 + *pfVar6);
  if (sVar4 < 1) {
    uVar9 = FUN_180615070(auVar11._0_8_,auVar10._0_8_);
  }
  local_2b8 = *(undefined8 *)puVar5[3];
  uStack_2b0 = *(undefined4 *)((undefined8 *)puVar5[3] + 1);
  local_2d8 = *(undefined4 *)puVar5[10];
  local_2c0 = param_8;
  local_288 = *(undefined8 *)puVar5[2];
  local_280 = *(undefined4 *)((undefined8 *)puVar5[2] + 1);
  local_2d0 = *(undefined4 *)puVar5[0xb];
  local_310 = puVar5[4];
  local_2e0 = *(undefined4 *)puVar5[9];
  local_2e8 = *(undefined4 *)puVar5[8];
  local_2f8 = *(undefined4 *)puVar5[7];
  local_300 = *(undefined4 *)puVar5[6];
  local_318 = &local_118;
  local_2f0 = uVar8;
  local_2c8 = uVar9;
  puVar5 = (undefined8 *)FUN_180340b60(local_1c8,&local_288,&local_2b8,param_6);
  local_278 = *puVar5;
  uStack_270 = puVar5[1];
  uStack_268 = puVar5[2];
  auStack_260 = (undefined1  [8])puVar5[3];
  local_1f8 = puVar5[0x10];
  uStack_1f0 = puVar5[0x11];
  uStack_1e8 = puVar5[0x12];
  uStack_1e0 = puVar5[0x13];
  local_258 = puVar5[4];
  uStack_250 = puVar5[5];
  uStack_248 = puVar5[6];
  uStack_240 = puVar5[7];
  local_238 = puVar5[8];
  uStack_230 = puVar5[9];
  uStack_228 = puVar5[10];
  uStack_220 = puVar5[0xb];
  local_218 = puVar5[0xc];
  uStack_210 = puVar5[0xd];
  uStack_208 = puVar5[0xe];
  uStack_200 = puVar5[0xf];
  local_1d8 = puVar5[0x14];
  uStack_1d0 = puVar5[0x15];
  if (DAT_180bbec89 == '\0') {
    local_318 = &local_278;
    local_308 = param_8;
    local_310 = CONCAT44(local_310._4_4_,param_7);
    FUN_180348910(param_1[0x10],local_298);
    *(undefined1 *)(param_2 + 2) = 1;
    if ((char)local_278 != '\0') {
      uStack_270._0_4_ = local_278._4_4_;
    }
    param_2[1] = (float)uStack_270;
    *(char *)((longlong)param_2 + 10) = (char)local_278;
    *(bool *)((longlong)param_2 + 9) = (float)uStack_270 != 0.0;
    *(undefined1 *)((longlong)param_2 + 0xb) = local_278._1_1_;
    if (0 < uStack_1d0._4_4_) {
      fVar7 = *(float *)(auStack_260 + (longlong)(uStack_1d0._4_4_ + -1) * 0xc + 0xc);
      *(undefined8 *)(param_2 + 3) =
           *(undefined8 *)(auStack_260 + (longlong)(uStack_1d0._4_4_ + -1) * 0xc + 4);
      param_2[5] = fVar7;
    }
  }
}



