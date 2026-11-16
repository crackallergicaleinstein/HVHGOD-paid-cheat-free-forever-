// FUN_1804a3210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a3210 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a3210(undefined8 param_1,float *param_2,float param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  float fVar2;
  undefined1 auStack_68 [32];
  float local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_28 = param_3 + *param_2;
  local_24 = param_3 + param_2[1];
  local_38 = *param_4;
  local_30 = param_4[2];
  local_34 = param_4[1];
  fVar2 = DAT_180b0a41c * 2.2;
  local_2c = 0x3f800000;
  uVar1 = FUN_1804b1120(&local_38);
  local_40 = 0;
  local_48 = fVar2;
  FUN_1804df870(param_1,param_2,&local_28,uVar1);
}



