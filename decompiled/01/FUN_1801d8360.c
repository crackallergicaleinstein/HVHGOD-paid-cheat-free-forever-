// FUN_1801d8360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d8360 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801d8360(undefined8 *param_1,char param_2)

{
  int iVar1;
  ULONGLONG UVar2;
  
  iVar1 = FUN_1805f68d0(&DAT_1808e6bb0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808e6bfc == 0x7fffffff) {
    DAT_1808e6bfc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  _DAT_180c63108 = *param_1;
  _DAT_180c63110 = param_1[1];
  if ((param_2 == '\0') || (DAT_1808e6c00 == '\0')) {
    LOCK();
    DAT_180c63128 = 0;
    UNLOCK();
    if (param_2 == '\0') {
      LOCK();
      DAT_180c63118 = 0;
      UNLOCK();
    }
  }
  else {
    UVar2 = GetTickCount64();
    DAT_180c63128 = UVar2 + 0xfa;
    LOCK();
    UNLOCK();
  }
  FUN_1805f68fc(&DAT_1808e6bb0);
  return;
}



