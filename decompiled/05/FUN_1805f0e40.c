// FUN_1805f0e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f0e40 */

void FUN_1805f0e40(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x5430) = 5;
  *(undefined8 *)(param_1 + 0x5410) = 0;
  *(undefined8 *)(param_1 + 0x5418) = 0;
  *(undefined8 *)(param_1 + 0x5420) = 0;
  *(undefined8 *)(param_1 + 0x5428) = 0;
  *(undefined8 *)(param_1 + 0x5454) = 0;
  *(undefined4 *)(param_1 + 0x140c) = 0xc;
  if ((param_6 != 0) && (param_7 != 0)) {
    FUN_1805f0bc0();
  }
  lVar1 = *(longlong *)(param_1 + 0x5410);
  if (param_2 != lVar1) {
    *(longlong *)(param_1 + 0x5428) = lVar1;
    *(longlong *)(param_1 + 0x5410) = param_2;
    *(longlong *)(param_1 + 0x5420) = (param_2 - lVar1) + *(longlong *)(param_1 + 0x5418);
    *(longlong *)(param_1 + 0x5418) = param_2;
  }
  FUN_1805f0560(param_1,param_2,param_3,param_4);
  return;
}



