// FUN_180576310 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180576310 */

void FUN_180576310(longlong param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    if (*(ushort *)(param_1 + 2) == 0) {
      *param_2 = 0;
      param_2[2] = 0;
      param_2[1] = 0;
      param_2[3] = 0;
      return;
    }
    piVar3 = *(int **)(param_1 + 8);
    piVar1 = piVar3 + (ulonglong)*(ushort *)(param_1 + 2) * 2;
    iVar4 = *piVar3;
    iVar5 = *piVar3;
    iVar6 = piVar3[1];
    iVar2 = piVar3[1];
    while (iVar7 = iVar2, piVar3 = piVar3 + 2, piVar3 < piVar1) {
      iVar10 = *piVar3;
      iVar8 = iVar10;
      if (iVar4 <= iVar10) {
        iVar8 = iVar4;
      }
      if (iVar10 <= iVar5) {
        iVar10 = iVar5;
      }
      iVar2 = piVar3[1];
      iVar9 = iVar2;
      if (iVar6 <= iVar2) {
        iVar9 = iVar6;
      }
      iVar4 = iVar8;
      iVar5 = iVar10;
      iVar6 = iVar9;
      if (iVar2 <= iVar7) {
        iVar2 = iVar7;
      }
    }
    *param_2 = iVar4;
    param_2[2] = iVar5;
    param_2[1] = iVar6;
    param_2[3] = iVar7;
  }
  return;
}



