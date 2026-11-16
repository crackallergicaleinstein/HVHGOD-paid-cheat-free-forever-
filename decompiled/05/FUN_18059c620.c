// FUN_18059c620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059c620 */

undefined2 FUN_18059c620(uint param_1)

{
  if (param_1 < 0x100) {
    return *(undefined2 *)(&DAT_180671a30 + (ulonglong)param_1 * 2);
  }
  return 0;
}



