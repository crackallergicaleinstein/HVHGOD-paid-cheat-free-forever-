// FUN_1802de530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802de530 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802de530(longlong param_1,longlong param_2,float param_3)

{
  longlong *plVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  undefined1 auVar9 [12];
  byte bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  short sVar14;
  int iVar15;
  float fVar16;
  ulonglong *puVar17;
  undefined *puVar18;
  ULONGLONG UVar19;
  float *pfVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  float *pfVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  float *pfVar29;
  int iVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  uint *puVar33;
  undefined1 uVar34;
  longlong lVar35;
  ulonglong uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  longlong lVar39;
  longlong lVar40;
  uint uVar41;
  float *pfVar42;
  byte bVar43;
  char cVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  double dVar50;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar51 [16];
  float fVar52;
  float fVar53;
  undefined4 uVar55;
  undefined1 auVar54 [64];
  float fVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [64];
  undefined1 auVar59 [64];
  undefined1 auVar60 [16];
  undefined1 auVar61 [64];
  undefined1 auVar62 [16];
  undefined1 auVar63 [64];
  undefined1 auVar64 [16];
  undefined1 auVar65 [64];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [64];
  undefined1 auVar69 [16];
  undefined1 auVar70 [64];
  undefined1 auVar71 [16];
  undefined1 auVar72 [64];
  undefined1 auVar73 [16];
  undefined1 auVar74 [64];
  float local_res18 [2];
  undefined1 auStack_4a8 [32];
  ulonglong local_488;
  double local_480;
  double local_478;
  double local_470;
  double local_468;
  double local_460;
  ulonglong local_458;
  ulonglong local_450;
  ulonglong local_448;
  float local_438;
  uint local_434;
  float local_430 [2];
  float local_428;
  float local_420 [2];
  byte local_418;
  float local_414;
  float local_410;
  float local_40c;
  float local_408;
  float local_404;
  float local_400 [2];
  float local_3f8 [4];
  undefined4 local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  float fStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 uStack_3c0;
  float fStack_3b8;
  undefined1 uStack_3b4;
  byte bStack_3b3;
  byte bStack_3b2;
  byte bStack_3b1;
  undefined1 uStack_3b0;
  byte bStack_3af;
  byte bStack_3ae;
  byte bStack_3ad;
  float fStack_3ac;
  float local_3a8;
  undefined4 uStack_3a4;
  float local_3a0;
  char local_398;
  uint local_394;
  undefined4 local_390;
  float local_388 [6];
  uint local_370;
  uint local_36c;
  uint local_368;
  float local_364;
  float local_360;
  undefined4 local_35c;
  undefined4 local_358;
  uint local_354;
  uint local_350;
  float local_34c;
  longlong local_348;
  longlong local_340;
  float *local_338 [2];
  undefined1 local_328 [12];
  char cStack_31c;
  undefined1 *local_318;
  float local_308;
  float local_304;
  float local_300;
  undefined8 local_2f8;
  float local_2f0;
  float *local_2e8 [2];
  ulonglong local_2d8 [2];
  float local_2c8 [6];
  float local_2b0;
  uint local_2ac [3];
  float local_2a0;
  float local_29c;
  float local_298 [6];
  float local_280 [10];
  float local_258;
  float local_250 [6];
  ulonglong local_238;
  float local_230 [2];
  float local_228 [4];
  undefined4 local_218;
  int iStack_214;
  float local_210;
  float fStack_20c;
  float fStack_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  float fStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0 [12];
  float fStack_1b4;
  ulonglong local_1b0;
  undefined *local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined8 local_190;
  float local_180;
  float local_17c;
  float local_178;
  char local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  char local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  char local_154;
  undefined1 local_150 [16];
  undefined1 local_140 [4];
  undefined1 local_13c [4];
  undefined8 local_138;
  float local_130;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  longlong local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_4a8;
  local_150 = ZEXT816(0x1807d49d0);
  local_res18[0] = param_3;
  FUN_18017bf40(local_150 + 8);
  FUN_1802c9680(0x400);
  uVar21 = param_1 + 0x148;
  local_128._8_8_ = 0;
  local_128._0_8_ = uVar21;
  local_238 = uVar21;
  iVar15 = FUN_1805f68d8(uVar21);
  cVar44 = iVar15 == 0;
  local_128[8] = cVar44;
  if (iVar15 == 0) {
    lVar39 = *(longlong *)(param_1 + 0xb0);
    lVar35 = *(longlong *)(param_1 + 0xa8);
    if (DAT_180b0c290 == '\0') {
      if (lVar35 != lVar39) {
        do {
          FUN_1801b36e0(lVar35 + 0x10);
          lVar35 = lVar35 + 0xb8;
        } while (lVar35 != lVar39);
        *(undefined8 *)(param_1 + 0xb0) = *(undefined8 *)(param_1 + 0xa8);
      }
    }
    else {
      stack0xfffffffffffffce0 = (longlong)&DAT_180b0be78;
      local_328._0_8_ = local_res18;
      local_338[0] = (float *)local_328;
      local_2e8[0] = (float *)local_328;
      if (lVar35 != lVar39) {
        do {
          cVar44 = FUN_1802ea060(local_2e8,lVar35);
          if (cVar44 != '\0') break;
          lVar35 = lVar35 + 0xb8;
        } while (lVar35 != lVar39);
        lVar40 = lVar35;
        if (lVar35 != lVar39) {
          while (lVar40 = lVar40 + 0xb8, lVar40 != lVar39) {
            cVar44 = FUN_1802ea060(local_338,lVar40);
            if (cVar44 == '\0') {
              FUN_1802e9e00(lVar35,lVar40);
              lVar35 = lVar35 + 0xb8;
            }
          }
          if (lVar35 != lVar39) {
            lVar40 = *(longlong *)(param_1 + 0xb0);
            for (; lVar39 != lVar40; lVar39 = lVar39 + 0xb8) {
              FUN_1802e9e00(lVar35,lVar39);
              lVar35 = lVar35 + 0xb8;
            }
            lVar39 = *(longlong *)(param_1 + 0xb0);
            for (lVar40 = lVar35; lVar40 != lVar39; lVar40 = lVar40 + 0xb8) {
              FUN_1801b36e0(lVar40 + 0x10);
            }
            *(longlong *)(param_1 + 0xb0) = lVar35;
          }
        }
      }
      local_f8 = (undefined1  [16])0x0;
      local_e8 = 0;
      lVar39 = *(longlong *)(param_1 + 0xb0) - *(longlong *)(param_1 + 0xa8);
      lVar39 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar39),8) + lVar39;
      uVar32 = (lVar39 >> 7) - (lVar39 >> 0x3f);
      if (uVar32 != 0) {
        if (0x1642c8590b21642 < uVar32) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        local_f8._0_8_ = FUN_18015bca0(uVar32 * 0xb8);
        local_f8._8_8_ = local_f8._0_8_;
        local_e8 = uVar32 * 0xb8 + local_f8._0_8_;
        local_1a8 = local_f8;
        lVar39 = *(longlong *)(param_1 + 0xb0);
        lVar35 = *(longlong *)(param_1 + 0xa8);
        stack0xfffffffffffffce0 = local_f8._0_8_;
        local_328._0_8_ = local_f8._0_8_;
        local_318 = local_f8;
        lVar40 = local_f8._0_8_;
        if (lVar35 != lVar39) {
          do {
            FUN_1802eba20(local_328,lVar35);
            lVar35 = lVar35 + 0xb8;
          } while (lVar35 != lVar39);
          lVar40 = stack0xfffffffffffffce0;
        }
        local_f8._8_8_ = lVar40;
      }
      if (uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18017d0c0(1);
      }
      FUN_1805f68fc(uVar21);
      local_398 = '\0';
      local_128[8] = 0;
      lVar35 = 0;
      local_340 = 0;
      lVar39 = local_f8._0_8_;
      if (local_f8._0_8_ != local_f8._8_8_) {
        do {
          local_340 = lVar35 + 1;
          if (*(int *)(lVar39 + 0x30) != 3) {
            local_340 = lVar35;
          }
          lVar39 = lVar39 + 0xb8;
          lVar35 = local_340;
        } while (lVar39 != local_f8._8_8_);
      }
      lVar39 = local_340;
      lVar40 = 0;
      local_348 = 0;
      lVar35 = local_f8._0_8_;
      if (local_f8._0_8_ != local_f8._8_8_) {
        do {
          local_348 = lVar40 + 1;
          if (*(int *)(lVar35 + 0x30) != 6) {
            local_348 = lVar40;
          }
          lVar35 = lVar35 + 0xb8;
          lVar40 = local_348;
        } while (lVar35 != local_f8._8_8_);
      }
      lVar35 = local_348;
      puVar18 = (undefined *)FUN_1802e92c0();
      local_1a8 = &DAT_1808f5b10;
      if (puVar18 != (undefined *)0x0) {
        local_1a8 = puVar18;
      }
      pfVar29 = (float *)(local_1a8 + 0x6a00);
      *pfVar29 = 4.48416e-44;
      local_418 = 1;
      local_394 = 0;
      auVar54 = ZEXT464(0x3a83126f);
      local_404 = 0.001;
      auVar65 = ZEXT864(0);
      auVar68 = ZEXT464(0x41200000);
      local_370 = 0x41200000;
      auVar59 = ZEXT464(0x3e4ccccd);
      local_410 = 0.2;
      local_2b0 = 1.8;
      auVar61 = ZEXT464(0x40400000);
      local_40c = 3.0;
      auVar70 = ZEXT464(0x3e800000);
      local_36c = 0x3e800000;
      auVar58 = ZEXT464(0x3f800000);
      local_414 = 1.0;
      auVar63 = ZEXT464(0x43960000);
      local_408 = 300.0;
      auVar72 = ZEXT464(0x41c80000);
      local_368 = 0x41c80000;
      local_258 = 100.0;
      local_280[6] = 800.0;
      local_280[5] = 200.0;
      local_29c = 6.0;
      auVar74 = ZEXT464(0x40000000);
      local_2e8[0] = pfVar29;
      do {
        uVar27 = local_394;
        bVar43 = local_418;
        FUN_1802c9680(0x400);
        auVar73 = auVar74._0_16_;
        auVar71 = auVar72._0_16_;
        auVar69 = auVar70._0_16_;
        auVar66 = auVar68._0_16_;
        auVar64 = auVar65._0_16_;
        auVar62 = auVar63._0_16_;
        auVar67 = auVar61._0_16_;
        auVar57 = auVar59._0_16_;
        auVar51 = auVar58._0_16_;
        auVar60 = auVar54._0_16_;
        local_434 = 0x200;
        local_350 = 0x200;
        if (local_f8._0_8_ != local_f8._8_8_) {
          local_338[0] = (float *)(local_f8._0_8_ + 0x30);
          pfVar42 = (float *)local_f8._0_8_;
          do {
            fVar45 = pfVar42[0xc];
            if (fVar45 == 8.40779e-45) {
              uVar26 = 2;
            }
            else {
              uVar26 = (uint)(fVar45 == 4.2039e-45);
            }
            if (uVar26 == uVar27) {
              if (fVar45 == 8.40779e-45) {
                iVar15 = 1;
                if (1 < (int)lVar35) {
                  iVar15 = (int)lVar35;
                }
                auVar54 = ZEXT1664(auVar54._0_16_);
                auVar59 = ZEXT1664(auVar59._0_16_);
                auVar61 = ZEXT1664(auVar61._0_16_);
                auVar63 = ZEXT1664(auVar63._0_16_);
                auVar65 = ZEXT1664(auVar65._0_16_);
                auVar68 = ZEXT1664(auVar68._0_16_);
                auVar70 = ZEXT1664(auVar70._0_16_);
                auVar72 = ZEXT1664(auVar72._0_16_);
                UVar19 = GetTickCount64();
                uVar21 = *(ulonglong *)(pfVar42 + 0x1c);
                if (uVar21 == 0) {
                  auVar60 = vmaxss_avx(ZEXT416((uint)(local_res18[0] - pfVar42[10])),auVar65._0_16_)
                  ;
                  uVar21 = auVar60._0_8_;
                }
                else {
                  uVar32 = UVar19 - uVar21;
                  if (UVar19 < uVar21) {
                    uVar32 = 0;
                  }
                  if ((longlong)uVar32 < 0) {
                    uVar21 = (ulonglong)(uint)((float)uVar32 * auVar54._0_4_);
                  }
                  else {
                    uVar21 = (ulonglong)(uint)((float)(longlong)uVar32 * auVar54._0_4_);
                  }
                }
                local_488 = CONCAT44(local_488._4_4_,(int)(0x200 / (longlong)iVar15));
                FUN_1802e5b50(param_2,pfVar42,uVar21,&local_350);
                local_434 = local_350;
                lVar39 = local_340;
              }
              else {
                local_1e0 = *(undefined8 *)(pfVar42 + 0xd);
                uStack_1d8 = *(undefined8 *)(pfVar42 + 0xf);
                uVar11 = uStack_1d8;
                uStack_1d0 = *(ulonglong *)(pfVar42 + 0x11);
                uStack_1c8 = *(ulonglong *)(pfVar42 + 0x13);
                _local_1c0 = *(undefined1 (*) [16])(pfVar42 + 0x15);
                local_1b0 = *(ulonglong *)(pfVar42 + 0x19);
                if (fVar45 == 4.2039e-45) {
                  local_358 = DAT_180b0c584;
                  lVar39 = local_340;
                  uVar38 = DAT_180b0c560;
                  uVar37 = DAT_180b0c564;
                }
                else {
                  local_420[0] = 7.00649e-45;
                  local_430[0] = 0.0;
                  pfVar23 = local_430;
                  if (-1 < (int)fVar45) {
                    pfVar23 = local_338[0];
                  }
                  pfVar20 = local_420;
                  if ((int)fVar45 < 6) {
                    pfVar20 = pfVar23;
                  }
                  uVar38 = *(undefined4 *)(&DAT_180b0c410 + (longlong)(int)*pfVar20 * 0x38);
                  uVar37 = *(undefined4 *)(&DAT_180b0c414 + (longlong)(int)*pfVar20 * 0x38);
                  local_420[0] = 7.00649e-45;
                  local_430[0] = 0.0;
                  pfVar23 = local_430;
                  if (-1 < (int)fVar45) {
                    pfVar23 = pfVar42 + 0xc;
                  }
                  pfVar20 = local_420;
                  if ((int)fVar45 < 6) {
                    pfVar20 = pfVar23;
                  }
                  local_358 = *(undefined4 *)(&DAT_180b0c434 + (longlong)(int)*pfVar20 * 0x38);
                }
                local_1e0 = CONCAT44(uVar37,uVar38);
                local_2c8[4] = auVar68._0_4_;
                local_2c8[0] = auVar59._0_4_;
                uStack_1d8._0_4_ = (float)*(undefined8 *)(pfVar42 + 0xf);
                local_2c8[2] = (float)uStack_1d8;
                auVar54 = ZEXT1664(auVar58._0_16_);
                auVar58 = ZEXT1664(auVar59._0_16_);
                auVar61 = ZEXT1664(auVar61._0_16_);
                auVar59 = ZEXT1664(auVar63._0_16_);
                auVar65 = ZEXT1664(auVar65._0_16_);
                auVar63 = ZEXT1664(auVar68._0_16_);
                auVar68 = ZEXT1664(auVar70._0_16_);
                auVar70 = ZEXT1664(auVar72._0_16_);
                auVar72 = ZEXT1664(auVar74._0_16_);
                fVar45 = (float)uStack_1d8;
                uStack_1d8 = uVar11;
                sVar14 = thunk_FUN_180624430();
                if (sVar14 < 1) {
                  pfVar23 = local_2c8;
                  if (auVar58._0_4_ <= fVar45) {
                    pfVar23 = local_2c8 + 2;
                  }
                  pfVar20 = local_2c8 + 4;
                  if (fVar45 <= auVar63._0_4_) {
                    pfVar20 = pfVar23;
                  }
                  local_428 = *pfVar20;
                }
                else {
                  local_428 = local_2b0;
                }
                local_230[0] = auVar61._0_4_;
                local_280[8] = auVar68._0_4_;
                local_228[0] = (float)uStack_1d0;
                fVar45 = (float)uStack_1d0;
                sVar14 = thunk_FUN_180624430(uStack_1d0 & 0xffffffff);
                if (sVar14 < 1) {
                  pfVar23 = local_280 + 8;
                  if (auVar68._0_4_ <= fVar45) {
                    pfVar23 = local_228;
                  }
                  pfVar20 = local_230;
                  if (fVar45 <= auVar61._0_4_) {
                    pfVar20 = pfVar23;
                  }
                  auVar58 = ZEXT464((uint)*pfVar20);
                }
                else {
                  auVar58 = ZEXT1664(auVar54._0_16_);
                }
                local_354 = auVar58._0_4_;
                local_250[0] = auVar59._0_4_;
                local_250[4] = auVar70._0_4_;
                local_250[2] = uStack_1d0._4_4_;
                fVar45 = uStack_1d0._4_4_;
                sVar14 = thunk_FUN_180624430(uStack_1d0._4_4_);
                if (sVar14 < 1) {
                  pfVar23 = local_250 + 4;
                  if (auVar70._0_4_ <= fVar45) {
                    pfVar23 = local_250 + 2;
                  }
                  pfVar20 = local_250;
                  if (fVar45 <= auVar59._0_4_) {
                    pfVar20 = pfVar23;
                  }
                  local_364 = *pfVar20;
                }
                else {
                  local_364 = local_258;
                }
                auVar59 = ZEXT464((uint)local_364);
                local_400[0] = local_280[6];
                local_430[0] = auVar65._0_4_;
                local_420[0] = (float)uStack_1c8;
                fVar45 = (float)uStack_1c8;
                fVar46 = local_280[6];
                sVar14 = thunk_FUN_180624430(uStack_1c8 & 0xffffffff);
                if (sVar14 < 1) {
                  pfVar23 = local_430;
                  if (auVar65._0_4_ <= fVar45) {
                    pfVar23 = local_420;
                  }
                  pfVar20 = local_400;
                  if (fVar45 <= fVar46) {
                    pfVar20 = pfVar23;
                  }
                  local_420[0] = *pfVar20;
                }
                else {
                  local_420[0] = local_280[5];
                }
                auVar63 = ZEXT464((uint)local_420[0]);
                local_3f8[0] = local_29c;
                fVar16 = 0.5;
                local_430[0] = 0.5;
                local_400[0] = uStack_1d8._4_4_;
                fVar45 = uStack_1d8._4_4_;
                fVar46 = local_29c;
                sVar14 = thunk_FUN_180624430(uStack_1d8._4_4_);
                if (sVar14 < 1) {
                  pfVar23 = local_430;
                  if (fVar16 <= fVar45) {
                    pfVar23 = local_400;
                  }
                  pfVar20 = local_3f8;
                  if (fVar45 <= fVar46) {
                    pfVar20 = pfVar23;
                  }
                  auVar68 = ZEXT464((uint)*pfVar20);
                }
                else {
                  auVar68 = ZEXT1664(auVar72._0_16_);
                }
                local_360 = auVar68._0_4_;
                local_3f8[0] = pfVar42[0x1e];
                if (pfVar42[0x1e] == 0.0) {
                  local_280[7] = 1.34525e-43;
                  local_2a0 = 1.12104e-44;
                  iVar15 = (int)(uStack_1c8 >> 0x20);
                  pfVar23 = &local_2a0;
                  if (7 < iVar15) {
                    pfVar23 = (float *)((longlong)&uStack_1c8 + 4);
                  }
                  pfVar20 = local_280 + 7;
                  if (iVar15 < 0x61) {
                    pfVar20 = pfVar23;
                  }
                  local_3f8[0] = *pfVar20;
                }
                fVar45 = local_3f8[0];
                UVar19 = GetTickCount64();
                uVar21 = *(ulonglong *)(pfVar42 + 0x1c);
                if (uVar21 == 0) {
                  auVar60 = vmaxss_avx(ZEXT416((uint)(local_res18[0] - pfVar42[10])),auVar65._0_16_)
                  ;
                  auVar70 = ZEXT1664(auVar60);
                }
                else {
                  uVar32 = UVar19 - uVar21;
                  if (UVar19 < uVar21) {
                    uVar32 = 0;
                  }
                  if ((longlong)uVar32 < 0) {
                    auVar70 = ZEXT464((uint)((float)uVar32 * local_404));
                  }
                  else {
                    auVar70 = ZEXT464((uint)((float)(longlong)uVar32 * local_404));
                  }
                }
                uVar21 = 0;
                local_400[0] = auVar70._0_4_;
                if (auVar65._0_4_ <= local_400[0]) {
                  auVar61 = ZEXT464((uint)local_428);
                  auVar60._0_4_ = local_400[0] / local_428;
                  auVar60._4_12_ = auVar70._4_12_;
                  auVar72 = ZEXT1664(auVar60);
                  local_430[0] = auVar60._0_4_;
                  FUN_1802dc210(local_140,uVar38,uVar37,auVar60._0_8_);
                  if (pfVar42[0xc] == 4.2039e-45) {
                    local_400[0] = auVar58._0_4_ * auVar59._0_4_ + 8.0;
                    auVar58 = ZEXT464((uint)local_400[0]);
                    local_138 = *(undefined8 *)pfVar42;
                    local_130 = pfVar42[2];
                    local_488 = *(ulonglong *)(pfVar42 + 0x1c);
                    uVar21 = FUN_1802dc460(local_1a8,&local_138,local_400[0],pfVar42[0xb]);
                    iVar15 = 1;
                    if (1 < (int)lVar39) {
                      iVar15 = (int)lVar39;
                    }
                    fVar16 = (float)(0x20 / (longlong)iVar15);
                    fVar46 = *pfVar29;
                    if ((int)fVar16 < (int)*pfVar29) {
                      fVar46 = fVar16;
                    }
                    local_2d8[0] = uVar21;
                    if (*(char *)(uVar21 + 0x1d) == '\0') {
                      local_438 = fVar46;
                      cVar44 = FUN_1802e5900(uVar21 + 0x20,0x20 % (longlong)iVar15 & 0xffffffff,
                                             &local_438);
                      if (cVar44 == '\0') {
                        *pfVar29 = (float)((int)*pfVar29 + ((int)local_438 - (int)fVar46));
                        goto LAB_1802e0296;
                      }
                      *(undefined1 *)(uVar21 + 0x1d) = 1;
                      UVar19 = GetTickCount64();
                      *(ULONGLONG *)(uVar21 + 0x10) = UVar19;
                      fVar16 = (float)(((int)*pfVar29 - (int)fVar46) + (int)local_438);
                    }
                    else {
                      fVar16 = *pfVar29;
                      local_438 = fVar46;
                    }
                    *pfVar29 = fVar16;
                    lVar39 = *(longlong *)(uVar21 + 0x10);
                    UVar19 = GetTickCount64();
                    local_438 = (float)(UVar19 - lVar39) * local_404;
                    auVar59 = ZEXT464((uint)local_438);
                    local_388[4] = (float)((int)((int)fVar45 + ((int)fVar45 >> 0x1f & 0x1fU)) >> 5);
                    local_2ac[2] = 0x20;
                    local_2ac[0] = 8;
                    iVar30 = (int)local_388[4] * (int)local_340;
                    iVar15 = 1;
                    if (1 < iVar30) {
                      iVar15 = iVar30;
                    }
                    local_2ac[1] = (uint)(0x100 / (longlong)iVar15);
                    puVar33 = local_2ac;
                    if (7 < (int)local_2ac[1]) {
                      puVar33 = local_2ac + 1;
                    }
                    puVar28 = local_2ac + 2;
                    if ((int)local_2ac[1] < 0x21) {
                      puVar28 = puVar33;
                    }
                    uVar27 = *puVar28;
                    local_354 = uVar27;
                    fVar45 = 0.0;
                    local_3f8[0] = 0.0;
                    lVar39 = local_340;
                    if (0 < (int)local_388[4]) {
                      sVar14 = thunk_FUN_180624430(auVar61._0_4_ + local_438 + auVar58._0_4_);
                      local_388[2] = (float)(int)sVar14;
                      uVar38 = local_1e0._4_4_;
                      fVar46 = (float)local_1e0;
                      do {
                        fVar16 = auVar65._0_4_;
                        auVar60 = auVar65._0_16_;
                        if (((0 < (int)local_388[2]) || (fVar47 = auVar61._0_4_, fVar47 <= fVar16))
                           || (auVar58._0_4_ <= fVar16)) {
LAB_1802df21f:
                          iStack_214 = (uint)iStack_214._1_3_ << 8;
                          auVar51 = auVar60;
                          auVar57 = auVar60;
                          auVar67 = auVar60;
                        }
                        else {
                          fVar53 = fVar47 * 0.09 * (float)(int)fVar45;
                          fVar47 = fVar47 - fVar53;
                          fVar53 = auVar59._0_4_ - fVar53;
                          if ((fVar53 < fVar16) || (fVar47 <= fVar53)) goto LAB_1802df21f;
                          local_364 = auVar54._0_4_;
                          local_430[0] = fVar16;
                          auVar51 = vminss_avx(ZEXT416((uint)(fVar47 * 0.15)),ZEXT416(0x3d75c28f));
                          local_420[0] = fVar53 / auVar51._0_4_;
                          pfVar29 = local_430;
                          if (fVar16 <= local_420[0]) {
                            pfVar29 = local_420;
                          }
                          pfVar23 = &local_364;
                          if (local_420[0] <= local_364) {
                            pfVar23 = pfVar29;
                          }
                          fVar56 = *pfVar23;
                          fVar52 = local_364 - fVar53 / fVar47;
                          iStack_214 = CONCAT31(iStack_214._1_3_,1);
                          auVar51 = ZEXT416((uint)(fVar53 / fVar47));
                          auVar57 = ZEXT416((uint)((local_40c - (fVar56 + fVar56)) * fVar56 * fVar56
                                                  * fVar52));
                          auVar67 = ZEXT416((uint)((local_364 - fVar52 * fVar52) * auVar58._0_4_));
                        }
                        local_218 = auVar51._0_4_;
                        if ((char)iStack_214 != '\0') {
                          if (fVar16 < auVar57._0_4_) {
                            auVar54 = ZEXT1664(auVar51);
                            auVar61 = ZEXT1664(auVar57);
                            auVar63 = ZEXT1664(auVar68._0_16_);
                            auVar65 = ZEXT1664(auVar60);
                            auVar68 = ZEXT1664(auVar67);
                            auVar58 = ZEXT1664(auVar58._0_16_);
                            auVar59 = ZEXT1664(auVar59._0_16_);
                            FUN_1802dc210(&local_390,fVar46,uVar38);
                            uVar26 = local_390;
                            local_420[0] = (float)(int)((float)(local_390 >> 0x18) * auVar61._0_4_);
                            local_390 = CONCAT13(SUB41(local_420[0],0),(undefined3)local_390);
                            uVar41 = local_390;
                            fVar16 = local_414 - auVar54._0_4_;
                            auVar60 = vmaxss_avx(ZEXT416((uint)(auVar68._0_4_ -
                                                               (fVar16 + fVar16 + 2.0) *
                                                               auVar63._0_4_)),auVar65._0_16_);
                            auVar54 = ZEXT1664(auVar60);
                            local_430[0] = 0.0;
                            if (0 < (int)uVar27) {
                              auVar59 = ZEXT464((uint)local_360);
                              auVar58 = ZEXT464((uint)local_414);
                              iVar15 = 0;
                              local_390._0_1_ = (undefined1)uVar26;
                              uVar34 = (undefined1)local_390;
                              local_390 = uVar41;
                              do {
                                if ((int)local_434 < 2) break;
                                lVar39 = local_2d8[0] + 0x20;
                                auVar63 = ZEXT464((uint)(((float)iVar15 * 6.2831855) /
                                                        (float)(int)uVar27));
                                auVar70 = ZEXT464((uint)(((float)(iVar15 + 1) * 6.2831855) /
                                                        (float)(int)uVar27));
                                auVar65 = ZEXT1664(auVar65._0_16_);
                                auVar68 = ZEXT1664(auVar68._0_16_);
                                auVar54 = ZEXT1664(auVar54._0_16_);
                                auVar58 = ZEXT1664(auVar58._0_16_);
                                auVar59 = ZEXT1664(auVar59._0_16_);
                                auVar61._0_8_ = FUN_180638e00();
                                auVar61._8_56_ = extraout_var;
                                auVar72 = ZEXT1664(auVar61._0_16_);
                                auVar63._0_8_ = FUN_180637540(auVar63._0_8_);
                                auVar63._8_56_ = extraout_var_00;
                                auVar61 = ZEXT1664(auVar63._0_16_);
                                local_488._0_4_ = 0x3f4ccccd;
                                FUN_1802c9d60(lVar39,&local_180,
                                              auVar68._0_4_ * (float)auVar63._0_8_ + *pfVar42,
                                              auVar68._0_4_ * auVar72._0_4_ + pfVar42[1]);
                                fVar45 = (float)FUN_180638e00(auVar70._0_8_);
                                fVar46 = (float)FUN_180637540(auVar70._0_8_);
                                uVar38 = 0x3f4ccccd;
                                local_488._0_4_ = 0x3f4ccccd;
                                FUN_1802c9d60(lVar39,&local_170,auVar68._0_4_ * fVar46 + *pfVar42,
                                              auVar68._0_4_ * fVar45 + pfVar42[1]);
                                local_488._0_4_ = uVar38;
                                FUN_1802c9d60(lVar39,local_328,
                                              auVar61._0_4_ * auVar54._0_4_ + *pfVar42,
                                              auVar72._0_4_ * auVar54._0_4_ + pfVar42[1]);
                                local_488 = CONCAT44(local_488._4_4_,uVar38);
                                FUN_1802c9d60(lVar39,&local_160,fVar46 * auVar54._0_4_ + *pfVar42,
                                              fVar45 * auVar54._0_4_ + pfVar42[1]);
                                uVar38 = local_358;
                                if (((local_174 != '\0') && (local_164 != '\0')) &&
                                   ((cStack_31c != '\0' && (local_154 != '\0')))) {
                                  local_210 = local_180;
                                  fStack_20c = local_17c;
                                  fStack_208 = local_178;
                                  uStack_204 = local_170;
                                  uStack_200 = local_16c;
                                  uStack_1fc = local_168;
                                  uStack_1f8 = local_160;
                                  uStack_1f4 = local_15c;
                                  local_1f0 = local_158;
                                  fStack_1ec = (float)local_328._0_4_;
                                  uStack_1e8 = local_328._4_4_;
                                  uStack_1e4 = local_328._8_4_;
                                  bVar43 = 1;
                                  pfVar29 = &local_210;
                                  do {
                                    bVar13 = FUN_1802c9810(pfVar29,uVar38);
                                    uVar27 = local_390;
                                    bVar43 = bVar43 & bVar13;
                                    pfVar29 = pfVar29 + 3;
                                  } while (pfVar29 != (float *)&local_1e0);
                                  if (bVar43 != 0) {
                                    fVar45 = (float)((uint)local_420[0] & 0xff);
                                    bVar13 = local_390._2_1_;
                                    bVar43 = local_390._1_1_;
                                    local_430[0] = (float)(uint)local_390._1_1_;
                                    uStack_3b0 = 0;
                                    bStack_3af = 0;
                                    bStack_3ae = 0;
                                    bStack_3ad = 0;
                                    fStack_3ac = auVar58._0_4_;
                                    local_3a8 = auVar65._0_4_;
                                    local_3e8 = 1;
                                    fStack_3e4 = local_210;
                                    fStack_3e0 = fStack_20c;
                                    fStack_3dc = fStack_208;
                                    uStack_3d8 = uStack_204;
                                    uStack_3d4 = uStack_200;
                                    uStack_3d0 = uStack_1fc;
                                    fStack_3cc = (float)uStack_1f8;
                                    uStack_3c8 = uStack_1f4;
                                    auVar9._4_4_ = fStack_1ec;
                                    auVar9._0_4_ = local_1f0;
                                    auVar9._8_4_ = uStack_1e8;
                                    uStack_3c4 = local_1f0;
                                    uStack_3c0 = auVar9._4_8_;
                                    fStack_3b8 = (float)uStack_1e4;
                                    uVar26 = (uint)local_390._2_1_;
                                    uStack_3b4 = uVar34;
                                    bStack_3b3 = local_390._1_1_;
                                    bStack_3b2 = local_390._2_1_;
                                    bStack_3b1 = (byte)(int)(fVar45 * 0.3);
                                    uStack_3a4 = *(undefined4 *)(param_2 + 0x18);
                                    puVar22 = *(undefined8 **)(param_2 + 8);
                                    if (puVar22 == *(undefined8 **)(param_2 + 0x10)) {
                                      auVar61 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),fVar45));
                                      auVar65 = ZEXT1664(auVar65._0_16_);
                                      auVar68 = ZEXT1664(auVar68._0_16_);
                                      auVar54 = ZEXT1664(auVar54._0_16_);
                                      auVar58 = ZEXT1664(auVar58._0_16_);
                                      auVar59 = ZEXT1664(auVar59._0_16_);
                                      local_3a0 = local_3a8;
                                      FUN_1802eafb0(param_2,puVar22,&local_3e8);
                                      fVar45 = auVar61._0_4_;
                                    }
                                    else {
                                      *puVar22 = CONCAT44(local_210,1);
                                      puVar22[1] = CONCAT44(fStack_208,fStack_20c);
                                      puVar22[2] = CONCAT44(uStack_200,uStack_204);
                                      puVar22[3] = CONCAT44(uStack_1f8,uStack_1fc);
                                      auVar2._4_4_ = local_1f0;
                                      auVar2._0_4_ = uStack_1f4;
                                      auVar2._8_8_ = uStack_3c0;
                                      auVar2._16_4_ = uStack_1e4;
                                      auVar2[0x14] = uVar34;
                                      auVar2[0x15] = local_390._1_1_;
                                      auVar2[0x16] = local_390._2_1_;
                                      auVar2[0x17] = bStack_3b1;
                                      auVar2._24_4_ = 0;
                                      auVar2._28_4_ = fStack_3ac;
                                      *(undefined1 (*) [32])(puVar22 + 4) = auVar2;
                                      puVar22[8] = CONCAT44(uStack_3a4,local_3a8);
                                      *(float *)(puVar22 + 9) = local_3a8;
                                      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c
                                      ;
                                    }
                                    uVar38 = uStack_1fc;
                                    fStack_3e4 = local_210;
                                    fStack_3e0 = fStack_20c;
                                    fStack_3dc = fStack_208;
                                    uVar37 = uStack_204;
                                    uVar55 = uStack_200;
                                    if (local_1c0[0] != '\0') {
                                      uVar26 = (((int)(fVar45 * local_410) & 0xffU) << 8 | uVar26)
                                               << 8 | (uint)local_430[0];
                                      fStack_3cc = auVar65._0_4_;
                                      uStack_3c8 = 0;
                                      uStack_3c4 = 0;
                                      uStack_3c0 = 0;
                                      local_3e8 = 0;
                                      uStack_3d8 = uStack_204;
                                      uStack_3d4 = uStack_200;
                                      uStack_3d0 = uStack_1fc;
                                      uStack_3b4 = uVar34;
                                      bStack_3b3 = SUB41(local_430[0],0);
                                      bStack_3b2 = (byte)(uVar26 >> 8);
                                      bStack_3b1 = (byte)(uVar26 >> 0x10);
                                      uStack_3b0 = uVar34;
                                      fStack_3ac = auVar59._0_4_ + auVar59._0_4_;
                                      uStack_3a4 = *(undefined4 *)(param_2 + 0x18);
                                      local_3a0 = *(float *)(param_2 + 0x1c);
                                      plVar1 = *(longlong **)(param_2 + 8);
                                      if (plVar1 == *(longlong **)(param_2 + 0x10)) {
                                        auVar61 = ZEXT464((uint)fStack_208);
                                        auVar63 = ZEXT464((uint)fStack_20c);
                                        auVar70 = ZEXT464((uint)local_210);
                                        auVar65 = ZEXT1664(auVar65._0_16_);
                                        auVar68 = ZEXT1664(auVar68._0_16_);
                                        auVar54 = ZEXT1664(auVar54._0_16_);
                                        auVar58 = ZEXT1664(auVar58._0_16_);
                                        auVar59 = ZEXT1664(auVar59._0_16_);
                                        fStack_3b8 = fStack_3cc;
                                        bStack_3af = bStack_3b3;
                                        bStack_3ae = bStack_3b2;
                                        bStack_3ad = bStack_3b1;
                                        local_3a8 = fStack_3cc;
                                        FUN_1802eafb0(param_2,plVar1,&local_3e8);
                                        fStack_3e4 = auVar70._0_4_;
                                        fStack_3e0 = auVar63._0_4_;
                                        fStack_3dc = auVar61._0_4_;
                                      }
                                      else {
                                        *plVar1 = (ulonglong)(uint)local_210 << 0x20;
                                        plVar1[1] = CONCAT44(fStack_208,fStack_20c);
                                        plVar1[2] = CONCAT44(uStack_200,uStack_204);
                                        plVar1[3] = CONCAT44(fStack_3cc,uStack_1fc);
                                        auVar3._16_4_ = fStack_3cc;
                                        auVar3._0_16_ = ZEXT816(0);
                                        auVar3[0x14] = uVar34;
                                        auVar3[0x15] = bStack_3b3;
                                        auVar3[0x16] = bStack_3b2;
                                        auVar3[0x17] = bStack_3b1;
                                        auVar3[0x18] = uVar34;
                                        auVar3[0x19] = bStack_3b3;
                                        auVar3[0x1a] = bStack_3b2;
                                        auVar3[0x1b] = bStack_3b1;
                                        auVar3._28_4_ = fStack_3ac;
                                        *(undefined1 (*) [32])(plVar1 + 4) = auVar3;
                                        plVar1[8] = CONCAT44(uStack_3a4,fStack_3cc);
                                        *(float *)(plVar1 + 9) = local_3a0;
                                        *(longlong *)(param_2 + 8) =
                                             *(longlong *)(param_2 + 8) + 0x4c;
                                      }
                                      *(undefined4 *)(*(longlong *)(param_2 + 8) + -0xc) =
                                           0x3f800000;
                                    }
                                    fStack_3cc = auVar65._0_4_;
                                    uStack_3c4 = 0;
                                    uStack_3c8 = 0;
                                    uStack_3c0 = 0;
                                    fStack_3b8 = fStack_3cc;
                                    local_3a8 = fStack_3cc;
                                    local_3e8 = 0;
                                    uStack_3d8 = uVar37;
                                    uStack_3d4 = uVar55;
                                    uStack_3d0 = uVar38;
                                    uStack_3b4 = uVar34;
                                    bStack_3b3 = bVar43;
                                    bStack_3b2 = bVar13;
                                    bStack_3b1 = (byte)(uVar27 >> 0x18);
                                    uStack_3b0 = uVar34;
                                    bStack_3af = bVar43;
                                    bStack_3ae = bVar13;
                                    bStack_3ad = bStack_3b1;
                                    fStack_3ac = auVar59._0_4_ * 0.65;
                                    uStack_3a4 = *(undefined4 *)(param_2 + 0x18);
                                    local_3a0 = *(float *)(param_2 + 0x1c);
                                    plVar1 = *(longlong **)(param_2 + 8);
                                    if (plVar1 == *(longlong **)(param_2 + 0x10)) {
                                      auVar65 = ZEXT1664(auVar65._0_16_);
                                      auVar68 = ZEXT1664(auVar68._0_16_);
                                      auVar54 = ZEXT1664(auVar54._0_16_);
                                      auVar58 = ZEXT1664(auVar58._0_16_);
                                      auVar59 = ZEXT1664(auVar59._0_16_);
                                      FUN_1802eafb0(param_2,plVar1,&local_3e8);
                                    }
                                    else {
                                      *plVar1 = (ulonglong)(uint)fStack_3e4 << 0x20;
                                      plVar1[1] = CONCAT44(fStack_3dc,fStack_3e0);
                                      plVar1[2] = CONCAT44(uVar55,uVar37);
                                      plVar1[3] = CONCAT44(fStack_3cc,uVar38);
                                      auVar4._16_4_ = fStack_3cc;
                                      auVar4._0_16_ = ZEXT416(0);
                                      auVar4[0x14] = uVar34;
                                      auVar4[0x15] = bVar43;
                                      auVar4[0x16] = bVar13;
                                      auVar4[0x17] = bStack_3b1;
                                      auVar4[0x18] = uVar34;
                                      auVar4[0x19] = bVar43;
                                      auVar4[0x1a] = bVar13;
                                      auVar4[0x1b] = bStack_3b1;
                                      auVar4._28_4_ = fStack_3ac;
                                      *(undefined1 (*) [32])(plVar1 + 4) = auVar4;
                                      plVar1[8] = CONCAT44(uStack_3a4,fStack_3cc);
                                      *(float *)(plVar1 + 9) = local_3a0;
                                      *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c
                                      ;
                                    }
                                    *(undefined4 *)(*(longlong *)(param_2 + 8) + -0xc) = 0x3f800000;
                                  }
                                }
                                iVar15 = iVar15 + 1;
                                local_434 = local_434 - 2;
                                local_350 = local_434;
                                uVar27 = local_354;
                              } while (iVar15 < (int)local_354);
                              auVar58 = ZEXT464((uint)local_400[0]);
                              auVar59 = ZEXT464((uint)local_438);
                              uVar38 = local_1e0._4_4_;
                              fVar46 = (float)local_1e0;
                              fVar45 = local_3f8[0];
                            }
                          }
                        }
                        fVar45 = (float)((int)fVar45 + 1);
                        local_3f8[0] = fVar45;
                        auVar68 = ZEXT464((uint)local_360);
                        auVar54 = ZEXT464((uint)local_414);
                        auVar61 = ZEXT464((uint)local_428);
                      } while ((int)fVar45 < (int)local_388[4]);
                      goto LAB_1802e0296;
                    }
                  }
                  else {
                    local_438 = (float)uVar21;
                    uVar32 = uVar21 & 0xffffffff;
                    if (0 < (int)fVar45) {
                      uVar31 = (ulonglong)local_434;
                      do {
                        if ((int)uVar31 < 1) break;
                        fVar45 = pfVar42[0xc];
                        fVar46 = pfVar42[0xb];
                        auVar54 = ZEXT1664(auVar72._0_16_);
                        auVar70 = ZEXT1664(auVar70._0_16_);
                        auVar65 = ZEXT1664(auVar65._0_16_);
                        auVar58 = ZEXT1664(auVar58._0_16_);
                        auVar59 = ZEXT1664(auVar59._0_16_);
                        auVar63 = ZEXT1664(auVar63._0_16_);
                        fVar47 = (float)FUN_1802c9530(fVar46,uVar32);
                        local_2d8[0] = CONCAT44(local_2d8[0]._4_4_,fVar47);
                        fVar16 = (float)uVar32;
                        if (auVar70._0_4_ <= fVar47) {
                          local_434 = (int)uVar31 - 1;
                          lVar39 = *(longlong *)(pfVar42 + 4);
                          lVar35 = (*(longlong *)(pfVar42 + 6) - lVar39) / 6 +
                                   (*(longlong *)(pfVar42 + 6) - lVar39 >> 0x3f);
                          uVar31 = (uVar32 & 0xffffffff) %
                                   (ulonglong)((lVar35 >> 1) - (lVar35 >> 0x3f));
                          auVar61 = ZEXT864(*(ulonglong *)(lVar39 + uVar31 * 0xc));
                          fVar16 = *(float *)(lVar39 + 8 + uVar31 * 0xc);
                          auVar60 = vpcmpeqd_avx(ZEXT416((uint)fVar45),ZEXT416((uint)uVar21));
                          auVar60 = vblendvps_avx(auVar63._0_16_,auVar65._0_16_,auVar60);
                          local_478 = (double)CONCAT44(local_478._4_4_,auVar60._0_4_);
                          local_480 = (double)CONCAT44(local_480._4_4_,auVar58._0_4_);
                          local_488 = CONCAT44(local_488._4_4_,auVar59._0_4_);
                          local_350 = local_434;
                          puVar22 = (undefined8 *)
                                    FUN_1802c9340(local_118,fVar46,uVar32 & 0xffffffff,auVar70._0_8_
                                                 );
                          local_2f8 = *puVar22;
                          uVar11 = local_2f8;
                          fVar47 = *(float *)(puVar22 + 1);
                          local_2f0 = fVar47;
                          auVar60 = vshufps_avx(auVar61._0_16_,auVar61._0_16_,0x55);
                          auVar68 = ZEXT1664(auVar60);
                          local_34c = auVar60._0_4_;
                          local_190 = auVar61._0_8_;
                          uVar12 = local_190;
                          local_190._0_4_ = auVar61._0_4_;
                          local_2f8._4_4_ = (float)((ulonglong)local_2f8 >> 0x20);
                          local_2f8 = uVar11;
                          local_190 = uVar12;
                          if (fVar45 == 0.0) {
                            local_2f8._0_4_ = (float)local_2f8 * 0.18;
                            local_2f8._4_4_ = local_2f8._4_4_ * 0.18;
LAB_1802dfcc3:
                            fVar56 = (float)local_2f8;
                            fVar53 = local_2f8._4_4_;
                            fVar46 = (float)local_190;
                            fVar45 = local_438;
                          }
                          else {
                            if (fVar45 != 7.00649e-45) goto LAB_1802dfcc3;
                            fVar53 = 5.0;
                            local_298[4] = 5.0;
                            local_298[0] = auVar65._0_4_;
                            local_298[2] = (float)local_1c0._8_4_;
                            fVar47 = (float)local_1c0._8_4_;
                            sVar14 = thunk_FUN_180624430(local_1c0._8_4_);
                            fVar45 = local_438;
                            local_280[0] = auVar65._0_4_;
                            if (sVar14 < 1) {
                              pfVar29 = local_298;
                              if (local_280[0] <= fVar47) {
                                pfVar29 = local_298 + 2;
                              }
                              pfVar23 = local_298 + 4;
                              if (fVar47 <= fVar53) {
                                pfVar23 = pfVar29;
                              }
                              local_280[2] = *pfVar23;
                            }
                            else {
                              local_280[2] = local_410;
                            }
                            local_280[4] = local_428 * 0.8;
                            pfVar29 = local_280;
                            if (local_280[0] <= local_280[2]) {
                              pfVar29 = local_280 + 2;
                            }
                            pfVar23 = local_280 + 4;
                            if (local_280[2] <= local_428 * 0.8) {
                              pfVar23 = pfVar29;
                            }
                            local_388[0] = local_414;
                            local_388[2] = local_280[0];
                            auVar60 = vmaxss_avx(ZEXT416((uint)(local_428 - *pfVar23)),
                                                 ZEXT416(0x3c23d70a));
                            local_388[4] = (auVar70._0_4_ - *pfVar23) / auVar60._0_4_;
                            pfVar29 = local_388 + 2;
                            if (local_280[0] <= local_388[4]) {
                              pfVar29 = local_388 + 4;
                            }
                            pfVar23 = local_388;
                            if (local_388[4] <= local_414) {
                              pfVar23 = pfVar29;
                            }
                            fVar47 = *pfVar23;
                            fVar47 = (local_40c - (fVar47 + fVar47)) * fVar47 * fVar47;
                            iVar15 = 1;
                            if (1 < (int)local_3f8[0] / 3) {
                              iVar15 = (int)local_3f8[0] / 3;
                            }
                            auVar54 = ZEXT464((uint)((float)((uint)local_438 / 3) / (float)iVar15));
                            fVar56 = 360.0;
                            local_388[4] = 360.0;
                            fVar52 = -360.0;
                            local_388[0] = -360.0;
                            local_388[2] = (float)local_1b0;
                            fVar53 = (float)local_1b0;
                            sVar14 = thunk_FUN_180624430(local_1b0 & 0xffffffff);
                            if (sVar14 < 1) {
                              pfVar29 = local_388;
                              if (fVar52 <= fVar53) {
                                pfVar29 = local_388 + 2;
                              }
                              pfVar23 = local_388 + 4;
                              if (fVar53 <= fVar56) {
                                pfVar23 = pfVar29;
                              }
                              fVar53 = *pfVar23;
                            }
                            else {
                              fVar53 = 90.0;
                            }
                            fVar56 = (float)((uint)fVar45 % 3) * 2.0943952 + auVar54._0_4_ * 2.2;
                            fVar53 = fVar53 * fVar47 * 0.0174533;
                            fVar52 = fVar53 * 4.0;
                            auVar59 = ZEXT464((uint)(fVar56 + fVar52));
                            uVar27 = (int)fVar45 + 7 + (int)fVar46;
                            uVar27 = (uVar27 >> 0x10 ^ uVar27) * 0x7feb352d;
                            uVar27 = (uVar27 >> 0xf ^ uVar27) * -0x7b935975;
                            fVar46 = (float)FUN_180638e00(fVar47 * 3.1415925,fVar52,fVar53,fVar56);
                            fVar52 = (fVar46 * 18.0 + 8.0) * auVar58._0_4_ *
                                     (((float)((uVar27 >> 0x10 ^ uVar27) & 0xffffff) / 16777215.0) *
                                      0.15 + 0.85);
                            fVar46 = pfVar42[2] + 36.0;
                            fVar53 = auVar65._0_4_ + pfVar42[1];
                            fVar56 = auVar65._0_4_ + *pfVar42;
                            fVar48 = (float)FUN_180637540(auVar59._0_8_);
                            fVar48 = fVar48 * fVar52;
                            fVar49 = (float)FUN_180638e00(auVar59._0_8_);
                            fVar49 = fVar49 * fVar52;
                            local_388[4] = local_408;
                            local_388[0] = auVar65._0_4_;
                            local_388[2] = fStack_1b4;
                            fVar52 = fStack_1b4;
                            sVar14 = thunk_FUN_180624430(fStack_1b4);
                            if (sVar14 < 1) {
                              pfVar29 = local_388;
                              if (auVar65._0_4_ <= fVar52) {
                                pfVar29 = local_388 + 2;
                              }
                              pfVar23 = local_388 + 4;
                              if (fVar52 <= local_408) {
                                pfVar23 = pfVar29;
                              }
                              fVar52 = *pfVar23;
                            }
                            else {
                              fVar52 = 120.0;
                            }
                            fVar56 = ((fVar48 + fVar56) - (float)local_190) * fVar47;
                            auVar68 = ZEXT464((uint)local_34c);
                            fVar53 = ((fVar53 + fVar49) - local_34c) * fVar47;
                            fVar47 = (((auVar54._0_4_ - 0.5) * 32.0 + fVar52 * fVar47 + fVar46) -
                                     fVar16) * fVar47;
                            auVar70 = ZEXT464((uint)local_400[0]);
                            auVar54 = ZEXT464((uint)local_430[0]);
                            auVar58 = ZEXT464(local_354);
                            auVar59 = ZEXT464((uint)local_364);
                            auVar63 = ZEXT464((uint)local_420[0]);
                            fVar46 = (float)local_190;
                          }
                          local_308 = fVar56 + fVar46;
                          local_304 = fVar53 + auVar68._0_4_;
                          local_300 = fVar47 + fVar16;
                          local_388[0] = local_414;
                          local_34c = auVar65._0_4_;
                          fVar47 = auVar70._0_4_ / (float)local_2d8[0];
                          local_2d8[0] = CONCAT44(local_2d8[0]._4_4_,fVar47);
                          pfVar29 = &local_34c;
                          if (auVar65._0_4_ <= fVar47) {
                            pfVar29 = (float *)local_2d8;
                          }
                          pfVar23 = local_388;
                          if (fVar47 <= local_414) {
                            pfVar23 = pfVar29;
                          }
                          fVar47 = *pfVar23;
                          FUN_1802dc210(&local_35c,uVar38,uVar37,
                                        (local_40c - (fVar47 + fVar47)) * fVar47 * fVar47);
                          if (pfVar42[0xc] == 2.8026e-45) {
                            auVar60 = vmaxss_avx(ZEXT416((uint)(auVar70._0_4_ - 0.025)),
                                                 auVar65._0_16_);
                            local_480 = (double)CONCAT44(local_480._4_4_,auVar58._0_4_);
                            local_478._0_4_ = auVar63._0_4_;
                            local_488._0_4_ = auVar59._0_4_;
                            puVar17 = (ulonglong *)
                                      FUN_1802c9340(local_108,pfVar42[0xb],fVar45,auVar60._0_8_);
                            local_2d8[0] = *puVar17;
                            auVar51._8_8_ = 0;
                            auVar51._0_8_ = local_2d8[0];
                            local_1a0 = (float)local_2d8[0] + fVar46;
                            auVar60 = vshufps_avx(auVar51,auVar51,0x55);
                            local_19c = auVar60._0_4_ + auVar68._0_4_;
                            local_198 = fVar16 + *(float *)(puVar17 + 1);
                            fVar45 = local_414;
                            fVar46 = (float)FUN_180637bd0(local_414 - fVar47,0x3fc00000);
                            puVar24 = (undefined4 *)
                                      FUN_1802dc210(local_13c,uVar38,uVar37,fVar45 - fVar46);
                            local_35c = *puVar24;
                            local_478 = (double)CONCAT44(local_478._4_4_,local_358);
                            local_480 = (double)CONCAT71(local_480._1_7_,local_1c0[0]);
                            local_488 = CONCAT44(local_488._4_4_,local_360);
                            FUN_1802dc7b0(param_2,&local_1a0,&local_308);
                          }
                          else {
                            cVar44 = FUN_1802c9810(&local_308,local_358);
                            if (cVar44 != '\0') {
                              if (pfVar42[0xc] == 7.00649e-45) {
                                fVar46 = 0.8;
                              }
                              else {
                                fVar46 = local_414 - auVar54._0_4_ * 0.35;
                              }
                              fVar46 = fVar46 * local_360;
                              bVar43 = local_35c._1_1_;
                              bVar13 = local_35c._2_1_;
                              bVar10 = local_35c._3_1_;
                              uVar34 = (undefined1)local_35c;
                              fVar16 = local_308;
                              fVar47 = local_304;
                              fVar53 = local_300;
                              if (local_1c0[0] != '\0') {
                                uStack_3d8 = 0;
                                uStack_3d4 = 0;
                                uStack_3d0 = 0;
                                fStack_3cc = 0.0;
                                uStack_3c4 = 0;
                                uStack_3c8 = 0;
                                uStack_3c0 = 0;
                                fStack_3b8 = auVar65._0_4_;
                                uStack_3b0 = 0;
                                bStack_3af = 0;
                                bStack_3ae = 0;
                                bStack_3ad = 0;
                                local_3e8 = 2;
                                fStack_3e4 = local_308;
                                fStack_3e0 = local_304;
                                fStack_3dc = local_300;
                                bStack_3b3 = local_35c._1_1_;
                                bStack_3b2 = local_35c._2_1_;
                                bStack_3b1 = (byte)(int)((float)local_35c._3_1_ * 0.35);
                                fStack_3ac = fVar46 + fVar46;
                                uStack_3a4 = *(undefined4 *)(param_2 + 0x18);
                                local_3a0 = *(float *)(param_2 + 0x1c);
                                puVar22 = *(undefined8 **)(param_2 + 8);
                                if (puVar22 == *(undefined8 **)(param_2 + 0x10)) {
                                  uStack_3b4 = uVar34;
                                  local_3a8 = fStack_3b8;
                                  FUN_1802eafb0(param_2,puVar22,&local_3e8);
                                }
                                else {
                                  *puVar22 = CONCAT44(local_308,2);
                                  puVar22[1] = CONCAT44(local_300,local_304);
                                  puVar22[2] = 0;
                                  puVar22[3] = 0;
                                  puVar22[4] = 0;
                                  puVar22[5] = 0;
                                  puVar22[6] = CONCAT17(bStack_3b1,
                                                        CONCAT16(local_35c._2_1_,
                                                                 CONCAT15(local_35c._1_1_,
                                                                          CONCAT14(uVar34,fStack_3b8
                                                                                  ))));
                                  puVar22[7] = (ulonglong)(uint)fStack_3ac << 0x20;
                                  puVar22[8] = CONCAT44(uStack_3a4,fStack_3b8);
                                  *(float *)(puVar22 + 9) = local_3a0;
                                  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c;
                                }
                              }
                              uStack_3d4 = 0;
                              uStack_3d8 = 0;
                              uStack_3c4 = 0;
                              uStack_3c8 = 0;
                              fStack_3b8 = auVar65._0_4_;
                              uStack_3b0 = 0;
                              bStack_3af = 0;
                              bStack_3ae = 0;
                              bStack_3ad = 0;
                              fStack_3e4 = fVar16;
                              fStack_3e0 = fVar47;
                              fStack_3dc = fVar53;
                              uStack_3b4 = uVar34;
                              uStack_3d0 = SUB124(ZEXT812(0),0);
                              uStack_3d0 = 0;
                              fStack_3cc = SUB124(ZEXT812(0),4);
                              fStack_3cc = 0.0;
                              uStack_3c0 = 0;
                              if (pfVar42[0xc] == 7.00649e-45) {
                                if (((uint)fVar45 & 3) == 0) {
                                  uVar27 = ((uint)((int)pfVar42[0xb] + (int)fVar45) >> 0x10 ^
                                           (int)pfVar42[0xb] + (int)fVar45) * 0x7feb352d;
                                  uVar27 = (uVar27 >> 0xf ^ uVar27) * -0x7b935975;
                                  local_3a0 = fStack_3b8;
                                  local_3e8 = 4;
                                  bStack_3b3 = bVar43;
                                  bStack_3b2 = bVar13;
                                  bStack_3b1 = bVar10;
                                  fStack_3ac = fVar46;
                                  local_3a8 = ((float)((uVar27 >> 0x10 ^ uVar27) & 0xffffff) /
                                              16777215.0) * 1.57;
                                  uStack_3a4 = *(undefined4 *)(param_2 + 0x18);
                                  puVar22 = *(undefined8 **)(param_2 + 8);
                                  if (puVar22 == *(undefined8 **)(param_2 + 0x10))
                                  goto LAB_1802e025d;
                                  *puVar22 = CONCAT44(fVar16,4);
                                  puVar22[1] = CONCAT44(fVar53,fVar47);
                                  puVar22[2] = 0;
                                  puVar22[3] = 0;
                                  auVar5._16_4_ = fStack_3b8;
                                  auVar5._0_16_ = ZEXT416(0);
                                  auVar5[0x14] = uVar34;
                                  auVar5[0x15] = bVar43;
                                  auVar5[0x16] = bVar13;
                                  auVar5[0x17] = bVar10;
                                  auVar5._24_4_ = 0;
                                  auVar5._28_4_ = fVar46;
                                  *(undefined1 (*) [32])(puVar22 + 4) = auVar5;
                                  puVar22[8] = CONCAT44(uStack_3a4,local_3a8);
                                  *(float *)(puVar22 + 9) = fStack_3b8;
                                  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c;
                                }
                                else {
                                  local_3e8 = 2;
                                  bStack_3b3 = bVar43;
                                  bStack_3b2 = bVar13;
                                  bStack_3b1 = bVar10;
                                  fStack_3ac = fVar46 * 0.55;
                                  local_3a8 = fStack_3b8;
                                  uStack_3a4 = *(undefined4 *)(param_2 + 0x18);
                                  local_3a0 = *(float *)(param_2 + 0x1c);
                                  puVar22 = *(undefined8 **)(param_2 + 8);
                                  if (puVar22 == *(undefined8 **)(param_2 + 0x10))
                                  goto LAB_1802e025d;
                                  *puVar22 = CONCAT44(fVar16,2);
                                  puVar22[1] = CONCAT44(fVar53,fVar47);
                                  puVar22[2] = 0;
                                  puVar22[3] = 0;
                                  auVar6._16_4_ = fStack_3b8;
                                  auVar6._0_16_ = ZEXT416(0);
                                  auVar6[0x14] = uVar34;
                                  auVar6[0x15] = bVar43;
                                  auVar6[0x16] = bVar13;
                                  auVar6[0x17] = bVar10;
                                  auVar6._24_4_ = 0;
                                  auVar6._28_4_ = fVar46 * 0.55;
                                  *(undefined1 (*) [32])(puVar22 + 4) = auVar6;
                                  puVar22[8] = CONCAT44(uStack_3a4,fStack_3b8);
                                  *(float *)(puVar22 + 9) = local_3a0;
                                  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c;
                                }
                              }
                              else {
                                fStack_3ac = fVar46;
                                if (pfVar42[0xc] == 1.4013e-45) {
                                  uVar26 = (int)pfVar42[0xb] + (int)fVar45;
                                  uVar27 = (uVar26 >> 0x10 ^ uVar26) * 0x7feb352d;
                                  uVar41 = (uVar27 >> 0xf ^ uVar27) * -0x7b935975;
                                  uVar27 = (uVar26 + 1 >> 0x10 ^ uVar26 + 1) * 0x7feb352d;
                                  uVar27 = (uVar27 >> 0xf ^ uVar27) * -0x7b935975;
                                  local_3e8 = 3;
                                  bStack_3b3 = bVar43;
                                  bStack_3b2 = bVar13;
                                  bStack_3b1 = bVar10;
                                  local_3a8 = (((float)((uVar27 >> 0x10 ^ uVar27) & 0xffffff) /
                                               16777215.0) * 8.0 + 2.0) * auVar70._0_4_ +
                                              ((float)((uVar41 >> 0x10 ^ uVar41) & 0xffffff) /
                                              16777215.0) * 6.2831855;
                                  uStack_3a4 = *(undefined4 *)(param_2 + 0x18);
                                  local_3a0 = *(float *)(param_2 + 0x1c);
                                  puVar22 = *(undefined8 **)(param_2 + 8);
                                  if (puVar22 == *(undefined8 **)(param_2 + 0x10))
                                  goto LAB_1802e025d;
                                  *puVar22 = CONCAT44(fVar16,3);
                                  puVar22[1] = CONCAT44(fVar53,fVar47);
                                  puVar22[2] = 0;
                                  puVar22[3] = 0;
                                  auVar7._16_4_ = fStack_3b8;
                                  auVar7._0_16_ = ZEXT416(0);
                                  auVar7[0x14] = uVar34;
                                  auVar7[0x15] = bVar43;
                                  auVar7[0x16] = bVar13;
                                  auVar7[0x17] = bVar10;
                                  auVar7._24_4_ = 0;
                                  auVar7._28_4_ = fVar46;
                                  *(undefined1 (*) [32])(puVar22 + 4) = auVar7;
                                  puVar22[8] = CONCAT44(uStack_3a4,local_3a8);
                                  *(float *)(puVar22 + 9) = local_3a0;
                                  *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c;
                                }
                                else {
                                  local_3e8 = 2;
                                  bStack_3b3 = bVar43;
                                  bStack_3b2 = bVar13;
                                  bStack_3b1 = bVar10;
                                  local_3a8 = fStack_3b8;
                                  uStack_3a4 = *(undefined4 *)(param_2 + 0x18);
                                  local_3a0 = *(float *)(param_2 + 0x1c);
                                  puVar22 = *(undefined8 **)(param_2 + 8);
                                  if (puVar22 == *(undefined8 **)(param_2 + 0x10)) {
LAB_1802e025d:
                                    bStack_3b1 = bVar10;
                                    bStack_3b2 = bVar13;
                                    bStack_3b3 = bVar43;
                                    auVar70 = ZEXT1664(auVar70._0_16_);
                                    auVar65 = ZEXT1664(auVar65._0_16_);
                                    auVar58 = ZEXT1664(auVar58._0_16_);
                                    auVar59 = ZEXT1664(auVar59._0_16_);
                                    auVar63 = ZEXT1664(auVar63._0_16_);
                                    FUN_1802eafb0(param_2,puVar22,&local_3e8);
                                  }
                                  else {
                                    *puVar22 = CONCAT44(fVar16,2);
                                    puVar22[1] = CONCAT44(fVar53,fVar47);
                                    puVar22[2] = 0;
                                    puVar22[3] = 0;
                                    auVar8._16_4_ = fStack_3b8;
                                    auVar8._0_16_ = ZEXT416(0);
                                    auVar8[0x14] = uVar34;
                                    auVar8[0x15] = bVar43;
                                    auVar8[0x16] = bVar13;
                                    auVar8[0x17] = bVar10;
                                    auVar8._24_4_ = 0;
                                    auVar8._28_4_ = fVar46;
                                    *(undefined1 (*) [32])(puVar22 + 4) = auVar8;
                                    puVar22[8] = CONCAT44(uStack_3a4,fStack_3b8);
                                    *(float *)(puVar22 + 9) = local_3a0;
                                    *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x4c;
                                  }
                                }
                              }
                            }
                          }
                          uVar21 = 0;
                          uVar31 = (ulonglong)local_434;
                          fVar16 = local_438;
                        }
                        local_438 = (float)((int)fVar16 + 1);
                        uVar32 = (ulonglong)(uint)local_438;
                        auVar72 = ZEXT464((uint)local_430[0]);
                      } while ((int)local_438 < (int)local_3f8[0]);
LAB_1802e0296:
                      lVar39 = local_340;
                    }
                  }
                  auVar61 = ZEXT464((uint)local_40c);
                }
                auVar54 = ZEXT464((uint)local_404);
                auVar72 = ZEXT464(local_368);
                auVar70 = ZEXT464(local_36c);
                auVar68 = ZEXT464(local_370);
                auVar63 = ZEXT464((uint)local_408);
                auVar59 = ZEXT464((uint)local_410);
                lVar35 = local_348;
                uVar27 = local_394;
              }
            }
            auVar71 = auVar72._0_16_;
            auVar69 = auVar70._0_16_;
            auVar66 = auVar68._0_16_;
            auVar64 = auVar65._0_16_;
            auVar62 = auVar63._0_16_;
            auVar67 = auVar61._0_16_;
            auVar57 = auVar59._0_16_;
            auVar60 = auVar54._0_16_;
            pfVar42 = pfVar42 + 0x2e;
            local_338[0] = local_338[0] + 0x2e;
            auVar58 = ZEXT464((uint)local_414);
            auVar51 = ZEXT416((uint)local_414);
            auVar74 = ZEXT464(0x40000000);
            auVar73 = auVar74._0_16_;
            pfVar29 = local_2e8[0];
          } while (pfVar42 != (float *)local_f8._8_8_);
          bVar43 = local_418;
        }
        auVar54 = ZEXT1664(auVar60);
        auVar58 = ZEXT1664(auVar51);
        auVar59 = ZEXT1664(auVar57);
        auVar61 = ZEXT1664(auVar67);
        auVar63 = ZEXT1664(auVar62);
        auVar65 = ZEXT1664(auVar64);
        auVar68 = ZEXT1664(auVar66);
        auVar70 = ZEXT1664(auVar69);
        auVar72 = ZEXT1664(auVar71);
        auVar74 = ZEXT1664(auVar73);
        puVar25 = (undefined4 *)FUN_1802e96a0();
        puVar24 = &DAT_180b92f80;
        if (puVar25 != (undefined4 *)0x0) {
          puVar24 = puVar25;
        }
        bVar43 = bVar43 & *(byte *)(puVar24 + 1);
        local_394 = uVar27 + 1;
        local_418 = bVar43;
      } while ((int)local_394 < 3);
      puVar25 = (undefined4 *)FUN_1802e96a0();
      puVar24 = &DAT_180b92f80;
      if (puVar25 != (undefined4 *)0x0) {
        puVar24 = puVar25;
      }
      *(byte *)(puVar24 + 1) = bVar43;
      FUN_1801b34c0(local_f8);
      uVar21 = local_238;
      cVar44 = local_398;
    }
  }
  if (cVar44 != '\0') {
    FUN_1805f68fc(uVar21);
  }
  FUN_18017bf40(&local_238);
  uVar21 = local_238;
  uVar36 = local_238 - local_150._8_8_;
  puVar17 = (ulonglong *)FUN_1802e90d0();
  local_488 = *puVar17 + 1;
  *puVar17 = local_488;
  uVar31 = puVar17[1] + uVar36;
  puVar17[1] = uVar31;
  local_458 = puVar17[3] + (ulonglong)(999999 < uVar36);
  puVar17[3] = local_458;
  local_450 = puVar17[4] + (ulonglong)(4999999 < uVar36);
  puVar17[4] = local_450;
  local_448 = puVar17[5] + (ulonglong)(15999999 < uVar36);
  puVar17[5] = local_448;
  uVar32 = puVar17[2];
  if (puVar17[2] < uVar36) {
    puVar17[2] = uVar36;
    uVar32 = uVar36;
  }
  if ((uVar21 == puVar17[7]) || ((longlong)puVar17[7] <= (longlong)uVar21)) {
    local_468 = (double)(longlong)(uVar21 - puVar17[6]) / 1000000.0;
    local_460 = 0.0;
    if (0.0 < local_468) {
      local_460 = ((double)uVar31 / 1000.0) / local_468;
    }
    local_470 = (double)uVar31 / 1000000.0;
    local_478 = (double)uVar32 / 1000.0;
    dVar50 = (double)uVar31 / (double)local_488;
    local_480 = dVar50 / 1000.0;
    FUN_1801af8a0(dVar50,local_480,local_150._0_8_);
    puVar17[2] = 0;
    puVar17[1] = 0;
    *puVar17 = 0;
    puVar17[5] = 0;
    puVar17[4] = 0;
    puVar17[3] = 0;
    puVar17[6] = uVar21;
    puVar17[7] = uVar21 + 5000000000;
  }
}



