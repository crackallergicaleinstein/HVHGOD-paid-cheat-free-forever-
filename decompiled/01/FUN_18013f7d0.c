// FUN_18013f7d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18013f7d0 */

void FUN_18013f7d0(undefined8 *param_1,ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  
  if (param_2 == 0) {
    plVar3 = (longlong *)*param_1;
    param_1 = (undefined8 *)&DAT_00000030;
    UNRECOVERED_JUMPTABLE = *(code **)*plVar3;
  }
  else {
    uVar6 = 1;
    uVar4 = param_2;
    if ((longlong)param_2 < 0) {
      *(undefined1 *)(param_1 + 2) = 0x2d;
      param_2 = -param_2;
      for (uVar4 = param_2; 9 < uVar4; uVar4 = uVar4 / 10000) {
        if (uVar4 < 100) {
          uVar6 = uVar6 + 1;
          break;
        }
        if (uVar4 < 1000) {
          uVar6 = uVar6 + 2;
          break;
        }
        if (uVar4 < 10000) {
          uVar6 = uVar6 + 3;
          break;
        }
        uVar6 = uVar6 + 4;
      }
LAB_18013f868:
      uVar6 = uVar6 + 1;
    }
    else {
      for (; 9 < uVar4; uVar4 = uVar4 / 10000) {
        if (uVar4 < 100) goto LAB_18013f868;
        if (uVar4 < 1000) {
          uVar6 = uVar6 + 2;
          break;
        }
        if (uVar4 < 10000) {
          uVar6 = uVar6 + 3;
          break;
        }
        uVar6 = uVar6 + 4;
      }
    }
    param_3 = (ulonglong)uVar6;
    puVar2 = (undefined1 *)((longlong)param_1 + param_3 + 0x10);
    while (99 < param_2) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = param_2;
      lVar5 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
      uVar4 = (param_2 - lVar5 >> 1) + lVar5 >> 6;
      lVar5 = (param_2 + uVar4 * -100 & 0xffffffff) * 2;
      puVar2[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   [lVar5];
      puVar2 = puVar2 + -2;
      *puVar2 = (&DAT_1806fe940)[lVar5];
      param_2 = uVar4;
    }
    if (param_2 < 10) {
      puVar2[-1] = (char)param_2 + '0';
    }
    else {
      lVar5 = (param_2 & 0xffffffff) * 2;
      puVar2[-1] = "0010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   [lVar5];
      puVar2[-2] = (&DAT_1806fe940)[lVar5];
    }
    plVar3 = (longlong *)*param_1;
    param_1 = param_1 + 2;
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(plVar3,param_1,param_3);
  return;
}



