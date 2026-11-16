// FUN_18049b060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049b060 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018049b4c7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18049b060(longlong param_1,float *param_2,float *param_3)

{
  int *piVar1;
  byte bVar2;
  undefined2 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  char cVar6;
  short sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  char *pcVar11;
  undefined2 *puVar12;
  byte *pbVar13;
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  float *pfVar17;
  longlong lVar18;
  longlong *plVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  uint uVar22;
  longlong lVar23;
  bool bVar24;
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  undefined1 auVar28 [16];
  float fVar29;
  undefined1 auVar30 [64];
  float fVar31;
  float fVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined4 uVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [64];
  undefined1 auStack_288 [32];
  float **local_268;
  float **local_260;
  char *local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_238;
  float local_228;
  float local_224;
  float local_220;
  undefined2 local_21c;
  uint local_218;
  undefined8 local_210;
  float *local_208;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1e8;
  float fStack_1e4;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  float *pfStack_1c0;
  undefined1 local_1b8 [16];
  undefined1 local_1a8 [16];
  float local_198;
  float local_194;
  undefined8 local_190;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 local_f0 [16];
  ulonglong local_e0;
  
  lVar23 = DAT_180bb8ae8;
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_288;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar19 = *(longlong **)(lVar23 + 0x14d0);
  lVar23 = plVar19[0x59];
  local_1f0 = DAT_1808e4f80;
  local_194 = DAT_1808e4f80;
  fVar26 = 384.0;
  DAT_1808e4f80 = (DAT_180b0a41c * 384.0 + *param_2) - DAT_180b0a41c * 8.0;
  uVar15 = ~*(uint *)(plVar19[0x22] + -4 + (longlong)(int)plVar19[0x21] * 4);
  pcVar11 = "##esp_items";
  cVar6 = '#';
  uVar22 = uVar15;
  do {
    pcVar11 = pcVar11 + 1;
    if (((cVar6 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
      pcVar11 = pcVar11 + 2;
      uVar22 = uVar15;
    }
    else {
      uVar22 = crc32(uVar22,cVar6);
    }
    cVar6 = *pcVar11;
  } while (cVar6 != '\0');
  uVar22 = ~uVar22;
  local_218 = uVar22;
  local_210 = lVar23;
  local_208 = param_2;
  if (*(uint *)(*plVar19 + 0x1534) == uVar22) {
    FUN_1804cf810(uVar22,0xb,"##esp_items");
  }
  fVar29 = *param_2;
  auVar44 = ZEXT464(0x3f000000);
  auVar36 = auVar44._0_16_;
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 609.0 + 0.5)),1);
  local_178 = auVar33._0_4_ + fVar29;
  auVar35 = ZEXT464(0x428c0000);
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 70.0 + 0.5)),1);
  local_174 = auVar33._0_4_ + param_2[1];
  auVar33 = SUB6416(ZEXT464(0x3f800000),0);
  local_228 = 1.0;
  auVar30 = ZEXT864(0);
  auVar28 = auVar30._0_16_;
  local_198 = 0.0;
  if (DAT_180bbecdb == '\0') {
    fVar32 = 82.0;
    auVar28 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 82.0 + 0.5)),1);
    fVar42 = auVar28._0_4_ + param_2[1];
    auVar28 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 594.0 + 0.5)),1);
    local_1d8 = (undefined1 *)CONCAT44(fVar42,auVar28._0_4_ + fVar29);
    auVar28 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar26 + 0.5)),1);
    local_160 = (float *)CONCAT44(fVar42,auVar28._0_4_ + fVar29);
    auVar28 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar33 = vmaxss_avx(auVar33,auVar28);
    local_268 = (float **)CONCAT44(local_268._4_4_,auVar33._0_4_);
    FUN_1804dcf10(lVar23,&local_160,&local_1d8,DAT_180b0a4c0);
    local_1a8._0_8_ = &PTR_s_Enemies_1807b7cf8;
    auVar34 = ZEXT464(0x41280000);
    auVar37 = ZEXT464(0x3fc00000);
    fVar42 = 0.0;
    fVar29 = DAT_180b0a41c;
    do {
      fVar41 = auVar44._0_4_;
      auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar29 * 58.0 + fVar41)),1);
      fVar31 = auVar33._0_4_ + param_2[1];
      auVar33 = vroundss_avx(ZEXT816(0),
                             ZEXT416((uint)(((float)(int)fVar42 * auVar35._0_4_ + fVar26) * fVar29 +
                                           fVar41)),1);
      fVar26 = auVar33._0_4_ + *param_2;
      local_150 = (float *)CONCAT44(fVar31,fVar26);
      auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar29 * fVar32 + fVar41)),1);
      fVar32 = auVar33._0_4_ + param_2[1];
      local_140 = CONCAT44(local_140._4_4_,(int)fVar42 + 1);
      auVar33 = vroundss_avx(ZEXT816(0),
                             ZEXT416((uint)(((float)((int)fVar42 + 1) * auVar35._0_4_ + 384.0) *
                                            fVar29 + fVar41)),1);
      fVar29 = auVar33._0_4_ + *param_2;
      local_158 = (float *)CONCAT44(fVar32,fVar29);
      FUN_1804c2920(fVar42);
      plVar19 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
      uVar15 = ~*(uint *)(plVar19[0x22] + -4 + (longlong)(int)plVar19[0x21] * 4);
      pcVar11 = "##player_target";
      cVar6 = '#';
      uVar22 = uVar15;
      do {
        pcVar11 = pcVar11 + 1;
        if (((cVar6 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
          pcVar11 = pcVar11 + 2;
          uVar22 = uVar15;
        }
        else {
          uVar22 = crc32(uVar22,cVar6);
        }
        cVar6 = *pcVar11;
      } while (cVar6 != '\0');
      uVar22 = ~uVar22;
      if (*(uint *)(*plVar19 + 0x1534) == uVar22) {
        FUN_1804cf810(uVar22,0xb,"##player_target");
      }
      local_268 = (float **)CONCAT71(local_268._1_7_,1);
      puVar12 = (undefined2 *)FUN_1804aad60(&local_21c,uVar22,&local_150,&local_158);
      auVar36 = auVar37._0_16_;
      auVar28 = auVar35._0_16_;
      auVar40 = auVar30._0_16_;
      auVar33 = auVar34._0_16_;
      auVar43 = auVar44._0_16_;
      uVar3 = *puVar12;
      if ((*(char *)(puVar12 + 1) != '\0') && (*param_3 != fVar42)) {
        *param_3 = fVar42;
        *(undefined1 *)(param_1 + 0x716c) = 0;
        *(undefined4 *)(param_1 + 0x6df8) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x6e04) = 0;
        *(undefined4 *)(param_1 + 0x6e08) = 0xffffffff;
        *(undefined1 *)(param_1 + 0x7140) = 0;
        *(undefined8 *)(param_1 + 0x6efc) = 0;
        *(undefined8 *)(param_1 + 0x6f04) = 0;
        *(undefined8 *)(param_1 + 0x6f0c) = 0;
        *(undefined8 *)(param_1 + 0x6f14) = 0;
        *(undefined8 *)(param_1 + 0x6f1c) = 0;
        *(undefined8 *)(param_1 + 0x6f24) = 0;
        *(undefined8 *)(param_1 + 0x6f2c) = 0;
        *(undefined8 *)(param_1 + 0x6f34) = 0;
        *(undefined8 *)(param_1 + 0x6f3c) = 0;
        *(undefined8 *)(param_1 + 0x6f44) = 0;
        *(undefined8 *)(param_1 + 0x6f4c) = 0;
        *(undefined8 *)(param_1 + 0x6f54) = 0;
        *(undefined1 (*) [16])(param_1 + 0x6f5c) = (undefined1  [16])0x0;
        *(undefined4 *)(param_1 + 0x6f6c) = 0;
        *(undefined4 *)(param_1 + 0x6e0c) = 0xffffffff;
        if (DAT_180cd6db8 != 0) {
          local_128 = CONCAT44(local_128._4_4_,fVar42);
          auVar30 = ZEXT1664(auVar33);
          auVar35 = ZEXT1664(auVar28);
          auVar44 = ZEXT1664(auVar36);
          auVar34 = ZEXT1664(auVar40);
          auVar37 = ZEXT1664(auVar43);
          (**(code **)(*(longlong *)DAT_180cd6db8 + 0x10))(DAT_180cd6db8,&local_128);
          auVar36 = auVar44._0_16_;
          auVar28 = auVar35._0_16_;
          auVar40 = auVar34._0_16_;
          auVar33 = auVar30._0_16_;
          auVar43 = auVar37._0_16_;
        }
        iVar10 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
        uVar21 = (ulonglong)iVar10;
        if (0 < iVar10) {
          plVar19 = (longlong *)(uVar21 * 0x38 + *(longlong *)(DAT_180bb8ae8 + 0x2000) + -0x30);
          uVar20 = uVar21;
          do {
            if ((*plVar19 == 0) || ((*(uint *)(*plVar19 + 0x14) & 0x8000000) != 0)) break;
            uVar20 = (ulonglong)((int)uVar20 - 1);
            uVar21 = uVar21 - 1;
            plVar19 = plVar19 + -7;
          } while (0 < (longlong)uVar21);
          if ((int)uVar20 < iVar10) {
            auVar30 = ZEXT1664(auVar33);
            auVar35 = ZEXT1664(auVar28);
            auVar44 = ZEXT1664(auVar36);
            auVar34 = ZEXT1664(auVar40);
            auVar37 = ZEXT1664(auVar43);
            FUN_1804c7a50(uVar20 & 0xffffffff,CONCAT71((int7)(uVar21 >> 8),1));
            auVar36 = auVar44._0_16_;
            auVar28 = auVar35._0_16_;
            auVar40 = auVar34._0_16_;
            auVar33 = auVar30._0_16_;
            auVar43 = auVar37._0_16_;
          }
        }
      }
      fVar41 = *param_3;
      if ((fVar41 == fVar42) || ((char)uVar3 != '\0')) {
        lVar23 = DAT_180c62cb0;
        uVar22 = DAT_180b0a424;
        if (fVar41 != fVar42) goto LAB_18049b619;
      }
      else {
        uVar22 = DAT_1808da474;
LAB_18049b619:
        lVar23 = DAT_180c62ca8;
      }
      fVar26 = (fVar29 + fVar26) * auVar43._0_4_;
      auVar5 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(auVar33._0_4_ * DAT_180b0a41c + auVar43._0_4_)),1);
      vmaxss_avx(ZEXT416((uint)local_228),auVar5);
      local_238 = 0;
      local_248 = 0;
      local_250 = 0;
      local_258 = (char *)0x0;
      uVar27 = local_1a8._0_8_;
      local_260 = *(float ***)local_1a8._0_8_;
      auVar34 = ZEXT1664(auVar33);
      auVar35 = ZEXT1664(auVar28);
      auVar37 = ZEXT1664(auVar36);
      auVar30 = ZEXT1664(auVar40);
      auVar44 = ZEXT1664(auVar43);
      local_268._0_4_ = auVar40._0_4_;
      FUN_1804ea040(&local_170,lVar23);
      uVar27 = *(undefined8 *)uVar27;
      local_1e8 = fVar26 - local_170._0_4_ * auVar44._0_4_;
      fVar29 = (fVar31 + fVar32) * auVar44._0_4_;
      fVar31 = local_170._0_4_;
      fVar25 = (float)FUN_180463350(lVar23,auVar34._0_8_);
      fStack_1e4 = fVar29 - fVar25 * auVar44._0_4_;
      local_258 = (char *)0x0;
      local_268 = (float **)CONCAT44(local_268._4_4_,uVar22);
      local_260 = (float **)uVar27;
      FUN_180463450(local_210,lVar23,auVar34._0_8_,&local_1e8);
      lVar23 = local_210;
      if (fVar41 == fVar42) {
        fVar42 = auVar44._0_4_;
        fVar29 = (DAT_180b0a41c * 12.0 + fVar31) * fVar42;
        local_224 = fVar29 + fVar26;
        fVar26 = fVar26 - fVar29;
        local_190 = (float *)CONCAT44(fVar32,fVar26);
        local_220 = fVar32;
        if ((DAT_180b0a424 & 0xff000000) != 0) {
          uVar22 = *(uint *)(local_210 + 0x30) & 0xe0000;
          if ((uVar22 == 0) || (uVar22 != 0xe0000)) {
            pfVar14 = &local_224;
            pfVar17 = (float *)&local_190;
          }
          else {
            local_200 = local_224 + fVar42;
            local_1fc = fVar32 + fVar42;
            local_1f8 = fVar26 + fVar42;
            pfVar14 = &local_200;
            pfVar17 = &local_1f8;
            local_1f4 = local_1fc;
          }
          local_260 = (float **)CONCAT44(local_260._4_4_,*(uint *)(local_210 + 0x30));
          local_268 = (float **)CONCAT44(local_268._4_4_,DAT_180b0a41c * auVar37._0_4_);
          FUN_1804dc7e0(local_210,pfVar17,pfVar14);
        }
      }
      fVar29 = DAT_180b0a41c;
      iVar10 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar10 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
        fVar29 = DAT_180b0a41c;
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar10 + -1;
      }
      uVar22 = local_218;
      auVar36 = auVar44._0_16_;
      auVar28 = auVar30._0_16_;
      local_1a8._0_8_ = local_1a8._0_8_ + 8;
      fVar32 = 82.0;
      param_2 = local_208;
      if (2 < (int)(float)local_140) goto code_r0x00018049b7fe;
      fVar26 = 384.0;
      fVar42 = (float)local_140;
    } while( true );
  }
LAB_18049b9e6:
  fVar26 = 55.36;
  uVar39 = 0x436e0000;
  fVar42 = 30.855553;
  uVar8 = 0x43960000;
  fVar32 = 0.6;
  fVar29 = 21.0;
  if (*param_3 == 0.0) {
    if (*(char *)(param_3 + 0xd42) == '\0') {
      for (pfVar14 = param_3 + 1; pfVar14 != param_3 + 0x46c; pfVar14 = pfVar14 + 0x27) {
        if (*(char *)pfVar14 != '\0') {
          iVar10 = 1;
          goto LAB_18049ba5b;
        }
      }
    }
    iVar10 = 0;
LAB_18049ba5b:
    local_1d8 = (undefined1 *)0x0;
    uStack_1d0 = (float *)0x0;
    uStack_1c8 = (float **)0x0;
    pfStack_1c0 = (float *)0x0;
    local_1b8 = (undefined1  [16])0x0;
    local_250 = CONCAT44(local_250._4_4_,iVar10 + 4);
    local_258 = "PLAYER ESP";
    local_260 = (float **)CONCAT44(local_260._4_4_,0x425d70a4);
    local_268 = (float **)CONCAT44(local_268._4_4_,0x436e0000);
    uVar8 = 0x43960000;
    fVar42 = 30.855553;
    uVar39 = 0x436e0000;
    fVar32 = 0.6;
    fVar29 = 21.0;
    auVar30 = ZEXT1664(auVar33);
    auVar35 = ZEXT1664(auVar28);
    auVar44 = ZEXT1664(auVar36);
    FUN_180485630(&local_1d8,param_2,0);
    FUN_180486500(&local_1d8,"Enable Player ESP",param_3 + 0xd42);
    lVar18 = DAT_180c62ca8;
    if ((char)iVar10 == '\0') {
LAB_18049bc2e:
      if (DAT_180bbecdb == '\0') {
        FUN_1804c2800("##esp_layout_row");
        cVar6 = FUN_180486160(&local_1d8,"Edit ESP Layout");
        iVar10 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar10 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar10 + -1;
        }
        if (cVar6 != '\0') {
          FUN_1804c7740(uVar22,0);
        }
      }
    }
    else if (DAT_180bbecdb == '\0') {
      fVar26 = auVar44._0_4_;
      auVar28 = vroundss_avx(ZEXT816(0),
                             ZEXT416((uint)(((float)(int)local_1b8._12_4_ * fVar42 +
                                            uStack_1c8._4_4_ + 0.1) * DAT_180b0a41c + fVar26)),1);
      local_1b8._12_4_ = local_1b8._12_4_ + 1;
      auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
      auVar33 = vmaxss_avx(auVar30._0_16_,auVar33);
      auVar36 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * (float)uStack_1c8 + fVar26)),
                             1);
      auVar28 = vroundss_avx(ZEXT816(0),
                             ZEXT416((uint)(DAT_180b0a41c * 10.0 + auVar28._0_4_ + uStack_1d0._4_4_
                                           + fVar26)),1);
      auVar34 = ZEXT1664(auVar28);
      auVar33 = vroundss_avx(ZEXT816(0),
                             ZEXT416((uint)(auVar33._0_4_ + auVar36._0_4_ + (float)uStack_1d0 +
                                            DAT_180b0a41c * 12.0 + fVar26)),1);
      local_190 = (float *)CONCAT44(local_190._4_4_,auVar33._0_4_);
      fVar26 = (float)FUN_1804632d0(DAT_180c62ca8,0x41100000);
      local_190 = (float *)CONCAT44(auVar34._0_4_ - fVar26,(float)local_190);
      auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 9.0 + auVar44._0_4_)),1);
      auVar33 = vmaxss_avx(auVar30._0_16_,auVar33);
      uVar21 = auVar33._0_8_;
      if (lVar18 == 0) {
        lVar18 = *(longlong *)(*(longlong *)(lVar23 + 0x38) + 0x20);
      }
      if (auVar33._0_4_ == auVar35._0_4_) {
        uVar21 = (ulonglong)*(uint *)(*(longlong *)(lVar23 + 0x38) + 0x28);
      }
      local_170 = *(float **)(lVar23 + 0x60);
      uStack_168 = *(undefined8 *)(lVar23 + 0x68);
      local_240 = 0;
      local_248 = CONCAT44(local_248._4_4_,auVar35._0_4_);
      local_250 = 0;
      local_258 = "Enable ESP to show the configured elements.";
      local_260 = &local_170;
      local_268 = (float **)CONCAT44(local_268._4_4_,0xff3d9def);
      FUN_1804ea5f0(lVar18,lVar23,uVar21,&local_190);
      goto LAB_18049bc2e;
    }
    local_170 = param_3;
    local_260._0_4_ = (float)uVar8;
    FUN_18049fcb0(&local_1d8);
    local_260 = (float **)CONCAT44(local_260._4_4_,0x438e8000);
    local_170 = param_3;
    FUN_1804a0110(&local_1d8);
    fVar26 = (float)(int)local_1b8._8_4_ * fVar42 + fVar32 + uStack_1c8._4_4_ + fVar29;
    if (DAT_180bbecdb != '\0') {
      if (DAT_180c62d18 != DAT_180c62d20) {
        FUN_18015c010(DAT_180c62d20 + -0x20);
        DAT_180c62d20 = DAT_180c62d20 + -0x20;
      }
      DAT_1808e4e38 = 0xffffffff;
    }
    auVar36 = auVar44._0_16_;
    auVar28 = auVar35._0_16_;
    iVar10 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar10 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
      auVar36 = auVar44._0_16_;
      auVar28 = auVar35._0_16_;
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar10 + -1;
    }
  }
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_f0 = (undefined1  [16])0x0;
  uVar9 = 2;
  if (*param_3 == 0.0) {
    uVar9 = 4;
  }
  local_250 = CONCAT44(local_250._4_4_,uVar9);
  local_258 = "MODEL MATERIALS";
  local_268 = (float **)CONCAT44(local_268._4_4_,uVar39);
  auVar30 = ZEXT1664(auVar28);
  auVar35 = ZEXT1664(auVar36);
  local_260._0_4_ = fVar26;
  FUN_180485630(&local_110,param_2,0);
  local_148[0] = 0;
  local_170 = param_3 + 0xd6d;
  local_1d8 = local_148;
  uStack_1d0 = param_3 + 0xd62;
  uStack_1c8 = &local_170;
  local_258 = &DAT_18082a250;
  pfStack_1c0 = param_3;
  local_260._0_4_ = (float)uVar8;
  FUN_1804a0570(&local_110,"Player",param_3 + 0xdaf,&local_1d8);
  local_170 = param_3 + 0xda4;
  local_1d8 = local_148;
  uStack_1d0 = param_3 + 0xd99;
  uStack_1c8 = &local_170;
  local_258 = &DAT_18082a284;
  pfStack_1c0 = param_3;
  local_260._0_4_ = (float)uVar8;
  FUN_1804a0570(&local_110,"Ragdolls",(longlong)param_3 + 0x36bf,&local_1d8);
  if (*param_3 == 0.0) {
    local_190 = param_3 + 0xd8e;
    local_1d8 = local_148;
    uStack_1d0 = param_3 + 0xd83;
    uStack_1c8 = (float **)&local_190;
    local_258 = &DAT_18082a278;
    pfStack_1c0 = param_3;
    local_260._0_4_ = (float)uVar8;
    FUN_1804a0570(&local_110,"Backtrack",(longlong)param_3 + 0x36be,&local_1d8);
    local_190 = (float *)0x0;
    local_1d8 = local_148;
    uStack_1d0 = param_3 + 0xd78;
    uStack_1c8 = (float **)&local_190;
    local_258 = &DAT_18082a244;
    pfStack_1c0 = param_3;
    local_260._0_4_ = (float)uVar8;
    FUN_1804a0570(&local_110,"On Shot",(longlong)param_3 + 0x36bd,&local_1d8);
  }
  lVar18 = 0;
  fVar29 = (float)(int)local_f0._8_4_ * fVar42 + fVar32 + uStack_100._4_4_ + fVar29;
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  auVar28 = auVar35._0_16_;
  auVar33 = auVar30._0_16_;
  iVar10 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar10 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
    auVar28 = auVar35._0_16_;
    auVar33 = auVar30._0_16_;
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar10 + -1;
  }
  local_110 = 0;
  uStack_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_f0 = (undefined1  [16])0x0;
  local_250 = CONCAT44(local_250._4_4_,1);
  local_258 = "OUTLINES";
  local_268 = (float **)CONCAT44(local_268._4_4_,uVar39);
  auVar30 = ZEXT1664(auVar33);
  auVar35 = ZEXT1664(auVar28);
  local_260._0_4_ = fVar29;
  FUN_180485630(&local_110,param_2,0);
  local_260 = (float **)CONCAT44(local_260._4_4_,0x438c0000);
  local_170 = param_3;
  FUN_1804a09b0(&local_110);
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar10 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar10 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar10 + -1;
  }
  if (DAT_180bbecdb != '\0') {
    DAT_1808e4f80 = local_1f0;
  }
  if ((DAT_180cd6f9c & 1) == 0) {
    DAT_180cd6f9c = DAT_180cd6f9c | 1;
    _DAT_180cd6fa0 = 0x8ff;
    DAT_180cd6fa4 = 0x8ff;
    do {
      pcVar11 = *(char **)((longlong)&PTR_s_No_Skin_18078acd0 + lVar18);
      iVar10 = strcmp(pcVar11,"Default T Agent");
      if (iVar10 == 0) {
        uVar22 = 0;
LAB_18049c11c:
        sVar7 = *(short *)((longlong)&DAT_18078ace6 + lVar18);
        if (sVar7 < 0) {
          sVar7 = *(short *)((longlong)&DAT_18078ace2 + lVar18);
        }
        *(int *)(&DAT_180cd6fa0 + (ulonglong)uVar22 * 4) = (int)sVar7;
      }
      else {
        iVar10 = strcmp(pcVar11,"Default CT Agent");
        if (iVar10 == 0) {
          uVar22 = 1;
          goto LAB_18049c11c;
        }
      }
      lVar18 = lVar18 + 0x18;
    } while (lVar18 < 0xcf00);
    param_2 = local_208;
    lVar23 = local_210;
    uVar22 = local_218;
  }
  local_220 = param_2[1];
  local_224 = *param_2;
  fVar26 = auVar35._0_4_;
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 433.0 + fVar26)),1);
  auVar44 = ZEXT464((uint)(auVar33._0_4_ + local_224));
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 124.0 + fVar26)),1);
  auVar34 = ZEXT464((uint)(auVar33._0_4_ + local_220));
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 440.0 + fVar26)),1);
  auVar38 = ZEXT464((uint)(auVar33._0_4_ + local_220));
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 570.0 + fVar26)),1);
  auVar37 = ZEXT464((uint)(auVar33._0_4_ + local_224));
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 400.0 + fVar26)),1);
  local_130 = auVar33._0_4_ + local_224;
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 90.0 + fVar26)),1);
  local_12c = auVar33._0_4_ + local_220;
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 625.0 + fVar26)),1);
  local_138 = auVar33._0_4_ + local_224;
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 475.0 + fVar26)),1);
  local_134 = auVar33._0_4_ + local_220;
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 627.0 + fVar26)),1);
  local_190._0_4_ = auVar33._0_4_ + local_224;
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 477.0 + fVar26)),1);
  local_190._4_4_ = auVar33._0_4_ + local_220;
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 384.0 + fVar26)),1);
  local_224 = auVar33._0_4_ + local_224;
  auVar33 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 88.0 + fVar26)),1);
  local_220 = auVar33._0_4_ + local_220;
  FUN_1804ba360(&local_224,&local_190,1);
  if (DAT_180cd6b38 == 0) {
    pfVar14 = (float *)0x0;
    auVar33 = vunpcklps_avx(auVar44._0_16_,auVar34._0_16_);
    local_128 = auVar33._0_8_;
    auVar33 = vunpcklps_avx(auVar37._0_16_,auVar38._0_16_);
    local_140 = auVar33._0_8_;
    local_188 = auVar30._0_4_;
    local_184 = local_188;
    local_180 = local_188;
    local_17c = local_188;
    local_120 = local_140;
    local_118 = local_128;
LAB_18049c7eb:
    fVar31 = auVar35._0_4_;
    fVar32 = auVar38._0_4_;
    fVar29 = auVar34._0_4_;
    fVar42 = auVar37._0_4_;
    fVar26 = auVar44._0_4_;
    *(undefined1 *)(param_1 + 0x716d) = 0;
    if (pfVar14 == (float *)0x0) {
      uVar8 = *(undefined4 *)(&DAT_180cd6fa0 + (-(uint)(*param_3 != 0.0) & 4));
      uVar39 = auVar30._0_4_;
      local_210 = CONCAT44(uVar39,uVar39);
      local_1a8._4_4_ = uVar39;
      local_1a8._0_4_ = uVar39;
      local_258 = (char *)CONCAT44(local_258._4_4_,uVar39);
      local_260 = (float **)local_1a8;
      local_268 = (float **)&local_210;
      FUN_180473450(uVar8,&local_128,&local_140,1);
      FUN_180473680(lVar23,uVar8,&local_210,local_1a8);
      goto LAB_18049c726;
    }
    if (DAT_180cd6e78 == 0) {
      auVar33 = vunpcklps_avx(auVar30._0_16_,auVar30._0_16_);
      uVar27 = auVar33._0_8_;
      local_190._0_4_ = local_228;
    }
    else {
      fVar41 = local_228;
      (**(code **)(*(longlong *)DAT_180cd6e78 + 0x10))();
      fVar31 = auVar35._0_4_;
      fVar32 = auVar38._0_4_;
      fVar29 = auVar34._0_4_;
      fVar42 = auVar37._0_4_;
      fVar26 = auVar44._0_4_;
      uVar27 = CONCAT44(fStack_1e4,local_1e8);
      local_190._0_4_ = fVar41;
    }
    local_1a8._0_8_ = uVar27;
    auVar33 = local_1a8;
    local_1a8._0_4_ = SUB84(uVar27,0);
    local_1a8._4_4_ = SUB84((ulonglong)uVar27 >> 0x20,0);
    local_224 = auVar30._0_4_;
    if (((float)local_1a8._0_4_ <= local_224) || ((float)local_1a8._4_4_ <= local_224)) {
      local_1a8._0_4_ = local_138 - local_130;
      local_1a8._4_4_ = local_134 - local_12c;
    }
    auVar28 = vminss_avx(ZEXT416((uint)((fVar42 - fVar26) / (float)local_1a8._0_4_)),
                         ZEXT416((uint)((fVar32 - fVar29) / (float)local_1a8._4_4_)));
    local_1a8._4_4_ = (float)local_1a8._4_4_ * auVar28._0_4_;
    local_1a8._0_4_ = (float)local_1a8._0_4_ * auVar28._0_4_;
    local_1fc = ((fVar32 + fVar29) - (float)local_1a8._4_4_) * fVar31;
    local_200 = ((fVar42 + fVar26) - (float)local_1a8._0_4_) * fVar31;
    local_1f8 = local_200 + (float)local_1a8._0_4_;
    local_1f4 = local_1fc + (float)local_1a8._4_4_;
    local_220 = local_224;
    local_1a8 = auVar33;
    local_190._4_4_ = (float)local_190;
    if ((pfVar14 == *(float **)(lVar23 + 0x78)) && (*(longlong *)(lVar23 + 0x70) == 0)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
      local_1d8 = (undefined1 *)0x0;
      piVar1 = (int *)(lVar23 + 0xb0);
      uStack_1d0 = pfVar14;
      if (*piVar1 == *(int *)(lVar23 + 0xb4)) {
        FUN_1804aec70(piVar1);
      }
      iVar10 = *piVar1;
      lVar18 = *(longlong *)(lVar23 + 0xb8);
      *(undefined8 *)(lVar18 + (longlong)iVar10 * 0x10) = 0;
      *(float **)(lVar18 + 8 + (longlong)iVar10 * 0x10) = pfVar14;
      *piVar1 = *piVar1 + 1;
      *(undefined1 **)(lVar23 + 0x70) = local_1d8;
      *(float **)(lVar23 + 0x78) = uStack_1d0;
      FUN_1804d92c0(lVar23);
    }
    FUN_1804d9590(lVar23,6,4);
    local_260 = (float **)CONCAT44(local_260._4_4_,0xffffffff);
    local_268 = (float **)&local_190;
    FUN_1804d97d0(lVar23,&local_200,&local_1f8,&local_224);
    if (bVar24) {
      FUN_1804d9530(lVar23);
    }
  }
  else {
    pfVar14 = (float *)(**(code **)(*(longlong *)DAT_180cd6b38 + 0x10))
                                 (DAT_180cd6b38,&local_130,&local_138);
    auVar33 = vunpcklps_avx(auVar44._0_16_,auVar34._0_16_);
    local_128 = auVar33._0_8_;
    auVar33 = vunpcklps_avx(auVar37._0_16_,auVar38._0_16_);
    local_140 = auVar33._0_8_;
    local_188 = auVar30._0_4_;
    local_184 = local_188;
    local_180 = local_188;
    local_17c = local_188;
    local_120 = local_140;
    local_118 = local_128;
    if ((pfVar14 == (float *)0x0) || (DAT_180cd6eb8 == 0)) goto LAB_18049c7eb;
    local_170 = &local_17c;
    local_150 = &local_180;
    local_158 = &local_184;
    local_268 = &local_170;
    local_160 = &local_188;
    cVar6 = (**(code **)(*(longlong *)DAT_180cd6eb8 + 0x10))
                      (DAT_180cd6eb8,&local_160,&local_158,&local_150);
    fVar32 = auVar38._0_4_;
    fVar29 = auVar34._0_4_;
    fVar42 = auVar37._0_4_;
    fVar26 = auVar44._0_4_;
    if ((((cVar6 == '\0') || ((local_188 < auVar30._0_4_ || (local_184 < auVar30._0_4_)))) ||
        (local_228 < local_180)) ||
       (((local_228 < local_17c || (local_180 <= local_188)) || (local_17c <= local_184))))
    goto LAB_18049c7eb;
    *(undefined1 *)(param_1 + 0x716d) = 1;
    fVar31 = local_138 - local_130;
    auVar33 = vmaxss_avx(ZEXT416((uint)local_228),ZEXT416((uint)((local_134 - local_12c) - 4.0)));
    auVar35 = ZEXT1664(auVar33);
    fVar41 = auVar33._0_4_;
    if (DAT_180cd6e78 != 0) {
      (**(code **)(*(longlong *)DAT_180cd6e78 + 0x10))();
      fVar32 = auVar38._0_4_;
      fVar29 = auVar34._0_4_;
      fVar42 = auVar37._0_4_;
      fVar26 = auVar44._0_4_;
      fVar41 = auVar35._0_4_;
      if ((auVar30._0_4_ < (float)local_190) && (auVar30._0_4_ < local_190._4_4_)) {
        fVar31 = (float)local_190;
        fVar41 = local_190._4_4_;
      }
    }
    if (((*(char *)(param_1 + 0x716c) == '\0') || (*(float *)(param_1 + 0x7154) != fVar31)) ||
       (*(float *)(param_1 + 0x7158) != fVar41)) {
      fVar25 = (local_180 - local_188) * 0.06;
      fVar4 = (local_17c - local_184) * 0.025;
      *(float *)(param_1 + 0x7144) = local_188 - fVar25;
      *(float *)(param_1 + 29000) = local_184 - fVar4;
      *(float *)(param_1 + 0x714c) = fVar25 + local_180;
      *(float *)(param_1 + 0x7150) = fVar4 + local_17c;
      *(float *)(param_1 + 0x7154) = fVar31;
      *(float *)(param_1 + 0x7158) = fVar41;
      *(undefined1 *)(param_1 + 0x716c) = 1;
    }
    auVar33 = *(undefined1 (*) [16])(param_1 + 0x7144);
    auVar30 = ZEXT1664(auVar33);
    auVar36 = vshufps_avx(auVar33,auVar33,0xaa);
    auVar35 = ZEXT1664(auVar36);
    auVar40 = vshufps_avx(auVar33,auVar33,0xff);
    auVar44 = ZEXT1664(auVar40);
    local_1a8 = vshufps_avx(auVar33,auVar33,0x55);
    auVar28._0_4_ = (fVar32 - fVar29) / ((auVar40._0_4_ - local_1a8._0_4_) * fVar41);
    auVar28._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar28 = vminss_avx(ZEXT416((uint)((fVar42 - fVar26) /
                                       ((auVar36._0_4_ - auVar33._0_4_) * fVar31))),auVar28);
    fVar31 = fVar31 * auVar28._0_4_;
    fVar41 = fVar41 * auVar28._0_4_;
    fVar26 = (fVar42 + fVar26) * 0.5 - (auVar33._0_4_ + auVar36._0_4_) * 0.5 * fVar31;
    fVar29 = (fVar32 + fVar29) * 0.5 - (local_1a8._0_4_ + auVar40._0_4_) * 0.5 * fVar41;
    local_224 = local_228;
    local_220 = local_228;
    local_1f8 = local_198;
    local_1f4 = local_198;
    local_200 = fVar26 + fVar31;
    local_1fc = fVar29 + fVar41;
    local_1e8 = fVar26;
    fStack_1e4 = fVar29;
    if ((pfVar14 == *(float **)(lVar23 + 0x78)) && (*(longlong *)(lVar23 + 0x70) == 0)) {
      bVar24 = false;
    }
    else {
      bVar24 = true;
      local_1d8 = (undefined1 *)0x0;
      piVar1 = (int *)(lVar23 + 0xb0);
      uStack_1d0 = pfVar14;
      if (*piVar1 == *(int *)(lVar23 + 0xb4)) {
        FUN_1804aec70(piVar1);
      }
      iVar10 = *piVar1;
      lVar18 = *(longlong *)(lVar23 + 0xb8);
      *(undefined8 *)(lVar18 + (longlong)iVar10 * 0x10) = 0;
      *(float **)(lVar18 + 8 + (longlong)iVar10 * 0x10) = pfVar14;
      *piVar1 = *piVar1 + 1;
      *(undefined1 **)(lVar23 + 0x70) = local_1d8;
      *(float **)(lVar23 + 0x78) = uStack_1d0;
      FUN_1804d92c0(lVar23);
    }
    FUN_1804d9590(lVar23,6,4);
    local_260 = (float **)CONCAT44(local_260._4_4_,0xffffffff);
    local_268 = (float **)&local_224;
    FUN_1804d97d0(lVar23,&local_1e8,&local_200,&local_1f8);
    fVar25 = auVar44._0_4_;
    fVar32 = auVar35._0_4_;
    fVar42 = auVar30._0_4_;
    if (bVar24) {
      FUN_1804d9530(lVar23);
      fVar25 = auVar44._0_4_;
      fVar32 = auVar35._0_4_;
      fVar42 = auVar30._0_4_;
    }
    auVar33 = vunpcklps_avx(ZEXT416((uint)(fVar31 * fVar42 + fVar26)),
                            ZEXT416((uint)(fVar41 * (float)local_1a8._0_4_ + fVar29)));
    local_118 = auVar33._0_8_;
    auVar33 = vunpcklps_avx(ZEXT416((uint)(fVar31 * fVar32 + fVar26)),
                            ZEXT416((uint)(fVar41 * fVar25 + fVar29)));
    local_120 = auVar33._0_8_;
    *(float *)(param_1 + 0x715c) = fVar31 * local_188 + fVar26;
    *(float *)(param_1 + 0x7160) = fVar41 * local_184 + fVar29;
    *(float *)(param_1 + 0x7164) = fVar31 * local_180 + fVar26;
    *(float *)(param_1 + 0x7168) = fVar41 * local_17c + fVar29;
    auVar30 = ZEXT464((uint)local_198);
  }
  param_2 = local_208;
LAB_18049c726:
  if (*param_3 == 0.0) {
    local_260 = (float **)&local_120;
    local_268 = (float **)&local_118;
    FUN_180465700(param_1,lVar23,param_2,param_3);
  }
  plVar19 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar16 = ~*(uint *)(plVar19[0x22] + -4 + (longlong)(int)plVar19[0x21] * 4);
  pcVar11 = "##player_orbit";
  cVar6 = '#';
  uVar15 = uVar16;
  do {
    pcVar11 = pcVar11 + 1;
    if (((cVar6 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
      pcVar11 = pcVar11 + 2;
      uVar15 = uVar16;
    }
    else {
      uVar15 = crc32(uVar15,cVar6);
    }
    cVar6 = *pcVar11;
  } while (cVar6 != '\0');
  uVar15 = ~uVar15;
  if (*(uint *)(*plVar19 + 0x1534) == uVar15) {
    FUN_1804cf810(uVar15,0xb,"##player_orbit");
  }
  local_268 = (float **)CONCAT71(local_268._1_7_,1);
  puVar12 = (undefined2 *)FUN_1804aad60(&local_228,uVar15,&local_128,&local_140);
  uVar3 = *puVar12;
  local_21c._1_1_ = (char)((ushort)uVar3 >> 8);
  bVar24 = local_21c._1_1_ != '\0';
  local_21c = uVar3;
  if (((bVar24) && (*(int *)(param_1 + 0x6df8) < 0)) && (*(char *)(DAT_180bb8ae8 + 0x118) != '\0'))
  {
    fVar26 = DAT_180b0a41c * 5.0;
    if (fVar26 < auVar30._0_4_) {
      fVar26 = *(float *)(DAT_180bb8ae8 + 0xa0);
    }
    if ((fVar26 * fVar26 <= *(float *)(DAT_180bb8ae8 + 0xbc4)) && (DAT_180cd6df8 != 0)) {
      local_140 = CONCAT44(local_140._4_4_,*(float *)(DAT_180bb8ae8 + 0xfc) / DAT_180b0a41c);
      (**(code **)(*(longlong *)DAT_180cd6df8 + 0x10))(DAT_180cd6df8,&local_140);
    }
  }
  FUN_1804ba3f0();
  if (*param_3 == 0.0) {
    local_190 = (float *)CONCAT44(local_174,DAT_180b0a41c * 9.0 + local_178);
    FUN_18046c3a0(param_1,param_3,uVar22,&local_190);
    FUN_18046b0d0(param_1,param_3);
  }
  DAT_1808e4f80 = local_1f0;
code_r0x00018049b7fe:
  if (*param_3 == 0.0) {
    if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
       (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
                 *(longlong *)(DAT_180bb8ae8 + 0x2000)) == local_218)) {
      bVar24 = true;
    }
    else {
      bVar24 = false;
    }
    fVar29 = fVar29 * 9.0;
    FUN_1804c2920((int)(local_174 * 4.0) + (int)(local_178 * -4.0) * -100000);
    plVar19 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    uVar16 = ~*(uint *)(plVar19[0x22] + -4 + (longlong)(int)plVar19[0x21] * 4);
    pcVar11 = "#list";
    cVar6 = '#';
    uVar15 = uVar16;
    do {
      if (((cVar6 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
        pcVar11 = pcVar11 + 2;
        uVar15 = uVar16;
      }
      else {
        uVar15 = crc32(uVar15,cVar6);
      }
      cVar6 = *pcVar11;
      pcVar11 = pcVar11 + 1;
    } while (cVar6 != '\0');
    uVar15 = ~uVar15;
    if (*(uint *)(*plVar19 + 0x1534) == uVar15) {
      FUN_1804cf810(uVar15,0xb,&DAT_180858c6c);
    }
    iVar10 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar10 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar10 + -1;
    }
    local_190 = (float *)CONCAT44(fVar29 + local_174,fVar29 + local_178);
    local_224 = local_178 - fVar29;
    local_220 = local_174 - fVar29;
    local_268 = (float **)CONCAT71(local_268._1_7_,1);
    pbVar13 = (byte *)FUN_1804aad60(&local_21c,uVar15,&local_224,&local_190);
    bVar2 = pbVar13[2];
    auVar33 = vpcmpeqd_avx(ZEXT116(*pbVar13),SUB6416(ZEXT464(0),0));
    auVar35 = ZEXT464((uint)local_228);
    auVar33 = vblendvps_avx(ZEXT416((uint)local_228),auVar30._0_16_,auVar33);
    uVar27 = FUN_1804aaa10(uVar15 + 1,auVar33._0_8_,0x41800000);
    uVar15 = DAT_180b0a438;
    if (bVar24) {
      uVar15 = DAT_180b0a424;
    }
    uVar8 = FUN_180462ad0(uVar15,DAT_180b0a424,uVar27);
    local_268 = (float **)CONCAT44(local_268._4_4_,0x41300000);
    FUN_180463dc0(lVar23,&local_178,uVar8,&DAT_180829db8);
    auVar36 = auVar44._0_16_;
    auVar28 = auVar30._0_16_;
    auVar33 = auVar35._0_16_;
    if (bVar2 != 0) {
      FUN_1804c7740(uVar22,0);
      auVar36 = auVar44._0_16_;
      auVar28 = auVar30._0_16_;
      auVar33 = auVar35._0_16_;
    }
    param_2 = local_208;
  }
  else {
    auVar33 = ZEXT416((uint)local_228);
  }
  goto LAB_18049b9e6;
}



