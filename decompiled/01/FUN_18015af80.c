// FUN_18015af80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015af80 */

void FUN_18015af80(longlong *param_1,undefined1 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  if (uVar2 < uVar3) {
    param_1[2] = uVar2 + 1;
    if (0xf < uVar3) {
      param_1 = (longlong *)*param_1;
    }
    *(undefined1 *)(uVar2 + (longlong)param_1) = param_2;
    *(undefined1 *)(uVar2 + 1 + (longlong)param_1) = 0;
    return;
  }
  if (uVar2 == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  uVar6 = uVar2 + 1 | 0xf;
  uVar7 = 0x7fffffffffffffff;
  if ((uVar6 < 0x8000000000000000) && (uVar3 <= 0x7fffffffffffffff - (uVar3 >> 1))) {
    uVar1 = uVar3 + (uVar3 >> 1);
    uVar7 = uVar6;
    if (uVar6 < uVar1) {
      uVar7 = uVar1;
    }
  }
  lVar5 = FUN_18015bca0(uVar7 + 1);
  param_1[2] = uVar2 + 1;
  param_1[3] = uVar7;
  if (uVar3 < 0x10) {
    FUN_18063aed0(lVar5,param_1);
    *(undefined1 *)(uVar2 + lVar5) = param_2;
    *(undefined1 *)(uVar2 + 1 + lVar5) = 0;
  }
  else {
    lVar4 = *param_1;
    FUN_18063aed0(lVar5,lVar4);
    *(undefined1 *)(uVar2 + lVar5) = param_2;
    *(undefined1 *)(uVar2 + 1 + lVar5) = 0;
    lVar8 = lVar4;
    if ((0xfff < uVar3 + 1) && (lVar8 = *(longlong *)(lVar4 + -8), 0x1f < (lVar4 - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar8);
  }
  *param_1 = lVar5;
  return;
}



