// FUN_1802515e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802515e0 */

void FUN_1802515e0(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,longlong *param_6,longlong param_7)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar6 = (longlong)param_2 - (longlong)param_1;
    FUN_18063aed0(param_6,param_1,lVar6);
    *param_1 = *param_2;
    plVar8 = (longlong *)((longlong)param_6 + lVar6 + -8);
    param_2 = param_2 + 1;
    plVar9 = param_6;
    plVar7 = param_1 + 1;
    do {
      lVar2 = *param_2;
      plVar1 = plVar7 + 1;
      lVar3 = *plVar9;
      pfVar5 = (float *)&DAT_00000014;
      if (lVar2 != 0) {
        pfVar5 = (float *)(lVar2 + 0x24);
      }
      pfVar4 = (float *)&DAT_00000014;
      if (lVar3 != 0) {
        pfVar4 = (float *)(lVar3 + 0x24);
      }
      if (*pfVar4 <= *pfVar5) {
        plVar9 = plVar9 + 1;
        *plVar7 = lVar3;
        if (plVar9 == plVar8) {
          lVar6 = *plVar8;
          FUN_18063aed0(plVar1,param_2,(longlong)param_3 - (longlong)param_2);
          *(longlong *)(((longlong)param_3 - (longlong)param_2) + (longlong)plVar1) = lVar6;
          return;
        }
      }
      else {
        param_2 = param_2 + 1;
        *plVar7 = lVar2;
        if (param_2 == param_3) {
          FUN_18063aed0(plVar1,plVar9,(longlong)param_6 + (lVar6 - (longlong)plVar9));
          return;
        }
      }
      plVar7 = plVar1;
    } while( true );
  }
  if (param_7 < param_5) {
    FUN_180251810(param_1,param_2);
    return;
  }
  FUN_18063aed0(param_6,param_2,(longlong)param_3 - (longlong)param_2);
  plVar7 = param_3 + -1;
  plVar8 = param_2 + -2;
  plVar9 = (longlong *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -8);
  *plVar7 = param_2[-1];
  while( true ) {
    while( true ) {
      lVar6 = *plVar9;
      lVar2 = *plVar8;
      pfVar5 = (float *)&DAT_00000014;
      if (lVar6 != 0) {
        pfVar5 = (float *)(lVar6 + 0x24);
      }
      pfVar4 = (float *)&DAT_00000014;
      if (lVar2 != 0) {
        pfVar4 = (float *)(lVar2 + 0x24);
      }
      if (*pfVar5 < *pfVar4) break;
      plVar9 = plVar9 + -1;
      plVar7[-1] = lVar6;
      if (param_6 == plVar9) {
        plVar7[-2] = *plVar8;
        FUN_18063aed0((longlong)(plVar7 + -2) - ((longlong)plVar8 - (longlong)param_1),param_1);
        *param_1 = *param_6;
        return;
      }
      plVar7 = plVar7 + -1;
    }
    plVar7[-1] = lVar2;
    if (param_1 == plVar8) break;
    plVar8 = plVar8 + -1;
    plVar7 = plVar7 + -1;
  }
  plVar7[-2] = *plVar9;
  FUN_18063aed0((longlong)(plVar7 + -2) - ((longlong)plVar9 - (longlong)param_6),param_6,
                (longlong)plVar9 - (longlong)param_6);
  return;
}



