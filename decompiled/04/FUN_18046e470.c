// FUN_18046e470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046e470 */

void FUN_18046e470(int *param_1,longlong param_2,int *param_3,longlong param_4,longlong param_5,
                  longlong param_6)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  bool bVar8;
  
  piVar6 = param_1;
  if (param_5 <= param_4) {
LAB_18046e5ba:
    FUN_18063aed0(param_3,piVar6,param_2 - (longlong)piVar6);
    return;
  }
LAB_18046e4d0:
  param_5 = param_5 - param_4;
  piVar2 = param_1 + param_4;
  lVar7 = param_4;
  if (param_5 < param_4) {
    lVar7 = param_5;
  }
  param_5 = param_5 - lVar7;
  piVar6 = piVar2 + lVar7;
  piVar5 = piVar2;
  do {
    iVar3 = *piVar5;
    iVar4 = *param_1;
    bVar8 = (&DAT_18077eecc)[(longlong)iVar3 * 0x20] == '\x03';
    if (bVar8 == ((&DAT_18077eecc)[(longlong)iVar4 * 0x20] == '\x03')) {
      bVar8 = *(float *)((longlong)iVar3 * 0x9c + 4 + param_6) <
              *(float *)((longlong)iVar4 * 0x9c + 4 + param_6);
    }
    piVar1 = param_3 + 1;
    if (bVar8) {
      piVar5 = piVar5 + 1;
      *param_3 = iVar3;
      if (piVar5 == piVar6) break;
    }
    else {
      param_1 = param_1 + 1;
      *param_3 = iVar4;
      if (param_1 == piVar2) {
        lVar7 = (longlong)piVar6 - (longlong)piVar5;
        goto LAB_18046e575;
      }
    }
    param_3 = piVar1;
  } while( true );
  lVar7 = (longlong)piVar2 - (longlong)param_1;
  piVar5 = param_1;
LAB_18046e575:
  FUN_18063aed0(piVar1,piVar5,lVar7);
  param_3 = (int *)(lVar7 + (longlong)piVar1);
  param_1 = piVar6;
  if (param_5 <= param_4) goto LAB_18046e5ba;
  goto LAB_18046e4d0;
}



