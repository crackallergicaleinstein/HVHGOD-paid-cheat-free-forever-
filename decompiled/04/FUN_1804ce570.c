// FUN_1804ce570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ce570 */

int * FUN_1804ce570(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x2c4) != -1) {
    return (int *)((longlong)*(int *)(param_1 + 0x2c4) + *(longlong *)(DAT_180bb8ae8 + 0x27a8));
  }
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x27a8);
  piVar2 = (int *)0x0;
  if (lVar1 != 0) {
    piVar2 = (int *)(lVar1 + 4);
  }
  if (piVar2 != (int *)0x0) {
    do {
      if ((*piVar2 == *(int *)(param_1 + 0x10)) && ((*(byte *)((longlong)piVar2 + 0xe) & 8) == 0)) {
        return piVar2;
      }
      piVar3 = (int *)((longlong)piVar2[-1] + (longlong)piVar2);
      piVar2 = (int *)0x0;
      if (piVar3 != (int *)((longlong)*(int *)(DAT_180bb8ae8 + 0x27a0) + 4 + lVar1)) {
        piVar2 = piVar3;
      }
    } while (piVar2 != (int *)0x0);
  }
  return (int *)0x0;
}



