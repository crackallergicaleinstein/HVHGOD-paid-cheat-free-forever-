// FUN_18058a360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058a360 */

void FUN_18058a360(longlong param_1,longlong param_2,ushort param_3,int param_4)

{
  int *piVar1;
  byte *pbVar2;
  
  if (*(int *)(param_1 + 0x324) == 0) {
    piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + (ulonglong)param_3 * 8);
    *piVar1 = *piVar1 + param_4;
  }
  pbVar2 = (byte *)(*(longlong *)(param_2 + 0x20) + (ulonglong)param_3);
  *pbVar2 = *pbVar2 | 8;
  return;
}



