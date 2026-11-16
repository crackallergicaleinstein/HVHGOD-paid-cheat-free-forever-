// FUN_1804b7a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b7a50 */

void FUN_1804b7a50(int param_1)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  
  lVar3 = DAT_180bb8ae8;
  uVar2 = *(uint *)(DAT_180bb8ae8 + 0x1ec8);
  puVar1 = (uint *)(DAT_180bb8ae8 + 0x1ec4);
  *(uint *)(DAT_180bb8ae8 + 0x1ec8) = uVar2 | 0x800;
  if ((*puVar1 & 0x10000) == 0) {
    *(uint *)(lVar3 + 0x1ec8) = uVar2 | 0x804;
    if ((*(int *)(lVar3 + 0x1550) == param_1) || (*(int *)(lVar3 + 0x1550) == 0)) {
      *(undefined2 *)(lVar3 + 0x1562) = 0x101;
      *(undefined1 *)(lVar3 + 0x154f) = 1;
    }
    if (*(int *)(lVar3 + 0x1584) == param_1) {
      *(undefined1 *)(lVar3 + 0x158c) = 1;
    }
  }
  return;
}



