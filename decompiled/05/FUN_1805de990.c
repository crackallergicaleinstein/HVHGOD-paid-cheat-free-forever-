// FUN_1805de990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805de990 */

ulonglong FUN_1805de990(undefined1 *param_1,ulonglong param_2,ushort *param_3,ulonglong param_4,
                       longlong param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  bool bVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 *puVar12;
  byte bVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  bool bVar23;
  undefined1 *local_res8;
  int local_168;
  longlong local_160;
  longlong *local_158;
  longlong *local_150;
  longlong local_148;
  longlong local_140;
  undefined1 *local_130;
  longlong local_128;
  undefined1 *local_120;
  undefined1 *local_110;
  longlong local_e0;
  uint local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong *local_c0;
  longlong local_b8;
  uint local_b0;
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong local_90;
  uint local_88;
  longlong *local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  uint local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  
  if ((param_4 < 10) || (param_2 < 6)) {
    return 0xffffffffffffffec;
  }
  puVar1 = param_1 + param_2;
  cVar4 = *(char *)(param_5 + 2);
  uVar19 = (ulonglong)*param_3;
  uVar20 = (ulonglong)param_3[1];
  uVar22 = (ulonglong)param_3[2];
  bVar23 = true;
  uVar6 = (((param_4 - uVar22) - uVar20) - uVar19) - 6;
  lVar7 = (longlong)(param_3 + 3) + uVar19;
  uVar8 = param_2 + 3 >> 2;
  puVar12 = param_1 + uVar8;
  puVar2 = puVar12 + uVar8;
  puVar3 = puVar2 + uVar8;
  if ((param_4 < uVar6) || (puVar1 < puVar3)) {
    return 0xffffffffffffffec;
  }
  uVar8 = FUN_1805ddbd0(&local_b8,param_3 + 3,uVar19);
  if (0xffffffffffffff88 < uVar8) {
    return uVar8;
  }
  uVar8 = FUN_1805ddbd0(&local_90,lVar7,uVar20);
  if (0xffffffffffffff88 < uVar8) {
    return uVar8;
  }
  lVar7 = lVar7 + uVar20;
  uVar8 = FUN_1805ddbd0(&local_68,lVar7,uVar22);
  if (0xffffffffffffff88 < uVar8) {
    return uVar8;
  }
  uVar6 = FUN_1805ddbd0(&local_e0,lVar7 + uVar22,uVar6);
  if (0xffffffffffffff88 < uVar6) {
    return uVar6;
  }
  local_res8 = param_1;
  local_130 = puVar12;
  local_120 = puVar2;
  local_110 = puVar3;
  if (((ulonglong)((longlong)puVar1 - (longlong)puVar3) < 8) || (puVar1 + -3 <= puVar3)) {
    local_160 = local_b8;
    local_140 = local_90;
    local_128 = local_68;
    local_148 = local_e0;
    local_150 = local_a8;
    local_158 = local_80;
  }
  else {
    bVar9 = -cVar4 & 0x3f;
    local_150 = local_a8;
    local_158 = local_80;
    local_140 = local_90;
    local_128 = local_68;
    local_148 = local_e0;
    local_160 = local_b8;
    do {
      uVar6 = (ulonglong)(local_160 << ((byte)local_b0 & 0x3f)) >> bVar9;
      iVar16 = *(byte *)(param_5 + 4 + uVar6 * 2) + local_b0;
      uVar8 = (ulonglong)(local_140 << ((byte)local_88 & 0x3f)) >> bVar9;
      *local_res8 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      iVar17 = *(byte *)(param_5 + 4 + uVar8 * 2) + local_88;
      uVar6 = (ulonglong)(local_128 << ((byte)local_60 & 0x3f)) >> bVar9;
      *local_130 = *(undefined1 *)(param_5 + 5 + uVar8 * 2);
      iVar18 = *(byte *)(param_5 + 4 + uVar6 * 2) + local_60;
      *local_120 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      uVar6 = (ulonglong)(local_148 << ((byte)local_d8 & 0x3f)) >> bVar9;
      iVar14 = *(byte *)(param_5 + 4 + uVar6 * 2) + local_d8;
      uVar8 = (ulonglong)(local_160 << ((byte)iVar16 & 0x3f)) >> bVar9;
      *local_110 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      iVar16 = iVar16 + (uint)*(byte *)(param_5 + 4 + uVar8 * 2);
      uVar6 = (ulonglong)(local_140 << ((byte)iVar17 & 0x3f)) >> bVar9;
      local_res8[1] = *(undefined1 *)(param_5 + 5 + uVar8 * 2);
      iVar17 = iVar17 + (uint)*(byte *)(param_5 + 4 + uVar6 * 2);
      uVar8 = (ulonglong)(local_128 << ((byte)iVar18 & 0x3f)) >> bVar9;
      local_130[1] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      iVar18 = iVar18 + (uint)*(byte *)(param_5 + 4 + uVar8 * 2);
      uVar6 = (ulonglong)(local_148 << ((byte)iVar14 & 0x3f)) >> bVar9;
      local_120[1] = *(undefined1 *)(param_5 + 5 + uVar8 * 2);
      iVar14 = iVar14 + (uint)*(byte *)(param_5 + 4 + uVar6 * 2);
      local_110[1] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      uVar6 = (ulonglong)(local_160 << ((byte)iVar16 & 0x3f)) >> bVar9;
      iVar16 = iVar16 + (uint)*(byte *)(param_5 + 4 + uVar6 * 2);
      local_res8[2] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      uVar6 = (ulonglong)(local_140 << ((byte)iVar17 & 0x3f)) >> bVar9;
      iVar17 = iVar17 + (uint)*(byte *)(param_5 + 4 + uVar6 * 2);
      local_130[2] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      uVar6 = (ulonglong)(local_128 << ((byte)iVar18 & 0x3f)) >> bVar9;
      iVar18 = iVar18 + (uint)*(byte *)(param_5 + 4 + uVar6 * 2);
      local_120[2] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      uVar6 = (ulonglong)(local_148 << ((byte)iVar14 & 0x3f)) >> bVar9;
      iVar14 = iVar14 + (uint)*(byte *)(param_5 + 4 + uVar6 * 2);
      local_110[2] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      uVar6 = (ulonglong)(local_160 << ((byte)iVar16 & 0x3f)) >> bVar9;
      uVar21 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar16;
      local_res8[3] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      local_res8 = local_res8 + 4;
      uVar6 = (ulonglong)(local_140 << ((byte)iVar17 & 0x3f)) >> bVar9;
      uVar15 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar17;
      local_130[3] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      local_130 = local_130 + 4;
      uVar6 = (ulonglong)(local_128 << ((byte)iVar18 & 0x3f)) >> bVar9;
      local_60 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar18;
      local_120[3] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      local_120 = local_120 + 4;
      uVar6 = (ulonglong)(local_148 << ((byte)iVar14 & 0x3f)) >> bVar9;
      local_d8 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar14;
      local_110[3] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      local_110 = local_110 + 4;
      if (local_150 < local_98) {
        iVar14 = 3;
        local_b0 = uVar21;
      }
      else {
        local_b0 = uVar21 & 7;
        local_150 = (longlong *)((longlong)local_150 - (ulonglong)(uVar21 >> 3));
        iVar14 = 0;
        local_160 = *local_150;
      }
      bVar5 = false;
      if (iVar14 == 0) {
        bVar5 = bVar23;
      }
      if (local_158 < local_70) {
        iVar14 = 3;
        local_88 = uVar15;
      }
      else {
        local_88 = uVar15 & 7;
        local_158 = (longlong *)((longlong)local_158 - (ulonglong)(uVar15 >> 3));
        local_140 = *local_158;
        iVar14 = 0;
      }
      if (local_58 < local_48) {
        local_168 = 3;
      }
      else {
        local_58 = (longlong *)((longlong)local_58 - (ulonglong)(local_60 >> 3));
        local_168 = 0;
        local_60 = local_60 & 7;
        local_128 = *local_58;
      }
      bVar10 = 0;
      if (local_168 == 0) {
        bVar10 = iVar14 == 0 & bVar5;
      }
      if (local_d0 < local_c0) {
        local_168 = 3;
      }
      else {
        local_d0 = (longlong *)((longlong)local_d0 - (ulonglong)(local_d8 >> 3));
        local_168 = 0;
        local_d8 = local_d8 & 7;
        local_148 = *local_d0;
      }
      bVar23 = (bool)(bVar10 & local_168 == 0);
      bVar5 = false;
      if (local_110 < puVar1 + -3) {
        bVar5 = bVar23;
      }
    } while (bVar5);
  }
  if (puVar12 < local_res8) {
    return 0xffffffffffffffec;
  }
  if (puVar2 < local_130) {
    return 0xffffffffffffffec;
  }
  if (puVar3 < local_120) {
    return 0xffffffffffffffec;
  }
  if ((longlong)puVar12 - (longlong)local_res8 < 4) {
    if (local_b0 < 0x41) {
      if (local_150 < local_98) {
        if (local_150 != local_a0) {
          uVar6 = (ulonglong)(local_b0 >> 3);
          if ((longlong *)((longlong)local_150 - uVar6) < local_a0) {
            uVar6 = (ulonglong)(uint)((int)local_150 - (int)local_a0);
          }
          local_150 = (longlong *)((longlong)local_150 - uVar6);
          local_b0 = local_b0 + (int)uVar6 * -8;
          local_160 = *local_150;
        }
      }
      else {
        local_150 = (longlong *)((longlong)local_150 - (ulonglong)(local_b0 >> 3));
        local_b0 = local_b0 & 7;
        local_160 = *local_150;
      }
    }
    else {
      local_150 = (longlong *)&DAT_1806877f0;
    }
  }
  else {
    while( true ) {
      if (local_b0 < 0x41) {
        if (local_150 < local_98) {
          if (local_150 == local_a0) {
            uVar15 = 2 - (local_b0 < 0x40);
          }
          else {
            uVar6 = (ulonglong)(local_b0 >> 3);
            bVar23 = (longlong *)((longlong)local_150 - uVar6) < local_a0;
            if (bVar23) {
              uVar6 = (ulonglong)(uint)((int)local_150 - (int)local_a0);
            }
            uVar15 = (uint)bVar23;
            local_150 = (longlong *)((longlong)local_150 - uVar6);
            local_b0 = local_b0 + (int)uVar6 * -8;
            local_160 = *local_150;
          }
        }
        else {
          local_150 = (longlong *)((longlong)local_150 - (ulonglong)(local_b0 >> 3));
          uVar15 = 0;
          local_160 = *local_150;
          local_b0 = local_b0 & 7;
        }
      }
      else {
        local_150 = (longlong *)&DAT_1806877f0;
        uVar15 = 3;
      }
      if (uVar15 != 0 || puVar12 + -3 <= local_res8) break;
      bVar9 = -cVar4 & 0x3f;
      uVar6 = (ulonglong)(local_160 << ((byte)local_b0 & 0x3f)) >> bVar9;
      iVar14 = *(byte *)(param_5 + 4 + uVar6 * 2) + local_b0;
      uVar8 = (ulonglong)(local_160 << ((byte)iVar14 & 0x3f)) >> bVar9;
      *local_res8 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      iVar14 = (uint)*(byte *)(param_5 + 4 + uVar8 * 2) + iVar14;
      local_res8[1] = *(undefined1 *)(param_5 + 5 + uVar8 * 2);
      uVar6 = (ulonglong)(local_160 << ((byte)iVar14 & 0x3f)) >> bVar9;
      iVar14 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar14;
      local_res8[2] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      uVar6 = (ulonglong)(local_160 << ((byte)iVar14 & 0x3f)) >> bVar9;
      local_b0 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar14;
      local_res8[3] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      local_res8 = local_res8 + 4;
    }
  }
  if (local_res8 < puVar12) {
    do {
      uVar6 = (ulonglong)(local_160 << ((byte)local_b0 & 0x3f)) >> (-cVar4 & 0x3fU);
      local_b0 = local_b0 + *(byte *)(param_5 + 4 + uVar6 * 2);
      *local_res8 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      local_res8 = local_res8 + 1;
    } while (local_res8 < puVar12);
  }
  if ((longlong)puVar2 - (longlong)local_130 < 4) {
    if (local_88 < 0x41) {
      if (local_158 < local_70) {
        if (local_158 != local_78) {
          uVar6 = (ulonglong)(local_88 >> 3);
          if ((longlong *)((longlong)local_158 - uVar6) < local_78) {
            uVar6 = (ulonglong)(uint)((int)local_158 - (int)local_78);
          }
          local_158 = (longlong *)((longlong)local_158 - uVar6);
          local_88 = local_88 + (int)uVar6 * -8;
          local_140 = *local_158;
        }
      }
      else {
        local_158 = (longlong *)((longlong)local_158 - (ulonglong)(local_88 >> 3));
        local_88 = local_88 & 7;
        local_140 = *local_158;
      }
    }
    else {
      local_158 = (longlong *)&DAT_1806877f0;
    }
  }
  else {
    while( true ) {
      if (local_88 < 0x41) {
        if (local_158 < local_70) {
          if (local_158 == local_78) {
            uVar15 = 2 - (local_88 < 0x40);
          }
          else {
            uVar6 = (ulonglong)(local_88 >> 3);
            bVar23 = (longlong *)((longlong)local_158 - uVar6) < local_78;
            if (bVar23) {
              uVar6 = (ulonglong)(uint)((int)local_158 - (int)local_78);
            }
            uVar15 = (uint)bVar23;
            local_158 = (longlong *)((longlong)local_158 - uVar6);
            local_88 = local_88 + (int)uVar6 * -8;
            local_140 = *local_158;
          }
        }
        else {
          local_158 = (longlong *)((longlong)local_158 - (ulonglong)(local_88 >> 3));
          uVar15 = 0;
          local_140 = *local_158;
          local_88 = local_88 & 7;
        }
      }
      else {
        local_158 = (longlong *)&DAT_1806877f0;
        uVar15 = 3;
      }
      if (uVar15 != 0 || puVar2 + -3 <= local_130) break;
      bVar10 = -cVar4 & 0x3f;
      uVar6 = (ulonglong)(local_140 << ((byte)local_88 & 0x3f)) >> bVar10;
      iVar14 = *(byte *)(param_5 + 4 + uVar6 * 2) + local_88;
      *local_130 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      uVar6 = (ulonglong)(local_140 << ((byte)iVar14 & 0x3f)) >> bVar10;
      bVar9 = *(byte *)(param_5 + 4 + uVar6 * 2);
      local_130[1] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      iVar14 = (uint)bVar9 + iVar14;
      uVar6 = (ulonglong)(local_140 << ((byte)iVar14 & 0x3f)) >> bVar10;
      iVar14 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar14;
      local_130[2] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      uVar6 = (ulonglong)(local_140 << ((byte)iVar14 & 0x3f)) >> bVar10;
      local_88 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar14;
      local_130[3] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      local_130 = local_130 + 4;
    }
  }
  if (local_130 < puVar2) {
    do {
      uVar6 = (ulonglong)(local_140 << ((byte)local_88 & 0x3f)) >> (-cVar4 & 0x3fU);
      local_88 = local_88 + *(byte *)(param_5 + 4 + uVar6 * 2);
      *local_130 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      local_130 = local_130 + 1;
    } while (local_130 < puVar2);
  }
  if (3 < (longlong)puVar3 - (longlong)local_120) {
    do {
      if (local_60 < 0x41) {
        if (local_58 < local_48) {
          if (local_58 == local_50) {
            uVar15 = 2 - (local_60 < 0x40);
            goto LAB_1805df537;
          }
          uVar6 = (ulonglong)(local_60 >> 3);
          bVar23 = (longlong *)((longlong)local_58 - uVar6) < local_50;
          if (bVar23) {
            uVar6 = (ulonglong)(uint)((int)local_58 - (int)local_50);
          }
          uVar15 = (uint)bVar23;
          local_60 = local_60 + (int)uVar6 * -8;
        }
        else {
          uVar6 = (ulonglong)(local_60 >> 3);
          uVar15 = 0;
          local_60 = local_60 & 7;
        }
        local_58 = (longlong *)((longlong)local_58 - uVar6);
        local_128 = *local_58;
      }
      else {
        local_58 = (longlong *)&DAT_1806877f0;
        uVar15 = 3;
      }
LAB_1805df537:
      if (uVar15 != 0 || puVar3 + -3 <= local_120) goto LAB_1805df68f;
      bVar10 = -cVar4 & 0x3f;
      uVar6 = (ulonglong)(local_128 << ((byte)local_60 & 0x3f)) >> bVar10;
      bVar9 = *(byte *)(param_5 + 4 + uVar6 * 2);
      *local_120 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      iVar14 = bVar9 + local_60;
      uVar6 = (ulonglong)(local_128 << ((byte)iVar14 & 0x3f)) >> bVar10;
      bVar9 = *(byte *)(param_5 + 4 + uVar6 * 2);
      local_120[1] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      iVar14 = (uint)bVar9 + iVar14;
      uVar6 = (ulonglong)(local_128 << ((byte)iVar14 & 0x3f)) >> bVar10;
      iVar14 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar14;
      local_120[2] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      uVar6 = (ulonglong)(local_128 << ((byte)iVar14 & 0x3f)) >> bVar10;
      local_60 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar14;
      local_120[3] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      local_120 = local_120 + 4;
    } while( true );
  }
  if (local_60 < 0x41) {
    if (local_58 < local_48) {
      if (local_58 != local_50) {
        uVar6 = (ulonglong)(local_60 >> 3);
        if ((longlong *)((longlong)local_58 - uVar6) < local_50) {
          uVar6 = (ulonglong)(uint)((int)local_58 - (int)local_50);
        }
        local_58 = (longlong *)((longlong)local_58 - uVar6);
        local_60 = local_60 + (int)uVar6 * -8;
        local_128 = *local_58;
      }
    }
    else {
      local_58 = (longlong *)((longlong)local_58 - (ulonglong)(local_60 >> 3));
      local_60 = local_60 & 7;
      local_128 = *local_58;
    }
  }
  else {
    local_58 = (longlong *)&DAT_1806877f0;
  }
LAB_1805df68f:
  if (local_120 < puVar3) {
    do {
      uVar6 = (ulonglong)(local_128 << ((byte)local_60 & 0x3f)) >> (-cVar4 & 0x3fU);
      local_60 = local_60 + *(byte *)(param_5 + 4 + uVar6 * 2);
      *local_120 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
      local_120 = local_120 + 1;
    } while (local_120 < puVar3);
  }
  if ((longlong)puVar1 - (longlong)local_110 < 4) {
    if (local_d8 < 0x41) {
      if (local_d0 < local_c0) {
        if (local_d0 != local_c8) {
          uVar6 = (ulonglong)(local_d8 >> 3);
          if ((longlong *)((longlong)local_d0 - uVar6) < local_c8) {
            uVar6 = (ulonglong)(uint)((int)local_d0 - (int)local_c8);
          }
          local_d0 = (longlong *)((longlong)local_d0 - uVar6);
          local_d8 = local_d8 + (int)uVar6 * -8;
          local_148 = *local_d0;
        }
      }
      else {
        local_d0 = (longlong *)((longlong)local_d0 - (ulonglong)(local_d8 >> 3));
        local_d8 = local_d8 & 7;
        local_148 = *local_d0;
      }
    }
    else {
      local_d0 = (longlong *)&DAT_1806877f0;
    }
LAB_1805df8ad:
    if (local_110 < puVar1) {
      do {
        uVar6 = (ulonglong)(local_148 << ((byte)local_d8 & 0x3f)) >> (-cVar4 & 0x3fU);
        local_d8 = local_d8 + *(byte *)(param_5 + 4 + uVar6 * 2);
        *local_110 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
        local_110 = local_110 + 1;
      } while (local_110 < puVar1);
    }
    if ((local_150 == local_a0) && (local_b0 == 0x40)) {
      bVar9 = 1;
    }
    else {
      bVar9 = 0;
    }
    bVar10 = 1;
    if ((local_158 == local_78) && (local_88 == 0x40)) {
      bVar13 = 1;
    }
    else {
      bVar13 = 0;
    }
    if ((local_58 == local_50) && (local_60 == 0x40)) {
      bVar11 = 1;
    }
    else {
      bVar11 = 0;
    }
    if ((local_d0 != local_c8) || (local_d8 != 0x40)) {
      bVar10 = 0;
    }
    if (!(bool)(bVar9 & bVar10 & bVar11 & bVar13)) {
      param_2 = 0xffffffffffffffec;
    }
    return param_2;
  }
  do {
    if (local_d8 < 0x41) {
      if (local_d0 < local_c0) {
        if (local_d0 == local_c8) {
          uVar15 = 2 - (local_d8 < 0x40);
          goto LAB_1805df77e;
        }
        uVar6 = (ulonglong)(local_d8 >> 3);
        bVar23 = (longlong *)((longlong)local_d0 - uVar6) < local_c8;
        if (bVar23) {
          uVar6 = (ulonglong)(uint)((int)local_d0 - (int)local_c8);
        }
        uVar15 = (uint)bVar23;
        local_d8 = local_d8 + (int)uVar6 * -8;
      }
      else {
        uVar6 = (ulonglong)(local_d8 >> 3);
        uVar15 = 0;
        local_d8 = local_d8 & 7;
      }
      local_d0 = (longlong *)((longlong)local_d0 - uVar6);
      local_148 = *local_d0;
    }
    else {
      local_d0 = (longlong *)&DAT_1806877f0;
      uVar15 = 3;
    }
LAB_1805df77e:
    if (uVar15 != 0 || puVar1 + -3 <= local_110) goto LAB_1805df8ad;
    bVar9 = -cVar4 & 0x3f;
    uVar6 = (ulonglong)(local_148 << ((byte)local_d8 & 0x3f)) >> bVar9;
    iVar14 = *(byte *)(param_5 + 4 + uVar6 * 2) + local_d8;
    *local_110 = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
    uVar6 = (ulonglong)(local_148 << ((byte)iVar14 & 0x3f)) >> bVar9;
    iVar14 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar14;
    local_110[1] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
    uVar6 = (ulonglong)(local_148 << ((byte)iVar14 & 0x3f)) >> bVar9;
    iVar14 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar14;
    local_110[2] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
    uVar6 = (ulonglong)(local_148 << ((byte)iVar14 & 0x3f)) >> bVar9;
    local_d8 = (uint)*(byte *)(param_5 + 4 + uVar6 * 2) + iVar14;
    local_110[3] = *(undefined1 *)(param_5 + 5 + uVar6 * 2);
    local_110 = local_110 + 4;
  } while( true );
}



