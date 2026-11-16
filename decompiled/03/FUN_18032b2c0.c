// FUN_18032b2c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032b2c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18032b2c0(undefined8 *param_1,undefined4 *param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 local_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  undefined4 local_50;
  undefined1 local_48;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_40 = (undefined4 *)*param_1;
  local_20[0] = 0;
  local_28 = 0;
  lVar1 = param_1[5];
  puVar2 = (undefined8 *)param_1[4];
  local_24 = 0;
  puVar3 = (undefined8 *)param_1[1];
  uVar4 = param_1[3];
  uVar5 = *(undefined8 *)param_1[2];
  *local_40 = 0;
  local_30 = param_2[2];
  local_58 = &local_28;
  local_38 = 0;
  local_a8 = *(undefined4 *)(lVar1 + 0x94);
  local_48 = 0;
  local_50 = 0;
  local_70 = *param_2;
  local_60 = 0;
  local_68 = 0;
  local_80 = &local_24;
  local_88 = local_20;
  local_a0 = *(undefined1 *)(param_2 + 1);
  local_90 = 0x4c;
  local_98 = 2;
  local_78 = param_3;
  FUN_18031e430(*puVar3,uVar5,uVar4,*puVar2);
}



