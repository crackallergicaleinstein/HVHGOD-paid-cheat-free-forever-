// FUN_18010f6b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18010f6b0 */

longlong * FUN_18010f6b0(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar6 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - param_1[2] < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  param_2 = param_1[2] + param_2;
  uVar2 = param_1[3];
  uVar5 = param_2 | 7;
  if ((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = uVar2 + (uVar2 >> 1);
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
    uVar5 = uVar6 + 1;
    if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  else {
    uVar5 = 0x7fffffffffffffff;
  }
  lVar4 = FUN_18015bca0(uVar5 * 2);
  param_1[2] = param_2;
  param_1[3] = uVar6;
  if (uVar2 < 8) {
    FUN_18063aed0(lVar4,param_1);
  }
  else {
    lVar3 = *param_1;
    FUN_18063aed0(lVar4,lVar3);
    lVar7 = lVar3;
    if ((0xfff < uVar2 * 2 + 2) && (lVar7 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar7) - 8U))
    {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar7);
  }
  *param_1 = lVar4;
  return param_1;
}



