// FUN_18058c730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058c730 */

int FUN_18058c730(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 700);
  iVar1 = *(int *)(param_1 + 0x2c0) - iVar2;
  if (-1 < param_2) {
    param_3 = param_2 + iVar1 + param_3;
    iVar1 = (param_3 - param_3 % *(int *)(param_1 + 0x2b8)) + iVar2;
    if (-1 < iVar1) {
      iVar2 = iVar1;
    }
    return iVar2;
  }
  param_3 = (iVar1 - param_2) + param_3;
  iVar1 = (param_3 % *(int *)(param_1 + 0x2b8) - param_3) - iVar2;
  if (iVar1 < 1) {
    return iVar1;
  }
  return -iVar2;
}



