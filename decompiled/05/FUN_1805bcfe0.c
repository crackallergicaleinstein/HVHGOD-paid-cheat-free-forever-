// FUN_1805bcfe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bcfe0 */

undefined4 FUN_1805bcfe0(longlong param_1)

{
  longlong lVar1;
  int *piVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 == *(longlong *)(param_1 + 0x10)) {
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0xa1;
      return 0;
    }
  }
  else {
    if (*(int *)(lVar1 + -4) == 2) {
      *(undefined4 **)(param_1 + 0x18) = (undefined4 *)(lVar1 + -8);
      return *(undefined4 *)(lVar1 + -8);
    }
    piVar2 = *(int **)(param_1 + 8);
    if ((piVar2 != (int *)0x0) && (*piVar2 == 0)) {
      *piVar2 = 0xa0;
    }
  }
  return 0;
}



