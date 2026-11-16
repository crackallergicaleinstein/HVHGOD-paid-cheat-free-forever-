// FUN_1800485b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800485b0 */

longlong FUN_1800485b0(ulonglong *param_1,ulonglong param_2,undefined4 *param_3,undefined2 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar1 = *param_1;
  uVar7 = ((longlong)(param_1[1] - uVar1) >> 3) + 1;
  uVar2 = (longlong)(param_1[2] - uVar1) >> 3;
  uVar6 = (uVar2 >> 1) + uVar2;
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  if (0x1fffffffffffffff - (uVar2 >> 1) < uVar2) {
    uVar6 = 0x1fffffffffffffff;
  }
  if (uVar6 >> 0x3d != 0) {
LAB_180048726:
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  if (uVar6 == 0) {
    uVar2 = 0;
  }
  else if (uVar6 < 0x200) {
    uVar2 = FUN_180454770(uVar6 * 8);
  }
  else {
    if (0x1ffffffffffffffb < uVar6) goto LAB_180048726;
    lVar3 = FUN_180454770(uVar6 * 8 + 0x27);
    uVar2 = lVar3 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar3;
  }
  lVar3 = param_2 - uVar1;
  *(undefined4 *)(uVar2 + lVar3) = *param_3;
  *(undefined2 *)(uVar2 + 4 + lVar3) = *param_4;
  if (param_2 == param_1[1]) {
    FUN_18063aed0(uVar2);
    uVar1 = *param_1;
  }
  else {
    FUN_18063aed0(uVar2,*param_1,param_2 - *param_1);
    FUN_18063aed0(uVar2 + lVar3 + 8,param_2);
    uVar1 = *param_1;
  }
  if (uVar1 != 0) {
    uVar5 = param_1[2] - uVar1;
    uVar4 = uVar1;
    if (0xfff < uVar5) {
      uVar4 = *(ulonglong *)(uVar1 - 8);
      if (0x1f < (uVar1 - 8) - uVar4) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      uVar5 = uVar5 + 0x27;
    }
    FUN_1804547d0(uVar4,uVar5);
  }
  *param_1 = uVar2;
  param_1[1] = uVar2 + uVar7 * 8;
  param_1[2] = uVar2 + uVar6 * 8;
  return uVar2 + lVar3;
}



