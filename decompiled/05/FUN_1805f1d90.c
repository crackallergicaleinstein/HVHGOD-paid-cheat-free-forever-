// FUN_1805f1d90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f1d90 */

ulonglong FUN_1805f1d90(uint *param_1,longlong param_2,ulonglong param_3,longlong param_4,
                       ulonglong param_5)

{
  ulonglong uVar1;
  uint uVar2;
  undefined1 local_28 [8];
  int local_20;
  longlong local_18;
  longlong local_10;
  
  uVar1 = FUN_1805f2af0(param_1,param_4,param_5);
  if (uVar1 < 0xffffffffffffff89) {
    if (uVar1 < param_5) {
      uVar2 = *param_1;
      uVar1 = FUN_1805f1480(local_28,uVar1 + param_4,param_5 - uVar1);
      if (uVar1 < 0xffffffffffffff89) {
        FUN_1805ea660(param_2,local_28,param_2 + param_3,param_1 + 1,uVar2 >> 0x10 & 0xff);
        if ((local_18 != local_10) || (uVar1 = param_3, local_20 != 0x40)) {
          uVar1 = 0xffffffffffffffec;
        }
      }
    }
    else {
      uVar1 = 0xffffffffffffffb8;
    }
  }
  return uVar1;
}



