// FUN_1805ed8f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ed8f0 */

void FUN_1805ed8f0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x6830) = 5;
  *(undefined8 *)(param_1 + 0x6810) = 0;
  *(undefined8 *)(param_1 + 0x6818) = 0;
  *(undefined8 *)(param_1 + 0x6820) = 0;
  *(undefined8 *)(param_1 + 0x6828) = 0;
  *(undefined8 *)(param_1 + 0x686c) = 0;
  *(undefined4 *)(param_1 + 0x280c) = 0xc;
  if ((param_6 != 0) && (param_7 != 0)) {
    FUN_1805ed670();
  }
  lVar1 = *(longlong *)(param_1 + 0x6810);
  if (param_2 != lVar1) {
    *(longlong *)(param_1 + 0x6828) = lVar1;
    *(longlong *)(param_1 + 0x6810) = param_2;
    *(longlong *)(param_1 + 0x6820) = (param_2 - lVar1) + *(longlong *)(param_1 + 0x6818);
    *(longlong *)(param_1 + 0x6818) = param_2;
  }
  FUN_1805ed490(param_1,param_2,param_3,param_4);
  return;
}



