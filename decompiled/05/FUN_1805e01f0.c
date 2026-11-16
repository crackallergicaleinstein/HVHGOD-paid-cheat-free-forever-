// FUN_1805e01f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e01f0 */

ulonglong FUN_1805e01f0(undefined2 *param_1,ulonglong param_2,ushort *param_3,ulonglong param_4,
                       longlong param_5)

{
  undefined2 *puVar1;
  longlong lVar2;
  undefined2 *puVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined2 *puVar15;
  byte bVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  bool bVar22;
  longlong *local_170;
  int local_168;
  longlong *local_160;
  longlong *local_158;
  longlong *local_148;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  longlong local_128;
  int local_108;
  int local_104;
  undefined2 *local_f8;
  undefined2 *local_f0;
  longlong local_e8;
  uint local_e0;
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong local_c0;
  uint local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong local_98;
  uint local_90;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  uint local_68;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  undefined2 *local_48;
  
  if ((param_4 < 10) || (param_2 < 6)) {
    return 0xffffffffffffffec;
  }
  puVar1 = (undefined2 *)((longlong)param_1 + param_2);
  uVar4 = *param_3;
  uVar19 = (ulonglong)param_3[1];
  bVar16 = *(byte *)(param_5 + 2);
  uVar21 = (ulonglong)param_3[2];
  uVar6 = (((param_4 - uVar21) - uVar19) - (ulonglong)uVar4) - 6;
  lVar20 = (longlong)(param_3 + 3) + (ulonglong)uVar4;
  lVar2 = lVar20 + uVar19;
  uVar7 = param_2 + 3 >> 2;
  puVar15 = (undefined2 *)(uVar7 + (longlong)param_1);
  puVar3 = (undefined2 *)((longlong)puVar15 + uVar7);
  puVar8 = (undefined2 *)(uVar7 + (longlong)puVar3);
  if ((param_4 < uVar6) || (puVar1 < puVar8)) {
    return 0xffffffffffffffec;
  }
  lVar18 = param_5;
  local_48 = puVar8;
  uVar7 = FUN_1805ddbd0(&local_e8,param_3 + 3,uVar4);
  if (0xffffffffffffff88 < uVar7) {
    return uVar7;
  }
  uVar7 = FUN_1805ddbd0(&local_98,lVar20,uVar19);
  if (0xffffffffffffff88 < uVar7) {
    return uVar7;
  }
  uVar7 = FUN_1805ddbd0(&local_70,lVar2,uVar21);
  if (0xffffffffffffff88 < uVar7) {
    return uVar7;
  }
  uVar6 = FUN_1805ddbd0(&local_c0,uVar21 + lVar2,uVar6);
  if (0xffffffffffffff88 < uVar6) {
    return uVar6;
  }
  if (((ulonglong)((longlong)puVar1 - (longlong)puVar8) < 8) ||
     ((undefined2 *)((longlong)puVar1 - 7U) <= puVar8)) {
    local_138 = local_98;
    local_130 = local_70;
    local_158 = local_60;
    local_140 = local_c0;
    local_128 = local_e8;
    local_160 = local_88;
    local_148 = local_b0;
    local_170 = local_d8;
    local_f8 = puVar15;
    local_f0 = puVar3;
  }
  else {
    bVar9 = -bVar16 & 0x3f;
    local_170 = local_d8;
    local_160 = local_88;
    local_158 = local_60;
    local_130 = local_70;
    local_148 = local_b0;
    local_140 = local_c0;
    local_128 = local_e8;
    local_138 = local_98;
    local_f8 = puVar15;
    local_f0 = puVar3;
    while( true ) {
      uVar6 = (ulonglong)(local_128 << ((byte)local_e0 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *param_1 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      iVar12 = *(byte *)(lVar20 + 6) + local_e0;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar20 + 7) + (longlong)param_1);
      uVar6 = (ulonglong)(local_138 << ((byte)local_90 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_f8 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      iVar17 = *(byte *)(lVar20 + 6) + local_90;
      local_f8 = (undefined2 *)((ulonglong)*(byte *)(lVar20 + 7) + (longlong)local_f8);
      uVar6 = (ulonglong)(local_130 << ((byte)local_68 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_f0 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      local_f0 = (undefined2 *)((longlong)local_f0 + (ulonglong)*(byte *)(lVar20 + 7));
      iVar13 = *(byte *)(lVar20 + 6) + local_68;
      uVar6 = (ulonglong)(local_140 << ((byte)local_b8 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_48 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      local_48 = (undefined2 *)((longlong)local_48 + (ulonglong)*(byte *)(lVar20 + 7));
      iVar14 = *(byte *)(lVar20 + 6) + local_b8;
      uVar6 = (ulonglong)(local_128 << ((byte)iVar12 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *param_1 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      iVar12 = iVar12 + (uint)*(byte *)(lVar20 + 6);
      param_1 = (undefined2 *)((longlong)param_1 + (ulonglong)*(byte *)(lVar20 + 7));
      uVar6 = (ulonglong)(local_138 << ((byte)iVar17 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_f8 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      iVar17 = iVar17 + (uint)*(byte *)(lVar20 + 6);
      local_f8 = (undefined2 *)((longlong)local_f8 + (ulonglong)*(byte *)(lVar20 + 7));
      uVar6 = (ulonglong)(local_130 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_f0 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      iVar13 = iVar13 + (uint)*(byte *)(lVar20 + 6);
      local_f0 = (undefined2 *)((longlong)local_f0 + (ulonglong)*(byte *)(lVar20 + 7));
      uVar6 = (ulonglong)(local_140 << ((byte)iVar14 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_48 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      iVar14 = iVar14 + (uint)*(byte *)(lVar20 + 6);
      local_48 = (undefined2 *)((longlong)local_48 + (ulonglong)*(byte *)(lVar20 + 7));
      uVar6 = (ulonglong)(local_128 << ((byte)iVar12 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *param_1 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      iVar12 = iVar12 + (uint)*(byte *)(lVar20 + 6);
      param_1 = (undefined2 *)((longlong)param_1 + (ulonglong)*(byte *)(lVar20 + 7));
      uVar6 = (ulonglong)(local_138 << ((byte)iVar17 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_f8 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      iVar17 = iVar17 + (uint)*(byte *)(lVar20 + 6);
      local_f8 = (undefined2 *)((longlong)local_f8 + (ulonglong)*(byte *)(lVar20 + 7));
      uVar6 = (ulonglong)(local_130 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_f0 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      iVar13 = iVar13 + (uint)*(byte *)(lVar20 + 6);
      local_f0 = (undefined2 *)((longlong)local_f0 + (ulonglong)*(byte *)(lVar20 + 7));
      uVar6 = (ulonglong)(local_140 << ((byte)iVar14 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_48 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      iVar14 = iVar14 + (uint)*(byte *)(lVar20 + 6);
      local_48 = (undefined2 *)((longlong)local_48 + (ulonglong)*(byte *)(lVar20 + 7));
      uVar6 = (ulonglong)(local_128 << ((byte)iVar12 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *param_1 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      uVar5 = (uint)*(byte *)(lVar20 + 6) + iVar12;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar20 + 7) + (longlong)param_1);
      uVar6 = (ulonglong)(local_138 << ((byte)iVar17 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_f8 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      local_f8 = (undefined2 *)((ulonglong)*(byte *)(lVar20 + 7) + (longlong)local_f8);
      local_90 = (uint)*(byte *)(lVar20 + 6) + iVar17;
      uVar6 = (ulonglong)(local_130 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_f0 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      local_f0 = (undefined2 *)((ulonglong)*(byte *)(lVar20 + 7) + (longlong)local_f0);
      local_68 = (uint)*(byte *)(lVar20 + 6) + iVar13;
      uVar6 = (ulonglong)(local_140 << ((byte)iVar14 & 0x3f)) >> bVar9;
      lVar20 = lVar18 + uVar6 * 4;
      *local_48 = *(undefined2 *)(lVar18 + 4 + uVar6 * 4);
      local_b8 = (uint)*(byte *)(lVar20 + 6) + iVar14;
      local_48 = (undefined2 *)((ulonglong)*(byte *)(lVar20 + 7) + (longlong)local_48);
      if (local_170 < local_c8) {
        local_168 = 3;
        local_e0 = uVar5;
      }
      else {
        local_e0 = uVar5 & 7;
        local_170 = (longlong *)((longlong)local_170 - (ulonglong)(uVar5 >> 3));
        local_168 = 0;
        local_128 = *local_170;
      }
      if (local_160 < local_78) {
        local_104 = 3;
      }
      else {
        local_160 = (longlong *)((longlong)local_160 - (ulonglong)(local_90 >> 3));
        local_104 = 0;
        local_90 = local_90 & 7;
        local_138 = *local_160;
      }
      if (local_158 < local_50) {
        local_108 = 3;
      }
      else {
        local_158 = (longlong *)((longlong)local_158 - (ulonglong)(local_68 >> 3));
        local_108 = 0;
        local_68 = local_68 & 7;
        local_130 = *local_158;
      }
      if (local_148 < local_a0) {
        iVar12 = 3;
      }
      else {
        iVar12 = 0;
        local_148 = (longlong *)((longlong)local_148 - (ulonglong)(local_b8 >> 3));
        local_b8 = local_b8 & 7;
        local_140 = *local_148;
      }
      if (local_168 != 0 ||
          ((local_108 != 0 || ((undefined2 *)((longlong)puVar1 - 7U) <= local_48 || iVar12 != 0)) ||
          local_104 != 0)) break;
      lVar18 = param_5;
    }
  }
  if (puVar15 < param_1) {
    return 0xffffffffffffffec;
  }
  if (puVar3 < local_f8) {
    return 0xffffffffffffffec;
  }
  if (puVar8 < local_f0) {
    return 0xffffffffffffffec;
  }
  iVar12 = (int)local_d0;
  if (7 < (ulonglong)((longlong)puVar15 - (longlong)param_1)) {
    if (0xb < bVar16) {
      lVar20 = local_128;
      do {
        if (local_e0 < 0x41) {
          if (local_170 < local_c8) {
            if (local_170 == local_d0) {
              uVar5 = 2 - (local_e0 < 0x40);
              goto LAB_1805e0add;
            }
            uVar6 = (ulonglong)(local_e0 >> 3);
            bVar22 = (longlong *)((longlong)local_170 - uVar6) < local_d0;
            if (bVar22) {
              uVar6 = (ulonglong)(uint)((int)local_170 - iVar12);
            }
            uVar5 = (uint)bVar22;
            local_e0 = local_e0 + (int)uVar6 * -8;
          }
          else {
            uVar6 = (ulonglong)(local_e0 >> 3);
            uVar5 = 0;
            local_e0 = local_e0 & 7;
          }
          local_170 = (longlong *)((longlong)local_170 - uVar6);
          lVar20 = *local_170;
          local_128 = lVar20;
        }
        else {
          local_170 = (longlong *)&DAT_1806877f0;
          uVar5 = 3;
        }
LAB_1805e0add:
        if (uVar5 != 0 || (undefined2 *)((longlong)puVar15 - 7U) <= param_1) goto LAB_1805e0c5e;
        bVar9 = -bVar16 & 0x3f;
        uVar6 = (ulonglong)(lVar20 << ((byte)local_e0 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *param_1 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = *(byte *)(lVar2 + 6) + local_e0;
        param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)param_1);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *param_1 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)param_1);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *param_1 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)param_1);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *param_1 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        local_e0 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)param_1);
      } while( true );
    }
    lVar20 = local_128;
    do {
      if (local_e0 < 0x41) {
        if (local_170 < local_c8) {
          if (local_170 == local_d0) {
            uVar5 = 2 - (local_e0 < 0x40);
            goto LAB_1805e0949;
          }
          uVar6 = (ulonglong)(local_e0 >> 3);
          bVar22 = (longlong *)((longlong)local_170 - uVar6) < local_d0;
          if (bVar22) {
            uVar6 = (ulonglong)(uint)((int)local_170 - iVar12);
          }
          uVar5 = (uint)bVar22;
          local_e0 = local_e0 + (int)uVar6 * -8;
        }
        else {
          uVar6 = (ulonglong)(local_e0 >> 3);
          uVar5 = 0;
          local_e0 = local_e0 & 7;
        }
        local_170 = (longlong *)((longlong)local_170 - uVar6);
        lVar20 = *local_170;
        local_128 = lVar20;
      }
      else {
        local_170 = (longlong *)&DAT_1806877f0;
        uVar5 = 3;
      }
LAB_1805e0949:
      if (uVar5 != 0 || (undefined2 *)((longlong)puVar15 - 9U) <= param_1) goto LAB_1805e0c5e;
      bVar9 = -bVar16 & 0x3f;
      uVar6 = (ulonglong)(lVar20 << ((byte)local_e0 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *param_1 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = *(byte *)(lVar2 + 6) + local_e0;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)param_1);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *param_1 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)param_1);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *param_1 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)param_1);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *param_1 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)param_1);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *param_1 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      local_e0 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      param_1 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)param_1);
    } while( true );
  }
  if (local_e0 < 0x41) {
    if (local_170 < local_c8) {
      if (local_170 != local_d0) {
        uVar6 = (ulonglong)(local_e0 >> 3);
        if ((longlong *)((longlong)local_170 - uVar6) < local_d0) {
          uVar6 = (ulonglong)(uint)((int)local_170 - iVar12);
        }
        local_170 = (longlong *)((longlong)local_170 - uVar6);
        local_128 = *local_170;
        local_e0 = local_e0 + (int)uVar6 * -8;
      }
    }
    else {
      local_170 = (longlong *)((longlong)local_170 - (ulonglong)(local_e0 >> 3));
      local_e0 = local_e0 & 7;
      local_128 = *local_170;
    }
  }
  else {
    local_170 = (longlong *)&DAT_1806877f0;
  }
LAB_1805e0c5e:
  if (1 < (ulonglong)((longlong)puVar15 - (longlong)param_1)) {
    do {
      if (local_e0 < 0x41) {
        if (local_170 < local_c8) {
          if (local_170 == local_d0) {
            uVar5 = 2 - (local_e0 < 0x40);
            goto LAB_1805e0d10;
          }
          uVar6 = (ulonglong)(local_e0 >> 3);
          bVar22 = local_d0 <= (longlong *)((longlong)local_170 - uVar6);
          if (!bVar22) {
            uVar6 = (ulonglong)(uint)((int)local_170 - iVar12);
          }
          uVar5 = (uint)!bVar22;
          local_e0 = local_e0 + (int)uVar6 * -8;
        }
        else {
          uVar6 = (ulonglong)(local_e0 >> 3);
          uVar5 = 0;
          local_e0 = local_e0 & 7;
        }
        local_170 = (longlong *)((longlong)local_170 - uVar6);
        local_128 = *local_170;
      }
      else {
        local_170 = (longlong *)&DAT_1806877f0;
        uVar5 = 3;
      }
LAB_1805e0d10:
      if (uVar5 != 0 || puVar15 + -1 < param_1) goto joined_r0x0001805e0d73;
      uVar6 = (ulonglong)(local_128 << ((byte)local_e0 & 0x3f)) >> (-bVar16 & 0x3f);
      lVar20 = param_5 + uVar6 * 4;
      *param_1 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      local_e0 = local_e0 + *(byte *)(lVar20 + 6);
      param_1 = (undefined2 *)((longlong)param_1 + (ulonglong)*(byte *)(lVar20 + 7));
    } while( true );
  }
LAB_1805e0dba:
  if (param_1 < puVar15) {
    uVar6 = (ulonglong)(local_128 << ((byte)local_e0 & 0x3f)) >> (-bVar16 & 0x3f);
    *(undefined1 *)param_1 = *(undefined1 *)(param_5 + 4 + uVar6 * 4);
    if (*(char *)(param_5 + 7 + uVar6 * 4) == '\x01') {
      local_e0 = local_e0 + *(byte *)(param_5 + 6 + uVar6 * 4);
    }
    else if ((local_e0 < 0x40) &&
            (local_e0 = local_e0 + *(byte *)(param_5 + 6 + uVar6 * 4), 0x40 < local_e0)) {
      local_e0 = 0x40;
    }
  }
  iVar12 = (int)local_80;
  if (7 < (ulonglong)((longlong)puVar3 - (longlong)local_f8)) {
    if (0xb < bVar16) {
      lVar20 = local_138;
      do {
        if (local_90 < 0x41) {
          if (local_160 < local_78) {
            if (local_160 == local_80) {
              uVar5 = 2 - (local_90 < 0x40);
              goto LAB_1805e1045;
            }
            uVar6 = (ulonglong)(local_90 >> 3);
            bVar22 = (longlong *)((longlong)local_160 - uVar6) < local_80;
            if (bVar22) {
              uVar6 = (ulonglong)(uint)((int)local_160 - iVar12);
            }
            uVar5 = (uint)bVar22;
            local_90 = local_90 + (int)uVar6 * -8;
          }
          else {
            uVar6 = (ulonglong)(local_90 >> 3);
            uVar5 = 0;
            local_90 = local_90 & 7;
          }
          local_160 = (longlong *)((longlong)local_160 - uVar6);
          lVar20 = *local_160;
          local_138 = lVar20;
        }
        else {
          local_160 = (longlong *)&DAT_1806877f0;
          uVar5 = 3;
        }
LAB_1805e1045:
        if (uVar5 != 0 || (undefined2 *)((longlong)puVar3 - 7U) <= local_f8) goto LAB_1805e11a7;
        bVar9 = -bVar16 & 0x3f;
        uVar6 = (ulonglong)(lVar20 << ((byte)local_90 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_f8 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = *(byte *)(lVar2 + 6) + local_90;
        local_f8 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f8);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_f8 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        local_f8 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f8);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_f8 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        local_f8 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f8);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_f8 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        local_90 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        local_f8 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f8);
      } while( true );
    }
    lVar20 = local_138;
    do {
      if (local_90 < 0x41) {
        if (local_160 < local_78) {
          if (local_160 == local_80) {
            uVar5 = 2 - (local_90 < 0x40);
            goto LAB_1805e0eba;
          }
          uVar6 = (ulonglong)(local_90 >> 3);
          bVar22 = (longlong *)((longlong)local_160 - uVar6) < local_80;
          if (bVar22) {
            uVar6 = (ulonglong)(uint)((int)local_160 - iVar12);
          }
          uVar5 = (uint)bVar22;
          local_90 = local_90 + (int)uVar6 * -8;
        }
        else {
          uVar6 = (ulonglong)(local_90 >> 3);
          uVar5 = 0;
          local_90 = local_90 & 7;
        }
        local_160 = (longlong *)((longlong)local_160 - uVar6);
        lVar20 = *local_160;
        local_138 = lVar20;
      }
      else {
        local_160 = (longlong *)&DAT_1806877f0;
        uVar5 = 3;
      }
LAB_1805e0eba:
      if (uVar5 != 0 || (undefined2 *)((longlong)puVar3 - 9U) <= local_f8) goto LAB_1805e11a7;
      bVar9 = -bVar16 & 0x3f;
      uVar6 = (ulonglong)(lVar20 << ((byte)local_90 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_f8 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = *(byte *)(lVar2 + 6) + local_90;
      local_f8 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f8);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_f8 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_f8 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f8);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_f8 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_f8 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f8);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_f8 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_f8 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f8);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_f8 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      local_90 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_f8 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f8);
    } while( true );
  }
  if (local_90 < 0x41) {
    if (local_160 < local_78) {
      if (local_160 != local_80) {
        uVar6 = (ulonglong)(local_90 >> 3);
        if ((longlong *)((longlong)local_160 - uVar6) < local_80) {
          uVar6 = (ulonglong)(uint)((int)local_160 - iVar12);
        }
        local_160 = (longlong *)((longlong)local_160 - uVar6);
        local_138 = *local_160;
        local_90 = local_90 + (int)uVar6 * -8;
      }
    }
    else {
      local_160 = (longlong *)((longlong)local_160 - (ulonglong)(local_90 >> 3));
      local_90 = local_90 & 7;
      local_138 = *local_160;
    }
  }
  else {
    local_160 = (longlong *)&DAT_1806877f0;
  }
LAB_1805e11a7:
  if (1 < (ulonglong)((longlong)puVar3 - (longlong)local_f8)) {
    puVar15 = puVar3 + -1;
    do {
      if (local_90 < 0x41) {
        if (local_160 < local_78) {
          if (local_160 == local_80) {
            uVar5 = 2 - (local_90 < 0x40);
            goto LAB_1805e1248;
          }
          uVar6 = (ulonglong)(local_90 >> 3);
          bVar22 = (longlong *)((longlong)local_160 - uVar6) < local_80;
          if (bVar22) {
            uVar6 = (ulonglong)(uint)((int)local_160 - iVar12);
          }
          uVar5 = (uint)bVar22;
          local_90 = local_90 + (int)uVar6 * -8;
        }
        else {
          uVar6 = (ulonglong)(local_90 >> 3);
          uVar5 = 0;
          local_90 = local_90 & 7;
        }
        local_160 = (longlong *)((longlong)local_160 - uVar6);
        local_138 = *local_160;
      }
      else {
        local_160 = (longlong *)&DAT_1806877f0;
        uVar5 = 3;
      }
LAB_1805e1248:
      if (uVar5 != 0 || puVar15 < local_f8) goto LAB_1805e1293;
      uVar6 = (ulonglong)(local_138 << ((byte)local_90 & 0x3f)) >> (-bVar16 & 0x3f);
      lVar20 = param_5 + uVar6 * 4;
      *local_f8 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      local_90 = local_90 + *(byte *)(lVar20 + 6);
      local_f8 = (undefined2 *)((longlong)local_f8 + (ulonglong)*(byte *)(lVar20 + 7));
    } while( true );
  }
LAB_1805e12f6:
  if (local_f8 < puVar3) {
    uVar6 = (ulonglong)(local_138 << ((byte)local_90 & 0x3f)) >> (-bVar16 & 0x3f);
    *(undefined1 *)local_f8 = *(undefined1 *)(param_5 + 4 + uVar6 * 4);
    if (*(char *)(param_5 + 7 + uVar6 * 4) == '\x01') {
      local_90 = local_90 + *(byte *)(param_5 + 6 + uVar6 * 4);
    }
    else if ((local_90 < 0x40) &&
            (local_90 = local_90 + *(byte *)(param_5 + 6 + uVar6 * 4), 0x40 < local_90)) {
      local_90 = 0x40;
    }
  }
  iVar12 = (int)local_58;
  if (7 < (ulonglong)((longlong)puVar8 - (longlong)local_f0)) {
    if (0xb < bVar16) {
      lVar20 = local_130;
      do {
        if (local_68 < 0x41) {
          if (local_158 < local_50) {
            if (local_158 == local_58) {
              uVar5 = 2 - (local_68 < 0x40);
              goto LAB_1805e1585;
            }
            uVar6 = (ulonglong)(local_68 >> 3);
            bVar22 = (longlong *)((longlong)local_158 - uVar6) < local_58;
            if (bVar22) {
              uVar6 = (ulonglong)(uint)((int)local_158 - iVar12);
            }
            uVar5 = (uint)bVar22;
            local_68 = local_68 + (int)uVar6 * -8;
          }
          else {
            uVar6 = (ulonglong)(local_68 >> 3);
            uVar5 = 0;
            local_68 = local_68 & 7;
          }
          local_158 = (longlong *)((longlong)local_158 - uVar6);
          lVar20 = *local_158;
          local_130 = lVar20;
        }
        else {
          local_158 = (longlong *)&DAT_1806877f0;
          uVar5 = 3;
        }
LAB_1805e1585:
        if (uVar5 != 0 || (undefined2 *)((longlong)puVar8 - 7U) <= local_f0) goto LAB_1805e16e9;
        bVar9 = -bVar16 & 0x3f;
        uVar6 = (ulonglong)(lVar20 << ((byte)local_68 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_f0 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = *(byte *)(lVar2 + 6) + local_68;
        local_f0 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f0);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_f0 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        local_f0 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f0);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_f0 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        local_f0 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f0);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_f0 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        local_68 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        local_f0 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f0);
      } while( true );
    }
    lVar20 = local_130;
    do {
      if (local_68 < 0x41) {
        if (local_158 < local_50) {
          if (local_158 == local_58) {
            uVar5 = 2 - (local_68 < 0x40);
            goto LAB_1805e13f5;
          }
          uVar6 = (ulonglong)(local_68 >> 3);
          bVar22 = (longlong *)((longlong)local_158 - uVar6) < local_58;
          if (bVar22) {
            uVar6 = (ulonglong)(uint)((int)local_158 - iVar12);
          }
          uVar5 = (uint)bVar22;
          local_68 = local_68 + (int)uVar6 * -8;
        }
        else {
          uVar6 = (ulonglong)(local_68 >> 3);
          uVar5 = 0;
          local_68 = local_68 & 7;
        }
        local_158 = (longlong *)((longlong)local_158 - uVar6);
        lVar20 = *local_158;
        local_130 = lVar20;
      }
      else {
        local_158 = (longlong *)&DAT_1806877f0;
        uVar5 = 3;
      }
LAB_1805e13f5:
      if (uVar5 != 0 || (undefined2 *)((longlong)puVar8 - 9U) <= local_f0) goto LAB_1805e16e9;
      bVar9 = -bVar16 & 0x3f;
      uVar6 = (ulonglong)(lVar20 << ((byte)local_68 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_f0 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = *(byte *)(lVar2 + 6) + local_68;
      local_f0 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f0);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_f0 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_f0 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f0);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_f0 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_f0 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f0);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_f0 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_f0 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f0);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_f0 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      local_68 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_f0 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_f0);
    } while( true );
  }
  if (local_68 < 0x41) {
    if (local_158 < local_50) {
      if (local_158 != local_58) {
        uVar6 = (ulonglong)(local_68 >> 3);
        if ((longlong *)((longlong)local_158 - uVar6) < local_58) {
          uVar6 = (ulonglong)(uint)((int)local_158 - iVar12);
        }
        local_158 = (longlong *)((longlong)local_158 - uVar6);
        local_130 = *local_158;
        local_68 = local_68 + (int)uVar6 * -8;
      }
    }
    else {
      local_158 = (longlong *)((longlong)local_158 - (ulonglong)(local_68 >> 3));
      local_68 = local_68 & 7;
      local_130 = *local_158;
    }
  }
  else {
    local_158 = (longlong *)&DAT_1806877f0;
  }
LAB_1805e16e9:
  if (1 < (ulonglong)((longlong)puVar8 - (longlong)local_f0)) {
    puVar15 = puVar8 + -1;
    do {
      if (local_68 < 0x41) {
        if (local_158 < local_50) {
          if (local_158 == local_58) {
            uVar5 = 2 - (local_68 < 0x40);
            goto LAB_1805e178a;
          }
          uVar6 = (ulonglong)(local_68 >> 3);
          bVar22 = (longlong *)((longlong)local_158 - uVar6) < local_58;
          if (bVar22) {
            uVar6 = (ulonglong)(uint)((int)local_158 - iVar12);
          }
          uVar5 = (uint)bVar22;
          local_68 = local_68 + (int)uVar6 * -8;
        }
        else {
          uVar6 = (ulonglong)(local_68 >> 3);
          uVar5 = 0;
          local_68 = local_68 & 7;
        }
        local_158 = (longlong *)((longlong)local_158 - uVar6);
        local_130 = *local_158;
      }
      else {
        local_158 = (longlong *)&DAT_1806877f0;
        uVar5 = 3;
      }
LAB_1805e178a:
      if (uVar5 != 0 || puVar15 < local_f0) goto LAB_1805e17d4;
      uVar6 = (ulonglong)(local_130 << ((byte)local_68 & 0x3f)) >> (-bVar16 & 0x3f);
      lVar20 = param_5 + uVar6 * 4;
      *local_f0 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      local_68 = local_68 + *(byte *)(lVar20 + 6);
      local_f0 = (undefined2 *)((longlong)local_f0 + (ulonglong)*(byte *)(lVar20 + 7));
    } while( true );
  }
LAB_1805e1836:
  if (local_f0 < puVar8) {
    uVar6 = (ulonglong)(local_130 << ((byte)local_68 & 0x3f)) >> (-bVar16 & 0x3f);
    *(undefined1 *)local_f0 = *(undefined1 *)(param_5 + 4 + uVar6 * 4);
    if (*(char *)(param_5 + 7 + uVar6 * 4) == '\x01') {
      local_68 = local_68 + *(byte *)(param_5 + 6 + uVar6 * 4);
    }
    else if ((local_68 < 0x40) &&
            (local_68 = local_68 + *(byte *)(param_5 + 6 + uVar6 * 4), 0x40 < local_68)) {
      local_68 = 0x40;
    }
  }
  iVar12 = (int)local_a8;
  if (7 < (ulonglong)((longlong)puVar1 - (longlong)local_48)) {
    lVar20 = local_140;
    if (0xb < bVar16) {
      do {
        if (local_b8 < 0x41) {
          if (local_148 < local_a0) {
            if (local_148 == local_a8) {
              uVar5 = 2 - (local_b8 < 0x40);
              goto LAB_1805e1ab5;
            }
            uVar6 = (ulonglong)(local_b8 >> 3);
            bVar22 = (longlong *)((longlong)local_148 - uVar6) < local_a8;
            if (bVar22) {
              uVar6 = (ulonglong)(uint)((int)local_148 - iVar12);
            }
            uVar5 = (uint)bVar22;
            local_b8 = local_b8 + (int)uVar6 * -8;
          }
          else {
            uVar6 = (ulonglong)(local_b8 >> 3);
            uVar5 = 0;
            local_b8 = local_b8 & 7;
          }
          local_148 = (longlong *)((longlong)local_148 - uVar6);
          lVar20 = *local_148;
          local_140 = lVar20;
        }
        else {
          local_148 = (longlong *)&DAT_1806877f0;
          uVar5 = 3;
        }
LAB_1805e1ab5:
        if (uVar5 != 0 || (undefined2 *)((longlong)puVar1 - 7U) <= local_48) goto LAB_1805e1c0e;
        bVar9 = -bVar16 & 0x3f;
        uVar6 = (ulonglong)(lVar20 << ((byte)local_b8 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_48 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = *(byte *)(lVar2 + 6) + local_b8;
        local_48 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_48);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_48 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        local_48 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_48);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_48 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        local_48 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_48);
        uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
        lVar2 = param_5 + uVar6 * 4;
        *local_48 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
        local_b8 = (uint)*(byte *)(lVar2 + 6) + iVar13;
        local_48 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_48);
      } while( true );
    }
    do {
      if (local_b8 < 0x41) {
        if (local_148 < local_a0) {
          if (local_148 == local_a8) {
            uVar5 = 2 - (local_b8 < 0x40);
            goto LAB_1805e1935;
          }
          uVar6 = (ulonglong)(local_b8 >> 3);
          bVar22 = (longlong *)((longlong)local_148 - uVar6) < local_a8;
          if (bVar22) {
            uVar6 = (ulonglong)(uint)((int)local_148 - iVar12);
          }
          uVar5 = (uint)bVar22;
          local_b8 = local_b8 + (int)uVar6 * -8;
        }
        else {
          uVar6 = (ulonglong)(local_b8 >> 3);
          uVar5 = 0;
          local_b8 = local_b8 & 7;
        }
        local_148 = (longlong *)((longlong)local_148 - uVar6);
        lVar20 = *local_148;
        local_140 = lVar20;
      }
      else {
        local_148 = (longlong *)&DAT_1806877f0;
        uVar5 = 3;
      }
LAB_1805e1935:
      if (uVar5 != 0 || (undefined2 *)((longlong)puVar1 - 9U) <= local_48) goto LAB_1805e1c0e;
      bVar9 = -bVar16 & 0x3f;
      uVar6 = (ulonglong)(lVar20 << ((byte)local_b8 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_48 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = *(byte *)(lVar2 + 6) + local_b8;
      local_48 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_48);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_48 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_48 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_48);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_48 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_48 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_48);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_48 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      iVar13 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_48 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_48);
      uVar6 = (ulonglong)(lVar20 << ((byte)iVar13 & 0x3f)) >> bVar9;
      lVar2 = param_5 + uVar6 * 4;
      *local_48 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      local_b8 = (uint)*(byte *)(lVar2 + 6) + iVar13;
      local_48 = (undefined2 *)((ulonglong)*(byte *)(lVar2 + 7) + (longlong)local_48);
    } while( true );
  }
  if (local_b8 < 0x41) {
    if (local_148 < local_a0) {
      if (local_148 != local_a8) {
        uVar6 = (ulonglong)(local_b8 >> 3);
        if ((longlong *)((longlong)local_148 - uVar6) < local_a8) {
          uVar6 = (ulonglong)(uint)((int)local_148 - iVar12);
        }
        local_148 = (longlong *)((longlong)local_148 - uVar6);
        local_140 = *local_148;
        local_b8 = local_b8 + (int)uVar6 * -8;
      }
    }
    else {
      local_148 = (longlong *)((longlong)local_148 - (ulonglong)(local_b8 >> 3));
      local_b8 = local_b8 & 7;
      local_140 = *local_148;
    }
  }
  else {
    local_148 = (longlong *)&DAT_1806877f0;
  }
LAB_1805e1c0e:
  if (1 < (ulonglong)((longlong)puVar1 - (longlong)local_48)) {
    do {
      if (local_b8 < 0x41) {
        if (local_148 < local_a0) {
          if (local_148 == local_a8) {
            uVar5 = 2 - (local_b8 < 0x40);
            goto LAB_1805e1cb9;
          }
          uVar6 = (ulonglong)(local_b8 >> 3);
          bVar22 = (longlong *)((longlong)local_148 - uVar6) < local_a8;
          if (bVar22) {
            uVar6 = (ulonglong)(uint)((int)local_148 - iVar12);
          }
          uVar5 = (uint)bVar22;
          local_b8 = local_b8 + (int)uVar6 * -8;
        }
        else {
          uVar6 = (ulonglong)(local_b8 >> 3);
          uVar5 = 0;
          local_b8 = local_b8 & 7;
        }
        local_148 = (longlong *)((longlong)local_148 - uVar6);
        local_140 = *local_148;
      }
      else {
        local_148 = (longlong *)&DAT_1806877f0;
        uVar5 = 3;
      }
LAB_1805e1cb9:
      if (uVar5 != 0 || puVar1 + -1 < local_48) goto joined_r0x0001805e1d1b;
      uVar6 = (ulonglong)(local_140 << ((byte)local_b8 & 0x3f)) >> (-bVar16 & 0x3f);
      lVar20 = param_5 + uVar6 * 4;
      *local_48 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      local_b8 = local_b8 + *(byte *)(lVar20 + 6);
      local_48 = (undefined2 *)((longlong)local_48 + (ulonglong)*(byte *)(lVar20 + 7));
    } while( true );
  }
LAB_1805e1d54:
  if (local_48 < puVar1) {
    uVar6 = (ulonglong)(local_140 << ((byte)local_b8 & 0x3f)) >> (-bVar16 & 0x3f);
    *(undefined1 *)local_48 = *(undefined1 *)(param_5 + 4 + uVar6 * 4);
    if (*(char *)(param_5 + 7 + uVar6 * 4) == '\x01') {
      local_b8 = local_b8 + *(byte *)(param_5 + 6 + uVar6 * 4);
    }
    else if ((local_b8 < 0x40) &&
            (local_b8 = local_b8 + *(byte *)(param_5 + 6 + uVar6 * 4), 0x40 < local_b8)) {
      local_b8 = 0x40;
    }
  }
  if ((local_170 == local_d0) && (local_e0 == 0x40)) {
    bVar16 = 1;
  }
  else {
    bVar16 = 0;
  }
  bVar9 = 1;
  if ((local_160 == local_80) && (local_90 == 0x40)) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  if ((local_158 == local_58) && (local_68 == 0x40)) {
    bVar10 = 1;
  }
  else {
    bVar10 = 0;
  }
  if ((local_148 != local_a8) || (local_b8 != 0x40)) {
    bVar9 = 0;
  }
  if (!(bool)(bVar16 & bVar9 & bVar10 & bVar11)) {
    param_2 = 0xffffffffffffffec;
  }
  return param_2;
joined_r0x0001805e0d73:
  for (; param_1 <= puVar15 + -1;
      param_1 = (undefined2 *)((longlong)param_1 + (ulonglong)*(byte *)(lVar20 + 7))) {
    uVar6 = (ulonglong)(local_128 << ((byte)local_e0 & 0x3f)) >> (-bVar16 & 0x3f);
    lVar20 = param_5 + uVar6 * 4;
    *param_1 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
    local_e0 = local_e0 + *(byte *)(lVar20 + 6);
  }
  goto LAB_1805e0dba;
LAB_1805e1293:
  if (local_f8 <= puVar15) {
    do {
      uVar6 = (ulonglong)(local_138 << ((byte)local_90 & 0x3f)) >> (-bVar16 & 0x3f);
      lVar20 = param_5 + uVar6 * 4;
      *local_f8 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      local_90 = local_90 + *(byte *)(lVar20 + 6);
      local_f8 = (undefined2 *)((longlong)local_f8 + (ulonglong)*(byte *)(lVar20 + 7));
    } while (local_f8 <= puVar15);
  }
  goto LAB_1805e12f6;
LAB_1805e17d4:
  if (local_f0 <= puVar15) {
    do {
      uVar6 = (ulonglong)(local_130 << ((byte)local_68 & 0x3f)) >> (-bVar16 & 0x3f);
      lVar20 = param_5 + uVar6 * 4;
      *local_f0 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
      local_68 = local_68 + *(byte *)(lVar20 + 6);
      local_f0 = (undefined2 *)((longlong)local_f0 + (ulonglong)*(byte *)(lVar20 + 7));
    } while (local_f0 <= puVar15);
  }
  goto LAB_1805e1836;
joined_r0x0001805e1d1b:
  for (; local_48 <= puVar1 + -1;
      local_48 = (undefined2 *)((longlong)local_48 + (ulonglong)*(byte *)(lVar20 + 7))) {
    uVar6 = (ulonglong)(local_140 << ((byte)local_b8 & 0x3f)) >> (-bVar16 & 0x3f);
    lVar20 = param_5 + uVar6 * 4;
    *local_48 = *(undefined2 *)(param_5 + 4 + uVar6 * 4);
    local_b8 = local_b8 + *(byte *)(lVar20 + 6);
  }
  goto LAB_1805e1d54;
}



