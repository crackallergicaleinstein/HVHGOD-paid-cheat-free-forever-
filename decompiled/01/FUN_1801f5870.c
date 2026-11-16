// FUN_1801f5870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f5870 */

undefined1 (*) [16] FUN_1801f5870(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 (*pauVar6) [16];
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  lVar11 = *param_1;
  lVar12 = param_1[1] - lVar11 >> 5;
  uVar14 = 0x7ffffffffffffff;
  if (lVar12 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar13 = lVar12 + 1;
  uVar9 = param_1[2] - lVar11 >> 5;
  if (uVar9 <= 0x7ffffffffffffff - (uVar9 >> 1)) {
    uVar9 = (uVar9 >> 1) + uVar9;
    uVar14 = uVar13;
    if (uVar13 <= uVar9) {
      uVar14 = uVar9;
    }
    if (0x7ffffffffffffff < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  pauVar7 = (undefined1 (*) [16])FUN_18015bca0(uVar14 * 0x20);
  pauVar1 = (undefined1 (*) [16])(*pauVar7 + ((longlong)param_2 - lVar11 & 0xffffffffffffffe0));
  *pauVar1 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined8 *)*pauVar1 = *param_3;
  *(undefined8 *)(*pauVar1 + 8) = uVar3;
  *(undefined8 *)pauVar1[1] = uVar4;
  *(undefined8 *)(pauVar1[1] + 8) = uVar5;
  *(undefined2 *)param_3 = 0;
  param_3[2] = 0;
  param_3[3] = 7;
  puVar2 = (undefined8 *)param_1[1];
  puVar8 = (undefined8 *)*param_1;
  pauVar6 = pauVar7;
  if (param_2 == puVar2) {
    for (; puVar8 != puVar2; puVar8 = puVar8 + 4) {
      *pauVar6 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar6[1] = 0;
      *(undefined8 *)(pauVar6[1] + 8) = 0;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      *(undefined8 *)*pauVar6 = *puVar8;
      *(undefined8 *)(*pauVar6 + 8) = uVar3;
      *(undefined8 *)pauVar6[1] = uVar4;
      *(undefined8 *)(pauVar6[1] + 8) = uVar5;
      *(undefined2 *)puVar8 = 0;
      puVar8[2] = 0;
      puVar8[3] = 7;
      pauVar6 = pauVar6 + 2;
    }
  }
  else {
    for (; puVar8 != param_2; puVar8 = puVar8 + 4) {
      *pauVar6 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar6[1] = 0;
      *(undefined8 *)(pauVar6[1] + 8) = 0;
      uVar3 = puVar8[1];
      uVar4 = puVar8[2];
      uVar5 = puVar8[3];
      *(undefined8 *)*pauVar6 = *puVar8;
      *(undefined8 *)(*pauVar6 + 8) = uVar3;
      *(undefined8 *)pauVar6[1] = uVar4;
      *(undefined8 *)(pauVar6[1] + 8) = uVar5;
      *(undefined2 *)puVar8 = 0;
      puVar8[2] = 0;
      puVar8[3] = 7;
      pauVar6 = pauVar6 + 2;
    }
    puVar2 = (undefined8 *)param_1[1];
    pauVar6 = pauVar1;
    for (; param_2 != puVar2; param_2 = param_2 + 4) {
      pauVar10 = pauVar6 + 2;
      *pauVar10 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar6[3] = 0;
      *(undefined8 *)(pauVar6[3] + 8) = 0;
      uVar3 = param_2[1];
      uVar4 = param_2[2];
      uVar5 = param_2[3];
      *(undefined8 *)*pauVar10 = *param_2;
      *(undefined8 *)(pauVar6[2] + 8) = uVar3;
      *(undefined8 *)pauVar6[3] = uVar4;
      *(undefined8 *)(pauVar6[3] + 8) = uVar5;
      *(undefined2 *)param_2 = 0;
      param_2[2] = 0;
      param_2[3] = 7;
      pauVar6 = pauVar10;
    }
  }
  lVar11 = *param_1;
  if (lVar11 != 0) {
    lVar12 = param_1[1];
    for (; lVar11 != lVar12; lVar11 = lVar11 + 0x20) {
      FUN_18015b930(lVar11);
    }
    lVar11 = *param_1;
    lVar12 = lVar11;
    if ((0xfff < (param_1[2] - lVar11 & 0xffffffffffffffe0U)) &&
       (lVar12 = *(longlong *)(lVar11 + -8), 0x1f < (lVar11 - lVar12) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar12);
  }
  *param_1 = (longlong)pauVar7;
  param_1[1] = (longlong)(pauVar7 + uVar13 * 2);
  param_1[2] = (longlong)(pauVar7 + uVar14 * 2);
  return pauVar1;
}



