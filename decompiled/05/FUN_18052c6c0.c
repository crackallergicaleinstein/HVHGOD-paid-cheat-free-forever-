// FUN_18052c6c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052c6c0 */

undefined8 FUN_18052c6c0(void)

{
  float *pfVar1;
  bool bVar2;
  
  if (DAT_1808e6670 == '\0') {
    return 1;
  }
  pfVar1 = (float *)&DAT_1808e67d0;
  do {
    if (pfVar1[-0x3e] != pfVar1[-2]) {
      DAT_1808e6673 = 1;
      return 0;
    }
    if (pfVar1[-0x3d] != pfVar1[-1]) {
      DAT_1808e6673 = 1;
      return 0;
    }
    if (pfVar1[-0x3c] != *pfVar1) {
      DAT_1808e6673 = 1;
      return 0;
    }
    if (pfVar1[-0x3b] != pfVar1[1]) {
      DAT_1808e6673 = 1;
      return 0;
    }
    if (pfVar1[-0x3a] != pfVar1[2]) {
      DAT_1808e6673 = 1;
      return 0;
    }
    if (pfVar1[-0x39] != pfVar1[3]) {
      DAT_1808e6673 = 1;
      return 0;
    }
    if (pfVar1[-0x38] != pfVar1[4]) {
      DAT_1808e6673 = 1;
      return 0;
    }
    bVar2 = pfVar1 != (float *)0x1808e6840;
    pfVar1 = pfVar1 + 7;
  } while (bVar2);
  if ((((DAT_1808e6764 == DAT_1808e6854) && (DAT_1808e6768 == DAT_1808e6858)) &&
      (DAT_1808e676c == DAT_1808e685c)) &&
     (((DAT_1808e6770 == DAT_1808e6860 && (DAT_1808e6774 == DAT_1808e6864)) &&
      (DAT_1808e6778 == DAT_1808e6868)))) {
    FUN_1805260a0(0);
    return 0;
  }
  DAT_1808e6673 = 1;
  return 0;
}



