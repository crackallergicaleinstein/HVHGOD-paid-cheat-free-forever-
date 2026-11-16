// FUN_180605b94 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180605b94 */

longlong * FUN_180605b94(longlong *param_1,undefined8 param_2,byte *param_3,longlong *param_4)

{
  *param_4 = *param_1;
  if ((*param_3 & 1) != 0) {
    *param_4 = *(longlong *)((ulonglong)*(uint *)(param_3 + 0x14) + *param_1);
  }
  return param_4;
}



