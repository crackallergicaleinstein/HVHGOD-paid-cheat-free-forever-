// FUN_1804927b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804927b0 */

void FUN_1804927b0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((longlong)param_3 < 0x21) {
    FUN_180492580(param_1,param_2,param_6);
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 4;
  if (param_5 < lVar3) {
    FUN_1804927b0(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_1804927b0(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    FUN_180492cb0();
    FUN_180492cb0(lVar1,param_2,uVar2,param_4,param_6);
  }
  FUN_180492e20(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



