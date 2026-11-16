// FUN_1805812d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805812d0 */

int FUN_1805812d0(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar8 = 0x7fffffff;
  iVar6 = -0x80000000;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x2c)) {
    piVar5 = *(int **)(param_1 + 0x40);
    lVar4 = *(longlong *)(param_1 + 0x38) - (longlong)piVar5;
    do {
      iVar1 = *piVar5;
      iVar2 = *(int *)((longlong)piVar5 + lVar4);
      if ((iVar6 < iVar1) || ((iVar1 == iVar6 && (iVar8 < iVar2)))) {
        iVar6 = iVar1;
        iVar8 = iVar2;
        iVar7 = iVar3;
      }
      iVar3 = iVar3 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x2c));
  }
  return iVar7;
}



