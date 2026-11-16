// FUN_1805d2840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d2840 */

void FUN_1805d2840(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_1[0xc] = param_1[6];
  iVar4 = *param_1 + param_1[2];
  iVar1 = param_1[4] + param_1[2];
  iVar2 = param_1[4] + param_1[6];
  iVar3 = iVar2 + iVar1;
  param_1[10] = iVar2 >> 1;
  param_1[8] = iVar3 >> 2;
  param_1[2] = iVar4 >> 1;
  iVar1 = iVar1 + iVar4;
  param_1[4] = iVar1 >> 2;
  iVar4 = param_1[1] + param_1[3];
  param_1[6] = iVar1 + iVar3 >> 3;
  param_1[0xd] = param_1[7];
  iVar1 = param_1[5] + param_1[3];
  iVar2 = param_1[5] + param_1[7];
  iVar3 = iVar2 + iVar1;
  iVar1 = iVar1 + iVar4;
  param_1[0xb] = iVar2 >> 1;
  param_1[9] = iVar3 >> 2;
  param_1[3] = iVar4 >> 1;
  param_1[5] = iVar1 >> 2;
  param_1[7] = iVar1 + iVar3 >> 3;
  return;
}



