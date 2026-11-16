// FUN_1804648c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804648c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804648c0(undefined8 param_1,float *param_2,float param_3,float param_4,undefined4 param_5,
                  undefined4 param_6)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_1c = param_2[1];
  local_28 = *param_2 - param_3;
  local_24 = local_1c - param_4;
  local_20 = *param_2 + param_3;
  local_14 = local_1c + param_4;
  local_38 = 0x7f7fffff;
  local_40 = 0;
  local_48 = param_6;
  local_18 = local_28;
  FUN_1804d9a00(param_6,&local_28,3,param_5);
}



