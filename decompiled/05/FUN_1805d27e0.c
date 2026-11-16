// FUN_1805d27e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d27e0 */

void FUN_1805d27e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  param_1[8] = param_1[4];
  iVar2 = param_1[4] + param_1[2];
  param_1[9] = param_1[5];
  iVar1 = param_1[5] + param_1[3];
  param_1[6] = iVar2 >> 1;
  param_1[4] = iVar2 + *param_1 + param_1[2] >> 2;
  param_1[7] = iVar1 >> 1;
  param_1[5] = iVar1 + param_1[1] + param_1[3] >> 2;
  param_1[2] = *param_1 + param_1[2] >> 1;
  param_1[3] = param_1[1] + param_1[3] >> 1;
  return;
}



