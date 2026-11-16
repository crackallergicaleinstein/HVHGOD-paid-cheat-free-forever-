// FUN_1802c2320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c2320 */

void FUN_1802c2320(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar5 = param_1;
  if (0x20 < param_3) {
    lVar8 = (param_3 - 0x21U >> 5) + 1;
    do {
      lVar5 = FUN_1802c1520(lVar5,lVar5 + 0x500);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  FUN_1802c1520(lVar5,param_2);
  if (0x20 < param_3) {
    lVar5 = param_1;
    lVar8 = param_3;
    lVar6 = param_4;
    do {
      lVar8 = lVar8 + -0x20;
      lVar9 = 0x20;
      if (lVar8 < 0x20) {
        lVar9 = lVar8;
      }
      lVar8 = lVar8 - lVar9;
      lVar9 = lVar5 + 0x500 + lVar9 * 0x28;
      lVar6 = FUN_1802c2b50(lVar5,lVar5 + 0x500,lVar9,lVar6);
      lVar5 = lVar9;
    } while (0x20 < lVar8);
    if (lVar9 != param_2) {
      lVar9 = lVar9 - lVar6;
      puVar7 = (undefined8 *)(lVar6 + 0x18);
      do {
        *(undefined1 (*) [16])(puVar7 + -3) = (undefined1  [16])0x0;
        puVar7[-1] = 0;
        *puVar7 = 0;
        puVar1 = (undefined8 *)(lVar9 + -0x18 + (longlong)puVar7);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        puVar7[-3] = *puVar1;
        puVar7[-2] = uVar2;
        puVar7[-1] = uVar3;
        *puVar7 = uVar4;
        *(undefined1 *)(lVar9 + -0x18 + (longlong)puVar7) = 0;
        *(undefined8 *)(lVar9 + -8 + (longlong)puVar7) = 0;
        *(undefined8 *)(lVar9 + (longlong)puVar7) = 0xf;
        *(undefined4 *)(puVar7 + 1) = *(undefined4 *)(lVar9 + 8 + (longlong)puVar7);
        lVar5 = (longlong)puVar7 + lVar9 + 0x10;
        puVar7 = puVar7 + 5;
      } while (lVar5 != param_2);
    }
    lVar5 = param_4 + param_3 * 0x28;
    lVar8 = 0x40;
    FUN_1802c29a0(param_4,lVar5,param_1,0x40,param_3,param_5);
    if (0x7f < param_3 + -1) {
      do {
        FUN_1802c29a0(param_1,param_2,param_4,lVar8 * 2,param_3,param_5);
        lVar8 = lVar8 * 4;
        FUN_1802c29a0(param_4,lVar5,param_1,lVar8,param_3,param_5);
      } while (lVar8 <= (param_3 + -1) / 2);
    }
    for (; param_4 != lVar5; param_4 = param_4 + 0x28) {
      FUN_18015c010(param_4);
    }
  }
  return;
}



