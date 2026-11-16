// FUN_1805ed1a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ed1a0 */

ulonglong FUN_1805ed1a0(ushort *param_1,ulonglong param_2,longlong param_3,longlong param_4,
                       longlong param_5)

{
  ulonglong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  int local_res8 [2];
  ulonglong local_res10;
  ulonglong local_res18;
  longlong local_res20;
  longlong local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong local_d8;
  int local_d0;
  ulonglong local_b8;
  ushort *local_b0;
  ulonglong local_a8;
  ushort *local_a0;
  ulonglong local_98;
  ushort *local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  uVar1 = param_2 + param_3;
  local_118 = 0;
  local_res8[0] = 0;
  local_110 = *(undefined8 *)(param_1 + 0x340c);
  uVar7 = *(ulonglong *)(param_1 + 0x343c);
  uVar9 = *(longlong *)(param_1 + 0x3440) + uVar7;
  local_108 = *(undefined8 *)(param_1 + 0x3410);
  local_100 = *(undefined8 *)(param_1 + 0x3414);
  local_res20 = 0;
  local_res10 = param_2;
  local_res18 = uVar7;
  uVar6 = FUN_1805ec770(local_res8,&local_res20,&local_118,param_1,param_1 + 0xc04,param_1 + 0x802,
                        param_4,param_5,*(undefined4 *)(param_1 + 0x3438));
  iVar8 = local_res8[0];
  if (0xffffffffffffff88 < uVar6) {
    return uVar6;
  }
  if (local_res8[0] != 0) {
    local_80 = local_res20;
    local_78 = local_res20 + local_118;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 1;
    local_88 = 1;
    uVar6 = FUN_1805e97f0(&local_d8,uVar6 + param_4,(param_4 - (uVar6 + param_4)) + param_5);
    if (0xffffffffffffff88 < uVar6) {
      return 0xffffffffffffffec;
    }
    local_b8 = ((ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> 1) >> (~(byte)*param_1 & 0x3f);
    local_d0 = local_d0 + (uint)*param_1;
    FUN_1805e9920(&local_d8);
    local_b0 = param_1 + 2;
    local_a8 = ((ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> 1) >>
               (~(byte)param_1[0x802] & 0x3f);
    local_d0 = local_d0 + (uint)param_1[0x802];
    FUN_1805e9920(&local_d8);
    local_a0 = param_1 + 0x804;
    local_98 = ((ulonglong)(local_d8 << ((byte)local_d0 & 0x3f)) >> 1) >>
               (~(byte)param_1[0xc04] & 0x3f);
    local_d0 = local_d0 + (uint)param_1[0xc04];
    FUN_1805e9920(&local_d8);
    local_90 = param_1 + 0xc06;
    iVar5 = FUN_1805e9920(&local_d8);
    uVar4 = local_100;
    uVar3 = local_108;
    uVar2 = local_110;
    if (iVar5 < 3) {
      do {
        if (iVar8 == 0) {
          uVar7 = local_res18;
          goto LAB_1805ed427;
        }
        iVar8 = iVar8 + -1;
        FUN_1805ecf40(&local_f8,&local_d8);
        local_68 = (undefined4)local_f8;
        uStack_64 = local_f8._4_4_;
        uStack_60 = (undefined4)uStack_f0;
        uStack_5c = uStack_f0._4_4_;
        local_58 = local_e8;
        uVar7 = FUN_1805ed9c0(param_2,uVar1,&local_68,&local_res18,uVar9,uVar2,uVar3,uVar4);
        if (0xffffffffffffff88 < uVar7) {
          return uVar7;
        }
        param_2 = param_2 + uVar7;
        iVar5 = FUN_1805e9920(&local_d8);
      } while (iVar5 < 3);
      uVar7 = local_res18;
    }
    if (iVar8 != 0) {
      return 0xffffffffffffffec;
    }
  }
LAB_1805ed427:
  if (uVar9 < uVar7) {
    return 0xffffffffffffffec;
  }
  uVar6 = (uVar9 - uVar7) + param_2;
  if (uVar1 < uVar6) {
    return 0xffffffffffffffba;
  }
  if (uVar9 - uVar7 != 0) {
    FUN_18063aed0(param_2,uVar7);
    param_2 = uVar6;
  }
  return param_2 - local_res10;
}



