// FUN_18055ca80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055ca80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18055ca80(longlong *param_1,longlong *param_2,longlong *param_3,byte param_4,
                  longlong param_5,undefined8 param_6,float param_7)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  bool bVar10;
  float fVar11;
  int iVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  undefined8 uVar17;
  longlong *plVar18;
  undefined8 *puVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  longlong lVar23;
  longlong *plVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong uVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  float fVar34;
  undefined1 auVar35 [64];
  float fVar36;
  float fVar37;
  float fVar38;
  undefined1 auVar39 [64];
  float fVar40;
  float fVar41;
  undefined1 auVar42 [64];
  undefined1 auStack_1e8 [32];
  undefined8 local_1c8;
  longlong *local_1c0;
  longlong *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  float local_188 [2];
  undefined8 local_180;
  float local_178;
  float local_174;
  float local_170 [2];
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  longlong local_158;
  undefined8 uStack_150;
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
  
  lVar25 = DAT_180c62cb0;
  lVar23 = DAT_180c62ca8;
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  local_130 = param_5;
  if ((*param_2 == param_2[1]) && (param_4 == 0)) {
  }
  local_158 = DAT_180c62cb0;
  local_180 = param_1;
  fVar28 = (float)FUN_180547640();
  fVar37 = 2.0;
  local_188[0] = 2.0;
  local_178 = 0.55;
  pfVar16 = (float *)*param_3;
  pfVar14 = &local_178;
  if (0.55 <= *pfVar16) {
    pfVar14 = pfVar16;
  }
  pfVar15 = local_188;
  if (*pfVar16 <= 2.0) {
    pfVar15 = pfVar14;
  }
  *pfVar16 = *pfVar15;
  fVar28 = fVar28 * *(float *)*param_3;
  auVar42 = ZEXT464((uint)(fVar28 * 13.0));
  auVar35 = ZEXT464((uint)(fVar28 * 12.0));
  fVar40 = fVar28 * 14.0;
  fVar36 = fVar28 * 10.0;
  fVar38 = fVar28 * 5.0;
  local_178 = fVar28 * 8.0;
  local_198 = 0;
  local_1a8 = 0;
  local_1b0 = 0;
  local_1b8 = (longlong *)0x0;
  fVar34 = 0.0;
  local_1c8 = (ulonglong)local_1c8._4_4_ << 0x20;
  auVar32 = ZEXT464(0x7f7fffff);
  local_1c0 = param_1;
  local_168 = fVar36;
  local_160 = fVar38;
  FUN_1804ea040(local_170,lVar25,fVar28 * 13.0,auVar32._0_8_);
  auVar29 = vmaxss_avx(ZEXT416((uint)local_170[0]),ZEXT416((uint)(fVar28 * 132.0)));
  plVar18 = (longlong *)param_2[1];
  plVar24 = (longlong *)*param_2;
  if (plVar24 != plVar18) {
    do {
      auVar30 = ZEXT1664(auVar29);
      local_1c0 = plVar24;
      if (0xf < (ulonglong)plVar24[3]) {
        local_1c0 = (longlong *)*plVar24;
      }
      local_198 = 0;
      local_1a8 = 0;
      local_1b0 = 0;
      local_1b8 = (longlong *)0x0;
      local_1c8 = CONCAT44(local_1c8._4_4_,fVar34);
      FUN_1804ea040(local_170,lVar23,auVar35._0_8_,auVar32._0_8_);
      auVar29 = vmaxss_avx(ZEXT416((uint)local_170[0]),auVar30._0_16_);
      plVar24 = plVar24 + 5;
    } while (plVar24 != plVar18);
    param_1 = local_180;
  }
  uVar27 = (param_2[1] - *param_2) / 0x28;
  if (uVar27 < param_4) {
    uVar27 = (ulonglong)param_4;
  }
  fVar28 = *(float *)(DAT_180bb8ae8 + 0x30);
  local_148 = (fVar28 - (fVar40 + fVar40)) - 24.0;
  local_144 = 20.0;
  pfVar16 = &local_148;
  if (local_148 <= 20.0) {
    pfVar16 = &local_144;
  }
  auVar29 = vminss_avx(ZEXT416((uint)*pfVar16),auVar29);
  fVar41 = auVar29._0_4_ + fVar40 + fVar40;
  uVar21 = uVar27 - 1;
  if (uVar27 == 0) {
    uVar21 = 0;
  }
  fVar36 = fVar36 + fVar36 + auVar42._0_4_ + local_178 + (float)uVar27 * auVar35._0_4_ +
           (float)uVar21 * fVar38 + fVar34;
  local_170[0] = *(float *)(DAT_180bb8ae8 + 0x34);
  auVar29 = vunpcklps_avx(ZEXT416((uint)fVar28),ZEXT416((uint)local_170[0]));
  local_110 = auVar29._0_8_;
  auVar29 = vunpcklps_avx(ZEXT416((uint)fVar41),ZEXT416((uint)fVar36));
  local_108 = auVar29._0_8_;
  lVar25 = DAT_180bb8ae8;
  FUN_180547830(&local_180,param_3,local_108,local_110);
  fVar38 = (float)local_180;
  fVar11 = local_180._4_4_;
  if (((param_4 != 0) && (*(char *)(lVar25 + 0x118) != '\0')) || (DAT_180c7e1e0 = 0, param_4 != 0))
  {
    lVar26 = DAT_180c7e1e0;
    fVar2 = *(float *)(lVar25 + 0x110);
    fVar3 = *(float *)(lVar25 + 0x114);
    if (((fVar2 < (float)local_180) || ((float)local_180 + fVar41 < fVar2)) ||
       ((fVar3 < local_180._4_4_ || (local_180._4_4_ + fVar36 < fVar3)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((DAT_180c7e1e0 == 0) && (bVar10)) {
      if (*(float *)(lVar25 + 0x120) != fVar34) {
        local_180 = (longlong *)CONCAT44(local_180._4_4_,fVar37);
        local_188[0] = 0.55;
        local_174 = *(float *)(lVar25 + 0x120) * 0.08 + *(float *)*param_3;
        pfVar16 = local_188;
        if (0.55 <= local_174) {
          pfVar16 = &local_174;
        }
        pfVar14 = (float *)&local_180;
        if (local_174 <= fVar37) {
          pfVar14 = pfVar16;
        }
        *(float *)*param_3 = *pfVar14;
      }
      if (*(char *)(lVar25 + 0x118) != '\0') {
        lVar26 = param_3[5];
        DAT_180c7e0c0 = fVar2 - fVar38;
        DAT_180c7e0c4 = fVar3 - fVar11;
        DAT_180c7e1e0 = lVar26;
      }
    }
    if (lVar26 == param_3[5]) {
      if (*(char *)(lVar25 + 0x118) == '\0') {
        lVar26 = 0;
        DAT_180c7e1e0 = 0;
      }
      if (lVar26 == param_3[5]) {
        local_140 = fVar28 - fVar41;
        local_13c = fVar34;
        pfVar16 = &local_140;
        if (fVar28 - fVar41 <= fVar34) {
          pfVar16 = &local_13c;
        }
        local_180 = (longlong *)CONCAT44(local_180._4_4_,fVar34);
        local_174 = fVar2 - DAT_180c7e0c0;
        local_138 = local_170[0] - fVar36;
        local_134 = fVar34;
        pfVar14 = &local_138;
        if (local_170[0] - fVar36 <= fVar34) {
          pfVar14 = &local_134;
        }
        local_170[0] = fVar34;
        local_188[0] = fVar3 - DAT_180c7e0c4;
        pfVar15 = (float *)&local_180;
        if (fVar34 <= local_174) {
          pfVar15 = &local_174;
        }
        if (*pfVar16 < local_174) {
          pfVar15 = pfVar16;
        }
        auVar32 = ZEXT464((uint)*pfVar15);
        pfVar16 = local_170;
        if (fVar34 <= local_188[0]) {
          pfVar16 = local_188;
        }
        if (*pfVar14 < local_188[0]) {
          pfVar16 = pfVar14;
        }
        auVar30 = ZEXT464((uint)*pfVar16);
        auVar29 = vunpcklps_avx(ZEXT416((uint)*pfVar15),ZEXT416((uint)*pfVar16));
        auVar39 = ZEXT1664(auVar29);
        FUN_180547900(param_3,auVar29._0_8_,local_108,local_110);
        goto LAB_18055cfc9;
      }
    }
  }
  auVar30 = ZEXT464((uint)fVar11);
  auVar32 = ZEXT464((uint)fVar38);
  auVar29 = vunpcklps_avx(ZEXT416((uint)fVar38),ZEXT416((uint)fVar11));
  auVar39 = ZEXT1664(auVar29);
LAB_18055cfc9:
  lVar26 = FUN_1804b81b0(**(undefined8 **)(lVar25 + 0x2030),0,"##Background");
  lVar25 = local_130;
  iVar4 = *(int *)(lVar26 + 0x20);
  uVar27 = (ulonglong)iVar4;
  fVar36 = fVar36 + auVar30._0_4_;
  auVar33 = ZEXT464((uint)fVar36);
  fVar28 = fVar41 + auVar32._0_4_;
  auVar31 = ZEXT464((uint)fVar28);
  local_1c8 = local_130;
  auVar29 = vunpcklps_avx(ZEXT416((uint)fVar28),ZEXT416((uint)fVar36));
  FUN_18056c350(lVar26,auVar39._0_8_,auVar29._0_8_,auVar35._0_8_);
  auVar29 = *(undefined1 (*) [16])(lVar26 + 0x60);
  auVar6 = vcmpss_avx(auVar32._0_16_,auVar29,1);
  auVar6 = vblendvps_avx(auVar32._0_16_,auVar29,auVar6);
  auVar8 = vshufps_avx(auVar29,auVar29,0x55);
  auVar7 = vcmpss_avx(auVar30._0_16_,auVar8,1);
  auVar7 = vblendvps_avx(auVar30._0_16_,auVar8,auVar7);
  local_130 = CONCAT44(auVar7._0_4_,auVar6._0_4_);
  auVar9 = vshufps_avx(auVar29,auVar29,0xaa);
  auVar8 = vcmpss_avx(auVar9,auVar31._0_16_,1);
  auVar8 = vblendvps_avx(auVar31._0_16_,auVar9,auVar8);
  auVar9 = vshufps_avx(auVar29,auVar29,0xff);
  auVar29 = vcmpss_avx(auVar9,auVar33._0_16_,1);
  auVar29 = vblendvps_avx(auVar33._0_16_,auVar9,auVar29);
  auVar6 = vmaxss_avx(auVar6,auVar8);
  uStack_128 = auVar6._0_4_;
  auVar29 = vmaxss_avx(auVar7,auVar29);
  uStack_124 = auVar29._0_4_;
  piVar1 = (int *)(lVar26 + 0xa0);
  iVar12 = *(int *)(lVar26 + 0xa4);
  if (*piVar1 == iVar12) {
    iVar20 = *piVar1 + 1;
    if (iVar12 == 0) {
      iVar12 = 8;
    }
    else {
      iVar12 = iVar12 / 2 + iVar12;
    }
    if (iVar20 < iVar12) {
      iVar20 = iVar12;
    }
    FUN_1804aec70(piVar1,iVar20);
  }
  puVar19 = (undefined8 *)(*(longlong *)(lVar26 + 0xa8) + (longlong)*piVar1 * 0x10);
  *puVar19 = local_130;
  puVar19[1] = CONCAT44(uStack_124,uStack_128);
  *piVar1 = *piVar1 + 1;
  *(longlong *)(lVar26 + 0x60) = local_130;
  *(ulonglong *)(lVar26 + 0x68) = CONCAT44(uStack_124,uStack_128);
  FUN_1804d9200(lVar26);
  fVar28 = auVar30._0_4_ + local_168;
  uVar13 = FUN_1805477d0(*(undefined4 *)(lVar25 + 0x94));
  fVar37 = auVar32._0_4_;
  local_168 = fVar37 + fVar40;
  uVar21 = auVar42._0_8_;
  local_164 = fVar28;
  if ((((uVar13 & 0xff000000) != 0) && (param_1 != (longlong *)0x0)) && ((char)*param_1 != '\0')) {
    if (local_158 == 0) {
      local_158 = *(longlong *)(*(longlong *)(lVar26 + 0x38) + 0x20);
    }
    if (auVar42._0_4_ == fVar34) {
      uVar21 = (ulonglong)*(uint *)(*(longlong *)(lVar26 + 0x38) + 0x28);
    }
    uStack_150 = *(undefined8 *)(lVar26 + 0x68);
    local_1a0 = 0;
    local_1a8 = CONCAT44(local_1a8._4_4_,fVar34);
    local_1b0 = 0;
    local_1c0 = &local_158;
    local_1c8 = CONCAT44(local_1c8._4_4_,uVar13);
    local_1b8 = param_1;
    lVar25 = local_158;
    local_158 = *(longlong *)(lVar26 + 0x60);
    FUN_1804ea5f0(lVar25,lVar26,uVar21,&local_168);
    fVar37 = auVar32._0_4_;
  }
  uVar21 = auVar35._0_8_;
  fVar28 = fVar28 + auVar42._0_4_ + local_178;
  lVar25 = *param_2;
  lVar5 = param_2[1];
  if (lVar25 == lVar5) {
    local_160 = fVar37 + fVar40;
    local_15c = fVar28;
    if ((DAT_180c62f64 & 0xff000000) != 0) {
      if (lVar23 == 0) {
        lVar23 = *(longlong *)(*(longlong *)(lVar26 + 0x38) + 0x20);
      }
      if (auVar35._0_4_ == fVar34) {
        uVar21 = (ulonglong)*(uint *)(*(longlong *)(lVar26 + 0x38) + 0x28);
      }
      local_158 = *(longlong *)(lVar26 + 0x60);
      uStack_150 = *(undefined8 *)(lVar26 + 0x68);
      local_1a0 = 0;
      local_1a8 = CONCAT44(local_1a8._4_4_,fVar34);
      local_1b0 = 0;
      local_1b8 = (longlong *)0x18086b6c0;
      local_1c0 = &local_158;
      local_1c8 = CONCAT44(local_1c8._4_4_,DAT_180c62f64);
      FUN_1804ea5f0(lVar23,lVar26,uVar21,&local_160);
    }
  }
  else {
    fVar41 = fVar41 - (fVar40 + fVar40);
    local_168 = fVar37 + fVar40;
    fVar37 = auVar35._0_4_ + local_160;
    do {
      uVar17 = FUN_18015b360(&local_130,lVar25);
      local_1c8 = CONCAT44(local_1c8._4_4_,fVar41);
      plVar18 = (longlong *)FUN_180547a00(local_100,lVar23,auVar35._0_8_,uVar17);
      if (0xf < (ulonglong)plVar18[3]) {
        plVar18 = (longlong *)*plVar18;
      }
      uVar21 = auVar35._0_8_;
      local_164 = fVar28;
      if ((((*(uint *)(lVar25 + 0x20) & 0xff000000) != 0) && (plVar18 != (longlong *)0x0)) &&
         ((char)*plVar18 != '\0')) {
        lVar22 = lVar23;
        if (lVar23 == 0) {
          lVar22 = *(longlong *)(*(longlong *)(lVar26 + 0x38) + 0x20);
        }
        if (auVar35._0_4_ == fVar34) {
          uVar21 = (ulonglong)*(uint *)(*(longlong *)(lVar26 + 0x38) + 0x28);
        }
        local_158 = *(longlong *)(lVar26 + 0x60);
        uStack_150 = *(undefined8 *)(lVar26 + 0x68);
        local_1a0 = 0;
        local_1a8 = CONCAT44(local_1a8._4_4_,fVar34);
        local_1b0 = 0;
        local_1c0 = &local_158;
        local_1c8 = CONCAT44(local_1c8._4_4_,*(uint *)(lVar25 + 0x20));
        local_1b8 = plVar18;
        FUN_1804ea5f0(lVar22,lVar26,uVar21,&local_168);
      }
      FUN_18015c010(local_100);
      fVar28 = fVar28 + fVar37;
      lVar25 = lVar25 + 0x28;
    } while (lVar25 != lVar5);
  }
  iVar12 = *(int *)(lVar26 + 0xa0);
  iVar20 = iVar12 + -1;
  *(int *)(lVar26 + 0xa0) = iVar20;
  if (iVar20 == 0) {
    puVar19 = (undefined8 *)(*(longlong *)(lVar26 + 0x38) + 0x3c);
  }
  else {
    puVar19 = (undefined8 *)((longlong)(iVar12 + -2) * 0x10 + *(longlong *)(lVar26 + 0xa8));
  }
  uVar17 = puVar19[1];
  *(undefined8 *)(lVar26 + 0x60) = *puVar19;
  *(undefined8 *)(lVar26 + 0x68) = uVar17;
  FUN_1804d9200(lVar26);
  if (iVar4 < *(int *)(lVar26 + 0x20)) {
    lVar23 = uVar27 * 0x14;
    do {
      uVar13 = *(uint *)(*(longlong *)(lVar26 + 0x28) + 0x10 + lVar23);
      fVar28 = ((float)(uVar13 >> 0x18) / 255.0) * param_7;
      fVar37 = fVar34;
      if (fVar34 <= fVar28) {
        auVar29 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar28));
        fVar37 = auVar29._0_4_;
      }
      *(uint *)(*(longlong *)(lVar26 + 0x28) + 0x10 + lVar23) =
           (int)(longlong)(fVar37 * 255.0 + 0.5) << 0x18 | uVar13 & 0xffffff;
      uVar13 = (int)uVar27 + 1;
      uVar27 = (ulonglong)uVar13;
      lVar23 = lVar23 + 0x14;
    } while ((int)uVar13 < *(int *)(lVar26 + 0x20));
  }
}



