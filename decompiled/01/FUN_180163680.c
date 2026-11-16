// FUN_180163680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163680 */

void FUN_180163680(longlong param_1)

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
  if (*(int *)(param_1 + 0xb0) < 2) {
    *(undefined4 *)(param_1 + 0xb0) = 2;
  }
  FUN_1805f6a54(param_1);
  FUN_1805f68fc(param_1 + 0x48);
  return;
}



