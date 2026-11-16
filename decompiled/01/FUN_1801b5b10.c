// FUN_1801b5b10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b5b10 */

undefined8 * FUN_1801b5b10(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  
  lVar9 = *param_1;
  lVar7 = (param_1[1] - lVar9) / 0x28;
  uVar10 = 0x666666666666666;
  if (lVar7 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar2 = (param_1[2] - lVar9) / 0x28;
  if (uVar2 <= 0x666666666666666 - (uVar2 >> 1)) {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar10 = uVar1;
    if (uVar1 <= uVar2) {
      uVar10 = uVar2;
    }
    if (0x666666666666666 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar7 = FUN_18015bca0(uVar10 * 0x28);
  puVar3 = (undefined8 *)(lVar7 + (((longlong)param_2 - lVar9) / 0x28) * 0x28);
  *puVar3 = *param_3;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(param_3 + 1);
  uVar4 = param_3[4];
  param_3[4] = 0;
  uVar5 = param_3[3];
  param_3[3] = 0;
  uVar6 = param_3[2];
  param_3[2] = 0;
  puVar3[2] = uVar6;
  puVar3[3] = uVar5;
  puVar3[4] = uVar4;
  puVar14 = (undefined8 *)param_1[1];
  puVar13 = (undefined8 *)*param_1;
  if (param_2 == puVar14) {
    if (puVar13 != puVar14) {
      puVar8 = (undefined8 *)(lVar7 + 0x10);
      puVar11 = puVar13 + 3;
      do {
        puVar8[-2] = *puVar13;
        *(undefined1 *)(puVar8 + -1) = *(undefined1 *)(puVar11 + -2);
        uVar4 = puVar11[1];
        puVar11[1] = 0;
        uVar5 = *puVar11;
        *puVar11 = 0;
        uVar6 = puVar11[-1];
        puVar11[-1] = 0;
        *puVar8 = uVar6;
        puVar8[1] = uVar5;
        puVar8[2] = uVar4;
        puVar8 = puVar8 + 5;
        puVar13 = puVar13 + 5;
        puVar11 = puVar11 + 5;
      } while (puVar13 != puVar14);
    }
  }
  else {
    if (puVar13 != param_2) {
      puVar14 = (undefined8 *)(lVar7 + 0x10);
      puVar8 = puVar13 + 3;
      do {
        puVar14[-2] = *puVar13;
        *(undefined1 *)(puVar14 + -1) = *(undefined1 *)(puVar8 + -2);
        uVar4 = puVar8[1];
        puVar8[1] = 0;
        uVar5 = *puVar8;
        *puVar8 = 0;
        uVar6 = puVar8[-1];
        puVar8[-1] = 0;
        *puVar14 = uVar6;
        puVar14[1] = uVar5;
        puVar14[2] = uVar4;
        puVar14 = puVar14 + 5;
        puVar13 = puVar13 + 5;
        puVar8 = puVar8 + 5;
      } while (puVar13 != param_2);
    }
    puVar14 = (undefined8 *)param_1[1];
    if (param_2 != puVar14) {
      puVar8 = param_2 + 3;
      puVar13 = puVar3;
      do {
        puVar13[5] = puVar8[-3];
        *(undefined1 *)(puVar13 + 6) = *(undefined1 *)(puVar8 + -2);
        uVar4 = puVar8[1];
        puVar8[1] = 0;
        uVar5 = *puVar8;
        *puVar8 = 0;
        uVar6 = puVar8[-1];
        puVar8[-1] = 0;
        puVar13[7] = uVar6;
        puVar13[8] = uVar5;
        puVar13[9] = uVar4;
        puVar11 = puVar8 + 2;
        puVar8 = puVar8 + 5;
        puVar13 = puVar13 + 5;
      } while (puVar11 != puVar14);
    }
  }
  lVar9 = *param_1;
  if (lVar9 != 0) {
    lVar12 = param_1[1];
    for (; lVar9 != lVar12; lVar9 = lVar9 + 0x28) {
      FUN_180113710(lVar9 + 0x10);
    }
    lVar9 = *param_1;
    lVar12 = lVar9;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar9) / 0x28) * 0x28)) &&
       (lVar12 = *(longlong *)(lVar9 + -8), 0x1f < (lVar9 - lVar12) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar12);
  }
  *param_1 = lVar7;
  param_1[1] = lVar7 + uVar1 * 0x28;
  param_1[2] = lVar7 + uVar10 * 0x28;
  return puVar3;
}



