// FUN_1805bde50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bde50 */

char * FUN_1805bde50(uint param_1)

{
  if (param_1 < 0x187) {
    return ".null" + *(short *)(&DAT_1806764f0 + (ulonglong)param_1 * 2);
  }
  return (char *)0x0;
}



