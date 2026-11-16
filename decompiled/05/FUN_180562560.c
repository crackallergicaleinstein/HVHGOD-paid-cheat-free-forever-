// FUN_180562560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180562560 */

void FUN_180562560(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((longlong)param_3 < 0x21) {
    FUN_1805623a0();
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 8;
  if (param_5 < lVar3) {
    FUN_180562560(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_180562560(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    FUN_18056df50();
    FUN_18056df50(lVar1,param_2,uVar2,param_4,param_6);
  }
  FUN_18056e1d0(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



