// FUN_18022a170 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022a170 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022a170(void)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 *puVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_718 [32];
  undefined **local_6f8;
  char *local_6f0;
  undefined8 *local_6e8;
  char *local_6e0;
  ulonglong local_6d8 [2];
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined4 local_658;
  undefined4 local_654;
  undefined1 local_650 [8];
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  char local_628 [1536];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_718;
  uVar11 = 0;
  local_6e8 = &local_6c8;
  local_6d8[0] = local_6d8[0] & 0xffffffff00000000;
  local_6c8 = 0x8d00000048;
  uStack_6c0 = 0xa000000095;
  uStack_6b8 = 0;
  uStack_6b0 = 0xc700000000;
  local_6a8 = 0xa000000085;
  uStack_6a0 = 0;
  uStack_698 = 0xff00000000;
  uStack_690 = 0xff000000ff;
  local_688 = 0x49000000ff;
  uStack_680 = 0xcc0000008b;
  uStack_678 = 0xffffffff000000e8;
  uStack_670 = 0xffffffffffffffff;
  bVar12 = false;
  local_6e0 = (char *)&local_654;
  local_658 = 0x84;
  local_668 = 0x84ffffffff;
  uStack_660 = 0xf000000c0;
  lVar5 = FUN_180219910(&local_6e8);
  if (lVar5 == 0) {
    lVar5 = 0;
LAB_18022a295:
    lVar6 = 0;
  }
  else {
    lVar5 = FUN_180219870(lVar5 + 0x14,1,5);
    if (lVar5 == 0) goto LAB_18022a295;
    local_6e8 = &local_648;
    local_6e0 = local_628;
    local_648 = 0x5300000040;
    uStack_640 = 0x8300000048;
    uStack_638 = 0x30000000ec;
    uStack_630 = 0x50000008b;
    cVar4 = FUN_1802197b0(lVar5,&local_6e8);
    if (cVar4 == '\0') goto LAB_18022a295;
    lVar6 = FUN_180219870(lVar5 + 6,2,6);
  }
  local_6c8 = 0x8900000048;
  uStack_6c0 = 0x240000005c;
  uStack_6b8 = 0x4800000018;
  uStack_6b0 = 0x7400000089;
  local_6a8 = 0x2000000024;
  uStack_6a0 = 0x5400000041;
  uStack_698 = 0x5600000041;
  uStack_690 = 0x5700000041;
  local_6e8 = &local_6c8;
  local_658 = 0xf1;
  local_688 = 0x8300000048;
  uStack_680 = 0x30000000ec;
  uStack_678 = 0x8b00000041;
  uStack_670 = 0x4c000000d8;
  local_6e0 = local_650;
  local_654 = 0xe8;
  local_668 = 0xe20000008b;
  uStack_660 = 0x8b0000004c;
  lVar7 = FUN_180219910(&local_6e8);
  local_6c8 = 0x8300000048;
  uStack_6c0 = 0x28000000ec;
  uStack_6b8 = 0x8500000048;
  uStack_6b0 = 0x74000000c9;
  local_6e8 = &local_6c8;
  local_6a8 = 0x480000007b;
  uStack_6a0 = 0x510000008b;
  uStack_698 = 0x8b00000010;
  uStack_690 = 0x3000000042;
  local_6e0 = (char *)&uStack_678;
  local_688 = 0xba0000000f;
  uStack_680 = 0xb000000e0;
  lVar8 = FUN_180219910(&local_6e8);
  local_6c8 = 0x5500000040;
  uStack_6c0 = 0x5600000053;
  uStack_6b8 = 0x5400000041;
  uStack_6b0 = 0x5500000041;
  local_6a8 = 0x5600000041;
  uStack_6a0 = 0x5700000041;
  uStack_698 = 0x8d00000048;
  uStack_690 = 0x240000006c;
  local_658 = 0x33;
  local_6e8 = &local_6c8;
  local_654 = 0xed;
  local_688 = 0x48000000a0;
  uStack_680 = 0xec00000081;
  uStack_678 = 0x100000060;
  uStack_670 = 0;
  local_6e0 = local_650;
  local_668 = 0x8b0000004c;
  uStack_660 = 0x45000000f1;
  local_6e8 = (undefined8 *)FUN_180219910(&local_6e8);
  if (lVar6 != 0) {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (lVar6 + 8 == 0) {
      bVar2 = false;
    }
    else {
      local_6d8[0] = 0;
      cVar4 = FUN_1804514f0(local_6d8,lVar6 + 8,8);
      if (cVar4 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    uVar11 = local_6d8[0];
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if (!bVar2) {
      uVar11 = 0;
    }
  }
  puVar3 = local_6e8;
  if ((((lVar5 != 0) && (lVar6 != 0)) && (lVar7 != 0)) &&
     (((lVar8 != 0 && (local_6e8 != (undefined8 *)0x0)) && (uVar11 != 0)))) {
    plVar10 = (longlong *)FUN_180454280(&local_648,uVar11,0x20);
    bVar12 = true;
    plVar1 = plVar10 + 2;
    if (0xf < (ulonglong)plVar10[3]) {
      plVar10 = (longlong *)*plVar10;
    }
    if (*plVar1 == 0x10) {
      lVar9 = *plVar10 + -0x61686379654b5f43;
      if (lVar9 == 0) {
        lVar9 = plVar10[1] + -0x656c75646f4d6e69;
      }
      if (lVar9 == 0) {
        bVar2 = false;
        goto LAB_18022a4c4;
      }
    }
  }
  bVar2 = true;
LAB_18022a4c4:
  if (bVar12) {
    FUN_18015c010(&local_648);
  }
  if (bVar2) {
    FUN_18063ab10(local_628,0,0x600);
    FUN_18015ad60(local_628,0x600,0xffffffffffffffff,"calls=0");
    local_6f8 = &PTR_180700558;
    if (local_628[0] != '\0') {
      local_6f8 = (undefined **)&DAT_1806bcfc0;
    }
    local_6f0 = local_628;
    FUN_1800f6900(2,local_6f0,"SkinChanger","CHARM_REFRESH_BINDING_REJECTED");
    DAT_180cd3ae8 = 0;
    DAT_180cd3af0 = 0;
    DAT_180cd3af8 = 0;
    DAT_180cd3b00 = 0;
    DAT_180cd3b08 = (undefined8 *)0x0;
  }
  else {
    DAT_180cd3ae8 = lVar5;
    DAT_180cd3af0 = lVar6;
    DAT_180cd3af8 = lVar7;
    DAT_180cd3b00 = lVar8;
    DAT_180cd3b08 = puVar3;
  }
}



