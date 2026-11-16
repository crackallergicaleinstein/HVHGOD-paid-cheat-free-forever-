// FUN_18046e010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046e010 */

void FUN_18046e010(int *param_1,int *param_2,int *param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  
  if (param_2 == param_3) {
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  iVar1 = *param_2;
  do {
    iVar2 = *param_1;
    if (*(float *)((longlong)iVar1 * 0x9c + 4 + param_8) <
        *(float *)((longlong)iVar2 * 0x9c + 4 + param_8)) {
      do {
        piVar4 = param_3;
        lVar3 = param_5;
        param_3 = piVar4 + -1;
        if (param_2 == param_3) {
          FUN_18063aed0((longlong)piVar4 - ((longlong)param_2 - (longlong)param_1),param_1,
                        (longlong)param_2 - (longlong)param_1);
          *param_1 = iVar1;
          return;
        }
        param_5 = lVar3 + -1;
      } while (*(float *)((longlong)param_2[-1] * 0x9c + 4 + param_8) <=
               *(float *)((longlong)*param_3 * 0x9c + 4 + param_8));
      if (param_4 == 1) {
        FUN_18063aed0(param_1,param_2,(longlong)piVar4 - (longlong)param_2);
        *(int *)(((longlong)piVar4 - (longlong)param_2) + (longlong)param_1) = iVar2;
      }
      else {
        FUN_18046e990(param_1,param_2,piVar4,param_4,lVar3,param_6,param_7,param_8);
      }
      return;
    }
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
  } while (param_1 != param_2);
  return;
}



