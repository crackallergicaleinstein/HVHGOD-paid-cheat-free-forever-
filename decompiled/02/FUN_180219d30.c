// FUN_180219d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180219d30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180219d30(void)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 auStack_6b8 [32];
  undefined **local_698;
  undefined **local_690;
  undefined **local_688;
  undefined **local_680;
  undefined *local_678;
  code *pcStack_670;
  char *local_668;
  undefined1 local_660 [8];
  undefined *local_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined *local_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined *local_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined1 auStack_5d0 [8];
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 local_598 [32];
  undefined1 local_578 [16];
  undefined1 local_568 [1360];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_6b8;
  if (DAT_180cca115 != '\0') {
  }
  local_618 = (undefined *)0x5500000040;
  uStack_610 = 0x8300000048;
  uStack_608 = 0x30000000ec;
  uStack_600 = 0x6300000049;
  local_5f8 = 0x83000000e8;
  uStack_5f0 = 0x39000000fd;
  uStack_5e8 = 0x870000000f;
  uStack_5e0 = 0xffffffffffffffff;
  local_5d8 = 0xffffffffffffffff;
  auStack_5d0 = (undefined1  [8])0xfa00000083;
  uStack_5c8 = 0xf00000003;
  uStack_5c0 = 0xffffffff00000087;
  local_5b8 = 0xffffffffffffffff;
  uStack_5b0 = 0x48ffffffff;
  uStack_5a8 = 0x7400000089;
  uStack_5a0 = 0x4800000024;
  local_688 = &local_618;
  local_598 = _DAT_18086e240;
  local_578 = vpcmpeqd_avx(DAT_18086e240._0_16_,DAT_18086e240._0_16_);
  local_680 = (undefined **)local_568;
  DAT_180cca115 = 1;
  lVar4 = FUN_180219910(&local_688);
  if (lVar4 == 0) {
    DAT_180cca0d0 = 0;
  }
  else {
    DAT_180cca0d0 = FUN_180219870(lVar4 + 0x25,3,7);
    for (iVar7 = 0; iVar7 < 0x1a0; iVar7 = iVar7 + 1) {
      local_688 = &local_658;
      local_680 = (undefined **)((longlong)&uStack_630 + 4);
      local_658 = (undefined *)0xd50000008b;
      uStack_650 = 0xce0000008b;
      uStack_648 = 0xffffffff000000e8;
      uStack_640 = 0xffffffffffffffff;
      local_638 = (undefined *)0x84ffffffff;
      uStack_630 = CONCAT44(uStack_630._4_4_,0xc0);
      cVar3 = FUN_1802197b0(iVar7 + lVar4,&local_688);
      if (cVar3 != '\0') {
        if (DAT_180cca108 != 0) {
          DAT_180cca108 = 0;
          break;
        }
        DAT_180cca108 = FUN_180219870(iVar7 + lVar4 + 4,1,5);
      }
    }
  }
  local_688 = &local_658;
  local_658 = (undefined *)0x8300000048;
  uStack_650 = 0x28000000ec;
  uStack_648 = 0x48000000b9;
  uStack_640 = 0;
  local_680 = &local_618;
  local_638 = (undefined *)0xe800000000;
  uStack_630 = 0xffffffffffffffff;
  uStack_628 = 0xffffffffffffffff;
  uStack_620 = 0x8500000048;
  DAT_180cca0e8 = FUN_180219910(&local_688);
  local_618 = (undefined *)0xffffffff000000e9;
  uStack_610 = 0xffffffffffffffff;
  uStack_608 = 0xccffffffff;
  uStack_600 = 0xcc000000cc;
  local_688 = &local_618;
  uStack_5a8 = CONCAT44(uStack_5a8._4_4_,0xd0);
  local_5f8 = 0xcc000000cc;
  uStack_5f0 = 0xcc000000cc;
  uStack_5e8 = 0xcc000000cc;
  uStack_5e0 = 0xcc000000cc;
  local_5d8 = 0xcc000000cc;
  auStack_5d0 = (undefined1  [8])0xcc000000cc;
  local_680 = (undefined **)((longlong)&uStack_5a8 + 4);
  uStack_5c8 = 0x8b00000049;
  uStack_5c0 = 0x48000000c0;
  local_5b8 = 0xca0000008b;
  uStack_5b0 = 0x8b00000048;
  lVar4 = FUN_180219910(&local_688);
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar5 = FUN_180219870(lVar4,1,5);
  }
  auVar1 = local_598;
  local_618 = (undefined *)0x8b00000048;
  uStack_610 = 0x56000000c4;
  uStack_608 = 0x4100000057;
  uStack_600 = 0x4100000056;
  local_5f8 = 0x4800000057;
  uStack_5f0 = 0xec00000083;
  uStack_5e8 = 0xf00000048;
  uStack_5e0 = 0xf2000000b7;
  local_5d8 = 0x8b0000004d;
  auStack_5d0 = (undefined1  [8])0x41000000f9;
  uStack_5c8 = 0xb70000000f;
  uStack_5c0 = 0x4c000000f8;
  local_688 = &local_618;
  local_598._16_4_ = 0xff;
  local_5b8 = 0xf10000008b;
  uStack_5b0 = 0xfe00000083;
  uStack_5a8 = 0xf00000004;
  uStack_5a0 = 0xffffffff00000083;
  local_680 = (undefined **)(local_598 + 0x18);
  local_598._8_8_ = 0x83ffffffff;
  local_598._0_8_ = 0xffffffffffffffff;
  auVar2 = local_598;
  local_598._24_8_ = auVar1._24_8_;
  local_598._0_20_ = auVar2._0_20_;
  local_598._20_4_ = 0x3a;
  DAT_180cca0f0 = uVar5;
  DAT_180cca0f8 = FUN_180219910(&local_688);
  if (DAT_180cca0e8 != 0) {
    local_688 = &local_678;
    local_668 = (char *)0xffffffffffffffff;
    local_680 = (undefined **)(local_660 + 4);
    local_660._0_4_ = 0xffffffff;
    local_678 = (undefined *)0x8d00000048;
    pcStack_670 = (code *)0xffffffff0000000d;
    cVar3 = FUN_1802197b0(DAT_180cca0e8 + 0x13,&local_688);
    if (cVar3 != '\0') {
      DAT_180cca100 = FUN_180219870(DAT_180cca0e8 + 0x13,3,7);
    }
  }
  uVar5 = FUN_1802196a0(DAT_180cca0d0,0x48);
  puVar6 = (undefined *)FUN_1802196a0(DAT_180cca0d0,0x45);
  if (DAT_180cca0d0 != 0) {
    local_688 = &local_658;
    local_680 = &local_638;
    local_658 = (undefined *)0x8b00000048;
    uStack_650 = 0xd000000081;
    uStack_648 = 0x500000028;
    uStack_640 = 0xc300000000;
    cVar3 = FUN_1802197b0(uVar5,&local_688);
    if (cVar3 != '\0') {
      local_688 = &local_618;
      local_618 = (undefined *)0x8900000048;
      uStack_610 = 0x240000005c;
      uStack_608 = 0x4800000008;
      uStack_600 = 0x6c00000089;
      local_680 = (undefined **)(auStack_5d0 + 4);
      local_5d8 = 0x2400000054;
      local_5f8 = 0x1800000024;
      uStack_5f0 = 0x8900000048;
      uStack_5e8 = 0x2400000074;
      uStack_5e0 = 0x8900000020;
      auStack_5d0._0_4_ = 0x10;
      cVar3 = FUN_1802197b0(puVar6,&local_688);
      if (cVar3 != '\0') {
        cVar3 = FUN_1804513c0(DAT_180cca0e8,1,2);
        if (cVar3 != '\0') {
          cVar3 = FUN_1804513c0(DAT_180cca0f0,1,2);
          if (((cVar3 != '\0') && (cVar3 = FUN_1804513c0(DAT_180cca0f8,1,2), cVar3 != '\0')) &&
             (DAT_180cca100 != 0)) {
            local_688 = &local_678;
            local_680 = (undefined **)local_660;
            local_678 = (undefined *)0x410000008d;
            pcStack_670 = (code *)0x83000000fd;
            local_668 = (char *)0xf000000f8;
            cVar3 = FUN_1802197b0(DAT_180cca108,&local_688);
            if (cVar3 != '\0') {
              local_678 = &DAT_180cca878;
              pcStack_670 = FUN_18021b100;
              local_668 = "local_inventory_equip";
              local_688 = &local_678;
              local_680 = &local_658;
              local_660 = (undefined1  [8])puVar6;
              cVar3 = FUN_18044e620(&local_688);
              if ((cVar3 != '\0') && (cVar3 = FUN_18044e180(&DAT_180cca878), cVar3 != '\0')) {
                FUN_18063ab10(&local_618,0,0x600);
                FUN_18015ad60(&local_618,0x600,0xffffffffffffffff,"scope=local_only");
                local_698 = &PTR_180700558;
                if ((char)local_618 != '\0') {
                  local_698 = (undefined **)&DAT_1806bcfc0;
                }
                local_690 = &local_618;
                FUN_1800f6900(1,local_690,"Inventory","BINDINGS_VALIDATED");
              }
            }
          }
        }
      }
    }
  }
  FUN_18044e4e0(&DAT_180cca878);
  DAT_180cca0d0 = 0;
  FUN_18063ab10(&local_618,0,0x600);
  FUN_18015ad60(&local_618,0x600,0xffffffffffffffff,"action=inventory_disabled");
  local_690 = &local_618;
  local_698 = &PTR_180700558;
  if ((char)local_618 != '\0') {
    local_698 = (undefined **)&DAT_1806bcfc0;
  }
  FUN_1800f6900(2,&DAT_1806bcfc0,"Inventory","BINDINGS_UNAVAILABLE");
                    /* WARNING: Read-only address (ram,0x00018086e240) is written */
}



