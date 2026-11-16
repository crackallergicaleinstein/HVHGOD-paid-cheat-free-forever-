// FUN_1805c7de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c7de0 */

ulonglong FUN_1805c7de0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  ulonglong uVar1;
  undefined8 local_18 [2];
  
  uVar1 = FUN_1805c70b0(param_1,param_2,local_18);
  if ((int)uVar1 == 0) {
    FUN_18057adb0(param_3,local_18[0],param_4);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



