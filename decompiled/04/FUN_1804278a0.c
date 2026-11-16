// FUN_1804278a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804278a0 */

void FUN_1804278a0(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1[1] * 0.0 + *param_1;
  fVar2 = param_1[3] * 0.0 + param_1[2];
  fVar3 = *param_1 * 0.0 + param_1[1];
  param_2 = param_1[5] * 0.0 + param_1[4] + param_2;
  fVar4 = param_1[2] * 0.0 + param_1[3];
  param_3 = param_1[4] * 0.0 + param_1[5] + param_3;
  param_1[1] = fVar3 * param_5 + fVar1 * 0.0;
  param_1[3] = fVar4 * param_5 + fVar2 * 0.0;
  param_1[5] = param_3 * param_5 + param_2 * 0.0 + 0.0;
  *param_1 = fVar1 * param_4 + fVar3 * 0.0;
  param_1[2] = fVar2 * param_4 + fVar4 * 0.0;
  param_1[4] = param_2 * param_4 + param_3 * 0.0 + 0.0;
  return;
}



