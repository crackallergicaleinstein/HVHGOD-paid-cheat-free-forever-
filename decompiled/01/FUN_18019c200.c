// FUN_18019c200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18019c200 */

undefined8 FUN_18019c200(longlong param_1,longlong param_2)

{
  float *pfVar1;
  
  if (param_1 != param_1 + 0x8c) {
    pfVar1 = (float *)(param_2 + 8);
    param_2 = param_1 - param_2;
    do {
      if ((((*(float *)(param_2 + -8 + (longlong)pfVar1) != pfVar1[-2]) ||
           (*(float *)(param_2 + -4 + (longlong)pfVar1) != pfVar1[-1])) ||
          (*(float *)(param_2 + (longlong)pfVar1) != *pfVar1)) ||
         (((*(float *)(param_2 + 4 + (longlong)pfVar1) != pfVar1[1] ||
           (*(float *)(param_2 + 8 + (longlong)pfVar1) != pfVar1[2])) ||
          ((*(float *)(param_2 + 0xc + (longlong)pfVar1) != pfVar1[3] ||
           (*(float *)(param_2 + 0x10 + (longlong)pfVar1) != pfVar1[4])))))) {
        return 0;
      }
      pfVar1 = pfVar1 + 7;
    } while (param_2 + -8 + (longlong)pfVar1 != param_1 + 0x8c);
  }
  return 1;
}



