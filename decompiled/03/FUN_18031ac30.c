// FUN_18031ac30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031ac30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018031b378) */

void FUN_18031ac30(undefined8 *param_1,ulonglong *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  short sVar9;
  longlong *plVar10;
  char *pcVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  float *pfVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 extraout_XMM0_Qa;
  undefined1 auVar24 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  undefined1 auVar38 [64];
  undefined8 unaff_XMM15_Qa;
  undefined8 unaff_XMM15_Qb;
  undefined1 auVar39 [64];
  undefined1 auStack_448 [32];
  char **local_428;
  undefined8 local_420;
  undefined8 *local_418;
  undefined8 *local_410;
  undefined8 *local_408;
  double *local_400;
  double *local_3f8;
  double *local_3f0;
  undefined8 *local_3e8;
  longlong local_3e0;
  char *local_3d8;
  longlong local_3d0;
  double local_3c8;
  double local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  float local_3a8;
  uint local_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  undefined4 uStack_390;
  uint uStack_38c;
  float fStack_388;
  uint uStack_384;
  uint local_370;
  double local_368 [2];
  char local_358 [288];
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  ulonglong uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  char local_17d;
  char local_118 [8];
  undefined8 local_110;
  float local_108;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f0 [4];
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_448;
  *param_3 = &DAT_180802944;
  if (*(char *)*param_1 == '\0') {
  }
  if (0x6e < *(int *)(param_1[1] + 0x98) + 0xe) {
LAB_18031acb7:
    *param_3 = "engine budget";
  }
  if (DAT_180bda168 != 0) {
    plVar10 = (longlong *)FUN_18017bf40(&local_110);
    if ((*plVar10 == DAT_180bda168) || (DAT_180bda168 <= *plVar10)) {
      if (DAT_180bbeaba == '\0') {
        DAT_180bda164 = DAT_180bda164 + 1;
        DAT_180bbeaba = '\x01';
      }
      goto LAB_18031acb7;
    }
  }
  iVar17 = 0;
  iVar18 = 0;
  cVar1 = *(char *)param_1[2];
  lVar19 = param_1[1];
  auVar32 = ZEXT464(0x43b40000);
  fVar23 = 30.0;
  fVar33 = 180.0;
  auVar30 = ZEXT864(0);
  fVar21 = 0.75;
  bVar8 = false;
  fVar22 = *(float *)(lVar19 + 0x90) - *(float *)(lVar19 + 0x54) * *(float *)(lVar19 + 0x50);
  local_3b8 = (double)((ulonglong)local_3b8._4_4_ << 0x20);
  local_100 = 0.0;
  local_fc = 0.0;
  local_f8 = 0.0;
  do {
    fVar3 = (float)iVar17 * fVar23 - fVar33;
    auVar27 = ZEXT464((uint)fVar3);
    sVar9 = thunk_FUN_180624430(fVar3);
    if (sVar9 < 1) {
      auVar27._0_8_ = FUN_180615070(auVar27._0_8_,auVar32._0_8_);
      auVar27._8_56_ = extraout_var;
      auVar24 = auVar27._0_16_;
    }
    else {
      auVar24 = auVar30._0_16_;
    }
    auVar27 = ZEXT1664(auVar24);
    local_428 = (char **)CONCAT44(local_428._4_4_,(uint)(cVar1 != '\0'));
    FUN_18031a9e0(param_1[3],&local_3a0,1,auVar24._0_8_);
    if ((((char)local_370 != '\0') && (iVar18 = iVar18 + 1, (uStack_384 & 1) == 0)) &&
       (fVar21 < fStack_388 - fVar22)) {
      local_100 = fStack_39c;
      local_f8 = fStack_394;
      local_3b8 = (double)CONCAT44(local_3b8._4_4_,auVar27._0_4_);
      local_fc = fStack_398;
      bVar8 = true;
      fVar21 = fStack_388 - fVar22;
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 < 0xc);
  local_3d8 = (char *)CONCAT44(local_3d8._4_4_,fVar21);
  FUN_18030afc0(*(undefined8 *)param_1[4],*(undefined8 *)param_1[5],param_1[6]);
  if (!bVar8) {
    pcVar11 = "engine refused";
    if (iVar18 != 0) {
      pcVar11 = "no command clipped";
    }
    *param_3 = pcVar11;
  }
  auVar36 = ZEXT464(0x3f800000);
  auVar32 = ZEXT464(0x3c8efa35);
  auVar27 = ZEXT464(0x3d4ccccd);
  local_c8 = unaff_XMM14_Qa;
  uStack_c0 = unaff_XMM14_Qb;
  auVar38 = ZEXT464(0x4e6e6b28);
  local_d8 = unaff_XMM15_Qa;
  uStack_d0 = unaff_XMM15_Qb;
  auVar39 = ZEXT464(0x40400000);
  auVar37 = ZEXT1664(auVar38._0_16_);
  local_110 = (double)CONCAT44(auVar30._0_4_,auVar30._0_4_);
  local_108 = 1.0;
  bVar8 = false;
  pfVar20 = local_f0;
  local_f0[0] = 0.0;
  local_f0[1] = -25.0;
  local_f0[2] = -50.0;
  local_f0[3] = 25.0;
  lVar19 = 2;
  do {
    auVar35 = ZEXT464((uint)(auVar32._0_4_ * *pfVar20));
    auVar32 = ZEXT1664(auVar32._0_16_);
    auVar27 = ZEXT1664(auVar27._0_16_);
    auVar30 = ZEXT1664(auVar30._0_16_);
    auVar36 = ZEXT1664(auVar36._0_16_);
    auVar37 = ZEXT1664(auVar37._0_16_);
    auVar38 = ZEXT1664(auVar38._0_16_);
    auVar39 = ZEXT1664(auVar39._0_16_);
    fVar21 = (float)FUN_180637540();
    local_3c8 = (double)CONCAT44(local_3c8._4_4_,fVar21);
    iVar17 = 0;
    fVar22 = (float)FUN_180638e00(auVar35._0_8_);
    fVar22 = fVar22 * auVar39._0_4_;
    auVar35 = ZEXT464((uint)fVar22);
    local_3c0 = (double)CONCAT44(local_3c0._4_4_,fVar22);
    do {
      local_118[0] = '\0';
      auVar28 = ZEXT464((uint)((float)iVar17 * 22.5 * auVar32._0_4_));
      auVar32 = ZEXT1664(auVar32._0_16_);
      auVar35 = ZEXT1664(auVar35._0_16_);
      auVar27 = ZEXT1664(auVar27._0_16_);
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar36 = ZEXT1664(auVar36._0_16_);
      auVar37 = ZEXT1664(auVar37._0_16_);
      auVar38 = ZEXT1664(auVar38._0_16_);
      auVar39 = ZEXT1664(auVar39._0_16_);
      fVar22 = (float)FUN_180637540();
      local_3b0 = (double)CONCAT44(local_3b0._4_4_,fVar22 * fVar21 * auVar39._0_4_ + local_100);
      fVar22 = (float)FUN_180638e00(auVar28._0_8_);
      local_428 = (char **)local_118;
      local_3a8 = auVar35._0_4_ + local_f8;
      local_3b0 = (double)CONCAT44(fVar22 * fVar21 * auVar39._0_4_ + local_fc,(undefined4)local_3b0)
      ;
      puVar12 = (undefined8 *)FUN_18030bef0(local_358,param_1[1],&local_100,&local_3b0);
      lVar16 = 2;
      puVar14 = &local_238;
      do {
        puVar13 = puVar14 + 0x10;
        uVar5 = puVar12[1];
        uVar6 = puVar12[2];
        uVar7 = puVar12[3];
        uVar2 = puVar12[0xe];
        uVar4 = puVar12[0xf];
        puVar15 = puVar12 + 0x10;
        *puVar14 = *puVar12;
        puVar14[1] = uVar5;
        puVar14[2] = uVar6;
        puVar14[3] = uVar7;
        uVar5 = puVar12[5];
        uVar6 = puVar12[6];
        uVar7 = puVar12[7];
        puVar14[4] = puVar12[4];
        puVar14[5] = uVar5;
        puVar14[6] = uVar6;
        puVar14[7] = uVar7;
        uVar5 = puVar12[9];
        uVar6 = puVar12[10];
        uVar7 = puVar12[0xb];
        puVar14[8] = puVar12[8];
        puVar14[9] = uVar5;
        puVar14[10] = uVar6;
        puVar14[0xb] = uVar7;
        uVar5 = puVar12[0xd];
        puVar14[0xc] = puVar12[0xc];
        puVar14[0xd] = uVar5;
        puVar14[0xe] = uVar2;
        puVar14[0xf] = uVar4;
        lVar16 = lVar16 + -1;
        puVar12 = puVar15;
        puVar14 = puVar13;
      } while (lVar16 != 0);
      *puVar13 = *puVar15;
      if ((local_118[0] != '\0') && (local_17d == '\0')) {
        auVar28 = ZEXT464(uStack_190._4_4_);
        auVar32 = ZEXT1664(auVar32._0_16_);
        auVar35 = ZEXT1664(auVar35._0_16_);
        auVar27 = ZEXT1664(auVar27._0_16_);
        auVar30 = ZEXT1664(auVar30._0_16_);
        auVar36 = ZEXT1664(auVar36._0_16_);
        auVar37 = ZEXT1664(auVar37._0_16_);
        auVar38 = ZEXT1664(auVar38._0_16_);
        auVar39 = ZEXT1664(auVar39._0_16_);
        sVar9 = thunk_FUN_180624430();
        if ((sVar9 < 1) && ((auVar30._0_4_ <= auVar28._0_4_ && (auVar28._0_4_ < auVar36._0_4_)))) {
          auVar32 = ZEXT464((uint)local_1a8);
          sVar9 = thunk_FUN_180624430(local_1a8 & 0xffffffff);
          if (sVar9 < 1) {
            auVar35 = ZEXT464(local_1a8._4_4_);
            sVar9 = thunk_FUN_180624430(local_1a8._4_4_);
            if (sVar9 < 1) {
              auVar27 = ZEXT464((uint)uStack_1a0);
              sVar9 = thunk_FUN_180624430(uStack_1a0 & 0xffffffff);
              if (sVar9 < 1) {
                fVar22 = auVar32._0_4_ * auVar32._0_4_ + auVar35._0_4_ * auVar35._0_4_ +
                         auVar27._0_4_ * auVar27._0_4_;
                if (fVar22 < 0.0) {
                  auVar29._0_8_ = FUN_18061e150(fVar22);
                  auVar29._8_56_ = extraout_var_00;
                  auVar24 = auVar29._0_16_;
                }
                else {
                  auVar24 = ZEXT416((uint)SQRT(fVar22));
                }
                auVar29 = ZEXT1664(auVar24);
                sVar9 = thunk_FUN_180624430(auVar24._0_8_);
                if ((0 < sVar9) || (fVar22 = auVar29._0_4_, fVar22 < 1e-06)) {
                  auVar31 = auVar30._0_16_;
                  auVar24 = auVar36._0_16_;
                  auVar34 = auVar31;
                }
                else {
                  auVar31._0_4_ = auVar32._0_4_ / fVar22;
                  auVar31._4_12_ = auVar32._4_12_;
                  auVar34._0_4_ = auVar35._0_4_ / fVar22;
                  auVar34._4_12_ = auVar35._4_12_;
                  auVar24._0_4_ = auVar27._0_4_ / fVar22;
                  auVar24._4_12_ = auVar27._4_12_;
                }
                auVar35 = ZEXT1664(auVar34);
                auVar27 = ZEXT1664(auVar31);
                auVar32 = ZEXT1664(auVar24);
                sVar9 = thunk_FUN_180624430(auVar31._0_8_);
                if (((sVar9 < 1) && (sVar9 = thunk_FUN_180624430(auVar35._0_8_), sVar9 < 1)) &&
                   (sVar9 = thunk_FUN_180624430(auVar32._0_8_), sVar9 < 1)) {
                  fVar33 = auVar35._0_4_;
                  fVar23 = auVar27._0_4_;
                  fVar21 = auVar32._0_4_;
                  fVar22 = fVar33 * fVar33 + fVar23 * fVar23 + fVar21 * fVar21;
                  if ((0.9 < fVar22) && (fVar22 < 1.1)) {
                    auVar27 = ZEXT464(0x3d4ccccd);
                    if (fVar21 < *(float *)(param_1[1] + 0x68)) {
                      if ((0.05 <= fVar21) && (auVar28._0_4_ < auVar38._0_4_)) {
                        local_110 = (double)CONCAT44(fVar33,fVar23);
                        local_108 = fVar21;
                        auVar38 = ZEXT1664(auVar28._0_16_);
                        bVar8 = true;
                      }
                    }
                    else {
                      auVar24 = vminss_avx(auVar28._0_16_,auVar37._0_16_);
                      auVar37 = ZEXT1664(auVar24);
                    }
                    goto LAB_18031b24d;
                  }
                }
              }
              auVar27 = ZEXT464(0x3d4ccccd);
            }
LAB_18031b24d:
            auVar35 = ZEXT464(local_3c0._0_4_);
          }
          auVar32 = ZEXT464(0x3c8efa35);
        }
        fVar21 = local_3c8._0_4_;
      }
      auVar31 = auVar30._0_16_;
      auVar24 = auVar27._0_16_;
      iVar17 = iVar17 + 1;
    } while (iVar17 < 0x10);
    pfVar20 = pfVar20 + 1;
  } while (pfVar20 != (float *)&local_e0);
  fVar22 = (float)local_3b8;
  if (auVar36._0_4_ <= auVar37._0_4_) {
    if (!bVar8) {
      fVar21 = 0.96824586;
      auVar30 = ZEXT464((uint)((float)local_3b8 * auVar32._0_4_));
      auVar27 = ZEXT1664(auVar24);
      auVar37 = ZEXT1664(auVar31);
      auVar36 = ZEXT1664(auVar36._0_16_);
      fVar23 = (float)FUN_180638e00();
      auVar32 = ZEXT464((uint)(-fVar23 * fVar21));
      fVar23 = (float)FUN_180637540(auVar30._0_8_);
      fVar21 = -fVar23 * fVar21;
      auVar30 = ZEXT464((uint)fVar21);
      fVar21 = fVar21 * fVar21 + auVar32._0_4_ * auVar32._0_4_ + 0.0625;
      if (fVar21 < 0.0) {
        auVar38._0_8_ = FUN_18061e150(fVar21);
        auVar38._8_56_ = extraout_var_01;
        auVar24 = auVar38._0_16_;
      }
      else {
        auVar24 = ZEXT416((uint)SQRT(fVar21));
      }
      auVar38 = ZEXT1664(auVar24);
      sVar9 = thunk_FUN_180624430(auVar24._0_8_);
      local_108 = auVar36._0_4_;
      auVar31 = auVar37._0_16_;
      auVar24 = auVar27._0_16_;
      if ((0 < sVar9) || (fVar21 = auVar38._0_4_, fVar21 < 1e-06)) {
        auVar25 = auVar31;
        auVar26 = auVar31;
      }
      else {
        local_108 = 0.25 / fVar21;
        auVar25._0_4_ = auVar30._0_4_ / fVar21;
        auVar25._4_12_ = auVar30._4_12_;
        auVar26._0_4_ = auVar32._0_4_ / fVar21;
        auVar26._4_12_ = auVar32._4_12_;
      }
      auVar34 = vunpcklps_avx(auVar25,auVar26);
      local_110 = auVar34._0_8_;
      pcVar11 = "plane from heading";
      goto LAB_18031b454;
    }
  }
  else if ((!bVar8) || (auVar37._0_4_ <= auVar38._0_4_)) {
    *param_3 = "walkable ground";
  }
  pcVar11 = "plane from sweep";
LAB_18031b454:
  *param_3 = pcVar11;
  local_428 = (char **)CONCAT44(local_428._4_4_,0x41000000);
  auVar30 = ZEXT1664(auVar24);
  auVar32 = ZEXT1664(auVar31);
  puVar12 = (undefined8 *)FUN_18030c180(local_358,param_1[1],param_1[1] + 0x7c,&local_110);
  puVar14 = &local_238;
  do {
    puVar15 = puVar14;
    puVar13 = puVar12;
    uVar5 = puVar13[1];
    uVar6 = puVar13[2];
    uVar7 = puVar13[3];
    uVar2 = puVar13[0xe];
    uVar4 = puVar13[0xf];
    *puVar15 = *puVar13;
    puVar15[1] = uVar5;
    puVar15[2] = uVar6;
    puVar15[3] = uVar7;
    uVar5 = puVar13[5];
    uVar6 = puVar13[6];
    uVar7 = puVar13[7];
    puVar15[4] = puVar13[4];
    puVar15[5] = uVar5;
    puVar15[6] = uVar6;
    puVar15[7] = uVar7;
    uVar5 = puVar13[9];
    uVar6 = puVar13[10];
    uVar7 = puVar13[0xb];
    puVar15[8] = puVar13[8];
    puVar15[9] = uVar5;
    puVar15[10] = uVar6;
    puVar15[0xb] = uVar7;
    uVar5 = puVar13[0xd];
    puVar15[0xc] = puVar13[0xc];
    puVar15[0xd] = uVar5;
    puVar15[0xe] = uVar2;
    puVar15[0xf] = uVar4;
    lVar19 = lVar19 + -1;
    puVar12 = puVar13 + 0x10;
    puVar14 = puVar15 + 0x10;
  } while (lVar19 != 0);
  uVar4 = puVar13[0x11];
  uVar2 = puVar13[0x12];
  puVar15[0x10] = puVar13[0x10];
  puVar15[0x11] = uVar4;
  puVar15[0x12] = uVar2;
  fStack_388 = 1e+09;
  fStack_39c = 0.0;
  fStack_398 = 0.0;
  fStack_394 = 1.0;
  uStack_390 = 0;
  uStack_384 = 0;
  uStack_38c = auVar32._0_4_;
  local_370 = local_370 & 0xffffff00;
  local_3a0 = local_3a0 & 0xffffff00;
  *param_2 = (ulonglong)local_3a0;
  param_2[1] = 0x3f80000000000000;
  param_2[2] = (ulonglong)uStack_38c << 0x20;
  param_2[3] = 0x4e6e6b28;
  param_2[4] = 0x3f800000;
  param_2[5] = 0;
  *(uint *)(param_2 + 6) = local_370;
  *(double *)((longlong)param_2 + 4) = local_110;
  *(float *)((longlong)param_2 + 0xc) = local_108;
  auVar24 = vpcmpeqd_avx(ZEXT116((byte)local_238),SUB6416(ZEXT464(0),0));
  auVar24 = vblendvps_avx(ZEXT416(local_238._4_4_),auVar32._0_16_,auVar24);
  *(int *)(param_2 + 2) = auVar24._0_4_;
  *(undefined1 *)param_2 = 1;
  auVar30 = ZEXT1664(auVar30._0_16_);
  fVar21 = (float)FUN_18030c4c0(&local_110);
  *(float *)((longlong)param_2 + 0x14) = fVar21;
  *(undefined4 *)((longlong)param_2 + 0x1c) = 3;
  *(float *)(param_2 + 3) = fVar21 * auVar30._0_4_ + *(float *)(param_2 + 2);
  local_420 = param_1[8];
  local_3e0 = param_1[1] + 0x98;
  local_3b8 = (double)*(float *)(param_2 + 2);
  local_3c8 = (double)local_110._4_4_;
  local_3c0 = (double)local_108;
  local_368[0] = (double)(float)local_110;
  local_3b0 = (double)local_3d8._0_4_;
  local_110 = (double)fVar22;
  local_238 = 0xdb35e39b27e1c185;
  uStack_230 = 0xa05181ee77d57a06;
  uStack_228 = 0x929654b1461b7377;
  uStack_220 = 0xa5cea54bfef7110;
  local_218 = 0xa70c9f7f916b7e19;
  uStack_210 = 0x2b2d6d82aa402c0a;
  uStack_208 = 0xc064ed9510bc010b;
  uStack_200 = 0xfec09918395f26c4;
  local_1f8 = 0x835e2313e2c48f8d;
  uStack_1f0 = 0xf863c3261a551f0e;
  uStack_1e8 = 0x56a0bc092c25563f;
  uStack_1e0 = 0x67ff882c0a9bdf38;
  local_1d8 = 0xe9fbbd57d9292e61;
  uStack_1d0 = 0x24c1d5fafa9ec992;
  local_1c8 = 0xe0a313cd38802513;
  uStack_1c0 = 0x3a86d390ee208d6c;
  local_1b8 = 0x95484dcb29dcfd95;
  uStack_1b0 = 0xc5f2049e64fab916;
  local_1a8 = 0x99be47e160dada07;
  uStack_1a0 = 0x1047a904a2394520;
  local_198 = 0x9a6f01af4f2ca929;
  builtin_strncpy(local_358,
                  "[pixelsurf-probe] cmd={} the engine clipped a command with heading {:.0f} (vz {:+.2f} above free flight) -> {}: n=({:.3f},{:.3f},{:.3f}) gap={:.3f} engine_steps"
                  ,0xa0);
  uStack_190 = 0x91e97532caa6fc1a;
  builtin_strncpy(local_358 + 0xa0,"={}\n",5);
  local_358[0xa5] = '\0';
  local_358[0xa6] = '\0';
  local_358[0xa7] = '\0';
  local_358[0xa8] = '\0';
  local_358[0xa9] = '\0';
  local_358[0xaa] = '\0';
  local_358[0xab] = '\0';
  local_358[0xac] = '\0';
  local_358[0xad] = '\0';
  local_358[0xae] = '\0';
  local_358[0xaf] = '\0';
  lVar19 = -1;
  do {
    local_3d0 = lVar19 + 1;
    lVar16 = lVar19 + 1;
    lVar19 = local_3d0;
  } while (local_358[lVar16] != '\0');
  uVar2 = *(undefined8 *)param_1[8];
  local_3d8 = local_358;
  iVar17 = FUN_18060eb80(local_108 * 100.0);
  local_3e8 = &local_3b8;
  local_3f0 = &local_3c0;
  local_3f8 = &local_3c8;
  local_400 = local_368;
  local_410 = &local_3b0;
  local_418 = &local_110;
  local_428 = &local_3d8;
  local_408 = param_3;
  FUN_180330900(extraout_XMM0_Qa,(longlong)iVar17,uVar2);
}



