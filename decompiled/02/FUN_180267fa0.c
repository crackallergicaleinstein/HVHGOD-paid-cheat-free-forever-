// FUN_180267fa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180267fa0 */

void FUN_180267fa0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  
  lVar4 = param_1;
  if (0x20 < param_3) {
    lVar6 = (param_3 - 0x21U >> 5) + 1;
    do {
      lVar4 = FUN_180266600(lVar4,lVar4 + 0x400,param_5);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  FUN_180266600(lVar4,param_2,param_5);
  if (0x20 < param_3) {
    lVar4 = param_1;
    lVar6 = param_3;
    lVar5 = param_4;
    do {
      lVar6 = lVar6 + -0x20;
      lVar7 = 0x20;
      if (lVar6 < 0x20) {
        lVar7 = lVar6;
      }
      lVar6 = lVar6 - lVar7;
      lVar7 = lVar7 * 0x20 + lVar4 + 0x400;
      lVar5 = FUN_18026a7e0(lVar4,lVar4 + 0x400,lVar7,lVar5,param_5);
      lVar4 = lVar7;
    } while (0x20 < lVar6);
    if (lVar7 != param_2) {
      lVar7 = lVar7 - lVar5;
      puVar8 = (undefined8 *)(lVar5 + 0x18);
      do {
        puVar8[-3] = *(undefined8 *)((longlong)puVar8 + lVar7 + -0x18);
        uVar1 = *(undefined8 *)((longlong)puVar8 + lVar7 + -0x10);
        uVar2 = *(undefined8 *)((longlong)puVar8 + lVar7 + -8);
        uVar3 = *(undefined8 *)((longlong)puVar8 + lVar7);
        *(undefined8 *)((longlong)puVar8 + lVar7) = 0;
        *(undefined8 *)((longlong)puVar8 + lVar7 + -8) = 0;
        *(undefined8 *)((longlong)puVar8 + lVar7 + -0x10) = 0;
        puVar8[-2] = uVar1;
        puVar8[-1] = uVar2;
        *puVar8 = uVar3;
        lVar4 = (longlong)puVar8 + lVar7 + 8;
        puVar8 = puVar8 + 4;
      } while (lVar4 != param_2);
    }
    lVar6 = param_3 * 0x20 + param_4;
    lVar4 = 0x40;
    FUN_180269c80(param_4,lVar6,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_180269c80(param_1,param_2,param_4,lVar4 * 2,param_3,param_5);
        lVar4 = lVar4 * 4;
        FUN_180269c80(param_4,lVar6,param_1,lVar4,param_3,param_5);
      } while (lVar4 <= (param_3 + -1) / 2);
    }
    for (; param_4 != lVar6; param_4 = param_4 + 0x20) {
      FUN_180159650(param_4 + 8);
    }
  }
  return;
}



