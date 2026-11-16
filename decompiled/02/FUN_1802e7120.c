// FUN_1802e7120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e7120 */

longlong * FUN_1802e7120(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_1 != param_2) {
    lVar5 = *param_2;
    lVar2 = (param_2[1] - lVar5) +
            SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_2[1] - lVar5),8);
    uVar4 = (lVar2 >> 7) - (lVar2 >> 0x3f);
    lVar2 = *param_1;
    lVar1 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[2] - lVar2),8) +
            (param_1[2] - lVar2);
    if ((ulonglong)((lVar1 >> 7) - (lVar1 >> 0x3f)) < uVar4) {
      FUN_1802eb7f0(param_1,uVar4);
      lVar1 = FUN_1802ea210(lVar5,uVar4,*param_1,param_1);
    }
    else {
      lVar6 = param_1[1];
      lVar1 = (lVar6 - lVar2) + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar6 - lVar2),8);
      uVar3 = (lVar1 >> 7) - (lVar1 >> 0x3f);
      if (uVar3 < uVar4) {
        if (lVar2 != lVar6) {
          do {
            FUN_1802e9920(lVar2,lVar5);
            lVar2 = lVar2 + 0xb8;
            lVar5 = lVar5 + 0xb8;
            lVar6 = param_1[1];
          } while (lVar2 != lVar6);
        }
        lVar1 = FUN_1802ea210(lVar5,uVar4 - uVar3,lVar6,param_1);
      }
      else {
        lVar1 = uVar4 * 0xb8 + lVar2;
        for (; uVar4 != 0; uVar4 = uVar4 - 1) {
          FUN_1802e9920(lVar2,lVar5);
          lVar2 = lVar2 + 0xb8;
          lVar5 = lVar5 + 0xb8;
        }
        lVar2 = param_1[1];
        for (lVar5 = lVar1; lVar5 != lVar2; lVar5 = lVar5 + 0xb8) {
          FUN_1801b36e0(lVar5 + 0x10);
        }
      }
    }
    param_1[1] = lVar1;
  }
  return param_1;
}



