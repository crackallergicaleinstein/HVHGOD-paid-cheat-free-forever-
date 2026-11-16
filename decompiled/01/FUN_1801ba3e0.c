// FUN_1801ba3e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ba3e0 */

longlong * FUN_1801ba3e0(longlong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar7 = param_1[2];
  if (0x7fffffffffffffffU - lVar7 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  uVar2 = param_1[3];
  uVar5 = param_2 + lVar7 | 0xf;
  uVar6 = 0x7fffffffffffffff;
  if ((uVar5 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar5;
    if (uVar5 < uVar1) {
      uVar6 = uVar1;
    }
  }
  lVar4 = FUN_18015bca0(uVar6 + 1);
  param_1[2] = param_2 + lVar7;
  param_1[3] = uVar6;
  if (uVar2 < 0x10) {
    FUN_18063aed0(lVar4,param_1,lVar7);
    FUN_18063ab10(lVar7 + lVar4,0,param_4);
    *(undefined1 *)(lVar7 + param_4 + lVar4) = 0;
  }
  else {
    lVar3 = *param_1;
    FUN_18063aed0(lVar4,lVar3,lVar7);
    FUN_18063ab10(lVar7 + lVar4,0);
    *(undefined1 *)(lVar7 + param_4 + lVar4) = 0;
    lVar7 = lVar3;
    if ((0xfff < uVar2 + 1) && (lVar7 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar7) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar7);
  }
  *param_1 = lVar4;
  return param_1;
}



