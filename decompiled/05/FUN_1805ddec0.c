// FUN_1805ddec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ddec0 */

ulonglong FUN_1805ddec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       ulonglong param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8)

{
  ulonglong uVar1;
  
  uVar1 = FUN_1805e3160(param_1,param_4,param_5,param_6,param_7,param_8);
  if (uVar1 < 0xffffffffffffff89) {
    if (uVar1 < param_5) {
      uVar1 = FUN_1805ddf60(param_2,param_3,uVar1 + param_4,param_5 - uVar1,param_1,param_8);
    }
    else {
      uVar1 = 0xffffffffffffffb8;
    }
  }
  return uVar1;
}



