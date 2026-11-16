// FUN_18036f9a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036f9a0 */

undefined1 (*) [16] FUN_18036f9a0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  lVar7 = *param_1;
  lVar8 = param_1[1] - lVar7 >> 6;
  if (lVar8 == 0x3ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar9 = lVar8 + 1;
  uVar6 = param_1[2] - lVar7 >> 6;
  if (0x3ffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar10 = 0x3ffffffffffffff;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar10 = uVar9;
    if (uVar9 <= uVar6) {
      uVar10 = uVar6;
    }
    if (0x3ffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar5 = FUN_18015bca0(uVar10 * 0x40);
  pauVar1 = (undefined1 (*) [16])((param_2 - lVar7 & 0xffffffffffffffc0U) + lVar5);
  *pauVar1 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar1[1] = 0;
  *(undefined8 *)(pauVar1[1] + 8) = 0;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  *(undefined8 *)*pauVar1 = *param_3;
  *(undefined8 *)(*pauVar1 + 8) = uVar2;
  *(undefined8 *)pauVar1[1] = uVar3;
  *(undefined8 *)(pauVar1[1] + 8) = uVar4;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  param_3[2] = 0;
  pauVar1[2] = (undefined1  [16])0x0;
  *(undefined8 *)pauVar1[3] = 0;
  *(undefined8 *)(pauVar1[3] + 8) = 0;
  uVar2 = param_3[5];
  uVar3 = param_3[6];
  uVar4 = param_3[7];
  *(undefined8 *)pauVar1[2] = param_3[4];
  *(undefined8 *)(pauVar1[2] + 8) = uVar2;
  *(undefined8 *)pauVar1[3] = uVar3;
  *(undefined8 *)(pauVar1[3] + 8) = uVar4;
  *(undefined1 *)(param_3 + 4) = 0;
  param_3[6] = 0;
  param_3[7] = 0xf;
  lVar8 = param_1[1];
  lVar7 = *param_1;
  if (param_2 != lVar8) {
    FUN_18036fb90(lVar7,param_2);
    lVar8 = param_1[1];
    lVar7 = param_2;
  }
  FUN_18036fb90(lVar7,lVar8);
  lVar7 = *param_1;
  if (lVar7 != 0) {
    lVar8 = param_1[1];
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x40) {
      FUN_18015c010(lVar7 + 0x20);
      FUN_18015c010(lVar7);
    }
    lVar7 = *param_1;
    lVar8 = lVar7;
    if ((0xfff < (param_1[2] - lVar7 & 0xffffffffffffffc0U)) &&
       (lVar8 = *(longlong *)(lVar7 + -8), 0x1f < (lVar7 - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
  }
  *param_1 = lVar5;
  param_1[1] = uVar9 * 0x40 + lVar5;
  param_1[2] = uVar10 * 0x40 + lVar5;
  return pauVar1;
}



