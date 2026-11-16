// FUN_180437380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180437380 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180437380(longlong **param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auStack_c8 [56];
  undefined8 local_90;
  int local_88;
  undefined4 local_84;
  longlong *local_80;
  longlong *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_40;
  undefined8 local_3c;
  undefined4 local_34;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_5c = 1;
  local_4c = 0;
  local_68 = 1;
  local_64 = 1;
  local_60 = 0x1c;
  local_54 = 1;
  local_50 = 8;
  local_84 = 0;
  local_88 = param_3 * 4;
  local_80 = (longlong *)0x0;
  local_90 = param_2;
  local_70 = param_3;
  local_6c = param_4;
  iVar2 = (**(code **)(*DAT_180bbab70 + 0x28))(DAT_180bbab70,&local_70,&local_90,&local_80);
  if (iVar2 < 0) {
    *param_1 = (longlong *)0x0;
    if (local_80 == (longlong *)0x0) {
    }
    pcVar3 = *(code **)(*local_80 + 0x10);
  }
  else {
    local_3c = 4;
    local_30 = 0;
    local_40 = local_60;
    local_34 = 1;
    local_78 = (longlong *)0x0;
    iVar2 = (**(code **)(*DAT_180bbab70 + 0x38))(DAT_180bbab70,local_80,&local_40,&local_78);
    plVar1 = local_78;
    *param_1 = (longlong *)0x0;
    if (iVar2 < 0) {
      if (local_78 != (longlong *)0x0) {
        local_78 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
      }
      if (local_80 == (longlong *)0x0) {
      }
      pcVar3 = *(code **)(*local_80 + 0x10);
    }
    else {
      if (param_1 != &local_78) {
        *param_1 = local_78;
        local_78 = (longlong *)0x0;
      }
      plVar1 = local_78;
      if (local_78 != (longlong *)0x0) {
        local_78 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))();
      }
      if (local_80 == (longlong *)0x0) {
      }
      pcVar3 = *(code **)(*local_80 + 0x10);
    }
  }
  local_80 = (longlong *)0x0;
  (*pcVar3)();
}



