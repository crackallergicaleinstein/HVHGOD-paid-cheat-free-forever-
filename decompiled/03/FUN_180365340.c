// FUN_180365340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180365340 */

void FUN_180365340(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((param_2 != param_3) && (param_1 != param_2)) {
    while (*(float *)((longlong)param_1 + 0x14) <= *(float *)((longlong)param_2 + 0x14)) {
      param_1 = param_1 + 5;
      param_4 = param_4 + -1;
      if (param_1 == param_2) {
        return;
      }
    }
    do {
      puVar6 = param_3;
      lVar5 = param_5;
      if (param_2 == puVar6 + -5) {
        uVar1 = *param_2;
        uVar2 = param_2[1];
        uVar3 = param_2[2];
        uVar4 = param_2[3];
        uVar7 = param_2[4];
        FUN_18063aed0((longlong)puVar6 - ((longlong)param_2 - (longlong)param_1),param_1,
                      (longlong)param_2 - (longlong)param_1);
        *param_1 = uVar1;
        param_1[1] = uVar2;
        param_1[2] = uVar3;
        param_1[3] = uVar4;
        param_1[4] = uVar7;
        return;
      }
      param_5 = lVar5 + -1;
      param_3 = puVar6 + -5;
    } while (*(float *)((longlong)param_2 + -0x14) <= *(float *)((longlong)puVar6 + -0x14));
    if (param_4 == 1) {
      uVar1 = *param_1;
      uVar2 = param_1[1];
      uVar3 = param_1[2];
      uVar4 = param_1[3];
      uVar7 = param_1[4];
      lVar5 = (longlong)puVar6 - (longlong)param_2;
      FUN_18063aed0(param_1,param_2,lVar5);
      puVar6 = (undefined8 *)(lVar5 + (longlong)param_1);
      *puVar6 = uVar1;
      puVar6[1] = uVar2;
      puVar6[2] = uVar3;
      puVar6[3] = uVar4;
      *(undefined8 *)(lVar5 + 0x20 + (longlong)param_1) = uVar7;
    }
    else {
      FUN_180365640(param_1,*(float *)((longlong)param_2 + 0x14),puVar6,param_4,lVar5,param_6,
                    param_7,param_8);
    }
  }
  return;
}



