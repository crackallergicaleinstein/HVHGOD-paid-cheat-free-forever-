// FUN_1803b2520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b2520 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803b2520(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  *param_1 = param_2;
  FUN_18063ab10(param_1 + 1,0,0x180);
  *(undefined4 *)(param_1 + 0x31) = 0x10;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
  if ((*param_1 != 0) && (param_3 != (longlong *)0x0)) {
    local_88 = (longlong *)0x0;
    (**(code **)(*param_3 + 0x38))(param_3,&local_88);
    local_80 = (longlong *)0x0;
    if ((local_88 == (longlong *)0x0) ||
       (iVar2 = (**(code **)*local_88)(local_88,&DAT_180806ff8,&local_80), iVar2 < 0)) {
      plVar1 = local_80;
      if (local_80 != (longlong *)0x0) {
        local_80 = (longlong *)0x0;
        (**(code **)(*plVar1 + 0x10))(plVar1);
      }
      if (local_88 == (longlong *)0x0) {
      }
      pcVar3 = *(code **)(*local_88 + 0x10);
    }
    else {
      local_60 = 0;
      uStack_58 = 0;
      uStack_50 = 0;
      uStack_48 = 0;
      local_40 = 0;
      local_38 = 0;
      (**(code **)(*local_80 + 0x50))(local_80,&local_60);
      plVar1 = local_80;
      if (((int)local_60 == 0) || (local_60._4_4_ == 0)) {
        if (local_80 != (longlong *)0x0) {
          local_80 = (longlong *)0x0;
          (**(code **)(*plVar1 + 0x10))();
        }
        if (local_88 == (longlong *)0x0) {
        }
        pcVar3 = *(code **)(*local_88 + 0x10);
      }
      else {
        (**(code **)(*(longlong *)*param_1 + 0x2f8))
                  ((longlong *)*param_1,param_1 + 0x31,param_1 + 1);
        local_78 = 0;
        local_74 = 0;
        local_70 = (float)(local_60 & 0xffffffff);
        local_6c = (float)(local_60 >> 0x20);
        local_68 = 0;
        local_64 = 0x3f800000;
        (**(code **)(*(longlong *)*param_1 + 0x160))((longlong *)*param_1,1,&local_78);
        plVar1 = local_80;
        *(undefined1 *)((longlong)param_1 + 0x18c) = 1;
        if (local_80 != (longlong *)0x0) {
          local_80 = (longlong *)0x0;
          (**(code **)(*plVar1 + 0x10))();
        }
        if (local_88 == (longlong *)0x0) {
        }
        pcVar3 = *(code **)(*local_88 + 0x10);
      }
    }
    local_88 = (longlong *)0x0;
    (*pcVar3)();
  }
}



