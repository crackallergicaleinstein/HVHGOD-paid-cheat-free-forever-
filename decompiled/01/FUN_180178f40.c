// FUN_180178f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180178f40 */

longlong FUN_180178f40(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar3 = *param_1;
  lVar7 = (param_1[1] - lVar3) / 0x168;
  if (lVar7 == 0xb60b60b60b60b6) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar7 + 1;
  uVar11 = (param_1[2] - lVar3) / 0x168;
  if (0xb60b60b60b60b6 - (uVar11 >> 1) < uVar11) {
    uVar6 = 0xb60b60b60b60b6;
  }
  else {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar6 = uVar1;
    if (uVar1 <= uVar11) {
      uVar6 = uVar11;
    }
    if (0xb60b60b60b60b6 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar2 = FUN_18015bca0(uVar6 * 0x168);
  lVar8 = ((param_2 - lVar3) / 0x168) * 0x168 + lVar2;
  lVar3 = lVar8 + 0x168;
  plVar9 = param_1;
  lVar10 = lVar2;
  uVar11 = uVar6;
  lVar12 = lVar3;
  lVar13 = lVar3;
  FUN_18016c8d0(lVar8,param_3);
  lVar7 = param_1[1];
  lVar5 = *param_1;
  lVar4 = lVar2;
  if (param_2 == lVar7) {
    lVar3 = lVar2;
    if (lVar5 != lVar7) {
      do {
        FUN_18017a9c0(lVar3);
        lVar3 = lVar3 + 0x168;
        lVar5 = lVar5 + 0x168;
      } while (lVar5 != lVar7);
    }
  }
  else {
    for (; lVar5 != param_2; lVar5 = lVar5 + 0x168) {
      FUN_18017a9c0(lVar4);
      lVar4 = lVar4 + 0x168;
    }
    lVar7 = param_1[1];
    if (param_2 != lVar7) {
      do {
        FUN_18017a9c0(lVar3,param_2);
        lVar3 = lVar3 + 0x168;
        param_2 = param_2 + 0x168;
      } while (param_2 != lVar7);
    }
  }
  FUN_18017a840(param_1,lVar2,uVar1,uVar6,plVar9,lVar10,uVar11,lVar12,lVar13);
  return lVar8;
}



