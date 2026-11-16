// FUN_18035f3f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035f3f0 */

void FUN_18035f3f0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 in_stack_ffffffffffffff98;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_18035f1e0();
    return;
  }
  uVar2 = param_3 >> 1;
  lVar3 = param_3 - uVar2;
  lVar1 = param_1 + lVar3 * 0xc;
  if (param_5 < lVar3) {
    FUN_18035f3f0(param_1,lVar1,lVar3,param_4,param_5,param_6);
    FUN_18035f3f0(lVar1,param_2,uVar2,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffff98 >> 8);
    FUN_180360640();
    FUN_180360640(lVar1,param_2,uVar2,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_180360810(param_1,lVar1,param_2,lVar3,uVar2,param_4,param_5,param_6);
  return;
}



