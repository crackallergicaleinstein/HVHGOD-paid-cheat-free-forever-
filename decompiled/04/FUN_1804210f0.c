// FUN_1804210f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804210f0 */

void FUN_1804210f0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[5];
  fVar2 = param_1[3];
  fVar3 = *param_2;
  fVar4 = param_1[1];
  fVar5 = param_2[2];
  fVar6 = param_2[4];
  param_1[1] = *param_1 * param_2[1] + fVar4 * param_2[3];
  param_1[3] = param_1[2] * param_2[1] + fVar2 * param_2[3];
  param_1[5] = param_1[4] * param_2[1] + fVar1 * param_2[3] + param_2[5];
  *param_1 = fVar3 * *param_1 + fVar5 * fVar4;
  param_1[2] = param_1[2] * fVar3 + fVar2 * fVar5;
  param_1[4] = fVar3 * param_1[4] + fVar5 * fVar1 + fVar6;
  return;
}



