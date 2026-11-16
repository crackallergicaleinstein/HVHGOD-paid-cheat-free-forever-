// FUN_1804b1960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b1960 */

void FUN_1804b1960(int *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar2 = FUN_1804aeff0(0,0,param_2,param_3);
  if (0 < iVar2) {
    iVar4 = 1;
    if (*param_1 != 0) {
      iVar4 = *param_1;
    }
    iVar5 = iVar4 + iVar2;
    if (param_1[1] <= iVar5) {
      iVar3 = param_1[1] * 2;
      if (iVar3 < iVar5) {
        iVar3 = iVar5;
      }
      FUN_1804d0ea0(param_1,iVar3);
    }
    iVar3 = param_1[1];
    if (iVar3 < iVar5) {
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      iVar1 = iVar5;
      if (iVar5 < iVar3) {
        iVar1 = iVar3;
      }
      FUN_1804d0ea0(param_1,iVar1);
    }
    *param_1 = iVar5;
    lVar6 = *(longlong *)(param_1 + 2) + (longlong)(iVar4 + -1);
    iVar4 = FUN_1804aeff0(lVar6,(longlong)iVar2 + 1,param_2,param_3);
    if (lVar6 != 0) {
      if ((iVar4 == -1) || ((int)((longlong)iVar2 + 1) <= iVar4)) {
        iVar4 = iVar2;
      }
      *(undefined1 *)(iVar4 + lVar6) = 0;
    }
  }
  return;
}



