// FUN_180308b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180308b90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180308b90(undefined1 (*param_1) [32],float *param_2)

{
  float *pfVar1;
  ulonglong uVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  undefined1 (*pauVar6) [16];
  ulonglong uVar7;
  longlong lVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [32];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  undefined1 auStack_2b8 [32];
  float *local_298;
  float local_290;
  float *local_288;
  float *local_280;
  char local_278;
  float local_274;
  float local_270 [2];
  ulonglong local_268;
  float local_260;
  float local_25c;
  undefined1 local_258 [16];
  float local_248;
  undefined2 local_240;
  undefined2 uStack_23e;
  float fStack_23c;
  float fStack_238;
  undefined4 uStack_234;
  float fStack_230;
  float fStack_22c;
  undefined4 uStack_228;
  float fStack_224;
  float local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  uint uStack_214;
  undefined1 local_210 [32];
  undefined1 local_1f0 [16];
  undefined8 local_1e0;
  float *local_1d8;
  float *local_1d0;
  undefined8 uStack_1c8;
  char *pcStack_1c0;
  float *local_1b8;
  undefined2 local_1b0;
  ushort uStack_1ae;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  uint uStack_184;
  undefined1 local_180 [20];
  undefined8 local_16c;
  undefined8 local_160;
  undefined1 (*local_158) [32];
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  char local_108;
  undefined1 uStack_107;
  undefined2 uStack_106;
  float fStack_104;
  float fStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float local_d8 [2];
  ulonglong local_d0;
  
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_2b8;
  fStack_100 = 0.0;
  pfVar1 = param_2 + 7;
  local_108 = '\0';
  uStack_107 = 0;
  fStack_e4 = 0.0;
  fStack_e0 = INFINITY;
  fStack_104 = 0.0;
  uStack_fc = 0;
  uStack_f8 = 0;
  uStack_f4 = 0;
  uStack_f0 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_dc = uStack_dc & 0xffffff00;
  auVar20 = ZEXT864(0);
  auVar27 = ZEXT1664(SUB6416(ZEXT464(0x7f800000),0));
  local_158 = param_1;
  cVar4 = FUN_1803080a0(pfVar1);
  if (cVar4 == '\0') {
LAB_1803098dc:
    uStack_dc = CONCAT31(uStack_dc._1_3_,0xb);
    *(ulonglong *)*param_1 =
         CONCAT44(fStack_104,CONCAT22(uStack_106,CONCAT11(uStack_107,local_108)));
    *(ulonglong *)(*param_1 + 8) = CONCAT44(uStack_fc,fStack_100);
    *(ulonglong *)(*param_1 + 0x10) = CONCAT44(uStack_f4,uStack_f8);
    *(ulonglong *)(*param_1 + 0x18) = CONCAT44(uStack_ec,uStack_f0);
    *(ulonglong *)param_1[1] = CONCAT44(fStack_e4,uStack_e8);
    *(ulonglong *)(param_1[1] + 8) = CONCAT44(uStack_dc,fStack_e0);
  }
  pfVar10 = param_2 + 4;
  cVar4 = FUN_180308330(pfVar10,pfVar1);
  if (cVar4 != '\x03') goto LAB_1803098dc;
  fVar17 = param_2[3];
  sVar5 = thunk_FUN_180624430(fVar17);
  if ((0 < sVar5) || (fVar17 < auVar20._0_4_)) goto LAB_1803098dc;
  local_280 = param_2 + 0x13;
  fVar21 = 0.5;
  auVar16 = vmaxss_avx(ZEXT416((uint)(param_2[8] * *pfVar1 * 0.5 * 0.16)),ZEXT416(0x3e800000));
  auVar26 = ZEXT1664(auVar16);
  local_270[0] = auVar16._0_4_;
  local_25c = local_270[0] * 0.2;
  local_298 = pfVar10;
  local_290 = fVar17;
  local_288 = pfVar1;
  pauVar6 = (undefined1 (*) [16])FUN_180308540(local_148,param_2,0,0);
  auVar16 = auVar20._0_16_;
  auVar25 = auVar26._0_16_;
  auVar23 = auVar27._0_16_;
  auVar29 = SUB6416(ZEXT464(0x3f800000),0);
  local_1f0 = *pauVar6;
  local_1e0 = *(undefined8 *)pauVar6[1];
  auVar26 = ZEXT1664(_DAT_18086dba0);
  auVar34 = ZEXT464(0x43b40000);
  auVar33 = auVar34._0_16_;
  auVar32 = ZEXT464(0x43340000);
  auVar14 = auVar32._0_16_;
  local_1b0 = 0;
  local_148 = vshufps_avx(local_1f0,local_1f0,0xaa);
  local_248 = local_148._0_4_ - (param_2[0x11] - (1.0 - param_2[0xe]) * param_2[8] * *pfVar1);
  iVar13 = 0;
  local_278 = '\0';
  uStack_1ac = 0;
  uStack_1a8 = 0;
  uStack_1a4 = 0;
  uStack_1a0 = 0;
  uStack_19c = 0;
  uStack_198 = 0;
  uStack_194 = 0;
  fStack_190 = 0.0;
  fStack_e4 = (float)local_1e0;
  uStack_18c = auVar20._0_4_;
  uStack_188 = auVar27._0_4_;
  uStack_184 = uStack_184 & 0xffffff00;
  local_160 = local_1e0;
  local_118 = local_1f0;
  if (*(char *)(param_2 + 0x12) != '\0') {
    local_128 = ZEXT416(0);
    local_258 = ZEXT416(0);
    local_274 = 0.0;
    auVar27 = ZEXT864(0);
    pfVar9 = param_2 + 0x13;
    iVar12 = 0;
    local_210 = ZEXT232(uStack_1ae) << 0x10;
    uVar7 = 0;
    do {
      local_290 = param_2[3];
      auVar20 = ZEXT1664(auVar20._0_16_);
      auVar27 = ZEXT1664(auVar27._0_16_);
      auVar28 = ZEXT464((uint)(((float)iVar12 * auVar34._0_4_) / 720.0 - auVar32._0_4_));
      auVar26 = ZEXT1664(auVar26._0_16_);
      auVar32 = ZEXT1664(auVar32._0_16_);
      auVar34 = ZEXT1664(auVar34._0_16_);
      fVar22 = local_274;
      local_298 = pfVar10;
      local_288 = pfVar1;
      local_280 = pfVar9;
      lVar8 = FUN_180308540(local_180,param_2,1);
      uVar2 = *(ulonglong *)(lVar8 + 0x10);
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar2;
      local_268 = *(ulonglong *)(lVar8 + 8) >> 0x20;
      fVar17 = *(float *)(lVar8 + 8) - (param_2[0x11] - (1.0 - param_2[0xe]) * param_2[8] * *pfVar1)
      ;
      auVar16 = vmaxss_avx(auVar16,ZEXT416((uint)fStack_e4));
      fStack_e4 = auVar16._0_4_;
      uStack_1c8._4_4_ = (float)uVar2;
      pcStack_1c0._0_4_ = (undefined4)(uVar2 >> 0x20);
      cVar4 = (char)(*(ulonglong *)(lVar8 + 8) >> 0x20);
      if (cVar4 != '\0') {
        auVar16 = vminss_avx(ZEXT416((uint)fVar17 & auVar26._0_4_),ZEXT416((uint)fStack_e0));
        fStack_e0 = auVar16._0_4_;
      }
      auVar27 = ZEXT1664(auVar27._0_16_);
      local_260 = auVar28._0_4_;
      if ((((iVar12 == 0) || ((char)uVar7 == '\0')) || (cVar4 == '\0')) ||
         (((fVar18 = auVar20._0_4_, fVar18 < fVar22 || (fVar17 < fVar18)) &&
          ((fVar22 < fVar18 || (fVar18 < fVar17)))))) {
LAB_1803093aa:
        local_274 = fVar17;
        auVar29 = SUB6416(ZEXT464(0x3f800000),0);
        fVar17 = local_274;
      }
      else {
        fVar22 = param_2[8] * *pfVar1 * fVar21;
        auVar30 = ZEXT464(0x3f800000);
        auVar29 = auVar30._0_16_;
        if ((float)((uint)(local_274 - fVar17) & auVar26._0_4_) <=
            fVar22 + fVar22 + local_270[0] * 4.0) {
          iVar11 = 0;
          fVar22 = local_274;
          local_274 = fVar17;
          do {
            fVar17 = (auVar28._0_4_ + auVar27._0_4_) * fVar21;
            auVar19 = ZEXT464((uint)fVar17);
            local_290 = param_2[3];
            local_298 = pfVar10;
            local_288 = pfVar1;
            local_280 = pfVar9;
            lVar8 = FUN_180308540(local_180,param_2,1,fVar17);
            fVar24 = auVar27._0_4_;
            fVar18 = auVar28._0_4_;
            uStack_1c8._4_4_ = (float)*(undefined8 *)(lVar8 + 0x10);
            pcStack_1c0._0_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar8 + 0x10) >> 0x20);
            fVar17 = *(float *)(lVar8 + 8) -
                     (param_2[0x11] - param_2[8] * *pfVar1 * (auVar30._0_4_ - param_2[0xe]));
            if ((char)((ulonglong)*(undefined8 *)(lVar8 + 8) >> 0x20) == '\0') break;
            if (fVar17 <= auVar20._0_4_ == fVar22 <= auVar20._0_4_) {
              auVar27 = ZEXT1664(auVar19._0_16_);
              fVar22 = fVar17;
            }
            else {
              auVar28 = ZEXT1664(auVar19._0_16_);
            }
            fVar24 = auVar27._0_4_;
            fVar18 = auVar28._0_4_;
            iVar11 = iVar11 + 1;
          } while (iVar11 < 0x28);
          fVar17 = (fVar18 + fVar24) * fVar21;
          auVar28 = ZEXT464((uint)fVar17);
          local_290 = param_2[3];
          local_298 = pfVar10;
          local_288 = pfVar1;
          local_280 = pfVar9;
          pauVar6 = (undefined1 (*) [16])FUN_180308540(local_180,param_2,1,fVar17);
          auVar29 = auVar30._0_16_;
          auVar16 = *pauVar6;
          auVar27 = ZEXT1664(auVar16);
          uStack_1c8._4_4_ = (float)*(undefined8 *)pauVar6[1];
          pcStack_1c0._0_4_ = (undefined4)((ulonglong)*(undefined8 *)pauVar6[1] >> 0x20);
          auVar16 = vshufps_avx(auVar16,auVar16,0xaa);
          fVar22 = auVar16._0_4_ -
                   (param_2[0x11] - param_2[8] * *pfVar1 * (auVar30._0_4_ - param_2[0xe]));
          fVar17 = local_274;
          if (((char)((ulonglong)*(undefined8 *)(*pauVar6 + 8) >> 0x20) != '\0') &&
             ((float)((uint)fVar22 & auVar26._0_4_) <= local_25c)) {
            local_290 = param_2[3];
            local_298 = pfVar10;
            local_288 = pfVar1;
            local_280 = pfVar9;
            pauVar6 = (undefined1 (*) [16])FUN_180308540(local_180,param_2,1,auVar28._0_4_ + 0.01);
            local_16c = *(undefined8 *)pauVar6[1];
            auVar16 = *pauVar6;
            auVar19 = ZEXT1664(auVar16);
            auVar16 = vshufps_avx(auVar16,auVar16,0xaa);
            fVar18 = auVar16._0_4_ -
                     (param_2[0x11] - param_2[8] * *pfVar1 * (auVar30._0_4_ - param_2[0xe]));
            local_290 = param_2[3];
            local_298 = pfVar10;
            local_288 = pfVar1;
            local_280 = pfVar9;
            pauVar6 = (undefined1 (*) [16])FUN_180308540(local_180,param_2,1,auVar28._0_4_ - 0.01);
            local_16c = *(undefined8 *)pauVar6[1];
            auVar16 = *pauVar6;
            auVar23 = vshufps_avx(auVar16,auVar16,0xaa);
            fVar24 = auVar23._0_4_ - (param_2[0x11] - param_2[8] * *pfVar1 * (1.0 - param_2[0xe]));
            fVar17 = local_274;
            if ((auVar19[0xc] != '\0') && (auVar16[0xc] != '\0')) {
              uVar3 = auVar26._0_4_;
              if (((float)((uint)(fVar18 - fVar22) & uVar3) <= local_270[0] * fVar21) &&
                 ((float)((uint)(fVar22 - fVar24) & uVar3) <= local_270[0] * fVar21)) {
                fVar17 = (fVar18 - fVar24) / 0.02;
                if ((float)((uint)fVar17 & uVar3) <= 0.0001) {
                  auVar16 = auVar32._0_16_;
                }
                else {
                  auVar16 = ZEXT416((uint)(local_270[0] / (float)((uint)fVar17 & uVar3)));
                }
                auVar30 = ZEXT1664(auVar16);
                uStack_218 = 0x7f800000;
                uStack_21c = auVar20._0_4_;
                uStack_214 = uStack_214 & 0xffffff00;
                local_240 = 0x101;
                sVar5 = thunk_FUN_180624430(auVar28._0_8_);
                auVar16 = auVar27._0_16_;
                if (sVar5 < 1) {
                  fStack_23c = (float)FUN_180637760(auVar28._0_4_ + auVar32._0_4_,auVar34._0_8_);
                  auVar16 = auVar27._0_16_;
                  if (fStack_23c < auVar20._0_4_) {
                    fStack_23c = fStack_23c + auVar34._0_4_;
                  }
                  fStack_23c = fStack_23c - auVar32._0_4_;
                }
                else {
                  fStack_23c = auVar20._0_4_;
                }
                fStack_22c = uStack_1c8._4_4_;
                fStack_224 = uStack_1c8._4_4_ - param_2[3];
                uStack_228 = pcStack_1c0._0_4_;
                auVar23 = vshufps_avx(auVar16,auVar16,0x55);
                fVar18 = auVar23._0_4_ * auVar23._0_4_ + auVar16._0_4_ * auVar16._0_4_;
                uStack_234 = auVar30._0_4_;
                fStack_238 = fVar22;
                fStack_230 = fVar17;
                if (fVar18 < 0.0) {
                  fVar18 = (float)FUN_18061e150();
                }
                else {
                  fVar18 = SQRT(fVar18);
                }
                fVar22 = auVar30._0_4_;
                if (*(char *)((longlong)param_2 + 0x49) == '\0') {
                  fVar17 = param_2[1] * param_2[1] + *param_2 * *param_2;
                  if (fVar17 < 0.0) {
                    fVar17 = (float)FUN_18061e150(fVar17);
                    fVar22 = auVar30._0_4_;
                  }
                  else {
                    fVar17 = SQRT(fVar17);
                  }
                  fVar18 = -(float)((uint)(fVar18 - fVar17) & auVar26._0_4_);
                }
                local_220 = fVar18;
                if (((local_278 == '\0') || ((float)local_128._0_4_ + fVar21 < fVar18)) ||
                   ((fVar17 = local_274, (float)local_128._0_4_ - fVar21 < fVar18 &&
                    (local_258._0_4_ < fVar22)))) {
                  auVar23._2_2_ = uStack_23e;
                  auVar23._0_2_ = local_240;
                  auVar23._4_4_ = fStack_23c;
                  auVar23._8_4_ = fStack_238;
                  auVar23._12_4_ = uStack_234;
                  local_210._16_4_ = fStack_230;
                  local_210._0_16_ = auVar23;
                  local_210._20_4_ = fStack_22c;
                  local_210._24_4_ = uStack_228;
                  local_210._28_4_ = fStack_224;
                  local_128._4_4_ = uStack_21c;
                  local_128._0_4_ = fVar18;
                  local_128._12_4_ = uStack_214;
                  local_128._8_4_ = uStack_218;
                  local_258 = vshufps_avx(auVar23,auVar23,0xff);
                  uStack_18c = uStack_21c;
                  uStack_188 = uStack_218;
                  uStack_184 = uStack_214;
                  local_278 = '\x01';
                  fVar17 = local_274;
                  fStack_190 = fVar18;
                }
              }
            }
            goto LAB_1803093aa;
          }
        }
      }
      local_274 = fVar17;
      fVar17 = local_258._0_4_;
      auVar16 = auVar20._0_16_;
      auVar33 = auVar34._0_16_;
      auVar14 = auVar32._0_16_;
      iVar12 = iVar12 + 1;
      if (0x2d0 < iVar12) goto code_r0x0001803093c2;
      auVar27 = ZEXT464((uint)local_260);
      uVar7 = local_268;
    } while( true );
  }
  fVar17 = 0.0;
  auVar15 = ZEXT232(uStack_1ae) << 0x10;
  auVar31 = _DAT_18086dba0;
  goto LAB_1803093f3;
code_r0x0001803093c2:
  auVar25 = ZEXT416((uint)local_270[0]);
  auVar23 = SUB6416(ZEXT464(0x7f800000),0);
  param_1 = local_158;
  auVar15 = local_210;
  auVar31 = auVar26._0_16_;
LAB_1803093f3:
  fVar22 = auVar16._0_4_;
  if ((local_118[0xc] == '\0') || (auVar25._0_4_ * 0.2 < (float)((uint)local_248 & auVar31._0_4_)))
  {
    if (local_278 == '\0') {
      if ((param_2[3] <= 0.125) || (param_2[3] <= fStack_e4)) {
        if (*(char *)(param_2 + 0x12) == '\0') {
          uStack_dc = CONCAT31(uStack_dc._1_3_,0x18);
          goto LAB_1803095ed;
        }
        fVar17 = param_2[2] - param_2[8] * *pfVar1 * param_2[0xe];
        if (fVar22 < fVar17) {
          uStack_dc = CONCAT31(uStack_dc._1_3_,0x14);
          goto LAB_1803095ed;
        }
        auVar20 = ZEXT1664(auVar16);
        auVar27 = ZEXT464((uint)(param_2[8] * *pfVar1));
        auVar26 = ZEXT1664(auVar25);
        auVar32 = ZEXT1664(auVar29);
        auVar34 = ZEXT1664(auVar31);
        auVar28 = ZEXT1664(auVar14);
        auVar30 = ZEXT1664(auVar33);
        fVar22 = fStack_e0;
        sVar5 = thunk_FUN_180624430();
        auVar33 = auVar30._0_16_;
        auVar14 = auVar28._0_16_;
        auVar31 = auVar34._0_16_;
        auVar29 = auVar32._0_16_;
        auVar16 = auVar20._0_16_;
        if (sVar5 < 1) {
          fVar18 = auVar27._0_4_ * fVar21;
          auVar23 = vmaxss_avx(auVar29,ZEXT416((uint)(fVar18 + fVar18)));
          if ((auVar23._0_4_ * -1.0 <= fVar17) || (fVar22 <= auVar26._0_4_)) {
            uStack_dc = CONCAT31(uStack_dc._1_3_,0x17);
          }
          else {
            uStack_dc = CONCAT31(uStack_dc._1_3_,0x15);
          }
          goto LAB_1803095ed;
        }
      }
      uStack_dc = CONCAT31(uStack_dc._1_3_,0x16);
LAB_1803095ed:
      auVar23 = vmaxss_avx(SUB6416(ZEXT464(0x3d4ccccd),0),ZEXT416((uint)param_2[6]));
      auVar23 = vmaxss_avx(ZEXT416((uint)(((*pfVar1 * param_2[8] * param_2[0xe] -
                                           (float)local_148._0_4_) * *pfVar1) / auVar23._0_4_)),
                           auVar16);
      local_260 = auVar23._0_4_ * fVar21;
      local_270[0] = 0.25;
      local_25c = 0.02;
      pfVar10 = &local_25c;
      if (0.02 <= local_260) {
        pfVar10 = &local_260;
      }
      pfVar9 = local_270;
      if (local_260 <= 0.25) {
        pfVar9 = pfVar10;
      }
      local_d8[0] = *pfVar9;
      local_1d8 = local_d8;
      uStack_1c8 = local_d8 + 1;
      pcStack_1c0 = &local_108;
      local_d8[1] = INFINITY;
      auVar20 = ZEXT1664(auVar16);
      auVar27 = ZEXT1664(auVar29);
      auVar26 = ZEXT1664(auVar31);
      auVar32 = ZEXT1664(auVar14);
      auVar34 = ZEXT1664(auVar33);
      local_1d0 = param_2;
      local_1b8 = pfVar1;
      FUN_180309910(&local_1d8,0);
      fVar17 = 720.0;
      if (*(char *)(param_2 + 0x12) != '\0') {
        iVar12 = 0;
        do {
          local_290 = param_2[3];
          fVar21 = ((float)iVar12 * auVar34._0_4_) / fVar17 - auVar32._0_4_;
          auVar28 = ZEXT464((uint)fVar21);
          local_298 = param_2 + 4;
          local_288 = pfVar1;
          local_280 = param_2 + 0x13;
          pauVar6 = (undefined1 (*) [16])FUN_180308540(local_180,param_2,1,fVar21);
          local_148 = *pauVar6;
          local_138 = *(undefined8 *)pauVar6[1];
          FUN_180309910(&local_1d8,1,auVar28._0_8_,local_148);
          iVar12 = iVar12 + 1;
        } while (iVar12 < 0x2d0);
      }
      if (local_108 == '\0') {
        fVar21 = (float)((uint)local_248 & auVar26._0_4_);
        fStack_104 = auVar20._0_4_;
        uStack_f4 = (undefined4)local_1e0;
        uStack_f0 = local_1e0._4_4_;
        fStack_100 = local_248;
        local_108 = '\x04';
        uStack_107 = 0;
        if (*(char *)(param_2 + 0x12) != '\0') {
          do {
            local_290 = param_2[3];
            fVar22 = ((float)iVar13 * auVar34._0_4_) / fVar17 - auVar32._0_4_;
            auVar28 = ZEXT464((uint)fVar22);
            local_298 = param_2 + 4;
            local_288 = pfVar1;
            local_280 = param_2 + 0x13;
            lVar8 = FUN_180308540(local_180,param_2,1,fVar22);
            local_1e0 = *(undefined8 *)(lVar8 + 0x10);
            fVar22 = *(float *)(lVar8 + 8) -
                     (param_2[0x11] - *pfVar1 * param_2[8] * (auVar27._0_4_ - param_2[0xe]));
            fVar18 = (float)((uint)fVar22 & auVar26._0_4_);
            if (fVar18 < fVar21) {
              uStack_107 = 1;
              fVar21 = fVar18;
              sVar5 = thunk_FUN_180624430(auVar28._0_8_);
              if (sVar5 < 1) {
                fStack_104 = (float)FUN_180637760(auVar28._0_4_ + auVar32._0_4_,auVar34._0_8_);
                if (fStack_104 < auVar20._0_4_) {
                  fStack_104 = fStack_104 + auVar34._0_4_;
                }
                fStack_104 = fStack_104 - auVar32._0_4_;
              }
              else {
                fStack_104 = auVar20._0_4_;
              }
              uStack_f4 = (undefined4)local_1e0;
              uStack_f0 = local_1e0._4_4_;
              fStack_100 = fVar22;
            }
            iVar13 = iVar13 + 1;
          } while (iVar13 < 0x2d0);
        }
      }
      *(ulonglong *)*param_1 =
           CONCAT44(fStack_104,CONCAT22(uStack_106,CONCAT11(uStack_107,local_108)));
      *(ulonglong *)(*param_1 + 8) = CONCAT44(uStack_fc,fStack_100);
      *(ulonglong *)(*param_1 + 0x10) = CONCAT44(uStack_f4,uStack_f8);
      *(ulonglong *)(*param_1 + 0x18) = CONCAT44(uStack_ec,uStack_f0);
      *(ulonglong *)param_1[1] = CONCAT44(fStack_e4,uStack_e8);
      *(ulonglong *)(param_1[1] + 8) = CONCAT44(uStack_dc,fStack_e0);
    }
  }
  else if ((local_278 == '\0') || (fVar17 < auVar29._0_4_)) {
    fVar17 = param_2[3];
    uStack_214 = uStack_214 & 0xffffff00;
    auVar29._4_4_ = uStack_21c;
    auVar29._0_4_ = local_220;
    auVar29._8_4_ = uStack_218;
    auVar29._12_4_ = uStack_214;
    auVar14._4_12_ = auVar29._4_12_;
    auVar14._0_4_ = fVar22;
    auVar16 = vinsertps_avx(auVar14,auVar16,0x10);
    auVar16 = vinsertps_avx(auVar16,auVar23,0x20);
    *(ulonglong *)*param_1 = CONCAT44(fVar22,CONCAT22(uStack_23e,1));
    *(ulonglong *)(*param_1 + 8) = CONCAT44(0x42b40000,local_248);
    *(ulonglong *)(*param_1 + 0x10) = CONCAT44((float)local_160,fVar22);
    *(ulonglong *)(*param_1 + 0x18) = CONCAT44((float)local_160 - fVar17,local_1e0._4_4_);
    goto LAB_18030948d;
  }
  auVar25._4_4_ = uStack_18c;
  auVar25._0_4_ = fStack_190;
  auVar25._8_4_ = uStack_188;
  auVar25._12_4_ = uStack_184;
  auVar16 = vinsertps_avx(auVar25,ZEXT416((uint)fStack_e4),0x10);
  *param_1 = auVar15;
LAB_18030948d:
  *(undefined1 (*) [16])param_1[1] = auVar16;
                    /* WARNING: Read-only address (ram,0x00018086dba0) is written */
}



