// FUN_1804f9960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f9960 */

void FUN_1804f9960(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar3 = param_2[2];
  iVar2 = param_2[1];
  if (iVar2 != iVar3) {
    if (iVar1 < iVar2) {
      param_2[1] = iVar1;
      iVar2 = iVar1;
    }
    if (iVar1 < iVar3) {
      param_2[2] = iVar1;
      iVar3 = iVar1;
    }
    if (iVar2 == iVar3) {
      *param_2 = iVar2;
    }
  }
  if (iVar1 < *param_2) {
    *param_2 = iVar1;
  }
  if (iVar2 != iVar3) {
    if (iVar2 < iVar3) {
      FUN_1804f9850(param_1,param_2,iVar2,iVar3 - iVar2);
      param_2[2] = param_2[1];
      *param_2 = param_2[1];
      *(undefined1 *)((longlong)param_2 + 0x16) = 0;
      return;
    }
    FUN_1804f9850(param_1,param_2,iVar3,iVar2 - iVar3);
    param_2[1] = param_2[2];
    *param_2 = param_2[2];
    *(undefined1 *)((longlong)param_2 + 0x16) = 0;
  }
  return;
}



