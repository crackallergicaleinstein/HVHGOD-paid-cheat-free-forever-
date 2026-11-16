// FUN_180246860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180246860 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180246860(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  uint uVar5;
  undefined3 uVar6;
  float fVar7;
  short sVar8;
  int iVar9;
  undefined1 (*pauVar10) [32];
  undefined8 *puVar11;
  float *pfVar12;
  ULONGLONG UVar13;
  undefined8 *puVar14;
  float *pfVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  ulonglong uVar19;
  uint uVar20;
  int iVar21;
  longlong lVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  char cVar33;
  undefined8 uVar34;
  undefined1 auVar32 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auStack_c28 [32];
  undefined8 local_c08;
  char *local_c00;
  double local_bf8;
  double local_bf0;
  double local_be8;
  double local_be0;
  double local_bd8;
  double local_bd0;
  undefined4 local_bc8;
  double local_bc0;
  float local_bb8;
  float local_bb4;
  float local_bb0 [3];
  float local_ba4;
  float local_ba0;
  float local_b9c;
  undefined4 local_b98;
  float local_b94;
  undefined1 local_b90 [32];
  float local_b70;
  float local_b6c;
  float local_b68;
  char local_b64;
  undefined8 local_b60;
  undefined8 local_b58;
  undefined8 uStack_b50;
  undefined8 uStack_b48;
  undefined8 uStack_b40;
  undefined8 local_b38;
  undefined8 uStack_b30;
  undefined8 uStack_b28;
  undefined8 uStack_b20;
  undefined8 local_b18;
  undefined8 uStack_b10;
  undefined8 uStack_b08;
  undefined8 uStack_b00;
  ulonglong local_af8;
  undefined4 local_af0;
  undefined1 local_ae8 [8];
  undefined8 uStack_ae0;
  undefined8 local_ad8;
  undefined1 local_ab8 [32];
  undefined8 local_a98;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined8 uStack_a68;
  undefined8 uStack_a60;
  undefined8 local_a58;
  undefined8 uStack_a50;
  undefined8 uStack_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 local_a18;
  undefined8 local_a08;
  undefined4 local_888;
  undefined4 local_884;
  undefined8 local_878;
  undefined4 local_6f8;
  undefined4 local_6f4;
  char local_6e8 [1536];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_c28;
  if (((DAT_180cad2e0 != 1) || (DAT_180cad6b8 == '\0')) || (DAT_180cada90 == '\0'))
  goto LAB_1802474f6;
  if ((DAT_180cad880 == '\0') && (DAT_180cad8e8 == '\0')) {
    uVar25 = 0;
    local_b98 = 0;
    if (*(char *)(param_1 + 0x110) == '\0') {
    }
  }
  else {
    uVar25 = 1;
    local_b98 = 1;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_b90._8_8_ = uRam0000000180bb8898;
  local_b90._0_8_ = _DAT_180bb8890;
  local_b90._16_8_ = uRam0000000180bb88a0;
  local_b90._24_8_ = uRam0000000180bb88a8;
  uVar34 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  cVar33 = (char)uVar34;
  local_b60 = local_b90._8_8_;
  FUN_18024b690(param_1,&local_b70,local_b90._8_8_);
  iVar9 = FUN_1805f68d0(&DAT_180b8e260);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e2ac == 0x7fffffff) {
    DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_ab8._8_8_ = uRam0000000180b8e228;
  local_ab8._0_8_ = _DAT_180b8e220;
  local_ab8._16_8_ = uRam0000000180b8e230;
  local_ab8._24_8_ = uRam0000000180b8e238;
  local_b90._8_8_ = uRam0000000180b8e248;
  local_b90._0_8_ = _DAT_180b8e240;
  local_b90._16_8_ = uRam0000000180b8e250;
  local_b90._24_8_ = uRam0000000180b8e258;
  FUN_1805f68fc(&DAT_180b8e260);
  auVar30 = ZEXT1664(local_b90._16_16_);
  sVar8 = thunk_FUN_180624430();
  fVar18 = 180.0;
  fVar24 = 3.1415927;
  if (sVar8 < 1) {
    auVar26 = vshufps_avx(local_b90._16_16_,local_b90._16_16_,0x55);
    auVar29 = ZEXT1664(auVar26);
    auVar30 = ZEXT1664(auVar30._0_16_);
    fVar18 = 180.0;
    fVar24 = 3.1415927;
    sVar8 = thunk_FUN_180624430();
    if (0 < sVar8) goto LAB_180246a4e;
    vshufps_avx(local_b90._16_16_,local_b90._16_16_,0xaa);
    auVar29 = ZEXT1664(auVar29._0_16_);
    auVar30 = ZEXT1664(auVar30._0_16_);
    sVar8 = thunk_FUN_180624430();
    if ((0 < sVar8) || (fVar23 = (float)FUN_180636420(auVar30._0_8_,auVar29._0_8_), fVar23 < 1e-06))
    goto LAB_180246a4e;
    fVar23 = (float)FUN_180636c80(auVar29._0_8_,auVar30._0_8_);
    local_bb0[2] = (fVar23 * fVar18) / fVar24;
    bVar4 = true;
  }
  else {
LAB_180246a4e:
    bVar4 = false;
  }
  local_ad8 = 0;
  local_af0 = 1.4013e-45;
  _local_ae8 = (undefined1  [16])0x0;
  auVar30 = ZEXT864(0);
  local_b9c = local_bb0[2];
  if (((DAT_180bbab78 != 0) &&
      ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,&local_af0,local_ae8),
      local_af0 == 0.0)) || ((float)uStack_ae0 <= auVar30._0_4_)) {
    iVar21 = 0;
    iVar9 = 0;
  }
  else {
    iVar9 = (int)uStack_ae0._4_4_;
    iVar21 = (int)(float)uStack_ae0;
  }
  if ((((cVar33 != '\0') && (local_b64 != '\0')) &&
      ((DAT_180b8e2b0 != '\0' && ((bVar4 && (0 < iVar21)))))) && (0 < iVar9)) {
    auVar29 = ZEXT464((uint)(local_b6c - local_bb0[2]));
    sVar8 = thunk_FUN_180624430(local_b6c - local_bb0[2]);
    auVar32 = ZEXT464(0x43b40000);
    if (sVar8 < 1) {
      fVar23 = (float)FUN_180615070(auVar29._0_8_,auVar32._0_8_);
    }
    else {
      fVar23 = 0.0;
    }
    auVar29 = ZEXT464((uint)(-90.0 - fVar23));
    sVar8 = thunk_FUN_180624430(-90.0 - fVar23);
    if (sVar8 < 1) {
      fVar23 = (float)FUN_180615070(auVar29._0_8_,auVar32._0_8_);
    }
    else {
      fVar23 = 0.0;
    }
    auVar26._0_4_ = (fVar23 * fVar24) / fVar18;
    auVar26._4_12_ = SUB6012((undefined1  [60])0x0,0);
    local_bf0 = (double)(param_1 + 0x11c);
    local_bf8 = (double)(param_1 + 0x118);
    local_c08 = (undefined **)(param_1 + 0x110);
    local_c00 = (char *)(param_1 + 0x114);
    local_bb0[2] = auVar26._0_4_;
    pauVar10 = (undefined1 (*) [32])FUN_180245960(local_ae8,uVar25,auVar26._0_8_,DAT_180bbae00);
    local_b90 = *pauVar10;
    local_a98 = *(undefined8 *)pauVar10[1];
    local_b94 = *(float *)(pauVar10[1] + 8);
    if (local_b90._0_4_ <= auVar30._0_4_) {
    }
    local_ba0 = (float)iVar21 * 0.5;
    auVar28 = local_b90._0_16_;
    auVar26 = vshufps_avx(auVar28,auVar28,0xaa);
    local_bb0[0] = (float)iVar9 * 0.5 + auVar26._0_4_;
    local_c00 = (char *)CONCAT44(local_c00._4_4_,local_b90._16_4_);
    auVar26 = vshufps_avx(auVar28,auVar28,0x55);
    uVar3 = vextractps_avx(auVar28,3);
    auVar30 = ZEXT1664(auVar30._0_16_);
    auVar29 = ZEXT1664(auVar26);
    auVar32 = ZEXT1664(SUB6416(ZEXT464(0x3f000000),0));
    local_ab8 = local_b90;
    local_c08._0_4_ = (float)uVar3;
    puVar11 = (undefined8 *)FUN_180247530(local_6e8);
    auVar37 = auVar32._0_16_;
    auVar26 = auVar30._0_16_;
    auVar28 = auVar29._0_16_;
    lVar22 = 3;
    lVar16 = 3;
    puVar14 = &local_878;
    do {
      puVar1 = puVar14 + 0x10;
      uVar25 = puVar11[1];
      puVar2 = puVar11 + 0x10;
      *puVar14 = *puVar11;
      puVar14[1] = uVar25;
      uVar25 = puVar11[3];
      puVar14[2] = puVar11[2];
      puVar14[3] = uVar25;
      uVar25 = puVar11[5];
      puVar14[4] = puVar11[4];
      puVar14[5] = uVar25;
      uVar25 = puVar11[7];
      puVar14[6] = puVar11[6];
      puVar14[7] = uVar25;
      uVar25 = puVar11[9];
      puVar14[8] = puVar11[8];
      puVar14[9] = uVar25;
      uVar25 = puVar11[0xb];
      puVar14[10] = puVar11[10];
      puVar14[0xb] = uVar25;
      uVar25 = puVar11[0xd];
      puVar14[0xc] = puVar11[0xc];
      puVar14[0xd] = uVar25;
      uVar25 = puVar11[0xf];
      puVar14[0xe] = puVar11[0xe];
      puVar14[0xf] = uVar25;
      lVar16 = lVar16 + -1;
      puVar11 = puVar2;
      puVar14 = puVar1;
    } while (lVar16 != 0);
    auVar36 = SUB6416(ZEXT464(0x437f0000),0);
    local_bb8 = (float)local_b90._0_4_ * 190.0;
    *puVar1 = *puVar2;
    pfVar15 = (float *)&local_af0;
    if (auVar30._0_4_ <= local_bb8) {
      pfVar15 = &local_bb8;
    }
    local_bb4 = 255.0;
    pfVar12 = &local_bb4;
    if (local_bb8 <= 255.0) {
      pfVar12 = pfVar15;
    }
    local_af0 = auVar30._0_4_;
    uVar17 = (int)*pfVar12 << 0x18;
    if ((char)(int)*pfVar12 != '\0') {
      local_c08._0_4_ = (float)local_a98;
      uStack_ae0 = 0x62;
      local_ae8 = (undefined1  [8])&local_878;
      auVar29 = ZEXT1664(auVar26);
      auVar32 = ZEXT1664(auVar28);
      auVar35 = ZEXT1664(auVar36);
      auVar40 = ZEXT1664(auVar37);
      fVar18 = (float)local_a98;
      FUN_180433590(param_2,local_ae8,uVar17 | 0x121212,0);
      fVar18 = fVar18 * auVar40._0_4_;
      auVar30 = ZEXT464((uint)fVar18);
      local_c00 = (char *)((ulonglong)local_c00 & 0xffffffff00000000);
      local_c08 = (undefined **)(CONCAT44(local_c08._4_4_,uVar17) | 0x121212);
      FUN_180432510(param_2,(undefined4)local_878,local_878._4_4_,fVar18);
      local_c00 = (char *)((ulonglong)local_c00 & 0xffffffff00000000);
      local_c08._0_4_ = (float)(uVar17 | 0x121212);
      FUN_180432510(param_2,local_6f8,local_6f4,auVar30._0_8_);
      auVar37 = auVar40._0_16_;
      auVar36 = auVar35._0_16_;
      auVar26 = auVar29._0_16_;
      auVar28 = auVar32._0_16_;
    }
    auVar27 = local_b90._16_16_;
    auVar38 = vshufps_avx(auVar27,auVar27,0xaa);
    auVar27 = vshufps_avx(auVar27,auVar27,0x55);
    local_c00 = (char *)CONCAT44(local_c00._4_4_,auVar38._0_4_);
    local_c08._0_4_ = auVar27._0_4_;
    auVar30 = ZEXT1664(auVar26);
    auVar29 = ZEXT1664(auVar28);
    auVar32 = ZEXT1664(auVar38);
    auVar35 = ZEXT1664(auVar27);
    auVar40 = ZEXT1664(auVar36);
    auVar39 = ZEXT1664(auVar37);
    puVar11 = (undefined8 *)FUN_180247530(local_6e8);
    fVar18 = DAT_180cadaf8;
    auVar38 = auVar39._0_16_;
    auVar37 = auVar35._0_16_;
    auVar28 = auVar32._0_16_;
    auVar36 = auVar40._0_16_;
    auVar26 = auVar29._0_16_;
    puVar14 = &local_a08;
    do {
      puVar1 = puVar14 + 0x10;
      uVar25 = puVar11[1];
      puVar2 = puVar11 + 0x10;
      *puVar14 = *puVar11;
      puVar14[1] = uVar25;
      uVar25 = puVar11[3];
      puVar14[2] = puVar11[2];
      puVar14[3] = uVar25;
      uVar25 = puVar11[5];
      puVar14[4] = puVar11[4];
      puVar14[5] = uVar25;
      uVar25 = puVar11[7];
      puVar14[6] = puVar11[6];
      puVar14[7] = uVar25;
      uVar25 = puVar11[9];
      puVar14[8] = puVar11[8];
      puVar14[9] = uVar25;
      uVar25 = puVar11[0xb];
      puVar14[10] = puVar11[10];
      puVar14[0xb] = uVar25;
      uVar25 = puVar11[0xd];
      puVar14[0xc] = puVar11[0xc];
      puVar14[0xd] = uVar25;
      uVar25 = puVar11[0xf];
      puVar14[0xe] = puVar11[0xe];
      puVar14[0xf] = uVar25;
      lVar22 = lVar22 + -1;
      puVar11 = puVar2;
      puVar14 = puVar1;
    } while (lVar22 != 0);
    local_af0 = DAT_180cadaf8;
    uVar17 = (uint)DAT_180cadaf8 >> 0x10;
    uVar5 = (uint)DAT_180cadaf8 >> 8;
    uVar20 = (uint)DAT_180cadaf8 >> 0x18;
    *puVar1 = *puVar2;
    local_af0._0_3_ = SUB43(DAT_180cadaf8,0);
    uVar6 = (undefined3)local_af0;
    local_af0 = fVar18;
    if (DAT_180cadb00 == '\0') {
      fVar24 = (float)local_ab8._28_4_;
    }
    else {
      local_ba4 = auVar40._0_4_;
      local_bb4 = auVar30._0_4_;
      fVar24 = (float)FUN_1800b4ef0(DAT_180cadb68,0x3f0ccccd,auVar30._0_8_,0x3f800000);
      auVar38 = auVar39._0_16_;
      auVar37 = auVar35._0_16_;
      auVar28 = auVar32._0_16_;
      auVar36 = auVar40._0_16_;
      auVar26 = auVar29._0_16_;
      fVar23 = (float)local_ab8._28_4_ + 2.31;
      local_bb8 = fVar24 * (float)uVar20 * local_a98._4_4_ * (float)local_b90._0_4_;
      pfVar15 = &local_bb4;
      if (auVar30._0_4_ <= local_bb8) {
        pfVar15 = &local_bb8;
      }
      local_af0 = (float)CONCAT13(local_af0._3_1_,uVar6);
      pfVar12 = &local_ba4;
      if (local_bb8 <= auVar40._0_4_) {
        pfVar12 = pfVar15;
      }
      local_af0 = (float)CONCAT13((char)(int)*pfVar12,uVar6);
      fVar7 = local_af0;
      fVar24 = (float)local_ab8._28_4_;
      if ((char)(int)*pfVar12 != '\0') {
        uStack_ae0 = 0x62;
        local_ae8 = (undefined1  [8])&local_a08;
        local_c08._0_4_ = fVar23;
        FUN_180433590(&DAT_180bbb038,local_ae8,local_af0,0);
        fVar23 = fVar23 * auVar39._0_4_;
        auVar31 = ZEXT464((uint)fVar23);
        local_c00 = (char *)((ulonglong)local_c00 & 0xffffffff00000000);
        local_c08._0_4_ = fVar7;
        FUN_180432510(&DAT_180bbb038,(undefined4)local_a08,local_a08._4_4_,fVar23);
        local_c00 = (char *)((ulonglong)local_c00 & 0xffffffff00000000);
        local_c08._0_4_ = fVar7;
        FUN_180432510(&DAT_180bbb038,local_888,local_884,auVar31._0_8_);
        auVar38 = auVar39._0_16_;
        auVar37 = auVar35._0_16_;
        auVar28 = auVar32._0_16_;
        auVar36 = auVar40._0_16_;
        auVar26 = auVar29._0_16_;
      }
    }
    local_bb0[1] = (float)uVar20;
    local_bb4 = (float)local_b90._0_4_ * local_bb0[1];
    pfVar15 = &local_ba4;
    if (auVar30._0_4_ <= local_bb4) {
      pfVar15 = &local_bb4;
    }
    local_af0 = (float)CONCAT13(local_af0._3_1_,uVar6);
    pfVar12 = &local_bb8;
    if (local_bb4 <= auVar36._0_4_) {
      pfVar12 = pfVar15;
    }
    local_bb8 = auVar36._0_4_;
    local_ba4 = auVar30._0_4_;
    local_af0 = (float)CONCAT13((char)(int)*pfVar12,uVar6);
    fVar23 = local_af0;
    if ((char)(int)*pfVar12 != '\0') {
      uStack_ae0 = 0x62;
      local_ae8 = (undefined1  [8])&local_a08;
      auVar29 = ZEXT1664(auVar26);
      auVar32 = ZEXT1664(auVar28);
      auVar35 = ZEXT1664(auVar37);
      auVar40 = ZEXT1664(auVar36);
      auVar39 = ZEXT1664(auVar38);
      local_c08._0_4_ = fVar24;
      FUN_180433590(param_2,local_ae8,local_af0,0);
      fVar24 = fVar24 * auVar39._0_4_;
      auVar30 = ZEXT464((uint)fVar24);
      local_c00 = (char *)((ulonglong)local_c00 & 0xffffffff00000000);
      local_c08._0_4_ = fVar23;
      FUN_180432510(param_2,(undefined4)local_a08,local_a08._4_4_,fVar24);
      local_c00 = (char *)((ulonglong)local_c00 & 0xffffffff00000000);
      local_c08._0_4_ = fVar23;
      FUN_180432510(param_2,local_888,local_884,auVar30._0_8_);
      auVar38 = auVar39._0_16_;
      auVar37 = auVar35._0_16_;
      auVar28 = auVar32._0_16_;
      auVar36 = auVar40._0_16_;
      auVar26 = auVar29._0_16_;
    }
    uVar19 = 0;
    if (local_b94 <= 0.001) {
      auVar26 = SUB6416(ZEXT464(0x3f800000),0);
    }
    else {
      auVar29 = ZEXT1664(auVar26);
      auVar32 = ZEXT1664(auVar28);
      auVar35 = ZEXT1664(auVar37);
      auVar40 = ZEXT1664(auVar36);
      auVar39 = ZEXT464((uint)local_b94);
      fVar23 = (float)FUN_180242260();
      auVar30 = ZEXT464((uint)local_ba0);
      fVar24 = (auVar32._0_4_ - auVar35._0_4_) * 0.12;
      vminss_avx(ZEXT416((uint)(fVar23 + fVar24)),auVar32._0_16_);
      local_b58 = 0;
      uStack_b50 = 0;
      uStack_b48 = 0;
      uStack_b40 = 0;
      local_b38 = 0;
      uStack_b30 = 0;
      uStack_b28 = 0;
      uStack_b20 = 0;
      local_b18 = 0;
      uStack_b10 = 0;
      uStack_b08 = 0;
      uStack_b00 = 0;
      vmaxss_avx(ZEXT416((uint)(fVar23 - fVar24)),auVar35._0_16_);
      local_af8 = 0;
      do {
        auVar30 = ZEXT1664(auVar30._0_16_);
        auVar29 = ZEXT1664(auVar29._0_16_);
        auVar32 = ZEXT1664(auVar32._0_16_);
        auVar35 = ZEXT1664(auVar35._0_16_);
        auVar40 = ZEXT1664(auVar40._0_16_);
        auVar39 = ZEXT1664(auVar39._0_16_);
        uVar25 = FUN_180242260();
        fVar24 = (float)FUN_180637540();
        *(float *)(local_ae8 + uVar19 * 8 + -0x70) = fVar24 * auVar29._0_4_ + auVar30._0_4_;
        fVar24 = (float)FUN_180638e00(uVar25);
        auVar37 = auVar35._0_16_;
        auVar28 = auVar32._0_16_;
        *(float *)(local_ae8 + uVar19 * 8 + -0x6c) = fVar24 * auVar29._0_4_ + local_bb0[0];
        uVar19 = uVar19 + 1;
      } while (uVar19 < 0xd);
      local_a78 = local_b58;
      uStack_a70 = uStack_b50;
      uStack_a68 = uStack_b48;
      uStack_a60 = uStack_b40;
      local_a58 = local_b38;
      uStack_a50 = uStack_b30;
      uStack_a48 = uStack_b28;
      uStack_a40 = uStack_b20;
      local_bb0[0] = 0.0;
      local_a38 = local_b18;
      uStack_a30 = uStack_b10;
      uStack_a28 = uStack_b08;
      uStack_a20 = uStack_b00;
      local_a18 = local_af8;
      local_bb0[1] = auVar39._0_4_ * local_bb0[1] * (float)local_b90._0_4_;
      auVar26 = SUB6416(ZEXT464(0x3f800000),0);
      fVar24 = (float)local_ab8._28_4_ + 1.0;
      pfVar15 = local_bb0;
      if (0.0 <= local_bb0[1]) {
        pfVar15 = local_bb0 + 1;
      }
      local_ba0 = auVar40._0_4_;
      pfVar12 = &local_ba0;
      if (local_bb0[1] <= auVar40._0_4_) {
        pfVar12 = pfVar15;
      }
      fVar18 = (float)(((((int)*pfVar12 & 0xffU) << 8 | uVar17 & 0xff) << 8 | uVar5 & 0xff) << 8 |
                      (uint)fVar18 & 0xff);
      if ((char)(int)*pfVar12 == '\0') {
        auVar38 = SUB6416(ZEXT464(0x3f000000),0);
      }
      else {
        uStack_ae0 = 0x1a;
        local_ae8 = (undefined1  [8])&local_a78;
        auVar29 = ZEXT1664(auVar26);
        auVar32 = ZEXT1664(auVar28);
        auVar35 = ZEXT1664(auVar37);
        local_c08._0_4_ = fVar24;
        FUN_180433590(param_2,local_ae8,fVar18,0);
        auVar40 = ZEXT464(0x3f000000);
        auVar30 = ZEXT464((uint)(fVar24 * 0.5));
        local_c00 = (char *)((ulonglong)local_c00 & 0xffffffff00000000);
        local_c08._0_4_ = fVar18;
        FUN_180432510(param_2,local_a78 & 0xffffffff,local_a78._4_4_,fVar24 * 0.5);
        local_c00 = (char *)((ulonglong)local_c00 & 0xffffffff00000000);
        local_c08._0_4_ = fVar18;
        FUN_180432510(param_2,local_a18 & 0xffffffff,local_a18._4_4_,auVar30._0_8_);
        auVar38 = auVar40._0_16_;
        auVar37 = auVar35._0_16_;
        auVar28 = auVar32._0_16_;
        auVar26 = auVar29._0_16_;
      }
    }
    auVar30 = ZEXT1664(auVar26);
    auVar29 = ZEXT1664(auVar28);
    auVar32 = ZEXT1664(auVar37);
    auVar35 = ZEXT1664(auVar38);
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c646c8) {
    }
    fVar18 = -1.0;
    DAT_180c646c8 = UVar13 + 1000;
    local_bb0[1] = -1.0;
    local_bb0[0] = auVar30._0_4_;
    local_bb0[2] = (float)FUN_180637540(local_bb0[2]);
    pfVar15 = local_bb0 + 1;
    if (fVar18 <= local_bb0[2]) {
      pfVar15 = local_bb0 + 2;
    }
    pfVar12 = local_bb0;
    if (local_bb0[2] <= auVar30._0_4_) {
      pfVar12 = pfVar15;
    }
    fVar18 = (float)FUN_180636820(*pfVar12);
    fVar18 = fVar18 * 57.295776;
    fVar24 = (auVar32._0_4_ + auVar29._0_4_) * auVar35._0_4_ * 57.295776;
    FUN_18063ab10(local_6e8,0,0x600);
    local_bd0 = (double)(fVar24 - fVar18);
    local_bd8 = (double)fVar24;
    local_be0 = (double)fVar18;
    local_bc0 = (double)(float)local_b90._0_4_;
    local_bc8 = local_b98;
    local_be8 = (double)local_b68;
    local_bf0 = (double)local_b70;
    local_bf8 = (double)local_b6c;
    local_c00 = (char *)(double)local_b9c;
    local_c08 = (undefined **)local_b60;
    FUN_18015ad60(local_6e8,0x600,0xffffffffffffffff,
                  "pawn=0x%llX camera_source=rendered_matrix camera_yaw=%.3f presentation_yaw=%.3f pitch=%.3f roll=%.3f expected_deg=%.3f drawn_deg=%.3f smoothing_error=%.3f manual=%d projection=lower_half opacity=%.3f server_pose=unverified"
                 );
    local_c08 = &PTR_180700558;
    if (local_6e8[0] != '\0') {
      local_c08 = (undefined **)&DAT_1806bcfc0;
    }
    local_c00 = local_6e8;
    FUN_1800f6900(0);
  }
LAB_1802474f6:
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
}



