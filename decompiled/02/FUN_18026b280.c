// FUN_18026b280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026b280 */

undefined8 *
FUN_18026b280(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong param_4,
             longlong param_5,undefined8 *param_6,longlong param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  
  if (param_4 == 0) {
    return param_3;
  }
  if (param_5 != 0) {
    if ((param_5 < param_4) || (param_7 < param_4)) {
      if (param_7 < param_5) {
        if (param_1 == param_2) {
          return param_3;
        }
        if (param_2 == param_3) {
          return param_1;
        }
        FUN_18026b670(param_1);
        FUN_18026b670(param_2,param_3);
        FUN_18026b670(param_1,param_3);
        return (undefined8 *)
               (((longlong)param_3 - (longlong)param_2 & 0xffffffffffffffe0U) + (longlong)param_1);
      }
      puVar7 = param_6;
      if (param_2 != param_3) {
        lVar6 = (longlong)param_6 - (longlong)param_2;
        puVar5 = param_2 + 3;
        do {
          *puVar7 = puVar5[-3];
          uVar2 = puVar5[-2];
          uVar3 = puVar5[-1];
          uVar4 = *puVar5;
          *puVar5 = 0;
          puVar5[-1] = 0;
          puVar5[-2] = 0;
          *(undefined8 *)((longlong)puVar5 + lVar6 + -0x10) = uVar2;
          *(undefined8 *)((longlong)puVar5 + lVar6 + -8) = uVar3;
          *(undefined8 *)((longlong)puVar5 + lVar6) = uVar4;
          puVar7 = puVar7 + 4;
          puVar1 = puVar5 + 1;
          puVar5 = puVar5 + 4;
        } while (puVar1 != param_3);
      }
      if (param_2 != param_1) {
        lVar6 = (longlong)param_3 - (longlong)param_2;
        do {
          param_2 = param_2 + -4;
          FUN_1802668f0(lVar6 + (longlong)param_2,param_2);
        } while (param_2 != param_1);
      }
      puVar5 = param_6;
      if (param_6 != puVar7) {
        do {
          FUN_1802668f0(param_1,puVar5);
          param_1 = param_1 + 4;
          puVar5 = puVar5 + 4;
        } while (puVar5 != puVar7);
        do {
          FUN_180159650(param_6 + 1);
          param_6 = param_6 + 4;
        } while (param_6 != puVar7);
        return param_1;
      }
    }
    else {
      puVar7 = param_6;
      if (param_1 != param_2) {
        lVar6 = (longlong)param_6 - (longlong)param_1;
        puVar5 = param_1 + 3;
        do {
          *puVar7 = puVar5[-3];
          uVar2 = puVar5[-2];
          uVar3 = puVar5[-1];
          uVar4 = *puVar5;
          *puVar5 = 0;
          puVar5[-1] = 0;
          puVar5[-2] = 0;
          *(undefined8 *)((longlong)puVar5 + lVar6 + -0x10) = uVar2;
          *(undefined8 *)((longlong)puVar5 + lVar6 + -8) = uVar3;
          *(undefined8 *)((longlong)puVar5 + lVar6) = uVar4;
          puVar7 = puVar7 + 4;
          puVar1 = puVar5 + 1;
          puVar5 = puVar5 + 4;
        } while (puVar1 != param_2);
      }
      for (; param_2 != param_3; param_2 = param_2 + 4) {
        FUN_1802668f0(param_1,param_2);
        param_1 = param_1 + 4;
      }
      if (param_6 != puVar7) {
        puVar5 = param_6;
        do {
          FUN_1802668f0(((longlong)param_1 - (longlong)param_6) + (longlong)puVar5,puVar5);
          puVar5 = puVar5 + 4;
        } while (puVar5 != puVar7);
        do {
          FUN_180159650(param_6 + 1);
          param_6 = param_6 + 4;
        } while (param_6 != puVar7);
      }
    }
  }
  return param_1;
}



