// FUN_1805f9dd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f9dd0 */

float * FUN_1805f9dd0(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  
  if ((ulonglong)((longlong)param_2 - (longlong)param_1) < 0x20) {
    if ((ulonglong)((longlong)param_2 - (longlong)param_1) < 0x10) goto LAB_1805f9e0e;
  }
  else if ((DAT_1808d5f64 & 0x20) != 0) {
    pfVar1 = (float *)FUN_1805f90b0(param_1,param_2,0);
    return pfVar1;
  }
  if ((DAT_1808d5f64 & 4) != 0) {
    pfVar1 = (float *)FUN_1805f92c0(param_1,param_2,0);
    return pfVar1;
  }
LAB_1805f9e0e:
  fVar2 = -INFINITY;
  pfVar1 = param_1;
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (fVar2 < *param_1) {
      pfVar1 = param_1;
      fVar2 = *param_1;
    }
  }
  return pfVar1;
}



