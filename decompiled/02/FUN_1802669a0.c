// FUN_1802669a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802669a0 */

void FUN_1802669a0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if ((longlong)param_3 < 0x21) {
    FUN_180266600(param_1,param_2,param_6);
    return;
  }
  uVar3 = param_3 >> 1;
  lVar2 = param_3 - uVar3;
  lVar1 = lVar2 * 0x20 + param_1;
  if (param_5 < lVar2) {
    FUN_1802669a0(param_1,lVar1,lVar2,param_4,param_5,param_6);
    FUN_1802669a0(lVar1,param_2,uVar3,param_4,param_5,param_6);
  }
  else {
    FUN_180267fa0();
    FUN_180267fa0(lVar1,param_2,uVar3,param_4,param_6);
  }
  FUN_180268170(param_1,lVar1,param_2,lVar2,uVar3,param_4,param_5,param_6);
  return;
}



