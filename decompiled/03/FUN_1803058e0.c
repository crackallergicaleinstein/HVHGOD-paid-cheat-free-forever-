// FUN_1803058e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803058e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803058e0(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined1 auStack_1a8 [32];
  undefined8 *local_188;
  undefined8 local_180;
  undefined8 local_168;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 local_154;
  undefined1 local_148 [272];
  float local_38;
  float fStack_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  uVar1 = *(undefined8 *)*param_1;
  local_20 = *(float *)((undefined8 *)*param_1 + 1);
  local_28 = (float)uVar1 + *(float *)param_1[1] * 0.015625 * (float)param_2;
  fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
  local_24 = ((float *)param_1[1])[1] * 0.015625 * (float)param_2 + fStack_34;
  _local_38 = CONCAT44(local_24,local_28);
  local_30 = local_20 + 4.0;
  local_20 = local_20 - 12.0;
  local_168 = *(undefined8 *)param_1[2];
  local_160 = *(undefined4 *)((undefined8 *)param_1[2] + 1);
  local_15c = *(undefined8 *)param_1[3];
  local_154 = *(undefined4 *)((undefined8 *)param_1[3] + 1);
  local_180 = param_1[4];
  local_188 = &local_168;
  FUN_180419610(local_15c,local_148,&local_38,&local_28);
}



