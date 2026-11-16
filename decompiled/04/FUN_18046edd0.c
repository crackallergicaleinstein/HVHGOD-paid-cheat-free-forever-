// FUN_18046edd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046edd0 */

void FUN_18046edd0(int *param_1,int *param_2,longlong param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,undefined8 param_7,longlong param_8)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  
  if (param_5 < param_4) {
    lVar4 = param_5 >> 1;
    uVar2 = (longlong)param_2 - (longlong)param_1 >> 2;
    piVar5 = param_2 + lVar4;
    piVar6 = param_1;
    if (0 < (longlong)uVar2) {
      do {
        uVar3 = uVar2 >> 1;
        if (*(float *)((longlong)piVar6[uVar3] * 0x9c + 4 + param_8) <=
            *(float *)((longlong)*piVar5 * 0x9c + 4 + param_8)) {
          piVar6 = piVar6 + uVar3 + 1;
          uVar3 = uVar2 + (-1 - uVar3);
        }
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    lVar1 = (longlong)piVar6 - (longlong)param_1 >> 2;
  }
  else {
    lVar1 = param_4 >> 1;
    uVar2 = param_3 - (longlong)param_2 >> 2;
    piVar6 = param_1 + lVar1;
    piVar5 = param_2;
    if (0 < (longlong)uVar2) {
      do {
        uVar3 = uVar2 >> 1;
        if (*(float *)((longlong)piVar5[uVar3] * 0x9c + 4 + param_8) <
            *(float *)((longlong)*piVar6 * 0x9c + 4 + param_8)) {
          piVar5 = piVar5 + uVar3 + 1;
          uVar3 = uVar2 + (-1 - uVar3);
        }
        uVar2 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    lVar4 = (longlong)piVar5 - (longlong)param_2 >> 2;
  }
  FUN_18046f060(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar6,piVar5,lVar1,
                lVar4);
  return;
}



