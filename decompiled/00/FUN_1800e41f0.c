// FUN_1800e41f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e41f0 */

undefined8 FUN_1800e41f0(void)

{
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
    return DAT_1808da460;
  }
  return DAT_1808da460;
}



