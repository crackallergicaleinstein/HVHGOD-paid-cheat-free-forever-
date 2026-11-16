// FUN_1801d9da0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d9da0 */

longlong FUN_1801d9da0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  
  lVar4 = *param_1;
  lVar10 = (param_2 - lVar4) + SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_2 - lVar4),8);
  lVar3 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[1] - lVar4),8) +
          (param_1[1] - lVar4);
  lVar3 = (lVar3 >> 6) - (lVar3 >> 0x3f);
  if (lVar3 == 0x222222222222222) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar3 + 1;
  lVar4 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_1[2] - lVar4),8) +
          (param_1[2] - lVar4);
  uVar5 = (lVar4 >> 6) - (lVar4 >> 0x3f);
  if (0x222222222222222 - (uVar5 >> 1) < uVar5) {
    uVar6 = 0x222222222222222;
  }
  else {
    uVar5 = (uVar5 >> 1) + uVar5;
    uVar6 = uVar1;
    if (uVar1 <= uVar5) {
      uVar6 = uVar5;
    }
    if (0x222222222222222 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar2 = FUN_18015bca0(uVar6 * 0x78);
  lVar7 = ((lVar10 >> 6) - (lVar10 >> 0x3f)) * 0x78 + lVar2;
  lVar10 = lVar7 + 0x78;
  plVar8 = param_1;
  lVar9 = lVar2;
  uVar5 = uVar6;
  lVar11 = lVar10;
  FUN_1801da530(lVar7,param_3);
  lVar4 = param_1[1];
  lVar3 = *param_1;
  if (param_2 == lVar4) {
    if (lVar3 != lVar4) {
      do {
        FUN_1801da890();
        lVar3 = lVar3 + 0x78;
      } while (lVar3 != lVar4);
    }
  }
  else {
    for (; lVar3 != param_2; lVar3 = lVar3 + 0x78) {
      FUN_1801da890();
    }
    lVar4 = param_1[1];
    if (param_2 != lVar4) {
      do {
        FUN_1801da890();
        param_2 = param_2 + 0x78;
      } while (param_2 != lVar4);
    }
  }
  FUN_1801da360(param_1,lVar2,uVar1,uVar6,plVar8,lVar9,uVar5,lVar10,lVar11);
  return lVar7;
}



