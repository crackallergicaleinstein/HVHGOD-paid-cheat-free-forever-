// FUN_18047e400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047e400 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18047e400(longlong *param_1)

{
  int *piVar1;
  uint *puVar2;
  float fVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auVar7 [16];
  float fVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  char cVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  ulonglong uVar21;
  longlong *plVar22;
  ulonglong uVar23;
  uint uVar24;
  float *pfVar25;
  uint uVar26;
  float fVar27;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  float fVar28;
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  float fVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  float fVar38;
  undefined1 auVar39 [64];
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  undefined4 local_114;
  float local_110;
  float local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  local_c0 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  fVar29 = *(float *)(DAT_180bb8ae8 + 0x40);
  if ((DAT_180cd6cf8 == 0) ||
     (cVar13 = (**(code **)(*(longlong *)DAT_180cd6cf8 + 0x10))(), cVar13 == '\0')) {
    uVar16 = 0;
  }
  else {
    uVar16 = 1;
  }
  FUN_18047c030(uVar16);
  local_128 = *(undefined8 *)((longlong)param_1 + 0x717c);
  uStack_120 = *(undefined8 *)((longlong)param_1 + 0x7184);
  puVar15 = (undefined8 *)FUN_18047ce00(&local_108,&local_128);
  uVar16 = puVar15[1];
  *(undefined8 *)((longlong)param_1 + 0x717c) = *puVar15;
  *(undefined8 *)((longlong)param_1 + 0x7184) = uVar16;
  local_128 = *puVar15;
  uStack_120 = puVar15[1];
  local_108 = local_128;
  uStack_100 = uStack_120;
  puVar15 = (undefined8 *)FUN_18047ce00(&local_e0,&local_108);
  local_128 = *puVar15;
  uStack_120 = puVar15[1];
  local_e0 = &local_128;
  DAT_180b0a4d8 = FUN_18047d050(&local_e0,DAT_180b0a508,0x40466666);
  DAT_180b0a4ec = FUN_18047d050(&local_e0,DAT_180b0a4b4,0x40933333);
  DAT_180b0a50c = DAT_180b0a4ec;
  DAT_180b0a4b8 = FUN_18047d050(&local_e0,_DAT_1808da47c,0x40933333);
  auVar31._0_8_ = FUN_18047cf20(DAT_180b0a4b8);
  auVar31._8_56_ = extraout_var;
  auVar33 = ZEXT1664(auVar31._0_16_);
  auVar37._0_8_ = FUN_18047cf20(0xff000000);
  auVar37._8_56_ = extraout_var_00;
  auVar31 = ZEXT1664(auVar37._0_16_);
  auVar30._0_8_ = FUN_18047cf20(0xffffffff);
  auVar30._8_56_ = extraout_var_01;
  auVar32 = auVar33._0_16_;
  auVar35 = vmaxss_avx(auVar30._0_16_,auVar32);
  auVar7 = vminss_avx(auVar30._0_16_,auVar32);
  lVar5 = *(longlong *)(*param_1 + (longlong)(int)param_1[3] * 8);
  auVar36 = vmaxss_avx(auVar31._0_16_,auVar32);
  DAT_180c62c70 = lVar5 + 0x28;
  DAT_180c62c58 = lVar5 + 0xd3d8;
  auVar32 = vminss_avx(auVar31._0_16_,auVar32);
  DAT_180c62c60 = lVar5 + 0x6a00;
  DAT_180b0a510 = 0xff000000;
  if ((auVar36._0_4_ + 0.05) / (auVar32._0_4_ + 0.05) <=
      (auVar35._0_4_ + 0.05) / (auVar7._0_4_ + 0.05)) {
    DAT_180b0a510 = 0xffffffff;
  }
  if (DAT_180c62c58 == 0) {
    DAT_1808e4e34 = 0xffffffff;
  }
  fVar27 = *(float *)(param_1 + 4);
  auVar35._12_4_ = 0;
  auVar35._0_12_ = ZEXT812(0);
  auVar31 = ZEXT1264(ZEXT812(0)) << 0x20;
  *(float *)(param_1 + 4) = fVar27 - fVar29;
  if (fVar27 - fVar29 <= 0.0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(DAT_180bb8ae8 + 0xe8);
    *(undefined4 *)(param_1 + 4) = 0x3f000000;
  }
  iVar18 = *(int *)((longlong)param_1 + 0x6c6c);
  if (-1 < iVar18) {
    if ((*(int *)((longlong)param_1 + 0x24) != iVar18) ||
       ((iVar18 == 2 && ((int)param_1[5] != (int)param_1[0xd8e])))) {
      *(undefined4 *)((longlong)param_1 + 0x71b4) = 0;
    }
    *(int *)((longlong)param_1 + 0x24) = iVar18;
    if (iVar18 == 2) {
      *(int *)(param_1 + 5) = (int)param_1[0xd8e];
    }
    *(undefined4 *)((longlong)param_1 + 0x6c6c) = 0xffffffff;
  }
  auVar37 = ZEXT464(0x3f800000);
  auVar35 = vmaxss_avx(auVar35 << 0x20,ZEXT416((uint)(*(float *)(param_1 + 0x39) - fVar29 * 0.6)));
  *(int *)(param_1 + 0x39) = auVar35._0_4_;
  if (((char)param_1[0xe35] == '\0') && (*(float *)((longlong)param_1 + 0x71ac) == 1.0)) {
    iVar18 = *(int *)(DAT_180bb8ae8 + 0x1ff8);
    uVar23 = (ulonglong)iVar18;
    if (0 < iVar18) {
      plVar22 = (longlong *)(uVar23 * 0x38 + *(longlong *)(DAT_180bb8ae8 + 0x2000) + -0x30);
      uVar21 = uVar23;
      do {
        if ((*plVar22 == 0) || ((*(uint *)(*plVar22 + 0x14) & 0x8000000) != 0)) break;
        uVar21 = (ulonglong)((int)uVar21 - 1);
        uVar23 = uVar23 - 1;
        plVar22 = plVar22 + -7;
      } while (0 < (longlong)uVar23);
      if ((int)uVar21 < iVar18) {
        FUN_1804c7a50(uVar21 & 0xffffffff,CONCAT71((int7)(uVar23 >> 8),1));
      }
    }
  }
  if ((DAT_180cd6478 == 0) ||
     (cVar13 = (**(code **)(*(longlong *)DAT_180cd6478 + 0x10))(), cVar13 == '\0')) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((DAT_180cd6f78 == 0) ||
     (cVar13 = (**(code **)(*(longlong *)DAT_180cd6f78 + 0x10))(), cVar13 == '\0')) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
  }
  if ((bVar9) || (bVar10)) {
    bVar11 = true;
  }
  else {
    bVar11 = false;
  }
  uVar26 = 0x80000000;
  fVar27 = auVar31._0_4_;
  fVar34 = auVar37._0_4_;
  if (((DAT_180cd68f8 != 0) && ((*(int *)((longlong)param_1 + 0x24) == 4 || (bVar9)))) ||
     ((DAT_180cd6b38 != 0 && ((*(int *)((longlong)param_1 + 0x24) == 2 || (bVar10)))))) {
    cVar13 = (char)param_1[0xe35];
    fVar29 = fVar34;
    if ((cVar13 == '\0') && (!bVar11)) {
      fVar29 = fVar27;
    }
  }
  else {
    cVar13 = (char)param_1[0xe35];
    if (cVar13 == '\0') {
      fVar29 = -fVar29;
    }
    fVar38 = fVar29 * *(float *)(param_1 + 0xe36) + *(float *)((longlong)param_1 + 0x71ac);
    fVar29 = fVar27;
    if (fVar27 <= fVar38) {
      auVar35 = vminss_avx(auVar37._0_16_,ZEXT416((uint)fVar38));
      fVar29 = auVar35._0_4_;
    }
  }
  *(float *)((longlong)param_1 + 0x71ac) = fVar29;
  if (fVar34 <= fVar29) {
    *(undefined4 *)(param_1 + 0xe36) = 0x40e00000;
  }
  lVar5 = DAT_180bb8ae8;
  if (fVar29 <= fVar27) {
  }
  if (cVar13 == '\0') goto LAB_18047e948;
  if (*(char *)(DAT_180bb8ae8 + 300) == '\0') {
    auVar30 = ZEXT1664(auVar31._0_16_);
  }
  else {
    auVar30 = ZEXT464((uint)(*(float *)(param_1 + 0xe3b) + *(float *)(DAT_180bb8ae8 + 0x120)));
  }
  iVar18 = (int)auVar30._0_4_;
  *(float *)(param_1 + 0xe3b) = auVar30._0_4_ - (float)iVar18;
  if ((*(char *)(lVar5 + 0x12e) == '\0') &&
     ((*(char *)(lVar5 + 300) != '\0' ||
      (((fVar27 <= *(float *)(DAT_180bb8ae8 + 0xaac) && (*(char *)(DAT_180bb8ae8 + 0xaa4) == '\0'))
       && (*(char *)(DAT_180bb8ae8 + 0x1cf0) == '\0')))))) {
    cVar13 = FUN_1804c3390(0x25a,1,0);
    fVar29 = auVar30._0_4_;
    if (cVar13 == '\0') {
      cVar13 = FUN_1804c3390(0x272,1,0);
      fVar29 = auVar30._0_4_;
      if (cVar13 == '\0') goto LAB_18047e8b7;
    }
    iVar18 = (int)fVar29 + 1;
  }
LAB_18047e8b7:
  cVar13 = FUN_18047d2a0(0x256,0x271);
  iVar14 = iVar18 + -1;
  if (cVar13 == '\0') {
    iVar14 = iVar18;
  }
  cVar13 = FUN_18047d2a0(0x218,0x264);
  if (cVar13 == '\0') {
    if (iVar14 == 0) goto LAB_18047e948;
    fVar29 = DAT_180b0a41c / 0.1 + (float)iVar14;
    fVar27 = (float)(~uVar26 & (uint)fVar29);
    auVar36 = vroundps_avx(ZEXT416((uint)fVar27),0);
    auVar35 = vcmpss_avx(ZEXT416((uint)(fVar27 - auVar36._0_4_)),ZEXT416(0x3f000000),0);
    fVar29 = (float)((uint)((float)(auVar35._0_4_ & 0x3f800000) + auVar36._0_4_) |
                    uVar26 & (uint)fVar29) * 0.1;
  }
  else {
    fVar29 = *(float *)((longlong)param_1 + 0x71d4);
  }
  FUN_18047e280(param_1,fVar29);
LAB_18047e948:
  fVar29 = *(float *)((longlong)param_1 + 0x71a4);
  if (auVar31._0_4_ < fVar29) {
    auVar30 = ZEXT464(0x3f400000);
    if (0.75 <= fVar29) {
      auVar35 = vminss_avx(SUB6416(ZEXT464(0x40400000),0),ZEXT416((uint)fVar29));
      auVar30 = ZEXT1664(auVar35);
    }
    if ((*(char *)((longlong)param_1 + 0x71e4) != '\0') && (auVar30._0_4_ != DAT_180b0a41c)) {
      FUN_18047e2f0(param_1,auVar30._0_8_,auVar37._0_8_);
    }
    DAT_180b0a41c = auVar30._0_4_;
    FUN_18047d3f0();
    *(undefined4 *)((longlong)param_1 + 0x71a4) = 0;
  }
  puVar15 = (undefined8 *)FUN_18017bf40(&local_128);
  lVar5 = DAT_180bb8ae8;
  fVar38 = 0.5;
  _DAT_180c62cc8 = *puVar15;
  auVar36 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 633.0 + 0.5)),1);
  auVar33 = ZEXT1664(auVar36);
  auVar7 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 485.0 + 0.5)),1);
  auVar30 = ZEXT1664(auVar7);
  DAT_180bbecda = 0;
  fVar34 = auVar31._0_4_;
  auVar35 = auVar31._0_16_;
  fVar29 = auVar7._0_4_;
  fVar27 = auVar36._0_4_;
  if (*(char *)((longlong)param_1 + 0x71e4) != '\0') {
    fVar28 = *(float *)(param_1 + 0xe3c);
    fVar8 = fVar34;
    if (fVar34 <= fVar28) {
      auVar36 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*(float *)(DAT_180bb8ae8 + 0x34) - fVar29)),1
                            );
      auVar36 = vmaxss_avx(auVar35,auVar36);
      auVar36 = vminss_avx(auVar36,ZEXT416((uint)fVar28));
      fVar8 = auVar36._0_4_;
    }
    fVar3 = *(float *)((longlong)param_1 + 0x71dc);
    auVar36 = auVar35;
    if (fVar34 <= fVar3) {
      auVar36 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*(float *)(DAT_180bb8ae8 + 0x30) - fVar27)),1
                            );
      auVar36 = vmaxss_avx(auVar35,auVar36);
      auVar36 = vminss_avx(auVar36,ZEXT416((uint)fVar3));
    }
    if ((auVar36._0_4_ != fVar3) || (fVar8 != fVar28)) {
      *(float *)((longlong)param_1 + 0x71dc) = auVar36._0_4_;
      *(float *)(param_1 + 0xe3c) = fVar8;
      *(undefined1 *)((longlong)param_1 + 0x71e5) = 1;
    }
  }
  if (*(char *)((longlong)param_1 + 0x71e5) == '\0') {
    *(uint *)(lVar5 + 0x1f10) = *(uint *)(lVar5 + 0x1f10) | 1;
    *(undefined8 *)(lVar5 + 0x1f20) = *(undefined8 *)((longlong)param_1 + 0x71cc);
    *(undefined8 *)(lVar5 + 0x1f28) = 0;
    *(undefined4 *)(lVar5 + 0x1f14) = 2;
  }
  else {
    fVar28 = *(float *)(lVar5 + 0x34);
    auVar36 = auVar35;
    if (fVar34 <= *(float *)((longlong)param_1 + 0x71dc)) {
      auVar36 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*(float *)(lVar5 + 0x30) - fVar27)),1);
      auVar36 = vmaxss_avx(auVar35,auVar36);
      auVar36 = vminss_avx(auVar36,ZEXT416((uint)*(float *)((longlong)param_1 + 0x71dc)));
    }
    *(int *)((longlong)param_1 + 0x71dc) = auVar36._0_4_;
    if (fVar34 <= *(float *)(param_1 + 0xe3c)) {
      auVar36 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar28 - fVar29)),1);
      auVar35 = vmaxss_avx(auVar35,auVar36);
      auVar35 = vminss_avx(auVar35,ZEXT416((uint)*(float *)(param_1 + 0xe3c)));
    }
    *(int *)(param_1 + 0xe3c) = auVar35._0_4_;
    *(uint *)(lVar5 + 0x1f10) = *(uint *)(lVar5 + 0x1f10) | 1;
    *(undefined8 *)(lVar5 + 0x1f20) = *(undefined8 *)((longlong)param_1 + 0x71dc);
    *(undefined8 *)(lVar5 + 0x1f28) = 0;
    *(undefined4 *)(lVar5 + 0x1f14) = 1;
    *(undefined1 *)((longlong)param_1 + 0x71e5) = 0;
  }
  *(uint *)(lVar5 + 0x1f10) = *(uint *)(lVar5 + 0x1f10) | 2;
  *(undefined4 *)(lVar5 + 0x1f18) = 1;
  *(float *)(lVar5 + 0x1f30) = fVar27;
  *(float *)(lVar5 + 0x1f34) = fVar29;
  local_e0 = (undefined8 *)CONCAT44(fVar34,fVar34);
  FUN_1804b2d30(2,&local_e0);
  FUN_1804b2c00(4,auVar31._0_8_);
  auVar39 = ZEXT464(0x41200000);
  FUN_1804b2c00(3,DAT_180b0a41c * 10.0);
  local_e0 = (undefined8 *)CONCAT44(auVar37._0_4_,auVar37._0_4_);
  FUN_1804b2d30(5,&local_e0);
  FUN_1804bee10("##neverlose",0,0x301bb);
  FUN_1804b2de0(4);
  lVar5 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar5 = *(longlong *)(lVar5 + 0x14d0);
  auVar35 = vroundss_avx(ZEXT816(0),ZEXT416(*(uint *)(lVar5 + 0x2c)),1);
  auVar36 = vroundss_avx(ZEXT816(0),ZEXT416(*(uint *)(lVar5 + 0x28)),1);
  lVar5 = *(longlong *)(lVar5 + 0x2c8);
  *(undefined1 *)((longlong)param_1 + 0x71e4) = 1;
  auVar7 = vunpcklps_avx(auVar36,auVar35);
  local_f0 = auVar7._0_8_;
  *(undefined8 *)((longlong)param_1 + 0x71dc) = local_f0;
  local_d0 = auVar36._0_4_ + auVar33._0_4_;
  fStack_cc = auVar35._0_4_ + auVar30._0_4_;
  local_114 = *(undefined4 *)(lVar5 + 0x20);
  lVar17 = *(longlong *)(lVar5 + 0x38);
  local_e0 = *(undefined8 **)(lVar17 + 0x44);
  local_e8 = *(float *)(lVar17 + 0x3c);
  local_e4 = *(float *)(lVar17 + 0x40);
  FUN_1804d9420(lVar5,&local_e8,&local_e0,0);
  local_168._0_4_ = DAT_180b0a41c * 18.0;
  local_160._0_4_ = DAT_180b0a4e4;
  FUN_180462b50(lVar5,&local_f0,&local_d0,DAT_180b0a41c * auVar39._0_4_);
  iVar18 = *(int *)(lVar5 + 0xa0);
  iVar14 = iVar18 + -1;
  *(int *)(lVar5 + 0xa0) = iVar14;
  if (iVar14 == 0) {
    puVar15 = (undefined8 *)(*(longlong *)(lVar5 + 0x38) + 0x3c);
  }
  else {
    puVar15 = (undefined8 *)((longlong)(iVar18 + -2) * 0x10 + *(longlong *)(lVar5 + 0xa8));
  }
  uVar16 = puVar15[1];
  *(undefined8 *)(lVar5 + 0x60) = *puVar15;
  *(undefined8 *)(lVar5 + 0x68) = uVar16;
  FUN_1804d9200(lVar5);
  uVar24 = DAT_180b0a4f0;
  uVar26 = DAT_180b0a4cc;
  fVar29 = 134.0;
  if ((((*(int *)((longlong)param_1 + 0x24) == 4) && (-1 < (int)param_1[9])) &&
      (0 < (int)param_1[10])) && (DAT_180cd68f8 != 0)) {
    local_110 = DAT_180b0a41c * 134.0 + (float)local_f0;
    local_10c = fStack_cc;
    bVar9 = true;
    pfVar25 = &local_110;
  }
  else {
    local_f8 = CONCAT44(fStack_cc,local_d0);
    bVar9 = false;
    pfVar25 = (float *)&local_f8;
  }
  iVar18 = *(int *)(lVar5 + 0x20);
  uVar23 = (ulonglong)iVar18;
  local_160 = (longlong *)((ulonglong)local_160._4_4_ << 0x20);
  local_168 = CONCAT44(local_168._4_4_,auVar39._0_4_ * DAT_180b0a41c);
  FUN_1804df870(lVar5,&local_f0,pfVar25,0xffffffff);
  auVar35 = vunpcklps_avx(ZEXT416((uint)(float)local_f0),ZEXT416((uint)local_f0._4_4_));
  local_158 = CONCAT44(local_158._4_4_,uVar26);
  auVar36 = vunpcklps_avx(ZEXT416((uint)(float)local_f0),ZEXT416((uint)pfVar25[1]));
  local_160._0_4_ = uVar24;
  local_168 = auVar36._0_8_;
  FUN_1804e1ee0(lVar5,iVar18,*(undefined4 *)(lVar5 + 0x20),auVar35._0_8_);
  uVar24 = uVar24 >> 0x18;
  auVar35 = vmaxss_avx(auVar37._0_16_,ZEXT416((uint)(pfVar25[1] - local_f0._4_4_)));
  fVar27 = auVar31._0_4_;
  if (iVar18 < *(int *)(lVar5 + 0x20)) {
    lVar17 = uVar23 * 0x14;
    do {
      lVar6 = *(longlong *)(lVar5 + 0x28);
      fVar28 = (*(float *)(lVar17 + 4 + lVar6) - local_f0._4_4_) / auVar35._0_4_;
      fVar34 = fVar27;
      if (fVar27 <= fVar28) {
        auVar36 = vminss_avx(auVar37._0_16_,ZEXT416((uint)fVar28));
        fVar34 = auVar36._0_4_;
      }
      puVar2 = (uint *)(lVar17 + 0x10 + lVar6);
      *puVar2 = *puVar2 & 0xffffff;
      uVar19 = (int)uVar23 + 1;
      uVar23 = (ulonglong)uVar19;
      puVar2 = (uint *)(lVar17 + 0x10 + lVar6);
      *puVar2 = *puVar2 | (int)((float)(int)((uVar26 >> 0x18) - uVar24) * fVar34 + (float)uVar24) <<
                          0x18;
      lVar17 = lVar17 + 0x14;
    } while ((int)uVar19 < *(int *)(lVar5 + 0x20));
  }
  auVar35 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar29 + fVar38)),1);
  local_c8 = auVar35._0_4_ + (float)local_f0;
  auVar35 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar27 + fVar38)),1);
  local_c4 = auVar35._0_4_ + local_f0._4_4_;
  if (!bVar9) {
    local_160._0_4_ = 0;
    local_168 = CONCAT44(local_168._4_4_,DAT_180b0a41c * auVar39._0_4_);
    FUN_1804df870(lVar5,&local_c8,&local_d0,DAT_1808da494);
  }
  uVar4 = DAT_1808da490;
  auVar35 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar35 = vmaxss_avx(auVar37._0_16_,auVar35);
  auVar30 = ZEXT1664(auVar35);
  fVar29 = auVar35._0_4_ * fVar38;
  local_e0._0_4_ = local_d0 - fVar29;
  local_e0._4_4_ = fStack_cc - fVar29;
  local_e8 = fVar29 + local_c8;
  local_e4 = fVar29 + local_c4;
  auVar35 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * auVar39._0_4_ - fVar29)),auVar31._0_16_);
  local_168 = local_168 & 0xffffffff00000000;
  FUN_1804dc420(lVar5,&local_e8,&local_e0,auVar35._0_8_);
  auVar33 = ZEXT464(0x7f7fffff);
  local_158 = CONCAT44(local_158._4_4_,0x7f7fffff);
  local_160 = (longlong *)CONCAT44(local_160._4_4_,0x200);
  local_168 = CONCAT44(local_168._4_4_,auVar30._0_4_);
  FUN_1804d9a00(lVar5,*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x50),uVar4);
  *(undefined4 *)(lVar5 + 0x50) = 0;
  FUN_18047f690(param_1,lVar5,&local_f0);
  lVar17 = DAT_180bb8ae8;
  if (((int)param_1[9] < 0) || (*(int *)((longlong)param_1 + 0x24) != 4)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  if ((*(char *)((longlong)param_1 + 0x6bf4) != '\0') ||
     (auVar31._0_4_ < *(float *)(param_1 + 0xd7f))) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  if ((bVar9) || (bVar10)) {
    piVar1 = (int *)(DAT_180bb8ae8 + 0x1fd8);
    uVar26 = *(uint *)(DAT_180bb8ae8 + 0x1e80) | 0x40;
    *(uint *)(DAT_180bb8ae8 + 0x1e80) = uVar26;
    iVar18 = *(int *)(lVar17 + 0x1fdc);
    if (*piVar1 == iVar18) {
      iVar14 = *piVar1 + 1;
      if (iVar18 == 0) {
        iVar18 = 8;
      }
      else {
        iVar18 = iVar18 / 2 + iVar18;
      }
      if (iVar14 < iVar18) {
        iVar14 = iVar18;
      }
      FUN_1804d14d0(piVar1,iVar14);
    }
    *(uint *)(*(longlong *)(lVar17 + 0x1fe0) + (longlong)*piVar1 * 4) = uVar26;
    *piVar1 = *piVar1 + 1;
  }
  if (*(int *)((longlong)param_1 + 0x24) != 4) {
    FUN_180483c10(param_1,lVar5,&local_f0);
  }
  lVar17 = DAT_180bb8ae8;
  if ((bVar9) && (!bVar10)) {
    iVar18 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
    if (iVar18 < 2) {
      FUN_1804c5a40("Calling PopItemFlag() too many times!");
    }
    else {
      *(int *)(DAT_180bb8ae8 + 0x1fd8) = iVar18 + -1;
      *(undefined4 *)(lVar17 + 0x1e80) =
           *(undefined4 *)(*(longlong *)(lVar17 + 0x1fe0) + -8 + (longlong)iVar18 * 4);
    }
  }
  lVar17 = DAT_180bb8ae8;
  fVar29 = 6.0;
  if (DAT_180cd64f8 == 0) {
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    lVar6 = *(longlong *)(*(longlong *)(lVar17 + 0x14d0) + 0x2c8);
    auVar35 = vminss_avx(auVar37._0_16_,
                         ZEXT416((uint)(*(float *)(lVar17 + 0x40) * 6.0 +
                                       *(float *)((longlong)param_1 + 0x71b4))));
    *(int *)((longlong)param_1 + 0x71b4) = auVar35._0_4_;
    uVar4 = *(undefined4 *)(lVar6 + 0x20);
    lVar17 = *(longlong *)(*param_1 + (longlong)(int)param_1[3] * 8);
    lVar20 = lVar17 + 0x28;
    FUN_1804c2920(*(undefined4 *)((longlong)param_1 + 0x24));
    iVar18 = *(int *)((longlong)param_1 + 0x24);
    if (iVar18 == 0) {
      FUN_180494ba0(0,&local_f0,lVar20);
    }
    else if (iVar18 == 1) {
      FUN_180495f10(0,&local_f0,lVar20);
    }
    else if (iVar18 == 2) {
      if ((int)param_1[5] == 0) {
        FUN_18049b060(param_1,&local_f0,lVar17 + 0x2e8);
      }
      else {
        FUN_18049d600(param_1,&local_f0,lVar17 + 0x39c8);
      }
    }
    else if (iVar18 == 3) {
      FUN_180475cc0(param_1,&local_f0,lVar20);
    }
    else {
      FUN_180496d00();
    }
    iVar18 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar18 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar18 + -1;
    }
    fVar27 = *(float *)((longlong)param_1 + 0x71b4);
    if (fVar27 < auVar37._0_4_) {
      fVar27 = (2.0 - fVar27) * fVar27;
      FUN_18047d320(lVar6,uVar4,fVar27,fVar29 * DAT_180b0a41c * (auVar37._0_4_ - fVar27));
    }
  }
  else {
    (**(code **)(*(longlong *)DAT_180cd64f8 + 0x10))(DAT_180cd64f8,param_1,&local_f0);
  }
  lVar17 = DAT_180bb8ae8;
  if (bVar10) {
    iVar18 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
    if (iVar18 < 2) {
      FUN_1804c5a40("Calling PopItemFlag() too many times!");
    }
    else {
      *(int *)(DAT_180bb8ae8 + 0x1fd8) = iVar18 + -1;
      *(undefined4 *)(lVar17 + 0x1e80) =
           *(undefined4 *)(*(longlong *)(lVar17 + 0x1fe0) + -8 + (longlong)iVar18 * 4);
    }
  }
  FUN_180481cc0(param_1,&local_f0);
  fVar27 = *(float *)(param_1 + 0x39);
  fVar34 = auVar31._0_4_;
  if ((fVar34 < fVar27) && (param_1[0x37] != 0)) {
    auVar35 = auVar31._0_16_;
    auVar36 = auVar37._0_16_;
    if (fVar34 <= fVar27 * 4.0) {
      auVar35 = vminss_avx(auVar36,ZEXT416((uint)(fVar27 * 4.0)));
    }
    auVar30 = ZEXT1664(auVar35);
    local_118 = auVar37._0_4_;
    fVar27 = (local_118 - fVar27) * 8.0;
    fVar28 = fVar34;
    if (fVar34 <= fVar27) {
      auVar35 = vminss_avx(auVar36,ZEXT416((uint)fVar27));
      fVar28 = auVar35._0_4_;
    }
    plVar22 = param_1 + 0x35;
    local_118 = local_118 - (local_118 - fVar28) * (local_118 - fVar28);
    local_160 = plVar22;
    if (0xf < (ulonglong)param_1[0x38]) {
      local_160 = (longlong *)*plVar22;
    }
    local_138 = 0;
    local_148 = 0;
    auVar35 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.6 + fVar38)),1);
    local_150 = 0;
    auVar35 = vmaxss_avx(auVar36,auVar35);
    local_158 = 0;
    local_168._0_4_ = fVar34;
    FUN_1804ea040(&local_128,DAT_180c62ca8,auVar35._0_8_,auVar33._0_8_);
    uVar4 = *(undefined4 *)(lVar5 + 0x20);
    auVar35 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)(DAT_180b0a41c * 34.0 + (float)local_128 + fVar38)),1);
    auVar36 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 26.0 + fVar38)),1);
    auVar7 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((DAT_180b0a41c * 383.5 + (float)local_f0) -
                                         auVar35._0_4_ * fVar38) + fVar38)),1);
    auVar32 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)(((fStack_cc - DAT_180b0a41c * 12.0) - auVar36._0_4_) +
                                          DAT_180b0a41c * 14.0 * (auVar37._0_4_ - local_118) +
                                         fVar38)),1);
    local_e4 = auVar32._0_4_;
    local_e0._4_4_ = local_e4 + auVar36._0_4_;
    local_e8 = auVar7._0_4_;
    local_e0._0_4_ = local_e8 + auVar35._0_4_;
    local_160 = (longlong *)CONCAT71(local_160._1_7_,1);
    local_168._0_4_ = (float)_DAT_1808da47c;
    FUN_1804a8080(lVar5,&local_e8,&local_e0,DAT_180b0a41c * fVar29);
    uVar12 = DAT_180b0a428;
    auVar35 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar35 = vmaxss_avx(auVar37._0_16_,auVar35);
    auVar33 = ZEXT1664(auVar35);
    fVar27 = auVar35._0_4_ * fVar38;
    local_108 = CONCAT44(local_e0._4_4_ - fVar27,(float)local_e0 - fVar27);
    auVar35 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * fVar29 - fVar27)),auVar31._0_16_);
    local_128 = CONCAT44(fVar27 + local_e4,fVar27 + local_e8);
    local_168 = (ulonglong)local_168._4_4_ << 0x20;
    FUN_1804dc420(lVar5,&local_128,&local_108,auVar35._0_8_);
    local_158 = CONCAT44(local_158._4_4_,0x7f7fffff);
    local_160 = (longlong *)CONCAT44(local_160._4_4_,0x200);
    local_168._0_4_ = (float)auVar33._0_4_;
    FUN_1804d9a00(lVar5,*(undefined8 *)(lVar5 + 0x58),*(undefined4 *)(lVar5 + 0x50),uVar12);
    fVar29 = DAT_180b0a41c * 13.0;
    *(undefined4 *)(lVar5 + 0x50) = 0;
    local_160 = (longlong *)&DAT_180829a38;
    local_128 = CONCAT44((local_e0._4_4_ + local_e4) * fVar38,fVar29 + local_e8);
    local_168._0_4_ = (float)DAT_180b0a40c;
    FUN_180463b40(lVar5,DAT_180c62cc0,auVar39._0_8_,&local_128);
    uVar12 = DAT_1808da478;
    if (0xf < (ulonglong)param_1[0x38]) {
      plVar22 = (longlong *)*plVar22;
    }
    fVar29 = (local_e0._4_4_ + local_e4) * fVar38;
    fVar27 = (float)FUN_180463350(DAT_180c62ca8,0x4159999a);
    local_158 = 0;
    local_128 = CONCAT44(fVar29 - fVar27 * fVar38,DAT_180b0a41c * 24.0 + local_e8);
    local_168 = CONCAT44(local_168._4_4_,uVar12);
    local_160 = plVar22;
    FUN_180463450(lVar5,DAT_180c62ca8,0x4159999a,&local_128);
    FUN_18047d320(lVar5,uVar4,auVar30._0_4_ * local_118,auVar31._0_8_);
  }
  fVar29 = *(float *)((longlong)param_1 + 0x71ac);
  if (fVar29 < auVar37._0_4_) {
    fVar29 = (2.0 - fVar29) * fVar29;
    FUN_18047d320(lVar5,local_114,fVar29,DAT_180b0a41c * 8.0 * (auVar37._0_4_ - fVar29));
  }
  FUN_1804c14e0();
}



