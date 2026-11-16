// FUN_180211490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180211490 */

longlong FUN_180211490(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  lVar6 = *param_1;
  lVar3 = (param_2 - lVar6) + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_2 - lVar6),8);
  lVar5 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[1] - lVar6),8) +
          (param_1[1] - lVar6);
  lVar5 = (lVar5 >> 7) - (lVar5 >> 0x3f);
  if (lVar5 == 0x1642c8590b21642) {
                    /* WARNING: Subroutine does not return */
    FUN_1801136f0();
  }
  uVar1 = lVar5 + 1;
  lVar6 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[2] - lVar6),8) +
          (param_1[2] - lVar6);
  uVar7 = (lVar6 >> 7) - (lVar6 >> 0x3f);
  if (0x1642c8590b21642 - (uVar7 >> 1) < uVar7) {
    uVar8 = 0x1642c8590b21642;
  }
  else {
    uVar7 = (uVar7 >> 1) + uVar7;
    uVar8 = uVar1;
    if (uVar1 <= uVar7) {
      uVar8 = uVar7;
    }
    if (0x1642c8590b21642 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bc80();
    }
  }
  lVar2 = FUN_18015bca0(uVar8 * 0xb8);
  lVar9 = ((lVar3 >> 7) - (lVar3 >> 0x3f)) * 0xb8 + lVar2;
  lVar3 = lVar9 + 0xb8;
  FUN_1802128d0(lVar9,param_3);
  lVar6 = param_1[1];
  lVar5 = *param_1;
  lVar4 = lVar2;
  if (param_2 == lVar6) {
    lVar3 = lVar2;
    if (lVar5 != lVar6) {
      do {
        FUN_1802128d0();
        lVar3 = lVar3 + 0xb8;
        lVar5 = lVar5 + 0xb8;
      } while (lVar5 != lVar6);
    }
  }
  else {
    for (; lVar5 != param_2; lVar5 = lVar5 + 0xb8) {
      FUN_1802128d0();
      lVar4 = lVar4 + 0xb8;
    }
    FUN_1801b6830(lVar4,lVar4);
    lVar6 = param_1[1];
    if (param_2 != lVar6) {
      do {
        FUN_1802128d0(lVar3,param_2);
        lVar3 = lVar3 + 0xb8;
        param_2 = param_2 + 0xb8;
      } while (param_2 != lVar6);
    }
  }
  FUN_1801b6830(lVar3,lVar3);
  FUN_180212050(param_1,lVar2,uVar1,uVar8);
  return lVar9;
}



