// FUN_18057bc10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057bc10 */

void FUN_18057bc10(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  if (iVar1 < 0) {
    if (iVar1 <= iVar2) {
      iVar1 = iVar2;
    }
    iVar2 = iVar1;
  }
  else if (0 < iVar1) {
    iVar2 = iVar2 - iVar1;
  }
  if (param_2 == 0) {
    param_2 = (iVar2 * 0xc) / 10;
  }
  *(int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10) / 2;
  *(int *)(param_1 + 0x18) = (param_2 - iVar2) / 2;
  return;
}



