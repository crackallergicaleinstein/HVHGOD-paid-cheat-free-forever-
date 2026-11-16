// FUN_180451010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180451010 */

float * FUN_180451010(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar1 = param_1[2];
  fVar2 = *param_1;
  fVar3 = *param_3;
  fVar4 = param_1[1];
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = fVar6 * fVar4 - fVar5 * fVar1;
  fVar8 = fVar5 * fVar2 - fVar3 * fVar4;
  fVar9 = fVar3 * fVar1 - fVar6 * fVar2;
  fVar10 = fVar7 * fVar1 - fVar8 * fVar2;
  fVar11 = fVar8 * fVar4 - fVar9 * fVar1;
  fVar1 = param_1[3] + param_1[3];
  fVar2 = fVar9 * fVar2 - fVar7 * fVar4;
  *param_2 = fVar1 * fVar7 + fVar3 + fVar11 + fVar11;
  param_2[1] = fVar1 * fVar9 + fVar5 + fVar10 + fVar10;
  param_2[2] = fVar1 * fVar8 + fVar6 + fVar2 + fVar2;
  return param_2;
}



