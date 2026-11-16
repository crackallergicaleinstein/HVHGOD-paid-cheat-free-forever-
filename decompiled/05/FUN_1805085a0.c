// FUN_1805085a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805085a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805085a0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,longlong param_5)

{
  int iVar1;
  undefined1 auVar2 [64];
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_80;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  local_50 = param_2;
  (**(code **)(*DAT_180c62da8 + 0x40))(DAT_180c62da8,0,1,&local_58);
  (**(code **)(*DAT_180c62da8 + 0x108))(DAT_180c62da8,1,param_5 + 8,0);
  auVar2 = ZEXT464(0x3f800000);
  local_40 = (float)*(int *)(param_5 + 0x18);
  local_3c = (float)*(int *)(param_5 + 0x1c);
  local_48 = 0;
  local_44 = 0;
  local_38 = 0;
  local_34 = 0x3f800000;
  (**(code **)(*DAT_180c62da8 + 0x160))(DAT_180c62da8,1,&local_48);
  local_80 = local_68;
  local_68 = (undefined1  [16])0x0;
  local_88 = 0;
  iVar1 = (**(code **)(*DAT_180c62da8 + 0x70))(DAT_180c62da8,DAT_180c62dd0,0,4);
  if (-1 < iVar1) {
    *(float *)local_68._0_8_ = auVar2._0_4_ / (float)param_3;
    *(float *)(local_68._0_8_ + 4) = auVar2._0_4_ / (float)param_4;
    *(float *)(local_68._0_8_ + 8) = 1.0;
    *(float *)(local_68._0_8_ + 0xc) = 0.0;
    (**(code **)(*DAT_180c62da8 + 0x78))(DAT_180c62da8,DAT_180c62dd0,0);
  }
  (**(code **)(*DAT_180c62da8 + 0x48))(DAT_180c62da8,param_1,0,0);
  (**(code **)(*DAT_180c62da8 + 0x40))(DAT_180c62da8,0,1,&local_50);
  (**(code **)(*DAT_180c62da8 + 0x68))(DAT_180c62da8,3,0);
}



