// FUN_18058a380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058a380 */

void FUN_18058a380(longlong param_1,longlong param_2,ushort param_3,int param_4)

{
  byte *pbVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x324) != 7) {
    piVar2 = (int *)(*(longlong *)(param_2 + 0x10) + 4 + (ulonglong)param_3 * 8);
    *piVar2 = *piVar2 + param_4;
  }
  pbVar1 = (byte *)(*(longlong *)(param_2 + 0x20) + (ulonglong)param_3);
  *pbVar1 = *pbVar1 | 0x10;
  return;
}



