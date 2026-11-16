// FUN_1801e3e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e3e40 */

undefined8 *
FUN_1801e3e40(undefined8 *param_1,char *param_2,char *param_3,ulonglong param_4,uint param_5)

{
  byte bVar1;
  ushort uVar2;
  sbyte sVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar16;
  uint uVar17;
  int local_res8;
  uint local_res20;
  int local_68;
  int local_60;
  ulonglong local_58;
  
  if (param_4 == 0) {
    if ((longlong)param_3 - (longlong)param_2 < (longlong)(int)((param_5 != 0) + 5 + param_5)) {
      *param_1 = param_3;
      *(undefined4 *)(param_1 + 1) = 0x84;
      return param_1;
    }
    pcVar10 = param_2 + 1;
    *param_2 = '0';
    if (param_5 != 0) {
      *pcVar10 = '.';
      pcVar10 = param_2 + 2 + param_5;
      FUN_18063ab10(param_2 + 2,0x30,(ulonglong)param_5);
    }
    builtin_strncpy(pcVar10,"e+00",4);
    *param_1 = pcVar10 + 4;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
  local_58 = param_4 & 0xfffffffffffff;
  uVar17 = 0;
  uVar12 = 0;
  uVar14 = 0;
  uVar5 = (uint)(param_4 >> 0x20);
  pcVar10 = param_2;
  if (uVar5 >> 0x14 == 0) {
    local_res8 = -0x432;
    iVar16 = 0;
LAB_1801e4207:
    uVar5 = -((int)(local_res8 + (local_res8 >> 0x1f & 0xfU)) >> 4);
    uVar15 = (ulonglong)(int)uVar5;
    if ((byte)(&DAT_1807cb4d0)[uVar15] < 200) {
      uVar2 = *(ushort *)(&DAT_1807cb5a2 + uVar15 * 2);
      local_68 = (uint)(byte)(&DAT_1807cb4d0)[uVar15] * 9;
      uVar13 = (ulonglong)*(ushort *)(&DAT_1807cb5a0 + uVar15 * 2);
      local_res20 = (uint)*(ushort *)(&DAT_1807cb5a0 + uVar15 * 2);
      do {
        if ((uint)uVar13 < (uint)uVar2) {
          uVar8 = FUN_1801e3bb0(local_58 << 8,&UNK_180696c60 + uVar13 * 0x18,
                                (8 - (int)uVar15) * 0x10 - local_res8);
          uVar12 = (ulonglong)uVar8;
          uVar13 = (ulonglong)local_res20;
        }
        else {
          uVar12 = 0;
        }
        uVar8 = (uint)uVar13;
        uVar11 = (uint)uVar12;
        if (uVar17 == 0) {
          if (uVar11 != 0) {
            if (uVar11 < 100000000) {
              if (uVar11 < 10000000) {
                if (uVar11 < 1000000) {
                  if (uVar11 < 100000) {
                    if (uVar11 < 10000) {
                      if (uVar11 < 1000) {
                        if (uVar11 < 100) {
                          uVar14 = 2 - (uVar11 < 10);
                        }
                        else {
                          uVar14 = 3;
                        }
                      }
                      else {
                        uVar14 = 4;
                      }
                    }
                    else {
                      uVar14 = 5;
                    }
                  }
                  else {
                    uVar14 = 6;
                  }
                }
                else {
                  uVar14 = 7;
                }
              }
              else {
                uVar14 = 8;
              }
            }
            else {
              uVar14 = 9;
            }
            iVar16 = (uVar14 - local_68) + -10;
            if (uVar14 <= param_5 + 1) {
              if (param_5 == 0) {
                if (pcVar10 == param_3) goto LAB_1801e41a6;
                uVar15 = 1;
                *pcVar10 = (char)uVar12 + '0';
              }
              else {
                uVar15 = (ulonglong)(uVar14 + 1);
                if ((longlong)param_3 - (longlong)pcVar10 < (longlong)uVar15) goto LAB_1801e41a6;
                FUN_1801e3d30(uVar14,uVar12,pcVar10);
              }
              uVar8 = 0;
              pcVar10 = pcVar10 + uVar15;
              uVar17 = uVar14;
              goto LAB_1801e43b1;
            }
            break;
          }
        }
        else {
          if (param_5 + 1 < uVar17 + 9) {
            uVar14 = 9;
            break;
          }
          if ((longlong)param_3 - (longlong)pcVar10 < 9) goto LAB_1801e41a6;
          FUN_1801e5810(uVar12,pcVar10);
          pcVar10 = pcVar10 + 9;
          uVar17 = uVar17 + 9;
          uVar8 = uVar14;
LAB_1801e43b1:
          uVar14 = uVar8;
          uVar8 = local_res20;
        }
        local_res20 = uVar8 + 1;
        uVar13 = (ulonglong)local_res20;
        local_68 = local_68 + 9;
        if (0x707 < local_68) break;
        uVar15 = (ulonglong)uVar5;
      } while( true );
    }
  }
  else {
    uVar5 = uVar5 >> 0x14;
    local_res8 = uVar5 - 0x433;
    local_58 = local_58 | 0x10000000000000;
    iVar16 = 0;
    if (-0x35 < local_res8) {
      if (local_res8 < 0) {
        uVar15 = 0;
        local_res20 = 1;
        iVar6 = 0x78;
LAB_1801e3ff4:
        local_68 = local_res20 * 9;
        local_60 = (ushort)(&DAT_1807cb520)[uVar15] + local_res20;
        do {
          uVar5 = FUN_1801e3bb0(local_58 << 8,&UNK_18068f9a0 + (longlong)local_60 * 0x18,
                                (iVar6 - local_res8) + 8);
          uVar12 = (ulonglong)uVar5;
          if (uVar17 == 0) {
            if (uVar5 != 0) {
              if (uVar5 < 100000000) {
                if (uVar5 < 10000000) {
                  if (uVar5 < 1000000) {
                    if (uVar5 < 100000) {
                      if (uVar5 < 10000) {
                        if (uVar5 < 1000) {
                          if (uVar5 < 100) {
                            uVar14 = 2 - (uVar5 < 10);
                          }
                          else {
                            uVar14 = 3;
                          }
                        }
                        else {
                          uVar14 = 4;
                        }
                      }
                      else {
                        uVar14 = 5;
                      }
                    }
                    else {
                      uVar14 = 6;
                    }
                  }
                  else {
                    uVar14 = 7;
                  }
                }
                else {
                  uVar14 = 8;
                }
              }
              else {
                uVar14 = 9;
              }
              iVar16 = local_68 + -1 + uVar14;
              if (param_5 + 1 < uVar14) goto LAB_1801e41ca;
              if (param_5 == 0) {
                if (pcVar10 == param_3) goto LAB_1801e41a6;
                uVar15 = 1;
                *pcVar10 = (char)uVar5 + '0';
              }
              else {
                uVar15 = (ulonglong)(uVar14 + 1);
                if ((longlong)param_3 - (longlong)pcVar10 < (longlong)uVar15) goto LAB_1801e41a6;
                FUN_1801e3d30(uVar14,uVar12,pcVar10);
              }
              pcVar10 = pcVar10 + uVar15;
              uVar17 = uVar14;
            }
          }
          else {
            if (param_5 + 1 < uVar17 + 9) {
              uVar14 = 9;
              goto LAB_1801e41ca;
            }
            if ((longlong)param_3 - (longlong)pcVar10 < 9) goto LAB_1801e41a6;
            FUN_1801e5810(uVar5,pcVar10);
            pcVar10 = pcVar10 + 9;
            uVar17 = uVar17 + 9;
          }
          local_res20 = local_res20 + -1;
          local_68 = local_68 + -9;
          local_60 = local_60 + -1;
        } while (-1 < (int)local_res20);
      }
      else {
        uVar5 = uVar5 - 0x424 >> 4;
        uVar15 = (ulonglong)uVar5;
        iVar6 = uVar5 * 0x10 + 0x78;
        local_res20 = ((uVar5 * 0x134410 >> 0x12) + 0x19) / 9 - 1;
        if (-1 < (int)local_res20) goto LAB_1801e3ff4;
      }
      uVar14 = 0;
    }
LAB_1801e41ca:
    if ((local_res8 < 0) && (uVar14 == 0)) goto LAB_1801e4207;
  }
  uVar5 = (param_5 + 1) - uVar17;
  uVar15 = 0;
  if (uVar14 != 0) {
    uVar15 = uVar12;
  }
  uVar8 = 0;
  if ((uVar5 < uVar14) && (uVar14 - uVar5 != 0)) {
    uVar12 = (ulonglong)(uVar14 - uVar5);
    do {
      iVar6 = (int)uVar15;
      uVar15 = uVar15 / 10;
      uVar8 = iVar6 + (int)uVar15 * -10;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (uVar8 != 5) goto LAB_1801e44e2;
    iVar9 = (param_5 + 1) - iVar16;
    iVar6 = -(local_res8 + iVar9);
    if ((iVar6 < 1) ||
       ((iVar6 < 0x3c &&
        (sVar3 = ((byte)iVar6 < 0x41) * ('@' - (byte)iVar6), (local_58 << sVar3) >> sVar3 == 0)))) {
      cVar4 = '\x01';
    }
    else {
      cVar4 = '\0';
    }
    if (iVar9 < 0) {
      if (cVar4 == '\0') {
LAB_1801e44d9:
        cVar4 = '\0';
        goto LAB_1801e44db;
      }
      uVar14 = 0;
      uVar12 = local_58 / 5;
      if ((int)local_58 == (int)(local_58 / 5) * 5) {
        do {
          uVar14 = uVar14 + 1;
          uVar13 = uVar12 / 5;
          iVar6 = (int)uVar12;
          uVar12 = uVar13;
        } while (iVar6 == (int)uVar13 * 5);
      }
      if (uVar14 < (uint)-iVar9) goto LAB_1801e44d9;
      cVar4 = '\x02';
    }
    else {
LAB_1801e44db:
      cVar4 = cVar4 + '\x01';
    }
  }
  else {
LAB_1801e44e2:
    cVar4 = 5 < uVar8;
  }
  if (uVar17 == 0) {
    if (param_5 == 0) {
      if (pcVar10 == param_3) goto LAB_1801e41a6;
      uVar12 = 1;
      *pcVar10 = (char)uVar15 + '0';
    }
    else {
      uVar12 = (ulonglong)(uVar5 + 1);
      if ((longlong)param_3 - (longlong)pcVar10 < (longlong)uVar12) goto LAB_1801e41a6;
      FUN_1801e3d30(uVar5,uVar15,pcVar10);
    }
  }
  else {
    uVar12 = (ulonglong)uVar5;
    if ((longlong)param_3 - (longlong)pcVar10 < (longlong)uVar12) goto LAB_1801e41a6;
    if ((int)uVar15 == 0) {
      FUN_18063ab10(pcVar10,0x30,uVar5);
    }
    else {
      FUN_1801e3c90(uVar5,uVar15,pcVar10);
    }
  }
  pcVar10 = pcVar10 + uVar12;
  pcVar7 = pcVar10;
  if (cVar4 != '\0') {
    while (pcVar7 != param_2) {
      bVar1 = pcVar7[-1];
      pcVar7 = pcVar7 + -1;
      if (bVar1 != 0x2e) {
        if (bVar1 != 0x39) {
          if ((cVar4 == '\x01') || ((bVar1 & 1) != 0)) {
            *pcVar7 = bVar1 + 1;
          }
          goto LAB_1801e45a8;
        }
        *pcVar7 = '0';
        cVar4 = '\x01';
      }
    }
    *pcVar7 = '1';
    iVar16 = iVar16 + 1;
  }
LAB_1801e45a8:
  iVar6 = -iVar16;
  if (-iVar16 < 0) {
    iVar6 = iVar16;
  }
  if ((longlong)((ulonglong)(99 < iVar6) + 4) <= (longlong)param_3 - (longlong)pcVar10) {
    *pcVar10 = 'e';
    cVar4 = '-';
    if (-1 < iVar16) {
      cVar4 = '+';
    }
    pcVar10[1] = cVar4;
    if (iVar6 < 100) {
      *(undefined2 *)(pcVar10 + 2) = *(undefined2 *)(&DAT_1807cb900 + iVar6 * 2);
      pcVar10 = pcVar10 + 4;
    }
    else {
      *(undefined2 *)(pcVar10 + 2) = *(undefined2 *)(&DAT_1807cb900 + (iVar6 / 10) * 2);
      pcVar10[4] = (char)iVar6 + (char)(iVar6 / 10) * -10 + '0';
      pcVar10 = pcVar10 + 5;
    }
    *param_1 = pcVar10;
    *(undefined4 *)(param_1 + 1) = 0;
    return param_1;
  }
LAB_1801e41a6:
  *param_1 = param_3;
  *(undefined4 *)(param_1 + 1) = 0x84;
  return param_1;
}



