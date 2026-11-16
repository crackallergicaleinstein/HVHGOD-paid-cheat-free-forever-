// FUN_18058a350 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058a350 */

void FUN_18058a350(undefined8 param_1,longlong param_2,ushort param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)(*(longlong *)(param_2 + 8) + 4 + (ulonglong)param_3 * 8);
  *piVar1 = *piVar1 + param_4;
  return;
}



