// FUN_180249270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180249270 */

undefined8 * FUN_180249270(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  ulonglong uVar7;
  float *pfVar8;
  float *pfVar9;
  longlong *plVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar16;
  undefined1 auVar17 [64];
  undefined1 extraout_var [56];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  ulonglong uVar23;
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  float fVar26;
  float fVar27;
  float fVar28;
  uint local_108;
  float local_104;
  undefined8 local_100;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  
  local_108 = *(uint *)*param_1;
  auVar20 = ZEXT464(local_108);
  auVar22 = ZEXT464(0x7f7fffff);
  auVar17 = ZEXT1664(auVar22._0_16_);
  local_104 = 3.4028235e+38;
  plVar10 = *(longlong **)param_1[1];
  plVar1 = (longlong *)((longlong *)param_1[1])[1];
  if (plVar10 != plVar1) {
    auVar25 = ZEXT864(0);
    fVar15 = 57.295776;
    do {
      iVar5 = 0;
      if ((*plVar10 != 0) && (*plVar10 != *(longlong *)param_1[2])) {
        iVar4 = DAT_180c645e0;
        if (DAT_180c645e0 == 0) {
          UVar6 = GetTickCount64();
          if (UVar6 < DAT_180c645d8) {
            iVar4 = iVar5;
          }
          else {
            local_100 = &DAT_1808ee7b0;
            iVar4 = FUN_1805f68d0(&DAT_1808ee7b0);
            if (iVar4 != 0) goto LAB_180249cb6;
            if (DAT_1808ee7fc == 0x7fffffff) {
              DAT_1808ee7fc = 0x7ffffffe;
              goto LAB_180249d32;
            }
            if ((DAT_180c645e0 == 0) && (DAT_180c645d8 <= UVar6)) {
              DAT_180c645e0 = FUN_1804174b0("CCSPlayerController",0x3db3c8d0);
              if (DAT_180c645e0 == 0) {
                DAT_180c645d8 = UVar6 + 1000;
              }
              else {
                DAT_180c645d8 = 0xffffffffffffffff;
              }
            }
            iVar4 = DAT_180c645e0;
            FUN_1805f68fc(&DAT_1808ee7b0);
          }
          auVar20 = ZEXT464(local_108);
          auVar17 = ZEXT464((uint)local_104);
        }
        uVar16 = auVar17._0_8_;
        if (*(char *)((longlong)iVar4 + *plVar10) != '\0') {
          iVar4 = DAT_180c645c0;
          if (DAT_180c645c0 == 0) {
            UVar6 = GetTickCount64();
            if (UVar6 < DAT_180c645c8) {
              iVar4 = iVar5;
              uVar16 = extraout_XMM0_Qa;
            }
            else {
              local_100 = &DAT_1808ee800;
              iVar4 = FUN_1805f68d0(&DAT_1808ee800);
              if (iVar4 != 0) goto LAB_180249cb6;
              if (DAT_1808ee84c == 0x7fffffff) {
                DAT_1808ee84c = 0x7ffffffe;
                goto LAB_180249d32;
              }
              if ((DAT_180c645c0 == 0) && (DAT_180c645c8 <= UVar6)) {
                DAT_180c645c0 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
                if (DAT_180c645c0 == 0) {
                  DAT_180c645c8 = UVar6 + 1000;
                }
                else {
                  DAT_180c645c8 = 0xffffffffffffffff;
                }
              }
              iVar4 = DAT_180c645c0;
              uVar16 = FUN_1805f68fc(&DAT_1808ee800);
            }
          }
          uVar7 = FUN_1803d4150(uVar16,*(undefined4 *)((longlong)iVar4 + *plVar10));
          if ((uVar7 != 0) && (uVar7 != *(ulonglong *)(param_1[2] + 8))) {
            iVar4 = DAT_180c645b8;
            if (DAT_180c645b8 == 0) {
              UVar6 = GetTickCount64();
              if (UVar6 < DAT_180c645b0) {
                iVar4 = iVar5;
              }
              else {
                local_100 = &DAT_1808ee760;
                iVar4 = FUN_1805f68d0(&DAT_1808ee760);
                if (iVar4 != 0) goto LAB_180249cb6;
                if (DAT_1808ee7ac == 0x7fffffff) {
                  DAT_1808ee7ac = 0x7ffffffe;
                  goto LAB_180249d32;
                }
                if ((DAT_180c645b8 == 0) && (DAT_180c645b0 <= UVar6)) {
                  DAT_180c645b8 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
                  if (DAT_180c645b8 == 0) {
                    DAT_180c645b0 = UVar6 + 1000;
                  }
                  else {
                    DAT_180c645b0 = 0xffffffffffffffff;
                  }
                }
                iVar4 = DAT_180c645b8;
                FUN_1805f68fc(&DAT_1808ee760);
              }
            }
            if ((*(char *)(param_1[2] + 0x29) == '\0') ||
               (*(uint *)(param_1[2] + 0x24) != (uint)*(byte *)((longlong)iVar4 + uVar7))) {
              iVar4 = DAT_180c645bc;
              if (DAT_180c645bc == 0) {
                UVar6 = GetTickCount64();
                if (UVar6 < DAT_180c64598) {
                  iVar4 = iVar5;
                }
                else {
                  local_100 = &DAT_1808ee710;
                  iVar4 = FUN_1805f68d0(&DAT_1808ee710);
                  if (iVar4 != 0) goto LAB_180249cb6;
                  if (DAT_1808ee75c == 0x7fffffff) {
                    DAT_1808ee75c = 0x7ffffffe;
                    goto LAB_180249d32;
                  }
                  if ((DAT_180c645bc == 0) && (DAT_180c64598 <= UVar6)) {
                    DAT_180c645bc = FUN_1804174b0("C_BaseEntity",0x84cdad2);
                    if (DAT_180c645bc == 0) {
                      DAT_180c64598 = UVar6 + 1000;
                    }
                    else {
                      DAT_180c64598 = 0xffffffffffffffff;
                    }
                  }
                  iVar4 = DAT_180c645bc;
                  FUN_1805f68fc(&DAT_1808ee710);
                }
              }
              if (0 < *(int *)((longlong)iVar4 + uVar7)) {
                iVar4 = DAT_180c645a8;
                if (DAT_180c645a8 == 0) {
                  UVar6 = GetTickCount64();
                  if (UVar6 < DAT_180c645a0) {
                    iVar4 = iVar5;
                  }
                  else {
                    local_100 = &DAT_1808ee670;
                    iVar4 = FUN_1805f68d0(&DAT_1808ee670);
                    if (iVar4 != 0) goto LAB_180249cb6;
                    if (DAT_1808ee6bc == 0x7fffffff) {
                      DAT_1808ee6bc = 0x7ffffffe;
                      goto LAB_180249d32;
                    }
                    if ((DAT_180c645a8 == 0) && (DAT_180c645a0 <= UVar6)) {
                      DAT_180c645a8 = FUN_1804174b0("C_CSPlayerPawn",0x9c15080d);
                      if (DAT_180c645a8 == 0) {
                        DAT_180c645a0 = UVar6 + 1000;
                      }
                      else {
                        DAT_180c645a0 = 0xffffffffffffffff;
                      }
                    }
                    iVar4 = DAT_180c645a8;
                    FUN_1805f68fc(&DAT_1808ee670);
                  }
                }
                if (*(char *)((longlong)iVar4 + uVar7) == '\0') {
                  iVar4 = DAT_180c64588;
                  if (DAT_180c64588 == 0) {
                    UVar6 = GetTickCount64();
                    if (UVar6 < DAT_180c64590) {
                      iVar4 = iVar5;
                    }
                    else {
                      local_100 = &DAT_1808ee6c0;
                      iVar5 = FUN_1805f68d0(&DAT_1808ee6c0);
                      if (iVar5 != 0) goto LAB_180249cb6;
                      if (DAT_1808ee70c == 0x7fffffff) {
                        DAT_1808ee70c = 0x7ffffffe;
                        goto LAB_180249d32;
                      }
                      if ((DAT_180c64588 == 0) && (DAT_180c64590 <= UVar6)) {
                        DAT_180c64588 = FUN_1804174b0("C_BaseEntity",0x9d930423);
                        if (DAT_180c64588 == 0) {
                          DAT_180c64590 = UVar6 + 1000;
                        }
                        else {
                          DAT_180c64590 = 0xffffffffffffffff;
                        }
                      }
                      iVar4 = DAT_180c64588;
                      FUN_1805f68fc(&DAT_1808ee6c0);
                    }
                  }
                  iVar5 = DAT_180c64580;
                  lVar2 = *(longlong *)((longlong)iVar4 + uVar7);
                  if (lVar2 == 0) {
                    auVar17 = ZEXT464((uint)local_104);
                    auVar20 = ZEXT464(local_108);
                  }
                  else {
                    if ((DAT_180c64580 == 0) && (UVar6 = GetTickCount64(), DAT_180c64578 <= UVar6))
                    {
                      local_100 = &DAT_1808ee620;
                      iVar5 = FUN_1805f68d0(&DAT_1808ee620);
                      if (iVar5 != 0) goto LAB_180249cb6;
                      if (DAT_1808ee66c == 0x7fffffff) {
                        DAT_1808ee66c = 0x7ffffffe;
LAB_180249d32:
                    /* WARNING: Subroutine does not return */
                        FUN_1805f6d44(6);
                      }
                      if ((DAT_180c64580 == 0) && (DAT_180c64578 <= UVar6)) {
                        DAT_180c64580 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
                        if (DAT_180c64580 == 0) {
                          DAT_180c64578 = UVar6 + 1000;
                        }
                        else {
                          DAT_180c64578 = 0xffffffffffffffff;
                        }
                      }
                      iVar5 = DAT_180c64580;
                      FUN_1805f68fc(&DAT_1808ee620);
                    }
                    iVar4 = DAT_180c64584;
                    local_e8 = *(undefined8 *)(iVar5 + lVar2);
                    fVar28 = *(float *)((longlong)iVar5 + 8 + lVar2);
                    if ((DAT_180c64584 == 0) && (UVar6 = GetTickCount64(), DAT_180c64560 <= UVar6))
                    {
                      local_100 = &DAT_1808ee5d0;
                      iVar5 = FUN_1805f68d0(&DAT_1808ee5d0);
                      if (iVar5 != 0) {
LAB_180249cb6:
                    /* WARNING: Subroutine does not return */
                        FUN_1805f6d44(5);
                      }
                      if (DAT_1808ee61c == 0x7fffffff) {
                        DAT_1808ee61c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                        FUN_1805f6d44(6);
                      }
                      if ((DAT_180c64584 == 0) && (DAT_180c64560 <= UVar6)) {
                        DAT_180c64584 = FUN_1804174b0("C_BaseModelEntity",0x39db834b);
                        if (DAT_180c64584 == 0) {
                          DAT_180c64560 = UVar6 + 1000;
                        }
                        else {
                          DAT_180c64560 = 0xffffffffffffffff;
                        }
                      }
                      iVar4 = DAT_180c64584;
                      FUN_1805f68fc(&DAT_1808ee5d0);
                    }
                    local_100 = *(undefined **)((longlong)iVar4 + uVar7);
                    auVar18._8_8_ = 0;
                    auVar18._0_8_ = local_100;
                    pfVar9 = (float *)param_1[3];
                    fVar11 = ((float)local_e8 + SUB84(local_100,0)) - *pfVar9;
                    auVar20 = ZEXT464((uint)fVar11);
                    auVar18 = vshufps_avx(auVar18,auVar18,0x55);
                    fVar26 = (local_e8._4_4_ + auVar18._0_4_) - pfVar9[1];
                    auVar22 = ZEXT464((uint)fVar26);
                    fVar27 = (fVar28 + *(float *)((longlong)iVar4 + 8 + uVar7)) - pfVar9[2];
                    auVar24 = ZEXT464((uint)fVar27);
                    fVar11 = fVar11 * fVar11 + fVar26 * fVar26;
                    auVar17 = ZEXT464((uint)fVar11);
                    fVar11 = fVar27 * fVar27 + fVar11;
                    fVar26 = (float)local_e8;
                    fVar27 = local_e8._4_4_;
                    sVar3 = thunk_FUN_180624430(fVar11);
                    uVar23 = auVar24._0_8_;
                    if ((0 < sVar3) || (fVar11 < 0.0001)) {
                      auVar17 = ZEXT464((uint)local_104);
                      auVar22 = ZEXT464(0x7f7fffff);
                      auVar20 = ZEXT464(local_108);
                    }
                    else {
                      fVar11 = auVar17._0_4_;
                      if (fVar11 == auVar25._0_4_) {
                        uVar16 = auVar25._0_8_;
                      }
                      else if (fVar11 < 0.0) {
                        uVar16 = FUN_18061e150(auVar17._0_8_);
                        uVar23 = auVar24._0_8_;
                      }
                      else {
                        auVar19._0_4_ = SQRT(fVar11);
                        auVar19._4_12_ = auVar17._4_12_;
                        uVar16 = auVar19._0_8_;
                      }
                      fVar11 = (float)FUN_180636c80(uVar23 ^ 0x8000000080000000,uVar16);
                      auVar17 = ZEXT464((uint)(fVar11 * fVar15));
                      fVar11 = (float)FUN_180636c80(auVar22._0_8_,auVar20._0_8_);
                      auVar24 = ZEXT464((uint)(fVar11 * fVar15));
                      auVar20 = ZEXT464((uint)((float *)param_1[4])[1]);
                      fVar15 = *(float *)param_1[4];
                      sVar3 = thunk_FUN_180624430(fVar15);
                      if ((((sVar3 < 1) && (sVar3 = thunk_FUN_180624430(auVar20._0_8_), sVar3 < 1))
                          && (sVar3 = thunk_FUN_180624430(auVar17._0_8_), sVar3 < 1)) &&
                         (sVar3 = thunk_FUN_180624430(auVar24._0_8_), sVar3 < 1)) {
                        auVar22 = ZEXT464((uint)(fVar15 * 0.017453292));
                        auVar17 = ZEXT464((uint)(auVar17._0_4_ * 0.017453292));
                        fVar11 = (float)FUN_180638e00(fVar15 * 0.017453292);
                        fVar12 = (float)FUN_180638e00(auVar17._0_8_);
                        fVar13 = (float)FUN_180637540(auVar22._0_8_);
                        fVar14 = (float)FUN_180637540(auVar17._0_8_);
                        fVar15 = auVar24._0_4_ - auVar20._0_4_;
                        auVar17 = ZEXT464((uint)fVar15);
                        sVar3 = thunk_FUN_180624430(fVar15);
                        if (sVar3 < 1) {
                          fVar15 = (float)FUN_180615070(auVar17._0_8_,0x43b40000);
                        }
                        else {
                          fVar15 = 0.0;
                        }
                        fVar15 = (float)FUN_180637540(fVar15 * 0.017453292);
                        local_ec = fVar15 * fVar14 * fVar13 + fVar12 * fVar11;
                        local_100 = (undefined *)CONCAT44(local_100._4_4_,0x3f800000);
                        local_f0 = -1.0;
                        pfVar9 = &local_f0;
                        if (-1.0 <= local_ec) {
                          pfVar9 = &local_ec;
                        }
                        pfVar8 = (float *)&local_100;
                        if (local_ec <= 1.0) {
                          pfVar8 = pfVar9;
                        }
                        auVar17._0_8_ = FUN_180636820(*pfVar8);
                        auVar17._8_56_ = extraout_var;
                        auVar21._0_4_ = (float)auVar17._0_8_ / 0.017453292;
                        auVar21._4_12_ = auVar17._4_12_;
                        auVar25 = ZEXT864(0);
                      }
                      else {
                        auVar21 = SUB6416(ZEXT464(0x7f800000),0);
                      }
                      pfVar9 = (float *)param_1[6];
                      auVar18 = vpcmpeqd_avx(ZEXT416(*(uint *)(param_1[5] + 0x74)),ZEXT416(0));
                      auVar18 = vblendvps_avx(auVar21,ZEXT416((uint)((fVar27 - pfVar9[1]) *
                                                                     (fVar27 - pfVar9[1]) +
                                                                     (fVar26 - *pfVar9) *
                                                                     (fVar26 - *pfVar9) +
                                                                    (fVar28 - pfVar9[2]) *
                                                                    (fVar28 - pfVar9[2]))),auVar18);
                      auVar17 = ZEXT1664(auVar18);
                      sVar3 = thunk_FUN_180624430(auVar18._0_8_);
                      auVar18 = auVar17._0_16_;
                      if ((0 < sVar3) || (auVar17._0_4_ < auVar25._0_4_)) {
                        auVar18 = SUB6416(ZEXT464(0x7f7fffff),0);
                      }
                      auVar22 = ZEXT464(0x7f7fffff);
                      auVar17 = ZEXT464((uint)local_104);
                      fVar15 = auVar18._0_4_;
                      if ((fVar15 < local_104) ||
                         (((fVar15 == local_104 && (fVar15 < 3.4028235e+38)) &&
                          (uVar7 < *(ulonglong *)(param_1[7] + 0xf8))))) {
                        auVar17 = ZEXT1664(auVar18);
                        auVar20 = ZEXT1664(auVar24._0_16_);
                        local_108 = auVar24._0_4_;
                        *(ulonglong *)(param_1[7] + 0xf8) = uVar7;
                        *(float *)(param_1[7] + 0x108) = fVar15;
                        local_104 = fVar15;
                      }
                      else {
                        auVar20 = ZEXT464(local_108);
                      }
                      fVar15 = 57.295776;
                    }
                  }
                  goto LAB_180249c2e;
                }
              }
            }
          }
          auVar17 = ZEXT464((uint)local_104);
          auVar20 = ZEXT464(local_108);
        }
      }
LAB_180249c2e:
      plVar10 = plVar10 + 3;
    } while (plVar10 != plVar1);
    if (auVar17._0_4_ < auVar22._0_4_) {
      local_100._0_5_ = CONCAT14(1,auVar20._0_4_);
      goto LAB_180249c53;
    }
  }
  local_100._0_5_ = (uint5)(uint)(float)local_100;
LAB_180249c53:
  *param_2 = local_100;
  return param_2;
}



