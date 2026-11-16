// FUN_1805fdb54 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fdb54 */

double FUN_1805fdb54(double *param_1,double *param_2,longlong *param_3)

{
  int iVar1;
  double dVar2;
  int iVar3;
  longlong lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar5 = *param_1;
  iVar3 = *(int *)(param_1 + 1);
  dVar6 = dVar5 + 2.0;
  dVar2 = *param_2;
  *param_1 = dVar6;
  *(int *)(param_1 + 1) = iVar3 + 1;
  if (dVar5 == 0.0) {
    dVar5 = 3.5601181736115222e-307;
  }
  lVar4 = *param_3;
  dVar8 = 0.0;
  dVar7 = dVar5;
  iVar3 = iVar3 + 1;
  do {
    iVar1 = iVar3 + 1;
    *(int *)(param_1 + 1) = iVar1;
    *param_1 = dVar6 + 2.0;
    dVar9 = (double)(uint)((iVar3 + *(int *)((longlong)param_1 + 0xc)) * iVar1);
    dVar8 = -dVar9 * dVar8 + dVar6;
    if (dVar8 == 0.0) {
      dVar8 = 3.5601181736115222e-307;
    }
    dVar7 = -dVar9 / dVar7 + dVar6;
    if (dVar7 == 0.0) {
      dVar7 = 3.5601181736115222e-307;
    }
    dVar8 = 1.0 / dVar8;
    dVar5 = dVar5 * dVar8 * dVar7;
    dVar9 = ABS(dVar8 * dVar7 - 1.0);
  } while ((ABS(dVar2) <= dVar9 && dVar9 != ABS(dVar2)) &&
          (lVar4 = lVar4 + -1, dVar6 = dVar6 + 2.0, iVar3 = iVar1, lVar4 != 0));
  *param_3 = *param_3 - lVar4;
  return dVar5;
}



