// FUN_180509ec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180509ec0 */

int * FUN_180509ec0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  int local_18 [4];
  
  local_18[3] = 2;
  local_18[2] = 0;
  piVar4 = local_18 + 2;
  if (-1 < *param_1) {
    piVar4 = param_1;
  }
  piVar3 = local_18 + 3;
  if (*param_1 < 3) {
    piVar3 = piVar4;
  }
  iVar1 = *piVar3;
  *param_1 = iVar1;
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return param_1 + 0xe;
    }
    local_18[0] = 0x21;
    local_18[1] = 0;
    piVar4 = local_18 + 1;
    if (-1 < param_1[2]) {
      piVar4 = param_1 + 2;
    }
    piVar3 = local_18;
    if (param_1[2] < 0x22) {
      piVar3 = piVar4;
    }
    lVar2 = (longlong)*piVar3;
    param_1[2] = *piVar3;
    if (*(char *)(lVar2 + 0x12 + (longlong)param_1) == '\0') {
      FUN_180509920(param_1 + lVar2 * 0x2dc + 0x1412,param_1 + 0xe);
    }
    return param_1 + lVar2 * 0x2dc + 0x1412;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  piVar4 = local_18;
  if (-1 < param_1[1]) {
    piVar4 = param_1 + 1;
  }
  piVar3 = local_18 + 1;
  if (param_1[1] < 6) {
    piVar3 = piVar4;
  }
  lVar2 = (longlong)*piVar3;
  param_1[1] = *piVar3;
  if (*(char *)(lVar2 + 0xc + (longlong)param_1) == '\0') {
    FUN_180509920(param_1 + lVar2 * 0x2dc + 0x2ea,param_1 + 0xe);
  }
  return param_1 + lVar2 * 0x2dc + 0x2ea;
}



