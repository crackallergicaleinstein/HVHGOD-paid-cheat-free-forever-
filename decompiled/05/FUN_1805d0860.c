// FUN_1805d0860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d0860 */

void FUN_1805d0860(longlong param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  param_3 = param_3 - *(int *)(param_1 + 0x18);
  if (((param_3 < 0) || (*(int *)(param_1 + 0x20) <= param_3)) ||
     (*(int *)(param_1 + 0x14) <= param_2)) {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x38);
    return;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x40) + (longlong)param_3 * 8);
  iVar2 = *(int *)(param_1 + 0x10) + -1;
  if (param_2 <= iVar2) {
    param_2 = iVar2;
  }
  piVar3 = *(int **)piVar1;
  iVar2 = *piVar3;
  while (iVar2 <= param_2) {
    if (iVar2 == param_2) goto LAB_1805d08db;
    piVar1 = piVar3 + 4;
    piVar3 = *(int **)(piVar3 + 4);
    iVar2 = *piVar3;
  }
  piVar3 = *(int **)(param_1 + 0x30);
  if (piVar3 == *(int **)(param_1 + 0x38)) {
    *(undefined4 *)(param_1 + 0x24) = 0x62;
    *(int **)(param_1 + 0x28) = piVar3;
    return;
  }
  *(int **)(param_1 + 0x30) = piVar3 + 6;
  piVar3[1] = 0;
  piVar3[2] = 0;
  *piVar3 = param_2;
  *(undefined8 *)(piVar3 + 4) = *(undefined8 *)piVar1;
  *(int **)piVar1 = piVar3;
LAB_1805d08db:
  *(int **)(param_1 + 0x28) = piVar3;
  return;
}



