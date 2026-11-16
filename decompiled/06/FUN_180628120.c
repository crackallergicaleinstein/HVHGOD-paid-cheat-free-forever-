// FUN_180628120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180628120 */

uint FUN_180628120(uint param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = MXCSR;
  MXCSR = (~param_2 | 0xffff807f) & MXCSR | param_1 & param_2;
  if ((DAT_1808d75b0 == '\0') || ((MXCSR & 0x40) == 0)) {
    MXCSR = MXCSR & 0xffffffbf;
    return uVar1;
  }
  return uVar1;
}



