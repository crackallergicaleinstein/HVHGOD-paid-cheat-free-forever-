// FUN_18017cc60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017cc60 */

void FUN_18017cc60(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
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
  FUN_1805f6a54(param_1 + 2);
  FUN_1805f68fc(lVar1);
  return;
}



