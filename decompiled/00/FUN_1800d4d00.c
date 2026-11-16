// FUN_1800d4d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d4d00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800d4d00(undefined8 param_1)

{
  undefined1 auStack_78 [32];
  char *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_28;
  undefined1 local_27 [7];
  undefined8 local_20;
  undefined1 *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_78;
  local_18 = local_27;
  local_48 = &local_20;
  local_40 = local_27;
  local_28 = 0;
  local_30 = &local_28;
  local_58 = "ragebot";
  local_50 = 7;
  local_38 = param_1;
  local_20 = param_1;
  FUN_1800d4da0(&local_48,&local_58);
  local_50 = 8;
  local_58 = "legitbot";
  FUN_1800d5c70(&local_48,&local_58);
}



