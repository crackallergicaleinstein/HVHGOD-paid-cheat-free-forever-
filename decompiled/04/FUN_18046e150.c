// FUN_18046e150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046e150 */

undefined8 * FUN_18046e150(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  
  lVar9 = *param_1;
  lVar8 = (param_1[1] - lVar9) / 0x28;
  uVar10 = 0x666666666666666;
  if (lVar8 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar1 = lVar8 + 1;
  uVar3 = (param_1[2] - lVar9) / 0x28;
  if (uVar3 <= 0x666666666666666 - (uVar3 >> 1)) {
    uVar3 = (uVar3 >> 1) + uVar3;
    uVar10 = uVar1;
    if (uVar1 <= uVar3) {
      uVar10 = uVar3;
    }
    if (0x666666666666666 < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar8 = FUN_18015bca0(uVar10 * 0x28);
  puVar4 = (undefined8 *)(lVar8 + (((longlong)param_2 - lVar9) / 0x28) * 0x28);
  uVar5 = param_3[2];
  param_3[2] = 0;
  uVar6 = param_3[1];
  param_3[1] = 0;
  uVar7 = *param_3;
  *param_3 = 0;
  *puVar4 = uVar7;
  puVar4[1] = uVar6;
  puVar4[2] = uVar5;
  *(undefined4 *)(puVar4 + 3) = *(undefined4 *)(param_3 + 3);
  *(undefined4 *)((longlong)puVar4 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0x1c);
  *(undefined1 *)(puVar4 + 4) = *(undefined1 *)(param_3 + 4);
  puVar14 = (undefined8 *)param_1[1];
  puVar11 = (undefined8 *)*param_1;
  if (param_2 == puVar14) {
    if (puVar11 != puVar14) {
      puVar12 = (undefined8 *)(lVar8 + 0x10);
      do {
        uVar5 = puVar11[2];
        puVar11[2] = 0;
        uVar6 = puVar11[1];
        puVar11[1] = 0;
        uVar7 = *puVar11;
        *puVar11 = 0;
        puVar12[-2] = uVar7;
        puVar12[-1] = uVar6;
        *puVar12 = uVar5;
        *(undefined4 *)(puVar12 + 1) = *(undefined4 *)(puVar11 + 3);
        *(undefined4 *)((longlong)puVar12 + 0xc) = *(undefined4 *)((longlong)puVar11 + 0x1c);
        *(undefined1 *)(puVar12 + 2) = *(undefined1 *)(puVar11 + 4);
        puVar12 = puVar12 + 5;
        puVar11 = puVar11 + 5;
      } while (puVar11 != puVar14);
    }
  }
  else {
    if (puVar11 != param_2) {
      puVar14 = (undefined8 *)(lVar8 + 0x10);
      do {
        uVar5 = puVar11[2];
        puVar11[2] = 0;
        uVar6 = puVar11[1];
        puVar11[1] = 0;
        uVar7 = *puVar11;
        *puVar11 = 0;
        puVar14[-2] = uVar7;
        puVar14[-1] = uVar6;
        *puVar14 = uVar5;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar11 + 3);
        *(undefined4 *)((longlong)puVar14 + 0xc) = *(undefined4 *)((longlong)puVar11 + 0x1c);
        *(undefined1 *)(puVar14 + 2) = *(undefined1 *)(puVar11 + 4);
        puVar14 = puVar14 + 5;
        puVar11 = puVar11 + 5;
      } while (puVar11 != param_2);
    }
    puVar14 = (undefined8 *)param_1[1];
    if (param_2 != puVar14) {
      puVar12 = param_2 + 1;
      puVar11 = puVar4;
      do {
        uVar5 = puVar12[1];
        puVar12[1] = 0;
        uVar6 = *puVar12;
        *puVar12 = 0;
        uVar7 = puVar12[-1];
        puVar12[-1] = 0;
        puVar11[5] = uVar7;
        puVar11[6] = uVar6;
        puVar11[7] = uVar5;
        *(undefined4 *)(puVar11 + 8) = *(undefined4 *)(puVar12 + 2);
        *(undefined4 *)((longlong)puVar11 + 0x44) = *(undefined4 *)((longlong)puVar12 + 0x14);
        *(undefined1 *)(puVar11 + 9) = *(undefined1 *)(puVar12 + 3);
        puVar2 = puVar12 + 4;
        puVar12 = puVar12 + 5;
        puVar11 = puVar11 + 5;
      } while (puVar2 != puVar14);
    }
  }
  lVar9 = *param_1;
  if (lVar9 != 0) {
    lVar13 = param_1[1];
    for (; lVar9 != lVar13; lVar9 = lVar9 + 0x28) {
      FUN_180159650(lVar9);
    }
    lVar9 = *param_1;
    lVar13 = lVar9;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar9) / 0x28) * 0x28)) &&
       (lVar13 = *(longlong *)(lVar9 + -8), 0x1f < (lVar9 - lVar13) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar13);
  }
  *param_1 = lVar8;
  param_1[1] = lVar8 + uVar1 * 0x28;
  param_1[2] = lVar8 + uVar10 * 0x28;
  return puVar4;
}



