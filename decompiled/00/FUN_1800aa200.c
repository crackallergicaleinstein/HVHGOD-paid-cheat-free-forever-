// FUN_1800aa200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800aa200 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1800aa200(void)

{
  if ((DAT_180bb2740 & 1) == 0) {
    DAT_180bb2740 = DAT_180bb2740 | 1;
    _DAT_180bb26f0 = (undefined1  [16])0x0;
    _DAT_180bb2700 = 0;
    DAT_180bb2708 = 0;
    FUN_180111d10(&DAT_180bb2710,0);
    DAT_180bb2718 = 0;
    FUN_180111d10(&DAT_180bb2720,0);
    _DAT_180bb2728 = 0;
    _DAT_180bb2730 = 0;
    _DAT_180bb2738 = 0;
    atexit(FUN_180661080);
  }
  return &DAT_180bb26f0;
}



