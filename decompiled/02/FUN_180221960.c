// FUN_180221960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180221960 */

void FUN_180221960(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  iVar4 = FUN_1805f68d0(lVar1);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(lVar1 + 0x4c) == 0x7fffffff) {
    *(undefined4 *)(lVar1 + 0x4c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  *(undefined1 *)(*param_1 + 0x2c4) = 0;
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x1a0);
  lVar5 = *(longlong *)(lVar2 + 0x198);
  if (lVar5 != lVar3) {
    do {
      FUN_18015c010(lVar5 + 0x30);
      lVar5 = lVar5 + 0x128;
    } while (lVar5 != lVar3);
    *(undefined8 *)(lVar2 + 0x1a0) = *(undefined8 *)(lVar2 + 0x198);
  }
  FUN_1805f68fc(lVar1);
  return;
}



