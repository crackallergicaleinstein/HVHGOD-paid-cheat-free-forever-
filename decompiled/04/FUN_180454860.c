// FUN_180454860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180454860 */

longlong FUN_180454860(uint *param_1)

{
  longlong lVar1;
  
  *param_1 = *param_1 | 1;
  lVar1 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    lVar1 = *(longlong *)(param_1 + 8) + 0x10;
  }
  return lVar1;
}



