// FUN_18046d7f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046d7f0 */

int * FUN_18046d7f0(int *param_1,int *param_2,longlong param_3)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  
  if (param_1 == param_2) {
    return param_2;
  }
  piVar1 = param_1 + 1;
  if (piVar1 != param_2) {
    lVar5 = 4;
    piVar6 = piVar1;
    do {
      iVar3 = *piVar6;
      fVar2 = *(float *)((longlong)iVar3 * 0x9c + 4 + param_3);
      if (*(float *)((longlong)*param_1 * 0x9c + 4 + param_3) <= fVar2) {
        piVar4 = (int *)((longlong)param_1 + lVar5 + -4);
        lVar7 = (longlong)*piVar4;
        piVar9 = piVar6;
        piVar8 = piVar6;
        if (fVar2 < *(float *)(lVar7 * 0x9c + 4 + param_3)) {
          do {
            piVar9 = piVar4;
            *piVar8 = (int)lVar7;
            lVar7 = (longlong)piVar9[-1];
            piVar4 = piVar9 + -1;
            piVar8 = piVar9;
          } while (*(float *)((longlong)iVar3 * 0x9c + 4 + param_3) <
                   *(float *)(lVar7 * 0x9c + 4 + param_3));
        }
        *piVar9 = iVar3;
      }
      else {
        FUN_18063aed0(piVar1,param_1,lVar5);
        *param_1 = iVar3;
      }
      piVar6 = piVar6 + 1;
      lVar5 = lVar5 + 4;
    } while (piVar6 != param_2);
  }
  return param_2;
}



