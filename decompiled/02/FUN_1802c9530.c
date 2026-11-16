// FUN_1802c9530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c9530 */

float FUN_1802c9530(int param_1,int param_2,float param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 5) {
    uVar1 = ((uint)(param_1 + param_2) >> 0x10 ^ param_1 + param_2) * 0x7feb352d;
    uVar1 = (uVar1 >> 0xf ^ uVar1) * -0x7b935975;
    return (((float)((uVar1 ^ uVar1 >> 0x10) & 0xffffff) / 16777215.0) * 0.2 + 0.8) * param_3;
  }
  uVar1 = param_1 + param_2 * 0x1f;
  uVar1 = (uVar1 >> 0x10 ^ uVar1) * 0x7feb352d;
  uVar1 = (uVar1 >> 0xf ^ uVar1) * -0x7b935975;
  return (((float)((uVar1 >> 0x10 ^ uVar1) & 0xffffff) / 16777215.0) * 0.55 + 0.45) * param_3;
}



