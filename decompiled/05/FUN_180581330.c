// FUN_180581330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180581330 */

int FUN_180581330(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  iVar5 = 0x7fffffff;
  iVar7 = -0x80000000;
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    piVar4 = *(int **)(param_1 + 0x40);
    lVar3 = *(longlong *)(param_1 + 0x38) - (longlong)piVar4;
    do {
      iVar1 = *(int *)((longlong)piVar4 + lVar3);
      if ((iVar1 < iVar5) || ((iVar1 == iVar5 && (*piVar4 < iVar7)))) {
        iVar5 = iVar1;
        iVar7 = *piVar4;
        iVar6 = iVar2;
      }
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x2c));
  }
  return iVar6;
}



