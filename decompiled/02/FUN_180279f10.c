// FUN_180279f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180279f10 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180279f10(undefined1 (*param_1) [16],float *param_2,undefined8 *param_3,longlong *param_4)

{
  ulonglong uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char cVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 extraout_var [56];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar22;
  undefined1 auVar21 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auStack_3838 [32];
  undefined8 *local_3818;
  float local_3810;
  float local_3808;
  undefined8 local_37f8;
  int iStack_37f0;
  int iStack_37ec;
  float local_37e8;
  undefined8 local_37d8;
  int iStack_37d0;
  int iStack_37cc;
  float local_37c8;
  undefined4 local_37c4;
  undefined4 local_37c0;
  undefined8 local_37b8;
  float local_37b0;
  float local_37a8 [3];
  float local_379c;
  undefined8 local_3798;
  undefined4 local_3790;
  undefined1 local_378c [4];
  undefined8 local_3788;
  undefined4 local_3780;
  undefined1 local_377c [4];
  undefined8 local_3778;
  undefined4 local_3770;
  undefined1 local_376c [4];
  undefined8 local_3768;
  float local_3760;
  undefined1 local_375c [12];
  undefined4 *local_3750;
  char local_3748;
  undefined8 local_3740;
  undefined8 uStack_3738;
  ulonglong uStack_3730;
  undefined8 uStack_3728;
  undefined8 local_3720;
  undefined8 uStack_3718;
  undefined8 uStack_3710;
  ulonglong uStack_3708;
  undefined4 local_36f8;
  undefined4 local_36f4;
  undefined1 *local_36f0;
  undefined4 local_36e8;
  undefined4 local_36e4;
  undefined1 local_36e0 [7168];
  undefined8 local_1ae0;
  undefined1 local_1ad8 [16];
  int local_1ac8;
  undefined4 local_1ac4;
  undefined1 local_1ac0 [192];
  float local_1a00;
  float local_19fc;
  undefined8 local_19f8;
  undefined8 uStack_19f0;
  undefined4 local_19e8;
  undefined1 local_19e4;
  undefined8 local_19e3;
  undefined8 uStack_19db;
  undefined8 uStack_19d3;
  undefined8 uStack_19cb;
  undefined8 local_19c3;
  undefined8 uStack_19bb;
  undefined8 uStack_19b3;
  undefined8 uStack_19ab;
  undefined8 local_19a3;
  undefined2 local_199b;
  undefined1 local_1999;
  undefined8 local_1998;
  undefined8 uStack_1990;
  ulonglong uStack_1988;
  undefined8 uStack_1980;
  undefined8 local_1978;
  undefined8 uStack_1970;
  undefined8 uStack_1968;
  ulonglong uStack_1960;
  undefined8 local_1958;
  undefined8 local_1948;
  undefined8 uStack_1940;
  ulonglong uStack_1938;
  undefined8 uStack_1930;
  undefined8 local_1928;
  undefined8 uStack_1920;
  undefined8 uStack_1918;
  ulonglong uStack_1910;
  undefined8 local_1908;
  undefined1 local_1900;
  undefined1 local_18f8 [6152];
  ulonglong local_f0;
  undefined8 uStack_48;
  
  uStack_48 = 0x180279f2f;
  local_f0 = DAT_1808d5f00 ^ (ulonglong)auStack_3838;
  local_3798 = *param_3;
  local_3790 = *(undefined4 *)(param_3 + 1);
  puVar10 = &local_3798;
  do {
    sVar5 = thunk_FUN_180624430(*(undefined4 *)puVar10);
    if (0 < sVar5) goto LAB_18027aa6b;
    puVar10 = (undefined8 *)((longlong)puVar10 + 4);
  } while (puVar10 != (undefined8 *)local_378c);
  local_3788 = *(undefined8 *)((longlong)param_3 + 0xc);
  local_3780 = *(undefined4 *)((longlong)param_3 + 0x14);
  puVar10 = &local_3788;
  do {
    sVar5 = thunk_FUN_180624430(*(undefined4 *)puVar10);
    if (0 < sVar5) goto LAB_18027aa6b;
    puVar10 = (undefined8 *)((longlong)puVar10 + 4);
  } while (puVar10 != (undefined8 *)local_377c);
  local_3778 = param_3[3];
  local_3770 = *(undefined4 *)(param_3 + 4);
  puVar10 = &local_3778;
  do {
    sVar5 = thunk_FUN_180624430(*(undefined4 *)puVar10);
    if (0 < sVar5) goto LAB_18027aa6b;
    puVar10 = (undefined8 *)((longlong)puVar10 + 4);
  } while (puVar10 != (undefined8 *)local_376c);
  fVar18 = *(float *)((longlong)param_3 + 0x24);
  sVar5 = thunk_FUN_180624430(fVar18);
  if (((sVar5 < 1) && (fVar17 = 0.0, 0.0 <= fVar18)) &&
     (auVar28 = ZEXT464(0x3f800000), fVar18 < 1.0)) {
    fVar18 = *(float *)(param_3 + 6);
    sVar5 = thunk_FUN_180624430(fVar18);
    if ((sVar5 < 1) && (fVar17 < fVar18)) {
      fVar18 = *(float *)((longlong)param_3 + 0x34);
      sVar5 = thunk_FUN_180624430(fVar18);
      if ((sVar5 < 1) && (fVar17 < fVar18)) {
        fVar18 = *param_2;
        sVar5 = thunk_FUN_180624430(fVar18);
        if ((sVar5 < 1) && (fVar17 < fVar18)) {
          fVar18 = param_2[2];
          sVar5 = thunk_FUN_180624430(fVar18);
          if ((sVar5 < 1) && (fVar17 < fVar18)) {
            fVar18 = param_2[3];
            sVar5 = thunk_FUN_180624430(fVar18);
            if (((sVar5 < 1) && (fVar17 < fVar18)) && (fVar18 <= auVar28._0_4_)) {
              fVar18 = param_2[1];
              sVar5 = thunk_FUN_180624430(fVar18);
              if ((((sVar5 < 1) && (fVar17 <= fVar18)) &&
                  (((uint)param_2[4] < 5 && ((*param_4 != 0 && (DAT_180c64060 != 0)))))) &&
                 ((lVar6 = FUN_18026c410(), lVar6 != 0 &&
                  ((lVar6 = FUN_18026c5d0(), lVar6 != 0 &&
                   (cVar4 = FUN_18026ccd0(param_4), cVar4 != '\0')))))) {
                local_1998 = 0;
                uStack_1990 = 0;
                uStack_1988 = 0;
                uStack_1980 = 0;
                local_1978 = 0;
                uStack_1970 = 0;
                uStack_1968 = 0;
                uStack_1960 = 0;
                local_1958 = 0;
                lVar6 = *param_4;
                auVar28 = ZEXT1664(auVar28._0_16_);
                lVar7 = FUN_18026d4b0();
                if (lVar7 != 0) {
                  lVar8 = FUN_18017ea70();
                  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
                  local_3810 = 2.10195e-44;
                  local_3818 = (undefined8 *)CONCAT71(local_3818._1_7_,3);
                  cVar4 = FUN_18027afd0(lVar7,&local_1998,lVar6,0x1c300b);
                  lVar6 = FUN_18017ea70();
                  iVar9 = *(int *)(lVar6 + 4);
                  if (iVar9 != 0) {
                    iVar9 = iVar9 + -1;
                    *(int *)(lVar6 + 4) = iVar9;
                  }
                  if (cVar4 != '\0') {
                    uStack_1988 = uStack_1988 | 0x4000000000;
                    uStack_1960 = uStack_1960 | 0x200;
                    local_1978 = CONCAT44((int)param_4[6],(undefined4)local_1978);
                    local_1948 = local_1998;
                    uStack_1940 = uStack_1990;
                    uStack_1930 = uStack_1980;
                    local_1928 = local_1978;
                    uStack_1920 = uStack_1970;
                    uStack_1918 = uStack_1968;
                    uStack_1910 = uStack_1960;
                    local_1908 = local_1958;
                    local_1900 = 1;
                    local_37b8 = param_3[3];
                    local_37b0 = *(float *)(param_3 + 4);
                    local_37d8._0_4_ = (float)*param_3;
                    local_37d8._4_4_ = (undefined4)((ulonglong)*param_3 >> 0x20);
                    iStack_37d0 = *(int *)(param_3 + 1);
                    local_3818 = &local_1948;
                    auVar28 = ZEXT1664(auVar28._0_16_);
                    uStack_1938 = uStack_1988;
                    FUN_18026d670(iVar9,&local_37c8,&local_37d8,&local_37b8);
                    if (((((char)local_37c0 != '\0') &&
                         (fVar18 = local_37c8, sVar5 = thunk_FUN_180624430(local_37c8), sVar5 < 1))
                        && (fVar17 <= fVar18)) && (fVar18 <= auVar28._0_4_)) {
                      if (((char)local_37c4 != '\0') || (fVar18 < 0.99999)) {
                        if ((((*(char *)(param_3 + 7) != '\0') &&
                             ((param_2[4] != 0.0 && (lVar6 = FUN_18026c790(), lVar6 != 0)))) &&
                            (lVar6 = FUN_18026c950(), lVar6 != 0)) &&
                           (lVar6 = FUN_18026cb10(), lVar6 != 0)) {
                          local_36f8 = 0;
                          local_36f4 = 0x42500000;
                          local_36e8 = 0x80;
                          local_36e4 = 0x80000000;
                          FUN_18063ab10(local_36e0,0,0x1c00);
                          local_1ae0 = 0;
                          local_1ad8 = (undefined1  [16])0x0;
                          local_1ac8 = 8;
                          local_1ac4 = 0x80000000;
                          FUN_18063ab10(local_1ac0,0,0xc0);
                          local_19f8 = 0;
                          uStack_19f0 = 0;
                          local_19e8 = auVar28._0_4_;
                          local_19e4 = 0;
                          local_19e3 = 0;
                          uStack_19db = 0;
                          uStack_19d3 = 0;
                          uStack_19cb = 0;
                          local_19c3 = 0;
                          uStack_19bb = 0;
                          uStack_19b3 = 0;
                          uStack_19ab = 0;
                          local_19a3 = 0;
                          local_199b = 0;
                          local_1999 = 0;
                          local_3750 = &local_36f8;
                          local_3748 = '\x01';
                          fVar18 = param_2[4];
                          local_37d8._0_4_ = (float)*(undefined8 *)((longlong)param_3 + 0xc);
                          local_37d8._4_4_ =
                               (undefined4)
                               ((ulonglong)*(undefined8 *)((longlong)param_3 + 0xc) >> 0x20);
                          uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
                          local_37f8._0_4_ = (float)*param_3;
                          local_37f8._4_4_ = (undefined4)((ulonglong)*param_3 >> 0x20);
                          local_37e8 = *(float *)(param_3 + 1);
                          local_36f0 = local_36e0;
                          local_1ad8._8_8_ = local_1ac0;
                          local_3740 = local_1948;
                          uStack_3738 = uStack_1940;
                          uStack_3730 = uStack_1938;
                          uStack_3728 = uStack_1930;
                          local_3720 = local_1928;
                          uStack_3718 = uStack_1920;
                          uStack_3710 = uStack_1918;
                          uStack_3708 = uStack_1910;
                          auVar28 = ZEXT1664(auVar28._0_16_);
                          uVar19 = (undefined4)local_1908;
                          uVar22 = local_1908._4_4_;
                          local_375c._4_8_ = param_4;
                          local_1a00 = fVar17;
                          local_19fc = fVar17;
                          lVar6 = FUN_18026da70();
                          if (lVar6 != 0) {
                            lVar7 = FUN_18017ea70();
                            *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                            local_1998 = local_3740;
                            uStack_1990 = uStack_3738;
                            uStack_1988 = uStack_3730;
                            uStack_1980 = uStack_3728;
                            local_1978 = local_3720;
                            uStack_1970 = uStack_3718;
                            uStack_1968 = uStack_3710;
                            uStack_1960 = uStack_3708;
                            local_1958 = CONCAT44(uVar22,uVar19);
                            local_37c8 = (float)local_37d8;
                            local_37c4 = local_37d8._4_4_;
                            local_37b8 = CONCAT44(local_37f8._4_4_,(float)local_37f8);
                            local_37b0 = local_37e8;
                            local_3818 = &local_1998;
                            auVar28 = ZEXT1664(auVar28._0_16_);
                            local_3810 = fVar18;
                            local_37c0 = uVar2;
                            cVar4 = FUN_18027b090(lVar6,&local_36f8,&local_37b8,&local_37c8);
                            lVar6 = FUN_18017ea70();
                            if (*(int *)(lVar6 + 4) != 0) {
                              *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
                            }
                            if (cVar4 != '\0') {
                              uVar2 = local_1ad8._0_4_;
                              if (((0x100 < (uint)local_1ad8._0_4_) ||
                                  (local_1ac8 < (int)local_1ad8._0_4_)) || (0x10000 < local_1ac8)) {
LAB_18027aa3c:
                                param_1[1][0] = 0;
                                FUN_18026ddf0(param_4,&local_36f8);
                              }
                              if (local_1ad8._0_4_ != 0) {
                                if (local_1ad8._8_8_ == 0) goto LAB_18027aa3c;
                                if (local_1ad8._0_4_ != 0) {
                                  fVar27 = param_2[5];
                                  local_37e8 = param_2[4];
                                  fVar18 = param_2[3];
                                  auVar23 = ZEXT464((uint)param_2[1]);
                                  auVar25 = ZEXT464((uint)*param_2);
                                  lVar6 = FUN_18026dc30();
                                  if (lVar6 != 0) {
                                    lVar7 = FUN_18017ea70();
                                    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                                    local_3810 = local_37e8;
                                    local_3818 = (undefined8 *)CONCAT44(local_3818._4_4_,fVar18);
                                    local_3808 = fVar27;
                                    cVar4 = FUN_18027b130(lVar6,&local_36f8,auVar25._0_8_,
                                                          auVar23._0_8_);
                                    lVar6 = FUN_18017ea70();
                                    if (*(int *)(lVar6 + 4) != 0) {
                                      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
                                    }
                                    if (cVar4 != '\0') goto LAB_18027a65a;
                                  }
                                  param_1[1][0] = 0;
                                  FUN_18026ddf0(param_4,&local_36f8);
                                }
                              }
LAB_18027a65a:
                              cVar4 = FUN_18026ccd0(param_4);
                              if (cVar4 != '\0') {
                                uVar19 = local_1ad8._0_4_;
                                lVar6 = (longlong)(int)local_1ad8._0_4_;
                                if ((((int)local_1ad8._0_4_ <= (int)uVar2) &&
                                    (((int)uVar2 < 1 || (local_1ad8._0_4_ != 0)))) &&
                                   (((uint)local_1ad8._0_4_ < 0x101 &&
                                    ((((int)local_1ad8._0_4_ <= local_1ac8 && (local_1ac8 < 0x10001)
                                      ) && ((uVar3 = local_1ad8._8_8_, local_1ad8._0_4_ == 0 ||
                                            (local_1ad8._8_8_ != 0)))))))) {
                                  auVar23 = ZEXT464((uint)local_19f8._4_4_);
                                  auVar25 = ZEXT464((uint)(float)uStack_19f0);
                                  fVar18 = uStack_19f0._4_4_ * uStack_19f0._4_4_ +
                                           (float)uStack_19f0 * (float)uStack_19f0 +
                                           local_19f8._4_4_ * local_19f8._4_4_;
                                  fVar27 = uStack_19f0._4_4_;
                                  if (fVar18 < 0.0) {
                                    auVar24._0_8_ = FUN_18061e150(fVar18);
                                    auVar24._8_56_ = extraout_var;
                                    auVar12 = auVar24._0_16_;
                                  }
                                  else {
                                    auVar12 = ZEXT416((uint)SQRT(fVar18));
                                  }
                                  auVar24 = ZEXT1664(auVar12);
                                  local_37a8[0] = local_1a00;
                                  local_37a8[1] = local_19fc;
                                  local_37a8[2] = (float)local_19f8;
                                  pfVar11 = local_37a8;
                                  fVar18 = local_1a00;
                                  fVar26 = local_19fc;
                                  fVar29 = (float)local_19f8;
                                  do {
                                    sVar5 = thunk_FUN_180624430(*pfVar11);
                                    if (0 < sVar5) goto LAB_18027aa10;
                                    pfVar11 = pfVar11 + 1;
                                  } while (pfVar11 != &local_379c);
                                  auVar12 = vunpcklps_avx(auVar23._0_16_,auVar25._0_16_);
                                  local_3768 = auVar12._0_8_;
                                  local_3760 = fVar27;
                                  puVar10 = &local_3768;
                                  do {
                                    sVar5 = thunk_FUN_180624430(*(undefined4 *)puVar10);
                                    if (0 < sVar5) goto LAB_18027aa10;
                                    puVar10 = (undefined8 *)((longlong)puVar10 + 4);
                                  } while (puVar10 != (undefined8 *)local_375c);
                                  sVar5 = thunk_FUN_180624430(auVar24._0_8_);
                                  if ((sVar5 < 1) && (fVar20 = auVar24._0_4_, 1e-06 < fVar20)) {
                                    uVar1 = param_3[3];
                                    auVar16._8_8_ = 0;
                                    auVar16._0_8_ = uVar1;
                                    auVar12 = vshufps_avx(auVar16,auVar16,0x55);
                                    local_37f8._0_4_ = (float)uVar1;
                                    fVar20 = ((*(float *)(param_3 + 4) - fVar29) * fVar27 +
                                              (auVar12._0_4_ - fVar26) * auVar25._0_4_ +
                                             ((float)local_37f8 - fVar18) * auVar23._0_4_) /
                                             (fVar20 * fVar20);
                                    auVar21 = ZEXT464((uint)fVar20);
                                    fVar18 = (auVar23._0_4_ * fVar20 + fVar18) - (float)local_37f8;
                                    auVar12 = vshufps_avx(auVar16,auVar16,0x55);
                                    local_37f8._4_4_ = (undefined4)(uVar1 >> 0x20);
                                    fVar26 = (auVar25._0_4_ * fVar20 + fVar26) - auVar12._0_4_;
                                    fVar27 = (fVar27 * fVar20 + fVar29) - *(float *)(param_3 + 4);
                                    sVar5 = thunk_FUN_180624430(fVar20);
                                    if ((((0 < sVar5) || (auVar21._0_4_ < fVar17)) ||
                                        (auVar28._0_4_ <= auVar21._0_4_)) ||
                                       (0.0001 < fVar27 * fVar27 + fVar26 * fVar26 + fVar18 * fVar18
                                       )) {
                                      param_1[1][0] = 0;
                                      FUN_18026ddf0(param_4,&local_36f8);
                                    }
                                    if (uVar19 == 0) {
                                      param_1[1][0] = 0;
                                      FUN_18026ddf0(param_4,&local_36f8);
                                    }
                                    lVar7 = FUN_18017ea70();
                                    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
                                    cVar4 = FUN_1804514f0(local_18f8,uVar3,lVar6 * 0x18);
                                    lVar6 = FUN_18017ea70();
                                    if (*(int *)(lVar6 + 4) != 0) {
                                      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
                                    }
                                    if (cVar4 == '\0') {
                                      param_1[1][0] = 0;
                                      FUN_18026ddf0(param_4,&local_36f8);
                                    }
                                    local_37f8 = local_18f8;
                                    iStack_37f0 = local_1ad8._0_4_;
                                    iStack_37ec = (int)local_1ad8._0_4_ >> 0x1f;
                                    iStack_37d0 = local_1ad8._0_4_;
                                    local_3810 = param_2[3];
                                    local_3818 = (undefined8 *)
                                                 CONCAT44(local_3818._4_4_,auVar24._0_4_);
                                    iStack_37cc = iStack_37ec;
                                    local_37d8 = local_37f8;
                                    FUN_18026bb00(&local_37f8,&local_37d8,auVar21._0_8_,*param_2);
                                    if (((char)iStack_37ec != '\0') && (local_37f8._4_1_ != '\0')) {
                                      cVar4 = FUN_18026ccd0(param_4);
                                      if (cVar4 != '\0') {
                                        auVar28 = ZEXT464((uint)((float)local_37f8 *
                                                                *(float *)(param_3 + 6)));
                                        sVar5 = thunk_FUN_180624430((float)local_37f8 *
                                                                    *(float *)(param_3 + 6));
                                        if ((sVar5 < 1) && (fVar17 < auVar28._0_4_)) {
                                          local_3748 = '\0';
                                          cVar4 = FUN_18026ddf0(param_4,&local_36f8);
                                          if (cVar4 != '\0') {
                                            auVar15._0_4_ =
                                                 auVar28._0_4_ /
                                                 *(float *)((longlong)param_3 + 0x34);
                                            auVar15._4_12_ = auVar28._4_12_;
                                            iStack_37d0 = CONCAT31(iStack_37d0._1_3_,1);
                                            auVar12._8_4_ = iStack_37d0;
                                            auVar12._0_8_ = local_37d8;
                                            auVar12._12_4_ = iStack_37f0;
                                            auVar13._4_12_ = auVar12._4_12_;
                                            auVar13._0_4_ = auVar28._0_4_;
                                            auVar12 = vinsertps_avx(auVar13,auVar15,0x10);
                                            *param_1 = auVar12;
                                            param_1[1][0] = 1;
                                          }
                                        }
                                        param_1[1][0] = 0;
                                        if (local_3748 == '\0') {
                                        }
                                        FUN_18026ddf0(param_4,&local_36f8);
                                      }
                                    }
                                    param_1[1][0] = 0;
                                    FUN_18026ddf0(param_4,&local_36f8);
                                  }
LAB_18027aa10:
                                  param_1[1][0] = 0;
                                  FUN_18026ddf0(param_4,&local_36f8);
                                }
                              }
                              param_1[1][0] = 0;
                              FUN_18026ddf0(param_4,&local_36f8);
                            }
                          }
                          param_1[1][0] = 0;
                          FUN_18026ddf0(param_4,&local_36f8);
                        }
                      }
                      else {
                        cVar4 = FUN_18026ccd0(param_4);
                        if (cVar4 != '\0') {
                          auVar14._4_8_ =
                               CONCAT44(iStack_37f0,local_37f8._4_4_) & 0xffffff00ffffffff;
                          auVar14._0_4_ = *(undefined4 *)((longlong)param_3 + 0x34);
                          auVar14._12_4_ = 0;
                          auVar12 = vinsertps_avx(auVar14,auVar28._0_16_,0x10);
                          *param_1 = auVar12;
                          param_1[1][0] = 1;
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
LAB_18027aa6b:
  param_1[1][0] = 0;
}



