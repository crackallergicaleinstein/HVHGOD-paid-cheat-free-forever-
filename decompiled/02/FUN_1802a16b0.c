// FUN_1802a16b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a16b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a16b0(undefined8 param_1,undefined8 param_2,float *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  byte bVar1;
  longlong *plVar2;
  undefined8 ****ppppuVar3;
  undefined1 (*pauVar4) [32];
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [16];
  undefined8 uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  float fVar32;
  undefined1 auStack_1f8 [32];
  float local_1d8;
  float local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  float local_198 [4];
  undefined8 ****local_188;
  undefined8 *puStack_180;
  undefined8 local_178;
  undefined8 *local_170;
  float local_168 [2];
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  float local_14c;
  undefined8 ****local_148 [2];
  undefined8 *local_138;
  ulonglong local_130;
  undefined8 ****local_118 [2];
  undefined8 *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  
  local_f8 = DAT_1808d5f00 ^ (ulonglong)auStack_1f8;
  local_178 = param_6;
  pfVar7 = (float *)(param_4 + 0x3e4);
  if ((int)*pfVar7 < 1) {
  }
  plVar2 = (longlong *)FUN_1802abb30(param_1,&local_188,param_4);
  lVar6 = *plVar2;
  local_168[0] = 0.0;
  fVar8 = *(float *)(param_4 + 0x3e0);
  pfVar5 = local_168;
  if (-1 < (int)fVar8) {
    pfVar5 = (float *)(param_4 + 0x3e0);
  }
  if ((int)*pfVar7 < (int)fVar8) {
    pfVar5 = pfVar7;
  }
  fVar8 = *pfVar5;
  fVar19 = (float)(int)fVar8 / (float)(int)*pfVar7;
  fVar32 = 0.5;
  if (*(char *)(lVar6 + 0x58) != '\0') {
    fVar23 = fVar19 - *(float *)(lVar6 + 0x44);
    if (fVar23 <= 0.5) {
      *(float *)(lVar6 + 0x4c) = fVar19;
      fVar28 = DAT_180bbae00;
      fVar19 = (fVar23 * *(float *)(lVar6 + 0x50) -
               *(float *)(lVar6 + 0x48) * *(float *)(lVar6 + 0x54)) * DAT_180bbae00 +
               *(float *)(lVar6 + 0x48);
      *(float *)(lVar6 + 0x48) = fVar19;
      fVar19 = fVar19 * fVar28 + *(float *)(lVar6 + 0x44);
      goto LAB_1802a1804;
    }
  }
  *(float *)(lVar6 + 0x4c) = fVar19;
  *(undefined4 *)(lVar6 + 0x48) = 0;
  *(undefined1 *)(lVar6 + 0x58) = 1;
LAB_1802a1804:
  *(float *)(lVar6 + 0x44) = fVar19;
  auVar26 = vpcmpeqd_avx(ZEXT116(*(byte *)(param_5 + 0x70)),SUB6416(ZEXT464(0),0));
  auVar20._12_4_ = 0;
  auVar20._0_12_ = ZEXT812(0);
  auVar30 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar26 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),auVar20 << 0x20,auVar26);
  auVar31 = ZEXT1664(auVar26);
  local_198[0] = fVar8;
  bVar1 = FUN_18029b970(*(undefined1 *)(param_5 + 0x68));
  auVar21 = ZEXT464(0x40600000);
  if (bVar1 == 0) {
    auVar20 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_3[2] - *param_3)),1);
    auVar26 = auVar21._0_16_;
  }
  else {
    auVar26 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_3[3] - param_3[1])),1);
    auVar20 = auVar21._0_16_;
  }
  auVar18 = ZEXT1664(auVar20);
  auVar16 = ZEXT1664(auVar26);
  local_14c = *pfVar7;
  auVar13 = vpcmpeqd_avx(ZEXT116(bVar1),SUB6416(ZEXT464(0),0));
  if (fVar8 == local_14c) {
    auVar26 = vblendvps_avx(auVar26,auVar20,auVar13);
  }
  else {
    auVar26 = vblendvps_avx(auVar26,auVar20,auVar13);
    auVar26 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar26._0_4_ * fVar19)),1);
  }
  auVar25 = ZEXT1664(auVar26);
  local_160 = 0x1000000000000000;
  local_158 = 0x1000000000000004;
  local_188 = (undefined8 ****)0x2;
  puStack_180 = &local_160;
  local_1a8 = &DAT_1807d124c;
  uStack_1a0 = 5;
  local_150 = fVar8;
  FUN_1801d97f0(local_118,&local_1a8,&local_188);
  local_1a8 = (undefined *)DAT_180b90858;
  puVar10 = &local_1a8;
  if (DAT_180b90858 == 0) {
    puVar10 = &DAT_180bbade0;
  }
  if (DAT_180bbadd0 == DAT_180bbadd8) {
    FUN_1801b6250(&DAT_180bbadc8);
  }
  else {
    *DAT_180bbadd0 = *puVar10;
    DAT_180bbadd0 = DAT_180bbadd0 + 1;
  }
  fVar19 = auVar21._0_4_;
  ppppuVar3 = local_118;
  if (0xf < local_100) {
    ppppuVar3 = local_118[0];
  }
  lVar6 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar6 = DAT_180bbadd0[-1];
  }
  if (lVar6 == 0) {
    local_1a8._0_4_ = 0.0;
    local_1a8._4_4_ = 0;
  }
  else {
    puStack_180 = local_108;
    local_188 = ppppuVar3;
    FUN_180430010(lVar6,&local_1a8,&local_188);
    fVar19 = auVar21._0_4_;
  }
  if (1 < (ulonglong)((longlong)DAT_180bbadd0 - (longlong)DAT_180bbadc8 >> 3)) {
    DAT_180bbadd0 = DAT_180bbadd0 + -1;
  }
  uStack_1a0 = CONCAT44(param_3[3] - param_3[1],param_3[2] - *param_3);
  local_1c0 = local_178;
  local_1c8 = CONCAT71(local_1c8._1_7_,*(undefined1 *)(param_5 + 0x140));
  local_1d8 = (float)local_1a8;
  local_1d0 = (float)local_1a8._4_4_;
  local_1a8 = (undefined *)*(undefined8 *)param_3;
  pauVar4 = (undefined1 (*) [32])
            FUN_18029c270(local_148,&local_1a8,*(undefined1 *)(param_5 + 0x68),
                          auVar31._0_4_ + auVar31._0_4_ + fVar19);
  uVar14 = local_1a8;
  auVar29 = auVar30._0_16_;
  auVar24 = auVar25._0_16_;
  auVar17 = auVar18._0_16_;
  auVar15 = auVar16._0_16_;
  auVar26 = *(undefined1 (*) [16])pauVar4[1];
  auVar27 = ZEXT1664(auVar26);
  auVar13 = SUB3216(*pauVar4,0x10);
  auVar20 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(SUB324(*pauVar4,0x10) + auVar31._0_4_)),1);
  auVar22 = ZEXT1664(auVar20);
  auVar13 = vshufps_avx(auVar13,auVar13,0x55);
  auVar13 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar13._0_4_ + auVar31._0_4_)),1);
  auVar21 = ZEXT1664(auVar13);
  if (*(char *)(param_5 + 0x1a8) != '\0') {
    local_1a8._4_4_ = SUB84(uVar14,4);
    local_1a8._0_4_ =
         (float)CONCAT13((char)(int)((float)(*(uint *)(param_5 + 0x224) >> 0x18) *
                                    *(float *)(param_5 + 0x228)),(int3)*(uint *)(param_5 + 0x224));
    fVar8 = (float)local_1a8;
    iVar9 = 0;
    auVar31 = ZEXT464(0x3f400000);
    do {
      fVar19 = (float)iVar9 * auVar31._0_4_;
      local_1d8 = fVar19 + fVar19 + auVar16._0_4_;
      local_1d0 = fVar8;
      auVar16 = ZEXT1664(auVar16._0_16_);
      auVar18 = ZEXT1664(auVar18._0_16_);
      auVar21 = ZEXT1664(auVar21._0_16_);
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar25 = ZEXT1664(auVar25._0_16_);
      auVar27 = ZEXT1664(auVar27._0_16_);
      auVar30 = ZEXT1664(auVar30._0_16_);
      auVar31 = ZEXT1664(auVar31._0_16_);
      FUN_1804307e0(&DAT_180bbb038);
      auVar29 = auVar30._0_16_;
      auVar26 = auVar27._0_16_;
      auVar24 = auVar25._0_16_;
      auVar20 = auVar22._0_16_;
      auVar13 = auVar21._0_16_;
      auVar17 = auVar18._0_16_;
      auVar15 = auVar16._0_16_;
      iVar9 = iVar9 + 1;
    } while (iVar9 < 3);
    fVar8 = local_198[0];
  }
  if (*(char *)(param_5 + 0x70) != '\0') {
    local_1d8 = auVar15._0_4_ + 2.0;
    local_1d0 = *(float *)(param_5 + 0x21c);
    auVar21 = ZEXT1664(auVar15);
    auVar30 = ZEXT1664(auVar17);
    auVar31 = ZEXT1664(auVar13);
    auVar16 = ZEXT1664(auVar20);
    auVar18 = ZEXT1664(auVar24);
    auVar25 = ZEXT1664(auVar26);
    auVar22 = ZEXT1664(auVar29);
    FUN_1804307e0(param_2);
    auVar29 = auVar22._0_16_;
    auVar26 = auVar25._0_16_;
    auVar24 = auVar18._0_16_;
    auVar20 = auVar16._0_16_;
    auVar13 = auVar31._0_16_;
    auVar17 = auVar30._0_16_;
    auVar15 = auVar21._0_16_;
  }
  local_1d0 = *(float *)(param_5 + 0x218);
  local_1d8 = auVar15._0_4_;
  auVar21 = ZEXT1664(auVar15);
  auVar30 = ZEXT1664(auVar17);
  auVar31 = ZEXT1664(auVar13);
  auVar16 = ZEXT1664(auVar20);
  auVar18 = ZEXT1664(auVar24);
  auVar25 = ZEXT1664(auVar26);
  auVar22 = ZEXT1664(auVar29);
  FUN_1804307e0(param_2);
  fVar19 = auVar18._0_4_;
  if (auVar22._0_4_ < fVar19) {
    local_1d0 = *(float *)(param_5 + 0x210);
    uVar11 = auVar16._0_8_;
    local_1d8 = auVar21._0_4_;
    uVar14 = auVar18._0_8_;
    uVar12 = auVar31._0_8_;
    if (*(char *)(param_5 + 0xd8) == '\0') {
      if (bVar1 != 0) {
        uVar12 = (ulonglong)(uint)((auVar31._0_4_ + local_1d8) - fVar19);
        uVar14 = auVar30._0_8_;
        local_1d8 = fVar19;
      }
      FUN_1804307e0(param_2,uVar11,uVar12,uVar14);
    }
    else {
      local_1b8 = *(undefined4 *)(param_5 + 0x214);
      if (bVar1 == 0) {
        local_1c0 = CONCAT44(local_1c0._4_4_,local_1d0);
        local_1c8 = CONCAT44(local_1c8._4_4_,local_1d0);
        local_1d0 = (float)local_1b8;
        FUN_180430a80(param_2,uVar11,uVar12,uVar14);
      }
      else {
        fVar23 = auVar31._0_4_ + local_1d8;
        local_1c0 = CONCAT44(local_1c0._4_4_,local_1b8);
        local_1c8 = CONCAT44(local_1c8._4_4_,local_1d0);
        local_1d8 = fVar19;
        FUN_180430a80(param_2,uVar11,fVar23 - fVar19,auVar30._0_8_);
      }
    }
  }
  if (*(char *)(param_5 + 0x140) != '\0') {
    local_178 = DAT_180b90858;
    puVar10 = &local_178;
    if (DAT_180b90858 == 0) {
      puVar10 = &DAT_180bbade0;
    }
    if (DAT_180bbadd0 == DAT_180bbadd8) {
      FUN_1801b6250(&DAT_180bbadc8);
    }
    else {
      *DAT_180bbadd0 = *puVar10;
      DAT_180bbadd0 = DAT_180bbadd0 + 1;
    }
    local_160 = 0x1000000000000000;
    local_14c = *pfVar7;
    local_158 = 0x1000000000000004;
    local_178 = 2;
    local_170 = &local_160;
    local_188 = (undefined8 ****)&DAT_1807d124c;
    puStack_180 = (undefined8 *)0x5;
    local_150 = fVar8;
    FUN_1801d97f0(local_148,&local_188,&local_178);
    fVar23 = auVar18._0_4_;
    fVar19 = auVar31._0_4_;
    fVar8 = auVar21._0_4_;
    auVar26 = auVar25._0_16_;
    local_188 = local_148;
    if (0xf < local_130) {
      local_188 = local_148[0];
    }
    if (DAT_180bbadc8 == DAT_180bbadd0) {
      lVar6 = DAT_180bbade0;
    }
    else {
      lVar6 = DAT_180bbadd0[-1];
    }
    fVar28 = auVar22._0_4_;
    if (lVar6 != 0) {
      puStack_180 = local_138;
      FUN_180430010(lVar6,&local_178,&local_188);
      fVar23 = auVar18._0_4_;
      fVar19 = auVar31._0_4_;
      fVar8 = auVar21._0_4_;
      auVar26 = auVar25._0_16_;
      fVar28 = local_178._4_4_;
    }
    auVar20 = vroundss_avx(ZEXT816(0),auVar26,1);
    if (bVar1 == 0) {
      auVar26 = vshufps_avx(auVar26,auVar26,0x55);
      auVar26 = vroundss_avx(ZEXT816(0),auVar26,1);
      uVar12 = auVar26._0_8_;
    }
    else {
      local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,param_3[3] - fVar28);
      auVar26 = vroundss_avx(ZEXT816(0),
                             ZEXT416((uint)(((fVar19 + fVar8) - fVar23) - fVar28 * fVar32)),1);
      local_198[0] = auVar26._0_4_;
      pfVar7 = local_198;
      if (local_198[0] < param_3[1]) {
        pfVar7 = param_3 + 1;
      }
      pfVar5 = (float *)&local_1a8;
      if (local_198[0] <= param_3[3] - fVar28) {
        pfVar5 = pfVar7;
      }
      uVar12 = (ulonglong)(uint)*pfVar5;
    }
    local_1d8 = *(float *)(param_5 + 0x220);
    local_188 = local_148;
    if (0xf < local_130) {
      local_188 = local_148[0];
    }
    puStack_180 = local_138;
    local_1c8 = 0;
    local_1d0 = 1.4013e-45;
    FUN_180434550(param_2,auVar20._0_8_,uVar12,&local_188);
    if (1 < (ulonglong)((longlong)DAT_180bbadd0 - (longlong)DAT_180bbadc8 >> 3)) {
      DAT_180bbadd0 = DAT_180bbadd0 + -1;
    }
    FUN_18015c010(local_148);
  }
  FUN_18015c010(local_118);
}



