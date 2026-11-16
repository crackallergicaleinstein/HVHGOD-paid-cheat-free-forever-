// FUN_18015c090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015c090 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015c090(undefined8 *param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  local_20 = 1;
  *param_1 = std::exception::vftable;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  local_28 = param_2;
  FUN_1806066d8(&local_28);
  *param_1 = std::runtime_error::vftable;
}



