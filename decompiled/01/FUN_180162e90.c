// FUN_180162e90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180162e90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180162e90(undefined8 *param_1)

{
  undefined1 auStack_48 [32];
  char *local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  local_20 = 1;
  *param_1 = std::exception::vftable;
  local_28 = "This function cannot be called on a default constructed task";
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  FUN_1806066d8(&local_28);
  *param_1 = Concurrency::invalid_operation::vftable;
}



