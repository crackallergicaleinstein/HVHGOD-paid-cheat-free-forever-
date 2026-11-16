// FUN_1806281c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806281c0 */

void FUN_1806281c0(uint param_1)

{
  if ((param_1 & 0x3f) != 0) {
    MXCSR = MXCSR | param_1 & 0x3f;
  }
  return;
}



