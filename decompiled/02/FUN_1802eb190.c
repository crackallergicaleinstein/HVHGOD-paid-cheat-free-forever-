// FUN_1802eb190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802eb190 */

undefined1 (*) [16] FUN_1802eb190(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 (*pauVar14) [16];
  longlong lVar15;
  
  lVar12 = *param_1;
  lVar8 = (param_1[1] - lVar12) / 0x28;
  uVar13 = 0x666666666666666;
  if (lVar8 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar2 = (param_1[2] - lVar12) / 0x28;
  if (uVar2 <= 0x666666666666666 - (uVar2 >> 1)) {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar13 = uVar1;
    if (uVar1 <= uVar2) {
      uVar13 = uVar2;
    }
    if (0x666666666666666 < uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar8 = FUN_18015bca0(uVar13 * 0x28);
  pauVar3 = (undefined1 (*) [16])(lVar8 + (((longlong)param_2 - lVar12) / 0x28) * 0x28);
  *pauVar3 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar3[1] = 0;
  *(undefined8 *)(pauVar3[1] + 8) = 0;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  *(undefined8 *)*pauVar3 = *param_3;
  *(undefined8 *)(*pauVar3 + 8) = uVar5;
  *(undefined8 *)pauVar3[1] = uVar6;
  *(undefined8 *)(pauVar3[1] + 8) = uVar7;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined4 *)pauVar3[2] = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(pauVar3[2] + 4) = *(undefined4 *)((longlong)param_3 + 0x24);
  puVar11 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  if (param_2 == puVar11) {
    if (puVar9 != puVar11) {
      puVar10 = (undefined8 *)(lVar8 + 0x18);
      do {
        *(undefined1 (*) [16])(puVar10 + -3) = (undefined1  [16])0x0;
        puVar10[-1] = 0;
        *puVar10 = 0;
        uVar5 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        puVar10[-3] = *puVar9;
        puVar10[-2] = uVar5;
        puVar10[-1] = uVar6;
        *puVar10 = uVar7;
        *(undefined1 *)puVar9 = 0;
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        *(undefined4 *)(puVar10 + 1) = *(undefined4 *)(puVar9 + 4);
        *(undefined4 *)((longlong)puVar10 + 0xc) = *(undefined4 *)((longlong)puVar9 + 0x24);
        puVar10 = puVar10 + 5;
        puVar9 = puVar9 + 5;
      } while (puVar9 != puVar11);
    }
  }
  else {
    if (puVar9 != param_2) {
      puVar11 = (undefined8 *)(lVar8 + 0x18);
      do {
        *(undefined1 (*) [16])(puVar11 + -3) = (undefined1  [16])0x0;
        puVar11[-1] = 0;
        *puVar11 = 0;
        uVar5 = puVar9[1];
        uVar6 = puVar9[2];
        uVar7 = puVar9[3];
        puVar11[-3] = *puVar9;
        puVar11[-2] = uVar5;
        puVar11[-1] = uVar6;
        *puVar11 = uVar7;
        *(undefined1 *)puVar9 = 0;
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar9 + 4);
        *(undefined4 *)((longlong)puVar11 + 0xc) = *(undefined4 *)((longlong)puVar9 + 0x24);
        puVar11 = puVar11 + 5;
        puVar9 = puVar9 + 5;
      } while (puVar9 != param_2);
    }
    puVar11 = (undefined8 *)param_1[1];
    if (param_2 != puVar11) {
      puVar9 = param_2 + 2;
      pauVar4 = pauVar3;
      do {
        pauVar14 = (undefined1 (*) [16])(pauVar4[2] + 8);
        *pauVar14 = (undefined1  [16])0x0;
        *(undefined8 *)(pauVar4[3] + 8) = 0;
        *(undefined8 *)pauVar4[4] = 0;
        uVar5 = puVar9[-1];
        uVar6 = *puVar9;
        uVar7 = puVar9[1];
        *(undefined8 *)*pauVar14 = puVar9[-2];
        *(undefined8 *)pauVar4[3] = uVar5;
        *(undefined8 *)(pauVar4[3] + 8) = uVar6;
        *(undefined8 *)pauVar4[4] = uVar7;
        *(undefined1 *)(puVar9 + -2) = 0;
        *puVar9 = 0;
        puVar9[1] = 0xf;
        *(undefined4 *)(pauVar4[4] + 8) = *(undefined4 *)(puVar9 + 2);
        *(undefined4 *)(pauVar4[4] + 0xc) = *(undefined4 *)((longlong)puVar9 + 0x14);
        puVar10 = puVar9 + 3;
        puVar9 = puVar9 + 5;
        pauVar4 = pauVar14;
      } while (puVar10 != puVar11);
    }
  }
  lVar12 = *param_1;
  if (lVar12 != 0) {
    lVar15 = param_1[1];
    for (; lVar12 != lVar15; lVar12 = lVar12 + 0x28) {
      FUN_18015c010(lVar12);
    }
    lVar12 = *param_1;
    lVar15 = lVar12;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar12) / 0x28) * 0x28)) &&
       (lVar15 = *(longlong *)(lVar12 + -8), 0x1f < (lVar12 - lVar15) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar15);
  }
  *param_1 = lVar8;
  param_1[1] = lVar8 + uVar1 * 0x28;
  param_1[2] = uVar13 * 0x28 + lVar8;
  return pauVar3;
}



