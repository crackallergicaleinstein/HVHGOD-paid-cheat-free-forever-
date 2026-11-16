// FUN_1802da8c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802da8c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802da8c0(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 (*pauVar3) [16];
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 (*pauVar9) [16];
  short sVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  ULONGLONG UVar14;
  uint uVar15;
  uint *puVar16;
  ulonglong uVar17;
  undefined1 uVar18;
  longlong lVar19;
  longlong lVar20;
  float *pfVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined1 (*pauVar27) [16];
  int *piVar28;
  uint uVar29;
  char cVar30;
  float fVar31;
  undefined1 in_ZMM2 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  float fVar38;
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auStack_328 [32];
  uint local_308;
  uint local_304;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  undefined4 uStack_2e8;
  float fStack_2e4;
  undefined8 uStack_2e0;
  float local_2d8;
  undefined8 uStack_2d4;
  float fStack_2cc;
  undefined4 uStack_2c8;
  undefined1 uStack_2c4;
  undefined1 uStack_2c3;
  undefined1 uStack_2c2;
  undefined1 uStack_2c1;
  undefined1 uStack_2c0;
  undefined1 uStack_2bf;
  undefined1 uStack_2be;
  undefined1 uStack_2bd;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 local_2b0;
  uint local_2a8;
  uint local_2a4;
  uint local_2a0;
  uint local_29c;
  uint local_298;
  uint local_294;
  float local_288;
  float local_284;
  float local_280 [4];
  float local_270;
  float local_26c;
  float local_268;
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  float fStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  float fStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  undefined1 auStack_204 [16];
  undefined1 uStack_1f4;
  undefined1 uStack_1f3;
  undefined1 uStack_1f2;
  undefined1 uStack_1f1;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 local_1e0;
  float *local_1d8;
  undefined1 local_1d0 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  longlong local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_328;
  auVar36 = ZEXT1664(in_ZMM2._0_16_);
  FUN_1802c9680(0xc0);
  if ((DAT_180b0c5c0 != '\0') && (DAT_180b0c628 != 1)) {
    uVar26 = param_1 + 0x148;
    local_1d0._8_8_ = 0;
    local_1d0._0_8_ = uVar26;
    iVar11 = FUN_1805f68d8(uVar26);
    cVar30 = iVar11 == 0;
    local_1d0[8] = cVar30;
    if (iVar11 == 0) {
      auVar32 = ZEXT464(DAT_180b0c64c);
      sVar10 = thunk_FUN_180624430(DAT_180b0c64c);
      if (sVar10 < 1) {
        local_2a0 = 0x40a00000;
        local_2a4 = 0x3dcccccd;
        puVar16 = &local_2a4;
        if (0.1 <= auVar32._0_4_) {
          puVar16 = &DAT_180b0c64c;
        }
        puVar13 = &local_2a0;
        if (auVar32._0_4_ <= 5.0) {
          puVar13 = puVar16;
        }
        auVar32 = ZEXT464(*puVar13);
      }
      else {
        auVar32 = ZEXT464(0x40200000);
      }
      pauVar27 = *(undefined1 (**) [16])(param_1 + 0x60);
      pauVar3 = *(undefined1 (**) [16])(param_1 + 0x68);
      auVar37 = ZEXT464(0x3a83126f);
      auVar35 = ZEXT864(0);
      if (pauVar27 != pauVar3) {
        do {
          UVar14 = GetTickCount64();
          uVar26 = *(ulonglong *)pauVar27[1];
          if (uVar26 == 0) {
            auVar6 = vmaxss_avx(ZEXT416((uint)(auVar36._0_4_ - *(float *)(*pauVar27 + 0xc))),
                                auVar35._0_16_);
            auVar33 = ZEXT1664(auVar6);
          }
          else {
            uVar17 = UVar14 - uVar26;
            if (UVar14 < uVar26) {
              uVar17 = 0;
            }
            if ((longlong)uVar17 < 0) {
              auVar33 = ZEXT464((uint)((float)uVar17 * auVar37._0_4_));
            }
            else {
              auVar33 = ZEXT464((uint)((float)(longlong)uVar17 * auVar37._0_4_));
            }
          }
          sVar10 = thunk_FUN_180624430(auVar33._0_8_);
        } while (((sVar10 < 1) && (auVar33._0_4_ <= auVar32._0_4_)) &&
                (pauVar27 = (undefined1 (*) [16])(pauVar27[1] + 8), pauVar27 != pauVar3));
        pauVar9 = pauVar27;
        if (pauVar27 != pauVar3) {
          while (pauVar9 = (undefined1 (*) [16])(pauVar9[1] + 8), pauVar9 != pauVar3) {
            UVar14 = GetTickCount64();
            uVar26 = *(ulonglong *)pauVar9[1];
            if (uVar26 == 0) {
              auVar6 = vmaxss_avx(ZEXT416((uint)(auVar36._0_4_ - *(float *)(*pauVar9 + 0xc))),
                                  auVar35._0_16_);
              auVar33 = ZEXT1664(auVar6);
            }
            else {
              uVar17 = UVar14 - uVar26;
              if (UVar14 < uVar26) {
                uVar17 = 0;
              }
              if ((longlong)uVar17 < 0) {
                auVar33 = ZEXT464((uint)((float)uVar17 * auVar37._0_4_));
              }
              else {
                auVar33 = ZEXT464((uint)((float)(longlong)uVar17 * auVar37._0_4_));
              }
            }
            sVar10 = thunk_FUN_180624430(auVar33._0_8_);
            if ((sVar10 < 1) && (auVar33._0_4_ <= auVar32._0_4_)) {
              *pauVar27 = *pauVar9;
              *(undefined8 *)pauVar27[1] = *(undefined8 *)pauVar9[1];
              pauVar27 = (undefined1 (*) [16])(pauVar27[1] + 8);
            }
          }
          if (pauVar27 != pauVar3) {
            lVar20 = *(longlong *)(param_1 + 0x68) - (longlong)pauVar3;
            FUN_18063aed0(pauVar27,pauVar3,lVar20);
            *(longlong *)(param_1 + 0x68) = lVar20 + (longlong)pauVar27;
          }
        }
      }
      uVar26 = param_1 + 0x148;
      local_f8 = (undefined1  [16])0x0;
      local_e8 = 0;
      uVar17 = (*(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60)) / 0x18;
      if (uVar17 != 0) {
        if (0xaaaaaaaaaaaaaaa < uVar17) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        lVar20 = FUN_18015bca0(uVar17 * 0x18);
        local_f8._8_8_ = lVar20;
        local_f8._0_8_ = lVar20;
        local_e8 = uVar17 * 0x18 + lVar20;
        lVar19 = *(longlong *)(param_1 + 0x68) - *(longlong *)(param_1 + 0x60);
        FUN_18063aed0(lVar20,*(longlong *)(param_1 + 0x60),lVar19);
        local_f8._8_8_ = lVar20 + (lVar19 / 0x18) * 0x18;
      }
      if (uVar26 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      FUN_1805f68fc(uVar26);
      local_1d0[8] = 0;
      local_1d8 = (float *)local_f8._0_8_;
      cVar30 = '\0';
      if (local_f8._0_8_ != local_f8._8_8_) {
        auVar41 = ZEXT1664(_DAT_18086d5b0);
        auVar33 = ZEXT464(0x3f800000);
        auVar39 = ZEXT464(0x437f0000);
        auVar40 = ZEXT464(0x3fe00000);
        pfVar21 = (float *)local_f8._0_8_;
        do {
          auVar35 = ZEXT1664(auVar35._0_16_);
          auVar33 = ZEXT1664(auVar33._0_16_);
          auVar32 = ZEXT1664(auVar32._0_16_);
          auVar36 = ZEXT1664(auVar36._0_16_);
          auVar37 = ZEXT1664(auVar37._0_16_);
          auVar39 = ZEXT1664(auVar39._0_16_);
          auVar40 = ZEXT1664(auVar40._0_16_);
          auVar41 = ZEXT1664(auVar41._0_16_);
          local_1d8 = pfVar21;
          UVar14 = GetTickCount64();
          uVar26 = *(ulonglong *)(pfVar21 + 4);
          if (uVar26 == 0) {
            auVar6 = vmaxss_avx(ZEXT416((uint)(auVar36._0_4_ - pfVar21[3])),auVar35._0_16_);
            auVar34 = ZEXT1664(auVar6);
          }
          else {
            uVar17 = UVar14 - uVar26;
            if (UVar14 < uVar26) {
              uVar17 = 0;
            }
            if ((longlong)uVar17 < 0) {
              auVar34 = ZEXT464((uint)((float)uVar17 * auVar37._0_4_));
            }
            else {
              auVar34 = ZEXT464((uint)((float)(longlong)uVar17 * auVar37._0_4_));
            }
          }
          cVar30 = FUN_1802c9810(pfVar21,DAT_180b0c650);
          uVar24 = DAT_180b0c630;
          uVar23 = DAT_180b0c62c;
          if (cVar30 != '\0') {
            fVar31 = auVar34._0_4_ / auVar32._0_4_;
            fVar38 = auVar39._0_4_;
            uVar12 = (uint)((auVar33._0_4_ - fVar31 * fVar31) * fVar38);
            if ((char)uVar12 != '\0') {
              local_250 = auVar40._0_4_;
              local_288 = *pfVar21 - local_250;
              local_284 = pfVar21[1] - local_250;
              local_280[0] = pfVar21[2] - local_250;
              local_280[1] = *pfVar21 + local_250;
              local_280[2] = local_284;
              local_280[3] = local_280[0];
              local_270 = local_280[1];
              local_26c = pfVar21[1] + local_250;
              local_268 = local_280[0];
              local_264 = local_288;
              local_260 = local_26c;
              local_25c = local_280[0];
              local_258 = local_288;
              local_254 = local_284;
              local_250 = pfVar21[2] + local_250;
              local_24c = local_280[1];
              local_248 = local_284;
              local_244 = local_250;
              local_240 = local_280[1];
              local_23c = local_26c;
              local_238 = local_250;
              local_234 = local_288;
              local_230 = local_26c;
              local_22c = local_250;
              local_308 = DAT_180b0c62c;
              fVar31 = (float)(uVar12 & 0xff) / fVar38;
              local_304 = (uint)(((float)(DAT_180b0c62c >> 0x18) / fVar38) * fVar31 * fVar38);
              uVar15 = DAT_180b0c62c >> 0x10;
              local_29c = uVar15;
              local_2a8 = (uint)(((float)(DAT_180b0c630 >> 0x18) / fVar38) * fVar31 * fVar38);
              uVar12 = DAT_180b0c630 >> 8;
              local_298 = uVar12;
              uVar29 = DAT_180b0c630 >> 0x10;
              local_294 = uVar29;
              local_1b8 = 0x300000000;
              uStack_1b0 = 0x100000002;
              uStack_1a8 = 0x500000004;
              uStack_1a0 = 0x700000006;
              local_198 = 0x100000000;
              uStack_190 = 0x400000005;
              uStack_188 = 0x300000002;
              uStack_180 = 0x600000007;
              local_178 = 0x400000000;
              uStack_170 = 0x300000007;
              uStack_168 = 0x200000001;
              uStack_160 = 0x500000006;
              piVar28 = (int *)&uStack_1b0;
              uVar22 = DAT_180b0c62c;
              uVar25 = local_304;
              do {
                local_2f8 = (undefined4)*(undefined8 *)(local_280 + (longlong)piVar28[-2] * 3 + -2);
                uStack_2f4 = (undefined4)
                             ((ulonglong)*(undefined8 *)(local_280 + (longlong)piVar28[-2] * 3 + -2)
                             >> 0x20);
                fStack_2f0 = local_280[(longlong)piVar28[-2] * 3];
                uVar2 = *(undefined8 *)(local_280 + (longlong)piVar28[-1] * 3 + -2);
                fStack_2ec = (float)uVar2;
                uStack_2e8 = (undefined4)((ulonglong)uVar2 >> 0x20);
                fStack_2e4 = local_280[(longlong)piVar28[-1] * 3];
                uStack_2e0 = *(longlong *)(local_280 + (longlong)*piVar28 * 3 + -2);
                local_2d8 = local_280[(longlong)*piVar28 * 3];
                uStack_2d4 = *(undefined8 *)(local_280 + (longlong)piVar28[1] * 3 + -2);
                fStack_2cc = local_280[(longlong)piVar28[1] * 3];
                uStack_1f0 = 0;
                uStack_1ec = auVar33._0_4_;
                local_1e8 = auVar35._0_4_;
                local_1e0 = local_1e8;
                local_228 = 1;
                fStack_21c = fStack_2f0;
                uStack_218 = fStack_2ec;
                uStack_214 = uStack_2e8;
                fStack_210 = fStack_2e4;
                uStack_20c = (undefined4)uStack_2e0;
                uStack_208 = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
                auStack_204._4_8_ = uStack_2d4;
                auStack_204._0_4_ = local_2d8;
                auStack_204._12_4_ = fStack_2cc;
                uStack_1f4 = (char)uVar22;
                uStack_1f3 = (undefined1)(uVar23 >> 8);
                uStack_1f2 = (char)uVar15;
                uStack_1f1 = (char)uVar25;
                uStack_1e4 = *(undefined4 *)(param_2 + 0x18);
                puVar4 = *(undefined8 **)(param_2 + 8);
                uStack_224 = local_2f8;
                uStack_220 = uStack_2f4;
                if (puVar4 == *(undefined8 **)(param_2 + 0x10)) {
                  auVar35 = ZEXT1664(auVar35._0_16_);
                  auVar33 = ZEXT1664(auVar33._0_16_);
                  auVar32 = ZEXT1664(auVar32._0_16_);
                  auVar36 = ZEXT1664(auVar36._0_16_);
                  auVar37 = ZEXT1664(auVar37._0_16_);
                  auVar39 = ZEXT1664(auVar39._0_16_);
                  auVar40 = ZEXT1664(auVar40._0_16_);
                  auVar41 = ZEXT1664(auVar41._0_16_);
                  FUN_1802eafb0(param_2,puVar4,&local_228);
                  uVar22 = local_308;
                  uVar15 = local_29c;
                  uVar25 = local_304;
                }
                else {
                  *puVar4 = CONCAT44(local_2f8,1);
                  puVar4[1] = CONCAT44(fStack_2f0,uStack_2f4);
                  puVar4[2] = uVar2;
                  puVar4[3] = CONCAT44(uStack_20c,fStack_2e4);
                  auVar7._4_16_ = auStack_204;
                  auVar7._0_4_ = uStack_208;
                  auVar7[0x14] = (char)uVar22;
                  auVar7[0x15] = uStack_1f3;
                  auVar7[0x16] = (char)uVar15;
                  auVar7[0x17] = (char)uVar25;
                  auVar7._24_4_ = 0;
                  auVar7._28_4_ = auVar33._0_4_;
                  *(undefined1 (*) [32])(puVar4 + 4) = auVar7;
                  puVar4[8] = CONCAT44(uStack_1e4,local_1e8);
                  *(undefined4 *)(puVar4 + 9) = local_1e8;
                  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c;
                }
                piVar1 = piVar28 + 2;
                piVar28 = piVar28 + 4;
              } while (piVar1 != (int *)&local_158);
              local_158 = 0x100000000;
              uStack_150 = 0x200000001;
              uStack_148 = 0x300000002;
              uStack_140 = 3;
              local_138 = 0x500000004;
              uStack_130 = 0x600000005;
              uStack_128 = 0x700000006;
              uStack_120 = 0x400000007;
              local_118 = 0x400000000;
              uStack_110 = 0x500000001;
              local_108 = auVar41._0_16_;
              uVar18 = (undefined1)uVar24;
              if (DAT_180b0c658 != '\0') {
                local_304 = (uint)((float)(local_2a8 & 0xff) * DAT_180b0c6c0);
                iVar11 = (int)((float)(uVar25 & 0xff) * DAT_180b0c6c0);
                piVar28 = (int *)&uStack_1b0;
                local_308 = uVar22;
                do {
                  local_2f8 = (undefined4)
                              *(undefined8 *)(local_280 + (longlong)piVar28[-2] * 3 + -2);
                  uStack_2f4 = (undefined4)
                               ((ulonglong)
                                *(undefined8 *)(local_280 + (longlong)piVar28[-2] * 3 + -2) >> 0x20)
                  ;
                  fStack_2f0 = local_280[(longlong)piVar28[-2] * 3];
                  uVar2 = *(undefined8 *)(local_280 + (longlong)piVar28[-1] * 3 + -2);
                  fStack_2ec = (float)uVar2;
                  uStack_2e8 = (undefined4)((ulonglong)uVar2 >> 0x20);
                  fStack_2e4 = local_280[(longlong)piVar28[-1] * 3];
                  uStack_2e0 = *(longlong *)(local_280 + (longlong)*piVar28 * 3 + -2);
                  local_2d8 = local_280[(longlong)*piVar28 * 3];
                  uStack_2d4 = *(undefined8 *)(local_280 + (longlong)piVar28[1] * 3 + -2);
                  fStack_2cc = local_280[(longlong)piVar28[1] * 3];
                  uVar24 = ((uVar15 & 0xff) << 8 | uVar23 >> 8 & 0xff) << 8 | local_308 & 0xff |
                           iVar11 << 0x18;
                  uStack_1f0 = 0;
                  uStack_1ec = auVar33._0_4_;
                  local_1e8 = auVar35._0_4_;
                  local_1e0 = local_1e8;
                  local_228 = 1;
                  fStack_21c = fStack_2f0;
                  uStack_218 = fStack_2ec;
                  uStack_214 = uStack_2e8;
                  fStack_210 = fStack_2e4;
                  uStack_20c = (undefined4)uStack_2e0;
                  uStack_208 = (undefined4)((ulonglong)uStack_2e0 >> 0x20);
                  auStack_204._4_8_ = uStack_2d4;
                  auStack_204._0_4_ = local_2d8;
                  auStack_204._12_4_ = fStack_2cc;
                  uStack_1f4 = (undefined1)local_308;
                  uStack_1f3 = (undefined1)(uVar23 >> 8);
                  uStack_1f2 = (undefined1)uVar15;
                  uStack_1f1 = (undefined1)iVar11;
                  uStack_1e4 = *(undefined4 *)(param_2 + 0x18);
                  puVar4 = *(undefined8 **)(param_2 + 8);
                  local_308 = uVar24;
                  uStack_224 = local_2f8;
                  uStack_220 = uStack_2f4;
                  if (puVar4 == *(undefined8 **)(param_2 + 0x10)) {
                    auVar35 = ZEXT1664(auVar35._0_16_);
                    auVar33 = ZEXT1664(auVar33._0_16_);
                    auVar32 = ZEXT1664(auVar32._0_16_);
                    auVar36 = ZEXT1664(auVar36._0_16_);
                    auVar37 = ZEXT1664(auVar37._0_16_);
                    auVar39 = ZEXT1664(auVar39._0_16_);
                    auVar40 = ZEXT1664(auVar40._0_16_);
                    auVar41 = ZEXT1664(auVar41._0_16_);
                    FUN_1802eafb0(param_2,puVar4,&local_228);
                  }
                  else {
                    *puVar4 = CONCAT44(local_2f8,1);
                    puVar4[1] = CONCAT44(fStack_2f0,uStack_2f4);
                    puVar4[2] = uVar2;
                    puVar4[3] = CONCAT44(uStack_20c,fStack_2e4);
                    auVar8._4_16_ = auStack_204;
                    auVar8._0_4_ = uStack_208;
                    auVar8[0x14] = uStack_1f4;
                    auVar8[0x15] = uStack_1f3;
                    auVar8[0x16] = uStack_1f2;
                    auVar8[0x17] = uStack_1f1;
                    auVar8._24_4_ = 0;
                    auVar8._28_4_ = auVar33._0_4_;
                    *(undefined1 (*) [32])(puVar4 + 4) = auVar8;
                    puVar4[8] = CONCAT44(uStack_1e4,local_1e8);
                    *(undefined4 *)(puVar4 + 9) = local_1e8;
                    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c;
                  }
                  uVar29 = local_294;
                  uVar12 = local_298;
                  uVar22 = local_304;
                  piVar1 = piVar28 + 2;
                  piVar28 = piVar28 + 4;
                  uVar15 = uVar15 & 0xff;
                  uVar23 = uVar24;
                } while (piVar1 != (int *)&local_158);
                piVar28 = (int *)&local_158;
                do {
                  uStack_2c8 = auVar35._0_4_;
                  fStack_2cc = 0.0;
                  uStack_2d4 = 0;
                  local_2d8 = 0.0;
                  local_2f8 = 0;
                  lVar20 = *(longlong *)(local_280 + (longlong)*piVar28 * 3 + -2);
                  uStack_2f4 = (undefined4)lVar20;
                  fStack_2f0 = (float)((ulonglong)lVar20 >> 0x20);
                  fStack_2ec = local_280[(longlong)*piVar28 * 3];
                  lVar19 = *(longlong *)(local_280 + (longlong)piVar28[1] * 3 + -2);
                  uStack_2e8 = (undefined4)lVar19;
                  fStack_2e4 = (float)((ulonglong)lVar19 >> 0x20);
                  uStack_2e0 = CONCAT44(uStack_2c8,local_280[(longlong)piVar28[1] * 3]);
                  uStack_2c3 = (undefined1)uVar12;
                  uStack_2c2 = (undefined1)uVar29;
                  uStack_2c1 = (undefined1)uVar22;
                  uStack_2bc = auVar33._0_4_;
                  uStack_2b4 = *(undefined4 *)(param_2 + 0x18);
                  local_2b0 = *(undefined4 *)(param_2 + 0x1c);
                  plVar5 = *(longlong **)(param_2 + 8);
                  if (plVar5 == *(longlong **)(param_2 + 0x10)) {
                    auVar35 = ZEXT1664(auVar35._0_16_);
                    auVar33 = ZEXT1664(auVar33._0_16_);
                    auVar32 = ZEXT1664(auVar32._0_16_);
                    auVar36 = ZEXT1664(auVar36._0_16_);
                    auVar37 = ZEXT1664(auVar37._0_16_);
                    auVar39 = ZEXT1664(auVar39._0_16_);
                    auVar40 = ZEXT1664(auVar40._0_16_);
                    auVar41 = ZEXT1664(auVar41._0_16_);
                    uStack_2c4 = uVar18;
                    uStack_2c0 = uVar18;
                    uStack_2bf = uStack_2c3;
                    uStack_2be = uStack_2c2;
                    uStack_2bd = uStack_2c1;
                    local_2b8 = uStack_2c8;
                    FUN_1802eafb0(param_2,plVar5,&local_2f8);
                  }
                  else {
                    *plVar5 = lVar20 << 0x20;
                    plVar5[1] = CONCAT44(fStack_2ec,fStack_2f0);
                    plVar5[2] = lVar19;
                    plVar5[3] = uStack_2e0;
                    *(undefined1 (*) [32])(plVar5 + 4) =
                         ZEXT1632(CONCAT412(uStack_2bc,
                                            CONCAT111(uStack_2c1,
                                                      CONCAT110(uStack_2c2,
                                                                CONCAT19(uStack_2c3,
                                                                         CONCAT18(uVar18,CONCAT17(
                                                  uStack_2c1,
                                                  CONCAT16(uStack_2c2,
                                                           CONCAT15(uStack_2c3,
                                                                    CONCAT14(uVar18,uStack_2c8))))))
                                                  )))) << 0x80;
                    plVar5[8] = CONCAT44(uStack_2b4,uStack_2c8);
                    *(undefined4 *)(plVar5 + 9) = local_2b0;
                    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c;
                  }
                  piVar28 = piVar28 + 2;
                } while (piVar28 != (int *)local_f8);
              }
              uVar23 = local_2a8;
              piVar28 = (int *)&local_158;
              do {
                uStack_2c8 = auVar35._0_4_;
                fStack_2cc = 0.0;
                uStack_2d4 = 0;
                local_2d8 = 0.0;
                local_2f8 = 0;
                lVar20 = *(longlong *)(local_280 + (longlong)*piVar28 * 3 + -2);
                uStack_2f4 = (undefined4)lVar20;
                fStack_2f0 = (float)((ulonglong)lVar20 >> 0x20);
                fStack_2ec = local_280[(longlong)*piVar28 * 3];
                lVar19 = *(longlong *)(local_280 + (longlong)piVar28[1] * 3 + -2);
                uStack_2e8 = (undefined4)lVar19;
                fStack_2e4 = (float)((ulonglong)lVar19 >> 0x20);
                uStack_2e0 = CONCAT44(uStack_2c8,local_280[(longlong)piVar28[1] * 3]);
                uStack_2c3 = (undefined1)uVar12;
                uStack_2c2 = (undefined1)uVar29;
                uStack_2c1 = (undefined1)uVar23;
                uStack_2bc = auVar33._0_4_;
                uStack_2b4 = *(undefined4 *)(param_2 + 0x18);
                local_2b0 = *(undefined4 *)(param_2 + 0x1c);
                plVar5 = *(longlong **)(param_2 + 8);
                uStack_2bf = uStack_2c3;
                uStack_2be = uStack_2c2;
                uStack_2bd = uStack_2c1;
                local_2b8 = uStack_2c8;
                if (plVar5 == *(longlong **)(param_2 + 0x10)) {
                  auVar35 = ZEXT1664(auVar35._0_16_);
                  auVar33 = ZEXT1664(auVar33._0_16_);
                  auVar32 = ZEXT1664(auVar32._0_16_);
                  auVar36 = ZEXT1664(auVar36._0_16_);
                  auVar37 = ZEXT1664(auVar37._0_16_);
                  auVar39 = ZEXT1664(auVar39._0_16_);
                  auVar40 = ZEXT1664(auVar40._0_16_);
                  auVar41 = ZEXT1664(auVar41._0_16_);
                  uStack_2c4 = uVar18;
                  uStack_2c0 = uVar18;
                  FUN_1802eafb0(param_2,plVar5,&local_2f8);
                }
                else {
                  *plVar5 = lVar20 << 0x20;
                  plVar5[1] = CONCAT44(fStack_2ec,fStack_2f0);
                  plVar5[2] = lVar19;
                  plVar5[3] = uStack_2e0;
                  *(undefined1 (*) [32])(plVar5 + 4) =
                       ZEXT1632(CONCAT412(uStack_2bc,
                                          CONCAT111(uStack_2c1,
                                                    CONCAT110(uStack_2c2,
                                                              CONCAT19(uStack_2c3,
                                                                       CONCAT18(uVar18,CONCAT17(
                                                  uStack_2c1,
                                                  CONCAT16(uStack_2c2,
                                                           CONCAT15(uStack_2c3,
                                                                    CONCAT14(uVar18,uStack_2c8))))))
                                                  )))) << 0x80;
                  plVar5[8] = CONCAT44(uStack_2b4,uStack_2c8);
                  *(undefined4 *)(plVar5 + 9) = local_2b0;
                  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c;
                  uStack_2c4 = uVar18;
                  uStack_2c0 = uVar18;
                }
                piVar28 = piVar28 + 2;
              } while (piVar28 != (int *)local_f8);
              pfVar21 = local_1d8;
            }
          }
          pfVar21 = pfVar21 + 6;
        } while (pfVar21 != (float *)local_f8._8_8_);
        uVar26 = local_1d0._0_8_;
        cVar30 = local_1d0[8];
        local_1d8 = pfVar21;
      }
      FUN_1801abba0(local_f8);
    }
    if (cVar30 != '\0') {
      FUN_1805f68fc(uVar26);
    }
  }
}



