// FUN_18010f950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18010f950 */

longlong *
FUN_18010f950(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  ulonglong uVar1;
  undefined2 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar3 = param_1[2];
  uVar7 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  uVar4 = param_1[3];
  uVar6 = param_2 + lVar3 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar4 <= 0x7ffffffffffffffe - (uVar4 >> 1))) {
    uVar1 = uVar4 + (uVar4 >> 1);
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
    uVar6 = uVar7 + 1;
    if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  else {
    uVar6 = 0x7fffffffffffffff;
  }
  lVar5 = FUN_18015bca0(uVar6 * 2);
  param_1[2] = param_2 + lVar3;
  param_1[3] = uVar7;
  lVar8 = lVar3 * 2 + lVar5;
  puVar2 = (undefined2 *)(lVar5 + (param_5 + lVar3) * 2);
  if (uVar4 < 8) {
    FUN_18063aed0(lVar5,param_1);
    FUN_18063aed0(lVar8,param_4,param_5 * 2);
    *puVar2 = 0;
  }
  else {
    lVar3 = *param_1;
    FUN_18063aed0(lVar5,lVar3);
    FUN_18063aed0(lVar8,param_4);
    *puVar2 = 0;
    lVar8 = lVar3;
    if ((0xfff < uVar4 * 2 + 2) && (lVar8 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar8) - 8U))
    {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
  }
  *param_1 = lVar5;
  return param_1;
}



