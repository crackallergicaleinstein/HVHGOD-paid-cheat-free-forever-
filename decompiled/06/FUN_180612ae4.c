// FUN_180612ae4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180612ae4 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180612ae4(uint *param_1,undefined8 *param_2)

{
  byte bVar1;
  longlong lVar2;
  sbyte sVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong *puVar6;
  byte bVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint uVar19;
  uint uVar20;
  rsize_t rVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  bool bVar27;
  undefined1 auStack_d78 [32];
  undefined8 *local_d58;
  uint local_d48;
  uint local_d44;
  uint local_d40;
  uint local_d3c;
  uint *local_d38;
  uint local_d30;
  uint *local_d28;
  undefined8 *local_d20;
  uint *local_d18;
  uint *local_d10;
  uint *local_d08;
  undefined4 local_cf8;
  uint local_cf4 [115];
  undefined4 local_b28;
  undefined1 local_b24 [460];
  uint local_958;
  uint local_954 [115];
  uint local_788;
  uint local_784 [115];
  uint local_5b8;
  uint local_5b4 [115];
  uint local_3e8;
  undefined8 local_3e4;
  uint local_218;
  uint local_214 [115];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_d78;
  local_d44 = *param_1;
  uVar25 = param_1[1];
  local_d30 = (-(uint)(*(char *)(param_2 + 1) != '\0') & 0x1d) + 0x19;
  local_788 = 0;
  puVar22 = param_1 + 2;
  uVar16 = 0;
  if ((int)local_d44 < 0) {
    local_d44 = 0;
  }
  uVar26 = 0;
  uVar24 = 0;
  uVar19 = local_d44;
  if (uVar25 <= local_d44) {
    uVar19 = uVar25;
  }
  local_d44 = local_d44 - uVar19;
  local_d08 = (uint *)((longlong)param_1 + (ulonglong)uVar19 + 8);
  local_d10 = (uint *)((longlong)param_1 + (ulonglong)uVar25 + 8);
  local_d48 = (int)local_d10 - (int)local_d08;
  local_d28 = param_1;
  local_d20 = param_2;
  if (puVar22 != local_d08) {
    do {
      uVar25 = (uint)uVar26;
      if (uVar24 == 9) {
        if (uVar16 != 0) {
          uVar18 = 0;
          uVar10 = 0;
          do {
            uVar19 = (int)uVar10 + 1;
            uVar9 = (ulonglong)local_784[uVar10] * 1000000000 + uVar18;
            local_784[uVar10] = (uint)uVar9;
            uVar18 = uVar9 >> 0x20;
            uVar10 = (ulonglong)uVar19;
          } while (uVar19 != uVar16);
          uVar16 = (uint)(uVar9 >> 0x20);
          if (uVar16 == 0) {
            uVar16 = local_788;
          }
          else if (local_788 < 0x73) {
            local_784[local_788] = uVar16;
            local_788 = local_788 + 1;
            uVar16 = local_788;
          }
          else {
            local_788 = 0;
            uVar16 = 0;
          }
        }
        if (uVar25 != 0) {
          uVar10 = 0;
          uVar19 = 0;
          if (uVar16 != 0) {
            do {
              uVar16 = (int)uVar10 + 1;
              uVar18 = local_784[uVar10] + uVar26;
              local_784[uVar10] = (uint)uVar18;
              uVar26 = uVar18 >> 0x20;
              uVar25 = (uint)(uVar18 >> 0x20);
              uVar10 = (ulonglong)uVar16;
            } while (uVar16 != local_788);
            uVar16 = local_788;
            uVar19 = local_788;
            if (uVar25 == 0) goto LAB_180612c8f;
          }
          if (uVar19 < 0x73) {
            local_784[uVar19] = uVar25;
            uVar16 = local_788 + 1;
            local_788 = uVar16;
          }
          else {
            uVar16 = 0;
            local_788 = 0;
          }
        }
LAB_180612c8f:
        uVar25 = 0;
        uVar24 = 0;
      }
      uVar19 = *puVar22;
      uVar24 = uVar24 + 1;
      puVar22 = (uint *)((longlong)puVar22 + 1);
      uVar25 = (uint)(byte)uVar19 + uVar25 * 10;
      uVar26 = (ulonglong)uVar25;
    } while (puVar22 != local_d08);
    if (uVar24 != 0) {
      for (uVar19 = uVar24 / 10; uVar19 != 0; uVar19 = uVar19 - local_d40) {
        local_d40 = uVar19;
        if (0x26 < uVar19) {
          local_d40 = 0x26;
        }
        uVar13 = local_d40 - 1;
        bVar7 = (&DAT_1806aed72)[(ulonglong)uVar13 * 4];
        bVar1 = (&DAT_1806aed73)[(ulonglong)uVar13 * 4];
        local_218 = (uint)bVar1 + (uint)bVar7;
        local_d3c = uVar19;
        FUN_18063ab10(local_214,0,(ulonglong)bVar7 * 4);
        FUN_18063aed0(local_214 + bVar7,
                      &DAT_1806ae460 +
                      (ulonglong)*(ushort *)(&DAT_1806aed70 + (ulonglong)uVar13 * 4) * 4,
                      (ulonglong)bVar1 << 2);
        uVar13 = local_784[0];
        if (local_218 < 2) {
          uVar10 = (ulonglong)local_214[0];
          if (local_214[0] == 0) {
LAB_180612d60:
            local_788 = 0;
            uVar16 = 0;
            local_d3c = uVar19;
          }
          else {
            local_d3c = uVar19;
            if (local_214[0] != 1) {
              if (uVar16 != 0) {
                uVar9 = 0;
                uVar18 = 0;
                do {
                  uVar14 = (int)uVar18 + 1;
                  uVar11 = local_784[uVar18] * uVar10 + uVar9;
                  local_784[uVar18] = (uint)uVar11;
                  uVar9 = uVar11 >> 0x20;
                  uVar13 = (uint)(uVar11 >> 0x20);
                  uVar18 = (ulonglong)uVar14;
                } while (uVar14 != uVar16);
                goto LAB_180612db3;
              }
            }
          }
LAB_18061307e:
          bVar27 = true;
          uVar19 = local_d3c;
        }
        else {
          if (1 < uVar16) {
            local_d18 = local_784;
            local_d38 = local_214;
            if (uVar16 <= local_218) {
              uVar19 = uVar16;
            }
            else {
              local_d38 = local_784;
              uVar19 = local_218;
              local_d18 = local_214;
            }
            local_5b8 = 0;
            uVar10 = 0;
            uVar13 = local_218;
            if (uVar16 > local_218) {
              uVar13 = uVar16;
            }
            local_788 = 0;
            if (uVar19 != 0) {
              do {
                uVar14 = (uint)uVar10;
                uVar16 = local_d18[uVar10];
                if (uVar16 == 0) {
                  if (uVar14 == local_788) {
                    local_788 = uVar14 + 1;
                    local_5b4[uVar10] = 0;
                    local_5b8 = local_788;
                  }
                }
                else {
                  uVar18 = 0;
                  if (uVar13 != 0) {
                    do {
                      uVar17 = (uint)uVar10;
                      uVar9 = uVar10;
                      if (uVar17 == 0x73) break;
                      if (uVar17 == local_788) {
                        local_5b4[uVar10] = 0;
                        local_5b8 = uVar17 + 1;
                      }
                      uVar9 = (ulonglong)(uVar17 + 1);
                      uVar18 = (ulonglong)local_d38[-uVar14 + uVar17] * (ulonglong)uVar16 + uVar18 +
                               (ulonglong)local_5b4[uVar10];
                      local_5b4[uVar10] = (uint)uVar18;
                      uVar18 = uVar18 >> 0x20;
                      uVar10 = uVar9;
                      local_788 = local_5b8;
                    } while (-uVar14 + uVar17 + 1 != uVar13);
                    uVar16 = (uint)uVar18;
                    uVar10 = uVar9;
                    while (uVar16 != 0) {
                      uVar17 = (uint)uVar10;
                      if (uVar17 == 0x73) goto LAB_180613150;
                      if (uVar17 == local_788) {
                        local_5b4[uVar10] = 0;
                        local_5b8 = uVar17 + 1;
                      }
                      uVar16 = local_5b4[uVar10];
                      local_5b4[uVar10] = (uint)(uVar16 + uVar18);
                      uVar16 = (uint)(uVar16 + uVar18 >> 0x20);
                      uVar18 = (ulonglong)uVar16;
                      uVar10 = (ulonglong)(uVar17 + 1);
                      local_788 = local_5b8;
                    }
                  }
                  if ((int)uVar10 == 0x73) goto LAB_180613150;
                }
                uVar10 = (ulonglong)(uVar14 + 1);
              } while (uVar14 + 1 != uVar19);
            }
            if ((ulonglong)local_788 != 0) {
              if ((ulonglong)local_788 * 4 < 0x1cd) {
                FUN_18063aed0();
              }
              else {
                FUN_18063ab10(local_784,0,0x1cc);
                puVar5 = (undefined4 *)FUN_18060fe00();
                *puVar5 = 0x22;
                FUN_18060aad4();
              }
            }
            uVar16 = local_788;
            goto LAB_18061307e;
          }
          uVar10 = (ulonglong)local_784[0];
          local_788 = local_218;
          if ((ulonglong)local_218 != 0) {
            if ((ulonglong)local_218 * 4 < 0x1cd) {
              FUN_18063aed0();
            }
            else {
              FUN_18063ab10(local_784,0,0x1cc);
              puVar5 = (undefined4 *)FUN_18060fe00();
              *puVar5 = 0x22;
              FUN_18060aad4();
            }
          }
          if (uVar13 == 0) goto LAB_180612d60;
          uVar16 = local_788;
          local_d3c = uVar19;
          if ((uVar13 == 1) || (local_788 == 0)) goto LAB_18061307e;
          uVar9 = 0;
          uVar18 = 0;
          do {
            uVar16 = (int)uVar18 + 1;
            uVar11 = local_784[uVar18] * uVar10 + uVar9;
            local_784[uVar18] = (uint)uVar11;
            uVar9 = uVar11 >> 0x20;
            uVar13 = (uint)(uVar11 >> 0x20);
            uVar18 = (ulonglong)uVar16;
          } while (uVar16 != local_788);
LAB_180612db3:
          uVar16 = 0;
          if (uVar13 == 0) {
            uVar16 = local_788;
            local_d3c = uVar19;
            goto LAB_18061307e;
          }
          if (local_788 < 0x73) {
            local_784[local_788] = uVar13;
            local_788 = local_788 + 1;
            uVar16 = local_788;
            local_d3c = uVar19;
            goto LAB_18061307e;
          }
          local_788 = 0;
          bVar27 = false;
        }
        if (!bVar27) goto LAB_180613150;
      }
      if (uVar24 % 10 != 0) {
        uVar19 = *(uint *)(&DAT_1806aee08 + (ulonglong)(uVar24 % 10 - 1) * 4);
        if (uVar19 == 0) {
LAB_180613150:
          local_788 = 0;
          uVar16 = 0;
        }
        else if ((uVar19 != 1) && (uVar16 != 0)) {
          uVar18 = 0;
          uVar10 = 0;
          do {
            uVar24 = (int)uVar10 + 1;
            uVar9 = (ulonglong)local_784[uVar10] * (ulonglong)uVar19 + uVar18;
            local_784[uVar10] = (uint)uVar9;
            uVar18 = uVar9 >> 0x20;
            uVar10 = (ulonglong)uVar24;
          } while (uVar24 != uVar16);
          uVar16 = (uint)(uVar9 >> 0x20);
          if (uVar16 == 0) {
            uVar16 = local_788;
          }
          else {
            if (0x72 < local_788) goto LAB_180613150;
            local_784[local_788] = uVar16;
            local_788 = local_788 + 1;
            uVar16 = local_788;
          }
        }
      }
      if (uVar25 != 0) {
        uVar10 = 0;
        uVar19 = 0;
        if (uVar16 != 0) {
          do {
            uVar16 = (int)uVar10 + 1;
            uVar25 = local_784[uVar10];
            local_784[uVar10] = (uint)(uVar25 + uVar26);
            uVar25 = (uint)(uVar25 + uVar26 >> 0x20);
            uVar26 = (ulonglong)uVar25;
            uVar10 = (ulonglong)uVar16;
          } while (uVar16 != local_788);
          uVar16 = local_788;
          uVar19 = local_788;
          if (uVar25 == 0) goto LAB_1806131dc;
        }
        if (uVar19 < 0x73) {
          local_784[uVar19] = uVar25;
          uVar16 = local_788 + 1;
          local_788 = uVar16;
        }
        else {
          uVar16 = 0;
          local_788 = 0;
        }
      }
    }
  }
LAB_1806131dc:
  if (local_d44 == 0) {
LAB_18061370d:
    if (uVar16 == 0) goto LAB_180613712;
    local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
    iVar8 = 0x1f;
    bVar27 = local_784[uVar16 - 1] == 0;
    if (!bVar27) {
      for (; local_784[uVar16 - 1] >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (bVar27) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + 1;
    }
    local_d3c = (uVar16 - 1) * 0x20 + iVar8;
  }
  else {
    for (uVar25 = local_d44 / 10; uVar25 != 0; uVar25 = uVar25 - uVar19) {
      uVar19 = uVar25;
      if (0x26 < uVar25) {
        uVar19 = 0x26;
      }
      uVar24 = uVar19 - 1;
      bVar7 = (&DAT_1806aed72)[(ulonglong)uVar24 * 4];
      bVar1 = (&DAT_1806aed73)[(ulonglong)uVar24 * 4];
      local_218 = (uint)bVar1 + (uint)bVar7;
      local_d40 = uVar19;
      local_d3c = uVar25;
      FUN_18063ab10(local_214,0,(ulonglong)bVar7 * 4);
      FUN_18063aed0(local_214 + bVar7,
                    &DAT_1806ae460 +
                    (ulonglong)*(ushort *)(&DAT_1806aed70 + (ulonglong)uVar24 * 4) * 4,
                    (ulonglong)bVar1 << 2);
      uVar24 = local_784[0];
      if (local_218 < 2) {
        uVar26 = (ulonglong)local_214[0];
        if (local_214[0] == 0) {
LAB_18061329f:
          local_788 = 0;
          uVar16 = 0;
          local_d3c = uVar25;
          goto LAB_1806135ac;
        }
        local_d3c = uVar25;
        if (local_214[0] == 1) goto LAB_1806135ac;
        if (uVar16 == 0) goto LAB_1806135ac;
        uVar18 = 0;
        uVar10 = 0;
        do {
          uVar13 = (int)uVar10 + 1;
          uVar9 = local_784[uVar10] * uVar26 + uVar18;
          local_784[uVar10] = (uint)uVar9;
          uVar18 = uVar9 >> 0x20;
          uVar24 = (uint)(uVar9 >> 0x20);
          uVar10 = (ulonglong)uVar13;
        } while (uVar13 != uVar16);
LAB_1806132f2:
        uVar16 = 0;
        if (uVar24 == 0) {
          uVar16 = local_788;
          local_d3c = uVar25;
          goto LAB_1806135ac;
        }
        if (local_788 < 0x73) {
          local_784[local_788] = uVar24;
          local_788 = local_788 + 1;
          uVar16 = local_788;
          local_d3c = uVar25;
          goto LAB_1806135ac;
        }
        local_788 = 0;
        bVar27 = false;
      }
      else {
        if (uVar16 < 2) {
          uVar26 = (ulonglong)local_784[0];
          local_788 = local_218;
          if ((ulonglong)local_218 != 0) {
            if ((ulonglong)local_218 * 4 < 0x1cd) {
              FUN_18063aed0();
            }
            else {
              FUN_18063ab10(local_784,0,0x1cc);
              puVar5 = (undefined4 *)FUN_18060fe00();
              *puVar5 = 0x22;
              FUN_18060aad4();
            }
          }
          if (uVar24 == 0) goto LAB_18061329f;
          uVar16 = local_788;
          local_d3c = uVar25;
          if (uVar24 != 1) {
            if (local_788 != 0) {
              uVar18 = 0;
              uVar10 = 0;
              do {
                uVar16 = (int)uVar10 + 1;
                uVar9 = local_784[uVar10] * uVar26 + uVar18;
                local_784[uVar10] = (uint)uVar9;
                uVar18 = uVar9 >> 0x20;
                uVar24 = (uint)(uVar9 >> 0x20);
                uVar10 = (ulonglong)uVar16;
              } while (uVar16 != local_788);
              goto LAB_1806132f2;
            }
          }
        }
        else {
          puVar22 = local_784;
          puVar12 = local_214;
          if (uVar16 <= local_218) {
            uVar25 = uVar16;
          }
          else {
            puVar12 = local_784;
            uVar25 = local_218;
            puVar22 = local_214;
          }
          local_5b8 = 0;
          uVar26 = 0;
          uVar19 = local_218;
          if (uVar16 > local_218) {
            uVar19 = uVar16;
          }
          local_788 = 0;
          if (uVar25 != 0) {
            do {
              uVar24 = (uint)uVar26;
              uVar16 = puVar22[uVar26];
              if (uVar16 == 0) {
                if (uVar24 == local_788) {
                  local_788 = uVar24 + 1;
                  local_5b4[uVar26] = 0;
                  local_5b8 = local_788;
                }
              }
              else {
                uVar10 = 0;
                uVar13 = uVar24;
                if (uVar19 != 0) {
                  do {
                    uVar13 = (uint)uVar26;
                    uVar18 = uVar26;
                    if (uVar13 == 0x73) break;
                    if (uVar13 == local_788) {
                      local_5b4[uVar26] = 0;
                      local_5b8 = uVar13 + 1;
                    }
                    uVar18 = (ulonglong)(uVar13 + 1);
                    uVar10 = (ulonglong)puVar12[-uVar24 + uVar13] * (ulonglong)uVar16 + uVar10 +
                             (ulonglong)local_5b4[uVar26];
                    local_5b4[uVar26] = (uint)uVar10;
                    uVar10 = uVar10 >> 0x20;
                    uVar26 = uVar18;
                    local_788 = local_5b8;
                  } while (-uVar24 + uVar13 + 1 != uVar19);
                  uVar13 = (uint)uVar18;
                  uVar16 = (uint)uVar10;
                  while (uVar16 != 0) {
                    uVar13 = (uint)uVar18;
                    if (uVar13 == 0x73) goto LAB_180613686;
                    if (uVar13 == local_788) {
                      local_5b4[uVar18] = 0;
                      local_5b8 = uVar13 + 1;
                    }
                    uVar16 = local_5b4[uVar18];
                    uVar13 = uVar13 + 1;
                    local_5b4[uVar18] = (uint)(uVar10 + uVar16);
                    uVar16 = (uint)(uVar10 + uVar16 >> 0x20);
                    uVar10 = (ulonglong)uVar16;
                    uVar18 = (ulonglong)uVar13;
                    local_788 = local_5b8;
                  }
                }
                if (uVar13 == 0x73) goto LAB_180613686;
              }
              uVar26 = (ulonglong)(uVar24 + 1);
            } while (uVar24 + 1 != uVar25);
          }
          if ((ulonglong)local_788 != 0) {
            if ((ulonglong)local_788 * 4 < 0x1cd) {
              FUN_18063aed0();
            }
            else {
              FUN_18063ab10(local_784,0,0x1cc);
              puVar5 = (undefined4 *)FUN_18060fe00();
              *puVar5 = 0x22;
              FUN_18060aad4();
            }
          }
          uVar16 = local_788;
          uVar19 = local_d40;
        }
LAB_1806135ac:
        bVar27 = true;
        uVar25 = local_d3c;
      }
      if (!bVar27) goto LAB_180613686;
    }
    if (local_d44 % 10 == 0) goto LAB_18061370d;
    uVar25 = *(uint *)(&DAT_1806aee08 + (ulonglong)(local_d44 % 10 - 1) * 4);
    if (uVar25 == 0) {
      local_788 = 0;
      uVar16 = 0;
      goto LAB_18061370d;
    }
    if (uVar25 == 1) goto LAB_18061370d;
    if (uVar16 != 0) {
      uVar10 = 0;
      uVar26 = 0;
      do {
        uVar19 = (int)uVar26 + 1;
        uVar18 = (ulonglong)local_784[uVar26] * (ulonglong)uVar25 + uVar10;
        local_784[uVar26] = (uint)uVar18;
        uVar10 = uVar18 >> 0x20;
        uVar26 = (ulonglong)uVar19;
      } while (uVar19 != uVar16);
      uVar25 = (uint)(uVar18 >> 0x20);
      if (uVar25 == 0) {
        uVar16 = local_788;
      }
      else {
        if (0x72 < local_788) {
LAB_180613686:
          puVar6 = (ulonglong *)*local_d20;
          if (*(char *)(local_d20 + 1) == '\0') {
            *(uint *)puVar6 =
                 (-(uint)((char)local_d28[0xc2] != '\0') & 0x80000000) + 0x7f800000 |
                 (uint)*puVar6 & 0x7f800000;
          }
          *puVar6 = (-(ulonglong)((char)local_d28[0xc2] != '\0') & 0x8000000000000000) +
                    0x7ff0000000000000 | *puVar6 & 0x7ff0000000000000;
        }
        local_784[local_788] = uVar25;
        local_788 = local_788 + 1;
        uVar16 = local_788;
      }
      goto LAB_18061370d;
    }
LAB_180613712:
    local_d3c = 0;
  }
  puVar22 = local_d10;
  if ((local_d3c < local_d30) && (uVar25 = 0, local_d48 != 0)) {
    uVar24 = 0;
    uVar26 = 0;
    local_958 = 0;
    puVar12 = local_d08;
    uVar19 = uVar25;
    if (local_d08 != local_d10) {
      do {
        uVar13 = (uint)uVar26;
        if (uVar19 == 9) {
          if (uVar24 != 0) {
            uVar18 = 0;
            uVar10 = 0;
            do {
              uVar19 = (int)uVar10 + 1;
              uVar9 = (ulonglong)local_954[uVar10] * 1000000000 + uVar18;
              local_954[uVar10] = (uint)uVar9;
              uVar18 = uVar9 >> 0x20;
              uVar10 = (ulonglong)uVar19;
            } while (uVar19 != uVar24);
            uVar19 = (uint)(uVar9 >> 0x20);
            if (uVar19 != 0) {
              if (local_958 < 0x73) {
                local_954[local_958] = uVar19;
                local_958 = local_958 + 1;
                uVar24 = local_958;
                goto LAB_180613816;
              }
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
            }
            uVar24 = local_958;
          }
LAB_180613816:
          if (uVar13 != 0) {
            uVar19 = uVar25;
            uVar14 = 0;
            if (uVar24 != 0) {
              do {
                uVar24 = uVar19 + 1;
                uVar10 = local_954[uVar19] + uVar26;
                local_954[uVar19] = (uint)uVar10;
                uVar26 = uVar10 >> 0x20;
                uVar13 = (uint)(uVar10 >> 0x20);
                uVar19 = uVar24;
              } while (uVar24 != local_958);
              uVar14 = local_958;
              uVar24 = local_958;
              if (uVar13 == 0) goto LAB_1806138ad;
            }
            if (uVar14 < 0x73) {
              local_954[uVar14] = uVar13;
              local_958 = local_958 + 1;
              uVar24 = local_958;
            }
            else {
              local_218 = 0;
              local_958 = 0;
              memcpy_s(local_954,0x1cc,local_214,0);
              uVar24 = local_958;
            }
          }
LAB_1806138ad:
          uVar13 = 0;
          uVar19 = uVar25;
        }
        uVar14 = *puVar12;
        uVar19 = uVar19 + 1;
        puVar12 = (uint *)((longlong)puVar12 + 1);
        uVar13 = (uint)(byte)uVar14 + uVar13 * 10;
        uVar26 = (ulonglong)uVar13;
      } while (puVar12 != puVar22);
      if (uVar19 != 0) {
        for (local_d40 = uVar19 / 10; local_d40 != 0; local_d40 = local_d40 - (int)local_d38) {
          uVar25 = local_d40;
          if (0x26 < local_d40) {
            uVar25 = 0x26;
          }
          local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar25);
          uVar10 = (ulonglong)(uVar25 - 1);
          bVar7 = (&DAT_1806aed72)[uVar10 * 4];
          bVar1 = (&DAT_1806aed73)[uVar10 * 4];
          local_218 = (uint)bVar1 + (uint)bVar7;
          FUN_18063ab10(local_214,0,(ulonglong)bVar7 * 4);
          FUN_18063aed0(local_214 + bVar7,
                        &DAT_1806ae460 + (ulonglong)*(ushort *)(&DAT_1806aed70 + uVar10 * 4) * 4,
                        (ulonglong)bVar1 << 2);
          uVar25 = local_954[0];
          if (local_218 < 2) {
            uVar10 = (ulonglong)local_214[0];
            if (local_214[0] == 0) goto LAB_180613983;
            if ((local_214[0] == 1) || (uVar24 == 0)) goto LAB_180613c63;
            uVar9 = 0;
            uVar18 = 0;
            do {
              uVar25 = (int)uVar18 + 1;
              uVar11 = local_954[uVar18] * uVar10 + uVar9;
              local_954[uVar18] = (uint)uVar11;
              uVar9 = uVar11 >> 0x20;
              uVar14 = (uint)(uVar11 >> 0x20);
              uVar18 = (ulonglong)uVar25;
            } while (uVar25 != uVar24);
LAB_1806139e3:
            if (uVar14 == 0) goto LAB_180613c5c;
            if (local_958 < 0x73) {
              local_954[local_958] = uVar14;
              local_958 = local_958 + 1;
              uVar24 = local_958;
              goto LAB_180613c63;
            }
            local_218 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_214,0);
            bVar27 = false;
            uVar24 = local_958;
          }
          else {
            puVar22 = local_214;
            if (uVar24 < 2) {
              local_958 = local_218;
              memcpy_s(local_954,0x1cc,puVar22,(ulonglong)local_218 << 2);
              if (uVar25 != 0) {
                uVar24 = local_958;
                if ((uVar25 != 1) && (local_958 != 0)) {
                  uVar18 = 0;
                  uVar10 = 0;
                  do {
                    uVar24 = (int)uVar10 + 1;
                    uVar9 = (ulonglong)local_954[uVar10] * (ulonglong)uVar25 + uVar18;
                    local_954[uVar10] = (uint)uVar9;
                    uVar18 = uVar9 >> 0x20;
                    uVar14 = (uint)(uVar9 >> 0x20);
                    uVar10 = (ulonglong)uVar24;
                  } while (uVar24 != local_958);
                  goto LAB_1806139e3;
                }
                goto LAB_180613c63;
              }
LAB_180613983:
              local_218 = 0;
              puVar22 = local_214;
              local_958 = 0;
              rVar21 = 0;
            }
            else {
              if (uVar24 <= local_218) {
                local_d18 = local_954;
                local_d44 = uVar24;
              }
              else {
                puVar22 = local_954;
                local_d18 = local_214;
                local_d44 = local_218;
              }
              uVar10 = 0;
              local_958 = 0;
              uVar25 = local_218;
              if (uVar24 > local_218) {
                uVar25 = uVar24;
              }
              local_5b8 = 0;
              if (local_d44 != 0) {
                do {
                  uVar14 = (uint)uVar10;
                  uVar24 = local_d18[uVar10];
                  if (uVar24 == 0) {
                    if (uVar14 == local_958) {
                      local_958 = uVar14 + 1;
                      local_5b4[uVar10] = 0;
                      local_5b8 = local_958;
                    }
                  }
                  else {
                    uVar18 = 0;
                    if (uVar25 == 0) {
                      uVar24 = uVar14;
                    }
                    else {
                      do {
                        uVar17 = (uint)uVar10;
                        uVar9 = uVar10;
                        if (uVar17 == 0x73) break;
                        if (uVar17 == local_958) {
                          local_5b4[uVar10] = 0;
                          local_5b8 = uVar17 + 1;
                        }
                        uVar9 = (ulonglong)(uVar17 + 1);
                        uVar18 = (ulonglong)puVar22[-uVar14 + uVar17] * (ulonglong)uVar24 +
                                 (ulonglong)local_5b4[uVar10] + uVar18;
                        local_5b4[uVar10] = (uint)uVar18;
                        uVar18 = uVar18 >> 0x20;
                        uVar10 = uVar9;
                        local_958 = local_5b8;
                      } while (-uVar14 + uVar17 + 1 != uVar25);
                      uVar24 = (uint)uVar9;
                      uVar17 = (uint)uVar18;
                      while (uVar17 != 0) {
                        uVar24 = (uint)uVar9;
                        if (uVar24 == 0x73) goto LAB_180613d26;
                        if (uVar24 == local_958) {
                          local_5b4[uVar9] = 0;
                          local_5b8 = uVar24 + 1;
                        }
                        uVar17 = local_5b4[uVar9];
                        uVar24 = uVar24 + 1;
                        local_5b4[uVar9] = (uint)(uVar17 + uVar18);
                        uVar17 = (uint)(uVar17 + uVar18 >> 0x20);
                        uVar18 = (ulonglong)uVar17;
                        uVar9 = (ulonglong)uVar24;
                        local_958 = local_5b8;
                      }
                    }
                    if (uVar24 == 0x73) {
LAB_180613d26:
                      local_b28 = 0;
                      local_958 = 0;
                      memcpy_s(local_954,0x1cc,local_b24,0);
                      goto LAB_180613d4d;
                    }
                  }
                  uVar10 = (ulonglong)(uVar14 + 1);
                } while (uVar14 + 1 != local_d44);
              }
              puVar22 = local_5b4;
              rVar21 = (ulonglong)local_958 << 2;
            }
            memcpy_s(local_954,0x1cc,puVar22,rVar21);
LAB_180613c5c:
            uVar24 = local_958;
LAB_180613c63:
            bVar27 = true;
          }
          if (!bVar27) goto LAB_180613d4d;
        }
        if (uVar19 % 10 != 0) {
          uVar25 = *(uint *)(&DAT_1806aee08 + (ulonglong)(uVar19 % 10 - 1) * 4);
          if (uVar25 == 0) {
LAB_180613d4d:
            local_cf8 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
LAB_180613d6e:
            uVar24 = local_958;
          }
          else if ((uVar25 != 1) && (uVar24 != 0)) {
            uVar18 = 0;
            uVar10 = 0;
            do {
              uVar19 = (int)uVar10 + 1;
              uVar9 = (ulonglong)local_954[uVar10] * (ulonglong)uVar25 + uVar18;
              local_954[uVar10] = (uint)uVar9;
              uVar18 = uVar9 >> 0x20;
              uVar10 = (ulonglong)uVar19;
            } while (uVar19 != uVar24);
            uVar25 = (uint)(uVar9 >> 0x20);
            if (uVar25 == 0) goto LAB_180613d6e;
            if (0x72 < local_958) goto LAB_180613d4d;
            local_954[local_958] = uVar25;
            local_958 = local_958 + 1;
            uVar24 = local_958;
          }
        }
        if (uVar13 != 0) {
          uVar10 = 0;
          uVar25 = 0;
          if (uVar24 != 0) {
            do {
              uVar19 = (int)uVar10 + 1;
              uVar25 = local_954[uVar10];
              local_954[uVar10] = (uint)(uVar25 + uVar26);
              uVar13 = (uint)(uVar25 + uVar26 >> 0x20);
              uVar26 = (ulonglong)uVar13;
              uVar10 = (ulonglong)uVar19;
            } while (uVar19 != local_958);
            uVar25 = local_958;
            uVar24 = local_958;
            if (uVar13 == 0) goto LAB_180613e0a;
          }
          if (uVar25 < 0x73) {
            local_954[uVar25] = uVar13;
            local_958 = local_958 + 1;
            uVar24 = local_958;
          }
          else {
            local_cf8 = 0;
            local_958 = 0;
            memcpy_s(local_954,0x1cc,local_cf4,0);
            uVar24 = local_958;
          }
        }
      }
    }
LAB_180613e0a:
    if ((int)*local_d28 < 0) {
      local_d48 = local_d48 - *local_d28;
    }
    uVar25 = 1;
    local_3e4 = 1;
    local_3e8 = 1;
    uVar19 = local_d48 / 10;
    if (uVar19 != 0) {
      do {
        uVar13 = uVar19;
        if (0x26 < uVar19) {
          uVar13 = 0x26;
        }
        local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar13);
        uVar26 = (ulonglong)(uVar13 - 1);
        bVar7 = (&DAT_1806aed72)[uVar26 * 4];
        bVar1 = (&DAT_1806aed73)[uVar26 * 4];
        local_218 = (uint)bVar1 + (uint)bVar7;
        FUN_18063ab10(local_214,0,(ulonglong)bVar7 * 4);
        FUN_18063aed0(local_214 + bVar7,
                      &DAT_1806ae460 + (ulonglong)*(ushort *)(&DAT_1806aed70 + uVar26 * 4) * 4,
                      (ulonglong)bVar1 << 2);
        if (local_218 < 2) {
          uVar26 = (ulonglong)local_214[0];
          if (local_214[0] == 0) {
            local_cf8 = 0;
            local_3e8 = 0;
            memcpy_s(&local_3e4,0x1cc,local_cf4,0);
LAB_180613f07:
            uVar25 = local_3e8;
LAB_180613f0e:
            bVar27 = true;
          }
          else {
            if ((local_214[0] == 1) || (uVar25 == 0)) goto LAB_180613f0e;
            uVar18 = 0;
            uVar10 = 0;
            do {
              uVar13 = (int)uVar10 + 1;
              uVar9 = local_5b4[uVar10 + 0x74] * uVar26 + uVar18;
              local_5b4[uVar10 + 0x74] = (uint)uVar9;
              uVar18 = uVar9 >> 0x20;
              uVar10 = (ulonglong)uVar13;
            } while (uVar13 != uVar25);
            uVar25 = (uint)(uVar9 >> 0x20);
            if (uVar25 == 0) goto LAB_180613f07;
            if (local_3e8 < 0x73) {
              local_5b4[(ulonglong)local_3e8 + 0x74] = uVar25;
              uVar25 = local_3e8 + 1;
              local_3e8 = uVar25;
              goto LAB_180613f0e;
            }
            local_cf8 = 0;
            local_3e8 = 0;
            memcpy_s(&local_3e4,0x1cc,local_cf4,0);
            bVar27 = false;
            uVar25 = local_3e8;
          }
        }
        else {
          puVar22 = local_214;
          if (uVar25 < 2) {
            uVar25 = (uint)local_3e4;
            uVar26 = local_3e4 & 0xffffffff;
            local_3e8 = local_218;
            memcpy_s(&local_3e4,0x1cc,puVar22,(ulonglong)local_218 << 2);
            if (uVar25 == 0) {
              local_cf8 = 0;
              puVar22 = local_cf4;
              local_3e8 = 0;
              rVar21 = 0;
              goto LAB_18061422e;
            }
            if ((uVar25 != 1) && (local_3e8 != 0)) {
              uVar18 = 0;
              uVar10 = 0;
              do {
                uVar25 = (int)uVar10 + 1;
                uVar9 = local_5b4[uVar10 + 0x74] * uVar26 + uVar18;
                local_5b4[uVar10 + 0x74] = (uint)uVar9;
                uVar18 = uVar9 >> 0x20;
                uVar10 = (ulonglong)uVar25;
              } while (uVar25 != local_3e8);
              uVar25 = (uint)(uVar9 >> 0x20);
              if (uVar25 != 0) {
                if (0x72 < local_3e8) {
                  local_cf8 = 0;
                  local_3e8 = 0;
                  memcpy_s(&local_3e4,0x1cc,local_cf4,0);
                  bVar27 = false;
                  uVar25 = local_3e8;
                  goto LAB_180614246;
                }
                local_5b4[(ulonglong)local_3e8 + 0x74] = uVar25;
                local_3e8 = local_3e8 + 1;
              }
            }
          }
          else {
            if (local_218 < uVar25) {
              puVar22 = (uint *)&local_3e4;
              local_d40 = local_218;
              local_d18 = local_214;
            }
            else {
              local_d40 = uVar25;
              local_d18 = (uint *)&local_3e4;
            }
            uVar26 = 0;
            uVar13 = 0;
            uVar14 = local_218;
            if (local_218 < uVar25) {
              uVar14 = uVar25;
            }
            local_5b8 = 0;
            if (local_d40 != 0) {
              do {
                uVar17 = (uint)uVar26;
                uVar25 = local_d18[uVar26];
                if (uVar25 == 0) {
                  if (uVar17 == uVar13) {
                    uVar13 = uVar17 + 1;
                    local_5b4[uVar26] = 0;
                    local_5b8 = uVar13;
                  }
                }
                else {
                  uVar10 = 0;
                  if (uVar14 == 0) {
                    uVar25 = uVar17;
                  }
                  else {
                    do {
                      uVar20 = (uint)uVar26;
                      uVar18 = uVar26;
                      if (uVar20 == 0x73) break;
                      if (uVar20 == uVar13) {
                        local_5b4[uVar26] = 0;
                        local_5b8 = uVar20 + 1;
                      }
                      uVar18 = (ulonglong)(uVar20 + 1);
                      uVar10 = (ulonglong)puVar22[-uVar17 + uVar20] * (ulonglong)uVar25 + uVar10 +
                               (ulonglong)local_5b4[uVar26];
                      local_5b4[uVar26] = (uint)uVar10;
                      uVar10 = uVar10 >> 0x20;
                      uVar26 = uVar18;
                      uVar13 = local_5b8;
                    } while (-uVar17 + uVar20 + 1 != uVar14);
                    uVar25 = (uint)uVar18;
                    uVar20 = (uint)uVar10;
                    while (uVar20 != 0) {
                      uVar25 = (uint)uVar18;
                      if (uVar25 == 0x73) goto LAB_1806142c1;
                      if (uVar25 == uVar13) {
                        local_5b4[uVar18] = 0;
                        local_5b8 = uVar25 + 1;
                      }
                      uVar13 = local_5b4[uVar18];
                      uVar25 = uVar25 + 1;
                      local_5b4[uVar18] = (uint)(uVar13 + uVar10);
                      uVar20 = (uint)(uVar13 + uVar10 >> 0x20);
                      uVar10 = (ulonglong)uVar20;
                      uVar18 = (ulonglong)uVar25;
                      uVar13 = local_5b8;
                    }
                  }
                  if (uVar25 == 0x73) {
LAB_1806142c1:
                    local_b28 = 0;
                    local_3e8 = 0;
                    memcpy_s(&local_3e4,0x1cc,local_b24,0);
                    goto LAB_180614367;
                  }
                }
                uVar26 = (ulonglong)(uVar17 + 1);
              } while (uVar17 + 1 != local_d40);
            }
            puVar22 = local_5b4;
            rVar21 = (ulonglong)uVar13 << 2;
            local_3e8 = uVar13;
LAB_18061422e:
            memcpy_s(&local_3e4,0x1cc,puVar22,rVar21);
          }
          bVar27 = true;
          uVar25 = local_3e8;
        }
LAB_180614246:
        if (!bVar27) goto LAB_180614367;
        uVar19 = uVar19 - (int)local_d38;
      } while (uVar19 != 0);
    }
    uVar19 = 0;
    if (local_d48 % 10 != 0) {
      uVar13 = *(uint *)(&DAT_1806aee08 + (ulonglong)(local_d48 % 10 - 1) * 4);
      if (uVar13 == 0) {
        local_cf8 = 0;
        local_3e8 = 0;
        memcpy_s(&local_3e4,0x1cc,local_cf4,0);
LAB_1806142aa:
        uVar25 = local_3e8;
      }
      else if ((uVar13 != 1) && (uVar25 != 0)) {
        uVar10 = 0;
        uVar26 = 0;
        do {
          uVar14 = (int)uVar26 + 1;
          uVar18 = (ulonglong)local_5b4[uVar26 + 0x74] * (ulonglong)uVar13 + uVar10;
          local_5b4[uVar26 + 0x74] = (uint)uVar18;
          uVar10 = uVar18 >> 0x20;
          uVar26 = (ulonglong)uVar14;
        } while (uVar14 != uVar25);
        uVar25 = (uint)(uVar18 >> 0x20);
        if (uVar25 == 0) goto LAB_1806142aa;
        if (0x72 < local_3e8) {
LAB_180614367:
          local_cf8 = 0;
          local_3e8 = 0;
          memcpy_s(&local_3e4,0x1cc,local_cf4,0);
          uVar25 = local_d28[0xc2];
          if (*(char *)(local_d20 + 1) == '\0') {
            puVar22 = (uint *)FUN_180612590();
            *puVar22 = -(uint)((char)uVar25 != '\0') & 0x80000000;
          }
          puVar6 = (ulonglong *)FUN_180612554();
          *puVar6 = -(ulonglong)((char)uVar25 != '\0') & 0x8000000000000000;
        }
        local_5b4[(ulonglong)local_3e8 + 0x74] = uVar25;
        uVar25 = local_3e8 + 1;
        local_3e8 = uVar25;
      }
    }
    if (uVar24 == 0) {
      uVar13 = 0;
    }
    else {
      local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
      iVar8 = 0x1f;
      bVar27 = local_954[uVar24 - 1] == 0;
      if (!bVar27) {
        for (; local_954[uVar24 - 1] >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (bVar27) {
        uVar13 = uVar19;
      }
      else {
        uVar13 = iVar8 + 1;
      }
      uVar13 = (uVar24 - 1) * 0x20 + uVar13;
    }
    if (uVar25 != 0) {
      local_d38 = (uint *)((ulonglong)local_d38 & 0xffffffff00000000);
      iVar8 = 0x1f;
      bVar27 = local_5b4[(ulonglong)(uVar25 - 1) + 0x74] == 0;
      if (!bVar27) {
        for (; local_5b4[(ulonglong)(uVar25 - 1) + 0x74] >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (!bVar27) {
        uVar19 = iVar8 + 1;
      }
      uVar19 = (uVar25 - 1) * 0x20 + uVar19;
    }
    uVar19 = -(uint)(uVar13 < uVar19) & uVar19 - uVar13;
    local_d44 = uVar19;
    if (uVar19 != 0) {
      local_d48 = 0;
      uVar13 = uVar19 & 0x1f;
      uVar17 = uVar19 >> 5;
      local_d38 = (uint *)CONCAT44(local_d38._4_4_,0x20 - uVar13);
      bVar7 = (byte)(0x20 - uVar13);
      uVar14 = (int)(1L << (bVar7 & 0x3f)) - 1;
      local_d40 = ~uVar14;
      iVar8 = 0x1f;
      bVar27 = local_954[uVar24 - 1] == 0;
      if (!bVar27) {
        for (; local_954[uVar24 - 1] >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (bVar27) {
        iVar8 = 0;
      }
      else {
        iVar8 = iVar8 + 1;
      }
      if ((uVar17 + uVar24 < 0x74) &&
         (local_d48 = (0x20U - iVar8 < uVar13) + uVar17 + uVar24, local_d48 < 0x74)) {
        uVar20 = local_d48 - 1;
        if (uVar20 != uVar17 - 1) {
          while( true ) {
            uVar23 = uVar20 - uVar17;
            if (uVar23 < uVar24) {
              uVar4 = local_954[uVar23];
            }
            else {
              uVar4 = 0;
            }
            if (uVar23 - 1 < uVar24) {
              uVar24 = local_954[uVar23 - 1];
            }
            else {
              uVar24 = 0;
            }
            local_954[uVar20] =
                 (uVar24 & local_d40) >> (bVar7 & 0x1f) | (uVar4 & uVar14) << (sbyte)uVar13;
            uVar20 = uVar20 - 1;
            if (uVar20 == uVar17 - 1) break;
            uVar24 = local_958;
          }
        }
        uVar24 = 0;
        if (uVar17 != 0) {
          do {
            uVar26 = (ulonglong)uVar24;
            uVar24 = uVar24 + 1;
            local_954[uVar26] = 0;
          } while (uVar24 != uVar17);
        }
        local_958 = local_d48;
        uVar24 = local_d48;
      }
      else {
        local_cf8 = 0;
        local_958 = 0;
        memcpy_s(local_954,0x1cc,local_cf4,0);
        uVar24 = local_958;
      }
    }
    uVar13 = local_d3c;
    local_d30 = local_d30 - local_d3c;
    uVar14 = local_d30;
    if (local_d3c != 0) {
      if (local_d30 < uVar19) {
        bVar27 = true;
        goto LAB_180614798;
      }
      uVar14 = local_d30 - uVar19;
    }
    if (uVar25 < uVar24) {
LAB_1806145b6:
      bVar27 = false;
    }
    else {
      uVar17 = uVar24;
      if (uVar24 < uVar25) {
        bVar27 = true;
      }
      else {
        do {
          uVar17 = uVar17 - 1;
          if (uVar17 == 0xffffffff) goto LAB_1806145b6;
        } while (local_954[uVar17] == local_5b4[(ulonglong)uVar17 + 0x74]);
        bVar27 = local_954[uVar17] <= local_5b4[(ulonglong)uVar17 + 0x74];
      }
    }
    if (bVar27) {
      uVar19 = uVar19 + 1;
    }
    uVar20 = uVar14 >> 5;
    sVar3 = (sbyte)(uVar14 & 0x1f);
    bVar7 = 0x20 - sVar3;
    uVar17 = (int)(1L << (bVar7 & 0x3f)) - 1;
    uVar25 = ~uVar17;
    local_d38 = (uint *)CONCAT44(local_d38._4_4_,uVar25);
    iVar8 = 0x1f;
    bVar27 = local_954[uVar24 - 1] == 0;
    if (!bVar27) {
      for (; local_954[uVar24 - 1] >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (bVar27) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + 1;
    }
    local_d44 = uVar19;
    if ((uVar20 + uVar24 < 0x74) &&
       (uVar14 = (0x20U - iVar8 < (uVar14 & 0x1f)) + uVar20 + uVar24, uVar14 < 0x74)) {
      uVar23 = uVar14 - 1;
      if (uVar23 != uVar20 - 1) {
        while( true ) {
          uVar4 = uVar23 - uVar20;
          if (uVar4 < uVar24) {
            uVar15 = local_954[uVar4];
          }
          else {
            uVar15 = 0;
          }
          if (uVar4 - 1 < uVar24) {
            uVar24 = local_954[uVar4 - 1];
          }
          else {
            uVar24 = 0;
          }
          local_954[uVar23] = (uVar24 & uVar25) >> (bVar7 & 0x1f) | (uVar15 & uVar17) << sVar3;
          uVar23 = uVar23 - 1;
          if (uVar23 == uVar20 - 1) break;
          uVar24 = local_958;
        }
      }
      uVar25 = 0;
      if (uVar20 != 0) {
        do {
          uVar26 = (ulonglong)uVar25;
          uVar25 = uVar25 + 1;
          local_954[uVar26] = 0;
        } while (uVar25 != uVar20);
      }
      local_958 = uVar14;
    }
    else {
      local_cf8 = 0;
      local_958 = 0;
      memcpy_s(local_954,0x1cc,local_cf4,0);
    }
    uVar26 = FUN_180614890(&local_958,&local_3e8);
    bVar27 = local_958 == 0;
    lVar2 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    if (uVar26 == 0) {
      uVar25 = 0;
    }
    else {
      uVar25 = (int)lVar2 + 1;
    }
    if (local_d30 < uVar25) {
      bVar7 = (char)uVar25 - (byte)local_d30;
      if ((!bVar27) || (bVar27 = true, (uVar26 & (1L << (bVar7 & 0x3f)) - 1U) != 0)) {
        bVar27 = false;
      }
      uVar26 = uVar26 >> (bVar7 & 0x3f);
    }
    local_d58 = local_d20;
    uVar25 = 0;
    if (uVar16 != 0) {
      uVar25 = local_784[0];
    }
    uVar10 = 0;
    if (1 < uVar16) {
      uVar10 = (ulonglong)local_784[1];
    }
    uVar16 = ~uVar19;
    if (uVar13 != 0) {
      uVar16 = uVar13 - 2;
    }
    FUN_1806125cc(uVar26 + ((uVar10 << 0x20) + (ulonglong)uVar25 << ((byte)local_d30 & 0x3f)),uVar16
                  ,(char)local_d28[0xc2],bVar27);
  }
  else {
    bVar27 = local_d48 != 0;
LAB_180614798:
    local_d58 = local_d20;
    FUN_180612984(&local_788,local_d3c,(char)local_d28[0xc2],bVar27);
  }
}



