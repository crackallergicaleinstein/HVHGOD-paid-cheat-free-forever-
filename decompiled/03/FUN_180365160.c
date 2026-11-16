// FUN_180365160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180365160 */

void FUN_180365160(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  
  puVar8 = param_1;
  if (0x20 < param_3) {
    lVar11 = (param_3 - 0x21U >> 5) + 1;
    do {
      puVar8 = (undefined8 *)FUN_180364f50(puVar8,puVar8 + 0xa0);
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  FUN_180364f50(puVar8,param_2);
  if (param_3 < 0x21) {
    return;
  }
  puVar8 = param_4;
  puVar10 = param_1;
  lVar11 = param_3;
LAB_1803651e0:
  lVar11 = lVar11 + -0x20;
  puVar3 = puVar10 + 0xa0;
  lVar12 = 0x20;
  if (lVar11 < 0x20) {
    lVar12 = lVar11;
  }
  lVar11 = lVar11 - lVar12;
  puVar4 = puVar3 + lVar12 * 5;
  puVar9 = puVar3;
  do {
    puVar1 = puVar8 + 5;
    if (*(float *)((longlong)puVar10 + 0x14) <= *(float *)((longlong)puVar9 + 0x14)) {
      uVar5 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      *puVar8 = *puVar10;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      puVar2 = puVar10 + 4;
      puVar10 = puVar10 + 5;
      puVar8[4] = *puVar2;
      if (puVar10 == puVar3) {
        lVar12 = (longlong)puVar4 - (longlong)puVar9;
        goto LAB_180365269;
      }
    }
    else {
      uVar5 = puVar9[1];
      uVar6 = puVar9[2];
      uVar7 = puVar9[3];
      *puVar8 = *puVar9;
      puVar8[1] = uVar5;
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      puVar2 = puVar9 + 4;
      puVar9 = puVar9 + 5;
      puVar8[4] = *puVar2;
      if (puVar9 == puVar4) break;
    }
    puVar8 = puVar1;
  } while( true );
  lVar12 = (longlong)puVar3 - (longlong)puVar10;
  puVar9 = puVar10;
LAB_180365269:
  FUN_18063aed0(puVar1,puVar9,lVar12);
  puVar8 = (undefined8 *)(lVar12 + (longlong)puVar1);
  puVar10 = puVar4;
  if (lVar11 < 0x21) {
    FUN_18063aed0(puVar8,puVar4,param_2 - (longlong)puVar4);
    lVar11 = 0x40;
    FUN_180365530(param_4,param_4 + param_3 * 5,param_1,0x40,param_3,param_5);
    if (param_3 + -1 < 0x80) {
      return;
    }
    do {
      FUN_180365530(param_1,param_2,param_4,lVar11 * 2,param_3,param_5);
      lVar11 = lVar11 * 4;
      FUN_180365530(param_4,param_4 + param_3 * 5,param_1,lVar11,param_3,param_5);
    } while (lVar11 <= (param_3 + -1) / 2);
    return;
  }
  goto LAB_1803651e0;
}



