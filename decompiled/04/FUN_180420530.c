// FUN_180420530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180420530 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180420530(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_848 [32];
  undefined4 local_828;
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_848;
  FUN_18063ab10(local_818,0,0x800);
  local_828 = param_3;
  FUN_18015ad60(local_818,0x800,0xffffffffffffffff,param_2);
  FUN_1800a9e50(3,local_818);
}



