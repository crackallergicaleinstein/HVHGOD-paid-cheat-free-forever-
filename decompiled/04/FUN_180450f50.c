// FUN_180450f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180450f50 */

float * FUN_180450f50(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  
  fVar1 = param_1[1];
  *param_2 = param_3 * *param_1;
  param_2[1] = param_3 * fVar1;
  return param_2;
}



