// FUN_1803b1fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b1fc0 */

void FUN_1803b1fc0(void)

{
  int iVar1;
  
  iVar1 = FUN_1805f68d0(&DAT_180902da0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180902dec == 0x7fffffff) {
    DAT_180902dec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_1803829b0();
  FUN_1805f68fc(&DAT_180902da0);
  return;
}



