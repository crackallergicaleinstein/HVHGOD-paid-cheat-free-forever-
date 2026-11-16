// FUN_1804b1a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b1a50 */

void FUN_1804b1a50(int *param_1,longlong param_2,int param_3,int param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  if (param_3 != param_4) {
    if ((param_1[4] == 0) || (*(char *)((longlong)param_1[4] + -1 + param_2) == '\n')) {
      iVar2 = param_1[1];
      if (*param_1 == iVar2) {
        iVar5 = *param_1 + 1;
        if (iVar2 == 0) {
          iVar2 = 8;
        }
        else {
          iVar2 = iVar2 / 2 + iVar2;
        }
        if (iVar5 < iVar2) {
          iVar5 = iVar2;
        }
        FUN_1804d14d0(param_1,iVar5);
      }
      *(int *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 4) = param_1[4];
      *param_1 = *param_1 + 1;
    }
    uVar1 = param_2 + param_4;
    lVar3 = FUN_18063b630(param_2 + param_3,10,uVar1 - (param_2 + param_3));
    while (lVar3 != 0) {
      uVar4 = lVar3 + 1;
      if (uVar4 < uVar1) {
        iVar2 = param_1[1];
        if (*param_1 == iVar2) {
          iVar5 = *param_1 + 1;
          if (iVar2 == 0) {
            iVar2 = 8;
          }
          else {
            iVar2 = iVar2 / 2 + iVar2;
          }
          if (iVar5 < iVar2) {
            iVar5 = iVar2;
          }
          FUN_1804d14d0(param_1,iVar5);
        }
        *(int *)(*(longlong *)(param_1 + 2) + (longlong)*param_1 * 4) = (int)uVar4 - (int)param_2;
        *param_1 = *param_1 + 1;
      }
      lVar3 = FUN_18063b630(uVar4,10,uVar1 - uVar4);
    }
    if (param_4 <= param_1[4]) {
      param_4 = param_1[4];
    }
    param_1[4] = param_4;
  }
  return;
}



