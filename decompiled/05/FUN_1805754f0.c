// FUN_1805754f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805754f0 */

longlong FUN_1805754f0(int param_1,int param_2)

{
  return ((longlong)param_1 * (longlong)param_2 >> 0x3f) + 0x8000 +
         (longlong)param_1 * (longlong)param_2 >> 0x10;
}



