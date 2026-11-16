// FUN_1803ca340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ca340 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803ca340(ulonglong *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint3 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  ulonglong *puVar6;
  ulonglong uVar7;
  longlong *plVar8;
  byte *pbVar9;
  short sVar10;
  byte *pbVar11;
  undefined8 uVar12;
  ulonglong *puVar13;
  longlong lVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  float fVar17;
  uint uVar18;
  ulonglong *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  ulonglong uVar23;
  undefined1 in_ZMM2 [64];
  undefined1 auVar24 [16];
  float fVar25;
  undefined1 auVar26 [64];
  undefined8 uVar28;
  undefined1 auVar27 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  float fVar32;
  undefined1 auVar33 [64];
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [16];
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [16];
  undefined1 auStack_298 [32];
  float local_278;
  undefined8 local_270;
  undefined8 local_268;
  uint local_260;
  float local_258;
  undefined1 *local_250;
  undefined4 local_248;
  float local_238;
  float local_234;
  undefined1 local_228 [16];
  float local_218;
  uint local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  ulonglong *local_1f8;
  ulonglong local_1f0;
  float local_1e8;
  float local_1e4;
  longlong local_1e0;
  undefined8 local_1d8;
  ulonglong local_1d0;
  ulonglong local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8 [16];
  ulonglong *local_1a8;
  ulonglong local_1a0;
  ulonglong *local_198;
  ulonglong *local_190;
  ulonglong *local_188;
  ulonglong *local_180;
  ulonglong *local_178;
  ulonglong local_170;
  float local_158;
  float local_154;
  byte *local_150;
  byte *pbStack_148;
  byte *local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined1 local_120 [16];
  undefined8 local_110;
  ulonglong *local_108;
  byte *pbStack_100;
  byte **local_f8;
  ulonglong local_e8;
  undefined1 local_c8 [16];
  
  local_c8 = in_ZMM14._0_16_;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_298;
  auVar36 = ZEXT1664(in_ZMM2._0_16_);
  local_130 = in_ZMM2._0_4_;
  local_1b8._0_8_ = param_1;
  local_1c0 = param_2;
  sVar10 = thunk_FUN_180624430(in_ZMM2._0_8_);
  if (0 < sVar10) {
  }
  local_218 = auVar36._0_4_;
  if (local_218 <= 4.0) {
  }
  uVar18 = *(uint *)(param_2 + 9);
  auVar27 = ZEXT464(0x41000000);
  auVar31 = ZEXT464(0x41400000);
  auVar30 = auVar31._0_16_;
  if (uVar18 < 4) {
    if (uVar18 != 3) {
      if (uVar18 != 1) goto LAB_1803ca797;
      local_234 = 26.0;
      goto LAB_1803ca5a1;
    }
    auVar38._0_8_ =
         FUN_1802c3a60(*(undefined4 *)((longlong)param_2 + 0x74),0x41c00000,0x42500000,0x42000000);
    auVar38._8_56_ = extraout_var;
    auVar40 = ZEXT1664(auVar38._0_16_);
    local_234 = (float)auVar38._0_8_;
    auVar26 = ZEXT464(0x40c00000);
    auVar29._0_8_ =
         FUN_1802c3a60(*(undefined4 *)((longlong)param_2 + 0x7c),auVar26._0_8_,0x41c00000,0x41600000
                      );
    auVar29._8_56_ = extraout_var_00;
    auVar38 = ZEXT1664(auVar29._0_16_);
    local_214 = (uint)auVar29._0_8_;
    local_20c = (float)FUN_1802c3a60((int)param_2[0xf],auVar27._0_8_,0x41f00000,0x41800000);
    auVar30 = vpcmpeqd_avx(ZEXT416(3),SUB6416(ZEXT464(2),0));
    auVar34._12_4_ = 0;
    auVar34._0_12_ = ZEXT812(0);
    auVar29 = ZEXT1264(ZEXT812(0)) << 0x20;
    auVar30 = vblendvps_avx(auVar34 << 0x20,auVar38._0_16_,auVar30);
    auVar33 = ZEXT1664(auVar30);
    auVar34 = vminss_avx(ZEXT416((uint)(auVar36._0_4_ * 0.05)),auVar31._0_16_);
    local_238 = auVar34._0_4_;
    fVar17 = *(float *)((longlong)param_2 + 0x4c);
    local_1c8 = CONCAT44(local_1c8._4_4_,fVar17);
    local_1e4 = (float)(((((int)((float)((uint)fVar17 >> 0x18) * 0.72) & 0xffU) << 8 |
                         (uint)*(byte *)((longlong)param_2 + 0x4e)) << 8 |
                        (uint)*(byte *)((longlong)param_2 + 0x4d)) << 8 | (uint)fVar17 & 0xff);
    local_1e8 = auVar30._0_4_;
    auVar30 = vminss_avx(SUB6416(ZEXT464(0x41b00000),0),
                         ZEXT416((uint)(auVar40._0_4_ - auVar27._0_4_)));
    local_208 = auVar30._0_4_;
    local_218 = auVar36._0_4_ - (local_238 + local_238);
    auVar35 = ZEXT464((uint)local_218);
    auVar31._0_8_ = FUN_1802c3a60((int)param_2[0xe],0x41200000,0x41e00000,0x41700000);
    auVar31._8_56_ = extraout_var_01;
    auVar30 = vminss_avx(auVar31._0_16_,ZEXT416((uint)(auVar40._0_4_ - auVar27._0_4_)));
    auVar31 = ZEXT1664(auVar30);
    local_1e0 = CONCAT44(local_1e0._4_4_,auVar30._0_4_);
    auVar30 = vpcmpeqd_avx(ZEXT416(3),SUB6416(ZEXT464(1),0));
    auVar30 = vblendvps_avx(auVar27._0_16_,auVar26._0_16_,auVar30);
    auVar27 = ZEXT1664(auVar30);
    local_210 = auVar30._0_4_;
  }
  else {
    uVar18 = 0;
LAB_1803ca797:
    auVar34 = vpcmpeqd_avx(ZEXT416(uVar18),SUB6416(ZEXT464(2),0));
    auVar34 = vblendvps_avx(SUB6416(ZEXT464(0x42100000),0),SUB6416(ZEXT464(0x41f00000),0),auVar34);
    local_234 = auVar34._0_4_;
    if (uVar18 == 2) {
LAB_1803ca5a1:
      auVar34 = auVar27._0_16_;
    }
    else {
      auVar34 = auVar30;
    }
    auVar38 = ZEXT1664(auVar34);
    local_214 = auVar34._0_4_;
    auVar24 = vpcmpeqd_avx(ZEXT416(uVar18),SUB6416(ZEXT464(1),0));
    auVar24 = vblendvps_avx(auVar27._0_16_,SUB6416(ZEXT464(0x40c00000),0),auVar24);
    local_210 = auVar24._0_4_;
    auVar24 = SUB6416(ZEXT464(0x41b00000),0);
    if (uVar18 - 1 < 2) {
      auVar31 = ZEXT464(0x41900000);
      local_1e0 = CONCAT44(local_1e0._4_4_,0x41900000);
      if (uVar18 != 1) goto LAB_1803ca5ff;
      local_20c = 14.0;
      auVar37 = vpcmpeqd_avx(ZEXT416(1),SUB6416(ZEXT464(2),0));
      auVar34 = vblendvps_avx(ZEXT816(0),auVar34,auVar37);
      auVar30 = vminss_avx(ZEXT416((uint)(local_218 * 0.05)),auVar30);
      local_238 = auVar30._0_4_;
      auVar30 = vminss_avx(auVar24,ZEXT416((uint)(local_234 - 8.0)));
      local_208 = auVar30._0_4_;
    }
    else {
      auVar31 = ZEXT1664(auVar24);
      local_1e0 = CONCAT44(local_1e0._4_4_,0x41b00000);
LAB_1803ca5ff:
      auVar37 = vpcmpeqd_avx(ZEXT416(uVar18),SUB6416(ZEXT464(2),0));
      auVar37 = vblendvps_avx(SUB6416(ZEXT464(0x41a00000),0),SUB6416(ZEXT464(0x40a00000),0),auVar37)
      ;
      local_20c = auVar37._0_4_;
      auVar37 = vpcmpeqd_avx(ZEXT416(uVar18),SUB6416(ZEXT464(2),0));
      auVar34 = vblendvps_avx(ZEXT816(0),auVar34,auVar37);
      auVar30 = vminss_avx(ZEXT416((uint)(local_218 * 0.05)),auVar30);
      local_238 = auVar30._0_4_;
      auVar30 = vminss_avx(auVar24,ZEXT416((uint)(local_234 - 8.0)));
      local_208 = auVar30._0_4_;
    }
    auVar29 = ZEXT864(0);
    auVar33 = ZEXT1664(auVar34);
    local_218 = local_218 - (local_238 + local_238);
    auVar35 = ZEXT464((uint)local_218);
    local_1e8 = auVar34._0_4_;
    fVar17 = -NAN;
    local_1c8 = CONCAT44(local_1c8._4_4_,0xfff2efef);
    local_1e4 = -NAN;
    auVar27 = ZEXT464((uint)local_210);
  }
  local_200 = -NAN;
  local_150 = (byte *)0x0;
  pbStack_148 = (byte *)0x0;
  local_140 = (byte *)0x0;
  uVar23 = (param_2[7] - param_2[6]) / 0x58;
  if (uVar23 != 0) {
    if (0x2e8ba2e8ba2e8ba < uVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    pbVar11 = (byte *)FUN_18015bca0(uVar23 * 0x58);
    pbStack_148 = pbVar11;
    local_150 = pbVar11;
    local_140 = pbVar11 + uVar23 * 0x58;
    local_128 = &local_150;
    puVar5 = (undefined4 *)param_2[7];
    pbStack_100 = pbVar11;
    local_108 = (ulonglong *)pbVar11;
    local_f8 = &local_150;
    pbVar9 = pbVar11;
    if ((undefined4 *)param_2[6] != puVar5) {
      puVar15 = (undefined4 *)param_2[6] + 0x10;
      do {
        local_228._0_8_ = pbVar11;
        FUN_18015b360(pbVar11,puVar15 + -0x10);
        FUN_18015b360(pbVar11 + 0x20,puVar15 + -8);
        *(undefined4 *)(pbVar11 + 0x40) = *puVar15;
        pbVar11[0x44] = *(byte *)(puVar15 + 1);
        *(undefined8 *)(pbVar11 + 0x48) = *(undefined8 *)(puVar15 + 2);
        *(undefined8 *)(pbVar11 + 0x50) = *(undefined8 *)(puVar15 + 4);
        pbVar11 = pbVar11 + 0x58;
        pbStack_100 = pbVar11;
        puVar1 = puVar15 + 6;
        puVar15 = puVar15 + 0x16;
        pbVar9 = local_150;
      } while (puVar1 != puVar5);
    }
    local_150 = pbVar9;
    pbStack_148 = pbVar11;
  }
  local_120 = (undefined1  [16])0x0;
  local_110 = 0;
  uVar23 = ((longlong)pbStack_148 - (longlong)local_150) / 0x58;
  if (uVar23 != 0) {
    if (0x3fffffffffffffff < uVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_1801136f0();
    }
    uVar12 = FUN_18015bca0(uVar23 * 4);
    FUN_18063aed0(uVar12,local_120._0_8_,local_120._8_8_ - local_120._0_8_);
    FUN_180158f30(local_120,uVar12,0,uVar23);
  }
  puVar19 = (ulonglong *)(param_2 + 2);
  local_228._0_8_ = puVar19;
  puVar13 = puVar19;
  if (0xf < (ulonglong)param_2[5]) {
    puVar13 = (ulonglong *)*puVar19;
  }
  local_128 = (byte **)(param_2 + 4);
  lVar14 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (lVar14 == 0) {
    auVar26 = ZEXT1664(auVar29._0_16_);
  }
  else {
    local_1d8 = (char *)puVar13;
    local_1d0 = (ulonglong)*local_128;
    FUN_180430010(lVar14,&local_158,&local_1d8);
    auVar26 = ZEXT464((uint)local_158);
  }
  fVar25 = auVar27._0_4_;
  fVar32 = auVar33._0_4_;
  fVar22 = auVar26._0_4_;
  lVar14 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (lVar14 == 0) {
    fVar20 = auVar29._0_4_;
  }
  else {
    local_1d8 = "HVHGOD";
    local_1d0 = 6;
    FUN_180430010(lVar14,&local_158,&local_1d8);
    fVar25 = auVar27._0_4_;
    fVar32 = auVar33._0_4_;
    fVar22 = auVar26._0_4_;
    fVar20 = local_158;
  }
  pbVar9 = pbStack_148;
  plVar8 = local_1c0;
  local_204 = auVar31._0_4_ + auVar38._0_4_ + fVar25 + fVar20 + fVar25 + fVar22 + auVar38._0_4_;
  auVar27 = ZEXT464((uint)local_204);
  if (local_150 != pbStack_148) {
    auVar36 = ZEXT464((uint)(fVar32 + fVar32));
    auVar38 = ZEXT464(0x431b0000);
    auVar33 = ZEXT464(0x43160000);
    auVar31 = ZEXT464((uint)local_20c);
    pbVar11 = local_150 + 0x44;
    fVar17 = local_210;
    fVar22 = local_208;
    do {
      auVar34 = vpcmpeqd_avx(ZEXT116(*pbVar11),ZEXT416(0));
      auVar30 = vblendvps_avx(auVar33._0_16_,auVar38._0_16_,auVar34);
      auVar35 = ZEXT1664(auVar30);
      puVar19 = (ulonglong *)(pbVar11 + -0x44);
      uVar12 = FUN_18015b360(&local_108,puVar19,auVar34._0_8_);
      puVar13 = (ulonglong *)FUN_1803ca000(&local_178,uVar12,auVar35._0_8_);
      auVar41 = auVar33._0_16_;
      auVar39 = auVar38._0_16_;
      auVar37 = auVar31._0_16_;
      auVar24 = auVar36._0_16_;
      auVar34 = auVar29._0_16_;
      auVar30 = auVar27._0_16_;
      if (puVar19 != puVar13) {
        FUN_18015c010(puVar19);
        auVar41 = auVar33._0_16_;
        auVar39 = auVar38._0_16_;
        auVar37 = auVar31._0_16_;
        auVar24 = auVar36._0_16_;
        auVar34 = auVar29._0_16_;
        auVar30 = auVar27._0_16_;
        uVar23 = puVar13[1];
        uVar16 = puVar13[2];
        uVar7 = puVar13[3];
        *puVar19 = *puVar13;
        *(ulonglong *)(pbVar11 + -0x3c) = uVar23;
        *(ulonglong *)(pbVar11 + -0x34) = uVar16;
        *(ulonglong *)(pbVar11 + -0x2c) = uVar7;
        puVar13[2] = 0;
        puVar13[3] = 0xf;
        *(byte *)puVar13 = 0;
      }
      auVar27 = ZEXT1664(auVar30);
      auVar29 = ZEXT1664(auVar34);
      auVar36 = ZEXT1664(auVar24);
      auVar31 = ZEXT1664(auVar37);
      auVar38 = ZEXT1664(auVar39);
      auVar33 = ZEXT1664(auVar41);
      FUN_18015c010(&local_178);
      if ((*pbVar11 == 0) || ((uVar18 == 3 && ((char)plVar8[0x10] == '\0')))) {
        auVar35 = ZEXT1664(auVar29._0_16_);
      }
      else {
        auVar35 = ZEXT464((uint)(fVar22 + fVar17));
      }
      puVar13 = (ulonglong *)(pbVar11 + -0x24);
      if (0xf < *(ulonglong *)(pbVar11 + -0xc)) {
        puVar13 = (ulonglong *)*puVar13;
      }
      if (0xf < *(ulonglong *)(pbVar11 + -0x2c)) {
        puVar19 = (ulonglong *)*puVar19;
      }
      uVar12 = *(undefined8 *)(pbVar11 + -0x34);
      lVar14 = DAT_180bbade0;
      if (DAT_180bbadc8 != DAT_180bbadd0) {
        lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (lVar14 == 0) {
        local_1d8 = (char *)CONCAT44(auVar29._0_4_,auVar29._0_4_);
        auVar26 = ZEXT1664(auVar29._0_16_);
      }
      else {
        local_1a8 = puVar13;
        local_1a0 = *(ulonglong *)(pbVar11 + -0x14);
        FUN_180430010(lVar14,&local_1d8,&local_1a8);
        auVar26 = ZEXT464((uint)local_1d8);
      }
      fVar32 = auVar35._0_4_;
      fVar25 = auVar26._0_4_;
      lVar14 = DAT_180bbade0;
      if (DAT_180bbadc8 != DAT_180bbadd0) {
        lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (lVar14 == 0) {
        local_158 = auVar29._0_4_;
        local_154 = local_158;
      }
      else {
        local_1f8 = puVar19;
        local_1f0 = uVar12;
        FUN_180430010(lVar14,&local_158,&local_1f8);
        fVar32 = auVar35._0_4_;
        fVar25 = auVar26._0_4_;
      }
      auVar30 = vmaxss_avx(ZEXT416((uint)(fVar25 + local_158 + fVar32)),
                           ZEXT416(*(uint *)(pbVar11 + -4)));
      local_138 = auVar30._0_4_ + auVar36._0_4_;
      FUN_1802aa650(local_120,&local_138);
      auVar27 = ZEXT464((uint)(auVar27._0_4_ + auVar31._0_4_ + *(float *)(local_120._8_8_ + -4)));
      pbVar2 = pbVar11 + 0x14;
      pbVar11 = pbVar11 + 0x58;
    } while (pbVar2 != pbVar9);
    auVar38 = ZEXT464(local_214);
    auVar36 = ZEXT464((uint)local_130);
    auVar35 = ZEXT464((uint)local_218);
    auVar31 = ZEXT464((uint)local_1e0);
    param_1 = (ulonglong *)local_1b8._0_8_;
    puVar19 = (ulonglong *)local_228._0_8_;
    param_2 = local_1c0;
    fVar17 = (float)local_1c8;
  }
  fVar22 = auVar36._0_4_;
  auVar34 = auVar35._0_16_;
  auVar30 = auVar27._0_16_;
  if (auVar35._0_4_ < auVar27._0_4_) {
    fVar25 = local_20c;
    do {
      pbVar9 = pbStack_148;
      fVar22 = auVar36._0_4_;
      auVar34 = auVar35._0_16_;
      auVar30 = auVar27._0_16_;
      if (local_150 == pbStack_148) break;
      auVar27 = ZEXT464((uint)(auVar27._0_4_ - (fVar25 + *(float *)(local_120._8_8_ + -4))));
      local_120._8_8_ = (float *)(local_120._8_8_ + -4);
      FUN_18015c010(pbStack_148 + -0x38);
      FUN_18015c010(pbVar9 + -0x58);
      fVar22 = auVar36._0_4_;
      auVar34 = auVar35._0_16_;
      auVar30 = auVar27._0_16_;
      pbStack_148 = pbStack_148 + -0x58;
    } while (auVar35._0_4_ < auVar27._0_4_);
  }
  auVar30 = vminss_avx(auVar34,auVar30);
  auVar35 = ZEXT1664(auVar30);
  fVar22 = (fVar22 - local_238) - auVar30._0_4_;
  auVar36 = ZEXT464((uint)fVar22);
  fVar25 = 0.5;
  auVar34 = vshufps_avx(ZEXT416((uint)(local_234 * 0.5)),ZEXT416((uint)(local_234 * 0.5)),0);
  auVar27 = ZEXT1664(auVar34);
  auVar33 = ZEXT464((uint)(local_238 + auVar34._0_4_));
  if (uVar18 == 3) {
    fVar22 = local_238;
    fVar20 = (float)FUN_1802c3a60(*(undefined4 *)((longlong)param_2 + 0x6c),auVar29._0_8_,0x40a00000
                                  ,0x3f99999a);
    fVar21 = (float)FUN_1802c3a60((int)param_2[0xd],auVar29._0_8_,0x40000000,0x3fb33333);
    fVar32 = local_234;
    if ((auVar29._0_4_ < fVar20) && (auVar29._0_4_ < fVar21)) {
      local_228 = auVar27._0_16_;
      local_268 = (ulonglong **)local_228;
      local_270 = (undefined1 *)
                  CONCAT44(local_270._4_4_,
                           ((((int)((float)*(byte *)((longlong)param_2 + 0x5b) * fVar21 * 0.25) &
                             0xffU) << 8 | (uint)*(byte *)((longlong)param_2 + 0x5a)) << 8 |
                           (uint)*(byte *)((longlong)param_2 + 0x59)) << 8 |
                           (uint)*(byte *)(param_2 + 0xb));
      local_278 = local_234;
      FUN_180430970(param_1,auVar36._0_8_,fVar22 + fVar20,auVar35._0_8_);
    }
    auVar26 = ZEXT464(0x3f800000);
    fVar22 = (float)FUN_1802c3a60(*(undefined4 *)((longlong)param_2 + 100),auVar29._0_8_,
                                  auVar26._0_8_,auVar26._0_8_);
    if (auVar29._0_4_ < fVar22) {
      local_228 = auVar27._0_16_;
      local_268 = (ulonglong **)(CONCAT44(local_268._4_4_,(int)(fVar22 * 255.0) << 0x18) | 0xffffff)
      ;
      local_270 = local_228;
      local_278 = fVar32;
      FUN_180431970(param_1,auVar36._0_8_,local_238,auVar35._0_8_);
    }
    local_228 = auVar27._0_16_;
    local_268 = (ulonglong **)local_228;
    local_278 = fVar32;
    local_270._0_4_ = *(undefined4 *)((longlong)param_2 + 0x54);
    FUN_180430970(param_1,auVar36._0_8_,local_238,auVar35._0_8_);
    puVar3 = (uint3 *)(param_2 + 10);
    local_218 = (float)(uint)*puVar3;
    local_214 = (uint)*puVar3;
    local_270._0_4_ =
         ((((int)((float)*(byte *)((longlong)param_2 + 0x53) * 0.22) & 0xffU) << 8 |
          (uint)*(byte *)((longlong)param_2 + 0x52)) << 8 |
         (uint)*(byte *)((longlong)param_2 + 0x51)) << 8 | (uint)(byte)*puVar3;
    local_228 = auVar27._0_16_;
    local_250 = local_228;
    local_258 = local_218;
    local_260 = local_214;
    local_268 = (ulonglong **)CONCAT44(local_268._4_4_,(uint)local_270);
    local_278 = fVar32;
    FUN_180430c00(param_1,auVar36._0_8_,local_238,auVar35._0_8_);
    local_228 = auVar27._0_16_;
    local_260 = auVar26._0_4_;
    local_268 = (ulonglong **)local_228;
    local_270 = (undefined1 *)
                CONCAT44(local_270._4_4_,
                         ((((int)((float)*(byte *)((longlong)param_2 + 0x53) * 0.42) & 0xffU) << 8 |
                          (uint)*(byte *)((longlong)param_2 + 0x52)) << 8 |
                         (uint)*(byte *)((longlong)param_2 + 0x51)) << 8 |
                         (uint)*(byte *)(param_2 + 10));
    local_278 = fVar32;
    FUN_1804330f0(param_1,auVar36._0_8_,local_238,auVar35._0_8_);
    uVar12 = auVar35._0_8_;
    local_278 = fVar32;
LAB_1803caec3:
    uVar23 = (ulonglong)(uint)local_238;
  }
  else {
    puVar13 = (ulonglong *)0x4110000041100000;
    uVar12 = 0x4110000041100000;
    if (uVar18 == 1) {
      local_270._0_4_ = 0xe6121212;
      local_278 = local_234;
      fVar32 = local_234;
      fVar20 = local_238;
      FUN_1804307e0(param_1,fVar22,local_238,auVar30._0_8_);
      auVar26 = ZEXT464(0x3f800000);
      local_270 = (undefined1 *)CONCAT44(local_270._4_4_,0xafaca5a5);
      local_278 = 1.0;
      FUN_1804307e0(param_1,auVar36._0_8_,(fVar32 + fVar20) - 1.0,auVar35._0_8_);
      uVar12 = auVar35._0_8_;
      local_278 = local_234;
      goto LAB_1803caec3;
    }
    if (uVar18 == 2) {
      local_278 = local_234;
      fVar32 = local_234;
      FUN_180430680(param_1,fVar22,local_238);
      uVar12 = 0x40a0000040a00000;
      uVar28 = 0x40a0000040a00000;
      local_108 = (ulonglong *)0x40a0000040a00000;
      pbStack_100 = (byte *)0x40a0000040a00000;
      local_268 = &local_108;
      local_270._0_4_ = 0xf8392a1c;
      auVar27 = ZEXT464((uint)local_204);
      local_278 = fVar32;
      FUN_180430970(param_1,auVar36._0_8_,local_238,local_204);
      pbStack_100 = (byte *)uVar28;
      local_108 = (ulonglong *)uVar12;
      auVar26 = ZEXT464(0x3f800000);
      local_260 = 0x3f800000;
      local_268 = &local_108;
      local_270 = (undefined1 *)CONCAT44(local_270._4_4_,0x80f0d1aa);
      local_278 = local_234;
      FUN_1804330f0(param_1,auVar36._0_8_,local_238,auVar27._0_8_);
      goto LAB_1803cb0d4;
    }
    pbStack_100 = (byte *)0x4120000041200000;
    local_108 = (ulonglong *)0x4120000041200000;
    local_268 = &local_108;
    local_270._0_4_ = 0x3c000000;
    local_278 = local_234;
    fVar32 = local_234;
    FUN_180430970(param_1,fVar22,local_238 + 4.0);
    local_268 = (ulonglong **)local_228;
    local_270._0_4_ = 0xf2110f0f;
    auVar27 = ZEXT464((uint)local_238);
    local_278 = fVar32;
    local_228._0_8_ = puVar13;
    local_228._8_8_ = uVar12;
    FUN_180430970(param_1,auVar36._0_8_,local_238,auVar35._0_8_);
    local_228._8_8_ = uVar12;
    local_228._0_8_ = puVar13;
    auVar26 = ZEXT464(0x3f800000);
    local_260 = 0x3f800000;
    local_268 = (ulonglong **)local_228;
    local_270 = (undefined1 *)CONCAT44(local_270._4_4_,0x1effffff);
    local_278 = local_234;
    fVar22 = local_234;
    FUN_1804330f0(param_1,auVar36._0_8_,auVar27._0_8_,auVar35._0_8_);
    uVar12 = auVar35._0_8_;
    uVar23 = auVar27._0_8_;
    local_278 = fVar22;
  }
  FUN_180430680(param_1,auVar36._0_8_,uVar23,uVar12);
  auVar27 = ZEXT464((uint)local_204);
LAB_1803cb0d4:
  fVar22 = auVar36._0_4_ + auVar38._0_4_;
  if (*param_2 != 0) {
    if (uVar18 == 3) {
      local_248 = (undefined4)param_2[0xc];
    }
    else {
      local_248 = 0xffffffff;
    }
    local_278 = auVar31._0_4_;
    local_258 = auVar26._0_4_;
    local_250 = (undefined1 *)CONCAT44(local_250._4_4_,local_258);
    local_260 = auVar29._0_4_;
    local_268 = (ulonglong **)CONCAT44(local_268._4_4_,local_260);
    local_270 = (undefined1 *)*param_2;
    FUN_180435220(param_1,fVar22,auVar33._0_4_ - local_278 * fVar25,auVar31._0_8_);
  }
  fVar32 = auVar31._0_4_ + local_210;
  auVar31 = ZEXT464((uint)(fVar32 + fVar22));
  fVar22 = fVar17;
  if (uVar18 == 2) {
    fVar22 = local_200;
  }
  if (DAT_180bbadc8 == DAT_180bbadd0) {
    lVar14 = DAT_180bbade0;
  }
  else {
    lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  if (lVar14 == 0) {
    auVar35 = ZEXT1664(auVar29._0_16_);
    fVar32 = auVar29._0_4_;
  }
  else {
    local_1f8 = (ulonglong *)0x1807d4e10;
    local_1f0 = 6;
    FUN_180430010(fVar32,&local_158,&local_1f8);
    auVar35 = ZEXT464((uint)local_158);
    fVar32 = local_154;
  }
  local_1f8 = (ulonglong *)0x1807d4e10;
  local_1f0 = 6;
  auVar30 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar33._0_4_ - fVar32 * fVar25)),1);
  auVar34 = vroundss_avx(ZEXT816(0),auVar31._0_16_,1);
  local_270 = (undefined1 *)0x0;
  local_278 = fVar22;
  FUN_1804340b0(param_1,auVar34._0_8_,auVar30._0_8_,&local_1f8);
  fVar22 = auVar35._0_4_ + auVar31._0_4_;
  fVar32 = fVar22 + local_210;
  auVar31 = ZEXT464((uint)fVar32);
  auVar30 = ZEXT416((uint)fVar32);
  if (0xf < puVar19[3]) {
    puVar19 = (ulonglong *)*puVar19;
  }
  uVar23 = (ulonglong)*local_128;
  if (DAT_180bbadc8 == DAT_180bbadd0) {
    lVar14 = DAT_180bbade0;
  }
  else {
    lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
  }
  fVar32 = local_210;
  if (lVar14 == 0) {
    fVar22 = auVar29._0_4_;
  }
  else {
    local_1f8 = puVar19;
    local_1f0 = uVar23;
    FUN_180430010(fVar22,&local_128,&local_1f8);
    auVar30 = auVar31._0_16_;
    fVar22 = local_128._4_4_;
  }
  auVar34 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar33._0_4_ - fVar22 * fVar25)),1);
  auVar30 = vroundss_avx(ZEXT816(0),auVar30,1);
  local_270 = (undefined1 *)0x0;
  local_278 = local_1e4;
  local_1f8 = puVar19;
  local_1f0 = uVar23;
  FUN_1804340b0(param_1,auVar30._0_8_,auVar34._0_8_,&local_1f8);
  fVar22 = auVar38._0_4_;
  if ((uVar18 == 2) || (local_150 == pbStack_148)) {
    fVar22 = auVar29._0_4_;
  }
  fVar22 = (auVar36._0_4_ + auVar27._0_4_) - fVar22;
  local_1c8 = 0;
  if (((longlong)pbStack_148 - (longlong)local_150) / 0x58 != 0) {
    local_1e0 = 0;
    do {
      puVar19 = (ulonglong *)(local_150 + local_1e0);
      if (uVar18 == 2) {
        uVar4 = *(uint *)(local_120._0_8_ + local_1c8 * 4);
        auVar36 = ZEXT464(uVar4);
        auVar27 = ZEXT464((uint)(fVar22 + local_20c));
        uVar12 = 0x40a0000040a00000;
        uVar28 = 0x40a0000040a00000;
        local_228._0_8_ = (ulonglong *)0x40a0000040a00000;
        local_228._8_8_ = 0x40a0000040a00000;
        local_268 = (ulonglong **)local_228;
        local_270._0_4_ = 0xf21e1916;
        local_278 = local_234;
        fVar32 = local_234;
        FUN_180430970(param_1,fVar22 + local_20c,local_238,uVar4);
        local_228._8_8_ = uVar28;
        local_228._0_8_ = uVar12;
        local_260 = auVar26._0_4_;
        local_268 = (ulonglong **)local_228;
        local_270 = (undefined1 *)CONCAT44(local_270._4_4_,0x2df0d1aa);
        local_278 = fVar32;
        FUN_1804330f0(param_1,auVar27._0_8_,local_238,auVar36._0_8_);
        fVar32 = local_210;
      }
      else {
        fVar20 = fVar25 * local_20c + fVar22;
        if (uVar18 == 1) {
          local_278 = auVar33._0_4_ + 5.0;
          local_268 = (ulonglong **)CONCAT44(local_268._4_4_,auVar26._0_4_);
          local_270 = (undefined1 *)CONCAT44(local_270._4_4_,0x36ffffff);
          FUN_180433450(param_1,fVar20,auVar33._0_4_ - 5.0,fVar20);
        }
        else {
          if (uVar18 == 3) {
            if (*(byte *)((longlong)puVar19 + 0x4c) == 0) {
              local_278 = *(float *)(param_2 + 10);
            }
            else {
              local_278 = *(float *)(puVar19 + 9);
            }
          }
          else {
            local_278 = 2.980232e-08;
          }
          auVar30 = vpcmpeqd_avx(ZEXT416(uVar18),SUB6416(ZEXT464(3),0));
          auVar30 = vblendvps_avx(SUB6416(ZEXT464(0x3fc00000),0),SUB6416(ZEXT464(0x40000000),0),
                                  auVar30);
          local_270 = (undefined1 *)((ulonglong)local_270._4_4_ << 0x20);
          FUN_180432510(param_1,fVar20,auVar33._0_8_,auVar30._0_8_);
        }
      }
      fVar22 = fVar22 + local_20c;
      fVar20 = local_1e8 + fVar22;
      auVar36 = ZEXT464((uint)fVar20);
      if (*(byte *)((longlong)puVar19 + 0x44) == 0) {
LAB_1803cb5dd:
        if (uVar18 == 3) goto LAB_1803cb5e3;
        local_128._0_5_ = (uint5)(uint)local_128;
        local_1d8 = (char *)local_128;
      }
      else {
        if ((uVar18 != 3) || ((char)param_2[0x10] != '\0')) {
          auVar30 = vshufps_avx(ZEXT416((uint)(local_208 * fVar25)),
                                ZEXT416((uint)(local_208 * fVar25)),0);
          auVar27 = ZEXT1664(auVar30);
          if (param_2[1] == 0) {
            fVar20 = auVar30._0_4_ + fVar20;
            local_270 = (undefined1 *)((ulonglong)local_270 & 0xffffffff00000000);
            local_278 = 1.0097419e-28;
            FUN_180432510(param_1,fVar20,auVar33._0_8_,auVar30._0_8_);
            uVar16 = 1;
            uVar23 = puVar19[2];
            if (1 < uVar23) {
              do {
                puVar13 = puVar19;
                if (0xf < puVar19[3]) {
                  puVar13 = (ulonglong *)*puVar19;
                }
              } while (((*(byte *)((longlong)puVar13 + uVar16) & 0xc0) == 0x80) &&
                      (uVar16 = uVar16 + 1, uVar16 < uVar23));
            }
            if (uVar23 == 0) {
              puVar13 = (ulonglong *)&DAT_18080cdf8;
              uVar16 = 1;
            }
            else {
              puVar13 = puVar19;
              if (0xf < puVar19[3]) {
                puVar13 = (ulonglong *)*puVar19;
              }
              if (uVar23 < uVar16) {
                uVar16 = uVar23;
              }
            }
            if (DAT_180bbadc8 == DAT_180bbadd0) {
              lVar14 = DAT_180bbade0;
            }
            else {
              lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
            }
            if (lVar14 == 0) {
              local_130 = auVar29._0_4_;
              local_12c = local_130;
            }
            else {
              local_1f8 = puVar13;
              local_1f0 = uVar16;
              FUN_180430010(lVar14,&local_130,&local_1f8);
            }
            local_270 = (undefined1 *)0x0;
            local_278 = fVar17;
            local_1a8 = puVar13;
            local_1a0 = uVar16;
            FUN_1804340b0(param_1,fVar20 - local_130 * fVar25,auVar33._0_4_ - local_12c * fVar25,
                          &local_1a8);
            uVar12 = auVar27._0_8_;
            fVar21 = local_208;
          }
          else {
            local_260 = 0xffffffff;
            local_268 = (ulonglong **)local_1b8;
            local_278 = local_208;
            fVar21 = local_208;
            local_270 = (undefined1 *)param_2[1];
            local_1b8 = auVar30;
            FUN_1804346e0(param_1,fVar20,auVar33._0_4_ - auVar30._0_4_,local_208);
            uVar12 = auVar27._0_8_;
          }
          fVar20 = auVar36._0_4_;
          if (uVar18 == 3) {
            local_268 = (ulonglong **)((ulonglong)local_268 & 0xffffffff00000000);
            local_270 = (undefined1 *)CONCAT44(local_270._4_4_,auVar26._0_4_);
            local_278 = *(float *)((longlong)param_2 + 0x5c);
            FUN_180433240(param_1,(float)uVar12 + fVar20,auVar33._0_8_,uVar12);
            fVar20 = auVar36._0_4_;
          }
          auVar36 = ZEXT464((uint)(fVar20 + fVar21 + fVar32));
          goto LAB_1803cb5dd;
        }
LAB_1803cb5e3:
        local_1d8 = (char *)puVar19[10];
      }
      fVar21 = SUB84(local_1d8,0);
      fVar20 = fVar17;
      if ((char)((ulonglong)local_1d8 >> 0x20) != '\0') {
        fVar20 = fVar21;
      }
      puVar13 = puVar19;
      if (0xf < puVar19[3]) {
        puVar13 = (ulonglong *)*puVar19;
      }
      puVar6 = (ulonglong *)puVar19[2];
      local_228._0_8_ = puVar6;
      if (DAT_180bbadc8 == DAT_180bbadd0) {
        lVar14 = DAT_180bbade0;
      }
      else {
        lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (lVar14 == 0) {
        auVar27 = ZEXT1664(auVar29._0_16_);
        local_138 = auVar29._0_4_;
        local_180 = puVar6;
        local_134 = local_138;
      }
      else {
        local_198 = puVar13;
        local_190 = puVar6;
        FUN_180430010(lVar14,&local_138,&local_198);
        auVar27 = ZEXT464((uint)local_138);
        local_180 = (ulonglong *)local_228._0_8_;
      }
      auVar30 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar33._0_4_ - local_134 * fVar25)),1);
      auVar34 = vroundss_avx(ZEXT816(0),auVar36._0_16_,1);
      local_270 = (undefined1 *)0x0;
      local_278 = fVar20;
      local_188 = puVar13;
      FUN_1804340b0(param_1,auVar34._0_8_,auVar30._0_8_,&local_188);
      fVar20 = auVar36._0_4_ + auVar27._0_4_;
      auVar36 = ZEXT464((uint)fVar20);
      auVar30 = ZEXT416((uint)fVar20);
      fVar20 = local_1e4;
      if (local_1d8._4_1_ != '\0') {
        fVar20 = fVar21;
      }
      puVar13 = puVar19 + 4;
      if (0xf < puVar19[7]) {
        puVar13 = (ulonglong *)puVar19[4];
      }
      uVar23 = puVar19[6];
      if (DAT_180bbadc8 == DAT_180bbadd0) {
        lVar14 = DAT_180bbade0;
      }
      else {
        lVar14 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (lVar14 == 0) {
        local_158 = auVar29._0_4_;
        local_154 = local_158;
      }
      else {
        local_178 = puVar13;
        local_170 = uVar23;
        FUN_180430010(lVar14,&local_158,&local_178);
        auVar30 = auVar36._0_16_;
      }
      pbStack_100 = (byte *)uVar23;
      local_108 = puVar13;
      auVar34 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar33._0_4_ - local_154 * fVar25)),1);
      auVar30 = vroundss_avx(ZEXT816(0),auVar30,1);
      local_270 = (undefined1 *)0x0;
      local_278 = fVar20;
      FUN_1804340b0(param_1,auVar30._0_8_,auVar34._0_8_,&local_108);
      fVar22 = fVar22 + *(float *)(local_120._0_8_ + local_1c8 * 4);
      local_1c8 = local_1c8 + 1;
      local_1e0 = local_1e0 + 0x58;
      param_2 = local_1c0;
    } while (local_1c8 < (ulonglong)(((longlong)pbStack_148 - (longlong)local_150) / 0x58));
  }
  if (param_1[0xc] != param_1[0xd]) {
    param_1[0xd] = param_1[0xd] - 0x10;
  }
  FUN_180159650(local_120);
  FUN_1803ce7f0(&local_150);
}



