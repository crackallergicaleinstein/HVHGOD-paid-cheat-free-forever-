// FUN_18024b690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18024b690 */

undefined4 * FUN_18024b690(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  ULONGLONG UVar5;
  
  iVar4 = FUN_1805f68d0(param_1 + 0x28);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x74) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x74) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  UVar5 = GetTickCount64();
  cVar3 = FUN_180244a20(param_1 + 0xa0,param_3,UVar5);
  if (cVar3 == '\0') {
    *(undefined1 *)(param_2 + 3) = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0xbc);
    uVar2 = *(undefined4 *)(param_1 + 0xc0);
    *param_2 = *(undefined4 *)(param_1 + 0xb8);
    param_2[1] = uVar1;
    param_2[2] = uVar2;
    *(undefined1 *)(param_2 + 3) = 1;
  }
  FUN_1805f68fc(param_1 + 0x28);
  return param_2;
}



