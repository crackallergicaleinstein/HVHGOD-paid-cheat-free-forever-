// FUN_1804c5370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c5370 */

undefined8 FUN_1804c5370(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  
  uVar3 = param_2 | 0x800;
  if ((param_2 & 0x3c00) != 0) {
    uVar3 = param_2;
  }
  if ((param_3 + 1U & 0xfffffffe) == 0) {
    param_3 = *(int *)(DAT_180bb8ae8 + 0x1e7c);
  }
  if ((*(byte *)(DAT_180bb8ae8 + 0x1e80) & 0x40) == 0) {
    cVar2 = FUN_1804c3080(param_1,uVar3,param_3);
    if (cVar2 != '\0') {
      uVar1 = uVar3 | 0x20;
      if (((byte)uVar3 & 0xf1) != 1) {
        uVar1 = uVar3;
      }
      cVar2 = FUN_1804c52a0(param_1,uVar1,param_3);
      if (cVar2 != '\0') {
        FUN_1804c51f0(param_1 & 0xf000,param_3);
        return 1;
      }
    }
  }
  return 0;
}



