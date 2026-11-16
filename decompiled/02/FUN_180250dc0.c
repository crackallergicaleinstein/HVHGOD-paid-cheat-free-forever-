// FUN_180250dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180250dc0 */

void FUN_180250dc0(longlong *param_1,longlong param_2,longlong param_3,longlong *param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  
  plVar5 = param_1;
  if (0x20 < param_3) {
    lVar8 = (param_3 - 0x21U >> 5) + 1;
    do {
      plVar5 = (longlong *)FUN_180250340(plVar5,plVar5 + 0x20);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  FUN_180250340(plVar5,param_2);
  if (param_3 < 0x21) {
    return;
  }
  plVar5 = param_4;
  plVar10 = param_1;
  lVar8 = param_3;
LAB_180250e50:
  lVar8 = lVar8 + -0x20;
  plVar2 = plVar10 + 0x20;
  lVar9 = 0x20;
  if (lVar8 < 0x20) {
    lVar9 = lVar8;
  }
  lVar8 = lVar8 - lVar9;
  plVar3 = plVar2 + lVar9;
  plVar11 = plVar2;
  do {
    lVar9 = *plVar11;
    plVar1 = plVar5 + 1;
    lVar4 = *plVar10;
    pfVar7 = (float *)&DAT_00000014;
    if (lVar9 != 0) {
      pfVar7 = (float *)(lVar9 + 0x24);
    }
    pfVar6 = (float *)&DAT_00000014;
    if (lVar4 != 0) {
      pfVar6 = (float *)(lVar4 + 0x24);
    }
    if (*pfVar6 <= *pfVar7) {
      plVar10 = plVar10 + 1;
      *plVar5 = lVar4;
      if (plVar10 == plVar2) {
        lVar9 = (longlong)plVar3 - (longlong)plVar11;
        FUN_18063aed0(plVar1,plVar11,lVar9);
        goto LAB_180250ef1;
      }
    }
    else {
      plVar11 = plVar11 + 1;
      *plVar5 = lVar9;
      if (plVar11 == plVar3) break;
    }
    plVar5 = plVar1;
  } while( true );
  lVar9 = (longlong)plVar2 - (longlong)plVar10;
  FUN_18063aed0(plVar1,plVar10,lVar9);
LAB_180250ef1:
  plVar5 = (longlong *)(lVar9 + (longlong)plVar1);
  plVar10 = plVar3;
  if (lVar8 < 0x21) {
    FUN_18063aed0(plVar5,plVar3,param_2 - (longlong)plVar3);
    lVar8 = 0x40;
    FUN_1802514c0(param_4,param_4 + param_3,param_1,0x40,param_3,param_5);
    if (param_3 + -1 < 0x80) {
      return;
    }
    do {
      FUN_1802514c0(param_1,param_2,param_4,lVar8 * 2,param_3,param_5);
      lVar8 = lVar8 * 4;
      FUN_1802514c0(param_4,param_4 + param_3,param_1,lVar8,param_3,param_5);
    } while (lVar8 <= (param_3 + -1) / 2);
    return;
  }
  goto LAB_180250e50;
}



