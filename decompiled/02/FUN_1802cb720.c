// FUN_1802cb720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802cb720 */

void FUN_1802cb720(byte param_1)

{
  int iVar1;
  
  iVar1 = FUN_1805f68d0(&DAT_1808fd888);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808fd8d4 == 0x7fffffff) {
    DAT_1808fd8d4 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  DAT_1808fd8e0 = DAT_1808fd8e0 | param_1;
  FUN_1802cb260();
  DAT_1808fd8d8 = 0;
  FUN_1805f68fc(&DAT_1808fd888);
  return;
}



