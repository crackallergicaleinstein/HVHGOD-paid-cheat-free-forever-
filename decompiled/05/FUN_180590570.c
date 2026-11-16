// FUN_180590570 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180590570 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180590570(longlong *param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  undefined1 auVar11 [16];
  undefined8 *puVar12;
  ushort uVar13;
  ushort uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  uint uVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar25;
  uint uVar24;
  int *piVar26;
  ushort *puVar27;
  uint uVar28;
  uint uVar29;
  ulonglong uVar30;
  int *piVar31;
  uint uVar32;
  int *piVar33;
  longlong lVar34;
  uint *puVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 in_ZMM1 [64];
  undefined1 in_XMM4 [16];
  uint local_res20 [2];
  uint local_110;
  uint local_108;
  int local_104;
  uint local_f8;
  uint local_f4;
  longlong local_f0;
  ushort *local_e8;
  longlong local_e0;
  uint local_d8;
  uint local_d4;
  undefined1 *local_d0;
  undefined8 *local_c8;
  ushort *local_c0;
  int *local_b8;
  longlong local_b0;
  longlong local_a8;
  int *local_a0;
  uint *local_98;
  longlong local_90;
  longlong local_88;
  
  local_88 = *param_1;
  lVar34 = 0;
  uVar21 = *(uint *)((longlong)param_1 + 0x24);
  local_res20[0] = 0;
  plVar10 = *(longlong **)(local_88 + 0xa0);
  puVar35 = *(uint **)(local_88 + 0x408);
  lVar18 = plVar10[6];
  local_f8 = 0;
  local_e8 = (ushort *)0x0;
  local_c0 = (ushort *)0x0;
  uVar25 = (uint)*(ushort *)(param_2 + 2);
  uVar24 = uVar25 + 4;
  if (uVar24 != 0) {
    uVar30 = (ulonglong)uVar24;
    lVar16 = 0;
    do {
      lVar17 = lVar16 + 8;
      *(int *)(param_3 + -8 + lVar17) = *(int *)(lVar16 + *(longlong *)(param_2 + 8)) << 6;
      *(int *)(param_3 + -4 + lVar17) = *(int *)(lVar16 + 4 + *(longlong *)(param_2 + 8)) << 6;
      uVar30 = uVar30 - 1;
      lVar16 = lVar17;
    } while (uVar30 != 0);
  }
  lVar16 = 0;
  local_f0 = lVar18;
  local_98 = puVar35;
  if (*(char *)(local_88 + 0x401) == '\0') {
LAB_180591093:
    FUN_18057abd0(lVar18,local_e8);
LAB_18059109e:
    FUN_18057abd0(lVar18,lVar16);
LAB_1805910a9:
    FUN_180577d30(plVar10);
    uVar30 = (ulonglong)local_res20[0];
  }
  else {
    if (puVar35 == (uint *)0x0) {
      return 6;
    }
    if (uVar21 < puVar35[0x20]) {
      iVar7 = *(int *)(*(longlong *)(puVar35 + 0x22) + (ulonglong)(uVar21 + 1) * 4);
      iVar8 = *(int *)(*(longlong *)(puVar35 + 0x22) + (ulonglong)uVar21 * 4);
      if (iVar8 != iVar7) {
        uVar21 = iVar7 - iVar8;
        uVar30 = FUN_1805788b0(plVar10);
        local_res20[0] = (uint)uVar30;
        if (local_res20[0] != 0) {
          return uVar30;
        }
        uVar30 = FUN_180577bf0(plVar10,uVar21);
        local_res20[0] = (uint)uVar30;
        if (local_res20[0] != 0) {
          return uVar30;
        }
        lVar16 = plVar10[7];
        lVar17 = *plVar10;
        uVar13 = FUN_180577ed0(plVar10);
        uVar14 = FUN_180577ed0(plVar10);
        if ((uVar14 <= uVar21) && ((uVar13 & 0xfff) * 4 <= uVar21)) {
          local_108 = (uint)uVar14 + ((int)lVar16 - (int)lVar17);
          if ((short)uVar13 < 0) {
            uVar21 = (int)plVar10[7] - (int)*plVar10;
            if (local_108 < (uint)((int)plVar10[8] - (int)*plVar10)) {
              lVar16 = (ulonglong)local_108 + *plVar10;
            }
            else {
              lVar16 = plVar10[8];
            }
            plVar10[7] = lVar16;
            local_e8 = (ushort *)FUN_180592550(plVar10,&local_f8);
            local_108 = (int)plVar10[7] - (int)*plVar10;
            if (uVar21 < (uint)((int)plVar10[8] - (int)*plVar10)) {
              lVar16 = (ulonglong)uVar21 + *plVar10;
            }
            else {
              lVar16 = plVar10[8];
            }
            plVar10[7] = lVar16;
          }
          uVar30 = (ulonglong)(uVar24 * 8);
          uVar21 = *puVar35 * 0xc + 7 & 0xfffffff8;
          local_e0 = FUN_18057aad0(lVar18,uVar24 * 0x18 + (uVar25 + 0xb & 0xfffffff8) + uVar21,
                                   local_res20);
          if (local_res20[0] == 0) {
            piVar26 = (int *)((ulonglong)uVar21 + local_e0);
            lVar18 = uVar30 + (longlong)piVar26;
            local_c8 = (undefined8 *)(lVar18 + uVar30);
            local_d0 = (undefined1 *)((longlong)local_c8 + uVar30);
            local_a8 = lVar18;
            FUN_18063ab10(piVar26,0,(ulonglong)(uVar24 * 2) << 2);
            piVar2 = piVar26 + uVar24;
            uVar30 = (ulonglong)uVar24;
            local_90 = local_e0 + (ulonglong)*puVar35 * 4;
            local_b0 = local_90 + (ulonglong)*puVar35 * 4;
            if (uVar24 != 0) {
              lVar16 = 0;
              do {
                *(int *)(lVar16 + lVar18) = *(int *)(lVar16 + *(longlong *)(param_2 + 8)) << 0x10;
                *(int *)(lVar16 + 4 + lVar18) =
                     *(int *)(lVar16 + 4 + *(longlong *)(param_2 + 8)) << 0x10;
                uVar30 = uVar30 - 1;
                lVar16 = lVar16 + 8;
              } while (uVar30 != 0);
            }
            auVar11 = _DAT_18066a6b0;
            local_110 = 0;
            if ((uVar13 & 0xfff) == 0) {
LAB_180590eeb:
              if ((*(byte *)(local_88 + 0x410) & 2) != 0) {
                piVar26[uVar25] = 0;
                piVar2[uVar25] = 0;
                piVar26[uVar25 + 1] = 0;
                piVar2[uVar25 + 1] = 0;
              }
              if ((*(byte *)(local_88 + 0x410) & 0x10) != 0) {
                piVar26[uVar25 + 2] = 0;
                piVar2[uVar25 + 2] = 0;
                piVar26[uVar25 + 3] = 0;
                piVar2[uVar25 + 3] = 0;
              }
              if (uVar24 != 0) {
                uVar30 = (ulonglong)uVar24;
                piVar33 = piVar2;
                do {
                  lVar34 = lVar34 + 8;
                  piVar31 = (int *)(param_3 + -8 + lVar34);
                  *piVar31 = *piVar31 +
                             (*(int *)(((longlong)piVar26 - (longlong)piVar2) + (longlong)piVar33) +
                              0x200 >> 10);
                  piVar31 = (int *)(param_3 + -4 + lVar34);
                  *piVar31 = *piVar31 + (*piVar33 + 0x200 >> 10);
                  piVar31 = (int *)(*(longlong *)(param_2 + 8) + -8 + lVar34);
                  *piVar31 = *piVar31 +
                             (int)(short)((uint)(*(int *)(((longlong)piVar26 - (longlong)piVar2) +
                                                          -4 + (longlong)(piVar33 + 1)) + 0x8000) >>
                                         0x10);
                  piVar31 = (int *)(*(longlong *)(param_2 + 8) + -4 + lVar34);
                  *piVar31 = *piVar31 + (int)(short)((uint)(*piVar33 + 0x8000) >> 0x10);
                  uVar30 = uVar30 - 1;
                  piVar33 = piVar33 + 1;
                } while (uVar30 != 0);
              }
              if ((*(byte *)(local_88 + 0x410) & 2) == 0) {
                lVar34 = (ulonglong)(uVar25 + 1) * 8;
                param_1[0xb] = *(longlong *)((ulonglong)uVar25 * 8 + *(longlong *)(param_2 + 8));
                param_1[0xc] = *(longlong *)(lVar34 + *(longlong *)(param_2 + 8));
                uVar21 = (*(int *)(lVar34 + param_3) - *(int *)((ulonglong)uVar25 * 8 + param_3)) +
                         0x20;
                *(int *)(param_1 + 10) =
                     (int)((uVar21 & 0xffffffc0) + ((int)uVar21 >> 0x1f & 0x3fU)) >> 6;
              }
              if ((*(byte *)(local_88 + 0x410) & 0x10) == 0) {
                lVar34 = (ulonglong)(uVar25 + 2) * 8;
                lVar18 = (ulonglong)(uVar25 + 3) * 8;
                param_1[0x1f] = *(longlong *)(lVar34 + *(longlong *)(param_2 + 8));
                param_1[0x20] = *(longlong *)(lVar18 + *(longlong *)(param_2 + 8));
                uVar21 = (*(int *)(lVar18 + 4 + param_3) - *(int *)(lVar34 + 4 + param_3)) + 0x20;
                *(int *)((longlong)param_1 + 0xf4) =
                     (int)((uVar21 & 0xffffffc0) + ((int)uVar21 >> 0x1f & 0x3fU)) >> 6;
              }
            }
            else {
              lVar18 = plVar10[8];
              lVar16 = *(longlong *)(puVar35 + 0x1e);
              lVar17 = lVar18 - plVar10[7];
              pbVar23 = (byte *)plVar10[7];
              while (3 < lVar17) {
                pbVar22 = pbVar23 + 4;
                local_d4 = (uint)CONCAT11(*pbVar23,pbVar23[1]);
                bVar5 = pbVar23[2];
                bVar6 = pbVar23[3];
                uVar15 = (uint)bVar5 << 8;
                uVar21 = (uint)bVar6;
                lVar17 = 0;
                if ((bVar5 >> 6 & 1) == 0) {
                  lVar17 = lVar16;
                }
                if ((char)bVar5 < '\0') {
                  if ((uint)((int)lVar18 - (int)pbVar22) < *puVar35 * 2) break;
                  uVar28 = 0;
                  uVar32 = 0;
                  pbVar23 = pbVar22;
                  if (*puVar35 != 0) {
                    do {
                      pbVar22 = pbVar23 + 2;
                      uVar30 = (ulonglong)uVar28;
                      uVar28 = uVar28 + 1;
                      *(uint *)(local_e0 + uVar30 * 4) =
                           ((int)(short)((ushort)*pbVar23 << 8) | (uint)pbVar23[1]) << 2;
                      uVar32 = *puVar35;
                      pbVar23 = pbVar22;
                    } while (uVar28 < uVar32);
                  }
                  lVar17 = 0;
                  lVar18 = local_e0;
LAB_18059096c:
                  if ((bVar5 >> 6 & 1) != 0) {
                    if ((uint)((int)plVar10[8] - (int)pbVar22) < uVar32 * 4) break;
                    uVar29 = 0;
                    uVar28 = 0;
                    pbVar23 = pbVar22;
                    if (uVar32 != 0) {
                      do {
                        pbVar22 = pbVar23 + 2;
                        uVar30 = (ulonglong)uVar29;
                        uVar29 = uVar29 + 1;
                        *(uint *)(local_90 + uVar30 * 4) =
                             ((int)(short)((ushort)*pbVar23 << 8) | (uint)pbVar23[1]) << 2;
                        uVar28 = *puVar35;
                        pbVar23 = pbVar22;
                      } while (uVar29 < uVar28);
                    }
                    uVar32 = 0;
                    pbVar23 = pbVar22;
                    if (uVar28 != 0) {
                      do {
                        pbVar22 = pbVar23 + 2;
                        uVar30 = (ulonglong)uVar32;
                        uVar32 = uVar32 + 1;
                        *(uint *)(local_b0 + uVar30 * 4) =
                             ((int)(short)((ushort)*pbVar23 << 8) | (uint)pbVar23[1]) << 2;
                        pbVar23 = pbVar22;
                      } while (uVar32 < *puVar35);
                    }
                  }
                  local_104 = FUN_180591400(puVar35,CONCAT11(bVar5,bVar6),lVar18,local_90,local_b0);
                  if (lVar17 != 0) {
                    *(int *)(lVar17 + (ulonglong)(uVar15 & 0xfff | uVar21) * 4) = local_104;
                  }
                }
                else {
                  uVar28 = uVar15 & 0xfff | uVar21;
                  if (puVar35[0x1a] <= uVar28) break;
                  if ((lVar17 == 0) ||
                     (local_104 = *(int *)(lVar17 + (ulonglong)(uVar15 & 0xfff | uVar21) * 4),
                     local_104 == -0x20000)) {
                    uVar32 = *puVar35;
                    lVar18 = *(longlong *)(puVar35 + 0x1c) + (ulonglong)(uVar28 * uVar32) * 4;
                    goto LAB_18059096c;
                  }
                }
                auVar37._4_4_ = local_104;
                auVar37._0_4_ = local_104;
                if (local_104 != 0) {
                  local_d8 = (int)plVar10[7] - (int)*plVar10;
                  if (local_108 < (uint)((int)plVar10[8] - (int)*plVar10)) {
                    lVar18 = (ulonglong)local_108 + *plVar10;
                  }
                  else {
                    lVar18 = plVar10[8];
                  }
                  plVar10[7] = lVar18;
                  if ((bVar5 >> 5 & 1) == 0) {
                    local_f4 = local_f8;
                    puVar27 = local_e8;
                  }
                  else {
                    local_c0 = (ushort *)FUN_180592550(plVar10,&local_f4);
                    puVar27 = local_c0;
                  }
                  uVar21 = local_f4;
                  uVar15 = local_f4;
                  if (local_f4 == 0) {
                    uVar15 = uVar24;
                  }
                  local_b8 = (int *)FUN_1805923f0(plVar10,uVar15);
                  local_a0 = (int *)FUN_1805923f0(plVar10,uVar15);
                  lVar18 = local_a8;
                  puVar12 = local_c8;
                  if (((puVar27 != (ushort *)0x0) && (local_a0 != (int *)0x0)) &&
                     (local_b8 != (int *)0x0)) {
                    if (puVar27 == (ushort *)0xffffffffffffffff) {
                      uVar21 = 0;
                      if (uVar24 != 0) {
                        if ((1 < uVar24) && (5 < DAT_1808d5f60)) {
                          uVar15 = uVar25 + 3;
                          piVar33 = piVar2 + uVar15;
                          if (((((piVar26 + uVar15 < piVar2) || (piVar33 < piVar26)) &&
                               ((local_a0 + uVar15 < piVar2 || (piVar33 < local_a0)))) &&
                              ((local_b8 + uVar15 < piVar2 || (piVar33 < local_b8)))) &&
                             (((local_a0 + uVar15 < piVar26 || (piVar26 + uVar15 < local_a0)) &&
                              ((local_b8 + uVar15 < piVar26 || (piVar26 + (uVar25 + 3) < local_b8)))
                              ))) {
                            auVar37._8_8_ = 0;
                            in_XMM4 = pmovsxdq(in_XMM4,auVar37);
                            uVar15 = uVar21;
                            do {
                              uVar21 = uVar15 + 2;
                              auVar38 = pmovsxdq(in_ZMM1._0_16_,*(undefined8 *)(local_b8 + uVar15));
                              auVar37 = vpmullq_avx512vl(auVar38,in_XMM4);
                              auVar38 = pmovsxdq(auVar38,*(undefined8 *)(local_a0 + uVar15));
                              auVar38 = vpmullq_avx512vl(auVar38,in_XMM4);
                              auVar36 = vpsraq_avx512vl(auVar37,ZEXT416(0x3f));
                              auVar39._0_8_ = auVar36._0_8_ + auVar37._0_8_ + 0x8000;
                              auVar39._8_8_ = auVar36._8_8_ + auVar37._8_8_ + 0x8000;
                              auVar37 = vpsraq_avx512vl(auVar39,ZEXT416(0x10));
                              auVar37 = pshufb(auVar37,auVar11);
                              *(ulonglong *)(piVar26 + uVar15) =
                                   CONCAT44(auVar37._4_4_ +
                                            (int)((ulonglong)*(undefined8 *)(piVar26 + uVar15) >>
                                                 0x20),
                                            auVar37._0_4_ + (int)*(undefined8 *)(piVar26 + uVar15));
                              auVar37 = vpsraq_avx512vl(auVar38,ZEXT416(0x3f));
                              auVar36._0_8_ = auVar37._0_8_ + auVar38._0_8_ + 0x8000;
                              auVar36._8_8_ = auVar37._8_8_ + auVar38._8_8_ + 0x8000;
                              in_ZMM1 = ZEXT1664(auVar36);
                              auVar37 = vpsraq_avx512vl(auVar36,ZEXT416(0x10));
                              auVar37 = pshufb(auVar37,auVar11);
                              *(ulonglong *)(piVar2 + uVar15) =
                                   CONCAT44(auVar37._4_4_ +
                                            (int)((ulonglong)*(undefined8 *)(piVar2 + uVar15) >>
                                                 0x20),
                                            auVar37._0_4_ + (int)*(undefined8 *)(piVar2 + uVar15));
                              uVar15 = uVar21;
                            } while (uVar21 < (uVar24 & 0xfffffffe));
                            if (uVar24 <= uVar21) goto LAB_180590ccc;
                          }
                        }
                        uVar30 = (ulonglong)(uVar24 - uVar21);
                        piVar33 = piVar26 + uVar21;
                        do {
                          iVar7 = *(int *)((longlong)piVar33 +
                                          ((longlong)piVar2 - (longlong)piVar26));
                          lVar18 = (longlong)
                                   *(int *)((longlong)local_b8 +
                                           (longlong)piVar33 +
                                           (((longlong)local_a0 - (longlong)piVar26) -
                                           (longlong)local_a0)) * (longlong)local_104;
                          lVar16 = (longlong)
                                   *(int *)(((longlong)local_a0 - (longlong)piVar26) +
                                           (longlong)piVar33) * (longlong)local_104;
                          *piVar33 = *piVar33 +
                                     (int)((ulonglong)(lVar18 + (lVar18 >> 0x3f) + 0x8000) >> 0x10);
                          *(int *)((longlong)piVar33 + ((longlong)piVar2 - (longlong)piVar26)) =
                               (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >> 0x10) +
                               iVar7;
                          uVar30 = uVar30 - 1;
                          piVar33 = piVar33 + 1;
                        } while (uVar30 != 0);
                      }
                    }
                    else {
                      if (uVar24 != 0) {
                        uVar30 = (ulonglong)uVar24;
                        puVar19 = local_c8;
                        puVar20 = local_d0;
                        do {
                          *puVar20 = 0;
                          puVar20 = puVar20 + 1;
                          *puVar19 = *(undefined8 *)
                                      ((longlong)puVar19 + (local_a8 - (longlong)local_c8));
                          puVar19 = puVar19 + 1;
                          uVar30 = uVar30 - 1;
                        } while (uVar30 != 0);
                      }
                      if (uVar21 != 0) {
                        uVar30 = (ulonglong)uVar21;
                        piVar33 = local_a0;
                        do {
                          uVar14 = *puVar27;
                          if (uVar14 < uVar24) {
                            local_d0[uVar14] = 1;
                            piVar31 = (int *)(local_c8 + uVar14);
                            lVar16 = (longlong)
                                     *(int *)((longlong)piVar33 +
                                             ((longlong)local_b8 - (longlong)local_a0)) *
                                     (longlong)local_104;
                            *piVar31 = *piVar31 +
                                       (int)((ulonglong)(lVar16 + (lVar16 >> 0x3f) + 0x8000) >> 0x10
                                            );
                            lVar16 = (longlong)*piVar33 * (longlong)local_104;
                            piVar31[1] = piVar31[1] +
                                         (int)((ulonglong)(lVar16 + 0x8000 + (lVar16 >> 0x3f)) >>
                                              0x10);
                          }
                          puVar27 = puVar27 + 1;
                          piVar33 = piVar33 + 1;
                          uVar30 = uVar30 - 1;
                        } while (uVar30 != 0);
                        puVar35 = local_98;
                      }
                      FUN_180594dd0(param_2,local_c8,local_a8,local_d0);
                      if (uVar24 != 0) {
                        uVar30 = (ulonglong)uVar24;
                        piVar33 = (int *)(lVar18 + 4);
                        lVar18 = (longlong)puVar12 - lVar18;
                        piVar31 = piVar2;
                        do {
                          iVar7 = *(int *)(lVar18 + (longlong)piVar33);
                          iVar8 = *piVar33;
                          iVar9 = *piVar31;
                          piVar3 = (int *)(lVar18 + -4 + (longlong)piVar33);
                          piVar1 = piVar33 + -1;
                          piVar33 = piVar33 + 2;
                          piVar4 = (int *)((longlong)piVar31 +
                                          ((longlong)piVar26 - (longlong)piVar2));
                          *piVar4 = *piVar4 + (*piVar3 - *piVar1);
                          *piVar31 = iVar9 + (iVar7 - iVar8);
                          uVar30 = uVar30 - 1;
                          piVar31 = piVar31 + 1;
                        } while (uVar30 != 0);
                      }
                    }
                  }
LAB_180590ccc:
                  lVar18 = local_f0;
                  if (local_c0 != (ushort *)0xffffffffffffffff) {
                    FUN_18057abd0(local_f0,local_c0);
                    local_c0 = (ushort *)0x0;
                  }
                  FUN_18057abd0(lVar18,local_b8);
                  FUN_18057abd0(lVar18,local_a0);
                  if (local_d8 < (uint)((int)plVar10[8] - (int)*plVar10)) {
                    lVar18 = (ulonglong)local_d8 + *plVar10;
                  }
                  else {
                    lVar18 = plVar10[8];
                  }
                  plVar10[7] = lVar18;
                }
                local_110 = local_110 + 1;
                if ((uVar13 & 0xfff) <= local_110) goto LAB_180590eeb;
                local_108 = local_108 + local_d4;
                lVar18 = plVar10[8];
                lVar16 = *(longlong *)(puVar35 + 0x1e);
                pbVar23 = pbVar22;
                lVar17 = lVar18 - (longlong)pbVar22;
              }
              local_res20[0] = 8;
            }
            lVar18 = local_f0;
          }
          lVar16 = local_e0;
          if (local_e8 != (ushort *)0xffffffffffffffff) goto LAB_180591093;
          goto LAB_18059109e;
        }
        local_res20[0] = 8;
        goto LAB_1805910a9;
      }
    }
    uVar30 = 0;
  }
                    /* WARNING: Read-only address (ram,0x00018066a6b0) is written */
  return uVar30;
}



