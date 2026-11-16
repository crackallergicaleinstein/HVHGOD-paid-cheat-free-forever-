// FUN_1804d0c90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d0c90 */

void FUN_1804d0c90(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if (*param_1 == iVar1) {
    iVar2 = *param_1 + 1;
    if (iVar1 == 0) {
      iVar1 = 8;
    }
    else {
      iVar1 = iVar1 / 2 + iVar1;
    }
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    FUN_1804d0a80(param_1,iVar2);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 8) = *param_2;
  *param_1 = *param_1 + 1;
  return;
}



