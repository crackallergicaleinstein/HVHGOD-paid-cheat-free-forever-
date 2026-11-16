// FUN_18058c810 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058c810 */

int FUN_18058c810(undefined8 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 < 0) {
    iVar1 = -0x20 - (param_3 - param_2 & 0xffffffc0U);
    if (0 < iVar1) {
      iVar1 = -0x20;
    }
    return iVar1;
  }
  uVar2 = param_2 + param_3 & 0xffffffc0;
  iVar1 = 0x20;
  if (-0x21 < (int)uVar2) {
    iVar1 = uVar2 + 0x20;
  }
  return iVar1;
}



