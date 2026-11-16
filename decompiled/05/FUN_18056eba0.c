// FUN_18056eba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056eba0 */

undefined1 (*) [16] FUN_18056eba0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 (*pauVar3) [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 (*pauVar7) [16];
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 (*pauVar10) [16];
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined8 *puVar14;
  longlong lVar15;
  
  lVar12 = *param_1;
  lVar8 = (param_1[1] - lVar12) / 0x28;
  uVar13 = 0x666666666666666;
  if (lVar8 == 0x666666666666666) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
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
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  uVar6 = param_3[3];
  *(undefined8 *)*pauVar3 = *param_3;
  *(undefined8 *)(*pauVar3 + 8) = uVar4;
  *(undefined8 *)pauVar3[1] = uVar5;
  *(undefined8 *)(pauVar3[1] + 8) = uVar6;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined4 *)pauVar3[2] = *(undefined4 *)(param_3 + 4);
  puVar14 = (undefined8 *)param_1[1];
  puVar9 = (undefined8 *)*param_1;
  if (param_2 == puVar14) {
    if (puVar9 != puVar14) {
      puVar11 = (undefined8 *)(lVar8 + 0x18);
      do {
        *(undefined1 (*) [16])(puVar11 + -3) = (undefined1  [16])0x0;
        puVar11[-1] = 0;
        *puVar11 = 0;
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        puVar11[-3] = *puVar9;
        puVar11[-2] = uVar4;
        puVar11[-1] = uVar5;
        *puVar11 = uVar6;
        *(undefined1 *)puVar9 = 0;
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)(puVar9 + 4);
        puVar11 = puVar11 + 5;
        puVar9 = puVar9 + 5;
      } while (puVar9 != puVar14);
    }
  }
  else {
    if (puVar9 != param_2) {
      puVar14 = (undefined8 *)(lVar8 + 0x18);
      do {
        *(undefined1 (*) [16])(puVar14 + -3) = (undefined1  [16])0x0;
        puVar14[-1] = 0;
        *puVar14 = 0;
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        puVar14[-3] = *puVar9;
        puVar14[-2] = uVar4;
        puVar14[-1] = uVar5;
        *puVar14 = uVar6;
        *(undefined1 *)puVar9 = 0;
        puVar9[2] = 0;
        puVar9[3] = 0xf;
        *(undefined4 *)(puVar14 + 1) = *(undefined4 *)(puVar9 + 4);
        puVar14 = puVar14 + 5;
        puVar9 = puVar9 + 5;
      } while (puVar9 != param_2);
    }
    puVar14 = (undefined8 *)param_1[1];
    pauVar7 = pauVar3;
    for (; param_2 != puVar14; param_2 = param_2 + 5) {
      pauVar10 = (undefined1 (*) [16])(pauVar7[2] + 8);
      *pauVar10 = (undefined1  [16])0x0;
      *(undefined8 *)(pauVar7[3] + 8) = 0;
      *(undefined8 *)pauVar7[4] = 0;
      uVar4 = param_2[1];
      uVar5 = param_2[2];
      uVar6 = param_2[3];
      *(undefined8 *)*pauVar10 = *param_2;
      *(undefined8 *)pauVar7[3] = uVar4;
      *(undefined8 *)(pauVar7[3] + 8) = uVar5;
      *(undefined8 *)pauVar7[4] = uVar6;
      *(undefined1 *)param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 0xf;
      *(undefined4 *)(pauVar7[4] + 8) = *(undefined4 *)(param_2 + 4);
      pauVar7 = pauVar10;
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



