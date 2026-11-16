// FUN_180548760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180548760 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180548760(char param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  ushort uVar6;
  longlong lVar7;
  byte bVar8;
  float *pfVar9;
  longlong lVar10;
  undefined8 uVar11;
  float *pfVar12;
  undefined8 *puVar13;
  byte bVar14;
  int iVar15;
  float *pfVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  ulonglong uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 auVar32 [64];
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  float fVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auStack_288 [32];
  float *local_268;
  float *local_260;
  float *local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_238;
  float local_228;
  float local_224;
  undefined4 local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204 [2];
  float local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e0;
  float fStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  longlong local_198;
  longlong lStack_190;
  undefined4 *local_188;
  undefined1 *local_180;
  undefined4 *local_178;
  undefined4 *local_170;
  float local_168;
  float local_164;
  undefined4 *local_160;
  undefined8 local_158;
  longlong lStack_150;
  undefined1 local_148 [32];
  undefined1 local_128 [32];
  float local_108;
  float local_104;
  longlong local_100 [6];
  ulonglong local_d0;
  
  lVar17 = DAT_180c62cb0;
  lVar7 = DAT_180c62ca8;
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_288;
  local_188 = &DAT_180b0d6d8;
  local_180 = &DAT_180b0d6cc;
  local_178 = &DAT_180b0d6d0;
  local_170 = &DAT_180b0d6d4;
  local_20c = 1.0;
  local_168 = 1.0;
  auVar40 = ZEXT464(0x3eb33333);
  local_164 = 0.35;
  local_160 = &DAT_180b0d6d8;
  if (DAT_1808e68b1 == '\0') {
  }
  fVar21 = (float)FUN_180547640();
  auVar32 = ZEXT464(0x40000000);
  local_1bc = 2.0;
  fVar33 = 0.55;
  local_1c0 = 0.55;
  pfVar16 = &local_1c0;
  if (0.55 <= DAT_180b0d6d8) {
    pfVar16 = &DAT_180b0d6d8;
  }
  pfVar9 = &local_1bc;
  if (DAT_180b0d6d8 <= 2.0) {
    pfVar9 = pfVar16;
  }
  DAT_180b0d6d8 = *pfVar9;
  fVar21 = DAT_180b0d6d8 * fVar21;
  auVar35 = ZEXT464((uint)(fVar21 * 13.0));
  local_1fc = fVar21 * 12.0;
  auVar30 = ZEXT464((uint)local_1fc);
  if (DAT_180b0d6f4 == '\0') {
    FUN_18015abc0(local_100,0x30);
  }
  else {
    FUN_18015abc0(local_100,0x30,"Spectators (%d)",
                  ((longlong)DAT_1808e68d8 - (longlong)DAT_1808e68d0) / 0x28);
  }
  fVar37 = fVar21 * 14.0;
  local_208 = fVar37;
  auVar25 = vpcmpeqd_avx(ZEXT116(DAT_180b0d6f7),SUB6416(ZEXT464(0),0));
  auVar25 = vblendvps_avx(auVar32._0_16_,SUB6416(ZEXT464(0x40a00000),0),auVar25);
  local_1d0 = CONCAT44(local_1d0._4_4_,auVar25._0_4_ * fVar21);
  auVar28 = ZEXT464(0x7f7fffff);
  auVar36 = ZEXT864(0);
  local_220 = 0.0;
  if (DAT_180b0d6f3 == 0) {
    local_210 = 0.0;
    auVar26 = ZEXT864(0);
  }
  else {
    local_238 = 0;
    local_248 = 0;
    local_250 = 0;
    local_258 = (float *)0x0;
    local_260 = (float *)local_100;
    local_268 = (float *)((ulonglong)local_268 & 0xffffffff00000000);
    FUN_1804ea040(local_204,lVar17,auVar35._0_8_,auVar28._0_8_);
    auVar26 = ZEXT464((uint)local_204[0]);
    local_210 = fVar21 * 8.0;
  }
  pfVar16 = DAT_1808e68d8;
  local_218 = auVar32._0_4_;
  auVar39 = auVar40._0_16_;
  auVar24 = auVar36._0_16_;
  auVar34 = auVar35._0_16_;
  auVar25 = auVar26._0_16_;
  if (DAT_1808e68d0 != DAT_1808e68d8) {
    fVar33 = 20.0;
    pfVar9 = DAT_1808e68d0;
    do {
      local_260 = pfVar9;
      if (0xf < *(ulonglong *)(pfVar9 + 6)) {
        local_260 = *(float **)pfVar9;
      }
      local_238 = 0;
      local_248 = 0;
      local_250 = 0;
      local_258 = (float *)0x0;
      local_268 = (float *)CONCAT44(local_268._4_4_,auVar36._0_4_);
      FUN_1804ea040(local_204,lVar7,auVar30._0_8_,auVar28._0_8_);
      local_218 = auVar32._0_4_;
      auVar39 = auVar40._0_16_;
      auVar24 = auVar36._0_16_;
      auVar34 = auVar35._0_16_;
      if (DAT_180b0d6f2 == '\0') {
        fVar22 = auVar36._0_4_;
      }
      else {
        fVar22 = fVar21 * fVar33;
      }
      auVar25 = vmaxss_avx(ZEXT416((uint)(fVar22 + local_204[0])),auVar26._0_16_);
      auVar26 = ZEXT1664(auVar25);
      pfVar9 = pfVar9 + 10;
    } while (pfVar9 != pfVar16);
    fVar33 = 0.55;
  }
  auVar25 = vmaxss_avx(ZEXT416((uint)(fVar21 * 120.0)),auVar25);
  fVar37 = auVar25._0_4_ + fVar37 + fVar37;
  local_204[0] = fVar37;
  iVar18 = (int)(((longlong)DAT_1808e68d8 - (longlong)DAT_1808e68d0) / 0x28);
  local_1b8 = auVar24._0_4_;
  fVar22 = local_1b8;
  if (0 < iVar18) {
    fVar22 = (float)iVar18 * auVar30._0_4_ + local_210 + (float)(iVar18 + -1) * (float)local_1d0;
  }
  auVar25 = vpcmpeqd_avx(ZEXT116(DAT_180b0d6f3),SUB6416(ZEXT464(0),0));
  auVar25 = vblendvps_avx(auVar34,auVar24,auVar25);
  fVar22 = auVar25._0_4_ + fVar21 * 10.0 + fVar21 * 10.0 + fVar22;
  local_1e0 = *(float *)(DAT_180bb8ae8 + 0x30);
  fVar29 = *(float *)(DAT_180bb8ae8 + 0x34);
  local_228 = fVar29;
  local_1a8 = local_1e0 - fVar37;
  auVar34 = vmaxss_avx(auVar24,ZEXT416((uint)(fVar29 - fVar22)));
  auVar24 = vmaxss_avx(auVar24,ZEXT416((uint)local_1a8));
  local_1b4 = local_20c;
  auVar25 = vpcmpeqd_avx(ZEXT416((uint)DAT_180b0d6cc),SUB6416(ZEXT464(0),0));
  auVar25 = vblendvps_avx(ZEXT416(DAT_180b0d6d0),ZEXT416((uint)local_20c),auVar25);
  pfVar16 = &local_168;
  if (DAT_180b0d6cc != 0) {
    pfVar16 = (float *)&DAT_180b0d6d0;
  }
  pfVar9 = &local_1b8;
  if (local_1b8 <= auVar25._0_4_) {
    pfVar9 = pfVar16;
  }
  pfVar16 = &local_1b4;
  if (auVar25._0_4_ <= local_20c) {
    pfVar16 = pfVar9;
  }
  local_104 = auVar24._0_4_ * *pfVar16;
  local_1ac = local_20c;
  local_1b0 = local_1b8;
  auVar25 = vpcmpeqd_avx(ZEXT416((uint)DAT_180b0d6cc),SUB6416(ZEXT464(0),0));
  auVar25 = vblendvps_avx(ZEXT416(DAT_180b0d6d4),auVar39,auVar25);
  pfVar16 = &local_164;
  if (DAT_180b0d6cc != 0) {
    pfVar16 = (float *)&DAT_180b0d6d4;
  }
  pfVar9 = &local_1b0;
  if (local_1b8 <= auVar25._0_4_) {
    pfVar9 = pfVar16;
  }
  pfVar16 = &local_1ac;
  if (auVar25._0_4_ <= local_20c) {
    pfVar16 = pfVar9;
  }
  local_108 = auVar34._0_4_ * *pfVar16;
  if (((param_1 != '\0') && (*(char *)(DAT_180bb8ae8 + 0x118) != '\0')) ||
     (DAT_180c7e110 = '\0', param_1 != '\0')) {
    fVar38 = *(float *)(DAT_180bb8ae8 + 0x110);
    fVar31 = *(float *)(DAT_180bb8ae8 + 0x114);
    if (((fVar38 < local_104) || (local_104 + fVar37 < fVar38)) ||
       ((fVar31 < local_108 || (local_108 + fVar22 < fVar31)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
      if ((DAT_180c7e110 == '\0') && (0.001 < ABS(*(float *)(DAT_180bb8ae8 + 0x120)))) {
        local_1f4 = fVar33;
        local_1ec = *(float *)(DAT_180bb8ae8 + 0x120) * 0.08 + DAT_180b0d6d8;
        pfVar16 = &local_1f4;
        if (fVar33 <= local_1ec) {
          pfVar16 = &local_1ec;
        }
        pfVar9 = &local_218;
        if (local_1ec <= local_218) {
          pfVar9 = pfVar16;
        }
        DAT_180b0d6d8 = *pfVar9;
      }
    }
    if (*(char *)(DAT_180bb8ae8 + 0x118) == '\0') {
      DAT_180c7e110 = '\0';
    }
    else {
      if ((DAT_180c7e110 == '\0') && (bVar5)) {
        DAT_180c7e110 = '\x01';
        DAT_180c7e098 = fVar38 - local_104;
        DAT_180c7e09c = fVar31 - local_108;
      }
      if (DAT_180c7e110 != '\0') {
        local_104 = fVar38 - DAT_180c7e098;
        local_108 = fVar31 - DAT_180c7e09c;
      }
    }
  }
  local_1a4 = local_1b8;
  pfVar16 = &local_1a8;
  if (local_1a8 <= local_1b8) {
    pfVar16 = &local_1a4;
  }
  local_218 = local_1b8;
  pfVar9 = &local_218;
  if (local_1b8 <= local_104) {
    pfVar9 = &local_104;
  }
  if (*pfVar16 < local_104) {
    pfVar9 = pfVar16;
  }
  auVar40 = ZEXT464((uint)*pfVar9);
  local_1a0 = fVar29 - fVar22;
  local_19c = local_1b8;
  pfVar16 = &local_1a0;
  if (fVar29 - fVar22 <= local_1b8) {
    pfVar16 = &local_19c;
  }
  local_228 = local_1b8;
  pfVar12 = &local_228;
  if (local_1b8 <= local_108) {
    pfVar12 = &local_108;
  }
  if (*pfVar16 < local_108) {
    pfVar12 = pfVar16;
  }
  auVar32 = ZEXT464((uint)*pfVar12);
  lVar10 = DAT_180bb8ae8;
  if (DAT_180c7e110 != '\0') {
    auVar25 = vunpcklps_avx(ZEXT416((uint)local_1e0),ZEXT416((uint)fVar29));
    auVar24 = vunpcklps_avx(ZEXT416((uint)fVar37),ZEXT416((uint)fVar22));
    auVar34 = vunpcklps_avx(ZEXT416((uint)*pfVar9),ZEXT416((uint)*pfVar12));
    FUN_180547900(&local_188,auVar34._0_8_,auVar24._0_8_,auVar25._0_8_);
  }
  local_108 = auVar40._0_4_ + fVar37;
  auVar30 = ZEXT464((uint)(fVar22 + auVar32._0_4_));
  lVar10 = FUN_1804b81b0(**(undefined8 **)(lVar10 + 0x2030),0,"##Background");
  auVar35 = ZEXT464((uint)(fVar21 * 8.0));
  iVar18 = 5;
  fVar22 = 1.4;
  fVar29 = 6.0;
  fVar38 = 28.0;
  fVar33 = local_108;
  fVar37 = local_20c;
  do {
    local_224 = (float)iVar18 * fVar22 * fVar21;
    local_1e0 = local_224 + fVar33;
    fStack_1dc = local_224 + auVar30._0_4_;
    local_228 = local_224 + auVar40._0_4_;
    local_224 = local_224 + auVar32._0_4_;
    local_260 = (float *)((ulonglong)local_260 & 0xffffffff00000000);
    local_268 = (float *)CONCAT44(local_268._4_4_,auVar35._0_4_);
    FUN_1804df870(lVar10,&local_228,&local_1e0,
                  (int)((fVar37 - (float)iVar18 / fVar29) * fVar38) << 0x18);
    iVar18 = iVar18 + -1;
  } while (0 < iVar18);
  local_268 = (float *)&DAT_180b0d6cc;
  auVar36 = ZEXT464((uint)local_108);
  auVar25 = vunpcklps_avx(ZEXT416((uint)local_108),auVar30._0_16_);
  auVar24 = vunpcklps_avx(auVar40._0_16_,auVar32._0_16_);
  FUN_18055c700(lVar10,auVar24._0_8_,auVar25._0_8_,auVar35._0_8_);
  auVar25 = *(undefined1 (*) [16])(lVar10 + 0x60);
  auVar24 = vcmpss_avx(auVar40._0_16_,auVar25,1);
  auVar24 = vblendvps_avx(auVar40._0_16_,auVar25,auVar24);
  local_1e0 = auVar24._0_4_;
  auVar39 = vshufps_avx(auVar25,auVar25,0x55);
  auVar34 = vcmpss_avx(auVar32._0_16_,auVar39,1);
  auVar34 = vblendvps_avx(auVar32._0_16_,auVar39,auVar34);
  fStack_1dc = auVar34._0_4_;
  auVar4 = vshufps_avx(auVar25,auVar25,0xaa);
  auVar39 = vcmpss_avx(auVar4,auVar36._0_16_,1);
  auVar39 = vblendvps_avx(auVar36._0_16_,auVar4,auVar39);
  auVar4 = vshufps_avx(auVar25,auVar25,0xff);
  auVar25 = vcmpss_avx(auVar4,auVar30._0_16_,1);
  auVar25 = vblendvps_avx(auVar30._0_16_,auVar4,auVar25);
  auVar24 = vmaxss_avx(auVar24,auVar39);
  uStack_1d8 = auVar24._0_4_;
  auVar25 = vmaxss_avx(auVar34,auVar25);
  uStack_1d4 = auVar25._0_4_;
  piVar1 = (int *)(lVar10 + 0xa0);
  iVar18 = *(int *)(lVar10 + 0xa4);
  auVar30 = ZEXT464((uint)local_1fc);
  fVar33 = local_220;
  if (*piVar1 == iVar18) {
    iVar15 = *piVar1 + 1;
    if (iVar18 == 0) {
      iVar18 = 8;
    }
    else {
      iVar18 = iVar18 / 2 + iVar18;
    }
    if (iVar15 < iVar18) {
      iVar15 = iVar18;
    }
    FUN_1804aec70(piVar1,iVar15);
  }
  puVar13 = (undefined8 *)(*(longlong *)(lVar10 + 0xa8) + (longlong)*piVar1 * 0x10);
  *puVar13 = CONCAT44(fStack_1dc,local_1e0);
  puVar13[1] = CONCAT44(uStack_1d4,uStack_1d8);
  *piVar1 = *piVar1 + 1;
  *(ulonglong *)(lVar10 + 0x60) = CONCAT44(fStack_1dc,local_1e0);
  *(ulonglong *)(lVar10 + 0x68) = CONCAT44(uStack_1d4,uStack_1d8);
  FUN_1804d9200(lVar10);
  fVar29 = auVar40._0_4_;
  fVar37 = auVar32._0_4_ + fVar21 * 10.0;
  fVar22 = local_208;
  if (DAT_180b0d6f3 != 0) {
    local_220 = DAT_180b0d6e0;
    fVar38 = local_220;
    uVar19 = (uint)DAT_180b0d6e0 & 0xff;
    uVar20 = (uint)DAT_180b0d6e0 >> 8 & 0xff;
    bVar8 = (byte)((uint)DAT_180b0d6e0 >> 0x10);
    if (DAT_1808e4fb5 != '\0') {
      bVar14 = (byte)((uint)DAT_180b0d6e0 >> 8);
      if (((SUB41(DAT_180b0d6e0,0) == bVar14) && (bVar14 == bVar8)) &&
         (0xb4 < SUB41(DAT_180b0d6e0,0))) {
        bVar8 = 0x1e;
        uVar19 = 0x1e;
        uVar20 = 0x1e;
      }
    }
    local_220._3_1_ = (char)((uint)DAT_180b0d6e0 >> 0x18);
    uVar6 = CONCAT11(local_220._3_1_,bVar8);
    local_1fc = fVar29 + local_208;
    fVar31 = fVar21 * 13.0;
    bVar5 = local_220._3_1_ != '\0';
    local_220 = fVar38;
    local_1f8 = fVar37;
    if ((bVar5) && ((char)local_100[0] != '\0')) {
      if (lVar17 == 0) {
        lVar17 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + 0x20);
      }
      fVar29 = fVar31;
      if (fVar31 == fVar33) {
        fVar29 = *(float *)(*(longlong *)(lVar10 + 0x38) + 0x28);
      }
      local_198 = *(longlong *)(lVar10 + 0x60);
      lStack_190 = *(longlong *)(lVar10 + 0x68);
      local_240 = 0;
      local_248 = CONCAT44(local_248._4_4_,fVar33);
      local_250 = 0;
      local_258 = (float *)local_100;
      local_260 = (float *)&local_198;
      local_268 = (float *)CONCAT44(local_268._4_4_,((uint)uVar6 << 8 | uVar20) << 8 | uVar19);
      FUN_1804ea5f0(lVar17,lVar10,fVar29,&local_1fc);
      fVar29 = auVar40._0_4_;
    }
    fVar37 = fVar37 + fVar31 + local_210;
  }
  pfVar16 = DAT_1808e68d8;
  if (DAT_1808e68d0 != DAT_1808e68d8) {
    local_1fc = fVar29 + fVar22;
    fVar29 = auVar30._0_4_;
    fVar38 = 0.5;
    local_1e0 = (fVar29 - fVar29) * 0.5;
    local_204[0] = local_204[0] - (fVar22 + fVar22);
    fVar22 = fVar21 * 14.0;
    fVar29 = fVar29 + (float)local_1d0;
    pfVar9 = DAT_1808e68d0;
    do {
      fVar31 = local_1e0 + fVar37;
      if (DAT_180b0d6f2 == '\0') {
        fVar27 = fVar33;
      }
      else {
        fVar27 = fVar21 * 20.0;
      }
      uVar11 = FUN_18015b360(local_148,pfVar9);
      local_268 = (float *)CONCAT44(local_268._4_4_,local_204[0] - fVar27);
      pfVar12 = (float *)FUN_180547a00(local_128,lVar7,auVar30._0_8_,uVar11);
      if (0xf < *(ulonglong *)(pfVar12 + 6)) {
        pfVar12 = *(float **)pfVar12;
      }
      local_1d0 = CONCAT44(local_1d0._4_4_,DAT_180b0d6dc);
      uVar11 = local_1d0;
      uVar19 = DAT_180b0d6dc & 0xff;
      uVar20 = DAT_180b0d6dc >> 8 & 0xff;
      bVar8 = (byte)(DAT_180b0d6dc >> 0x10);
      if (DAT_1808e4fb5 != '\0') {
        bVar14 = (byte)(DAT_180b0d6dc >> 8);
        if ((((byte)DAT_180b0d6dc == bVar14) && (bVar14 == bVar8)) && (0xb4 < (byte)DAT_180b0d6dc))
        {
          bVar8 = 0x1e;
          uVar19 = 0x1e;
          uVar20 = 0x1e;
        }
      }
      local_1d0._3_1_ = (char)(DAT_180b0d6dc >> 0x18);
      uVar6 = CONCAT11(local_1d0._3_1_,bVar8);
      local_220 = local_1fc;
      uVar23 = auVar30._0_8_;
      bVar5 = local_1d0._3_1_ != '\0';
      local_21c = fVar31;
      local_1d0 = uVar11;
      if (((bVar5) && (pfVar12 != (float *)0x0)) && (*(char *)pfVar12 != '\0')) {
        lVar17 = lVar7;
        if (lVar7 == 0) {
          lVar17 = *(longlong *)(*(longlong *)(lVar10 + 0x38) + 0x20);
        }
        if (auVar30._0_4_ == fVar33) {
          uVar23 = (ulonglong)*(uint *)(*(longlong *)(lVar10 + 0x38) + 0x28);
        }
        local_1d0 = *(undefined8 *)(lVar10 + 0x60);
        uStack_1c8 = *(undefined8 *)(lVar10 + 0x68);
        local_240 = 0;
        local_248 = CONCAT44(local_248._4_4_,fVar33);
        local_250 = 0;
        local_260 = (float *)&local_1d0;
        local_268 = (float *)CONCAT44(local_268._4_4_,((uint)uVar6 << 8 | uVar20) << 8 | uVar19);
        local_258 = pfVar12;
        FUN_1804ea5f0(lVar17,lVar10,uVar23,&local_220);
      }
      FUN_18015c010(local_128);
      if ((DAT_180b0d6f2 != '\0') && (lVar17 = *(longlong *)(pfVar9 + 8), lVar17 != 0)) {
        local_1ec = local_20c;
        local_1e8 = local_20c;
        local_228 = auVar36._0_4_ - local_208;
        local_224 = fVar37 + fVar22;
        local_218 = local_228 - fVar22;
        fVar31 = fVar21 * 3.0;
        auVar40 = ZEXT464((uint)fVar31);
        uVar23 = (ulonglong)(uint)fVar31;
        local_214 = fVar37;
        local_1f4 = fVar33;
        local_1f0 = fVar33;
        if (fVar31 < fVar38) {
          local_198 = 0;
          local_258 = (float *)CONCAT44(local_258._4_4_,0xffffffff);
          local_260 = &local_1ec;
          local_268 = &local_1f4;
          lStack_190 = lVar17;
          FUN_1804e0320(lVar10,&local_198,&local_218,&local_228);
        }
        else {
          if ((lVar17 == *(longlong *)(lVar10 + 0x78)) && (*(longlong *)(lVar10 + 0x70) == 0)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
            local_158 = 0;
            piVar1 = (int *)(lVar10 + 0xb0);
            iVar18 = *(int *)(lVar10 + 0xb4);
            lStack_150 = lVar17;
            if (*piVar1 == iVar18) {
              iVar15 = *piVar1 + 1;
              if (iVar18 == 0) {
                iVar18 = 8;
              }
              else {
                iVar18 = iVar18 / 2 + iVar18;
              }
              if (iVar15 < iVar18) {
                iVar15 = iVar18;
              }
              FUN_1804aec70(piVar1,iVar15);
            }
            iVar18 = *piVar1;
            lVar3 = *(longlong *)(lVar10 + 0xb8);
            *(undefined8 *)(lVar3 + (longlong)iVar18 * 0x10) = 0;
            *(longlong *)(lVar3 + 8 + (longlong)iVar18 * 0x10) = lVar17;
            *piVar1 = *piVar1 + 1;
            *(undefined8 *)(lVar10 + 0x70) = local_158;
            *(longlong *)(lVar10 + 0x78) = lStack_150;
            FUN_1804d92c0(lVar10);
            uVar23 = auVar40._0_8_;
          }
          uVar2 = *(undefined4 *)(lVar10 + 0x20);
          local_268._0_4_ = 0xf0;
          FUN_1804dc420(lVar10,&local_218,&local_228,uVar23);
          local_268 = (float *)CONCAT44(local_268._4_4_,0x400);
          FUN_1804dafe0(lVar10,*(undefined8 *)(lVar10 + 0x58),*(undefined4 *)(lVar10 + 0x50),
                        0xffffffff);
          *(undefined4 *)(lVar10 + 0x50) = 0;
          local_258 = &local_1ec;
          local_260 = &local_1f4;
          local_268 = &local_228;
          FUN_1804e2330(lVar10,uVar2,*(undefined4 *)(lVar10 + 0x20),&local_218);
          if (bVar5) {
            FUN_1804d9530(lVar10);
          }
        }
      }
      fVar37 = fVar37 + fVar29;
      pfVar9 = pfVar9 + 10;
    } while (pfVar9 != pfVar16);
  }
  iVar18 = *(int *)(lVar10 + 0xa0);
  iVar15 = iVar18 + -1;
  *(int *)(lVar10 + 0xa0) = iVar15;
  if (iVar15 == 0) {
    puVar13 = (undefined8 *)(*(longlong *)(lVar10 + 0x38) + 0x3c);
  }
  else {
    puVar13 = (undefined8 *)((longlong)(iVar18 + -2) * 0x10 + *(longlong *)(lVar10 + 0xa8));
  }
  uVar11 = puVar13[1];
  *(undefined8 *)(lVar10 + 0x60) = *puVar13;
  *(undefined8 *)(lVar10 + 0x68) = uVar11;
  FUN_1804d9200(lVar10);
}



