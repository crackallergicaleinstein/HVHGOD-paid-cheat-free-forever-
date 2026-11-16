// FUN_1802a0f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a0f10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a0f10(undefined8 param_1,undefined8 param_2,float *param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,char param_7)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong *plVar4;
  int *piVar5;
  undefined8 ****ppppuVar6;
  undefined1 (*pauVar7) [32];
  float *pfVar8;
  int *piVar9;
  longlong lVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
  undefined8 *puVar14;
  char *pcVar15;
  float fVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined8 uVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [16];
  undefined1 auVar24 [64];
  float fVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [16];
  undefined1 auVar37 [64];
  undefined1 auStack_1b8 [32];
  float local_198;
  float local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_178;
  float local_168 [4];
  undefined8 local_158;
  float local_150;
  float local_14c;
  undefined8 ****local_148;
  undefined8 local_140;
  int local_138 [2];
  undefined8 ****local_130 [2];
  undefined8 local_120;
  ulonglong local_118;
  undefined8 ****local_100 [2];
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  plVar4 = (longlong *)FUN_1802abb30(param_1,&local_148,param_4);
  lVar10 = *plVar4;
  local_138[1] = 100;
  local_138[0] = 0;
  lVar12 = 0x24;
  if (param_7 == '\0') {
    lVar12 = 0x18;
  }
  iVar1 = *(int *)(lVar12 + param_4);
  piVar9 = local_138;
  if (-1 < iVar1) {
    piVar9 = (int *)(lVar12 + param_4);
  }
  piVar5 = local_138 + 1;
  if (iVar1 < 0x65) {
    piVar5 = piVar9;
  }
  iVar1 = *piVar5;
  fVar16 = (float)iVar1 / 100.0;
  if (param_7 == '\0') {
    pfVar11 = (float *)(lVar10 + 0x18);
    pcVar15 = (char *)(lVar10 + 0x58);
  }
  else {
    pfVar11 = (float *)(lVar10 + 0x2c);
    pcVar15 = (char *)(lVar10 + 0x40);
  }
  if (*pcVar15 != '\0') {
    fVar25 = fVar16 - *pfVar11;
    if (fVar25 <= 0.5) {
      pfVar11[2] = fVar16;
      fVar29 = DAT_180bbae00;
      fVar16 = (fVar25 * pfVar11[3] - pfVar11[1] * pfVar11[4]) * DAT_180bbae00 + pfVar11[1];
      pfVar11[1] = fVar16;
      *pfVar11 = fVar16 * fVar29 + *pfVar11;
      goto LAB_1802a1079;
    }
  }
  *pfVar11 = fVar16;
  pfVar11[2] = fVar16;
  pfVar11[1] = 0.0;
  *pcVar15 = '\x01';
LAB_1802a1079:
  auVar32 = vpcmpeqd_avx(ZEXT116(*(byte *)(param_5 + 0x70)),SUB6416(ZEXT464(0),0));
  auVar27._12_4_ = 0;
  auVar27._0_12_ = ZEXT812(0);
  auVar37 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar32 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),auVar27 << 0x20,auVar32);
  auVar34 = ZEXT1664(auVar32);
  bVar2 = FUN_18029b970(*(undefined1 *)(param_5 + 0x68));
  auVar26 = ZEXT464(0x40600000);
  if (bVar2 == 0) {
    auVar27 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_3[2] - *param_3)),1);
    auVar32 = auVar26._0_16_;
  }
  else {
    auVar32 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_3[3] - param_3[1])),1);
    auVar27 = auVar26._0_16_;
  }
  auVar24 = ZEXT1664(auVar27);
  auVar22 = ZEXT1664(auVar32);
  auVar19 = vpcmpeqd_avx(ZEXT116(bVar2),SUB6416(ZEXT464(0),0));
  if (iVar1 < 100) {
    auVar32 = vblendvps_avx(auVar32,auVar27,auVar19);
    auVar32 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar32._0_4_ * *pfVar11)),1);
  }
  else {
    auVar32 = vblendvps_avx(auVar32,auVar27,auVar19);
  }
  auVar31 = ZEXT1664(auVar32);
  FUN_18015bea0(local_100,iVar1);
  local_158 = DAT_180b90858;
  puVar14 = &local_158;
  if (DAT_180b90858 == 0) {
    puVar14 = &DAT_180bbade0;
  }
  if (DAT_180bbadd0 == DAT_180bbadd8) {
    FUN_1801b6250(&DAT_180bbadc8);
  }
  else {
    *DAT_180bbadd0 = *puVar14;
    DAT_180bbadd0 = DAT_180bbadd0 + 1;
  }
  fVar16 = auVar26._0_4_;
  ppppuVar6 = local_100;
  if (0xf < local_e8) {
    ppppuVar6 = local_100[0];
  }
  lVar10 = DAT_180bbade0;
  if (DAT_180bbadc8 != DAT_180bbadd0) {
    lVar10 = DAT_180bbadd0[-1];
  }
  if (lVar10 == 0) {
    local_158._0_4_ = 0.0;
    local_158._4_4_ = 0.0;
  }
  else {
    local_140 = local_f0;
    local_148 = ppppuVar6;
    FUN_180430010(lVar10,&local_158,&local_148);
    fVar16 = auVar26._0_4_;
  }
  if (1 < (ulonglong)((longlong)DAT_180bbadd0 - (longlong)DAT_180bbadc8 >> 3)) {
    DAT_180bbadd0 = DAT_180bbadd0 + -1;
  }
  if ((*(char *)(param_5 + 0x140) == '\0') || (99 < iVar1)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  local_150 = param_3[2] - *param_3;
  local_14c = param_3[3] - param_3[1];
  local_180 = param_6;
  local_188 = CONCAT71(local_188._1_7_,uVar3);
  local_198 = (float)local_158;
  local_190 = local_158._4_4_;
  local_158 = *(longlong *)param_3;
  pauVar7 = (undefined1 (*) [32])
            FUN_18029c270(local_130,&local_158,*(undefined1 *)(param_5 + 0x68),
                          auVar34._0_4_ + auVar34._0_4_ + fVar16);
  auVar36 = auVar37._0_16_;
  auVar30 = auVar31._0_16_;
  auVar23 = auVar24._0_16_;
  auVar21 = auVar22._0_16_;
  auVar32 = *(undefined1 (*) [16])pauVar7[1];
  auVar33 = ZEXT1664(auVar32);
  auVar19 = SUB3216(*pauVar7,0x10);
  auVar27 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(SUB324(*pauVar7,0x10) + auVar34._0_4_)),1);
  auVar28 = ZEXT1664(auVar27);
  auVar19 = vshufps_avx(auVar19,auVar19,0x55);
  auVar19 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar19._0_4_ + auVar34._0_4_)),1);
  auVar26 = ZEXT1664(auVar19);
  if (*(char *)(param_5 + 0x1a8) != '\0') {
    fVar16 = (float)CONCAT13((char)(int)((float)(*(uint *)(param_5 + 0x224) >> 0x18) *
                                        *(float *)(param_5 + 0x228)),
                             (int3)*(uint *)(param_5 + 0x224));
    iVar13 = 0;
    auVar34 = ZEXT464(0x3f400000);
    local_168[0] = fVar16;
    do {
      fVar25 = (float)iVar13 * auVar34._0_4_;
      local_198 = fVar25 + fVar25 + auVar22._0_4_;
      auVar22 = ZEXT1664(auVar22._0_16_);
      auVar24 = ZEXT1664(auVar24._0_16_);
      auVar26 = ZEXT1664(auVar26._0_16_);
      auVar28 = ZEXT1664(auVar28._0_16_);
      auVar31 = ZEXT1664(auVar31._0_16_);
      auVar33 = ZEXT1664(auVar33._0_16_);
      auVar34 = ZEXT1664(auVar34._0_16_);
      auVar37 = ZEXT1664(auVar37._0_16_);
      local_190 = fVar16;
      FUN_1804307e0(&DAT_180bbb038);
      auVar36 = auVar37._0_16_;
      auVar32 = auVar33._0_16_;
      auVar30 = auVar31._0_16_;
      auVar27 = auVar28._0_16_;
      auVar19 = auVar26._0_16_;
      auVar23 = auVar24._0_16_;
      auVar21 = auVar22._0_16_;
      iVar13 = iVar13 + 1;
    } while (iVar13 < 3);
  }
  if (*(char *)(param_5 + 0x70) != '\0') {
    local_198 = auVar21._0_4_ + 2.0;
    local_190 = *(float *)(param_5 + 0x21c);
    auVar26 = ZEXT1664(auVar21);
    auVar34 = ZEXT1664(auVar23);
    auVar37 = ZEXT1664(auVar19);
    auVar22 = ZEXT1664(auVar27);
    auVar24 = ZEXT1664(auVar30);
    auVar31 = ZEXT1664(auVar32);
    auVar28 = ZEXT1664(auVar36);
    FUN_1804307e0(param_2);
    auVar36 = auVar28._0_16_;
    auVar32 = auVar31._0_16_;
    auVar30 = auVar24._0_16_;
    auVar27 = auVar22._0_16_;
    auVar19 = auVar37._0_16_;
    auVar23 = auVar34._0_16_;
    auVar21 = auVar26._0_16_;
  }
  local_190 = *(float *)(param_5 + 0x218);
  local_198 = auVar21._0_4_;
  auVar26 = ZEXT1664(auVar21);
  auVar34 = ZEXT1664(auVar23);
  auVar37 = ZEXT1664(auVar19);
  auVar22 = ZEXT1664(auVar27);
  auVar24 = ZEXT1664(auVar30);
  auVar31 = ZEXT1664(auVar32);
  auVar28 = ZEXT1664(auVar36);
  FUN_1804307e0(param_2);
  fVar16 = auVar24._0_4_;
  if (auVar28._0_4_ < fVar16) {
    local_190 = *(float *)(param_5 + 0x210);
    uVar17 = auVar22._0_8_;
    local_198 = auVar26._0_4_;
    uVar20 = auVar24._0_8_;
    uVar18 = auVar37._0_8_;
    if (*(char *)(param_5 + 0xd8) == '\0') {
      if (bVar2 != 0) {
        uVar18 = (ulonglong)(uint)((auVar37._0_4_ + local_198) - fVar16);
        uVar20 = auVar34._0_8_;
        local_198 = fVar16;
      }
      FUN_1804307e0(param_2,uVar17,uVar18,uVar20);
    }
    else {
      local_178 = *(undefined4 *)(param_5 + 0x214);
      if (bVar2 == 0) {
        local_180 = CONCAT44(local_180._4_4_,local_190);
        local_188 = CONCAT44(local_188._4_4_,local_190);
        local_190 = (float)local_178;
        FUN_180430a80(param_2,uVar17,uVar18,uVar20);
      }
      else {
        fVar25 = auVar37._0_4_ + local_198;
        local_180 = CONCAT44(local_180._4_4_,local_178);
        local_188 = CONCAT44(local_188._4_4_,local_190);
        local_198 = fVar16;
        FUN_180430a80(param_2,uVar17,fVar25 - fVar16,auVar34._0_8_);
      }
    }
  }
  if ((*(char *)(param_5 + 0x140) != '\0') && (iVar1 < 100)) {
    local_158 = DAT_180b90858;
    puVar14 = &local_158;
    if (DAT_180b90858 == 0) {
      puVar14 = &DAT_180bbade0;
    }
    if (DAT_180bbadd0 == DAT_180bbadd8) {
      FUN_1801b6250(&DAT_180bbadc8);
    }
    else {
      *DAT_180bbadd0 = *puVar14;
      DAT_180bbadd0 = DAT_180bbadd0 + 1;
    }
    FUN_18015bea0(local_130,iVar1);
    fVar29 = auVar24._0_4_;
    fVar25 = auVar37._0_4_;
    fVar16 = auVar26._0_4_;
    auVar32 = auVar31._0_16_;
    local_148 = local_130;
    if (0xf < local_118) {
      local_148 = local_130[0];
    }
    if (DAT_180bbadc8 == DAT_180bbadd0) {
      lVar10 = DAT_180bbade0;
    }
    else {
      lVar10 = DAT_180bbadd0[-1];
    }
    fVar35 = auVar28._0_4_;
    if (lVar10 != 0) {
      local_140 = local_120;
      FUN_180430010(lVar10,&local_158,&local_148);
      fVar29 = auVar24._0_4_;
      fVar25 = auVar37._0_4_;
      fVar16 = auVar26._0_4_;
      auVar32 = auVar31._0_16_;
      fVar35 = local_158._4_4_;
    }
    auVar27 = vroundss_avx(ZEXT816(0),auVar32,1);
    if (bVar2 == 0) {
      auVar32 = vshufps_avx(auVar32,auVar32,0x55);
      auVar32 = vroundss_avx(ZEXT816(0),auVar32,1);
      uVar18 = auVar32._0_8_;
    }
    else {
      local_158 = CONCAT44(local_158._4_4_,param_3[3] - fVar35);
      auVar32 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(((fVar25 + fVar16) - fVar29) - fVar35 * 0.5))
                             ,1);
      local_168[0] = auVar32._0_4_;
      pfVar11 = local_168;
      if (local_168[0] < param_3[1]) {
        pfVar11 = param_3 + 1;
      }
      pfVar8 = (float *)&local_158;
      if (local_168[0] <= param_3[3] - fVar35) {
        pfVar8 = pfVar11;
      }
      uVar18 = (ulonglong)(uint)*pfVar8;
    }
    local_198 = *(float *)(param_5 + 0x220);
    local_148 = local_130;
    if (0xf < local_118) {
      local_148 = local_130[0];
    }
    local_140 = local_120;
    local_188 = 0;
    local_190 = 1.4013e-45;
    FUN_180434550(param_2,auVar27._0_8_,uVar18,&local_148);
    if (1 < (ulonglong)((longlong)DAT_180bbadd0 - (longlong)DAT_180bbadc8 >> 3)) {
      DAT_180bbadd0 = DAT_180bbadd0 + -1;
    }
    FUN_18015c010(local_130);
  }
  FUN_18015c010(local_100);
}



