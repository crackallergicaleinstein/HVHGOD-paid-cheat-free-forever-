// FUN_180257330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180257330 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180257330(undefined8 param_1,undefined1 (*param_2) [16],longlong *param_3,
                  undefined8 param_4,uint param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong *puVar14;
  undefined8 uVar15;
  uint uVar16;
  int iVar17;
  ulonglong uVar18;
  longlong *plVar19;
  undefined8 uVar20;
  double dVar21;
  float fVar22;
  undefined1 in_ZMM6 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auStackY_6d88 [32];
  byte local_6d18 [8];
  undefined *local_6d10;
  longlong local_6d08;
  longlong local_6d00;
  byte local_6cf8;
  byte local_6cf6;
  longlong local_6cf0;
  longlong *local_6ce8;
  undefined4 local_6ce0;
  longlong local_6cd8;
  longlong local_6cd0;
  longlong local_6cc8;
  longlong local_6cc0;
  longlong *local_6cb8;
  undefined1 local_6cb0 [16];
  longlong local_6ca0;
  undefined4 local_6c98;
  int local_6c90;
  undefined4 local_6c88;
  undefined1 local_6c80 [16];
  undefined8 local_6c70;
  undefined8 local_6c68;
  undefined8 uStack_6c60;
  undefined8 uStack_6c58;
  undefined8 uStack_6c50;
  undefined1 local_6c48 [16];
  undefined1 (*local_6c30) [16];
  undefined1 local_6c28 [16];
  undefined8 local_6c18;
  longlong local_6c08;
  int local_6c00;
  undefined4 local_6bfc;
  float local_6bf8;
  undefined1 local_6bf0 [27456];
  int local_b0;
  undefined1 local_ac;
  ulonglong local_a8;
  undefined1 local_48 [16];
  
  local_48 = in_ZMM6._0_16_;
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStackY_6d88;
  auVar24 = ZEXT464(param_5);
  local_6ce0 = 0;
  local_6c80 = ZEXT816(0x1807d0128);
  local_6ce8 = param_3;
  local_6c70 = param_4;
  local_6c30 = param_2;
  FUN_18017bf40(local_6c80 + 8);
  local_6c28 = (undefined1  [16])0x0;
  local_6c18 = 0;
  FUN_1803d44c0(0,local_6c28,1);
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)*param_2 = 0;
  *(undefined8 *)(*param_2 + 8) = 0;
  *(undefined8 *)param_2[1] = 0;
  local_6ce0 = 1;
  FUN_180265fa0(param_2,(longlong)(local_6c28._8_8_ - local_6c28._0_8_) / 0x18);
  local_6cc0 = 0;
  local_6c68 = 0;
  uStack_6c60 = 0;
  uStack_6c58 = 0;
  uStack_6c50 = 0;
  local_6c48 = (undefined1  [16])0x0;
  local_6cb8 = (longlong *)local_6c28._8_8_;
  if (local_6c28._0_8_ != local_6c28._8_8_) {
    auVar26 = ZEXT864(0);
    local_6cc8 = 0;
    local_6d08 = 0;
    local_6d00 = 0;
    local_6cf0 = 0;
    local_6cd8 = 0;
    local_6cd0 = 0;
    plVar19 = (longlong *)local_6c28._0_8_;
    do {
      iVar9 = DAT_180c648a8;
      if ((*plVar19 != 0) && (*plVar19 != *param_3)) {
        if (DAT_180c648a8 == 0) {
          auVar24 = ZEXT1664(auVar24._0_16_);
          auVar26 = ZEXT1664(auVar26._0_16_);
          UVar11 = GetTickCount64();
          if (DAT_180c648b0 <= UVar11) {
            local_6d10 = &DAT_1808ef720;
            iVar9 = FUN_1805f68d0(&DAT_1808ef720);
            if (iVar9 != 0) goto LAB_180258254;
            if (DAT_1808ef76c == 0x7fffffff) {
              DAT_1808ef76c = 0x7ffffffe;
              goto LAB_1802582d0;
            }
            if ((DAT_180c648a8 == 0) && (DAT_180c648b0 <= UVar11)) {
              DAT_180c648a8 = FUN_1804174b0("CCSPlayerController",0x3db3c8d0);
              DAT_180c648b0 = 0xffffffffffffffff;
              if (DAT_180c648a8 == 0) {
                DAT_180c648b0 = UVar11 + 1000;
              }
            }
            iVar9 = DAT_180c648a8;
            FUN_1805f68fc(&DAT_1808ef720);
          }
        }
        lVar12 = *plVar19;
        if (iVar9 + lVar12 == 0) {
          bVar6 = false;
          bVar7 = local_6cf8;
        }
        else {
          local_6d18[0] = 0;
          auVar24 = ZEXT1664(auVar24._0_16_);
          auVar26 = ZEXT1664(auVar26._0_16_);
          lVar13 = FUN_18017ea70();
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
          cVar8 = FUN_1804514c0(local_6d18,iVar9 + lVar12,1);
          bVar7 = local_6d18[0];
          if (cVar8 == '\0') {
            bVar6 = false;
            lVar12 = FUN_18017ea70();
            if (*(int *)(lVar12 + 4) != 0) {
              *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
            }
            bVar7 = local_6cf8;
          }
          else {
            local_6cf8 = local_6d18[0];
            bVar6 = true;
            lVar12 = FUN_18017ea70();
            if (*(int *)(lVar12 + 4) != 0) {
              *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
            }
          }
        }
        auVar25 = auVar26._0_16_;
        auVar23 = auVar24._0_16_;
        if (!bVar6) {
          bVar7 = 0;
        }
        if (bVar7 == 0) {
          local_6cd0 = local_6cd0 + 1;
LAB_180257ba1:
        }
        else {
          iVar9 = DAT_180c648a0;
          if (DAT_180c648a0 == 0) {
            auVar24 = ZEXT1664(auVar23);
            auVar26 = ZEXT1664(auVar25);
            UVar11 = GetTickCount64();
            auVar25 = auVar26._0_16_;
            auVar23 = auVar24._0_16_;
            if (UVar11 < DAT_180c64898) {
              iVar9 = 0;
            }
            else {
              local_6d10 = &DAT_1808ef6d0;
              iVar9 = FUN_1805f68d0(&DAT_1808ef6d0);
              if (iVar9 != 0) goto LAB_180258254;
              if (DAT_1808ef71c == 0x7fffffff) {
                DAT_1808ef71c = 0x7ffffffe;
                goto LAB_1802582d0;
              }
              if ((DAT_180c648a0 == 0) && (DAT_180c64898 <= UVar11)) {
                DAT_180c648a0 = FUN_1804174b0("CBasePlayerController");
                DAT_180c64898 = 0xffffffffffffffff;
                if (DAT_180c648a0 == 0) {
                  DAT_180c64898 = UVar11 + 1000;
                }
              }
              iVar9 = DAT_180c648a0;
              FUN_1805f68fc(&DAT_1808ef6d0);
              auVar25 = auVar26._0_16_;
              auVar23 = auVar24._0_16_;
            }
          }
          lVar12 = *plVar19;
          if (iVar9 + lVar12 != 0) {
            local_6d10 = (undefined *)((ulonglong)local_6d10 & 0xffffffff00000000);
            auVar24 = ZEXT1664(auVar23);
            auVar26 = ZEXT1664(auVar25);
            lVar13 = FUN_18017ea70();
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
            cVar8 = FUN_1804514c0(&local_6d10,iVar9 + lVar12,4);
            if (cVar8 == '\0') {
              lVar12 = FUN_18017ea70();
              auVar25 = auVar26._0_16_;
              auVar23 = auVar24._0_16_;
              if (*(int *)(lVar12 + 4) != 0) {
                *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
              }
            }
            else {
              local_6c98 = (int)local_6d10;
              lVar12 = FUN_18017ea70();
              auVar25 = auVar26._0_16_;
              auVar23 = auVar24._0_16_;
              if (*(int *)(lVar12 + 4) != 0) {
                *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
              }
            }
          }
          auVar24 = ZEXT1664(auVar23);
          auVar26 = ZEXT1664(auVar25);
          lVar12 = FUN_1803d4150();
          if ((lVar12 == 0) || (lVar12 == param_3[1])) {
            local_6cd8 = local_6cd8 + 1;
            goto LAB_180257ba1;
          }
          iVar9 = DAT_180c648a4;
          if (DAT_180c648a4 == 0) {
            UVar11 = GetTickCount64();
            if (UVar11 < DAT_180c64880) {
              iVar9 = 0;
            }
            else {
              local_6d10 = &DAT_1808ef680;
              iVar9 = FUN_1805f68d0(&DAT_1808ef680);
              if (iVar9 != 0) goto LAB_180258254;
              if (DAT_1808ef6cc == 0x7fffffff) {
                DAT_1808ef6cc = 0x7ffffffe;
                goto LAB_1802582d0;
              }
              if ((DAT_180c648a4 == 0) && (DAT_180c64880 <= UVar11)) {
                DAT_180c648a4 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
                DAT_180c64880 = 0xffffffffffffffff;
                if (DAT_180c648a4 == 0) {
                  DAT_180c64880 = UVar11 + 1000;
                }
              }
              iVar9 = DAT_180c648a4;
              FUN_1805f68fc(&DAT_1808ef680);
            }
          }
          if (iVar9 + lVar12 == 0) {
            bVar6 = false;
            bVar7 = local_6cf6;
          }
          else {
            local_6d18[0] = 0;
            lVar13 = FUN_18017ea70();
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
            cVar8 = FUN_1804514c0(local_6d18,iVar9 + lVar12,1);
            bVar7 = local_6d18[0];
            if (cVar8 == '\0') {
              bVar6 = false;
              lVar13 = FUN_18017ea70();
              if (*(int *)(lVar13 + 4) != 0) {
                *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
              }
              bVar7 = local_6cf6;
            }
            else {
              local_6cf6 = local_6d18[0];
              bVar6 = true;
              lVar13 = FUN_18017ea70();
              if (*(int *)(lVar13 + 4) != 0) {
                *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
              }
            }
          }
          uVar16 = (uint)bVar7;
          if (!bVar6) {
            uVar16 = 0;
          }
          if ((*(char *)((longlong)param_3 + 0x29) != '\0') &&
             (*(uint *)((longlong)param_3 + 0x24) == uVar16)) {
            local_6cf0 = local_6cf0 + 1;
            goto LAB_180257ba1;
          }
          iVar9 = DAT_180c64890;
          if (DAT_180c64890 == 0) {
            UVar11 = GetTickCount64();
            if (UVar11 < DAT_180c64888) {
              iVar9 = 0;
            }
            else {
              local_6d10 = &DAT_1808ef5e0;
              iVar9 = FUN_1805f68d0(&DAT_1808ef5e0);
              if (iVar9 != 0) goto LAB_180258254;
              if (DAT_1808ef62c == 0x7fffffff) {
                DAT_1808ef62c = 0x7ffffffe;
                goto LAB_1802582d0;
              }
              if ((DAT_180c64890 == 0) && (DAT_180c64888 <= UVar11)) {
                DAT_180c64890 = FUN_1804174b0("C_BaseEntity");
                DAT_180c64888 = 0xffffffffffffffff;
                if (DAT_180c64890 == 0) {
                  DAT_180c64888 = UVar11 + 1000;
                }
              }
              iVar9 = DAT_180c64890;
              FUN_1805f68fc(&DAT_1808ef5e0);
            }
          }
          if (iVar9 + lVar12 == 0) {
            bVar6 = false;
            iVar9 = local_6c90;
          }
          else {
            local_6d10 = (undefined *)((ulonglong)local_6d10 & 0xffffffff00000000);
            lVar13 = FUN_18017ea70();
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
            cVar8 = FUN_1804514c0(&local_6d10,iVar9 + lVar12,4);
            if (cVar8 == '\0') {
              bVar6 = false;
              lVar13 = FUN_18017ea70();
              if (*(int *)(lVar13 + 4) != 0) {
                *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
              }
              iVar9 = local_6c90;
            }
            else {
              iVar9 = (int)local_6d10;
              local_6c90 = (int)local_6d10;
              bVar6 = true;
              lVar13 = FUN_18017ea70();
              if (*(int *)(lVar13 + 4) != 0) {
                *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
              }
            }
          }
          if (!bVar6) {
            iVar9 = 0;
          }
          if (0 < iVar9) {
            iVar17 = DAT_180c64874;
            if (DAT_180c64874 == 0) {
              UVar11 = GetTickCount64();
              if (UVar11 < DAT_180c64878) {
                iVar17 = 0;
              }
              else {
                local_6d10 = &DAT_1808ef630;
                iVar17 = FUN_1805f68d0(&DAT_1808ef630);
                if (iVar17 != 0) {
LAB_180258254:
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(5);
                }
                if (DAT_1808ef67c == 0x7fffffff) {
                  DAT_1808ef67c = 0x7ffffffe;
LAB_1802582d0:
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                if ((DAT_180c64874 == 0) && (DAT_180c64878 <= UVar11)) {
                  DAT_180c64874 = FUN_1804174b0("C_CSPlayerPawn",0x9c15080d);
                  DAT_180c64878 = 0xffffffffffffffff;
                  if (DAT_180c64874 == 0) {
                    DAT_180c64878 = UVar11 + 1000;
                  }
                }
                iVar17 = DAT_180c64874;
                FUN_1805f68fc(&DAT_1808ef630);
              }
            }
            if (iVar17 + lVar12 != 0) {
              local_6d18[0] = 0;
              lVar13 = FUN_18017ea70();
              *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
              cVar8 = FUN_1804514c0(local_6d18,iVar17 + lVar12,1);
              if (cVar8 == '\0') {
                lVar12 = FUN_18017ea70();
                if (*(int *)(lVar12 + 4) != 0) {
                  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                }
              }
              else {
                lVar13 = FUN_18017ea70();
                if (*(int *)(lVar13 + 4) != 0) {
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
                }
                if (local_6d18[0] == 0) {
                  local_6cb0 = (undefined1  [16])0x0;
                  local_6ca0 = 0;
                  FUN_180273390(&DAT_180cc9398,local_6cb0,lVar12,local_6c70);
                  if (local_6cb0._0_8_ == local_6cb0._8_8_) {
                    local_6cc8 = local_6cc8 + 1;
                  }
                  else {
                    if (auVar26._0_4_ < auVar24._0_4_) {
                      fVar22 = *(float *)(local_6cb0._0_8_ + 0x2378) - DAT_180b8e138;
                      fVar3 = *(float *)(local_6cb0._0_8_ + 0x2374) - DAT_180b8e134;
                      fVar4 = *(float *)(local_6cb0._0_8_ + 0x2370) - DAT_180b8e130;
                      fVar22 = fVar4 * fVar4 + fVar3 * fVar3 + fVar22 * fVar22;
                      if (1 < (ulonglong)((longlong)(local_6cb0._8_8_ - local_6cb0._0_8_) / 0x23c0))
                      {
                        fVar3 = *(float *)(local_6cb0._8_8_ + -0x48) - DAT_180b8e138;
                        fVar4 = *(float *)(local_6cb0._8_8_ + -0x4c) - DAT_180b8e134;
                        fVar5 = *(float *)(local_6cb0._8_8_ + -0x50) - DAT_180b8e130;
                        auVar23 = vminss_avx(ZEXT416((uint)(fVar5 * fVar5 + fVar4 * fVar4 +
                                                           fVar3 * fVar3)),ZEXT416((uint)fVar22));
                        fVar22 = auVar23._0_4_;
                      }
                      if (auVar24._0_4_ < fVar22) {
                        local_6cc0 = local_6cc0 + 1;
                        goto joined_r0x000180257e76;
                      }
                    }
                    local_6bf8 = auVar26._0_4_;
                    FUN_18063ab10(local_6bf0,0,0x6b40);
                    FUN_180264150();
                    local_ac = 0;
                    iVar17 = DAT_180c64870;
                    local_6c08 = lVar12;
                    local_6c00 = iVar9;
                    if (DAT_180c64870 == 0) {
                      UVar11 = GetTickCount64();
                      if (UVar11 < DAT_180c64868) {
                        iVar17 = 0;
                      }
                      else {
                        local_6d10 = &DAT_1808ef590;
                        iVar17 = FUN_1805f68d0(&DAT_1808ef590);
                        if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(5);
                        }
                        if (DAT_1808ef5dc == 0x7fffffff) {
                          DAT_1808ef5dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(6);
                        }
                        if ((DAT_180c64870 == 0) && (DAT_180c64868 <= UVar11)) {
                          DAT_180c64870 = FUN_1804174b0("C_CSPlayerPawn",0x8937152d);
                          DAT_180c64868 = 0xffffffffffffffff;
                          if (DAT_180c64870 == 0) {
                            DAT_180c64868 = UVar11 + 1000;
                          }
                        }
                        iVar17 = DAT_180c64870;
                        FUN_1805f68fc();
                      }
                    }
                    if (iVar17 + lVar12 == 0) {
                      bVar6 = false;
                      uVar10 = local_6c88;
                    }
                    else {
                      local_6d10 = (undefined *)((ulonglong)local_6d10 & 0xffffffff00000000);
                      lVar13 = FUN_18017ea70();
                      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                      cVar8 = FUN_1804514c0(&local_6d10,iVar17 + lVar12,4);
                      if (cVar8 == '\0') {
                        bVar6 = false;
                        lVar12 = FUN_18017ea70();
                        if (*(int *)(lVar12 + 4) != 0) {
                          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                        }
                        uVar10 = local_6c88;
                      }
                      else {
                        uVar10 = (int)local_6d10;
                        local_6c88 = (int)local_6d10;
                        bVar6 = true;
                        lVar12 = FUN_18017ea70();
                        if (*(int *)(lVar12 + 4) != 0) {
                          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                        }
                      }
                    }
                    if (!bVar6) {
                      uVar10 = 0;
                    }
                    uVar15 = local_6cb0._0_8_;
                    local_b0 = (int)((longlong)(local_6cb0._8_8_ - local_6cb0._0_8_) / 0x23c0);
                    if (3 < local_b0) {
                      local_b0 = 3;
                    }
                    iVar17 = 0;
                    local_6bfc = uVar10;
                    if (0 < local_b0) {
                      do {
                        FUN_18063aed0(local_6bf0 + (longlong)iVar17 * 0x23c0,
                                      (longlong)iVar17 * 0x23c0 + uVar15,0x23c0);
                        iVar17 = iVar17 + 1;
                      } while (iVar17 < local_b0);
                    }
                    if (DAT_180cc9348 - 1U < 6) {
                      uVar15 = FUN_180252d60(&DAT_180c7e1f0);
                      uVar20 = FUN_180252c10(uVar15);
                      local_6bf8 = (float)FUN_180263420(uVar20,uVar15,iVar9);
                    }
                    lVar12 = *(longlong *)(*param_2 + 8);
                    if (lVar12 == *(longlong *)param_2[1]) {
                      FUN_180268db0(param_2,lVar12,&local_6c08);
                    }
                    else {
                      FUN_18063aed0(lVar12,&local_6c08,0x6b60);
                      *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0x6b60;
                    }
                  }
joined_r0x000180257e76:
                  if (local_6cb0._0_8_ != 0) {
                    lVar12 = local_6cb0._0_8_;
                    if ((0xfff < (ulonglong)(((local_6ca0 - local_6cb0._0_8_) / 0x23c0) * 0x23c0))
                       && (lVar12 = *(longlong *)(local_6cb0._0_8_ + -8),
                          0x1f < (local_6cb0._0_8_ - lVar12) - 8U)) {
                    /* WARNING: Subroutine does not return */
                      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                    }
                    FUN_1804547d0(lVar12);
                  }
                  param_3 = local_6ce8;
                  goto LAB_180257ba1;
                }
              }
            }
            local_6d08 = local_6d08 + 1;
            param_3 = local_6ce8;
            goto LAB_180257ba9;
          }
          local_6d00 = local_6d00 + 1;
          param_3 = local_6ce8;
        }
      }
LAB_180257ba9:
      plVar19 = plVar19 + 3;
    } while (plVar19 != local_6cb8);
  }
  UVar11 = GetTickCount64();
  if (DAT_180c64858 <= UVar11) {
    DAT_180c64858 = UVar11 + 2000;
    FUN_18063ab10(&local_6c08,0,0x600);
    FUN_18015ad60(&local_6c08,0x600,0xffffffffffffffff,
                  "controllers=%zu eligible=%zu alive_reject=%zu handle_reject=%zu team_reject=%zu health_reject=%zu immune_reject=%zu history_reject=%zu range_reject=%zu"
                 );
    FUN_1800f6900(0);
  }
  FUN_1801abba0(local_6c28);
  FUN_18017bf40(&local_6cb8);
  plVar19 = local_6cb8;
  uVar18 = (longlong)local_6cb8 - local_6c80._8_8_;
  puVar14 = (ulonglong *)FUN_180266c90();
  uVar1 = *puVar14;
  *puVar14 = uVar1 + 1;
  uVar2 = puVar14[1];
  puVar14[1] = uVar2 + uVar18;
  puVar14[3] = puVar14[3] + (ulonglong)(999999 < uVar18);
  puVar14[4] = puVar14[4] + (ulonglong)(4999999 < uVar18);
  puVar14[5] = puVar14[5] + (ulonglong)(15999999 < uVar18);
  if (puVar14[2] < uVar18) {
    puVar14[2] = uVar18;
  }
  if ((plVar19 == (longlong *)puVar14[7]) || ((longlong)puVar14[7] <= (longlong)plVar19)) {
    dVar21 = (double)(uVar2 + uVar18) / (double)(uVar1 + 1);
    FUN_1801af8a0(dVar21,dVar21 / 1000.0,local_6c80._0_8_);
    puVar14[2] = 0;
    puVar14[1] = 0;
    *puVar14 = 0;
    puVar14[5] = 0;
    puVar14[4] = 0;
    puVar14[3] = 0;
    puVar14[6] = (ulonglong)plVar19;
    puVar14[7] = (ulonglong)(plVar19 + 625000000);
  }
}



