// FUN_1805f1e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f1e60 */

ulonglong FUN_1805f1e60(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       ulonglong param_5)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1805f2af0(param_1,param_4,param_5);
  if (uVar1 < 0xffffffffffffff89) {
    if (uVar1 < param_5) {
      uVar1 = FUN_1805f1ee0(param_2,param_3,uVar1 + param_4,param_5 - uVar1,param_1);
    }
    else {
      uVar1 = 0xffffffffffffffb8;
    }
  }
  return uVar1;
}



