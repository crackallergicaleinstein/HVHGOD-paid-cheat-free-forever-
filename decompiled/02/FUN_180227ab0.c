// FUN_180227ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180227ab0 */

void FUN_180227ab0(void)

{
  int iVar1;
  
  LOCK();
  DAT_180bbec80 = 0;
  UNLOCK();
  iVar1 = FUN_1805f68d0(&DAT_1808e6b40);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e6b8c == 0x7fffffff) {
    DAT_1808e6b8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_1801d7520();
  FUN_1805f68fc(&DAT_1808e6b40);
  FUN_18044e4e0(&DAT_180bbec20);
  return;
}



