// FUN_18048c9d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048c9d0 */

int FUN_18048c9d0(undefined8 *param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)param_1[2];
  if ((*(int *)param_1[2] <= param_3) && (iVar5 = param_3, *(int *)param_1[3] < param_3)) {
    iVar5 = *(int *)param_1[3];
  }
  puVar4 = param_1;
  if (param_2 == 0) {
    puVar4 = param_1 + 1;
  }
  **(int **)*puVar4 = iVar5;
  piVar2 = *(int **)*param_1;
  iVar5 = *piVar2;
  piVar3 = *(int **)param_1[1];
  iVar1 = *piVar3;
  if (iVar5 < iVar1) {
    *piVar3 = iVar5;
    *piVar2 = iVar1;
    return 1 - param_2;
  }
  return param_2;
}



