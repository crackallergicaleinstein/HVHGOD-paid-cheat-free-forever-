// FUN_1802c2800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c2800 */

void FUN_1802c2800(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18015c010(lVar1 + 0x50);
    FUN_18015c010(lVar1 + 0x30);
    FUN_1801b3620(lVar1 + 0x18);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1804547d0(*(longlong *)(param_1 + 8),0x70);
  }
  return;
}



