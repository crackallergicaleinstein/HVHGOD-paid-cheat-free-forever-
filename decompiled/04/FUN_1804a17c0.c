// FUN_1804a17c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a17c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a17c0(longlong *param_1)

{
  int *piVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  longlong *plVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  float *pfVar11;
  longlong lVar12;
  char *pcVar13;
  undefined2 *puVar14;
  longlong lVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  longlong lVar22;
  int iVar23;
  longlong lVar24;
  longlong lVar25;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar26 [64];
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  float fVar39;
  float fVar40;
  undefined1 auStack_198 [32];
  float local_178;
  undefined *local_170;
  undefined8 local_168;
  undefined2 local_158;
  uint local_154;
  int local_150;
  float local_14c;
  float local_148;
  undefined8 local_140;
  longlong local_138;
  undefined4 local_130;
  undefined4 local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined4 local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  undefined1 local_e8 [4];
  undefined1 local_e4 [4];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  ulonglong local_d0;
  
  lVar25 = DAT_180bb8ae8;
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  fVar33 = 0.5;
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 24.0 + 0.5)),1);
  auVar38 = ZEXT1664(auVar6);
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar15 = *(longlong *)(lVar25 + 0x14d0);
  local_140 = *(undefined8 *)(lVar15 + 0x2c8);
  fVar34 = *(float *)(lVar15 + 0x118);
  fVar40 = *(float *)(lVar15 + 0x11c);
  if ((*(longlong *)(lVar15 + 0x1c8) == 0) && (*(longlong *)(lVar25 + 0x2338) == 0)) {
    pfVar11 = (float *)(lVar15 + 0x280);
  }
  else {
    pfVar11 = (float *)(lVar15 + 0x250);
  }
  fVar27 = *pfVar11 - fVar34;
  local_d4 = auVar6._0_4_ * 16.0;
  local_14c = fVar34;
  local_d8 = fVar27;
  FUN_1804c6420(&local_d8,0xbf800000);
  lVar15 = *param_1;
  auVar37 = ZEXT464(0x3f800000);
  if (*(char *)(lVar15 + 0x6ccb) == '\0') {
    local_154 = DAT_180b0a40c;
  }
  else {
    local_138 = *(longlong *)(lVar15 + 0x6ccc);
    local_130 = *(undefined4 *)(lVar15 + 0x6cd4);
    local_12c = 0x3f800000;
    local_154 = FUN_1804b1120(&local_138);
  }
  lVar25 = DAT_180bb8ae8;
  if ((-1 < *(int *)(lVar15 + 0x6dc0)) &&
     ((*(char *)(DAT_180bb8ae8 + 0x118) == '\0' ||
      (lVar12 = FUN_1804af210(DAT_180bb8ae8,0x290), *(char *)(lVar12 + 8) != '\0')))) {
    *(undefined4 *)(lVar15 + 0x6dc0) = 0xffffffff;
  }
  lVar15 = *param_1;
  iVar10 = *(int *)(lVar15 + 0x6dc0);
  fVar28 = auVar38._0_4_;
  if (-1 < iVar10) {
    uVar17 = (uint)(*(int *)(lVar15 + 0x6c78) == iVar10);
    if (*(int *)(lVar15 + 0x6c7c) == iVar10) {
      uVar17 = 2;
    }
    if (*(int *)(lVar15 + 0x6c80) == iVar10) {
      uVar17 = 3;
    }
    if (*(int *)(lVar15 + 0x6c84) == iVar10) {
      uVar17 = 4;
    }
    if (*(int *)(lVar15 + 0x6c88) == iVar10) {
      uVar17 = 5;
    }
    if (*(int *)(lVar15 + 0x6c8c) == iVar10) {
      uVar17 = 6;
    }
    if (*(int *)(lVar15 + 0x6c90) == iVar10) {
      uVar17 = 7;
    }
    if (*(int *)(lVar15 + 0x6c94) == iVar10) {
      uVar17 = 8;
    }
    if (*(int *)(lVar15 + 0x6c98) == iVar10) {
      uVar17 = 9;
    }
    if (*(int *)(lVar15 + 0x6c9c) == iVar10) {
      uVar17 = 10;
    }
    if (*(int *)(lVar15 + 0x6ca0) == iVar10) {
      uVar17 = 0xb;
    }
    if (*(int *)(lVar15 + 0x6ca4) == iVar10) {
      uVar17 = 0xc;
    }
    if (*(int *)(lVar15 + 0x6ca8) == iVar10) {
      uVar17 = 0xd;
    }
    if (*(int *)(lVar15 + 0x6cac) == iVar10) {
      uVar17 = 0xe;
    }
    if (*(int *)(lVar15 + 0x6cb0) == iVar10) {
      uVar17 = 0xf;
    }
    uVar8 = (uint)((((*(float *)(param_1[1] + 0xec) - *(float *)(lVar15 + 0x6dc4)) - fVar40) +
                   fVar28 * fVar33) / fVar28);
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
    else if (0xf < (int)uVar8) {
      uVar8 = 0xf;
    }
    if (uVar8 != uVar17) {
      lVar24 = (longlong)(int)uVar17;
      lVar22 = (longlong)(int)uVar8;
      lVar12 = lVar24 * 4 + 0x6c74;
      uVar9 = *(undefined4 *)(lVar15 + lVar12);
      if ((int)uVar17 < (int)uVar8) {
        if (lVar24 < lVar22) {
          lVar24 = lVar22 - lVar24;
          do {
            lVar12 = lVar12 + 4;
            *(undefined4 *)(*param_1 + -4 + lVar12) = *(undefined4 *)(lVar12 + *param_1);
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
        }
      }
      else if (lVar22 < lVar24) {
        lVar24 = lVar24 - lVar22;
        do {
          *(undefined4 *)(lVar12 + *param_1) = *(undefined4 *)(lVar12 + -4 + *param_1);
          lVar24 = lVar24 + -1;
          lVar12 = lVar12 + -4;
        } while (lVar24 != 0);
      }
      *(undefined4 *)(*param_1 + 0x6c74 + lVar22 * 4) = uVar9;
    }
  }
  local_150 = 0;
  fVar39 = 255.0;
  local_148 = fVar34 + fVar27;
  local_138 = 0x6c74;
  fVar28 = fVar28 * fVar33;
  auVar36 = ZEXT864(0);
  do {
    iVar7 = local_150;
    fVar34 = 20.0;
    lVar15 = *(longlong *)(lVar25 + 0x14d0);
    uVar17 = *(uint *)(local_138 + *param_1);
    lVar25 = (longlong)(int)uVar17;
    uVar9 = FUN_1804c2670(lVar15,uVar17);
    iVar10 = *(int *)(lVar15 + 0x10c);
    piVar1 = (int *)(lVar15 + 0x108);
    if (*piVar1 == iVar10) {
      iVar23 = *piVar1 + 1;
      if (iVar10 == 0) {
        iVar10 = 8;
      }
      else {
        iVar10 = iVar10 / 2 + iVar10;
      }
      if (iVar23 < iVar10) {
        iVar23 = iVar10;
      }
      FUN_1804d14d0(piVar1,iVar23);
    }
    lVar12 = DAT_180bb8ae8;
    *(undefined4 *)(*(longlong *)(lVar15 + 0x110) + (longlong)*piVar1 * 4) = uVar9;
    *piVar1 = *piVar1 + 1;
    plVar4 = *(longlong **)(lVar12 + 0x14d0);
    pcVar13 = "#wm_row";
    uVar18 = ~*(uint *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4);
    cVar16 = '#';
    uVar8 = uVar18;
    do {
      if (((cVar16 == '#') && (*pcVar13 == '#')) && (pcVar13[1] == '#')) {
        pcVar13 = pcVar13 + 2;
        uVar8 = uVar18;
      }
      else {
        uVar8 = crc32(uVar8,cVar16);
      }
      cVar16 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar16 != '\0');
    uVar8 = ~uVar8;
    if (*(uint *)(*plVar4 + 0x1534) == uVar8) {
      FUN_1804cf810(uVar8,0xb,&DAT_180859398);
      lVar12 = DAT_180bb8ae8;
    }
    uVar18 = *(uint *)(*param_1 + 0x6dc0);
    fVar27 = (float)iVar7 * auVar38._0_4_ + fVar40;
    pfVar11 = (float *)FUN_1804b15a0(*(undefined8 *)(*(longlong *)(lVar12 + 0x14d0) + 0x1c0),
                                     uVar8 + 9,fVar27);
    lVar15 = DAT_180bb8ae8;
    if (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) != '\0') {
      *pfVar11 = fVar27;
    }
    if (uVar17 == uVar18) {
      fVar29 = *(float *)(param_1[1] + 0xec) - *(float *)(*param_1 + 0x6dc4);
      fVar21 = fVar40;
      if (fVar40 <= fVar29) {
        auVar6 = vminss_avx(ZEXT416((uint)(auVar38._0_4_ * 15.0 + fVar40)),ZEXT416((uint)fVar29));
        fVar21 = auVar6._0_4_;
      }
    }
    else {
      fVar21 = (float)FUN_180627ae0(*(float *)(param_1[1] + 0x18) * -18.0);
      fVar21 = (auVar37._0_4_ - fVar21) * (fVar27 - *pfVar11) + *pfVar11;
    }
    fVar29 = DAT_180b0a41c;
    *pfVar11 = fVar21;
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar21 + fVar33)),1);
    auVar30 = ZEXT1664(auVar6);
    local_e0 = fVar29 * 3.0 + local_14c;
    local_d8 = local_148 - fVar29 * 3.0;
    local_dc = auVar6._0_4_;
    local_d4 = local_dc + auVar38._0_4_;
    plVar4 = *(longlong **)(lVar15 + 0x14d0);
    local_110 = fVar29 * 10.0 + local_e0;
    local_10c = local_dc + fVar28;
    pcVar13 = "#grip";
    uVar19 = ~*(uint *)(plVar4[0x22] + -4 + (longlong)(int)plVar4[0x21] * 4);
    cVar16 = '#';
    uVar20 = uVar19;
    do {
      if (((cVar16 == '#') && (*pcVar13 == '#')) && (pcVar13[1] == '#')) {
        pcVar13 = pcVar13 + 2;
        uVar20 = uVar19;
      }
      else {
        uVar20 = crc32(uVar20,cVar16);
      }
      cVar16 = *pcVar13;
      pcVar13 = pcVar13 + 1;
    } while (cVar16 != '\0');
    uVar20 = ~uVar20;
    if (*(uint *)(*plVar4 + 0x1534) == uVar20) {
      FUN_1804cf810(uVar20,0xb,&DAT_18085938c);
      fVar29 = DAT_180b0a41c;
    }
    local_128 = fVar29 * fVar34 + local_e0;
    local_11c = auVar30._0_4_;
    local_124 = local_11c + auVar38._0_4_;
    local_178._0_1_ = 1;
    local_120 = local_e0;
    puVar14 = (undefined2 *)FUN_1804aad60(local_e8,uVar20,&local_120,&local_128);
    uVar2 = *puVar14;
    local_158._1_1_ = (char)((ushort)uVar2 >> 8);
    if (((local_158._1_1_ != '\0') && (*(int *)(*param_1 + 0x6dc0) < 0)) &&
       ((*(char *)(DAT_180bb8ae8 + 0x118) != '\0' && (4.0 <= *(float *)(DAT_180bb8ae8 + 0xbc4))))) {
      *(uint *)(*param_1 + 0x6dc0) = uVar17;
      *(float *)(*param_1 + 0x6dc4) = *(float *)(param_1[1] + 0xacc) - fVar27;
    }
    local_118 = fVar34 * DAT_180b0a41c + local_e0;
    local_178 = (float)CONCAT31(local_178._1_3_,1);
    local_114 = auVar30._0_4_;
    local_158 = uVar2;
    puVar14 = (undefined2 *)FUN_1804aad60(local_e4,uVar8,&local_118,&local_d8);
    uVar3 = *puVar14;
    if (*(char *)(puVar14 + 1) != '\0') {
      *(bool *)(*param_1 + 0x6cb4 + lVar25) = *(char *)(*param_1 + 0x6cb4 + lVar25) == '\0';
    }
    if ((((char)uVar3 == '\0') && ((char)uVar2 == '\0')) && (uVar17 != uVar18)) {
      uVar35 = auVar36._0_8_;
    }
    else {
      uVar35 = auVar37._0_8_;
    }
    auVar31._0_8_ = FUN_1804aaa10(uVar8 + 1,uVar35,0x41900000);
    auVar31._8_56_ = extraout_var;
    auVar32 = ZEXT1664(auVar31._0_16_);
    auVar6 = vpcmpeqd_avx(ZEXT116(*(byte *)(*param_1 + 0x6cb4 + lVar25)),SUB6416(ZEXT464(0),0));
    auVar6 = vblendvps_avx(auVar37._0_16_,auVar36._0_16_,auVar6);
    auVar26._0_8_ = FUN_1804aaa10(uVar8 + 2,auVar6._0_8_,0x41800000);
    uVar35 = local_140;
    auVar26._8_56_ = extraout_var_00;
    fVar34 = auVar36._0_4_;
    auVar31 = ZEXT1664(auVar26._0_16_);
    if ((fVar34 < auVar32._0_4_) || (uVar17 == uVar18)) {
      local_178 = DAT_180b0a41c * 5.0;
      uVar8 = 0;
      auVar6 = vpcmpeqd_avx(ZEXT416(uVar17),ZEXT416(uVar18));
      auVar6 = vblendvps_avx(auVar32._0_16_,auVar37._0_16_,auVar6);
      if (uVar17 == uVar18) {
        uVar18 = uVar8;
        do {
          fVar27 = (float)(DAT_180b0a42c >> (uVar18 & 0x1f) & 0xff);
          uVar8 = uVar8 | (int)(longlong)
                               (((float)(local_154 >> (uVar18 & 0x1f) & 0xff) - fVar27) * 0.15 +
                                fVar27 + fVar33) << (uVar18 & 0x1f);
          uVar18 = uVar18 + 8;
        } while ((int)uVar18 < 0x20);
      }
      else {
        uVar8 = DAT_180b0a42c;
      }
      fVar27 = ((float)(uVar8 >> 0x18) / fVar39) * auVar6._0_4_;
      if (fVar34 <= fVar27) {
        auVar6 = vminss_avx(auVar37._0_16_,ZEXT416((uint)fVar27));
        fVar34 = auVar6._0_4_;
      }
      local_170 = (undefined *)((ulonglong)local_170 & 0xffffffff00000000);
      FUN_1804df870(local_140,&local_e0,&local_d8,
                    (int)(longlong)(fVar34 * fVar39 + fVar33) << 0x18 | uVar8 & 0xffffff);
    }
    uVar8 = 0;
    fVar34 = auVar36._0_4_;
    if (fVar34 <= auVar32._0_4_) {
      auVar6 = vminss_avx(auVar37._0_16_,auVar32._0_16_);
      fVar34 = auVar6._0_4_;
    }
    uVar18 = uVar8;
    local_178 = (float)uVar8;
    do {
      fVar27 = (float)(DAT_180b0a450 >> (uVar18 & 0x1f) & 0xff);
      local_178 = (float)((uint)local_178 |
                         (int)(longlong)
                              (((float)(DAT_1808da474 >> (uVar18 & 0x1f) & 0xff) - fVar27) * fVar34
                               + fVar27 + fVar33) << (uVar18 & 0x1f));
      uVar18 = uVar18 + 8;
    } while ((int)uVar18 < 0x20);
    local_170 = &DAT_18085926c;
    FUN_180463b40(uVar35,*(undefined8 *)(param_1[2] + 0x18),0x41100000,&local_110);
    uVar18 = local_154;
    fVar27 = auVar36._0_4_;
    fVar34 = auVar38._0_4_ * fVar33 + auVar30._0_4_;
    if (fVar27 <= auVar31._0_4_) {
      auVar6 = vminss_avx(auVar37._0_16_,auVar31._0_16_);
      fVar27 = auVar6._0_4_;
    }
    uVar20 = uVar8;
    do {
      fVar28 = (float)(DAT_180b0a450 >> (uVar20 & 0x1f) & 0xff);
      uVar8 = uVar8 | (int)(longlong)
                           (((float)(local_154 >> (uVar20 & 0x1f) & 0xff) - fVar28) * fVar27 +
                            fVar28 + fVar33) << (uVar20 & 0x1f);
      uVar20 = uVar20 + 8;
    } while ((int)uVar20 < 0x20);
    if (uVar17 == 0) {
      auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 9.5 + fVar33)),1);
      auVar6 = vmaxss_avx(auVar37._0_16_,auVar6);
      auVar30 = ZEXT1664(auVar6);
      lVar15 = FUN_1804e97d0(*(undefined8 *)(param_1[2] + 0x10),auVar6._0_8_,0xbf800000);
      lVar12 = FUN_1804e95f0(lVar15,0x48);
      if (lVar12 == 0) {
        fVar27 = auVar30._0_4_ * fVar33;
      }
      else {
        fVar27 = (*(float *)(lVar12 + 0x14) - *(float *)(lVar12 + 0xc)) *
                 (auVar30._0_4_ / *(float *)(lVar15 + 0x14));
      }
      local_108 = DAT_180b0a41c * 22.0 + local_e0;
      local_104 = fVar34 - fVar27 * fVar33;
      local_168 = 0;
      local_170 = &DAT_180829f88;
      local_178 = (float)uVar8;
      FUN_180463450(uVar35,*(undefined8 *)(param_1[2] + 0x10),0x41180000,&local_108);
    }
    else {
      local_100 = DAT_180b0a41c * 30.0 + local_e0;
      local_178 = 10.0;
      local_fc = fVar34;
      FUN_180463dc0(uVar35,&local_100,uVar8,*(undefined8 *)(&DAT_1807b7dc0 + lVar25 * 8));
    }
    fVar28 = 0.0;
    fVar27 = auVar36._0_4_;
    puVar5 = (&PTR_DAT_180859410)[lVar25];
    if (fVar27 <= auVar31._0_4_) {
      auVar6 = vminss_avx(auVar37._0_16_,auVar31._0_16_);
      fVar27 = auVar6._0_4_;
    }
    fVar21 = fVar28;
    do {
      fVar29 = (float)(DAT_1808da474 >> ((uint)fVar28 & 0x1f) & 0xff);
      fVar21 = (float)((uint)fVar21 |
                      (int)(longlong)
                           (((float)(DAT_1808da478 >> ((uint)fVar28 & 0x1f) & 0xff) - fVar29) *
                            fVar27 + fVar29 + fVar33) << ((uint)fVar28 & 0x1f));
      fVar28 = (float)((int)fVar28 + 8);
    } while ((int)fVar28 < 0x20);
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + fVar33)),1);
    auVar6 = vmaxss_avx(auVar37._0_16_,auVar6);
    auVar30 = ZEXT1664(auVar6);
    lVar15 = FUN_1804e97d0(*(undefined8 *)param_1[2],auVar6._0_8_,0xbf800000);
    lVar25 = FUN_1804e95f0(lVar15,0x48);
    uVar35 = local_140;
    if (lVar25 == 0) {
      fVar27 = auVar30._0_4_ * fVar33;
    }
    else {
      fVar27 = (*(float *)(lVar25 + 0x14) - *(float *)(lVar25 + 0xc)) *
               (auVar30._0_4_ / *(float *)(lVar15 + 0x14));
    }
    local_168 = 0;
    auVar6 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * 1.5 * auVar32._0_4_ +
                                         DAT_180b0a41c * 44.0 + local_e0 + fVar33)),1);
    local_f8 = auVar6._0_4_;
    local_f4 = fVar34 - fVar27 * fVar33;
    local_178 = fVar21;
    local_170 = puVar5;
    FUN_180463450(local_140,*(undefined8 *)param_1[2],0x41533333,&local_f8);
    fVar28 = auVar31._0_4_;
    fVar27 = auVar36._0_4_;
    if (fVar27 < fVar28) {
      local_178 = DAT_180b0a41c * 1.6;
      fVar21 = ((float)(uVar18 >> 0x18) / fVar39) * fVar28;
      if (fVar27 <= fVar21) {
        auVar6 = vminss_avx(auVar37._0_16_,ZEXT416((uint)fVar21));
        fVar27 = auVar6._0_4_;
      }
      local_f0 = local_d8 - DAT_180b0a41c * 12.0;
      local_ec = fVar34;
      FUN_180464960(uVar35,&local_f0,(fVar28 * 0.4 + 0.6) * DAT_180b0a41c * 8.0,
                    (int)(longlong)(fVar27 * fVar39 + fVar33) << 0x18 | uVar18 & 0xffffff);
    }
    lVar25 = DAT_180bb8ae8;
    iVar10 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar10 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
      lVar25 = DAT_180bb8ae8;
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar10 + -1;
    }
    local_150 = local_150 + 1;
    local_138 = local_138 + 4;
    fVar28 = auVar38._0_4_ * fVar33;
  } while (local_150 < 0x10);
}



