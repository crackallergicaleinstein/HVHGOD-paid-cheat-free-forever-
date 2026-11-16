// FUN_180164710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180164710 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180164710(undefined8 *param_1,undefined4 param_2)

{
  undefined1 auStack_48 [32];
  undefined **local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  local_20 = 1;
  *param_1 = std::exception::vftable;
  local_28 = &PTR_180700558;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  FUN_1806066d8(&local_28);
  *param_1 = std::future_error::vftable;
  param_1[4] = &PTR_vftable_1808d7dd8;
  *(undefined4 *)(param_1 + 3) = param_2;
}



