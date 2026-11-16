// FUN_1804a9370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a9370 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a9370(longlong *param_1,float param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined3 *puVar12;
  undefined1 (*pauVar13) [16];
  undefined8 *puVar14;
  int iVar15;
  char cVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  longlong lVar21;
  uint uVar22;
  longlong lVar23;
  longlong lVar24;
  undefined1 uVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined8 uVar29;
  float fVar30;
  undefined1 auVar31 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [64];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [16];
  undefined1 auVar42 [64];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  undefined1 auVar46 [64];
  undefined1 auVar47 [16];
  undefined1 auVar48 [64];
  undefined1 auStack_2a8 [32];
  undefined4 *local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined4 *local_270;
  float local_268;
  uint local_264;
  float local_260;
  float local_25c;
  undefined4 local_258;
  float local_254;
  longlong local_250;
  undefined8 local_248;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  longlong local_228;
  undefined8 local_220;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  float local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  longlong *local_1e8;
  float local_1e0;
  float local_1dc;
  longlong local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  ulonglong local_1b0;
  undefined8 local_1a8;
  longlong lStack_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 auStack_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined4 local_114;
  float local_110;
  undefined4 local_10c;
  undefined1 local_108 [16];
  undefined1 auStack_f8 [16];
  ulonglong local_e8;
  
  lVar23 = DAT_180bb8ae8;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_2a8;
  uVar22 = 0;
  local_264 = 0;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  local_1c8 = *(longlong **)(lVar23 + 0x14d0);
  local_228 = local_1c8[0x38];
  lVar2 = local_1c8[0x59];
  uVar17 = ~*(uint *)(local_1c8[0x22] + -4 + (longlong)(int)local_1c8[0x21] * 4);
  pcVar9 = "#list";
  cVar6 = '#';
  uVar18 = uVar17;
  do {
    if (((cVar6 == '#') && (*pcVar9 == '#')) && (pcVar9[1] == '#')) {
      pcVar9 = pcVar9 + 2;
      uVar18 = uVar17;
    }
    else {
      uVar18 = crc32(uVar18,cVar6);
    }
    cVar6 = *pcVar9;
    pcVar9 = pcVar9 + 1;
  } while (cVar6 != '\0');
  uVar18 = ~uVar18;
  local_230 = param_2;
  local_1e8 = param_4;
  local_1d8 = param_3;
  local_1d0 = param_1;
  if (*(uint *)(*local_1c8 + 0x1534) == uVar18) {
    FUN_1804cf810(uVar18,0xb,&DAT_180858c6c);
    lVar23 = DAT_180bb8ae8;
  }
  iVar8 = (int)param_1[1];
  lVar24 = (longlong)iVar8;
  fVar27 = 0.5;
  auVar28 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 26.0 + 0.5)),1);
  auVar42 = ZEXT1664(auVar28);
  local_234 = auVar28._0_4_;
  iVar7 = 6;
  if (iVar8 < 6) {
    iVar7 = iVar8;
  }
  lVar21 = *(longlong *)(lVar23 + 0x14d0);
  fVar30 = *(float *)(lVar21 + 0x118);
  local_250 = CONCAT44(local_250._4_4_,*(undefined4 *)(lVar21 + 0x11c));
  if ((*(longlong *)(lVar21 + 0x1c8) != 0) || (lVar10 = 0x280, *(longlong *)(lVar23 + 0x2338) != 0))
  {
    lVar10 = 0x250;
  }
  fVar37 = *(float *)(lVar21 + lVar10) - *(float *)(lVar21 + 0x118);
  fVar38 = (float)iVar7 * local_234;
  fVar26 = (float)iVar8 * local_234;
  auVar28._12_4_ = 0;
  auVar28._0_12_ = ZEXT812(0);
  auVar48 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar28 = vmaxss_avx(auVar28 << 0x20,ZEXT416((uint)(fVar26 - fVar38)));
  auVar36 = ZEXT1664(auVar28);
  lVar23 = local_228;
  local_248._0_4_ = fVar37;
  local_248._4_4_ = fVar38;
  FUN_1804c6420(&local_248,0xbf800000);
  uVar19 = (ulonglong)uVar18;
  uVar11 = (ulonglong)(uVar18 >> 0x1e ^ uVar18) * -0x40a7b892e31b1a47;
  uVar11 = (uVar11 >> 0x1b ^ uVar11) * -0x6b2fb644ecceee15;
  uVar11 = uVar11 >> 0x1f ^ uVar11;
  uVar18 = (uint)(uVar11 >> 0x20) ^ (uint)uVar11;
  local_1b8 = (ulonglong)uVar18;
  auVar33._0_8_ = FUN_1804b1470(lVar23,uVar18);
  auVar33._8_56_ = extraout_var;
  auVar33 = ZEXT1664(auVar33._0_16_);
  uVar11 = ((uVar19 ^ 0x9e3779b97f4a7c15) >> 0x1e ^ uVar19 ^ 0x9e3779b97f4a7c15) *
           -0x40a7b892e31b1a47;
  uVar11 = (uVar11 >> 0x1b ^ uVar11) * -0x6b2fb644ecceee15;
  uVar11 = uVar11 >> 0x1f ^ uVar11;
  local_1b0 = (ulonglong)((uint)(uVar11 >> 0x20) ^ (uint)uVar11);
  auVar45._0_8_ = FUN_1804b1470(local_228);
  auVar45._8_56_ = extraout_var_00;
  auVar28 = auVar45._0_16_;
  if (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) != '\0') {
    if (((int)param_2 < 0) ||
       (fVar27 = ((float)(int)param_2 + fVar27) * auVar42._0_4_ - fVar38 * fVar27,
       fVar27 < auVar48._0_4_)) {
      auVar28 = ZEXT816(0);
    }
    else {
      auVar28 = vminss_avx(auVar36._0_16_,ZEXT416((uint)fVar27));
    }
    auVar33 = ZEXT1664(auVar28);
  }
  auVar45 = ZEXT1664(auVar28);
  auVar28 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 4.0 + 0.5)),1);
  local_258 = fVar30 - auVar28._0_4_;
  local_248 = CONCAT44(local_248._4_4_,local_258);
  local_254 = (float)local_250;
  local_268 = (float)local_250 + fVar38;
  fVar27 = fVar37 + fVar30 + auVar28._0_4_;
  lVar23 = *(longlong *)(DAT_180bb8ae8 + 0x14d8);
  fVar37 = 1.5;
  lVar21 = DAT_180bb8ae8;
  fVar30 = DAT_180b0a41c;
  local_238 = fVar27;
  if ((lVar23 != 0) && (lVar23 == *(longlong *)(DAT_180bb8ae8 + 0x14d0))) {
    cVar16 = '\0';
    cVar6 = FUN_1804b7ab0(lVar23);
    if ((cVar6 != '\0') &&
       (((*(int *)(lVar21 + 0x1550) == 0 || (*(char *)(lVar21 + 0x155f) != cVar16)) ||
        (*(int *)(lVar21 + 0x1550) == *(int *)(lVar23 + 0x8c))))) {
      local_260 = fVar30 * 8.0 + fVar27;
      local_25c = local_268;
      cVar16 = '\x01';
      cVar6 = FUN_1804c3600(&local_258,&local_260);
      if (cVar6 != '\0') {
        if ((auVar48._0_4_ < auVar36._0_4_) && (*(float *)(lVar21 + 0x120) != auVar48._0_4_)) {
          auVar33 = ZEXT464((uint)(auVar33._0_4_ -
                                  *(float *)(lVar21 + 0x120) * auVar42._0_4_ * fVar37));
        }
        goto LAB_1804a977d;
      }
    }
  }
  cVar16 = '\0';
LAB_1804a977d:
  auVar32 = auVar33._0_16_;
  auVar35 = auVar36._0_16_;
  fVar37 = fVar30 * 3.0;
  auVar28 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar37 + 0.5)),1);
  auVar42 = ZEXT1664(auVar28);
  fVar27 = auVar28._0_4_ + fVar27;
  fVar34 = auVar36._0_4_;
  if (fVar34 <= auVar48._0_4_) {
    auVar39 = ZEXT816(0);
  }
  else {
    auVar39 = vmaxss_avx(ZEXT416((uint)(fVar30 * 18.0)),ZEXT416((uint)((fVar38 * fVar38) / fVar26)))
    ;
  }
  auVar40 = ZEXT1664(auVar39);
  if (fVar34 <= auVar48._0_4_) {
    auVar42 = ZEXT464(0x3f000000);
  }
  else {
    fVar38 = fVar38 - auVar39._0_4_;
    auVar31 = ZEXT464((uint)fVar38);
    fVar30 = (auVar45._0_4_ / fVar34) * fVar38 + (float)local_250;
    uVar11 = ((uVar19 ^ 0x3c6ef372fe94f82a) >> 0x1e ^ uVar19 ^ 0x3c6ef372fe94f82a) *
             -0x40a7b892e31b1a47;
    uVar11 = (uVar11 >> 0x1b ^ uVar11) * -0x6b2fb644ecceee15;
    uVar11 = uVar11 >> 0x1f ^ uVar11;
    fVar38 = auVar28._0_4_ + fVar27;
    local_258 = fVar38 + fVar37;
    local_254 = local_268;
    local_240 = fVar27 - fVar37;
    local_23c = (float)local_250;
    local_288 = (undefined4 *)CONCAT71(local_288._1_7_,1);
    puVar12 = (undefined3 *)
              FUN_1804aad60(&local_260,(uint)(uVar11 >> 0x20) ^ (uint)uVar11,&local_240,&local_258);
    local_258 = (float)CONCAT13(local_258._3_1_,*puVar12);
    uVar5 = local_258;
    local_258._1_1_ = (char)((uint3)*puVar12 >> 8);
    uVar29 = SUB648(ZEXT464(0x3f800000),0);
    if (local_258._1_1_ != '\0') {
      auVar28 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar31._0_16_);
      auVar33 = ZEXT464((uint)(auVar33._0_4_ +
                              (auVar36._0_4_ * *(float *)(DAT_180bb8ae8 + 0x100)) / auVar28._0_4_));
    }
    if ((((char)*(undefined2 *)puVar12 == '\0') && (local_258._1_1_ == '\0')) && (cVar16 == '\0')) {
      uVar29 = 0;
    }
    uVar11 = ((uVar19 ^ 0xdaa66d2c7ddf743f) >> 0x1e ^ uVar19 ^ 0xdaa66d2c7ddf743f) *
             -0x40a7b892e31b1a47;
    uVar11 = (uVar11 >> 0x1b ^ uVar11) * -0x6b2fb644ecceee15;
    uVar11 = uVar11 >> 0x1f ^ uVar11;
    local_258 = (float)uVar5;
    fVar26 = (float)FUN_1804aaa10((uint)(uVar11 >> 0x20) ^ (uint)uVar11,uVar29,0x41600000);
    local_23c = local_268;
    local_25c = (float)local_250;
    fVar37 = auVar42._0_4_ * 0.5;
    local_280 = (ulonglong)local_280._4_4_ << 0x20;
    local_260 = fVar27;
    local_240 = fVar38;
    local_288._0_4_ = fVar37;
    FUN_1804df870(lVar2,&local_260,&local_240,0x8ffffff);
    fVar26 = fVar26 * 0.18 + 0.22;
    if (auVar48._0_4_ <= fVar26) {
      auVar28 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar26));
      fVar26 = auVar28._0_4_;
    }
    else {
      fVar26 = 0.0;
    }
    local_23c = fVar30 + auVar40._0_4_;
    auVar42 = ZEXT464(0x3f000000);
    local_280 = local_280 & 0xffffffff00000000;
    local_288 = (undefined4 *)CONCAT44(local_288._4_4_,fVar37);
    local_260 = fVar27;
    local_25c = fVar30;
    local_240 = fVar38;
    FUN_1804df870(lVar2,&local_260,&local_240,
                  (int)(longlong)(fVar26 * 255.0 + 0.5) << 0x18 | 0xffffff);
    auVar32 = auVar33._0_16_;
    auVar35 = auVar36._0_16_;
    lVar21 = DAT_180bb8ae8;
  }
  auVar33 = ZEXT464(0x3f800000);
  if (auVar48._0_4_ <= auVar32._0_4_) {
    auVar28 = vminss_avx(auVar35,auVar32);
  }
  else {
    auVar28 = ZEXT816(0);
  }
  auVar36 = ZEXT1664(auVar28);
  local_258 = auVar28._0_4_;
  fVar27 = (float)FUN_180627ae0(*(float *)(lVar21 + 0x40) * -18.0);
  fVar27 = (auVar33._0_4_ - fVar27) * (auVar36._0_4_ - auVar45._0_4_) + auVar45._0_4_;
  auVar28 = vcmpss_avx(ZEXT416((uint)ABS(fVar27 - auVar36._0_4_)),ZEXT416(0x3e800000),1);
  auVar28 = vblendvps_avx(ZEXT416((uint)fVar27),auVar36._0_16_,auVar28);
  auVar45 = ZEXT1664(auVar28);
  local_260 = auVar28._0_4_;
  fVar27 = -NAN;
  auVar28 = *(undefined1 (*) [16])(lVar2 + 0x60);
  auVar31 = ZEXT464((uint)(float)local_248);
  auVar32 = vcmpss_avx(ZEXT416((uint)(float)local_248),auVar28,1);
  auVar32 = vblendvps_avx(ZEXT416((uint)(float)local_248),auVar28,auVar32);
  auVar39 = vshufps_avx(auVar28,auVar28,0x55);
  auVar40 = ZEXT464((uint)(float)local_250);
  auVar35 = vcmpss_avx(ZEXT416((uint)(float)local_250),auVar39,1);
  auVar35 = vblendvps_avx(ZEXT416((uint)(float)local_250),auVar39,auVar35);
  local_220 = CONCAT44(auVar35._0_4_,auVar32._0_4_);
  auVar41 = vshufps_avx(auVar28,auVar28,0xaa);
  auVar39 = vcmpss_avx(auVar41,ZEXT416((uint)local_238),1);
  auVar39 = vblendvps_avx(ZEXT416((uint)local_238),auVar41,auVar39);
  auVar41 = vshufps_avx(auVar28,auVar28,0xff);
  auVar46 = ZEXT464((uint)local_268);
  auVar28 = vcmpss_avx(auVar41,ZEXT416((uint)local_268),1);
  auVar28 = vblendvps_avx(ZEXT416((uint)local_268),auVar41,auVar28);
  auVar32 = vmaxss_avx(auVar32,auVar39);
  uStack_218 = auVar32._0_4_;
  auVar28 = vmaxss_avx(auVar35,auVar28);
  uStack_214 = auVar28._0_4_;
  piVar1 = (int *)(lVar2 + 0xa0);
  iVar7 = *(int *)(lVar2 + 0xa4);
  if (*piVar1 == iVar7) {
    iVar15 = *piVar1 + 1;
    if (iVar7 == 0) {
      iVar7 = 8;
    }
    else {
      iVar7 = iVar7 / 2 + iVar7;
    }
    if (iVar15 < iVar7) {
      iVar15 = iVar7;
    }
    FUN_1804aec70(piVar1,iVar15);
  }
  puVar14 = (undefined8 *)(*(longlong *)(lVar2 + 0xa8) + (longlong)*piVar1 * 0x10);
  *puVar14 = local_220;
  puVar14[1] = CONCAT44(uStack_214,uStack_218);
  *piVar1 = *piVar1 + 1;
  *(longlong *)(lVar2 + 0x60) = local_220;
  *(ulonglong *)(lVar2 + 0x68) = CONCAT44(uStack_214,uStack_218);
  FUN_1804d9200(lVar2);
  local_268 = 0.0;
  local_220 = lVar24;
  if (0 < iVar8) {
    local_248 = 0;
    local_250 = 0;
    auVar36 = ZEXT464((uint)local_234);
    do {
      lVar21 = local_248;
      lVar23 = local_250;
      fVar26 = local_268;
      fVar37 = auVar36._0_4_;
      fVar34 = auVar40._0_4_;
      fVar38 = ((float)(int)local_268 * fVar37 + fVar34) - auVar45._0_4_;
      fVar30 = fVar38 + fVar37;
      local_234 = fVar27;
      if (fVar34 <= fVar30) {
        if (fVar38 <= auVar46._0_4_) {
          auVar28 = vminss_avx(ZEXT416((uint)(fVar30 - fVar34)),
                               ZEXT416((uint)(auVar46._0_4_ - fVar38)));
          auVar45 = ZEXT1664(CONCAT124(auVar28._4_12_,auVar28._0_4_ / fVar37));
          local_118 = auVar31._0_4_;
          auVar28 = vmaxss_avx(ZEXT416((uint)fVar38),auVar40._0_16_);
          local_114 = auVar28._0_4_;
          local_110 = local_238;
          auVar28 = vminss_avx(ZEXT416((uint)fVar30),auVar46._0_16_);
          local_10c = auVar28._0_4_;
          FUN_1804c2920(local_268);
          auVar47 = auVar48._0_16_;
          auVar44 = auVar46._0_16_;
          auVar43 = auVar33._0_16_;
          auVar41 = auVar31._0_16_;
          auVar39 = auVar40._0_16_;
          auVar35 = auVar42._0_16_;
          auVar32 = auVar36._0_16_;
          auVar28 = auVar45._0_16_;
          if (param_3 == 0) {
            uVar25 = fVar26 == local_230;
          }
          else {
            uVar25 = *(undefined1 *)(param_3 + lVar21);
          }
          uVar11 = (ulonglong)(int)fVar26;
          if ((uVar11 < (ulonglong)param_5[1]) && (*(longlong *)(lVar23 + *param_5) != 0)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          local_1c0 = local_1e8[1];
          lVar23 = *(longlong *)(*local_1d0 + lVar21 * 8);
          if (bVar3) {
            local_158 = (undefined1  [16])0x0;
            local_148 = (undefined1  [16])0x0;
            FUN_18015ba30(local_158,"            ",0xc);
            auVar47 = auVar48._0_16_;
            auVar44 = auVar46._0_16_;
            auVar43 = auVar33._0_16_;
            auVar41 = auVar31._0_16_;
            auVar39 = auVar40._0_16_;
            auVar35 = auVar42._0_16_;
            auVar32 = auVar36._0_16_;
            auVar28 = auVar45._0_16_;
            puVar14 = (undefined8 *)local_158;
            uVar18 = uVar22 | 1;
          }
          else {
            if (uVar11 < local_1c0) {
              local_178 = (undefined1  [16])0x0;
              auStack_168 = (undefined1  [16])0x0;
              FUN_18015ba30(local_178,"     ",5);
              auVar47 = auVar48._0_16_;
              auVar44 = auVar46._0_16_;
              auVar43 = auVar33._0_16_;
              auVar41 = auVar31._0_16_;
              auVar39 = auVar40._0_16_;
              auVar35 = auVar42._0_16_;
              auVar32 = auVar36._0_16_;
              auVar28 = auVar45._0_16_;
              puVar14 = (undefined8 *)local_178;
              uVar22 = uVar22 | 2;
            }
            else {
              local_188 = 0;
              uStack_180 = 0xf;
              local_198._1_15_ = SUB1615((undefined1  [16])0x0,1);
              auVar4[0xf] = 0;
              auVar4._0_15_ = local_198._1_15_;
              local_198 = auVar4 << 8;
              puVar14 = (undefined8 *)local_198;
              uVar22 = uVar22 | 4;
            }
            local_138 = *puVar14;
            uStack_130 = puVar14[1];
            uStack_128 = puVar14[2];
            uStack_120 = puVar14[3];
            *(undefined1 *)puVar14 = 0;
            puVar14[2] = 0;
            puVar14[3] = 0xf;
            puVar14 = &local_138;
            uVar18 = uVar22 | 8;
          }
          lVar24 = -1;
          do {
            lVar24 = lVar24 + 1;
          } while (*(char *)(lVar23 + lVar24) != '\0');
          auVar42 = ZEXT1664(auVar28);
          auVar33 = ZEXT1664(auVar32);
          auVar45 = ZEXT1664(auVar35);
          auVar36 = ZEXT1664(auVar39);
          auVar48 = ZEXT1664(auVar41);
          auVar40 = ZEXT1664(auVar43);
          auVar31 = ZEXT1664(auVar44);
          auVar46 = ZEXT1664(auVar47);
          local_264 = uVar18;
          pauVar13 = (undefined1 (*) [16])FUN_18015b2a0(puVar14,lVar23);
          auVar28 = auVar42._0_16_;
          auVar43 = auVar40._0_16_;
          auVar47 = auVar46._0_16_;
          auVar44 = auVar31._0_16_;
          auVar41 = auVar48._0_16_;
          auVar39 = auVar36._0_16_;
          auVar35 = auVar45._0_16_;
          auVar32 = auVar33._0_16_;
          local_108 = *pauVar13;
          auStack_f8 = pauVar13[1];
          (*pauVar13)[0] = 0;
          *(undefined8 *)pauVar13[1] = 0;
          *(undefined8 *)(pauVar13[1] + 8) = 0xf;
          uVar22 = uVar18 | 0x10;
          local_264 = uVar22;
          if ((uVar18 & 8) != 0) {
            uVar22 = uVar18 & 0xfffffff7 | 0x10;
            auVar42 = ZEXT1664(auVar28);
            auVar33 = ZEXT1664(auVar32);
            auVar45 = ZEXT1664(auVar35);
            auVar36 = ZEXT1664(auVar39);
            auVar48 = ZEXT1664(auVar41);
            auVar40 = ZEXT1664(auVar43);
            auVar31 = ZEXT1664(auVar44);
            auVar46 = ZEXT1664(auVar47);
            local_264 = uVar22;
            FUN_18015c010(&local_138);
            auVar28 = auVar42._0_16_;
            auVar43 = auVar40._0_16_;
            auVar47 = auVar46._0_16_;
            auVar44 = auVar31._0_16_;
            auVar41 = auVar48._0_16_;
            auVar39 = auVar36._0_16_;
            auVar35 = auVar45._0_16_;
            auVar32 = auVar33._0_16_;
          }
          if ((uVar22 & 4) != 0) {
            uVar22 = uVar22 & 0xfffffffb;
            auVar42 = ZEXT1664(auVar28);
            auVar33 = ZEXT1664(auVar32);
            auVar45 = ZEXT1664(auVar35);
            auVar36 = ZEXT1664(auVar39);
            auVar48 = ZEXT1664(auVar41);
            auVar40 = ZEXT1664(auVar43);
            auVar31 = ZEXT1664(auVar44);
            auVar46 = ZEXT1664(auVar47);
            local_264 = uVar22;
            FUN_18015c010(local_198);
            auVar28 = auVar42._0_16_;
            auVar43 = auVar40._0_16_;
            auVar47 = auVar46._0_16_;
            auVar44 = auVar31._0_16_;
            auVar41 = auVar48._0_16_;
            auVar39 = auVar36._0_16_;
            auVar35 = auVar45._0_16_;
            auVar32 = auVar33._0_16_;
          }
          if ((uVar22 & 2) != 0) {
            uVar22 = uVar22 & 0xfffffffd;
            auVar42 = ZEXT1664(auVar28);
            auVar33 = ZEXT1664(auVar32);
            auVar45 = ZEXT1664(auVar35);
            auVar36 = ZEXT1664(auVar39);
            auVar48 = ZEXT1664(auVar41);
            auVar40 = ZEXT1664(auVar43);
            auVar31 = ZEXT1664(auVar44);
            auVar46 = ZEXT1664(auVar47);
            local_264 = uVar22;
            FUN_18015c010(local_178);
            auVar28 = auVar42._0_16_;
            auVar43 = auVar40._0_16_;
            auVar47 = auVar46._0_16_;
            auVar44 = auVar31._0_16_;
            auVar41 = auVar48._0_16_;
            auVar39 = auVar36._0_16_;
            auVar35 = auVar45._0_16_;
            auVar32 = auVar33._0_16_;
          }
          fVar27 = auVar28._0_4_;
          if ((uVar22 & 1) != 0) {
            uVar22 = uVar22 & 0xfffffffe;
            auVar42 = ZEXT1664(auVar28);
            auVar33 = ZEXT1664(auVar32);
            auVar45 = ZEXT1664(auVar35);
            auVar36 = ZEXT1664(auVar39);
            auVar48 = ZEXT1664(auVar41);
            auVar40 = ZEXT1664(auVar43);
            auVar31 = ZEXT1664(auVar44);
            auVar46 = ZEXT1664(auVar47);
            local_264 = uVar22;
            FUN_18015c010(local_158);
            fVar27 = auVar42._0_4_;
            auVar43 = auVar40._0_16_;
            auVar47 = auVar46._0_16_;
            auVar44 = auVar31._0_16_;
            auVar41 = auVar48._0_16_;
            auVar39 = auVar36._0_16_;
            auVar35 = auVar45._0_16_;
            auVar32 = auVar33._0_16_;
          }
          auVar28 = auVar47;
          if (auVar47._0_4_ <= fVar27 * 1.5) {
            auVar28 = vminss_avx(auVar43,ZEXT416((uint)(fVar27 * 1.5)));
          }
          local_240 = local_238;
          local_210 = auVar41._0_4_;
          puVar20 = local_108;
          if (0xf < (ulonglong)auStack_f8._8_8_) {
            puVar20 = (undefined1 *)local_108._0_8_;
          }
          uVar17 = ~*(uint *)(local_1c8[0x22] + -4 + (longlong)(int)local_1c8[0x21] * 4);
          pcVar9 = "#row";
          cVar6 = '#';
          uVar18 = uVar17;
          do {
            if (((cVar6 == '#') && (*pcVar9 == '#')) && (pcVar9[1] == '#')) {
              pcVar9 = pcVar9 + 2;
              uVar18 = uVar17;
            }
            else {
              uVar18 = crc32(uVar18,cVar6);
            }
            cVar6 = *pcVar9;
            pcVar9 = pcVar9 + 1;
          } while (cVar6 != '\0');
          uVar18 = ~uVar18;
          local_23c = fVar30;
          local_20c = fVar38;
          uVar5 = auVar28._0_4_;
          if (*(uint *)(*local_1c8 + 0x1534) == uVar18) {
            auVar42 = ZEXT1664(auVar28);
            auVar33 = ZEXT1664(auVar32);
            auVar45 = ZEXT1664(auVar35);
            auVar36 = ZEXT1664(auVar39);
            auVar48 = ZEXT1664(auVar41);
            auVar40 = ZEXT1664(auVar43);
            auVar31 = ZEXT1664(auVar44);
            auVar46 = ZEXT1664(auVar47);
            FUN_1804cf810(uVar18,0xb,&DAT_180857e90);
            auVar47 = auVar46._0_16_;
            auVar44 = auVar31._0_16_;
            auVar43 = auVar40._0_16_;
            auVar41 = auVar48._0_16_;
            auVar39 = auVar36._0_16_;
            auVar35 = auVar45._0_16_;
            auVar32 = auVar33._0_16_;
            uVar5 = auVar42._0_4_;
          }
          local_278 = uVar5;
          local_270 = &local_118;
          local_280 = CONCAT71(local_280._1_7_,local_1d8 != 0);
          local_288 = (undefined4 *)CONCAT71(local_288._1_7_,uVar25);
          auVar36 = ZEXT1664(auVar32);
          auVar42 = ZEXT1664(auVar35);
          auVar40 = ZEXT1664(auVar39);
          auVar31 = ZEXT1664(auVar41);
          auVar33 = ZEXT1664(auVar43);
          auVar46 = ZEXT1664(auVar44);
          auVar48 = ZEXT1664(auVar47);
          cVar6 = FUN_1804a8c60(uVar18,puVar20,&local_210,&local_240);
          lVar21 = local_248;
          fVar26 = local_268;
          uVar18 = DAT_180b0a438;
          fVar27 = local_268;
          if (cVar6 == '\0') {
            fVar27 = local_234;
          }
          fVar30 = auVar42._0_4_;
          if (bVar3) {
            lVar23 = *param_5;
            auVar28 = vminss_avx(ZEXT416((uint)((DAT_180b0a41c * 24.0) /
                                               *(float *)(local_250 + 8 + lVar23))),
                                 ZEXT416((uint)((DAT_180b0a41c * 13.0) /
                                               *(float *)(local_250 + 0xc + lVar23))));
            local_1f0 = DAT_180b0a41c * 18.0 + auVar31._0_4_;
            local_1ec = auVar28._0_4_ * *(float *)(local_250 + 0xc + lVar23) * fVar30;
            local_208 = auVar33._0_4_;
            local_200 = auVar48._0_4_;
            fVar37 = auVar28._0_4_ * *(float *)(local_250 + 8 + lVar23) * fVar30;
            local_1f8 = local_1f0 + fVar37;
            fVar38 = auVar36._0_4_ * fVar30 + fVar38;
            local_1f4 = fVar38 + local_1ec;
            local_1f0 = local_1f0 - fVar37;
            local_1ec = fVar38 - local_1ec;
            lVar23 = *(longlong *)(local_250 + lVar23);
            local_204 = local_208;
            local_1fc = local_200;
            if ((DAT_180b0a438 & 0xff000000) != 0) {
              if ((lVar23 == *(longlong *)(lVar2 + 0x78)) && (*(longlong *)(lVar2 + 0x70) == 0)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
                local_1a8 = 0;
                piVar1 = (int *)(lVar2 + 0xb0);
                iVar8 = *(int *)(lVar2 + 0xb4);
                lStack_1a0 = lVar23;
                if (*piVar1 == iVar8) {
                  iVar7 = *piVar1 + 1;
                  if (iVar8 == 0) {
                    iVar8 = 8;
                  }
                  else {
                    iVar8 = iVar8 / 2 + iVar8;
                  }
                  if (iVar7 < iVar8) {
                    iVar7 = iVar8;
                  }
                  FUN_1804aec70(piVar1,iVar7);
                }
                iVar8 = *piVar1;
                lVar24 = *(longlong *)(lVar2 + 0xb8);
                *(undefined8 *)(lVar24 + (longlong)iVar8 * 0x10) = 0;
                *(longlong *)(lVar24 + 8 + (longlong)iVar8 * 0x10) = lVar23;
                *piVar1 = *piVar1 + 1;
                *(undefined8 *)(lVar2 + 0x70) = local_1a8;
                *(longlong *)(lVar2 + 0x78) = lStack_1a0;
                FUN_1804d92c0(lVar2);
              }
              fVar26 = local_268;
              FUN_1804d9590(lVar2,6,4);
              local_280 = CONCAT44(local_280._4_4_,uVar18);
              local_288 = &local_208;
              FUN_1804d97d0(lVar2,&local_1f0,&local_1f8,&local_200);
              if (bVar3) {
                FUN_1804d9530(lVar2);
              }
              goto LAB_1804aa053;
            }
          }
          else {
            if (uVar11 < local_1c0) {
              local_1e0 = DAT_180b0a41c * 12.0 + auVar31._0_4_;
              local_1dc = (fVar38 + fVar38 + auVar36._0_4_) * fVar30;
              local_280 = *(ulonglong *)(*local_1e8 + local_248 * 8);
              local_288 = (undefined4 *)CONCAT44(local_288._4_4_,DAT_180b0a438);
              FUN_180463b40(lVar2,DAT_180c62cc0,0x41300000,&local_1e0);
            }
            else {
LAB_1804aa053:
              lVar21 = local_248;
            }
          }
          lVar23 = local_250;
          iVar8 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
          if (iVar8 < 2) {
            FUN_1804c5a40("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar8 + -1;
          }
          FUN_18015c010(local_108);
          lVar24 = local_220;
          param_3 = local_1d8;
        }
      }
      local_268 = (float)((int)fVar26 + 1);
      local_248 = lVar21 + 1;
      local_250 = lVar23 + 0x10;
      auVar45 = ZEXT464((uint)local_260);
    } while (local_248 < lVar24);
    auVar36 = ZEXT464((uint)local_258);
  }
  iVar8 = *(int *)(lVar2 + 0xa0);
  iVar7 = iVar8 + -1;
  *(int *)(lVar2 + 0xa0) = iVar7;
  if (iVar7 == 0) {
    puVar14 = (undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x3c);
  }
  else {
    puVar14 = (undefined8 *)((longlong)(iVar8 + -2) * 0x10 + *(longlong *)(lVar2 + 0xa8));
  }
  uVar29 = puVar14[1];
  *(undefined8 *)(lVar2 + 0x60) = *puVar14;
  *(undefined8 *)(lVar2 + 0x68) = uVar29;
  FUN_1804d9200(lVar2);
  FUN_1804b1700(local_228,local_1b8 & 0xffffffff,auVar36._0_8_);
  FUN_1804b1700(local_228,local_1b0 & 0xffffffff,auVar45._0_8_);
}



