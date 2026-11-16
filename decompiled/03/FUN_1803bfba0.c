// FUN_1803bfba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803bfba0 */

void FUN_1803bfba0(longlong param_1,ulonglong param_2,uint param_3,byte param_4)

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
  if (*(ulonglong *)(param_1 + 0x650) <= param_2) {
    if (param_2 != *(ulonglong *)(param_1 + 0x650)) {
      *(ulonglong *)(param_1 + 0x650) = param_2;
      *(undefined4 *)(param_1 + 0x660) = 0;
      *(undefined2 *)(param_1 + 0x664) = 0;
    }
    *(uint *)(param_1 + 0x660) = *(uint *)(param_1 + 0x660) | param_3;
    *(byte *)(param_1 + 0x664) = *(byte *)(param_1 + 0x664) | param_4;
    *(undefined1 *)(param_1 + 0x665) = 1;
  }
  FUN_1805f68fc(param_1);
  return;
}



