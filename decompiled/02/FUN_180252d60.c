// FUN_180252d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180252d60 */

longlong FUN_180252d60(longlong param_1,undefined8 param_2,short param_3)

{
  int iVar1;
  ulonglong uVar2;
  short *psVar3;
  int *piVar4;
  int *piVar5;
  int local_18 [6];
  
  uVar2 = 0;
  local_18[1] = 2;
  local_18[0] = 0;
  piVar5 = local_18;
  if (-1 < *(int *)(param_1 + 0x6c)) {
    piVar5 = (int *)(param_1 + 0x6c);
  }
  piVar4 = local_18 + 1;
  if (*(int *)(param_1 + 0x6c) < 3) {
    piVar4 = piVar5;
  }
  if (*piVar4 == 1) {
    psVar3 = &DAT_1806ff9d8;
    do {
      if (*psVar3 == param_3) {
        if (((-1 < (int)uVar2) && (iVar1 = (&DAT_1806ff9dc)[(longlong)(int)uVar2 * 8], -1 < iVar1))
           && (*(char *)((longlong)iVar1 + 0x78 + param_1) != '\0')) {
          return (longlong)iVar1 * 0x6e8 + 0x788 + param_1;
        }
        break;
      }
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 0x10;
    } while (uVar2 < 0x22);
  }
  else if (*piVar4 == 2) {
    psVar3 = &DAT_1806ff9d8;
    while (*psVar3 != param_3) {
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 0x10;
      if (0x21 < uVar2) {
        return param_1 + 0xa0;
      }
    }
    iVar1 = (int)uVar2;
    if ((-1 < iVar1) && (*(char *)((longlong)iVar1 + 0x7e + param_1) != '\0')) {
      return (longlong)iVar1 * 0x6e8 + 0x30f8 + param_1;
    }
  }
  return param_1 + 0xa0;
}



