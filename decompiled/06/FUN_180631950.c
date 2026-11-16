// FUN_180631950 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180631950 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180631950(ulonglong param_1,int param_2,int param_3,undefined4 *param_4,char *param_5,
                  longlong param_6)

{
  uint *puVar1;
  sbyte sVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  byte bVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  char *pcVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  uint uVar20;
  rsize_t _MaxCount;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  double dVar24;
  undefined1 auStackY_828 [32];
  uint local_7f8;
  uint local_7f0;
  uint local_7ec;
  undefined8 local_7e8;
  uint local_7e0;
  int local_7dc;
  uint local_7d8 [2];
  undefined4 local_7d0;
  undefined4 local_7cc;
  uint *local_7c8;
  byte local_7c0 [8];
  char local_7b8;
  uint *local_7b0;
  char *local_7a8;
  undefined4 *local_7a0;
  uint local_798;
  undefined8 local_794;
  uint local_5c8;
  uint local_5c4 [115];
  uint local_3f8;
  uint local_3f4 [115];
  uint local_228;
  uint local_224 [115];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStackY_828;
  local_7a8 = param_5;
  local_7dc = param_3;
  local_7a0 = param_4;
  FUN_180635240(local_7c0);
  local_7b8 = (local_7c0[0] & 0x1f) != 0x1f;
  if ((bool)local_7b8) {
    FUN_1806352d0(local_7c0);
  }
  *(char **)(param_4 + 2) = param_5;
  uVar3 = 0x20;
  if ((longlong)param_1 < 0) {
    uVar3 = 0x2d;
  }
  local_7d8[0] = 0;
  *param_4 = uVar3;
  FUN_1806351d0(local_7d8,0,0);
  uVar6 = param_1 >> 0x34 & 0x7ff;
  if (uVar6 == 0) {
    if (((param_1 & 0xfffffffffffff) == 0) || ((local_7d8[0] & 0x1000000) != 0)) {
      param_4[1] = 0;
LAB_180631a9e:
      iVar4 = FUN_18061f0b0();
joined_r0x000180631ae4:
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      goto LAB_180632b7c;
    }
  }
  else if (uVar6 == 0x7ff) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      uVar20 = 1;
    }
    else if (((longlong)param_1 < 0) && ((param_1 & 0xfffffffffffff) == 0x8000000000000)) {
      uVar20 = 4;
    }
    else {
      uVar20 = ~(uint)(param_1 >> 0x33) & 1 | 2;
    }
    param_4[1] = 1;
    if (uVar20 == 1) {
      iVar4 = FUN_18061f0b0();
      goto joined_r0x000180631ae4;
    }
    if (((uVar20 == 2) || (uVar20 == 3)) || (uVar20 == 4)) goto LAB_180631a9e;
  }
  local_7ec = 0;
  local_7cc = 0x8001f;
  FUN_1806351d0(&local_7d0,0,0);
  FUN_1806351d0(&local_7ec,0x8001f,local_7cc);
  local_7ec = param_2 + 1;
  uVar19 = (param_1 & 0x7fffffffffffffff) >> 0x34;
  uVar6 = (-(ulonglong)(uVar19 != 0) & 0x10000000000000) + (param_1 & 0xfffffffffffff);
  uVar22 = (2 - (uint)(uVar19 != 0)) + (uint)((param_1 & 0x7fffffffffffffff) >> 0x34);
  FUN_180635330(-uVar19);
  dVar24 = (double)FUN_18061c280();
  uVar5 = -(uint)(((int)dVar24 + 0x80000001U & 0xfffffffe) != 0) & (int)dVar24;
  uVar16 = (uint)(uVar6 >> 0x20);
  local_794 = uVar6;
  uVar20 = (uint)(uVar16 != 0);
  uVar13 = uVar20 + 1;
  if (uVar22 < 0x434) {
    if (uVar22 == 0x36) {
LAB_180631f88:
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)(-(uint)(uVar16 != 0) & 4));
      iVar4 = 0x1f;
      bVar23 = *puVar1 == 0;
      if (!bVar23) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar23) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      uVar20 = (iVar4 == 0x20) + uVar13;
      if (uVar20 < 0x74) {
        uVar16 = uVar20 - 1;
        if (uVar20 - 1 != 0xffffffff) {
          while( true ) {
            uVar21 = uVar16 - 1;
            if (uVar16 < uVar13) {
              iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar16 * 4);
            }
            else {
              iVar4 = 0;
            }
            if (uVar21 < uVar13) {
              uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar21 * 4);
            }
            else {
              uVar10 = 0;
            }
            *(uint *)((longlong)&local_794 + (ulonglong)uVar16 * 4) = uVar10 >> 0x1f | iVar4 * 2;
            if (uVar21 == 0xffffffff) break;
            uVar16 = uVar21;
          }
        }
      }
      else {
        uVar20 = 0;
      }
      uVar13 = 0x435 - uVar22 >> 5;
      local_798 = uVar20;
      FUN_18063ab10(local_3f4,0,(ulonglong)uVar13 * 4);
      local_3f4[uVar13] = 1 << ((byte)(0x435 - uVar22) & 0x1f);
    }
    else {
      local_3f4[1] = 0x100000;
      local_3f4[0] = 0;
      local_3f8 = 2;
      if (uVar16 == 0) goto LAB_180631f88;
      uVar6 = 0;
      do {
        if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_180631f88;
        uVar20 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar20;
      } while (uVar20 != 2);
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      iVar4 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar16 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      local_798 = (0x20U - iVar4 < 2) + uVar13;
      if (local_798 < 0x74) {
        uVar20 = local_798 - 1;
        if (local_798 - 1 != 0xffffffff) {
          while( true ) {
            uVar16 = uVar20 - 1;
            if (uVar20 < uVar13) {
              iVar4 = *(int *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
            }
            else {
              iVar4 = 0;
            }
            if (uVar16 < uVar13) {
              uVar21 = *(uint *)((longlong)&local_794 + (ulonglong)uVar16 * 4);
            }
            else {
              uVar21 = 0;
            }
            *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4) = uVar21 >> 0x1e | iVar4 * 4;
            if (uVar16 == 0xffffffff) break;
            uVar20 = uVar16;
          }
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
      uVar20 = local_798;
      uVar13 = 0x436 - uVar22 >> 5;
      FUN_18063ab10(local_3f4,0,(ulonglong)uVar13 * 4);
      local_3f4[uVar13] = 1 << ((byte)(0x436 - uVar22) & 0x1f);
    }
    local_3f8 = uVar13 + 1;
    _MaxCount = (ulonglong)local_3f8 << 2;
  }
  else {
    local_3f4[1] = 0x100000;
    local_3f4[0] = 0;
    local_3f8 = 2;
    if (uVar16 == 0) {
LAB_180631d49:
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      uVar21 = uVar22 - 0x433 & 0x1f;
      uVar22 = uVar22 - 0x433 >> 5;
      sVar2 = (sbyte)uVar21;
      bVar9 = 0x20 - sVar2;
      uVar16 = (int)(1L << (bVar9 & 0x3f)) - 1;
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
      iVar4 = 0x1f;
      bVar23 = *puVar1 == 0;
      if (!bVar23) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar23) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      if ((uVar13 + uVar22 < 0x74) &&
         (local_798 = (0x20U - iVar4 < uVar21) + uVar13 + uVar22, local_798 < 0x74)) {
        uVar20 = local_798;
        while (uVar20 = uVar20 - 1, uVar20 != uVar22 - 1) {
          uVar21 = uVar20 - uVar22;
          if (uVar21 < uVar13) {
            uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar21 * 4);
          }
          else {
            uVar10 = 0;
          }
          if (uVar21 - 1 < uVar13) {
            uVar21 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar21 - 1) * 4);
          }
          else {
            uVar21 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4) =
               (uVar21 & ~uVar16) >> (bVar9 & 0x1f) | (uVar10 & uVar16) << sVar2;
        }
        uVar6 = 0;
        if (uVar22 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
            uVar20 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar20;
          } while (uVar20 != uVar22);
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
      local_3f4[0] = 2;
    }
    else {
      uVar6 = 0;
      do {
        if (local_3f4[uVar6] != *(uint *)((longlong)&local_794 + uVar6 * 4)) goto LAB_180631d49;
        uVar16 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar16;
      } while (uVar16 != 2);
      local_7e8 = (uint *)((ulonglong)local_7e8._4_4_ << 0x20);
      uVar21 = uVar22 - 0x432 & 0x1f;
      uVar22 = uVar22 - 0x432 >> 5;
      sVar2 = (sbyte)uVar21;
      bVar9 = 0x20 - sVar2;
      uVar16 = (int)(1L << (bVar9 & 0x3f)) - 1;
      puVar1 = (uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4);
      iVar4 = 0x1f;
      bVar23 = *puVar1 == 0;
      if (!bVar23) {
        for (; *puVar1 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (bVar23) {
        iVar4 = 0;
      }
      else {
        iVar4 = iVar4 + 1;
      }
      if ((uVar13 + uVar22 < 0x74) &&
         (local_798 = (0x20U - iVar4 < uVar21) + uVar13 + uVar22, local_798 < 0x74)) {
        uVar20 = local_798;
        while (uVar20 = uVar20 - 1, uVar20 != uVar22 - 1) {
          uVar21 = uVar20 - uVar22;
          if (uVar21 < uVar13) {
            uVar10 = *(uint *)((longlong)&local_794 + (ulonglong)uVar21 * 4);
          }
          else {
            uVar10 = 0;
          }
          if (uVar21 - 1 < uVar13) {
            uVar21 = *(uint *)((longlong)&local_794 + (ulonglong)(uVar21 - 1) * 4);
          }
          else {
            uVar21 = 0;
          }
          *(uint *)((longlong)&local_794 + (ulonglong)uVar20 * 4) =
               (uVar21 & ~uVar16) >> (bVar9 & 0x1f) | (uVar10 & uVar16) << sVar2;
        }
        uVar6 = 0;
        if (uVar22 != 0) {
          do {
            *(undefined4 *)((longlong)&local_794 + uVar6 * 4) = 0;
            uVar20 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar20;
          } while (uVar20 != uVar22);
        }
      }
      else {
        local_3f8 = 0;
        local_798 = 0;
        memcpy_s(&local_794,0x1cc,local_3f4,0);
      }
      local_3f4[0] = 4;
    }
    local_3f4[1] = 0;
    _MaxCount = 4;
    local_3f8 = 1;
    uVar20 = local_798;
  }
  local_5c8 = local_3f8;
  memcpy_s(local_5c4,0x1cc,local_3f4,_MaxCount);
  if ((int)uVar5 < 0) {
    uVar13 = -uVar5;
    local_7e8 = (uint *)CONCAT44(local_7e8._4_4_,uVar13);
    local_7f0 = uVar13 / 10;
    if (local_7f0 != 0) {
      do {
        local_7e0 = local_7f0;
        if (0x26 < local_7f0) {
          local_7e0 = 0x26;
        }
        uVar13 = local_7e0 - 1;
        bVar9 = (&DAT_1806aed72)[(ulonglong)uVar13 * 4];
        local_3f8 = (uint)(byte)(&DAT_1806aed73)[(ulonglong)uVar13 * 4] + (uint)bVar9;
        FUN_18063ab10(local_3f4,0,(ulonglong)bVar9 * 4);
        FUN_18063aed0(local_3f4 + bVar9,
                      &DAT_1806ae460 +
                      (ulonglong)*(ushort *)(&DAT_1806aed70 + (ulonglong)uVar13 * 4) * 4);
        if (local_3f8 < 2) {
          uVar6 = (ulonglong)local_3f4[0];
          if (local_3f4[0] == 0) {
LAB_1806325d5:
            local_798 = 0;
LAB_1806325d8:
            uVar20 = local_798;
            goto LAB_18063289b;
          }
          if ((local_3f4[0] == 1) || (uVar20 == 0)) goto LAB_18063289b;
          uVar19 = 0;
          uVar12 = 0;
          do {
            uVar11 = *(uint *)((longlong)&local_794 + uVar12 * 4) * uVar6 + uVar19;
            *(int *)((longlong)&local_794 + uVar12 * 4) = (int)uVar11;
            uVar19 = uVar11 >> 0x20;
            iVar4 = (int)(uVar11 >> 0x20);
            uVar13 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar13;
          } while (uVar13 != uVar20);
LAB_18063261f:
          if (iVar4 == 0) goto LAB_180632897;
          if (local_798 < 0x73) {
            *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
            local_798 = local_798 + 1;
            goto LAB_1806325d8;
          }
          uVar20 = 0;
          local_798 = 0;
          bVar23 = false;
        }
        else {
          if (uVar20 < 2) {
            uVar13 = (uint)local_794;
            uVar6 = local_794 & 0xffffffff;
            local_798 = local_3f8;
            if ((ulonglong)local_3f8 != 0) {
              if ((ulonglong)local_3f8 * 4 < 0x1cd) {
                FUN_18063aed0(&local_794,local_3f4);
              }
              else {
                FUN_18063ab10(&local_794,0);
                puVar7 = (undefined4 *)FUN_18060fe00();
                *puVar7 = 0x22;
                FUN_18060aad4();
              }
            }
            if (uVar13 == 0) goto LAB_1806325d5;
            uVar20 = local_798;
            if ((uVar13 != 1) && (local_798 != 0)) {
              uVar19 = 0;
              uVar12 = 0;
              do {
                uVar11 = *(uint *)((longlong)&local_794 + uVar12 * 4) * uVar6 + uVar19;
                *(int *)((longlong)&local_794 + uVar12 * 4) = (int)uVar11;
                uVar19 = uVar11 >> 0x20;
                iVar4 = (int)(uVar11 >> 0x20);
                uVar20 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar20;
              } while (uVar20 != local_798);
              goto LAB_18063261f;
            }
          }
          else {
            local_7b0 = local_3f4;
            local_7c8 = (uint *)&local_794;
            if (local_3f8 < uVar20) {
              uVar13 = uVar20;
              uVar20 = local_3f8;
            }
            else {
              uVar13 = local_3f8;
              local_7c8 = local_3f4;
              local_7b0 = (uint *)&local_794;
            }
            uVar19 = 0;
            uVar6 = 0;
            local_228 = 0;
            if (uVar20 != 0) {
              do {
                uVar16 = local_7b0[uVar6];
                iVar4 = (int)uVar6;
                if (uVar16 == 0) {
                  if (iVar4 == (int)uVar19) {
                    local_224[uVar6] = 0;
                    uVar19 = (ulonglong)(iVar4 + 1U);
                    local_228 = iVar4 + 1U;
                  }
                }
                else {
                  uVar12 = 0;
                  if (uVar13 != 0) {
                    do {
                      iVar18 = (int)uVar6;
                      uVar11 = uVar6;
                      if (iVar18 == 0x73) break;
                      if (iVar18 == (int)uVar19) {
                        local_224[uVar6] = 0;
                        local_228 = iVar18 + 1;
                      }
                      uVar11 = (ulonglong)(iVar18 + 1U);
                      uVar12 = (ulonglong)local_7c8[(uint)(iVar18 + -iVar4)] * (ulonglong)uVar16 +
                               uVar12 + (ulonglong)local_224[uVar6];
                      local_224[uVar6] = (uint)uVar12;
                      uVar19 = (ulonglong)local_228;
                      uVar12 = uVar12 >> 0x20;
                      uVar6 = uVar11;
                    } while (iVar18 + 1U + -iVar4 != uVar13);
                    uVar16 = (uint)uVar12;
                    uVar6 = uVar11;
                    while (uVar16 != 0) {
                      iVar18 = (int)uVar6;
                      if (iVar18 == 0x73) goto LAB_180632942;
                      if (iVar18 == (int)uVar19) {
                        local_224[uVar6] = 0;
                        local_228 = iVar18 + 1;
                      }
                      uVar16 = local_224[uVar6];
                      local_224[uVar6] = (uint)(uVar16 + uVar12);
                      uVar19 = (ulonglong)local_228;
                      uVar16 = (uint)(uVar16 + uVar12 >> 0x20);
                      uVar12 = (ulonglong)uVar16;
                      uVar6 = (ulonglong)(iVar18 + 1);
                    }
                  }
                  if ((int)uVar6 == 0x73) goto LAB_180632942;
                }
                uVar6 = (ulonglong)(iVar4 + 1U);
              } while (iVar4 + 1U != uVar20);
            }
            local_798 = (uint)uVar19;
            uVar20 = 0;
            if (uVar19 != 0) {
              if (uVar19 * 4 < 0x1cd) {
                FUN_18063aed0(&local_794,local_224);
              }
              else {
                FUN_18063ab10(&local_794,0);
                puVar7 = (undefined4 *)FUN_18060fe00();
                *puVar7 = 0x22;
                FUN_18060aad4();
              }
LAB_180632897:
              uVar20 = local_798;
            }
          }
LAB_18063289b:
          bVar23 = true;
        }
        if (!bVar23) goto LAB_180632942;
        local_7f0 = local_7f0 - local_7e0;
      } while (local_7f0 != 0);
      uVar13 = (uint)local_7e8;
    }
    if (uVar13 % 10 != 0) {
      uVar13 = *(uint *)(&DAT_1806aee08 + (ulonglong)(uVar13 % 10 - 1) * 4);
      if (uVar13 == 0) {
LAB_180632942:
        local_798 = 0;
LAB_180632945:
        uVar20 = local_798;
      }
      else if ((uVar13 != 1) && (uVar20 != 0)) {
        uVar6 = 0;
        uVar19 = 0;
        do {
          uVar12 = (ulonglong)*(uint *)((longlong)&local_794 + uVar19 * 4) * (ulonglong)uVar13 +
                   uVar6;
          *(int *)((longlong)&local_794 + uVar19 * 4) = (int)uVar12;
          uVar6 = uVar12 >> 0x20;
          uVar16 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar16;
        } while (uVar16 != uVar20);
        iVar4 = (int)(uVar12 >> 0x20);
        if (iVar4 != 0) {
          if (0x72 < local_798) goto LAB_180632942;
          *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
          local_798 = local_798 + 1;
          goto LAB_180632945;
        }
        uVar20 = local_798;
      }
    }
LAB_180632949:
    uVar13 = local_5c8;
  }
  else {
    local_7f8 = uVar5 / 10;
    uVar13 = local_5c8;
    uVar16 = local_5c8;
    if (local_7f8 != 0) {
      do {
        local_7e0 = local_7f8;
        if (0x26 < local_7f8) {
          local_7e0 = 0x26;
        }
        uVar13 = local_7e0 - 1;
        bVar9 = (&DAT_1806aed72)[(ulonglong)uVar13 * 4];
        local_3f8 = (uint)(byte)(&DAT_1806aed73)[(ulonglong)uVar13 * 4] + (uint)bVar9;
        FUN_18063ab10(local_3f4,0,(ulonglong)bVar9 * 4);
        FUN_18063aed0(local_3f4 + bVar9,
                      &DAT_1806ae460 +
                      (ulonglong)*(ushort *)(&DAT_1806aed70 + (ulonglong)uVar13 * 4) * 4);
        uVar22 = local_5c4[0];
        if (local_3f8 < 2) {
          uVar6 = (ulonglong)local_3f4[0];
          if (local_3f4[0] == 0) {
LAB_1806320f5:
            local_5c8 = 0;
LAB_1806320f8:
            uVar13 = local_5c8;
            goto LAB_180632450;
          }
          uVar13 = uVar16;
          if ((local_3f4[0] == 1) || (uVar16 == 0)) goto LAB_180632450;
          uVar19 = 0;
          uVar12 = 0;
          do {
            uVar11 = local_5c4[uVar12] * uVar6 + uVar19;
            local_5c4[uVar12] = (uint)uVar11;
            uVar19 = uVar11 >> 0x20;
            uVar13 = (uint)(uVar11 >> 0x20);
            uVar22 = (int)uVar12 + 1;
            uVar12 = (ulonglong)uVar22;
          } while (uVar22 != uVar16);
LAB_180632197:
          if (uVar13 == 0) goto LAB_180632449;
          if (local_5c8 < 0x73) {
            local_5c4[local_5c8] = uVar13;
            local_5c8 = local_5c8 + 1;
            goto LAB_1806320f8;
          }
          uVar13 = 0;
          local_5c8 = 0;
          bVar23 = false;
        }
        else {
          if (uVar16 < 2) {
            uVar6 = (ulonglong)local_5c4[0];
            local_5c8 = local_3f8;
            if ((ulonglong)local_3f8 != 0) {
              if ((ulonglong)local_3f8 * 4 < 0x1cd) {
                FUN_18063aed0(local_5c4,local_3f4);
              }
              else {
                FUN_18063ab10(local_5c4,0);
                puVar7 = (undefined4 *)FUN_18060fe00();
                *puVar7 = 0x22;
                FUN_18060aad4();
              }
            }
            if (uVar22 == 0) goto LAB_1806320f5;
            uVar13 = local_5c8;
            if ((uVar22 != 1) && (local_5c8 != 0)) {
              uVar19 = 0;
              uVar12 = 0;
              do {
                uVar11 = local_5c4[uVar12] * uVar6 + uVar19;
                local_5c4[uVar12] = (uint)uVar11;
                uVar19 = uVar11 >> 0x20;
                uVar13 = (uint)(uVar11 >> 0x20);
                uVar16 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar16;
              } while (uVar16 != local_5c8);
              goto LAB_180632197;
            }
          }
          else {
            local_7c8 = local_5c4;
            local_7e8 = local_3f4;
            uVar22 = local_3f8;
            if (local_3f8 < uVar16) {
              uVar22 = uVar16;
              local_7e8 = local_5c4;
              uVar16 = local_3f8;
              local_7c8 = local_3f4;
            }
            uVar13 = 0;
            uVar6 = 0;
            local_228 = 0;
            if (uVar16 != 0) {
              do {
                uVar21 = local_7c8[uVar6];
                uVar10 = (uint)uVar6;
                if (uVar21 == 0) {
                  if (uVar10 == uVar13) {
                    local_224[uVar6] = 0;
                    uVar13 = uVar10 + 1;
                    local_228 = uVar13;
                  }
                }
                else {
                  uVar19 = 0;
                  if (uVar22 != 0) {
                    do {
                      uVar17 = (uint)uVar6;
                      uVar12 = uVar6;
                      if (uVar17 == 0x73) break;
                      if (uVar17 == uVar13) {
                        local_224[uVar6] = 0;
                        local_228 = uVar17 + 1;
                      }
                      uVar12 = (ulonglong)(uVar17 + 1);
                      uVar19 = (ulonglong)local_7e8[uVar17 + -uVar10] * (ulonglong)uVar21 +
                               (ulonglong)local_224[uVar6] + uVar19;
                      local_224[uVar6] = (uint)uVar19;
                      uVar19 = uVar19 >> 0x20;
                      uVar6 = uVar12;
                      uVar13 = local_228;
                    } while (uVar17 + 1 + -uVar10 != uVar22);
                    uVar21 = (uint)uVar19;
                    uVar6 = uVar12;
                    while (uVar21 != 0) {
                      uVar17 = (uint)uVar6;
                      if (uVar17 == 0x73) goto LAB_18063251a;
                      if (uVar17 == uVar13) {
                        local_224[uVar6] = 0;
                        local_228 = uVar17 + 1;
                      }
                      uVar13 = local_224[uVar6];
                      local_224[uVar6] = (uint)(uVar13 + uVar19);
                      uVar21 = (uint)(uVar13 + uVar19 >> 0x20);
                      uVar19 = (ulonglong)uVar21;
                      uVar6 = (ulonglong)(uVar17 + 1);
                      uVar13 = local_228;
                    }
                  }
                  if ((int)uVar6 == 0x73) goto LAB_18063251a;
                }
                uVar6 = (ulonglong)(uVar10 + 1);
              } while (uVar10 + 1 != uVar16);
            }
            local_5c8 = uVar13;
            if ((ulonglong)uVar13 != 0) {
              if ((ulonglong)uVar13 * 4 < 0x1cd) {
                FUN_18063aed0(local_5c4,local_224);
              }
              else {
                FUN_18063ab10(local_5c4,0);
                puVar7 = (undefined4 *)FUN_18060fe00();
                *puVar7 = 0x22;
                FUN_18060aad4();
              }
LAB_180632449:
              uVar13 = local_5c8;
            }
          }
LAB_180632450:
          bVar23 = true;
        }
        if (!bVar23) goto LAB_18063251a;
        local_7f8 = local_7f8 - local_7e0;
        uVar16 = uVar13;
      } while (local_7f8 != 0);
    }
    if (uVar5 % 10 != 0) {
      uVar16 = *(uint *)(&DAT_1806aee08 + (ulonglong)(uVar5 % 10 - 1) * 4);
      if (uVar16 == 0) {
LAB_18063251a:
        local_5c8 = 0;
      }
      else {
        if ((uVar16 == 1) || (uVar13 == 0)) goto LAB_180632950;
        uVar6 = 0;
        uVar19 = 0;
        do {
          uVar12 = (ulonglong)local_5c4[uVar19] * (ulonglong)uVar16 + uVar6;
          local_5c4[uVar19] = (uint)uVar12;
          uVar6 = uVar12 >> 0x20;
          uVar22 = (int)uVar19 + 1;
          uVar19 = (ulonglong)uVar22;
        } while (uVar22 != uVar13);
        uVar13 = (uint)(uVar12 >> 0x20);
        if (uVar13 == 0) goto LAB_180632949;
        if (0x72 < local_5c8) goto LAB_18063251a;
        local_5c4[local_5c8] = uVar13;
        local_5c8 = local_5c8 + 1;
      }
      uVar13 = local_5c8;
    }
  }
LAB_180632950:
  pcVar15 = local_7a8;
  if (uVar20 != 0) {
    uVar6 = 0;
    uVar19 = 0;
    do {
      uVar12 = uVar6 + (ulonglong)*(uint *)((longlong)&local_794 + uVar19 * 4) * 10;
      *(int *)((longlong)&local_794 + uVar19 * 4) = (int)uVar12;
      uVar16 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar16;
      uVar6 = uVar12 >> 0x20;
    } while (uVar16 != uVar20);
    iVar4 = (int)(uVar12 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
  }
  iVar4 = FUN_180614890(&local_798,&local_5c8);
  if (iVar4 == 10) {
    uVar5 = uVar5 + 1;
    *pcVar15 = '1';
    pcVar14 = pcVar15 + 1;
    if (uVar13 != 0) {
      uVar6 = 0;
      uVar19 = 0;
      do {
        uVar12 = uVar6 + (ulonglong)local_5c4[uVar19] * 10;
        local_5c4[uVar19] = (uint)uVar12;
        uVar20 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar20;
        uVar6 = uVar12 >> 0x20;
      } while (uVar20 != uVar13);
      uVar20 = (uint)(uVar12 >> 0x20);
      if (uVar20 != 0) {
        if (local_5c8 < 0x73) {
          local_5c4[local_5c8] = uVar20;
          local_5c8 = local_5c8 + 1;
        }
        else {
          local_5c8 = 0;
        }
      }
    }
  }
  else if (iVar4 == 0) {
    uVar5 = uVar5 - 1;
    pcVar14 = pcVar15;
  }
  else {
    pcVar14 = pcVar15 + 1;
    *pcVar15 = (char)iVar4 + '0';
  }
  local_7a0[1] = uVar5;
  uVar20 = local_7ec;
  if (((-1 < (int)uVar5) && (local_7ec < 0x80000000)) && (local_7dc == 0)) {
    uVar20 = local_7ec + uVar5;
  }
  uVar6 = (ulonglong)uVar20;
  if (param_6 - 1U < (ulonglong)uVar20) {
    uVar6 = param_6 - 1U;
  }
  pcVar15 = pcVar15 + uVar6;
  while ((pcVar14 != pcVar15 && (local_798 != 0))) {
    uVar6 = 0;
    uVar19 = 0;
    do {
      uVar12 = (ulonglong)*(uint *)((longlong)&local_794 + uVar19 * 4) * 1000000000 + uVar6;
      *(int *)((longlong)&local_794 + uVar19 * 4) = (int)uVar12;
      uVar6 = uVar12 >> 0x20;
      uVar20 = (int)uVar19 + 1;
      uVar19 = (ulonglong)uVar20;
    } while (uVar20 != local_798);
    iVar4 = (int)(uVar12 >> 0x20);
    if (iVar4 != 0) {
      if (local_798 < 0x73) {
        *(int *)((longlong)&local_794 + (ulonglong)local_798 * 4) = iVar4;
        local_798 = local_798 + 1;
      }
      else {
        local_798 = 0;
      }
    }
    uVar6 = FUN_180614890(&local_798,&local_5c8);
    uVar20 = 8;
    do {
      uVar19 = (uVar6 & 0xffffffff) / 10;
      if (uVar20 < (uint)((int)pcVar15 - (int)pcVar14)) {
        pcVar14[uVar20] = (char)uVar6 + (char)uVar19 * -10 + '0';
      }
      uVar20 = uVar20 - 1;
      uVar6 = uVar19;
    } while (uVar20 != 0xffffffff);
    lVar8 = (longlong)pcVar15 - (longlong)pcVar14;
    if (9 < lVar8) {
      lVar8 = 9;
    }
    pcVar14 = pcVar14 + lVar8;
  }
  *pcVar14 = '\0';
  local_7dc = 0;
  FUN_1806351d0(&local_7dc,local_7d0,local_7cc);
LAB_180632b7c:
  if (local_7b8 != '\0') {
    FUN_180635260(local_7c0);
  }
}



