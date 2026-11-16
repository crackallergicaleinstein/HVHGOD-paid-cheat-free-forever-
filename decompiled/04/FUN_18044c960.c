// FUN_18044c960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044c960 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18044c960(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined4 *local_38;
  undefined8 local_30;
  undefined4 local_28 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  local_38 = local_28;
  local_20 = 0;
  local_30 = 1;
  local_28[0] = param_2;
  FUN_18044c9c0(param_1,&local_38);
}



