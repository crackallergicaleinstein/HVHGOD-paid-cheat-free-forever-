// FUN_18058c6e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058c6e0 */

int FUN_18058c6e0(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 700);
  iVar1 = *(int *)(param_1 + 0x2c0) - iVar2;
  if (param_2 < 0) {
    iVar1 = -(((iVar1 - param_2) + param_3 & -*(int *)(param_1 + 0x2b8)) + iVar2);
    if (0 < iVar1) {
      iVar1 = -iVar2;
    }
    return iVar1;
  }
  iVar1 = (param_2 + iVar1 + param_3 & -*(int *)(param_1 + 0x2b8)) + iVar2;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}



