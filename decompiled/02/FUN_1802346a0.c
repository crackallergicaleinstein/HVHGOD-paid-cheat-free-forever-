// FUN_1802346a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802346a0 */

void FUN_1802346a0(void)

{
  int iVar1;
  
  iVar1 = FUN_1805f68d0(&DAT_1808edc30);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808edc7c == 0x7fffffff) {
    DAT_1808edc7c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  DAT_1808edc84 = 0;
  DAT_1808edc80 = 0;
  FUN_1805f68fc(&DAT_1808edc30);
  return;
}



