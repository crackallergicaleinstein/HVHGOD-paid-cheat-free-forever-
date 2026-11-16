// FUN_1802b75e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b75e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802b75e0(undefined8 param_1,undefined *param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  float *pfVar13;
  float *pfVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined *puVar17;
  char *pcVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  float fVar26;
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auVar29 [64];
  float fVar30;
  undefined1 auVar31 [64];
  float fVar32;
  uint uVar33;
  undefined4 uVar34;
  undefined1 auStack_798 [32];
  undefined **local_778;
  char *local_770;
  longlong local_768;
  undefined8 local_760;
  undefined4 local_748;
  undefined8 local_740;
  float local_738;
  undefined **local_730;
  longlong *local_728;
  float local_720;
  float local_71c;
  float local_718;
  longlong local_710;
  undefined *local_708;
  float local_700;
  float local_6fc;
  float local_6f8;
  undefined8 local_6f0;
  float local_6e8;
  char local_6d8 [172];
  uint local_62c;
  byte local_61d;
  char local_5d0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_798;
  if (DAT_180b0cc88 == '\0') {
  }
  local_730 = &local_708;
  local_728 = &local_710;
  local_710 = param_3;
  local_708 = param_2;
  if ((param_2 == (undefined *)0x0) || (param_3 == 0)) {
    pcVar18 = "input";
    uVar15 = 1;
    goto LAB_1802b8184;
  }
  iVar8 = DAT_180c6e6c8;
  if (DAT_180c6e6c8 == 0) {
    UVar11 = GetTickCount64();
    if (DAT_180c6e6d0 <= UVar11) {
      local_740 = &DAT_1808f4f00;
      iVar8 = FUN_1805f68d0(&DAT_1808f4f00);
      if (iVar8 != 0) goto LAB_1802b81fb;
      if (DAT_1808f4f4c == 0x7fffffff) {
        DAT_1808f4f4c = 0x7ffffffe;
        goto LAB_1802b8210;
      }
      if ((DAT_180c6e6c8 == 0) && (DAT_180c6e6d0 <= UVar11)) {
        DAT_180c6e6c8 = FUN_1804174b0("C_CSPlayerPawn",0xf3e9a9ed);
        if (DAT_180c6e6c8 == 0) {
          DAT_180c6e6d0 = UVar11 + 1000;
        }
        else {
          DAT_180c6e6d0 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c6e6c8;
      FUN_1805f68fc(&DAT_1808f4f00);
      if (iVar8 != 0) goto LAB_1802b7740;
    }
    local_748._0_2_ = (ushort)(byte)local_748;
  }
  else {
LAB_1802b7740:
    lVar16 = iVar8 + local_710;
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    if (lVar16 == 0) {
LAB_1802b7780:
      local_748._0_2_ = (ushort)(byte)local_748;
    }
    else {
      local_748 = (float)((uint)local_748 & 0xffffff00);
      cVar6 = FUN_1804514f0(&local_748,lVar16,1);
      if (cVar6 == '\0') goto LAB_1802b7780;
      local_748._0_2_ = CONCAT11(1,(byte)local_748);
    }
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
  }
  if (DAT_180b0cc88 == '\0') {
  }
  if (DAT_180b0c858 == '\0') {
    if ((char)((uint)local_748 >> 8) == '\0') {
    }
    if (SUB41(local_748,0) != '\0') {
    }
  }
  iVar8 = DAT_180c6e6d8;
  if (DAT_180c6e6d8 == 0) {
    UVar11 = GetTickCount64();
    if (UVar11 < DAT_180c6e6b0) {
      iVar8 = 0;
    }
    else {
      local_740 = &DAT_1808f4eb0;
      iVar8 = FUN_1805f68d0(&DAT_1808f4eb0);
      if (iVar8 != 0) goto LAB_1802b81fb;
      if (DAT_1808f4efc == 0x7fffffff) {
        DAT_1808f4efc = 0x7ffffffe;
        goto LAB_1802b8210;
      }
      if ((DAT_180c6e6d8 == 0) && (DAT_180c6e6b0 <= UVar11)) {
        DAT_180c6e6d8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c6e6d8 == 0) {
          DAT_180c6e6b0 = UVar11 + 1000;
        }
        else {
          DAT_180c6e6b0 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c6e6d8;
      FUN_1805f68fc(&DAT_1808f4eb0);
    }
  }
  iVar9 = DAT_180c6e6b8;
  if (DAT_180c6e6b8 == 0) {
    UVar11 = GetTickCount64();
    if (UVar11 < DAT_180c6e6c0) {
      iVar9 = 0;
    }
    else {
      local_740 = &DAT_1808f4e10;
      iVar9 = FUN_1805f68d0(&DAT_1808f4e10);
      if (iVar9 != 0) goto LAB_1802b81fb;
      if (DAT_1808f4e5c == 0x7fffffff) {
        DAT_1808f4e5c = 0x7ffffffe;
        goto LAB_1802b8210;
      }
      if ((DAT_180c6e6b8 == 0) && (DAT_180c6e6c0 <= UVar11)) {
        DAT_180c6e6b8 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c6e6b8 == 0) {
          DAT_180c6e6c0 = UVar11 + 1000;
        }
        else {
          DAT_180c6e6c0 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c6e6b8;
      FUN_1805f68fc(&DAT_1808f4e10);
    }
  }
  iVar10 = DAT_180c6e6a0;
  if (DAT_180c6e6a0 == 0) {
    UVar11 = GetTickCount64();
    if (UVar11 < DAT_180c6e6a8) {
      iVar10 = 0;
    }
    else {
      local_740 = &DAT_1808f4e60;
      iVar10 = FUN_1805f68d0(&DAT_1808f4e60);
      if (iVar10 != 0) {
LAB_1802b81fb:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f4eac == 0x7fffffff) {
        DAT_1808f4eac = 0x7ffffffe;
LAB_1802b8210:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6e6a0 == 0) && (DAT_180c6e6a8 <= UVar11)) {
        DAT_180c6e6a0 = FUN_1804174b0("C_BaseModelEntity",0x39db834b);
        if (DAT_180c6e6a0 == 0) {
          DAT_180c6e6a8 = UVar11 + 1000;
        }
        else {
          DAT_180c6e6a8 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c6e6a0;
      FUN_1805f68fc(&DAT_1808f4e60);
    }
  }
  if (((iVar8 == 0) || (iVar9 == 0)) || (iVar10 == 0)) {
    pcVar18 = "schema";
    uVar15 = 2;
    goto LAB_1802b8184;
  }
  lVar16 = iVar8 + local_710;
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  if (lVar16 == 0) {
    bVar3 = false;
    puVar17 = local_708;
  }
  else {
    local_740 = (undefined *)0x0;
    cVar6 = FUN_1804514f0(&local_740,lVar16,8);
    if (cVar6 == '\0') {
      bVar3 = false;
      puVar17 = local_708;
    }
    else {
      bVar3 = true;
      puVar17 = local_740;
    }
  }
  lVar12 = FUN_18017ea70();
  if (*(int *)(lVar12 + 4) != 0) {
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
  }
  if ((!bVar3) || (puVar17 == (undefined *)0x0)) {
    pcVar18 = "scene_node";
    uVar15 = 4;
    goto LAB_1802b8184;
  }
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  auVar25 = ZEXT864(0);
  if (puVar17 + iVar9 == (undefined *)0x0) {
LAB_1802b7a7d:
    bVar3 = false;
    fVar26 = local_748;
    fVar21 = local_748;
    fVar20 = local_748;
  }
  else {
    local_740 = (undefined *)0x0;
    local_738 = 0.0;
    cVar6 = FUN_1804514f0(&local_740,puVar17 + iVar9,0xc);
    if (cVar6 == '\0') goto LAB_1802b7a7d;
    bVar3 = true;
    fVar26 = (float)local_740;
    fVar21 = local_740._4_4_;
    fVar20 = local_738;
  }
  auVar31 = ZEXT464((uint)fVar20);
  auVar29 = ZEXT464((uint)fVar21);
  auVar27 = ZEXT464((uint)fVar26);
  lVar12 = FUN_18017ea70();
  if (*(int *)(lVar12 + 4) != 0) {
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
  }
  lVar16 = iVar10 + local_710;
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  if (lVar16 == 0) {
LAB_1802b7af7:
    bVar4 = false;
    fVar21 = local_748;
    fVar20 = local_748;
    fVar26 = local_748;
  }
  else {
    local_738 = auVar25._0_4_;
    local_740 = (undefined *)CONCAT44(local_738,local_738);
    cVar6 = FUN_1804514f0(&local_740,lVar16,0xc);
    if (cVar6 == '\0') goto LAB_1802b7af7;
    bVar4 = true;
    fVar21 = (float)local_740;
    fVar20 = local_740._4_4_;
    fVar26 = local_738;
  }
  auVar24 = ZEXT464((uint)fVar26);
  auVar23 = ZEXT464((uint)fVar20);
  auVar22 = ZEXT464((uint)fVar21);
  lVar12 = FUN_18017ea70();
  if (*(int *)(lVar12 + 4) != 0) {
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
  }
  if (((!bVar3) || (!bVar4)) ||
     ((sVar7 = thunk_FUN_180624430(auVar27._0_8_), 0 < sVar7 ||
      ((((sVar7 = thunk_FUN_180624430(auVar29._0_8_), 0 < sVar7 ||
         (sVar7 = thunk_FUN_180624430(auVar31._0_8_), 0 < sVar7)) ||
        (sVar7 = thunk_FUN_180624430(auVar22._0_8_), 0 < sVar7)) ||
       ((sVar7 = thunk_FUN_180624430(auVar23._0_8_), 0 < sVar7 ||
        (sVar7 = thunk_FUN_180624430(auVar24._0_8_), 0 < sVar7)))))))) {
    pcVar18 = "eye_position";
    uVar15 = 8;
    goto LAB_1802b8184;
  }
  auVar22 = ZEXT464((uint)(auVar22._0_4_ + auVar27._0_4_));
  auVar29 = ZEXT464((uint)(auVar23._0_4_ + auVar29._0_4_));
  auVar27 = ZEXT464((uint)(auVar24._0_4_ + auVar31._0_4_));
  FUN_1803dff30(extraout_XMM0_Qa,&local_740);
  sVar7 = thunk_FUN_180624430(auVar22._0_8_);
  if (((sVar7 < 1) && (sVar7 = thunk_FUN_180624430(auVar29._0_8_), sVar7 < 1)) &&
     (sVar7 = thunk_FUN_180624430(auVar27._0_8_), sVar7 < 1)) {
    fVar21 = (float)local_740;
    sVar7 = thunk_FUN_180624430((ulonglong)local_740 & 0xffffffff);
    if (sVar7 < 1) {
      fVar20 = local_740._4_4_;
      sVar7 = thunk_FUN_180624430(local_740._4_4_);
      if (sVar7 < 1) {
        sVar7 = thunk_FUN_180624430(local_738);
        puVar17 = local_708;
        if (sVar7 < 1) {
          lVar12 = FUN_18017ea70();
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
          bVar3 = false;
          if (puVar17 + 0x4a0 != (undefined *)0x0) {
            local_738 = auVar25._0_4_;
            local_740 = (undefined *)CONCAT44(local_738,local_738);
            cVar6 = FUN_1804514f0(&local_740,puVar17 + 0x4a0,0xc);
            if (cVar6 == '\0') {
              bVar3 = false;
            }
            else {
              local_6f0 = local_740;
              local_6e8 = local_738;
              bVar3 = true;
            }
          }
          lVar12 = FUN_18017ea70();
          if (*(int *)(lVar12 + 4) != 0) {
            *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
          }
          if (bVar3) {
            fVar26 = (float)local_6f0;
            sVar7 = thunk_FUN_180624430((ulonglong)local_6f0 & 0xffffffff);
            if (sVar7 < 1) {
              fVar28 = local_6f0._4_4_;
              sVar7 = thunk_FUN_180624430(local_6f0._4_4_);
              if (sVar7 < 1) {
                fVar30 = local_6e8;
                sVar7 = thunk_FUN_180624430(local_6e8);
                if (sVar7 < 1) {
                  fVar19 = fVar26 - auVar22._0_4_;
                  fVar32 = fVar28 - auVar29._0_4_;
                  fVar2 = fVar30 - auVar27._0_4_;
                  fVar19 = fVar32 * fVar32 + fVar19 * fVar19 + fVar2 * fVar2;
                  if (fVar19 != auVar25._0_4_) {
                    if (fVar19 < 0.0) {
                      fVar19 = (float)FUN_18061e150(fVar19);
                    }
                    else {
                      fVar19 = SQRT(fVar19);
                    }
                    if (2048.0 < fVar19) goto LAB_1802b8132;
                  }
                  auVar29 = ZEXT464((uint)(fVar21 * 0.017453292));
                  auVar27 = ZEXT464((uint)(fVar20 * 0.017453292));
                  local_700 = fVar26;
                  local_6fc = fVar28;
                  local_6f8 = fVar30;
                  fVar20 = (float)FUN_180637540(fVar21 * 0.017453292);
                  fVar21 = (float)FUN_180637540(auVar27._0_8_);
                  auVar31 = ZEXT464((uint)(fVar21 * fVar20));
                  fVar21 = (float)FUN_180638e00(auVar27._0_8_);
                  fVar21 = fVar21 * fVar20;
                  fVar20 = (float)FUN_180638e00(auVar29._0_8_);
                  uVar33 = 0x80000000;
                  uVar34 = 0;
                  fVar20 = -fVar20;
                  sVar7 = thunk_FUN_180624430(auVar31._0_8_);
                  if (((sVar7 < 1) && (((uint)fVar21 & 0x7f800000) != 0x7f800000)) &&
                     (((uint)fVar20 & 0x7f800000) != 0x7f800000)) {
                    local_740 = (undefined *)CONCAT44(local_740._4_4_,0x43fa0000);
                    fVar19 = auVar25._0_4_;
                    local_748 = fVar19;
                    pfVar14 = (float *)&local_748;
                    if (fVar19 <= DAT_180b0ccf0) {
                      pfVar14 = &DAT_180b0ccf0;
                    }
                    pfVar13 = (float *)&local_740;
                    if (DAT_180b0ccf0 <= 500.0) {
                      pfVar13 = pfVar14;
                    }
                    fVar32 = *pfVar13;
                    local_748 = 64.0;
                    local_740 = (undefined *)CONCAT44(local_740._4_4_,fVar19);
                    pfVar14 = (float *)&local_740;
                    if (fVar19 <= DAT_180b0ccf4) {
                      pfVar14 = &DAT_180b0ccf4;
                    }
                    pfVar13 = (float *)&local_748;
                    if (DAT_180b0ccf4 <= 64.0) {
                      pfVar13 = pfVar14;
                    }
                    fVar19 = *pfVar13;
                    local_720 = fVar26 - fVar32 * auVar31._0_4_;
                    local_71c = fVar28 - fVar32 * fVar21;
                    local_718 = fVar30 - fVar32 * fVar20;
                    local_6e8 = (float)((uint)fVar19 ^ uVar33);
                    local_6f0 = (undefined *)CONCAT44(local_6e8,local_6e8);
                    local_740 = (undefined *)CONCAT44(fVar19,fVar19);
                    local_760 = 0x1c3003;
                    local_768 = local_710;
                    local_770 = (char *)&local_740;
                    local_778 = (undefined **)&local_6f0;
                    local_738 = fVar19;
                    FUN_180418670(CONCAT44(uVar34,local_6e8),local_6d8,&local_700,&local_720);
                    if (local_5d0 == '\0') {
                      pcVar18 = "trace";
                      uVar15 = 0x80;
                    }
                    else {
                      auVar27 = ZEXT464(local_62c);
                      sVar7 = thunk_FUN_180624430(local_62c);
                      if (((0 < sVar7) || (auVar27._0_4_ < auVar25._0_4_)) || (1.0 < auVar27._0_4_))
                      {
                        pcVar18 = "trace_fraction";
                        uVar15 = 0x200;
                      }
                      else {
                        auVar1 = vpcmpeqd_avx(ZEXT116(local_61d),SUB6416(ZEXT464(0),0));
                        auVar1 = vblendvps_avx(auVar25._0_16_,auVar27._0_16_,auVar1);
                        fVar20 = auVar1._0_4_;
                        local_720 = (local_720 - local_700) * fVar20 + local_700;
                        fVar21 = (local_71c - local_6fc) * fVar20 + local_6fc;
                        fVar20 = (local_718 - local_6f8) * fVar20 + local_6f8;
                        local_71c = fVar21;
                        local_718 = fVar20;
                        sVar7 = thunk_FUN_180624430();
                        puVar17 = local_708;
                        if (((sVar7 < 1) && (((uint)fVar21 & 0x7f800000) != 0x7f800000)) &&
                           ((((uint)fVar20 & 0x7f800000) != 0x7f800000 &&
                            (cVar6 = FUN_1804513c0(local_708 + 0x4a0,0xc,1), cVar6 != '\0')))) {
                          lVar12 = FUN_18017ea70();
                          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
                          cVar6 = FUN_18022ffa0(puVar17 + 0x4a0,&local_720);
                          lVar12 = FUN_18017ea70();
                          if (*(int *)(lVar12 + 4) != 0) {
                            *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
                          }
                          cVar5 = DAT_180c6e690;
                          if (cVar6 != '\0') {
                            LOCK();
                            DAT_180c6e690 = 1;
                            UNLOCK();
                            if (cVar5 != '\0') {
                              DAT_180c6e690 = 1;
                            }
                            FUN_18063ab10(local_6d8,0,0x600);
                            local_770 = (char *)(double)fVar19;
                            local_778 = (undefined **)(double)fVar32;
                            local_768 = 0x4a0;
                            FUN_18015ad60(local_6d8,0x600,0xffffffffffffffff,
                                          "distance=%.1f hull=%.1f camera_offset=0x%llX");
                            local_778 = &PTR_180700558;
                            if (local_6d8[0] != '\0') {
                              local_778 = (undefined **)&DAT_1806bcfc0;
                            }
                            local_770 = local_6d8;
                            FUN_1800f6900(1,local_770,"Camera","THIRDPERSON_READY");
                          }
                        }
                        pcVar18 = "camera_write";
                        uVar15 = 0x100;
                      }
                    }
                  }
                  else {
                    pcVar18 = "forward";
                    uVar15 = 0x40;
                  }
                  goto LAB_1802b8184;
                }
              }
            }
          }
LAB_1802b8132:
          pcVar18 = "camera_layout";
          uVar15 = 0x20;
          goto LAB_1802b8184;
        }
      }
    }
  }
  pcVar18 = "view_angles";
  uVar15 = 0x10;
LAB_1802b8184:
  FUN_1802b8220(&local_730,uVar15,pcVar18);
}



