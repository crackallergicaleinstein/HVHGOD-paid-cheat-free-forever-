// FUN_180231710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180231710 */

longlong FUN_180231710(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar5 = *param_1;
  lVar7 = (param_1[1] - lVar5) / 0x128;
  if (lVar7 == 0xdd67c8a60dd67c) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar11 = (param_1[2] - lVar5) / 0x128;
  if (0xdd67c8a60dd67c - (uVar11 >> 1) < uVar11) {
    uVar4 = 0xdd67c8a60dd67c;
  }
  else {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar4 = uVar1;
    if (uVar1 <= uVar11) {
      uVar4 = uVar11;
    }
    if (0xdd67c8a60dd67c < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar3 = FUN_18015bca0(uVar4 * 0x128);
  lVar8 = ((param_2 - lVar5) / 0x128) * 0x128 + lVar3;
  lVar5 = lVar8 + 0x128;
  plVar9 = param_1;
  lVar10 = lVar3;
  uVar11 = uVar4;
  lVar12 = lVar5;
  lVar13 = lVar5;
  FUN_180232880(lVar8,param_3);
  lVar7 = param_1[1];
  lVar6 = *param_1;
  lVar2 = lVar3;
  if (param_2 == lVar7) {
    for (; lVar6 != lVar7; lVar6 = lVar6 + 0x128) {
      FUN_180232910(lVar2,lVar6);
      lVar2 = lVar2 + 0x128;
    }
  }
  else {
    for (; lVar6 != param_2; lVar6 = lVar6 + 0x128) {
      FUN_180232910(lVar2,lVar6);
      lVar2 = lVar2 + 0x128;
    }
    lVar7 = param_1[1];
    if (param_2 != lVar7) {
      do {
        FUN_180232910(lVar5,param_2);
        lVar5 = lVar5 + 0x128;
        param_2 = param_2 + 0x128;
      } while (param_2 != lVar7);
    }
  }
  FUN_180232600(param_1,lVar3,uVar1,uVar4,plVar9,lVar10,uVar11,lVar12,lVar13);
  return lVar8;
}



