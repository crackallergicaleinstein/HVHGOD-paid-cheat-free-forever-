// FUN_180386a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180386a70 */

void FUN_180386a70(char param_1)

{
  int iVar1;
  
  DAT_1808e6c00 = param_1;
  if (param_1 == '\0') {
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
    LOCK();
    DAT_180c630d0 = 0;
    UNLOCK();
    LOCK();
    DAT_180c63128 = 0;
    UNLOCK();
    LOCK();
    DAT_180c630d8 = 0;
    UNLOCK();
    LOCK();
    DAT_180c63100 = 0;
    UNLOCK();
    LOCK();
    DAT_180c63118 = 0;
    UNLOCK();
  }
  return;
}



