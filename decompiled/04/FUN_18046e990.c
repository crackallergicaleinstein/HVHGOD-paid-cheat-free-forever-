// FUN_18046e990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046e990 */

void FUN_18046e990(int *param_1,int *param_2,int *param_3,longlong param_4,longlong param_5,
                  int *param_6,longlong param_7,longlong param_8)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar4 = (longlong)param_2 - (longlong)param_1;
    FUN_18063aed0(param_6,param_1,lVar4);
    *param_1 = *param_2;
    piVar5 = (int *)((longlong)param_6 + lVar4 + -4);
    param_2 = param_2 + 1;
    piVar6 = param_6;
    piVar7 = param_1 + 1;
    do {
      iVar2 = *piVar6;
      piVar1 = piVar7 + 1;
      iVar3 = *param_2;
      if (*(float *)((longlong)iVar2 * 0x9c + 4 + param_8) <=
          *(float *)((longlong)iVar3 * 0x9c + 4 + param_8)) {
        piVar6 = piVar6 + 1;
        *piVar7 = iVar2;
        if (piVar6 == piVar5) {
          iVar2 = *piVar5;
          FUN_18063aed0(piVar1,param_2,(longlong)param_3 - (longlong)param_2);
          *(int *)(((longlong)param_3 - (longlong)param_2) + (longlong)piVar1) = iVar2;
          return;
        }
      }
      else {
        param_2 = param_2 + 1;
        *piVar7 = iVar3;
        if (param_2 == param_3) {
          FUN_18063aed0(piVar1,piVar6,(longlong)param_6 + (lVar4 - (longlong)piVar6));
          return;
        }
      }
      piVar7 = piVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    FUN_18046edd0(param_1,param_2);
    return;
  }
  FUN_18063aed0(param_6,param_2,(longlong)param_3 - (longlong)param_2);
  piVar5 = param_3 + -1;
  *piVar5 = param_2[-1];
  piVar6 = param_2 + -2;
  piVar7 = (int *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -4);
  while( true ) {
    while( true ) {
      iVar2 = *piVar7;
      if (*(float *)((longlong)*piVar6 * 0x9c + 4 + param_8) <=
          *(float *)((longlong)iVar2 * 0x9c + 4 + param_8)) break;
      piVar5[-1] = *piVar6;
      if (param_1 == piVar6) {
        piVar5[-2] = *piVar7;
        FUN_18063aed0((longlong)(piVar5 + -2) - ((longlong)piVar7 - (longlong)param_6),param_6,
                      (longlong)piVar7 - (longlong)param_6);
        return;
      }
      piVar6 = piVar6 + -1;
      piVar5 = piVar5 + -1;
    }
    piVar7 = piVar7 + -1;
    piVar5[-1] = iVar2;
    if (param_6 == piVar7) break;
    piVar5 = piVar5 + -1;
  }
  piVar5[-2] = *piVar6;
  FUN_18063aed0((longlong)(piVar5 + -2) - ((longlong)piVar6 - (longlong)param_1),param_1,
                (longlong)piVar6 - (longlong)param_1);
  *param_1 = *param_6;
  return;
}



