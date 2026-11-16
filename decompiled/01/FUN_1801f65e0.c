// FUN_1801f65e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f65e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801f65e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_118 [32];
  undefined1 local_f8 [32];
  undefined1 local_d8 [32];
  undefined1 local_b8 [32];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  FUN_1801b90e0(local_f8,param_1,param_1);
  FUN_180195b10(param_1,param_2);
  FUN_180195b10(param_2,local_f8);
  FUN_18015b930(local_58);
  FUN_18015b930(local_78);
  FUN_18015c010(local_98);
  FUN_18015c010(local_b8);
  FUN_18015c010(local_d8);
  FUN_18015c010(local_f8);
}



