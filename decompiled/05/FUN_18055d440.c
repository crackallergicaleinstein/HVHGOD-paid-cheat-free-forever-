// FUN_18055d440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055d440 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18055d440(undefined8 param_1,longlong *param_2,longlong *param_3,byte param_4,
                  longlong param_5,longlong param_6,float param_7)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  undefined8 uVar15;
  char *pcVar16;
  undefined8 *puVar17;
  int iVar18;
  float *pfVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong lVar25;
  ulonglong uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  float fVar38;
  undefined1 auVar39 [64];
  float fVar40;
  float fVar41;
  undefined1 auVar42 [64];
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  longlong *local_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined8 local_178;
  float local_170;
  float local_16c;
  longlong local_168;
  undefined8 uStack_160;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100 [32];
  ulonglong local_e0;
  
  lVar23 = DAT_180c62cb0;
  lVar21 = DAT_180c62ca8;
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  local_130 = param_5;
  if (((*param_2 == param_2[1]) && (param_4 == 0)) && (param_6 == 0)) {
  }
  local_168 = DAT_180c62cb0;
  local_178 = param_3;
  fVar27 = (float)FUN_180547640();
  fVar30 = 2.0;
  local_17c = 2.0;
  local_188 = 0.55;
  pfVar19 = (float *)*param_3;
  pfVar13 = &local_188;
  if (0.55 <= *pfVar19) {
    pfVar13 = pfVar19;
  }
  pfVar14 = &local_17c;
  if (*pfVar19 <= 2.0) {
    pfVar14 = pfVar13;
  }
  *pfVar19 = *pfVar14;
  fVar27 = fVar27 * *(float *)*param_3;
  auVar42 = ZEXT464((uint)(fVar27 * 13.0));
  auVar32 = ZEXT464((uint)(fVar27 * 12.0));
  fVar40 = fVar27 * 14.0;
  fVar38 = fVar27 * 8.0;
  local_198 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = (char *)0x0;
  local_1c0 = (longlong *)0x180867c28;
  auVar31 = ZEXT864(0);
  local_1c8 = (ulonglong)local_1c8._4_4_ << 0x20;
  auVar36 = ZEXT464(0x7f7fffff);
  FUN_1804ea040(&local_184,lVar23,fVar27 * 13.0,auVar36._0_8_);
  if (param_6 == 0) {
    fVar28 = 132.0;
  }
  else {
    local_154 = 320.0;
    local_158 = 120.0;
    pfVar19 = &local_158;
    if (120.0 <= DAT_180b0d5a0) {
      pfVar19 = &DAT_180b0d5a0;
    }
    pfVar13 = &local_154;
    if (DAT_180b0d5a0 <= 320.0) {
      pfVar13 = pfVar19;
    }
    fVar28 = *pfVar13 - 28.0;
  }
  auVar33 = vmaxss_avx(ZEXT416((uint)local_184),ZEXT416((uint)(fVar28 * fVar27)));
  plVar4 = (longlong *)param_2[1];
  plVar22 = (longlong *)*param_2;
  if (plVar22 != plVar4) {
    do {
      auVar34 = ZEXT1664(auVar33);
      local_1c0 = plVar22;
      if (0xf < (ulonglong)plVar22[3]) {
        local_1c0 = (longlong *)*plVar22;
      }
      local_198 = 0;
      local_1a8 = 0;
      local_1b0 = 0;
      local_1b8 = (char *)0x0;
      local_1c8 = CONCAT44(local_1c8._4_4_,auVar31._0_4_);
      FUN_1804ea040(&local_184,lVar21,auVar32._0_8_,auVar36._0_8_);
      auVar33 = vmaxss_avx(ZEXT416((uint)local_184),auVar34._0_16_);
      plVar22 = plVar22 + 5;
    } while (plVar22 != plVar4);
    param_3 = local_178;
  }
  uVar26 = (param_2[1] - *param_2) / 0x28;
  if (uVar26 < param_4) {
    uVar26 = (ulonglong)param_4;
  }
  fVar28 = *(float *)(DAT_180bb8ae8 + 0x30);
  local_178._0_4_ = fVar28;
  local_150 = (fVar28 - (fVar40 + fVar40)) - 24.0;
  local_14c = 20.0;
  pfVar19 = &local_150;
  if (local_150 <= 20.0) {
    pfVar19 = &local_14c;
  }
  auVar33 = vminss_avx(ZEXT416((uint)*pfVar19),auVar33);
  fVar41 = auVar33._0_4_ + fVar40 + fVar40;
  uVar24 = uVar26 - 1;
  if (uVar26 == 0) {
    uVar24 = 0;
  }
  if (param_6 == 0) {
    fVar35 = auVar31._0_4_;
  }
  else {
    local_144 = 80.0;
    local_148 = 24.0;
    pfVar19 = &local_148;
    if (24.0 <= DAT_180b0d5a4) {
      pfVar19 = &DAT_180b0d5a4;
    }
    pfVar13 = &local_144;
    if (DAT_180b0d5a4 <= 80.0) {
      pfVar13 = pfVar19;
    }
    fVar35 = fVar27 * *pfVar13;
  }
  fVar35 = fVar27 * 10.0 + fVar27 * 10.0 + auVar42._0_4_ + fVar38 + (float)uVar26 * auVar32._0_4_ +
           (float)uVar24 * fVar27 * 5.0 + fVar35;
  local_184 = *(float *)(DAT_180bb8ae8 + 0x34);
  auVar33 = vunpcklps_avx(ZEXT416((uint)fVar28),ZEXT416((uint)local_184));
  local_110 = auVar33._0_8_;
  auVar33 = vunpcklps_avx(ZEXT416((uint)fVar41),ZEXT416((uint)fVar35));
  local_108 = auVar33._0_8_;
  lVar23 = DAT_180bb8ae8;
  FUN_180547830(&local_170,param_3,local_108,local_110);
  fVar38 = local_170;
  if (((param_4 == 0) || (*(char *)(lVar23 + 0x118) == '\0')) && (DAT_180c7e0b8 = 0, param_4 == 0))
  {
LAB_18055da32:
    auVar36 = ZEXT464((uint)fVar38);
    auVar34 = ZEXT464((uint)local_16c);
    auVar33 = vunpcklps_avx(ZEXT416((uint)fVar38),ZEXT416((uint)local_16c));
    auVar37 = ZEXT1664(auVar33);
  }
  else {
    lVar25 = DAT_180c7e0b8;
    fVar28 = *(float *)(lVar23 + 0x110);
    fVar2 = *(float *)(lVar23 + 0x114);
    if (((fVar28 < local_170) || (local_170 + fVar41 < fVar28)) ||
       ((fVar2 < local_16c || (local_16c + fVar35 < fVar2)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    fVar29 = auVar31._0_4_;
    if ((DAT_180c7e0b8 == 0) && (bVar10)) {
      if (*(float *)(lVar23 + 0x120) != fVar29) {
        local_170 = fVar30;
        local_17c = 0.55;
        local_188 = *(float *)(lVar23 + 0x120) * 0.08 + *(float *)*param_3;
        pfVar19 = &local_17c;
        if (0.55 <= local_188) {
          pfVar19 = &local_188;
        }
        pfVar13 = &local_170;
        if (local_188 <= fVar30) {
          pfVar13 = pfVar19;
        }
        *(float *)*param_3 = *pfVar13;
      }
      if (*(char *)(lVar23 + 0x118) != '\0') {
        lVar25 = param_3[5];
        DAT_180c7e000 = fVar28 - fVar38;
        DAT_180c7e004 = fVar2 - local_16c;
        DAT_180c7e0b8 = lVar25;
      }
    }
    if (lVar25 != param_3[5]) goto LAB_18055da32;
    if (*(char *)(lVar23 + 0x118) == '\0') {
      lVar25 = 0;
      DAT_180c7e0b8 = 0;
    }
    if (lVar25 != param_3[5]) goto LAB_18055da32;
    local_140 = (float)local_178 - fVar41;
    local_13c = fVar29;
    pfVar19 = &local_140;
    if ((float)local_178 - fVar41 <= fVar29) {
      pfVar19 = &local_13c;
    }
    local_178._0_4_ = fVar29;
    local_170 = fVar28 - DAT_180c7e000;
    local_138 = local_184 - fVar35;
    local_134 = fVar29;
    pfVar13 = &local_138;
    if (local_184 - fVar35 <= fVar29) {
      pfVar13 = &local_134;
    }
    local_184 = fVar29;
    local_17c = fVar2 - DAT_180c7e004;
    pfVar14 = (float *)&local_178;
    if (fVar29 <= local_170) {
      pfVar14 = &local_170;
    }
    if (*pfVar19 < local_170) {
      pfVar14 = pfVar19;
    }
    auVar36 = ZEXT464((uint)*pfVar14);
    pfVar19 = &local_184;
    if (fVar29 <= local_17c) {
      pfVar19 = &local_17c;
    }
    if (*pfVar13 < local_17c) {
      pfVar19 = pfVar13;
    }
    auVar34 = ZEXT464((uint)*pfVar19);
    auVar33 = vunpcklps_avx(ZEXT416((uint)*pfVar14),ZEXT416((uint)*pfVar19));
    auVar37 = ZEXT1664(auVar33);
    FUN_180547900(param_3,auVar33._0_8_,local_108,local_110);
  }
  lVar25 = FUN_1804b81b0(**(undefined8 **)(lVar23 + 0x2030),0,"##Background");
  lVar23 = local_130;
  iVar3 = *(int *)(lVar25 + 0x20);
  uVar26 = (ulonglong)iVar3;
  local_188 = fVar35 + auVar34._0_4_;
  local_184 = fVar41 + auVar36._0_4_;
  auVar39 = ZEXT464((uint)local_184);
  local_1c8 = local_130;
  auVar33 = vunpcklps_avx(ZEXT416((uint)local_184),ZEXT416((uint)local_188));
  FUN_18056c520(lVar25,auVar37._0_8_,auVar33._0_8_,auVar32._0_8_);
  auVar33 = *(undefined1 (*) [16])(lVar25 + 0x60);
  auVar6 = vcmpss_avx(auVar36._0_16_,auVar33,1);
  auVar6 = vblendvps_avx(auVar36._0_16_,auVar33,auVar6);
  auVar8 = vshufps_avx(auVar33,auVar33,0x55);
  auVar7 = vcmpss_avx(auVar34._0_16_,auVar8,1);
  auVar7 = vblendvps_avx(auVar34._0_16_,auVar8,auVar7);
  local_130 = CONCAT44(auVar7._0_4_,auVar6._0_4_);
  auVar9 = vshufps_avx(auVar33,auVar33,0xaa);
  auVar8 = vcmpss_avx(auVar9,auVar39._0_16_,1);
  auVar8 = vblendvps_avx(auVar39._0_16_,auVar9,auVar8);
  auVar9 = vshufps_avx(auVar33,auVar33,0xff);
  auVar33 = vcmpss_avx(auVar9,ZEXT416((uint)local_188),1);
  auVar33 = vblendvps_avx(ZEXT416((uint)local_188),auVar9,auVar33);
  auVar6 = vmaxss_avx(auVar6,auVar8);
  uStack_128 = auVar6._0_4_;
  auVar33 = vmaxss_avx(auVar7,auVar33);
  uStack_124 = auVar33._0_4_;
  piVar1 = (int *)(lVar25 + 0xa0);
  iVar11 = *(int *)(lVar25 + 0xa4);
  fVar30 = local_188;
  if (*piVar1 == iVar11) {
    iVar18 = *piVar1 + 1;
    if (iVar11 == 0) {
      iVar11 = 8;
    }
    else {
      iVar11 = iVar11 / 2 + iVar11;
    }
    if (iVar18 < iVar11) {
      iVar18 = iVar11;
    }
    FUN_1804aec70(piVar1,iVar18);
  }
  puVar17 = (undefined8 *)(*(longlong *)(lVar25 + 0xa8) + (longlong)*piVar1 * 0x10);
  *puVar17 = local_130;
  puVar17[1] = CONCAT44(uStack_124,uStack_128);
  *piVar1 = *piVar1 + 1;
  *(longlong *)(lVar25 + 0x60) = local_130;
  *(ulonglong *)(lVar25 + 0x68) = CONCAT44(uStack_124,uStack_128);
  FUN_1804d9200(lVar25);
  fVar38 = auVar34._0_4_ + fVar27 * 10.0;
  uVar12 = FUN_1805477d0(**(undefined4 **)(lVar23 + 0x10));
  fVar28 = auVar39._0_4_;
  local_178._0_4_ = auVar36._0_4_ + fVar40;
  uVar24 = auVar42._0_8_;
  local_178._4_4_ = fVar38;
  if ((uVar12 & 0xff000000) != 0) {
    if (local_168 == 0) {
      local_168 = *(longlong *)(*(longlong *)(lVar25 + 0x38) + 0x20);
    }
    if (auVar42._0_4_ == auVar31._0_4_) {
      uVar24 = (ulonglong)*(uint *)(*(longlong *)(lVar25 + 0x38) + 0x28);
    }
    uStack_160 = *(undefined8 *)(lVar25 + 0x68);
    local_1a0 = 0;
    local_1a8 = CONCAT44(local_1a8._4_4_,auVar31._0_4_);
    local_1b0 = 0;
    local_1b8 = "Velocity";
    local_1c0 = &local_168;
    local_1c8 = CONCAT44(local_1c8._4_4_,uVar12);
    lVar23 = local_168;
    local_168 = *(longlong *)(lVar25 + 0x60);
    FUN_1804ea5f0(lVar23,lVar25,uVar24,&local_178);
    fVar28 = auVar39._0_4_;
  }
  uVar24 = auVar32._0_8_;
  fVar38 = fVar38 + fVar27 * 8.0 + auVar42._0_4_;
  lVar23 = *param_2;
  lVar5 = param_2[1];
  fVar35 = auVar36._0_4_;
  if (lVar23 == lVar5) {
    if (param_6 == 0) {
      local_184 = fVar35 + fVar40;
      local_180 = fVar38;
      if ((DAT_180c62f64 & 0xff000000) != 0) {
        if (lVar21 == 0) {
          lVar21 = *(longlong *)(*(longlong *)(lVar25 + 0x38) + 0x20);
        }
        if (auVar32._0_4_ == auVar31._0_4_) {
          uVar24 = (ulonglong)*(uint *)(*(longlong *)(lVar25 + 0x38) + 0x28);
        }
        local_168 = *(longlong *)(lVar25 + 0x60);
        uStack_160 = *(undefined8 *)(lVar25 + 0x68);
        local_1a0 = 0;
        local_1a8 = CONCAT44(local_1a8._4_4_,auVar31._0_4_);
        local_1b0 = 0;
        local_1b8 = "No active entries";
        local_1c0 = &local_168;
        local_1c8 = CONCAT44(local_1c8._4_4_,DAT_180c62f64);
        FUN_1804ea5f0(lVar21,lVar25,uVar24,&local_184);
      }
      goto LAB_18055ddf4;
    }
    if (lVar23 != lVar5) goto LAB_18055dcb3;
  }
  else {
LAB_18055dcb3:
    fVar41 = fVar41 - (fVar40 + fVar40);
    local_178._0_4_ = fVar35 + fVar40;
    fVar30 = fVar27 * 5.0 + auVar32._0_4_;
    do {
      uVar15 = FUN_18015b360(&local_130,lVar23);
      local_1c8 = CONCAT44(local_1c8._4_4_,fVar41);
      pcVar16 = (char *)FUN_180547a00(local_100,lVar21,auVar32._0_8_,uVar15);
      if (0xf < *(ulonglong *)(pcVar16 + 0x18)) {
        pcVar16 = *(char **)pcVar16;
      }
      uVar24 = auVar32._0_8_;
      local_178._4_4_ = fVar38;
      if ((((*(uint *)(lVar23 + 0x20) & 0xff000000) != 0) && (pcVar16 != (char *)0x0)) &&
         (*pcVar16 != '\0')) {
        lVar20 = lVar21;
        if (lVar21 == 0) {
          lVar20 = *(longlong *)(*(longlong *)(lVar25 + 0x38) + 0x20);
        }
        if (auVar32._0_4_ == auVar31._0_4_) {
          uVar24 = (ulonglong)*(uint *)(*(longlong *)(lVar25 + 0x38) + 0x28);
        }
        local_168 = *(longlong *)(lVar25 + 0x60);
        uStack_160 = *(undefined8 *)(lVar25 + 0x68);
        local_1a0 = 0;
        local_1a8 = CONCAT44(local_1a8._4_4_,auVar31._0_4_);
        local_1b0 = 0;
        local_1c0 = &local_168;
        local_1c8 = CONCAT44(local_1c8._4_4_,*(uint *)(lVar23 + 0x20));
        local_1b8 = pcVar16;
        FUN_1804ea5f0(lVar20,lVar25,uVar24,&local_178);
      }
      FUN_18015c010(local_100);
      fVar35 = auVar36._0_4_;
      fVar38 = fVar38 + fVar30;
      lVar23 = lVar23 + 0x28;
    } while (lVar23 != lVar5);
    fVar28 = local_184;
    fVar30 = local_188;
  }
  if (param_6 != 0) {
    local_1c8 = CONCAT44(local_1c8._4_4_,fVar27);
    auVar33 = vunpcklps_avx(ZEXT416((uint)(fVar28 - fVar40)),ZEXT416((uint)(fVar30 - fVar27 * 10.0))
                           );
    auVar6 = vunpcklps_avx(ZEXT416((uint)(fVar35 + fVar40)),ZEXT416((uint)(fVar27 * 4.0 + fVar38)));
    FUN_180547c90(lVar25,auVar6._0_8_,auVar33._0_8_,param_6);
  }
LAB_18055ddf4:
  iVar11 = *(int *)(lVar25 + 0xa0);
  iVar18 = iVar11 + -1;
  *(int *)(lVar25 + 0xa0) = iVar18;
  if (iVar18 == 0) {
    puVar17 = (undefined8 *)(*(longlong *)(lVar25 + 0x38) + 0x3c);
  }
  else {
    puVar17 = (undefined8 *)((longlong)(iVar11 + -2) * 0x10 + *(longlong *)(lVar25 + 0xa8));
  }
  uVar15 = puVar17[1];
  *(undefined8 *)(lVar25 + 0x60) = *puVar17;
  *(undefined8 *)(lVar25 + 0x68) = uVar15;
  FUN_1804d9200(lVar25);
  if (iVar3 < *(int *)(lVar25 + 0x20)) {
    lVar21 = uVar26 * 0x14;
    do {
      uVar12 = *(uint *)(*(longlong *)(lVar25 + 0x28) + 0x10 + lVar21);
      fVar27 = ((float)(uVar12 >> 0x18) / 255.0) * param_7;
      fVar30 = auVar31._0_4_;
      if (fVar30 <= fVar27) {
        auVar33 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar27));
        fVar30 = auVar33._0_4_;
      }
      *(uint *)(*(longlong *)(lVar25 + 0x28) + 0x10 + lVar21) =
           (int)(longlong)(fVar30 * 255.0 + 0.5) << 0x18 | uVar12 & 0xffffff;
      uVar12 = (int)uVar26 + 1;
      uVar26 = (ulonglong)uVar12;
      lVar21 = lVar21 + 0x14;
    } while ((int)uVar12 < *(int *)(lVar25 + 0x20));
  }
}



