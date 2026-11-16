// FUN_1805e72d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e72d0 */

ulonglong FUN_1805e72d0(longlong *param_1,undefined8 *param_2,longlong param_3,ulonglong *param_4,
                       ulonglong param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong *puVar22;
  ulonglong uVar23;
  undefined8 *puVar24;
  undefined1 *puVar25;
  undefined8 *puVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  undefined8 *puVar29;
  undefined8 *local_198;
  ulonglong local_188;
  undefined8 *local_180;
  undefined8 *local_170;
  undefined8 *local_168;
  ulonglong *local_160;
  ulonglong local_158;
  uint local_150;
  ulonglong *local_148;
  ulonglong *local_140;
  ulonglong *local_138;
  ulonglong local_130;
  longlong local_128;
  ulonglong local_120;
  longlong local_118;
  ulonglong local_110;
  longlong local_108;
  ulonglong local_100 [3];
  undefined8 *local_e8;
  undefined1 local_d8 [16];
  ulonglong local_c8;
  uint local_b8;
  uint local_b4;
  ulonglong local_b0;
  undefined1 *local_a8;
  longlong local_a0;
  undefined8 *local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined1 local_78 [16];
  ulonglong local_68;
  longlong *local_58;
  undefined8 *local_50;
  
  local_58 = param_1;
  local_50 = param_2;
  local_168 = (undefined8 *)param_1[0xe99];
  local_180 = (undefined8 *)param_1[0xeb5];
  local_e8 = (undefined8 *)((longlong)param_2 + param_3);
  if (param_3 < 1) {
    local_e8 = param_2;
  }
  local_a0 = param_1[0xe9a];
  local_a8 = (undefined1 *)param_1[0xe9b];
  local_98 = (undefined8 *)param_1[0xed5];
  local_170 = local_180;
  local_160 = param_4;
  if (param_6 == 0) {
LAB_1805e8649:
    puVar28 = local_50;
    plVar11 = local_58;
    puVar29 = local_98;
    if ((int)local_58[0xed6] == 2) {
      uVar23 = (longlong)local_98 - (longlong)local_180;
      if ((ulonglong)((longlong)local_e8 - (longlong)param_2) < uVar23) {
        return 0xffffffffffffffba;
      }
      if (param_2 != (undefined8 *)0x0) {
        FUN_18063aed0(param_2,local_180,uVar23);
        param_2 = (undefined8 *)((longlong)param_2 + uVar23);
      }
      local_180 = (undefined8 *)((longlong)plVar11 + 0x76b4);
      *(undefined4 *)(plVar11 + 0xed6) = 0;
      puVar29 = (undefined8 *)((longlong)plVar11 + 0x176b4);
    }
    uVar23 = (longlong)puVar29 - (longlong)local_180;
    if ((ulonglong)((longlong)local_e8 - (longlong)param_2) < uVar23) {
      return 0xffffffffffffffba;
    }
    if (param_2 != (undefined8 *)0x0) {
      FUN_18063aed0(param_2,local_180,uVar23);
      param_2 = (undefined8 *)((longlong)param_2 + uVar23);
    }
    return (longlong)param_2 - (longlong)puVar28;
  }
  *(undefined4 *)((longlong)param_1 + 0x7534) = 1;
  local_188 = (ulonglong)*(uint *)((longlong)param_1 + 0x683c);
  local_100[0] = local_188;
  local_100[1] = (ulonglong)*(uint *)(param_1 + 0xd08);
  local_100[2] = (ulonglong)*(uint *)((longlong)param_1 + 0x6844);
  if (param_5 == 0) {
    return 0xffffffffffffffec;
  }
  local_138 = param_4 + 1;
  if (param_5 < 8) {
    local_158 = (ulonglong)(byte)*param_4;
    switch(param_5) {
    case 7:
      local_158 = ((ulonglong)*(byte *)((longlong)param_4 + 6) << 0x30) + local_158;
    case 6:
      local_158 = local_158 + ((ulonglong)*(byte *)((longlong)param_4 + 5) << 0x28);
    case 5:
      local_158 = local_158 + ((ulonglong)*(byte *)((longlong)param_4 + 4) << 0x20);
    case 4:
      local_158 = local_158 + (ulonglong)*(byte *)((longlong)param_4 + 3) * 0x1000000;
    case 3:
      local_158 = local_158 + (ulonglong)*(byte *)((longlong)param_4 + 2) * 0x10000;
    case 2:
      local_158 = local_158 + (ulonglong)*(byte *)((longlong)param_4 + 1) * 0x100;
    }
    bVar15 = *(byte *)((longlong)param_4 + (param_5 - 1));
    if (bVar15 == 0) {
      return 0xffffffffffffffec;
    }
    iVar17 = 0x1f;
    if (bVar15 != 0) {
      for (; bVar15 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar17 = (8 - iVar17) + (8 - (int)param_5) * 8;
    local_148 = param_4;
  }
  else {
    bVar15 = *(byte *)((longlong)param_4 + (param_5 - 1));
    local_148 = (ulonglong *)((longlong)param_4 + (param_5 - 8));
    local_158 = *local_148;
    if (bVar15 == 0) {
      return 0xffffffffffffffec;
    }
    iVar17 = 0x1f;
    if (bVar15 != 0) {
      for (; bVar15 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar17 = 8 - iVar17;
    if (0xffffffffffffff88 < param_5) {
      return 0xffffffffffffffec;
    }
  }
  local_128 = *param_1;
  local_150 = iVar17 + *(int *)(local_128 + 4);
  local_130 = local_158 >> (-(char)local_150 & 0x3fU) &
              (1L << ((byte)*(undefined4 *)(local_128 + 4) & 0x3f)) - 1U;
  local_b0 = local_130;
  iVar17 = (int)param_4;
  if (local_150 < 0x41) {
    if (local_148 < local_138) {
      if (local_148 == param_4) goto LAB_1805e751a;
      uVar23 = (ulonglong)(local_150 >> 3);
      if ((ulonglong *)((longlong)local_148 - uVar23) < param_4) {
        uVar23 = (ulonglong)(uint)((int)local_148 - iVar17);
      }
      local_150 = local_150 + (int)uVar23 * -8;
    }
    else {
      uVar23 = (ulonglong)(local_150 >> 3);
      local_150 = local_150 & 7;
    }
    local_148 = (ulonglong *)((longlong)local_148 - uVar23);
    local_158 = *local_148;
  }
  else {
    local_148 = (ulonglong *)&DAT_180687dd0;
  }
LAB_1805e751a:
  local_128 = local_128 + 8;
  iVar5 = *(int *)(param_1[2] + 4);
  local_150 = iVar5 + local_150;
  local_120 = local_158 >> (-(char)local_150 & 0x3fU) & (1L << ((byte)iVar5 & 0x3f)) - 1U;
  local_88 = local_120;
  if (local_150 < 0x41) {
    if (local_148 < local_138) {
      if (local_148 == param_4) goto LAB_1805e75aa;
      uVar23 = (ulonglong)(local_150 >> 3);
      if ((ulonglong *)((longlong)local_148 - uVar23) < param_4) {
        uVar23 = (ulonglong)(uint)((int)local_148 - iVar17);
      }
      local_150 = local_150 + (int)uVar23 * -8;
    }
    else {
      uVar23 = (ulonglong)(local_150 >> 3);
      local_150 = local_150 & 7;
    }
    local_148 = (ulonglong *)((longlong)local_148 - uVar23);
    local_158 = *local_148;
  }
  else {
    local_148 = (ulonglong *)&DAT_180687dd0;
  }
LAB_1805e75aa:
  local_118 = param_1[2] + 8;
  iVar5 = *(int *)(param_1[1] + 4);
  local_150 = iVar5 + local_150;
  local_110 = local_158 >> (-(char)local_150 & 0x3fU) & (1L << ((byte)iVar5 & 0x3f)) - 1U;
  local_90 = local_110;
  if (local_150 < 0x41) {
    if (local_148 < local_138) {
      if (local_148 == param_4) goto LAB_1805e7639;
      uVar23 = (ulonglong)(local_150 >> 3);
      if ((ulonglong *)((longlong)local_148 - uVar23) < param_4) {
        uVar23 = (ulonglong)(uint)((int)local_148 - iVar17);
      }
      local_150 = local_150 + (int)uVar23 * -8;
    }
    else {
      uVar23 = (ulonglong)(local_150 >> 3);
      local_150 = local_150 & 7;
    }
    local_148 = (ulonglong *)((longlong)local_148 - uVar23);
    local_158 = *local_148;
  }
  else {
    local_148 = (ulonglong *)&DAT_180687dd0;
  }
LAB_1805e7639:
  local_108 = param_1[1] + 8;
  puVar22 = local_148;
  uVar23 = local_158;
  uVar21 = local_150;
  local_198 = param_2;
  local_140 = param_4;
  do {
    plVar11 = local_58;
    local_d8._8_4_ = *(uint *)(local_108 + 4 + local_90 * 8);
    uVar27 = (ulonglong)(uint)local_d8._8_4_;
    bVar15 = *(byte *)(local_108 + 2 + local_90 * 8);
    uVar6 = *(uint *)(local_128 + 4 + local_b0 * 8);
    uVar18 = CONCAT44(0,uVar6);
    bVar16 = *(byte *)(local_128 + 2 + local_b0 * 8);
    bVar1 = *(byte *)(local_118 + 2 + local_88 * 8);
    uVar7 = *(uint *)(local_118 + 4 + local_88 * 8);
    local_d8._0_8_ = uVar18;
    local_d8._12_4_ = 0;
    bVar2 = *(byte *)(local_128 + 3 + local_b0 * 8);
    bVar3 = *(byte *)(local_108 + 3 + local_90 * 8);
    local_b8 = (uint)bVar3;
    bVar4 = *(byte *)(local_118 + 3 + local_88 * 8);
    local_b4 = (uint)bVar4;
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        local_150 = uVar21 + 1;
        lVar19 = (ulonglong)((uVar6 == 0) + uVar7) -
                 ((longlong)(uVar23 << ((byte)uVar21 & 0x3f)) >> 0x3f);
        if (lVar19 == 3) {
          local_100[0] = (local_188 - 1) - (ulonglong)(local_188 - 1 == 0);
        }
        else {
          local_100[0] = local_100[lVar19] - (ulonglong)(local_100[lVar19] == 0);
          if (lVar19 == 1) goto LAB_1805e778c;
        }
        local_100[2] = local_100[1];
        goto LAB_1805e778c;
      }
      local_188 = local_100[uVar6 == 0];
      local_100[1] = *(ulonglong *)((longlong)local_100 + (ulonglong)(-(uint)(uVar6 != 0) & 8));
      local_100[0] = local_188;
    }
    else {
      local_150 = uVar21 + bVar1;
      local_100[0] = (ulonglong)uVar7 + ((uVar23 << ((byte)uVar21 & 0x3f)) >> (-bVar1 & 0x3f));
      local_100[2] = local_100[1];
LAB_1805e778c:
      local_100[1] = local_188;
      uVar21 = local_150;
      local_188 = local_100[0];
    }
    if (bVar15 != 0) {
      bVar14 = (byte)uVar21;
      uVar21 = uVar21 + bVar15;
      uVar27 = uVar27 + ((uVar23 << (bVar14 & 0x3f)) >> (-bVar15 & 0x3f));
      local_d8._8_8_ = uVar27;
      local_150 = uVar21;
    }
    if ((byte)(bVar15 + bVar1 + bVar16) < 0x1f) {
LAB_1805e77e0:
    }
    else {
      if (0x40 < uVar21) {
        puVar22 = (ulonglong *)&DAT_180687dd0;
        local_148 = (ulonglong *)&DAT_180687dd0;
        goto LAB_1805e77e0;
      }
      if (puVar22 < local_138) {
        if (puVar22 != local_160) {
          uVar12 = (ulonglong)(uVar21 >> 3);
          if ((ulonglong *)((longlong)puVar22 - uVar12) < local_160) {
            uVar12 = (ulonglong)(uint)((int)puVar22 - (int)local_160);
          }
          puVar22 = (ulonglong *)((longlong)puVar22 - uVar12);
          uVar23 = *puVar22;
          uVar21 = uVar21 + (int)uVar12 * -8;
          local_158 = uVar23;
          local_150 = uVar21;
          local_148 = puVar22;
        }
      }
      else {
        puVar22 = (ulonglong *)((longlong)puVar22 - (ulonglong)(uVar21 >> 3));
        uVar21 = uVar21 & 7;
        uVar23 = *puVar22;
        local_158 = uVar23;
        local_150 = uVar21;
        local_148 = puVar22;
      }
    }
    if (bVar16 != 0) {
      bVar15 = (byte)uVar21;
      uVar21 = uVar21 + bVar16;
      uVar18 = uVar18 + ((uVar23 << (bVar15 & 0x3f)) >> (-bVar16 & 0x3f));
      local_d8._0_8_ = uVar18;
      local_150 = uVar21;
    }
    if (param_6 != 1) {
      iVar17 = bVar2 + uVar21;
      local_130 = (uVar23 >> (-(char)iVar17 & 0x3fU) & (1L << (bVar2 & 0x3f)) - 1U) +
                  (ulonglong)*(ushort *)(local_128 + local_b0 * 8);
      local_b0 = local_130;
      iVar17 = iVar17 + (uint)bVar3;
      local_110 = (uVar23 >> (-(char)iVar17 & 0x3fU) & (1L << (bVar3 & 0x3f)) - 1U) +
                  (ulonglong)*(ushort *)(local_108 + local_90 * 8);
      local_90 = local_110;
      uVar21 = iVar17 + (uint)bVar4;
      local_120 = (uVar23 >> (-(char)uVar21 & 0x3fU) & (1L << (bVar4 & 0x3f)) - 1U) +
                  (ulonglong)*(ushort *)(local_118 + local_88 * 8);
      local_88 = local_120;
      local_150 = uVar21;
      if (uVar21 < 0x41) {
        if (puVar22 < local_138) {
          if (puVar22 == local_160) goto LAB_1805e796d;
          uVar23 = (ulonglong)(uVar21 >> 3);
          if ((ulonglong *)((longlong)puVar22 - uVar23) < local_160) {
            uVar23 = (ulonglong)(uint)((int)puVar22 - (int)local_160);
          }
          uVar21 = uVar21 + (int)uVar23 * -8;
        }
        else {
          uVar23 = (ulonglong)(uVar21 >> 3);
          uVar21 = uVar21 & 7;
        }
        puVar22 = (ulonglong *)((longlong)puVar22 - uVar23);
        uVar23 = *puVar22;
        local_158 = uVar23;
        local_150 = uVar21;
        local_148 = puVar22;
      }
      else {
        puVar22 = (ulonglong *)&DAT_180687dd0;
        local_148 = puVar22;
      }
    }
LAB_1805e796d:
    puVar29 = (undefined8 *)(uVar18 + (longlong)local_180);
    local_68 = local_188;
    local_78 = local_d8;
    local_100[0] = local_188;
    local_c8 = local_188;
    if ((undefined8 *)local_58[0xed5] < puVar29) {
      if (param_6 < 1) goto LAB_1805e85fb;
      uVar12 = local_58[0xed5] - (longlong)local_180;
      uVar27 = local_188;
      if (uVar12 == 0) {
      }
      else {
        if ((ulonglong)((longlong)local_e8 - (longlong)local_198) < uVar12) {
          return 0xffffffffffffffba;
        }
        FUN_1805e95d0(local_198);
        auVar8 = local_78;
        local_d8._0_8_ = uVar18 - uVar12;
        local_198 = (undefined8 *)((longlong)local_198 + uVar12);
        local_78._0_8_ = local_d8._0_8_;
        auVar10 = local_78;
        local_78._8_4_ = auVar8._8_4_;
        local_78._12_4_ = auVar8._12_4_;
        local_d8._8_4_ = local_78._8_4_;
        local_d8._12_4_ = local_78._12_4_;
        local_78 = auVar10;
      }
      local_170 = (undefined8 *)((longlong)plVar11 + 0x76b4);
      local_98 = (undefined8 *)((longlong)plVar11 + 0x176b4);
      *(undefined4 *)(plVar11 + 0xed6) = 0;
      puVar29 = (undefined8 *)((longlong)local_198 + local_d8._0_8_);
      local_180 = (undefined8 *)((longlong)local_170 + local_d8._0_8_);
      auVar8._8_4_ = local_d8._8_4_;
      auVar8._0_8_ = local_d8._0_8_;
      auVar8._12_4_ = local_d8._12_4_;
      lVar19 = auVar8._8_8_;
      local_c8 = uVar27;
      puVar28 = (undefined8 *)((longlong)puVar29 - local_68);
      uVar18 = local_d8._0_8_ + lVar19;
      if ((local_98 < local_180) || (local_e8 + -4 < (undefined8 *)(uVar18 + (longlong)local_198)))
      {
        local_78._8_4_ = local_d8._8_4_;
        local_78._0_8_ = local_d8._0_8_;
        local_78._12_4_ = local_d8._12_4_;
        local_68 = uVar27;
        uVar18 = FUN_1805e9140(local_198,local_e8,local_78,&local_170,local_98,local_168,local_a0,
                               local_a8);
        local_180 = local_170;
      }
      else {
        uVar9 = *(undefined8 *)((longlong)plVar11 + 0x76bc);
        *local_198 = *local_170;
        local_198[1] = uVar9;
        if (0x10 < (ulonglong)local_d8._0_8_) {
          uVar9 = *(undefined8 *)((longlong)plVar11 + 0x76cc);
          local_198[2] = *(undefined8 *)((longlong)plVar11 + 0x76c4);
          local_198[3] = uVar9;
          if (0x10 < (longlong)(local_d8._0_8_ - 0x10)) {
            puVar13 = local_198 + 4;
            puVar24 = (undefined8 *)((longlong)plVar11 + 0x76d4);
            do {
              uVar9 = puVar24[1];
              *puVar13 = *puVar24;
              puVar13[1] = uVar9;
              uVar9 = puVar24[3];
              puVar13[2] = puVar24[2];
              puVar13[3] = uVar9;
              puVar13 = puVar13 + 4;
              puVar24 = puVar24 + 4;
            } while (puVar13 < (undefined8 *)((longlong)(local_198 + 2) + (local_d8._0_8_ - 0x10)));
          }
        }
        local_170 = local_180;
        if ((ulonglong)((longlong)puVar29 - (longlong)local_168) < local_68) {
          if ((ulonglong)((longlong)puVar29 - local_a0) < local_68) {
            return 0xffffffffffffffec;
          }
          puVar25 = (undefined1 *)((longlong)puVar28 + ((longlong)local_a8 - (longlong)local_168));
          if (local_a8 < puVar25 + lVar19) {
            lVar20 = (longlong)local_a8 - (longlong)puVar25;
            FUN_18063aed0(puVar29,puVar25,lVar20);
            puVar29 = (undefined8 *)((longlong)puVar29 + lVar20);
            puVar28 = local_168;
            uVar27 = lVar19 - lVar20;
            goto LAB_1805e7e1c;
          }
          FUN_18063aed0(puVar29,puVar25,lVar19);
        }
        else {
          uVar27 = local_d8._8_8_;
LAB_1805e7e1c:
          if (local_c8 < 0x10) {
            if (local_c8 < 8) {
              *(undefined1 *)puVar29 = *(undefined1 *)puVar28;
              *(undefined1 *)((longlong)puVar29 + 1) = *(undefined1 *)((longlong)puVar28 + 1);
              *(undefined1 *)((longlong)puVar29 + 2) = *(undefined1 *)((longlong)puVar28 + 2);
              *(undefined1 *)((longlong)puVar29 + 3) = *(undefined1 *)((longlong)puVar28 + 3);
              uVar6 = *(uint *)(&DAT_1806886d8 + local_c8 * 4);
              *(undefined4 *)((longlong)puVar29 + 4) =
                   *(undefined4 *)((longlong)puVar28 + (ulonglong)uVar6);
              puVar28 = (undefined8 *)
                        ((longlong)((longlong)puVar28 + (ulonglong)uVar6) -
                        (longlong)*(int *)(&DAT_1806886f8 + local_c8 * 4));
            }
            else {
              *puVar29 = *puVar28;
            }
            if (8 < uVar27) {
              puVar24 = puVar29 + 1;
              puVar26 = puVar28 + 1;
              puVar13 = (undefined8 *)((longlong)puVar24 + (uVar27 - 8));
              if ((longlong)puVar24 - (longlong)puVar26 < 0x10) {
                lVar19 = (longlong)puVar26 - (longlong)puVar24;
                do {
                  *puVar24 = *(undefined8 *)(lVar19 + (longlong)puVar24);
                  puVar24 = puVar24 + 1;
                } while (puVar24 < puVar13);
              }
              else {
                uVar9 = puVar28[2];
                *puVar24 = *puVar26;
                puVar29[2] = uVar9;
                if (0x10 < (longlong)(uVar27 - 8)) {
                  puVar29 = puVar29 + 3;
                  puVar28 = puVar28 + 3;
                  do {
                    uVar9 = puVar28[1];
                    *puVar29 = *puVar28;
                    puVar29[1] = uVar9;
                    uVar9 = puVar28[3];
                    puVar29[2] = puVar28[2];
                    puVar29[3] = uVar9;
                    puVar29 = puVar29 + 4;
                    puVar28 = puVar28 + 4;
                  } while (puVar29 < puVar13);
                }
              }
            }
          }
          else {
            uVar9 = puVar28[1];
            *puVar29 = *puVar28;
            puVar29[1] = uVar9;
            if (0x10 < (longlong)uVar27) {
              puVar24 = puVar29 + 2;
              puVar28 = puVar28 + 2;
              do {
                uVar9 = puVar28[1];
                *puVar24 = *puVar28;
                puVar24[1] = uVar9;
                uVar9 = puVar28[3];
                puVar24[2] = puVar28[2];
                puVar24[3] = uVar9;
                puVar24 = puVar24 + 4;
                puVar28 = puVar28 + 4;
              } while (puVar24 < (undefined8 *)((longlong)puVar29 + uVar27));
            }
          }
        }
      }
      if (0xffffffffffffff88 < uVar18) {
        return uVar18;
      }
      local_198 = (undefined8 *)((longlong)local_198 + uVar18);
      param_6 = param_6 + -1;
      if (param_6 < 1) {
LAB_1805e85fb:
        if (param_6 != 0) {
          return 0xffffffffffffffec;
        }
      }
      else {
        do {
          uVar6 = *(uint *)(local_128 + 4 + local_b0 * 8);
          uVar18 = CONCAT44(0,uVar6);
          bVar15 = *(byte *)(local_128 + 2 + local_b0 * 8);
          uVar7 = *(uint *)(local_118 + 4 + local_88 * 8);
          local_d8._8_4_ = *(uint *)(local_108 + 4 + local_90 * 8);
          uVar27 = (ulonglong)(uint)local_d8._8_4_;
          bVar16 = *(byte *)(local_108 + 2 + local_90 * 8);
          bVar1 = *(byte *)(local_118 + 2 + local_88 * 8);
          local_d8._0_8_ = uVar18;
          local_d8._12_4_ = 0;
          bVar2 = *(byte *)(local_128 + 3 + local_b0 * 8);
          bVar3 = *(byte *)(local_108 + 3 + local_90 * 8);
          local_b4 = (uint)bVar3;
          bVar4 = *(byte *)(local_118 + 3 + local_88 * 8);
          local_b8 = (uint)bVar4;
          if (bVar1 < 2) {
            if (bVar1 != 0) {
              local_150 = uVar21 + 1;
              lVar19 = (ulonglong)((uVar6 == 0) + uVar7) -
                       ((longlong)(uVar23 << ((byte)uVar21 & 0x3f)) >> 0x3f);
              if (lVar19 == 3) {
                local_100[0] = (local_188 - 1) - (ulonglong)(local_188 - 1 == 0);
              }
              else {
                local_100[0] = local_100[lVar19] - (ulonglong)(local_100[lVar19] == 0);
                if (lVar19 == 1) goto LAB_1805e8138;
              }
              local_100[2] = local_100[1];
              goto LAB_1805e8138;
            }
            local_188 = local_100[uVar6 == 0];
            local_100[1] = *(ulonglong *)
                            ((longlong)local_100 + (ulonglong)(-(uint)(uVar6 != 0) & 8));
            local_100[0] = local_188;
          }
          else {
            local_150 = uVar21 + bVar1;
            local_100[0] = (ulonglong)uVar7 + ((uVar23 << ((byte)uVar21 & 0x3f)) >> (-bVar1 & 0x3f))
            ;
            local_100[2] = local_100[1];
LAB_1805e8138:
            local_100[1] = local_188;
            uVar21 = local_150;
            local_188 = local_100[0];
          }
          local_c8 = local_188;
          if (bVar16 != 0) {
            bVar14 = (byte)uVar21;
            uVar21 = uVar21 + bVar16;
            uVar27 = uVar27 + ((uVar23 << (bVar14 & 0x3f)) >> (-bVar16 & 0x3f));
            local_d8._8_8_ = uVar27;
            local_150 = uVar21;
          }
          if ((byte)(bVar16 + bVar1 + bVar15) < 0x1f) {
LAB_1805e8189:
          }
          else {
            if (0x40 < uVar21) {
              puVar22 = (ulonglong *)&DAT_180687dd0;
              local_148 = (ulonglong *)&DAT_180687dd0;
              goto LAB_1805e8189;
            }
            if (puVar22 < local_138) {
              if (puVar22 != local_160) {
                uVar12 = (ulonglong)(uVar21 >> 3);
                if ((ulonglong *)((longlong)puVar22 - uVar12) < local_160) {
                  uVar12 = (ulonglong)(uint)((int)puVar22 - (int)local_160);
                }
                puVar22 = (ulonglong *)((longlong)puVar22 - uVar12);
                uVar23 = *puVar22;
                uVar21 = uVar21 + (int)uVar12 * -8;
                local_158 = uVar23;
                local_150 = uVar21;
                local_148 = puVar22;
              }
            }
            else {
              puVar22 = (ulonglong *)((longlong)puVar22 - (ulonglong)(uVar21 >> 3));
              uVar21 = uVar21 & 7;
              uVar23 = *puVar22;
              local_158 = uVar23;
              local_150 = uVar21;
              local_148 = puVar22;
            }
          }
          if (bVar15 != 0) {
            bVar16 = (byte)uVar21;
            uVar21 = uVar21 + bVar15;
            uVar18 = uVar18 + ((uVar23 << (bVar16 & 0x3f)) >> (-bVar15 & 0x3f));
            local_d8._0_8_ = uVar18;
            local_150 = uVar21;
          }
          if (param_6 != 1) {
            iVar17 = uVar21 + bVar2;
            local_130 = (uVar23 >> (-(char)iVar17 & 0x3fU) & (1L << (bVar2 & 0x3f)) - 1U) +
                        (ulonglong)*(ushort *)(local_128 + local_b0 * 8);
            local_b0 = local_130;
            iVar17 = iVar17 + (uint)bVar3;
            local_110 = (uVar23 >> (-(char)iVar17 & 0x3fU) & (1L << (bVar3 & 0x3f)) - 1U) +
                        (ulonglong)*(ushort *)(local_108 + local_90 * 8);
            local_90 = local_110;
            uVar21 = (uint)bVar4 + iVar17;
            local_120 = (uVar23 >> (-(char)uVar21 & 0x3fU) & (1L << (bVar4 & 0x3f)) - 1U) +
                        (ulonglong)*(ushort *)(local_118 + local_88 * 8);
            local_88 = local_120;
            local_150 = uVar21;
            if (uVar21 < 0x41) {
              if (puVar22 < local_138) {
                if (puVar22 == local_160) goto LAB_1805e830e;
                uVar23 = (ulonglong)(uVar21 >> 3);
                if ((ulonglong *)((longlong)puVar22 - uVar23) < local_160) {
                  uVar23 = (ulonglong)(uint)((int)puVar22 - (int)local_160);
                }
                local_150 = uVar21 + (int)uVar23 * -8;
              }
              else {
                uVar23 = (ulonglong)(uVar21 >> 3);
                local_150 = uVar21 & 7;
              }
              puVar22 = (ulonglong *)((longlong)puVar22 - uVar23);
              uVar23 = *puVar22;
              local_158 = uVar23;
            }
            else {
              puVar22 = (ulonglong *)&DAT_180687dd0;
            }
            uVar21 = local_150;
            local_148 = puVar22;
          }
LAB_1805e830e:
          uVar12 = uVar18 + uVar27;
          puVar29 = (undefined8 *)((longlong)local_198 + uVar18);
          puVar28 = (undefined8 *)(uVar18 + (longlong)local_180);
          local_78 = local_d8;
          puVar24 = (undefined8 *)((longlong)puVar29 - local_188);
          local_68 = local_188;
          local_100[0] = local_188;
          if ((local_98 < puVar28) || (local_e8 + -4 < (undefined8 *)(uVar12 + (longlong)local_198))
             ) {
            uVar12 = FUN_1805e9140(local_198,local_e8,local_78,&local_170,local_98,local_168,
                                   local_a0,local_a8);
            local_180 = local_170;
          }
          else {
            uVar9 = local_180[1];
            *local_198 = *local_180;
            local_198[1] = uVar9;
            if (0x10 < uVar18) {
              uVar9 = local_180[3];
              local_198[2] = local_180[2];
              local_198[3] = uVar9;
              if (0x10 < (longlong)(uVar18 - 0x10)) {
                puVar13 = local_198 + 4;
                do {
                  uVar9 = local_180[5];
                  *puVar13 = local_180[4];
                  puVar13[1] = uVar9;
                  uVar9 = local_180[7];
                  puVar13[2] = local_180[6];
                  puVar13[3] = uVar9;
                  puVar13 = puVar13 + 4;
                  local_180 = local_180 + 4;
                } while (puVar13 < (undefined8 *)((longlong)(local_198 + 2) + (uVar18 - 0x10)));
              }
            }
            local_180 = puVar28;
            local_170 = puVar28;
            if ((ulonglong)((longlong)puVar29 - (longlong)local_168) < local_188) {
              if ((ulonglong)((longlong)puVar29 - local_a0) < local_188) {
                return 0xffffffffffffffec;
              }
              puVar25 = (undefined1 *)
                        ((longlong)puVar24 + ((longlong)local_a8 - (longlong)local_168));
              if (puVar25 + uVar27 <= local_a8) {
                FUN_18063aed0(puVar29,puVar25,uVar27);
                goto LAB_1805e85cd;
              }
              lVar19 = (longlong)local_a8 - (longlong)puVar25;
              FUN_18063aed0(puVar29,puVar25,lVar19);
              puVar29 = (undefined8 *)((longlong)puVar29 + lVar19);
              puVar24 = local_168;
              uVar18 = uVar27 - lVar19;
            }
            else {
              uVar18 = local_d8._8_8_;
            }
            if (local_68 < 0x10) {
              if (local_68 < 8) {
                *(undefined1 *)puVar29 = *(undefined1 *)puVar24;
                *(undefined1 *)((longlong)puVar29 + 1) = *(undefined1 *)((longlong)puVar24 + 1);
                *(undefined1 *)((longlong)puVar29 + 2) = *(undefined1 *)((longlong)puVar24 + 2);
                *(undefined1 *)((longlong)puVar29 + 3) = *(undefined1 *)((longlong)puVar24 + 3);
                uVar6 = *(uint *)(&DAT_1806886d8 + local_68 * 4);
                *(undefined4 *)((longlong)puVar29 + 4) =
                     *(undefined4 *)((longlong)puVar24 + (ulonglong)uVar6);
                puVar24 = (undefined8 *)
                          ((longlong)((longlong)puVar24 + (ulonglong)uVar6) -
                          (longlong)*(int *)(&DAT_1806886f8 + local_68 * 4));
              }
              else {
                *puVar29 = *puVar24;
              }
              if (8 < uVar18) {
                puVar28 = puVar29 + 1;
                puVar26 = puVar24 + 1;
                puVar13 = (undefined8 *)((longlong)puVar28 + (uVar18 - 8));
                if ((longlong)puVar28 - (longlong)puVar26 < 0x10) {
                  lVar19 = (longlong)puVar26 - (longlong)puVar28;
                  do {
                    *puVar28 = *(undefined8 *)((longlong)puVar28 + lVar19);
                    puVar28 = puVar28 + 1;
                  } while (puVar28 < puVar13);
                }
                else {
                  uVar9 = puVar24[2];
                  *puVar28 = *puVar26;
                  puVar29[2] = uVar9;
                  if (0x10 < (longlong)(uVar18 - 8)) {
                    puVar29 = puVar29 + 3;
                    puVar28 = puVar24 + 3;
                    do {
                      uVar9 = puVar28[1];
                      *puVar29 = *puVar28;
                      puVar29[1] = uVar9;
                      uVar9 = puVar28[3];
                      puVar29[2] = puVar28[2];
                      puVar29[3] = uVar9;
                      puVar29 = puVar29 + 4;
                      puVar28 = puVar28 + 4;
                    } while (puVar29 < puVar13);
                  }
                }
              }
            }
            else {
              uVar9 = puVar24[1];
              *puVar29 = *puVar24;
              puVar29[1] = uVar9;
              if (0x10 < (longlong)uVar18) {
                puVar28 = puVar29 + 2;
                puVar24 = puVar24 + 2;
                do {
                  uVar9 = puVar24[1];
                  *puVar28 = *puVar24;
                  puVar28[1] = uVar9;
                  uVar9 = puVar24[3];
                  puVar28[2] = puVar24[2];
                  puVar28[3] = uVar9;
                  puVar28 = puVar28 + 4;
                  puVar24 = puVar24 + 4;
                } while (puVar28 < (undefined8 *)((longlong)puVar29 + uVar18));
              }
            }
          }
LAB_1805e85cd:
          if (0xffffffffffffff88 < uVar12) {
            return uVar12;
          }
          local_198 = (undefined8 *)((longlong)local_198 + uVar12);
          param_6 = param_6 + -1;
        } while (param_6 != 0);
      }
LAB_1805e8601:
      if (puVar22 != local_160) {
        return 0xffffffffffffffec;
      }
      if (uVar21 != 0x40) {
        return 0xffffffffffffffec;
      }
      *(int *)((longlong)local_58 + 0x683c) = (int)local_188;
      *(int *)(local_58 + 0xd08) = (int)local_100[1];
      *(int *)((longlong)local_58 + 0x6844) = (int)local_100[2];
      param_2 = local_198;
      goto LAB_1805e8649;
    }
    puVar28 = (undefined8 *)((longlong)local_198 + uVar18);
    puVar24 = (undefined8 *)((longlong)puVar28 - local_188);
    uVar12 = uVar18 + uVar27;
    if ((local_98 < puVar29) || (puVar29 + -4 < (undefined8 *)(uVar12 + (longlong)local_198))) {
      uVar12 = FUN_1805e9280(local_198,local_e8,puVar29 + -4,local_d8,&local_170,local_98,local_168,
                             local_a0,local_a8);
      local_180 = local_170;
    }
    else {
      uVar9 = local_180[1];
      *local_198 = *local_180;
      local_198[1] = uVar9;
      if (0x10 < uVar18) {
        uVar9 = local_180[3];
        local_198[2] = local_180[2];
        local_198[3] = uVar9;
        if (0x10 < (longlong)(uVar18 - 0x10)) {
          puVar13 = local_198 + 4;
          do {
            uVar9 = local_180[5];
            *puVar13 = local_180[4];
            puVar13[1] = uVar9;
            uVar9 = local_180[7];
            puVar13[2] = local_180[6];
            puVar13[3] = uVar9;
            puVar13 = puVar13 + 4;
            local_180 = local_180 + 4;
          } while (puVar13 < (undefined8 *)((longlong)(local_198 + 2) + (uVar18 - 0x10)));
        }
      }
      local_180 = puVar29;
      local_170 = puVar29;
      if ((ulonglong)((longlong)puVar28 - (longlong)local_168) < local_188) {
        if ((ulonglong)((longlong)puVar28 - local_a0) < local_188) {
          return 0xffffffffffffffec;
        }
        puVar25 = (undefined1 *)((longlong)puVar24 + ((longlong)local_a8 - (longlong)local_168));
        if (puVar25 + uVar27 <= local_a8) {
          FUN_18063aed0(puVar28,puVar25,uVar27);
          goto LAB_1805e7c4f;
        }
        lVar19 = (longlong)local_a8 - (longlong)puVar25;
        FUN_18063aed0(puVar28,puVar25,lVar19);
        puVar28 = (undefined8 *)((longlong)puVar28 + lVar19);
        puVar24 = local_168;
        uVar18 = uVar27 - lVar19;
      }
      else {
        uVar18 = local_d8._8_8_;
      }
      if (local_c8 < 0x10) {
        if (local_c8 < 8) {
          *(undefined1 *)puVar28 = *(undefined1 *)puVar24;
          *(undefined1 *)((longlong)puVar28 + 1) = *(undefined1 *)((longlong)puVar24 + 1);
          *(undefined1 *)((longlong)puVar28 + 2) = *(undefined1 *)((longlong)puVar24 + 2);
          *(undefined1 *)((longlong)puVar28 + 3) = *(undefined1 *)((longlong)puVar24 + 3);
          uVar6 = *(uint *)(&DAT_1806886d8 + local_c8 * 4);
          *(undefined4 *)((longlong)puVar28 + 4) =
               *(undefined4 *)((longlong)puVar24 + (ulonglong)uVar6);
          puVar24 = (undefined8 *)
                    ((longlong)((longlong)puVar24 + (ulonglong)uVar6) -
                    (longlong)*(int *)(&DAT_1806886f8 + local_c8 * 4));
        }
        else {
          *puVar28 = *puVar24;
        }
        if (8 < uVar18) {
          puVar29 = puVar28 + 1;
          puVar26 = puVar24 + 1;
          puVar13 = (undefined8 *)((longlong)puVar29 + (uVar18 - 8));
          if ((longlong)puVar29 - (longlong)puVar26 < 0x10) {
            lVar19 = (longlong)puVar26 - (longlong)puVar29;
            do {
              *puVar29 = *(undefined8 *)((longlong)puVar29 + lVar19);
              puVar29 = puVar29 + 1;
            } while (puVar29 < puVar13);
          }
          else {
            uVar9 = puVar24[2];
            *puVar29 = *puVar26;
            puVar28[2] = uVar9;
            if (0x10 < (longlong)(uVar18 - 8)) {
              puVar28 = puVar28 + 3;
              puVar29 = puVar24 + 3;
              do {
                uVar9 = puVar29[1];
                *puVar28 = *puVar29;
                puVar28[1] = uVar9;
                uVar9 = puVar29[3];
                puVar28[2] = puVar29[2];
                puVar28[3] = uVar9;
                puVar28 = puVar28 + 4;
                puVar29 = puVar29 + 4;
              } while (puVar28 < puVar13);
            }
          }
        }
      }
      else {
        uVar9 = puVar24[1];
        *puVar28 = *puVar24;
        puVar28[1] = uVar9;
        if (0x10 < (longlong)uVar18) {
          puVar29 = puVar28 + 2;
          puVar24 = puVar24 + 2;
          do {
            uVar9 = puVar24[1];
            *puVar29 = *puVar24;
            puVar29[1] = uVar9;
            uVar9 = puVar24[3];
            puVar29[2] = puVar24[2];
            puVar29[3] = uVar9;
            puVar29 = puVar29 + 4;
            puVar24 = puVar24 + 4;
          } while (puVar29 < (undefined8 *)((longlong)puVar28 + uVar18));
        }
      }
    }
LAB_1805e7c4f:
    if (0xffffffffffffff88 < uVar12) {
      return uVar12;
    }
    local_198 = (undefined8 *)((longlong)local_198 + uVar12);
    param_6 = param_6 + -1;
    if (param_6 == 0) goto LAB_1805e8601;
  } while( true );
}



