// FUN_180422f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180422f50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180422f50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  float local_88;
  undefined4 uStack_84;
  undefined1 local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  uVar2 = FUN_180422970(param_2,local_78);
  uStack_84 = FUN_180422e60(uVar2);
  dVar1 = (double)FUN_1804227e0(local_78);
  local_88 = (float)dVar1;
  FUN_180421b00(param_1,CONCAT44(uStack_84,local_88),param_3,param_4);
}



