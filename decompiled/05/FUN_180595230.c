// FUN_180595230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180595230 */

ulonglong FUN_180595230(longlong param_1,uint param_2,int *param_3,char param_4)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  longlong lVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  longlong lVar17;
  int *piVar18;
  uint *puVar19;
  uint local_b8;
  ushort local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint *local_a0;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  uint local_88;
  longlong local_80;
  uint *local_78;
  longlong local_70;
  longlong local_68;
  uint local_60;
  longlong local_58;
  longlong local_50;
  uint *local_48;
  ushort *local_40;
  
  lVar11 = *(undefined8 *)(param_1 + 0x98);
  local_b8 = 0;
  local_b4 = local_b4 & 0xff00;
  local_68 = lVar11;
  if (*(longlong *)(param_1 + 0x408) == 0) {
    *(undefined1 *)(param_1 + 0x401) = 0;
    uVar13 = 0;
    if (param_2 != 0) {
      piVar12 = param_3;
      do {
        if (*piVar12 != 0) {
          *(undefined1 *)(param_1 + 0x401) = 1;
          break;
        }
        uVar13 = uVar13 + 1;
        piVar12 = piVar12 + 1;
      } while (uVar13 < param_2);
    }
    if (*(char *)(param_1 + 0x401) == '\0') {
      return 0;
    }
    uVar8 = FUN_180588160(param_1,0);
    local_b8 = (uint)uVar8;
    if (local_b8 != 0) {
      return uVar8;
    }
  }
  puVar16 = *(uint **)(param_1 + 0x408);
  uVar13 = 0;
  puVar19 = *(uint **)(puVar16 + 6);
  if (*puVar19 < param_2) {
    param_2 = *puVar19;
  }
  uVar8 = (ulonglong)param_2;
  if (param_2 != 0) {
    piVar12 = param_3;
    do {
      if (0x20000 < *piVar12 + 0x10000U) {
        return 6;
      }
      uVar13 = uVar13 + 1;
      piVar12 = piVar12 + 1;
    } while (uVar13 < param_2);
  }
  local_a0 = puVar19;
  local_78 = puVar16;
  if ((*(char *)(param_1 + 0x400) == '\0') && (*(longlong *)(puVar16 + 0x22) == 0)) {
    uVar9 = FUN_180591b50(param_1);
    if (((int)uVar9 != 0x8e) && ((int)uVar9 != 0)) {
      return uVar9;
    }
    local_b8 = 0;
  }
  if (*(longlong *)(puVar16 + 2) == 0) {
    uVar10 = FUN_18057ad10(lVar11,4,0,*puVar19,0,&local_b8);
    *(undefined8 *)(puVar16 + 2) = uVar10;
    if (local_b8 != 0) {
      return (ulonglong)local_b8;
    }
    local_b4 = CONCAT11(local_b4._1_1_,1);
  }
  if (*(longlong *)(puVar16 + 4) == 0) {
    uVar10 = FUN_18057ad10(lVar11,4,0,*puVar19,0,&local_b8);
    *(undefined8 *)(puVar16 + 4) = uVar10;
    if (local_b8 != 0) {
      return (ulonglong)local_b8;
    }
    iVar7 = 1;
  }
  else {
    bVar4 = false;
    iVar7 = 0;
    uVar13 = 0;
    if (param_2 != 0) {
      do {
        if (*(int *)(*(longlong *)(puVar16 + 4) + (ulonglong)uVar13 * 4) != param_3[uVar13]) {
          iVar7 = 2;
          goto LAB_1805954b5;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < param_2);
    }
    uVar14 = *local_a0;
    piVar12 = (int *)((ulonglong)uVar13 * 4 + *(longlong *)(local_78 + 4));
    if ((*(uint *)(param_1 + 4) & 0x7fff0000) == 0) {
      if (uVar14 <= uVar13) {
        return 0xffffffff;
      }
      uVar9 = (ulonglong)(uVar14 - uVar13);
      do {
        iVar2 = *piVar12;
        piVar12 = piVar12 + 1;
        if (iVar2 != 0) {
          bVar4 = true;
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    else {
      if (uVar14 <= uVar13) {
        return 0xffffffff;
      }
      uVar9 = (ulonglong)(uVar14 - uVar13);
      bVar4 = false;
      do {
        piVar18 = (int *)(((*(longlong *)(local_78 + 10) +
                           (ulonglong)(((*(uint *)(param_1 + 4) >> 0x10) - 1) * uVar14) * 4) -
                          *(longlong *)(local_78 + 4)) + (longlong)piVar12);
        iVar2 = *piVar12;
        piVar12 = piVar12 + 1;
        if (iVar2 != *piVar18) {
          bVar4 = true;
        }
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (!bVar4) {
      return 0xffffffff;
    }
    lVar11 = local_68;
    puVar19 = local_a0;
LAB_1805954b5:
    if (uVar13 < *puVar19) {
      do {
        if (*(int *)(*(longlong *)(local_78 + 4) + (ulonglong)uVar13 * 4) != 0) {
          iVar7 = 2;
          break;
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *puVar19);
    }
  }
  puVar16 = local_78;
  *local_78 = *puVar19;
  if (param_3 != (int *)0x0) {
    FUN_18063aed0(*(undefined8 *)(local_78 + 4),param_3,uVar8 << 2);
  }
  if (param_4 != '\0') {
    if ((char)local_b4 != '\0') {
      uVar8 = (ulonglong)*puVar16;
    }
    FUN_1805926c0(param_1,uVar8,*(undefined8 *)(puVar16 + 4),*(undefined8 *)(puVar16 + 2));
  }
  *(undefined1 *)(param_1 + 0x401) = 0;
  uVar13 = 0;
  if (*puVar16 != 0) {
    do {
      if (*(int *)(*(longlong *)(puVar16 + 4) + (ulonglong)uVar13 * 4) != 0) {
        *(undefined1 *)(param_1 + 0x401) = 1;
        break;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *puVar16);
  }
  if (*(longlong *)(param_1 + 0x3d8) != 0) {
    if (iVar7 == 1) {
      puVar19 = *(uint **)(param_1 + 0x408);
      plVar3 = *(longlong **)(param_1 + 0xa0);
      local_94 = 0;
      local_a0 = (uint *)0x0;
      local_70 = plVar3[6];
      local_80 = 0;
      if (puVar19 == (uint *)0x0) {
        uVar8 = 0;
        local_b8 = 0;
      }
      else {
        local_48 = puVar19;
        local_b0 = (**(code **)(param_1 + 0x2a0))(param_1,0x63766172,plVar3,&local_98);
        if (local_b0 == 0) {
          local_b0 = FUN_180577bf0(plVar3,local_98);
          if (local_b0 == 0) {
            lVar11 = plVar3[7];
            lVar17 = *plVar3;
            iVar7 = FUN_180577e30(plVar3);
            if (iVar7 == 0x10000) {
              uVar5 = FUN_180577ed0(plVar3);
              local_a8 = (uint)uVar5;
              uVar5 = FUN_180577ed0(plVar3);
              uVar13 = local_a8;
              if (local_98 < (uint)uVar5 + (local_a8 & 0xfff) * 4) {
                local_b0 = 8;
                FUN_180577d30(plVar3);
                uVar8 = (ulonglong)local_b0;
                local_b8 = local_b0;
              }
              else {
                local_ac = (uint)uVar5 + ((int)lVar11 - (int)lVar17);
                if ((local_a8 >> 0xf & 1) != 0) {
                  uVar14 = (int)plVar3[7] - (int)*plVar3;
                  if (local_ac < (uint)((int)plVar3[8] - (int)*plVar3)) {
                    lVar11 = (ulonglong)local_ac + *plVar3;
                  }
                  else {
                    lVar11 = plVar3[8];
                  }
                  plVar3[7] = lVar11;
                  local_a0 = (uint *)FUN_180592550(plVar3,&local_94);
                  local_ac = (int)plVar3[7] - (int)*plVar3;
                  if (uVar14 < (uint)((int)plVar3[8] - (int)*plVar3)) {
                    lVar11 = (ulonglong)uVar14 + *plVar3;
                  }
                  else {
                    lVar11 = plVar3[8];
                  }
                  plVar3[7] = lVar11;
                }
                lVar17 = local_70;
                lVar11 = FUN_18057ac40(local_70,4,0,*puVar19 * 3,0,&local_b0);
                local_68 = lVar11;
                if ((local_b0 == 0) &&
                   (local_80 = FUN_18057ad10(lVar17,4,0,*(undefined4 *)(param_1 + 0x3d0),0,&local_b0
                                            ), local_b0 == 0)) {
                  local_a8 = uVar13 & 0xfff;
                  local_88 = 0;
                  local_50 = lVar11 + (ulonglong)*puVar19 * 4;
                  local_58 = local_50 + (ulonglong)*puVar19 * 4;
                  if (local_a8 != 0) {
                    do {
                      local_b4 = FUN_180577ed0(plVar3);
                      uVar5 = FUN_180577ed0(plVar3);
                      if ((short)uVar5 < 0) {
                        uVar14 = 0;
                        uVar13 = 0;
                        if (*puVar19 != 0) {
                          do {
                            sVar6 = FUN_180577ed0(plVar3);
                            uVar8 = (ulonglong)uVar14;
                            uVar14 = uVar14 + 1;
                            *(int *)(lVar11 + uVar8 * 4) = (int)sVar6 << 2;
                            uVar13 = *puVar19;
                          } while (uVar14 < uVar13);
                        }
                      }
                      else {
                        if (puVar19[0x1a] <= (uVar5 & 0xfff)) {
                          local_b0 = 8;
                          goto LAB_180595a63;
                        }
                        uVar13 = *puVar19;
                        lVar11 = *(longlong *)(puVar19 + 0x1c) +
                                 (ulonglong)((uVar5 & 0xfff) * uVar13) * 4;
                      }
                      lVar17 = local_50;
                      if ((uVar5 >> 0xe & 1) != 0) {
                        uVar15 = 0;
                        uVar14 = 0;
                        if (uVar13 != 0) {
                          do {
                            sVar6 = FUN_180577ed0(plVar3);
                            uVar8 = (ulonglong)uVar15;
                            uVar15 = uVar15 + 1;
                            *(int *)(lVar17 + uVar8 * 4) = (int)sVar6 << 2;
                            uVar14 = *puVar19;
                          } while (uVar15 < uVar14);
                        }
                        lVar17 = local_58;
                        uVar13 = 0;
                        if (uVar14 != 0) {
                          do {
                            sVar6 = FUN_180577ed0(plVar3);
                            uVar8 = (ulonglong)uVar13;
                            uVar13 = uVar13 + 1;
                            *(int *)(lVar17 + uVar8 * 4) = (int)sVar6 << 2;
                          } while (uVar13 < *puVar19);
                        }
                      }
                      local_8c = FUN_180591400(puVar19,uVar5,lVar11,local_50,local_58);
                      if (local_8c == 0) {
                        lVar17 = local_70;
                      }
                      else {
                        local_60 = (int)plVar3[7] - (int)*plVar3;
                        if (local_ac < (uint)((int)plVar3[8] - (int)*plVar3)) {
                          lVar11 = (ulonglong)local_ac + *plVar3;
                        }
                        else {
                          lVar11 = plVar3[8];
                        }
                        plVar3[7] = lVar11;
                        if ((uVar5 >> 0xd & 1) == 0) {
                          local_90 = local_94;
                          local_40 = (ushort *)0x0;
                          puVar16 = local_a0;
                        }
                        else {
                          local_40 = (ushort *)FUN_180592550(plVar3,&local_90);
                          puVar16 = (uint *)local_40;
                        }
                        uVar14 = local_90;
                        uVar13 = local_90;
                        if (local_90 == 0) {
                          uVar13 = *(uint *)(param_1 + 0x3d0);
                        }
                        piVar12 = (int *)FUN_1805923f0(plVar3,uVar13);
                        lVar17 = local_70;
                        if ((puVar16 != (uint *)0x0) && (piVar12 != (int *)0x0)) {
                          if (puVar16 == (uint *)0xffffffffffffffff) {
                            uVar13 = 0;
                            if (*(int *)(param_1 + 0x3d0) != 0) {
                              do {
                                uVar8 = (ulonglong)uVar13;
                                uVar13 = uVar13 + 1;
                                piVar18 = (int *)(local_80 + uVar8 * 4);
                                *piVar18 = *piVar18 +
                                           (int)((ulonglong)
                                                 ((longlong)piVar12[uVar8] * (longlong)local_8c +
                                                  0x8000 + ((longlong)piVar12[uVar8] *
                                                            (longlong)local_8c >> 0x3f)) >> 0x10);
                              } while (uVar13 < *(uint *)(param_1 + 0x3d0));
                              goto LAB_18059599f;
                            }
                          }
                          else if (uVar14 != 0) {
                            uVar8 = (ulonglong)uVar14;
                            piVar18 = piVar12;
                            do {
                              if ((uint)*(ushort *)puVar16 < *(uint *)(param_1 + 0x3d0)) {
                                piVar1 = (int *)(local_80 + (ulonglong)*(ushort *)puVar16 * 4);
                                *piVar1 = *piVar1 + (int)((ulonglong)
                                                          ((longlong)local_8c * (longlong)*piVar18 +
                                                           0x8000 + ((longlong)local_8c *
                                                                     (longlong)*piVar18 >> 0x3f)) >>
                                                         0x10);
                              }
                              puVar16 = (uint *)((longlong)puVar16 + 2);
                              piVar18 = piVar18 + 1;
                              uVar8 = uVar8 - 1;
                            } while (uVar8 != 0);
LAB_18059599f:
                            puVar19 = local_48;
                          }
                        }
                        if (local_40 != (ushort *)0xffffffffffffffff) {
                          FUN_18057abd0(local_70,local_40);
                        }
                        FUN_18057abd0(lVar17,piVar12);
                        if (local_60 < (uint)((int)plVar3[8] - (int)*plVar3)) {
                          plVar3[7] = (ulonglong)local_60 + *plVar3;
                        }
                        else {
                          plVar3[7] = plVar3[8];
                        }
                      }
                      local_88 = local_88 + 1;
                      local_ac = local_ac + local_b4;
                      lVar11 = local_68;
                    } while (local_88 < local_a8);
                  }
                  uVar13 = 0;
                  if (*(int *)(param_1 + 0x3d0) != 0) {
                    do {
                      uVar8 = (ulonglong)uVar13;
                      uVar13 = uVar13 + 1;
                      piVar12 = (int *)(*(longlong *)(param_1 + 0x3d8) + uVar8 * 4);
                      *piVar12 = *piVar12 + (*(int *)(local_80 + uVar8 * 4) + 0x200 >> 10);
                    } while (uVar13 < *(uint *)(param_1 + 0x3d0));
                  }
                  FUN_1805745c0(param_1 + 0xa8,FUN_180594160,0);
                }
LAB_180595a63:
                if (local_a0 != (uint *)0xffffffffffffffff) {
                  FUN_18057abd0(lVar17,local_a0);
                }
                FUN_18057abd0(lVar17,local_80);
                FUN_18057abd0(lVar17,lVar11);
                puVar16 = local_78;
                FUN_180577d30(plVar3);
                uVar8 = (ulonglong)local_b0;
                local_b8 = local_b0;
              }
            }
            else {
              local_b0 = 0;
              FUN_180577d30(plVar3);
              uVar8 = (ulonglong)local_b0;
              local_b8 = local_b0;
            }
          }
          else {
            uVar8 = 0;
            local_b8 = 0;
          }
        }
        else {
          uVar8 = 0;
          local_b8 = 0;
        }
      }
      goto LAB_180595aaf;
    }
    if (iVar7 == 2) {
      FUN_18057abd0(lVar11);
      *(undefined8 *)(param_1 + 0x3d8) = 0;
      uVar8 = FUN_180594320(param_1,*(undefined8 *)(param_1 + 0xa0));
      local_b8 = (uint)uVar8;
      goto LAB_180595aaf;
    }
  }
  uVar8 = (ulonglong)local_b8;
LAB_180595aaf:
  uVar9 = 0;
  if (puVar16[0x1a] != 0) {
    do {
      uVar13 = (int)uVar9 + 1;
      *(undefined4 *)(*(longlong *)(puVar16 + 0x1e) + uVar9 * 4) = 0xfffe0000;
      uVar9 = (ulonglong)uVar13;
    } while (uVar13 < puVar16[0x1a]);
    uVar8 = (ulonglong)local_b8;
  }
  return uVar8;
}



