// FUN_1802db440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802db440 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802db440(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  float fVar2;
  undefined1 auVar3 [32];
  ulonglong uVar4;
  undefined8 uVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  ulonglong *puVar9;
  longlong lVar10;
  uint *puVar11;
  ULONGLONG UVar12;
  undefined8 *puVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  ulonglong uVar17;
  float *pfVar18;
  uint uVar19;
  int iVar20;
  ulonglong uVar21;
  longlong lVar22;
  uint *puVar23;
  uint *puVar24;
  uint uVar25;
  ulonglong uVar26;
  bool bVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 extraout_var [56];
  undefined1 auVar31 [64];
  undefined4 uVar32;
  float fVar33;
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  float fVar36;
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  float fVar39;
  undefined1 auVar40 [64];
  float fVar41;
  undefined1 auVar42 [64];
  float fVar43;
  float fVar44;
  float local_res18 [2];
  undefined1 auStackY_2c8 [32];
  undefined4 local_250;
  undefined4 local_248;
  float local_23c;
  float local_238;
  float local_234;
  ulonglong local_230;
  undefined8 local_228;
  float local_220;
  float local_218;
  float local_214;
  float local_210;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  undefined4 uStack_1ec;
  ulonglong local_1e0;
  undefined1 local_1d0 [16];
  float local_1c0 [2];
  float local_1b8 [2];
  float local_1b0 [2];
  undefined1 local_1a8 [16];
  uint *local_198;
  undefined1 local_190 [16];
  longlong local_180;
  undefined1 local_178 [16];
  undefined1 local_168 [16];
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  uint uStack_14c;
  longlong lStack_148;
  uint uStack_140;
  float fStack_13c;
  undefined1 local_138 [16];
  float fStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  float local_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined1 local_e4 [172];
  
  local_e4._4_8_ = DAT_1808d5f00 ^ (ulonglong)auStackY_2c8;
  local_178 = ZEXT816(0x1807d4a18);
  local_res18[0] = param_3;
  FUN_18017bf40(local_178 + 8);
  FUN_1802c9680(0xc0);
  uVar26 = param_1 + 0x148;
  local_168._8_8_ = 0;
  local_168._0_8_ = uVar26;
  local_230 = uVar26;
  iVar8 = FUN_1805f68d8(uVar26);
  bVar27 = iVar8 == 0;
  local_168[8] = bVar27;
  if (iVar8 == 0) {
    if (DAT_180b0c6c8 == '\0') {
      if (*(longlong *)(param_1 + 0x78) != *(longlong *)(param_1 + 0x80)) {
        *(longlong *)(param_1 + 0x80) = *(longlong *)(param_1 + 0x78);
      }
    }
    else {
      FUN_1802e7980(param_1 + 0x78,local_res18);
      local_190 = (undefined1  [16])0x0;
      local_180 = 0;
      uVar17 = (*(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78)) / 0x30;
      if (uVar17 != 0) {
        if (0x555555555555555 < uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        lVar10 = FUN_18015bca0(uVar17 * 0x30);
        local_190._8_8_ = lVar10;
        local_190._0_8_ = lVar10;
        local_180 = lVar10 + uVar17 * 0x30;
        lVar22 = *(longlong *)(param_1 + 0x80) - *(longlong *)(param_1 + 0x78);
        FUN_18063aed0(lVar10,*(longlong *)(param_1 + 0x78),lVar22);
        local_190._8_8_ = (lVar22 / 0x30) * 0x30 + lVar10;
      }
      if (uVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      FUN_1805f68fc(uVar26);
      bVar27 = false;
      local_168[8] = 0;
      local_1a8 = (undefined1  [16])0x0;
      local_198 = (uint *)0x0;
      puVar11 = (uint *)FUN_18015bca0(0xc00);
      FUN_18063aed0(puVar11);
      if (local_1a8._0_8_ != 0) {
        if ((0xfff < ((longlong)local_198 - local_1a8._0_8_ & 0xffffffffffffff80U)) &&
           (0x1f < (local_1a8._0_8_ - *(longlong *)(local_1a8._0_8_ + -8)) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0();
      }
      local_1a8._8_8_ = puVar11;
      local_1a8._0_8_ = puVar11;
      local_198 = puVar11 + 0x300;
      iVar8 = 0;
      auVar34 = ZEXT864(0);
      auVar35 = ZEXT464(0x437f0000);
      if (local_190._8_8_ != local_190._0_8_) {
        pfVar18 = (float *)(local_190._8_8_ + -0x18);
        do {
          fVar33 = 1.0;
          auVar37 = ZEXT464(0x40c00000);
          auVar38 = ZEXT464(0x3e800000);
          fVar36 = 7.0;
          fVar44 = 0.001;
          if (0x17 < iVar8) break;
          UVar12 = GetTickCount64();
          uVar26 = *(ulonglong *)(pfVar18 + 2);
          if (uVar26 == 0) {
            auVar29 = vmaxss_avx(ZEXT416((uint)(local_res18[0] - *pfVar18)),auVar34._0_16_);
            uVar26 = auVar29._0_8_;
          }
          else {
            uVar17 = UVar12 - uVar26;
            if (UVar12 < uVar26) {
              uVar17 = 0;
            }
            if ((longlong)uVar17 < 0) {
              uVar26 = (ulonglong)(uint)((float)uVar17 * fVar44);
            }
            else {
              uVar26 = (ulonglong)(uint)((float)(longlong)uVar17 * fVar44);
            }
          }
          puVar13 = (undefined8 *)FUN_1802c8f40(local_1d0,DAT_180b0c738,uVar26,pfVar18[1]);
          local_228 = *puVar13;
          local_220 = *(float *)(puVar13 + 1);
          local_1e0 = *(ulonglong *)(pfVar18 + -3);
          auVar29._8_8_ = 0;
          auVar29._0_8_ = local_1e0;
          fVar44 = pfVar18[-1];
          auVar29 = vshufps_avx(auVar29,auVar29,0x55);
          local_234 = auVar29._0_4_;
          local_23c = (float)local_1e0;
          fVar43 = ((float)local_1e0 - pfVar18[-6]) * ((float)local_1e0 - pfVar18[-6]) +
                   (local_234 - pfVar18[-5]) * (local_234 - pfVar18[-5]) +
                   (fVar44 - pfVar18[-4]) * (fVar44 - pfVar18[-4]);
          local_1b0[0] = fVar44;
          if (fVar43 < 0.0) {
            auVar31._0_8_ = FUN_18061e150();
            auVar31._8_56_ = extraout_var;
            auVar29 = auVar31._0_16_;
          }
          else {
            auVar29 = ZEXT416((uint)SQRT(fVar43));
          }
          auVar31 = ZEXT1664(auVar29);
          sVar7 = thunk_FUN_180624430(auVar29._0_8_);
          if ((0 < sVar7) || (auVar31._0_4_ <= auVar34._0_4_)) {
            auVar29 = auVar34._0_16_;
          }
          else {
            auVar30._0_4_ = auVar37._0_4_ / auVar31._0_4_;
            auVar30._4_12_ = auVar37._4_12_;
            auVar29 = vminss_avx(auVar38._0_16_,auVar30);
          }
          auVar38 = ZEXT1664(auVar29);
          puVar11 = (uint *)local_1a8._8_8_;
          if ((uint *)local_1a8._8_8_ == local_198) {
            puVar11 = (uint *)FUN_1802e9ec0(local_1a8);
          }
          else {
            *(undefined8 *)local_1a8._8_8_ = 0;
            ((uint *)(local_1a8._8_8_ + 8))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 8))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x10))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x10))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x18))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x18))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x20))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x20))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x28))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x28))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x30))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x30))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x38))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x38))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x40))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x40))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x48))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x48))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x50))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x50))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x58))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x58))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x60))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x60))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x68))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x68))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x70))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x70))[1] = 0;
            ((uint *)(local_1a8._8_8_ + 0x78))[0] = 0;
            ((uint *)(local_1a8._8_8_ + 0x78))[1] = 0;
            local_1a8._8_8_ = (uint *)(local_1a8._8_8_ + 0x80);
          }
          iVar20 = 0;
          fVar43 = local_228._4_4_ - (float)local_228;
          fVar33 = fVar33 - auVar38._0_4_;
          puVar23 = puVar11 + 0x18;
          pfVar15 = (float *)(puVar11 + 2);
          fVar39 = (float)local_228;
          fVar41 = local_220;
          do {
            fVar36 = (float)iVar20 / fVar36;
            fVar2 = (fVar43 * fVar36 + fVar39) * fVar33 + auVar38._0_4_;
            local_210 = (fVar44 - pfVar18[-4]) * fVar2 + pfVar18[-4];
            local_214 = (local_234 - pfVar18[-5]) * fVar2 + pfVar18[-5];
            local_218 = (local_23c - pfVar18[-6]) * fVar2 + pfVar18[-6];
            pfVar15[-2] = local_218;
            pfVar15[-1] = local_214;
            *pfVar15 = local_210;
            cVar6 = FUN_1802c9810(&local_218,DAT_180b0c73c);
            if (cVar6 != '\0') {
              uVar19 = DAT_180b0c730;
              if (DAT_180b0c768 != '\0') {
                uVar19 = DAT_180b0c730 >> 8 & 0xff;
                uVar25 = DAT_180b0c730 >> 0x10 & 0xff;
                uVar19 = CONCAT13((char)(int)((float)(int)((DAT_180b0c76c >> 0x18) -
                                                          (DAT_180b0c730 >> 0x18)) * fVar36 +
                                             (float)(DAT_180b0c730 >> 0x18)),
                                  CONCAT12((char)(int)((float)(int)((DAT_180b0c76c >> 0x10 & 0xff) -
                                                                   uVar25) * fVar36 + (float)uVar25)
                                           ,CONCAT11((char)(int)((float)(int)((DAT_180b0c76c >> 8 &
                                                                              0xff) - uVar19) *
                                                                 fVar36 + (float)uVar19),
                                                     (char)(int)((float)(int)((DAT_180b0c76c & 0xff)
                                                                             - (DAT_180b0c730 & 0xff
                                                                               )) * fVar36 +
                                                                (float)(DAT_180b0c730 & 0xff)))));
              }
              local_1c0[0] = auVar35._0_4_;
              local_238 = auVar34._0_4_;
              local_1b8[0] = (float)(uVar19 >> 0x18) * fVar41;
              pfVar16 = &local_238;
              if (auVar34._0_4_ <= local_1b8[0]) {
                pfVar16 = local_1b8;
              }
              pfVar14 = local_1c0;
              if (local_1b8[0] <= auVar35._0_4_) {
                pfVar14 = pfVar16;
              }
              *puVar23 = CONCAT13((char)(int)*pfVar14,(int3)uVar19);
            }
            iVar20 = iVar20 + 1;
            puVar23 = puVar23 + 1;
            pfVar15 = pfVar15 + 3;
            fVar36 = 7.0;
            fVar44 = local_1b0[0];
          } while (iVar20 < 8);
          iVar8 = iVar8 + 1;
          pfVar15 = pfVar18 + -6;
          pfVar18 = pfVar18 + -0xc;
        } while (pfVar15 != (float *)local_190._0_8_);
        puVar11 = (uint *)local_1a8._0_8_;
      }
      fVar44 = 6.0;
      auVar37 = ZEXT464(DAT_180b0c764);
      auVar31 = ZEXT464(DAT_180b0c760);
      auVar42 = ZEXT464(DAT_180b0c758);
      auVar40 = ZEXT464(DAT_180b0c754);
      local_1b8[0] = 6.0;
      fVar33 = 0.5;
      local_1b0[0] = 0.5;
      auVar38 = ZEXT464((uint)DAT_180b0c740);
      local_1c0[0] = DAT_180b0c740;
      sVar7 = thunk_FUN_180624430(DAT_180b0c740);
      if (sVar7 < 1) {
        pfVar18 = local_1b0;
        if (fVar33 <= auVar38._0_4_) {
          pfVar18 = local_1c0;
        }
        pfVar15 = local_1b8;
        if (auVar38._0_4_ <= fVar44) {
          pfVar15 = pfVar18;
        }
        fVar44 = *pfVar15;
      }
      else {
        fVar44 = 1.75;
      }
      fVar43 = 3.0;
      local_208 = fVar44 * 3.0;
      fVar36 = 8.0;
      local_1b8[0] = 8.0;
      local_1b0[0] = 1.0;
      local_1c0[0] = auVar37._0_4_;
      sVar7 = thunk_FUN_180624430(auVar37._0_8_);
      if (sVar7 < 1) {
        pfVar18 = local_1b0;
        if (1.0 <= auVar37._0_4_) {
          pfVar18 = local_1c0;
        }
        pfVar15 = local_1b8;
        if (auVar37._0_4_ <= fVar36) {
          pfVar15 = pfVar18;
        }
        fStack_204 = *pfVar15;
      }
      else {
        fStack_204 = 4.5;
      }
      fVar36 = 1.5;
      fStack_200 = auVar34._0_4_;
      if (DAT_180b0c75c != '\0') {
        local_1b8[0] = 1.5;
        local_1c0[0] = auVar31._0_4_;
        local_1b0[0] = fStack_200;
        sVar7 = thunk_FUN_180624430(auVar31._0_8_);
        if (sVar7 < 1) {
          pfVar18 = local_1b0;
          if (auVar34._0_4_ <= auVar31._0_4_) {
            pfVar18 = local_1c0;
          }
          pfVar15 = local_1b8;
          if (auVar31._0_4_ <= fVar36) {
            pfVar15 = pfVar18;
          }
          fStack_200 = *pfVar15;
        }
        else {
          fStack_200 = fVar33;
        }
      }
      fStack_1fc = fVar44 * 1.8;
      local_1c0[0] = auVar42._0_4_;
      local_1b8[0] = fVar43;
      local_1b0[0] = fVar33;
      sVar7 = thunk_FUN_180624430(auVar42._0_8_);
      if (sVar7 < 1) {
        pfVar18 = local_1b0;
        if (fVar33 <= auVar42._0_4_) {
          pfVar18 = local_1c0;
        }
        pfVar15 = local_1b8;
        if (auVar42._0_4_ <= fVar43) {
          pfVar15 = pfVar18;
        }
        fStack_1f8 = *pfVar15;
      }
      else {
        fStack_1f8 = 1.25;
      }
      if (DAT_180b0c750 == '\0') {
        fStack_1f4 = auVar34._0_4_;
      }
      else {
        local_1c0[0] = auVar40._0_4_;
        local_1b8[0] = fVar36;
        local_1b0[0] = auVar34._0_4_;
        sVar7 = thunk_FUN_180624430(auVar40._0_8_);
        if (sVar7 < 1) {
          pfVar18 = local_1b0;
          if (auVar34._0_4_ <= auVar40._0_4_) {
            pfVar18 = local_1c0;
          }
          pfVar15 = local_1b8;
          if (auVar40._0_4_ <= fVar36) {
            pfVar15 = pfVar18;
          }
          fStack_1f4 = *pfVar15;
        }
        else {
          fStack_1f4 = 0.7;
        }
      }
      fStack_1f0 = fVar44;
      uStack_1ec = auVar34._0_4_;
      local_108 = CONCAT44(fStack_204,local_208);
      uStack_100 = CONCAT44(fStack_1fc,fStack_200);
      uStack_f8 = CONCAT44(fStack_1f4,fStack_1f8);
      uStack_f0 = CONCAT44(auVar34._0_4_,fVar44);
      local_e8 = 0x3f800000;
      uVar32 = *(undefined4 *)(param_2 + 0x1c);
      puVar13 = &local_108;
      do {
        auVar38 = ZEXT464((uint)*(float *)(puVar13 + 1));
        fVar33 = auVar34._0_4_;
        if (fVar33 < *(float *)(puVar13 + 1)) {
          *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)((longlong)puVar13 + 4);
          uVar5 = local_1a8._8_8_;
          if (puVar11 != (uint *)local_1a8._8_8_) {
            local_1b8[0] = auVar35._0_4_;
            local_1b0[0] = fVar33;
            local_23c = auVar35._0_4_;
            local_238 = fVar33;
            puVar11 = puVar11 + 0x19;
            do {
              puVar23 = puVar11 + -0x16;
              lVar10 = 7;
              puVar24 = puVar11;
              do {
                local_1c0[0] = (float)(puVar24[-1] >> 0x18) * auVar38._0_4_;
                fVar33 = auVar34._0_4_;
                pfVar18 = local_1b0;
                if (fVar33 <= local_1c0[0]) {
                  pfVar18 = local_1c0;
                }
                pfVar15 = local_1b8;
                if (local_1c0[0] <= auVar35._0_4_) {
                  pfVar15 = pfVar18;
                }
                local_250 = CONCAT13((char)(int)*pfVar15,(int3)puVar24[-1]);
                local_1c0[0] = (float)(*puVar24 >> 0x18) * auVar38._0_4_;
                pfVar18 = &local_238;
                if (fVar33 <= local_1c0[0]) {
                  pfVar18 = local_1c0;
                }
                pfVar16 = &local_23c;
                if (local_1c0[0] <= auVar35._0_4_) {
                  pfVar16 = pfVar18;
                }
                local_248 = CONCAT13((char)(int)*pfVar16,(int3)*puVar24);
                if ((char)(int)*pfVar15 != '\0') {
                  if ((char)(int)*pfVar16 != '\0') {
                    local_138 = ZEXT416(0);
                    local_158 = 0;
                    lVar22 = *(longlong *)(puVar23 + -3);
                    uStack_154 = (undefined4)lVar22;
                    uStack_150 = (undefined4)((ulonglong)lVar22 >> 0x20);
                    uStack_14c = puVar23[-1];
                    lStack_148 = *(longlong *)puVar23;
                    uStack_140 = puVar23[2];
                    uStack_124 = local_250;
                    uStack_120 = local_248;
                    uStack_11c = *(undefined4 *)puVar13;
                    uStack_114 = *(undefined4 *)(param_2 + 0x18);
                    local_110 = *(undefined4 *)(param_2 + 0x1c);
                    plVar1 = *(longlong **)(param_2 + 8);
                    fStack_13c = fVar33;
                    fStack_128 = fVar33;
                    local_118 = fVar33;
                    if (plVar1 == *(longlong **)(param_2 + 0x10)) {
                      auVar38 = ZEXT1664(auVar38._0_16_);
                      auVar34 = ZEXT1664(auVar34._0_16_);
                      auVar35 = ZEXT1664(auVar35._0_16_);
                      FUN_1802eafb0();
                    }
                    else {
                      *plVar1 = lVar22 << 0x20;
                      plVar1[1] = CONCAT44(uStack_14c,uStack_150);
                      plVar1[2] = lStack_148;
                      plVar1[3] = CONCAT44(fVar33,uStack_140);
                      auVar3._16_4_ = fVar33;
                      auVar3._0_16_ = local_138;
                      auVar3._20_4_ = local_250;
                      auVar3._24_4_ = local_248;
                      auVar3._28_4_ = uStack_11c;
                      *(undefined1 (*) [32])(plVar1 + 4) = auVar3;
                      plVar1[8] = CONCAT44(uStack_114,fVar33);
                      *(undefined4 *)(plVar1 + 9) = local_110;
                      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c;
                    }
                  }
                }
                puVar24 = puVar24 + 1;
                puVar23 = puVar23 + 3;
                lVar10 = lVar10 + -1;
              } while (lVar10 != 0);
              puVar23 = puVar11 + 7;
              puVar11 = puVar11 + 0x20;
            } while (puVar23 != (uint *)uVar5);
            puVar11 = (uint *)local_1a8._0_8_;
          }
        }
        puVar13 = (undefined8 *)((longlong)puVar13 + 0xc);
      } while (puVar13 != (undefined8 *)local_e4);
      *(undefined4 *)(param_2 + 0x1c) = uVar32;
      if (puVar11 != (uint *)0x0) {
        puVar23 = puVar11;
        if ((0xfff < ((longlong)local_198 - (longlong)puVar11 & 0xffffffffffffff80U)) &&
           (puVar23 = *(uint **)(puVar11 + -2),
           0x1f < (ulonglong)((longlong)puVar11 + (-8 - (longlong)puVar23)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(puVar23);
        local_1a8 = (undefined1  [16])0x0;
        local_198 = (uint *)0x0;
      }
      FUN_1801ac030(local_190);
      uVar26 = local_230;
    }
  }
  if (bVar27) {
    FUN_1805f68fc(uVar26);
  }
  FUN_18017bf40(&local_230);
  uVar4 = local_230;
  uVar21 = local_230 - local_178._8_8_;
  puVar9 = (ulonglong *)FUN_1802e8d10();
  uVar26 = *puVar9;
  *puVar9 = uVar26 + 1;
  uVar17 = puVar9[1];
  puVar9[1] = uVar17 + uVar21;
  puVar9[3] = puVar9[3] + (ulonglong)(999999 < uVar21);
  puVar9[4] = puVar9[4] + (ulonglong)(4999999 < uVar21);
  puVar9[5] = puVar9[5] + (ulonglong)(15999999 < uVar21);
  if (puVar9[2] < uVar21) {
    puVar9[2] = uVar21;
  }
  if ((uVar4 == puVar9[7]) || ((longlong)puVar9[7] <= (longlong)uVar4)) {
    dVar28 = (double)(uVar17 + uVar21) / (double)(uVar26 + 1);
    FUN_1801af8a0(dVar28,dVar28 / 1000.0,local_178._0_8_);
    puVar9[2] = 0;
    puVar9[1] = 0;
    *puVar9 = 0;
    puVar9[5] = 0;
    puVar9[4] = 0;
    puVar9[3] = 0;
    puVar9[6] = uVar4;
    puVar9[7] = uVar4 + 5000000000;
  }
}



