// FUN_1805cc170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805cc170 */

uint FUN_1805cc170(uint param_1)

{
  if (param_1 < 0x80) {
    return 1 << ((byte)param_1 & 7) & (uint)(byte)(&DAT_180684fd0)[param_1 >> 3];
  }
  return 0;
}



