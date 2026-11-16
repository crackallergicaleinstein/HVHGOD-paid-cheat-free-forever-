// FUN_1805c83e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c83e0 */

undefined8 FUN_1805c83e0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  
  if (*(ulonglong *)(param_2 + 0x108) < param_1 + 4U) {
    FUN_18057bd80(param_2,8);
  }
  uVar13 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  puVar2 = (undefined1 *)((ulonglong)uVar13 + param_1);
  if ((*(undefined1 **)(param_2 + 0x108) < puVar2) || (uVar13 < 0x206)) {
    FUN_18057bd80(param_2,8);
  }
  lVar15 = 0x100;
  uVar13 = 0;
  puVar12 = (undefined1 *)(param_1 + 6);
  do {
    uVar3 = *puVar12;
    puVar8 = puVar12 + 2;
    bVar4 = puVar12[1];
    if ((1 < *(int *)(param_2 + 0x110)) && ((bVar4 & 7) != 0)) {
      FUN_18057bd80(param_2,8);
    }
    uVar11 = (uint)(ushort)(CONCAT11(uVar3,bVar4) >> 3);
    if (uVar13 < uVar11) {
      uVar13 = uVar11;
    }
    lVar15 = lVar15 + -1;
    puVar12 = puVar8;
  } while (lVar15 != 0);
  if (*(undefined1 **)(param_2 + 0x108) < puVar8 + (uVar13 * 8 + 8)) {
    FUN_18057bd80(param_2,8);
  }
  uVar14 = (ulonglong)(uVar13 + 1);
  do {
    uVar3 = puVar12[6];
    uVar11 = (uint)CONCAT11(puVar12[2],puVar12[3]);
    uVar5 = puVar12[4];
    uVar6 = puVar12[5];
    puVar9 = puVar12 + 8;
    uVar7 = puVar12[7];
    if (uVar11 != 0) {
      if ((1 < *(int *)(param_2 + 0x110)) &&
         ((0xff < CONCAT11(*puVar12,puVar12[1]) || (0x100 - CONCAT11(*puVar12,puVar12[1]) < uVar11))
         )) {
        FUN_18057bd80(param_2,8);
      }
      if (CONCAT11(uVar3,uVar7) != 0) {
        if ((puVar9 + ((ulonglong)(uint)CONCAT11(uVar3,uVar7) - 2) < puVar8 + (uVar13 * 8 + 8)) ||
           (puVar2 < puVar9 + ((ulonglong)(uint)CONCAT11(uVar3,uVar7) - 2) + uVar11 * 2)) {
          FUN_18057bd80(param_2,9);
        }
        if (0 < *(int *)(param_2 + 0x110)) {
          puVar12 = puVar9 + uVar11 * 2;
          while (puVar9 < puVar12) {
            uVar3 = *puVar9;
            puVar10 = puVar9 + 2;
            puVar1 = puVar9 + 1;
            puVar9 = puVar10;
            if ((CONCAT11(uVar3,*puVar1) != 0) &&
               (*(uint *)(param_2 + 0x120) <=
                (uint)(ushort)(CONCAT11(uVar3,*puVar1) + CONCAT11(uVar5,uVar6)))) {
              FUN_18057bd80(param_2,0x10);
            }
          }
        }
      }
    }
    uVar14 = uVar14 - 1;
    puVar12 = puVar9;
  } while (uVar14 != 0);
  return 0;
}



