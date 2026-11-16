// FUN_1802d9670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d9670 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d9670(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 (*pauVar2) [16];
  undefined1 *puVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  longlong lVar7;
  char cVar8;
  uint uVar9;
  undefined1 uVar10;
  longlong lVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 in_ZMM2 [64];
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  float fVar24;
  undefined1 auVar25 [64];
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  float fVar30;
  undefined1 auVar31 [16];
  undefined1 in_ZMM12 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 in_ZMM14 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 in_ZMM15 [64];
  undefined1 auStack_208 [32];
  float local_1e8;
  undefined8 local_1e0;
  float local_1d8;
  float local_1d0;
  char local_1c8;
  float local_1c4;
  undefined4 local_1c0;
  undefined4 local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  uint local_1a8;
  uint local_1a4;
  uint local_19c;
  undefined8 local_198;
  undefined1 *local_188;
  undefined8 local_180;
  undefined1 *local_178;
  undefined8 local_170;
  undefined1 *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  float local_118;
  uint local_114;
  undefined1 local_110 [16];
  undefined8 uStack_100;
  ulonglong uStack_f8;
  undefined1 local_f0 [16];
  ulonglong local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_a8 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  
  local_78 = in_ZMM9._0_16_;
  local_88 = in_ZMM10._0_16_;
  local_a8 = in_ZMM12._0_16_;
  local_c8 = in_ZMM14._0_16_;
  local_d8 = in_ZMM15._0_16_;
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_208;
  auVar22 = ZEXT1664(in_ZMM2._0_16_);
  local_19c = in_ZMM2._0_4_;
  local_f0 = ZEXT816(0x180cc9b08);
  local_198 = param_2;
  iVar1 = FUN_1805f68d0();
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9b54 == 0x7fffffff) {
    DAT_180cc9b54 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_f0[8] = 1;
  if (DAT_180cc99c0 != DAT_180cc99c8) {
    lVar11 = DAT_180cc99c0 + 0x14;
    lVar7 = DAT_180cc99c0;
    do {
      fVar15 = auVar22._0_4_ - *(float *)(lVar11 + -8);
      if (fVar15 <= DAT_180b0c7dc) {
        fVar13 = DAT_180b0c7dc;
        if (DAT_180b8e2b0 == '\0') {
          auVar22 = ZEXT1664(SUB6416(ZEXT464(0x475ead00),0));
          local_1a8 = 0x475ead00;
          auVar32 = ZEXT1664(SUB6416(ZEXT464(0x475ead00),0));
          local_1a4 = 0x475ead00;
        }
        else {
          iVar1 = FUN_1805f68d0(&DAT_180b8e260);
          if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_180b8e2ac == 0x7fffffff) {
            DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          local_158 = _DAT_180b8e220;
          uStack_150 = uRam0000000180b8e228;
          uStack_148 = uRam0000000180b8e230;
          uStack_140 = uRam0000000180b8e238;
          local_138 = _DAT_180b8e240;
          uStack_130 = uRam0000000180b8e248;
          uStack_128 = uRam0000000180b8e250;
          uStack_120 = uRam0000000180b8e258;
          uVar16 = FUN_1805f68fc();
          FUN_180419d90(uVar16,&local_1a8,lVar7,&local_158);
          auVar32 = ZEXT464(local_1a4);
          auVar22 = ZEXT464(local_1a8);
        }
        uVar6 = DAT_180b0c7e0._1_1_;
        uVar5 = (undefined1)DAT_180b0c7e0;
        auVar23 = ZEXT464(0x3f800000);
        uVar9 = (uint)((1.0 - (fVar15 / fVar13) * (fVar15 / fVar13)) * 255.0);
        uVar10 = (undefined1)DAT_180b0c7e0._2_6_;
        cVar8 = (char)uVar9;
        local_1bc = (float)CONCAT13(cVar8,CONCAT12(uVar10,CONCAT11(DAT_180b0c7e0._1_1_,
                                                                   (undefined1)DAT_180b0c7e0)));
        bVar12 = (DAT_180b0c7d8 & 0xfffffffd) == 0;
        local_1c8 = DAT_180b0c7d8 - 1 < 2;
        auVar28 = ZEXT864(0);
        auVar35 = ZEXT864(0);
        local_1b8 = 0.0;
        local_1b0 = 0.0;
        auVar25 = ZEXT464(0x41a00000);
        auVar18 = auVar25._0_16_;
        if (bVar12) {
          auVar18 = vminss_avx(auVar23._0_16_,ZEXT416((uint)(fVar15 * 20.0)));
          fVar13 = (float)FUN_180637bd0(1.0 - auVar18._0_4_,0x40800000);
          auVar18 = auVar25._0_16_;
          fVar13 = (auVar23._0_4_ - (auVar23._0_4_ - fVar13)) * 6.0;
          local_1b8 = fVar13 + 10.0;
          auVar35 = ZEXT464((uint)local_1b8);
          local_1b0 = fVar13 * 0.3 + 3.0;
        }
        fVar20 = auVar35._0_4_;
        uStack_100 = 0;
        uStack_f8 = 0xf;
        local_110._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar21[0xf] = 0;
        auVar21._0_15_ = local_110._1_15_;
        local_110 = auVar21 << 8;
        local_1c4 = 0.0;
        local_1b4 = 0.0;
        fVar13 = local_1b0;
        if (local_1c8 != '\0') {
          auVar21 = vpcmpeqd_avx(ZEXT116(bVar12),SUB6416(ZEXT464(0),0));
          auVar18 = vblendvps_avx(auVar18,auVar28._0_16_,auVar21);
          auVar25 = ZEXT1664(auVar18);
          pauVar2 = (undefined1 (*) [16])FUN_18015bea0(&local_158,*(undefined4 *)(lVar11 + -4));
          auVar34 = auVar35._0_16_;
          auVar33 = auVar25._0_16_;
          auVar31 = auVar32._0_16_;
          auVar27 = auVar22._0_16_;
          auVar21 = auVar23._0_16_;
          auVar18 = auVar28._0_16_;
          if (&local_110 != pauVar2) {
            FUN_18015c010();
            auVar34 = auVar35._0_16_;
            auVar33 = auVar25._0_16_;
            auVar31 = auVar32._0_16_;
            auVar27 = auVar22._0_16_;
            auVar21 = auVar23._0_16_;
            auVar18 = auVar28._0_16_;
            local_110 = *pauVar2;
            uStack_100 = *(undefined8 *)pauVar2[1];
            uStack_f8 = *(ulonglong *)(pauVar2[1] + 8);
            *(undefined8 *)pauVar2[1] = 0;
            *(undefined8 *)(pauVar2[1] + 8) = 0xf;
            (*pauVar2)[0] = 0;
          }
          auVar28 = ZEXT1664(auVar18);
          auVar35 = ZEXT1664(auVar21);
          auVar22 = ZEXT1664(auVar27);
          auVar32 = ZEXT1664(auVar31);
          auVar23 = ZEXT1664(auVar33);
          auVar25 = ZEXT1664(auVar34);
          FUN_18015c010(&local_158);
          auVar18 = auVar28._0_16_;
          fVar20 = auVar35._0_4_;
          puVar3 = local_110;
          if (0xf < uStack_f8) {
            puVar3 = (undefined1 *)local_110._0_8_;
          }
          if (DAT_180bbadc8 == DAT_180bbadd0) {
            lVar4 = DAT_180bbade0;
          }
          else {
            lVar4 = *(longlong *)(DAT_180bbadd0 + -8);
          }
          if (lVar4 == 0) {
            local_118 = 0.0;
            auVar28 = ZEXT864(0);
            local_114 = 0;
          }
          else {
            local_180 = uStack_100;
            local_188 = puVar3;
            FUN_180430010(lVar4,&local_118,&local_188);
            auVar18 = auVar28._0_16_;
            fVar20 = auVar35._0_4_;
            auVar28 = ZEXT464(local_114);
          }
          auVar18 = vmaxss_avx(ZEXT416((uint)(fVar20 - fVar15 * 8.0)),auVar18);
          auVar35 = ZEXT1664(auVar18);
          fVar19 = local_118;
          fVar14 = (float)FUN_180637540(fVar15 * 45.0);
          fVar14 = fVar14 * auVar35._0_4_;
          fVar15 = (float)FUN_180638e00(fVar15 * 50.0);
          fVar20 = auVar25._0_4_;
          local_1c4 = fVar15 * auVar35._0_4_ * 3.0 + (auVar22._0_4_ - fVar19 * 0.5);
          local_1b4 = ((auVar32._0_4_ - auVar23._0_4_) - auVar28._0_4_ * 0.5) + fVar14 + fVar14;
          uVar10 = (undefined1)DAT_180b0c7e0._2_6_;
          uVar5 = (undefined1)DAT_180b0c7e0;
          uVar6 = DAT_180b0c7e0._1_1_;
        }
        if ((DAT_180b0c7e8 == '\0') || (cVar8 == '\0')) {
          auVar28 = ZEXT464((uint)local_1c4);
          cVar8 = local_1c8;
        }
        else {
          local_1c0 = (float)CONCAT13((char)(int)((float)(uVar9 & 0xff) * DAT_180b0c850),
                                      CONCAT12(uVar10,CONCAT11(uVar6,uVar5)));
          fVar15 = local_1c0;
          if (bVar12) {
            iVar1 = 0;
            fVar30 = auVar32._0_4_;
            fVar19 = fVar30 - fVar13;
            fVar26 = auVar22._0_4_;
            fVar24 = fVar26 - fVar13;
            auVar28 = ZEXT464((uint)(fVar30 - fVar20));
            auVar35 = ZEXT464((uint)(fVar26 - fVar20));
            fVar14 = fVar13 + fVar26;
            auVar23 = ZEXT464((uint)(fVar20 + fVar26));
            fVar13 = fVar13 + fVar30;
            auVar22 = ZEXT464((uint)(fVar30 + local_1b8));
            do {
              auVar18._0_4_ = (float)iVar1;
              auVar18._4_12_ = SUB1612(ZEXT816(0),4);
              fVar20 = auVar18._0_4_ + auVar18._0_4_ + 2.25;
              local_1d8 = fVar15;
              local_1e8 = fVar24;
              local_1d0 = fVar20;
              local_1e0._0_4_ = fVar19;
              uVar16 = FUN_1802d9e40(auVar18._0_8_,&DAT_180bbb038,auVar35._0_8_,auVar28._0_8_);
              local_1d8 = fVar15;
              local_1e8 = fVar14;
              local_1d0 = fVar20;
              local_1e0._0_4_ = fVar19;
              uVar16 = FUN_1802d9e40(uVar16,&DAT_180bbb038,auVar23._0_8_,auVar28._0_8_);
              local_1d8 = fVar15;
              local_1e8 = fVar24;
              local_1d0 = fVar20;
              local_1e0._0_4_ = fVar13;
              uVar16 = FUN_1802d9e40(uVar16,&DAT_180bbb038,auVar35._0_8_,auVar22._0_8_);
              local_1d8 = fVar15;
              local_1e0 = CONCAT44(local_1e0._4_4_,fVar13);
              local_1e8 = fVar14;
              local_1d0 = fVar20;
              FUN_1802d9e40(uVar16,&DAT_180bbb038,auVar23._0_8_,auVar22._0_8_);
              iVar1 = iVar1 + 1;
            } while (iVar1 < 3);
            auVar22 = ZEXT464(local_1a8);
          }
          cVar8 = local_1c8;
          auVar28 = ZEXT464((uint)local_1c4);
          if (local_1c8 != '\0') {
            local_178 = local_110;
            if (0xf < uStack_f8) {
              local_178 = (undefined1 *)local_110._0_8_;
            }
            local_170 = uStack_100;
            local_1e0 = 0;
            local_1e8 = fVar15;
            FUN_1804340b0(&DAT_180bbb038,local_1c4,local_1b4,&local_178);
          }
        }
        uVar16 = local_198;
        fVar15 = local_1bc;
        uVar17 = auVar28._0_8_;
        if (bVar12) {
          auVar36 = ZEXT464((uint)local_1b0);
          fVar19 = auVar32._0_4_ - local_1b0;
          local_1e8 = auVar22._0_4_ - local_1b0;
          auVar25 = ZEXT464((uint)local_1e8);
          fVar13 = auVar32._0_4_ - local_1b8;
          auVar35 = ZEXT464((uint)fVar13);
          fVar20 = auVar22._0_4_ - local_1b8;
          auVar29 = ZEXT464((uint)fVar20);
          local_1d0 = 1.25;
          local_1d8 = local_1bc;
          fVar14 = local_1b8;
          local_1e0._0_4_ = fVar19;
          FUN_1802d9e40(0x3fa00000,local_198,fVar20,fVar13);
          fVar13 = auVar36._0_4_ + auVar22._0_4_;
          fVar20 = fVar14 + auVar22._0_4_;
          auVar23 = ZEXT464((uint)fVar20);
          local_1d0 = 1.25;
          local_1d8 = fVar15;
          local_1e8 = fVar13;
          local_1e0._0_4_ = fVar19;
          uVar17 = FUN_1802d9e40(0x3fa00000,uVar16,fVar20,auVar35._0_8_);
          fVar20 = auVar36._0_4_ + auVar32._0_4_;
          fVar14 = fVar14 + auVar32._0_4_;
          auVar22 = ZEXT464((uint)fVar14);
          auVar32 = ZEXT464(0x3fa00000);
          local_1d0 = 1.25;
          local_1d8 = fVar15;
          local_1e8 = auVar25._0_4_;
          local_1e0._0_4_ = fVar20;
          uVar17 = FUN_1802d9e40(uVar17,uVar16,auVar29._0_8_,fVar14);
          local_1d0 = auVar32._0_4_;
          local_1d8 = fVar15;
          local_1e0 = CONCAT44(local_1e0._4_4_,fVar20);
          local_1e8 = fVar13;
          FUN_1802d9e40(uVar17,uVar16,auVar23._0_8_,auVar22._0_8_);
          uVar17 = auVar28._0_8_;
        }
        if (cVar8 != '\0') {
          local_168 = local_110;
          if (0xf < uStack_f8) {
            local_168 = (undefined1 *)local_110._0_8_;
          }
          local_160 = uStack_100;
          local_1e0 = 0;
          local_1e8 = fVar15;
          FUN_1804340b0(uVar16,uVar17,local_1b4,&local_168);
        }
        lVar7 = lVar7 + 0x14;
        lVar11 = lVar11 + 0x14;
        FUN_18015c010();
        auVar22 = ZEXT464(local_19c);
      }
      else {
        FUN_18063aed0(lVar7,lVar11,DAT_180cc99c8 - lVar11);
        DAT_180cc99c8 = DAT_180cc99c8 + -0x14;
      }
    } while (lVar7 != DAT_180cc99c8);
  }
  FUN_1805f68fc(&DAT_180cc9b08);
}



