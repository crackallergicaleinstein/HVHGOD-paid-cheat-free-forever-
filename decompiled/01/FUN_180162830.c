// FUN_180162830 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180162830 */

void FUN_180162830(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1805f68d0();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  return;
}



