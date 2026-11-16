// FUN_180113930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180113930 */

longlong * FUN_180113930(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    plVar7 = param_1;
    if (0xf < uVar2) {
      plVar7 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_18063aed0(plVar7);
    *(undefined1 *)(param_3 + (longlong)plVar7) = 0;
    return param_1;
  }
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  uVar5 = param_3 | 0xf;
  uVar8 = 0x7fffffffffffffff;
  if ((uVar5 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = uVar2 + (uVar2 >> 1);
    uVar8 = uVar5;
    if (uVar5 < uVar1) {
      uVar8 = uVar1;
    }
  }
  lVar4 = FUN_18015bca0(uVar8 + 1);
  param_1[2] = param_3;
  param_1[3] = uVar8;
  FUN_18063aed0(lVar4,param_2);
  *(undefined1 *)(param_3 + lVar4) = 0;
  if (0xf < uVar2) {
    lVar3 = *param_1;
    lVar6 = lVar3;
    if ((0xfff < uVar2 + 1) && (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar6);
  }
  *param_1 = lVar4;
  return param_1;
}



