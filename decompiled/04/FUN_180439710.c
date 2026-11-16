// FUN_180439710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180439710 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_180439710(void)

{
  if ((DAT_180cd4900 & 1) == 0) {
    DAT_180cd4900 = DAT_180cd4900 | 1;
    _DAT_180cd4910 = (undefined1  [16])0x0;
    _DAT_180cd4920 = 0;
    FUN_1801abd10(&DAT_180cd4928);
    FUN_1801abd10(&DAT_180cd4968);
    atexit(FUN_180663150);
  }
  return &DAT_180cd4910;
}



