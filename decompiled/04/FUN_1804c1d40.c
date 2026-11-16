// FUN_1804c1d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c1d40 */

void FUN_1804c1d40(undefined4 param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar3 = DAT_180bb8ae8;
  piVar1 = (int *)(DAT_180bb8ae8 + 0x1fc8);
  iVar4 = *(int *)(DAT_180bb8ae8 + 0x1fcc);
  uVar2 = *(undefined4 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x10);
  if (*piVar1 == iVar4) {
    iVar5 = *piVar1 + 1;
    if (iVar4 == 0) {
      iVar4 = 8;
    }
    else {
      iVar4 = iVar4 / 2 + iVar4;
    }
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    FUN_1804d0a80(piVar1,iVar5);
  }
  *(ulonglong *)(*(longlong *)(lVar3 + 0x1fd0) + (longlong)*piVar1 * 8) = CONCAT44(uVar2,param_1);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(lVar3 + 0x1e7c) = param_1;
  return;
}



