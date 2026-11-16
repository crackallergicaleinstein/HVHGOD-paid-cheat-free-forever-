// FUN_180247660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180247660 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180247660(longlong param_1,ulonglong param_2,longlong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  char cVar6;
  undefined1 auVar7 [8];
  short sVar8;
  int iVar9;
  ULONGLONG UVar10;
  undefined8 *puVar11;
  float *pfVar12;
  undefined8 *puVar13;
  float *pfVar14;
  longlong lVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  longlong lVar19;
  char cVar20;
  longlong *plVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [64];
  float fVar30;
  float fVar31;
  undefined1 in_ZMM10 [64];
  undefined1 auVar32 [64];
  undefined4 uVar33;
  undefined8 uVar34;
  undefined1 in_ZMM12 [64];
  undefined1 auVar35 [64];
  undefined8 uVar36;
  undefined1 in_ZMM13 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auStackY_958 [32];
  float local_878 [2];
  char local_870;
  float local_868 [2];
  float local_860 [2];
  float local_858;
  undefined4 uStack_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  float local_848;
  undefined4 uStack_844;
  longlong *local_840;
  undefined1 local_838 [8];
  undefined8 local_830;
  ulonglong local_828;
  undefined8 local_820;
  undefined4 local_818;
  undefined8 local_810;
  undefined4 local_808;
  float local_800 [4];
  ulonglong local_7f0;
  float local_7e8 [4];
  float local_7d8 [4];
  float local_7c8 [4];
  undefined1 local_7b8 [16];
  undefined8 local_7a8;
  float *local_798;
  undefined1 *local_790;
  longlong *local_788;
  float *local_780;
  longlong local_778;
  undefined1 *local_770;
  undefined8 *local_768;
  longlong local_760;
  undefined1 local_758 [24];
  float local_740 [2];
  undefined8 local_738;
  float local_730;
  undefined1 local_728 [16];
  undefined1 (*local_718) [16];
  float local_710;
  float local_70c;
  float local_708;
  undefined1 local_700 [16];
  undefined8 local_6f0;
  char local_6e8 [1536];
  ulonglong local_e8;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_88 [16];
  
  local_88 = in_ZMM10._0_16_;
  local_a8 = in_ZMM12._0_16_;
  local_b8 = in_ZMM13._0_16_;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStackY_958;
  local_828 = param_2;
  local_858 = 0.0;
  auVar38 = ZEXT864(0);
  if (DAT_180cad810 == '\0') {
    local_868[0] = 0.0;
  }
  else {
    fVar31 = 180.0;
    local_740[0] = 180.0;
    fVar23 = -180.0;
    local_878[0] = -180.0;
    auVar29 = ZEXT464((uint)DAT_180cad878);
    local_868[0] = DAT_180cad878;
    sVar8 = thunk_FUN_180624430(DAT_180cad878);
    if (sVar8 < 1) {
      pfVar14 = local_878;
      if (fVar23 <= auVar29._0_4_) {
        pfVar14 = local_868;
      }
      pfVar12 = local_740;
      if (auVar29._0_4_ <= fVar31) {
        pfVar12 = pfVar14;
      }
      local_868[0] = *pfVar12;
    }
    else {
      local_868[0] = 33.0;
    }
  }
  local_740[0] = *(float *)(param_2 + 4);
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0x7f7fffff;
  cVar6 = DAT_180cad728;
  local_838[4] = 0;
  local_830._0_5_ = (uint5)(uint)local_830;
  local_728 = (undefined1  [16])0x0;
  local_718 = (undefined1 (*) [16])0x0;
  local_878[0] = INFINITY;
  local_870 = DAT_180cad728;
  iVar9 = DAT_180c646d0;
  if (DAT_180c646d0 == 0) {
    UVar10 = GetTickCount64();
    if (UVar10 < DAT_180c646b0) {
      iVar9 = 0;
    }
    else {
      local_840 = (longlong *)&DAT_1808eed50;
      iVar9 = FUN_1805f68d0(&DAT_1808eed50);
      if (iVar9 != 0) goto LAB_180249197;
      if (DAT_1808eed9c == 0x7fffffff) {
        DAT_1808eed9c = 0x7ffffffe;
        goto LAB_1802491ac;
      }
      if ((DAT_180c646d0 == 0) && (DAT_180c646b0 <= UVar10)) {
        DAT_180c646d0 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c646d0 == 0) {
          DAT_180c646b0 = UVar10 + 1000;
        }
        else {
          DAT_180c646b0 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c646d0;
      FUN_1805f68fc(&DAT_1808eed50);
    }
  }
  puVar13 = *(undefined8 **)((longlong)iVar9 + param_3[1]);
  if (puVar13 == (undefined8 *)0x0) {
    local_730 = auVar38._0_4_;
    auVar25 = vunpcklps_avx(auVar38._0_16_,auVar38._0_16_);
    local_738 = auVar25._0_8_;
  }
  else {
    iVar9 = DAT_180c646c0;
    if (DAT_180c646c0 == 0) {
      UVar10 = GetTickCount64();
      if (UVar10 < DAT_180c646b8) {
        local_738 = *puVar13;
        local_730 = *(float *)(puVar13 + 1);
        goto LAB_180247956;
      }
      local_840 = (longlong *)&DAT_1808eecb0;
      iVar9 = FUN_1805f68d0(&DAT_1808eecb0);
      if (iVar9 != 0) {
LAB_180249197:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808eecfc == 0x7fffffff) {
        DAT_1808eecfc = 0x7ffffffe;
LAB_1802491ac:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c646c0 == 0) && (DAT_180c646b8 <= UVar10)) {
        DAT_180c646c0 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c646c0 == 0) {
          DAT_180c646b8 = UVar10 + 1000;
        }
        else {
          DAT_180c646b8 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c646c0;
      FUN_1805f68fc(&DAT_1808eecb0);
    }
    local_738 = *(undefined8 *)((longlong)iVar9 + (longlong)puVar13);
    local_730 = *(float *)((longlong)iVar9 + 8 + (longlong)puVar13);
  }
LAB_180247956:
  local_700 = (undefined1  [16])0x0;
  local_6f0 = 0;
  local_7f0 = 1;
  if ((cVar6 == '\0') || (DAT_180cada28 != '\0')) {
    puVar11 = (undefined8 *)FUN_1803d44c0(1,local_758,1);
    bVar5 = false;
    bVar4 = true;
    local_700._0_8_ = *puVar11;
  }
  else {
    local_7b8 = (undefined1  [16])0x0;
    local_700._0_8_ = 0;
    local_7a8 = 0;
    puVar11 = (undefined8 *)local_7b8;
    bVar5 = true;
    bVar4 = false;
  }
  uVar34 = puVar11[2];
  puVar11[2] = 0;
  uVar36 = puVar11[1];
  puVar11[1] = 0;
  *puVar11 = 0;
  local_700._8_8_ = uVar36;
  local_6f0 = uVar34;
  if (bVar4) {
    FUN_1801abba0(local_758);
  }
  if (bVar5) {
    FUN_1801abba0(local_7b8);
  }
  iVar9 = DAT_180c646a0;
  if (DAT_180c646a0 == 0) {
    UVar10 = GetTickCount64();
    if (UVar10 < DAT_180c646a8) {
      iVar9 = 0;
    }
    else {
      local_840 = (longlong *)&DAT_1808eed00;
      iVar9 = FUN_1805f68d0(&DAT_1808eed00);
      if (iVar9 != 0) goto LAB_18024918c;
      if (DAT_1808eed4c == 0x7fffffff) {
        DAT_1808eed4c = 0x7ffffffe;
        goto LAB_180249242;
      }
      if ((DAT_180c646a0 == 0) && (DAT_180c646a8 <= UVar10)) {
        DAT_180c646a0 = FUN_1804174b0("C_BaseModelEntity");
        if (DAT_180c646a0 == 0) {
          DAT_180c646a8 = UVar10 + 1000;
        }
        else {
          DAT_180c646a8 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c646a0;
      FUN_1805f68fc(&DAT_1808eed00);
    }
  }
  uVar16 = *(ulonglong *)((longlong)iVar9 + param_3[1]);
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar16;
  fVar23 = local_730 + *(float *)((ulonglong *)((longlong)iVar9 + param_3[1]) + 1);
  auVar25 = vshufps_avx(auVar25,auVar25,0x55);
  fVar31 = auVar25._0_4_ + local_738._4_4_;
  local_7b8._0_8_ = uVar16;
  fVar24 = (float)uVar16 + (float)local_738;
  local_710 = fVar24;
  local_70c = fVar31;
  local_708 = fVar23;
  if (((puVar13 != (undefined8 *)0x0) &&
      (sVar8 = thunk_FUN_180624430(local_738._4_4_ * local_738._4_4_ +
                                   (float)local_738 * (float)local_738 + local_730 * local_730),
      sVar8 < 1)) &&
     (sVar8 = thunk_FUN_180624430(fVar31 * fVar31 + fVar24 * fVar24 + fVar23 * fVar23), sVar8 < 1))
  {
    if (DAT_180cada28 != '\0') {
      iVar9 = DAT_180c64698;
      if (DAT_180c64698 == 0) {
        UVar10 = GetTickCount64();
        if (UVar10 < DAT_180c64690) {
          iVar9 = 0;
        }
        else {
          local_840 = (longlong *)&DAT_1808eec60;
          iVar9 = FUN_1805f68d0(&DAT_1808eec60);
          if (iVar9 != 0) goto LAB_18024918c;
          if (DAT_1808eecac == 0x7fffffff) {
            DAT_1808eecac = 0x7ffffffe;
            goto LAB_180249242;
          }
          if ((DAT_180c64698 == 0) && (DAT_180c64690 <= UVar10)) {
            DAT_180c64698 = FUN_1804174b0("C_BaseModelEntity");
            if (DAT_180c64698 == 0) {
              DAT_180c64690 = UVar10 + 1000;
            }
            else {
              DAT_180c64690 = 0xffffffffffffffff;
            }
          }
          iVar9 = DAT_180c64698;
          FUN_1805f68fc(&DAT_1808eec60);
        }
      }
      lVar19 = (longlong)iVar9 + param_3[1];
      iVar9 = DAT_180c6469c;
      if (DAT_180c6469c == 0) {
        UVar10 = GetTickCount64();
        if (UVar10 < DAT_180c64678) {
          iVar9 = 0;
        }
        else {
          local_840 = (longlong *)&DAT_1808eec10;
          iVar9 = FUN_1805f68d0(&DAT_1808eec10);
          if (iVar9 != 0) goto LAB_18024918c;
          if (DAT_1808eec5c == 0x7fffffff) {
            DAT_1808eec5c = 0x7ffffffe;
            goto LAB_180249242;
          }
          if ((DAT_180c6469c == 0) && (DAT_180c64678 <= UVar10)) {
            DAT_180c6469c = FUN_1804174b0("CCollisionProperty");
            if (DAT_180c6469c == 0) {
              DAT_180c64678 = UVar10 + 1000;
            }
            else {
              DAT_180c64678 = 0xffffffffffffffff;
            }
          }
          iVar9 = DAT_180c6469c;
          FUN_1805f68fc(&DAT_1808eec10);
        }
      }
      local_820 = *(undefined8 *)(iVar9 + lVar19);
      local_818 = *(undefined4 *)((longlong)iVar9 + 8 + lVar19);
      iVar9 = DAT_180c64688;
      if (DAT_180c64688 == 0) {
        UVar10 = GetTickCount64();
        if (UVar10 < DAT_180c64680) {
          iVar9 = 0;
        }
        else {
          local_840 = (longlong *)&DAT_1808eeb70;
          iVar9 = FUN_1805f68d0(&DAT_1808eeb70);
          if (iVar9 != 0) {
LAB_18024918c:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808eebbc == 0x7fffffff) {
            DAT_1808eebbc = 0x7ffffffe;
LAB_180249242:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c64688 == 0) && (DAT_180c64680 <= UVar10)) {
            DAT_180c64688 = FUN_1804174b0("CCollisionProperty");
            if (DAT_180c64688 == 0) {
              DAT_180c64680 = UVar10 + 1000;
            }
            else {
              DAT_180c64680 = 0xffffffffffffffff;
            }
          }
          iVar9 = DAT_180c64688;
          FUN_1805f68fc(&DAT_1808eeb70);
        }
      }
      local_810 = *(undefined8 *)(iVar9 + lVar19);
      local_808 = *(undefined4 *)((longlong)iVar9 + 8 + lVar19);
      local_840 = (longlong *)local_700._8_8_;
      if (local_700._0_8_ != local_700._8_8_) {
        fVar23 = 57.295776;
        plVar21 = (longlong *)local_700._0_8_;
        do {
          if ((*plVar21 != 0) && (*plVar21 != *param_3)) {
            iVar17 = 0;
            iVar9 = DAT_180c64668;
            if (DAT_180c64668 == 0) {
              UVar10 = GetTickCount64();
              if (UVar10 < DAT_180c64670) {
                iVar9 = iVar17;
              }
              else {
                local_858 = -1.3125212e-38;
                uStack_854 = 1;
                iVar9 = FUN_1805f68d0(&DAT_1808eebc0);
                if (iVar9 != 0) goto LAB_18024918c;
                if (DAT_1808eec0c == 0x7fffffff) {
                  DAT_1808eec0c = 0x7ffffffe;
                  goto LAB_180249242;
                }
                if ((DAT_180c64668 == 0) && (DAT_180c64670 <= UVar10)) {
                  DAT_180c64668 = FUN_1804174b0("CCSPlayerController");
                  DAT_180c64670 = 0xffffffffffffffff;
                  if (DAT_180c64668 == 0) {
                    DAT_180c64670 = UVar10 + 1000;
                  }
                }
                iVar9 = DAT_180c64668;
                FUN_1805f68fc(&DAT_1808eebc0);
              }
            }
            if (*(char *)((longlong)iVar9 + *plVar21) != '\0') {
              if ((DAT_180c64660 == 0) && (UVar10 = GetTickCount64(), DAT_180c64658 <= UVar10)) {
                local_858 = -1.3124987e-38;
                uStack_854 = 1;
                iVar9 = FUN_1805f68d0(&DAT_1808eeb20);
                if (iVar9 != 0) goto LAB_18024918c;
                if (DAT_1808eeb6c == 0x7fffffff) {
                  DAT_1808eeb6c = 0x7ffffffe;
                  goto LAB_180249242;
                }
                if ((DAT_180c64660 == 0) && (DAT_180c64658 <= UVar10)) {
                  DAT_180c64660 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
                  DAT_180c64658 = 0xffffffffffffffff;
                  if (DAT_180c64660 == 0) {
                    DAT_180c64658 = UVar10 + 1000;
                  }
                }
                FUN_1805f68fc(&DAT_1808eeb20);
              }
              lVar19 = FUN_1803d4150();
              if ((lVar19 != 0) && (lVar19 != param_3[1])) {
                iVar9 = DAT_180c64664;
                if (DAT_180c64664 == 0) {
                  UVar10 = GetTickCount64();
                  if (UVar10 < DAT_180c64640) {
                    iVar9 = iVar17;
                  }
                  else {
                    local_858 = -1.3124875e-38;
                    uStack_854 = 1;
                    iVar9 = FUN_1805f68d0(&DAT_1808eead0);
                    if (iVar9 != 0) goto LAB_18024918c;
                    if (DAT_1808eeb1c == 0x7fffffff) {
                      DAT_1808eeb1c = 0x7ffffffe;
                      goto LAB_180249242;
                    }
                    if ((DAT_180c64664 == 0) && (DAT_180c64640 <= UVar10)) {
                      DAT_180c64664 = FUN_1804174b0("C_BaseEntity");
                      DAT_180c64640 = 0xffffffffffffffff;
                      if (DAT_180c64664 == 0) {
                        DAT_180c64640 = UVar10 + 1000;
                      }
                    }
                    iVar9 = DAT_180c64664;
                    FUN_1805f68fc(&DAT_1808eead0);
                  }
                }
                if ((*(char *)((longlong)param_3 + 0x29) == '\0') ||
                   (*(uint *)((longlong)param_3 + 0x24) != (uint)*(byte *)(iVar9 + lVar19))) {
                  iVar9 = DAT_180c64650;
                  if (DAT_180c64650 == 0) {
                    UVar10 = GetTickCount64();
                    if (UVar10 < DAT_180c64648) {
                      iVar9 = iVar17;
                    }
                    else {
                      local_858 = -1.3124651e-38;
                      uStack_854 = 1;
                      iVar9 = FUN_1805f68d0(&DAT_1808eea30);
                      if (iVar9 != 0) goto LAB_18024918c;
                      if (DAT_1808eea7c == 0x7fffffff) {
                        DAT_1808eea7c = 0x7ffffffe;
                        goto LAB_180249242;
                      }
                      if ((DAT_180c64650 == 0) && (DAT_180c64648 <= UVar10)) {
                        DAT_180c64650 = FUN_1804174b0("C_BaseEntity");
                        DAT_180c64648 = 0xffffffffffffffff;
                        if (DAT_180c64650 == 0) {
                          DAT_180c64648 = UVar10 + 1000;
                        }
                      }
                      iVar9 = DAT_180c64650;
                      FUN_1805f68fc(&DAT_1808eea30);
                    }
                  }
                  if (0 < *(int *)(iVar9 + lVar19)) {
                    iVar9 = DAT_180c64630;
                    if (DAT_180c64630 == 0) {
                      UVar10 = GetTickCount64();
                      if (UVar10 < DAT_180c64638) {
                        iVar9 = iVar17;
                      }
                      else {
                        local_858 = -1.3124763e-38;
                        uStack_854 = 1;
                        iVar9 = FUN_1805f68d0(&DAT_1808eea80);
                        if (iVar9 != 0) goto LAB_18024918c;
                        if (DAT_1808eeacc == 0x7fffffff) {
                          DAT_1808eeacc = 0x7ffffffe;
                          goto LAB_180249242;
                        }
                        if ((DAT_180c64630 == 0) && (DAT_180c64638 <= UVar10)) {
                          DAT_180c64630 = FUN_1804174b0("C_BaseEntity");
                          DAT_180c64638 = 0xffffffffffffffff;
                          if (DAT_180c64630 == 0) {
                            DAT_180c64638 = UVar10 + 1000;
                          }
                        }
                        iVar9 = DAT_180c64630;
                        FUN_1805f68fc(&DAT_1808eea80);
                      }
                    }
                    iVar17 = DAT_180c64628;
                    lVar15 = *(longlong *)(iVar9 + lVar19);
                    if (lVar15 != 0) {
                      if ((DAT_180c64628 == 0) &&
                         (UVar10 = GetTickCount64(), DAT_180c64620 <= UVar10)) {
                        local_858 = -1.3124539e-38;
                        uStack_854 = 1;
                        iVar9 = FUN_1805f68d0(&DAT_1808ee9e0);
                        if (iVar9 != 0) goto LAB_18024918c;
                        if (DAT_1808eea2c == 0x7fffffff) {
                          DAT_1808eea2c = 0x7ffffffe;
                          goto LAB_180249242;
                        }
                        if ((DAT_180c64628 == 0) && (DAT_180c64620 <= UVar10)) {
                          DAT_180c64628 = FUN_1804174b0("CGameSceneNode");
                          DAT_180c64620 = 0xffffffffffffffff;
                          if (DAT_180c64628 == 0) {
                            DAT_180c64620 = UVar10 + 1000;
                          }
                        }
                        iVar17 = DAT_180c64628;
                        FUN_1805f68fc(&DAT_1808ee9e0);
                      }
                      pfVar14 = (float *)(iVar17 + lVar15);
                      fVar28 = *pfVar14;
                      uVar34 = *(undefined8 *)pfVar14;
                      local_7b8._0_8_ = uVar34;
                      auVar25 = local_7b8;
                      fVar24 = fVar28 - (float)local_738;
                      auVar35 = ZEXT464((uint)fVar24);
                      local_7b8._4_4_ = SUB84((ulonglong)uVar34 >> 0x20,0);
                      fVar30 = (float)local_7b8._4_4_ - local_738._4_4_;
                      auVar37 = ZEXT464((uint)fVar30);
                      fVar31 = *(float *)((longlong)iVar17 + 8 + lVar15);
                      auVar29 = ZEXT464((uint)(fVar30 * fVar30 + fVar24 * fVar24 +
                                              (fVar31 - local_730) * (fVar31 - local_730)));
                      iVar9 = DAT_180c6462c;
                      fVar24 = (float)local_7b8._4_4_;
                      if (DAT_180c6462c == 0) {
                        local_7b8 = auVar25;
                        UVar10 = GetTickCount64();
                        if (DAT_180c64608 <= UVar10) {
                          local_858 = -1.3124427e-38;
                          uStack_854 = 1;
                          iVar9 = FUN_1805f68d0(&DAT_1808ee990);
                          if (iVar9 != 0) goto LAB_18024918c;
                          if (DAT_1808ee9dc != 0x7fffffff) {
                            if ((DAT_180c6462c == 0) && (DAT_180c64608 <= UVar10)) {
                              DAT_180c6462c = FUN_1804174b0("C_BaseModelEntity");
                              DAT_180c64608 = 0xffffffffffffffff;
                              if (DAT_180c6462c == 0) {
                                DAT_180c64608 = UVar10 + 1000;
                              }
                            }
                            iVar9 = DAT_180c6462c;
                            FUN_1805f68fc(&DAT_1808ee990);
                            auVar25 = local_7b8;
                            goto LAB_18024832b;
                          }
                          DAT_1808ee9dc = 0x7ffffffe;
                          goto LAB_180249242;
                        }
                        iVar9 = 0;
                      }
                      else {
LAB_18024832b:
                        local_7b8 = auVar25;
                      }
                      uVar16 = *(ulonglong *)(iVar9 + lVar19);
                      auVar26._8_8_ = 0;
                      auVar26._0_8_ = uVar16;
                      local_858 = (float)uVar16;
                      local_800[0] = local_858 + fVar28;
                      auVar25 = vshufps_avx(auVar26,auVar26,0x55);
                      uStack_854 = (undefined4)(uVar16 >> 0x20);
                      local_800[1] = auVar25._0_4_ + fVar24;
                      local_800[2] = fVar31 + *(float *)((longlong)iVar9 + 8 + lVar19);
                      local_7e8[0] = (float)local_738;
                      local_7e8[1] = local_738._4_4_;
                      local_7e8[2] = local_730;
                      local_7d8[0] = (float)local_820;
                      local_7d8[1] = (float)local_820._4_4_;
                      local_7d8[2] = (float)local_818;
                      local_7c8[0] = (float)local_810;
                      local_7c8[1] = (float)local_810._4_4_;
                      local_7c8[2] = (float)local_808;
                      auVar32 = ZEXT1664(auVar38._0_16_);
                      uVar16 = 0;
                      lVar15 = 0;
                      do {
                        fVar31 = *(float *)((longlong)local_800 + lVar15);
                        sVar8 = thunk_FUN_180624430(fVar31);
                        if (0 < sVar8) {
LAB_180248484:
                          auVar32 = ZEXT464(0x7f800000);
                          break;
                        }
                        fVar24 = *(float *)((longlong)local_7e8 + lVar15);
                        sVar8 = thunk_FUN_180624430(fVar24);
                        if (0 < sVar8) goto LAB_180248484;
                        fVar30 = *(float *)((longlong)local_7d8 + lVar15);
                        sVar8 = thunk_FUN_180624430(fVar30);
                        if (0 < sVar8) goto LAB_180248484;
                        fVar28 = *(float *)((longlong)local_7c8 + lVar15);
                        sVar8 = thunk_FUN_180624430(fVar28);
                        if ((0 < sVar8) || (fVar28 <= fVar30)) goto LAB_180248484;
                        local_858 = fVar28 + fVar24;
                        local_860[0] = fVar30 + fVar24;
                        pfVar14 = local_860;
                        if (fVar30 + fVar24 <= fVar31) {
                          pfVar14 = local_800 + uVar16;
                        }
                        pfVar12 = &local_858;
                        if (fVar31 <= fVar28 + fVar24) {
                          pfVar12 = pfVar14;
                        }
                        auVar32 = ZEXT464((uint)(auVar32._0_4_ +
                                                (fVar31 - *pfVar12) * (fVar31 - *pfVar12)));
                        uVar18 = (int)uVar16 + 1;
                        uVar16 = (ulonglong)uVar18;
                        lVar15 = lVar15 + 4;
                      } while ((int)uVar18 < 3);
                      sVar8 = thunk_FUN_180624430(auVar29._0_8_);
                      if (((sVar8 < 1) && (sVar8 = thunk_FUN_180624430(auVar32._0_8_), sVar8 < 1))
                         && (auVar29._0_4_ <= 122500.0)) {
                        iVar9 = DAT_180c64618;
                        if (DAT_180c64618 == 0) {
                          UVar10 = GetTickCount64();
                          if (UVar10 < DAT_180c64610) {
                            iVar9 = 0;
                          }
                          else {
                            local_858 = -1.3124203e-38;
                            uStack_854 = 1;
                            iVar9 = FUN_1805f68d0(&DAT_1808ee8f0);
                            if (iVar9 != 0) goto LAB_18024918c;
                            if (DAT_1808ee93c == 0x7fffffff) {
                              DAT_1808ee93c = 0x7ffffffe;
                              goto LAB_180249242;
                            }
                            if ((DAT_180c64618 == 0) && (DAT_180c64610 <= UVar10)) {
                              DAT_180c64618 = FUN_1804174b0("C_BasePlayerPawn");
                              DAT_180c64610 = 0xffffffffffffffff;
                              if (DAT_180c64618 == 0) {
                                DAT_180c64610 = UVar10 + 1000;
                              }
                            }
                            iVar9 = DAT_180c64618;
                            FUN_1805f68fc(&DAT_1808ee8f0);
                          }
                        }
                        iVar17 = DAT_180c645f8;
                        lVar15 = *(longlong *)(iVar9 + lVar19);
                        if (lVar15 != 0) {
                          if ((DAT_180c645f8 == 0) &&
                             (UVar10 = GetTickCount64(), DAT_180c64600 <= UVar10)) {
                            local_858 = -1.3124315e-38;
                            uStack_854 = 1;
                            iVar9 = FUN_1805f68d0(&DAT_1808ee940);
                            if (iVar9 != 0) goto LAB_18024918c;
                            if (DAT_1808ee98c == 0x7fffffff) {
                              DAT_1808ee98c = 0x7ffffffe;
                              goto LAB_180249242;
                            }
                            if ((DAT_180c645f8 == 0) && (DAT_180c64600 <= UVar10)) {
                              DAT_180c645f8 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
                              DAT_180c64600 = 0xffffffffffffffff;
                              if (DAT_180c645f8 == 0) {
                                DAT_180c64600 = UVar10 + 1000;
                              }
                            }
                            iVar17 = DAT_180c645f8;
                            FUN_1805f68fc(&DAT_1808ee940);
                          }
                          if (*(int *)(iVar17 + lVar15) != 0) {
                            lVar15 = FUN_1803d4150();
                            iVar9 = DAT_180c645f0;
                            if (lVar15 != 0) {
                              if ((DAT_180c645f0 == 0) &&
                                 (UVar10 = GetTickCount64(), DAT_180c645e8 <= UVar10)) {
                                local_858 = -1.312409e-38;
                                uStack_854 = 1;
                                iVar9 = FUN_1805f68d0(&DAT_1808ee8a0);
                                if (iVar9 != 0) goto LAB_18024918c;
                                if (DAT_1808ee8ec == 0x7fffffff) {
                                  DAT_1808ee8ec = 0x7ffffffe;
                                  goto LAB_180249242;
                                }
                                if ((DAT_180c645f0 == 0) && (DAT_180c645e8 <= UVar10)) {
                                  DAT_180c645f0 = FUN_1804174b0("C_BaseEntity");
                                  DAT_180c645e8 = 0xffffffffffffffff;
                                  if (DAT_180c645f0 == 0) {
                                    DAT_180c645e8 = UVar10 + 1000;
                                  }
                                }
                                iVar9 = DAT_180c645f0;
                                FUN_1805f68fc(&DAT_1808ee8a0);
                              }
                              iVar17 = DAT_180c645f4;
                              uVar34 = auVar35._0_8_;
                              uVar36 = auVar37._0_8_;
                              uVar22 = auVar32._0_4_;
                              uVar33 = auVar29._0_4_;
                              lVar15 = *(longlong *)((longlong)iVar9 + 8 + lVar15);
                              if (lVar15 != 0) {
                                if (DAT_180c645f4 == 0) {
                                  UVar10 = GetTickCount64();
                                  uVar34 = auVar35._0_8_;
                                  uVar36 = auVar37._0_8_;
                                  uVar22 = auVar32._0_4_;
                                  uVar33 = auVar29._0_4_;
                                  if (DAT_180c645d0 <= UVar10) {
                                    local_858 = -1.3123978e-38;
                                    uStack_854 = 1;
                                    iVar9 = FUN_1805f68d0(&DAT_1808ee850);
                                    if (iVar9 != 0) goto LAB_18024918c;
                                    if (DAT_1808ee89c == 0x7fffffff) {
                                      DAT_1808ee89c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                                      FUN_1805f6d44(6);
                                    }
                                    if ((DAT_180c645f4 == 0) && (DAT_180c645d0 <= UVar10)) {
                                      DAT_180c645f4 = FUN_1804174b0("CCSWeaponBaseVData");
                                      DAT_180c645d0 = 0xffffffffffffffff;
                                      if (DAT_180c645f4 == 0) {
                                        DAT_180c645d0 = UVar10 + 1000;
                                      }
                                    }
                                    iVar17 = DAT_180c645f4;
                                    FUN_1805f68fc(&DAT_1808ee850);
                                    uVar34 = auVar35._0_8_;
                                    uVar36 = auVar37._0_8_;
                                    uVar22 = auVar32._0_4_;
                                    uVar33 = auVar29._0_4_;
                                  }
                                }
                                if (*(int *)(iVar17 + lVar15) == 0) {
                                  local_858 = (float)lVar19;
                                  uStack_854 = (undefined4)((ulonglong)lVar19 >> 0x20);
                                  uStack_850 = uVar33;
                                  uStack_84c = uVar22;
                                  local_848 = (float)FUN_180636c80(uVar36,uVar34);
                                  local_848 = local_848 * fVar23;
                                  if ((undefined1 (*) [16])local_728._8_8_ == local_718) {
                                    FUN_180251140(local_728);
                                  }
                                  else {
                                    auVar3._4_4_ = uStack_854;
                                    auVar3._0_4_ = local_858;
                                    auVar3._8_4_ = uStack_850;
                                    auVar3._12_4_ = uStack_84c;
                                    *(undefined1 (*) [16])local_728._8_8_ = auVar3;
                                    *(ulonglong *)*(undefined1 (*) [16])(local_728._8_8_ + 0x10) =
                                         CONCAT44(uStack_844,local_848);
                                    local_728._8_8_ =
                                         *(undefined1 (*) [16])(local_728._8_8_ + 0x10) + 8;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          plVar21 = plVar21 + 3;
        } while (plVar21 != local_840);
        param_2 = local_828;
      }
    }
    local_798 = local_740;
    local_790 = local_700;
    local_780 = &local_710;
    local_770 = &DAT_180cad6b8;
    local_768 = &local_738;
    local_788 = param_3;
    local_778 = param_2;
    local_760 = param_1;
    if (DAT_180cad728 == '\0') {
      puVar13 = (undefined8 *)FUN_180249270(&local_798);
      local_838 = (undefined1  [8])*puVar13;
    }
  }
  auVar7 = local_838;
  cVar6 = local_870;
  fVar23 = 3.4028235e+38;
  uVar16 = local_830;
  if (local_728._0_8_ != local_728._8_8_) {
    uVar1 = *(ulonglong *)(param_1 + 0xf8);
    fVar31 = 4356.0;
    pfVar14 = (float *)(local_728._0_8_ + 0xc);
    do {
      auVar29 = ZEXT464((uint)*pfVar14);
      fVar24 = pfVar14[-1];
      uVar2 = *(ulonglong *)(pfVar14 + -3);
      if (uVar2 != 0) {
        sVar8 = thunk_FUN_180624430(fVar24);
        if ((sVar8 < 1) && (auVar38._0_4_ <= fVar24)) {
          sVar8 = thunk_FUN_180624430(auVar29._0_8_);
          if (sVar8 < 1) {
            if ((((auVar38._0_4_ <= auVar29._0_4_) && (fVar24 <= 122500.0)) &&
                ((cVar6 != '\0' || ((uVar2 == uVar1 || (auVar29._0_4_ <= fVar31)))))) &&
               ((fVar24 < fVar23 ||
                ((fVar24 == fVar23 && (uVar2 < *(ulonglong *)(param_1 + 0x100))))))) {
              *(ulonglong *)(param_1 + 0x100) = uVar2;
              fVar30 = *pfVar14;
              fVar23 = fVar24;
              if (fVar30 < 0.0) {
                local_878[0] = (float)FUN_18061e150(fVar30);
              }
              else {
                local_878[0] = SQRT(fVar30);
              }
              local_858 = pfVar14[1];
              uStack_854 = CONCAT31(uStack_854._1_3_,1);
              uVar16 = CONCAT44(uStack_854,local_858);
              local_830 = uVar16;
            }
          }
        }
      }
      pfVar12 = pfVar14 + 3;
      pfVar14 = pfVar14 + 6;
    } while (pfVar12 != (float *)local_728._8_8_);
  }
  local_840 = (longlong *)auVar7;
  local_828 = uVar16;
  if ((char)(uVar16 >> 0x20) == '\0') {
    auVar25 = vpcmpeqd_avx(ZEXT416(auVar7._4_4_ & 0xff),SUB6416(ZEXT464(0),0));
    local_840._0_4_ = auVar7._0_4_;
    auVar25 = vblendvps_avx(ZEXT416((uint)local_840),ZEXT416((uint)local_740[0]),auVar25);
    fVar31 = 180.0;
    fVar23 = auVar25._0_4_ + 180.0;
    auVar29 = ZEXT464((uint)fVar23);
    sVar8 = thunk_FUN_180624430(fVar23);
    auVar35 = ZEXT464(0x43b40000);
    if (sVar8 < 1) {
      auVar29._0_8_ = FUN_180615070(auVar29._0_8_,auVar35._0_8_);
      auVar29._8_56_ = extraout_var_00;
      auVar29 = ZEXT1664(auVar29._0_16_);
    }
    else {
      auVar29 = ZEXT1664(auVar38._0_16_);
    }
  }
  else {
    local_828._0_4_ = (uint)uVar16;
    auVar29 = ZEXT464((uint)local_828);
    sVar8 = thunk_FUN_180624430(uVar16 & 0xffffffff);
    auVar35 = ZEXT464(0x43b40000);
    if (sVar8 < 1) {
      auVar37._0_8_ = FUN_180615070(auVar29._0_8_,auVar35._0_8_);
      auVar37._8_56_ = extraout_var;
      auVar29 = ZEXT1664(auVar37._0_16_);
      fVar31 = 180.0;
    }
    else {
      auVar29 = ZEXT1664(auVar38._0_16_);
      fVar31 = 180.0;
    }
  }
  iVar9 = *(int *)(param_1 + 200);
  cVar6 = local_830._4_1_;
  if (local_830._4_1_ == '\0') {
    if (iVar9 < 0) {
      fVar23 = (float)FUN_1800b4f90(iVar9,DAT_180cad950);
    }
    else if (iVar9 < 1) {
      fVar23 = auVar38._0_4_;
    }
    else {
      fVar23 = (float)FUN_1800b4f90(iVar9,DAT_180cad954);
    }
    fVar23 = auVar29._0_4_ + fVar23 + auVar38._0_4_ + -0.0 + auVar38._0_4_;
    auVar37 = ZEXT464((uint)fVar23);
    sVar8 = thunk_FUN_180624430(fVar23);
    if (0 < sVar8) goto LAB_180248ae7;
    uVar22 = FUN_180615070(auVar37._0_8_,auVar35._0_8_);
  }
  else {
    sVar8 = thunk_FUN_180624430(auVar29._0_8_);
    if (sVar8 < 1) {
      uVar22 = FUN_180615070(auVar29._0_8_,auVar35._0_8_);
    }
    else {
LAB_180248ae7:
      uVar22 = auVar38._0_4_;
    }
  }
  *(undefined4 *)(param_1 + 0xd0) = uVar22;
  if ((DAT_180cad730 == '\0') || (*(char *)(param_1 + 0xdd) == '\0')) {
    *(undefined1 *)(param_1 + 0xdc) = 0;
    cVar20 = '\0';
  }
  else {
    cVar20 = *(char *)(param_1 + 0xdc);
  }
  lVar19 = DAT_180b0dfb0;
  if ((DAT_180b0dfb0 == 0) || (*(longlong *)(DAT_180b0dfb0 + 8) == *(longlong *)(param_1 + 0xf0))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if ((DAT_180cad730 != '\0') && (bVar4)) {
    *(bool *)(param_1 + 0xdc) = cVar20 == '\0';
  }
  *(char *)(param_1 + 0xdd) = DAT_180cad730;
  if ((DAT_180cad7a0 == '\0') || (*(char *)(param_1 + 0xde) == '\0')) {
    *(undefined4 *)(param_1 + 0xd8) = 0;
    auVar25 = auVar38._0_16_;
  }
  else {
    auVar25 = ZEXT416(*(uint *)(param_1 + 0xd8));
  }
  auVar37 = ZEXT1664(auVar25);
  if ((DAT_180cad7a0 == '\0') || (!bVar4)) goto LAB_180248ca6;
  if ((*(char *)(param_1 + 0xde) == '\0') ||
     ((lVar15 = *(longlong *)(param_1 + 0xf0), lVar15 < 0 || (*(longlong *)(lVar19 + 8) <= lVar15)))
     ) {
    lVar15 = 1;
  }
  else {
    lVar15 = *(longlong *)(lVar19 + 8) - lVar15;
    if (0x40 < lVar15) {
      lVar15 = 0x40;
    }
  }
  fVar23 = (float)lVar15 * 0.015625;
  sVar8 = thunk_FUN_180624430(fVar23);
  if ((0 < sVar8) || (fVar23 <= auVar38._0_4_)) {
    sVar8 = thunk_FUN_180624430(auVar37._0_8_);
    if (0 < sVar8) goto LAB_180248c91;
    uVar22 = FUN_180615070(auVar37._0_8_,auVar35._0_8_);
  }
  else {
    fVar24 = (float)FUN_1800b4ef0(DAT_180cad808,0x3f800000,0xc0a00000,0x40a00000);
    fVar23 = fVar24 * auVar35._0_4_ * fVar23 + auVar37._0_4_;
    auVar37 = ZEXT464((uint)fVar23);
    sVar8 = thunk_FUN_180624430(fVar23);
    if (sVar8 < 1) {
      uVar22 = FUN_180615070(auVar37._0_8_,auVar35._0_8_);
    }
    else {
LAB_180248c91:
      uVar22 = auVar38._0_4_;
    }
  }
  *(undefined4 *)(param_1 + 0xd8) = uVar22;
LAB_180248ca6:
  uVar34 = auVar29._0_8_;
  *(char *)(param_1 + 0xde) = DAT_180cad7a0;
  if (lVar19 != 0) {
    *(undefined8 *)(param_1 + 0xf0) = *(undefined8 *)(lVar19 + 8);
  }
  if (DAT_180cad730 != '\0') {
    local_860[0] = DAT_180cad798;
    local_868[0] = fVar31;
    local_858 = auVar38._0_4_;
    thunk_FUN_180624430(DAT_180cad798);
    uVar34 = auVar29._0_8_;
  }
  FUN_180244e40(uVar34,*(undefined4 *)(param_1 + 200),DAT_180cad950,DAT_180cad954);
  UVar10 = GetTickCount64();
  if (DAT_180c64570 <= UVar10) {
    DAT_180c64570 = UVar10 + 500;
    if ((cVar6 == '\0') || (*(int *)(param_1 + 200) == 0)) {
      local_7f0 = local_7f0 & 0xffffffff00000000;
    }
    auVar27._0_8_ = -(ulonglong)(*(longlong *)(param_1 + 0x100) == 0);
    auVar27._8_8_ = 0xffffffffffffffff;
    vblendvps_avx(ZEXT416((uint)local_878[0]),SUB6416(ZEXT464(0xbf800000),0),auVar27);
    auVar25 = vpcmpeqd_avx(ZEXT116(local_838[4]),SUB6416(ZEXT464(0),0));
    vblendvps_avx(ZEXT416((uint)local_838._0_4_),ZEXT416((uint)local_740[0]),auVar25);
    auVar29 = ZEXT464((uint)DAT_180cad954);
    local_860[0] = DAT_180cad954;
    sVar8 = thunk_FUN_180624430(DAT_180cad954);
    if ((sVar8 < 1) && (auVar38._0_4_ < auVar29._0_4_ * 90.0)) {
      local_878[0] = 105.0;
      local_858 = 75.0;
    }
    auVar29 = ZEXT464((uint)DAT_180cad950);
    local_860[0] = DAT_180cad950;
    sVar8 = thunk_FUN_180624430(DAT_180cad950);
    if ((sVar8 < 1) && (auVar38._0_4_ < auVar29._0_4_ * -90.0)) {
      local_878[0] = -75.0;
      local_858 = -105.0;
    }
    FUN_18063ab10(local_6e8,0,0x600);
    FUN_18015ad60(local_6e8,0x600,0xffffffffffffffff,
                  "command=%lld mode=%u target_selection=%d target=0x%llx camera_yaw=%.3f base_yaw=%.3f chosen_yaw=%.3f side=%d jitter=%d jitter_amount=%.3f jitter_side=%d spin=%d spin_angle=%.3f alignment=%.3f knife_override=0x%llx target_metric=%.3f left_degrees=%.3f right_degrees=%.3f spin_rps=%.3f target_yaw=%.3f yaw_source=%s knife_contact_distance=%.3f knife_awareness=350 unrelated_contact_reach=66 knife_protection=%d manual_suppressed=%d"
                 );
    FUN_1800f6900(0);
  }
  FUN_1801abba0(local_700);
  if (local_728._0_8_ != 0) {
    lVar19 = local_728._0_8_;
    if ((0xfff < (ulonglong)((((longlong)local_718 - local_728._0_8_) / 0x18) * 0x18)) &&
       (lVar19 = *(longlong *)(local_728._0_8_ + -8), 0x1f < (local_728._0_8_ - lVar19) - 8U)) {
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    FUN_1804547d0(lVar19);
  }
}



