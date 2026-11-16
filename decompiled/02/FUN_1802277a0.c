// FUN_1802277a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802277a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802277a0(void)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  undefined1 auStack_688 [32];
  undefined **local_668;
  undefined8 *local_660;
  undefined **local_658;
  undefined8 *local_650;
  undefined *local_648;
  code *local_640;
  char *local_638;
  longlong local_630;
  undefined *local_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 local_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 local_568;
  undefined4 local_560;
  undefined8 local_55c [166];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_688;
  local_628 = (undefined *)0x8900000048;
  uStack_620 = 0x240000005c;
  uStack_618 = 0x4800000010;
  uStack_610 = 0x6c00000089;
  local_608 = 0x1800000024;
  uStack_600 = 0x5700000056;
  uStack_5f8 = 0x5600000041;
  uStack_5f0 = 0x8300000048;
  local_658 = &local_628;
  local_5e8 = 0x50000000ec;
  uStack_5e0 = 0x8b0000004d;
  uStack_5d8 = 0x49000000f1;
  uStack_5d0 = 0xf00000008b;
  local_650 = &uStack_5b0;
  uStack_5b8 = 0xd90000008b;
  local_5c8 = 0x8b00000048;
  uStack_5c0 = 0x48000000ea;
  lVar2 = FUN_180219910(&local_658);
  local_628 = (undefined *)0x8900000048;
  uStack_620 = 0x240000006c;
  uStack_618 = 0x4800000018;
  uStack_610 = 0x7400000089;
  local_658 = &local_628;
  local_608 = 0x2000000024;
  uStack_600 = 0x4800000057;
  uStack_5f8 = 0xec00000083;
  uStack_5f0 = 0x4900000060;
  local_650 = &local_5c8;
  local_5e8 = 0xe80000008b;
  uStack_5e0 = 0x8b00000048;
  uStack_5d8 = 0x48000000f2;
  uStack_5d0 = 0xf90000008b;
  lVar3 = FUN_180219910(&local_658);
  local_628 = (undefined *)0xf000000f3;
  uStack_620 = 0x4400000011;
  uStack_618 = 0x2400000024;
  uStack_610 = 0xf000000f3;
  local_608 = 0x4c00000011;
  uStack_600 = 0x2800000024;
  uStack_5f8 = 0xffffffff000000e8;
  uStack_5f0 = 0xffffffffffffffff;
  uStack_5b8 = CONCAT44(uStack_5b8._4_4_,0x60);
  local_658 = &local_628;
  local_5e8 = 0x48ffffffff;
  uStack_5e0 = 0xcf0000008b;
  uStack_5d8 = 0xc000000084;
  uStack_5d0 = 0x1900000074;
  local_650 = (undefined8 *)((longlong)&uStack_5b8 + 4);
  local_5c8 = 0x280000000f;
  uStack_5c0 = 0x2400000044;
  lVar4 = FUN_180219910(&local_658);
  local_628 = (undefined *)0xf000000f2;
  uStack_620 = 0x8600000011;
  uStack_618 = 0x400000090;
  uStack_610 = 0;
  local_608 = 0xf000000f2;
  uStack_600 = 0x4500000010;
  uStack_5f8 = 0xf20000002c;
  uStack_5f0 = 0x110000000f;
  local_5e8 = 0x9c00000086;
  uStack_5e0 = 4;
  uStack_5d8 = 0xf00000000;
  uStack_5d0 = 0x4500000010;
  local_5c8 = 0x8900000038;
  uStack_5c0 = 0x9800000086;
  uStack_5b8 = 4;
  uStack_5b0 = 0x8b00000000;
  local_568 = 4;
  local_658 = &local_628;
  local_5a8 = 0x3400000045;
  uStack_5a0 = 0x8600000089;
  uStack_598 = 0x4000000a4;
  uStack_590 = 0;
  local_650 = local_55c;
  local_560 = 0;
  local_588 = 0x8d00000048;
  uStack_580 = 0x7000000046;
  uStack_578 = 0x110000000f;
  uStack_570 = 0xa800000086;
  lVar5 = FUN_180219910(&local_658);
  if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar5 != 0)) && (lVar4 != 0)) {
    lVar5 = FUN_180219870(lVar4 + 0xc,1,5);
    if (lVar5 == lVar2) {
      local_648 = &DAT_180bbec20;
      local_640 = FUN_1802263f0;
      local_638 = "owned_charm_grip";
      local_658 = &local_648;
      local_650 = &local_628;
      local_630 = lVar2;
      cVar1 = FUN_18044e620(&local_658);
      if (cVar1 != '\0') {
        bVar6 = 1;
        goto LAB_1802279e2;
      }
    }
  }
  bVar6 = 0;
LAB_1802279e2:
  FUN_18063ab10(&local_628,0,0x600);
  local_668 = (undefined **)CONCAT44(local_668._4_4_,(uint)bVar6);
  FUN_18015ad60(&local_628,0x600,0xffffffffffffffff,
                "available=%d scope=owned_tool_stack global_mouse_writes=0");
  local_668 = &PTR_180700558;
  if ((char)local_628 != '\0') {
    local_668 = (undefined **)&DAT_1806bcfc0;
  }
  local_660 = &local_628;
  FUN_1800f6900((bVar6 ^ 1) + 1);
  DAT_180cd3a60 = 0;
  if (bVar6 != 0) {
    DAT_180cd3a60 = lVar3;
  }
  DAT_180cd3a68 = lVar4 + 0x11;
  if (bVar6 == 0) {
    DAT_180cd3a68 = 0;
  }
}



