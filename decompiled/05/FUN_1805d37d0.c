// FUN_1805d37d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d37d0 */

int FUN_1805d37d0(longlong *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  byte bVar3;
  short *psVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  longlong *plVar14;
  uint *puVar15;
  longlong lVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  uint *puVar19;
  byte bVar20;
  int iVar21;
  undefined8 *puVar22;
  uint uVar23;
  longlong lVar24;
  char cVar25;
  uint uVar26;
  int *piVar27;
  ulonglong uVar28;
  int iVar29;
  longlong lVar30;
  uint *puVar31;
  int iVar32;
  byte bVar33;
  char cVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  longlong lVar39;
  int local_res18 [2];
  longlong local_res20;
  undefined8 *local_118;
  uint local_110;
  int local_10c;
  uint *local_108;
  undefined8 local_100;
  uint local_f8;
  undefined8 *local_e8;
  uint local_e0;
  uint *local_d8;
  uint local_d0;
  uint *local_c8;
  undefined8 *local_b8;
  uint local_b0;
  int local_a8;
  uint *local_a0;
  uint *local_98;
  longlong *local_90;
  uint *local_88;
  undefined8 local_78;
  uint *local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  
  puVar15 = (uint *)0x0;
  local_88 = (uint *)0x0;
  local_90 = (longlong *)0x0;
  if (param_1 == (longlong *)0x0) {
    return 6;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  psVar4 = (short *)param_2[1];
  if (psVar4 == (short *)0x0) {
    return 0x14;
  }
  if (psVar4[1] == 0) {
    return 0;
  }
  if (*psVar4 == 0) {
    return 0;
  }
  if (*(longlong *)(psVar4 + 0xc) == 0) {
    return 0x14;
  }
  if (*(longlong *)(psVar4 + 4) == 0) {
    return 0x14;
  }
  if (0x1e < *(int *)(param_2 + 10) - 2U) {
    return 6;
  }
  lVar39 = *param_1;
  if (lVar39 == 0) {
    return 0x20;
  }
  uVar9 = FUN_1805763d0(psVar4);
  local_res20 = CONCAT44(local_res20._4_4_,uVar9);
  cVar2 = *(char *)((longlong)param_2 + 0x54);
  cVar25 = *(char *)((longlong)param_2 + 0x55);
  local_res18[0] = 0;
  plVar14 = (longlong *)FUN_18057abe0(lVar39,0x10,local_res18);
  if (local_res18[0] != 0) {
    return local_res18[0];
  }
  *plVar14 = 0;
  plVar14[1] = 0;
  *plVar14 = lVar39;
  if (plVar14 == (longlong *)0x0) {
    return 6;
  }
  local_90 = plVar14;
  iVar10 = FUN_180575a40(psVar4,&PTR_FUN_180685670,plVar14);
  if (iVar10 != 0) {
    return iVar10;
  }
  puVar31 = (uint *)*param_2;
  local_a8 = *(int *)(param_2 + 10);
  local_a0 = puVar31;
  if (*(char *)((longlong)param_2 + 0x56) == '\0') {
    lVar39 = *plVar14;
    local_108 = (uint *)0x0;
    if (lVar39 == 0) {
      return 6;
    }
    local_100 = (uint *)plVar14[1];
    if (local_100 != (uint *)0x0) {
      do {
        local_d8 = local_100;
        puVar22 = *(undefined8 **)(local_100 + 2);
        local_c8 = local_100 + 2;
        local_118 = (undefined8 *)0x0;
        if (puVar22 != (undefined8 *)0x0) {
          do {
            iVar10 = *(int *)(puVar22 + 4);
            if (iVar10 == 1) {
              local_res18[0] = 0;
              puVar18 = (undefined8 *)FUN_18057abe0(lVar39,0x30,local_res18);
              if (local_res18[0] != 0) goto LAB_1805d40ba;
              *puVar18 = 0;
              puVar18[1] = 0;
              puVar18[2] = 0;
              puVar18[3] = 0;
              puVar18[4] = 0;
              puVar18[5] = 0;
              uVar17 = puVar22[1];
              *puVar18 = *puVar22;
              puVar18[1] = uVar17;
              uVar17 = puVar22[3];
              puVar18[2] = puVar22[2];
              puVar18[3] = uVar17;
              uVar17 = puVar22[5];
              puVar18[4] = puVar22[4];
              puVar18[5] = uVar17;
              puVar18[5] = local_118;
              local_118 = puVar18;
            }
            else {
              if (iVar10 == 2) {
                local_68 = puVar22[1];
                local_78 = (undefined8 *)*puVar22;
                local_70 = (uint *)puVar22[2];
                iVar10 = (int)((ulonglong)local_70 >> 0x20);
                uVar38 = (int)local_68 + (int)local_70 * -2 + (int)local_78;
                iVar11 = 1;
                if ((int)uVar38 < 0) {
                  uVar38 = ((int)local_70 * 2 - (int)local_68) - (int)local_78;
                }
                iVar13 = (int)((ulonglong)local_78 >> 0x20);
                iVar12 = (int)((ulonglong)local_68 >> 0x20);
                uVar23 = iVar13 + iVar10 * -2 + iVar12;
                if ((int)uVar23 < 0) {
                  uVar23 = (iVar10 * 2 - iVar12) - iVar13;
                }
                if ((int)uVar38 < (int)uVar23) {
                  uVar38 = uVar23;
                }
                if (8 < (int)uVar38) {
                  do {
                    uVar38 = uVar38 >> 2;
                    iVar11 = iVar11 * 2;
                  } while (8 < uVar38);
                }
                iVar10 = FUN_1805d69a0(lVar39,&local_78,iVar11,&local_118);
              }
              else {
                if (iVar10 != 3) {
                  return 6;
                }
                local_78 = (undefined8 *)*puVar22;
                local_70 = (uint *)puVar22[2];
                local_68 = puVar22[3];
                local_60 = puVar22[1];
                iVar10 = FUN_1805d6b80(lVar39,&local_78,0x20,&local_118);
              }
              if (iVar10 != 0) {
                return iVar10;
              }
            }
            puVar22 = (undefined8 *)puVar22[5];
          } while (puVar22 != (undefined8 *)0x0);
        }
        puVar31 = local_100;
        local_res18[0] = 0;
        puVar19 = (uint *)FUN_18057abe0(lVar39,0x18,local_res18);
        if (local_res18[0] != 0) goto LAB_1805d40ba;
        puVar19[0] = 0;
        puVar19[1] = 0;
        puVar19[2] = 0;
        puVar19[3] = 0;
        puVar19[4] = 0;
        puVar19[5] = 0;
        *(uint **)(puVar19 + 4) = local_108;
        *(undefined8 **)(puVar19 + 2) = local_118;
        local_118 = (undefined8 *)0x0;
        local_100 = *(uint **)(puVar31 + 4);
        local_108 = puVar19;
        if (local_d8 != (uint *)0x0) {
          lVar16 = *(longlong *)local_c8;
          while (lVar16 != 0) {
            lVar5 = *(longlong *)(lVar16 + 0x28);
            FUN_18057abd0(lVar39,lVar16);
            lVar16 = lVar5;
          }
          FUN_18057abd0(lVar39);
        }
      } while (local_100 != (uint *)0x0);
      plVar14 = local_90;
    }
    puVar19 = local_a0;
    puVar31 = (uint *)0x0;
    plVar14[1] = (longlong)local_108;
    uVar38 = local_a8 << 0x10;
    puVar22 = (undefined8 *)0x0;
    local_res18[0] = 0;
    local_d0 = uVar38;
    if ((local_a0 == (uint *)0x0) || (0x1e < local_a8 - 2U)) {
      local_res18[0] = 6;
    }
    else {
      puVar22 = (undefined8 *)*plVar14;
      local_118 = puVar22;
      if (puVar22 == (undefined8 *)0x0) {
        local_res18[0] = 6;
      }
      else if ((uint)(0x7fffffff / (ulonglong)local_a0[1]) < *local_a0) {
        local_res18[0] = 10;
      }
      else {
        puVar31 = (uint *)FUN_18057ad10(puVar22,0xc,0,local_a0[1] * *local_a0,0,local_res18);
        local_108 = puVar31;
        if (local_res18[0] == 0) {
          local_d8 = (uint *)plVar14[1];
          uVar23 = puVar19[1];
          local_58 = *(longlong *)(puVar19 + 4);
          uVar26 = *puVar19;
          local_c8 = (uint *)CONCAT44(local_c8._4_4_,uVar23);
          local_f8 = uVar26;
          if ((uVar23 != 0) && (uVar26 != 0)) {
            if (local_d8 != (uint *)0x0) {
              do {
                piVar27 = *(int **)(local_d8 + 2);
                if (piVar27 != (int *)0x0) {
                  do {
                    iVar10 = piVar27[8];
                    iVar13 = 0;
                    iVar12 = 0;
                    iVar36 = 0;
                    iVar21 = *piVar27;
                    iVar29 = piVar27[1];
                    iVar6 = piVar27[2];
                    iVar7 = piVar27[3];
                    auVar1 = *(undefined1 (*) [16])(piVar27 + 4);
                    iVar11 = auVar1._8_4_;
                    if (iVar10 == 1) {
                      iVar12 = iVar29;
                      iVar37 = iVar21;
                      iVar13 = iVar21;
LAB_1805d42aa:
                      iVar35 = iVar29;
LAB_1805d42ad:
                      if (iVar6 < iVar13) {
                        iVar13 = iVar6;
                      }
                      iVar36 = iVar37;
                      if (iVar37 < iVar6) {
                        iVar36 = iVar6;
                      }
                      if (iVar7 < iVar12) {
                        iVar12 = iVar7;
                      }
                      if (iVar35 < iVar7) {
                        iVar35 = iVar7;
                      }
                    }
                    else {
                      iVar37 = auVar1._0_4_;
                      iVar32 = auVar1._4_4_;
                      if (iVar10 == 2) {
                        iVar12 = iVar32;
                        iVar35 = iVar32;
                        iVar13 = iVar37;
LAB_1805d4276:
                        if (iVar21 < iVar13) {
                          iVar13 = iVar21;
                        }
                        if (iVar37 < iVar21) {
                          iVar37 = iVar21;
                        }
                        if (iVar29 < iVar12) {
                          iVar12 = iVar29;
                        }
                        if (iVar35 < iVar29) goto LAB_1805d42aa;
                        goto LAB_1805d42ad;
                      }
                      iVar35 = 0;
                      if (iVar10 == 3) {
                        iVar35 = auVar1._12_4_;
                        iVar13 = iVar11;
                        if (iVar37 < iVar11) {
                          iVar13 = iVar37;
                        }
                        if (iVar11 < iVar37) {
                          iVar11 = iVar37;
                        }
                        iVar37 = iVar11;
                        iVar12 = iVar32;
                        if (iVar35 <= iVar32) {
                          iVar12 = iVar35;
                          if (iVar35 < iVar32) {
                            iVar35 = iVar32;
                          }
                        }
                        goto LAB_1805d4276;
                      }
                    }
                    iVar10 = ((int)(iVar13 + -0x3f + (iVar13 + -0x3f >> 0x1f & 0x3fU)) >> 6) -
                             local_a8;
                    local_a0 = (uint *)CONCAT44(local_a0._4_4_,iVar10);
                    uVar38 = ((int)((iVar36 + 0x3f >> 0x1f & 0x3fU) + iVar36 + 0x3f) >> 6) +
                             local_a8;
                    iVar12 = ((int)((iVar12 + -0x3f >> 0x1f & 0x3fU) + iVar12 + -0x3f) >> 6) -
                             local_a8;
                    iVar11 = iVar35 + 0x3f;
                    if (iVar11 < 0) {
                      iVar11 = iVar35 + 0x7e;
                    }
                    iVar11 = (iVar11 >> 6) + local_a8;
                    local_98 = (uint *)CONCAT44(local_98._4_4_,iVar11);
                    local_110 = uVar38;
                    if (iVar12 < iVar11) {
                      local_10c = iVar12 * 0x40 + 0x20;
                      do {
                        iVar13 = local_10c;
                        if (iVar10 < (int)uVar38) {
                          iVar11 = iVar10 * 0x40 + 0x20;
                          uVar38 = local_110;
                          do {
                            local_100 = (uint *)0x0;
                            local_e8 = (undefined8 *)0x7fffffff;
                            local_e0 = 0;
                            if (-1 < iVar10) {
                              if (iVar10 < (int)uVar23) {
                                if (0x1f < iVar13) {
                                  if (iVar12 < (int)uVar26) {
                                    iVar21 = piVar27[8];
                                    local_100 = (uint *)CONCAT44(iVar13,iVar11);
                                    if (iVar21 == 1) {
                                      FUN_1805d5d90(piVar27,local_100,&local_e8);
                                    }
                                    else if (iVar21 == 2) {
                                      FUN_1805d5230(piVar27,local_100,&local_e8);
                                    }
                                    else {
                                      if (iVar21 != 3) {
                                        local_res18[0] = 6;
                                        goto LAB_1805d45cc;
                                      }
                                      FUN_1805d5720(piVar27,local_100,&local_e8);
                                    }
                                    local_res18[0] = 0;
                                    cVar34 = (char)local_e0;
                                    if ((uint)local_res20 == 1) {
                                      cVar34 = -(char)local_e0;
                                      local_e0 = CONCAT31(local_e0._1_3_,cVar34);
                                    }
                                    if ((int)local_e8 <= (int)local_d0) {
                                      if (cVar25 == '\0') {
                                        iVar13 = (uVar26 - iVar12) + -1;
                                      }
                                      else {
                                        iVar13 = iVar12;
                                      }
                                      uVar28 = (ulonglong)(iVar13 * uVar23 + iVar10);
                                      puVar31 = local_108 + uVar28 * 3;
                                      if ((char)local_108[uVar28 * 3 + 2] == '\0') {
LAB_1805d44e6:
                                        *(undefined8 **)puVar31 = local_e8;
                                        puVar31[2] = local_e0;
                                      }
                                      else {
                                        uVar38 = *puVar31;
                                        iVar13 = uVar38 - (int)local_e8;
                                        if (iVar13 < 0) {
                                          iVar13 = (int)local_e8 - uVar38;
                                        }
                                        if (iVar13 < 0x21) {
                                          local_78 = *(undefined8 **)puVar31;
                                          iVar21 = (int)((ulonglong)local_e8 >> 0x20);
                                          iVar13 = -iVar21;
                                          iVar29 = (int)((ulonglong)local_78 >> 0x20);
                                          if (iVar13 < 0) {
                                            iVar13 = iVar21;
                                          }
                                          iVar21 = -iVar29;
                                          if (iVar21 < 0) {
                                            iVar21 = iVar29;
                                          }
                                          if (iVar13 < iVar21) {
                                            local_b0 = puVar31[2];
                                            local_b8 = local_78;
                                          }
                                          else {
                                            local_b8 = local_e8;
                                            local_b0 = CONCAT31((int3)(local_e0 >> 8),cVar34);
                                          }
                                          *(undefined8 **)(local_108 + uVar28 * 3) = local_b8;
                                          local_108[uVar28 * 3 + 2] = local_b0;
                                          uVar26 = local_f8;
                                        }
                                        else if ((int)local_e8 < (int)uVar38) goto LAB_1805d44e6;
                                      }
                                    }
                                    iVar13 = local_10c;
                                    uVar38 = local_110;
                                  }
                                }
                              }
                            }
                            iVar10 = iVar10 + 1;
                            iVar11 = iVar11 + 0x40;
                          } while (iVar10 < (int)uVar38);
                          uVar38 = local_110;
                          iVar10 = (int)local_a0;
                          iVar11 = (int)local_98;
                        }
                        local_10c = iVar13 + 0x40;
                        iVar12 = iVar12 + 1;
                      } while (iVar12 < iVar11);
                    }
                    piVar27 = *(int **)(piVar27 + 10);
                  } while (piVar27 != (int *)0x0);
                }
                local_d8 = *(uint **)(local_d8 + 4);
              } while (local_d8 != (uint *)0x0);
              uVar38 = local_d0;
            }
            lVar39 = local_58;
            if ((int)uVar26 < 1) {
LAB_1805d45cc:
              puVar22 = local_118;
              puVar31 = local_108;
            }
            else {
              do {
                puVar31 = local_108;
                iVar10 = (int)puVar15;
                if (0 < (int)uVar23) {
                  uVar28 = (ulonglong)uVar23;
                  uVar23 = iVar10 * uVar23;
                  cVar25 = -1;
                  do {
                    puVar15 = puVar31 + (ulonglong)uVar23 * 3;
                    cVar34 = (char)puVar15[2];
                    if (cVar34 == '\0') {
                      *puVar15 = uVar38;
                      cVar34 = cVar25;
                    }
                    uVar26 = *puVar15;
                    if ((int)uVar38 < (int)*puVar15) {
                      uVar26 = uVar38;
                    }
                    iVar10 = -(int)cVar34;
                    if (cVar2 == '\0') {
                      iVar10 = (int)cVar34;
                    }
                    *puVar15 = iVar10 * uVar26;
                    iVar11 = FUN_180573310(iVar10 * uVar26,uVar38);
                    iVar10 = -iVar11;
                    if (-iVar11 < 0) {
                      iVar10 = iVar11;
                    }
                    iVar10 = iVar10 >> 9;
                    if (iVar11 < 1) {
                      if ((iVar11 < 0) && (0x80 < iVar10)) {
                        iVar10 = 0x80;
                      }
                    }
                    else if (0x7f < iVar10) {
                      iVar10 = 0x7f;
                    }
                    cVar25 = -(char)iVar10;
                    if (-1 < iVar11) {
                      cVar25 = (char)iVar10;
                    }
                    *(char *)((ulonglong)uVar23 + lVar39) = cVar25 + -0x80;
                    uVar23 = uVar23 + 1;
                    uVar28 = uVar28 - 1;
                    cVar25 = cVar34;
                  } while (uVar28 != 0);
                  iVar10 = (int)local_88;
                  uVar23 = (uint)local_c8;
                  uVar26 = local_f8;
                }
                puVar15 = (uint *)(ulonglong)(iVar10 + 1U);
                local_88 = puVar15;
              } while ((int)(iVar10 + 1U) < (int)uVar26);
              puVar22 = local_118;
              puVar31 = local_108;
            }
            goto LAB_1805d40b1;
          }
          local_res18[0] = 0x13;
        }
      }
    }
  }
  else {
    local_res18[0] = 0;
    local_98 = (uint *)0x0;
    if (puVar31 == (uint *)0x0) {
      return 6;
    }
    puVar22 = (undefined8 *)*plVar14;
    if (puVar22 == (undefined8 *)0x0) {
      return 6;
    }
    lVar39 = plVar14[1];
    iVar10 = 0;
    local_110 = puVar31[1];
    uVar38 = *puVar31;
    local_10c = 0;
    if (lVar39 != 0) {
      do {
        lVar39 = *(longlong *)(lVar39 + 0x10);
        iVar10 = iVar10 + 1;
      } while (lVar39 != 0);
      local_10c = iVar10;
    }
    iVar10 = local_10c;
    local_118 = puVar22;
    local_d0 = uVar38;
    local_78 = puVar22;
    puVar15 = (uint *)FUN_18057ad10(puVar22,0x28,0,local_10c,0,local_res18);
    lVar39 = (longlong)iVar10;
    local_100 = puVar15;
    if (local_res18[0] == 0) {
      lVar16 = FUN_18057ad10(puVar22,4,0,iVar10,0,local_res18);
      if (local_res18[0] == 0) {
        local_f8 = 0;
        local_c8 = (uint *)local_90[1];
        if (0 < lVar39) {
          uVar8 = local_78._6_2_;
          local_d8 = puVar15 + 2;
          local_108 = (uint *)0x0;
          do {
            puVar19 = local_d8;
            puVar31 = local_108;
            local_88 = puVar15 + (longlong)(int)local_f8 * 10;
            FUN_1805dc0f0(local_88);
            puVar19[-1] = local_a0[1];
            puVar19[-2] = *local_a0;
            *puVar19 = local_a0[2];
            *(short *)(puVar19 + 4) = (short)local_a0[6];
            *(undefined1 *)((longlong)puVar19 + 0x12) = *(undefined1 *)((longlong)local_a0 + 0x1a);
            uVar17 = FUN_18057ad10(local_118,local_a0[2],0,*local_a0,0,local_res18);
            *(undefined8 *)(puVar19 + 2) = uVar17;
            if (local_res18[0] != 0) goto LAB_1805d3d66;
            iVar10 = 0;
            if ((local_c8 == (uint *)0x0) ||
               (piVar27 = *(int **)(local_c8 + 2), piVar27 == (int *)0x0)) {
LAB_1805d3b9c:
              piVar27 = (int *)(lVar16 + (longlong)puVar31 * 4);
              *piVar27 = 0;
LAB_1805d3ba2:
              uVar38 = 0;
            }
            else {
              do {
                iVar11 = piVar27[8];
                if (iVar11 == 1) {
                  iVar11 = (piVar27[2] - *piVar27) * (piVar27[3] + piVar27[1]);
                  iVar10 = iVar10 + ((int)(iVar11 + (iVar11 >> 0x1f & 0x3fU)) >> 6);
                }
                else if (iVar11 == 2) {
                  iVar11 = (piVar27[3] + piVar27[5]) * (piVar27[2] - piVar27[4]);
                  if (iVar11 < 0) {
                    iVar11 = iVar11 + 0x3f;
                  }
                  iVar12 = (piVar27[1] + piVar27[5]) * (piVar27[4] - *piVar27);
                  iVar10 = iVar10 + ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fU)) >> 6) + (iVar11 >> 6);
                }
                else {
                  if (iVar11 != 3) {
                    puVar31 = local_108;
                    goto LAB_1805d3b9c;
                  }
                  iVar11 = (piVar27[3] + piVar27[7]) * (piVar27[2] - piVar27[6]);
                  iVar12 = (piVar27[4] - *piVar27) * (piVar27[1] + piVar27[5]);
                  iVar13 = (piVar27[7] + piVar27[5]) * (piVar27[6] - piVar27[4]);
                  iVar10 = iVar10 + ((int)(iVar13 + (iVar13 >> 0x1f & 0x3fU)) >> 6) +
                           ((int)((iVar11 >> 0x1f & 0x3fU) + iVar11) >> 6) +
                           ((int)(iVar12 + (iVar12 >> 0x1f & 0x3fU)) >> 6);
                }
                piVar27 = *(int **)(piVar27 + 10);
              } while (piVar27 != (int *)0x0);
              piVar27 = (int *)(lVar16 + (longlong)local_108 * 4);
              if (iVar10 < 1) {
                *piVar27 = 2;
                if ((uint)local_res20 != 0) goto LAB_1805d3ba2;
                uVar38 = 1;
              }
              else {
                *piVar27 = 1;
                if ((uint)local_res20 != 1) goto LAB_1805d3ba2;
                uVar38 = 1;
              }
            }
            puVar31 = *(uint **)(local_c8 + 4);
            puVar15 = local_c8 + 4;
            local_70 = local_c8;
            puVar15[0] = 0;
            puVar15[1] = 0;
            local_b8._0_5_ = (uint5)(uint)local_res20;
            local_b8 = (undefined8 *)CONCAT26(uVar8,CONCAT15(cVar25,(uint5)local_b8));
            local_c8 = puVar31;
            iVar10 = FUN_1805d6df0(&local_78);
            if (iVar10 == 0) {
              local_e8 = local_b8;
              local_e0 = uVar38;
              iVar10 = FUN_1805d5fd0(&local_e8,&local_78);
            }
            puVar31 = local_98;
            local_res18[0] = iVar10;
            if (iVar10 != 0) goto LAB_1805d3d66;
            *(uint **)puVar15 = local_c8;
            local_98 = local_70;
            *(uint **)(local_70 + 4) = puVar31;
            if ((uint)local_res20 == 1) {
              if (*piVar27 == 1) {
                *piVar27 = 2;
              }
              else if (*piVar27 == 2) {
                *piVar27 = 1;
              }
            }
            local_c8 = *(uint **)puVar15;
            local_d8 = local_d8 + 10;
            local_f8 = local_f8 + 1;
            local_108 = (uint *)((longlong)local_108 + 1);
            puVar15 = local_100;
          } while ((longlong)local_108 < lVar39);
          puVar31 = local_a0;
          uVar38 = local_d0;
        }
        local_90[1] = (longlong)local_98;
        lVar5 = *(longlong *)(puVar31 + 4);
        if (0 < (int)uVar38) {
          local_d8 = (uint *)(ulonglong)uVar38;
          local_res20 = 0;
          uVar28 = (longlong)(int)local_110;
          do {
            if (0 < (int)uVar28) {
              uVar28 = uVar28 & 0xffffffff;
              lVar24 = local_res20;
              do {
                bVar20 = 0;
                bVar33 = 0xff;
                lVar30 = 0;
                if (0 < lVar39) {
                  puVar15 = local_100 + 4;
                  do {
                    bVar3 = *(byte *)(lVar24 + *(longlong *)puVar15);
                    if (*(int *)(lVar16 + lVar30 * 4) == 1) {
                      if (bVar20 <= bVar3) {
                        bVar20 = bVar3;
                      }
                    }
                    else if (bVar3 <= bVar33) {
                      bVar33 = bVar3;
                    }
                    lVar30 = lVar30 + 1;
                    puVar15 = puVar15 + 10;
                  } while (lVar30 < lVar39);
                }
                if (bVar33 <= bVar20) {
                  bVar20 = bVar33;
                }
                *(byte *)(lVar24 + lVar5) = bVar20;
                if (cVar2 != '\0') {
                  *(byte *)(lVar24 + lVar5) = ~bVar20;
                }
                lVar24 = lVar24 + 1;
                uVar28 = uVar28 - 1;
              } while (uVar28 != 0);
              uVar28 = (ulonglong)local_110;
            }
            local_res20 = local_res20 + (int)local_110;
            local_d8 = (uint *)((longlong)local_d8 + -1);
          } while (local_d8 != (uint *)0x0);
        }
LAB_1805d3d66:
        puVar22 = local_118;
      }
      if (lVar16 != 0) {
        FUN_18057abd0(puVar22,lVar16);
      }
      iVar10 = local_10c;
    }
    puVar31 = local_100;
    if (local_100 == (uint *)0x0) goto LAB_1805d40ba;
    if (iVar10 == 0) {
      local_res18[0] = 0x61;
      goto LAB_1805d40ba;
    }
    if (0 < lVar39) {
      puVar15 = local_100 + 4;
      do {
        FUN_18057abd0(puVar22,*(undefined8 *)puVar15);
        puVar15[0] = 0;
        puVar15[1] = 0;
        puVar15 = puVar15 + 10;
        lVar39 = lVar39 + -1;
      } while (lVar39 != 0);
    }
  }
LAB_1805d40b1:
  FUN_18057abd0(puVar22,puVar31);
LAB_1805d40ba:
  plVar14 = local_90;
  if (local_res18[0] != 0) {
    return local_res18[0];
  }
  lVar39 = *local_90;
  if (lVar39 == 0) {
    return 0;
  }
  local_res18[0] = 0;
  lVar16 = local_90[1];
  while (lVar16 != 0) {
    lVar5 = *(longlong *)(lVar16 + 0x10);
    lVar24 = *(longlong *)(lVar16 + 8);
    while (lVar24 != 0) {
      lVar30 = *(longlong *)(lVar24 + 0x28);
      FUN_18057abd0(lVar39,lVar24);
      lVar24 = lVar30;
    }
    FUN_18057abd0(lVar39,lVar16);
    lVar16 = lVar5;
  }
  FUN_18057abd0(lVar39,plVar14);
  return 0;
}



