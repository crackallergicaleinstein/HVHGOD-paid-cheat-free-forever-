// FUN_180509800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180509800 */

longlong FUN_180509800(longlong param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int local_18 [4];
  
  local_18[3] = 2;
  local_18[2] = 0;
  piVar3 = local_18 + 2;
  if (-1 < *(int *)(param_1 + 0x6c)) {
    piVar3 = (int *)(param_1 + 0x6c);
  }
  piVar2 = local_18 + 3;
  if (*(int *)(param_1 + 0x6c) < 3) {
    piVar2 = piVar3;
  }
  iVar1 = *piVar2;
  *(int *)(param_1 + 0x6c) = iVar1;
  if (iVar1 != 1) {
    if (iVar1 != 2) {
      return param_1 + 0xa0;
    }
    local_18[0] = 0x21;
    local_18[1] = 0;
    piVar3 = local_18 + 1;
    if (-1 < *(int *)(param_1 + 0x74)) {
      piVar3 = (int *)(param_1 + 0x74);
    }
    piVar2 = local_18;
    if (*(int *)(param_1 + 0x74) < 0x22) {
      piVar2 = piVar3;
    }
    iVar1 = *piVar2;
    *(int *)(param_1 + 0x74) = iVar1;
    lVar4 = (longlong)iVar1 * 0x6e8 + param_1;
    if (*(char *)((longlong)iVar1 + 0x7e + param_1) == '\0') {
      FUN_180509440(lVar4 + 0x30f8,param_1 + 0xa0);
    }
    return lVar4 + 0x30f8;
  }
  local_18[1] = 5;
  local_18[0] = 0;
  piVar3 = local_18;
  if (-1 < *(int *)(param_1 + 0x70)) {
    piVar3 = (int *)(param_1 + 0x70);
  }
  piVar2 = local_18 + 1;
  if (*(int *)(param_1 + 0x70) < 6) {
    piVar2 = piVar3;
  }
  iVar1 = *piVar2;
  *(int *)(param_1 + 0x70) = iVar1;
  lVar4 = (longlong)iVar1 * 0x6e8 + param_1;
  if (*(char *)((longlong)iVar1 + 0x78 + param_1) == '\0') {
    FUN_180509440(lVar4 + 0x788,param_1 + 0xa0);
  }
  return lVar4 + 0x788;
}



