// FUN_1805aaa90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aaa90 */

int FUN_1805aaa90(longlong param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_2 - *(int *)(param_1 + 0x18);
  iVar1 = uVar2 + 1;
  if (*(uint *)(param_1 + 0x1c) <= uVar2) {
    iVar1 = 0;
  }
  return iVar1;
}



