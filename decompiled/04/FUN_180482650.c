// FUN_180482650 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180482650 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180482650(longlong *param_1,longlong param_2,float *param_3,float *param_4)

{
  undefined2 uVar1;
  ulonglong uVar2;
  size_t sVar3;
  longlong *plVar4;
  size_t _Size;
  undefined *puVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  char *pcVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  char cVar15;
  longlong *_Buf1;
  uint uVar16;
  longlong *_Buf2;
  longlong *plVar17;
  byte bVar18;
  uint uVar19;
  ulonglong *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  float fVar27;
  undefined1 auVar28 [64];
  float fVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  undefined8 uVar33;
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  float fVar37;
  undefined1 auStack_1f8 [32];
  float local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1a8;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  undefined2 local_180;
  undefined1 local_17c [4];
  float local_178;
  undefined *local_170;
  float *local_168;
  undefined4 *local_160;
  undefined1 *local_158;
  longlong *local_150;
  undefined8 *local_148;
  float *local_140;
  longlong local_138;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  undefined1 local_118 [4];
  float local_114;
  float local_110;
  float local_10c;
  undefined4 local_108 [2];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_1f8;
  fVar22 = *(float *)(DAT_180bb8ae8 + 0x40);
  plVar17 = param_1 + 0x3a;
  uVar2 = param_1[0x3d];
  sVar3 = param_1[0x3c];
  plVar4 = *(longlong **)(*param_1 + (longlong)(int)param_1[3] * 8);
  _Buf2 = plVar17;
  if (0xf < uVar2) {
    _Buf2 = (longlong *)*plVar17;
  }
  _Size = plVar4[2];
  _Buf1 = plVar4;
  if (0xf < (ulonglong)plVar4[3]) {
    _Buf1 = (longlong *)*plVar4;
  }
  auVar35 = ZEXT464(0x3f800000);
  auVar34 = ZEXT864(0);
  local_138 = param_2;
  if ((_Size != sVar3) || ((_Size != 0 && (iVar9 = memcmp(_Buf1,_Buf2,_Size), iVar9 != 0)))) {
    if (param_1 + 0x3e != plVar17) {
      if (0xf < uVar2) {
        plVar17 = (longlong *)*plVar17;
      }
      FUN_180113930(param_1 + 0x3e,plVar17,sVar3);
    }
    if (param_1 + 0x3a != plVar4) {
      plVar17 = plVar4;
      if (0xf < (ulonglong)plVar4[3]) {
        plVar17 = (longlong *)*plVar4;
      }
      FUN_180113930(param_1 + 0x3a,plVar17,plVar4[2]);
    }
    auVar24._0_8_ = -(ulonglong)(param_1[0x40] == 0);
    auVar24._8_8_ = 0xffffffffffffffff;
    auVar24 = vblendvps_avx(auVar34._0_16_,auVar35._0_16_,auVar24);
    *(int *)(param_1 + 0x42) = auVar24._0_4_;
  }
  fVar23 = 6.0;
  auVar24 = vminss_avx(auVar35._0_16_,ZEXT416((uint)(fVar22 * 6.0 + *(float *)(param_1 + 0x42))));
  puVar20 = (ulonglong *)(param_1 + 0x3a);
  *(int *)(param_1 + 0x42) = auVar24._0_4_;
  if (0xf < (ulonglong)param_1[0x3d]) {
    puVar20 = (ulonglong *)*puVar20;
  }
  puVar5 = (undefined *)plVar4[4];
  plVar17 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar12 = "##preset_icon";
  uVar16 = ~*(uint *)(plVar17[0x22] + -4 + (longlong)(int)plVar17[0x21] * 4);
  cVar15 = '#';
  uVar19 = uVar16;
  do {
    pcVar12 = pcVar12 + 1;
    if (((cVar15 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
      pcVar12 = pcVar12 + 2;
      uVar19 = uVar16;
    }
    else {
      uVar19 = crc32(uVar19,cVar15);
    }
    cVar15 = *pcVar12;
  } while (cVar15 != '\0');
  uVar19 = ~uVar19;
  local_170 = puVar5;
  if (*(uint *)(*plVar17 + 0x1534) == uVar19) {
    FUN_1804cf810(uVar19,0xb,"##preset_icon");
  }
  auVar36 = ZEXT464(0x41800000);
  auVar25._0_8_ = -(ulonglong)(puVar5 == (undefined *)0x0);
  auVar25._8_8_ = 0xffffffffffffffff;
  auVar24 = vblendvps_avx(auVar35._0_16_,auVar34._0_16_,auVar25);
  local_178 = (float)FUN_1804aaa10(uVar19,auVar24._0_8_,auVar36._0_8_);
  fVar26 = local_178 * 14.6 + 182.12;
  fVar27 = 0.5;
  local_1a8 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  auVar24 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.6 + 0.5)),1);
  local_1c8 = 0;
  auVar24 = vmaxss_avx(auVar35._0_16_,auVar24);
  local_1d8 = auVar34._0_4_;
  local_1d0 = (undefined *)puVar20;
  local_190 = fVar26;
  FUN_1804ea040(&local_198,DAT_180c62ca8,auVar24._0_8_,0x7f7fffff);
  plVar17 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar12 = "##preset_w";
  uVar16 = ~*(uint *)(plVar17[0x22] + -4 + (longlong)(int)plVar17[0x21] * 4);
  cVar15 = '#';
  uVar19 = uVar16;
  do {
    pcVar12 = pcVar12 + 1;
    if (((cVar15 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
      pcVar12 = pcVar12 + 2;
      uVar19 = uVar16;
    }
    else {
      uVar19 = crc32(uVar19,cVar15);
    }
    cVar15 = *pcVar12;
  } while (cVar15 != '\0');
  uVar19 = ~uVar19;
  if (*(uint *)(*plVar17 + 0x1534) == uVar19) {
    FUN_1804cf810(uVar19,0xb,"##preset_w");
  }
  local_114 = (float)FUN_1804aaa10(uVar19,local_198,0x41900000);
  uVar11 = DAT_180b0a528;
  local_128 = *param_3;
  fVar21 = DAT_180b0a41c * 12.6;
  local_114 = (fVar26 + 15.0) * DAT_180b0a41c + local_128 + local_114;
  fVar26 = DAT_180b0a41c * 351.8 + local_128;
  local_118[0] = fVar26 < fVar21 + local_114;
  if ((bool)local_118[0]) {
    local_114 = fVar26 - fVar21;
  }
  auVar24 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 143.25 + fVar27)),1);
  local_128 = auVar24._0_4_ + local_128;
  auVar24 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 10.5 + fVar27)),1);
  local_124 = auVar24._0_4_ + param_3[1];
  fVar26 = DAT_180b0a41c * 4.0;
  auVar24 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(local_114 + fVar21 + fVar27)),1);
  auVar25 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 34.3 + fVar27)),1);
  local_12c = auVar25._0_4_ + param_3[1];
  local_184 = (local_12c + local_124) * fVar27;
  local_1d0 = (undefined *)((ulonglong)local_1d0 & 0xffffffff00000000);
  local_130 = auVar24._0_4_;
  *param_4 = local_130;
  local_1d8 = fVar26;
  local_188 = fVar26;
  FUN_1804df870(local_138,&local_128,&local_130,uVar11);
  local_10c = local_12c;
  auVar24 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 171.0 + fVar27)),1);
  local_110 = auVar24._0_4_ + *param_3;
  plVar17 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar12 = "#save";
  uVar16 = ~*(uint *)(plVar17[0x22] + -4 + (longlong)(int)plVar17[0x21] * 4);
  cVar15 = '#';
  uVar19 = uVar16;
  do {
    if (((cVar15 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
      pcVar12 = pcVar12 + 2;
      uVar19 = uVar16;
    }
    else {
      uVar19 = crc32(uVar19,cVar15);
    }
    cVar15 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar15 != '\0');
  uVar19 = ~uVar19;
  if (*(uint *)(*plVar17 + 0x1534) == uVar19) {
    FUN_1804cf810(uVar19,0xb,&DAT_180830d38);
  }
  local_1d8 = (float)CONCAT31(local_1d8._1_3_,1);
  puVar13 = (undefined2 *)FUN_1804aad60(local_17c,uVar19,&local_128,&local_110);
  uVar33 = auVar36._0_8_;
  uVar1 = *puVar13;
  local_180 = uVar1;
  if (*(char *)(puVar13 + 1) != '\0') {
    *(undefined4 *)(param_1 + 0xe37) = 0x3f800000;
    lVar6 = *(longlong *)(*param_1 + (longlong)(int)param_1[3] * 8);
    FUN_18063aed0(lVar6 + 0x6a00,lVar6 + 0x28,0x69d8);
    uVar33 = auVar36._0_8_;
  }
  auVar24 = vmaxss_avx(auVar34._0_16_,ZEXT416((uint)(*(float *)(param_1 + 0xe37) - fVar22)));
  *(int *)(param_1 + 0xe37) = auVar24._0_4_;
  auVar24 = vpcmpeqd_avx(ZEXT116((byte)uVar1),SUB6416(ZEXT464(0),0));
  auVar24 = vblendvps_avx(auVar35._0_16_,auVar34._0_16_,auVar24);
  fVar21 = (float)FUN_1804aaa10(uVar19 + 1,auVar24._0_8_,uVar33);
  fVar22 = auVar34._0_4_;
  fVar29 = 255.0;
  if (fVar22 < fVar21) {
    fVar31 = ((float)(DAT_1808da48c >> 0x18) / 255.0) * fVar21;
    if (fVar22 <= fVar31) {
      auVar24 = vminss_avx(auVar35._0_16_,ZEXT416((uint)fVar31));
      fVar22 = auVar24._0_4_;
    }
    local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,0x50);
    local_1d8 = fVar26;
    FUN_1804df870(local_138,&local_128,&local_110,
                  (int)(longlong)(fVar22 * 255.0 + fVar27) << 0x18 | DAT_1808da48c & 0xffffff);
  }
  fVar22 = *(float *)(param_1 + 0xe37);
  auVar36 = ZEXT464((uint)fVar22);
  fVar26 = (auVar35._0_4_ - fVar22) * 8.0;
  fVar31 = auVar34._0_4_;
  auVar25 = auVar34._0_16_;
  auVar24 = auVar25;
  if (fVar31 <= fVar26) {
    auVar24 = vminss_avx(auVar35._0_16_,ZEXT416((uint)fVar26));
  }
  auVar7 = auVar25;
  if (fVar31 <= fVar22 * fVar23) {
    auVar7 = vminss_avx(auVar35._0_16_,ZEXT416((uint)(fVar22 * fVar23)));
  }
  if (fVar31 < fVar22) {
    auVar25 = vminss_avx(auVar24,auVar7);
  }
  auVar28 = ZEXT1664(auVar25);
  fVar22 = (float)FUN_180638e00(auVar24._0_4_ * 3.1415927);
  auVar25 = auVar34._0_16_;
  auVar24 = vcmpss_avx(auVar25,auVar36._0_16_,1);
  auVar24 = vblendvps_avx(auVar25,auVar35._0_16_,auVar24);
  fVar22 = fVar22 * 0.25 * auVar24._0_4_ + auVar35._0_4_;
  auVar24 = vpcmpeqd_avx(ZEXT116(local_180._1_1_),SUB6416(ZEXT464(0),0));
  auVar24 = vblendvps_avx(auVar35._0_16_,auVar25,auVar24);
  fVar23 = (float)FUN_1804aaa10(uVar19 + 2,auVar24._0_8_,0x41c00000);
  local_198 = DAT_180b0a41c * 157.1 + *param_3;
  fVar37 = 0.3;
  local_194 = DAT_180b0a41c * 22.4 + param_3[1] + fVar23 * DAT_180b0a41c;
  uVar19 = FUN_180462ad0(DAT_180b0a520,DAT_180b0a424,fVar21 * 0.3);
  fVar31 = auVar35._0_4_;
  fVar26 = auVar28._0_4_;
  fVar21 = 11.5;
  if (fVar26 < fVar31) {
    fVar8 = ((float)(uVar19 >> 0x18) / fVar29) * (fVar31 - fVar26);
    fVar32 = auVar34._0_4_;
    if (fVar32 <= fVar8) {
      auVar24 = vminss_avx(auVar35._0_16_,ZEXT416((uint)fVar8));
      fVar32 = auVar24._0_4_;
    }
    local_1d8 = (float)((int)(longlong)(fVar32 * fVar29 + fVar27) << 0x18 | uVar19 & 0xffffff);
    local_1d0 = &DAT_180830b3c;
    FUN_180463b40(local_138,DAT_180c62cc0,
                  (fVar31 - fVar23 * 0.08) * 11.5 * (fVar31 - fVar26 * fVar37),&local_198);
    fVar26 = auVar28._0_4_;
  }
  fVar23 = auVar34._0_4_;
  if (fVar23 < fVar26) {
    fVar31 = ((float)(DAT_180b0a40c >> 0x18) / fVar29) * fVar26;
    if (fVar23 <= fVar31) {
      auVar24 = vminss_avx(auVar35._0_16_,ZEXT416((uint)fVar31));
      fVar23 = auVar24._0_4_;
    }
    local_1d8 = (float)((int)(longlong)(fVar23 * fVar29 + fVar27) << 0x18 | DAT_180b0a40c & 0xffffff
                       );
    local_1d0 = &DAT_180829a38;
    FUN_180463b40(local_138,DAT_180c62cc0,(fVar26 * fVar37 + 0.7) * fVar21 * fVar22,&local_198);
  }
  local_120 = local_110;
  local_11c = local_124;
  plVar17 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar12 = "##preset";
  uVar16 = ~*(uint *)(plVar17[0x22] + -4 + (longlong)(int)plVar17[0x21] * 4);
  cVar15 = '#';
  uVar19 = uVar16;
  do {
    pcVar12 = pcVar12 + 1;
    if (((cVar15 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
      pcVar12 = pcVar12 + 2;
      uVar19 = uVar16;
    }
    else {
      uVar19 = crc32(uVar19,cVar15);
    }
    cVar15 = *pcVar12;
  } while (cVar15 != '\0');
  uVar19 = ~uVar19;
  if (*(uint *)(*plVar17 + 0x1534) == uVar19) {
    FUN_1804cf810(uVar19,0xb,"##preset");
  }
  local_1d8 = (float)CONCAT31(local_1d8._1_3_,1);
  puVar13 = (undefined2 *)FUN_1804aad60(local_17c,uVar19,&local_120,&local_130);
  uVar1 = *puVar13;
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar19)) {
    bVar18 = 1;
  }
  else {
    bVar18 = 0;
  }
  if ((*(char *)(puVar13 + 1) != '\0') && (bVar18 == 0)) {
    FUN_1804c7740(uVar19,0);
  }
  if (((char)uVar1 == '\0') && (bVar18 == 0)) {
    uVar33 = auVar34._0_8_;
  }
  else {
    uVar33 = auVar35._0_8_;
  }
  fVar23 = (float)FUN_1804aaa10(uVar19 + 1,uVar33,0x41800000);
  auVar24 = vpcmpeqd_avx(ZEXT116(bVar18),SUB6416(ZEXT464(0),0));
  auVar24 = vblendvps_avx(auVar35._0_16_,auVar34._0_16_,auVar24);
  fVar21 = (float)FUN_1804aaa10(uVar19 + 2,auVar24._0_8_,0x41800000);
  fVar22 = auVar34._0_4_;
  fVar26 = local_188;
  if (fVar22 < fVar23) {
    fVar23 = ((float)(DAT_1808da48c >> 0x18) / fVar29) * fVar23;
    if (fVar22 <= fVar23) {
      auVar24 = vminss_avx(auVar35._0_16_,ZEXT416((uint)fVar23));
      fVar22 = auVar24._0_4_;
    }
    local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,0xa0);
    local_1d8 = local_188;
    FUN_1804df870(local_138,&local_120,&local_130,
                  (int)(longlong)(fVar22 * fVar29 + fVar27) << 0x18 | DAT_1808da48c & 0xffffff);
  }
  if ((0.01 < local_178) && (local_170 != (undefined *)0x0)) {
    fVar23 = ((float)(DAT_180b0a54c >> 0x18) / fVar29) * local_178;
    fVar22 = auVar34._0_4_;
    if (fVar22 <= fVar23) {
      auVar24 = vminss_avx(auVar35._0_16_,ZEXT416((uint)fVar23));
      fVar22 = auVar24._0_4_;
    }
    local_198 = DAT_180b0a41c * 187.42 + *param_3;
    local_194 = local_184;
    local_1d8 = (float)((int)(longlong)(fVar22 * fVar29 + fVar27) << 0x18 | DAT_180b0a54c & 0xffffff
                       );
    local_1d0 = local_170;
    FUN_180463b40(local_138,DAT_180c62cc0,(local_178 * 0.4 + 0.6) * 11.0,&local_198);
  }
  fVar22 = auVar35._0_4_ - *(float *)(param_1 + 0x42);
  fVar22 = fVar22 * fVar22;
  auVar36 = ZEXT464((uint)(auVar35._0_4_ - fVar22));
  local_108[0] = FUN_180462ad0(DAT_180b0a530,fVar22);
  auVar24 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * local_190 + fVar27)),1);
  local_100 = auVar24._0_4_ + *param_3;
  auVar24 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 18.45 + fVar27)),1);
  local_fc = auVar24._0_4_ + param_3[1];
  local_194 = local_12c - auVar35._0_4_;
  local_18c = auVar35._0_4_ + local_124;
  local_198 = local_130;
  local_190 = local_120;
  FUN_1804d9420(local_138,&local_190,&local_198,1);
  uVar33 = auVar36._0_8_;
  fVar22 = 9.0;
  local_168 = &local_100;
  local_160 = local_108;
  local_158 = local_118;
  local_150 = &local_138;
  local_148 = &DAT_180c62ca8;
  local_140 = &local_114;
  if ((*(float *)(param_1 + 0x42) < auVar35._0_4_) && (param_1[0x40] != 0)) {
    plVar17 = param_1 + 0x3e;
    if (0xf < (ulonglong)param_1[0x41]) {
      plVar17 = (longlong *)*plVar17;
    }
    fVar22 = 9.0;
    FUN_1804834a0(&local_168,plVar17,-(DAT_180b0a41c * 9.0) * auVar36._0_4_,
                  auVar35._0_4_ - auVar36._0_4_);
    uVar33 = auVar36._0_8_;
  }
  FUN_1804834a0(&local_168,puVar20,fVar22 * DAT_180b0a41c * (auVar35._0_4_ - (float)uVar33),uVar33);
  iVar9 = *(int *)(local_138 + 0xa0);
  iVar10 = iVar9 + -1;
  *(int *)(local_138 + 0xa0) = iVar10;
  if (iVar10 == 0) {
    puVar14 = (undefined8 *)(*(longlong *)(local_138 + 0x38) + 0x3c);
  }
  else {
    puVar14 = (undefined8 *)((longlong)(iVar9 + -2) * 0x10 + *(longlong *)(local_138 + 0xa8));
  }
  uVar33 = puVar14[1];
  *(undefined8 *)(local_138 + 0x60) = *puVar14;
  *(undefined8 *)(local_138 + 0x68) = uVar33;
  FUN_1804d9200();
  fVar22 = DAT_180b0a41c * fVar37 + local_184;
  local_ec = (auVar35._0_4_ - (fVar21 + fVar21)) * DAT_180b0a41c * 1.5;
  local_f4 = fVar22 - local_ec;
  local_f8 = local_114 - DAT_180b0a41c * 3.0;
  local_ec = local_ec + fVar22;
  fVar22 = DAT_180b0a41c * 1.4;
  local_e8 = DAT_180b0a41c * 3.0 + local_114;
  local_f0 = local_114;
  local_e4 = local_f4;
  uVar11 = FUN_180462ad0(DAT_180b0a4ac,DAT_180b0a424);
  uVar30 = 0x7f7fffff;
  local_1c8._0_4_ = 0x7f7fffff;
  local_1d0 = (undefined *)((ulonglong)local_1d0 & 0xffffffff00000000);
  local_1d8 = fVar22;
  FUN_1804d9a00(local_138,&local_f8,3,uVar11);
  auVar24 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar24 = vmaxss_avx(auVar35._0_16_,auVar24);
  auVar35 = ZEXT1664(auVar24);
  fVar22 = auVar24._0_4_;
  fVar27 = fVar22 * fVar27;
  local_1d8 = (float)DAT_180b0a4e0;
  FUN_180463210(local_138,local_110 - fVar27,fVar22 + local_124,local_12c - fVar22);
  uVar11 = FUN_180462ad0(DAT_180b0a4e0,DAT_180b0a40c,fVar21 * 0.35);
  lVar6 = local_138;
  local_198 = local_130 - fVar27;
  local_194 = local_12c - fVar27;
  local_190 = fVar27 + local_128;
  local_18c = fVar27 + local_124;
  auVar24 = vmaxss_avx(ZEXT416((uint)(fVar26 - fVar27)),auVar34._0_16_);
  local_1d8 = 0.0;
  FUN_1804dc420(local_138,&local_190,&local_198,auVar24._0_8_);
  local_1c8 = CONCAT44(local_1c8._4_4_,uVar30);
  local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,0x200);
  local_1d8 = auVar35._0_4_;
  FUN_1804d9a00(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar11);
  *(undefined4 *)(lVar6 + 0x50) = 0;
  FUN_18048f150(param_1,uVar19,&local_120,&local_130);
}



