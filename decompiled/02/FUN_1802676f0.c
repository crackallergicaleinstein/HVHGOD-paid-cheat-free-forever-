// FUN_1802676f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802676f0 */

void FUN_1802676f0(longlong param_1,undefined8 param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 in_stack_ffffffffffffff98;
  undefined7 uVar4;
  
  if ((longlong)param_3 < 0x21) {
    FUN_180267610();
    return;
  }
  uVar3 = param_3 >> 1;
  lVar2 = param_3 - uVar3;
  lVar1 = lVar2 * 0x10 + param_1;
  if (param_5 < lVar2) {
    FUN_1802676f0(param_1,lVar1,lVar2,param_4,param_5,param_6);
    FUN_1802676f0(lVar1,param_2,uVar3,param_4,param_5,param_6);
  }
  else {
    uVar4 = (undefined7)((ulonglong)in_stack_ffffffffffffff98 >> 8);
    FUN_180269420();
    FUN_180269420(lVar1,param_2,uVar3,param_4,CONCAT71(uVar4,param_6));
  }
  FUN_1802695f0(param_1,lVar1,param_2,lVar2,uVar3,param_4,param_5,param_6);
  return;
}



