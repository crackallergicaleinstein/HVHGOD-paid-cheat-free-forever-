// FUN_1804b1860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b1860 */

void FUN_1804b1860(int *param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (param_3 == 0) {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(param_2 + lVar4) != '\0');
    iVar5 = (int)lVar4;
  }
  else {
    iVar5 = (int)param_3 - (int)param_2;
  }
  iVar6 = 1;
  if (*param_1 != 0) {
    iVar6 = *param_1;
  }
  iVar1 = iVar6 + iVar5;
  if (param_1[1] <= iVar1) {
    iVar3 = param_1[1] * 2;
    if (iVar3 < iVar1) {
      iVar3 = iVar1;
    }
    FUN_1804d0ea0(param_1,iVar3);
  }
  iVar3 = param_1[1];
  if (iVar3 < iVar1) {
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    iVar2 = iVar1;
    if (iVar1 < iVar3) {
      iVar2 = iVar3;
    }
    FUN_1804d0ea0(param_1,iVar2);
  }
  *param_1 = iVar1;
  FUN_18063aed0((longlong)(iVar6 + -1) + *(longlong *)(param_1 + 2),param_2,(longlong)iVar5);
  *(undefined1 *)((longlong)iVar1 + -1 + *(longlong *)(param_1 + 2)) = 0;
  return;
}



