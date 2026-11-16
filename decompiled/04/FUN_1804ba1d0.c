// FUN_1804ba1d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ba1d0 */

void FUN_1804ba1d0(int *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  
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
  *(longlong *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 8) = param_2;
  *param_1 = *param_1 + 1;
  if (*(char *)(param_2 + 0xcc) != '\0') {
    uVar4 = (ulonglong)*(int *)(param_2 + 0x1b0);
    if (1 < uVar4) {
      FUN_1806192c0(*(undefined8 *)(param_2 + 0x1b8),uVar4,8,FUN_1804ba180);
    }
    if (0 < (longlong)uVar4) {
      lVar3 = 0;
      do {
        if (*(char *)(*(longlong *)(*(longlong *)(param_2 + 0x1b8) + lVar3 * 8) + 0xcc) != '\0') {
          FUN_1804ba1d0(param_1);
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < (longlong)uVar4);
    }
  }
  return;
}



