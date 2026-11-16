// FUN_180111410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180111410 */

void FUN_180111410(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_18 [6];
  
  local_18[1] = 2;
  local_18[0] = 0;
  piVar3 = local_18;
  if (-1 < *param_1) {
    piVar3 = param_1;
  }
  piVar2 = param_1 + 1;
  piVar1 = local_18 + 1;
  if (*param_1 < 3) {
    piVar1 = piVar3;
  }
  *param_1 = *piVar1;
  local_18[0] = 6;
  local_18[1] = 0;
  piVar3 = local_18 + 1;
  if (-1 < *piVar2) {
    piVar3 = piVar2;
  }
  piVar1 = local_18;
  if (*piVar2 < 7) {
    piVar1 = piVar3;
  }
  *piVar2 = *piVar1;
  param_1 = param_1 + 2;
  local_18[0] = 0x2b;
  local_18[1] = 0;
  piVar3 = local_18 + 1;
  if (-1 < *param_1) {
    piVar3 = param_1;
  }
  piVar2 = local_18;
  if (*param_1 < 0x2c) {
    piVar2 = piVar3;
  }
  *param_1 = *piVar2;
  return;
}



