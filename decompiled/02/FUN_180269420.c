// FUN_180269420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180269420 */

void FUN_180269420(float *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float *pfVar5;
  float *pfVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  
  pfVar5 = param_1;
  if (0x20 < param_3) {
    lVar8 = (param_3 - 0x21U >> 5) + 1;
    do {
      pfVar5 = (float *)FUN_180267610(pfVar5,pfVar5 + 0x80);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  FUN_180267610(pfVar5,param_2);
  if (param_3 < 0x21) {
    return;
  }
  puVar7 = param_4;
  pfVar5 = param_1;
  lVar8 = param_3;
LAB_1802694a0:
  lVar8 = lVar8 + -0x20;
  pfVar2 = pfVar5 + 0x80;
  lVar9 = 0x20;
  if (lVar8 < 0x20) {
    lVar9 = lVar8;
  }
  lVar8 = lVar8 - lVar9;
  pfVar10 = pfVar2 + lVar9 * 4;
  pfVar6 = pfVar2;
  do {
    puVar1 = puVar7 + 2;
    if (*pfVar5 <= *pfVar6) {
      uVar3 = *(undefined8 *)pfVar5;
      uVar4 = *(undefined8 *)(pfVar5 + 2);
      pfVar5 = pfVar5 + 4;
      *puVar7 = uVar3;
      puVar7[1] = uVar4;
      if (pfVar5 == pfVar2) {
        lVar9 = (longlong)pfVar10 - (longlong)pfVar6;
        goto LAB_180269513;
      }
    }
    else {
      uVar3 = *(undefined8 *)pfVar6;
      uVar4 = *(undefined8 *)(pfVar6 + 2);
      pfVar6 = pfVar6 + 4;
      *puVar7 = uVar3;
      puVar7[1] = uVar4;
      if (pfVar6 == pfVar10) break;
    }
    puVar7 = puVar1;
  } while( true );
  lVar9 = (longlong)pfVar2 - (longlong)pfVar5;
  pfVar6 = pfVar5;
LAB_180269513:
  FUN_18063aed0(puVar1,pfVar6,lVar9);
  puVar7 = (undefined8 *)(lVar9 + (longlong)puVar1);
  pfVar5 = pfVar10;
  if (lVar8 < 0x21) {
    FUN_18063aed0(puVar7,pfVar10,param_2 - (longlong)pfVar10);
    lVar8 = 0x40;
    FUN_18026a270(param_4,param_4 + param_3 * 2,param_1,0x40,param_3,param_5);
    if (param_3 + -1 < 0x80) {
      return;
    }
    do {
      FUN_18026a270(param_1,param_2,param_4,lVar8 * 2,param_3,param_5);
      lVar8 = lVar8 * 4;
      FUN_18026a270(param_4,param_4 + param_3 * 2,param_1,lVar8,param_3,param_5);
    } while (lVar8 <= (param_3 + -1) / 2);
    return;
  }
  goto LAB_1802694a0;
}



