// FUN_1801b5730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b5730 */

undefined8 * FUN_1801b5730(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
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
  lVar8 = param_1[1] - lVar7 >> 5;
  if (lVar8 == 0x7ffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1801baf80();
  }
  uVar9 = lVar8 + 1;
  uVar6 = param_1[2] - lVar7 >> 5;
  if (0x7ffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar10 = 0x7ffffffffffffff;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar10 = uVar9;
    if (uVar9 <= uVar6) {
      uVar10 = uVar6;
    }
    if (0x7ffffffffffffff < uVar10) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar5 = FUN_18015bca0(uVar10 * 0x20);
  puVar1 = (undefined8 *)((param_2 - lVar7 & 0xffffffffffffffe0U) + lVar5);
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
  lVar7 = param_1[1];
  lVar8 = *param_1;
  if (param_2 != lVar7) {
    FUN_1801ba060(*param_1,param_2);
    lVar7 = param_1[1];
    lVar8 = param_2;
  }
  FUN_1801ba060(lVar8,lVar7);
  lVar7 = *param_1;
  if (lVar7 != 0) {
    lVar8 = param_1[1];
    for (; lVar7 != lVar8; lVar7 = lVar7 + 0x20) {
      FUN_180113710(lVar7 + 8);
    }
    lVar7 = *param_1;
    lVar8 = lVar7;
    if ((0xfff < (param_1[2] - lVar7 & 0xffffffffffffffe0U)) &&
       (lVar8 = *(longlong *)(lVar7 + -8), 0x1f < (lVar7 - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
  }
  *param_1 = lVar5;
  param_1[1] = uVar9 * 0x20 + lVar5;
  param_1[2] = uVar10 * 0x20 + lVar5;
  return puVar1;
}



