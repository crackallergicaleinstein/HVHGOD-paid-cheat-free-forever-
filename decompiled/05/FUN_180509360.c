// FUN_180509360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180509360 */

void FUN_180509360(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1805f68d0(param_1 + 0x30);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x7c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x7c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  *(undefined8 *)(param_1 + 0xe0) = 0;
  FUN_1805f68fc(param_1 + 0x30);
  return;
}



