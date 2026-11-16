// FUN_180365530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180365530 */

void FUN_180365530(undefined8 *param_1,longlong param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
joined_r0x00018036554e:
  if (param_5 <= param_4) {
    FUN_18063aed0(param_3,param_1,param_2 - (longlong)param_1);
    return;
  }
  param_5 = param_5 - param_4;
  puVar3 = param_1 + param_4 * 5;
  lVar9 = param_4;
  if (param_5 < param_4) {
    lVar9 = param_5;
  }
  param_5 = param_5 - lVar9;
  puVar4 = puVar3 + lVar9 * 5;
  puVar8 = puVar3;
  do {
    puVar1 = param_3 + 5;
    if (*(float *)((longlong)param_1 + 0x14) <= *(float *)((longlong)puVar8 + 0x14)) {
      uVar5 = param_1[1];
      uVar6 = param_1[2];
      uVar7 = param_1[3];
      *param_3 = *param_1;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      param_3[3] = uVar7;
      puVar2 = param_1 + 4;
      param_1 = param_1 + 5;
      param_3[4] = *puVar2;
      if (param_1 == puVar3) {
        lVar9 = (longlong)puVar4 - (longlong)puVar8;
        goto LAB_1803655ed;
      }
    }
    else {
      uVar5 = puVar8[1];
      uVar6 = puVar8[2];
      uVar7 = puVar8[3];
      *param_3 = *puVar8;
      param_3[1] = uVar5;
      param_3[2] = uVar6;
      param_3[3] = uVar7;
      puVar2 = puVar8 + 4;
      puVar8 = puVar8 + 5;
      param_3[4] = *puVar2;
      if (puVar8 == puVar4) break;
    }
    param_3 = puVar1;
  } while( true );
  lVar9 = (longlong)puVar3 - (longlong)param_1;
  puVar8 = param_1;
LAB_1803655ed:
  FUN_18063aed0(puVar1,puVar8,lVar9);
  param_3 = (undefined8 *)(lVar9 + (longlong)puVar1);
  param_1 = puVar4;
  goto joined_r0x00018036554e;
}



