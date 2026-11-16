// FUN_1804c8960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c8960 */

void FUN_1804c8960(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  
  lVar3 = DAT_180bb8ae8;
  iVar1 = *(int *)(DAT_180bb8ae8 + 0x1470);
  lVar2 = *(longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x1478) + -8 + (longlong)iVar1 * 8);
  if (((lVar2 != param_1) && (*(longlong *)(lVar2 + 0x3d8) != param_1)) &&
     (uVar4 = iVar1 - 2, -1 < (int)uVar4)) {
    plVar5 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x1478) + (longlong)(int)uVar4 * 8);
    while (*plVar5 != param_1) {
      plVar5 = plVar5 + -1;
      uVar4 = uVar4 - 1;
      if ((int)uVar4 < 0) {
        return;
      }
    }
    FUN_18063aed0(*(longlong *)(DAT_180bb8ae8 + 0x1478) + (longlong)(int)uVar4 * 8,
                  *(longlong *)(DAT_180bb8ae8 + 0x1478) + (longlong)(int)(uVar4 + 1) * 8,
                  (longlong)(int)(~uVar4 + iVar1) << 3);
    *(longlong *)(*(longlong *)(lVar3 + 0x1478) + -8 + (longlong)*(int *)(lVar3 + 0x1470) * 8) =
         param_1;
  }
  return;
}



