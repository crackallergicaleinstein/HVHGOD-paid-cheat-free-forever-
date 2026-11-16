// FUN_180604ce0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180604ce0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180604ce0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 *local_90;
  longlong local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [64];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  iVar1 = FUN_1801d63c0(local_68,0x40,&DAT_1806abef8,param_6);
  local_88 = (longlong)iVar1;
  local_90 = local_68;
  local_98 = param_5;
  FUN_180603ff8(param_1,param_2,&local_78,param_4);
}



