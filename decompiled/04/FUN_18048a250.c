// FUN_18048a250 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048a250 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048a250(char *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5,undefined4 param_6,char param_7,longlong param_8,
                  undefined8 param_9,char param_10)

{
  char cVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  longlong *plVar6;
  undefined4 uVar7;
  undefined1 (*pauVar8) [32];
  float *pfVar9;
  longlong lVar10;
  undefined *puVar11;
  char *pcVar12;
  uint uVar13;
  float fVar14;
  undefined8 extraout_XMM0_Qa;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  float fVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  longlong lVar19;
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined4 uVar26;
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auStack_2a8 [32];
  char **local_288;
  undefined8 *local_280;
  undefined4 *local_278;
  float *local_270;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_258;
  float local_248;
  float local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined1 local_228 [32];
  longlong local_208;
  char *pcStack_200;
  longlong lStack_1f8;
  longlong lStack_1f0;
  undefined8 local_1e8;
  float *pfStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8;
  undefined *local_198;
  char *local_190;
  float *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined *local_170;
  undefined1 local_168 [16];
  undefined8 local_158;
  char *pcStack_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 auStack_140 [16];
  float *pfStack_130;
  longlong lStack_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined *puStack_110;
  undefined1 auStack_108 [16];
  char local_f8;
  undefined7 uStack_f7;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_2a8;
  local_198 = param_5;
  local_178 = (undefined4)param_4;
  local_17c = (undefined4)param_3;
  if (DAT_180bbecdb == '\0') {
    local_180 = 1;
    local_170 = param_5;
    local_174 = param_6;
    local_168 = ZEXT816(0);
    auVar17._0_8_ = -(ulonglong)(param_8 == 0);
    auVar17._8_8_ = 0xffffffffffffffff;
    auVar17 = vblendvps_avx(SUB6416(ZEXT464(0x420d999a),0),SUB6416(ZEXT464(0x416ccccd),0),auVar17);
    auVar27 = ZEXT1664(auVar17);
    pcVar12 = param_1;
    if (param_1 != (char *)0xffffffffffffffff) {
      while (cVar1 = *pcVar12, cVar1 != '\0') {
        pcVar12 = pcVar12 + 1;
        if (((cVar1 == '#') && (*pcVar12 == '#')) || (pcVar12 == (char *)0xffffffffffffffff)) break;
      }
    }
    auVar28 = ZEXT464(0x41533333);
    local_190 = param_1;
    local_188 = param_2;
    fVar14 = (float)FUN_1804633e0(DAT_180c62ca8,auVar28._0_8_,param_1);
    local_238 = &local_198;
    auVar20._0_8_ = FUN_18048aa00(&local_238,*param_2);
    auVar20._8_56_ = extraout_var;
    auVar20 = ZEXT1664(auVar20._0_16_);
    auVar21._0_8_ = FUN_18048aa00(&local_238,param_4);
    uVar26 = (undefined4)param_4;
    auVar21._8_56_ = extraout_var_00;
    auVar17 = vmaxss_avx(auVar21._0_16_,auVar20._0_16_);
    auVar20 = ZEXT1664(auVar17);
    auVar23._0_8_ = FUN_18048aa00(&local_238,param_3);
    uVar7 = (undefined4)param_3;
    auVar23._8_56_ = extraout_var_01;
    auVar17 = vmaxss_avx(auVar23._0_16_,auVar20._0_16_);
    lVar19 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    auVar17 = vmaxss_avx(SUB6416(ZEXT464(0x42200000),0),
                         ZEXT416((uint)(auVar17._0_4_ / DAT_180b0a41c + 9.0)));
    auVar20 = ZEXT1664(auVar17);
    if ((*(longlong *)(lVar19 + 0x1c8) != 0) ||
       (pfVar9 = (float *)(lVar19 + 0x280), *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
      pfVar9 = (float *)(lVar19 + 0x250);
    }
    fVar18 = auVar27._0_4_ + 16.2;
    auVar21 = ZEXT464(0x42400000);
    fVar22 = auVar17._0_4_;
    fVar15 = (((*pfVar9 - *(float *)(lVar19 + 0x118)) - fVar14) -
             (fVar18 + fVar22 + 10.0) * DAT_180b0a41c) / DAT_180b0a41c;
    if (48.0 <= fVar15) {
      auVar17 = vminss_avx(SUB6416(ZEXT464(0x429c0000),0),ZEXT416((uint)fVar15));
      auVar21 = ZEXT1664(auVar17);
    }
    if ((*(longlong *)(lVar19 + 0x1c8) == 0) && (*(longlong *)(DAT_180bb8ae8 + 0x2338) == 0)) {
      pfVar9 = (float *)(lVar19 + 0x280);
    }
    else {
      pfVar9 = (float *)(lVar19 + 0x250);
    }
    bVar5 = *pfVar9 - *(float *)(lVar19 + 0x118) <
            (auVar21._0_4_ + fVar18 + fVar22 + 10.0) * DAT_180b0a41c + fVar14;
    local_238 = (undefined **)0x0;
    auVar17 = vpcmpeqd_avx(ZEXT116(bVar5),SUB6416(ZEXT464(0),0));
    auVar23 = ZEXT1664(ZEXT816(0));
    auVar17 = vblendvps_avx(SUB6416(ZEXT464(0x41900000),0),ZEXT816(0),auVar17);
    if (bVar5) {
      local_280._0_4_ = 0.0;
    }
    else {
      local_280._0_4_ = auVar21._0_4_ + fVar22 + 10.0;
    }
    local_270 = &local_248;
    local_268 = 0;
    local_288 = &local_190;
    if (param_10 == '\0') {
      local_288 = (char **)0x0;
    }
    local_278 = (undefined4 *)CONCAT44(local_278._4_4_,auVar17._0_4_);
    local_248 = 0.0;
    local_244 = 0.0;
    local_240 = 0;
    local_23c = local_240;
    pauVar8 = (undefined1 (*) [32])FUN_180487810(local_228,param_1,param_8,param_7);
    local_228 = *pauVar8;
    auVar21 = ZEXT1664(auVar21._0_16_);
    auVar20 = ZEXT1664(auVar20._0_16_);
    auVar23 = ZEXT1664(auVar23._0_16_);
    auVar27 = ZEXT1664(auVar27._0_16_);
    auVar28 = ZEXT1664(auVar28._0_16_);
    FUN_1804c2800(param_1);
    auVar24 = local_228._0_16_;
    auVar25 = local_228._16_16_;
    auVar17 = vshufps_avx(auVar25,auVar25,0x55);
    if (bVar5) {
      local_248 = (auVar27._0_4_ - 3.0) * DAT_180b0a41c + local_228._0_4_;
    }
    else {
      auVar3 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)((auVar17._0_4_ -
                                           (auVar21._0_4_ + auVar20._0_4_) * DAT_180b0a41c) + 0.5)),
                            1);
      local_248 = auVar3._0_4_;
    }
    local_268 = CONCAT71(local_268._1_7_,param_7);
    auVar3 = vpcmpeqd_avx(ZEXT116(bVar5),SUB6416(ZEXT464(0),0));
    auVar25 = vshufps_avx(auVar25,auVar25,0xaa);
    auVar4 = vshufps_avx(auVar24,auVar24,0xff);
    auVar24 = vshufps_avx(auVar24,auVar24,0x55);
    auVar24 = vblendvps_avx(auVar25,auVar24,auVar3);
    local_270 = (float *)CONCAT44(local_270._4_4_,param_6);
    local_278 = (undefined4 *)local_198;
    local_280 = (undefined8 *)CONCAT44(local_280._4_4_,uVar26);
    local_238 = (undefined **)CONCAT44(auVar4._0_4_,auVar17._0_4_ - auVar20._0_4_ * DAT_180b0a41c);
    local_244 = auVar24._0_4_;
    local_228 = ZEXT1632(auVar4);
    auVar27 = ZEXT1664(auVar24);
    auVar20 = ZEXT1664(auVar23._0_16_);
    auVar21 = ZEXT1664(auVar17);
    fVar14 = 0.5;
    auVar23 = ZEXT1664(auVar28._0_16_);
    local_288._0_4_ = uVar7;
    FUN_1804ae520();
    puVar11 = &DAT_1807c6e40;
    if (local_198 != (undefined *)0x0) {
      puVar11 = local_198;
    }
    FUN_18015abc0(&local_158,0x40,puVar11,(double)*param_2);
    auVar28 = ZEXT464(0x3f800000);
    local_280 = &local_158;
    local_258 = 0;
    local_268 = 0;
    auVar17 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar23._0_4_ * DAT_180b0a41c + fVar14)),1);
    local_270 = (float *)0x0;
    auVar17 = vmaxss_avx(auVar28._0_16_,auVar17);
    local_278 = (undefined4 *)0x0;
    local_288._0_4_ = auVar20._0_4_;
    FUN_1804ea040(&local_248,DAT_180c62ca8,auVar17._0_8_,0x7f7fffff);
    uVar13 = DAT_180b0a450;
    if (param_7 != '\0') {
      uVar13 = DAT_1808da474;
    }
    fVar18 = (auVar27._0_4_ + (float)local_228._0_4_) * fVar14;
    auVar28 = ZEXT1664(auVar28._0_16_);
    auVar20 = ZEXT1664(auVar20._0_16_);
    auVar27 = ZEXT1664(auVar21._0_16_);
    auVar21 = ZEXT1664(auVar23._0_16_);
    fVar15 = (float)FUN_180463350(DAT_180c62ca8);
    lVar10 = DAT_180c62ca8;
    lVar19 = DAT_180bb8ae8;
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    auVar17 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((auVar27._0_4_ - local_248) + fVar14)),1);
    local_248 = auVar17._0_4_;
    lVar19 = *(longlong *)(*(longlong *)(lVar19 + 0x14d0) + 0x2c8);
    auVar17 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar18 - fVar15 * fVar14) + fVar14)),1);
    auVar27 = ZEXT1664(auVar17);
    local_244 = (float)FUN_1804632d0(lVar10,auVar21._0_8_);
    local_244 = auVar27._0_4_ - local_244;
    auVar17 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar21._0_4_ * DAT_180b0a41c + fVar14)),1);
    auVar17 = vmaxss_avx(auVar28._0_16_,auVar17);
    uVar16 = auVar17._0_8_;
    if (((uVar13 & 0xff000000) != 0) && ((char)local_158 != '\0')) {
      if (lVar10 == 0) {
        lVar10 = *(longlong *)(*(longlong *)(lVar19 + 0x38) + 0x20);
      }
      if (auVar17._0_4_ == auVar20._0_4_) {
        uVar16 = (ulonglong)*(uint *)(*(longlong *)(lVar19 + 0x38) + 0x28);
      }
      local_238 = *(undefined ***)(lVar19 + 0x60);
      uStack_230 = *(undefined8 *)(lVar19 + 0x68);
      local_260 = 0;
      local_278 = (undefined4 *)&local_158;
      local_268 = CONCAT44(local_268._4_4_,auVar20._0_4_);
      local_270 = (float *)0x0;
      local_280 = &local_238;
      local_288._0_4_ = uVar13;
      FUN_1804ea5f0(lVar10,lVar19,uVar16,&local_248);
    }
    iVar2 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar2 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar2 + -1;
    }
  }
  else if (param_10 != '\0') {
    local_158._0_4_ = 0;
    uStack_148 = 3;
    lStack_128 = 0;
    puStack_110 = param_5;
    local_f8 = param_7;
    lVar19 = CONCAT71(uStack_f7,param_7);
    auStack_140 = (undefined1  [16])0x0;
    local_118 = param_6;
    local_208 = (ulonglong)local_158._4_4_ << 0x20;
    lStack_1f8 = CONCAT44(uStack_144,3);
    lStack_1f0 = 0;
    uStack_1d0 = CONCAT44(local_178,local_17c);
    auStack_108 = ZEXT816(0);
    local_1e8 = 0;
    uStack_1d8 = 0;
    local_1c8 = CONCAT44(uStack_114,param_6);
    puStack_1c0 = param_5;
    uStack_1b8 = 0;
    uStack_1b0 = 0;
    if (param_1 != (char *)0x0) {
      pcStack_200 = param_1;
      pfStack_1e0 = param_2;
      local_1a8 = lVar19;
      pcStack_150 = param_1;
      pfStack_130 = param_2;
      uStack_120 = local_17c;
      uStack_11c = local_178;
      uVar7 = FUN_180493b90();
      plVar6 = DAT_180c62d38;
      local_208 = CONCAT44(local_208._4_4_,uVar7);
      if (DAT_180c62d38 == DAT_180c62d40) {
        FUN_1804948a0(extraout_XMM0_Qa,DAT_180c62d38,&local_208);
      }
      else {
        *DAT_180c62d38 = local_208;
        plVar6[1] = (longlong)pcStack_200;
        plVar6[2] = lStack_1f8;
        plVar6[3] = lStack_1f0;
        plVar6[4] = auStack_140._8_8_;
        plVar6[5] = (longlong)pfStack_130;
        plVar6[6] = lStack_128;
        plVar6[7] = CONCAT44(uStack_11c,uStack_120);
        plVar6[8] = CONCAT44(uStack_114,local_118);
        plVar6[9] = (longlong)puStack_110;
        plVar6[10] = auStack_108._0_8_;
        plVar6[0xb] = auStack_108._8_8_;
        plVar6[0xc] = lVar19;
        DAT_180c62d38 = DAT_180c62d38 + 0xd;
      }
    }
  }
}



