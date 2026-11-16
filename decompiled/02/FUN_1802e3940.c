// FUN_1802e3940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e3940 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802e3940(undefined8 *param_1,longlong param_2,float *param_3,char param_4,char param_5,
                  char param_6)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  byte *pbVar8;
  byte *pbVar9;
  float *pfVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  bool bVar14;
  int iVar15;
  undefined1 auVar16 [8];
  int *piVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 auVar32 [64];
  float fVar33;
  undefined1 auVar34 [64];
  float fVar35;
  undefined8 uVar36;
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auStackY_308 [32];
  undefined4 local_2c8;
  char local_2c4;
  float local_2c0;
  float local_2bc;
  float local_2b8;
  float local_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8 [4];
  float local_298;
  undefined4 local_294;
  float local_290;
  float local_28c;
  float *local_288;
  undefined8 local_280;
  float local_278;
  float local_274;
  float local_270;
  float local_268;
  float local_264;
  float local_260;
  undefined8 local_258;
  float local_250;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  longlong local_238;
  int *local_230;
  byte *local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  undefined1 *local_1f8;
  undefined8 local_1f0;
  undefined1 *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1c8;
  ulonglong local_1b8;
  undefined8 local_1a8;
  longlong local_198;
  undefined4 local_190;
  int local_188 [2];
  undefined1 local_180 [8];
  float *pfStack_178;
  float *local_170;
  undefined1 local_168 [8];
  float *pfStack_160;
  float *local_158;
  undefined1 local_148 [8];
  byte *pbStack_140;
  longlong local_138;
  undefined1 local_128 [8];
  undefined8 uStack_120;
  undefined8 local_118;
  undefined1 local_110 [16];
  undefined8 *local_100;
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStackY_308;
  _local_128 = (undefined1  [16])0x0;
  local_118 = 0;
  local_188[0] = 1;
  fVar23 = 0.0;
  local_2c4 = param_4;
  local_288 = param_3;
  local_238 = param_2;
  if (((DAT_180bbab78 != 0) &&
      ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_188,local_128),
      local_188[0] == 0)) || ((float)uStack_120 <= fVar23)) {
    local_188[0] = 0;
    iVar5 = 0;
  }
  else {
    local_188[0] = (int)(float)uStack_120;
    iVar5 = (int)uStack_120._4_4_;
  }
  iVar15 = local_188[0];
  local_2a8[3] = (float)iVar5;
  fVar31 = local_2a8[3] * 0.5;
  fVar19 = param_3[4] * param_3[4] + param_3[5] * param_3[5] + param_3[6] * param_3[6];
  local_2bc = fVar31;
  if (fVar19 < 0.0) {
    fVar19 = (float)FUN_18061e150(fVar19);
  }
  else {
    fVar19 = SQRT(fVar19);
  }
  local_2b8 = fVar19 * fVar31;
  local_294 = *(undefined4 *)(param_2 + 0x90);
  piVar17 = (int *)*param_1;
  local_230 = (int *)param_1[1];
  if (piVar17 == local_230) {
LAB_1802e4aaa:
    *(undefined4 *)(param_2 + 0x90) = local_294;
  }
  fVar19 = 8.0;
  local_198 = param_2;
  local_190 = local_294;
  do {
    iVar5 = 0;
    fVar31 = (float)piVar17[0x12];
    sVar4 = thunk_FUN_180624430(fVar31);
    if (sVar4 < 1) {
      local_2c0 = fVar19;
      local_2c8 = fVar23;
      pfVar7 = (float *)&local_2c8;
      if (fVar23 <= fVar31) {
        pfVar7 = (float *)(piVar17 + 0x12);
      }
      pfVar18 = &local_2c0;
      if (fVar31 <= fVar19) {
        pfVar18 = pfVar7;
      }
      fVar31 = *pfVar18;
    }
    else {
      fVar31 = fVar23;
    }
    *(float *)(param_2 + 0x90) = fVar31;
    if (*(char *)((longlong)piVar17 + 0x37) != '\0') {
      if (piVar17[0x11] == 0) {
        cVar3 = param_4;
      }
      else {
        cVar3 = param_5;
        if (piVar17[0x11] != 1) {
          cVar3 = param_6;
        }
      }
      if (cVar3 != '\0') {
        puVar13 = (ulonglong *)(piVar17 + 1);
        uVar11 = *puVar13;
        fVar23 = param_3[1];
        fVar19 = *param_3;
        fVar31 = param_3[2];
        fVar20 = param_3[3];
        fVar30 = (float)uVar11;
        local_1d8._4_4_ = (float)(uVar11 >> 0x20);
        fVar33 = (float)piVar17[3];
        local_2c8 = fVar30 * fVar19 + local_1d8._4_4_ * fVar23 + fVar33 * fVar31 + fVar20;
        fVar28 = param_3[4];
        fVar21 = param_3[5];
        fVar22 = param_3[6];
        fVar35 = param_3[7];
        local_2c0 = fVar28 * fVar30 + fVar21 * local_1d8._4_4_ + fVar22 * fVar33 + fVar35;
        auVar32 = ZEXT464((uint)local_2c0);
        auVar34 = ZEXT464((uint)(local_1d8._4_4_ * param_3[0xd] + fVar30 * param_3[0xc] +
                                 fVar33 * param_3[0xe] + param_3[0xf]));
        local_1d8 = uVar11;
        sVar4 = thunk_FUN_180624430(local_2c8);
        if ((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(auVar32._0_8_), sVar4 < 1)) {
          sVar4 = thunk_FUN_180624430(auVar34._0_8_);
          pfVar7 = local_288;
          if (0 < sVar4) goto LAB_1802e4a7e;
          if (*piVar17 != 0) {
            if (*piVar17 != 1) {
              fVar23 = auVar34._0_4_;
              if (1.0 <= fVar23) {
                fVar19 = (local_2c8 / fVar23 + 1.0) * (float)iVar15 * 0.5;
                auVar37 = ZEXT464((uint)fVar19);
                fVar23 = (1.0 - auVar32._0_4_ / fVar23) * local_2bc;
                auVar32 = ZEXT464((uint)fVar23);
                local_2a8[2] = 64.0;
                local_2a8[0] = 0.0;
                auVar27 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar34._0_16_);
                local_2a8[1] = (local_2b8 * (float)piVar17[0xf]) / auVar27._0_4_;
                pfVar7 = local_2a8;
                if (0.0 <= local_2a8[1]) {
                  pfVar7 = local_2a8 + 1;
                }
                pfVar18 = local_2a8 + 2;
                if (local_2a8[1] <= 64.0) {
                  pfVar18 = pfVar7;
                }
                fVar31 = *pfVar18;
                if (0.01 < fVar31) {
                  local_2c8 = (float)piVar17[0xd];
                  cVar3 = (char)((uint)local_2c8 >> 0x18);
                  if (fVar31 < 1.0) {
                    cVar3 = (char)(int)((float)((uint)local_2c8 >> 0x18) * fVar31 * fVar31);
                    local_2c8 = (float)CONCAT13(cVar3,(undefined3)local_2c8);
                  }
                  fVar20 = local_2c8;
                  if (cVar3 != '\0') {
                    auVar27 = vmaxss_avx(ZEXT416((uint)fVar31),SUB6416(ZEXT464(0x3f800000),0));
                    auVar34 = ZEXT1664(auVar27);
                    fVar33 = -fVar31 + -fVar31;
                    if (((fVar33 <= fVar19) && (fVar19 <= fVar31 + fVar31 + (float)iVar15)) &&
                       ((fVar33 <= fVar23 && (fVar23 <= fVar31 + fVar31 + local_2a8[3])))) {
                      if (*piVar17 == 4) {
                        local_298 = 1.0;
                        local_2c0 = 0.0;
                        local_2c8 = (fVar31 - 1.2) / 2.4;
                        pfVar7 = &local_2c0;
                        if (0.0 <= local_2c8) {
                          pfVar7 = (float *)&local_2c8;
                        }
                        pfVar18 = &local_298;
                        if (local_2c8 <= 1.0) {
                          pfVar18 = pfVar7;
                        }
                        fVar23 = *pfVar18;
                        cVar3 = (char)(int)((3.0 - (fVar23 + fVar23)) * fVar23 * fVar23 *
                                            (float)((uint)fVar20 >> 0x18) * 0.7);
                        local_2c8._0_3_ = SUB43(fVar20,0);
                        local_2c8 = (float)CONCAT13(cVar3,(undefined3)local_2c8);
                        fVar23 = local_2c8;
                        fVar19 = 1.35;
                        fVar20 = 1.5707963;
                        do {
                          uVar36 = auVar37._0_8_;
                          uVar24 = auVar32._0_8_;
                          if (cVar3 == '\0') break;
                          fVar33 = (float)iVar5 * fVar20 + (float)piVar17[0x10];
                          auVar34 = ZEXT464((uint)fVar33);
                          fVar21 = (float)FUN_180637540(fVar33);
                          fVar22 = (float)FUN_180638e00(auVar34._0_8_);
                          auVar27 = vmaxss_avx(ZEXT416((uint)(fVar31 * 0.18)),ZEXT416(0x3f266666));
                          fVar33 = auVar27._0_4_ * fVar21;
                          fVar35 = auVar32._0_4_;
                          fVar28 = auVar27._0_4_ * fVar22;
                          fVar30 = auVar37._0_4_;
                          if (cVar3 != '\0') {
                            local_f8._4_4_ = fVar22 * fVar31 * fVar19 + fVar35;
                            local_f8._0_4_ = fVar21 * fVar31 * fVar19 + fVar30;
                            uStack_f0._0_4_ = fVar30 - fVar28;
                            uStack_f0._4_4_ = fVar35 + fVar33;
                            local_e8 = CONCAT44(fVar35 - fVar33,fVar30 + fVar28);
                            local_1f8 = local_f8;
                            local_1f0 = 6;
                            FUN_180432700(param_2,&local_1f8,fVar23);
                          }
                          uVar36 = auVar37._0_8_;
                          uVar24 = auVar32._0_8_;
                          iVar5 = iVar5 + 1;
                        } while (iVar5 < 4);
                        auVar27 = vmaxss_avx(ZEXT416((uint)(fVar31 * 0.45)),ZEXT416(0x3f800000));
                        FUN_180432510(param_2,uVar36,uVar24,auVar27._0_8_);
                        param_4 = local_2c4;
                      }
                      else if (*piVar17 == 3) {
                        fVar23 = (float)FUN_180637540(piVar17[0x10]);
                        fVar19 = (float)FUN_180638e00(piVar17[0x10]);
                        fVar33 = auVar34._0_4_;
                        fVar28 = auVar32._0_4_;
                        fVar21 = auVar37._0_4_;
                        if ((char)((uint)fVar20 >> 0x18) != '\0') {
                          local_f8._4_4_ = fVar19 * fVar31 * 1.8 + fVar28;
                          local_f8._0_4_ = fVar23 * fVar31 * 1.8 + fVar21;
                          uStack_f0._0_4_ = fVar21 - fVar19 * fVar33;
                          uStack_f0._4_4_ = fVar23 * fVar33 + fVar28;
                          local_e8 = CONCAT44(fVar28 - (fVar19 + fVar23) * fVar33,
                                              (fVar19 - fVar23) * fVar33 + fVar21);
                          local_1e8 = local_f8;
                          local_1e0 = 6;
                          FUN_180432700(param_2,&local_1e8,fVar20);
                        }
                      }
                      else {
                        FUN_180432510(param_2,fVar19,fVar23,auVar27._0_8_);
                      }
                    }
                  }
                }
              }
              goto LAB_1802e4a7e;
            }
            _local_180 = (undefined1  [16])0x0;
            local_170 = (float *)0x0;
            bVar14 = true;
            pfStack_178 = (float *)0x0;
            pfVar18 = pfStack_178;
            if (puVar13 == (ulonglong *)(piVar17 + 0xd)) {
LAB_1802e42a1:
              iVar5 = 0;
              fVar23 = 0.0;
              do {
                if (local_180 == (undefined1  [8])pfVar18) goto LAB_1802e4549;
                local_168 = (undefined1  [8])0x0;
                pfStack_160 = (float *)0x0;
                pfVar7 = pfStack_160;
                local_158 = (float *)0x0;
                uVar11 = *(ulonglong *)(pfVar18 + -3);
                auVar32 = ZEXT864(uVar11);
                fVar19 = pfVar18[-1];
                local_1a8._4_4_ = (float)(uVar11 >> 0x20);
                if (iVar5 == 0) {
                  auVar34 = ZEXT464((uint)(fVar19 - 1.0));
                }
                else if (iVar5 == 1) {
                  auVar34 = ZEXT464((uint)(fVar19 + (float)uVar11));
                }
                else if (iVar5 == 2) {
                  auVar34 = ZEXT464((uint)(fVar19 - (float)uVar11));
                }
                else if (iVar5 == 3) {
                  auVar34 = ZEXT464((uint)(local_1a8._4_4_ + fVar19));
                }
                else {
                  auVar34 = ZEXT464((uint)(fVar19 - local_1a8._4_4_));
                }
                pfStack_160 = (float *)0x0;
                pfVar10 = pfStack_160;
                auVar16 = local_180;
                fVar31 = local_1a8._4_4_;
                local_1a8 = uVar11;
                pfStack_160 = pfVar7;
                do {
                  uVar11 = *(ulonglong *)auVar16;
                  auVar37 = ZEXT864(uVar11);
                  fVar20 = *(float *)((longlong)auVar16 + 8);
                  local_258._4_4_ = (float)(uVar11 >> 0x20);
                  fVar33 = (float)uVar11;
                  if (iVar5 == 0) {
                    auVar39 = ZEXT464((uint)(fVar20 - 1.0));
                  }
                  else if (iVar5 == 1) {
                    auVar39 = ZEXT464((uint)(fVar20 + fVar33));
                  }
                  else if (iVar5 == 2) {
                    auVar39 = ZEXT464((uint)(fVar20 - fVar33));
                  }
                  else if (iVar5 == 3) {
                    auVar39 = ZEXT464((uint)(local_258._4_4_ + fVar20));
                  }
                  else {
                    auVar39 = ZEXT464((uint)(fVar20 - local_258._4_4_));
                  }
                  fVar28 = auVar34._0_4_;
                  fVar21 = fVar20;
                  fVar22 = local_258._4_4_;
                  local_250 = fVar20;
                  if (fVar23 <= fVar28 != fVar23 <= auVar39._0_4_) {
                    fVar28 = fVar28 / (fVar28 - auVar39._0_4_);
                    local_268 = (fVar33 - auVar32._0_4_) * fVar28 + auVar32._0_4_;
                    local_264 = (local_258._4_4_ - fVar31) * fVar28 + fVar31;
                    fVar28 = (fVar20 - fVar19) * fVar28;
                    local_260 = fVar28 + fVar19;
                    if (pfVar10 == local_158) {
                      local_258 = uVar11;
                      FUN_1802ebc20(local_168,fVar28,&local_268);
                      pfVar10 = pfStack_160;
                      uVar11 = local_258;
                    }
                    else {
                      *pfVar10 = local_268;
                      pfVar10[1] = local_264;
                      pfVar10[2] = local_260;
                      pfStack_160 = pfStack_160 + 3;
                      pfVar10 = pfStack_160;
                    }
                  }
                  local_258 = uVar11;
                  fVar31 = fVar22;
                  fVar19 = fVar21;
                  auVar29 = auVar37._0_16_;
                  auVar27 = auVar39._0_16_;
                  if (fVar23 <= auVar39._0_4_) {
                    if (pfVar10 == local_158) {
                      FUN_1802ebc20(local_168,pfVar10,&local_258);
                      auVar29 = auVar37._0_16_;
                      auVar27 = auVar39._0_16_;
                      pfVar10 = pfStack_160;
                    }
                    else {
                      *(ulonglong *)pfVar10 = auVar37._0_8_;
                      pfVar10[2] = fVar20;
                      pfStack_160 = pfStack_160 + 3;
                      pfVar10 = pfStack_160;
                    }
                  }
                  auVar32 = ZEXT1664(auVar29);
                  auVar34 = ZEXT1664(auVar27);
                  auVar16 = (undefined1  [8])((longlong)auVar16 + 0xc);
                } while (auVar16 != (undefined1  [8])pfVar18);
                if (local_180 != (undefined1  [8])0x0) {
                  auVar16 = local_180;
                  if ((0xfff < (ulonglong)
                               ((((longlong)local_170 - (longlong)local_180) / 0xc) * 0xc)) &&
                     (auVar16 = *(undefined1 (*) [8])((longlong)local_180 + -8),
                     0x1f < ((longlong)local_180 - (longlong)auVar16) - 8U)) {
                    /* WARNING: Subroutine does not return */
                    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                  }
                  FUN_1804547d0(auVar16);
                }
                pfStack_178 = pfStack_160;
                local_180 = local_168;
                local_170 = local_158;
                _local_168 = (undefined1  [16])0x0;
                local_158 = (float *)0x0;
                FUN_1801b36e0(local_168);
                iVar5 = iVar5 + 1;
                pfVar18 = pfStack_178;
              } while (iVar5 < 5);
LAB_1802e4549:
              if (2 < (ulonglong)(((longlong)pfVar18 - (longlong)local_180) / 0xc)) {
                _local_128 = (undefined1  [16])0x0;
                local_118 = 0;
                if (local_180 != (undefined1  [8])pfVar18) {
                  fVar23 = (float)local_188[0] * 0.5;
                  fVar31 = 1.0;
                  pfVar7 = (float *)local_180;
                  fVar19 = local_2bc;
                  do {
                    uVar11 = *(ulonglong *)pfVar7;
                    auVar29._8_8_ = 0;
                    auVar29._0_8_ = uVar11;
                    local_290 = ((float)uVar11 / pfVar7[2] + fVar31) * fVar23;
                    auVar27 = vshufps_avx(auVar29,auVar29,0x55);
                    local_148 = (undefined1  [8])uVar11;
                    local_28c = (fVar31 - auVar27._0_4_ / pfVar7[2]) * fVar19;
                    FUN_1802aa650(local_128,&local_290);
                    FUN_1802aa650(local_128,&local_28c);
                    pfVar7 = pfVar7 + 3;
                  } while (pfVar7 != pfVar18);
                  fVar23 = 0.0;
                }
                local_208 = (longlong)local_128;
                local_200 = uStack_120 - (longlong)local_128 >> 2;
                FUN_180432700(param_2,&local_208,piVar17[0xd]);
                FUN_180159650(local_128);
                FUN_1801b36e0(local_180);
                param_4 = local_2c4;
                goto LAB_1802e4a83;
              }
            }
            else {
              do {
                pfVar10 = local_170;
                local_1b8 = *puVar13;
                auVar27._8_8_ = 0;
                auVar27._0_8_ = local_1b8;
                auVar27 = vshufps_avx(auVar27,auVar27,0x55);
                fVar31 = auVar27._0_4_;
                fVar23 = *(float *)(puVar13 + 1);
                fVar19 = fVar31 * pfVar7[1] + (float)local_1b8 * *pfVar7 + fVar23 * pfVar7[2] +
                         pfVar7[3];
                local_274 = fVar31 * pfVar7[5] + (float)local_1b8 * pfVar7[4] + fVar23 * pfVar7[6] +
                            pfVar7[7];
                auVar34 = ZEXT464((uint)local_274);
                local_270 = (float)local_1b8 * pfVar7[0xc] + fVar31 * pfVar7[0xd] +
                            fVar23 * pfVar7[0xe] + pfVar7[0xf];
                auVar32 = ZEXT464((uint)local_270);
                local_278 = fVar19;
                sVar4 = thunk_FUN_180624430(fVar19);
                if ((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(auVar34._0_8_), sVar4 < 1)) {
                  sVar4 = thunk_FUN_180624430(auVar32._0_8_);
                  fVar23 = auVar32._0_4_;
                  fVar31 = auVar34._0_4_;
                  if (0 < sVar4) goto LAB_1802e4236;
                  bVar2 = 1;
                }
                else {
LAB_1802e4236:
                  fVar23 = auVar32._0_4_;
                  fVar31 = auVar34._0_4_;
                  bVar2 = 0;
                }
                bVar14 = (bool)(bVar14 & bVar2);
                if (pfVar18 == pfVar10) {
                  FUN_1802ebc20(local_180,pfVar18,&local_278);
                  pfVar18 = pfStack_178;
                }
                else {
                  *pfVar18 = fVar19;
                  pfVar18[1] = fVar31;
                  pfVar18[2] = fVar23;
                  pfVar18 = (float *)((longlong)pfStack_178 + 0xc);
                  pfStack_178 = pfVar18;
                }
                puVar13 = (ulonglong *)((longlong)puVar13 + 0xc);
              } while (puVar13 != (ulonglong *)(piVar17 + 0xd));
              param_2 = local_238;
              if (bVar14) goto LAB_1802e42a1;
            }
            FUN_1801b36e0(local_180);
            param_4 = local_2c4;
            goto LAB_1802e4a7e;
          }
          uVar24 = *(undefined8 *)(piVar17 + 4);
          fVar30 = (float)uVar24;
          local_1c8._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
          fVar33 = (float)piVar17[6];
          fVar20 = fVar30 * fVar19 + local_1c8._4_4_ * fVar23 + fVar33 * fVar31 + fVar20;
          auVar37 = ZEXT464((uint)(fVar28 * fVar30 + fVar21 * local_1c8._4_4_ + fVar22 * fVar33 +
                                  fVar35));
          auVar32 = ZEXT464((uint)(local_1c8._4_4_ * param_3[0xd] + fVar30 * param_3[0xc] +
                                   fVar33 * param_3[0xe] + param_3[0xf]));
          local_1c8 = uVar24;
          sVar4 = thunk_FUN_180624430(fVar20);
          if ((0 < sVar4) || (sVar4 = thunk_FUN_180624430(auVar37._0_8_), 0 < sVar4))
          goto LAB_1802e4a7e;
          sVar4 = thunk_FUN_180624430(auVar32._0_8_);
          fVar23 = 0.0;
          if (sVar4 < 1) {
            auVar39 = ZEXT864(0);
            auVar38 = ZEXT1664(SUB6416(ZEXT464(0x3f800000),0));
            do {
              fVar19 = auVar34._0_4_;
              fVar31 = auVar32._0_4_;
              fVar33 = auVar37._0_4_;
              if (iVar5 == 0) {
                auVar27 = ZEXT416((uint)(fVar19 - 1.0));
                fVar28 = fVar31 - 1.0;
              }
              else if (iVar5 == 1) {
                auVar27 = ZEXT416((uint)(fVar19 + local_2c8));
                fVar28 = fVar31 + fVar20;
              }
              else if (iVar5 == 2) {
                auVar27 = ZEXT416((uint)(fVar19 - local_2c8));
                fVar28 = fVar31 - fVar20;
              }
              else if (iVar5 == 3) {
                auVar27 = ZEXT416((uint)(fVar19 + local_2c0));
                fVar28 = fVar31 + fVar33;
              }
              else {
                auVar27 = ZEXT416((uint)(fVar19 - local_2c0));
                fVar28 = fVar31 - fVar33;
              }
              fVar21 = auVar27._0_4_;
              if (fVar21 < 0.0) {
                if (fVar28 < 0.0) goto LAB_1802e4a83;
                auVar25._0_4_ = fVar21 / (fVar21 - fVar28);
                auVar25._4_12_ = auVar27._4_12_;
                auVar29 = vmaxss_avx(auVar25,auVar39._0_16_);
                auVar39 = ZEXT1664(auVar29);
              }
              if (fVar28 < 0.0) {
                auVar26._0_4_ = fVar21 / (fVar21 - fVar28);
                auVar26._4_12_ = auVar27._4_12_;
                auVar27 = vminss_avx(auVar26,auVar38._0_16_);
                auVar38 = ZEXT1664(auVar27);
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 < 5);
            fVar21 = auVar39._0_4_;
            fVar28 = auVar38._0_4_;
            if (fVar21 < fVar28) {
              fVar23 = (fVar31 - fVar19) * fVar21 + fVar19;
              fVar22 = (((fVar20 - local_2c8) * fVar21 + local_2c8) / fVar23 + 1.0) *
                       (float)iVar15 * 0.5;
              fVar23 = (1.0 - ((fVar33 - local_2c0) * fVar21 + local_2c0) / fVar23) * local_2bc;
              fVar19 = fVar28 * (fVar31 - fVar19) + fVar19;
              auVar37 = ZEXT464(0x3f800000);
              fVar31 = (((fVar20 - local_2c8) * fVar28 + local_2c8) / fVar19 + 1.0) *
                       (float)iVar15 * 0.5;
              fVar19 = (1.0 - (fVar28 * (fVar33 - local_2c0) + local_2c0) / fVar19) * local_2bc;
              fVar20 = (float)FUN_180636420(fVar22 - fVar31,fVar23 - fVar19);
              if (fVar20 < 0.01) goto LAB_1802e4a7e;
              _local_f8 = (undefined1  [16])0x0;
              local_e8 = 0;
              local_248 = fVar22;
              local_244 = fVar23;
              local_240 = fVar31;
              local_23c = fVar19;
              lVar6 = FUN_18015bca0(0x10);
              uStack_f0 = lVar6;
              local_f8 = (undefined1  [8])lVar6;
              local_e8 = lVar6 + 0x10;
              FUN_18063aed0(lVar6,&local_248,0x10);
              uStack_f0 = lVar6 + 0x10;
              local_110 = (undefined1  [16])0x0;
              local_100 = (undefined8 *)0x0;
              uVar24 = FUN_1802e4b40(0,&local_280,piVar17[0xd],piVar17[0xe]);
              FUN_1802e4b40(uVar24,(longlong)&local_280 + 4,piVar17[0xd]);
              local_110 = (undefined1  [16])0x0;
              local_100 = (undefined8 *)0x0;
              local_110._0_8_ = FUN_18015bca0(8);
              auVar27 = auVar37._0_16_;
              local_100 = (undefined8 *)(local_110._0_8_ + 8);
              *(undefined8 *)local_110._0_8_ = local_280;
              local_110._8_8_ = local_100;
              pfVar7 = (float *)(piVar17 + 0xf);
              if ((float)piVar17[0x10] == auVar37._0_4_) {
                local_2ac = 64.0;
                local_2b4 = 0.0;
                auVar29 = vmaxss_avx(auVar27,ZEXT416((uint)((auVar32._0_4_ + auVar34._0_4_) * 0.5)))
                ;
                local_2b0 = (local_2b8 * (float)piVar17[0xf]) / auVar29._0_4_;
                pfVar18 = &local_2b4;
                if (0.0 <= local_2b0) {
                  pfVar18 = &local_2b0;
                }
                pfVar7 = &local_2ac;
                if (local_2b0 <= 64.0) {
                  pfVar7 = pfVar18;
                }
              }
              fVar23 = 0.0;
              auVar32 = ZEXT464((uint)*pfVar7);
              auVar29 = ZEXT416((uint)*pfVar7);
              _local_148 = (undefined1  [16])0x0;
              local_138 = 0;
              uVar11 = (longlong)local_100 - local_110._0_8_ >> 2;
              if (uVar11 == 0) {
                pbStack_140 = (byte *)0x0;
                pbVar9 = pbStack_140;
              }
              else {
                if (0x3fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_1801136f0();
                }
                lVar6 = FUN_18015bca0(uVar11 * 4);
                pbStack_140 = (byte *)lVar6;
                local_148 = (undefined1  [8])lVar6;
                local_138 = uVar11 * 4 + lVar6;
                lVar12 = local_110._8_8_ - local_110._0_8_;
                FUN_18063aed0(lVar6,local_110._0_8_,lVar12);
                auVar27 = auVar37._0_16_;
                auVar29 = auVar32._0_16_;
                pbVar9 = (byte *)(lVar6 + (lVar12 >> 2) * 4);
                pbStack_140 = pbVar9;
              }
              if ((auVar29._0_4_ < auVar27._0_4_) && (local_148 != (undefined1  [8])pbVar9)) {
                pbVar8 = (byte *)((longlong)local_148 + 3);
                do {
                  *pbVar8 = (byte)(int)((float)*pbVar8 * auVar29._0_4_);
                  pbVar1 = pbVar8 + 1;
                  pbVar8 = pbVar8 + 4;
                } while (pbVar1 != pbVar9);
                pbVar9 = pbStack_140;
              }
              local_220 = (longlong)pbVar9 - (longlong)local_148 >> 2;
              local_218 = (longlong)local_f8;
              local_210 = uStack_f0 - (longlong)local_f8 >> 2;
              vmaxss_avx(auVar29,auVar27);
              local_228 = (byte *)local_148;
              FUN_180433bf0(param_2,&local_218,&local_228);
              FUN_180159650(local_148);
              FUN_180159650(local_110);
              FUN_180159650(local_f8);
            }
          }
        }
        else {
LAB_1802e4a7e:
          fVar23 = 0.0;
        }
LAB_1802e4a83:
        fVar19 = 8.0;
      }
    }
    piVar17 = piVar17 + 0x13;
    if (piVar17 == local_230) goto LAB_1802e4aaa;
    param_3 = local_288;
    iVar15 = local_188[0];
  } while( true );
}



