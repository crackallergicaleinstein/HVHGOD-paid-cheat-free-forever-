// FUN_1802c1730 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c1730 */

void FUN_1802c1730(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined8 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  if ((longlong)param_3 < 0x21) {
    FUN_1802c1520();
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 0x28;
  if (param_5 < lVar3) {
    FUN_1802c1730(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_1802c1730(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    FUN_1802c2320();
    FUN_1802c2320(lVar1,param_2,uVar2,param_4,param_6);
  }
  FUN_1802c24f0(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



