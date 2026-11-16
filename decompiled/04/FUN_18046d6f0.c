// FUN_18046d6f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046d6f0 */

void FUN_18046d6f0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((longlong)param_3 < 0x21) {
    FUN_18046d590(param_1,param_2,param_6);
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 4;
  if (param_5 < lVar3) {
    FUN_18046d6f0(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_18046d6f0(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    FUN_18046da10();
    FUN_18046da10(lVar1,param_2,uVar2,param_4,param_6);
  }
  FUN_18046dc50(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



