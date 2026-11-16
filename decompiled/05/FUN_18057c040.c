// FUN_18057c040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057c040 */

int FUN_18057c040(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return (((uVar1 & 0xff) * 0x1f + (uVar1 >> 8 & 0xff)) * 0x1f + (uVar1 >> 0x10 & 0xff)) * 0x1f +
         (uVar1 >> 0x18);
}



