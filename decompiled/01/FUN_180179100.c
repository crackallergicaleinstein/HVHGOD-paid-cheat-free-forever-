// FUN_180179100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180179100 */

longlong *
FUN_180179100(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4,
             undefined2 param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  
  lVar7 = param_1[2];
  uVar8 = 0x7ffffffffffffffe;
  if (0x7ffffffffffffffeU - lVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  uVar2 = param_1[3];
  uVar6 = param_2 + lVar7 | 7;
  if ((uVar6 < 0x7fffffffffffffff) && (uVar2 <= 0x7ffffffffffffffe - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar8 = uVar6;
    if (uVar6 < uVar1) {
      uVar8 = uVar1;
    }
    uVar6 = uVar8 + 1;
    if (0x7fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  else {
    uVar6 = 0x7fffffffffffffff;
  }
  lVar3 = FUN_18015bca0(uVar6 * 2);
  param_1[3] = uVar8;
  param_1[2] = param_2 + lVar7;
  puVar9 = (undefined2 *)(lVar7 * 2 + lVar3);
  if (uVar2 < 8) {
    FUN_18063aed0(lVar3);
    if (param_4 != 0) {
      for (lVar5 = param_4; lVar5 != 0; lVar5 = lVar5 + -1) {
        *puVar9 = param_5;
        puVar9 = puVar9 + 1;
      }
    }
    *(undefined2 *)(lVar3 + (param_4 + lVar7) * 2) = 0;
  }
  else {
    lVar5 = *param_1;
    FUN_18063aed0(lVar3);
    if (param_4 != 0) {
      for (lVar4 = param_4; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar9 = param_5;
        puVar9 = puVar9 + 1;
      }
    }
    *(undefined2 *)(lVar3 + (param_4 + lVar7) * 2) = 0;
    uVar8 = uVar2 * 2 + 2;
    lVar7 = lVar5;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar5 + -8);
      uVar8 = uVar2 * 2 + 0x29;
      if (0x1f < (lVar5 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    FUN_1804547d0(lVar7,uVar8);
  }
  *param_1 = lVar3;
  return param_1;
}



