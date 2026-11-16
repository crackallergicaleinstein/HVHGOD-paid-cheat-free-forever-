// FUN_1802c3af0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c3af0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c3af0(undefined8 param_1,byte param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  uint *puVar6;
  float *pfVar7;
  byte bVar8;
  longlong lVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 extraout_var [56];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined4 uVar39;
  undefined1 auVar40 [64];
  undefined4 uVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [64];
  undefined4 uVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [64];
  undefined1 auStack_cf28 [32];
  float local_cf08;
  undefined1 local_cf00;
  undefined8 local_cef8;
  undefined8 uStack_cef0;
  undefined1 *puStack_cee8;
  uint local_cee0;
  float local_ced8 [2];
  undefined8 local_ced0;
  undefined1 *puStack_cec8;
  undefined8 *puStack_cec0;
  undefined8 uStack_ceb8;
  uint local_cea8;
  uint local_cea4;
  undefined4 local_cea0;
  float fStack_ce9c;
  undefined4 local_ce98;
  float local_ce88;
  float fStack_ce84;
  undefined4 local_ce80;
  float local_ce7c;
  float fStack_ce78;
  undefined4 local_ce74;
  undefined1 local_ce70 [4];
  float local_ce6c;
  undefined8 local_ce68;
  undefined8 local_ce60 [2];
  uint local_ce50 [5370];
  uint local_7a68 [7];
  float fStack_7a4c;
  longlong local_7a48 [4];
  undefined4 auStack_7a24 [7759];
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  undefined8 uStack_30;
  
  uStack_30 = 0x1802c3b0f;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_cf28;
  FUN_18063ab10(&local_ce68,0,0x5400);
  lVar10 = (longlong)&local_ce68 + 4;
  lVar9 = 0x300;
  iVar12 = 0;
  do {
    *(undefined8 *)(lVar10 + -4) = 0;
    *(undefined8 *)(lVar10 + 4) = 0;
    *(undefined8 *)(lVar10 + 0xc) = 0;
    *(undefined1 *)(lVar10 + 0x14) = 0;
    lVar10 = lVar10 + 0x1c;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  FUN_18063ab10(local_7a68,0,0x7980);
  puVar6 = local_7a68 + 1;
  lVar10 = 0x360;
  do {
    puVar6[-1] = 0;
    puVar6[0] = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6 = puVar6 + 9;
    lVar10 = lVar10 + -1;
  } while (lVar10 != 0);
  auVar37 = ZEXT464(0x40c90fdb);
  local_e8 = 0;
  local_e0 = 0;
  fVar18 = (float)FUN_1802c3a60(*param_3,0xc0c90fdb,auVar37._0_8_,0xbfc90fdb);
  auVar33 = ZEXT464(0x40000000);
  *param_3 = fVar18;
  fVar18 = (float)FUN_1802c3a60(param_3[4],auVar33._0_8_,0x41800000,0x41000000);
  param_3[4] = fVar18;
  pfVar1 = param_3 + 2;
  local_ced8[0] = 1.68156e-44;
  pfVar11 = &local_ce6c;
  if (4 < (int)param_3[2]) {
    pfVar11 = pfVar1;
  }
  local_ce6c = 7.00649e-45;
  local_cef8._0_4_ = 0x18;
  pfVar7 = local_ced8;
  if ((int)*pfVar1 < 0xd) {
    pfVar7 = pfVar11;
  }
  local_cef8._4_4_ = 0x20;
  uStack_cef0._0_4_ = 0x30;
  local_ce70[0] = 0;
  uStack_ceb8 = param_3;
  *pfVar1 = *pfVar7;
  fVar18 = param_3[1];
  local_ce6c = 0.0;
  pfVar11 = &local_ce6c;
  if (-1 < (int)fVar18) {
    pfVar11 = param_3 + 1;
  }
  local_ced8[0] = 2.8026e-45;
  pfVar7 = local_ced8;
  if ((int)fVar18 < 3) {
    pfVar7 = pfVar11;
  }
  local_ce6c = local_ced8[(longlong)(int)*pfVar7 + -8];
  local_cef8 = &local_ce6c;
  uStack_cef0 = &local_ce68;
  puStack_cee8 = local_ce70;
  local_ced0 = &local_ce6c;
  puStack_cec8 = local_ce70;
  bVar8 = 0;
  if (param_2 < 4) {
    bVar8 = param_2;
  }
  puStack_cec0 = &local_ce68;
  if (bVar8 == 0) {
    FUN_1802c5040(&local_cef8,0x40b66666,0,0);
    auVar34 = ZEXT464(0x40b00000);
    FUN_1802c5040(&local_cef8,auVar34._0_8_,0x3eb33333,0);
    auVar33 = ZEXT464(0x40200000);
    local_cea4 = 0x40200000;
    FUN_1802c5040(&local_cef8,auVar34._0_8_,auVar33._0_8_,0);
    local_cf00 = 0;
    local_cf08 = auVar33._0_4_;
    FUN_1802c51e0(&local_ced0,0x40b66666,0,auVar34._0_8_);
    fVar18 = *pfVar1;
    uVar16 = 0;
    if (0 < (int)fVar18) {
      local_ced8[0] = 6.5;
      local_cea8 = 0x40f9999a;
      uVar15 = local_e8;
      do {
        fVar31 = *param_3;
        fVar20 = (float)(int)uVar16;
        fVar35 = (float)(int)fVar18;
        fVar18 = ((fVar20 - 0.5) * auVar37._0_4_) / fVar35 + fVar31;
        auVar33 = ZEXT464((uint)fVar18);
        fVar19 = (fVar20 + 0.5) * auVar37._0_4_;
        fVar30 = fVar19 / fVar35;
        auVar37 = ZEXT464((uint)(fVar30 + fVar31));
        fVar18 = (float)FUN_180637540(fVar18,fVar19,fVar30);
        auVar46 = ZEXT464((uint)(fVar18 * auVar34._0_4_));
        fVar18 = (float)FUN_180638e00(auVar33._0_8_);
        auVar36 = ZEXT464((uint)(fVar18 * auVar34._0_4_));
        fVar18 = (float)FUN_180637540(auVar37._0_8_);
        auVar38 = ZEXT464((uint)(fVar18 * auVar34._0_4_));
        fVar18 = (float)FUN_180638e00(auVar37._0_8_);
        fVar31 = (fVar20 * 6.2831855) / fVar35 + fVar31;
        auVar33 = ZEXT464((uint)fVar31);
        auVar40 = ZEXT464((uint)(fVar18 * auVar34._0_4_));
        fVar18 = (float)FUN_180637540(fVar31);
        auVar37 = ZEXT464((uint)(fVar18 * 5.8));
        fVar18 = (float)FUN_180638e00(auVar33._0_8_);
        fVar18 = fVar18 * 5.8;
        auVar29 = vpcmpeqd_avx(ZEXT416(uVar16 & 1),SUB6416(ZEXT464(0),0));
        auVar29 = vblendvps_avx(ZEXT416((uint)local_ced8[0]),ZEXT416(local_cea8),auVar29);
        uVar14 = uVar15;
        if (uVar15 < 0x300) {
          local_e8 = uVar15 + 1;
          uVar3 = local_cee0 >> 8;
          local_cee0 = uVar3 << 8;
          auVar28 = vinsertps_avx(auVar46._0_16_,auVar36._0_16_,0x10);
          auVar28 = vinsertps_avx(auVar28,ZEXT416(local_cea4),0x20);
          auVar28 = vinsertps_avx(auVar28,auVar37._0_16_,0x30);
          *(undefined1 (*) [16])(local_ce70 + uVar15 * 0x1c + 8) = auVar28;
          auVar28 = vunpcklps_avx(ZEXT416((uint)fVar18),auVar29);
          *(longlong *)((longlong)local_ce60 + uVar15 * 0x1c + 8) = auVar28._0_8_;
          local_ce50[uVar15 * 7] = local_cee0;
          uVar14 = local_e8;
          if (local_e8 < 0x300) {
            uVar14 = uVar15 + 2;
            local_cee0 = uVar3 << 8;
            auVar28 = vinsertps_avx(auVar37._0_16_,ZEXT416((uint)fVar18),0x10);
            auVar28 = vinsertps_avx(auVar28,auVar29,0x20);
            auVar28 = vinsertps_avx(auVar28,auVar38._0_16_,0x30);
            *(undefined1 (*) [16])(local_ce70 + local_e8 * 0x1c + 8) = auVar28;
            auVar28 = vunpcklps_avx(auVar40._0_16_,ZEXT416(local_cea4));
            *(longlong *)((longlong)local_ce60 + local_e8 * 0x1c + 8) = auVar28._0_8_;
            local_ce50[local_e8 * 7] = local_cee0;
            local_e8 = uVar14;
          }
        }
        uVar15 = uVar14;
        if (local_e0 < 0x360) {
          local_ce50[local_e0 * 9 + 0x14fa] = auVar46._0_4_;
          local_ce50[local_e0 * 9 + 0x14fb] = auVar36._0_4_;
          *(undefined4 *)((longlong)local_7a48 + (local_e0 * 9 + -6) * 4) = 0x40200000;
          *(int *)((longlong)local_7a48 + (local_e0 * 9 + -5) * 4) = auVar38._0_4_;
          *(int *)((longlong)local_7a48 + (local_e0 * 9 + -4) * 4) = auVar40._0_4_;
          *(undefined4 *)((longlong)local_7a48 + (local_e0 * 9 + -3) * 4) = 0x40200000;
          *(int *)((longlong)local_7a48 + (local_e0 * 9 + -2) * 4) = auVar37._0_4_;
          *(float *)((longlong)local_7a48 + (local_e0 * 9 + -1) * 4) = fVar18;
          *(int *)((longlong)local_7a48 + local_e0 * 0x24) = auVar29._0_4_;
          uVar15 = local_e8;
          local_e0 = local_e0 + 1;
        }
        fVar18 = *pfVar1;
        uVar16 = uVar16 + 1;
        auVar37 = ZEXT464(0x40c90fdb);
      } while ((int)uVar16 < (int)fVar18);
    }
  }
  else if (bVar8 == 1) {
    auVar46 = ZEXT464(0x3fcccccd);
    auVar34 = ZEXT464(0x41180000);
    FUN_1802c5040(&local_cef8,auVar34._0_8_,auVar46._0_8_,0);
    auVar38 = ZEXT464(0x3ee66666);
    FUN_1802c5040(&local_cef8,0x40f66666,auVar38._0_8_,0);
    auVar37 = ZEXT464(0x40400000);
    auVar33 = ZEXT464(0x40933333);
    FUN_1802c5040(&local_cef8,auVar33._0_8_,auVar37._0_8_,0);
    auVar36 = ZEXT464(0x408ccccd);
    auVar40 = ZEXT464(0x40600000);
    FUN_1802c5040(&local_cef8,auVar40._0_8_,auVar36._0_8_,0);
    local_cf00 = 1;
    local_cf08 = auVar46._0_4_;
    FUN_1802c51e0(&local_ced0,0x40f66666,auVar38._0_8_,auVar34._0_8_);
    local_cf00 = 1;
    local_cf08 = auVar37._0_4_;
    FUN_1802c51e0(&local_ced0,auVar34._0_8_,auVar46._0_8_,auVar33._0_8_);
    local_cf00 = 1;
    local_cf08 = auVar36._0_4_;
    FUN_1802c51e0(&local_ced0,auVar33._0_8_,auVar37._0_8_,auVar40._0_8_);
    fVar19 = 3.1415927;
    fVar31 = 10.0;
    fVar18 = 2.4;
    iVar17 = 0;
    do {
      auVar34 = ZEXT464((uint)(((float)iVar17 * fVar19) / fVar31));
      iVar17 = iVar17 + 1;
      fVar30 = ((float)iVar17 * fVar19) / fVar31;
      auVar33 = ZEXT464((uint)fVar30);
      fVar30 = (float)FUN_180638e00(fVar30);
      fVar30 = fVar30 * fVar18 + auVar36._0_4_;
      fVar20 = (float)FUN_180637540(auVar33._0_8_);
      auVar37 = ZEXT464((uint)(fVar20 * auVar40._0_4_));
      fVar20 = (float)FUN_180638e00(auVar34._0_8_);
      auVar33 = ZEXT464((uint)(fVar20 * fVar18 + auVar36._0_4_));
      fVar20 = (float)FUN_180637540(auVar34._0_8_,fVar20 * fVar18);
      local_cf00 = 0;
      local_cf08 = fVar30;
      FUN_1802c51e0(&local_ced0,fVar20 * auVar40._0_4_,auVar33._0_8_,auVar37._0_8_);
    } while (iVar17 < 5);
    uVar15 = local_e8;
    if (*(char *)(param_3 + 3) != '\0') {
      iVar17 = 0;
      do {
        local_ced8[0] = (float)iVar17 * 6.2831855 * 0.125;
        iVar13 = 0;
        uVar14 = uVar15;
        do {
          auVar33 = ZEXT464((uint)(local_ced8[0] + *param_3));
          auVar37 = ZEXT464((uint)((float)iVar13 * fVar19 * 0.0625));
          iVar13 = iVar13 + 1;
          fVar18 = (float)iVar13 * fVar19 * 0.0625;
          auVar34 = ZEXT464((uint)fVar18);
          fVar18 = (float)FUN_180637540(fVar18);
          fVar18 = fVar18 * auVar40._0_4_;
          fVar30 = (float)FUN_180637540(auVar33._0_8_);
          fVar20 = (float)FUN_180638e00(auVar33._0_8_);
          fVar31 = (float)FUN_180637540(auVar37._0_8_);
          fVar31 = fVar31 * auVar40._0_4_;
          uVar15 = uVar14;
          if (uVar14 < 0x300) {
            auVar38 = ZEXT464((uint)(fVar31 * fVar30));
            auVar46 = ZEXT464((uint)(fVar31 * fVar20));
            fVar31 = (float)FUN_180638e00(auVar37._0_8_);
            auVar33 = ZEXT464((uint)(fVar31 * 2.4 + 4.4));
            auVar37 = ZEXT464((uint)(fVar30 * fVar18));
            auVar36 = ZEXT464((uint)(fVar20 * fVar18));
            fVar18 = (float)FUN_180638e00(auVar34._0_8_);
            uVar15 = uVar14 + 1;
            local_cee0 = CONCAT31(local_cee0._1_3_,1);
            auVar29 = vinsertps_avx(auVar38._0_16_,auVar46._0_16_,0x10);
            auVar29 = vinsertps_avx(auVar29,auVar33._0_16_,0x20);
            auVar29 = vinsertps_avx(auVar29,auVar37._0_16_,0x30);
            *(undefined1 (*) [16])(local_ce70 + uVar14 * 0x1c + 8) = auVar29;
            auVar29 = vunpcklps_avx(auVar36._0_16_,ZEXT416((uint)(fVar18 * 2.4 + 4.4)));
            *(longlong *)((longlong)local_ce60 + uVar14 * 0x1c + 8) = auVar29._0_8_;
            local_ce50[uVar14 * 7] = local_cee0;
            local_e8 = uVar15;
          }
          uVar14 = uVar15;
        } while (iVar13 < 8);
        iVar17 = iVar17 + 1;
      } while (iVar17 < 8);
      auVar38 = ZEXT464(0x3ee66666);
    }
    if (*(char *)((longlong)param_3 + 0xd) != '\0') {
      uVar16 = 0x80000000;
      uVar32 = 0;
      uVar39 = 0;
      uVar41 = 0;
      fVar18 = 5.2;
      fVar31 = 8.8;
      do {
        fVar19 = (float)iVar12 * 6.2831855 * 0.125 + *param_3;
        auVar33 = ZEXT464((uint)fVar19);
        fVar19 = (float)FUN_180637540(fVar19);
        fVar30 = (float)FUN_180638e00(auVar33._0_8_);
        uVar14 = uVar15;
        if (uVar15 < 0x300) {
          uVar14 = uVar15 + 1;
          local_cee0 = CONCAT31(local_cee0._1_3_,2);
          auVar29 = vinsertps_avx(ZEXT416((uint)(fVar19 * fVar18)),ZEXT416((uint)(fVar30 * fVar18)),
                                  0x10);
          auVar29 = vinsertps_avx(auVar29,auVar38._0_16_,0x20);
          auVar28._0_4_ = (uint)param_3[4] ^ uVar16;
          auVar28._4_4_ = uVar32;
          auVar28._8_4_ = uVar39;
          auVar28._12_4_ = uVar41;
          auVar29 = vinsertps_avx(auVar29,ZEXT416((uint)(fVar19 * fVar31)),0x30);
          *(undefined1 (*) [16])(local_ce70 + uVar15 * 0x1c + 8) = auVar29;
          auVar29 = vunpcklps_avx(ZEXT416((uint)(fVar30 * fVar31)),auVar28);
          *(longlong *)((longlong)local_ce60 + uVar15 * 0x1c + 8) = auVar29._0_8_;
          local_ce50[uVar15 * 7] = local_cee0;
          local_e8 = uVar14;
        }
        iVar12 = iVar12 + 1;
        uVar15 = uVar14;
      } while (iVar12 < 8);
    }
  }
  else if (bVar8 == 2) {
    auVar38 = ZEXT464(0xbfc00000);
    FUN_1802c5040(&local_cef8,0x40f00000,auVar38._0_8_,0);
    auVar46 = ZEXT464(0x40a80000);
    uVar32 = 0;
    FUN_1802c5040(&local_cef8,auVar46._0_8_,0,0);
    auVar36 = ZEXT464(0x40933333);
    auVar33 = ZEXT464(0x40900000);
    FUN_1802c5040(&local_cef8,auVar33._0_8_,auVar36._0_8_,0);
    auVar34 = ZEXT464(0x40accccd);
    auVar37 = ZEXT464(0x40600000);
    FUN_1802c5040(&local_cef8,auVar37._0_8_,auVar34._0_8_,0);
    local_cf00 = 1;
    local_cf08 = (float)uVar32;
    FUN_1802c51e0(&local_ced0,0x40f00000,auVar38._0_8_,auVar46._0_8_);
    local_cf00 = 1;
    local_cf08 = auVar36._0_4_;
    FUN_1802c51e0(&local_ced0,auVar46._0_8_,0,auVar33._0_8_);
    local_cf00 = 1;
    local_cf08 = auVar34._0_4_;
    FUN_1802c51e0(&local_ced0,auVar33._0_8_,auVar36._0_8_,auVar37._0_8_);
    local_cf00 = 1;
    local_cf08 = 5.7;
    FUN_1802c51e0(&local_ced0,auVar37._0_8_,auVar34._0_8_,0);
    if (*(char *)(param_3 + 3) != '\0') {
      fVar18 = 0.25;
      fVar31 = 0.75;
      iVar12 = 1;
      iVar17 = 1;
      do {
        FUN_1802c5040(&local_cef8,auVar46._0_4_ - (float)iVar17 * fVar18 * fVar31,
                      (float)iVar17 * fVar18 * auVar36._0_4_,1);
        iVar17 = iVar17 + 1;
      } while (iVar17 < 4);
      fVar18 = 3.0;
      fVar31 = 2.25;
      do {
        FUN_1802c5040(&local_cef8,((float)iVar12 / fVar18) * fVar31 + auVar46._0_4_,
                      ((float)iVar12 / fVar18) * auVar38._0_4_,1);
        iVar12 = iVar12 + 1;
      } while (iVar12 < 3);
    }
  }
  else if (bVar8 == 3) {
    auVar34 = ZEXT864(0);
    FUN_1802c5040(&local_cef8,0x40d00000,0,0);
    FUN_1802c5040(&local_cef8,0x40b33333,auVar33._0_8_,0);
    local_cf00 = 0;
    local_cf08 = auVar33._0_4_;
    FUN_1802c51e0(&local_ced0,0x40d00000,0,0x40b33333);
    fVar18 = *pfVar1;
    uVar16 = 0;
    if (0 < (int)fVar18) {
      uVar15 = local_e8;
      do {
        fVar31 = ((float)(int)uVar16 * auVar37._0_4_) / (float)(int)fVar18;
        fVar18 = fVar31 + *param_3;
        auVar33 = ZEXT464((uint)(fVar18 - 0.28));
        auVar37 = ZEXT464((uint)fVar18);
        auVar46 = ZEXT464((uint)fVar31);
        fVar31 = 5.9;
        fVar19 = 0.28;
        fVar30 = 7.5;
        auVar34 = ZEXT1664(auVar34._0_16_);
        fVar18 = (float)FUN_180637540();
        auVar38 = ZEXT464((uint)(fVar18 * fVar31));
        fVar18 = (float)FUN_180638e00(auVar33._0_8_);
        fVar18 = fVar18 * fVar31;
        auVar36 = ZEXT464((uint)(auVar37._0_4_ + fVar19));
        local_ce6c = fVar18;
        fVar31 = (float)FUN_180637540(auVar37._0_8_);
        fVar19 = (float)FUN_180638e00(auVar37._0_8_);
        auVar40 = ZEXT464((uint)(fVar31 * fVar30));
        auVar43 = ZEXT464((uint)(fVar19 * fVar30));
        auVar33._0_8_ = FUN_180637540(auVar46._0_8_);
        auVar33._8_56_ = extraout_var;
        auVar37 = ZEXT464((uint)(fVar31 * 7.1));
        auVar28 = vmaxss_avx(auVar33._0_16_,auVar34._0_16_);
        auVar29 = vpcmpeqd_avx(ZEXT416(uVar16 & 1),SUB6416(ZEXT464(0),0));
        auVar29 = vblendvps_avx(SUB6416(ZEXT464(0x3f4ccccd),0),auVar34._0_16_,auVar29);
        auVar46 = ZEXT464((uint)(fVar31 * 5.9));
        auVar34 = ZEXT464((uint)((auVar28._0_4_ * 4.4 + 4.2) - auVar29._0_4_));
        local_ced8[0] = fVar19 * 5.9;
        local_ce98 = 0x40066666;
        auVar33 = ZEXT464((uint)(fVar19 * 7.1));
        local_cea0 = auVar38._0_4_;
        fStack_ce9c = fVar18;
        local_ce88 = (float)FUN_180637540(auVar36._0_8_);
        local_ce88 = local_ce88 * 5.9;
        fStack_ce84 = (float)FUN_180638e00(auVar36._0_8_);
        puVar5 = puStack_cee8;
        puVar4 = uStack_cef0;
        fStack_ce84 = fStack_ce84 * 5.9;
        local_ce7c = fVar31 * 4.8;
        fStack_ce78 = fVar19 * 4.8;
        local_ce80 = 0x40066666;
        local_ce74 = 0x40066666;
        auVar29 = vunpcklps_avx(auVar37._0_16_,auVar33._0_16_);
        pfVar11 = auVar29._0_8_;
        auVar27 = auVar40._0_16_;
        auVar28 = auVar34._0_16_;
        auVar42 = auVar43._0_16_;
        auVar45 = auVar46._0_16_;
        uStack_cef0._4_4_ = auVar29._0_4_;
        puStack_cee8._0_4_ = auVar29._4_4_;
        uVar14 = uVar15;
        if (uVar15 < 0x300) {
          auVar29._8_4_ = (undefined4)uStack_cef0;
          auVar29._0_8_ = local_cef8;
          auVar29._12_4_ = uStack_cef0._4_4_;
          auVar21._4_12_ = auVar29._4_12_;
          auVar21._0_4_ = auVar38._0_4_;
          uVar14 = uVar15 + 1;
          uVar3 = local_cee0 >> 8;
          local_cee0 = uVar3 << 8;
          auVar29 = vinsertps_avx(auVar21,ZEXT416((uint)local_ce6c),0x10);
          auVar21 = SUB6416(ZEXT464(0x40066666),0);
          auVar29 = vinsertps_avx(auVar29,auVar21,0x20);
          *(undefined1 (*) [16])(local_ce70 + uVar15 * 0x1c + 8) = auVar29;
          puVar5 = (undefined1 *)CONCAT44(0x40066666,puStack_cee8._0_4_);
          local_cef8 = auVar29._0_8_;
          puVar4 = auVar29._8_8_;
          *(ulonglong *)((longlong)local_ce60 + uVar15 * 0x1c + 8) =
               CONCAT44(0x40066666,puStack_cee8._0_4_);
          local_ce50[uVar15 * 7] = local_cee0;
          local_e8 = uVar14;
          if (uVar14 < 0x300) {
            local_e8 = uVar15 + 2;
            local_cee0 = uVar3 << 8;
            auVar29 = vinsertps_avx(auVar38._0_16_,ZEXT416((uint)local_ce6c),0x10);
            auVar29 = vinsertps_avx(auVar29,auVar21,0x20);
            auVar29 = vinsertps_avx(auVar29,auVar27,0x30);
            *(undefined1 (*) [16])(local_ce70 + uVar14 * 0x1c + 8) = auVar29;
            local_cef8 = auVar29._0_8_;
            puVar4 = auVar29._8_8_;
            auVar29 = vunpcklps_avx(auVar42,auVar28);
            *(longlong *)((longlong)local_ce60 + uVar14 * 0x1c + 8) = auVar29._0_8_;
            local_ce50[uVar14 * 7] = local_cee0;
            uVar14 = local_e8;
            puVar5 = (undefined1 *)CONCAT44(0x40066666,puStack_cee8._0_4_);
            if (local_e8 < 0x300) {
              local_cee0 = uVar3 << 8;
              auVar29 = vinsertps_avx(auVar38._0_16_,ZEXT416((uint)local_ce6c),0x10);
              auVar29 = vinsertps_avx(auVar29,auVar21,0x20);
              auVar29 = vinsertps_avx(auVar29,auVar45,0x30);
              *(undefined1 (*) [16])(local_ce70 + local_e8 * 0x1c + 8) = auVar29;
              local_cef8 = auVar29._0_8_;
              puVar4 = auVar29._8_8_;
              auVar29 = vunpcklps_avx(ZEXT416((uint)local_ced8[0]),SUB6416(ZEXT464(0x3f19999a),0));
              *(longlong *)((longlong)local_ce60 + local_e8 * 0x1c + 8) = auVar29._0_8_;
              local_ce50[local_e8 * 7] = local_cee0;
              uVar14 = uVar15 + 3;
              local_e8 = uVar15 + 3;
              puVar5 = (undefined1 *)CONCAT44(0x40066666,puStack_cee8._0_4_);
            }
          }
        }
        auVar29 = ZEXT416((uint)local_ced8[0]);
        uVar39 = auVar40._0_4_;
        uVar32 = auVar34._0_4_;
        uVar41 = auVar43._0_4_;
        if (local_e0 < 0x360) {
          local_ced0 = (float *)CONCAT44(local_ce6c,auVar38._0_4_);
          puStack_cec8 = (undefined1 *)CONCAT44(uStack_cef0._4_4_,0x40066666);
          puStack_cec0 = (undefined8 *)CONCAT44(0x40066666,puStack_cee8._0_4_);
          uStack_ceb8 = (float *)CONCAT44(uVar41,uVar39);
          *(float **)(local_ce50 + local_e0 * 9 + 0x14fa) = local_ced0;
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -6) * 4) =
               CONCAT44(uStack_cef0._4_4_,0x40066666);
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -4) * 4) =
               CONCAT44(0x40066666,puStack_cee8._0_4_);
          *(float **)((longlong)local_7a48 + (local_e0 * 9 + -2) * 4) = uStack_ceb8;
          *(undefined4 *)((longlong)local_7a48 + local_e0 * 0x24) = uVar32;
          uVar14 = local_e8;
          local_e0 = local_e0 + 1;
        }
        pfVar7 = (float *)CONCAT44(fStack_ce9c,local_cea0);
        uVar44 = auVar46._0_4_;
        if (local_e0 < 0x360) {
          puStack_cec8 = (undefined1 *)CONCAT44(uVar44,local_ce98);
          puStack_cec0 = (undefined8 *)CONCAT44(0x3f19999a,local_ced8[0]);
          *(float **)(local_ce50 + local_e0 * 9 + 0x14fa) = pfVar7;
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -6) * 4) =
               CONCAT44(uVar44,local_ce98);
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -4) * 4) =
               CONCAT44(0x3f19999a,local_ced8[0]);
          *(float **)((longlong)local_7a48 + (local_e0 * 9 + -2) * 4) = pfVar11;
          *(undefined4 *)((longlong)local_7a48 + local_e0 * 0x24) = 0x40066666;
          uVar14 = local_e8;
          local_ced0 = pfVar7;
          uStack_ceb8 = pfVar11;
          local_e0 = local_e0 + 1;
        }
        pfVar2 = (float *)CONCAT44(fStack_ce84,local_ce88);
        auVar21 = SUB6416(ZEXT464(0x3f19999a),0);
        uVar15 = uVar14;
        if (uVar14 < 0x300) {
          lVar10 = uVar14 * 0x1c;
          uVar15 = uVar14 + 1;
          *(float **)(local_ce70 + lVar10 + 8) = pfVar11;
          *(ulonglong *)((longlong)local_ce60 + lVar10) = CONCAT44(local_ce88,0x40066666);
          puVar4 = (undefined8 *)CONCAT44(local_ce88,0x40066666);
          *(ulonglong *)((longlong)local_ce60 + lVar10 + 8) = CONCAT44(0x40066666,fStack_ce84);
          uVar3 = local_cee0 >> 8;
          local_cee0 = uVar3 << 8;
          local_ce50[uVar14 * 7] = local_cee0;
          local_e8 = uVar15;
          local_cef8 = pfVar11;
          puVar5 = (undefined1 *)CONCAT44(0x40066666,fStack_ce84);
          if (uVar15 < 0x300) {
            local_e8 = uVar14 + 2;
            local_cee0 = uVar3 << 8;
            auVar22._12_4_ = local_ce88;
            auVar22._8_4_ = 0x40066666;
            auVar22._0_8_ = pfVar11;
            auVar22 = vinsertps_avx(auVar22,auVar27,0x30);
            *(undefined1 (*) [16])(local_ce70 + uVar15 * 0x1c + 8) = auVar22;
            local_cef8 = auVar22._0_8_;
            uStack_cef0._4_4_ = auVar22._12_4_;
            puVar4 = auVar22._8_8_;
            auVar22 = vunpcklps_avx(auVar42,auVar28);
            *(longlong *)((longlong)local_ce60 + uVar15 * 0x1c + 8) = auVar22._0_8_;
            local_ce50[uVar15 * 7] = local_cee0;
            uVar15 = local_e8;
            puVar5 = (undefined1 *)CONCAT44(0x40066666,fStack_ce84);
            if (local_e8 < 0x300) {
              uVar15 = uVar14 + 3;
              local_cee0 = uVar3 << 8;
              auVar23._12_4_ = uStack_cef0._4_4_;
              auVar23._8_4_ = 0x40066666;
              auVar23._0_8_ = pfVar11;
              auVar22 = vinsertps_avx(auVar23,auVar45,0x30);
              *(undefined1 (*) [16])(local_ce70 + local_e8 * 0x1c + 8) = auVar22;
              local_cef8 = auVar22._0_8_;
              puVar4 = auVar22._8_8_;
              auVar22 = vunpcklps_avx(auVar29,auVar21);
              *(longlong *)((longlong)local_ce60 + local_e8 * 0x1c + 8) = auVar22._0_8_;
              local_ce50[local_e8 * 7] = local_cee0;
              local_e8 = uVar15;
              puVar5 = (undefined1 *)CONCAT44(0x40066666,fStack_ce84);
            }
          }
        }
        if (local_e0 < 0x360) {
          puStack_cec0 = (undefined8 *)CONCAT44(0x40066666,fStack_ce84);
          uStack_ceb8 = (float *)CONCAT44(uVar41,uVar39);
          puStack_cec8 = (undefined1 *)CONCAT44(local_ce88,0x40066666);
          *(float **)(local_ce50 + local_e0 * 9 + 0x14fa) = pfVar11;
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -6) * 4) =
               CONCAT44(local_ce88,0x40066666);
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -4) * 4) =
               CONCAT44(0x40066666,fStack_ce84);
          *(float **)((longlong)local_7a48 + (local_e0 * 9 + -2) * 4) = uStack_ceb8;
          *(undefined4 *)((longlong)local_7a48 + local_e0 * 0x24) = uVar32;
          uVar15 = local_e8;
          local_ced0 = pfVar11;
          local_e0 = local_e0 + 1;
        }
        if (local_e0 < 0x360) {
          puStack_cec8 = (undefined1 *)CONCAT44(uVar44,0x40066666);
          puStack_cec0 = (undefined8 *)CONCAT44(0x3f19999a,local_ced8[0]);
          *(float **)(local_ce50 + local_e0 * 9 + 0x14fa) = pfVar11;
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -6) * 4) =
               CONCAT44(uVar44,0x40066666);
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -4) * 4) =
               CONCAT44(0x3f19999a,local_ced8[0]);
          *(float **)((longlong)local_7a48 + (local_e0 * 9 + -2) * 4) = pfVar2;
          *(undefined4 *)((longlong)local_7a48 + local_e0 * 0x24) = 0x40066666;
          uVar15 = local_e8;
          local_ced0 = pfVar11;
          uStack_ceb8 = pfVar2;
          local_e0 = local_e0 + 1;
        }
        pfVar11 = (float *)CONCAT44(fStack_ce78,local_ce7c);
        uVar14 = uVar15;
        if (uVar15 < 0x300) {
          lVar10 = uVar15 * 0x1c;
          uVar14 = uVar15 + 1;
          *(float **)(local_ce70 + lVar10 + 8) = pfVar2;
          *(ulonglong *)((longlong)local_ce60 + lVar10) = CONCAT44(local_ce7c,0x40066666);
          local_cef8 = (float *)CONCAT44(fStack_ce84,local_ce88);
          puVar4 = (undefined8 *)CONCAT44(local_ce7c,0x40066666);
          *(ulonglong *)((longlong)local_ce60 + lVar10 + 8) = CONCAT44(0x40066666,fStack_ce78);
          uVar3 = local_cee0 >> 8;
          local_cee0 = uVar3 << 8;
          local_ce50[uVar15 * 7] = local_cee0;
          local_e8 = uVar14;
          puVar5 = (undefined1 *)CONCAT44(0x40066666,fStack_ce78);
          if (uVar14 < 0x300) {
            local_e8 = uVar15 + 2;
            auVar24._12_4_ = local_ce7c;
            auVar24._8_4_ = 0x40066666;
            auVar24._0_8_ = pfVar2;
            auVar22 = vinsertps_avx(auVar24,auVar27,0x30);
            *(undefined1 (*) [16])(local_ce70 + uVar14 * 0x1c + 8) = auVar22;
            local_cef8 = auVar22._0_8_;
            uStack_cef0._4_4_ = auVar22._12_4_;
            puVar4 = auVar22._8_8_;
            auVar22 = vunpcklps_avx(auVar42,auVar28);
            *(longlong *)((longlong)local_ce60 + uVar14 * 0x1c + 8) = auVar22._0_8_;
            local_cee0 = uVar3 << 8;
            local_ce50[uVar14 * 7] = local_cee0;
            uVar14 = local_e8;
            puVar5 = (undefined1 *)CONCAT44(0x40066666,fStack_ce78);
            if (local_e8 < 0x300) {
              uVar14 = uVar15 + 3;
              auVar25._12_4_ = uStack_cef0._4_4_;
              auVar25._8_4_ = 0x40066666;
              auVar25._0_8_ = pfVar2;
              auVar22 = vinsertps_avx(auVar25,auVar45,0x30);
              *(undefined1 (*) [16])(local_ce70 + local_e8 * 0x1c + 8) = auVar22;
              local_cef8 = auVar22._0_8_;
              puVar4 = auVar22._8_8_;
              auVar22 = vunpcklps_avx(auVar29,auVar21);
              *(longlong *)((longlong)local_ce60 + local_e8 * 0x1c + 8) = auVar22._0_8_;
              local_cee0 = uVar3 << 8;
              local_ce50[local_e8 * 7] = local_cee0;
              local_e8 = uVar14;
              puVar5 = (undefined1 *)CONCAT44(0x40066666,fStack_ce78);
            }
          }
        }
        if (local_e0 < 0x360) {
          puStack_cec8 = (undefined1 *)CONCAT44(local_ce7c,0x40066666);
          uStack_ceb8 = (float *)CONCAT44(uVar41,uVar39);
          puStack_cec0 = (undefined8 *)CONCAT44(0x40066666,fStack_ce78);
          *(float **)(local_ce50 + local_e0 * 9 + 0x14fa) = pfVar2;
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -6) * 4) =
               CONCAT44(local_ce7c,0x40066666);
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -4) * 4) =
               CONCAT44(0x40066666,fStack_ce78);
          *(float **)((longlong)local_7a48 + (local_e0 * 9 + -2) * 4) = uStack_ceb8;
          *(undefined4 *)((longlong)local_7a48 + local_e0 * 0x24) = uVar32;
          uVar14 = local_e8;
          local_ced0 = pfVar2;
          local_e0 = local_e0 + 1;
        }
        if (local_e0 < 0x360) {
          puStack_cec8 = (undefined1 *)CONCAT44(uVar44,0x40066666);
          puStack_cec0 = (undefined8 *)CONCAT44(0x3f19999a,local_ced8[0]);
          *(float **)(local_ce50 + local_e0 * 9 + 0x14fa) = pfVar2;
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -6) * 4) =
               CONCAT44(uVar44,0x40066666);
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -4) * 4) =
               CONCAT44(0x3f19999a,local_ced8[0]);
          *(float **)((longlong)local_7a48 + (local_e0 * 9 + -2) * 4) = pfVar11;
          *(undefined4 *)((longlong)local_7a48 + local_e0 * 0x24) = 0x40066666;
          uVar14 = local_e8;
          local_ced0 = pfVar2;
          uStack_ceb8 = pfVar11;
          local_e0 = local_e0 + 1;
        }
        uVar15 = uVar14;
        puStack_cee8 = puVar5;
        if (uVar14 < 0x300) {
          lVar10 = uVar14 * 0x1c;
          uVar15 = uVar14 + 1;
          *(float **)(local_ce70 + lVar10 + 8) = pfVar11;
          *(ulonglong *)((longlong)local_ce60 + lVar10) = CONCAT44(local_cea0,0x40066666);
          *(ulonglong *)((longlong)local_ce60 + lVar10 + 8) = CONCAT44(local_ce98,fStack_ce9c);
          uVar3 = local_cee0 >> 8;
          local_cee0 = uVar3 << 8;
          local_ce50[uVar14 * 7] = local_cee0;
          local_e8 = uVar15;
          local_cef8 = (float *)CONCAT44(fStack_ce78,local_ce7c);
          puVar4 = (undefined8 *)CONCAT44(local_cea0,0x40066666);
          puStack_cee8 = (undefined1 *)CONCAT44(local_ce98,fStack_ce9c);
          if (uVar15 < 0x300) {
            local_e8 = uVar14 + 2;
            auVar26._12_4_ = local_cea0;
            auVar26._8_4_ = 0x40066666;
            auVar26._0_8_ = pfVar11;
            auVar27 = vinsertps_avx(auVar26,auVar27,0x30);
            *(undefined1 (*) [16])(local_ce70 + uVar15 * 0x1c + 8) = auVar27;
            local_cef8 = auVar27._0_8_;
            uStack_cef0._4_4_ = auVar27._12_4_;
            auVar28 = vunpcklps_avx(auVar42,auVar28);
            *(longlong *)((longlong)local_ce60 + uVar15 * 0x1c + 8) = auVar28._0_8_;
            local_cee0 = uVar3 << 8;
            local_ce50[uVar15 * 7] = local_cee0;
            uVar15 = local_e8;
            puVar4 = auVar27._8_8_;
            puStack_cee8 = (undefined1 *)CONCAT44(local_ce98,fStack_ce9c);
            if (local_e8 < 0x300) {
              uVar15 = uVar14 + 3;
              auVar27._12_4_ = uStack_cef0._4_4_;
              auVar27._8_4_ = 0x40066666;
              auVar27._0_8_ = pfVar11;
              auVar28 = vinsertps_avx(auVar27,auVar45,0x30);
              *(undefined1 (*) [16])(local_ce70 + local_e8 * 0x1c + 8) = auVar28;
              local_cef8 = auVar28._0_8_;
              auVar29 = vunpcklps_avx(auVar29,auVar21);
              *(longlong *)((longlong)local_ce60 + local_e8 * 0x1c + 8) = auVar29._0_8_;
              local_cee0 = uVar3 << 8;
              local_ce50[local_e8 * 7] = local_cee0;
              local_e8 = uVar15;
              puVar4 = auVar28._8_8_;
              puStack_cee8 = (undefined1 *)CONCAT44(local_ce98,fStack_ce9c);
            }
          }
        }
        uStack_cef0 = puVar4;
        if (local_e0 < 0x360) {
          uStack_ceb8 = (float *)CONCAT44(uVar41,uVar39);
          puStack_cec8 = (undefined1 *)CONCAT44(local_cea0,0x40066666);
          puStack_cec0 = (undefined8 *)CONCAT44(local_ce98,fStack_ce9c);
          *(float **)(local_ce50 + local_e0 * 9 + 0x14fa) = pfVar11;
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -6) * 4) =
               CONCAT44(local_cea0,0x40066666);
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -4) * 4) =
               CONCAT44(local_ce98,fStack_ce9c);
          *(float **)((longlong)local_7a48 + (local_e0 * 9 + -2) * 4) = uStack_ceb8;
          *(undefined4 *)((longlong)local_7a48 + local_e0 * 0x24) = uVar32;
          uVar15 = local_e8;
          local_ced0 = pfVar11;
          local_e0 = local_e0 + 1;
        }
        if (local_e0 < 0x360) {
          puStack_cec8 = (undefined1 *)CONCAT44(uVar44,0x40066666);
          puStack_cec0 = (undefined8 *)CONCAT44(0x3f19999a,local_ced8[0]);
          *(float **)(local_ce50 + local_e0 * 9 + 0x14fa) = pfVar11;
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -6) * 4) =
               CONCAT44(uVar44,0x40066666);
          *(ulonglong *)((longlong)local_7a48 + (local_e0 * 9 + -4) * 4) =
               CONCAT44(0x3f19999a,local_ced8[0]);
          *(float **)((longlong)local_7a48 + (local_e0 * 9 + -2) * 4) = pfVar7;
          *(undefined4 *)((longlong)local_7a48 + local_e0 * 0x24) = local_ce98;
          uVar15 = local_e8;
          local_ced0 = pfVar11;
          uStack_ceb8 = pfVar7;
          local_e0 = local_e0 + 1;
        }
        fVar18 = *pfVar1;
        uVar16 = uVar16 + 1;
        auVar37 = ZEXT464(0x40c90fdb);
        auVar34 = ZEXT864(0);
      } while ((int)uVar16 < (int)fVar18);
    }
  }
  FUN_18063aed0(param_1,&local_ce68,0xcd90);
}



