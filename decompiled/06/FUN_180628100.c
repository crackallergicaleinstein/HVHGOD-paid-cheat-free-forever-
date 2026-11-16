// FUN_180628100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180628100 */

uint FUN_180628100(void)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = MXCSR & 0xffffffc0;
  return uVar1 & 0x3f;
}



