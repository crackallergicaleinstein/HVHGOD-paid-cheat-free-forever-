// FUN_180048070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180048070 */

ulonglong *
FUN_180048070(ulonglong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
             longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = param_1[2];
  uVar3 = 0x7fffffffffffffff;
  if ((uVar4 ^ 0x7fffffffffffffff) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_18015bb70();
  }
  param_2 = param_2 + uVar4;
  uVar1 = param_1[3];
  if ((-1 < (longlong)param_2) && (uVar1 <= (uVar1 >> 1 ^ 0x7fffffffffffffff))) {
    uVar3 = (uVar1 >> 1) + uVar1;
    if (uVar3 < (param_2 | 0xf)) {
      uVar3 = param_2 | 0xf;
    }
    if (uVar3 == 0xffffffffffffffff) {
      uVar5 = 0;
      uVar3 = 0xffffffffffffffff;
      goto LAB_1800480d9;
    }
    if (uVar3 + 1 < 0x1000) {
      uVar5 = FUN_180454770();
      goto LAB_1800480d9;
    }
    if (0xffffffffffffffd8 < uVar3 + 1) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar2 = FUN_180454770(uVar3 + 0x28);
  uVar5 = lVar2 + 0x27U & 0xffffffffffffffe0;
  *(longlong *)(uVar5 - 8) = lVar2;
LAB_1800480d9:
  param_1[2] = param_2;
  param_1[3] = uVar3;
  if (uVar1 < 0x10) {
    FUN_18063aed0(uVar5,param_1,uVar4);
    FUN_18063aed0(uVar4 + uVar5,param_4,param_5);
    *(undefined1 *)(param_5 + uVar4 + uVar5) = 0;
  }
  else {
    uVar3 = *param_1;
    FUN_18063aed0(uVar5,uVar3,uVar4);
    FUN_18063aed0(uVar4 + uVar5,param_4);
    *(undefined1 *)(param_5 + uVar4 + uVar5) = 0;
    uVar4 = uVar1 + 1;
    uVar6 = uVar3;
    if (0xfff < uVar4) {
      uVar6 = *(ulonglong *)(uVar3 - 8);
      if (0x1f < (uVar3 - 8) - uVar6) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar4 = uVar1 + 0x28;
    }
    FUN_1804547d0(uVar6,uVar4);
  }
  *param_1 = uVar5;
  return param_1;
}



