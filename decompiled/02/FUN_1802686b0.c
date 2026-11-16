// FUN_1802686b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802686b0 */

undefined8 * FUN_1802686b0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  lVar3 = *param_1;
  lVar7 = param_1[1] - lVar3 >> 5;
  if (lVar7 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar1 = lVar7 + 1;
  uVar8 = param_1[2] - lVar3 >> 5;
  if (0x7ffffffffffffff - (uVar8 >> 1) < uVar8) {
    uVar10 = 0x7ffffffffffffff;
  }
  else {
    uVar8 = (uVar8 >> 1) + uVar8;
    uVar10 = uVar1;
    if (uVar1 <= uVar8) {
      uVar10 = uVar8;
    }
    if (0x7ffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar7 = FUN_18015bca0(uVar10 << 5);
  puVar2 = (undefined8 *)(((longlong)param_2 - lVar3 & 0xffffffffffffffe0U) + lVar7);
  *puVar2 = *param_3;
  uVar4 = param_3[3];
  param_3[3] = 0;
  uVar5 = param_3[2];
  param_3[2] = 0;
  uVar6 = param_3[1];
  param_3[1] = 0;
  puVar2[1] = uVar6;
  puVar2[2] = uVar5;
  puVar2[3] = uVar4;
  puVar13 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)*param_1;
  if (param_2 == puVar13) {
    if (puVar11 != puVar13) {
      puVar9 = (undefined8 *)(lVar7 + 0x10);
      puVar12 = puVar11 + 2;
      do {
        puVar9[-2] = *puVar11;
        uVar4 = puVar12[1];
        puVar12[1] = 0;
        uVar5 = *puVar12;
        *puVar12 = 0;
        uVar6 = puVar12[-1];
        puVar12[-1] = 0;
        puVar9[-1] = uVar6;
        *puVar9 = uVar5;
        puVar9[1] = uVar4;
        puVar9 = puVar9 + 4;
        puVar11 = puVar11 + 4;
        puVar12 = puVar12 + 4;
      } while (puVar11 != puVar13);
    }
  }
  else {
    if (puVar11 != param_2) {
      puVar13 = (undefined8 *)(lVar7 + 0x10);
      puVar9 = puVar11 + 2;
      do {
        puVar13[-2] = *puVar11;
        uVar4 = puVar9[1];
        puVar9[1] = 0;
        uVar5 = *puVar9;
        *puVar9 = 0;
        uVar6 = puVar9[-1];
        puVar9[-1] = 0;
        puVar13[-1] = uVar6;
        *puVar13 = uVar5;
        puVar13[1] = uVar4;
        puVar13 = puVar13 + 4;
        puVar11 = puVar11 + 4;
        puVar9 = puVar9 + 4;
      } while (puVar11 != param_2);
    }
    puVar13 = (undefined8 *)param_1[1];
    if (param_2 != puVar13) {
      puVar9 = param_2 + 2;
      puVar11 = puVar2;
      do {
        puVar11[4] = puVar9[-2];
        uVar4 = puVar9[1];
        puVar9[1] = 0;
        uVar5 = *puVar9;
        *puVar9 = 0;
        uVar6 = puVar9[-1];
        puVar9[-1] = 0;
        puVar11[5] = uVar6;
        puVar11[6] = uVar5;
        puVar11[7] = uVar4;
        puVar12 = puVar9 + 2;
        puVar9 = puVar9 + 4;
        puVar11 = puVar11 + 4;
      } while (puVar12 != puVar13);
    }
  }
  FUN_180269280(param_1,lVar7,uVar1,uVar10);
  return puVar2;
}



