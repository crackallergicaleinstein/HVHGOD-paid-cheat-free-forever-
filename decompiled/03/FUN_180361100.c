// FUN_180361100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180361100 */

void FUN_180361100(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 *param_6,longlong param_7)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    lVar5 = (longlong)param_2 - (longlong)param_1;
    FUN_18063aed0(param_6,param_1,lVar5);
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    puVar8 = (undefined8 *)((longlong)param_6 + lVar5 + -0xc);
    param_2 = (undefined8 *)((longlong)param_2 + 0xc);
    puVar4 = (undefined8 *)((longlong)param_1 + 0xc);
    puVar7 = param_6;
    do {
      puVar3 = (undefined8 *)((longlong)puVar4 + 0xc);
      if (*(float *)((longlong)puVar7 + 4) <= *(float *)((longlong)param_2 + 4)) {
        *puVar4 = *puVar7;
        puVar1 = puVar7 + 1;
        puVar7 = (undefined8 *)((longlong)puVar7 + 0xc);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)puVar1;
        if (puVar7 == puVar8) {
          lVar6 = (longlong)param_3 - (longlong)param_2;
          uVar9 = *puVar8;
          uVar2 = *(undefined4 *)((longlong)param_6 + lVar5 + -4);
          FUN_18063aed0(puVar3,param_2,lVar6);
          *(undefined8 *)((longlong)puVar3 + lVar6) = uVar9;
          *(undefined4 *)((longlong)puVar4 + lVar6 + 0x14) = uVar2;
          return;
        }
      }
      else {
        *puVar4 = *param_2;
        puVar1 = param_2 + 1;
        param_2 = (undefined8 *)((longlong)param_2 + 0xc);
        *(undefined4 *)(puVar4 + 1) = *(undefined4 *)puVar1;
        if (param_2 == param_3) {
          FUN_18063aed0(puVar3,puVar7,(longlong)param_6 + (lVar5 - (longlong)puVar7));
          return;
        }
      }
      puVar4 = puVar3;
    } while( true );
  }
  if (param_7 < param_5) {
    FUN_180361680(param_1,param_2);
    return;
  }
  FUN_18063aed0(param_6,param_2,(longlong)param_3 - (longlong)param_2);
  *(undefined8 *)((longlong)param_3 + -0xc) = *(undefined8 *)((longlong)param_2 + -0xc);
  *(undefined4 *)((longlong)param_3 + -4) = *(undefined4 *)((longlong)param_2 + -4);
  puVar8 = param_2 + -3;
  puVar7 = (undefined8 *)((longlong)param_6 + ((longlong)param_3 - (longlong)param_2) + -0xc);
  puVar4 = (undefined8 *)((longlong)param_3 + -0xc);
  while( true ) {
    while (puVar3 = puVar4, puVar4 = (undefined8 *)((longlong)puVar3 + -0xc),
          *(float *)((longlong)puVar8 + 4) <= *(float *)((longlong)puVar7 + 4)) {
      *puVar4 = *puVar7;
      puVar1 = puVar7 + 1;
      puVar7 = (undefined8 *)((longlong)puVar7 + -0xc);
      *(undefined4 *)((longlong)puVar3 + -4) = *(undefined4 *)puVar1;
      if (param_6 == puVar7) {
        puVar3[-3] = *puVar8;
        *(undefined4 *)(puVar3 + -2) = *(undefined4 *)(puVar8 + 1);
        FUN_18063aed0((longlong)(puVar3 + -3) - ((longlong)puVar8 - (longlong)param_1),param_1);
        *param_1 = *param_6;
        *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_6 + 1);
        return;
      }
    }
    *puVar4 = *puVar8;
    *(undefined4 *)((longlong)puVar3 + -4) = *(undefined4 *)(puVar8 + 1);
    if (param_1 == puVar8) break;
    puVar8 = (undefined8 *)((longlong)puVar8 + -0xc);
  }
  puVar3[-3] = *puVar7;
  *(undefined4 *)(puVar3 + -2) = *(undefined4 *)(puVar7 + 1);
  FUN_18063aed0((longlong)(puVar3 + -3) - ((longlong)puVar7 - (longlong)param_6),param_6,
                (longlong)puVar7 - (longlong)param_6);
  return;
}



