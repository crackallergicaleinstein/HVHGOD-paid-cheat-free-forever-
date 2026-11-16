// FUN_18022c5f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022c5f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022c5f0(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 in_ZMM1 [64];
  undefined1 auVar14 [64];
  undefined1 in_ZMM2 [64];
  undefined1 auStack_728 [32];
  undefined **local_708;
  undefined8 *local_700;
  char local_6f8;
  uint local_6f4;
  uint local_6f0;
  undefined8 *local_6e8;
  undefined8 *local_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined4 local_6a8;
  undefined4 local_6a4;
  undefined4 local_6a0;
  undefined1 local_69c [4];
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 local_658 [4];
  undefined8 local_638;
  undefined8 uStack_630;
  undefined1 auStack_628 [16];
  CLIENT_ID *local_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined1 local_5d8 [16];
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  undefined1 local_5b8 [16];
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined1 local_598 [1376];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_728;
  local_638 = 0x8d00000048;
  uStack_630 = 0xffffffff00000015;
  auStack_628._8_8_ = 0x48ffffffff;
  auStack_628._0_8_ = 0xffffffffffffffff;
  local_618 = (CLIENT_ID *)0xc100000081;
  uStack_610 = 0xffffffffffffffff;
  uStack_608 = 0xffffffffffffffff;
  uStack_600 = 0x3300000045;
  local_5f8 = 0x41000000c9;
  uStack_5f0 = 0x5e000000b8;
  uStack_5e8 = 0xd700000025;
  uStack_5e0 = 0xe8000000c8;
  local_5d8 = vpcmpeqd_avx(in_ZMM2._0_16_,in_ZMM2._0_16_);
  local_6f0 = 0;
  local_6e8 = &local_638;
  local_5c8 = 0xff00000033;
  uStack_5c0 = 0x86000000f7;
  local_6e0 = (undefined8 *)local_598;
  local_5a8 = 0xff000000ff;
  uStack_5a0 = 0x7f000000ff;
  auVar14 = ZEXT1664(in_ZMM1._0_16_);
  local_5b8 = local_5d8;
  lVar8 = FUN_180219910(&local_6e8);
  local_638 = 0x8b00000048;
  uStack_630 = 0xe8000000cb;
  local_618 = (CLIENT_ID *)0x46000000c7;
  uStack_610 = 0xff0000000c;
  uStack_608 = 0xff000000ff;
  uStack_600 = 0x48000000ff;
  local_6e8 = &local_638;
  local_5f8 = 0xd0000008b;
  uStack_5f0 = 0xffffffffffffffff;
  uStack_5e8 = 0xffffffffffffffff;
  uStack_5e0 = 0x560000008b;
  auStack_628 = vpcmpeqd_avx(auVar14._0_16_,auVar14._0_16_);
  local_6e0 = &local_5c8;
  local_5d8._8_8_ = 0x250000008d;
  local_5d8._0_8_ = 0x4c0000000c;
  lVar9 = FUN_180219910(&local_6e8);
  local_638 = 0x8d00000048;
  uStack_630 = 0x2400000054;
  auStack_628._0_8_ = 0xc700000040;
  auStack_628._8_8_ = 0x2400000044;
  local_5d8._0_4_ = 0x84;
  local_6e8 = &local_638;
  local_618 = &ClientId;
  uStack_610 = 0xff000000ff;
  uStack_608 = 0x48000000ff;
  uStack_600 = 0xcb0000008b;
  local_6e0 = (undefined8 *)(local_5d8 + 4);
  local_5f8 = 0xffffffff000000e8;
  uStack_5f0 = 0xffffffffffffffff;
  uStack_5e8 = 0x84ffffffff;
  uStack_5e0 = 0xf000000c0;
  lVar10 = FUN_180219910(&local_6e8);
  local_638 = 0x8d00000048;
  uStack_630 = 0x2400000054;
  auStack_628._8_8_ = 0x2400000044;
  auStack_628._0_8_ = 0xc700000068;
  local_5d8._0_4_ = 0x84;
  local_6e8 = &local_638;
  local_618 = (CLIENT_ID *)&LastErrorValue;
  uStack_610 = 0xff000000ff;
  uStack_608 = 0x49000000ff;
  uStack_600 = 0xce0000008b;
  local_6e0 = (undefined8 *)(local_5d8 + 4);
  local_5f8 = 0xffffffff000000e8;
  uStack_5f0 = 0xffffffffffffffff;
  uStack_5e8 = 0x84ffffffff;
  uStack_5e0 = 0xf000000c0;
  lVar11 = FUN_180219910(&local_6e8);
  if (lVar8 == 0) {
    local_6e8 = (undefined8 *)0x0;
  }
  else {
    local_6e8 = (undefined8 *)FUN_180219870(lVar8,3,7);
  }
  if (lVar9 == 0) {
    local_6d8 = 0;
  }
  else {
    local_6d8 = FUN_180219870(lVar9 + 3,1,5);
  }
  uVar3 = local_6d8;
  if (lVar10 == 0) {
    uStack_6d0 = 0;
  }
  else {
    uStack_6d0 = FUN_180219870(lVar10 + 0x10,1,5);
  }
  uVar4 = uStack_6d0;
  if (lVar11 == 0) {
    uStack_6c8 = 0;
  }
  else {
    uStack_6c8 = FUN_180219870(lVar11 + 0x10,1,5);
  }
  uVar5 = uStack_6c8;
  if (lVar8 == 0) {
    uVar13 = 0;
    uStack_6c0 = 0;
  }
  else {
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (lVar8 + 10 == 0) {
      bVar2 = false;
      uVar13 = local_6f0;
    }
    else {
      local_6f4 = 0;
      cVar6 = FUN_1804514f0(&local_6f4,lVar8 + 10,4);
      if (cVar6 == '\0') {
        bVar2 = false;
        uVar13 = local_6f0;
      }
      else {
        bVar2 = true;
        uVar13 = local_6f4;
      }
    }
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if (!bVar2) {
      uVar13 = 0;
    }
    uStack_6c0 = CONCAT44(uStack_6c0._4_4_,uVar13);
    lVar9 = FUN_18017ea70();
    *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
    if (lVar8 + 0x13 == 0) {
      local_6f8 = '\0';
      uVar7 = local_6f0;
    }
    else {
      local_6f4 = 0;
      cVar6 = FUN_1804514f0(&local_6f4,lVar8 + 0x13,4);
      if (cVar6 == '\0') {
        local_6f8 = '\0';
        uVar7 = local_6f0;
      }
      else {
        local_6f8 = '\x01';
        uVar7 = local_6f4;
      }
    }
    lVar9 = FUN_18017ea70();
    if (*(int *)(lVar9 + 4) != 0) {
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
    }
    if (local_6f8 == '\0') {
      uVar7 = 0;
    }
    uStack_6c0 = CONCAT44(uVar7,(undefined4)uStack_6c0);
  }
  if (local_6e8 != (undefined8 *)0x0) {
    plVar12 = (longlong *)FUN_180454280(local_658,local_6e8,0x10);
    local_6f0 = 1;
    plVar1 = plVar12 + 2;
    if (0xf < (ulonglong)plVar12[3]) {
      plVar12 = (longlong *)*plVar12;
    }
    if (((*plVar1 == 8) && (*plVar12 == 0x6b61727474617473)) && (uVar13 - 0x1000 < 0x3001)) {
      uVar7 = uVar13 & 0x80000007;
      if ((int)uVar7 < 0) {
        uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
      }
      if (uVar7 == 0) {
        lVar9 = FUN_18017ea70();
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
        if (lVar8 + 0x20 == 0) {
          bVar2 = false;
          uVar7 = local_6f0;
        }
        else {
          local_6f4 = 0;
          cVar6 = FUN_1804514f0(&local_6f4,lVar8 + 0x20,4);
          if (cVar6 == '\0') {
            bVar2 = false;
            uVar7 = local_6f0;
          }
          else {
            bVar2 = true;
            uVar7 = local_6f4;
          }
        }
        lVar8 = FUN_18017ea70();
        if (*(int *)(lVar8 + 4) != 0) {
          *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
        }
        if (!bVar2) {
          uVar7 = 0;
        }
        if (uVar7 == uVar13 + 4) {
          local_6e8 = &local_6b8;
          local_6a8 = 0x48;
          local_6e0 = (undefined8 *)local_69c;
          local_6a4 = 0x85;
          local_6b8 = 0x8300000048;
          uStack_6b0 = 0x28000000ec;
          local_6a0 = 0xc9;
          cVar6 = FUN_1802197b0(uVar3,&local_6e8);
          if (cVar6 != '\0') {
            local_6e8 = &local_698;
            local_6e0 = &local_678;
            local_698 = 0x5300000040;
            uStack_690 = 0x8300000048;
            uStack_688 = 0x30000000ec;
            uStack_680 = 0x50000008b;
            cVar6 = FUN_1802197b0(uVar4,&local_6e8);
            if (cVar6 != '\0') {
              local_6e8 = &local_678;
              local_6e0 = local_658;
              local_678 = 0x5300000040;
              uStack_670 = 0x8300000048;
              uStack_668 = 0x30000000ec;
              uStack_660 = 0x50000008b;
              cVar6 = FUN_1802197b0(uVar5,&local_6e8);
              if (cVar6 != '\0') {
                bVar2 = false;
                goto LAB_18022cb83;
              }
            }
          }
        }
      }
    }
  }
  bVar2 = true;
LAB_18022cb83:
  if ((local_6f0 & 1) != 0) {
    FUN_18015c010(local_658);
  }
  if (bVar2) {
    FUN_18063ab10(&local_638,0,0x600);
    FUN_18015ad60(&local_638,0x600,0xffffffffffffffff,"calls=0");
    local_708 = &PTR_180700558;
    if ((char)local_638 != '\0') {
      local_708 = (undefined **)&DAT_1806bcfc0;
    }
    local_700 = &local_638;
    FUN_1800f6900(2);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
  }
  else {
    *param_2 = local_6d8;
    param_2[1] = uStack_6d0;
    param_2[2] = uStack_6c8;
    param_2[3] = uStack_6c0;
  }
}



