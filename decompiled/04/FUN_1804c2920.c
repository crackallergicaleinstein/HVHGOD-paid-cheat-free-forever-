// FUN_1804c2920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c2920 */

void FUN_1804c2920(undefined4 param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  uVar2 = FUN_1804c2670(lVar1,param_1);
  piVar5 = (int *)(lVar1 + 0x108);
  iVar3 = *(int *)(lVar1 + 0x10c);
  if (*piVar5 == iVar3) {
    iVar4 = *piVar5 + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_1804d14d0(piVar5,iVar4);
  }
  *(undefined4 *)(*(longlong *)(lVar1 + 0x110) + (longlong)*piVar5 * 4) = uVar2;
  *piVar5 = *piVar5 + 1;
  return;
}



