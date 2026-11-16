// FUN_1805eea80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805eea80 */

ulonglong FUN_1805eea80(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                       undefined4 *param_5)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined1 local_28 [8];
  int local_20;
  longlong local_18;
  longlong local_10;
  
  uVar1 = *param_5;
  uVar2 = FUN_1805edea0(local_28,param_3,param_4);
  if (uVar2 < 0xffffffffffffff89) {
    FUN_1805ea8e0(param_1,local_28,param_1 + param_2,param_5 + 1,uVar1);
    if ((local_18 != local_10) || (uVar2 = param_2, local_20 != 0x40)) {
      uVar2 = 0xffffffffffffffec;
    }
  }
  return uVar2;
}



