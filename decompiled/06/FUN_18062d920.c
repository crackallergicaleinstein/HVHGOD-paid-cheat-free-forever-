// FUN_18062d920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062d920 */

void FUN_18062d920(uint param_1)

{
  if (((param_1 & 0x7f800000) == 0x7f800000) && ((param_1 & 0x7fffff) == 0)) {
    FUN_180622560(&DAT_1806b1dd0,0x20,0xffc00000,1,8,0x21,param_1,0,1);
    return;
  }
  return;
}



