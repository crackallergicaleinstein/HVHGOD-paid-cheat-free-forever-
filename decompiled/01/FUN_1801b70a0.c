// FUN_1801b70a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b70a0 */

longlong *
FUN_1801b70a0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,longlong param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar2 = param_1[2];
  uVar6 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  uVar3 = param_1[3];
  uVar5 = lVar2 + param_2 | 7;
  if ((uVar5 < 0x7fffffffffffffff) && (uVar3 <= 0x7ffffffffffffffe - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
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
  param_1[2] = lVar2 + param_2;
  param_1[3] = uVar6;
  lVar7 = param_6 * 2 + lVar4;
  if (uVar3 < 8) {
    FUN_18063aed0(lVar4,param_5);
    FUN_18063aed0(lVar7,param_1,lVar2 * 2 + 2);
  }
  else {
    lVar2 = *param_1;
    FUN_18063aed0(lVar4,param_5);
    FUN_18063aed0(lVar7,lVar2);
    lVar7 = lVar2;
    if ((0xfff < uVar3 * 2 + 2) && (lVar7 = *(longlong *)(lVar2 + -8), 0x1f < (lVar2 - lVar7) - 8U))
    {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar7);
  }
  *param_1 = lVar4;
  return param_1;
}



