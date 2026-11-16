// FUN_180231550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180231550 */

longlong FUN_180231550(longlong *param_1,longlong param_2,undefined8 param_3)

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
  lVar6 = (param_1[1] - lVar7) / 0x128;
  if (lVar6 == 0xdd67c8a60dd67c) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar6 + 1;
  uVar2 = (param_1[2] - lVar7) / 0x128;
  if (0xdd67c8a60dd67c - (uVar2 >> 1) < uVar2) {
    uVar5 = 0xdd67c8a60dd67c;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar1;
    if (uVar1 <= uVar2) {
      uVar5 = uVar2;
    }
    if (0xdd67c8a60dd67c < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar4 = FUN_18015bca0(uVar5 * 0x128);
  lVar8 = ((param_2 - lVar7) / 0x128) * 0x128 + lVar4;
  FUN_180232910(lVar8,param_3);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  lVar3 = lVar4;
  if (param_2 == lVar7) {
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x128) {
      FUN_180232910(lVar3,lVar6);
      lVar3 = lVar3 + 0x128;
    }
  }
  else {
    for (; lVar6 != param_2; lVar6 = lVar6 + 0x128) {
      FUN_180232910(lVar3,lVar6);
      lVar3 = lVar3 + 0x128;
    }
    lVar7 = param_1[1];
    lVar6 = lVar8;
    if (param_2 != lVar7) {
      do {
        FUN_180232910(lVar6 + 0x128,param_2);
        param_2 = param_2 + 0x128;
        lVar6 = lVar6 + 0x128;
      } while (param_2 != lVar7);
    }
  }
  FUN_180232600(param_1,lVar4,uVar1,uVar5);
  return lVar8;
}



