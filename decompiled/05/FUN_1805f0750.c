// FUN_1805f0750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f0750 */

/* WARNING: Type propagation algorithm not settling */

byte * FUN_1805f0750(ushort *param_1,byte *param_2,longlong param_3,byte *param_4,longlong param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  uint uVar12;
  ushort *puVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong local_130;
  byte *local_128;
  longlong local_118;
  uint local_110;
  longlong *local_108;
  longlong *local_100;
  ulonglong local_f8;
  ushort *local_f0;
  ulonglong local_e8;
  ushort *local_e0;
  ulonglong local_d8;
  ushort *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  byte *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  byte *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  
  local_128 = param_2 + param_3;
  uVar10 = *(ulonglong *)(param_1 + 0x2a30);
  uVar4 = *(undefined4 *)(param_1 + 0x2a2c);
  uVar15 = *(longlong *)(param_1 + 0x2a34) + uVar10;
  puVar2 = (ushort *)(param_4 + param_5);
  local_a0 = *(undefined8 *)(param_1 + 0x2a0c);
  local_98 = *(undefined8 *)(param_1 + 0x2a10);
  local_90 = *(undefined8 *)(param_1 + 0x2a14);
  if (param_5 == 0) {
    return (byte *)0xffffffffffffffb8;
  }
  bVar3 = *param_4;
  uVar12 = (uint)bVar3;
  puVar1 = (ushort *)(param_4 + 1);
  local_130 = uVar10;
  local_a8 = param_4;
  local_88 = param_2;
  if (bVar3 == 0) {
    uVar12 = 0;
    pbVar8 = (byte *)0x1;
  }
  else {
    uVar14 = (uint)bVar3;
    puVar13 = puVar1;
    if (0x7f < uVar14) {
      if (uVar14 == 0xff) {
        puVar13 = (ushort *)(param_4 + 3);
        if (puVar2 < puVar13) {
          return (byte *)0xffffffffffffffb8;
        }
        uVar12 = *puVar1 + 0x7f00;
      }
      else {
        if (puVar2 <= puVar1) {
          return (byte *)0xffffffffffffffb8;
        }
        uVar12 = (uVar14 - 0x80) * 0x100 + (uint)(byte)*puVar1;
        puVar13 = (ushort *)(param_4 + 2);
      }
    }
    if (puVar2 < puVar13 + 2) {
      return (byte *)0xffffffffffffffb8;
    }
    bVar3 = (byte)*puVar13;
    pbVar8 = (byte *)((longlong)puVar13 + 1);
    uVar9 = FUN_1805efd50(param_1,bVar3 >> 6,0x23,9,pbVar8,(longlong)puVar2 - (longlong)pbVar8,
                          &DAT_180688e20,6,uVar4);
    if (0xffffffffffffff88 < uVar9) {
      return (byte *)0xffffffffffffffec;
    }
    pbVar8 = pbVar8 + uVar9;
    uVar9 = FUN_1805efd50(param_1 + 0x402,bVar3 >> 4 & 3,0x1c,8,pbVar8,
                          (longlong)puVar2 - (longlong)pbVar8,&DAT_180688fc0,5,uVar4);
    if (0xffffffffffffff88 < uVar9) {
      return (byte *)0xffffffffffffffec;
    }
    pbVar8 = pbVar8 + uVar9;
    uVar9 = FUN_1805efd50(param_1 + 0x604,bVar3 >> 2 & 3,0x34,9,pbVar8,
                          (longlong)puVar2 - (longlong)pbVar8,&DAT_180688f50,6,uVar4);
    if (0xffffffffffffff88 < uVar9) {
      return (byte *)0xffffffffffffffec;
    }
    pbVar8 = pbVar8 + (uVar9 - (longlong)local_a8);
    if ((byte *)0xffffffffffffff88 < pbVar8) {
      return pbVar8;
    }
  }
  param_1[0x2a2c] = 0;
  param_1[0x2a2d] = 0;
  if (uVar12 == 0) {
    pbVar8 = local_128;
  }
  else {
    local_80 = 0;
    uStack_78 = 0;
    local_70 = 1;
    local_c8 = 1;
    local_c0 = 1;
    local_b8 = 1;
    uVar10 = FUN_1805edea0(&local_118,local_a8 + (longlong)pbVar8,
                           (longlong)puVar2 - (longlong)(local_a8 + (longlong)pbVar8));
    if (0xffffffffffffff88 < uVar10) {
      return (byte *)0xffffffffffffffec;
    }
    local_f8 = ((ulonglong)(local_118 << ((byte)local_110 & 0x3f)) >> 1) >> (~(byte)*param_1 & 0x3f)
    ;
    local_110 = local_110 + *param_1;
    FUN_1805e9920(&local_118);
    local_f0 = param_1 + 2;
    local_e8 = ((ulonglong)(local_118 << ((byte)local_110 & 0x3f)) >> 1) >>
               (~(byte)param_1[0x402] & 0x3f);
    local_110 = local_110 + param_1[0x402];
    FUN_1805e9920(&local_118);
    local_e0 = param_1 + 0x404;
    local_d8 = ((ulonglong)(local_118 << ((byte)local_110 & 0x3f)) >> 1) >>
               (~(byte)param_1[0x604] & 0x3f);
    local_110 = local_110 + param_1[0x604];
    FUN_1805e9920(&local_118);
    uVar7 = local_90;
    uVar6 = local_98;
    uVar5 = local_a0;
    pbVar8 = local_128;
    local_d0 = param_1 + 0x606;
    while (local_110 < 0x41) {
      if (local_108 < local_100 + 1) {
        if (local_108 != local_100) {
          uVar14 = local_110 >> 3;
          uVar10 = (ulonglong)uVar14;
          if ((longlong *)((longlong)local_108 - uVar10) < local_100) {
            uVar14 = (int)local_108 - (int)local_100;
            uVar10 = (ulonglong)uVar14;
          }
          local_110 = local_110 + uVar14 * -8;
          goto LAB_1805f0aef;
        }
      }
      else {
        uVar10 = (ulonglong)(local_110 >> 3);
        local_110 = local_110 & 7;
LAB_1805f0aef:
        local_108 = (longlong *)((longlong)local_108 - uVar10);
        local_118 = *local_108;
      }
      if (uVar12 == 0) goto LAB_1805f0b60;
      uVar12 = uVar12 - 1;
      FUN_1805f0320(&local_80,&local_118);
      local_68 = (undefined4)local_80;
      uStack_64 = local_80._4_4_;
      uStack_60 = (undefined4)uStack_78;
      uStack_5c = uStack_78._4_4_;
      local_58 = local_70;
      pbVar11 = (byte *)FUN_1805f0f10(param_2,pbVar8,&local_68,&local_130,uVar15,uVar5,uVar6,uVar7);
      if ((byte *)0xffffffffffffff88 < pbVar11) {
        return pbVar11;
      }
      param_2 = param_2 + (longlong)pbVar11;
    }
    if (uVar12 != 0) {
      return (byte *)0xffffffffffffffec;
    }
LAB_1805f0b60:
    uVar10 = local_130;
  }
  if (uVar15 < uVar10) {
    return (byte *)0xffffffffffffffec;
  }
  if (pbVar8 < param_2 + (uVar15 - uVar10)) {
    return (byte *)0xffffffffffffffba;
  }
  if (uVar15 - uVar10 != 0) {
    FUN_18063aed0(param_2,uVar10);
    param_2 = param_2 + (uVar15 - uVar10);
  }
  return param_2 + -(longlong)local_88;
}



