// FUN_180049120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180049120 */

ulonglong *
FUN_180049120(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if ((longlong)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  uVar1 = param_1[3];
  uVar5 = 0x7fffffffffffffff;
  if (uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff)) {
    uVar5 = (uVar1 >> 1) + uVar1;
    if (uVar5 < (param_2 | 0xf)) {
      uVar5 = param_2 | 0xf;
    }
    if (uVar5 < 0xfff) {
      uVar6 = FUN_180454770(uVar5 + 1);
      goto LAB_1800491aa;
    }
    if (0xffffffffffffffd7 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar3 = FUN_180454770(uVar5 + 0x28);
  uVar6 = lVar3 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar6 - 8) = lVar3;
LAB_1800491aa:
  param_1[2] = param_2;
  param_1[3] = uVar5;
  FUN_18063aed0(uVar6,param_4);
  *(undefined1 *)(uVar6 + param_2) = 0;
  if (0xf < uVar1) {
    uVar2 = *param_1;
    uVar5 = uVar1 + 1;
    uVar4 = uVar2;
    if (0xfff < uVar5) {
      uVar4 = *(ulonglong *)(uVar2 - 8);
      if (0x1f < (uVar2 - 8) - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar1 + 0x28;
    }
    FUN_1804547d0(uVar4,uVar5);
  }
  *param_1 = uVar6;
  return param_1;
}



