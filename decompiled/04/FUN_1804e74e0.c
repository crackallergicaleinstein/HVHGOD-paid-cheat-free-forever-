// FUN_1804e74e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e74e0 */

void FUN_1804e74e0(longlong param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == -1) {
    param_2 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x24);
  }
  if (param_3 == -1) {
    param_3 = *(int *)(*(longlong *)(param_1 + 0x38) + 0x28);
  }
  if (param_2 < param_3) {
    iVar2 = param_2 * 2;
    iVar3 = param_3;
  }
  else {
    iVar3 = param_3 * 2;
    iVar2 = param_2;
  }
  uVar1 = *(int *)(param_1 + 8) + -1 + *(int *)(*(longlong *)(param_1 + 0xa0) + 0xa8);
  uVar1 = (int)uVar1 >> 1 | uVar1;
  uVar1 = (int)uVar1 >> 2 | uVar1;
  uVar1 = (int)uVar1 >> 4 | uVar1;
  uVar1 = (int)uVar1 >> 8 | uVar1;
  iVar4 = ((int)uVar1 >> 0x10 | uVar1) + 1;
  if (iVar4 <= iVar2) {
    iVar4 = iVar2;
  }
  uVar1 = *(int *)(param_1 + 8) + -1 + *(int *)(*(longlong *)(param_1 + 0xa0) + 0xac);
  uVar1 = (int)uVar1 >> 1 | uVar1;
  uVar1 = (int)uVar1 >> 2 | uVar1;
  uVar1 = (int)uVar1 >> 4 | uVar1;
  uVar1 = (int)uVar1 >> 8 | uVar1;
  iVar2 = (uVar1 | (int)uVar1 >> 0x10) + 1;
  if (iVar2 <= iVar3) {
    iVar2 = iVar3;
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0xc) <= iVar4) {
    iVar3 = iVar4;
    if (*(int *)(param_1 + 0x14) < iVar4) {
      iVar3 = *(int *)(param_1 + 0x14);
    }
  }
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) <= iVar2) {
    iVar4 = iVar2;
    if (*(int *)(param_1 + 0x18) < iVar2) {
      iVar4 = *(int *)(param_1 + 0x18);
    }
  }
  if ((iVar3 != param_2) || (iVar4 != param_3)) {
    FUN_1804e6ef0(param_1);
  }
  return;
}



