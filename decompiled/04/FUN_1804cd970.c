// FUN_1804cd970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cd970 */

void FUN_1804cd970(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 + 0x2858);
  if (*(longlong *)(param_1 + 0x2850) == 0) {
    FUN_1804b1960(piVar1);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x285c);
    if (iVar2 < 0) {
      iVar2 = iVar2 / 2 + iVar2;
      iVar4 = 0;
      if (0 < iVar2) {
        iVar4 = iVar2;
      }
      FUN_1804d0ea0(piVar1,iVar4);
    }
    *piVar1 = 0;
    FUN_1804b1960(piVar1,param_2,param_3);
    iVar2 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = 0;
    }
    puVar3 = &DAT_180bb8ac1;
    if (*(undefined **)(param_1 + 0x2860) != (undefined *)0x0) {
      puVar3 = *(undefined **)(param_1 + 0x2860);
    }
    FUN_180610c34(puVar3,1,(longlong)iVar2,*(undefined8 *)(param_1 + 0x2850));
  }
  return;
}



