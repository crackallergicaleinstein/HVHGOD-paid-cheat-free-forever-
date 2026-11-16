// FUN_180289fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180289fa0 */

void FUN_180289fa0(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  
  if (param_4 < param_5) {
    puVar8 = param_1;
    do {
      puVar9 = puVar8 + param_4 * 5;
      param_5 = param_5 - param_4;
      lVar6 = param_4;
      if (param_5 < param_4) {
        lVar6 = param_5;
      }
      param_5 = param_5 - lVar6;
      param_1 = puVar9 + lVar6 * 5;
      puVar7 = puVar9;
      while( true ) {
        while (cVar5 = FUN_180114040(puVar7,puVar8), cVar5 < '\0') {
          if (param_3 != puVar7) {
            FUN_18015c010(param_3);
            uVar2 = puVar7[1];
            uVar3 = puVar7[2];
            uVar4 = puVar7[3];
            *param_3 = *puVar7;
            param_3[1] = uVar2;
            param_3[2] = uVar3;
            param_3[3] = uVar4;
            puVar7[2] = 0;
            puVar7[3] = 0xf;
            *(undefined1 *)puVar7 = 0;
          }
          puVar1 = puVar7 + 4;
          puVar7 = puVar7 + 5;
          param_3[4] = *puVar1;
          if (puVar7 == param_1) goto LAB_18028a0c1;
          param_3 = param_3 + 5;
        }
        if (param_3 != puVar8) {
          FUN_18015c010(param_3);
          uVar2 = puVar8[1];
          uVar3 = puVar8[2];
          uVar4 = puVar8[3];
          *param_3 = *puVar8;
          param_3[1] = uVar2;
          param_3[2] = uVar3;
          param_3[3] = uVar4;
          puVar8[2] = 0;
          puVar8[3] = 0xf;
          *(undefined1 *)puVar8 = 0;
        }
        puVar1 = puVar8 + 4;
        puVar8 = puVar8 + 5;
        param_3[4] = *puVar1;
        if (puVar8 == puVar9) break;
        param_3 = param_3 + 5;
      }
      puVar8 = puVar7;
      puVar9 = param_1;
LAB_18028a0c1:
      param_3 = (undefined8 *)FUN_18028a4d0(puVar8,puVar9,param_3 + 5);
      puVar8 = param_1;
    } while (param_4 < param_5);
  }
  FUN_18028a4d0(param_1,param_2,param_3);
  return;
}



