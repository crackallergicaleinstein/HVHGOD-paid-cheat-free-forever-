// FUN_1803746f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803746f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803746f0(undefined8 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                  float param_5,float param_6)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  float local_f8 [2];
  float local_f0 [2];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined4 *local_78;
  float *local_70;
  float *local_68;
  float local_60 [2];
  float local_58 [2];
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  local_60[0] = 2.0;
  local_f8[0] = 0.25;
  local_f0[0] = param_6;
  fVar8 = 2.0;
  fVar9 = 0.25;
  local_res18[0] = param_3;
  local_res20[0] = param_4;
  sVar1 = thunk_FUN_180624430();
  fVar7 = 1.0;
  if (sVar1 < 1) {
    pfVar3 = local_f8;
    if (fVar9 <= param_6) {
      pfVar3 = local_f0;
    }
    pfVar2 = local_60;
    if (param_6 <= fVar8) {
      pfVar2 = pfVar3;
    }
    local_58[0] = *pfVar2;
  }
  else {
    local_58[0] = 1.0;
  }
  fVar8 = 3.0;
  fVar9 = 0.1;
  local_f8[0] = 3.0;
  local_60[0] = 0.1;
  local_f0[0] = param_5;
  sVar1 = thunk_FUN_180624430(param_5);
  if (sVar1 < 1) {
    pfVar3 = local_60;
    if (fVar9 <= param_5) {
      pfVar3 = local_f0;
    }
    pfVar2 = local_f8;
    if (param_5 <= fVar8) {
      pfVar2 = pfVar3;
    }
    fVar7 = *pfVar2;
  }
  local_80 = local_res18;
  local_78 = local_res20;
  local_70 = local_60;
  local_68 = local_58;
  if (param_2 == 0) {
    puVar5 = &local_a8;
    uVar6 = 0x455ac000;
    local_e0 = 0x44800000;
    puVar4 = &local_98;
    local_d0 = 0xc34e0000;
    local_c0 = 0xc2480000;
    local_b0 = 0xc2c80000;
    local_e8 = 0x4480000044800000;
    local_a0 = 0xc2480000;
    local_d8 = 0xc4800000c4800000;
    local_90 = 0;
    local_100 = &local_e8;
    local_108 = &local_d8;
    local_c8 = 0;
    local_110 = &local_c8;
    local_a8 = 0;
    local_118 = &local_b8;
    local_98 = 0x3f8000003f800000;
  }
  else {
    if (param_2 == 1) {
      uVar6 = 0x455ac000;
      local_98 = 0x4480000044800000;
      local_90 = 0x44800000;
      local_a8 = 0xc4800000c4800000;
      local_a0 = 0xc4800000;
      local_b0 = 0xc4610000;
      local_c8 = 0;
      local_c0 = 0xc3960000;
      local_d8 = 0;
      local_d0 = 0xc3fa0000;
      local_e0 = 0;
    }
    else {
      uVar6 = 0x451c4000;
      local_98 = 0x43c8000043c80000;
      local_90 = 0x43c80000;
      local_a8 = 0xc3c80000c3c80000;
      local_a0 = 0xc3480000;
      local_b0 = 0;
      local_c8 = 0x4020000040200000;
      local_c0 = 0x40200000;
      local_d8 = 0xc0200000c0200000;
      local_d0 = 0xc0200000;
      local_e0 = 0x3fc00000;
    }
    puVar4 = &local_e8;
    local_100 = &local_98;
    puVar5 = &local_d8;
    local_108 = &local_a8;
    local_110 = &local_b8;
    local_118 = &local_c8;
    local_e8 = 0x4000000040000000;
  }
  local_b8 = 0;
  local_88 = param_1;
  local_60[0] = fVar7;
  FUN_180374ab0(&local_88,uVar6,puVar4,puVar5);
}



