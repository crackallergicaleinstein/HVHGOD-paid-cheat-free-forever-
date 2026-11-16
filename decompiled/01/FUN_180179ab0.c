// FUN_180179ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180179ab0 */

void FUN_180179ab0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18017d0c0(1);
  }
  if ((char)param_1[1] != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_18017d0c0(0x24);
  }
  iVar2 = FUN_1805f68d0(lVar1);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(lVar1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



