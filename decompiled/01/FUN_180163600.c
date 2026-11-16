// FUN_180163600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163600 */

void FUN_180163600(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1805f68d0(param_1 + 0x48);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x94) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x94) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  iVar1 = *(int *)(param_1 + 0xb0);
  while (iVar1 < 2) {
    FUN_1805f6a84(param_1,param_1 + 0x48);
    iVar1 = *(int *)(param_1 + 0xb0);
  }
  FUN_1805f68fc(param_1 + 0x48);
  return;
}



