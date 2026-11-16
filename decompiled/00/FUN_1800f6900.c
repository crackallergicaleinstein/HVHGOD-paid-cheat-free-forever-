// FUN_1800f6900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f6900 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f6900(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_878 [32];
  undefined8 local_858;
  undefined8 local_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_878;
  FUN_18063ab10(local_838,0,0x800);
  local_840 = param_6;
  local_848 = param_5;
  local_858 = param_3;
  local_850 = param_4;
  FUN_18015ad60(local_838,0x800,0xffffffffffffffff,"[%s] %s%s%s");
  FUN_1800a9e50(param_1,local_838);
}



