// FUN_180178db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180178db0 */

longlong FUN_180178db0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar7 = *param_1;
  lVar8 = (param_1[1] - lVar7) / 0x168;
  if (lVar8 == 0xb60b60b60b60b6) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar8 + 1;
  uVar2 = (param_1[2] - lVar7) / 0x168;
  if (0xb60b60b60b60b6 - (uVar2 >> 1) < uVar2) {
    uVar6 = 0xb60b60b60b60b6;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar6 = uVar1;
    if (uVar1 <= uVar2) {
      uVar6 = uVar2;
    }
    if (0xb60b60b60b60b6 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar3 = FUN_18015bca0(uVar6 * 0x168);
  lVar5 = ((param_2 - lVar7) / 0x168) * 0x168 + lVar3;
  lVar7 = lVar5 + 0x168;
  FUN_18017a9c0(lVar5,param_3);
  lVar8 = param_1[1];
  lVar4 = *param_1;
  lVar9 = lVar3;
  if (param_2 == lVar8) {
    if (lVar4 != lVar8) {
      do {
        FUN_18017a9c0(lVar3);
        lVar3 = lVar3 + 0x168;
        lVar4 = lVar4 + 0x168;
      } while (lVar4 != lVar8);
    }
  }
  else {
    for (; lVar4 != param_2; lVar4 = lVar4 + 0x168) {
      FUN_18017a9c0(lVar3);
      lVar3 = lVar3 + 0x168;
    }
    lVar8 = param_1[1];
    if (param_2 != lVar8) {
      do {
        FUN_18017a9c0(lVar7,param_2);
        lVar7 = lVar7 + 0x168;
        param_2 = param_2 + 0x168;
      } while (param_2 != lVar8);
    }
  }
  FUN_18017a840(param_1,lVar9,uVar1,uVar6);
  return lVar5;
}



