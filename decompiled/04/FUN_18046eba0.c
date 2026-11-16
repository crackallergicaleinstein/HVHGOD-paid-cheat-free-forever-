// FUN_18046eba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046eba0 */

void FUN_18046eba0(int *param_1,int *param_2,longlong param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,undefined8 param_7,longlong param_8)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  
  if (param_5 < param_4) {
    lVar4 = param_5 >> 1;
    piVar5 = param_2 + lVar4;
    uVar1 = (longlong)param_2 - (longlong)param_1 >> 2;
    piVar6 = param_1;
    if (0 < (longlong)uVar1) {
      do {
        uVar3 = uVar1 >> 1;
        if (((&DAT_18077eecc)[(longlong)*piVar5 * 0x20] == '\x03') ==
            ((&DAT_18077eecc)[(longlong)piVar6[uVar3] * 0x20] == '\x03')) {
          bVar7 = *(float *)((longlong)*piVar5 * 0x9c + 4 + param_8) <
                  *(float *)((longlong)piVar6[uVar3] * 0x9c + 4 + param_8);
        }
        else {
          bVar7 = (&DAT_18077eecc)[(longlong)*piVar5 * 0x20] == '\x03';
        }
        if (!bVar7) {
          piVar6 = piVar6 + uVar3 + 1;
          uVar3 = uVar1 + (-1 - uVar3);
        }
        uVar1 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    lVar2 = (longlong)piVar6 - (longlong)param_1 >> 2;
  }
  else {
    lVar2 = param_4 >> 1;
    uVar1 = param_3 - (longlong)param_2 >> 2;
    piVar6 = param_1 + lVar2;
    piVar5 = param_2;
    if (0 < (longlong)uVar1) {
      do {
        uVar3 = uVar1 >> 1;
        bVar7 = (&DAT_18077eecc)[(longlong)piVar5[uVar3] * 0x20] == '\x03';
        if (bVar7 == ((&DAT_18077eecc)[(longlong)*piVar6 * 0x20] == '\x03')) {
          bVar7 = *(float *)((longlong)piVar5[uVar3] * 0x9c + 4 + param_8) <
                  *(float *)((longlong)*piVar6 * 0x9c + 4 + param_8);
        }
        if (bVar7) {
          piVar5 = piVar5 + uVar3 + 1;
          uVar3 = uVar1 + (-1 - uVar3);
        }
        uVar1 = uVar3;
      } while (0 < (longlong)uVar3);
    }
    lVar4 = (longlong)piVar5 - (longlong)param_2 >> 2;
  }
  FUN_18046ef70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar6,piVar5,lVar2,
                lVar4);
  return;
}



