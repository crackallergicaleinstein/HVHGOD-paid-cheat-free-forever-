// FUN_1801d80f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d80f0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801d80f0(void)

{
  int iVar1;
  
  iVar1 = FUN_1805f68d0(&DAT_1808e6b40);
  if (iVar1 != 0) {
LAB_1801d8217:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e6b8c == 0x7fffffff) {
    DAT_1808e6b8c = 0x7ffffffe;
  }
  else {
    FUN_1801d7520();
    FUN_1805f68fc();
    LOCK();
    DAT_180c63119 = 0;
    UNLOCK();
    LOCK();
    DAT_180c630c8 = 0;
    UNLOCK();
    LOCK();
    DAT_180c63120 = 0;
    UNLOCK();
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
    DAT_180c630e8 = 0;
    UNLOCK();
    LOCK();
    DAT_180c630e0 = 0;
    UNLOCK();
    LOCK();
    DAT_180c630f8 = 0;
    UNLOCK();
    LOCK();
    DAT_180c630f0 = 0;
    UNLOCK();
    iVar1 = FUN_1805f68d0(&DAT_1808e6bb0);
    if (iVar1 != 0) goto LAB_1801d8217;
    if (DAT_1808e6bfc != 0x7fffffff) {
      DAT_1808e6b90 = 0;
      _DAT_1808e6b9c = 0;
      _DAT_1808e6ba0 = 0;
      _DAT_1808e6ba4 = 0;
      DAT_1808e6ba8._4_4_ = 0;
      _DAT_1808e6b98 = 0xffffffff;
      DAT_1808e6ba8._0_4_ = 0xffffffff;
      FUN_1805f68fc(&DAT_1808e6bb0);
      return;
    }
    DAT_1808e6bfc = 0x7ffffffe;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1805f6d44(6);
}



