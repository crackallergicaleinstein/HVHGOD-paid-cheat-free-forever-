// FUN_1805f9e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f9e60 */

float * FUN_1805f9e60(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  
  if ((ulonglong)((longlong)param_2 - (longlong)param_1) < 0x20) {
    if ((ulonglong)((longlong)param_2 - (longlong)param_1) < 0x10) goto LAB_1805f9e9e;
  }
  else if ((DAT_1808d5f64 & 0x20) != 0) {
    pfVar1 = (float *)FUN_1805f8810(param_1,param_2,0);
    return pfVar1;
  }
  if ((DAT_1808d5f64 & 4) != 0) {
    pfVar1 = (float *)FUN_1805f8a20(param_1,param_2,0);
    return pfVar1;
  }
LAB_1805f9e9e:
  fVar2 = INFINITY;
  pfVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (*param_1 < fVar2) {
      pfVar1 = param_1;
      fVar2 = *param_1;
    }
  }
  return pfVar1;
}



