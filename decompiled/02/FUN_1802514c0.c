// FUN_1802514c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802514c0 */

void FUN_1802514c0(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  float *pfVar5;
  float *pfVar6;
  longlong lVar7;
  longlong *plVar8;
  
joined_r0x0001802514e1:
  if (param_5 <= param_4) {
    FUN_18063aed0(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  param_5 = param_5 - param_4;
  plVar2 = param_1 + param_4;
  lVar7 = param_4;
  if (param_5 < param_4) {
    lVar7 = param_5;
  }
  param_5 = param_5 - lVar7;
  plVar3 = plVar2 + lVar7;
  plVar8 = plVar2;
  do {
    lVar7 = *plVar8;
    plVar1 = param_3 + 1;
    lVar4 = *param_1;
    pfVar6 = (float *)&DAT_00000014;
    if (lVar7 != 0) {
      pfVar6 = (float *)(lVar7 + 0x24);
    }
    pfVar5 = (float *)&DAT_00000014;
    if (lVar4 != 0) {
      pfVar5 = (float *)(lVar4 + 0x24);
    }
    if (*pfVar5 <= *pfVar6) {
      param_1 = param_1 + 1;
      *param_3 = lVar4;
      if (param_1 == plVar2) {
        lVar7 = (longlong)plVar3 - (longlong)plVar8;
        FUN_18063aed0(plVar1,plVar8,lVar7);
        goto LAB_1802515a0;
      }
    }
    else {
      plVar8 = plVar8 + 1;
      *param_3 = lVar7;
      if (plVar8 == plVar3) break;
    }
    param_3 = plVar1;
  } while( true );
  lVar7 = (longlong)plVar2 - (longlong)param_1;
  FUN_18063aed0(plVar1,param_1,lVar7);
LAB_1802515a0:
  param_3 = (longlong *)(lVar7 + (longlong)plVar1);
  param_1 = plVar3;
  goto joined_r0x0001802514e1;
}



