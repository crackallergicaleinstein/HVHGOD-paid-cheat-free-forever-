// FUN_18056f060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056f060 */

undefined8 * FUN_18056f060(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  
  lVar8 = *param_1;
  lVar9 = param_1[1] - lVar8 >> 5;
  uVar14 = 0x7ffffffffffffff;
  if (lVar9 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar10 = lVar9 + 1;
  uVar6 = param_1[2] - lVar8 >> 5;
  if (uVar6 <= 0x7ffffffffffffff - (uVar6 >> 1)) {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar14 = uVar10;
    if (uVar10 <= uVar6) {
      uVar14 = uVar6;
    }
    if (0x7ffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar9 = FUN_18015bca0(uVar14 * 0x20);
  puVar1 = (undefined8 *)(((longlong)param_2 - lVar8 & 0xffffffffffffffe0U) + lVar9);
  *puVar1 = *param_3;
  uVar2 = param_3[3];
  param_3[3] = 0;
  uVar3 = param_3[2];
  param_3[2] = 0;
  uVar4 = param_3[1];
  param_3[1] = 0;
  puVar1[1] = uVar4;
  puVar1[2] = uVar3;
  puVar1[3] = uVar2;
  puVar13 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)*param_1;
  if (param_2 == puVar13) {
    if (puVar11 != puVar13) {
      puVar5 = (undefined8 *)(lVar9 + 0x10);
      puVar12 = puVar11 + 2;
      do {
        puVar5[-2] = *puVar11;
        uVar2 = puVar12[1];
        puVar12[1] = 0;
        uVar3 = *puVar12;
        *puVar12 = 0;
        uVar4 = puVar12[-1];
        puVar12[-1] = 0;
        puVar5[-1] = uVar4;
        *puVar5 = uVar3;
        puVar5[1] = uVar2;
        puVar5 = puVar5 + 4;
        puVar11 = puVar11 + 4;
        puVar12 = puVar12 + 4;
      } while (puVar11 != puVar13);
    }
  }
  else {
    if (puVar11 != param_2) {
      puVar13 = (undefined8 *)(lVar9 + 0x10);
      puVar5 = puVar11 + 2;
      do {
        puVar13[-2] = *puVar11;
        uVar2 = puVar5[1];
        puVar5[1] = 0;
        uVar3 = *puVar5;
        *puVar5 = 0;
        uVar4 = puVar5[-1];
        puVar5[-1] = 0;
        puVar13[-1] = uVar4;
        *puVar13 = uVar3;
        puVar13[1] = uVar2;
        puVar13 = puVar13 + 4;
        puVar11 = puVar11 + 4;
        puVar5 = puVar5 + 4;
      } while (puVar11 != param_2);
    }
    puVar13 = (undefined8 *)param_1[1];
    if (param_2 != puVar13) {
      puVar5 = param_2 + 2;
      puVar11 = puVar1;
      do {
        puVar11[4] = puVar5[-2];
        uVar2 = puVar5[1];
        puVar5[1] = 0;
        uVar3 = *puVar5;
        *puVar5 = 0;
        uVar4 = puVar5[-1];
        puVar5[-1] = 0;
        puVar11[5] = uVar4;
        puVar11[6] = uVar3;
        puVar11[7] = uVar2;
        puVar12 = puVar5 + 2;
        puVar5 = puVar5 + 4;
        puVar11 = puVar11 + 4;
      } while (puVar12 != puVar13);
    }
  }
  lVar8 = *param_1;
  if (lVar8 != 0) {
    lVar7 = param_1[1];
    for (; lVar8 != lVar7; lVar8 = lVar8 + 0x20) {
      FUN_1800f0160(lVar8 + 8);
    }
    lVar8 = *param_1;
    lVar7 = lVar8;
    if ((0xfff < (param_1[2] - lVar8 & 0xffffffffffffffe0U)) &&
       (lVar7 = *(longlong *)(lVar8 + -8), 0x1f < (lVar8 - lVar7) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar7);
  }
  *param_1 = lVar9;
  param_1[1] = uVar10 * 0x20 + lVar9;
  param_1[2] = uVar14 * 0x20 + lVar9;
  return puVar1;
}



