// FUN_1801dae40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dae40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801dae40(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined1 auStack_a8 [32];
  longlong local_88 [2];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong local_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong *local_38;
  undefined1 local_30 [16];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_30 = (undefined1  [16])0x0;
  local_20 = 0;
  FUN_1801db620(local_30,param_1 + 4,param_2);
  if (local_30[0] == '\r') {
    lVar1 = *param_1;
    *param_1 = param_3;
    param_1[1] = param_1[1] + (lVar1 - param_3);
  }
  local_58 = param_1[4];
  local_50 = param_1[5];
  lStack_48 = param_1[6];
  local_40 = param_1[7];
  local_78 = local_30._0_8_;
  uStack_70 = local_30._8_8_;
  local_68 = local_20;
  local_38 = param_1;
  FUN_1801daf20(&local_78,local_88,&local_58);
  param_1[4] = local_88[0];
}



