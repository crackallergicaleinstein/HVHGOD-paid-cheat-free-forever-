// FUN_18061e090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061e090 */

double FUN_18061e090(double param_1)

{
  double dVar1;
  
  if (((uint)((ulonglong)param_1 >> 0x20) & 0x7ff00000) == 0x7ff00000) {
    if (((ulonglong)param_1 & 0xfffffffffffff) != 0) {
      dVar1 = (double)FUN_1806226a0(param_1);
      return dVar1;
    }
    if ((longlong)param_1 < 0) goto LAB_18061e0d8;
  }
  if (-1 < (longlong)param_1 || ABS(param_1) == 0.0) {
    return SQRT(param_1);
  }
LAB_18061e0d8:
  dVar1 = (double)FUN_180622420(&DAT_1806b0068,5,0xfff8000000000000,1,8,0x21,param_1,0,1);
  return dVar1;
}



