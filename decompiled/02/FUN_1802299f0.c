// FUN_1802299f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802299f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802299f0(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 auStack_6a8 [32];
  undefined **local_688;
  undefined **local_680;
  undefined **local_678;
  undefined **local_670;
  undefined *local_668;
  code *pcStack_660;
  char *pcStack_658;
  undefined8 uStack_650;
  undefined *local_648;
  undefined *local_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined *local_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined *local_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined4 local_598;
  undefined1 local_594 [1404];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_6a8;
  local_618 = (undefined *)0x8d00000048;
  uStack_610 = 0x2400000054;
  uStack_608 = 0xf200000030;
  uStack_600 = 0x110000000f;
  local_5f8 = 0x2400000044;
  uStack_5f0 = 0x4900000058;
  uStack_5e8 = 0xcf0000008b;
  uStack_5e0 = 0x8900000048;
  local_678 = &local_618;
  local_598 = 0xc0;
  local_5d8 = 0x2400000044;
  uStack_5d0 = 0xc600000020;
  uStack_5c8 = 0x4800000085;
  uStack_5c0 = 1;
  local_670 = (undefined **)local_594;
  local_5b8 = (undefined *)0x0;
  uStack_5b0 = 0xffffffff000000e8;
  uStack_5a8 = 0xffffffffffffffff;
  uStack_5a0 = 0x84ffffffff;
  lVar2 = FUN_180219910(&local_678);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_180219870(lVar2 + 0x1a,1,5);
  }
  local_618 = (undefined *)0x8900000048;
  uStack_610 = 0x240000005c;
  uStack_608 = 0x4800000008;
  uStack_600 = 0x6c00000089;
  local_678 = &local_618;
  local_5f8 = 0x1000000024;
  uStack_5f0 = 0x8900000048;
  uStack_5e8 = 0x2400000074;
  uStack_5e0 = 0x5700000018;
  local_670 = &local_5b8;
  local_5d8 = 0x5600000041;
  uStack_5d0 = 0x5700000041;
  uStack_5c8 = 0x8300000048;
  uStack_5c0 = 0x40000000ec;
  cVar1 = FUN_1802197b0(uVar3,&local_678);
  if (cVar1 != '\0') {
    local_678 = &local_668;
    local_648 = (undefined *)0x0;
    local_670 = &local_640;
    local_668 = (undefined *)0x41000000f3;
    pcStack_660 = (code *)0x100000000f;
    pcStack_658 = (char *)0x24000000b4;
    uStack_650 = 0x800000034;
    cVar1 = FUN_1802197b0(lVar2 + 0x60,&local_678);
    if (cVar1 != '\0') {
      local_678 = &local_640;
      local_620 = 0;
      local_670 = &local_618;
      local_640 = (undefined *)0x41000000f3;
      uStack_638 = 0x5f0000000f;
      uStack_630 = 0x24000000b4;
      uStack_628 = 0x80000002c;
      cVar1 = FUN_1802197b0(lVar2 + 0x8e,&local_678);
      if (cVar1 != '\0') {
        local_668 = &DAT_180bbece0;
        pcStack_660 = FUN_180228f60;
        pcStack_658 = "owned_sticker_animation";
        local_678 = &local_668;
        local_670 = &local_648;
        uStack_650 = uVar3;
        cVar1 = FUN_18044e620(&local_678);
        if (cVar1 != '\0') {
          bVar4 = 1;
          goto LAB_180229bf4;
        }
      }
    }
  }
  bVar4 = 0;
LAB_180229bf4:
  FUN_18063ab10(&local_618,0,0x600);
  local_688 = (undefined **)CONCAT44(local_688._4_4_,(uint)bVar4);
  FUN_18015ad60(&local_618,0x600,0xffffffffffffffff,
                "available=%d destination=draft_or_real_gesture new_sticker=click_to_place insertion_timer=disabled global_output_writes=0"
               );
  local_688 = &PTR_180700558;
  if ((char)local_618 != '\0') {
    local_688 = (undefined **)&DAT_1806bcfc0;
  }
  local_680 = &local_618;
  FUN_1800f6900((bVar4 ^ 1) + 1);
}



