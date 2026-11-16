// FUN_18026b4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026b4c0 */

undefined8 *
FUN_18026b4c0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             longlong param_5,undefined8 param_6,longlong param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  if (param_4 == 0) {
    return param_3;
  }
  if (param_5 == 0) {
    return param_1;
  }
  if ((param_4 <= param_5) && (param_4 <= param_7)) {
    FUN_18063aed0(param_6,param_1,(longlong)param_2 - (longlong)param_1);
    FUN_18063aed0(param_1,param_2,(longlong)param_3 - (longlong)param_2);
    puVar5 = (undefined8 *)(((longlong)param_3 - (longlong)param_2) + (longlong)param_1);
    FUN_18063aed0(puVar5,param_6,(longlong)param_2 - (longlong)param_1);
    return puVar5;
  }
  if (param_5 <= param_7) {
    lVar7 = (longlong)param_3 - (longlong)param_2;
    FUN_18063aed0(param_6,param_2,lVar7);
    FUN_18063aed0((longlong)param_3 - ((longlong)param_2 - (longlong)param_1),param_1,
                  (longlong)param_2 - (longlong)param_1);
    FUN_18063aed0(param_1,param_6,lVar7);
    return (undefined8 *)(lVar7 + (longlong)param_1);
  }
  if (param_1 != param_2) {
    if (param_2 == param_3) {
      param_3 = param_1;
    }
    else {
      puVar5 = param_2;
      puVar6 = param_1;
      do {
        puVar4 = puVar5 + -2;
        if (puVar6 == puVar4) break;
        uVar1 = *puVar6;
        uVar2 = puVar6[1];
        uVar3 = puVar5[-1];
        *puVar6 = *puVar4;
        puVar6[1] = uVar3;
        puVar6 = puVar6 + 2;
        *puVar4 = uVar1;
        puVar5[-1] = uVar2;
        puVar5 = puVar4;
      } while (puVar6 != puVar4);
      puVar5 = param_3;
      puVar6 = param_2;
      do {
        puVar4 = puVar5 + -2;
        if (puVar6 == puVar4) break;
        uVar1 = *puVar6;
        uVar2 = puVar6[1];
        uVar3 = puVar5[-1];
        *puVar6 = *puVar4;
        puVar6[1] = uVar3;
        puVar6 = puVar6 + 2;
        *puVar4 = uVar1;
        puVar5[-1] = uVar2;
        puVar5 = puVar4;
      } while (puVar6 != puVar4);
      puVar5 = param_3;
      puVar6 = param_1;
      if (param_1 != param_3) {
        do {
          puVar4 = puVar5 + -2;
          if (puVar6 == puVar4) break;
          uVar1 = *puVar6;
          uVar2 = puVar6[1];
          uVar3 = puVar5[-1];
          *puVar6 = *puVar4;
          puVar6[1] = uVar3;
          puVar6 = puVar6 + 2;
          *puVar4 = uVar1;
          puVar5[-1] = uVar2;
          puVar5 = puVar4;
        } while (puVar6 != puVar4);
      }
      param_3 = (undefined8 *)
                (((longlong)param_3 - (longlong)param_2 & 0xfffffffffffffff0U) + (longlong)param_1);
    }
  }
  return param_3;
}



