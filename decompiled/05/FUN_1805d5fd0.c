// FUN_1805d5fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d5fd0 */

int FUN_1805d5fd0(int *param_1,longlong *param_2,int param_3,uint *param_4)

{
  int *piVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  int *piVar12;
  ulonglong uVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  char cVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int local_res10 [2];
  int local_res18;
  undefined8 local_a8;
  int local_a0;
  int local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  int local_78;
  int local_70;
  int local_6c;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  
  uVar11 = 0;
  local_98 = param_3 << 0x10;
  local_68 = 0;
  local_res10[0] = 0;
  local_60 = 0;
  lVar6 = 0;
  local_res18 = param_3;
  if (((param_2 != (longlong *)0x0) && (param_4 != (uint *)0x0)) && (param_3 - 2U < 0x1f)) {
    local_60 = *param_2;
    if (local_60 != 0) {
      if ((uint)(0x7fffffff / (ulonglong)param_4[1]) < *param_4) {
        local_res10[0] = 10;
      }
      else {
        lVar6 = FUN_18057ad10(local_60,0xc,0,param_4[1] * *param_4,0,local_res10);
        local_90 = lVar6;
        if (local_res10[0] == 0) {
          local_58 = param_2[1];
          uVar3 = param_4[1];
          local_50 = *(longlong *)(param_4 + 4);
          uVar4 = *param_4;
          if ((uVar3 == 0) || (uVar4 == 0)) {
            local_res10[0] = 0x13;
          }
          else {
            for (; local_58 != 0; local_58 = *(longlong *)(local_58 + 0x10)) {
              piVar12 = *(int **)(local_58 + 8);
              if (piVar12 != (int *)0x0) {
                do {
                  iVar20 = piVar12[8];
                  iVar22 = 0;
                  iVar23 = 0;
                  iVar9 = 0;
                  iVar21 = *piVar12;
                  iVar8 = piVar12[1];
                  iVar7 = piVar12[2];
                  iVar15 = piVar12[3];
                  auVar2 = *(undefined1 (*) [16])(piVar12 + 4);
                  iVar17 = auVar2._8_4_;
                  if (iVar20 == 1) {
                    iVar10 = iVar21;
                    iVar23 = iVar8;
                    iVar22 = iVar21;
LAB_1805d61b9:
                    iVar16 = iVar8;
LAB_1805d61bc:
                    if (iVar7 < iVar22) {
                      iVar22 = iVar7;
                    }
                    iVar9 = iVar10;
                    if (iVar10 < iVar7) {
                      iVar9 = iVar7;
                    }
                    if (iVar15 < iVar23) {
                      iVar23 = iVar15;
                    }
                    if (iVar16 < iVar15) {
                      iVar16 = iVar15;
                    }
                  }
                  else {
                    iVar10 = auVar2._0_4_;
                    iVar19 = auVar2._4_4_;
                    if (iVar20 == 2) {
                      iVar23 = iVar19;
                      iVar16 = iVar19;
                      iVar22 = iVar10;
LAB_1805d6188:
                      if (iVar21 < iVar22) {
                        iVar22 = iVar21;
                      }
                      if (iVar10 < iVar21) {
                        iVar10 = iVar21;
                      }
                      if (iVar8 < iVar23) {
                        iVar23 = iVar8;
                      }
                      if (iVar16 < iVar8) goto LAB_1805d61b9;
                      goto LAB_1805d61bc;
                    }
                    iVar16 = 0;
                    if (iVar20 == 3) {
                      iVar16 = auVar2._12_4_;
                      iVar22 = iVar17;
                      if (iVar10 < iVar17) {
                        iVar22 = iVar10;
                      }
                      if (iVar17 < iVar10) {
                        iVar17 = iVar10;
                      }
                      iVar10 = iVar17;
                      iVar23 = iVar19;
                      if (iVar16 <= iVar19) {
                        iVar23 = iVar16;
                        if (iVar16 < iVar19) {
                          iVar16 = iVar19;
                        }
                      }
                      goto LAB_1805d6188;
                    }
                  }
                  iVar20 = ((int)((iVar22 + -0x3f >> 0x1f & 0x3fU) + iVar22 + -0x3f) >> 6) -
                           local_res18;
                  iVar22 = ((int)((iVar9 + 0x3f >> 0x1f & 0x3fU) + iVar9 + 0x3f) >> 6) + local_res18
                  ;
                  iVar23 = ((int)((iVar23 + -0x3f >> 0x1f & 0x3fU) + iVar23 + -0x3f) >> 6) -
                           local_res18;
                  iVar17 = iVar16 + 0x3f;
                  if (iVar17 < 0) {
                    iVar17 = iVar16 + 0x7e;
                  }
                  local_6c = (iVar17 >> 6) + local_res18;
                  local_70 = iVar20;
                  if (iVar23 < local_6c) {
                    iVar21 = iVar23 * 0x40 + 0x20;
                    iVar17 = local_6c;
                    do {
                      if (iVar20 < iVar22) {
                        iVar17 = iVar20 * 0x40 + 0x20;
                        do {
                          local_88 = 0;
                          local_a8 = 0x7fffffff;
                          local_a0 = 0;
                          if (((-1 < iVar20) && (iVar20 < (int)uVar3)) &&
                             ((0x1f < iVar21 && (iVar23 < (int)uVar4)))) {
                            iVar8 = piVar12[8];
                            local_88 = CONCAT44(iVar21,iVar17);
                            if (iVar8 == 1) {
                              FUN_1805d5d90(piVar12,local_88,&local_a8);
                            }
                            else if (iVar8 == 2) {
                              FUN_1805d5230(piVar12,local_88,&local_a8);
                            }
                            else {
                              if (iVar8 != 3) {
                                lVar6 = local_90;
                                goto LAB_1805d64cb;
                              }
                              FUN_1805d5720(piVar12,local_88,&local_a8);
                            }
                            local_res10[0] = 0;
                            cVar18 = (char)local_a0;
                            if (*param_1 == 1) {
                              cVar18 = -(char)local_a0;
                              local_a0 = CONCAT31(local_a0._1_3_,cVar18);
                            }
                            if ((int)local_a8 <= local_98) {
                              if (*(char *)((longlong)param_1 + 5) == '\0') {
                                iVar8 = (uVar4 - iVar23) + -1;
                              }
                              else {
                                iVar8 = iVar23;
                              }
                              uVar13 = (ulonglong)(iVar8 * uVar3 + iVar20);
                              piVar1 = (int *)(local_90 + uVar13 * 0xc);
                              if (*(char *)(local_90 + 8 + uVar13 * 0xc) == '\0') {
LAB_1805d63d6:
                                *(undefined8 *)piVar1 = local_a8;
                                piVar1[2] = local_a0;
                              }
                              else {
                                iVar8 = *piVar1;
                                iVar7 = iVar8 - (int)local_a8;
                                if (iVar7 < 0) {
                                  iVar7 = (int)local_a8 - iVar8;
                                }
                                if (iVar7 < 0x21) {
                                  local_48 = *(undefined8 *)piVar1;
                                  iVar7 = (int)((ulonglong)local_a8 >> 0x20);
                                  iVar8 = -iVar7;
                                  iVar15 = (int)((ulonglong)local_48 >> 0x20);
                                  if (iVar8 < 0) {
                                    iVar8 = iVar7;
                                  }
                                  iVar7 = -iVar15;
                                  if (iVar7 < 0) {
                                    iVar7 = iVar15;
                                  }
                                  if (iVar8 < iVar7) {
                                    local_78 = piVar1[2];
                                    local_80 = local_48;
                                  }
                                  else {
                                    local_80 = local_a8;
                                    local_78 = CONCAT31((int3)((uint)local_a0 >> 8),cVar18);
                                  }
                                  *(undefined8 *)(local_90 + uVar13 * 0xc) = local_80;
                                  *(int *)(local_90 + 8 + uVar13 * 0xc) = local_78;
                                }
                                else if ((int)local_a8 < iVar8) goto LAB_1805d63d6;
                              }
                            }
                          }
                          iVar20 = iVar20 + 1;
                          iVar17 = iVar17 + 0x40;
                        } while (iVar20 < iVar22);
                        iVar20 = local_70;
                        iVar17 = local_6c;
                      }
                      iVar23 = iVar23 + 1;
                      iVar21 = iVar21 + 0x40;
                    } while (iVar23 < iVar17);
                  }
                  piVar12 = *(int **)(piVar12 + 10);
                } while (piVar12 != (int *)0x0);
              }
            }
            lVar6 = local_90;
            if (0 < (int)uVar4) {
              iVar20 = param_1[2];
              do {
                lVar5 = local_50;
                lVar6 = local_90;
                iVar23 = local_98;
                iVar17 = (int)uVar11;
                cVar18 = -1;
                if ((iVar20 != 0) && (cVar18 = '\x01', iVar20 < 0)) {
                  cVar18 = -1;
                }
                if (0 < (int)uVar3) {
                  uVar11 = (ulonglong)(iVar17 * uVar3);
                  uVar13 = (ulonglong)uVar3;
                  if ((char)param_1[1] == '\0') {
                    do {
                      cVar14 = *(char *)(lVar6 + 8 + uVar11 * 0xc);
                      piVar12 = (int *)(lVar6 + uVar11 * 0xc);
                      if (cVar14 == '\0') {
                        *piVar12 = iVar23;
                      }
                      else {
                        cVar18 = cVar14;
                      }
                      iVar20 = *piVar12;
                      if (iVar23 < *piVar12) {
                        iVar20 = iVar23;
                      }
                      *piVar12 = cVar18 * iVar20;
                      iVar17 = FUN_180573310(cVar18 * iVar20,iVar23);
                      iVar20 = -iVar17;
                      if (-iVar17 < 0) {
                        iVar20 = iVar17;
                      }
                      iVar20 = iVar20 >> 9;
                      if (iVar17 < 1) {
                        if ((iVar17 < 0) && (0x80 < iVar20)) {
                          iVar20 = 0x80;
                        }
                      }
                      else if (0x7f < iVar20) {
                        iVar20 = 0x7f;
                      }
                      cVar14 = -(char)iVar20;
                      if (-1 < iVar17) {
                        cVar14 = (char)iVar20;
                      }
                      *(char *)(uVar11 + lVar5) = cVar14 + -0x80;
                      uVar11 = (ulonglong)((int)uVar11 + 1);
                      uVar13 = uVar13 - 1;
                    } while (uVar13 != 0);
                  }
                  else {
                    do {
                      cVar14 = *(char *)(lVar6 + 8 + uVar11 * 0xc);
                      piVar12 = (int *)(lVar6 + uVar11 * 0xc);
                      if (cVar14 == '\0') {
                        *piVar12 = iVar23;
                        cVar14 = cVar18;
                      }
                      iVar20 = *piVar12;
                      if (iVar23 < *piVar12) {
                        iVar20 = iVar23;
                      }
                      *piVar12 = -(cVar14 * iVar20);
                      iVar17 = FUN_180573310(-(cVar14 * iVar20),iVar23);
                      iVar20 = -iVar17;
                      if (-iVar17 < 0) {
                        iVar20 = iVar17;
                      }
                      iVar20 = iVar20 >> 9;
                      if (iVar17 < 1) {
                        if ((iVar17 < 0) && (0x80 < iVar20)) {
                          iVar20 = 0x80;
                        }
                      }
                      else if (0x7f < iVar20) {
                        iVar20 = 0x7f;
                      }
                      cVar18 = -(char)iVar20;
                      if (-1 < iVar17) {
                        cVar18 = (char)iVar20;
                      }
                      *(char *)(uVar11 + lVar5) = cVar18 + -0x80;
                      uVar11 = (ulonglong)((int)uVar11 + 1);
                      uVar13 = uVar13 - 1;
                      cVar18 = cVar14;
                    } while (uVar13 != 0);
                  }
                  iVar17 = (int)local_68;
                  iVar20 = param_1[2];
                }
                uVar11 = (ulonglong)(iVar17 + 1U);
                local_68 = uVar11;
              } while ((int)(iVar17 + 1U) < (int)uVar4);
              lVar6 = local_90;
            }
          }
        }
      }
      goto LAB_1805d64d2;
    }
  }
LAB_1805d64cb:
  local_res10[0] = 6;
LAB_1805d64d2:
  FUN_18057abd0(local_60,lVar6);
  return local_res10[0];
}



