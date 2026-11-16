// FUN_1800efc30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800efc30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800efc30(undefined4 param_1,undefined8 param_2)

{
  undefined1 auStack_838 [32];
  undefined1 local_818 [2048];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_838;
  FUN_18063ab10(local_818,0,0x800);
  FUN_18015ad60(local_818,0x800,0xffffffffffffffff,param_2);
  FUN_1800a9e50(param_1,local_818);
}



