// FUN_1805f3df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f3df0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805f3df0(ushort *param_1,longlong param_2,longlong param_3,byte *param_4,longlong param_5)

{
  ushort *puVar1;
  ushort *puVar2;
  byte bVar3;
  undefined *puVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 auStack_198 [32];
  byte *local_178;
  longlong local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined4 local_158;
  uint local_148;
  undefined4 local_144;
  longlong local_140;
  byte *local_138;
  longlong local_130;
  longlong local_128;
  undefined *local_120;
  undefined8 local_118;
  longlong local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined1 local_e8 [32];
  longlong local_c8;
  uint local_c0;
  longlong *local_b8;
  longlong *local_b0;
  ulonglong local_a8;
  ushort *local_a0;
  ulonglong local_98;
  ushort *local_90;
  ulonglong local_88;
  ushort *local_80;
  undefined1 local_78 [16];
  ulonglong local_68;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  param_3 = param_3 + param_2;
  local_140 = *(longlong *)(param_1 + 0x2a6c);
  puVar2 = (ushort *)(param_4 + param_5);
  local_128 = *(longlong *)(param_1 + 0x2a0c);
  local_144 = *(undefined4 *)(param_1 + 0x2a36);
  pbVar12 = (byte *)(*(longlong *)(param_1 + 0x2a7c) + local_140);
  local_120 = *(undefined **)(param_1 + 0x2a10);
  local_118 = *(undefined8 *)(param_1 + 0x2a14);
  if (param_5 == 0) {
  }
  bVar3 = *param_4;
  uVar9 = (uint)bVar3;
  puVar1 = (ushort *)(param_4 + 1);
  local_138 = param_4;
  local_130 = local_140;
  local_110 = param_2;
  if (bVar3 == 0) {
    pbVar5 = (byte *)0x1;
  }
  else {
    uVar11 = (uint)bVar3;
    puVar10 = puVar1;
    if (0x7f < uVar11) {
      if (uVar11 == 0xff) {
        puVar10 = (ushort *)(param_4 + 3);
        if (puVar2 < puVar10) {
        }
        uVar9 = *puVar1 + 0x7f00;
      }
      else {
        if (puVar2 <= puVar1) {
        }
        uVar9 = (uVar11 - 0x80) * 0x100 + (uint)(byte)*puVar1;
        puVar10 = (ushort *)(param_4 + 2);
      }
    }
    if (puVar2 < puVar10 + 2) {
    }
    local_148 = (uint)(byte)*puVar10;
    pbVar5 = (byte *)((longlong)puVar10 + 1);
    local_160._0_4_ = 6;
    local_168 = &DAT_180689280;
    local_170 = (longlong)puVar2 - (longlong)pbVar5;
    local_178 = pbVar5;
    local_158 = local_144;
    uVar6 = FUN_1805efd50(param_1,(byte)*puVar10 >> 6,0x23,9);
    if (0xffffffffffffff88 < uVar6) {
    }
    pbVar5 = pbVar5 + uVar6;
    local_158 = local_144;
    local_170 = (longlong)puVar2 - (longlong)pbVar5;
    local_160._0_4_ = 5;
    local_168 = &DAT_180689420;
    local_178 = pbVar5;
    uVar6 = FUN_1805efd50(param_1 + 0x402,local_148 >> 4 & 3,0x1c,8);
    if (0xffffffffffffff88 < uVar6) {
    }
    pbVar5 = pbVar5 + uVar6;
    local_158 = local_144;
    local_170 = (longlong)puVar2 - (longlong)pbVar5;
    local_160 = CONCAT44(local_160._4_4_,6);
    local_168 = &DAT_1806893b0;
    local_178 = pbVar5;
    uVar6 = FUN_1805efd50(param_1 + 0x604,local_148 >> 2 & 3,0x34,9);
    if (0xffffffffffffff88 < uVar6) {
    }
    pbVar5 = pbVar5 + (uVar6 - (longlong)local_138);
    if ((byte *)0xffffffffffffff88 < pbVar5) {
    }
  }
  lVar8 = local_130;
  if (uVar9 != 0) {
    param_1[0x2a36] = 1;
    param_1[0x2a37] = 0;
    local_68 = (ulonglong)*(uint *)(param_1 + 0x2a20);
    local_78._0_8_ = *(ulonglong *)(param_1 + 0x2a1c) & 0xffffffff;
    local_78._8_4_ = (int)(*(ulonglong *)(param_1 + 0x2a1c) >> 0x20);
    local_78._12_4_ = 0;
    uVar6 = FUN_1805f1480(&local_c8,local_138 + (longlong)pbVar5,
                          (longlong)puVar2 - (longlong)(local_138 + (longlong)pbVar5));
    if (0xffffffffffffff88 < uVar6) {
    }
    local_a8 = ((ulonglong)(local_c8 << ((byte)local_c0 & 0x3f)) >> 1) >> (~(byte)*param_1 & 0x3f);
    local_c0 = local_c0 + *param_1;
    FUN_1805e9920(&local_c8);
    local_a0 = param_1 + 2;
    local_98 = ((ulonglong)(local_c8 << ((byte)local_c0 & 0x3f)) >> 1) >>
               (~(byte)param_1[0x402] & 0x3f);
    local_c0 = local_c0 + param_1[0x402];
    FUN_1805e9920(&local_c8);
    local_90 = param_1 + 0x404;
    local_88 = ((ulonglong)(local_c8 << ((byte)local_c0 & 0x3f)) >> 1) >>
               (~(byte)param_1[0x604] & 0x3f);
    local_c0 = local_c0 + param_1[0x604];
    FUN_1805e9920(&local_c8);
    puVar4 = local_120;
    lVar8 = local_128;
    local_80 = param_1 + 0x606;
    while (local_c0 < 0x41) {
      if (local_b8 < local_b0 + 1) {
        if (local_b8 != local_b0) {
          uVar11 = local_c0 >> 3;
          uVar6 = (ulonglong)uVar11;
          if ((longlong *)((longlong)local_b8 - uVar6) < local_b0) {
            uVar11 = (int)local_b8 - (int)local_b0;
            uVar6 = (ulonglong)uVar11;
          }
          local_c0 = local_c0 + uVar11 * -8;
          goto LAB_1805f417e;
        }
      }
      else {
        uVar6 = (ulonglong)(local_c0 >> 3);
        local_c0 = local_c0 & 7;
LAB_1805f417e:
        local_b8 = (longlong *)((longlong)local_b8 - uVar6);
        local_c8 = *local_b8;
      }
      if (uVar9 == 0) goto LAB_1805f41ef;
      uVar9 = uVar9 - 1;
      puVar7 = (undefined4 *)FUN_1805f37f0(local_e8,&local_c8);
      local_108 = *puVar7;
      uStack_104 = puVar7[1];
      uStack_100 = puVar7[2];
      uStack_fc = puVar7[3];
      local_f8 = *(undefined8 *)(puVar7 + 4);
      local_160 = local_118;
      local_168 = puVar4;
      local_170 = lVar8;
      local_178 = pbVar12;
      uVar6 = FUN_1805f4300(param_2,param_3,&local_108,&local_140);
      if (0xffffffffffffff88 < uVar6) {
      }
      param_2 = param_2 + uVar6;
    }
    if (uVar9 != 0) {
    }
LAB_1805f41ef:
    *(undefined4 *)(param_1 + 0x2a1c) = local_78._0_4_;
    *(undefined4 *)(param_1 + 0x2a1e) = local_78._8_4_;
    *(undefined4 *)(param_1 + 0x2a20) = (undefined4)local_68;
    lVar8 = local_140;
  }
  uVar6 = (longlong)pbVar12 - lVar8;
  if ((uVar6 <= (ulonglong)(param_3 - param_2)) && (uVar6 != 0)) {
    FUN_18063aed0(param_2,lVar8,uVar6);
  }
}



