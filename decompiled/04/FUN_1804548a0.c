// FUN_1804548a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804548a0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1804548a0(void)

{
  uint uVar1;
  ulonglong uVar2;
  
  if ((DAT_180cd50a0 & 1) != 0) {
    return &DAT_180cd50b0;
  }
  DAT_180cd50a0 = DAT_180cd50a0 | 1;
  uVar1 = FUN_180605370();
  _DAT_180cd6434 = 0xffffffff;
  uVar2 = 1;
  _DAT_180cd50b4 = uVar1;
  do {
    uVar1 = (uVar1 >> 0x1e ^ uVar1) * 0x6c078965 + (int)uVar2;
    *(uint *)(&DAT_180cd50b4 + uVar2 * 4) = uVar1;
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x270);
  _DAT_180cd50b0 = 0x270;
  return &DAT_180cd50b0;
}



