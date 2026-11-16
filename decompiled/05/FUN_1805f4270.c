// FUN_1805f4270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f4270 */

void FUN_1805f4270(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1805f3a30(param_1,param_6,param_7);
  lVar1 = *(longlong *)(param_1 + 0x5410);
  if (param_2 != lVar1) {
    lVar2 = *(longlong *)(param_1 + 0x5418);
    *(longlong *)(param_1 + 0x5428) = lVar1;
    *(longlong *)(param_1 + 0x5418) = param_2;
    *(longlong *)(param_1 + 0x5420) = (lVar2 - lVar1) + param_2;
    *(longlong *)(param_1 + 0x5410) = param_2;
  }
  FUN_1805f3b70(param_1,param_2,param_3,param_4);
  return;
}



