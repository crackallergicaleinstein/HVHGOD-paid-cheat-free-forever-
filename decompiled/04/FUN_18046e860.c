// FUN_18046e860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046e860 */

void FUN_18046e860(int *param_1,longlong param_2,int *param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  
joined_r0x00018046e881:
  if (param_5 <= param_4) {
    FUN_18063aed0(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  param_5 = param_5 - param_4;
  piVar2 = param_1 + param_4;
  lVar7 = param_4;
  if (param_5 < param_4) {
    lVar7 = param_5;
  }
  param_5 = param_5 - lVar7;
  piVar3 = piVar2 + lVar7;
  piVar6 = piVar2;
  do {
    iVar4 = *param_1;
    piVar1 = param_3 + 1;
    iVar5 = *piVar6;
    if (*(float *)((longlong)iVar4 * 0x9c + 4 + param_6) <=
        *(float *)((longlong)iVar5 * 0x9c + 4 + param_6)) {
      param_1 = param_1 + 1;
      *param_3 = iVar4;
      if (param_1 == piVar2) {
        lVar7 = (longlong)piVar3 - (longlong)piVar6;
        FUN_18063aed0(piVar1,piVar6,lVar7);
        goto LAB_18046e942;
      }
    }
    else {
      piVar6 = piVar6 + 1;
      *param_3 = iVar5;
      if (piVar6 == piVar3) break;
    }
    param_3 = piVar1;
  } while( true );
  lVar7 = (longlong)piVar2 - (longlong)param_1;
  FUN_18063aed0(piVar1,param_1,lVar7);
LAB_18046e942:
  param_3 = (int *)(lVar7 + (longlong)piVar1);
  param_1 = piVar3;
  goto joined_r0x00018046e881;
}



