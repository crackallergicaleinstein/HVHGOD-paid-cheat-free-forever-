// FUN_18058c540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058c540 */

void FUN_18058c540(longlong param_1,uint param_2,int param_3)

{
  int *piVar1;
  
  FUN_18058c4a0();
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4);
    *piVar1 = *piVar1 + param_3;
  }
  return;
}



