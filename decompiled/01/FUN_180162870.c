// FUN_180162870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180162870 */

longlong * FUN_180162870(longlong *param_1,longlong param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = FUN_1805f68d0(param_2);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_2 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(param_2 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  return param_1;
}



