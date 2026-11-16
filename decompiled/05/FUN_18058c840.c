// FUN_18058c840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058c840 */

uint FUN_18058c840(undefined8 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
    uVar2 = -((param_3 - param_2) + 0x3fU & 0xffffffc0);
    if (0 < (int)uVar2) {
      uVar2 = 0;
    }
    return uVar2;
  }
  uVar1 = param_3 + 0x3f + param_2 & 0xffffffc0;
  uVar2 = 0;
  if (-1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}



