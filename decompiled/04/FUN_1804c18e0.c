// FUN_1804c18e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c18e0 */

void FUN_1804c18e0(undefined4 param_1)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  piVar1 = (int *)(lVar2 + 0x208);
  iVar3 = *(int *)(lVar2 + 0x20c);
  if (*piVar1 == iVar3) {
    iVar4 = *piVar1 + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_1804d14d0(piVar1,iVar4);
  }
  *(undefined4 *)(*(longlong *)(lVar2 + 0x210) + (longlong)*piVar1 * 4) =
       *(undefined4 *)(lVar2 + 0x1f0);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(lVar2 + 0x1f0) = param_1;
  return;
}



