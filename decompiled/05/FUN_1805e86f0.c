// FUN_1805e86f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e86f0 */

ulonglong FUN_1805e86f0(longlong *param_1,undefined8 *param_2,longlong param_3,ulonglong *param_4,
                       ulonglong param_5,int param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  byte bVar16;
  byte bVar17;
  int iVar18;
  longlong lVar19;
  ulonglong *puVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  ulonglong local_188;
  undefined8 *local_180;
  undefined8 *local_170;
  ulonglong local_158;
  uint local_150;
  ulonglong *local_148;
  ulonglong local_100 [4];
  undefined8 *local_e0;
  uint local_d8;
  uint local_d4;
  undefined8 *local_d0;
  undefined8 *local_c8;
  ulonglong local_c0;
  undefined8 *local_b8;
  ulonglong local_b0;
  ulonglong *local_a8;
  undefined1 *local_a0;
  longlong local_98;
  ulonglong local_90;
  ulonglong uStack_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  longlong *local_58;
  undefined8 *local_50;
  
  local_58 = param_1;
  local_a8 = param_4;
  local_50 = param_2;
  if ((int)param_1[0xed6] == 0) {
    local_e0 = (undefined8 *)((longlong)param_2 + param_3);
    if (param_3 < 1) {
      local_e0 = param_2;
    }
  }
  else {
    local_e0 = (undefined8 *)param_1[0xed4];
  }
  local_d0 = (undefined8 *)param_1[0xe99];
  local_180 = (undefined8 *)param_1[0xeb5];
  local_98 = param_1[0xe9a];
  local_a0 = (undefined1 *)param_1[0xe9b];
  local_c8 = local_180;
  local_b8 = (undefined8 *)(param_1[0xeb9] + (longlong)local_180);
  if (param_6 == 0) {
LAB_1805e90c9:
    puVar24 = local_50;
    uVar12 = (longlong)local_b8 - (longlong)local_180;
    if ((ulonglong)((longlong)local_e0 - (longlong)param_2) < uVar12) {
      uVar12 = 0xffffffffffffffba;
    }
    else {
      if (param_2 != (undefined8 *)0x0) {
        FUN_18063aed0(param_2,local_180,uVar12);
        param_2 = (undefined8 *)((longlong)param_2 + uVar12);
      }
      uVar12 = (longlong)param_2 - (longlong)puVar24;
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x7534) = 1;
    local_188 = (ulonglong)*(uint *)((longlong)param_1 + 0x683c);
    local_100[0] = local_188;
    local_100[1] = (ulonglong)*(uint *)(param_1 + 0xd08);
    local_100[2] = (ulonglong)*(uint *)((longlong)param_1 + 0x6844);
    if (param_5 != 0) {
      puVar20 = param_4 + 1;
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
        bVar1 = *(byte *)((longlong)param_4 + (param_5 - 1));
        if (bVar1 != 0) {
          iVar18 = 0x1f;
          if (bVar1 != 0) {
            for (; bVar1 >> iVar18 == 0; iVar18 = iVar18 + -1) {
            }
          }
          iVar18 = (8 - iVar18) + (8 - (int)param_5) * 8;
          local_148 = param_4;
LAB_1805e88dd:
          lVar8 = *param_1;
          local_150 = iVar18 + *(int *)(lVar8 + 4);
          local_100[3] = local_158 >> (-(char)local_150 & 0x3fU) &
                         (1L << ((byte)*(undefined4 *)(lVar8 + 4) & 0x3f)) - 1U;
          iVar18 = (int)param_4;
          if (local_150 < 0x41) {
            if (local_148 < puVar20) {
              if (local_148 == param_4) goto LAB_1805e8963;
              uVar12 = (ulonglong)(local_150 >> 3);
              if ((ulonglong *)((longlong)local_148 - uVar12) < param_4) {
                uVar12 = (ulonglong)(uint)((int)local_148 - iVar18);
              }
              local_150 = local_150 + (int)uVar12 * -8;
            }
            else {
              uVar12 = (ulonglong)(local_150 >> 3);
              local_150 = local_150 & 7;
            }
            local_148 = (ulonglong *)((longlong)local_148 - uVar12);
            local_158 = *local_148;
          }
          else {
            local_148 = (ulonglong *)&DAT_180687dd0;
          }
LAB_1805e8963:
          lVar9 = param_1[2];
          local_150 = *(int *)(lVar9 + 4) + local_150;
          local_b0 = local_158 >> (-(char)local_150 & 0x3fU) &
                     (1L << ((byte)*(int *)(lVar9 + 4) & 0x3f)) - 1U;
          if (local_150 < 0x41) {
            if (local_148 < puVar20) {
              if (local_148 == param_4) goto LAB_1805e89f3;
              uVar12 = (ulonglong)(local_150 >> 3);
              if ((ulonglong *)((longlong)local_148 - uVar12) < param_4) {
                uVar12 = (ulonglong)(uint)((int)local_148 - iVar18);
              }
              local_150 = local_150 + (int)uVar12 * -8;
            }
            else {
              uVar12 = (ulonglong)(local_150 >> 3);
              local_150 = local_150 & 7;
            }
            local_148 = (ulonglong *)((longlong)local_148 - uVar12);
            local_158 = *local_148;
          }
          else {
            local_148 = (ulonglong *)&DAT_180687dd0;
          }
LAB_1805e89f3:
          lVar10 = param_1[1];
          local_150 = local_150 + *(int *)(lVar10 + 4);
          local_c0 = local_158 >> (-(char)local_150 & 0x3fU) &
                     (1L << ((byte)*(int *)(lVar10 + 4) & 0x3f)) - 1U;
          if (local_150 < 0x41) {
            if (local_148 < puVar20) {
              if (local_148 == param_4) goto LAB_1805e8a84;
              uVar12 = (ulonglong)(local_150 >> 3);
              if ((ulonglong *)((longlong)local_148 - uVar12) < param_4) {
                uVar12 = (ulonglong)(uint)((int)local_148 - iVar18);
              }
              local_150 = local_150 + (int)uVar12 * -8;
            }
            else {
              uVar12 = (ulonglong)(local_150 >> 3);
              local_150 = local_150 & 7;
            }
            local_148 = (ulonglong *)((longlong)local_148 - uVar12);
            local_158 = *local_148;
          }
          else {
            local_148 = (ulonglong *)&DAT_180687dd0;
          }
LAB_1805e8a84:
          local_170 = param_2;
          do {
            puVar20 = local_a8;
            uStack_88 = (ulonglong)*(uint *)(lVar10 + 0xc + local_c0 * 8);
            uVar6 = *(uint *)(lVar8 + 0xc + local_100[3] * 8);
            bVar1 = *(byte *)(lVar8 + 10 + local_100[3] * 8);
            bVar17 = *(byte *)(lVar10 + 10 + local_c0 * 8);
            bVar2 = *(byte *)(lVar9 + 10 + local_b0 * 8);
            uVar7 = *(uint *)(lVar9 + 0xc + local_b0 * 8);
            local_90 = (ulonglong)uVar6;
            bVar3 = *(byte *)(lVar8 + 0xb + local_100[3] * 8);
            bVar4 = *(byte *)(lVar10 + 0xb + local_c0 * 8);
            local_d8 = (uint)bVar4;
            bVar5 = *(byte *)(lVar9 + 0xb + local_b0 * 8);
            local_d4 = (uint)bVar5;
            bVar16 = (byte)local_150;
            if (bVar2 < 2) {
              if (bVar2 != 0) {
                local_150 = local_150 + 1;
                lVar19 = (ulonglong)((uVar6 == 0) + uVar7) -
                         ((longlong)(local_158 << (bVar16 & 0x3f)) >> 0x3f);
                if (lVar19 == 3) {
                  local_100[0] = (local_188 - 1) - (ulonglong)(local_188 - 1 == 0);
                }
                else {
                  local_100[0] = local_100[lVar19] - (ulonglong)(local_100[lVar19] == 0);
                  if (lVar19 == 1) goto LAB_1805e8bdc;
                }
                local_100[2] = local_100[1];
                goto LAB_1805e8bdc;
              }
              local_188 = local_100[uVar6 == 0];
              local_100[1] = *(ulonglong *)
                              ((longlong)local_100 + (ulonglong)(-(uint)(uVar6 != 0) & 8));
              local_100[0] = local_188;
            }
            else {
              local_150 = local_150 + bVar2;
              local_100[0] = (ulonglong)uVar7 + ((local_158 << (bVar16 & 0x3f)) >> (-bVar2 & 0x3f));
              local_100[2] = local_100[1];
LAB_1805e8bdc:
              local_100[1] = local_188;
              local_188 = local_100[0];
            }
            local_80 = local_188;
            if (bVar17 != 0) {
              bVar16 = (byte)local_150;
              local_150 = local_150 + bVar17;
              uStack_88 = uStack_88 + ((local_158 << (bVar16 & 0x3f)) >> (-bVar17 & 0x3f));
            }
            uVar12 = uStack_88;
            if (0x1e < (byte)(bVar17 + bVar2 + bVar1)) {
              if (local_150 < 0x41) {
                if (local_148 < local_a8 + 1) {
                  if (local_148 == local_a8) goto LAB_1805e8c71;
                  uVar15 = (ulonglong)(local_150 >> 3);
                  if ((ulonglong *)((longlong)local_148 - uVar15) < local_a8) {
                    uVar15 = (ulonglong)(uint)((int)local_148 - (int)local_a8);
                  }
                  local_150 = local_150 + (int)uVar15 * -8;
                }
                else {
                  uVar15 = (ulonglong)(local_150 >> 3);
                  local_150 = local_150 & 7;
                }
                local_148 = (ulonglong *)((longlong)local_148 - uVar15);
                local_158 = *local_148;
              }
              else {
                local_148 = (ulonglong *)&DAT_180687dd0;
              }
            }
LAB_1805e8c71:
            if (bVar1 != 0) {
              bVar17 = (byte)local_150;
              local_150 = local_150 + bVar1;
              local_90 = (ulonglong)uVar6 + ((local_158 << (bVar17 & 0x3f)) >> (-bVar1 & 0x3f));
            }
            if (param_6 != 1) {
              iVar18 = local_150 + bVar3;
              local_100[3] = (local_158 >> (-(char)iVar18 & 0x3fU) & (1L << (bVar3 & 0x3f)) - 1U) +
                             (ulonglong)*(ushort *)(lVar8 + 8 + local_100[3] * 8);
              iVar18 = (uint)bVar4 + iVar18;
              local_c0 = (local_158 >> (-(char)iVar18 & 0x3fU) & (1L << (bVar4 & 0x3f)) - 1U) +
                         (ulonglong)*(ushort *)(lVar10 + 8 + local_c0 * 8);
              local_150 = iVar18 + (uint)bVar5;
              local_b0 = (local_158 >> (-(char)local_150 & 0x3fU) & (1L << (bVar5 & 0x3f)) - 1U) +
                         (ulonglong)*(ushort *)(lVar9 + 8 + local_b0 * 8);
              if (local_150 < 0x41) {
                if (local_148 < local_a8 + 1) {
                  if (local_148 == local_a8) goto LAB_1805e8d8f;
                  uVar15 = (ulonglong)(local_150 >> 3);
                  if ((ulonglong *)((longlong)local_148 - uVar15) < local_a8) {
                    uVar15 = (ulonglong)(uint)((int)local_148 - (int)local_a8);
                  }
                  local_150 = local_150 + (int)uVar15 * -8;
                }
                else {
                  uVar15 = (ulonglong)(local_150 >> 3);
                  local_150 = local_150 & 7;
                }
                local_148 = (ulonglong *)((longlong)local_148 - uVar15);
                local_158 = *local_148;
              }
              else {
                local_148 = (ulonglong *)&DAT_180687dd0;
              }
            }
LAB_1805e8d8f:
            uVar15 = local_90 + uStack_88;
            puVar14 = (undefined8 *)(local_90 + (longlong)local_180);
            puVar24 = (undefined8 *)(local_90 + (longlong)local_170);
            local_78 = local_90;
            uStack_70 = uStack_88;
            local_68 = local_188;
            puVar21 = (undefined8 *)((longlong)puVar24 - local_188);
            local_100[0] = local_188;
            if ((local_b8 < puVar14) ||
               (local_e0 + -4 < (undefined8 *)(uVar15 + (longlong)local_170))) {
              uVar15 = FUN_1805e9140(local_170,local_e0,&local_78,&local_c8,local_b8,local_d0,
                                     local_98,local_a0);
              local_180 = local_c8;
            }
            else {
              uVar11 = local_180[1];
              *local_170 = *local_180;
              local_170[1] = uVar11;
              if (0x10 < local_90) {
                uVar11 = local_180[3];
                local_170[2] = local_180[2];
                local_170[3] = uVar11;
                if (0x10 < (longlong)(local_90 - 0x10)) {
                  puVar13 = local_170 + 4;
                  do {
                    uVar11 = local_180[5];
                    *puVar13 = local_180[4];
                    puVar13[1] = uVar11;
                    uVar11 = local_180[7];
                    puVar13[2] = local_180[6];
                    puVar13[3] = uVar11;
                    puVar13 = puVar13 + 4;
                    local_180 = local_180 + 4;
                  } while (puVar13 < (undefined8 *)((longlong)(local_170 + 2) + (local_90 - 0x10)));
                }
              }
              local_c8 = puVar14;
              local_180 = puVar14;
              if ((ulonglong)((longlong)puVar24 - (longlong)local_d0) < local_188) {
                if ((ulonglong)((longlong)puVar24 - local_98) < local_188) {
                  return 0xffffffffffffffec;
                }
                puVar22 = (undefined1 *)
                          ((longlong)puVar21 + ((longlong)local_a0 - (longlong)local_d0));
                if (puVar22 + uStack_88 <= local_a0) {
                  FUN_18063aed0(puVar24,puVar22,uStack_88);
                  goto LAB_1805e904d;
                }
                lVar19 = (longlong)local_a0 - (longlong)puVar22;
                FUN_18063aed0(puVar24,puVar22,lVar19);
                puVar24 = (undefined8 *)((longlong)puVar24 + lVar19);
                puVar21 = local_d0;
                uVar12 = uVar12 - lVar19;
              }
              else {
              }
              puVar20 = local_a8;
              if (local_68 < 0x10) {
                if (local_68 < 8) {
                  *(undefined1 *)puVar24 = *(undefined1 *)puVar21;
                  *(undefined1 *)((longlong)puVar24 + 1) = *(undefined1 *)((longlong)puVar21 + 1);
                  *(undefined1 *)((longlong)puVar24 + 2) = *(undefined1 *)((longlong)puVar21 + 2);
                  *(undefined1 *)((longlong)puVar24 + 3) = *(undefined1 *)((longlong)puVar21 + 3);
                  uVar6 = *(uint *)(&DAT_1806886d8 + local_68 * 4);
                  *(undefined4 *)((longlong)puVar24 + 4) =
                       *(undefined4 *)((longlong)puVar21 + (ulonglong)uVar6);
                  puVar21 = (undefined8 *)
                            ((longlong)((longlong)puVar21 + (ulonglong)uVar6) -
                            (longlong)*(int *)(&DAT_1806886f8 + local_68 * 4));
                }
                else {
                  *puVar24 = *puVar21;
                }
                if (8 < uVar12) {
                  puVar14 = puVar24 + 1;
                  puVar23 = puVar21 + 1;
                  puVar13 = (undefined8 *)((longlong)puVar14 + (uVar12 - 8));
                  if ((longlong)puVar14 - (longlong)puVar23 < 0x10) {
                    lVar19 = (longlong)puVar23 - (longlong)puVar14;
                    do {
                      *puVar14 = *(undefined8 *)((longlong)puVar14 + lVar19);
                      puVar14 = puVar14 + 1;
                    } while (puVar14 < puVar13);
                  }
                  else {
                    uVar11 = puVar21[2];
                    *puVar14 = *puVar23;
                    puVar24[2] = uVar11;
                    if (0x10 < (longlong)(uVar12 - 8)) {
                      puVar24 = puVar24 + 3;
                      puVar14 = puVar21 + 3;
                      do {
                        uVar11 = puVar14[1];
                        *puVar24 = *puVar14;
                        puVar24[1] = uVar11;
                        uVar11 = puVar14[3];
                        puVar24[2] = puVar14[2];
                        puVar24[3] = uVar11;
                        puVar24 = puVar24 + 4;
                        puVar14 = puVar14 + 4;
                      } while (puVar24 < puVar13);
                    }
                  }
                }
              }
              else {
                uVar11 = puVar21[1];
                *puVar24 = *puVar21;
                puVar24[1] = uVar11;
                if (0x10 < (longlong)uVar12) {
                  puVar14 = puVar24 + 2;
                  puVar21 = puVar21 + 2;
                  do {
                    uVar11 = puVar21[1];
                    *puVar14 = *puVar21;
                    puVar14[1] = uVar11;
                    uVar11 = puVar21[3];
                    puVar14[2] = puVar21[2];
                    puVar14[3] = uVar11;
                    puVar14 = puVar14 + 4;
                    puVar21 = puVar21 + 4;
                  } while (puVar14 < (undefined8 *)((longlong)puVar24 + uVar12));
                }
              }
            }
LAB_1805e904d:
            if (0xffffffffffffff88 < uVar15) {
              return uVar15;
            }
            param_2 = (undefined8 *)((longlong)local_170 + uVar15);
            param_6 = param_6 + -1;
            local_170 = param_2;
          } while (param_6 != 0);
          if ((local_148 == puVar20) && (local_150 == 0x40)) {
            *(int *)((longlong)local_58 + 0x683c) = (int)local_188;
            *(int *)(local_58 + 0xd08) = (int)local_100[1];
            *(int *)((longlong)local_58 + 0x6844) = (int)local_100[2];
            goto LAB_1805e90c9;
          }
        }
      }
      else {
        bVar1 = *(byte *)((longlong)param_4 + (param_5 - 1));
        local_148 = (ulonglong *)((longlong)param_4 + (param_5 - 8));
        local_158 = *local_148;
        if (bVar1 != 0) {
          iVar18 = 0x1f;
          if (bVar1 != 0) {
            for (; bVar1 >> iVar18 == 0; iVar18 = iVar18 + -1) {
            }
          }
          iVar18 = 8 - iVar18;
          if (param_5 < 0xffffffffffffff89) goto LAB_1805e88dd;
        }
      }
    }
    uVar12 = 0xffffffffffffffec;
  }
  return uVar12;
}



