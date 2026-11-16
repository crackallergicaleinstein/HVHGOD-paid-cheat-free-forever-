// FUN_18058a3a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058a3a0 */

longlong FUN_18058a3a0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = (longlong)param_2 * (longlong)*(short *)(param_1 + 0x198) +
          (longlong)*(short *)(param_1 + 0x19a) * (longlong)param_3;
  return (lVar1 >> 0x3f) + 0x2000 + lVar1 >> 0xe;
}



