// FUN_18055ebb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055ebb0 */

int * FUN_18055ebb0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int local_18 [6];
  
  local_18[1] = 6;
  local_18[0] = 0;
  piVar5 = local_18 + 2;
  if (-1 < *param_1) {
    piVar5 = param_1;
  }
  local_18[3] = 2;
  local_18[2] = 0;
  piVar6 = param_1 + 1;
  piVar4 = local_18 + 3;
  if (*param_1 < 3) {
    piVar4 = piVar5;
  }
  iVar1 = *piVar4;
  *param_1 = iVar1;
  piVar5 = local_18;
  if (-1 < *piVar6) {
    piVar5 = piVar6;
  }
  piVar4 = local_18 + 1;
  if (*piVar6 < 7) {
    piVar4 = piVar5;
  }
  iVar2 = *piVar4;
  *piVar6 = iVar2;
  piVar5 = param_1 + 2;
  local_18[0] = 0x2b;
  piVar6 = local_18 + 1;
  if (-1 < *piVar5) {
    piVar6 = piVar5;
  }
  local_18[1] = 0;
  piVar4 = local_18;
  if (*piVar5 < 0x2c) {
    piVar4 = piVar6;
  }
  iVar3 = *piVar4;
  *piVar5 = iVar3;
  if (iVar1 == 1) {
    return param_1 + (longlong)iVar2 * 0x94 + 0x98;
  }
  if (iVar1 == 2) {
    return param_1 + (longlong)iVar3 * 0x94 + 0x4a4;
  }
  return param_1 + 4;
}



