// FUN_180282f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180282f60 */

longlong FUN_180282f60(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar4 = param_2 - DAT_180b92f60;
  lVar6 = (DAT_180b92f68 - DAT_180b92f60) / 0x50;
  if (lVar6 == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar6 + 1;
  uVar2 = (DAT_180b92f70 - DAT_180b92f60) / 0x50;
  if (0x333333333333333 - (uVar2 >> 1) < uVar2) {
    uVar5 = 0x333333333333333;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar1;
    if (uVar1 <= uVar2) {
      uVar5 = uVar2;
    }
    if (0x333333333333333 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar3 = FUN_18015bca0(uVar5 * 0x50);
  lVar7 = (lVar4 / 0x50) * 0x50 + lVar3;
  lVar6 = lVar7 + 0x50;
  FUN_1802831c0(lVar7,param_3);
  lVar4 = lVar3;
  lVar8 = DAT_180b92f60;
  if (param_2 == DAT_180b92f68) {
    lVar6 = lVar3;
    lVar4 = DAT_180b92f60;
    lVar8 = DAT_180b92f68;
    if (DAT_180b92f60 != DAT_180b92f68) {
      do {
        FUN_1802831c0(lVar6,lVar4);
        lVar6 = lVar6 + 0x50;
        lVar4 = lVar4 + 0x50;
      } while (lVar4 != lVar8);
    }
  }
  else {
    for (; lVar8 != param_2; lVar8 = lVar8 + 0x50) {
      FUN_1802831c0(lVar4,lVar8);
      lVar4 = lVar4 + 0x50;
    }
    FUN_180282f00(lVar4,lVar4);
    lVar4 = DAT_180b92f68;
    if (param_2 != DAT_180b92f68) {
      do {
        FUN_1802831c0(lVar6,param_2);
        lVar6 = lVar6 + 0x50;
        param_2 = param_2 + 0x50;
      } while (param_2 != lVar4);
    }
  }
  FUN_180282f00(lVar6,lVar6);
  if (DAT_180b92f60 != 0) {
    FUN_180282f00(DAT_180b92f60,DAT_180b92f68);
    lVar6 = DAT_180b92f60;
    if ((0xfff < (ulonglong)(((DAT_180b92f70 - DAT_180b92f60) / 0x50) * 0x50)) &&
       (lVar6 = *(longlong *)(DAT_180b92f60 + -8), 0x1f < (DAT_180b92f60 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar6);
  }
  DAT_180b92f60 = lVar3;
  DAT_180b92f68 = uVar1 * 0x50 + lVar3;
  DAT_180b92f70 = uVar5 * 0x50 + lVar3;
  return lVar7;
}



