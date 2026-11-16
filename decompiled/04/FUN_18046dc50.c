// FUN_18046dc50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046dc50 */

void FUN_18046dc50(int *param_1,int *param_2,int *param_3,longlong param_4,longlong param_5,
                  undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  bool bVar5;
  
  if (param_2 == param_3) {
    return;
  }
  if (param_1 == param_2) {
    return;
  }
  iVar1 = *param_2;
  while( true ) {
    iVar2 = *param_1;
    if (((&DAT_18077eecc)[(longlong)iVar1 * 0x20] == '\x03') ==
        ((&DAT_18077eecc)[(longlong)iVar2 * 0x20] == '\x03')) {
      bVar5 = *(float *)((longlong)iVar1 * 0x9c + 4 + param_8) <
              *(float *)((longlong)iVar2 * 0x9c + 4 + param_8);
    }
    else {
      bVar5 = (&DAT_18077eecc)[(longlong)iVar1 * 0x20] == '\x03';
    }
    if (bVar5) break;
    param_1 = param_1 + 1;
    param_4 = param_4 + -1;
    if (param_1 == param_2) {
      return;
    }
  }
  do {
    lVar4 = param_5;
    piVar3 = param_3;
    param_3 = piVar3 + -1;
    if (param_2 == param_3) {
      FUN_18063aed0((longlong)piVar3 - ((longlong)param_2 - (longlong)param_1),param_1,
                    (longlong)param_2 - (longlong)param_1);
      *param_1 = iVar1;
      return;
    }
    bVar5 = (&DAT_18077eecc)[(longlong)*param_3 * 0x20] == '\x03';
    if (bVar5 == ((&DAT_18077eecc)[(longlong)param_2[-1] * 0x20] == '\x03')) {
      bVar5 = *(float *)((longlong)*param_3 * 0x9c + 4 + param_8) <
              *(float *)((longlong)param_2[-1] * 0x9c + 4 + param_8);
    }
    param_5 = lVar4 + -1;
  } while (!bVar5);
  if (param_4 == 1) {
    FUN_18063aed0(param_1,param_2,(longlong)piVar3 - (longlong)param_2);
    *(int *)(((longlong)piVar3 - (longlong)param_2) + (longlong)param_1) = iVar2;
  }
  else {
    FUN_18046e5d0(param_1,param_2,piVar3,param_4,lVar4,param_6,param_7,param_8);
  }
  return;
}



