// FUN_180477c50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180477c50 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_180477c50(longlong param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  undefined2 uVar5;
  undefined *puVar6;
  longlong *plVar7;
  size_t _Size;
  float *pfVar8;
  float **ppfVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float *pfVar12;
  char cVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  byte *pbVar18;
  undefined *puVar19;
  longlong lVar20;
  undefined2 *puVar21;
  size_t sVar22;
  longlong lVar23;
  undefined **ppuVar24;
  undefined8 *_Buf1;
  longlong lVar25;
  char cVar26;
  uint uVar27;
  undefined1 *puVar28;
  ulonglong uVar29;
  float fVar30;
  uint uVar31;
  uint *puVar32;
  int *piVar33;
  ulonglong uVar34;
  undefined8 *******pppppppuVar35;
  ulonglong uVar36;
  byte bVar37;
  undefined **ppuVar38;
  undefined1 uVar39;
  bool bVar40;
  float fVar41;
  float fVar42;
  undefined8 uVar43;
  undefined1 extraout_var [56];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  float fVar48;
  float fVar49;
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [16];
  float fVar53;
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined1 auVar56 [64];
  float fVar57;
  undefined8 uVar58;
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  float fVar63;
  undefined1 auVar64 [64];
  undefined1 auStack_2c8 [32];
  float *local_2a8;
  undefined8 local_2a0;
  float **local_298;
  undefined1 *local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_278;
  byte local_268;
  float local_264;
  float local_260;
  undefined2 local_25c;
  undefined8 local_258;
  undefined4 local_250;
  uint local_24c;
  uint *local_248;
  int local_240;
  float *local_238;
  undefined8 uStack_230;
  undefined1 local_228 [32];
  longlong local_208;
  float local_200;
  float local_1fc;
  undefined1 local_1f8 [16];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [8];
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 *local_1a8;
  char local_198 [8];
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined8 local_178;
  float local_170;
  float local_16c;
  float local_168 [2];
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  undefined1 local_140 [16];
  undefined8 local_130;
  undefined8 *******local_128 [3];
  ulonglong local_110;
  undefined1 local_108 [16];
  float *local_f8;
  float *pfStack_f0;
  ulonglong local_e8;
  
  lVar23 = DAT_180bb8ae8;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_2c8;
  local_188 = 0.0;
  local_178 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  local_208 = *(longlong *)(*(longlong *)(lVar23 + 0x14d0) + 0x2c8);
  local_240 = *(int *)(local_208 + 0x20);
  auVar54 = ZEXT464(0x3f800000);
  local_260 = 1.0;
  auVar45 = vminss_avx(auVar54._0_16_,
                       ZEXT416((uint)(*(float *)(lVar23 + 0x40) * 7.0 + *(float *)(param_1 + 0xb0)))
                      );
  *(int *)(param_1 + 0xb0) = auVar45._0_4_;
  local_258 = param_3;
  local_238 = param_2;
  FUN_1804c2800("##picker");
  local_1e0 = *(float *)(param_1 + 0x48);
  local_1dc = *param_3;
  if (DAT_180cd67f8 != 0) {
    local_160 = local_1e0;
    cVar13 = (**(code **)(*(longlong *)DAT_180cd67f8 + 0x10))();
    if (cVar13 != '\0') {
      local_1dc = 0.0;
    }
  }
  if (((int)local_1e0 < 0xf) ||
     ((((local_1e0 != 2.10195e-44 && (local_1e0 != 2.24208e-44)) && (local_1e0 != 2.38221e-44)) &&
      ((local_1e0 != 2.52234e-44 && (local_1e0 != 2.66247e-44)))))) {
    uVar36 = (ulonglong)
             *(short *)((longlong)param_3 +
                       ((longlong)(int)local_1dc * 0x15 + (longlong)(int)local_1e0) * 4 + 6);
    if (DAT_180b909b0 == 0) {
      ppuVar24 = &PTR_s_Glock_18_180797be0 + uVar36 * 2;
    }
    else {
      if ((ulonglong)
          (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4) <= uVar36
         ) {
                    /* WARNING: Subroutine does not return */
        FUN_18047c010();
      }
      ppuVar24 = (undefined **)(uVar36 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
    }
    bVar37 = *(byte *)(ppuVar24 + 1);
  }
  else if (local_1e0 == 2.10195e-44) {
    bVar37 = 6;
  }
  else if (local_1e0 == 2.24208e-44) {
    bVar37 = 7;
  }
  else if (local_1e0 == 2.38221e-44) {
    bVar37 = 8;
  }
  else if (local_1e0 == 2.52234e-44) {
    bVar37 = 4;
  }
  else if (local_1e0 == 2.66247e-44) {
    bVar37 = 5;
  }
  else {
    bVar37 = 3;
  }
  lVar23 = (longlong)(int)local_1dc * 0x15 + (longlong)(int)local_1e0;
  puVar32 = (uint *)((longlong)param_3 + lVar23 * 4 + 6);
  uVar36 = (ulonglong)*(short *)(param_3 + lVar23 + 2);
  local_268 = bVar37;
  local_248 = puVar32;
  if (DAT_180b909b0 == 0) {
    ppuVar24 = &PTR_s_No_Skin_18078acd0 + uVar36 * 3;
  }
  else {
    if ((ulonglong)
        ((*(longlong *)(DAT_180b909b0 + 0x48) - *(longlong *)(DAT_180b909b0 + 0x40)) / 0x18) <=
        uVar36) {
                    /* WARNING: Subroutine does not return */
      FUN_18047c010();
    }
    ppuVar24 = (undefined **)(*(longlong *)(DAT_180b909b0 + 0x40) + uVar36 * 0x18);
  }
  puVar6 = ppuVar24[1];
  auVar45._0_8_ = -(ulonglong)(puVar6 == (undefined *)0x0);
  auVar45._8_8_ = 0xffffffffffffffff;
  auVar45 = vblendvps_avx(SUB6416(ZEXT464(0x42800000),0),SUB6416(ZEXT464(0x42480000),0),auVar45);
  auVar64 = ZEXT1664(auVar45);
  local_140 = (undefined1  [16])0x0;
  local_130 = 0;
  FUN_180474680(local_140,local_1e0,local_1dc);
  lVar23 = thunk_FUN_1805f8070(local_140._0_8_,local_140._8_8_,*(undefined4 *)(param_1 + 0x4c));
  if (lVar23 == local_140._8_8_) {
    *(int *)(param_1 + 0x4c) = (int)(short)*puVar32;
  }
  fVar30 = param_2[1];
  fVar41 = *param_2;
  fVar63 = 0.5;
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 134.0 + 0.5)),1);
  local_158 = auVar45._0_4_ + fVar41;
  local_264 = 0.0;
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 0.0 + 0.5)),1);
  local_154 = auVar45._0_4_ + fVar30;
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 633.0 + 0.5)),1);
  local_190 = auVar45._0_4_ + fVar41;
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 485.0 + 0.5)),1);
  local_144 = auVar45._0_4_ + fVar30;
  auVar60 = ZEXT464(0x43190000);
  auVar61 = ZEXT464(0x434a0000);
  auVar62 = ZEXT464(0x44198000);
  local_148 = local_190;
  if ((*(int *)(param_1 + 0x50) < 1) || (DAT_180cd68f8 == 0)) {
    local_198[0] = '\0';
    local_2a0 = (undefined8 *******)((ulonglong)local_2a0._4_4_ << 0x20);
    local_2a8 = (float *)CONCAT44(local_2a8._4_4_,DAT_180b0a41c * 10.0);
    FUN_1804df870(local_208,&local_158,&local_148,DAT_1808da494);
    auVar55 = ZEXT464((uint)local_264);
  }
  else {
    local_198[0] = '\x01';
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * auVar64._0_4_ + 0.5)),1);
    fVar42 = auVar45._0_4_ + fVar30;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 153.0 + 0.5)),1);
    fVar57 = auVar45._0_4_ + fVar41;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 202.0 + 0.5)),1);
    fVar30 = auVar45._0_4_ + fVar30;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 614.0 + 0.5)),1);
    fVar41 = auVar45._0_4_ + fVar41;
    local_2a0 = (undefined8 *******)((ulonglong)local_2a0._4_4_ << 0x20);
    auVar55 = ZEXT464(0);
    local_2a8._0_4_ = 0.0;
    local_18c = fVar42;
    FUN_1804df870(local_208,&local_158,&local_190,DAT_1808da494);
    local_190 = local_158;
    local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
    local_2a8._0_4_ = auVar55._0_4_;
    local_18c = fVar30;
    FUN_1804df870(local_208,&local_190,&local_148,DAT_1808da494);
    local_200 = local_158;
    local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
    local_2a8._0_4_ = auVar55._0_4_;
    local_1fc = fVar42;
    local_190 = fVar57;
    local_18c = fVar30;
    FUN_1804df870(local_208,&local_200,&local_190,DAT_1808da494);
    local_190 = local_148;
    local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
    local_2a8 = (float *)CONCAT44(local_2a8._4_4_,auVar55._0_4_);
    local_200 = fVar41;
    local_1fc = fVar42;
    local_18c = fVar30;
    FUN_1804df870(local_208,&local_200,&local_190,DAT_1808da494);
    auVar54 = ZEXT464((uint)local_260);
  }
  lVar23 = local_208;
  uVar14 = DAT_1808da490;
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar45 = vmaxss_avx(auVar54._0_16_,auVar45);
  auVar50 = ZEXT1664(auVar45);
  fVar30 = auVar45._0_4_ * fVar63;
  local_190 = local_148 - fVar30;
  local_18c = local_144 - fVar30;
  local_200 = fVar30 + local_158;
  local_1fc = fVar30 + local_154;
  auVar45 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * 10.0 - fVar30)),auVar55._0_16_);
  local_2a8 = (float *)((ulonglong)local_2a8 & 0xffffffff00000000);
  FUN_1804dc420(local_208,&local_200,&local_190,auVar45._0_8_);
  local_298 = (float **)CONCAT44(local_298._4_4_,0x7f7fffff);
  local_2a0 = (undefined8 *******)CONCAT44(local_2a0._4_4_,0x200);
  local_2a8 = (float *)CONCAT44(local_2a8._4_4_,auVar50._0_4_);
  FUN_1804d9a00(lVar23,*(undefined8 *)(lVar23 + 0x58),*(undefined4 *)(lVar23 + 0x50),uVar14);
  *(undefined4 *)(lVar23 + 0x50) = 0;
  local_24c = local_24c & 0xffffff00;
  cVar13 = FUN_1804c3390(0x20e,1,0);
  iVar16 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
  if (cVar13 == '\0') {
LAB_1804782a6:
    cVar13 = '\0';
  }
  else {
    if (0 < iVar16) {
      lVar23 = *(longlong *)
                ((longlong)iVar16 * 0x38 + -0x30 + *(longlong *)(DAT_180bb8ae8 + 0x2000));
      if ((lVar23 == 0) || ((*(uint *)(lVar23 + 0x14) & 0x8000000) == 0)) {
        FUN_1804c7a50(iVar16 + -1,CONCAT71((int7)((ulonglong)((longlong)iVar16 * 0x38) >> 8),1));
      }
      goto LAB_1804782a6;
    }
    cVar13 = '\x01';
  }
  if ((*(char *)(param_1 + 0xfc) == '\0') || (cVar13 == '\0')) {
    local_24c = CONCAT31(local_24c._1_3_,cVar13);
  }
  else {
    *(undefined1 *)(param_1 + 0xfc) = 0;
  }
  local_184 = 149.0;
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 149.0 + fVar63)),1);
  local_190 = auVar45._0_4_ + *param_2;
  fVar30 = 20.0;
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 20.0 + fVar63)),1);
  local_18c = auVar45._0_4_ + param_2[1];
  local_2a8 = (float *)((ulonglong)local_2a8 & 0xffffffffffffff00);
  cVar13 = FUN_1804754e0(local_208,"##picker_back",&local_190,&DAT_18082ac78);
  if (cVar13 != '\0') {
    if (*(char *)(param_1 + 0xfc) == '\0') {
      local_24c = CONCAT31(local_24c._1_3_,1);
    }
    else {
      *(undefined1 *)(param_1 + 0xfc) = 0;
    }
  }
  if (DAT_180cd6f38 != 0) {
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 158.0 + fVar63)),1);
    local_200 = auVar45._0_4_ + *param_2;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 29.0 + fVar63)),1);
    local_1fc = auVar45._0_4_ + param_2[1];
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 140.0 + fVar63)),1);
    local_1e8 = auVar45._0_4_ + *param_2;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 11.0 + fVar63)),1);
    local_1e4 = auVar45._0_4_ + param_2[1];
    local_1c8 = (undefined1  [8])"Back to Skins";
    (**(code **)(*(longlong *)DAT_180cd6f38 + 0x10))(DAT_180cd6f38,local_1c8,&local_1e8,&local_200);
  }
  fVar30 = DAT_180b0a41c * fVar30 + param_2[1];
  fVar41 = DAT_180b0a41c * 612.5 + *param_2;
  fVar42 = DAT_180b0a41c * 9.0;
  plVar7 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar27 = ~*(uint *)(plVar7[0x22] + -4 + (longlong)(int)plVar7[0x21] * 4);
  pcVar17 = "##close";
  cVar13 = '#';
  uVar31 = uVar27;
  do {
    pcVar17 = pcVar17 + 1;
    if (((cVar13 == '#') && (*pcVar17 == '#')) && (pcVar17[1] == '#')) {
      pcVar17 = pcVar17 + 2;
      uVar31 = uVar27;
    }
    else {
      uVar31 = crc32(uVar31,cVar13);
    }
    cVar13 = *pcVar17;
  } while (cVar13 != '\0');
  uVar31 = ~uVar31;
  local_180 = fVar41;
  local_17c = fVar30;
  if (*(uint *)(*plVar7 + 0x1534) == uVar31) {
    FUN_1804cf810(uVar31,0xb,"##close");
  }
  local_190 = fVar41 + fVar42;
  local_18c = fVar30 + fVar42;
  local_200 = fVar41 - fVar42;
  local_1fc = fVar30 - fVar42;
  local_2a8 = (float *)CONCAT71(local_2a8._1_7_,1);
  pbVar18 = (byte *)FUN_1804aad60(&local_25c,uVar31,&local_200,&local_190);
  bVar3 = pbVar18[2];
  auVar45 = vpcmpeqd_avx(ZEXT116(*pbVar18),SUB6416(ZEXT464(0),0));
  vblendvps_avx(auVar54._0_16_,auVar55._0_16_,auVar45);
  uVar43 = FUN_1804aaa10(uVar31 + 1,0,0x41800000);
  uVar14 = FUN_180462ad0(DAT_1808da474,DAT_180b0a424,uVar43);
  local_2a0 = (undefined8 *******)&DAT_180829a40;
  local_2a8 = (float *)CONCAT44(local_2a8._4_4_,uVar14);
  FUN_180463b40(local_208,DAT_180c62cc0,0x41480000,&local_180);
  local_24c = CONCAT31(local_24c._1_3_,(byte)local_24c | bVar3);
  FUN_1804748b0(local_228,local_248);
  if (local_198[0] == '\0') {
    local_f8 = (float *)0x0;
    pfStack_f0 = (float *)0xf;
    local_108._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar52[0xf] = 0;
    auVar52._0_15_ = local_108._1_15_;
    local_108 = auVar52 << 8;
    fVar30 = 2.8026e-45;
  }
  else {
    puVar28 = &DAT_18082ae20;
    if (*(int *)(param_1 + 0x50) == 1) {
      puVar28 = &DAT_18082ae30;
    }
    _local_1c8 = (undefined1  [16])0x0;
    local_1b8 = (undefined1  [16])0x0;
    lVar23 = -1;
    do {
      lVar23 = lVar23 + 1;
    } while (puVar28[lVar23] != '\0');
    FUN_18015ba30(local_1c8);
    fVar30 = 1.4013e-45;
  }
  local_188 = fVar30;
  FUN_18015a6e0(local_128);
  if (((uint)fVar30 & 2) != 0) {
    fVar30 = (float)((uint)fVar30 & 0xfffffffd);
    FUN_18015c010(local_108);
  }
  if (((uint)fVar30 & 1) != 0) {
    FUN_18015c010(local_1c8);
  }
  FUN_18015c010(local_228);
  local_2a0 = local_128;
  if (0xf < local_110) {
    local_2a0 = local_128[0];
  }
  fVar30 = 17.0;
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 17.0 + fVar63)),1);
  auVar45 = vmaxss_avx(auVar54._0_16_,auVar45);
  puVar19 = (undefined *)0x0;
  local_278 = 0;
  local_288 = 0;
  local_290 = (undefined1 *)0x0;
  local_298 = (float **)0x0;
  local_2a8 = (float *)CONCAT44(local_2a8._4_4_,auVar55._0_4_);
  auVar50 = ZEXT464(0x7f7fffff);
  FUN_1804ea040(&local_190,DAT_180c62cb0,auVar45._0_8_,auVar50._0_8_);
  auVar45 = auVar55._0_16_;
  if (puVar6 == (undefined *)0x0) {
    auVar54 = ZEXT1664(auVar45);
  }
  else {
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.6 + fVar63)),1);
    auVar45 = vmaxss_avx(auVar54._0_16_,auVar45);
    local_278 = 0;
    local_288 = 0;
    local_290 = (undefined1 *)0x0;
    local_298 = (float **)0x0;
    local_2a0 = (undefined8 *******)ppuVar24[1];
    local_2a8 = (float *)CONCAT44(local_2a8._4_4_,auVar55._0_4_);
    FUN_1804ea040(local_1c8,DAT_180c62ca8,auVar45._0_8_,auVar50._0_8_);
    auVar45 = auVar55._0_16_;
    auVar54 = ZEXT464((uint)local_1c8._0_4_);
  }
  sVar4 = *(short *)((longlong)ppuVar24 + 0x14);
  if (sVar4 < 0) {
    auVar55 = ZEXT1664(auVar45);
  }
  else {
    auVar55 = ZEXT464((uint)(DAT_180b0a41c * 40.0));
  }
  auVar59 = ZEXT464(0x43db0000);
  fVar41 = DAT_180b0a41c * 438.0 - auVar55._0_4_;
  auVar50 = ZEXT464((uint)fVar41);
  auVar45 = vmaxss_avx(ZEXT416((uint)local_190),ZEXT416((uint)local_260));
  auVar45 = vminss_avx(ZEXT416((uint)local_260),ZEXT416((uint)(fVar41 / auVar45._0_4_)));
  fVar30 = auVar45._0_4_ * fVar30;
  auVar56 = ZEXT464((uint)fVar30);
  pppppppuVar35 = local_128;
  if (0xf < local_110) {
    pppppppuVar35 = local_128[0];
  }
  auVar51._0_8_ = FUN_1804633e0(DAT_180c62cb0,fVar30,pppppppuVar35,0);
  uVar43 = auVar56._0_8_;
  auVar51._8_56_ = extraout_var;
  auVar45 = vmaxss_avx(auVar51._0_16_,auVar54._0_16_);
  auVar45 = vminss_avx(auVar45,auVar50._0_16_);
  fVar41 = auVar55._0_4_;
  auVar45 = vroundss_avx(ZEXT816(0),
                         ZEXT416((uint)(((DAT_180b0a41c * 383.5 + *param_2) -
                                        (auVar45._0_4_ + fVar41) * 0.5) + 0.5)),1);
  auVar51 = ZEXT1664(auVar45);
  fVar30 = auVar45._0_4_;
  if (-1 < sVar4) {
    local_190 = DAT_180b0a41c * 32.0 + fVar30;
    local_18c = DAT_180b0a41c * 43.0 + param_2[1];
    local_16c = DAT_180b0a41c * 9.0 + param_2[1];
    sVar4 = *(short *)((longlong)ppuVar24 + 0x14);
    local_1e8 = local_264;
    local_1e4 = local_264;
    local_200 = local_264;
    local_1fc = local_264;
    local_298 = (float **)CONCAT44(local_298._4_4_,local_264);
    local_2a0 = (undefined8 *******)&local_200;
    local_2a8 = &local_1e8;
    local_170 = fVar30;
    FUN_180473450((int)sVar4,&local_170,&local_190,0);
    FUN_180473680(local_208,(int)sVar4,&local_1e8,&local_200);
    uVar43 = auVar56._0_8_;
    fVar41 = auVar55._0_4_;
    fVar30 = auVar51._0_4_;
  }
  fVar30 = fVar30 + fVar41;
  local_2a0 = local_128;
  if (0xf < local_110) {
    local_2a0 = local_128[0];
  }
  auVar46._0_8_ = -(ulonglong)(puVar6 == (undefined *)0x0);
  auVar46._8_8_ = 0xffffffffffffffff;
  auVar45 = vblendvps_avx(SUB6416(ZEXT464(0x41840000),0),SUB6416(ZEXT464(0x41600000),0),auVar46);
  local_18c = auVar45._0_4_ * DAT_180b0a41c + param_2[1];
  local_298 = (float **)0x0;
  local_2a8._0_4_ = (float)DAT_180b0a424;
  local_190 = fVar30;
  FUN_180463450(local_208,DAT_180c62cb0,uVar43,&local_190);
  if (puVar6 != (undefined *)0x0) {
    local_18c = DAT_180b0a41c * 35.5 + param_2[1];
    auVar45 = vmaxss_avx(auVar54._0_16_,ZEXT416((uint)local_260));
    auVar44._0_4_ = auVar50._0_4_ / auVar45._0_4_;
    auVar44._4_12_ = auVar50._4_12_;
    auVar45 = vminss_avx(ZEXT416((uint)local_260),auVar44);
    local_298 = (float **)0x0;
    local_2a0 = (undefined8 *******)ppuVar24[1];
    local_2a8._0_4_ = (float)DAT_1808da478;
    local_190 = fVar30;
    FUN_180463450(local_208,DAT_180c62ca8,auVar45._0_4_ * 13.6,&local_190);
  }
  puVar32 = local_248;
  fVar41 = 0.5;
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 264.5 + 0.5)),1);
  local_180 = auVar45._0_4_ + *param_2;
  auVar47._0_8_ = -(ulonglong)(puVar6 == (undefined *)0x0);
  auVar47._8_8_ = 0xffffffffffffffff;
  auVar45 = vblendvps_avx(SUB6416(ZEXT464(0x42500000),0),SUB6416(ZEXT464(0x421e0000),0),auVar47);
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar45._0_4_ * DAT_180b0a41c + 0.5)),1);
  local_17c = auVar45._0_4_ + param_2[1];
  fVar30 = DAT_180b0a41c;
  uVar14 = FUN_180474820((int)*(short *)((longlong)local_248 + 2));
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 502.5 + fVar41)),1);
  local_190 = auVar45._0_4_ + *param_2;
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 2.4 + fVar41)),1);
  local_18c = auVar45._0_4_ + local_17c;
  local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
  local_2a8 = (float *)CONCAT44(local_2a8._4_4_,fVar30);
  FUN_1804df870(local_208,&local_180,&local_190,uVar14);
  fVar30 = param_2[1];
  fVar41 = *param_2;
  auVar45 = vpcmpeqd_avx(ZEXT116(bVar37),SUB6416(ZEXT464(6),0));
  auVar45 = vblendvps_avx(auVar60._0_16_,auVar59._0_16_,auVar45);
  fVar63 = 0.5;
  auVar52 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar45._0_4_ * DAT_180b0a41c + 0.5)),1);
  auVar45 = vpcmpeqd_avx(ZEXT116(bVar37),SUB6416(ZEXT464(6),0));
  auVar45 = vblendvps_avx(auVar64._0_16_,SUB6416(ZEXT464(0x42a80000),0),auVar45);
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar45._0_4_ * DAT_180b0a41c + 0.5)),1);
  local_1f8._4_4_ = auVar45._0_4_ + fVar30;
  local_1f8._0_4_ = auVar52._0_4_ + fVar41;
  auVar45 = vpcmpeqd_avx(ZEXT116(bVar37),SUB6416(ZEXT464(6),0));
  local_250 = 0x441c0000;
  auVar45 = vblendvps_avx(auVar62._0_16_,SUB6416(ZEXT464(0x441c0000),0),auVar45);
  auVar52 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar45._0_4_ * DAT_180b0a41c + 0.5)),1);
  auVar45 = vpcmpeqd_avx(ZEXT116(bVar37),SUB6416(ZEXT464(6),0));
  auVar45 = vblendvps_avx(auVar61._0_16_,SUB6416(ZEXT464(0x43e70000),0),auVar45);
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar45._0_4_ * DAT_180b0a41c + 0.5)),1);
  local_1d8._4_4_ = auVar45._0_4_ + fVar30;
  local_1d8._0_4_ = auVar52._0_4_ + fVar41;
  if (bVar37 == 6) {
    local_2a8 = (float *)CONCAT44(local_2a8._4_4_,DAT_180b0a428);
    FUN_180463210(local_208,DAT_180b0a41c * 430.0 + fVar41,DAT_180b0a41c * 76.0 + fVar30,
                  DAT_180b0a41c * 481.0 + fVar30);
  }
  fVar30 = DAT_180b0a41c;
  if (DAT_180cd68f8 == 0) {
    if (bVar37 == 6) {
      puVar19 = (undefined *)FUN_180455830(*ppuVar24);
    }
    else if (*(uint *)(param_1 + 0x4c) < 0x47) {
      puVar19 = (&PTR_s_weapons_models_glock18_weapon_pi_1807b7730)[(int)*(uint *)(param_1 + 0x4c)];
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xfc) = 0;
  }
  lVar23 = local_178;
  fVar41 = 12.0;
  if (*(char *)(param_1 + 0xfc) == '\0') {
    auVar64 = ZEXT464(0x41800000);
    auVar54 = ZEXT464((uint)local_264);
    fVar30 = 10.0;
  }
  else {
    fVar42 = fVar30 * 24.0;
    local_1f8._4_4_ = fVar30 * 36.0;
    local_1f8._0_4_ = fVar42;
    local_1d8._4_4_ = *(float *)(local_178 + 0x34) - fVar42;
    local_1d8._0_4_ = *(float *)(local_178 + 0x30) - fVar42;
    uVar43 = FUN_1804b81b0(**(undefined8 **)(DAT_180bb8ae8 + 0x2030),1,"##Foreground");
    auVar54 = ZEXT464((uint)local_264);
    local_200 = local_264;
    local_1fc = local_264;
    local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
    local_2a8 = (float *)CONCAT44(local_2a8._4_4_,local_264);
    FUN_1804df870(uVar43,&local_200,lVar23 + 0x30,DAT_1808da494);
    auVar64 = ZEXT464(0x41800000);
    fVar42 = DAT_180b0a41c * 16.0;
    fVar30 = 10.0;
    fVar57 = DAT_180b0a41c * 10.0;
    fVar49 = DAT_180b0a41c * 36.0;
    fVar53 = DAT_180b0a41c * 30.0;
    plVar7 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    uVar27 = ~*(uint *)(plVar7[0x22] + -4 + (longlong)(int)plVar7[0x21] * 4);
    pcVar17 = "##inspect_back";
    cVar13 = '#';
    uVar31 = uVar27;
    do {
      pcVar17 = pcVar17 + 1;
      if (((cVar13 == '#') && (*pcVar17 == '#')) && (pcVar17[1] == '#')) {
        pcVar17 = pcVar17 + 2;
        uVar31 = uVar27;
      }
      else {
        uVar31 = crc32(uVar31,cVar13);
      }
      cVar13 = *pcVar17;
    } while (cVar13 != '\0');
    uVar31 = ~uVar31;
    local_1e8 = fVar49;
    local_1e4 = fVar53;
    local_170 = fVar42;
    local_16c = fVar57;
    if (*(uint *)(*plVar7 + 0x1534) == uVar31) {
      FUN_1804cf810(uVar31,0xb,"##inspect_back");
    }
    local_2a8 = (float *)CONCAT71(local_2a8._1_7_,1);
    pcVar17 = (char *)FUN_1804aad60(&local_25c,uVar31,&local_170,&local_1e8);
    cVar13 = pcVar17[2];
    local_170 = (fVar49 + fVar42) * fVar63;
    local_16c = (fVar53 + fVar57) * fVar63;
    uVar31 = DAT_1808da474;
    if (*pcVar17 != '\0') {
      uVar31 = DAT_180b0a424;
    }
    local_2a8 = (float *)CONCAT44(local_2a8._4_4_,fVar41);
    FUN_180463dc0(uVar43,&local_170,uVar31,&DAT_18082ac78);
    if (cVar13 != '\0') {
      *(undefined1 *)(param_1 + 0xfc) = 0;
    }
  }
  fVar42 = 4.0;
  if ((puVar19 == (undefined *)0x0) && (DAT_180cd68f8 == 0)) {
LAB_1804790aa:
    if (local_198[0] == '\0') {
      auVar60 = ZEXT464((uint)local_1d8._0_4_);
      auVar45 = ZEXT416((uint)local_1d8._0_4_);
      auVar61 = ZEXT464((uint)local_1d8._4_4_);
      auVar52 = ZEXT416((uint)local_1d8._4_4_);
      auVar62 = ZEXT464((uint)local_1f8._0_4_);
      auVar46 = ZEXT416((uint)local_1f8._0_4_);
      auVar55 = ZEXT464((uint)local_1f8._4_4_);
      auVar44 = ZEXT416((uint)local_1f8._4_4_);
      sVar4 = *(short *)((longlong)puVar32 + 2);
      if (*(char *)(param_1 + 0xfc) == '\0') {
        lVar23 = local_208;
      }
      else {
        lVar23 = FUN_1804b81b0(**(undefined8 **)(DAT_180bb8ae8 + 0x2030),1,"##Foreground");
        auVar52 = auVar61._0_16_;
        auVar44 = auVar55._0_16_;
        auVar46 = auVar62._0_16_;
        auVar45 = auVar60._0_16_;
      }
      auVar45 = vunpcklps_avx(auVar45,auVar52);
      auVar52 = vunpcklps_avx(auVar46,auVar44);
      FUN_180473f60(lVar23,(int)sVar4,auVar52._0_8_,auVar45._0_8_);
      auVar60 = ZEXT464((uint)local_260);
    }
    else {
      local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
      local_2a8 = (float *)CONCAT44(local_2a8._4_4_,auVar54._0_4_);
      FUN_1804df870(local_208,local_1f8,local_1d8,DAT_1808da494);
      auVar60 = ZEXT464((uint)local_260);
    }
  }
  else {
    uVar36 = 0;
    if ((DAT_180cd68f8 != 0) && (local_198[0] == '\0')) {
      local_200 = (float)local_1d8._0_4_;
      local_1fc = (float)local_1f8._4_4_;
      local_1e8 = (float)local_1f8._0_4_;
      local_1e4 = (float)local_1f8._4_4_ - 4.0;
      local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
      local_2a8 = (float *)CONCAT44(local_2a8._4_4_,auVar54._0_4_);
      FUN_1804df870(local_208,&local_1e8,&local_200,DAT_1808da494 | 0xff000000);
    }
    if (DAT_180cd68f8 == 0) {
      cVar13 = false;
      if (DAT_180cd6af8 != 0) {
        uVar36 = (**(code **)(*(longlong *)DAT_180cd6af8 + 0x10))(DAT_180cd6af8,local_1f8,local_1d8)
        ;
        goto LAB_180478ebc;
      }
    }
    else {
      local_160 = local_1e0;
      local_168[0] = local_1dc;
      local_2a8 = (float *)local_1d8;
      uVar36 = (**(code **)(*(longlong *)DAT_180cd68f8 + 0x10))
                         (DAT_180cd68f8,local_168,&local_160,local_1f8);
LAB_180478ebc:
      cVar13 = uVar36 != 0;
    }
    if ((local_198[0] != '\0') && (DAT_180cd6738 != 0)) {
      cVar13 = (**(code **)(*(longlong *)DAT_180cd6738 + 0x10))();
    }
    plVar7 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    uVar27 = ~*(uint *)(plVar7[0x22] + -4 + (longlong)(int)plVar7[0x21] * 4);
    pcVar17 = "##inspect";
    cVar26 = '#';
    uVar31 = uVar27;
    do {
      pcVar17 = pcVar17 + 1;
      if (((cVar26 == '#') && (*pcVar17 == '#')) && (pcVar17[1] == '#')) {
        pcVar17 = pcVar17 + 2;
        uVar31 = uVar27;
      }
      else {
        uVar31 = crc32(uVar31,cVar26);
      }
      cVar26 = *pcVar17;
    } while (cVar26 != '\0');
    uVar31 = ~uVar31;
    if (*(uint *)(*plVar7 + 0x1534) == uVar31) {
      FUN_1804cf810(uVar31,0xb,"##inspect");
    }
    local_2a8 = (float *)CONCAT71(local_2a8._1_7_,1);
    FUN_1804aad60(&local_25c,uVar31,local_1f8,local_1d8);
    if (cVar13 == '\0') goto LAB_1804790aa;
    if (*(char *)(param_1 + 0xfc) == '\0') {
      lVar23 = local_208;
    }
    else {
      lVar23 = FUN_1804b81b0(**(undefined8 **)(DAT_180bb8ae8 + 0x2030),1,"##Foreground");
    }
    auVar60 = ZEXT464((uint)local_260);
    if (local_198[0] == '\0') {
      local_150 = local_260;
      local_14c = local_260;
      local_160 = auVar54._0_4_;
      local_15c = local_160;
      if ((uVar36 == *(ulonglong *)(lVar23 + 0x78)) && (*(longlong *)(lVar23 + 0x70) == 0)) {
        bVar40 = false;
      }
      else {
        bVar40 = true;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar36;
        _local_1c8 = auVar11 << 0x40;
        piVar33 = (int *)(lVar23 + 0xb0);
        if (*piVar33 == *(int *)(lVar23 + 0xb4)) {
          FUN_1804aec70(piVar33);
        }
        iVar16 = *piVar33;
        lVar20 = *(longlong *)(lVar23 + 0xb8);
        *(undefined8 *)(lVar20 + (longlong)iVar16 * 0x10) = 0;
        *(ulonglong *)(lVar20 + 8 + (longlong)iVar16 * 0x10) = uVar36;
        *piVar33 = *piVar33 + 1;
        *(undefined1 (*) [8])(lVar23 + 0x70) = local_1c8;
        *(undefined8 *)(lVar23 + 0x78) = uStack_1c0;
        FUN_1804d92c0(lVar23);
      }
      FUN_1804d9590(lVar23,6,4);
      local_2a0 = (undefined8 *******)CONCAT44(local_2a0._4_4_,0xffffffff);
      local_2a8 = &local_150;
      FUN_1804d97d0(lVar23,local_1f8,local_1d8,&local_160);
      if (bVar40) {
        FUN_1804d9530(lVar23);
      }
    }
  }
  pfVar8 = local_258;
  auVar45 = vpcmpeqd_avx(ZEXT116(bVar37),SUB6416(ZEXT464(6),0));
  auVar45 = vblendvps_avx(SUB6416(ZEXT464(0x43670000),0),SUB6416(ZEXT464(0x42780000),0),auVar45);
  local_188 = auVar45._0_4_ * DAT_180b0a41c + param_2[1];
  auVar45 = vpcmpeqd_avx(ZEXT116(bVar37),SUB6416(ZEXT464(6),0));
  auVar45 = vblendvps_avx(ZEXT416((uint)local_184),SUB6416(ZEXT464(0x43e08000),0),auVar45);
  local_184 = auVar45._0_4_;
  local_108._8_8_ = param_2;
  local_108._0_8_ = &local_208;
  local_f8 = &local_184;
  pfStack_f0 = &local_188;
  lVar23 = (longlong)(int)local_1dc;
  lVar20 = (longlong)(int)local_1e0;
  if (bVar37 < 7) {
    plVar7 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    uVar27 = ~*(uint *)(plVar7[0x22] + -4 + (longlong)(int)plVar7[0x21] * 4);
    pcVar17 = "##finish_popup";
    cVar13 = '#';
    uVar31 = uVar27;
    do {
      pcVar17 = pcVar17 + 1;
      if (((cVar13 == '#') && (*pcVar17 == '#')) && (pcVar17[1] == '#')) {
        pcVar17 = pcVar17 + 2;
        uVar31 = uVar27;
      }
      else {
        uVar31 = crc32(uVar31,cVar13);
      }
      cVar13 = *pcVar17;
    } while (cVar13 != '\0');
    uVar31 = ~uVar31;
    if (*(uint *)(*plVar7 + 0x1534) == uVar31) {
      FUN_1804cf810(uVar31,0xb,"##finish_popup");
    }
    if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
       (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
                 *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar31)) {
      uVar43 = 1;
    }
    else {
      uVar43 = 0;
    }
    cVar13 = FUN_18047b570(local_108,&DAT_18082ade8,&DAT_18082ac74,uVar43);
    if (cVar13 != '\0') {
      FUN_180488320("##finish_popup");
    }
    if ((bVar37 != 5) && (DAT_180cd68f8 == 0)) {
      FUN_18047b570(local_108,"##zoom",&DAT_18082ac68,0);
    }
  }
  pfVar12 = local_258;
  if ((DAT_180cd6ab8 != 0) &&
     (cVar13 = (**(code **)(*(longlong *)DAT_180cd6ab8 + 0x10))(), cVar13 != '\0')) {
    FUN_180488320("##finish_popup");
  }
  cVar13 = FUN_180488630("##finish_popup","Options");
  if (cVar13 != '\0') {
    if ((bVar37 != 6) && (local_198[0] == '\0')) {
      FUN_180475640(pfVar8 + (lVar23 * 0x15 + lVar20) * 0x30 + 0x2c,bVar37);
    }
    if (DAT_180cd6578 != 0) {
      local_160 = local_1e0;
      local_168[0] = local_1dc;
      (**(code **)(*(longlong *)DAT_180cd6578 + 0x10))(DAT_180cd6578,local_168,&local_160);
    }
    FUN_1804aeac0();
  }
  if (((DAT_180cd68f8 == 0) && (local_198[0] == '\0')) &&
     (cVar13 = FUN_18047b570(local_108,"##expand",&DAT_18082a248,*(undefined1 *)(param_1 + 0xfc)),
     cVar13 != '\0')) {
    *(bool *)(param_1 + 0xfc) = *(char *)(param_1 + 0xfc) == '\0';
  }
  if (((DAT_180cd6a38 == 0) &&
      (cVar13 = FUN_18047b570(local_108,"##apply",&DAT_18082ac70,*(undefined1 *)(pfVar12 + 1)),
      cVar13 != '\0')) && (DAT_180cd6638 != 0)) {
    local_160 = local_1e0;
    (**(code **)(*(longlong *)DAT_180cd6638 + 0x10))(DAT_180cd6638,&local_160);
  }
  if (DAT_180cd6a38 != 0) {
    local_160 = local_1e0;
    local_168[0] = local_1dc;
    (**(code **)(*(longlong *)DAT_180cd6a38 + 0x10))(DAT_180cd6a38,local_168,&local_160);
  }
  fVar57 = 18.0;
  if (bVar37 == 5) {
    if (DAT_180cd6a38 == 0) {
      uVar36 = (ulonglong)*(int *)(param_1 + 0x4c);
      if (DAT_180b909b0 == 0) {
        ppuVar24 = &PTR_s_Glock_18_180797be0 + uVar36 * 2;
      }
      else {
        if ((ulonglong)
            (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4) <=
            uVar36) {
LAB_18047b54b:
                    /* WARNING: Subroutine does not return */
          FUN_18047c010();
        }
        ppuVar24 = (undefined **)(uVar36 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
      }
      puVar6 = *ppuVar24;
      auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.6 + fVar63)),1);
      auVar45 = vmaxss_avx(auVar60._0_16_,auVar45);
      local_278 = 0;
      local_288 = 0;
      local_290 = (undefined1 *)0x0;
      local_298 = (float **)0x0;
      local_2a8 = (float *)CONCAT44(local_2a8._4_4_,auVar54._0_4_);
      local_2a0 = (undefined8 *******)puVar6;
      FUN_1804ea040(local_1c8,DAT_180c62ca8,auVar45._0_8_,0x7f7fffff);
      local_170 = (local_184 - 8.0) * DAT_180b0a41c + *param_2;
      local_16c = local_188 - DAT_180b0a41c * fVar30;
      local_180 = (local_184 + fVar57) * DAT_180b0a41c + *param_2 + (float)local_1c8._0_4_;
      local_17c = DAT_180b0a41c * fVar30 + local_188;
      plVar7 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
      uVar27 = ~*(uint *)(plVar7[0x22] + -4 + (longlong)(int)plVar7[0x21] * 4);
      pcVar17 = "##glove_type";
      cVar13 = '#';
      uVar31 = uVar27;
      do {
        pcVar17 = pcVar17 + 1;
        if (((cVar13 == '#') && (*pcVar17 == '#')) && (pcVar17[1] == '#')) {
          pcVar17 = pcVar17 + 2;
          uVar31 = uVar27;
        }
        else {
          uVar31 = crc32(uVar31,cVar13);
        }
        cVar13 = *pcVar17;
      } while (cVar13 != '\0');
      uVar31 = ~uVar31;
      if (*(uint *)(*plVar7 + 0x1534) == uVar31) {
        FUN_1804cf810(uVar31,0xb,"##glove_type");
      }
      local_2a8 = (float *)CONCAT71(local_2a8._1_7_,1);
      puVar21 = (undefined2 *)FUN_1804aad60(&local_25c,uVar31,&local_170,&local_180);
      uVar43 = auVar60._0_8_;
      uVar58 = auVar64._0_8_;
      uVar5 = *puVar21;
      if (*(char *)(puVar21 + 1) != '\0') {
        FUN_1804c7740(uVar31,0);
        uVar43 = auVar60._0_8_;
        uVar58 = auVar64._0_8_;
      }
      if (((char)uVar5 == '\0') &&
         ((*(int *)(DAT_180bb8ae8 + 0x1ff8) <= *(int *)(DAT_180bb8ae8 + 0x2008) ||
          (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
                    *(longlong *)(DAT_180bb8ae8 + 0x2000)) != uVar31)))) {
        uVar43 = auVar54._0_8_;
      }
      uVar43 = FUN_1804aaa10(uVar31 + 1,uVar43,uVar58);
      uVar14 = FUN_180462ad0(DAT_1808da474,DAT_180b0a424,uVar43);
      local_190 = DAT_180b0a41c * local_184 + *param_2;
      local_18c = local_188;
      local_2a0 = (undefined8 *******)&DAT_180829dc8;
      local_2a8._0_4_ = (float)uVar14;
      FUN_180463b40(local_208,DAT_180c62cc0,0x41380000,&local_190);
      fVar30 = (float)FUN_180463350(DAT_180c62ca8,0x4159999a);
      local_18c = local_188 - fVar30 * fVar63;
      local_190 = (fVar41 + local_184) * DAT_180b0a41c + *param_2;
      local_298 = (float **)0x0;
      local_2a8 = (float *)CONCAT44(local_2a8._4_4_,uVar14);
      local_2a0 = (undefined8 *******)puVar6;
      FUN_180463450(local_208,DAT_180c62ca8,0x4159999a,&local_190);
      cVar13 = FUN_1804a8ab0(uVar31,&local_170,&local_180,DAT_180b0a41c * 170.0);
      if (cVar13 != '\0') {
        uVar43 = local_140._8_8_;
        for (piVar33 = (int *)local_140._0_8_; piVar33 != (int *)uVar43; piVar33 = piVar33 + 1) {
          iVar16 = *piVar33;
          uVar36 = (ulonglong)iVar16;
          FUN_1804c2920(iVar16);
          if (DAT_180b909b0 == 0) {
            ppuVar24 = &PTR_s_Glock_18_180797be0 + uVar36 * 2;
          }
          else {
            if ((ulonglong)
                (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4) <=
                uVar36) goto LAB_18047b54b;
            ppuVar24 = (undefined **)(uVar36 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
          }
          cVar13 = FUN_1804a91a0(*ppuVar24,iVar16 == *(int *)(param_1 + 0x4c));
          if (cVar13 != '\0') {
            *(int *)(param_1 + 0x4c) = iVar16;
            *(undefined4 *)(param_1 + 0xf8) = 0;
            FUN_1804c7bf0();
          }
          iVar16 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
          if (iVar16 < 2) {
            FUN_1804c5a40("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar16 + -1;
          }
        }
        FUN_1804aeac0();
      }
    }
  }
  else if ((bVar37 < 3) && (DAT_180cd6938 != 0)) {
    local_108._8_8_ = &local_1dc;
    local_108._0_8_ = param_1;
    local_f8 = &local_1e0;
    local_16c = param_2[1];
    local_170 = *param_2;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 433.0 + fVar63)),1);
    auVar64 = ZEXT464((uint)(auVar45._0_4_ + local_170));
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 213.0 + fVar63)),1);
    auVar60 = ZEXT464((uint)(auVar45._0_4_ + local_16c));
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 455.0 + fVar63)),1);
    auVar61 = ZEXT464((uint)(auVar45._0_4_ + local_170));
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 241.0 + fVar63)),1);
    auVar62 = ZEXT464((uint)(auVar45._0_4_ + local_16c));
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 459.0 + fVar63)),1);
    local_180 = auVar45._0_4_ + local_170;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 212.0 + fVar63)),1);
    local_17c = auVar45._0_4_ + local_16c;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 627.0 + fVar63)),1);
    local_170 = auVar45._0_4_ + local_170;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 242.0 + fVar63)),1);
    local_16c = auVar45._0_4_ + local_16c;
    local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
    local_2a8 = (float *)CONCAT44(local_2a8._4_4_,DAT_180b0a41c * 6.0);
    FUN_1804df870(local_208,&local_180,&local_170,DAT_180b0a480);
    fVar30 = (local_170 - local_180) / 5.0;
    uStack_1c0 = param_1;
    local_1c8 = (undefined1  [8])local_198;
    local_1b8._8_8_ = &DAT_180c62ca8;
    local_1b8._0_8_ = &local_208;
    local_1a8 = local_108;
    iVar16 = 0;
    while( true ) {
      fVar41 = DAT_180b0a41c * 3.0;
      iVar15 = iVar16 + 1;
      auVar45 = vunpcklps_avx(ZEXT416((uint)(((float)iVar15 * fVar30 + local_180) - fVar41)),
                              ZEXT416((uint)(local_16c - fVar41)));
      local_2a8 = auVar45._0_8_;
      auVar45 = vunpcklps_avx(ZEXT416((uint)((float)iVar16 * fVar30 + local_180 + fVar41)),
                              ZEXT416((uint)(fVar41 + local_17c)));
      FUN_18047b700(local_1c8,0,iVar16,auVar45._0_8_);
      if (4 < iVar15) break;
      iVar16 = iVar15;
    }
    auVar45 = vunpcklps_avx(auVar61._0_16_,auVar62._0_16_);
    local_2a8 = auVar45._0_8_;
    auVar45 = vunpcklps_avx(auVar64._0_16_,auVar60._0_16_);
    FUN_18047b700(local_1c8,1,0,auVar45._0_8_);
  }
  auVar52 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 21.0 + fVar63)),1);
  auVar60 = ZEXT1664(auVar52);
  auVar45 = vpcmpeqd_avx(ZEXT116(bVar37),SUB6416(ZEXT464(6),0));
  auVar61 = ZEXT464(0x429a0000);
  local_170 = 77.0;
  auVar45 = vblendvps_avx(SUB6416(ZEXT464(0x43868000),0),auVar61._0_16_,auVar45);
  auVar45 = vroundss_avx(ZEXT816(0),
                         ZEXT416((uint)(((auVar45._0_4_ * DAT_180b0a41c + param_2[1]) -
                                        auVar52._0_4_ * fVar63) + fVar63)),1);
  auVar64 = ZEXT1664(auVar45);
  fVar30 = 143.0;
  if ((local_198[0] == '\0') && ((bVar37 == 4 || ((bVar37 == 5 && (DAT_180cd6a38 != 0)))))) {
    bVar40 = true;
  }
  else {
    bVar40 = false;
  }
  if ((bVar37 == 6) && (DAT_180b909b0 != 0)) {
    local_108._8_8_ = "Stock Agents";
    local_108._0_8_ = "All Agents";
    local_f8 = (float *)0x1807c6d40;
    local_190 = DAT_180b0a41c * 243.0 + *param_2;
    local_17c = auVar45._0_4_;
    local_18c = local_17c + auVar52._0_4_;
    local_180 = DAT_180b0a41c * 143.0 + *param_2;
    local_1f8 = (undefined1  [16])0x0;
    local_1d8 = (undefined1  [16])0x0;
    uStack_1c0 = 3;
    local_1c8 = (undefined1  [8])local_108;
    local_2a8 = (float *)(param_1 + 0x7c);
    local_290 = local_1f8;
    local_298 = (float **)local_1d8;
    cVar13 = FUN_1804abea0("##agent_filter",&local_180,&local_190,local_1c8);
    if (cVar13 != '\0') {
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    fVar30 = 248.0;
  }
  if (bVar40) {
    local_108 = (undefined1  [16])0x0;
    local_f8 = (float *)0x0;
    local_188 = 0.0;
    uVar36 = 0;
    if ((longlong)(local_140._8_8_ - local_140._0_8_) >> 2 != 0) {
      do {
        fVar41 = local_188;
        uVar29 = (ulonglong)*(int *)(local_140._0_8_ + uVar36 * 4);
        if (DAT_180b909b0 == 0) {
          ppuVar24 = &PTR_s_Glock_18_180797be0 + uVar29 * 2;
        }
        else {
          if ((ulonglong)
              (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4) <=
              uVar29) {
                    /* WARNING: Subroutine does not return */
            FUN_18047c010();
          }
          ppuVar24 = (undefined **)(uVar29 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
        }
        FUN_1801543a0(local_108,ppuVar24);
        local_188 = fVar41;
        if (*(int *)(local_140._0_8_ + uVar36 * 4) == *(int *)(param_1 + 0x4c)) {
          local_188 = (float)uVar36;
        }
        uVar36 = uVar36 + 1;
      } while (uVar36 < (ulonglong)((longlong)(local_140._8_8_ - local_140._0_8_) >> 2));
    }
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar30 * DAT_180b0a41c + fVar63)),1);
    local_180 = auVar45._0_4_ + *param_2;
    local_17c = auVar64._0_4_;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar30 + 92.0) * DAT_180b0a41c + fVar63)),1);
    local_190 = auVar45._0_4_ + *param_2;
    local_18c = local_17c + auVar60._0_4_;
    local_1f8 = (undefined1  [16])0x0;
    local_1d8 = (undefined1  [16])0x0;
    uStack_1c0 = (longlong)(local_108._8_8_ - local_108._0_8_) >> 3;
    local_1c8 = (undefined1  [8])local_108._0_8_;
    local_290 = local_1f8;
    local_298 = (float **)local_1d8;
    local_2a8 = &local_188;
    cVar13 = FUN_1804abea0("##weapon",&local_180,&local_190,local_1c8);
    if (cVar13 != '\0') {
      *(undefined4 *)(param_1 + 0x4c) =
           *(undefined4 *)(local_140._0_8_ + (longlong)(int)local_188 * 4);
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    fVar30 = fVar30 + 97.0;
    FUN_1800f0160(local_108);
  }
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar30 + 72.0) * DAT_180b0a41c + fVar63)),1);
  local_190 = auVar45._0_4_ + *param_2;
  local_17c = auVar64._0_4_;
  fVar41 = local_17c + auVar60._0_4_;
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar30 * DAT_180b0a41c + fVar63)),1);
  local_180 = auVar45._0_4_ + *param_2;
  local_1f8 = (undefined1  [16])0x0;
  local_1d8 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [8])&PTR_s_Rarity_18077f7a0;
  uStack_1c0 = 8;
  local_2a8 = (float *)(param_1 + 0xb4);
  local_290 = local_1f8;
  local_298 = (float **)local_1d8;
  local_18c = fVar41;
  cVar13 = FUN_1804abea0("##rarity",&local_180,&local_190,local_1c8);
  if (cVar13 != '\0') {
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  auVar45 = vroundss_avx(ZEXT816(0),
                         ZEXT416((uint)((fVar30 + auVar61._0_4_) * DAT_180b0a41c + fVar63)),1);
  local_180 = auVar45._0_4_ + *param_2;
  local_17c = auVar64._0_4_;
  auVar45 = vpcmpeqd_avx(ZEXT116(bVar37),SUB6416(ZEXT464(6),0));
  auVar56 = ZEXT464(0x43d28000);
  auVar45 = vblendvps_avx(ZEXT416(local_250),auVar56._0_16_,auVar45);
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar45._0_4_ * DAT_180b0a41c + fVar63)),1);
  local_190 = auVar45._0_4_ + *param_2;
  local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
  local_18c = fVar41;
  local_2a8._0_4_ = DAT_180b0a41c * fVar42;
  FUN_1804df870(local_208,&local_180,&local_190,DAT_1808da480);
  fVar30 = auVar60._0_4_ * fVar63 + auVar64._0_4_;
  local_1f8._4_4_ = fVar30;
  local_1f8._0_4_ = DAT_180b0a41c * 10.0 + local_180;
  local_2a0 = (undefined8 *******)&DAT_18082ac6c;
  local_2a8 = (float *)CONCAT44(local_2a8._4_4_,DAT_1808da474);
  FUN_180463b40(local_208,DAT_180c62cc0,0x41280000,local_1f8);
  lVar20 = DAT_180bb8ae8;
  auVar62 = ZEXT464(0x41533333);
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + fVar63)),1);
  auVar50 = ZEXT464((uint)local_260);
  auVar45 = vmaxss_avx(ZEXT416((uint)local_260),auVar45);
  auVar55 = ZEXT1664(auVar45);
  auVar61 = ZEXT1664(CONCAT124(auVar45._4_12_,auVar45._0_4_ / DAT_180b0a41c));
  lVar23 = DAT_180c62ca8;
  if (DAT_180c62ca8 == 0) {
    lVar23 = *(longlong *)(DAT_180bb8ae8 + 0x11d0);
  }
  uStack_1c0._0_4_ = *(undefined4 *)(DAT_180bb8ae8 + 0x11e4);
  local_1c8 = (undefined1  [8])*(undefined8 *)(DAT_180bb8ae8 + 0x11d0);
  uStack_1c0._4_4_ = *(undefined4 *)(DAT_180bb8ae8 + 0x11e0);
  FUN_1804d05a0(DAT_180bb8ae8 + 0x1fb8,local_1c8);
  uVar36 = auVar61._0_8_;
  if (auVar61._0_4_ == auVar54._0_4_) {
    uVar36 = (ulonglong)*(uint *)(lVar20 + 0x11e4);
  }
  FUN_1804c23b0(lVar23,uVar36);
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((auVar60._0_4_ - auVar55._0_4_) * fVar63)),1);
  local_1f8._4_4_ = auVar45._0_4_;
  local_1f8._0_4_ = auVar54._0_4_;
  FUN_1804b2d30(0xb,local_1f8);
  FUN_1804b2c00(0xc,auVar54._0_8_);
  FUN_1804b2a10(7,0);
  FUN_1804b2a10(8,0);
  FUN_1804b2a10(9,0);
  FUN_1804b2a10(0,DAT_180b0a47c);
  lVar20 = DAT_180bb8ae8;
  fVar42 = DAT_180b0a41c;
  fVar57 = 20.0;
  fVar41 = DAT_180b0a41c * 20.0;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar23 = *(longlong *)(lVar20 + 0x14d0);
  *(float *)(lVar23 + 0x118) = fVar41 + local_180;
  *(int *)(lVar23 + 0x11c) = auVar64._0_4_;
  *(undefined1 *)(lVar23 + 0x159) = 1;
  *(uint *)(lVar20 + 0x1e88) = *(uint *)(lVar20 + 0x1e88) | 1;
  *(float *)(lVar20 + 0x1ea0) = (local_190 - local_180) - fVar42 * 26.0;
  local_1f8._4_4_ = auVar54._0_4_;
  local_1f8._0_4_ = auVar54._0_4_;
  local_290 = (undefined1 *)0x0;
  local_298 = (float **)0x0;
  local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
  local_2a8 = (float *)local_1f8;
  cVar13 = FUN_1804fbc20("##search",0,param_1 + 0xb8,0x40);
  if (cVar13 != '\0') {
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  if (*(int *)(DAT_180bb8ae8 + 0x1550) == 0) {
    bVar40 = false;
  }
  else {
    bVar40 = *(int *)(DAT_180bb8ae8 + 0x1550) == *(int *)(DAT_180bb8ae8 + 0x1ec0);
  }
  FUN_1804b2b70(4);
  FUN_1804b2de0(2);
  lVar23 = DAT_180bb8ae8;
  lVar20 = (longlong)*(int *)(DAT_180bb8ae8 + 0x1fb8);
  if (*(int *)(DAT_180bb8ae8 + 0x1fb8) < 1) {
    FUN_1804c5a40("Calling PopFont() too many times!");
  }
  else {
    lVar25 = *(longlong *)(DAT_180bb8ae8 + 0x1fc0);
    FUN_1804c23b0(*(undefined8 *)(lVar25 + -0x10 + lVar20 * 0x10),
                  *(undefined4 *)(lVar25 + -8 + lVar20 * 0x10),
                  *(undefined4 *)(lVar25 + -4 + lVar20 * 0x10));
    *(int *)(lVar23 + 0x1fb8) = *(int *)(lVar23 + 0x1fb8) + -1;
  }
  uVar31 = DAT_1808da474;
  if ((*(char *)(param_1 + 0xb8) == '\0') && (!bVar40)) {
    fVar41 = (float)FUN_180463350(DAT_180c62ca8,auVar62._0_8_);
    lVar20 = local_208;
    lVar23 = DAT_180c62ca8;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar57 * DAT_180b0a41c + local_180 + fVar63)),1
                          );
    local_1f8._0_4_ = auVar45._0_4_;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar30 - fVar41 * fVar63) + fVar63)),1);
    auVar64 = ZEXT1664(auVar45);
    fVar30 = (float)FUN_1804632d0(DAT_180c62ca8,auVar62._0_8_);
    local_1f8._4_4_ = auVar64._0_4_ - fVar30;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * auVar62._0_4_ + fVar63)),1);
    auVar45 = vmaxss_avx(auVar50._0_16_,auVar45);
    uVar36 = auVar45._0_8_;
    if ((uVar31 & 0xff000000) != 0) {
      if (lVar23 == 0) {
        lVar23 = *(longlong *)(*(longlong *)(lVar20 + 0x38) + 0x20);
      }
      if (auVar45._0_4_ == auVar54._0_4_) {
        uVar36 = (ulonglong)*(uint *)(*(longlong *)(lVar20 + 0x38) + 0x28);
      }
      _local_1c8 = *(undefined1 (*) [16])(lVar20 + 0x60);
      local_280 = 0;
      local_288 = CONCAT44(local_288._4_4_,auVar54._0_4_);
      local_290 = (undefined1 *)0x0;
      local_298 = (float **)0x18082af34;
      local_2a8 = (float *)CONCAT44(local_2a8._4_4_,uVar31);
      local_2a0 = (undefined8 *******)local_1c8;
      FUN_1804ea5f0(lVar23,lVar20,uVar36,local_1f8);
    }
  }
  lVar23 = DAT_180b909b0;
  if ((local_198[0] == '\0') || (DAT_180b909b0 == 0)) {
    iVar16 = *(int *)(param_1 + 0x4c);
  }
  else if (*(int *)(param_1 + 0x50) == 1) {
    iVar16 = *(int *)(DAT_180b909b0 + 0x118);
  }
  else {
    iVar16 = *(int *)(DAT_180b909b0 + 0x11c);
  }
  iVar15 = iVar16;
  if (iVar16 < 0) {
    iVar15 = *(int *)(param_1 + 0x4c);
  }
  uVar36 = (ulonglong)iVar15;
  if (DAT_180b909b0 == 0) {
    ppuVar24 = &PTR_s_Glock_18_180797be0 + uVar36 * 2;
  }
  else {
    if ((ulonglong)(*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4)
        <= uVar36) {
                    /* WARNING: Subroutine does not return */
      FUN_18047c010();
    }
    ppuVar24 = (undefined **)(uVar36 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
  }
  local_1f8._0_8_ = ppuVar24;
  if ((((*(int *)(param_1 + 0x70) == iVar16) &&
       (*(int *)(param_1 + 0x74) == *(int *)(param_1 + 0xb4))) &&
      (*(float *)(param_1 + 0x78) == *local_258)) &&
     (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0x7c))) {
    _Buf1 = (undefined8 *)(param_1 + 0x88);
    sVar22 = 0xffffffffffffffff;
    do {
      sVar22 = sVar22 + 1;
    } while (*(char *)(param_1 + 0xb8 + sVar22) != '\0');
    _Size = *(size_t *)(param_1 + 0x98);
    if (0xf < *(ulonglong *)(param_1 + 0xa0)) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((_Size != sVar22) ||
       ((fVar30 = DAT_180b0a41c, _Size != 0 &&
        (iVar15 = memcmp(_Buf1,(void *)(param_1 + 0xb8),_Size), iVar15 != 0)))) goto LAB_18047a391;
    auVar45 = auVar56._0_16_;
    if (*(longlong *)(param_1 + 0xa8) != lVar23) goto LAB_18047a391;
  }
  else {
LAB_18047a391:
    if (*(longlong *)(param_1 + 0x58) != *(longlong *)(param_1 + 0x60)) {
      *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x58);
    }
    *(int *)(param_1 + 0x70) = iVar16;
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_1 + 0xb4);
    *(float *)(param_1 + 0x78) = *local_258;
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_1 + 0x7c);
    lVar23 = -1;
    do {
      lVar23 = lVar23 + 1;
    } while (*(char *)(param_1 + 0xb8 + lVar23) != '\0');
    FUN_180113930(param_1 + 0x88);
    auVar45 = auVar56._0_16_;
    *(longlong *)(param_1 + 0xa8) = DAT_180b909b0;
    local_188 = (float)(int)*(short *)((longlong)ppuVar24 + 10);
    if ((int)local_188 < (int)*(short *)((longlong)ppuVar24 + 0xc) + (int)local_188) {
      do {
        fVar30 = local_188;
        if (DAT_180cd6878 != 0) {
          local_1d8._0_4_ = *local_258;
          local_150 = local_188;
          cVar13 = (**(code **)(*(longlong *)DAT_180cd6878 + 0x10))
                             (DAT_180cd6878,local_1d8,&local_150);
          if (cVar13 != '\0') goto LAB_18047a45c;
          goto LAB_18047a5e4;
        }
LAB_18047a45c:
        if (((bVar37 == 6) && (DAT_180b909b0 != 0)) &&
           ((-1 < (int)fVar30 &&
            (((int)fVar30 <
              (int)((*(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58)) /
                   0x68) &&
             (lVar23 = (longlong)(int)fVar30 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58),
             lVar23 != 0)))))) {
          if (*(int *)(param_1 + 0x7c) == 1) {
            if (*(longlong *)(lVar23 + 0x18) == 0) goto LAB_18047a4c4;
          }
          else if ((*(int *)(param_1 + 0x7c) != 2) || (*(longlong *)(lVar23 + 0x18) != 0))
          goto LAB_18047a4c4;
        }
        else {
LAB_18047a4c4:
          if (0 < *(int *)(param_1 + 0xb4)) {
            iVar16 = *(int *)(&DAT_18077f738 + (longlong)*(int *)(param_1 + 0xb4) * 4);
            iVar15 = FUN_180474820(fVar30);
            if (iVar15 != iVar16) goto LAB_18047a5e4;
          }
          uVar36 = (ulonglong)(int)fVar30;
          if (DAT_180b909b0 == 0) {
            ppuVar38 = &PTR_s_No_Skin_18078acd0 + uVar36 * 3;
          }
          else {
            if ((ulonglong)
                ((*(longlong *)(DAT_180b909b0 + 0x48) - *(longlong *)(DAT_180b909b0 + 0x40)) / 0x18)
                <= uVar36) {
                    /* WARNING: Subroutine does not return */
              FUN_18047c010();
            }
            ppuVar38 = (undefined **)(*(longlong *)(DAT_180b909b0 + 0x40) + uVar36 * 0x18);
          }
          pcVar17 = *ppuVar38;
          if (*(char *)(param_1 + 0xb8) == '\0') {
LAB_18047a80e:
            pfVar8 = *(float **)(param_1 + 0x60);
            if (pfVar8 == *(float **)(param_1 + 0x68)) {
              FUN_18026b910(param_1 + 0x58,pfVar8,&local_188);
            }
            else {
              *pfVar8 = fVar30;
              *(longlong *)(param_1 + 0x60) = *(longlong *)(param_1 + 0x60) + 4;
            }
          }
          else {
            uVar36 = 0xffffffffffffffff;
            do {
              uVar36 = uVar36 + 1;
            } while (((char *)(param_1 + 0xb8))[uVar36] != '\0');
            if (*pcVar17 != '\0') {
              do {
                pbVar18 = (byte *)(param_1 + 0xb8);
                uVar29 = 0;
                if (uVar36 != 0) {
                  lVar23 = (longlong)pcVar17 - (longlong)pbVar18;
                  do {
                    if (pbVar18[lVar23] == 0) goto LAB_18047a5c2;
                    iVar16 = tolower((uint)pbVar18[lVar23]);
                    iVar15 = tolower((uint)*pbVar18);
                    if (iVar16 != iVar15) goto LAB_18047a5c2;
                    uVar29 = uVar29 + 1;
                    pbVar18 = pbVar18 + 1;
                  } while (uVar29 < uVar36);
                }
                if (uVar29 == uVar36) {
                  ppuVar24 = (undefined **)local_1f8._0_8_;
                  fVar30 = local_188;
                  goto LAB_18047a80e;
                }
LAB_18047a5c2:
                pcVar17 = pcVar17 + 1;
              } while (*pcVar17 != '\0');
              fVar30 = local_188;
            }
            ppuVar24 = (undefined **)local_1f8._0_8_;
          }
          bVar37 = local_268;
        }
LAB_18047a5e4:
        auVar45 = auVar56._0_16_;
        local_188 = (float)((int)fVar30 + 1);
      } while ((int)local_188 <
               (int)*(short *)((longlong)ppuVar24 + 10) + (int)*(short *)((longlong)ppuVar24 + 0xc))
      ;
      param_2 = local_238;
    }
    fVar30 = DAT_180b0a41c;
  }
  auVar52 = vpcmpeqd_avx(ZEXT116(bVar37),SUB6416(ZEXT464(6),0));
  auVar52 = vblendvps_avx(SUB6416(ZEXT464(0x438e8000),0),SUB6416(ZEXT464(0x42c60000),0),auVar52);
  auVar52 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar52._0_4_ * fVar30 + fVar63)),1);
  fVar41 = auVar52._0_4_ + param_2[1];
  auVar60 = ZEXT464((uint)fVar41);
  auVar52 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar30 * 143.0 + fVar63)),1);
  local_168[0] = auVar52._0_4_ + *param_2;
  auVar61 = ZEXT464((uint)local_168[0]);
  local_258 = (float *)CONCAT44(fVar41,local_168[0]);
  auVar52 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar30 * 481.0 + fVar63)),1);
  local_184 = auVar52._0_4_ + param_2[1];
  auVar64 = ZEXT464((uint)local_184);
  auVar52 = vpcmpeqd_avx(ZEXT116(bVar37),SUB6416(ZEXT464(6),0));
  auVar45 = vblendvps_avx(ZEXT416(local_250),auVar45,auVar52);
  auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar45._0_4_ * fVar30 + fVar63)),1);
  fVar41 = auVar45._0_4_ + *param_2;
  if (((bVar37 == 6) && (*(int *)(param_1 + 0x7c) != 1)) && (DAT_180cd66b8 != 0)) {
    cVar13 = (**(code **)(*(longlong *)DAT_180cd66b8 + 0x10))();
    lVar20 = local_208;
    lVar23 = DAT_180c62ca8;
    uVar31 = DAT_1808da474;
    if (cVar13 == '\0') {
      fVar30 = DAT_180b0a41c;
      goto LAB_18047a83d;
    }
    bVar40 = true;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar61._0_4_ + fVar63)),1);
    local_1f8._0_4_ = auVar45._0_4_;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar60._0_4_ + fVar63)),1);
    auVar62 = ZEXT1664(auVar45);
    fVar42 = (float)FUN_1804632d0(DAT_180c62ca8,0x41200000);
    fVar30 = auVar60._0_4_;
    local_1f8._4_4_ = auVar62._0_4_ - fVar42;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 10.0 + fVar63)),1);
    auVar45 = vmaxss_avx(auVar50._0_16_,auVar45);
    uVar36 = auVar45._0_8_;
    if ((uVar31 & 0xff000000) != 0) {
      if (lVar23 == 0) {
        lVar23 = *(longlong *)(*(longlong *)(lVar20 + 0x38) + 0x20);
      }
      if (auVar45._0_4_ == auVar54._0_4_) {
        uVar36 = (ulonglong)*(uint *)(*(longlong *)(lVar20 + 0x38) + 0x28);
      }
      local_238 = *(float **)(lVar20 + 0x60);
      uStack_230 = *(undefined8 *)(lVar20 + 0x68);
      local_280 = 0;
      local_288 = CONCAT44(local_288._4_4_,auVar54._0_4_);
      local_290 = (undefined1 *)0x0;
      local_298 = (float **)0x18082af18;
      local_2a0 = (undefined8 *******)&local_238;
      local_2a8 = (float *)CONCAT44(local_2a8._4_4_,uVar31);
      FUN_1804ea5f0(lVar23,lVar20,uVar36,local_1f8);
      fVar30 = auVar60._0_4_;
    }
    fVar30 = DAT_180b0a41c * 18.0 + fVar30;
    auVar60 = ZEXT464((uint)fVar30);
    local_258 = (float *)CONCAT44(fVar30,(undefined4)local_258);
    fVar30 = DAT_180b0a41c;
  }
  else {
LAB_18047a83d:
    bVar40 = false;
  }
  fVar63 = fVar30 * 4.7;
  fVar42 = 7.00649e-45;
  if (bVar37 == 6) {
    fVar42 = 4.2039e-45;
  }
  auVar45 = vroundss_avx(ZEXT816(0),
                         ZEXT416((uint)(((fVar41 - auVar61._0_4_) -
                                        (float)((int)fVar42 + -1) * fVar63) / (float)(int)fVar42)),1
                        );
  auVar62 = ZEXT1664(auVar45);
  local_1f8._0_4_ = auVar45._0_4_;
  local_188 = fVar30 * 101.0;
  fVar57 = (float)(((int)(*(longlong *)(param_1 + 0x60) - *(longlong *)(param_1 + 0x58) >> 2) + -1 +
                   (int)fVar42) / (int)fVar42) * local_188 - (local_188 - fVar30 * 93.0);
  auVar45 = vmaxss_avx(ZEXT416((uint)local_264),
                       ZEXT416((uint)(fVar57 - (auVar64._0_4_ - auVar60._0_4_))));
  auVar54 = ZEXT1664(auVar45);
  lVar23 = *(longlong *)(DAT_180bb8ae8 + 0x14d8);
  lVar20 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  lVar25 = DAT_180bb8ae8;
  local_160 = fVar42;
  if ((lVar23 != 0) && (lVar23 == lVar20)) {
    cVar26 = '\0';
    cVar13 = FUN_1804b7ab0(lVar23);
    if ((cVar13 != '\0') &&
       (((*(int *)(lVar25 + 0x1550) == 0 || (*(char *)(lVar25 + 0x155f) != cVar26)) ||
        (*(int *)(lVar25 + 0x1550) == *(int *)(lVar23 + 0x8c))))) {
      auVar45 = vmaxss_avx(auVar60._0_16_,ZEXT416(*(uint *)(lVar20 + 0x26c)));
      auVar46 = vminss_avx(auVar64._0_16_,ZEXT416(*(uint *)(lVar20 + 0x274)));
      auVar44 = vminss_avx(ZEXT416((uint)(fVar30 * 8.0 + fVar41)),ZEXT416(*(uint *)(lVar20 + 0x270))
                          );
      auVar52 = vmaxss_avx(auVar61._0_16_,ZEXT416(*(uint *)(lVar20 + 0x268)));
      if (auVar52._0_4_ - *(float *)(lVar25 + 0xcec) <= *(float *)(lVar25 + 0x110)) {
        if (auVar45._0_4_ - *(float *)(lVar25 + 0xcf0) <= *(float *)(lVar25 + 0x114)) {
          if ((((*(float *)(lVar25 + 0x110) < *(float *)(lVar25 + 0xcec) + auVar44._0_4_) &&
               (*(float *)(lVar25 + 0x114) < auVar46._0_4_ + *(float *)(lVar25 + 0xcf0))) &&
              (*(char *)(local_178 + 300) == cVar26)) &&
             (*(float *)(local_178 + 0x120) != local_264)) {
            *(float *)(param_1 + 0xf8) =
                 *(float *)(param_1 + 0xf8) - fVar30 * 60.0 * *(float *)(local_178 + 0x120);
          }
          auVar64 = ZEXT464((uint)local_184);
          goto LAB_18047aa09;
        }
      }
      auVar64 = ZEXT464((uint)local_184);
    }
  }
LAB_18047aa09:
  lVar23 = local_178;
  local_1e8 = fVar30 * 3.0 + fVar41;
  local_1e4 = auVar60._0_4_;
  local_200 = fVar30 * 5.5 + fVar41;
  local_1fc = auVar64._0_4_;
  if (auVar54._0_4_ <= local_264) {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    fVar30 = local_264;
  }
  else {
    fVar49 = local_1fc - local_1e4;
    auVar45 = vmaxss_avx(ZEXT416((uint)(fVar30 * 24.0)),
                         ZEXT416((uint)(((local_1fc - local_1e4) * fVar49) / fVar57)));
    auVar64 = ZEXT1664(auVar45);
    plVar7 = *(longlong **)(lVar25 + 0x14d0);
    uVar27 = ~*(uint *)(plVar7[0x22] + -4 + (longlong)(int)plVar7[0x21] * 4);
    pcVar17 = "##scrollbar";
    cVar13 = '#';
    uVar31 = uVar27;
    do {
      pcVar17 = pcVar17 + 1;
      if (((cVar13 == '#') && (*pcVar17 == '#')) && (pcVar17[1] == '#')) {
        pcVar17 = pcVar17 + 2;
        uVar31 = uVar27;
      }
      else {
        uVar31 = crc32(uVar31,cVar13);
      }
      cVar13 = *pcVar17;
    } while (cVar13 != '\0');
    uVar31 = ~uVar31;
    if (*(uint *)(*plVar7 + 0x1534) == uVar31) {
      FUN_1804cf810(uVar31,0xb,"##scrollbar");
      fVar30 = DAT_180b0a41c;
    }
    local_178 = CONCAT44(local_1fc,fVar30 * 3.0 + local_200);
    local_1c8._4_4_ = local_1e4;
    local_1c8._0_4_ = local_1e8 - fVar30 * 3.0;
    local_2a8 = (float *)CONCAT71(local_2a8._1_7_,1);
    puVar21 = (undefined2 *)FUN_1804aad60(&local_250,uVar31,local_1c8,&local_178);
    uVar5 = *puVar21;
    local_25c._1_1_ = (char)((ushort)uVar5 >> 8);
    cVar13 = local_25c._1_1_;
    fVar30 = auVar64._0_4_;
    if (local_25c._1_1_ != '\0') {
      *(float *)(param_1 + 0xf8) =
           (((*(float *)(lVar23 + 0x114) - local_1e4) - fVar30 * 0.5) / (fVar49 - fVar30)) *
           auVar54._0_4_;
    }
    if (local_264 <= *(float *)(param_1 + 0xf8)) {
      auVar45 = vminss_avx(auVar54._0_16_,ZEXT416((uint)*(float *)(param_1 + 0xf8)));
      fVar57 = auVar45._0_4_;
    }
    else {
      fVar57 = local_264;
    }
    *(float *)(param_1 + 0xf8) = fVar57;
    fVar57 = (fVar49 - fVar30) * (fVar57 / auVar54._0_4_) + local_1e4;
    fVar49 = 2.0;
    local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
    fVar30 = local_264;
    local_25c = uVar5;
    local_2a8._0_4_ = DAT_180b0a41c * 2.0;
    FUN_1804df870(local_208,&local_1e8,&local_200,DAT_180b0a434);
    if ((cVar13 != '\0') || (uVar31 = DAT_1808da474, (char)uVar5 != '\0')) {
      uVar31 = DAT_1808da478;
    }
    local_1c8._4_4_ = fVar57 + auVar64._0_4_;
    local_1c8._0_4_ = local_200;
    local_178 = CONCAT44(fVar57,local_1e8);
    local_2a0 = (undefined8 *******)((ulonglong)local_2a0 & 0xffffffff00000000);
    local_2a8 = (float *)CONCAT44(local_2a8._4_4_,fVar49 * DAT_180b0a41c);
    FUN_1804df870(local_208,&local_178,local_1c8,uVar31);
    auVar62 = ZEXT464((uint)local_1f8._0_4_);
    auVar64 = ZEXT464((uint)local_184);
    lVar25 = DAT_180bb8ae8;
  }
  auVar54 = ZEXT464(*(uint *)(param_1 + 0xf8));
  uVar36 = (ulonglong)*(uint *)(param_1 + 0xf8);
  plVar7 = *(longlong **)(lVar25 + 0x14d0);
  uVar27 = ~*(uint *)(plVar7[0x22] + -4 + (longlong)(int)plVar7[0x21] * 4);
  pcVar17 = "##scroll_anim";
  cVar13 = '#';
  uVar31 = uVar27;
  do {
    pcVar17 = pcVar17 + 1;
    if (((cVar13 == '#') && (*pcVar17 == '#')) && (pcVar17[1] == '#')) {
      pcVar17 = pcVar17 + 2;
      uVar31 = uVar27;
    }
    else {
      uVar31 = crc32(uVar31,cVar13);
    }
    cVar13 = *pcVar17;
  } while (cVar13 != '\0');
  uVar31 = ~uVar31;
  if (*(uint *)(*plVar7 + 0x1534) == uVar31) {
    FUN_1804cf810(uVar31,0xb,"##scroll_anim");
    uVar36 = auVar54._0_8_;
  }
  uVar43 = FUN_1804aaa10(uVar31,uVar36,0x41a00000);
  lVar23 = DAT_180bb8ae8;
  local_1c8._4_4_ = auVar64._0_4_;
  local_1c8._0_4_ = fVar41;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar23 = *(longlong *)(lVar23 + 0x14d0);
  FUN_1804d9420(*(undefined8 *)(lVar23 + 0x2c8),&local_258,local_1c8,1);
  lVar25 = (longlong)*(int *)(*(longlong *)(lVar23 + 0x2c8) + 0xa0);
  lVar20 = *(longlong *)(*(longlong *)(lVar23 + 0x2c8) + 0xa8);
  uVar14 = *(undefined4 *)(lVar20 + -0xc + lVar25 * 0x10);
  uVar1 = *(undefined4 *)(lVar20 + -4 + lVar25 * 0x10);
  uVar2 = *(undefined4 *)(lVar20 + -8 + lVar25 * 0x10);
  *(undefined4 *)(lVar23 + 0x268) = *(undefined4 *)(lVar20 + -0x10 + lVar25 * 0x10);
  *(undefined4 *)(lVar23 + 0x26c) = uVar14;
  *(undefined4 *)(lVar23 + 0x270) = uVar2;
  *(undefined4 *)(lVar23 + 0x274) = uVar1;
  if ((*(longlong *)(param_1 + 0x58) != *(longlong *)(param_1 + 0x60)) || (bVar40)) {
    fVar57 = 0.5;
  }
  else {
    if (bVar37 == 6) {
      if (((*(int *)(param_1 + 0x7c) == 2) && (*(char *)(param_1 + 0xb8) == '\0')) &&
         (*(int *)(param_1 + 0xb4) == 0)) {
        pcVar17 = "No custom models found";
      }
      else {
        pcVar17 = "No agents match the filters";
      }
    }
    else {
      pcVar17 = "No skins match the filters";
    }
    fVar57 = 0.5;
    auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.6 + 0.5)),1);
    auVar45 = vmaxss_avx(ZEXT416((uint)local_260),auVar45);
    local_278 = 0;
    local_288 = 0;
    local_290 = (undefined1 *)0x0;
    local_298 = (float **)0x0;
    local_2a0 = (undefined8 *******)pcVar17;
    local_2a8._0_4_ = fVar30;
    FUN_1804ea040(&local_238,DAT_180c62ca8,auVar45._0_8_,0x7f7fffff);
    auVar45 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)(((fVar41 + local_168[0]) - local_238._0_4_) * fVar57 +
                                         fVar57)),1);
    local_1c8._4_4_ = DAT_180b0a41c * 40.0 + auVar60._0_4_;
    local_1c8._0_4_ = auVar45._0_4_;
    local_298 = (float **)0x0;
    local_2a8 = (float *)CONCAT44(local_2a8._4_4_,DAT_1808da474);
    local_2a0 = (undefined8 *******)pcVar17;
    FUN_180463450(local_208,DAT_180c62ca8,0x4159999a,local_1c8);
  }
  uVar36 = 0;
  lVar23 = *(longlong *)(param_1 + 0x58);
  if (*(longlong *)(param_1 + 0x60) - lVar23 >> 2 != 0) {
    fVar63 = auVar62._0_4_ + fVar63;
    auVar54 = ZEXT464(0x4149999a);
    fVar49 = 18.0;
    fVar30 = local_188;
    fVar41 = local_170;
    do {
      fVar53 = *(float *)(lVar23 + uVar36 * 4);
      uVar34 = (ulonglong)(int)fVar53;
      uVar29 = (ulonglong)(uint)((int)uVar36 >> 0x1f) << 0x20 | uVar36 & 0xffffffff;
      fVar10 = (float)(int)((longlong)uVar29 % (longlong)(int)fVar42) * fVar63 + local_168[0];
      auVar45 = vroundss_avx(ZEXT816(0),
                             ZEXT416((uint)((((float)(int)((longlong)uVar29 / (longlong)(int)fVar42)
                                              * fVar30 + auVar60._0_4_) - (float)uVar43) + fVar57)),
                             1);
      fVar48 = auVar45._0_4_;
      if ((fVar48 <= auVar64._0_4_) && (auVar60._0_4_ <= fVar48 + fVar30)) {
        auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar10 + fVar57)),1);
        local_178 = CONCAT44(fVar48,auVar45._0_4_);
        auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar10 + auVar62._0_4_ + fVar57)),1);
        local_180 = auVar45._0_4_;
        auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar41 * DAT_180b0a41c + fVar57)),1);
        local_17c = auVar45._0_4_ + fVar48;
        if ((local_198[0] == '\0') || (DAT_180cd69b8 == 0)) {
          if (((int)(short)*local_248 == *(int *)(param_1 + 0x4c)) &&
             ((float)(int)*(short *)((longlong)local_248 + 2) == fVar53)) {
            uVar39 = 1;
          }
          else {
            uVar39 = 0;
          }
        }
        else {
          local_1f8._0_4_ = *(undefined4 *)(param_1 + 0x50);
          local_170 = fVar53;
          uVar39 = (**(code **)(*(longlong *)DAT_180cd69b8 + 0x10))
                             (DAT_180cd69b8,local_1f8,&local_170);
        }
        lVar23 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
        uVar14 = FUN_1804c2670(lVar23,fVar53);
        piVar33 = (int *)(lVar23 + 0x108);
        iVar16 = *(int *)(lVar23 + 0x10c);
        if (*piVar33 == iVar16) {
          iVar15 = *piVar33 + 1;
          if (iVar16 == 0) {
            iVar16 = 8;
          }
          else {
            iVar16 = iVar16 / 2 + iVar16;
          }
          if (iVar15 < iVar16) {
            iVar15 = iVar16;
          }
          FUN_1804d14d0(piVar33,iVar15);
        }
        *(undefined4 *)(*(longlong *)(lVar23 + 0x110) + (longlong)*piVar33 * 4) = uVar14;
        *piVar33 = *piVar33 + 1;
        local_1c8._4_4_ = DAT_180b0a41c * 8.0;
        local_1c8._0_4_ = DAT_180b0a41c * 9.0;
        uVar14 = FUN_180474820(fVar53);
        local_290 = (undefined1 *)CONCAT71(local_290._1_7_,uVar39);
        local_2a0 = (undefined8 *******)CONCAT44(local_2a0._4_4_,uVar14);
        local_2a8 = (float *)CONCAT44(local_2a8._4_4_,fVar53);
        local_298 = (float **)local_1c8;
        cVar13 = FUN_180474b60(local_208,"##skin",&local_178,&local_180);
        if (cVar13 != '\0') {
          if ((local_198[0] == '\0') || (DAT_180cd69f8 == 0)) {
            local_250 = CONCAT22(SUB42(fVar53,0),*(undefined2 *)(param_1 + 0x4c));
            *local_248 = local_250;
          }
          else {
            local_1d8._0_4_ = fVar53;
            local_150 = *(float *)(param_1 + 0x50);
            (**(code **)(*(longlong *)DAT_180cd69f8 + 0x10))(DAT_180cd69f8,&local_150,local_1d8);
          }
        }
        lVar23 = DAT_180bb8ae8;
        iVar16 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar16 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
          lVar23 = DAT_180bb8ae8;
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar16 + -1;
        }
        if (DAT_180b909b0 == 0) {
          ppuVar24 = &PTR_s_No_Skin_18078acd0 + uVar34 * 3;
        }
        else {
          if ((ulonglong)
              ((*(longlong *)(DAT_180b909b0 + 0x48) - *(longlong *)(DAT_180b909b0 + 0x40)) / 0x18)
              <= uVar34) {
                    /* WARNING: Subroutine does not return */
            FUN_18047c010();
          }
          ppuVar24 = (undefined **)(*(longlong *)(DAT_180b909b0 + 0x40) + uVar34 * 0x18);
        }
        ppfVar9 = (float **)*ppuVar24;
        lVar20 = *(longlong *)(lVar23 + 0x14d8);
        lVar25 = *(longlong *)(lVar23 + 0x14d0);
        if ((lVar20 != 0) && (lVar20 == lVar25)) {
          cVar26 = '\0';
          cVar13 = FUN_1804b7ab0(lVar20);
          if ((cVar13 != '\0') &&
             (((*(int *)(lVar23 + 0x1550) == 0 || (*(char *)(lVar23 + 0x155f) != cVar26)) ||
              (*(int *)(lVar23 + 0x1550) == *(int *)(lVar20 + 0x8c))))) {
            auVar45 = vmaxss_avx(ZEXT416(local_178._4_4_),ZEXT416(*(uint *)(lVar25 + 0x26c)));
            auVar46 = vminss_avx(ZEXT416((uint)local_17c),ZEXT416(*(uint *)(lVar25 + 0x274)));
            auVar44 = vminss_avx(ZEXT416((uint)local_180),ZEXT416(*(uint *)(lVar25 + 0x270)));
            auVar52 = vmaxss_avx(ZEXT416((uint)(float)local_178),ZEXT416(*(uint *)(lVar25 + 0x268)))
            ;
            if (auVar52._0_4_ - *(float *)(lVar23 + 0xcec) <= *(float *)(lVar23 + 0x110)) {
              if (((auVar45._0_4_ - *(float *)(lVar23 + 0xcf0) <= *(float *)(lVar23 + 0x114)) &&
                  (*(float *)(lVar23 + 0x110) < *(float *)(lVar23 + 0xcec) + auVar44._0_4_)) &&
                 (*(float *)(lVar23 + 0x114) < *(float *)(lVar23 + 0xcf0) + auVar46._0_4_)) {
                FUN_1804ad0d0(ppfVar9,local_264);
              }
            }
            auVar64 = ZEXT464((uint)local_184);
            fVar30 = local_188;
          }
        }
        local_190 = DAT_180b0a41c + (float)local_178;
        local_18c = DAT_180b0a41c * 6.0 + local_17c;
        auVar45 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * auVar54._0_4_ + fVar57)),1)
        ;
        auVar45 = vmaxss_avx(ZEXT416((uint)local_260),auVar45);
        local_278 = 0;
        local_288 = 0;
        local_290 = (undefined1 *)0x0;
        local_298 = (float **)0x0;
        local_2a8._0_4_ = local_264;
        local_2a0 = (undefined8 *******)ppfVar9;
        FUN_1804ea040(&local_238,DAT_180c62ca8,auVar45._0_8_,0x7f7fffff);
        if (local_238._0_4_ <= auVar62._0_4_) {
          local_298 = (float **)0x0;
          local_2a8 = (float *)CONCAT44(local_2a8._4_4_,DAT_180b0a48c);
          local_2a0 = (undefined8 *******)ppfVar9;
          FUN_180463450(local_208,DAT_180c62ca8,auVar54._0_8_,&local_190);
          fVar42 = local_160;
        }
        else {
          local_290 = (undefined1 *)CONCAT44(local_290._4_4_,local_180);
          local_298 = (float **)CONCAT44(local_298._4_4_,local_180 - fVar49 * DAT_180b0a41c);
          local_2a8 = (float *)CONCAT44(local_2a8._4_4_,DAT_180b0a48c);
          local_2a0 = (undefined8 *******)ppfVar9;
          FUN_180463930(local_208,DAT_180c62ca8,auVar54._0_8_);
          fVar42 = local_160;
        }
      }
      uVar36 = uVar36 + 1;
      lVar23 = *(longlong *)(param_1 + 0x58);
    } while (uVar36 < (ulonglong)(*(longlong *)(param_1 + 0x60) - lVar23 >> 2));
    bVar37 = local_268;
  }
  FUN_1804ba3f0();
  uVar31 = local_24c;
  if (((char)local_24c != '\0') && (DAT_180cd6a78 != 0)) {
    cVar13 = (**(code **)(*(longlong *)DAT_180cd6a78 + 0x10))();
    uVar31 = uVar31 & 0xff;
    if (cVar13 == '\0') {
      uVar31 = 0;
    }
  }
  iVar16 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar16 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar16 + -1;
  }
  fVar30 = *(float *)(param_1 + 0xb0);
  if (fVar30 < local_260) {
    uVar36 = (ulonglong)local_240;
    if (local_240 < *(int *)(local_208 + 0x20)) {
      lVar23 = uVar36 * 0x14;
      do {
        uVar27 = *(uint *)(*(longlong *)(local_208 + 0x28) + 0x10 + lVar23);
        fVar41 = ((float)(uVar27 >> 0x18) / 255.0) * (2.0 - fVar30) * fVar30;
        fVar63 = local_264;
        if (local_264 <= fVar41) {
          auVar45 = vminss_avx(ZEXT416((uint)local_260),ZEXT416((uint)fVar41));
          fVar63 = auVar45._0_4_;
        }
        *(uint *)(*(longlong *)(local_208 + 0x28) + 0x10 + lVar23) =
             (int)(longlong)(fVar63 * 255.0 + fVar57) << 0x18 | uVar27 & 0xffffff;
        uVar27 = (int)uVar36 + 1;
        uVar36 = (ulonglong)uVar27;
        lVar23 = lVar23 + 0x14;
      } while ((int)uVar27 < *(int *)(local_208 + 0x20));
    }
  }
  if (bVar37 < 4) {
    FUN_180474590(local_1dc,local_248);
  }
  if ((char)uVar31 != '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xfc) = 0;
  }
  FUN_18015c010(local_128);
  FUN_180159650(local_140);
}



