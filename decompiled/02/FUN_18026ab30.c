// FUN_18026ab30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026ab30 */

void FUN_18026ab30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  longlong param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar6;
  undefined8 *puVar5;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  
  puVar8 = param_4;
  if (param_2 != param_3) {
    lVar7 = (longlong)param_4 - (longlong)param_2;
    puVar4 = param_2 + 3;
    do {
      *puVar8 = puVar4[-3];
      uVar1 = puVar4[-2];
      uVar2 = puVar4[-1];
      uVar3 = *puVar4;
      *puVar4 = 0;
      puVar4[-1] = 0;
      puVar4[-2] = 0;
      *(undefined8 *)((longlong)puVar4 + lVar7 + -0x10) = uVar1;
      *(undefined8 *)((longlong)puVar4 + lVar7 + -8) = uVar2;
      *(undefined8 *)((longlong)puVar4 + lVar7) = uVar3;
      puVar8 = puVar8 + 4;
      puVar9 = puVar4 + 1;
      puVar4 = puVar4 + 4;
    } while (puVar9 != param_3);
  }
  FUN_1802668f0(param_3 + -4,param_2 + -4);
  puVar4 = puVar8 + -4;
  param_2 = param_2 + -8;
  puVar9 = param_3 + -4;
  do {
    while( true ) {
      lVar7 = **(longlong **)(param_5 + 8);
      puVar5 = puVar9 + -4;
      fVar10 = (float)FUN_18025e110((longlong)*(int *)puVar4[1],
                                    (longlong)*(int *)puVar4[1] * 0x98 + lVar7);
      fVar11 = (float)FUN_18025e110((longlong)*(int *)param_2[1],
                                    (longlong)*(int *)param_2[1] * 0x98 + lVar7);
      if (fVar11 <= fVar10) break;
      FUN_1802668f0(puVar5,param_2);
      if (param_1 == param_2) {
        FUN_1802668f0(puVar9 + -8,puVar4);
        if (puVar4 != param_4) {
          puVar5 = puVar4;
          do {
            puVar6 = puVar5 + -4;
            FUN_1802668f0((longlong)puVar5 + (longlong)puVar9 + (-0x60 - (longlong)puVar4),puVar6);
            puVar5 = puVar6;
          } while (puVar6 != param_4);
        }
joined_r0x00018026acb6:
        for (; param_4 != puVar8; param_4 = param_4 + 4) {
          FUN_180159650(param_4 + 1);
        }
        return;
      }
      param_2 = param_2 + -4;
      puVar9 = puVar5;
    }
    FUN_1802668f0(puVar5,puVar4);
    puVar4 = puVar4 + -4;
    if (param_4 == puVar4) {
      FUN_1802668f0(puVar9 + -8,param_2);
      if (param_2 != param_1) {
        puVar4 = param_2;
        do {
          puVar9 = puVar4 + -4;
          FUN_1802668f0((longlong)puVar4 + (longlong)puVar5 + (-0x40 - (longlong)param_2),puVar9);
          puVar4 = puVar9;
        } while (puVar9 != param_1);
      }
      FUN_1802668f0(param_1,param_4);
      goto joined_r0x00018026acb6;
    }
    puVar9 = puVar5;
  } while( true );
}



