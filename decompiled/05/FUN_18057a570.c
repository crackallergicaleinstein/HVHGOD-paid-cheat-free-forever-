// FUN_18057a570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057a570 */

void FUN_18057a570(int *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  lVar1 = *param_2;
  piVar4 = (int *)(lVar1 + 0x158);
  if (param_3 == 3) {
    iVar3 = *piVar4;
    if (*piVar4 <= *(int *)(lVar1 + 0x160)) {
      iVar3 = *(int *)(lVar1 + 0x160);
    }
    iVar2 = *(int *)(lVar1 + 0x168);
    if (*(int *)(lVar1 + 0x168) < iVar3) {
      iVar2 = iVar3;
    }
    *param_1 = *param_1 - iVar2;
    iVar3 = *piVar4;
    if (*(int *)(lVar1 + 0x160) <= *piVar4) {
      iVar3 = *(int *)(lVar1 + 0x160);
    }
    iVar2 = *(int *)(lVar1 + 0x168);
    if (iVar3 < *(int *)(lVar1 + 0x168)) {
      iVar2 = iVar3;
    }
    param_1[2] = param_1[2] - iVar2;
    iVar3 = *(int *)(lVar1 + 0x15c);
    if (*(int *)(lVar1 + 0x15c) <= *(int *)(lVar1 + 0x164)) {
      iVar3 = *(int *)(lVar1 + 0x164);
    }
    iVar2 = *(int *)(lVar1 + 0x16c);
    if (*(int *)(lVar1 + 0x16c) < iVar3) {
      iVar2 = iVar3;
    }
    param_1[1] = param_1[1] - iVar2;
    iVar3 = *(int *)(lVar1 + 0x15c);
    if (*(int *)(lVar1 + 0x164) <= *(int *)(lVar1 + 0x15c)) {
      iVar3 = *(int *)(lVar1 + 0x164);
    }
    iVar2 = *(int *)(lVar1 + 0x16c);
    if (iVar3 < *(int *)(lVar1 + 0x16c)) {
      iVar2 = iVar3;
    }
    param_1[3] = param_1[3] - iVar2;
    return;
  }
  if (param_3 == 4) {
    iVar3 = *(int *)(lVar1 + 0x15c);
    if (*(int *)(lVar1 + 0x15c) <= *(int *)(lVar1 + 0x164)) {
      iVar3 = *(int *)(lVar1 + 0x164);
    }
    iVar2 = *(int *)(lVar1 + 0x16c);
    if (*(int *)(lVar1 + 0x16c) < iVar3) {
      iVar2 = iVar3;
    }
    *param_1 = *param_1 - iVar2;
    iVar3 = *(int *)(lVar1 + 0x15c);
    if (*(int *)(lVar1 + 0x164) <= *(int *)(lVar1 + 0x15c)) {
      iVar3 = *(int *)(lVar1 + 0x164);
    }
    iVar2 = *(int *)(lVar1 + 0x16c);
    if (iVar3 < *(int *)(lVar1 + 0x16c)) {
      iVar2 = iVar3;
    }
    param_1[2] = param_1[2] - iVar2;
    iVar3 = *piVar4;
    if (*(int *)(lVar1 + 0x160) <= *piVar4) {
      iVar3 = *(int *)(lVar1 + 0x160);
    }
    iVar2 = *(int *)(lVar1 + 0x168);
    if (iVar3 < *(int *)(lVar1 + 0x168)) {
      iVar2 = iVar3;
    }
    param_1[1] = param_1[1] + iVar2;
    iVar3 = *piVar4;
    if (*piVar4 <= *(int *)(lVar1 + 0x160)) {
      iVar3 = *(int *)(lVar1 + 0x160);
    }
    iVar2 = *(int *)(lVar1 + 0x168);
    if (*(int *)(lVar1 + 0x168) < iVar3) {
      iVar2 = iVar3;
    }
    param_1[3] = param_1[3] + iVar2;
  }
  return;
}



