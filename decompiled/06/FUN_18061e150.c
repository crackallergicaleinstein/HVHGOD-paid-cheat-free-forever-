// FUN_18061e150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061e150 */

float FUN_18061e150(float param_1)

{
  float fVar1;
  
  if (((uint)param_1 & 0x7f800000) == 0x7f800000) {
    if (((uint)param_1 & 0x7fffff) != 0) {
      fVar1 = (float)FUN_1806226c0(param_1);
      return fVar1;
    }
    if ((int)param_1 < 0) goto LAB_18061e187;
  }
  if (-1 < (int)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_18061e187:
  fVar1 = (float)FUN_180622560("sqrtf",5,0xffc00000,1,8,0x21,param_1,0,1);
  return fVar1;
}



