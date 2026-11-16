// FUN_18026a980 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026a980 */

void FUN_18026a980(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  
  puVar8 = param_4;
  if (param_1 != param_2) {
    lVar6 = (longlong)param_4 - (longlong)param_1;
    puVar5 = param_1 + 3;
    do {
      *puVar8 = puVar5[-3];
      uVar1 = puVar5[-2];
      uVar2 = puVar5[-1];
      uVar3 = *puVar5;
      *puVar5 = 0;
      puVar5[-1] = 0;
      puVar5[-2] = 0;
      *(undefined8 *)((longlong)puVar5 + lVar6 + -0x10) = uVar1;
      *(undefined8 *)((longlong)puVar5 + lVar6 + -8) = uVar2;
      *(undefined8 *)((longlong)puVar5 + lVar6) = uVar3;
      puVar8 = puVar8 + 4;
      puVar7 = puVar5 + 1;
      puVar5 = puVar5 + 4;
    } while (puVar7 != param_2);
  }
  FUN_1802668f0(param_1,param_2);
  param_2 = param_2 + 4;
  puVar5 = param_4;
  puVar7 = param_1 + 4;
  do {
    lVar6 = **(longlong **)(param_5 + 8);
    puVar4 = puVar7 + 4;
    fVar9 = (float)FUN_18025e110((longlong)*(int *)param_2[1],
                                 (longlong)*(int *)param_2[1] * 0x98 + lVar6);
    fVar10 = (float)FUN_18025e110(fVar9,(longlong)*(int *)puVar5[1] * 0x98 + lVar6);
    if (fVar10 <= fVar9) {
      FUN_1802668f0(puVar7,puVar5);
      puVar5 = puVar5 + 4;
      if (puVar5 == puVar8 + -4) break;
    }
    else {
      FUN_1802668f0(puVar7,param_2);
      param_2 = param_2 + 4;
      if (param_2 == param_3) goto code_r0x00018026aa7d;
    }
    puVar7 = puVar4;
  } while( true );
  for (; param_2 != param_3; param_2 = param_2 + 4) {
    FUN_1802668f0(puVar4,param_2);
    puVar4 = puVar4 + 4;
  }
  FUN_1802668f0(puVar4,puVar8 + -4);
  goto joined_r0x00018026aaf6;
code_r0x00018026aa7d:
  if (puVar5 != puVar8) {
    lVar6 = (longlong)puVar4 - (longlong)puVar5;
    do {
      FUN_1802668f0((longlong)puVar5 + lVar6,puVar5);
      puVar5 = puVar5 + 4;
    } while (puVar5 != puVar8);
  }
joined_r0x00018026aaf6:
  for (; param_4 != puVar8; param_4 = param_4 + 4) {
    FUN_180159650(param_4 + 1);
  }
  return;
}



