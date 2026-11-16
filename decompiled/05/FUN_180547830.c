// FUN_180547830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180547830 */

float * FUN_180547830(float *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10._4_4_ = (float)((ulonglong)param_4 >> 0x20);
  local_18._4_4_ = (float)((ulonglong)param_3 >> 0x20);
  fVar4 = local_18._4_4_;
  local_10._0_4_ = (float)param_4;
  auVar2 = vmaxss_avx(ZEXT816(0),ZEXT416((uint)(local_10._4_4_ - local_18._4_4_)));
  local_18._0_4_ = (float)param_3;
  auVar3 = vmaxss_avx(ZEXT816(0),ZEXT416((uint)((float)local_10 - (float)local_18)));
  local_10 = CONCAT44(local_10._4_4_,0x3f800000);
  local_18 = (ulonglong)(uint)local_18._4_4_ << 0x20;
  if (**(char **)(param_2 + 8) == '\0') {
    pfVar6 = (float *)(param_2 + 0x20);
  }
  else {
    pfVar6 = *(float **)(param_2 + 0x10);
  }
  pfVar7 = (float *)&local_18;
  if (0.0 <= *pfVar6) {
    pfVar7 = pfVar6;
  }
  pfVar5 = (float *)&local_10;
  if (*pfVar6 <= 1.0) {
    pfVar5 = pfVar7;
  }
  fVar1 = *pfVar5;
  local_18 = CONCAT44(fVar4,0x3f800000);
  local_10 = (ulonglong)(uint)local_10._4_4_ << 0x20;
  if (**(char **)(param_2 + 8) == '\0') {
    pfVar6 = (float *)(param_2 + 0x24);
  }
  else {
    pfVar6 = *(float **)(param_2 + 0x18);
  }
  pfVar7 = (float *)&local_10;
  if (0.0 <= *pfVar6) {
    pfVar7 = pfVar6;
  }
  pfVar5 = (float *)&local_18;
  if (*pfVar6 <= 1.0) {
    pfVar5 = pfVar7;
  }
  param_1[1] = auVar2._0_4_ * *pfVar5;
  *param_1 = auVar3._0_4_ * fVar1;
  return param_1;
}



