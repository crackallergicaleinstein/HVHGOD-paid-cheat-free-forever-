// FUN_180450f20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180450f20 */

float * FUN_180450f20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  fVar2 = *param_3;
  param_2[1] = param_1[1] - param_3[1];
  *param_2 = fVar1 - fVar2;
  return param_2;
}



