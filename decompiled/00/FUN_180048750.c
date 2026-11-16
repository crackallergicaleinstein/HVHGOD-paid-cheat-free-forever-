// FUN_180048750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180048750 */

longlong FUN_180048750(ulonglong *param_1,ulonglong param_2,undefined4 *param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  uVar1 = *param_1;
  uVar6 = ((longlong)(param_1[1] - uVar1) >> 4) + 1;
  uVar4 = (longlong)(param_1[2] - uVar1) >> 4;
  uVar2 = (uVar4 >> 1) + uVar4;
  if (uVar2 <= uVar6) {
    uVar2 = uVar6;
  }
  if (0xfffffffffffffff - (uVar4 >> 1) < uVar4) {
    uVar2 = 0xfffffffffffffff;
  }
  if (uVar2 >> 0x3c != 0) {
LAB_1800488c8:
                    /* WARNING: Subroutine does not return */
    FUN_18015bc80();
  }
  lVar7 = uVar2 * 0x10;
  if (uVar2 == 0) {
    uVar2 = 0;
  }
  else if (uVar2 < 0x100) {
    uVar2 = FUN_180454770(lVar7);
  }
  else {
    if (0xffffffffffffffd < uVar2) goto LAB_1800488c8;
    lVar3 = FUN_180454770(lVar7 + 0x27);
    uVar2 = lVar3 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar3;
  }
  lVar3 = param_2 - uVar1;
  *(undefined4 *)(uVar2 + lVar3) = *param_3;
  *(undefined8 *)(uVar2 + 8 + lVar3) = *param_4;
  if (param_2 == param_1[1]) {
    FUN_18063aed0(uVar2);
    uVar1 = *param_1;
  }
  else {
    FUN_18063aed0(uVar2,*param_1,param_2 - *param_1);
    FUN_18063aed0(uVar2 + lVar3 + 0x10,param_2);
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
  param_1[1] = uVar6 * 0x10 + uVar2;
  param_1[2] = lVar7 + uVar2;
  return uVar2 + lVar3;
}



