// FUN_180179280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180179280 */

void FUN_180179280(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_18015c010(lVar1 + 0x30);
    FUN_18015c010(lVar1 + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1804547d0(*(longlong *)(param_1 + 8),0x50);
  }
  return;
}



