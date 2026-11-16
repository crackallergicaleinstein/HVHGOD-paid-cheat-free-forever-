// FUN_1805bd070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bd070 */

void FUN_1805bd070(longlong param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  
  if ((uint)(*(longlong *)(param_1 + 0x18) - *(longlong *)(param_1 + 0x10) >> 3) < param_2) {
    piVar1 = *(int **)(param_1 + 8);
    if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
      *piVar1 = 0x82;
      return;
    }
  }
  else {
    *(undefined4 *)((ulonglong)param_2 * 8 + *(longlong *)(param_1 + 0x10)) = param_3;
    *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4 + (ulonglong)param_2 * 8) = 0;
  }
  return;
}



