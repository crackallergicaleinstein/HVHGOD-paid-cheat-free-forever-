// FUN_1805093c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805093c0 */

void FUN_1805093c0(longlong param_1)

{
  int iVar1;
  
  LOCK();
  *(undefined8 *)(param_1 + 0x1048) = 0;
  UNLOCK();
  *(undefined8 *)(param_1 + 0x10c8) = 0;
  iVar1 = FUN_1805f68d0(param_1 + 0x9b0);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x9fc) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x9fc) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  *(undefined8 *)(param_1 + 0xa60) = 0;
  FUN_1805f68fc(param_1 + 0x9b0);
  return;
}



