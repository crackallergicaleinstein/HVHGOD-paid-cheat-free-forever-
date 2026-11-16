// FUN_1802add00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802add00 */

longlong FUN_1802add00(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = *param_1;
  lVar4 = (param_2 - lVar7) / 0x102 + (param_2 - lVar7 >> 0x3f);
  lVar6 = (param_1[1] - lVar7) / 0x408;
  if (lVar6 == 0x3f80fe03f80fe0) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar6 + 1;
  uVar2 = (param_1[2] - lVar7) / 0x408;
  if (0x3f80fe03f80fe0 - (uVar2 >> 1) < uVar2) {
    uVar5 = 0x3f80fe03f80fe0;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar1;
    if (uVar1 <= uVar2) {
      uVar5 = uVar2;
    }
    if (0x3f80fe03f80fe0 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar3 = FUN_18015bca0(uVar5 * 0x408);
  lVar8 = ((lVar4 >> 2) - (lVar4 >> 0x3f)) * 0x408 + lVar3;
  FUN_1802a6a40(lVar8,param_3);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  lVar4 = lVar3;
  if (param_2 == lVar7) {
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x408) {
      FUN_1802a6a40(lVar4,lVar6);
      lVar4 = lVar4 + 0x408;
    }
  }
  else {
    for (; lVar6 != param_2; lVar6 = lVar6 + 0x408) {
      FUN_1802a6a40(lVar4,lVar6);
      lVar4 = lVar4 + 0x408;
    }
    lVar7 = param_1[1];
    lVar6 = lVar8;
    if (param_2 != lVar7) {
      do {
        FUN_1802a6a40(lVar6 + 0x408,param_2);
        param_2 = param_2 + 0x408;
        lVar6 = lVar6 + 0x408;
      } while (param_2 != lVar7);
    }
  }
  FUN_1802ae050(param_1,lVar3,uVar1,uVar5);
  return lVar8;
}



