// FUN_1805087c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805087c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1805087c0(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  if (DAT_180c62e40 == 0) {
  }
  local_a0 = (longlong *)0x0;
  local_90 = (longlong *)0x0;
  (**(code **)(*DAT_180c62da8 + 0x2c8))(DAT_180c62da8,1,&local_a0,&local_90);
  if (local_a0 == (longlong *)0x0) goto LAB_180508ce2;
  local_98 = (longlong *)0x0;
  (**(code **)(*local_a0 + 0x38))(local_a0,&local_98);
  local_a8 = (longlong *)0x0;
  if ((local_98 != (longlong *)0x0) &&
     ((**(code **)*local_98)(local_98,&DAT_180806ff8,&local_a8), local_98 != (longlong *)0x0)) {
    (**(code **)(*local_98 + 0x10))();
    local_98 = (longlong *)0x0;
  }
  local_30 = 0;
  local_28 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  if (((local_a8 != (longlong *)0x0) &&
      ((**(code **)(*local_a8 + 0x50))(local_a8,&local_50), local_a8 != (longlong *)0x0)) &&
     (uStack_40._4_4_ == 1)) {
    if (DAT_180c62df0 == 0) {
LAB_180508902:
      if (DAT_180c62df8 != 0) {
        (**(code **)(*(longlong *)DAT_180c62df8 + 0x10))();
        DAT_180c62df8 = 0;
      }
      if (DAT_180c62df0 != 0) {
        (**(code **)(*(longlong *)DAT_180c62df0 + 0x10))(DAT_180c62df0);
        DAT_180c62df0 = 0;
      }
      local_80 = (int)local_50;
      uStack_7c = local_50._4_4_;
      uStack_70 = (int)uStack_40;
      uStack_6c = 1;
      uStack_68 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_78 = 1;
      uStack_74 = 1;
      uStack_64 = 0;
      local_60 = 8;
      iVar4 = (**(code **)(*DAT_180c62da0 + 0x28))(DAT_180c62da0,&local_80,0,&DAT_180c62df0);
      if ((iVar4 < 0) ||
         (iVar4 = (**(code **)(*DAT_180c62da0 + 0x38))(DAT_180c62da0,DAT_180c62df0,0,&DAT_180c62df8)
         , iVar4 < 0)) {
        if (DAT_180c62df8 != 0) {
          (**(code **)(*(longlong *)DAT_180c62df8 + 0x10))();
          DAT_180c62df8 = 0;
        }
        if (DAT_180c62df0 != 0) {
          (**(code **)(*(longlong *)DAT_180c62df0 + 0x10))();
          DAT_180c62df0 = 0;
        }
        goto LAB_180508c87;
      }
      _DAT_180c62e00 = CONCAT44(uStack_7c,local_80);
      uRam0000000180c62e08 = CONCAT44(uStack_74,uStack_78);
      _DAT_180c62e10 = CONCAT44(uStack_6c,uStack_70);
      uRam0000000180c62e18 = CONCAT44(uStack_64,uStack_68);
      _DAT_180c62e20 = CONCAT44(uStack_5c,local_60);
      _DAT_180c62e28 = uStack_58;
    }
    else {
      if (DAT_180c62e00 != (int)local_50) goto LAB_180508902;
      if (DAT_180c62e04 != local_50._4_4_) goto LAB_180508902;
      if (DAT_180c62e10 != (int)uStack_40) goto LAB_180508902;
    }
    (**(code **)(*DAT_180c62da8 + 0x178))(DAT_180c62da8,DAT_180c62df0,local_a8);
    (**(code **)(*DAT_180c62da8 + 0x88))(DAT_180c62da8,0);
    (**(code **)(*DAT_180c62da8 + 0xc0))(DAT_180c62da8,4);
    (**(code **)(*DAT_180c62da8 + 0x58))(DAT_180c62da8,DAT_180c62db0,0,0);
    (**(code **)(*DAT_180c62da8 + 0xb8))(DAT_180c62da8,0,0,0);
    (**(code **)(*DAT_180c62da8 + 0x50))(DAT_180c62da8,0,1,&DAT_180c62dc8);
    (**(code **)(*DAT_180c62da8 + 0x80))(DAT_180c62da8,0,1,&DAT_180c62dd0);
    local_20 = (undefined1  [16])0x0;
    (**(code **)(*DAT_180c62da8 + 0x118))(DAT_180c62da8,DAT_180c62dd8,local_20,0xffffffff);
    (**(code **)(*DAT_180c62da8 + 0x120))(DAT_180c62da8,DAT_180c62de8,0);
    (**(code **)(*DAT_180c62da8 + 0x158))(DAT_180c62da8,DAT_180c62de0);
    local_b8 = &DAT_180c62e30;
    FUN_1805085a0(DAT_180c62db8,DAT_180c62df8,local_50 & 0xffffffff,local_50._4_4_);
    puVar1 = &DAT_180c62e48;
    lVar2 = 3;
    puVar5 = &DAT_180c62e50;
    do {
      local_b8 = puVar5;
      FUN_1805085a0(DAT_180c62db8,*(undefined8 *)(puVar1 + -2),*puVar1,puVar1[1]);
      puVar5 = puVar5 + 4;
      puVar1 = puVar1 + 8;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    iVar4 = 2;
    puVar1 = &DAT_180c62ea8;
    puVar3 = &DAT_180c62e70;
    do {
      local_b8 = (undefined8 *)puVar3;
      FUN_1805085a0(DAT_180c62dc0,*(undefined8 *)(puVar1 + -2),*puVar1,puVar1[1]);
      puVar3 = puVar3 + -0x20;
      puVar1 = puVar1 + -8;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
    local_88 = 0;
    (**(code **)(*DAT_180c62da8 + 0x40))(DAT_180c62da8,0,1,&local_88);
  }
LAB_180508c87:
  (**(code **)(*DAT_180c62da8 + 0x108))(DAT_180c62da8,1,&local_a0,local_90);
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x10))();
    local_a8 = (longlong *)0x0;
  }
  if (local_a0 != (longlong *)0x0) {
    (**(code **)(*local_a0 + 0x10))();
    local_a0 = (longlong *)0x0;
  }
LAB_180508ce2:
  if (local_90 != (longlong *)0x0) {
    (**(code **)(*local_90 + 0x10))();
  }
}



