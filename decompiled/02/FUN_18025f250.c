// FUN_18025f250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18025f250 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18025f250(undefined8 param_1,undefined1 (*param_2) [16],float *param_3,float *param_4,
                  longlong param_5,longlong *param_6,longlong param_7)

{
  char cVar1;
  uint uVar2;
  undefined8 *puVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  ULONGLONG UVar7;
  float *pfVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte *pbVar11;
  byte bVar12;
  undefined *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  byte bVar16;
  uint *puVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined1 auVar23 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auStack_a18 [32];
  float local_9f8;
  longlong local_9f0;
  undefined8 local_9e8;
  char local_9d8;
  char local_9d7;
  undefined *local_9d0;
  int local_9c8;
  float local_9c4;
  longlong *local_9c0;
  undefined4 local_9b8;
  float local_9b4;
  undefined *local_9b0;
  float *local_9a8;
  undefined1 (*local_9a0) [16];
  undefined8 local_998;
  float local_988;
  float local_984;
  float local_980;
  float local_978;
  float local_974;
  uint local_970;
  float *local_968;
  longlong *local_960;
  float local_958;
  undefined4 uStack_954;
  undefined4 uStack_950;
  undefined4 uStack_94c;
  undefined4 uStack_948;
  undefined4 uStack_944;
  float fStack_940;
  float fStack_93c;
  undefined4 local_938;
  uint uStack_934;
  undefined4 uStack_930;
  uint uStack_92c;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined1 uStack_900;
  undefined1 uStack_8ff;
  byte bStack_8fe;
  undefined1 uStack_8fd;
  undefined4 uStack_8fc;
  undefined4 local_8f8;
  undefined4 uStack_8f4;
  undefined4 uStack_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  uint uStack_8dc;
  longlong local_8d8;
  undefined4 uStack_8d0;
  undefined4 uStack_8cc;
  longlong *local_8c8;
  undefined1 (*local_8b8) [16];
  undefined1 local_8b0 [24];
  undefined1 local_898 [8];
  longlong local_890;
  byte local_788 [16];
  float local_778 [2];
  uint auStack_770 [214];
  undefined1 local_418 [4];
  uint auStack_414 [199];
  uint local_f8;
  ulonglong local_e8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  
  local_88 = in_ZMM10._0_16_;
  local_98 = in_ZMM11._0_16_;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_a18;
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)*param_2 = 0;
  *(undefined8 *)(*param_2 + 8) = 0;
  *(undefined8 *)param_2[1] = 0;
  local_9b8 = 1;
  local_9a8 = param_3;
  local_9a0 = param_2;
  local_968 = param_4;
  local_8b8 = param_2;
  sVar5 = thunk_FUN_180624430(*param_3);
  if ((((((sVar5 < 1) && (sVar5 = thunk_FUN_180624430(param_3[1]), sVar5 < 1)) &&
        (sVar5 = thunk_FUN_180624430(param_3[2]), sVar5 < 1)) &&
       ((sVar5 = thunk_FUN_180624430(*param_4), sVar5 < 1 &&
        (sVar5 = thunk_FUN_180624430(param_4[1]), sVar5 < 1)))) &&
      (sVar5 = thunk_FUN_180624430(param_4[2]), sVar5 < 1)) &&
     (sVar5 = thunk_FUN_180624430(*(undefined4 *)(param_5 + 4)), sVar5 < 1)) {
    plVar15 = (longlong *)*param_6;
    local_960 = (longlong *)param_6[1];
    if (plVar15 != local_960) {
      auVar34 = ZEXT464(0x3f000000);
      auVar33 = ZEXT864(0);
      auVar32 = ZEXT464(0x3c8efa35);
      auVar35 = ZEXT464(0x3ef33333);
      auVar28 = ZEXT464(0x42820000);
      auVar29 = ZEXT464(0x41c80000);
      do {
        iVar6 = DAT_180c647a0;
        if (DAT_180c647a0 == 0) {
          auVar28 = ZEXT1664(auVar28._0_16_);
          auVar29 = ZEXT1664(auVar29._0_16_);
          auVar32 = ZEXT1664(auVar32._0_16_);
          auVar33 = ZEXT1664(auVar33._0_16_);
          auVar34 = ZEXT1664(auVar34._0_16_);
          auVar35 = ZEXT1664(auVar35._0_16_);
          UVar7 = GetTickCount64();
          if (UVar7 < DAT_180c647a8) {
            iVar6 = 0;
          }
          else {
            local_9b0 = &DAT_1808ef1d0;
            iVar6 = FUN_1805f68d0(&DAT_1808ef1d0);
            if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808ef21c == 0x7fffffff) {
              DAT_1808ef21c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c647a0 == 0) && (DAT_180c647a8 <= UVar7)) {
              DAT_180c647a0 = FUN_1804174b0("C_CSPlayerPawn",0x4ee662ac);
              if (DAT_180c647a0 == 0) {
                DAT_180c647a8 = UVar7 + 1000;
              }
              else {
                DAT_180c647a8 = 0xffffffffffffffff;
              }
            }
            iVar6 = DAT_180c647a0;
            FUN_1805f68fc(&DAT_1808ef1d0);
          }
        }
        local_998 = *(undefined8 *)((longlong)iVar6 + *plVar15);
        local_9b4 = (float)(int)plVar15[1];
        auVar23 = vpcmpeqd_avx(ZEXT116(*(byte *)(param_5 + 3)),ZEXT416(0));
        auVar23 = vblendvps_avx(SUB6416(ZEXT464(0x42200000),0),auVar29._0_16_,auVar23);
        fVar18 = auVar23._0_4_;
        fVar25 = (float)*(int *)((longlong)plVar15 + 0xc);
        if (*(int *)((longlong)plVar15 + 0xc) < 1) {
          fVar25 = auVar28._0_4_;
        }
        else {
          fVar21 = auVar34._0_4_;
          fVar20 = *(float *)(param_5 + 4) * fVar21;
          fVar19 = fVar20 * fVar18;
          if (fVar25 < (fVar18 - fVar19) * fVar21) {
            fVar19 = fVar18 - (fVar25 + fVar25);
          }
          auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)fVar19),1);
          auVar23 = vmaxss_avx(auVar23,auVar33._0_16_);
          fVar18 = auVar23._0_4_;
          fVar20 = fVar20 * 65.0;
          if (fVar25 < (65.0 - fVar20) * fVar21) {
            fVar20 = 65.0 - (fVar25 + fVar25);
          }
          auVar23 = vroundss_avx(ZEXT816(0),ZEXT416((uint)fVar20),1);
          auVar23 = vmaxss_avx(auVar23,auVar33._0_16_);
          fVar25 = auVar23._0_4_;
          auVar28 = ZEXT464(0x42820000);
        }
        if (((*(char *)(param_5 + 1) != '\0') && (local_9b4 <= fVar18)) ||
           ((*(char *)(param_5 + 2) != '\0' && (local_9b4 <= fVar25)))) {
          local_9d8 = '\x01';
        }
        else {
          local_9d8 = '\0';
        }
        local_9c8 = 0;
        local_9b0 = (undefined *)0x0;
        if (0 < (int)plVar15[0xd6b]) {
          do {
            puVar13 = local_9b0;
            local_9c0 = plVar15 + (longlong)local_9b0 * 0x478 + 3;
            if ((char)local_9c0[0x477] != '\0') {
              iVar6 = DAT_180c64798;
              if (DAT_180c64798 == 0) {
                auVar32 = ZEXT1664(auVar32._0_16_);
                auVar33 = ZEXT1664(auVar33._0_16_);
                auVar34 = ZEXT1664(auVar34._0_16_);
                auVar35 = ZEXT1664(auVar35._0_16_);
                UVar7 = GetTickCount64();
                if (UVar7 < DAT_180c64790) {
                  iVar6 = 0;
                }
                else {
                  local_9d0 = &DAT_1808ef130;
                  iVar6 = FUN_1805f68d0(&DAT_1808ef130);
                  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_1808ef17c == 0x7fffffff) {
                    DAT_1808ef17c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  if ((DAT_180c64798 == 0) && (DAT_180c64790 <= UVar7)) {
                    DAT_180c64798 = FUN_1804174b0("C_BaseEntity",0x9d930423);
                    if (DAT_180c64798 == 0) {
                      DAT_180c64790 = UVar7 + 1000;
                    }
                    else {
                      DAT_180c64790 = 0xffffffffffffffff;
                    }
                  }
                  iVar6 = DAT_180c64798;
                  FUN_1805f68fc(&DAT_1808ef130);
                }
              }
              plVar14 = local_9c0;
              lVar10 = *(longlong *)((longlong)iVar6 + *plVar15);
              if (lVar10 != 0) {
                auVar32 = ZEXT1664(auVar32._0_16_);
                auVar33 = ZEXT1664(auVar33._0_16_);
                auVar34 = ZEXT1664(auVar34._0_16_);
                auVar35 = ZEXT1664(auVar35._0_16_);
                FUN_1803dad10((longlong)iVar6,local_418,lVar10,0);
                uVar2 = local_f8;
                uVar9 = (ulonglong)local_f8;
                if (0 < (int)local_f8) {
                  uVar22 = FUN_180270fb0(plVar14);
                  FUN_180273740(uVar22,local_778,plVar14);
                  fVar18 = *(float *)((longlong)plVar14 + 0x2374) - DAT_180b8e134;
                  auVar28 = ZEXT464((uint)fVar18);
                  auVar23 = ZEXT416((uint)fVar18);
                  fVar25 = *(float *)(plVar14 + 0x46e) - DAT_180b8e130;
                  auVar29 = ZEXT464((uint)fVar25);
                  auVar24 = ZEXT416((uint)fVar25);
                  fVar18 = fVar25 * fVar25 + fVar18 * fVar18;
                  if (fVar18 < 0.0) {
                    fVar18 = (float)FUN_18061e150();
                    auVar23 = auVar28._0_16_;
                    auVar24 = auVar29._0_16_;
                  }
                  else {
                    fVar18 = SQRT(fVar18);
                  }
                  bVar12 = 0;
                  if (fVar18 <= 0.001) {
LAB_18025f7a8:
                    bVar16 = bVar12;
                    local_9d7 = '\0';
                  }
                  else {
                    auVar29 = ZEXT1664(CONCAT124(auVar24._4_12_,auVar24._0_4_ / fVar18));
                    auVar31 = ZEXT1664(CONCAT124(auVar23._4_12_,auVar23._0_4_ / fVar18));
                    auVar28 = ZEXT464((uint)(auVar32._0_4_ * *(float *)(plVar14 + 0x470)));
                    fVar19 = (float)FUN_180637540(auVar32._0_4_ *
                                                  *(float *)((longlong)plVar14 + 0x237c));
                    fVar18 = (float)FUN_180637540(auVar28._0_8_);
                    fVar18 = fVar18 * fVar19;
                    fVar25 = (float)FUN_180638e00(auVar28._0_8_);
                    fVar25 = fVar25 * fVar19;
                    auVar28 = ZEXT464((uint)(auVar32._0_4_ * local_998._4_4_));
                    fVar20 = (float)FUN_180637540(auVar32._0_4_ * (float)local_998);
                    fVar19 = (float)FUN_180637540(auVar28._0_8_);
                    fVar19 = fVar19 * fVar20;
                    fVar21 = (float)FUN_180638e00(auVar28._0_8_);
                    if ((fVar25 * auVar31._0_4_ + fVar18 * auVar29._0_4_ <= auVar35._0_4_) &&
                       (fVar19 * auVar29._0_4_ + fVar21 * fVar20 * auVar31._0_4_ <= auVar35._0_4_))
                    goto LAB_18025f7a8;
                    bVar16 = 1;
                    local_9d7 = '\x01';
                    bVar12 = 1;
                    if (local_9d8 != '\0') goto LAB_18025f7a8;
                  }
                  if (0 < (int)uVar2) {
                    puVar17 = auStack_414;
                    local_9d0 = (undefined *)uVar9;
                    do {
                      puVar13 = local_9d0;
                      uVar2 = *puVar17;
                      lVar10 = (longlong)(int)uVar2;
                      if ((-1 < (int)uVar2) && (uVar2 < 0x1b)) {
                        auVar33 = ZEXT1664(auVar33._0_16_);
                        auVar28 = ZEXT1664(auVar34._0_16_);
                        sVar5 = thunk_FUN_180624430();
                        if (sVar5 < 1) {
                          sVar5 = thunk_FUN_180624430(puVar17[2]);
                          if (sVar5 < 1) {
                            sVar5 = thunk_FUN_180624430(puVar17[3]);
                            if (sVar5 < 1) {
                              sVar5 = thunk_FUN_180624430(puVar17[4]);
                              if (sVar5 < 1) {
                                sVar5 = thunk_FUN_180624430(puVar17[5]);
                                if (sVar5 < 1) {
                                  sVar5 = thunk_FUN_180624430(puVar17[6]);
                                  if (sVar5 < 1) {
                                    sVar5 = thunk_FUN_180624430(puVar17[7]);
                                    if (sVar5 < 1) {
                                      fVar18 = local_778[lVar10 * 8];
                                      sVar5 = thunk_FUN_180624430(fVar18);
                                      if (sVar5 < 1) {
                                        fVar25 = local_778[lVar10 * 8 + 1];
                                        sVar5 = thunk_FUN_180624430(fVar25);
                                        if (sVar5 < 1) {
                                          auVar29 = ZEXT464(auStack_770[lVar10 * 8]);
                                          sVar5 = thunk_FUN_180624430(auStack_770[lVar10 * 8]);
                                          if (sVar5 < 1) {
                                            sVar5 = thunk_FUN_180624430(auStack_770[lVar10 * 8 + 2])
                                            ;
                                            if ((((sVar5 < 1) &&
                                                 (sVar5 = thunk_FUN_180624430(auStack_770
                                                                              [lVar10 * 8 + 3]),
                                                 sVar5 < 1)) &&
                                                (sVar5 = thunk_FUN_180624430(auStack_770
                                                                             [lVar10 * 8 + 4]),
                                                sVar5 < 1)) &&
                                               (((sVar5 = thunk_FUN_180624430(auStack_770
                                                                              [lVar10 * 8 + 5]),
                                                 sVar5 < 1 &&
                                                 (sVar5 = thunk_FUN_180624430(auStack_770
                                                                              [lVar10 * 8 + 1]),
                                                 sVar5 < 1)) &&
                                                (1.0 <= fVar18 * fVar18 + fVar25 * fVar25 +
                                                        auVar29._0_4_ * auVar29._0_4_)))) {
                                              local_980 = auVar28._0_4_;
                                              local_988 = ((float)puVar17[4] + (float)puVar17[1]) *
                                                          local_980;
                                              local_984 = ((float)puVar17[5] + (float)puVar17[2]) *
                                                          local_980;
                                              local_980 = ((float)puVar17[6] + (float)puVar17[3]) *
                                                          local_980;
                                              pfVar8 = (float *)FUN_180451010(auStack_770 +
                                                                              lVar10 * 8 + 2,
                                                                              local_8b0,&local_988);
                                              fVar19 = auVar29._0_4_ + pfVar8[2];
                                              auVar35 = ZEXT464((uint)fVar19);
                                              auVar31 = ZEXT464((uint)(fVar25 + pfVar8[1]));
                                              local_9c4 = fVar18 + *pfVar8;
                                              fVar19 = fVar19 - local_9a8[2];
                                              auVar29 = ZEXT464((uint)fVar19);
                                              fVar18 = (fVar25 + pfVar8[1]) - local_9a8[1];
                                              auVar32 = ZEXT464((uint)fVar18);
                                              fVar25 = local_9c4 - *local_9a8;
                                              auVar34 = ZEXT464((uint)fVar25);
                                              fVar18 = fVar25 * fVar25 + fVar18 * fVar18;
                                              auVar28 = ZEXT464((uint)fVar18);
                                              auVar23 = ZEXT416((uint)fVar18);
                                              fVar18 = fVar19 * fVar19 + fVar18;
                                              if (fVar18 == auVar33._0_4_) {
                                                auVar28 = ZEXT1664(auVar33._0_16_);
                                              }
                                              else if (fVar18 < 0.0) {
                                                auVar26._0_8_ = FUN_18061e150(fVar18);
                                                auVar23 = auVar28._0_16_;
                                                auVar26._8_56_ = extraout_var;
                                                auVar28 = ZEXT1664(auVar26._0_16_);
                                              }
                                              else {
                                                auVar28 = ZEXT464((uint)SQRT(fVar18));
                                              }
                                              uVar9 = auVar29._0_8_;
                                              auVar24 = vpcmpeqd_avx(ZEXT116(*(byte *)(param_5 + 1))
                                                                     ,SUB6416(ZEXT464(0),0));
                                              auVar24 = vblendvps_avx(SUB6416(ZEXT464(0x42840000),0)
                                                                      ,SUB6416(ZEXT464(0x42480000),0
                                                                              ),auVar24);
                                              if (auVar28._0_4_ <= auVar24._0_4_) {
                                                fVar18 = auVar23._0_4_;
                                                if (fVar18 == auVar33._0_4_) {
                                                  uVar22 = auVar33._0_8_;
                                                }
                                                else if (fVar18 < 0.0) {
                                                  uVar22 = FUN_18061e150(auVar23._0_8_);
                                                  uVar9 = auVar29._0_8_;
                                                }
                                                else {
                                                  auVar24._0_4_ = SQRT(fVar18);
                                                  auVar24._4_12_ = auVar23._4_12_;
                                                  uVar22 = auVar24._0_8_;
                                                }
                                                fVar18 = (float)FUN_180636c80(uVar9 ^ 
                                                  0x8000000080000000,uVar22);
                                                auVar29 = ZEXT464((uint)(fVar18 * 57.295776));
                                                fVar18 = (float)FUN_180636c80(auVar32._0_8_,
                                                                              auVar34._0_8_);
                                                auVar32 = ZEXT464((uint)(fVar18 * 57.295776));
                                                fVar25 = auVar29._0_4_ - *local_968;
                                                for (fVar18 = fVar18 * 57.295776 - local_968[1];
                                                    180.0 < fVar18; fVar18 = fVar18 + -360.0) {
                                                }
                                                for (; fVar18 < -180.0; fVar18 = fVar18 + 360.0) {
                                                }
                                                fVar18 = fVar18 * fVar18 + fVar25 * fVar25;
                                                if (fVar18 < 0.0) {
                                                  auVar34._0_8_ = FUN_18061e150();
                                                  auVar34._8_56_ = extraout_var_00;
                                                  auVar23 = auVar34._0_16_;
                                                }
                                                else {
                                                  auVar23 = ZEXT416((uint)SQRT(fVar18));
                                                }
                                                auVar34 = ZEXT1664(auVar23);
                                                sVar5 = thunk_FUN_180624430(local_9c4);
                                                if (((0 < sVar5) ||
                                                    (sVar5 = thunk_FUN_180624430(auVar31._0_8_),
                                                    0 < sVar5)) ||
                                                   (((sVar5 = thunk_FUN_180624430(auVar35._0_8_),
                                                     0 < sVar5 ||
                                                     (((sVar5 = thunk_FUN_180624430(auVar28._0_8_),
                                                       0 < sVar5 ||
                                                       (sVar5 = thunk_FUN_180624430(auVar29._0_8_),
                                                       0 < sVar5)) ||
                                                      (sVar5 = thunk_FUN_180624430(auVar32._0_8_),
                                                      0 < sVar5)))) ||
                                                    (sVar5 = thunk_FUN_180624430(auVar34._0_8_),
                                                    0 < sVar5)))) goto LAB_18025ff8e;
                                                if (auVar34._0_4_ <= DAT_180cad6b0) {
                                                  fVar18 = auVar29._0_4_ * 0.017453292;
                                                  auVar30 = ZEXT464((uint)fVar18);
                                                  auVar26 = ZEXT464((uint)(auVar32._0_4_ *
                                                                          0.017453292));
                                                  fVar18 = (float)FUN_180637540(fVar18);
                                                  local_978 = (float)FUN_180637540(auVar26._0_8_);
                                                  local_978 = local_978 * fVar18;
                                                  local_974 = (float)FUN_180638e00(auVar26._0_8_);
                                                  local_974 = local_974 * fVar18;
                                                  local_970 = FUN_180638e00(auVar30._0_8_);
                                                  local_970 = local_970 ^ 0x80000000;
                                                  local_788[0] = 1;
                                                  local_788[1] = 0;
                                                  pbVar11 = local_788;
                                                  bVar12 = 1;
                                                  auVar26 = ZEXT464(0x43340000);
                                                  do {
                                                    if (bVar12 == 0) {
                                                      cVar1 = *(char *)(param_5 + 1);
                                                    }
                                                    else {
                                                      cVar1 = *(char *)(param_5 + 2);
                                                    }
                                                    if (cVar1 != '\0') {
                                                      auVar23 = vpcmpeqd_avx(ZEXT116(bVar12),
                                                                             ZEXT416(0));
                                                      auVar23 = vblendvps_avx(SUB6416(ZEXT464(
                                                  0x42480000),0),SUB6416(ZEXT464(0x42840000),0),
                                                  auVar23);
                                                  auVar30 = ZEXT1664(auVar23);
                                                  if (auVar28._0_4_ <= auVar23._0_4_) {
                                                    if (bVar12 == 0) {
                                                      if (bVar16 == 0) {
                                                        auVar24 = vpcmpeqd_avx(ZEXT116(*(byte *)(
                                                  param_5 + 3)),ZEXT416(0));
                                                  auVar24 = vblendvps_avx(SUB6416(ZEXT464(0x42200000
                                                                                         ),0),
                                                                          SUB6416(ZEXT464(0x41c80000
                                                                                         ),0),
                                                                          auVar24);
                                                  auVar27 = ZEXT1664(auVar24);
                                                  }
                                                  else {
                                                    auVar27 = ZEXT464(0x42b40000);
                                                  }
                                                  }
                                                  else {
                                                    auVar24 = vpcmpeqd_avx(ZEXT116(bVar16),
                                                                           ZEXT416(0));
                                                    auVar24 = vblendvps_avx(auVar26._0_16_,
                                                                            SUB6416(ZEXT464(
                                                  0x42820000),0),auVar24);
                                                  auVar27 = ZEXT1664(auVar24);
                                                  }
                                                  fVar18 = *(float *)(param_5 + 4);
                                                  if (0 < *(int *)((longlong)plVar15 + 0xc)) {
                                                    fVar20 = auVar27._0_4_;
                                                    fVar25 = fVar18 * 0.5 * fVar20;
                                                    fVar19 = (float)*(int *)((longlong)plVar15 + 0xc
                                                                            );
                                                    fVar18 = fVar20 - fVar25;
                                                    if (fVar19 < fVar18 * 0.5) {
                                                      fVar18 = fVar19 + fVar19;
                                                      fVar25 = fVar20 - fVar18;
                                                    }
                                                    auVar24 = vroundss_avx(ZEXT816(0),
                                                                           ZEXT416((uint)fVar25),1);
                                                    auVar24 = vmaxss_avx(auVar24,auVar33._0_16_);
                                                    auVar27 = ZEXT1664(auVar24);
                                                  }
                                                  bVar4 = auVar27._0_4_ < local_9b4;
                                                  if ((local_9d7 == '\0') || (!bVar4)) {
                                                    local_9e8 = *(undefined8 *)(param_7 + 8);
                                                    local_9f0 = *plVar15;
                                                    local_9f8 = auVar23._0_4_;
                                                    FUN_180263960(fVar18,local_898,local_9a8);
                                                    lVar10 = *plVar15;
                                                    if (local_890 == lVar10) {
                                                      fStack_93c = 1.0 - auVar28._0_4_ /
                                                                         auVar30._0_4_;
                                                      uStack_8ff = 0;
                                                      uStack_944 = auVar33._0_4_;
                                                      uVar22 = 0;
                                                      uStack_8ec = 0;
                                                      uStack_8e4 = 0;
                                                      uStack_8dc = uStack_8dc & 0xffffff00;
                                                      local_958 = local_9c4;
                                                      uStack_954 = auVar31._0_4_;
                                                      uStack_950 = auVar35._0_4_;
                                                      uStack_94c = auVar29._0_4_;
                                                      uStack_948 = auVar32._0_4_;
                                                      fStack_940 = auVar27._0_4_;
                                                      if (bVar4) {
                                                        fStack_93c = fStack_940 * 100.0 * fStack_93c
                                                        ;
                                                      }
                                                      else {
                                                        fStack_93c = fStack_940 * fStack_93c +
                                                                     10000.0;
                                                      }
                                                      local_938 = auVar34._0_4_;
                                                      uStack_934 = puVar17[-1];
                                                      local_8f8 = uStack_944;
                                                      uStack_8f4 = uStack_944;
                                                      uStack_8f0 = uStack_944;
                                                      uStack_8e8 = uStack_944;
                                                      uStack_8e0 = uStack_944;
                                                      uStack_930 = FUN_1803db3f0();
                                                      uStack_92c = *puVar17;
                                                      uStack_928 = *(undefined8 *)(puVar17 + -1);
                                                      uStack_920 = *(undefined8 *)(puVar17 + 1);
                                                      uStack_918 = *(undefined8 *)(puVar17 + 3);
                                                      uStack_910 = *(undefined8 *)(puVar17 + 5);
                                                      uStack_908 = *(undefined8 *)(puVar17 + 7);
                                                      uStack_900 = 1;
                                                      uStack_8fc = (undefined4)
                                                                   CONCAT71((int7)((ulonglong)uVar22
                                                                                  >> 8),bVar12 != 0)
                                                      ;
                                                      uStack_8d0 = (undefined4)plVar15[1];
                                                      local_8c8 = local_9c0;
                                                      puVar3 = *(undefined8 **)(*local_9a0 + 8);
                                                      bStack_8fe = bVar16;
                                                      local_8d8 = lVar10;
                                                      if (puVar3 == *(undefined8 **)local_9a0[1]) {
                                                        auVar33 = ZEXT1664(auVar33._0_16_);
                                                        FUN_180268c10(local_9a0,puVar3,&local_958);
                                                      }
                                                      else {
                                                        *puVar3 = CONCAT44(uStack_954,local_958);
                                                        puVar3[1] = CONCAT44(uStack_94c,uStack_950);
                                                        puVar3[2] = CONCAT44(uStack_944,uStack_948);
                                                        puVar3[3] = CONCAT44(fStack_93c,fStack_940);
                                                        puVar3[4] = CONCAT44(uStack_934,local_938);
                                                        puVar3[5] = CONCAT44(uStack_92c,uStack_930);
                                                        puVar3[6] = uStack_928;
                                                        puVar3[7] = uStack_920;
                                                        puVar3[8] = uStack_918;
                                                        puVar3[9] = uStack_910;
                                                        puVar3[10] = uStack_908;
                                                        puVar3[0xb] = CONCAT44(uStack_8fc,
                                                                               CONCAT13(uStack_8fd,
                                                                                        CONCAT12(
                                                  bVar16,CONCAT11(uStack_8ff,1))));
                                                  puVar3[0xc] = CONCAT44(uStack_8f4,local_8f8);
                                                  puVar3[0xd] = CONCAT44(uStack_8ec,uStack_8f0);
                                                  puVar3[0xe] = CONCAT44(uStack_8e4,uStack_8e8);
                                                  puVar3[0xf] = CONCAT44(uStack_8dc,uStack_8e0);
                                                  auVar23._8_4_ = uStack_8d0;
                                                  auVar23._0_8_ = lVar10;
                                                  auVar23._12_4_ = uStack_8cc;
                                                  *(undefined1 (*) [16])(puVar3 + 0x10) = auVar23;
                                                  puVar3[0x12] = local_9c0;
                                                  *(longlong *)(*local_9a0 + 8) =
                                                       *(longlong *)(*local_9a0 + 8) + 0x98;
                                                  }
                                                  break;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  pbVar11 = pbVar11 + 1;
                                                  if (pbVar11 == local_788 + 2) break;
                                                  bVar12 = *pbVar11;
                                                  } while( true );
                                                }
                                              }
                                              puVar13 = local_9d0;
                                              goto LAB_18025feba;
                                            }
LAB_18025ff8e:
                                            puVar13 = local_9d0;
                                          }
                                        }
                                      }
                                      LOCK();
                                      _DAT_180b8e6d8 = _DAT_180b8e6d8 + 1;
                                      UNLOCK();
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
LAB_18025feba:
                      puVar17 = puVar17 + 10;
                      local_9d0 = (undefined *)((longlong)puVar13 - 1);
                      auVar34 = ZEXT464(0x3f000000);
                    } while (local_9d0 != (undefined *)0x0);
                    auVar35 = ZEXT464(0x3ef33333);
                    local_9d0 = (undefined *)0x0;
                    plVar14 = local_9c0;
                    puVar13 = local_9b0;
                  }
                  if ((((char)plVar14[0x477] != '\0') &&
                      (*(char *)((longlong)plVar14 + 0x23ba) != '\0')) && (plVar14[2] != 0)) {
                    auVar33 = ZEXT1664(auVar33._0_16_);
                    auVar34 = ZEXT1664(auVar34._0_16_);
                    auVar35 = ZEXT1664(auVar35._0_16_);
                    FUN_18063aed0(plVar14[2],plVar14 + 0x26e,
                                  (longlong)*(int *)((longlong)plVar14 + 0x36c) << 5);
                    *(undefined1 *)((longlong)plVar14 + 0x23ba) = 0;
                  }
                  auVar32 = ZEXT464(0x3c8efa35);
                }
              }
            }
            local_9c8 = local_9c8 + 1;
            local_9b0 = (undefined *)((longlong)puVar13 + 1);
          } while (local_9c8 < (int)plVar15[0xd6b]);
          auVar28 = ZEXT464(0x42820000);
          auVar29 = ZEXT464(0x41c80000);
        }
        plVar15 = plVar15 + 0xd6c;
      } while (plVar15 != local_960);
    }
  }
  else {
    LOCK();
    _DAT_180b8e6d8 = _DAT_180b8e6d8 + 1;
    UNLOCK();
  }
}



