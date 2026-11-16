// FUN_18058c580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058c580 */

void FUN_18058c580(longlong param_1,ulonglong param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_18058c4a0();
  if (*(int *)(param_1 + 0x20) == 0) {
    uVar2 = FUN_18058a170(param_1);
    iVar3 = FUN_180573310(param_3,uVar2);
    piVar1 = (int *)(*(longlong *)(param_1 + 0x200) + (param_2 & 0xffffffff) * 4);
    *piVar1 = *piVar1 + iVar3;
  }
  return;
}



