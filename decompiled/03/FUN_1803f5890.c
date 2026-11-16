// FUN_1803f5890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803f5890 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803f5890(undefined8 param_1,longlong param_2,char param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  char cVar44;
  int iVar45;
  uint uVar46;
  uint uVar47;
  undefined8 uVar48;
  longlong lVar49;
  longlong *plVar50;
  ULONGLONG UVar51;
  longlong lVar52;
  longlong *plVar53;
  longlong *plVar54;
  undefined8 *_Buf1;
  undefined8 *puVar55;
  undefined8 **_Buf1_00;
  ulonglong uVar56;
  undefined8 **ppuVar57;
  undefined8 **ppuVar58;
  undefined8 **ppuVar59;
  longlong *plVar60;
  undefined8 **ppuVar61;
  ulonglong uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  ulonglong uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  longlong **pplVar72;
  ulonglong uVar73;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined4 uVar76;
  undefined1 auVar77 [64];
  undefined4 uVar78;
  undefined1 auVar79 [64];
  undefined4 uVar80;
  undefined1 auVar81 [64];
  size_t sVar82;
  undefined1 auVar83 [64];
  undefined1 auStack_388 [32];
  undefined4 local_368;
  undefined1 *local_360;
  undefined8 local_348;
  undefined8 uStack_340;
  uint local_338;
  undefined8 *local_328;
  undefined4 local_320;
  undefined1 local_318 [16];
  undefined1 local_308 [16];
  undefined1 local_2f8 [16];
  undefined8 *local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined1 local_2b8;
  undefined1 local_2b0 [16];
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 *local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined1 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  undefined1 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined8 *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 local_218 [16];
  undefined1 auStack_208 [16];
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined1 local_188;
  undefined1 local_180 [16];
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined1 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  longlong *local_d8;
  longlong *local_d0;
  longlong *local_c8;
  longlong **local_c0;
  undefined8 uStack_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_388;
  local_d8 = (longlong *)GetTickCount64();
  cVar44 = DAT_180ccf440;
  LOCK();
  DAT_180ccf440 = '\0';
  UNLOCK();
  if (cVar44 != '\0') {
    FUN_1803f54c0();
  }
  uVar67 = DAT_180ccf538;
  puVar55 = (undefined8 *)DAT_180ccf530;
  ppuVar57 = (undefined8 **)DAT_180ccf520;
  ppuVar59 = (undefined8 **)DAT_180ccf450;
  ppuVar61 = (undefined8 **)DAT_180ccf448;
  if (((param_3 == '\0') || (DAT_180ccf668 <= local_d8)) || (param_2 == 0)) {
    local_328 = (undefined8 *)0x0;
    local_320 = 0;
    sVar82 = 0;
    uVar67 = 0xf;
    local_308 = ZEXT816(0xf) << 0x40;
    local_318._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar36[0xf] = 0;
    auVar36._0_15_ = local_318._1_15_;
    local_318 = auVar36 << 8;
    local_2f8 = (undefined1  [16])0x0;
    local_2e8 = (undefined8 *)0x0;
    uVar80 = 0;
    local_2e0 = 0;
    local_2dc = 0;
    uVar78 = 0x3f800000;
    local_2d8 = 0x3f800000;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2a0 = 0;
    local_298 = 0xf;
    local_2b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar37[0xf] = 0;
    auVar37._0_15_ = local_2b0._1_15_;
    local_2b0 = auVar37 << 8;
    local_290 = (undefined8 *)0x0;
    local_288 = 0;
    local_280 = 0;
    local_278 = 0;
    local_274 = 0;
    local_270 = 0;
    local_26c = 0;
    local_268 = 0;
    local_264 = 0;
    local_260 = 0xffffffff;
    local_25c = 0;
    local_248 = ZEXT816(0xf) << 0x40;
    local_258._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar38[0xf] = 0;
    auVar38._0_15_ = local_258._1_15_;
    local_258 = auVar38 << 8;
    local_238 = (undefined8 *)0x0;
    local_230 = 0;
    uVar76 = 0x3f000000;
    local_22c = 0x3f000000;
    local_228 = 0x3f000000;
    local_224 = 0x101010;
    local_220 = 0x808080;
    local_21c = 0xffffffff;
    uVar48 = FUN_1801d8a70(local_218,&local_328);
    FUN_1803edc60(&DAT_180ccf000,uVar48);
    FUN_18015c010(local_258);
    FUN_18015c010(local_2b0);
    FUN_18015c010(local_318);
    FUN_1803f2990(&DAT_180ccf000,param_2,0);
    local_218._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar39[0xf] = 0;
    auVar39._0_15_ = local_218._1_15_;
    local_218 = auVar39 << 8;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1d8._8_8_ = uVar67;
    local_1d8._0_8_ = sVar82;
    local_1e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar40[0xf] = 0;
    auVar40._0_15_ = local_1e8._1_15_;
    local_1e8 = auVar40 << 8;
    local_1c8 = (undefined1  [16])0x0;
    local_1b8 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_170 = 0;
    local_168 = 0xf;
    local_180._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar41[0xf] = 0;
    auVar41._0_15_ = local_180._1_15_;
    local_180 = auVar41 << 8;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_144 = 0;
    local_134 = 0;
    local_130 = 0xffffffff;
    local_12c = 0;
    local_118._8_8_ = uVar67;
    local_118._0_8_ = sVar82;
    local_128._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar42[0xf] = 0;
    auVar42._0_15_ = local_128._1_15_;
    local_128 = auVar42 << 8;
    local_108 = 0;
    local_100 = 0;
    local_f4 = 0x101010;
    local_f0 = 0x808080;
    local_ec = 0xffffffff;
    local_1b0 = uVar80;
    local_1ac = uVar80;
    local_1a8 = uVar78;
    local_148 = uVar80;
    local_140 = uVar80;
    local_13c = uVar80;
    local_138 = uVar80;
    local_fc = uVar76;
    local_f8 = uVar76;
    auStack_208._0_8_ = sVar82;
    auStack_208._8_8_ = uVar67;
    FUN_18015c010(&DAT_180ccf520);
    DAT_180ccf520 = (undefined8 *)local_218._0_8_;
    uRam0000000180ccf528 = local_218._8_8_;
    DAT_180ccf530 = auStack_208._0_8_;
    DAT_180ccf538 = auStack_208._8_8_;
    auStack_208._8_8_ = uVar67;
    auStack_208._0_8_ = sVar82;
    auVar43[0xf] = 0;
    auVar43._0_15_ = local_218._1_15_;
    local_218 = auVar43 << 8;
    FUN_1803c1c00(&DAT_180ccf540,&local_1f8);
    FUN_18015c010(local_128);
    FUN_18015c010(local_180);
    FUN_18015c010(local_1e8);
    FUN_18015c010(local_218);
    lVar49 = DAT_180ccf670;
    if (DAT_180ccf670 != 0) {
      DAT_180ccf670 = 0;
      (**(code **)(*(longlong *)lVar49 + 0x10))();
    }
    lVar49 = DAT_180ccf678;
    if (DAT_180ccf678 != 0) {
      DAT_180ccf678 = 0;
      (**(code **)(*(longlong *)lVar49 + 0x10))();
    }
    lVar49 = DAT_180ccf680;
    if (DAT_180ccf680 != 0) {
      DAT_180ccf680 = 0;
      (**(code **)(*(longlong *)lVar49 + 0x10))();
    }
    DAT_180ccf688 = '\0';
  }
  auVar79 = ZEXT1664(_DAT_18086d450);
  auVar77 = ZEXT864(0);
  auVar83 = ZEXT464(0x3f800000);
  auVar81 = ZEXT464(0x3f000000);
  puVar2 = DAT_180ccf448;
  if (DAT_180ccf530 != 0) {
    for (; (undefined8 **)puVar2 != ppuVar59; puVar2 = puVar2 + 0x26) {
      ppuVar58 = &DAT_180ccf520;
      if (0xf < uVar67) {
        ppuVar58 = ppuVar57;
      }
      sVar82 = puVar2[2];
      _Buf1 = puVar2;
      if (0xf < (ulonglong)puVar2[3]) {
        _Buf1 = (undefined8 *)*puVar2;
      }
      if ((undefined8 *)sVar82 == puVar55) {
        if (sVar82 == 0) goto LAB_1803f5cef;
        iVar45 = memcmp(_Buf1,ppuVar58,sVar82);
        if (iVar45 == 0) goto LAB_1803f5cef;
      }
    }
    local_328 = (undefined8 *)0x0;
    local_320 = 0;
    local_308 = auVar79._0_16_;
    local_318._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar6[0xf] = 0;
    auVar6._0_15_ = local_318._1_15_;
    local_318 = auVar6 << 8;
    local_2f8 = (undefined1  [16])0x0;
    local_2e8 = (undefined8 *)0x0;
    local_2e0 = auVar77._0_4_;
    local_2d8 = auVar83._0_4_;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2a0 = 0;
    local_298 = 0xf;
    local_2b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar7[0xf] = 0;
    auVar7._0_15_ = local_2b0._1_15_;
    local_2b0 = auVar7 << 8;
    local_290 = (undefined8 *)0x0;
    local_288 = 0;
    local_280 = 0;
    local_274 = 0;
    local_264 = 0;
    local_260 = 0xffffffff;
    local_25c = 0;
    local_258._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar8[0xf] = 0;
    auVar8._0_15_ = local_258._1_15_;
    local_258 = auVar8 << 8;
    local_238 = (undefined8 *)0x0;
    local_230 = 0;
    local_22c = auVar81._0_4_;
    local_224 = 0x101010;
    local_220 = 0x808080;
    local_21c = 0xffffffff;
    local_2dc = local_2e0;
    local_278 = local_2e0;
    local_270 = local_2e0;
    local_26c = local_2e0;
    local_268 = local_2e0;
    local_248 = local_308;
    local_228 = local_22c;
    uVar48 = FUN_1801d8a70(local_218,&local_328);
    FUN_1803edc60(&DAT_180ccf000,uVar48);
    FUN_18015c010(local_258);
    FUN_18015c010(local_2b0);
    FUN_18015c010(local_318);
    auStack_208 = auVar79._0_16_;
    local_218._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar9[0xf] = 0;
    auVar9._0_15_ = local_218._1_15_;
    local_218 = auVar9 << 8;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar10[0xf] = 0;
    auVar10._0_15_ = local_1e8._1_15_;
    local_1e8 = auVar10 << 8;
    local_1c8 = (undefined1  [16])0x0;
    local_1b8 = 0;
    local_1b0 = auVar77._0_4_;
    local_1a8 = auVar83._0_4_;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_170 = 0;
    local_168 = 0xf;
    local_180._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar11[0xf] = 0;
    auVar11._0_15_ = local_180._1_15_;
    local_180 = auVar11 << 8;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_144 = 0;
    local_134 = 0;
    local_130 = 0xffffffff;
    local_12c = 0;
    local_128._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar12[0xf] = 0;
    auVar12._0_15_ = local_128._1_15_;
    local_128 = auVar12 << 8;
    local_108 = 0;
    local_100 = 0;
    local_fc = auVar81._0_4_;
    local_f4 = 0x101010;
    local_f0 = 0x808080;
    local_ec = 0xffffffff;
    local_1d8 = auStack_208;
    local_1ac = local_1b0;
    local_148 = local_1b0;
    local_140 = local_1b0;
    local_13c = local_1b0;
    local_138 = local_1b0;
    local_118 = auStack_208;
    local_f8 = local_fc;
    FUN_18015c010(&DAT_180ccf520);
    DAT_180ccf520 = (undefined8 *)local_218._0_8_;
    uRam0000000180ccf528 = local_218._8_8_;
    DAT_180ccf530 = auStack_208._0_8_;
    DAT_180ccf538 = auStack_208._8_8_;
    auStack_208 = auVar79._0_16_;
    auVar13[0xf] = 0;
    auVar13._0_15_ = local_218._1_15_;
    local_218 = auVar13 << 8;
    auVar77 = ZEXT1664(auVar77._0_16_);
    auVar79 = ZEXT1664(auStack_208);
    auVar81 = ZEXT1664(auVar81._0_16_);
    auVar83 = ZEXT1664(auVar83._0_16_);
    FUN_1803c1c00(&DAT_180ccf540,&local_1f8);
    FUN_18015c010(local_128);
    FUN_18015c010(local_180);
    FUN_18015c010(local_1e8);
    FUN_18015c010(local_218);
    lVar49 = DAT_180ccf680;
    DAT_180ccf688 = '\0';
    if (DAT_180ccf680 != 0) {
      DAT_180ccf680 = 0;
      (**(code **)(*(longlong *)lVar49 + 0x10))();
    }
  }
  ppuVar61 = (undefined8 **)DAT_180ccf448;
  ppuVar59 = (undefined8 **)DAT_180ccf450;
  ppuVar57 = (undefined8 **)DAT_180ccf520;
  puVar55 = (undefined8 *)DAT_180ccf530;
  uVar67 = DAT_180ccf538;
LAB_1803f5cef:
  if (puVar55 == (undefined8 *)0x0) {
    if (ppuVar61 != ppuVar59) {
      do {
        ppuVar57 = ppuVar61;
        if ((undefined8 *)0xf < ppuVar61[3]) {
          ppuVar57 = (undefined8 **)*ppuVar61;
        }
        uVar67 = 0xcbf29ce484222325;
        puVar55 = (undefined8 *)0x0;
        if (ppuVar61[2] != (undefined8 *)0x0) {
          do {
            uVar67 = (uVar67 ^ *(byte *)((longlong)ppuVar57 + (longlong)puVar55)) * 0x100000001b3;
            puVar55 = (undefined8 *)((longlong)puVar55 + 1);
          } while (puVar55 < ppuVar61[2]);
        }
        lVar49 = FUN_180177b00(&DAT_180ccf460,&local_348,ppuVar61,uVar67);
        if (*(longlong *)(lVar49 + 8) == 0) {
          plVar50 = (longlong *)FUN_1801b0c90(&DAT_180ccf4e0,&local_c0,ppuVar61);
          plVar53 = local_d8;
          if (*(longlong **)(*plVar50 + 0x30) <= local_d8) {
            if (ppuVar61 != &DAT_180ccf520) {
              ppuVar59 = ppuVar61;
              if ((undefined8 *)0xf < ppuVar61[3]) {
                ppuVar59 = (undefined8 **)*ppuVar61;
              }
              FUN_180113930(&DAT_180ccf520,ppuVar59,ppuVar61[2]);
            }
            FUN_1803f23c0(&DAT_180ccf540,ppuVar61 + 4);
            DAT_180ccf660 = (ulonglong)plVar53;
            DAT_180ccf650 = '\0';
            DAT_180ccf654 = auVar83._0_4_;
            DAT_180ccf658 = auVar81._0_4_;
            puVar55 = (undefined8 *)DAT_180ccf530;
            DAT_180ccf65c = DAT_180ccf658;
            goto LAB_1803f5efb;
          }
        }
        ppuVar61 = ppuVar61 + 0x26;
      } while (ppuVar61 != ppuVar59);
LAB_1803f5ee8:
      puVar55 = (undefined8 *)DAT_180ccf530;
    }
  }
  else if (ppuVar61 != ppuVar59) {
    do {
      ppuVar58 = &DAT_180ccf520;
      if (0xf < uVar67) {
        ppuVar58 = ppuVar57;
      }
      puVar2 = ppuVar61[2];
      _Buf1_00 = ppuVar61;
      if ((undefined8 *)0xf < ppuVar61[3]) {
        _Buf1_00 = (undefined8 **)*ppuVar61;
      }
    } while (((puVar2 != puVar55) ||
             ((puVar2 != (undefined8 *)0x0 &&
              (iVar45 = memcmp(_Buf1_00,ppuVar58,(size_t)puVar2), iVar45 != 0)))) &&
            (ppuVar61 = ppuVar61 + 0x26, ppuVar61 != ppuVar59));
    if (ppuVar61 != ppuVar59) {
      if (ppuVar61 != &DAT_180ccf520) {
        ppuVar59 = ppuVar61;
        if ((undefined8 *)0xf < ppuVar61[3]) {
          ppuVar59 = (undefined8 **)*ppuVar61;
        }
        FUN_180113930(&DAT_180ccf520,ppuVar59,ppuVar61[2]);
      }
      FUN_1803f23c0(&DAT_180ccf540,ppuVar61 + 4);
      if (DAT_180ccf650 != '\0') {
        _DAT_180ccf590 = DAT_180ccf654;
        _DAT_180ccf63c = DAT_180ccf658;
        _DAT_180ccf640 = DAT_180ccf65c;
      }
      goto LAB_1803f5ee8;
    }
  }
  plVar53 = local_d8;
LAB_1803f5efb:
  if (puVar55 == (undefined8 *)0x0) {
    local_320 = 0;
    local_308 = auVar79._0_16_;
    local_318._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar14[0xf] = 0;
    auVar14._0_15_ = local_318._1_15_;
    local_318 = auVar14 << 8;
    local_2f8 = (undefined1  [16])0x0;
    local_2e0 = auVar77._0_4_;
    local_2d8 = auVar83._0_4_;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2a0 = 0;
    local_298 = 0xf;
    local_2b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar15[0xf] = 0;
    auVar15._0_15_ = local_2b0._1_15_;
    local_2b0 = auVar15 << 8;
    local_288 = 0;
    local_280 = 0;
    local_274 = 0;
    local_264 = 0;
    local_260 = 0xffffffff;
    local_25c = 0;
    local_258._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar16[0xf] = 0;
    auVar16._0_15_ = local_258._1_15_;
    local_258 = auVar16 << 8;
    local_230 = 0;
    local_22c = auVar81._0_4_;
    local_224 = 0x101010;
    local_220 = 0x808080;
    local_21c = 0xffffffff;
    local_328 = puVar55;
    local_2e8 = puVar55;
    local_2dc = local_2e0;
    local_290 = puVar55;
    local_278 = local_2e0;
    local_270 = local_2e0;
    local_26c = local_2e0;
    local_268 = local_2e0;
    local_248 = local_308;
    local_238 = puVar55;
    local_228 = local_22c;
    uVar48 = FUN_1801d8a70(local_218,&local_328);
    FUN_1803edc60(&DAT_180ccf000,uVar48);
    FUN_18015c010(local_258);
    FUN_18015c010(local_2b0);
    FUN_18015c010(local_318);
    FUN_1803f2990(&DAT_180ccf000,param_2,0);
  }
  uVar48 = FUN_1801d8cb0(local_218,&DAT_180ccf540);
  FUN_1803edc60(&DAT_180ccf000,uVar48);
  FUN_1803f2990(&DAT_180ccf000,param_2);
  uVar67 = DAT_180ccf418;
  if (((DAT_180ccf650 == '\0') && (DAT_180ccf548 == 3)) && (DAT_180ccf638 != '\0')) {
    if ((((DAT_180ccf1a8 == DAT_180ccf190) && (DAT_180ccf080 == DAT_180ccf540)) &&
        (DAT_180ccf084 == DAT_180ccf544)) && (UVar51 = GetTickCount64(), UVar51 < uVar67)) {
      local_b0 = DAT_180ccf430;
      local_c0 = _DAT_180ccf420;
      uStack_b8 = uRam0000000180ccf428;
    }
    else {
      local_338 = local_338 & 0xffffff00;
      local_b0 = local_338;
      local_c0 = local_348;
      uStack_b8 = uStack_340;
    }
    if ((char)local_b0 != '\0') {
      auVar75._0_4_ = (float)_DAT_180ccf57c;
      auVar75._4_12_ = SUB1612(ZEXT816(0),4);
      auVar74._0_4_ = (float)_DAT_180ccf578;
      auVar74._4_12_ = SUB1612(ZEXT816(0),4);
      local_368 = CONCAT31(local_368._1_3_,1);
      puVar55 = (undefined8 *)FUN_1803e79e0(&local_348,auVar74._0_8_,auVar75._0_8_,&local_c0);
      uVar48 = *puVar55;
      _DAT_180ccf640 = *(undefined4 *)(puVar55 + 1);
      _DAT_180ccf590 = (undefined4)uVar48;
      local_348._4_4_ = (undefined4)((ulonglong)uVar48 >> 0x20);
      DAT_180ccf658 = local_348._4_4_;
      _DAT_180ccf63c = local_348._4_4_;
      DAT_180ccf650 = '\x01';
      DAT_180ccf654 = _DAT_180ccf590;
      DAT_180ccf65c = _DAT_180ccf640;
      DAT_180ccf660 = (ulonglong)plVar53;
      local_348 = (longlong **)uVar48;
      uVar48 = FUN_1801d8cb0(local_218,&DAT_180ccf540);
      FUN_1803edc60(&DAT_180ccf000,uVar48);
    }
  }
  pplVar72 = (longlong **)DAT_180c6e510;
  plVar53 = (longlong *)DAT_180c6e508;
  local_c8 = (longlong *)DAT_180c6e508;
  local_c0 = (longlong **)DAT_180c6e510;
  if (DAT_180c6e508 == 0) {
  }
  if (DAT_180c6e510 == (longlong *)0x0) {
  }
  if (DAT_180ccf688 != '\0') {
    local_368 = 1;
    iVar45 = (**(code **)(*DAT_180c6e510 + 0xe8))(DAT_180c6e510,DAT_180ccf678,0,0);
    if (iVar45 == 0) {
      local_e8 = (undefined1  [16])0x0;
      local_360 = local_e8;
      local_368 = 0x100000;
      iVar45 = (**(code **)((longlong)*pplVar72 + 0x70))(pplVar72,DAT_180ccf670);
      if (-1 < iVar45) {
        local_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        local_80 = 0;
        auVar77 = ZEXT1664(auVar77._0_16_);
        auVar79 = ZEXT1664(auVar79._0_16_);
        auVar81 = ZEXT1664(auVar81._0_16_);
        auVar83 = ZEXT1664(auVar83._0_16_);
        (**(code **)(*(longlong *)DAT_180ccf670 + 0x50))(DAT_180ccf670,&local_a8);
        iVar45 = 0;
        local_d0 = (longlong *)((ulonglong)local_d0 & 0xffffffff00000000);
        uVar69 = 0;
        if (local_a8._4_4_ != 0) {
          do {
            lVar49 = (ulonglong)(local_e8._8_4_ * uVar69) + local_e8._0_8_;
            uVar66 = 0xff;
            uVar64 = 0xff;
            uVar70 = 0xff;
            uVar68 = 0;
            uVar65 = 0;
            uVar63 = 0;
            uVar71 = 0;
            if ((uint)local_a8 != 0) {
              do {
                uVar47 = uVar71 * 4;
                uVar46 = (uint)*(byte *)((ulonglong)uVar47 + lVar49);
                if (*(byte *)((ulonglong)uVar47 + lVar49) < uVar66) {
                  uVar66 = uVar46;
                }
                if (uVar68 < uVar46) {
                  uVar68 = uVar46;
                }
                bVar1 = *(byte *)((ulonglong)(uVar47 + 1) + lVar49);
                uVar46 = (uint)bVar1;
                if (bVar1 < uVar64) {
                  uVar64 = uVar46;
                }
                if (uVar65 < uVar46) {
                  uVar65 = uVar46;
                }
                bVar1 = *(byte *)((ulonglong)(uVar47 + 2) + lVar49);
                uVar47 = (uint)bVar1;
                if (bVar1 < uVar70) {
                  uVar70 = uVar47;
                }
                if (uVar63 < uVar47) {
                  uVar63 = uVar47;
                }
                uVar71 = uVar71 + 1;
              } while (uVar71 < (uint)local_a8);
              if ((((int)(uVar68 - uVar66) < 0xd) && ((int)(uVar65 - uVar64) < 0xd)) &&
                 ((int)(uVar63 - uVar70) < 0xd)) {
                iVar45 = (int)local_d0;
              }
              else {
                iVar45 = (int)local_d0 + 1;
                local_d0 = (longlong *)CONCAT44(local_d0._4_4_,iVar45);
              }
            }
            uVar69 = uVar69 + 1;
          } while (uVar69 < local_a8._4_4_);
          pplVar72 = local_c0;
        }
        if (DAT_180ccf638 == '\0') {
          uVar69 = 4;
          if (4 < local_a8._4_4_ >> 4) {
            uVar69 = local_a8._4_4_ >> 4;
          }
          bVar4 = (int)uVar69 <= iVar45;
        }
        else {
          if (((local_e8._0_8_ != 0) && (0xf < (uint)local_a8)) &&
             ((0xf < local_a8._4_4_ && ((uint)local_a8 * 4 <= (uint)local_e8._8_4_)))) {
            uVar70 = 0;
            uVar56 = 0;
            uVar64 = 0;
            uVar67 = uVar56;
            uVar69 = uVar70;
            uVar66 = uVar70;
            if (local_a8._4_4_ != 0) {
              do {
                if ((uint)local_a8 != 0) {
                  uVar64 = uVar70;
                  do {
                    bVar1 = *(byte *)((ulonglong)(uVar64 * 4) +
                                      (ulonglong)uVar66 * (ulonglong)(uint)local_e8._8_4_ + 3 +
                                     local_e8._0_8_);
                    uVar68 = (uint)(bVar1 < 9);
                    uVar56 = (ulonglong)((int)uVar56 + uVar68);
                    uVar69 = uVar69 + (0x7f < bVar1);
                    if (((uVar64 == 0) || (uVar64 == (uint)local_a8 - 1)) &&
                       ((uVar66 == 0 || (uVar66 == local_a8._4_4_ - 1)))) {
                      uVar67 = (ulonglong)((int)uVar67 + uVar68);
                    }
                    uVar64 = uVar64 + 1;
                  } while (uVar64 < (uint)local_a8);
                }
                uVar64 = (uint)uVar67;
                uVar66 = uVar66 + 1;
              } while (uVar66 < local_a8._4_4_);
            }
            uVar67 = (local_a8 & 0xffffffff) * (ulonglong)local_a8._4_4_;
            if ((2 < uVar64) &&
               (auVar5._8_8_ = 0, auVar5._0_8_ = uVar67,
               lVar49 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar5,8),
               (uVar67 - lVar49 >> 1) + lVar49 >> 6 <= uVar56)) {
              uVar56 = 8;
              if (8 < uVar67 / 10000) {
                uVar56 = uVar67 / 10000;
              }
              if (uVar56 <= uVar69) {
                bVar4 = true;
                goto LAB_1803f64b4;
              }
            }
          }
          bVar4 = false;
        }
LAB_1803f64b4:
        uVar67 = 0;
        (*(code *)(*pplVar72)[0xf])(pplVar72,DAT_180ccf670,0);
        lVar49 = DAT_180ccf680;
        plVar53 = DAT_180ccf4a8;
        DAT_180ccf688 = '\0';
        if (bVar4) {
          if ((0x5f < DAT_180ccf470) &&
             (plVar50 = (longlong *)*DAT_180ccf4a8, plVar50 != DAT_180ccf4a8)) {
            for (plVar54 = (longlong *)*plVar50; plVar54 != DAT_180ccf4a8;
                plVar54 = (longlong *)*plVar54) {
              if ((ulonglong)plVar54[6] < (ulonglong)plVar50[6]) {
                plVar50 = plVar54;
              }
            }
            if (plVar50 != DAT_180ccf4a8) {
              plVar54 = plVar50 + 2;
              plVar60 = plVar54;
              if (0xf < (ulonglong)plVar50[5]) {
                plVar60 = (longlong *)*plVar54;
              }
              uVar73 = 0xcbf29ce484222325;
              uVar62 = 0xcbf29ce484222325;
              uVar56 = uVar67;
              if (plVar50[4] != 0) {
                do {
                  uVar62 = (uVar62 ^ *(byte *)(uVar56 + (longlong)plVar60)) * 0x100000001b3;
                  uVar56 = uVar56 + 1;
                } while (uVar56 < (ulonglong)plVar50[4]);
              }
              lVar52 = FUN_180177b00(&DAT_180ccf460,&local_348,plVar54,uVar62);
              lVar49 = DAT_180ccf478;
              uVar48 = DAT_180ccf468;
              plVar54 = *(longlong **)(lVar52 + 8);
              if (plVar54 != (longlong *)0x0) {
                uVar62 = DAT_180ccf490 & uVar62;
                plVar53 = *(longlong **)(DAT_180ccf478 + uVar62 * 0x10);
                if (*(longlong **)(DAT_180ccf478 + 8 + uVar62 * 0x10) == plVar54) {
                  if (plVar53 == plVar54) {
                    *(undefined8 *)(DAT_180ccf478 + uVar62 * 0x10) = DAT_180ccf468;
                    *(undefined8 *)(lVar49 + 8 + uVar62 * 0x10) = uVar48;
                  }
                  else {
                    *(longlong *)(DAT_180ccf478 + 8 + uVar62 * 0x10) = plVar54[1];
                  }
                }
                else if (plVar53 == plVar54) {
                  *(longlong *)(DAT_180ccf478 + uVar62 * 0x10) = *plVar54;
                }
                lVar49 = *plVar54;
                DAT_180ccf470 = DAT_180ccf470 - 1;
                *(longlong *)plVar54[1] = lVar49;
                *(longlong *)(lVar49 + 8) = plVar54[1];
                plVar53 = (longlong *)plVar54[6];
                if (plVar53 != (longlong *)0x0) {
                  plVar54[6] = 0;
                  (**(code **)(*plVar53 + 0x10))();
                }
                FUN_18015c010(plVar54 + 2);
                FUN_1804547d0(plVar54,0x38);
                plVar53 = DAT_180ccf4a8;
              }
              lVar49 = DAT_180ccf4b8;
              plVar54 = plVar50 + 2;
              if (0xf < (ulonglong)plVar50[5]) {
                plVar54 = (longlong *)*plVar54;
              }
              if (plVar50[4] != 0) {
                do {
                  uVar73 = (uVar73 ^ *(byte *)((longlong)plVar54 + uVar67)) * 0x100000001b3;
                  uVar67 = uVar67 + 1;
                } while (uVar67 < (ulonglong)plVar50[4]);
              }
              uVar73 = DAT_180ccf4d0 & uVar73;
              plVar54 = *(longlong **)(DAT_180ccf4b8 + uVar73 * 0x10);
              if (*(longlong **)(DAT_180ccf4b8 + 8 + uVar73 * 0x10) == plVar50) {
                if (plVar54 == plVar50) {
                  *(longlong **)(DAT_180ccf4b8 + uVar73 * 0x10) = plVar53;
                  *(longlong **)(lVar49 + 8 + uVar73 * 0x10) = plVar53;
                }
                else {
                  *(longlong *)(DAT_180ccf4b8 + 8 + uVar73 * 0x10) = plVar50[1];
                }
              }
              else if (plVar54 == plVar50) {
                *(longlong *)(DAT_180ccf4b8 + uVar73 * 0x10) = *plVar50;
              }
              lVar49 = *plVar50;
              _DAT_180ccf4b0 = _DAT_180ccf4b0 + -1;
              *(longlong *)plVar50[1] = lVar49;
              *(longlong *)(lVar49 + 8) = plVar50[1];
              FUN_18015c010(plVar50 + 2);
              FUN_1804547d0(plVar50,0x38);
            }
          }
          plVar53 = (longlong *)FUN_1803f8f20(&DAT_180ccf460,&local_348,&DAT_180ccf520);
          lVar52 = DAT_180ccf680;
          lVar49 = *plVar53;
          if (*(longlong *)(lVar49 + 0x30) != DAT_180ccf680) {
            if (DAT_180ccf680 != 0) {
              (**(code **)(*(longlong *)DAT_180ccf680 + 8))(DAT_180ccf680);
            }
            plVar53 = *(longlong **)(lVar49 + 0x30);
            *(longlong *)(lVar49 + 0x30) = lVar52;
            if (plVar53 != (longlong *)0x0) {
              (**(code **)(*plVar53 + 0x10))();
            }
          }
          plVar53 = (longlong *)FUN_1801b0c90(&DAT_180ccf4a0,&local_348,&DAT_180ccf520);
          *(longlong **)(*plVar53 + 0x30) = local_d8;
          lVar49 = DAT_180ccf680;
          if (DAT_180ccf680 != 0) {
            DAT_180ccf680 = 0;
            (**(code **)(*(longlong *)lVar49 + 0x10))();
          }
          auStack_208 = auVar79._0_16_;
          local_218._1_15_ = SUB1615((undefined1  [16])0x0,1);
          auVar17[0xf] = 0;
          auVar17._0_15_ = local_218._1_15_;
          local_218 = auVar17 << 8;
          local_1f8 = 0;
          local_1f0 = 0;
          local_1e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
          auVar18[0xf] = 0;
          auVar18._0_15_ = local_1e8._1_15_;
          local_1e8 = auVar18 << 8;
          local_1c8 = (undefined1  [16])0x0;
          local_1b8 = 0;
          local_1b0 = auVar77._0_4_;
          local_1a8 = auVar83._0_4_;
          local_1a0 = 0;
          local_198 = 0;
          local_190 = 0;
          local_188 = 0;
          local_170 = 0;
          local_168 = 0xf;
          local_180._1_15_ = SUB1615((undefined1  [16])0x0,1);
          auVar19[0xf] = 0;
          auVar19._0_15_ = local_180._1_15_;
          local_180 = auVar19 << 8;
          local_160 = 0;
          local_158 = 0;
          local_150 = 0;
          local_144 = 0;
          local_134 = 0;
          local_130 = 0xffffffff;
          local_12c = 0;
          local_128._1_15_ = SUB1615((undefined1  [16])0x0,1);
          auVar20[0xf] = 0;
          auVar20._0_15_ = local_128._1_15_;
          local_128 = auVar20 << 8;
          local_108 = 0;
          local_100 = 0;
          local_fc = auVar81._0_4_;
          local_f4 = 0x101010;
          local_f0 = 0x808080;
          local_ec = 0xffffffff;
          local_1d8 = auStack_208;
          local_1ac = local_1b0;
          local_148 = local_1b0;
          local_140 = local_1b0;
          local_13c = local_1b0;
          local_138 = local_1b0;
          local_118 = auStack_208;
          local_f8 = local_fc;
          FUN_18015c010(&DAT_180ccf520);
          DAT_180ccf520 = (undefined8 *)local_218._0_8_;
          uRam0000000180ccf528 = local_218._8_8_;
          DAT_180ccf530 = auStack_208._0_8_;
          DAT_180ccf538 = auStack_208._8_8_;
          auStack_208 = auVar79._0_16_;
          auVar21[0xf] = 0;
          auVar21._0_15_ = local_218._1_15_;
          local_218 = auVar21 << 8;
          auVar77 = ZEXT1664(auVar77._0_16_);
          auVar79 = ZEXT1664(auStack_208);
          auVar81 = ZEXT1664(auVar81._0_16_);
          auVar83 = ZEXT1664(auVar83._0_16_);
          FUN_1803c1c00(&DAT_180ccf540,&local_1f8);
          FUN_18015c010(local_128);
          FUN_18015c010(local_180);
          FUN_18015c010(local_1e8);
          FUN_18015c010(local_218);
          local_328 = (undefined8 *)0x0;
          local_320 = 0;
          local_308 = auVar79._0_16_;
          local_318._1_15_ = SUB1615((undefined1  [16])0x0,1);
          auVar22[0xf] = 0;
          auVar22._0_15_ = local_318._1_15_;
          local_318 = auVar22 << 8;
          local_2f8 = (undefined1  [16])0x0;
          local_2e8 = (undefined8 *)0x0;
          local_2e0 = auVar77._0_4_;
          local_2d8 = auVar83._0_4_;
          local_2d0 = 0;
          local_2c8 = 0;
          local_2c0 = 0;
          local_2b8 = 0;
          local_2a0 = 0;
          local_298 = 0xf;
          local_2b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
          auVar23[0xf] = 0;
          auVar23._0_15_ = local_2b0._1_15_;
          local_2b0 = auVar23 << 8;
          local_290 = (undefined8 *)0x0;
          local_288 = 0;
          local_280 = 0;
          local_274 = 0;
          local_264 = 0;
          local_260 = 0xffffffff;
          local_25c = 0;
          local_258._1_15_ = SUB1615((undefined1  [16])0x0,1);
          auVar24[0xf] = 0;
          auVar24._0_15_ = local_258._1_15_;
          local_258 = auVar24 << 8;
          local_238 = (undefined8 *)0x0;
          local_230 = 0;
          local_22c = auVar81._0_4_;
          local_224 = 0x101010;
          local_220 = 0x808080;
          local_21c = 0xffffffff;
          local_2dc = local_2e0;
          local_278 = local_2e0;
          local_270 = local_2e0;
          local_26c = local_2e0;
          local_268 = local_2e0;
          local_248 = local_308;
          local_228 = local_22c;
          uVar48 = FUN_1801d8a70(local_218,&local_328);
          FUN_1803edc60(&DAT_180ccf000,uVar48);
          FUN_18015c010(local_258);
          FUN_18015c010(local_2b0);
          FUN_18015c010(local_318);
        }
        if (DAT_180ccf680 != 0) {
          DAT_180ccf680 = 0;
          (**(code **)(*(longlong *)lVar49 + 0x10))();
        }
        plVar53 = local_c8;
      }
    }
    plVar50 = local_d8;
    if (DAT_180ccf688 != '\0') goto LAB_1803f6ddf;
  }
  plVar50 = local_d8;
  if ((longlong *)(DAT_180ccf660 + 0x96) <= local_d8) {
    plVar54 = (longlong *)FUN_1803f5070(&DAT_180ccf000,DAT_180ccf540,DAT_180ccf544);
    if (plVar54 != (longlong *)0x0) {
      auVar25._8_8_ = 0;
      auVar25._0_8_ = local_e8._8_8_;
      local_e8 = auVar25 << 0x40;
      (**(code **)(*plVar54 + 0x38))(plVar54,local_e8);
      local_d0 = (longlong *)0x0;
      iVar45 = (*(code *)**(undefined8 **)local_e8._0_8_)(local_e8._0_8_,&DAT_180806ff8,&local_d0);
      if (-1 < iVar45) {
        local_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        uStack_8c = 0;
        uStack_88 = 0;
        uStack_84 = 0;
        local_80 = 0;
        auVar77 = ZEXT1664(auVar77._0_16_);
        auVar79 = ZEXT1664(auVar79._0_16_);
        auVar81 = ZEXT1664(auVar81._0_16_);
        auVar83 = ZEXT1664(auVar83._0_16_);
        (**(code **)(*local_d0 + 0x50))(local_d0,&local_a8);
        local_d8 = (longlong *)0x0;
        local_c8 = (longlong *)0x0;
        uStack_8c = 0;
        uStack_88 = 8;
        uStack_84 = 0;
        local_80 = 0;
        iVar45 = (**(code **)(*plVar53 + 0x28))(plVar53,&local_a8,0,&local_d8);
        if (iVar45 < 0) {
LAB_1803f6d60:
          plVar53 = local_c8;
          if (local_c8 != (longlong *)0x0) {
            local_c8 = (longlong *)0x0;
            (**(code **)(*plVar53 + 0x10))();
          }
          plVar53 = local_d8;
          if (local_d8 != (longlong *)0x0) {
            local_d8 = (longlong *)0x0;
            (**(code **)(*plVar53 + 0x10))();
          }
          FUN_1801bd340(&local_d0);
          uVar48 = local_e8._0_8_;
          if ((longlong *)local_e8._0_8_ == (longlong *)0x0) {
          }
          auVar27._8_8_ = 0;
          auVar27._0_8_ = local_e8._8_8_;
          local_e8 = auVar27 << 0x40;
          (**(code **)(*(longlong *)uVar48 + 0x10))();
        }
        pcVar3 = *(code **)(*plVar53 + 0x38);
        local_348 = &local_c8;
        uVar48 = FUN_18020f850(&local_348);
        iVar45 = (*pcVar3)(plVar53,local_d8,0,uVar48);
        if (iVar45 < 0) goto LAB_1803f6d60;
        (*(code *)(*pplVar72)[0x2f])(pplVar72,local_d8,local_d0);
        uStack_8c = 3;
        uStack_88 = 0;
        uStack_84 = 0x20000;
        FUN_1803827e0(&DAT_180ccf670);
        FUN_1803827e0(&DAT_180ccf678);
        local_c0 = (longlong **)0x0;
        pcVar3 = *(code **)(*plVar53 + 0x28);
        local_348 = (longlong **)&DAT_180ccf670;
        uVar48 = FUN_18020f850(&local_348);
        iVar45 = (*pcVar3)(plVar53,&local_a8,0,uVar48);
        if (-1 < iVar45) {
          pcVar3 = *(code **)(*plVar53 + 0xc0);
          local_348 = (longlong **)&DAT_180ccf678;
          uVar48 = FUN_18020f850(&local_348);
          iVar45 = (*pcVar3)(plVar53,&local_c0,uVar48);
          if (-1 < iVar45) {
            (*(code *)(*pplVar72)[0x2f])(pplVar72,DAT_180ccf670,local_d8);
            (*(code *)(*pplVar72)[0x1c])(pplVar72,DAT_180ccf678);
            FUN_1801d4480(&DAT_180ccf680,&local_c8);
            DAT_180ccf688 = '\x01';
          }
        }
        FUN_1801bd340(&local_c8);
        FUN_1801bd340(&local_d8);
      }
      plVar53 = local_d0;
      if (local_d0 != (longlong *)0x0) {
        local_d0 = (longlong *)0x0;
        (**(code **)(*plVar53 + 0x10))();
      }
      uVar48 = local_e8._0_8_;
      if ((longlong *)local_e8._0_8_ != (longlong *)0x0) {
        auVar26._8_8_ = 0;
        auVar26._0_8_ = local_e8._8_8_;
        local_e8 = auVar26 << 0x40;
        (**(code **)(*(longlong *)uVar48 + 0x10))();
      }
    }
  }
LAB_1803f6ddf:
  if ((longlong *)(DAT_180ccf660 + 0x9c4) <= plVar50) {
    plVar53 = (longlong *)FUN_1801b0c90(&DAT_180ccf4e0,&local_348,&DAT_180ccf520);
    *(longlong **)(*plVar53 + 0x30) = plVar50 + 0x4e2;
    auStack_208 = auVar79._0_16_;
    local_218._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar28[0xf] = 0;
    auVar28._0_15_ = local_218._1_15_;
    local_218 = auVar28 << 8;
    local_1f8 = 0;
    local_1f0 = 0;
    local_1e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar29[0xf] = 0;
    auVar29._0_15_ = local_1e8._1_15_;
    local_1e8 = auVar29 << 8;
    local_1c8 = (undefined1  [16])0x0;
    local_1b8 = 0;
    local_1b0 = auVar77._0_4_;
    local_1a8 = auVar83._0_4_;
    local_1a0 = 0;
    local_198 = 0;
    local_190 = 0;
    local_188 = 0;
    local_170 = 0;
    local_168 = 0xf;
    local_180._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar30[0xf] = 0;
    auVar30._0_15_ = local_180._1_15_;
    local_180 = auVar30 << 8;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_144 = 0;
    local_134 = 0;
    local_130 = 0xffffffff;
    local_12c = 0;
    local_128._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar31[0xf] = 0;
    auVar31._0_15_ = local_128._1_15_;
    local_128 = auVar31 << 8;
    local_108 = 0;
    local_100 = 0;
    local_fc = auVar81._0_4_;
    local_f4 = 0x101010;
    local_f0 = 0x808080;
    local_ec = 0xffffffff;
    local_1d8 = auStack_208;
    local_1ac = local_1b0;
    local_148 = local_1b0;
    local_140 = local_1b0;
    local_13c = local_1b0;
    local_138 = local_1b0;
    local_118 = auStack_208;
    local_f8 = local_fc;
    FUN_18015c010(&DAT_180ccf520);
    DAT_180ccf520 = (undefined8 *)local_218._0_8_;
    uRam0000000180ccf528 = local_218._8_8_;
    DAT_180ccf530 = auStack_208._0_8_;
    DAT_180ccf538 = auStack_208._8_8_;
    auStack_208 = auVar79._0_16_;
    auVar32[0xf] = 0;
    auVar32._0_15_ = local_218._1_15_;
    local_218 = auVar32 << 8;
    auVar77 = ZEXT1664(auVar77._0_16_);
    auVar79 = ZEXT1664(auStack_208);
    auVar81 = ZEXT1664(auVar81._0_16_);
    auVar83 = ZEXT1664(auVar83._0_16_);
    FUN_1803c1c00(&DAT_180ccf540,&local_1f8);
    FUN_18015c010(local_128);
    FUN_18015c010(local_180);
    FUN_18015c010(local_1e8);
    FUN_18015c010(local_218);
    local_328 = (undefined8 *)0x0;
    local_320 = 0;
    local_308 = auVar79._0_16_;
    local_318._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar33[0xf] = 0;
    auVar33._0_15_ = local_318._1_15_;
    local_318 = auVar33 << 8;
    local_2f8 = (undefined1  [16])0x0;
    local_2e8 = (undefined8 *)0x0;
    local_2e0 = auVar77._0_4_;
    local_2d8 = auVar83._0_4_;
    local_2d0 = 0;
    local_2c8 = 0;
    local_2c0 = 0;
    local_2b8 = 0;
    local_2a0 = 0;
    local_298 = 0xf;
    local_2b0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar34[0xf] = 0;
    auVar34._0_15_ = local_2b0._1_15_;
    local_2b0 = auVar34 << 8;
    local_290 = (undefined8 *)0x0;
    local_288 = 0;
    local_280 = 0;
    local_274 = 0;
    local_264 = 0;
    local_260 = 0xffffffff;
    local_25c = 0;
    local_258._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar35[0xf] = 0;
    auVar35._0_15_ = local_258._1_15_;
    local_258 = auVar35 << 8;
    local_238 = (undefined8 *)0x0;
    local_230 = 0;
    local_22c = auVar81._0_4_;
    local_224 = 0x101010;
    local_220 = 0x808080;
    local_21c = 0xffffffff;
    local_2dc = local_2e0;
    local_278 = local_2e0;
    local_270 = local_2e0;
    local_26c = local_2e0;
    local_268 = local_2e0;
    local_248 = local_308;
    local_228 = local_22c;
    uVar48 = FUN_1801d8a70(local_218,&local_328);
    FUN_1803edc60(&DAT_180ccf000,uVar48);
    FUN_18015c010(local_258);
    FUN_18015c010(local_2b0);
    FUN_18015c010(local_318);
    lVar49 = DAT_180ccf680;
    DAT_180ccf688 = '\0';
    if (DAT_180ccf680 != 0) {
      DAT_180ccf680 = 0;
      (**(code **)(*(longlong *)lVar49 + 0x10))();
    }
    if (0xc0 < DAT_180ccf4f0) {
      FUN_1801bc7b0(&DAT_180ccf4e0);
    }
  }
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
}



