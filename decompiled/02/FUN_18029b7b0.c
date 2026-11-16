// FUN_18029b7b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029b7b0 */

float * FUN_18029b7b0(float *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                     undefined8 param_5,char param_6,float param_7,float param_8)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float local_38;
  float local_34;
  undefined8 local_30;
  undefined8 local_28;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  local_28 = param_3;
  local_30 = param_2;
  fVar3 = 1.0;
  if (param_6 == '\x01') {
    fVar3 = 0.0;
  }
  else if (param_6 == '\x02') {
    fVar3 = 0.5;
  }
  else if (param_6 != '\x03') {
    pfVar2 = &local_20;
    if (0.0 <= param_7) {
      pfVar2 = &param_7;
    }
    local_1c = 1.0;
    pfVar1 = &local_1c;
    if (param_7 <= 1.0) {
      pfVar1 = pfVar2;
    }
    local_20 = 0.0;
    fVar3 = *pfVar1;
  }
  local_28._0_4_ = (float)param_3;
  local_28._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  local_30._0_4_ = (float)param_2;
  local_30._4_4_ = (float)((ulonglong)param_2 >> 0x20);
  if ((param_4 & 0xfd) == 0) {
    local_18 = local_28._4_4_ - param_5._4_4_;
    local_34 = (1.0 - fVar3) * local_28._4_4_ - param_5._4_4_ * 0.5;
    pfVar2 = &local_18;
    if (local_28._4_4_ - param_5._4_4_ <= 0.0) {
      pfVar2 = &local_14;
    }
    pfVar1 = &local_38;
    if (0.0 <= local_34) {
      pfVar1 = &local_34;
    }
    local_14 = 0.0;
    local_38 = 0.0;
    if (*pfVar2 < local_34) {
      pfVar1 = pfVar2;
    }
    if (param_4 == 0) {
      param_5._0_4_ = ((float)local_30 - param_8) - (float)param_5;
    }
    else {
      param_5._0_4_ = (float)local_28 + (float)local_30 + param_8;
    }
    param_1[1] = local_30._4_4_ + *pfVar1;
    *param_1 = (float)param_5;
    return param_1;
  }
  local_10 = (float)local_28 - (float)param_5;
  local_c = 0.0;
  local_38 = (float)local_28 * fVar3 - (float)param_5 * 0.5;
  pfVar2 = &local_10;
  if ((float)local_28 - (float)param_5 <= 0.0) {
    pfVar2 = &local_c;
  }
  pfVar1 = &local_34;
  if (0.0 <= local_38) {
    pfVar1 = &local_38;
  }
  local_34 = 0.0;
  if (*pfVar2 < local_38) {
    pfVar1 = pfVar2;
  }
  if (param_4 == 1) {
    param_5._4_4_ = (local_30._4_4_ - param_8) - param_5._4_4_;
  }
  else {
    param_5._4_4_ = local_30._4_4_ + local_28._4_4_ + param_8;
  }
  *param_1 = (float)local_30 + *pfVar1;
  param_1[1] = param_5._4_4_;
  return param_1;
}



