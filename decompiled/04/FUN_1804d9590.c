// FUN_1804d9590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d9590 */

void FUN_1804d9590(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((0xffff < (uint)(param_1[0xd] + param_3)) && ((param_1[0xc] & 0x400000U) != 0)) {
    param_1[0x20] = param_1[8];
    param_1[0xd] = 0;
    if (*(int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48) == 0) {
      *(int *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 0x48 + -0x28) = param_1[8];
    }
    else {
      FUN_1804d90c0(param_1);
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48);
  *piVar1 = *piVar1 + param_2;
  iVar2 = param_1[8];
  iVar4 = param_1[9];
  param_3 = iVar2 + param_3;
  iVar5 = 8;
  if (iVar4 < param_3) {
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    iVar3 = param_3;
    if (param_3 < iVar4) {
      iVar3 = iVar4;
    }
    FUN_1804d0cf0(param_1 + 8,iVar3);
  }
  param_1[8] = param_3;
  iVar4 = param_1[4];
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 10) + (longlong)iVar2 * 0x14;
  param_2 = iVar4 + param_2;
  iVar2 = param_1[5];
  if (iVar2 < param_2) {
    if (iVar2 != 0) {
      iVar5 = iVar2 + iVar2 / 2;
    }
    iVar2 = param_2;
    if (param_2 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_1804d1090(param_1 + 4,iVar2);
  }
  param_1[4] = param_2;
  *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 6) + (longlong)iVar4 * 2;
  return;
}



