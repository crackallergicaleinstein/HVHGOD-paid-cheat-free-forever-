// FUN_180440140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180440140 */

void FUN_180440140(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    FUN_180182bf0(lVar1 + 0x78);
    FUN_180182bf0(lVar1 + 0x38);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1804547d0(*(longlong *)(param_1 + 8),0xb8);
  }
  return;
}



