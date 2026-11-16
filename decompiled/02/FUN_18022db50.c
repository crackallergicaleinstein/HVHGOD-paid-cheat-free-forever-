// FUN_18022db50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022db50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18022db50(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_6c8 [32];
  undefined **local_6a8;
  undefined8 *local_6a0;
  undefined8 local_698;
  undefined8 *local_688;
  undefined8 *local_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 local_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
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
  undefined1 local_5b8 [32];
  undefined1 local_598 [16];
  undefined1 local_588 [1392];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_6c8;
  local_618 = 0x8b00000048;
  uStack_610 = 0x48000000d3;
  uStack_608 = 0xce0000008b;
  uStack_600 = 0xffffffff000000e8;
  local_5f8 = 0xffffffffffffffff;
  uStack_5f0 = 0x48ffffffff;
  uStack_5e8 = 0xd30000008b;
  uStack_5e0 = 0x8b00000048;
  local_5d8 = 0xe8000000ce;
  uStack_5d0 = 0xffffffffffffffff;
  uStack_5c8 = 0xffffffffffffffff;
  uStack_5c0 = 0x3300000045;
  local_688 = &local_618;
  local_5b8 = _DAT_18086eb60;
  local_598 = vpcmpeqd_avx(DAT_18086eb60._0_16_,DAT_18086eb60._0_16_);
  local_680 = (undefined8 *)local_588;
  lVar3 = FUN_180219910(&local_688);
  if (lVar3 == 0) {
    uVar4 = 0;
    uVar5 = 0;
    local_678 = 0;
    local_668 = 0;
    uStack_670 = 0;
  }
  else {
    uVar4 = FUN_180219870(lVar3 + 6,1,5);
    local_678 = uVar4;
    uVar5 = FUN_180219870(lVar3 + 0x11,1,5);
    uStack_670 = uVar5;
    local_668 = FUN_180219870(lVar3 + 0x1f,1,5);
  }
  uVar1 = local_668;
  local_688 = &local_658;
  local_658 = 0x8900000048;
  uStack_650 = 0x240000005c;
  uStack_648 = 0x5500000010;
  uStack_640 = 0x5700000056;
  local_680 = &local_618;
  local_638 = 0x5400000041;
  uStack_630 = 0x5500000041;
  uStack_628 = 0x5600000041;
  uStack_620 = 0x5700000041;
  cVar2 = FUN_1802197b0(uVar4,&local_688);
  if (cVar2 != '\0') {
    local_688 = &local_658;
    local_680 = &uStack_628;
    local_658 = 0x5500000040;
    uStack_650 = 0x5600000053;
    uStack_648 = 0x8d00000048;
    uStack_640 = 0x24000000ac;
    local_638 = 0xfc00000090;
    uStack_630 = 0xff000000ff;
    cVar2 = FUN_1802197b0(uVar5,&local_688);
    if (cVar2 != '\0') {
      local_688 = &local_658;
      local_680 = &uStack_630;
      local_638 = 0x1000000024;
      local_658 = 0x8800000044;
      uStack_650 = 0x2400000044;
      uStack_648 = 0x4800000018;
      uStack_640 = 0x5400000089;
      cVar2 = FUN_1802197b0(uVar1,&local_688);
      if (cVar2 != '\0') {
        *param_2 = local_678;
        param_2[1] = uStack_670;
        param_2[2] = local_668;
      }
    }
  }
  FUN_18063ab10(&local_618,0,0x600);
  local_6a8 = (undefined **)uVar4;
  local_6a0 = (undefined8 *)uVar5;
  local_698 = uVar1;
  FUN_18015ad60(&local_618,0x600,0xffffffffffffffff,"counter=%p name=%p stickers=%p calls=0");
  local_6a8 = &PTR_180700558;
  if ((char)local_618 != '\0') {
    local_6a8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6a0 = &local_618;
  FUN_1800f6900(2);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
                    /* WARNING: Read-only address (ram,0x00018086eb60) is written */
}



