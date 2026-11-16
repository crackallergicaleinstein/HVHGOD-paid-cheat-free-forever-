// FUN_18058c790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058c790 */

uint FUN_18058c790(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
    uVar2 = -((param_3 - param_2) + 0x10U & 0xffffffe0);
    if (0 < (int)uVar2) {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar1 = param_3 + 0x10 + param_2 & 0xffffffe0;
  uVar2 = 0;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



