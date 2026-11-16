// FUN_1804eadd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804eadd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804eadd0(longlong param_1,undefined8 param_2,undefined4 param_3,float param_4,
                  float param_5,float param_6,undefined8 param_7,float param_8)

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  undefined1 auStack_108 [32];
  float local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  ulonglong local_a8;
  
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  param_6 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x28) * 0.5 * param_6;
  if (0.0 < param_8) {
    fVar3 = 1.0;
    if (1.0 <= param_6 * param_8) {
      auVar2 = vminss_avx(ZEXT416((uint)(param_6 * 0.5)),ZEXT416((uint)(param_6 * param_8)));
      fVar3 = auVar2._0_4_;
    }
    local_e8 = (float)(int)(fVar3 + 0.5);
    fVar3 = local_e8 * 0.8 * 0.7071;
  }
  else {
    fVar3 = param_6 * 0.05;
    local_e8 = 0.0;
  }
  param_7._0_4_ = param_6 * (float)param_7;
  local_c8._0_4_ = (float)param_2;
  local_c8._4_4_ = (float)((ulonglong)param_2 >> 0x20);
  fVar1 = param_6 + (float)local_c8 + fVar3 * param_4;
  fVar3 = param_6 + local_c8._4_4_ + fVar3 * param_5;
  local_b8 = param_6 * param_7._4_4_ * param_4;
  local_b0 = fVar1 - local_b8;
  local_b4 = param_6 * param_7._4_4_ * param_5;
  local_c0 = local_b0 - -param_5 * (float)param_7;
  local_bc = fVar3 - local_b4;
  local_b4 = local_b4 + fVar3;
  local_b8 = local_b8 + fVar1;
  local_b0 = local_b0 - (float)param_7 * param_5;
  local_ac = local_bc + (float)param_7 * param_4;
  local_bc = local_bc - (float)param_7 * param_4;
  local_c8 = param_2;
  if (0.0 < param_8) {
    local_d8 = 0x7f7fffff;
    local_e0 = 0x24000;
    FUN_1804d9a00(0x7f7fffff,&local_c0,3,param_3);
  }
  else {
    fVar3 = (float)param_7 * param_5;
    if ((-1.1920929e-07 <= param_4 * param_5) &&
       (fVar3 = 1.1920929e-07, param_4 * param_5 <= 1.1920929e-07)) {
      if (local_bc < 0.0) {
        local_bc = local_bc - 0.5;
      }
      else {
        local_bc = local_bc + 0.5;
      }
      if (local_c0 < 0.0) {
        local_c0 = local_c0 - 0.5;
      }
      else {
        local_c0 = local_c0 + 0.5;
      }
      local_c0 = (float)(longlong)local_c0;
      local_bc = (float)(longlong)local_bc;
      if (local_b4 < 0.0) {
        local_b4 = local_b4 - 0.5;
      }
      else {
        local_b4 = local_b4 + 0.5;
      }
      if (local_b8 < 0.0) {
        local_b8 = local_b8 - 0.5;
      }
      else {
        local_b8 = local_b8 + 0.5;
      }
      local_b8 = (float)(longlong)local_b8;
      local_b4 = (float)(longlong)local_b4;
      if (local_ac < 0.0) {
        local_ac = local_ac - 0.5;
      }
      else {
        local_ac = local_ac + 0.5;
      }
      if (local_b0 < 0.0) {
        local_b0 = local_b0 - 0.5;
      }
      else {
        local_b0 = local_b0 + 0.5;
      }
      local_b0 = (float)(longlong)local_b0;
      local_ac = (float)(longlong)local_ac;
      fVar3 = local_b0;
    }
    local_e8 = 0.0;
    FUN_1804dafe0(fVar3,&local_c0,3,param_3);
  }
}



