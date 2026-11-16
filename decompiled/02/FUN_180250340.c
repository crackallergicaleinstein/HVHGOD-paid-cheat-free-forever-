// FUN_180250340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180250340 */

longlong * FUN_180250340(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  float *pfVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  float *pfVar8;
  
  if (param_1 == param_2) {
    return param_2;
  }
  plVar1 = param_1 + 1;
  if (plVar1 != param_2) {
    lVar6 = 8;
    plVar5 = plVar1;
    do {
      lVar2 = *plVar5;
      pfVar8 = (float *)&DAT_00000014;
      if (lVar2 != 0) {
        pfVar8 = (float *)(lVar2 + 0x24);
      }
      pfVar4 = (float *)&DAT_00000014;
      if (*param_1 != 0) {
        pfVar4 = (float *)(*param_1 + 0x24);
      }
      if (*pfVar4 <= *pfVar8) {
        plVar7 = plVar5;
        while( true ) {
          lVar3 = plVar7[-1];
          pfVar4 = (float *)&DAT_00000014;
          if (lVar3 != 0) {
            pfVar4 = (float *)(lVar3 + 0x24);
          }
          if (*pfVar4 <= *pfVar8) break;
          *plVar7 = lVar3;
          plVar7 = plVar7 + -1;
        }
        *plVar7 = lVar2;
      }
      else {
        FUN_18063aed0(plVar1,param_1,lVar6);
        *param_1 = lVar2;
      }
      plVar5 = plVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (plVar5 != param_2);
  }
  return param_2;
}



