// FUN_180354ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180354ba0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180354ba0(char *param_1,float *param_2,ulonglong *param_3,undefined8 param_4,uint param_5,
                  int param_6,int param_7,undefined8 *param_8,undefined8 *param_9)

{
  undefined1 auVar1 [32];
  char cVar2;
  char cVar3;
  short sVar4;
  undefined1 (*pauVar5) [32];
  undefined8 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auStack_2c8 [32];
  char local_2a8;
  char local_2a7;
  char local_2a6;
  undefined8 local_298;
  float local_290;
  undefined8 local_258;
  undefined1 local_238 [32];
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined8 local_1fc;
  undefined8 uStack_1f4;
  undefined8 uStack_1ec;
  undefined8 uStack_1e4;
  undefined8 local_1dc;
  undefined8 uStack_1d4;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined1 local_1c0 [8];
  undefined8 local_1b8 [3];
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_17c;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined8 local_15c;
  undefined8 uStack_154;
  undefined8 local_14c;
  undefined4 local_144;
  undefined8 local_140;
  undefined1 local_138 [32];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_fc;
  undefined8 uStack_f4;
  undefined8 uStack_ec;
  undefined8 uStack_e4;
  undefined8 local_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined1 local_c0 [8];
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_2c8;
  local_2a6 = *param_1;
  auVar25 = ZEXT1664(in_ZMM3._0_16_);
  if ((local_2a6 != '\0') || (param_1[1] != '\0')) {
    local_298 = *param_3;
    local_290 = (float)param_3[1];
    cVar2 = FUN_180354ae0();
    if (cVar2 != '\0') {
      local_298 = *(ulonglong *)param_2;
      sVar4 = thunk_FUN_180624430(local_298);
      if (sVar4 < 1) {
        sVar4 = thunk_FUN_180624430(local_298._4_4_);
        if ((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(param_2[2]), sVar4 < 1)) {
          cVar2 = param_1[8];
          auVar22 = ZEXT864(0);
          if (((cVar2 != '\0') || (param_2[2] < 0.0)) &&
             ((sVar4 = thunk_FUN_180624430(auVar25._0_8_), sVar4 < 1 &&
              (auVar22._0_4_ < auVar25._0_4_)))) {
            auVar23 = ZEXT464(param_5);
            sVar4 = thunk_FUN_180624430(param_5);
            if ((sVar4 < 1) && (auVar22._0_4_ < auVar23._0_4_)) {
              if (cVar2 == '\0') {
                local_298 = *(ulonglong *)param_2;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = local_298;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = *param_3;
                auVar10 = vshufps_avx(auVar10,auVar10,0x55);
                auVar7 = vshufps_avx(auVar7,auVar7,0x55);
                if (auVar22._0_4_ <=
                    auVar7._0_4_ * auVar10._0_4_ + (float)*param_3 * (float)local_298 +
                    *(float *)(param_3 + 1) * param_2[2]) {
                }
              }
              if ((param_6 != -1) && (param_7 != -1)) {
                local_2a7 = param_1[1];
                if ((local_2a7 == '\0') ||
                   ((*(char *)((longlong)param_8 + 1) == '\0' ||
                    (*(char *)((longlong)param_9 + 1) == '\0')))) {
                  local_2a8 = '\0';
                }
                else {
                  local_2a8 = '\x01';
                }
                pauVar5 = &local_238;
                auVar24 = ZEXT464(0x3c23d70a);
                local_238._0_8_ = *param_8;
                local_238._8_8_ = param_8[1];
                local_238._16_8_ = param_8[2];
                local_238._24_8_ = param_8[3];
                local_208 = param_8[6];
                local_1fc = *param_9;
                uStack_1f4 = param_9[1];
                uStack_1ec = param_9[2];
                uStack_1e4 = param_9[3];
                local_218 = param_8[4];
                uStack_210 = param_8[5];
                local_200 = *(undefined4 *)(param_8 + 7);
                local_1cc = param_9[6];
                local_1dc = param_9[4];
                uStack_1d4 = param_9[5];
                local_1c4 = *(undefined4 *)(param_9 + 7);
                do {
                  auVar1 = *pauVar5;
                  local_258 = *(undefined8 *)(pauVar5[1] + 0x10);
                  uVar16 = pauVar5[1][0xd];
                  if (auVar1[0] == '\0') {
                  }
                  if (((cVar2 == '\0') && (auVar1[1] != '\0')) && (local_2a8 == '\0')) {
                  }
                  auVar10 = vshufps_avx(auVar1._0_16_,auVar1._0_16_,0x55);
                  auVar19 = ZEXT1664(auVar10);
                  auVar22 = ZEXT1664(auVar22._0_16_);
                  auVar23 = ZEXT1664(auVar23._0_16_);
                  auVar24 = ZEXT1664(auVar24._0_16_);
                  auVar25 = ZEXT1664(auVar25._0_16_);
                  sVar4 = thunk_FUN_180624430();
                  if (0 < sVar4) {
                  }
                  auVar1 = *pauVar5;
                  auVar7 = auVar1._0_16_;
                  auVar10 = vshufps_avx(auVar7,auVar7,0xaa);
                  if ((auVar10._0_4_ & 0x7f800000) == 0x7f800000) {
                  }
                  auVar7 = vshufps_avx(auVar7,auVar7,0xff);
                  if ((auVar7._0_4_ & 0x7f800000) == 0x7f800000) {
                  }
                  if (auVar1._16_4_ != param_6) {
                  }
                  if (auVar1._20_4_ != param_7) {
                  }
                  auVar19 = ZEXT1664(auVar19._0_16_);
                  auVar21 = ZEXT1664(auVar10);
                  auVar22 = ZEXT1664(auVar22._0_16_);
                  auVar23 = ZEXT1664(auVar23._0_16_);
                  auVar24 = ZEXT1664(auVar24._0_16_);
                  auVar25 = ZEXT1664(auVar25._0_16_);
                  cVar3 = FUN_180354630(param_1[9],uVar16);
                  fVar18 = auVar19._0_4_;
                  fVar20 = auVar21._0_4_;
                  if (cVar3 == '\0') {
                  }
                  if (param_1[10] != '\0') {
                    fVar18 = *(float *)(param_1 + 0xc);
                    sVar4 = thunk_FUN_180624430(fVar18);
                    if (0 < sVar4) {
                    }
                    fVar20 = local_258._4_4_;
                    sVar4 = thunk_FUN_180624430(local_258._4_4_);
                    if (0 < sVar4) {
                    }
                    if (fVar18 < fVar20) {
                    }
                    fVar17 = *(float *)(param_1 + 0x10);
                    sVar4 = thunk_FUN_180624430(fVar17);
                    if (0 < sVar4) {
                    }
                    fVar15 = *(float *)(pauVar5[1] + 0x18);
                    sVar4 = thunk_FUN_180624430(fVar15);
                    fVar18 = auVar19._0_4_;
                    fVar20 = auVar21._0_4_;
                    if (0 < sVar4) {
                    }
                    if (fVar17 + auVar24._0_4_ < fVar15) {
                    }
                  }
                  if (fVar20 * fVar20 + fVar18 * fVar18 <= auVar22._0_4_) {
                  }
                  if (fVar18 * *param_2 + fVar20 * param_2[1] <= auVar22._0_4_) {
                  }
                  if (param_1[2] != '\0') {
                    if (*(int *)(param_1 + 4) < 0) {
                    }
                    if ((int)(*(ulonglong *)(*pauVar5 + 0x18) >> 0x20) < *(int *)(param_1 + 4)) {
                    }
                    sVar4 = thunk_FUN_180624430(*(ulonglong *)(*pauVar5 + 0x18) & 0xffffffff);
                    if (0 < sVar4) {
                    }
                  }
                  pauVar5 = (undefined1 (*) [32])(pauVar5[1] + 0x1c);
                } while (pauVar5 != (undefined1 (*) [32])local_1c0);
                if ((cVar2 == '\0') && (local_2a8 == '\0')) {
                  fVar18 = auVar25._0_4_ * auVar23._0_4_;
                  if ((param_2[2] - fVar18) + auVar24._0_4_ < *(float *)((longlong)param_8 + 0xc)) {
                    auVar13._8_8_ = 0;
                    auVar13._0_8_ = *param_3;
                    auVar11._8_8_ = 0;
                    auVar11._0_8_ = *(ulonglong *)((longlong)param_8 + 4);
                    auVar10 = vshufps_avx(auVar13,auVar13,0x55);
                    auVar7 = vshufps_avx(auVar11,auVar11,0x55);
                    if (-auVar25._0_4_ * auVar23._0_4_ <=
                        auVar10._0_4_ * auVar7._0_4_ +
                        (float)*param_3 * (float)*(ulonglong *)((longlong)param_8 + 4) +
                        *(float *)((longlong)param_8 + 0xc) * *(float *)(param_3 + 1)) {
                      auVar12._8_8_ = 0;
                      auVar12._0_8_ = *(ulonglong *)param_2;
                      auVar14._8_8_ = 0;
                      auVar14._0_8_ = *param_3;
                      auVar10 = vshufps_avx(auVar12,auVar12,0x55);
                      auVar7 = vshufps_avx(auVar14,auVar14,0x55);
                      if (local_2a6 != '\0') {
                        vminss_avx(ZEXT416((uint)(auVar10._0_4_ * auVar7._0_4_ +
                                                  (float)*(ulonglong *)param_2 * (float)*param_3 +
                                                 *(float *)(param_3 + 1) *
                                                 (param_2[2] - fVar18 * 0.5))),auVar22._0_16_);
                      }
                    }
                  }
                }
                else {
                  puVar6 = local_1b8;
                  fVar18 = 0.99;
                  local_1b8[0] = *param_8;
                  local_1b8[1] = param_8[1];
                  local_1b8[2] = param_8[2];
                  uStack_1a0 = param_8[3];
                  local_188 = param_8[6];
                  local_17c = *param_9;
                  uStack_174 = param_9[1];
                  uStack_16c = param_9[2];
                  uStack_164 = param_9[3];
                  local_198 = param_8[4];
                  uStack_190 = param_8[5];
                  local_180 = *(undefined4 *)(param_8 + 7);
                  local_14c = param_9[6];
                  local_15c = param_9[4];
                  uStack_154 = param_9[5];
                  local_144 = *(undefined4 *)(param_9 + 7);
                  do {
                    auVar10 = *(undefined1 (*) [16])(puVar6 + 4);
                    local_298 = auVar10._0_8_;
                    auVar25 = ZEXT1664(auVar10);
                    auVar22 = ZEXT1664(auVar22._0_16_);
                    local_290 = auVar10._8_4_;
                    cVar2 = FUN_180354ae0(&local_298);
                    if (cVar2 == '\0') {
                    }
                    auVar9._8_8_ = 0;
                    auVar9._0_8_ = *param_3;
                    auVar7 = vshufps_avx(auVar9,auVar9,0x55);
                    auVar9 = vshufps_avx(auVar25._0_16_,auVar25._0_16_,0x55);
                    if (auVar9._0_4_ * auVar7._0_4_ + auVar25._0_4_ * (float)*param_3 +
                        auVar10._8_4_ * *(float *)(param_3 + 1) < fVar18) {
                    }
                    puVar6 = (undefined8 *)((longlong)puVar6 + 0x3c);
                  } while (puVar6 != &local_140);
                  if ((((*(char *)((longlong)param_8 + 1) != '\0') ||
                       (*(char *)((longlong)param_9 + 1) != '\0')) ||
                      ((*(float *)((longlong)param_8 + 0xc) <= auVar22._0_4_ ||
                       (*(float *)((longlong)param_9 + 0xc) <= auVar22._0_4_)))) &&
                     (((local_2a7 != '\0' && (*(char *)((longlong)param_8 + 1) != '\0')) &&
                      (*(char *)((longlong)param_9 + 1) != '\0')))) {
                    pauVar5 = &local_138;
                    local_138._0_8_ = *param_8;
                    local_138._8_8_ = param_8[1];
                    local_138._16_8_ = param_8[2];
                    local_138._24_8_ = param_8[3];
                    local_108 = param_8[6];
                    local_118 = param_8[4];
                    uStack_110 = param_8[5];
                    local_fc = *param_9;
                    uStack_f4 = param_9[1];
                    uStack_ec = param_9[2];
                    uStack_e4 = param_9[3];
                    local_dc = param_9[4];
                    uStack_d4 = param_9[5];
                    auVar8._8_8_ = 0;
                    auVar8._0_8_ = *(ulonglong *)param_2;
                    local_cc = param_9[6];
                    auVar10 = vshufps_avx(auVar8,auVar8,0x55);
                    local_298._0_4_ = (float)*(ulonglong *)param_2;
                    local_100 = *(undefined4 *)(param_8 + 7);
                    local_c4 = *(undefined4 *)(param_9 + 7);
                    do {
                      auVar9 = SUB3216(*pauVar5,0);
                      auVar7 = vshufps_avx(auVar9,auVar9,0xaa);
                      auVar9 = vshufps_avx(auVar9,auVar9,0x55);
                      if (auVar7._0_4_ * auVar7._0_4_ + auVar9._0_4_ * auVar9._0_4_ <
                          auVar10._0_4_ * auVar10._0_4_ + (float)local_298 * (float)local_298) {
                      }
                      pauVar5 = (undefined1 (*) [32])(pauVar5[1] + 0x1c);
                    } while (pauVar5 != (undefined1 (*) [32])local_c0);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}



