// FUN_1801d4ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d4ce0 */

void FUN_1801d4ce0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6,undefined1 param_7)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffffa8;
  undefined7 uVar4;
  undefined8 in_stack_ffffffffffffffb0;
  undefined7 uVar5;
  
  if ((longlong)param_3 < 0x21) {
    FUN_1801d4b60(param_1,param_2,param_6);
    return;
  }
  uVar3 = param_3 >> 1;
  lVar1 = param_3 - uVar3;
  lVar2 = lVar1 * 0x168 + param_1;
  uVar5 = (undefined7)((ulonglong)in_stack_ffffffffffffffb0 >> 8);
  if (param_5 < lVar1) {
    FUN_1801d4ce0(param_1,lVar2,lVar1,param_4,param_5,CONCAT71(uVar5,param_6),param_7);
    FUN_1801d4ce0(lVar2,param_2,uVar3,param_4,param_5,param_6,param_7);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffffa8 >> 8);
    FUN_1801d51c0();
    FUN_1801d51c0(lVar2,param_2,uVar3,param_4,CONCAT71(uVar4,param_6),CONCAT71(uVar5,param_7));
  }
  FUN_1801d5320(param_1,lVar2,param_2,lVar1,uVar3,param_4,param_5,param_6,param_7);
  return;
}



