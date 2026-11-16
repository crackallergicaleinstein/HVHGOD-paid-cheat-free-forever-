// FUN_180428ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180428ed0 */

void FUN_180428ed0(longlong param_1,float *param_2,int param_3,int param_4,int param_5,int param_6,
                  float param_7)

{
  float fVar1;
  float *pfVar2;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined1 extraout_var [56];
  undefined4 uVar12;
  undefined1 auVar13 [64];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  float local_res8;
  float *in_stack_fffffffffffffe48;
  undefined8 uVar31;
  float local_188;
  float local_180;
  float fStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  uint uStack_164;
  float local_160;
  float fStack_15c;
  undefined8 uStack_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  uint uStack_144;
  uint local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [32];
  undefined1 local_f8 [32];
  
  fVar25 = 0.5;
  fVar15 = param_7 * 0.5;
  auVar16 = ZEXT464((uint)fVar15);
  fVar9 = (float)FUN_180636820(fVar15 / (fVar15 + *(float *)(param_1 + 8)));
  auVar26 = ZEXT464(0x40490fdb);
  auVar19 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(3.1415927 / (fVar9 + fVar9))),2);
  local_138 = ZEXT416(0);
  uVar5 = (uint)auVar19._0_4_;
  uStack_164 = uStack_164 & 0xffffff00;
  uStack_144 = uStack_144 & 0xffffff00;
  uStack_170 = 0;
  if ((int)uVar5 < 2) {
    uVar5 = 2;
  }
  uStack_16c = 0;
  uStack_168 = 0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  local_180 = 0.0;
  fStack_17c = 0.0;
  uStack_178 = 0;
  local_118 = ZEXT832(0);
  local_f8 = ZEXT432(0);
  bVar8 = param_4 == 0;
  if (bVar8) {
    pfVar2 = param_2 + 8;
    param_3 = param_3 + -1;
  }
  else {
    pfVar2 = param_2;
    param_2 = param_2 + (longlong)param_3 * 8 + -8;
  }
  local_res8 = *param_2;
  local_188 = param_2[1];
  fVar10 = *pfVar2 - local_res8;
  fVar11 = pfVar2[1] - local_188;
  fVar9 = fVar11 * fVar11 + fVar10 * fVar10;
  local_160 = local_180;
  fStack_15c = fStack_17c;
  uStack_158 = uStack_178;
  local_128 = local_138;
  if (fVar9 < 0.0) {
    auVar20 = ZEXT464((uint)fVar10);
    auVar16 = ZEXT1664(auVar16._0_16_);
    auVar26 = ZEXT1664(auVar26._0_16_);
    fVar9 = (float)FUN_18061e150();
    fVar10 = auVar20._0_4_;
  }
  else {
    fVar9 = SQRT(fVar9);
  }
  auVar20 = ZEXT464(0x80000000);
  fVar14 = auVar16._0_4_;
  if (param_4 == 0) {
    if (1e-06 < fVar9) {
      fVar10 = fVar10 * (1.0 / fVar9);
      fVar11 = fVar11 * (1.0 / fVar9);
    }
    uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
    if (param_6 == 0) {
      fVar9 = local_188 - -fVar10 * fVar14;
      local_188 = -fVar10 * fVar14 + local_188;
      fVar25 = local_res8 - fVar11 * fVar14;
      local_res8 = fVar11 * fVar14 + local_res8;
    }
    else {
      if (param_6 != 2) {
        if (param_6 == 1) {
          in_stack_fffffffffffffe48 = (float *)CONCAT44(uVar12,fVar10);
          auVar13 = ZEXT464((uint)param_7);
          auVar16 = ZEXT1664(auVar16._0_16_);
          auVar20 = ZEXT1664(auVar20._0_16_);
          auVar26 = ZEXT1664(auVar26._0_16_);
          FUN_180428a20(param_1,&local_180,&local_160,param_2,in_stack_fffffffffffffe48,fVar11,
                        param_7,uVar5,0);
          auVar24 = ZEXT464((uint)fStack_15c);
          auVar22 = ZEXT464((uint)local_160);
          auVar30 = ZEXT464((uint)fStack_17c);
          auVar28 = ZEXT464((uint)local_180);
          local_188 = fStack_15c;
          local_res8 = local_160;
          goto LAB_180429271;
        }
        goto LAB_18042925b;
      }
      fVar11 = fVar11 * fVar14;
      local_res8 = local_res8 - fVar10 * fVar14;
      fVar9 = (local_188 - fVar11) - -fVar10 * fVar14;
      local_188 = -fVar10 * fVar14 + (local_188 - fVar11);
      fVar25 = local_res8 - fVar11;
      local_res8 = fVar11 + local_res8;
    }
    in_stack_fffffffffffffe48 = (float *)CONCAT44(uVar12,local_188);
    auVar16 = ZEXT1664(auVar16._0_16_);
    auVar20 = ZEXT1664(auVar20._0_16_);
    auVar22 = ZEXT464((uint)local_res8);
    auVar24 = ZEXT464((uint)local_188);
    auVar26 = ZEXT1664(auVar26._0_16_);
    auVar28 = ZEXT464((uint)fVar25);
    auVar30 = ZEXT464((uint)fVar9);
    FUN_1804283c0(param_1);
    local_180 = auVar28._0_4_;
    fStack_17c = auVar30._0_4_;
    local_160 = auVar22._0_4_;
    fStack_15c = auVar24._0_4_;
  }
  else {
    if (1e-06 < fVar9) {
      fVar10 = fVar10 * (1.0 / fVar9);
      fVar11 = fVar11 * (1.0 / fVar9);
    }
    local_res8 = fVar9 * fVar10 * fVar25 + local_res8;
    local_188 = fVar9 * fVar11 * fVar25 + local_188;
    fStack_17c = local_188 - -fVar10 * fVar14;
    fStack_15c = -fVar10 * fVar14 + local_188;
    local_180 = local_res8 - fVar11 * fVar14;
    auVar19._4_4_ = fStack_17c;
    auVar19._0_4_ = local_180;
    auVar19._8_8_ = uStack_178;
    local_118._16_4_ = uStack_170;
    local_118._0_16_ = auVar19;
    local_118._20_4_ = uStack_16c;
    local_118._24_4_ = uStack_168;
    local_118._28_4_ = uStack_164;
    local_138 = vshufps_avx(auVar19,auVar19,0x55);
    local_160 = fVar11 * fVar14 + local_res8;
    auVar18._4_4_ = fStack_15c;
    auVar18._0_4_ = local_160;
    auVar18._8_8_ = uStack_158;
    local_f8._16_4_ = uStack_150;
    local_f8._0_16_ = auVar18;
    local_f8._20_4_ = uStack_14c;
    local_f8._24_4_ = uStack_148;
    local_f8._28_4_ = uStack_144;
    local_128 = vshufps_avx(auVar18,auVar18,0x55);
LAB_18042925b:
    auVar30 = ZEXT464((uint)fStack_17c);
    auVar28 = ZEXT464((uint)local_180);
    auVar24 = ZEXT464((uint)fStack_15c);
    auVar22 = ZEXT464((uint)local_160);
    local_res8 = local_160;
    local_188 = fStack_15c;
  }
  auVar13 = ZEXT464((uint)param_7);
LAB_180429271:
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
  auVar19 = auVar16._0_16_;
  auVar23 = auVar24._0_16_;
  auVar21 = auVar22._0_16_;
  auVar29 = auVar30._0_16_;
  auVar27 = auVar28._0_16_;
  auVar18 = auVar20._0_16_;
  if ((int)(uint)bVar8 < param_3) {
    uVar6 = (ulonglong)(param_3 - (uint)bVar8);
    pfVar4 = param_2;
    do {
      param_2 = pfVar2;
      fVar9 = auVar16._0_4_;
      auVar19 = auVar20._0_16_;
      uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
      if (((uint)param_2[7] & 1) == 0) {
        auVar16 = ZEXT464((uint)(param_2[1] - fVar9 * param_2[6]));
        auVar26 = ZEXT464((uint)(fVar9 * param_2[5] + *param_2));
        auVar13 = ZEXT464((uint)(*param_2 - fVar9 * param_2[5]));
        auVar17 = ZEXT464((uint)(param_2[1] + fVar9 * param_2[6]));
        auVar20 = ZEXT1664(auVar19);
        auVar22 = ZEXT1664(auVar22._0_16_);
        auVar24 = ZEXT1664(auVar24._0_16_);
        FUN_1804283c0(param_1);
        in_stack_fffffffffffffe48 = (float *)CONCAT44(uVar12,auVar17._0_4_);
        FUN_1804283c0(param_1,auVar22._0_8_,auVar24._0_8_,auVar26._0_8_,in_stack_fffffffffffffe48);
        local_180 = auVar13._0_4_;
        fStack_17c = auVar16._0_4_;
        local_res8 = auVar26._0_4_;
        local_188 = auVar17._0_4_;
        auVar28 = ZEXT1664(auVar13._0_16_);
        auVar30 = ZEXT1664(auVar16._0_16_);
        auVar22 = ZEXT1664(auVar26._0_16_);
        auVar24 = ZEXT1664(auVar17._0_16_);
        local_160 = local_res8;
        fStack_15c = local_188;
LAB_18042963c:
        auVar13 = ZEXT464((uint)param_7);
      }
      else {
        if (param_5 == 1) {
          auVar20 = ZEXT1664(auVar16._0_16_);
          auVar13 = ZEXT1664(auVar19);
          auVar22 = ZEXT1664(auVar22._0_16_);
          auVar24 = ZEXT1664(auVar24._0_16_);
          auVar26 = ZEXT1664(auVar26._0_16_);
          auVar28 = ZEXT1664(auVar28._0_16_);
          auVar30 = ZEXT1664(auVar30._0_16_);
          auVar16._0_8_ = FUN_180636c80();
          auVar16._8_56_ = extraout_var;
          local_140 = (uint)auVar16._0_8_;
          auVar16 = ZEXT1664(auVar16._0_16_);
          fVar9 = (float)FUN_180636c80((uint)param_2[2] ^ auVar13._0_4_,param_2[3]);
          fVar9 = fVar9 - auVar16._0_4_;
          fVar25 = auVar26._0_4_;
          if (fVar9 < fVar25) {
            fVar9 = fVar9 + 6.2831855;
          }
          if (fVar25 < fVar9) {
            fVar9 = fVar9 + -6.2831855;
          }
          auVar19 = vroundss_avx(ZEXT816(0),
                                 ZEXT416((uint)((ABS(fVar9) / fVar25) * (float)(int)uVar5)),2);
          uVar3 = (uint)auVar19._0_4_;
          local_res8 = auVar22._0_4_;
          if ((int)uVar3 < 2) {
            uVar3 = 2;
          }
          local_188 = auVar24._0_4_;
          if (uVar5 < uVar3) {
            uVar3 = uVar5;
          }
          iVar7 = 0;
          if (uVar3 != 0) {
            fVar25 = (float)(int)(uVar3 - 1);
            do {
              uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
              fVar10 = ((float)iVar7 / fVar25) * fVar9 + auVar16._0_4_;
              auVar16 = ZEXT464((uint)fVar10);
              fVar10 = (float)FUN_180637540(fVar10);
              fVar10 = fVar10 * auVar20._0_4_;
              fVar11 = (float)FUN_180638e00(auVar16._0_8_);
              fVar11 = fVar11 * auVar20._0_4_;
              fVar14 = *param_2 - fVar10;
              auVar20 = ZEXT464((uint)fVar14);
              fVar1 = param_2[1] - fVar11;
              auVar16 = ZEXT464((uint)fVar1);
              auVar26 = ZEXT464((uint)(fVar10 + *param_2));
              auVar13 = ZEXT464((uint)(fVar11 + param_2[1]));
              uVar31 = CONCAT44(uVar12,auVar30._0_4_);
              FUN_1804283c0(param_1,fVar14,fVar1,auVar28._0_8_,uVar31);
              in_stack_fffffffffffffe48 =
                   (float *)CONCAT44((int)((ulonglong)uVar31 >> 0x20),auVar13._0_4_);
              FUN_1804283c0(param_1,auVar22._0_8_,auVar24._0_8_,auVar26._0_8_,
                            in_stack_fffffffffffffe48);
              iVar7 = iVar7 + 1;
              auVar28 = ZEXT1664(auVar20._0_16_);
              auVar20 = ZEXT464((uint)fVar15);
              auVar30 = ZEXT1664(auVar16._0_16_);
              auVar16 = ZEXT464(local_140);
              auVar22 = ZEXT1664(auVar26._0_16_);
              auVar24 = ZEXT1664(auVar13._0_16_);
            } while (iVar7 < (int)uVar3);
            local_188 = auVar13._0_4_;
            local_res8 = auVar26._0_4_;
          }
          auVar20 = ZEXT464(0x80000000);
          local_180 = auVar28._0_4_;
          fStack_17c = auVar30._0_4_;
          local_160 = auVar22._0_4_;
          fStack_15c = auVar24._0_4_;
          goto LAB_18042963c;
        }
        if ((param_5 == 2) || (((uint)param_2[7] & 2) != 0)) {
          fVar25 = *param_2;
          fVar10 = param_2[1];
          fVar11 = (float)((uint)pfVar4[2] ^ auVar20._0_4_) * fVar9;
          fVar14 = fVar10 - fVar11;
          auVar16 = ZEXT464((uint)(fVar9 * param_2[3] + fVar25));
          auVar26 = ZEXT464((uint)(fVar25 - fVar9 * pfVar4[3]));
          auVar13 = ZEXT464((uint)(fVar10 - -param_2[2] * fVar9));
          auVar20 = ZEXT464((uint)(fVar11 + fVar10));
          auVar22 = ZEXT464((uint)(fVar25 - fVar9 * param_2[3]));
          auVar24 = ZEXT464((uint)(-param_2[2] * fVar9 + fVar10));
          auVar28 = ZEXT464((uint)(fVar9 * pfVar4[3] + fVar25));
          FUN_1804283c0(param_1);
          uVar31 = CONCAT44(uVar12,fVar14);
          FUN_1804283c0(param_1,auVar22._0_8_,auVar13._0_8_,auVar26._0_8_,uVar31);
          uVar31 = CONCAT44((int)((ulonglong)uVar31 >> 0x20),auVar20._0_4_);
          FUN_1804283c0(param_1,local_res8,local_188,auVar28._0_8_,uVar31);
          in_stack_fffffffffffffe48 =
               (float *)CONCAT44((int)((ulonglong)uVar31 >> 0x20),auVar24._0_4_);
          FUN_1804283c0(param_1,auVar28._0_8_,auVar20._0_8_,auVar16._0_8_,in_stack_fffffffffffffe48)
          ;
          auVar20 = ZEXT464(0x80000000);
          local_180 = auVar22._0_4_;
          auVar28 = ZEXT1664(auVar22._0_16_);
          auVar22 = ZEXT1664(auVar16._0_16_);
          fStack_17c = auVar13._0_4_;
          local_res8 = auVar16._0_4_;
          local_188 = auVar24._0_4_;
          auVar30 = ZEXT1664(auVar13._0_16_);
          local_160 = local_res8;
          fStack_15c = local_188;
          goto LAB_18042963c;
        }
        uVar12 = auVar13._0_4_;
        auVar13 = ZEXT1664(auVar13._0_16_);
        auVar20 = ZEXT1664(auVar19);
        in_stack_fffffffffffffe48 = param_2;
        FUN_180428cd0(param_1,&local_180,&local_160,pfVar4,param_2,uVar12);
        auVar24 = ZEXT464((uint)fStack_15c);
        auVar22 = ZEXT464((uint)local_160);
        auVar30 = ZEXT464((uint)fStack_17c);
        auVar28 = ZEXT464((uint)local_180);
        local_188 = fStack_15c;
        local_res8 = local_160;
      }
      uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffe48 >> 0x20);
      auVar23 = auVar24._0_16_;
      auVar21 = auVar22._0_16_;
      auVar29 = auVar30._0_16_;
      auVar27 = auVar28._0_16_;
      auVar18 = auVar20._0_16_;
      auVar16 = ZEXT464((uint)fVar15);
      auVar19 = ZEXT416((uint)fVar15);
      auVar26 = ZEXT464(0x40490fdb);
      pfVar2 = param_2 + 8;
      uVar6 = uVar6 - 1;
      pfVar4 = param_2;
    } while (uVar6 != 0);
  }
  fVar15 = auVar19._0_4_;
  uVar3 = auVar18._0_4_;
  if (param_4 == 0) {
    fVar9 = *pfVar2;
    fVar25 = pfVar2[1];
    fVar11 = fVar9 - *param_2;
    fVar14 = fVar25 - param_2[1];
    fVar10 = fVar14 * fVar14 + fVar11 * fVar11;
    if (fVar10 < 0.0) {
      auVar16 = ZEXT464((uint)fVar11);
      auVar26 = ZEXT464((uint)fVar14);
      auVar20 = ZEXT1664(auVar19);
      auVar13 = ZEXT1664(auVar18);
      auVar22 = ZEXT1664(auVar21);
      auVar24 = ZEXT1664(auVar23);
      auVar28 = ZEXT1664(auVar27);
      auVar30 = ZEXT1664(auVar29);
      fVar10 = (float)FUN_18061e150();
      fVar15 = auVar20._0_4_;
      auVar29 = auVar30._0_16_;
      auVar27 = auVar28._0_16_;
      auVar23 = auVar24._0_16_;
      auVar21 = auVar22._0_16_;
      fVar11 = auVar16._0_4_;
      fVar14 = auVar26._0_4_;
      uVar3 = auVar13._0_4_;
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    if (1e-06 < fVar10) {
      fVar11 = fVar11 * (1.0 / fVar10);
      fVar14 = fVar14 * (1.0 / fVar10);
    }
    if (param_6 == 0) {
      fVar10 = (float)((uint)fVar14 ^ uVar3) * fVar15;
      fVar14 = fVar25 - fVar11 * fVar15;
      auVar16 = ZEXT464((uint)(fVar9 - fVar10));
      auVar26 = ZEXT464((uint)(fVar25 + fVar11 * fVar15));
      auVar20 = ZEXT464((uint)(fVar9 + fVar10));
      auVar13 = ZEXT1664(auVar21);
      auVar22 = ZEXT1664(auVar23);
      auVar24 = ZEXT1664(auVar27);
      auVar28 = ZEXT1664(auVar29);
      FUN_1804283c0(param_1);
      FUN_1804283c0(param_1,auVar13._0_8_,auVar22._0_8_,auVar16._0_8_,CONCAT44(uVar12,fVar14));
      FUN_1804283c0(param_1,auVar20._0_8_,auVar26._0_8_,auVar24._0_8_,auVar28._0_4_);
    }
    else if (param_6 == 2) {
      fVar9 = fVar9 - fVar15 * (float)((uint)fVar11 ^ uVar3);
      fVar10 = (float)((uint)fVar14 ^ uVar3) * fVar15;
      fVar14 = (fVar25 - fVar10) - fVar11 * fVar15;
      auVar16 = ZEXT464((uint)(fVar11 * fVar15 + (fVar25 - fVar10)));
      auVar26 = ZEXT464((uint)(fVar9 - fVar10));
      auVar20 = ZEXT464((uint)(fVar9 + fVar10));
      auVar13 = ZEXT1664(auVar21);
      auVar22 = ZEXT1664(auVar23);
      auVar24 = ZEXT1664(auVar27);
      auVar28 = ZEXT1664(auVar29);
      FUN_1804283c0(param_1);
      FUN_1804283c0(param_1,auVar13._0_8_,auVar22._0_8_,auVar26._0_8_,CONCAT44(uVar12,fVar14));
      FUN_1804283c0(param_1,auVar20._0_8_,auVar16._0_8_,auVar24._0_8_,auVar28._0_4_);
    }
    else if (param_6 == 1) {
      FUN_180428a20(param_1,&local_160,&local_180,pfVar2,CONCAT44(uVar12,(uint)fVar11 ^ uVar3),
                    (uint)fVar14 ^ uVar3,param_7,uVar5,1);
    }
  }
  else {
    auVar16 = ZEXT1664(auVar21);
    auVar26 = ZEXT1664(auVar23);
    FUN_1804283c0(param_1);
    FUN_1804283c0(param_1,auVar16._0_8_,auVar26._0_8_,local_f8._0_4_,
                  CONCAT44(uVar12,local_128._0_4_));
  }
  return;
}



