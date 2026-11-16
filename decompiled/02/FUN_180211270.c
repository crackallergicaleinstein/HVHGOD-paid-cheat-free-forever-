// FUN_180211270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180211270 */

undefined8 * FUN_180211270(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  lVar9 = *param_1;
  lVar11 = ((longlong)param_2 - lVar9) / 6 + ((longlong)param_2 - lVar9 >> 0x3f);
  lVar8 = (param_1[1] - lVar9) / 0x18;
  if (lVar8 == 0xaaaaaaaaaaaaaaa) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar4 = (param_1[2] - lVar9) / 0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar4 >> 1) < uVar4) {
    uVar14 = 0xaaaaaaaaaaaaaaa;
  }
  else {
    uVar4 = (uVar4 >> 1) + uVar4;
    uVar14 = uVar1;
    if (uVar1 <= uVar4) {
      uVar14 = uVar4;
    }
    if (0xaaaaaaaaaaaaaaa < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar9 = FUN_18015bca0(uVar14 * 0x18);
  puVar3 = (undefined8 *)(lVar9 + ((lVar11 >> 2) - (lVar11 >> 0x3f)) * 0x18);
  uVar5 = param_3[2];
  param_3[2] = 0;
  uVar6 = param_3[1];
  param_3[1] = 0;
  uVar7 = *param_3;
  *param_3 = 0;
  *puVar3 = uVar7;
  puVar3[1] = uVar6;
  puVar3[2] = uVar5;
  puVar13 = (undefined8 *)param_1[1];
  puVar10 = (undefined8 *)*param_1;
  if (param_2 == puVar13) {
    if (puVar10 != puVar13) {
      puVar12 = (undefined8 *)(lVar9 + 0x10);
      do {
        uVar5 = puVar10[2];
        puVar10[2] = 0;
        uVar6 = puVar10[1];
        puVar10[1] = 0;
        uVar7 = *puVar10;
        *puVar10 = 0;
        puVar12[-2] = uVar7;
        puVar12[-1] = uVar6;
        *puVar12 = uVar5;
        puVar12 = puVar12 + 3;
        puVar10 = puVar10 + 3;
      } while (puVar10 != puVar13);
    }
  }
  else {
    if (puVar10 != param_2) {
      puVar13 = (undefined8 *)(lVar9 + 0x10);
      do {
        uVar5 = puVar10[2];
        puVar10[2] = 0;
        uVar6 = puVar10[1];
        puVar10[1] = 0;
        uVar7 = *puVar10;
        *puVar10 = 0;
        puVar13[-2] = uVar7;
        puVar13[-1] = uVar6;
        *puVar13 = uVar5;
        puVar13 = puVar13 + 3;
        puVar10 = puVar10 + 3;
      } while (puVar10 != param_2);
    }
    puVar13 = (undefined8 *)param_1[1];
    if (param_2 != puVar13) {
      puVar12 = param_2 + 1;
      puVar10 = puVar3;
      do {
        uVar5 = puVar12[1];
        puVar12[1] = 0;
        uVar6 = *puVar12;
        *puVar12 = 0;
        uVar7 = puVar12[-1];
        puVar12[-1] = 0;
        puVar10[3] = uVar7;
        puVar10[4] = uVar6;
        puVar10[5] = uVar5;
        puVar2 = puVar12 + 2;
        puVar12 = puVar12 + 3;
        puVar10 = puVar10 + 3;
      } while (puVar2 != puVar13);
    }
  }
  FUN_180211f60(param_1,lVar9,uVar1,uVar14);
  return puVar3;
}



