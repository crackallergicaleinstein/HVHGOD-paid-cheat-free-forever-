// FUN_180454840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180454840 */

longlong FUN_180454840(uint *param_1)

{
  longlong lVar1;
  
  *param_1 = *param_1 | 4;
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0xc) != 0) {
    lVar1 = *(longlong *)(param_1 + 0xc) + 0x10;
  }
  return lVar1;
}



