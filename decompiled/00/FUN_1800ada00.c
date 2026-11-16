// FUN_1800ada00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ada00 */

longlong FUN_1800ada00(longlong param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  longlong lVar4;
  int local_18 [4];
  
  lVar4 = (longlong)param_2;
  iVar1 = *(int *)(param_1 + 0x5180 + lVar4 * 4);
  local_18[1] = 2;
  local_18[0] = 0;
  piVar3 = local_18;
  if (-1 < iVar1) {
    piVar3 = (int *)(param_1 + 0x5180 + lVar4 * 4);
  }
  piVar2 = local_18 + 1;
  if (iVar1 < 3) {
    piVar2 = piVar3;
  }
  if (*piVar2 == 1) {
    if ((-1 < param_3) && (*(char *)((longlong)param_3 + (lVar4 + 0xd74) * 6 + param_1) != '\0')) {
      return ((longlong)param_3 + 1) * 0x1f8 + param_1;
    }
  }
  else if (((*piVar2 == 2) && (-1 < param_4)) &&
          (*(char *)(lVar4 * 0x22 + (longlong)param_4 + 0x50d6 + param_1) != '\0')) {
    return ((longlong)param_4 + 7) * 0x1f8 + param_1;
  }
  return param_1;
}



