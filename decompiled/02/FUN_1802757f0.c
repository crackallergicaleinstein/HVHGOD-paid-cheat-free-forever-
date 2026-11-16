// FUN_1802757f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802757f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802757f0(undefined8 param_1,undefined4 *param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6,float param_7)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  short sVar6;
  float *pfVar7;
  ulonglong uVar8;
  float *pfVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  float fVar21;
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  float fVar24;
  float fVar25;
  undefined1 auStack_2d8 [32];
  float local_2b8;
  float local_2b0;
  uint local_2a8;
  float local_2a0;
  float local_298 [2];
  undefined8 local_290;
  float local_288;
  float local_280;
  float local_27c;
  float local_278;
  float local_274;
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_248;
  float local_244;
  char local_148;
  undefined1 local_138 [92];
  char local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_2d8;
  FUN_180237670(local_138,param_4,param_5);
  auVar20 = ZEXT864(0);
  if ((((local_dc != '\0') && (sVar6 = thunk_FUN_180624430(*param_2), sVar6 < 1)) &&
      (sVar6 = thunk_FUN_180624430(param_2[1]), sVar6 < 1)) &&
     (sVar6 = thunk_FUN_180624430(param_2[2]), sVar6 < 1)) {
    fVar21 = *param_3;
    sVar6 = thunk_FUN_180624430(fVar21);
    if (sVar6 < 1) {
      fVar18 = param_3[1];
      sVar6 = thunk_FUN_180624430(fVar18);
      if ((sVar6 < 1) && (sVar6 = thunk_FUN_180624430(param_3[2]), sVar6 < 1)) {
        auVar23 = ZEXT464(param_6);
        sVar6 = thunk_FUN_180624430(param_6);
        if (((sVar6 < 1) &&
            ((sVar6 = thunk_FUN_180624430(param_7), sVar6 < 1 && (auVar20._0_4_ <= auVar23._0_4_))))
           && (auVar20._0_4_ <= param_7)) {
          auVar19 = ZEXT464((uint)DAT_180cc936c);
          sVar6 = thunk_FUN_180624430(DAT_180cc936c);
          if ((sVar6 < 1) && (auVar20._0_4_ < auVar19._0_4_)) {
            fVar16 = 0.017453292;
            auVar19 = ZEXT464((uint)(fVar21 * 0.017453292));
            auVar22 = ZEXT464((uint)(fVar18 * 0.017453292));
            fVar12 = (float)FUN_180638e00(fVar21 * 0.017453292);
            fVar13 = (float)FUN_180637540(auVar19._0_8_);
            fVar14 = (float)FUN_180638e00(auVar22._0_8_);
            fVar15 = (float)FUN_180637540(auVar22._0_8_);
            auVar19 = ZEXT464((uint)(fVar16 * param_3[2]));
            local_274 = fVar15 * fVar13;
            local_27c = fVar14 * fVar13;
            local_278 = -fVar12;
            fVar16 = (float)FUN_180638e00(fVar16 * param_3[2]);
            fVar17 = (float)FUN_180637540(auVar19._0_8_);
            local_270 = fVar17 * fVar14 - fVar16 * fVar12 * fVar15;
            fVar21 = -fVar16 * fVar13;
            fVar18 = -fVar16 * fVar12 * fVar14 - fVar17 * fVar15;
            local_280 = fVar17 * fVar12 * fVar15 + fVar16 * fVar14;
            local_26c = fVar17 * fVar13;
            fVar12 = fVar17 * fVar12 * fVar14 - fVar16 * fVar15;
            local_268 = fVar21;
            local_264 = fVar12;
            if (0.0001 <= auVar23._0_4_ + param_7) {
              local_298[0] = fVar18;
              pfVar7 = (float *)FUN_18027abc0();
              if ((((*(char *)(pfVar7 + 7) == '\0') || (*pfVar7 != auVar23._0_4_)) ||
                  (pfVar7[1] != param_7)) ||
                 (((pfVar7[2] != DAT_180cc9358 || (pfVar7[3] != (float)(uint)DAT_180cc934c)) ||
                  ((pfVar7[4] != DAT_180cc9350 || (pfVar7[5] != DAT_180cc9354)))))) {
                *pfVar7 = auVar23._0_4_;
                pfVar7[1] = param_7;
                pfVar7[2] = DAT_180cc9358;
                pfVar7[3] = (float)(uint)DAT_180cc934c;
                pfVar7[4] = DAT_180cc9350;
                pfVar7[5] = DAT_180cc9354;
                pfVar7[6] = 0.0;
                *(undefined1 *)(pfVar7 + 7) = 1;
              }
              uVar8 = (ulonglong)(int)pfVar7[6];
              lVar11 = 0x100;
              if ((longlong)uVar8 < 0x100) {
                auVar20 = ZEXT464(0x7fc00000);
                pfVar9 = pfVar7 + uVar8 * 2 + 8;
                lVar10 = 0x100 - uVar8;
                do {
                  local_2a8 = (uint)DAT_180cc934c;
                  local_2a0 = DAT_180cc9350;
                  local_2b0 = DAT_180cc9358;
                  local_2b8 = param_7;
                  FUN_1802750c0(local_2a8,&local_248,uVar8 & 0xffffffff,auVar23._0_8_);
                  if (local_148 == '\0') {
                    auVar4 = vunpcklps_avx(auVar20._0_16_,auVar20._0_16_);
                    auVar3 = vshufps_avx(auVar4,auVar4,0x55);
                    fVar13 = auVar3._0_4_;
                    local_290._0_4_ = auVar4._0_4_;
                    fVar18 = (float)local_290;
                    local_290 = auVar4._0_8_;
                  }
                  else {
                    fVar18 = local_248;
                    fVar13 = local_244;
                  }
                  *pfVar9 = fVar18;
                  pfVar9[1] = fVar13;
                  pfVar9 = pfVar9 + 2;
                  uVar8 = (ulonglong)((int)uVar8 + 1);
                  lVar10 = lVar10 + -1;
                } while (lVar10 != 0);
                fVar18 = local_298[0];
              }
              fVar13 = pfVar7[6];
              fVar15 = 1.0;
              fVar14 = 1e-12;
              if ((int)fVar13 < 0x100) {
                fVar13 = 3.58732e-43;
              }
              pfVar7[6] = fVar13;
              pfVar7 = pfVar7 + 8;
              fVar13 = local_274;
              fVar16 = local_27c;
              fVar17 = local_278;
              fVar24 = local_270;
              fVar25 = local_280;
              do {
                fVar1 = *pfVar7;
                fVar2 = pfVar7[1];
                auVar20 = ZEXT464((uint)(fVar1 * fVar18 + fVar16 + fVar2 * fVar12));
                auVar23 = ZEXT464((uint)(fVar1 * fVar21 + fVar17 + fVar2 * local_26c));
                fVar21 = fVar1 * fVar24 + fVar13 + fVar2 * fVar25;
                sVar6 = thunk_FUN_180624430(fVar21);
                if (((sVar6 < 1) && (sVar6 = thunk_FUN_180624430(auVar20._0_8_), sVar6 < 1)) &&
                   (sVar6 = thunk_FUN_180624430(auVar23._0_8_), sVar6 < 1)) {
                  fVar18 = auVar20._0_4_;
                  fVar12 = auVar23._0_4_;
                  if (fVar14 < fVar21 * fVar21 + fVar18 * fVar18 + fVar12 * fVar12) {
                    local_290 = CONCAT44(fVar18,fVar21);
                    local_288 = fVar12;
                    local_280 = fVar15;
                    FUN_180450e30(&local_290);
                    local_260 = DAT_180cc936c * (float)local_290;
                    local_25c = DAT_180cc936c * local_290._4_4_;
                    local_258 = DAT_180cc936c * local_288;
                    FUN_180241440(local_138,param_2,&local_260,&local_280);
                  }
                }
                pfVar7 = pfVar7 + 2;
                lVar11 = lVar11 + -1;
                fVar18 = local_298[0];
                fVar21 = local_268;
                fVar12 = local_264;
              } while (lVar11 != 0);
            }
            else {
              auVar23 = ZEXT464(0x3f800000);
              local_288 = DAT_180cc936c * local_278;
              local_298[0] = 1.0;
              local_290 = CONCAT44(DAT_180cc936c * local_27c,fVar15 * fVar13 * DAT_180cc936c);
              bVar5 = FUN_180241440(local_138,param_2,&local_290,local_298);
              auVar3 = vpcmpeqd_avx(ZEXT116(bVar5),SUB6416(ZEXT464(0),0));
              vblendvps_avx(auVar23._0_16_,auVar20._0_16_,auVar3);
            }
          }
        }
      }
    }
  }
}



