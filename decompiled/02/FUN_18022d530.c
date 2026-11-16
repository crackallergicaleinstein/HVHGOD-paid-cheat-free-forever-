// FUN_18022d530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022d530 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022d530(void)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 auStack_658 [32];
  undefined **local_638;
  undefined8 *local_630;
  undefined8 *local_628;
  undefined8 *local_620;
  undefined8 local_618;
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
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 local_598;
  undefined8 uStack_590;
  undefined1 local_588 [1392];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_658;
  local_618 = 0x8500000048;
  uStack_610 = 0x48000000f6;
  uStack_608 = 0x960000008d;
  uStack_600 = 0x600000010;
  local_5f8 = 0;
  uStack_5f0 = 0xb000000041;
  uStack_5e8 = 0x4800000001;
  uStack_5e0 = 0x8b0000008d;
  local_5d8 = 0x600000010;
  uStack_5d0 = 0;
  uStack_5c8 = 0xf00000048;
  uStack_5c0 = 0xd700000044;
  local_628 = &local_618;
  local_5b8 = 0xffffffff000000e8;
  uStack_5b0 = 0xffffffffffffffff;
  uStack_5a8 = 0x48ffffffff;
  uStack_5a0 = 0x930000008d;
  local_620 = (undefined8 *)local_588;
  local_598 = 0x1a00000080;
  uStack_590 = 0;
  lVar2 = FUN_180219910(&local_628);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_180219870(lVar2 + 0x18,1,5);
  }
  local_618 = 0x8900000048;
  uStack_610 = 0x240000005c;
  uStack_608 = 0x5700000008;
  uStack_600 = 0x8300000048;
  local_5f8 = 0x20000000ec;
  uStack_5f0 = 0x8d00000048;
  uStack_5e8 = 0xa0000000b9;
  uStack_5e0 = 4;
  local_628 = &local_618;
  local_5d8 = 0x4800000000;
  uStack_5d0 = 0xda0000008b;
  uStack_5c8 = 0x3f00000083;
  uStack_5c0 = 0x7e00000000;
  local_620 = &uStack_5a8;
  local_5b8 = 0x45ffffffff;
  uStack_5b0 = 0xc000000084;
  cVar1 = FUN_1802197b0(uVar3,&local_628);
  if (cVar1 == '\0') {
    FUN_18063ab10(&local_618,0,0x600);
    local_638 = (undefined **)uVar3;
    FUN_18015ad60(&local_618,0x600,0xffffffffffffffff,"copy=%p calls=0");
    local_638 = &PTR_180700558;
    if ((char)local_618 != '\0') {
      local_638 = (undefined **)&DAT_1806bcfc0;
    }
    local_630 = &local_618;
    FUN_1800f6900(2);
  }
}



