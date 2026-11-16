// FUN_1804e1e10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e1e10 */

void FUN_1804e1e10(longlong param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar2 = *param_3;
  if ((iVar2 != 0) &&
     (((iVar2 != 1 || (*(int *)(*(longlong *)(param_3 + 2) + 0x28) != 0)) ||
      (*(longlong *)(*(longlong *)(param_3 + 2) + 0x30) != 0)))) {
    if (0 < param_3[0x30]) {
      lVar3 = *(longlong *)(param_3 + 2);
      lVar1 = lVar3 + (longlong)iVar2 * 0x48;
      for (; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
        if (((*(longlong *)(lVar3 + 0x30) != 0) && (*(int *)(lVar3 + 0x44) != -1)) &&
           (0 < *(int *)(lVar3 + 0x40))) {
          *(longlong *)(lVar3 + 0x38) =
               (longlong)*(int *)(lVar3 + 0x44) + *(longlong *)(param_3 + 0x32);
        }
      }
    }
    iVar2 = param_2[1];
    if (*param_2 == iVar2) {
      iVar4 = *param_2 + 1;
      if (iVar2 == 0) {
        iVar2 = 8;
      }
      else {
        iVar2 = iVar2 / 2 + iVar2;
      }
      if (iVar4 < iVar2) {
        iVar4 = iVar2;
      }
      FUN_1804d0a80(param_2,iVar4);
    }
    *(int **)(*(longlong *)(param_2 + 2) + (longlong)*param_2 * 8) = param_3;
    *param_2 = *param_2 + 1;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3[8];
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + param_3[4];
  }
  return;
}



