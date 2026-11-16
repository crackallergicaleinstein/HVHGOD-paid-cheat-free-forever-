// FUN_180572de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180572de0 */

undefined8 FUN_180572de0(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0x24;
  }
  lVar1 = *param_1;
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x90) == 0)) {
    return 0x23;
  }
  *(longlong **)(lVar1 + 0x80) = param_1;
  return 0;
}



