// FUN_1801b5e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b5e20 */

undefined1 (*) [16] FUN_1801b5e20(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  undefined1 (*pauVar15) [16];
  
  lVar7 = *param_1;
  lVar9 = ((longlong)param_2 - lVar7) / 6 + ((longlong)param_2 - lVar7 >> 0x3f);
  lVar12 = (param_1[1] - lVar7) / 0x30;
  uVar13 = 0x555555555555555;
  if (lVar12 == 0x555555555555555) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar12 + 1;
  uVar2 = (param_1[2] - lVar7) / 0x30;
  if (uVar2 <= 0x555555555555555 - (uVar2 >> 1)) {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar13 = uVar1;
    if (uVar1 <= uVar2) {
      uVar13 = uVar2;
    }
    if (0x555555555555555 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar7 = FUN_18015bca0(uVar13 * 0x30);
  pauVar15 = (undefined1 (*) [16])(((lVar9 >> 3) - (lVar9 >> 0x3f)) * 0x30 + lVar7);
  *pauVar15 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar15[1] = 0;
  *(undefined8 *)(pauVar15[1] + 8) = 0;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined8 *)*pauVar15 = *param_3;
  *(undefined8 *)(*pauVar15 + 8) = uVar4;
  *(undefined8 *)pauVar15[1] = uVar5;
  *(undefined8 *)(pauVar15[1] + 8) = uVar6;
  *(undefined2 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 7;
  *(undefined4 *)pauVar15[2] = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(pauVar15[2] + 4) = *(undefined4 *)((longlong)param_3 + 0x24);
  *(undefined4 *)(pauVar15[2] + 8) = *(undefined4 *)(param_3 + 5);
  puVar11 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  if (param_2 == puVar11) {
    if (puVar8 != puVar11) {
      puVar10 = (undefined8 *)(lVar7 + 0x18);
      do {
        *(undefined1 (*) [16])(puVar10 + -3) = (undefined1  [16])0x0;
        puVar10[-1] = 0;
        *puVar10 = 0;
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        puVar10[-3] = *puVar8;
        puVar10[-2] = uVar4;
        puVar10[-1] = uVar5;
        *puVar10 = uVar6;
        *(undefined2 *)puVar8 = 0;
        puVar8[2] = 0;
        puVar8[3] = 7;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar8 + 4);
        *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0x24);
        *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar8 + 5);
        puVar10 = puVar10 + 6;
        puVar8 = puVar8 + 6;
      } while (puVar8 != puVar11);
    }
  }
  else {
    if (puVar8 != param_2) {
      puVar11 = (undefined8 *)(lVar7 + 0x18);
      do {
        *(undefined1 (*) [16])(puVar11 + -3) = (undefined1  [16])0x0;
        puVar11[-1] = 0;
        *puVar11 = 0;
        uVar4 = puVar8[1];
        uVar5 = puVar8[2];
        uVar6 = puVar8[3];
        puVar11[-3] = *puVar8;
        puVar11[-2] = uVar4;
        puVar11[-1] = uVar5;
        *puVar11 = uVar6;
        *(undefined2 *)puVar8 = 0;
        puVar8[2] = 0;
        puVar8[3] = 7;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar8 + 4);
        *(undefined4 *)((longlong)puVar11 + 0xc) = *(undefined4 *)((longlong)puVar8 + 0x24);
        *(undefined4 *)(puVar11 + 2) = *(undefined4 *)(puVar8 + 5);
        puVar11 = puVar11 + 6;
        puVar8 = puVar8 + 6;
      } while (puVar8 != param_2);
    }
    puVar11 = (undefined8 *)param_1[1];
    if (param_2 != puVar11) {
      puVar8 = param_2 + 2;
      pauVar3 = pauVar15;
      do {
        pauVar14 = pauVar3 + 3;
        *pauVar14 = (undefined1  [16])0x0;
        *(undefined8 *)pauVar3[4] = 0;
        *(undefined8 *)(pauVar3[4] + 8) = 0;
        uVar4 = puVar8[-1];
        uVar5 = *puVar8;
        uVar6 = puVar8[1];
        *(undefined8 *)*pauVar14 = puVar8[-2];
        *(undefined8 *)(pauVar3[3] + 8) = uVar4;
        *(undefined8 *)pauVar3[4] = uVar5;
        *(undefined8 *)(pauVar3[4] + 8) = uVar6;
        *(undefined2 *)(puVar8 + -2) = 0;
        *puVar8 = 0;
        puVar8[1] = 7;
        *(undefined4 *)pauVar3[5] = *(undefined4 *)(puVar8 + 2);
        *(undefined4 *)(pauVar3[5] + 4) = *(undefined4 *)((longlong)puVar8 + 0x14);
        *(undefined4 *)(pauVar3[5] + 8) = *(undefined4 *)(puVar8 + 3);
        puVar10 = puVar8 + 4;
        puVar8 = puVar8 + 6;
        pauVar3 = pauVar14;
      } while (puVar10 != puVar11);
    }
  }
  lVar12 = *param_1;
  if (lVar12 != 0) {
    lVar9 = param_1[1];
    for (; lVar12 != lVar9; lVar12 = lVar12 + 0x30) {
      FUN_18015b930(lVar12);
    }
    lVar12 = *param_1;
    lVar9 = lVar12;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar12) / 0x30) * 0x30)) &&
       (lVar9 = *(longlong *)(lVar12 + -8), 0x1f < (lVar12 - lVar9) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar9);
  }
  *param_1 = lVar7;
  param_1[1] = uVar1 * 0x30 + lVar7;
  param_1[2] = uVar13 * 0x30 + lVar7;
  return pauVar15;
}



