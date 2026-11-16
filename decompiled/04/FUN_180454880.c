// FUN_180454880 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180454880 */

longlong FUN_180454880(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    lVar1 = *(longlong *)(param_1 + 0x20) + 0x10;
  }
  return lVar1;
}



