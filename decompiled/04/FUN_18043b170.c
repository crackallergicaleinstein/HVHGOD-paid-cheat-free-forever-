// FUN_18043b170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043b170 */

undefined8 * FUN_18043b170(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180439770();
  if (*(longlong *)(lVar1 + 0x4a8) == *(longlong *)(lVar1 + 0x4b0)) {
    return &DAT_180bbac80;
  }
  return &DAT_180bbabe8 + (longlong)*(int *)(*(longlong *)(lVar1 + 0x4b0) + -4) * 0x13;
}



