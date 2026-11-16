// FUN_18013f550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18013f550 */

void FUN_18013f550(undefined8 *param_1,byte param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (param_2 == 0) {
    plVar3 = (longlong *)*param_1;
    param_1 = (undefined8 *)&DAT_00000030;
    UNRECOVERED_JUMPTABLE = *(code **)*plVar3;
  }
  else {
    uVar6 = (ulonglong)param_2;
    uVar5 = 1;
    if (9 < uVar6) {
      if (uVar6 < 100) {
        uVar5 = 2;
      }
      else if (uVar6 < 1000) {
        uVar5 = 3;
      }
      else if (uVar6 < 10000) {
        uVar5 = 4;
      }
      else {
        uVar5 = 5;
      }
    }
    param_3 = (ulonglong)uVar5;
    puVar2 = (undefined1 *)((longlong)param_1 + param_3 + 0x10);
    while (99 < uVar6) {
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar6;
      lVar4 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar1,8);
      uVar7 = (uVar6 - lVar4 >> 1) + lVar4 >> 6;
      lVar4 = (uVar6 + uVar7 * -100 & 0xffffffff) * 2;
      puVar2[-1] = (&DAT_1806feae1)[lVar4];
      puVar2 = puVar2 + -2;
      *puVar2 = (&DAT_1806feae0)[lVar4];
      uVar6 = uVar7;
    }
    if (uVar6 < 10) {
      puVar2[-1] = (char)uVar6 + '0';
    }
    else {
      lVar4 = (uVar6 & 0xffffffff) * 2;
      puVar2[-1] = (&DAT_1806feae1)[lVar4];
      puVar2[-2] = (&DAT_1806feae0)[lVar4];
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



