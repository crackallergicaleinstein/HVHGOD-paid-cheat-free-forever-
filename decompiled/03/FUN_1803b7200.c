// FUN_1803b7200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b7200 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803b7200(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_98 [48];
  longlong *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_68 = (longlong *)0x0;
  iVar1 = (**(code **)(*param_2 + 0x48))(param_2,0,&DAT_180806ff8,&local_68);
  if (-1 < iVar1) {
    (**(code **)(*DAT_180c6e508 + 0x48))(DAT_180c6e508,local_68,0,&DAT_180c6e518);
    local_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    (**(code **)(*local_68 + 0x50))(local_68,&local_48);
    if (((int)local_48 == 0) || (local_48._4_4_ == 0)) {
      DAT_180c70e60 = 1;
    }
    else {
      DAT_180c70e60 = CONCAT44((int)local_48,local_48._4_4_);
    }
    local_58 = (float)(local_48 & 0xffffffff);
    local_54 = (float)local_48._4_4_;
    local_4c = 0x3f800000;
    local_60 = 0;
    local_5c = 0;
    local_50 = 0;
    (**(code **)(*DAT_180c6e510 + 0x160))(DAT_180c6e510,1,&local_60);
    (**(code **)(*local_68 + 0x10))();
  }
}



