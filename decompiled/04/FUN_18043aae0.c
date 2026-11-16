// FUN_18043aae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043aae0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_18043aae0(void)

{
  if ((DAT_180cd4fe8 & 1) == 0) {
    DAT_180cd4fe8 = DAT_180cd4fe8 | 1;
    _DAT_180cd4ff0 = (undefined1  [16])0x0;
    _DAT_180cd5000 = 0;
    _DAT_180cd5008 = 0;
    FUN_1803d24b0(&DAT_180cd5010);
    _DAT_180cd5020 = (undefined1  [16])0x0;
    _DAT_180cd5030 = 0;
    _DAT_180cd5038 = 7;
    _DAT_180cd5040 = 8;
    _DAT_180cd5008 = 0x3f800000;
    FUN_1801406e0(&DAT_180cd5020,0x10,DAT_180cd5010);
    _DAT_180cd5048 = 0;
    _DAT_180cd5050 = 0;
    atexit(FUN_180663230);
  }
  return &DAT_180cd4ff0;
}



