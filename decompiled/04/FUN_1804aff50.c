// FUN_1804aff50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804aff50 */

void FUN_1804aff50(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  
  lVar4 = 0x200;
  puVar3 = (undefined4 *)(*(longlong *)(param_1 + 0xe0) + 0x13c);
  do {
    if (6 < lVar4 - 0x290U) {
      *(undefined1 *)(puVar3 + -2) = 0;
      puVar3[-1] = 0xbf800000;
      *puVar3 = 0xbf800000;
    }
    lVar4 = lVar4 + 1;
    puVar3 = puVar3 + 4;
  } while (lVar4 < 0x29b);
  *(undefined8 *)(param_1 + 0x104) = 0;
  iVar2 = *(int *)(param_1 + 0xbbc);
  if (iVar2 < 0) {
    iVar2 = iVar2 + iVar2 / 2;
    iVar1 = 0;
    if (0 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_1804d1090((undefined4 *)(param_1 + 3000),iVar1);
  }
  *(undefined4 *)(param_1 + 3000) = 0;
  return;
}



