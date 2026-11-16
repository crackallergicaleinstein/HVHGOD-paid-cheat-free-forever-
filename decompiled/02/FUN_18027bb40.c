// FUN_18027bb40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18027bb40 */

longlong FUN_18027bb40(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar3 = *param_1;
  lVar4 = (param_1[1] - lVar3) / 0x23c0;
  if (lVar4 == 0x7292cc157b864) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar4 + 1;
  uVar2 = (param_1[2] - lVar3) / 0x23c0;
  if (0x7292cc157b864 - (uVar2 >> 1) < uVar2) {
    uVar5 = 0x7292cc157b864;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar1;
    if (uVar1 <= uVar2) {
      uVar5 = uVar2;
    }
    if (0x7292cc157b864 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar4 = FUN_18015bca0(uVar5 * 0x23c0);
  lVar7 = ((param_2 - lVar3) / 0x23c0) * 0x23c0 + lVar4;
  FUN_18063aed0(lVar7,param_3,0x23c0);
  lVar3 = *param_1;
  if (param_2 == param_1[1]) {
    lVar8 = param_1[1] - lVar3;
    lVar6 = lVar4;
    param_2 = lVar3;
  }
  else {
    FUN_18063aed0(lVar4,lVar3,param_2 - lVar3);
    lVar8 = param_1[1] - param_2;
    lVar6 = lVar7 + 0x23c0;
  }
  FUN_18063aed0(lVar6,param_2,lVar8);
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar6 = lVar3;
    if ((0xfff < (ulonglong)(((param_1[2] - lVar3) / 0x23c0) * 0x23c0)) &&
       (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar6);
  }
  *param_1 = lVar4;
  param_1[1] = uVar1 * 0x23c0 + lVar4;
  param_1[2] = uVar5 * 0x23c0 + lVar4;
  return lVar7;
}



