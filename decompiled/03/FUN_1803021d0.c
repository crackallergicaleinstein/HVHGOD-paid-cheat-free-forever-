// FUN_1803021d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803021d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803021d0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  undefined8 *puVar11;
  float *pfVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  float *pfVar15;
  undefined **ppuVar16;
  longlong lVar17;
  int iVar18;
  ulonglong uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  uint uVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  float fVar33;
  undefined1 auVar34 [64];
  undefined8 uVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auStack_3c8 [32];
  undefined **local_3a8;
  longlong local_3a0;
  float local_388;
  float local_384;
  float local_380 [6];
  undefined8 local_368;
  longlong lStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *local_348;
  undefined4 local_340;
  undefined8 local_33c;
  undefined4 local_334;
  undefined8 local_328;
  undefined8 uStack_320;
  longlong local_318;
  undefined8 local_308 [16];
  float local_284;
  float local_280;
  float local_278;
  float local_274;
  undefined8 local_1f8 [18];
  float local_168;
  float local_164;
  uint local_160;
  float local_14c;
  char local_13d;
  undefined8 local_e8;
  float local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_3c8;
  _DAT_180b8fe80 = _DAT_180b8fe80 & 0xff00;
  if ((((param_2 != 0) && (DAT_180cc8960 != '\0')) && (DAT_180b900c0 == '\0')) &&
     (DAT_180b8fc30 == '\0')) {
    local_318 = param_2;
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_368 = _DAT_180bb8890;
    lStack_360 = lRam0000000180bb8898;
    uStack_358 = uRam0000000180bb88a0;
    uStack_350 = uRam0000000180bb88a8;
    local_328 = _DAT_180bb88b0;
    uStack_320 = uRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    lVar10 = lStack_360;
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
    iVar8 = DAT_180c6f1f4;
    lVar17 = 0;
    if (*(longlong *)(param_2 + 0x40) != 0) {
      lVar17 = *(longlong *)(param_2 + 0x40) + 0x10;
    }
    if ((lStack_360 != 0) && (lVar17 != 0)) {
      uVar19 = 0xffffffffffffffff;
      if ((DAT_180c6f1f4 == 0) && (UVar9 = GetTickCount64(), DAT_180c6f1f8 <= UVar9)) {
        local_348 = &DAT_1808ff1d0;
        iVar8 = FUN_1805f68d0(&DAT_1808ff1d0);
        if (iVar8 != 0) goto LAB_180302ff9;
        if (DAT_1808ff21c == 0x7fffffff) {
          DAT_1808ff21c = 0x7ffffffe;
          goto LAB_18030300e;
        }
        if ((DAT_180c6f1f4 == 0) && (DAT_180c6f1f8 <= UVar9)) {
          DAT_180c6f1f4 = FUN_1804174b0("C_BaseEntity",0xa4a37590);
          if (DAT_180c6f1f4 == 0) {
            DAT_180c6f1f8 = UVar9 + 1000;
          }
          else {
            DAT_180c6f1f8 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c6f1f4;
        FUN_1805f68fc(&DAT_1808ff1d0);
      }
      iVar18 = DAT_180c6f1e0;
      uVar27 = *(uint *)(iVar8 + lVar10);
      if ((DAT_180c6f1e0 == 0) && (UVar9 = GetTickCount64(), DAT_180c6f1e8 <= UVar9)) {
        local_348 = &DAT_1808ff130;
        iVar8 = FUN_1805f68d0(&DAT_1808ff130);
        if (iVar8 != 0) goto LAB_180302ff9;
        if (DAT_1808ff17c == 0x7fffffff) {
          DAT_1808ff17c = 0x7ffffffe;
          goto LAB_18030300e;
        }
        if ((DAT_180c6f1e0 == 0) && (DAT_180c6f1e8 <= UVar9)) {
          DAT_180c6f1e0 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
          if (DAT_180c6f1e0 == 0) {
            DAT_180c6f1e8 = UVar9 + 1000;
          }
          else {
            DAT_180c6f1e8 = 0xffffffffffffffff;
          }
        }
        iVar18 = DAT_180c6f1e0;
        FUN_1805f68fc(&DAT_1808ff130);
      }
      iVar8 = DAT_180c6f1f0;
      if (((uVar27 & 1) != 0) || ((*(char *)(iVar18 + lVar10) - 7U & 0xfd) == 0)) {
        _DAT_180b8fe80 = _DAT_180b8fe80 & 0xff;
        _DAT_180b8fe83 = 0;
        _DAT_180b8fe88 = 0;
      }
      if ((DAT_180c6f1f0 == 0) && (UVar9 = GetTickCount64(), DAT_180c6f1c8 <= UVar9)) {
        local_348 = &DAT_1808ff0e0;
        iVar8 = FUN_1805f68d0(&DAT_1808ff0e0);
        if (iVar8 != 0) goto LAB_180302ff9;
        if (DAT_1808ff12c == 0x7fffffff) {
          DAT_1808ff12c = 0x7ffffffe;
          goto LAB_18030300e;
        }
        if ((DAT_180c6f1f0 == 0) && (DAT_180c6f1c8 <= UVar9)) {
          DAT_180c6f1f0 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
          if (DAT_180c6f1f0 == 0) {
            DAT_180c6f1c8 = UVar9 + 1000;
          }
          else {
            DAT_180c6f1c8 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c6f1f0;
        FUN_1805f68fc(&DAT_1808ff0e0);
      }
      iVar18 = DAT_180c6f1d0;
      lVar17 = *(longlong *)(iVar8 + lVar10);
      if (lVar17 != 0) {
        if (DAT_180b8e111 == '\0') {
          if ((DAT_180c6f1d0 == 0) && (UVar9 = GetTickCount64(), DAT_180c6f1d8 <= UVar9)) {
            local_348 = &DAT_1808ff040;
            iVar8 = FUN_1805f68d0(&DAT_1808ff040);
            if (iVar8 != 0) goto LAB_180302ff9;
            if (DAT_1808ff08c == 0x7fffffff) {
              DAT_1808ff08c = 0x7ffffffe;
              goto LAB_18030300e;
            }
            if ((DAT_180c6f1d0 == 0) && (DAT_180c6f1d8 <= UVar9)) {
              DAT_180c6f1d0 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
              if (DAT_180c6f1d0 == 0) {
                DAT_180c6f1d8 = UVar9 + 1000;
              }
              else {
                DAT_180c6f1d8 = 0xffffffffffffffff;
              }
            }
            iVar18 = DAT_180c6f1d0;
            FUN_1805f68fc(&DAT_1808ff040);
          }
          local_368 = *(char **)(iVar18 + lVar10);
          fVar22 = *(float *)((longlong)iVar18 + 8 + lVar10);
        }
        else {
          fVar22 = DAT_180b8e17c;
          local_368 = DAT_180b8e174;
        }
        iVar8 = DAT_180c6f1b8;
        local_e8 = DAT_180b8e168;
        local_e0 = DAT_180b8e170;
        if ((DAT_180c6f1b8 == 0) && (UVar9 = GetTickCount64(), DAT_180c6f1c0 <= UVar9)) {
          local_348 = &DAT_1808ff090;
          iVar8 = FUN_1805f68d0(&DAT_1808ff090);
          if (iVar8 != 0) goto LAB_180302ff9;
          if (DAT_1808ff0dc == 0x7fffffff) {
            DAT_1808ff0dc = 0x7ffffffe;
            goto LAB_18030300e;
          }
          if ((DAT_180c6f1b8 == 0) && (DAT_180c6f1c0 <= UVar9)) {
            DAT_180c6f1b8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
            if (DAT_180c6f1b8 == 0) {
              DAT_180c6f1c0 = UVar9 + 1000;
            }
            else {
              DAT_180c6f1c0 = 0xffffffffffffffff;
            }
          }
          iVar8 = DAT_180c6f1b8;
          FUN_1805f68fc(&DAT_1808ff090);
        }
        iVar18 = DAT_180c6f1a8;
        lVar2 = *(longlong *)(iVar8 + lVar10);
        if (lVar2 == 0) {
          auVar25 = ZEXT416((uint)local_e8._4_4_);
        }
        else {
          if ((DAT_180c6f1a8 == 0) && (UVar9 = GetTickCount64(), DAT_180c6f1b0 <= UVar9)) {
            local_348 = &DAT_1808feff0;
            iVar8 = FUN_1805f68d0(&DAT_1808feff0);
            if (iVar8 != 0) {
LAB_180302ff9:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808ff03c == 0x7fffffff) {
              DAT_1808ff03c = 0x7ffffffe;
LAB_18030300e:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c6f1a8 == 0) && (DAT_180c6f1b0 <= UVar9)) {
              DAT_180c6f1a8 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
              if (DAT_180c6f1a8 == 0) {
                uVar19 = UVar9 + 1000;
              }
              DAT_180c6f1b0 = uVar19;
            }
            iVar18 = DAT_180c6f1a8;
            FUN_1805f68fc(&DAT_1808feff0);
          }
          local_348 = *(undefined **)(iVar18 + lVar2);
          auVar25._8_8_ = 0;
          auVar25._0_8_ = local_348;
          local_e0 = *(float *)((longlong)iVar18 + 8 + lVar2);
          auVar25 = vshufps_avx(auVar25,auVar25,0x55);
          local_e8 = CONCAT44(auVar25._0_4_,(int)local_348);
        }
        auVar30 = ZEXT1664(auVar25);
        auVar32 = ZEXT464((uint)local_e0);
        sVar7 = thunk_FUN_180624430();
        if (((sVar7 < 1) && (sVar7 = thunk_FUN_180624430(auVar30._0_8_), sVar7 < 1)) &&
           (sVar7 = thunk_FUN_180624430(auVar32._0_8_), sVar7 < 1)) {
          fVar20 = (float)local_368;
          sVar7 = thunk_FUN_180624430((ulonglong)local_368 & 0xffffffff);
          if (sVar7 < 1) {
            fVar21 = local_368._4_4_;
            sVar7 = thunk_FUN_180624430(local_368._4_4_);
            if ((sVar7 < 1) && (sVar7 = thunk_FUN_180624430(fVar22), sVar7 < 1)) {
              local_388 = fVar21 * fVar21 + fVar20 * fVar20;
              auVar30 = ZEXT864(0);
              if (local_388 != 0.0) {
                if (local_388 < 0.0) {
                  local_388 = (float)FUN_18061e150(local_388);
                }
                else {
                  local_388 = SQRT(local_388);
                }
                if ((5.0 <= local_388) &&
                   (lVar10 = FUN_1803032c0(lVar10,lVar17), *(char *)(lVar10 + 0x48) != '\0')) {
                  local_284 = auVar30._0_4_;
                  auVar32 = ZEXT464(0x41a80000);
                  bVar5 = false;
                  iVar8 = 0;
                  auVar38 = ZEXT464(0x41a00000);
                  auVar34 = ZEXT464(0x3f800000);
                  auVar41 = ZEXT464(0x3d23d70a);
                  auVar40 = ZEXT464(0x3e4ccccd);
                  uVar35 = 0x7fffffff7fffffff;
                  local_280 = local_284;
                  local_278 = local_284;
                  local_274 = local_284;
                  do {
                    auVar32 = ZEXT1664(auVar32._0_16_);
                    auVar34 = ZEXT1664(auVar34._0_16_);
                    auVar38 = ZEXT1664(auVar38._0_16_);
                    auVar30 = ZEXT1664(auVar30._0_16_);
                    auVar40 = ZEXT1664(auVar40._0_16_);
                    auVar41 = ZEXT1664(auVar41._0_16_);
                    cVar6 = FUN_180303860(1);
                    auVar31 = auVar34._0_16_;
                    auVar25 = auVar32._0_16_;
                    auVar37 = auVar30._0_16_;
                    if (cVar6 == '\0') break;
                    fVar20 = (float)iVar8 * 360.0 * 0.03125 * 0.017453292;
                    auVar28 = ZEXT464((uint)fVar20);
                    local_348 = *(undefined **)(lVar10 + 0x18);
                    local_340 = *(undefined4 *)(lVar10 + 0x20);
                    local_33c = *(undefined8 *)(lVar10 + 0x24);
                    local_334 = *(undefined4 *)(lVar10 + 0x2c);
                    fVar20 = (float)FUN_180637540(fVar20);
                    local_368 = (char *)CONCAT44(local_368._4_4_,
                                                 fVar20 * auVar38._0_4_ + (float)local_e8);
                    uVar24 = FUN_180638e00(auVar28._0_8_);
                    local_368 = (char *)CONCAT44((float)uVar24 * auVar38._0_4_ + local_e8._4_4_,
                                                 (float)local_368);
                    lStack_360 = CONCAT44(lStack_360._4_4_,auVar30._0_4_ + local_e0);
                    local_3a0 = lVar10 + 0x30;
                    local_3a8 = &local_348;
                    FUN_180419610(uVar24,local_1f8,&local_e8,&local_368);
                    auVar28 = ZEXT464((uint)(local_14c * auVar38._0_4_));
                    if (local_13d == '\0') {
                      fVar20 = local_14c;
                      sVar7 = thunk_FUN_180624430(local_14c);
                      if ((((sVar7 < 1) && (auVar30._0_4_ <= fVar20)) && (fVar20 < auVar34._0_4_))
                         && (((auVar29 = ZEXT464((uint)local_164),
                              auVar41._0_4_ < local_168 * local_168 + local_164 * local_164 &&
                              (sVar7 = thunk_FUN_180624430(), sVar7 < 1)) &&
                             (sVar7 = thunk_FUN_180624430(auVar29._0_8_), sVar7 < 1)))) {
                        uVar27 = local_160;
                        sVar7 = thunk_FUN_180624430(local_160);
                        if (((sVar7 < 1) && ((float)(uVar27 & (uint)uVar35) < auVar40._0_4_)) &&
                           (auVar28._0_4_ < auVar32._0_4_)) {
                          puVar11 = local_1f8;
                          lVar17 = 2;
                          puVar14 = local_308;
                          do {
                            uVar24 = puVar11[1];
                            uVar3 = puVar11[2];
                            uVar4 = puVar11[3];
                            *puVar14 = *puVar11;
                            puVar14[1] = uVar24;
                            puVar14[2] = uVar3;
                            puVar14[3] = uVar4;
                            uVar24 = puVar11[5];
                            uVar3 = puVar11[6];
                            uVar4 = puVar11[7];
                            puVar14[4] = puVar11[4];
                            puVar14[5] = uVar24;
                            puVar14[6] = uVar3;
                            puVar14[7] = uVar4;
                            uVar24 = puVar11[9];
                            uVar3 = puVar11[10];
                            uVar4 = puVar11[0xb];
                            puVar14[8] = puVar11[8];
                            puVar14[9] = uVar24;
                            puVar14[10] = uVar3;
                            puVar14[0xb] = uVar4;
                            uVar24 = puVar11[0xd];
                            puVar14[0xc] = puVar11[0xc];
                            puVar14[0xd] = uVar24;
                            puVar1 = puVar14 + 0x10;
                            uVar24 = puVar11[0xf];
                            puVar14[0xe] = puVar11[0xe];
                            puVar14[0xf] = uVar24;
                            puVar11 = puVar11 + 0x10;
                            lVar17 = lVar17 + -1;
                            puVar14 = puVar1;
                          } while (lVar17 != 0);
                          *puVar1 = *puVar11;
                          auVar32 = ZEXT1664(auVar28._0_16_);
                          bVar5 = true;
                        }
                      }
                    }
                    auVar31 = auVar34._0_16_;
                    auVar25 = auVar32._0_16_;
                    auVar37 = auVar30._0_16_;
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < 0x20);
                  fVar20 = auVar31._0_4_;
                  if ((bVar5) && (auVar39 = SUB6416(ZEXT464(0x40000000),0), auVar25._0_4_ <= 2.0)) {
                    auVar26 = ZEXT416((uint)local_278);
                    fVar21 = local_274 * local_274 + local_278 * local_278;
                    fVar23 = local_274;
                    fVar33 = local_278;
                    if (fVar21 != auVar37._0_4_) {
                      if (fVar21 < 0.0) {
                        auVar30 = ZEXT1664(ZEXT416((uint)local_278));
                        auVar32 = ZEXT1664(auVar25);
                        auVar34 = ZEXT1664(auVar31);
                        auVar38 = ZEXT1664(auVar37);
                        auVar40 = ZEXT1664(auVar39);
                        auVar41 = ZEXT1664(ZEXT416((uint)local_278));
                        fVar21 = (float)FUN_18061e150();
                        fVar20 = auVar34._0_4_;
                        fVar33 = auVar30._0_4_;
                        auVar26 = auVar41._0_16_;
                        auVar39 = auVar40._0_16_;
                        auVar25 = auVar32._0_16_;
                        auVar37 = auVar38._0_16_;
                      }
                      else {
                        fVar21 = SQRT(fVar21);
                        auVar26 = ZEXT416((uint)local_278);
                        fVar33 = local_278;
                      }
                      if (auVar37._0_4_ < fVar21) {
                        fVar23 = fVar23 * (fVar20 / fVar21);
                        fVar33 = fVar33 * (fVar20 / fVar21);
                      }
                    }
                    DAT_180b8fea0 = fVar33;
                    fVar21 = local_388;
                    if ((fVar22 < -7.0) || (-6.0 < fVar22)) {
                      bVar5 = false;
                    }
                    else {
                      bVar5 = true;
                    }
                    auVar31 = SUB6416(ZEXT464(0x42652ee0),0);
                    DAT_180b8fea4 = fVar23;
                    if (local_388 < 60.0) {
                      fVar22 = 10.0;
                    }
                    else {
                      local_348 = (undefined *)CONCAT44(local_348._4_4_,fVar20);
                      local_388 = -1.0;
                      local_384 = 27.866333 / fVar21;
                      auVar30 = ZEXT1664(auVar25);
                      auVar32 = ZEXT1664(auVar37);
                      auVar34 = ZEXT1664(auVar31);
                      auVar38 = ZEXT1664(auVar39);
                      auVar40 = ZEXT1664(auVar26);
                      fVar22 = (float)FUN_180636a60();
                      auVar26 = auVar40._0_16_;
                      auVar39 = auVar38._0_16_;
                      auVar31 = auVar34._0_16_;
                      auVar37 = auVar32._0_16_;
                      auVar25 = auVar30._0_16_;
                      fVar22 = fVar22 * auVar34._0_4_;
                    }
                    if (!bVar5) {
                      fVar22 = -fVar22;
                    }
                    auVar34 = ZEXT1664(auVar25);
                    auVar40 = ZEXT1664(auVar37);
                    auVar41 = ZEXT1664(auVar31);
                    auVar28 = ZEXT1664(auVar39);
                    auVar29 = ZEXT1664(auVar26);
                    fVar21 = DAT_180b0dfc8._4_4_;
                    fVar20 = (float)FUN_180636c80();
                    fVar20 = fVar20 * auVar41._0_4_ + 90.0;
                    auVar32 = ZEXT464((uint)fVar20);
                    fVar20 = fVar20 + 180.0;
                    auVar38 = ZEXT464((uint)fVar20);
                    fVar20 = fVar20 - fVar21;
                    auVar30 = ZEXT464((uint)fVar20);
                    sVar7 = thunk_FUN_180624430(fVar20);
                    if (sVar7 < 1) {
                      auVar30._0_8_ = FUN_180615070(auVar30._0_8_,0x43b40000);
                      auVar30._8_56_ = extraout_var;
                      auVar25 = auVar30._0_16_;
                    }
                    else {
                      auVar25 = auVar40._0_16_;
                    }
                    auVar30 = ZEXT1664(CONCAT412(auVar25._12_4_ & 0x7fffffff,
                                                 CONCAT48(auVar25._8_4_ & 0x7fffffff,
                                                          auVar25._0_8_ & 0x7fffffff7fffffff)));
                    fVar21 = auVar32._0_4_ - fVar21;
                    auVar36 = ZEXT464((uint)fVar21);
                    sVar7 = thunk_FUN_180624430(fVar21);
                    auVar37 = auVar38._0_16_;
                    auVar31 = auVar32._0_16_;
                    auVar25 = auVar30._0_16_;
                    if (sVar7 < 1) {
                      auVar36._0_8_ = FUN_180615070(auVar36._0_8_,0x43b40000);
                      auVar37 = auVar38._0_16_;
                      auVar31 = auVar32._0_16_;
                      auVar25 = auVar30._0_16_;
                      auVar36._8_56_ = extraout_var_00;
                      auVar39 = auVar36._0_16_;
                    }
                    else {
                      auVar39 = auVar40._0_16_;
                    }
                    uVar27 = 0x7fffffff;
                    auVar26._0_8_ = auVar39._0_8_ & 0x7fffffff7fffffff;
                    auVar26._8_4_ = auVar39._8_4_ & 0x7fffffff;
                    auVar26._12_4_ = auVar39._12_4_ & 0x7fffffff;
                    auVar25 = vcmpss_avx(auVar25,auVar26,1);
                    auVar25 = vblendvps_avx(auVar31,auVar37,auVar25);
                    auVar30 = ZEXT1664(auVar25);
                    sVar7 = thunk_FUN_180624430(auVar25._0_8_);
                    fVar20 = auVar34._0_4_;
                    local_380[2] = auVar28._0_4_;
                    auVar32 = ZEXT464(0x43b40000);
                    if (sVar7 < 1) {
                      fVar21 = (float)FUN_180615070(auVar30._0_8_,auVar32._0_8_);
                      fVar20 = auVar34._0_4_;
                      local_380[2] = auVar28._0_4_;
                    }
                    else {
                      fVar21 = auVar40._0_4_;
                    }
                    local_388 = 0.11;
                    local_348 = (undefined *)CONCAT44(local_348._4_4_,0x3cf5c28f);
                    local_380[0] = -2.0;
                    local_380[1] = (fVar20 - 0.03125) * 0.75;
                    pfVar15 = local_380;
                    if (-2.0 <= local_380[1]) {
                      pfVar15 = local_380 + 1;
                    }
                    pfVar12 = local_380 + 2;
                    if (local_380[1] <= local_380[2]) {
                      pfVar12 = pfVar15;
                    }
                    local_384 = *pfVar12 * 0.01 + 0.08;
                    ppuVar16 = &local_348;
                    if (0.03 <= local_384) {
                      ppuVar16 = (undefined **)&local_384;
                    }
                    ppuVar13 = (undefined **)&local_388;
                    if (local_384 <= 0.11) {
                      ppuVar13 = ppuVar16;
                    }
                    fVar20 = *(float *)ppuVar13;
                    fVar23 = 0.017453292;
                    fVar22 = (fVar22 + fVar21) * 0.017453292;
                    auVar30 = ZEXT464((uint)fVar22);
                    fVar22 = (float)FUN_180638e00(fVar22);
                    auVar34 = ZEXT464((uint)(fVar22 - fVar20 * DAT_180b8fea4));
                    fVar22 = (float)FUN_180637540(auVar30._0_8_);
                    fVar22 = (float)FUN_180636c80(auVar34._0_8_,fVar22 - fVar20 * DAT_180b8fea0);
                    fVar22 = fVar22 * auVar41._0_4_;
                    auVar30 = ZEXT464((uint)fVar22);
                    sVar7 = thunk_FUN_180624430(fVar22);
                    if (sVar7 < 1) {
                      auVar32._0_8_ = FUN_180615070(auVar30._0_8_,auVar32._0_8_);
                      auVar32._8_56_ = extraout_var_01;
                      auVar25 = auVar32._0_16_;
                    }
                    else {
                      auVar25 = auVar40._0_16_;
                    }
                    fVar22 = auVar29._0_4_;
                    auVar30 = ZEXT1664(auVar25);
                    DAT_180b8fe9c = auVar25._0_4_;
                    _DAT_180b8fe80 = 0x101;
                    if ((bVar5) && (DAT_180b8fe83 == '\0')) {
                      _DAT_180b8fe83 = CONCAT11(DAT_180b8fe84,1);
                      local_368 = "[texturebug] hit";
                      lStack_360 = 0x10;
                      FUN_18020e620(&local_368);
                      fVar22 = auVar29._0_4_;
                      auVar30 = ZEXT464(DAT_180b8fe9c);
                    }
                    auVar25 = vmaxss_avx(ZEXT416(*(uint *)(lVar10 + 0x28) & uVar27),
                                         ZEXT416(*(uint *)(lVar10 + 0x1c) & uVar27));
                    auVar31 = vmaxss_avx(ZEXT416(*(uint *)(lVar10 + 0x24) & uVar27),
                                         ZEXT416(*(uint *)(lVar10 + 0x18) & uVar27));
                    fVar20 = auVar25._0_4_ * (float)((uint)local_274 & uVar27) +
                             auVar31._0_4_ * (float)((uint)fVar22 & uVar27);
                    fVar21 = local_284 - fVar20 * fVar22;
                    fVar33 = local_280 - fVar20 * local_274;
                    fVar22 = local_e0 + 5.0;
                    fVar23 = auVar30._0_4_ * fVar23;
                    auVar32 = ZEXT464((uint)fVar23);
                    fVar20 = (float)FUN_180637540(fVar23);
                    fVar20 = fVar20 * 28.0;
                    fVar23 = (float)FUN_180638e00(auVar32._0_8_);
                    _DAT_180b8feb0 = fVar21 - fVar20;
                    _DAT_180b8feb4 = fVar33 - fVar23 * 28.0;
                    _DAT_180b8feb8 = fVar22 - auVar40._0_4_;
                    _DAT_180b8febc = fVar20 + fVar21;
                    _DAT_180b8fec0 = fVar23 * 28.0 + fVar33;
                    _DAT_180b8fec4 = fVar22 + auVar40._0_4_;
                    _DAT_180b8fe83 = CONCAT11(1,DAT_180b8fe83);
                    cVar6 = FUN_180301bc0(local_318,auVar30._0_8_);
                    if (cVar6 != '\0') {
                    }
                    _DAT_180b8fe80 = 0;
                    goto LAB_180302f73;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  _DAT_180b8fe80 = _DAT_180b8fe80 & 0xff;
LAB_180302f73:
  _DAT_180b8fe83 = _DAT_180b8fe83 & 0xff;
  _DAT_180b8fe88 = 0;
}



