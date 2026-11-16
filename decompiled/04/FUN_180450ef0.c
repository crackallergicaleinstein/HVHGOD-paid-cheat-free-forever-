// FUN_180450ef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180450ef0 */

float * FUN_180450ef0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_3;
  fVar2 = *param_1;
  param_2[1] = param_3[1] + param_1[1];
  *param_2 = fVar1 + fVar2;
  return param_2;
}



