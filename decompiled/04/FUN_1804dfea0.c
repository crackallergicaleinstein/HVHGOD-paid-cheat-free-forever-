// FUN_1804dfea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dfea0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804dfea0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                  uint param_5)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  if ((param_5 & 0xff000000) != 0) {
    local_28 = *param_2;
    local_24 = param_2[1];
    local_20 = *param_3;
    local_1c = param_3[1];
    local_18 = *param_4;
    local_14 = param_4[1];
    local_38 = 0;
    FUN_1804dafe0(local_18,&local_28,3);
  }
}



