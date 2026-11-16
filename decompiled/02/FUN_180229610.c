// FUN_180229610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180229610 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180229610(void)

{
  int iVar1;
  uint7 uStack_f;
  
  iVar1 = FUN_1805f68d0(&DAT_1808db030);
  if (iVar1 != 0) {
LAB_180229738:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808db07c == 0x7fffffff) {
    DAT_1808db07c = 0x7ffffffe;
  }
  else {
    DAT_180bbed40 = 0;
    DAT_180bbed48 = 0;
    DAT_180bbed50 = 0;
    _DAT_180bbed58 = 0;
    _DAT_180bbed78 = (ulonglong)uStack_f << 8;
    DAT_180bbed60 = 0;
    DAT_180bbed68 = 0;
    _DAT_180bbed70 = 0;
    FUN_18044e4e0(&DAT_180bbece0);
    FUN_1805f68fc(&DAT_1808db030);
    iVar1 = FUN_1805f68d0(&DAT_1808db080);
    if (iVar1 != 0) goto LAB_180229738;
    if (DAT_1808db0cc != 0x7fffffff) {
      DAT_180bbede0 = 0;
      _DAT_180bbede8 = 0;
      DAT_180bbedf0 = 0;
      DAT_180bbedf8 = 0;
      _DAT_180bbee00 = (undefined1  [16])0x0;
      FUN_18044e4e0(&DAT_180bbed80);
      FUN_1805f68fc(&DAT_1808db080);
      return;
    }
    DAT_1808db0cc = 0x7ffffffe;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1805f6d44(6);
}



