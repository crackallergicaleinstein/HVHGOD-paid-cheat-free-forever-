// FUN_18034c060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034c060 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18034c060(undefined8 param_1,float *param_2)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  float *pfVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_ZMM7 [64];
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auStack_468 [32];
  float local_448;
  float local_440;
  undefined4 local_438;
  undefined4 local_428;
  float local_424;
  undefined8 local_418;
  undefined8 local_410;
  undefined4 local_408;
  undefined8 local_400;
  float local_3f8;
  float local_3f0;
  float local_3ec;
  float local_3e8;
  float local_3e4;
  float local_3e0;
  float local_3dc;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined1 local_3a8 [32];
  float local_388 [36];
  float local_2f8 [68];
  float local_1e8 [68];
  ulonglong local_d8;
  undefined1 local_48 [16];
  
  uVar2 = DAT_180cc85fc;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_468;
  if ((((DAT_180cc8438 != '\0') && (DAT_180cc84c0 != '\0')) && (DAT_180b90198._4_1_ != '\0')) &&
     (0 < (int)DAT_180b90198)) {
    bVar1 = false;
    auVar24 = ZEXT464(0x475ead00);
    auVar25 = ZEXT464(0x42f00000);
    auVar27 = ZEXT464(0x41a00000);
    iVar10 = ((int)DAT_180b90198 + 0x17) / 0x18;
    auVar28 = ZEXT464(0x3fb33333);
    local_408 = DAT_180cc85fc;
    local_408._2_1_ = (byte)(DAT_180cc85fc >> 0x10);
    bVar4 = local_408._2_1_;
    iVar7 = 1;
    if (1 < iVar10) {
      iVar7 = iVar10;
    }
    iVar12 = 0;
    local_48 = in_ZMM7._0_16_;
    iVar10 = 0;
    auVar23 = ZEXT864(0);
    auVar26 = ZEXT864(0);
    local_408 = uVar2;
    local_3d8 = param_2;
    do {
      uVar8 = (undefined1)uVar2;
      if (DAT_180b8e2b0 == '\0') {
        local_3f0 = auVar24._0_4_;
        bVar1 = false;
        local_3ec = local_3f0;
      }
      else {
        iVar6 = FUN_1805f68d0(&DAT_180b8e260);
        if (iVar6 != 0) goto LAB_18034c982;
        if (DAT_180b8e2ac == 0x7fffffff) goto LAB_18034c96d;
        local_3a8._8_8_ = uRam0000000180b8e248;
        local_3a8._0_8_ = _DAT_180b8e240;
        local_3a8._16_8_ = uRam0000000180b8e250;
        local_3a8._24_8_ = uRam0000000180b8e258;
        local_3c8 = _DAT_180b8e220;
        uStack_3c0 = uRam0000000180b8e228;
        uStack_3b8 = uRam0000000180b8e230;
        uStack_3b0 = uRam0000000180b8e238;
        auVar23 = ZEXT1664(auVar23._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        auVar24 = ZEXT1664(auVar24._0_16_);
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar27 = ZEXT1664(auVar27._0_16_);
        auVar28 = ZEXT1664(auVar28._0_16_);
        uVar17 = FUN_1805f68fc(&DAT_180b8e260);
        FUN_180419d90(uVar17,&local_3f0,&DAT_180b90108 + (longlong)iVar10 * 0xc,&local_3c8);
        auVar29 = ZEXT464((uint)local_3f0);
        auVar18 = ZEXT416((uint)local_3f0);
        if (local_3f0 != auVar24._0_4_) {
          auVar30 = ZEXT464((uint)local_3ec);
          auVar19 = ZEXT416((uint)local_3ec);
          if (local_3ec != auVar24._0_4_) {
            if (bVar1) {
              iVar6 = (int)DAT_180b90198 + -1;
              if (iVar6 < 1) {
                iVar6 = 1;
              }
              local_438 = auVar28._0_4_;
              local_440 = (float)CONCAT13((char)(int)(((float)iVar10 / (float)iVar6) * auVar25._0_4_
                                                     + auVar27._0_4_),
                                          CONCAT12(bVar4,(short)CONCAT31((int3)(local_408 >> 8),
                                                                         uVar8)));
              local_448 = local_3ec;
              local_428 = local_440;
              FUN_180433450(local_3d8,auVar23._0_8_,auVar26._0_8_,local_3f0);
              auVar18 = auVar29._0_16_;
              auVar19 = auVar30._0_16_;
            }
            auVar23 = ZEXT1664(auVar18);
            auVar26 = ZEXT1664(auVar19);
            bVar1 = true;
            goto LAB_18034c2c5;
          }
        }
        bVar1 = false;
      }
LAB_18034c2c5:
      iVar10 = iVar10 + iVar7;
    } while (iVar10 < (int)DAT_180b90198);
    auVar18._8_8_ = 0;
    auVar18._0_8_ = DAT_180b0dfc8;
    auVar23 = ZEXT464((uint)(SUB84(DAT_180b0dfc8,0) * 0.017453292));
    local_418 = DAT_180b0dfc8;
    local_400 = *(undefined8 *)(&DAT_180b900fc + (longlong)(int)DAT_180b90198 * 3);
    local_3f8 = (float)(&DAT_180b90104)[(longlong)(int)DAT_180b90198 * 3];
    auVar18 = vshufps_avx(auVar18,auVar18,0x55);
    fVar14 = auVar18._0_4_ * 0.017453292;
    auVar27 = ZEXT464((uint)fVar14);
    local_410 = CONCAT44(local_410._4_4_,DAT_180b0dfd0);
    auVar25._0_8_ = FUN_180638e00(fVar14);
    auVar25._8_56_ = extraout_var;
    uVar20 = 0x80000000;
    uVar21 = 0;
    uVar22 = 0;
    auVar26 = ZEXT1664(CONCAT412(extraout_var._4_4_,
                                 CONCAT48(extraout_var._0_4_,auVar25._0_8_ ^ 0x80000000)));
    auVar28 = ZEXT1664(auVar25._0_16_);
    local_3e4 = (float)(auVar25._0_8_ ^ 0x80000000);
    auVar27._0_8_ = FUN_180637540(auVar27._0_8_);
    auVar27._8_56_ = extraout_var_00;
    auVar31 = ZEXT1664(auVar27._0_16_);
    uVar13 = FUN_180638e00(auVar23._0_8_);
    local_3e0 = (float)(uVar13 ^ uVar20) * auVar31._0_4_;
    auVar29 = ZEXT464((uint)local_3e0);
    local_3dc = (float)(uVar13 ^ uVar20) * auVar28._0_4_;
    auVar30 = ZEXT464((uint)local_3dc);
    uVar13 = FUN_180637540(auVar23._0_8_);
    local_3f0 = (float)(uVar13 ^ uVar20);
    auVar27 = ZEXT1664(CONCAT412(extraout_var_01._4_4_ ^ uVar22,
                                 CONCAT48(extraout_var_01._0_4_ ^ uVar21,(ulonglong)(uint)local_3f0)
                                ));
    local_3e8 = DAT_180cc9364 * 2.2;
    FUN_18063ab10(local_2f8,0,0x108);
    auVar25 = ZEXT464(0x40c90fdb);
    auVar28 = ZEXT464(0x41400000);
    iVar10 = 0;
    pfVar9 = local_2f8 + 1;
    do {
      fVar14 = (float)iVar10 * 0.03125 * auVar25._0_4_;
      auVar23 = ZEXT464((uint)fVar14);
      fVar14 = (float)FUN_180637540(fVar14);
      fVar14 = fVar14 * auVar28._0_4_;
      fVar15 = (float)FUN_180638e00(auVar23._0_8_);
      fVar15 = fVar15 * auVar28._0_4_;
      local_418 = (float *)CONCAT44(auVar31._0_4_ * fVar14 + local_400._4_4_ +
                                    auVar30._0_4_ * fVar15,
                                    auVar26._0_4_ * fVar14 + (float)local_400 +
                                    auVar29._0_4_ * fVar15);
      local_410 = CONCAT44(local_410._4_4_,fVar14 * 0.0 + local_3f8 + auVar27._0_4_ * fVar15);
      if (DAT_180b8e2b0 == '\0') {
      }
      iVar7 = FUN_1805f68d0(&DAT_180b8e260);
      if (iVar7 != 0) goto LAB_18034c982;
      if (DAT_180b8e2ac == 0x7fffffff) goto LAB_18034c96d;
      local_3c8 = _DAT_180b8e220;
      uStack_3c0 = uRam0000000180b8e228;
      uStack_3b8 = uRam0000000180b8e230;
      uStack_3b0 = uRam0000000180b8e238;
      local_3a8._8_8_ = uRam0000000180b8e248;
      local_3a8._0_8_ = _DAT_180b8e240;
      local_3a8._16_8_ = uRam0000000180b8e250;
      local_3a8._24_8_ = uRam0000000180b8e258;
      auVar25 = ZEXT1664(auVar25._0_16_);
      auVar27 = ZEXT1664(auVar27._0_16_);
      auVar24 = ZEXT1664(auVar24._0_16_);
      auVar26 = ZEXT1664(auVar26._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      auVar29 = ZEXT1664(auVar29._0_16_);
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar31 = ZEXT1664(auVar31._0_16_);
      uVar17 = FUN_1805f68fc(&DAT_180b8e260);
      FUN_180419d90(uVar17,&local_428,&local_418,&local_3c8);
      pfVar5 = local_3d8;
      if (local_428 == auVar24._0_4_) {
      }
      if (local_424 == auVar24._0_4_) {
      }
      pfVar9[-1] = local_428;
      *pfVar9 = local_424;
      pfVar9 = pfVar9 + 2;
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x21);
    bVar3 = local_408._1_1_;
    local_418 = local_2f8;
    local_410 = 0x42;
    local_448 = 3.5;
    FUN_180433590(local_3d8,&local_418,
                  ((bVar4 | 0x1800) << 8 | (uint)local_408._1_1_) << 8 | uVar2 & 0xff,1);
    FUN_18063ab10(local_1e8,0,0x108);
    auVar23 = ZEXT464(0x409e6666);
    auVar25 = ZEXT464(0x435c0000);
    auVar27 = ZEXT464(0x420c0000);
    local_388[0] = 0.0;
    local_388[1] = 0.0;
    local_388[2] = 0.0;
    local_388[3] = 0.0;
    local_388[4] = 0.0;
    local_388[5] = 0.0;
    local_388[6] = 0.0;
    local_388[7] = 0.0;
    local_388[8] = 0.0;
    local_388[9] = 0.0;
    local_388[10] = 0.0;
    local_388[0xb] = 0.0;
    local_388[0xc] = 0.0;
    local_388[0xd] = 0.0;
    local_388[0xe] = 0.0;
    local_388[0xf] = 0.0;
    local_388[0x10] = 0.0;
    local_388[0x11] = 0.0;
    local_388[0x12] = 0.0;
    local_388[0x13] = 0.0;
    local_388[0x14] = 0.0;
    local_388[0x15] = 0.0;
    local_388[0x16] = 0.0;
    local_388[0x17] = 0.0;
    local_388[0x18] = 0.0;
    local_388[0x19] = 0.0;
    local_388[0x1a] = 0.0;
    local_388[0x1b] = 0.0;
    local_388[0x1c] = 0.0;
    local_388[0x1d] = 0.0;
    local_388[0x1e] = 0.0;
    local_388[0x1f] = 0.0;
    auVar26 = ZEXT464((uint)(local_3e8 - 4.95));
    local_388[0x20] = 0.0;
    pfVar9 = local_388;
    pfVar11 = local_1e8 + 1;
    do {
      fVar14 = (float)iVar12 * 0.03125;
      auVar29 = ZEXT464((uint)(fVar14 * auVar23._0_4_ + auVar26._0_4_));
      auVar25 = ZEXT1664(auVar25._0_16_);
      auVar24 = ZEXT1664(auVar24._0_16_);
      auVar27 = ZEXT1664(auVar27._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      auVar23 = ZEXT1664(auVar23._0_16_);
      auVar26 = ZEXT1664(auVar26._0_16_);
      auVar30 = ZEXT1664(auVar31._0_16_);
      fVar15 = (float)FUN_180637540();
      fVar15 = fVar15 * auVar28._0_4_;
      fVar16 = (float)FUN_180638e00(auVar29._0_8_);
      fVar16 = fVar16 * auVar28._0_4_;
      local_418 = (float *)CONCAT44(auVar30._0_4_ * fVar15 + local_400._4_4_ + fVar16 * local_3dc,
                                    fVar15 * local_3e4 + (float)local_400 + fVar16 * local_3e0);
      local_410 = CONCAT44(local_410._4_4_,fVar15 * 0.0 + local_3f8 + local_3f0 * fVar16);
      if (DAT_180b8e2b0 == '\0') {
      }
      fVar15 = local_3f0;
      iVar10 = FUN_1805f68d0(&DAT_180b8e260);
      if (iVar10 != 0) goto LAB_18034c982;
      if (DAT_180b8e2ac == 0x7fffffff) goto LAB_18034c96d;
      local_3c8 = _DAT_180b8e220;
      uStack_3c0 = uRam0000000180b8e228;
      uStack_3b8 = uRam0000000180b8e230;
      uStack_3b0 = uRam0000000180b8e238;
      local_3a8._8_8_ = uRam0000000180b8e248;
      local_3a8._0_8_ = _DAT_180b8e240;
      local_3a8._16_8_ = uRam0000000180b8e250;
      local_3a8._24_8_ = uRam0000000180b8e258;
      auVar25 = ZEXT1664(auVar25._0_16_);
      auVar24 = ZEXT1664(auVar24._0_16_);
      auVar27 = ZEXT1664(auVar27._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      auVar23 = ZEXT1664(auVar23._0_16_);
      auVar26 = ZEXT1664(auVar26._0_16_);
      auVar31 = ZEXT1664(auVar30._0_16_);
      uVar17 = FUN_1805f68fc(&DAT_180b8e260);
      FUN_180419d90(uVar17,&local_3d8,&local_418,&local_3c8);
      if ((float)local_3d8 == auVar24._0_4_) {
      }
      if (local_3d8._4_4_ == auVar24._0_4_) {
      }
      pfVar11[-1] = (float)local_3d8;
      *pfVar11 = local_3d8._4_4_;
      iVar12 = iVar12 + 1;
      pfVar11 = pfVar11 + 2;
      local_428._3_1_ = (undefined1)(int)(fVar14 * auVar25._0_4_ * fVar14 + auVar27._0_4_);
      local_428._0_3_ = CONCAT12(bVar4,CONCAT11(bVar3,uVar8));
      *pfVar9 = local_428;
      pfVar9 = pfVar9 + 1;
    } while (iVar12 < 0x21);
    local_418 = local_388;
    local_410 = 0x21;
    local_3d8 = local_1e8;
    local_3d0 = 0x42;
    local_448 = 2.4;
    FUN_180433bf0(pfVar5,&local_3d8,&local_418);
    fVar14 = (float)FUN_180637540(local_3e8);
    fVar14 = fVar14 * auVar28._0_4_;
    fVar16 = (float)FUN_180638e00(local_3e8);
    fVar16 = fVar16 * auVar28._0_4_;
    local_418 = (float *)CONCAT44(auVar31._0_4_ * fVar14 + local_400._4_4_ + fVar16 * local_3dc,
                                  fVar14 * local_3e4 + (float)local_400 + fVar16 * local_3e0);
    local_410 = CONCAT44(local_410._4_4_,fVar14 * 0.0 + local_3f8 + fVar15 * fVar16);
    if (DAT_180b8e2b0 != '\0') {
      iVar10 = FUN_1805f68d0(&DAT_180b8e260);
      if (iVar10 != 0) {
LAB_18034c982:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_180b8e2ac == 0x7fffffff) {
LAB_18034c96d:
        DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      local_3c8 = _DAT_180b8e220;
      uStack_3c0 = uRam0000000180b8e228;
      uStack_3b8 = uRam0000000180b8e230;
      uStack_3b0 = uRam0000000180b8e238;
      local_3a8._8_8_ = uRam0000000180b8e248;
      local_3a8._0_8_ = _DAT_180b8e240;
      local_3a8._16_8_ = uRam0000000180b8e250;
      local_3a8._24_8_ = uRam0000000180b8e258;
      auVar25 = ZEXT1664(auVar24._0_16_);
      uVar17 = FUN_1805f68fc(&DAT_180b8e260);
      FUN_180419d90(uVar17,&local_3d8,&local_418,&local_3c8);
      auVar24 = ZEXT464((uint)(float)local_3d8);
      if ((float)local_3d8 != auVar25._0_4_) {
        auVar27 = ZEXT464((uint)local_3d8._4_4_);
        if (local_3d8._4_4_ != auVar25._0_4_) {
          local_428 = (float)CONCAT13(0x22,CONCAT12(bVar4,CONCAT11(bVar3,uVar8)));
          local_440 = 2.24208e-44;
          local_448 = local_428;
          FUN_180432510(pfVar5,(ulonglong)local_3d8 & 0xffffffff,local_3d8._4_4_,0x40733333);
          local_428 = -6.1897e+26;
          local_440 = 1.68156e-44;
          local_448 = -6.1897e+26;
          FUN_180432510(pfVar5,auVar24._0_8_,auVar27._0_8_,0x3fd9999a);
        }
      }
    }
  }
}



