// FUN_180334b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180334b40 */

void FUN_180334b40(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffff98;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_180334850();
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 0x28;
  if (param_5 < lVar3) {
    FUN_180334b40(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_180334b40(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffff98 >> 8);
    FUN_180337f80();
    FUN_180337f80(lVar1,param_2,uVar2,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_180338220(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



