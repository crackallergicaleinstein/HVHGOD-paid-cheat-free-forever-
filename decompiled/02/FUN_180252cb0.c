// FUN_180252cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180252cb0 */

int FUN_180252cb0(longlong param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_res10 [2];
  int local_res18 [4];
  
  iVar8 = 0;
  local_res18[0] = 4;
  piVar4 = (int *)(param_1 + 0x2ac);
  local_res10[0] = 0;
  iVar1 = *piVar4;
  piVar6 = local_res10;
  if (-1 < iVar1) {
    piVar6 = piVar4;
  }
  piVar2 = local_res18;
  if (iVar1 < 5) {
    piVar2 = piVar6;
  }
  iVar7 = *piVar2 + -2;
  lVar5 = (longlong)iVar7;
  if (-1 < iVar7) {
    pcVar3 = (char *)((lVar5 + 3) * 0x70 + param_1);
    do {
      if (*pcVar3 != '\0') {
        return iVar7 + 1;
      }
      iVar7 = iVar7 + -1;
      pcVar3 = pcVar3 + -0x70;
      lVar5 = lVar5 + -1;
    } while (-1 < lVar5);
  }
  local_res18[0] = 4;
  local_res10[0] = 0;
  piVar6 = local_res10;
  if (-1 < iVar1) {
    piVar6 = piVar4;
  }
  piVar4 = local_res18;
  if (iVar1 < 5) {
    piVar4 = piVar6;
  }
  if ((*piVar4 < 1) || (*(char *)(param_1 + 0x5a0) == '\0')) {
    iVar8 = -1;
  }
  return iVar8;
}



