// FUN_180250fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180250fc0 */

void FUN_180250fc0(longlong *param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    lVar1 = *param_2;
    pfVar3 = (float *)&DAT_00000014;
    if (lVar1 != 0) {
      pfVar3 = (float *)(lVar1 + 0x24);
    }
    while( true ) {
      lVar2 = *param_1;
      pfVar4 = (float *)&DAT_00000014;
      if (lVar2 != 0) {
        pfVar4 = (float *)(lVar2 + 0x24);
      }
      if (*pfVar3 < *pfVar4) break;
      param_1 = param_1 + 1;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    do {
      plVar6 = param_3;
      lVar5 = param_5;
      param_3 = plVar6 + -1;
      if (param_2 == param_3) {
        FUN_18063aed0((longlong)plVar6 - ((longlong)param_2 - (longlong)param_1),param_1,
                      (longlong)param_2 - (longlong)param_1);
        *param_1 = lVar1;
        return;
      }
      pfVar3 = (float *)&DAT_00000014;
      if (*param_3 != 0) {
        pfVar3 = (float *)(*param_3 + 0x24);
      }
      pfVar4 = (float *)&DAT_00000014;
      if (param_2[-1] != 0) {
        pfVar4 = (float *)(param_2[-1] + 0x24);
      }
      param_5 = lVar5 + -1;
    } while (*pfVar4 <= *pfVar3);
    if (param_4 == 1) {
      FUN_18063aed0(param_1,param_2,(longlong)plVar6 - (longlong)param_2);
      *(longlong *)(((longlong)plVar6 - (longlong)param_2) + (longlong)param_1) = lVar2;
    }
    else {
      FUN_1802515e0(param_1,param_2,plVar6,param_4,lVar5,param_6,param_7,param_8);
    }
  }
  return;
}



