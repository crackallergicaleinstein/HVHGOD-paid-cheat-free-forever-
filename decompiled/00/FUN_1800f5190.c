// FUN_1800f5190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f5190 */

longlong * FUN_1800f5190(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  
  uVar2 = param_1[3];
  if (uVar2 < param_3) {
    uVar7 = 0x7ffffffffffffffe;
    if (0x7ffffffffffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    uVar5 = param_3 | 7;
    if ((uVar5 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
      uVar1 = uVar2 + (uVar2 >> 1);
      uVar7 = uVar5;
      if (uVar5 < uVar1) {
        uVar7 = uVar1;
      }
      uVar5 = uVar7 + 1;
      if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bc80();
      }
    }
    else {
      uVar5 = 0x7fffffffffffffff;
    }
    lVar4 = FUN_18015bca0(uVar5 * 2);
    param_1[3] = uVar7;
    param_1[2] = param_3;
    FUN_18063aed0(lVar4,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + lVar4) = 0;
    if (7 < uVar2) {
      lVar3 = *param_1;
      lVar6 = lVar3;
      if ((0xfff < uVar2 * 2 + 2) &&
         (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar6);
    }
    *param_1 = lVar4;
  }
  else {
    plVar8 = param_1;
    if (7 < uVar2) {
      plVar8 = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    FUN_18063aed0(plVar8,param_2,param_3 * 2);
    *(undefined2 *)(param_3 * 2 + (longlong)plVar8) = 0;
  }
  return param_1;
}



