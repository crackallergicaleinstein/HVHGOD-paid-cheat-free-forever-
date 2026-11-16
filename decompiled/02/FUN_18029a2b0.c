// FUN_18029a2b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029a2b0 */

longlong FUN_18029a2b0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar5 = *param_1;
  lVar8 = (param_1[1] - lVar5) / 0x1088;
  if (lVar8 == 0xf7c5ed9c4f5d6) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar11 = (param_1[2] - lVar5) / 0x1088;
  if (0xf7c5ed9c4f5d6 - (uVar11 >> 1) < uVar11) {
    uVar7 = 0xf7c5ed9c4f5d6;
  }
  else {
    uVar11 = (uVar11 >> 1) + uVar11;
    uVar7 = lVar8 + 1U;
    if (lVar8 + 1U <= uVar11) {
      uVar7 = uVar11;
    }
    if (0xf7c5ed9c4f5d6 < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar3 = FUN_18015bca0(uVar7 * 0x1088);
  lVar6 = ((param_2 - lVar5) / 0x1088) * 0x1088 + lVar3;
  lVar5 = lVar6 + 0x1088;
  plVar9 = param_1;
  lVar10 = lVar3;
  uVar11 = uVar7;
  lVar12 = lVar5;
  lVar13 = lVar5;
  FUN_18029a820();
  lVar1 = param_1[1];
  lVar4 = *param_1;
  lVar2 = lVar3;
  if (param_2 == lVar1) {
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x1088) {
      FUN_18029ab40(lVar2,lVar4);
      lVar2 = lVar2 + 0x1088;
    }
  }
  else {
    for (; lVar4 != param_2; lVar4 = lVar4 + 0x1088) {
      FUN_18029ab40(lVar2,lVar4);
      lVar2 = lVar2 + 0x1088;
    }
    lVar1 = param_1[1];
    for (; param_2 != lVar1; param_2 = param_2 + 0x1088) {
      FUN_18029ab40(lVar5,param_2);
      lVar5 = lVar5 + 0x1088;
    }
  }
  FUN_18029a570(param_1,lVar3,lVar8 + 1,uVar7,lVar8,plVar9,lVar10,uVar11,lVar12,lVar13);
  return lVar6;
}



