// FUN_180601edc - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601edc */

double FUN_180601edc(uint *param_1,double *param_2,longlong *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  double dVar5;
  
  lVar3 = *param_3;
  dVar5 = *param_4;
  do {
    *param_1 = *param_1 + 1;
    dVar4 = *(double *)(param_1 + 6);
    dVar1 = *(double *)(param_1 + 4);
    *(double *)(param_1 + 6) = dVar4 + 1.0;
    *(double *)(param_1 + 4) = -*(double *)(param_1 + 2) * dVar1;
    dVar2 = *(double *)(param_1 + 8);
    *(double *)(param_1 + 8) = (double)*param_1 * dVar2;
    dVar4 = (-*(double *)(param_1 + 2) * dVar1) / ((double)*param_1 * dVar2 * (dVar4 + 1.0));
    dVar5 = dVar5 + dVar4;
    if (ABS(dVar4) <= ABS(dVar5 * *param_2)) break;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  *param_3 = *param_3 - lVar3;
  return dVar5;
}



