// FUN_1801ec0c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ec0c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ec0c0(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  short *psVar1;
  short sVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte bVar12;
  bool bVar13;
  undefined1 uVar14;
  short *psVar15;
  char cVar16;
  DWORD DVar17;
  int iVar18;
  BOOL BVar19;
  undefined8 uVar20;
  int *piVar21;
  undefined8 *puVar22;
  short *psVar23;
  undefined8 *puVar24;
  undefined8 uVar25;
  undefined1 (*pauVar26) [16];
  undefined8 *puVar27;
  undefined8 uVar28;
  LPCWSTR ******pppppppWVar29;
  longlong lVar30;
  char *pcVar31;
  LPCWSTR pWVar32;
  char *pcVar33;
  longlong *plVar34;
  longlong lVar35;
  short *psVar36;
  undefined1 *puVar37;
  longlong lVar38;
  longlong lVar39;
  char *pcVar40;
  uint uVar41;
  uint uVar42;
  bool bVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [64];
  ulonglong uVar49;
  undefined1 auStack_4f8 [32];
  ulonglong *local_4d8;
  undefined4 local_4d0;
  uint local_4c8;
  undefined1 local_4c4;
  ulonglong local_4c0;
  undefined1 local_4b8 [16];
  uint local_4a8 [2];
  undefined1 local_4a0 [16];
  undefined8 local_490;
  undefined8 local_488;
  undefined1 local_478 [16];
  undefined8 local_468;
  undefined8 local_460;
  undefined1 local_458 [32];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined8 *local_418;
  longlong *local_410;
  undefined8 *local_408;
  char *local_3f8;
  undefined8 local_3f0;
  undefined1 *local_3e8;
  undefined8 local_3e0;
  longlong *local_3d8;
  undefined8 *local_3d0;
  undefined8 *local_3c8;
  undefined8 **local_3c0;
  int local_3b8 [4];
  undefined8 *local_3a8;
  longlong *local_398;
  undefined1 local_390 [16];
  undefined8 local_380;
  ulonglong local_378;
  undefined1 local_370 [16];
  undefined8 local_360;
  ulonglong local_358;
  LPCWSTR ******local_350 [2];
  undefined8 local_340;
  ulonglong local_338;
  undefined1 local_330 [16];
  longlong local_320;
  ulonglong local_318;
  undefined1 local_308 [16];
  ulonglong uStack_2f8;
  ulonglong uStack_2f0;
  undefined1 local_2e8 [16];
  longlong lStack_2d8;
  ulonglong uStack_2d0;
  undefined1 local_2c8 [16];
  ulonglong uStack_2b8;
  ulonglong uStack_2b0;
  undefined1 local_2a8 [16];
  longlong lStack_298;
  undefined8 uStack_290;
  undefined1 local_288 [16];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined1 local_268 [16];
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_228;
  longlong lStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined1 local_208 [16];
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulonglong local_1e8;
  longlong lStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulonglong local_1a8;
  longlong lStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 local_188 [16];
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined8 *local_140;
  ulonglong *local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_110;
  undefined8 *local_108;
  undefined1 local_f8 [32];
  char local_d8;
  char local_d7;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_4f8;
  local_4c8 = 1;
  local_418 = param_2;
  local_410 = param_3;
  local_408 = param_1;
  local_3a8 = param_1;
  local_398 = param_3;
  FUN_1801ed6e0();
  local_4c8 = 1;
  if (param_1 != param_2) {
    puVar22 = param_2;
    if (7 < (ulonglong)param_2[3]) {
      puVar22 = (undefined8 *)*param_2;
    }
    FUN_1800f5190(param_1,puVar22,param_2[2]);
  }
  uStack_210 = 0;
  local_208 = ZEXT816(0);
  uStack_1f8 = 0;
  uStack_1f0 = 0;
  auVar44._12_4_ = 0;
  auVar44._0_12_ = ZEXT812(0);
  auVar44 = auVar44 << 0x20;
  local_228 = 0;
  lStack_220 = 0;
  uStack_218 = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_4b8._8_8_ = 0x15;
    local_4b8._0_8_ = "tier0.dll:g_pMemAlloc";
    auVar45 = ZEXT1264(ZEXT812(0)) << 0x20;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(local_4b8);
    auVar44 = auVar45._0_16_;
  }
  auVar45 = ZEXT1664(auVar44);
  lStack_220 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
  *(longlong *)lStack_220 = lStack_220;
  *(longlong *)(lStack_220 + 8) = lStack_220;
  uStack_210 = 0;
  local_208 = (undefined1  [16])0x0;
  uStack_1f8 = 7;
  uStack_1f0 = 8;
  auVar48 = ZEXT464(0x3f800000);
  local_228 = CONCAT44(local_228._4_4_,0x3f800000);
  FUN_1801406e0(&uStack_210,0x10,lStack_220);
  local_360 = 0;
  local_358 = 0xf;
  local_370._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar47[0xf] = 0;
  auVar47._0_15_ = local_370._1_15_;
  local_370 = auVar47 << 8;
  local_390 = (undefined1  [16])0x0;
  local_380 = 0;
  local_378 = 0;
  FUN_180159e60(local_390,L"pak01_dir.vpk",0xd);
  local_4c8 = 7;
  uVar20 = FUN_1800a7e60(local_4a0,param_2,local_390);
  cVar16 = FUN_180185fa0(uVar20,&local_228,local_370);
  FUN_18015b930(local_4a0);
  FUN_18015b930(local_390);
  if (cVar16 == '\0') {
LAB_1801ec408:
    if (param_1 + 0x14 != (undefined8 *)local_370) {
      puVar37 = local_370;
      if (0xf < local_358) {
        puVar37 = (undefined1 *)local_370._0_8_;
      }
      FUN_180113930(param_1 + 0x14,puVar37,local_360);
    }
  }
  else {
    local_390 = (undefined1  [16])0x0;
    local_380 = 0;
    local_378 = 0;
    FUN_180159e60(local_390,L"core/pak01_dir.vpk",0x12);
    uVar41 = 0x1f;
    local_4c8 = 0x1f;
    uVar20 = FUN_18015c130(param_2,local_478);
    uVar20 = FUN_1800a7e60(local_4a0,uVar20,local_390);
    local_4b8 = ZEXT816(0x1808d7db8) << 0x40;
    piVar21 = (int *)FUN_1800a80b0(&local_4c0,uVar20,local_4b8);
    if (*piVar21 == 0) {
      bVar43 = false;
      if (local_4b8._0_4_ != 0) {
        FUN_1801eb000(0,local_4b8,uVar20);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    else {
      bVar43 = *piVar21 != 1;
    }
    FUN_18015b930(local_4a0);
    FUN_18015b930(local_478);
    FUN_18015b930(local_390);
    if (bVar43) {
      local_390 = (undefined1  [16])0x0;
      local_380 = 0;
      local_378 = 0;
      FUN_180159e60(local_390,L"core/pak01_dir.vpk",0x12);
      uVar41 = 0x19f;
      local_4c8 = 0x19f;
      uVar20 = FUN_18015c130(param_2,local_478);
      uVar20 = FUN_1800a7e60(local_4a0,uVar20,local_390);
      cVar16 = FUN_180185fa0(uVar20,&local_228,local_370);
      FUN_18015b930(local_4a0);
      FUN_18015b930(local_478);
      FUN_18015b930(local_390);
      if (cVar16 == '\0') goto LAB_1801ec408;
    }
    local_390 = (undefined1  [16])0x0;
    local_380 = 0;
    local_378 = 0;
    FUN_180159e60(local_390,L"characters",10);
    local_4c8 = uVar41 | 0x60;
    FUN_1800a7e60(local_350,param_2,local_390);
    FUN_18015b930(local_390);
    local_4b8 = ZEXT816(0x1808d7db8) << 0x40;
    piVar21 = (int *)FUN_1800a80b0(&local_4c0,local_350,local_4b8);
    if (*piVar21 == 3) {
      pppppppWVar29 = (LPCWSTR ******)local_350;
      if (7 < local_338) {
        pppppppWVar29 = local_350[0];
      }
      DVar17 = GetFileAttributesW((LPCWSTR)pppppppWVar29);
      if ((DVar17 >> 10 & 1) == 0) {
        FUN_1800f5370(local_4a0,local_350);
        FUN_1801f4440(param_1 + 4,local_4a0,1);
        _eh_vector_destructor_iterator_(local_4a0,0x20,1,thunk_FUN_18015b930);
        local_478 = (undefined1  [16])0x0;
        local_468 = 0;
        local_460 = 0;
        FUN_180159e60(local_478,L"phase2/characters",0x11);
        uVar42 = uVar41 | 0x660;
        local_4c8 = uVar42;
        uVar20 = FUN_1800a7e60(local_4a0,local_350,local_478);
        piVar21 = (int *)FUN_1800a80b0(&local_4c0,uVar20,local_4b8);
        iVar18 = *piVar21;
        FUN_18015b930(local_4a0);
        FUN_18015b930(local_478);
        auVar47 = auVar48._0_16_;
        auVar44 = auVar45._0_16_;
        if (iVar18 == 3) {
          local_478 = (undefined1  [16])0x0;
          local_468 = 0;
          local_460 = 0;
          FUN_180159e60(local_478,L"phase2",6);
          uVar42 = uVar41 | 0x1e60;
          local_4c8 = uVar42;
          puVar22 = (undefined8 *)FUN_1800a7e60(local_4a0,local_350,local_478);
          auVar47 = auVar48._0_16_;
          auVar44 = auVar45._0_16_;
          pauVar26 = (undefined1 (*) [16])param_1[5];
          if (pauVar26 == (undefined1 (*) [16])param_1[6]) {
            FUN_1801f5870(param_1 + 4,pauVar26,puVar22);
            auVar47 = auVar48._0_16_;
            auVar44 = auVar45._0_16_;
          }
          else {
            *pauVar26 = (undefined1  [16])0x0;
            *(undefined8 *)pauVar26[1] = 0;
            *(undefined8 *)(pauVar26[1] + 8) = 0;
            uVar20 = puVar22[1];
            uVar46 = puVar22[2];
            uVar25 = puVar22[3];
            *(undefined8 *)*pauVar26 = *puVar22;
            *(undefined8 *)(*pauVar26 + 8) = uVar20;
            *(undefined8 *)pauVar26[1] = uVar46;
            *(undefined8 *)(pauVar26[1] + 8) = uVar25;
            *(undefined2 *)puVar22 = 0;
            puVar22[2] = 0;
            puVar22[3] = 7;
            param_1[5] = param_1[5] + 0x20;
          }
          auVar45 = ZEXT1664(auVar44);
          auVar48 = ZEXT1664(auVar47);
          FUN_18015b930(local_4a0);
          FUN_18015b930(local_478);
          auVar47 = auVar48._0_16_;
          auVar44 = auVar45._0_16_;
        }
        local_c8 = 0;
        uStack_c0 = 0;
        uStack_b8 = 0;
        uStack_b0 = 0;
        local_a8 = 0;
        uStack_a0 = 0;
        uStack_98 = 0;
        uStack_90 = 0;
        local_4a8[0] = auVar44._0_4_;
        auVar45 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar47);
        FUN_180111790(&local_c8,local_4a8);
        auVar47 = auVar48._0_16_;
        auVar44 = auVar45._0_16_;
        uStack_190 = 0;
        local_188 = ZEXT816(0);
        uStack_178 = 0;
        uStack_170 = 0;
        local_1a8 = (ulonglong)auVar45._0_4_;
        lStack_1a0 = 0;
        uStack_198 = 0;
        if (DAT_180c7df28 == (undefined8 *)0x0) {
          local_4b8._8_8_ = 0x15;
          local_4b8._0_8_ = "tier0.dll:g_pMemAlloc";
          auVar45 = ZEXT1664(auVar44);
          auVar48 = ZEXT1664(auVar47);
          DAT_180c7df28 = (undefined8 *)FUN_180451750(local_4b8);
          auVar47 = auVar48._0_16_;
          auVar44 = auVar45._0_16_;
        }
        auVar45 = ZEXT1664(auVar44);
        auVar48 = ZEXT1664(auVar47);
        lStack_1a0 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x38)
        ;
        *(longlong *)lStack_1a0 = lStack_1a0;
        *(longlong *)(lStack_1a0 + 8) = lStack_1a0;
        uStack_190 = 0;
        local_188 = (undefined1  [16])0x0;
        uStack_178 = 7;
        uStack_170 = 8;
        local_1a8 = CONCAT44(local_1a8._4_4_,auVar48._0_4_);
        FUN_1801406e0(&uStack_190,0x10,lStack_1a0);
        local_138 = &local_1a8;
        local_3d0 = &local_228;
        local_3c8 = &local_c8;
        local_3c0 = &local_140;
        local_4b8 = (undefined1  [16])0x0;
        local_3d8 = param_3;
        local_140 = param_1;
        local_130 = param_2;
        iVar18 = FUN_1801a5100(local_4b8,local_350,2);
        uVar14 = local_4c4;
        local_478 = (undefined1  [16])0x0;
        local_4c0 = 0;
        if (local_4b8._0_8_ != 0) {
          uVar20 = 0;
          uVar46 = 7;
          lVar39 = 0;
          uVar49 = 0xf;
          lVar38 = local_4b8._0_8_;
          do {
            if ((*local_410 != 0) && ((*(uint *)(*local_410 + 4) & 1) != 0)) break;
            if (iVar18 == 0) {
              local_4c0 = local_4c0 + 1;
              if (250000 < local_4c0) {
                FUN_180113930(param_1 + 0x14,"Character scan budget exceeded",0x1e);
                break;
              }
              pWVar32 = (LPCWSTR)(lVar38 + 0x20);
              if (7 < *(ulonglong *)(lVar38 + 0x38)) {
                pWVar32 = *(LPCWSTR *)(lVar38 + 0x20);
              }
              DVar17 = GetFileAttributesW(pWVar32);
              if ((DVar17 == 0xffffffff) || ((DVar17 >> 10 & 1) != 0)) {
                *(undefined1 *)(lVar38 + 100) = 0;
                goto LAB_1801ed4d2;
              }
              FUN_1801eb060(lVar38,local_3b8);
              lVar30 = lVar38 + 0x20;
              if (local_3b8[0] != 3) {
                uVar25 = FUN_1801bdad0(lVar30,local_4a0);
                puVar24 = (undefined8 *)FUN_1801ebc40(local_458,uVar25);
                puVar22 = puVar24;
                if (0xf < (ulonglong)puVar24[3]) {
                  puVar22 = (undefined8 *)*puVar24;
                }
                local_438 = (undefined1  [16])0x0;
                local_428 = (undefined1  [16])0x0;
                FUN_18015ba30(local_438,puVar22,puVar24[2]);
                uVar42 = uVar42 | 0x20000;
                pcVar31 = local_438;
                if (0xf < (ulonglong)local_428._8_8_) {
                  pcVar31 = (char *)local_438._0_8_;
                }
                pcVar40 = pcVar31 + local_428._0_8_;
                if (pcVar31 != pcVar40) {
                  do {
                    cVar16 = *pcVar31;
                    if (('@' < cVar16) && (cVar16 < '[')) {
                      *pcVar31 = cVar16 + ' ';
                    }
                    pcVar31 = pcVar31 + 1;
                  } while (pcVar31 != pcVar40);
                }
                pcVar31 = local_438;
                if (0xf < (ulonglong)local_428._8_8_) {
                  pcVar31 = (char *)local_438._0_8_;
                }
                local_4c8 = uVar42;
                local_4a8[0] = uVar42;
                if (local_428._0_8_ == 7) {
                  iVar18 = memcmp(pcVar31,".vmdl_c",7);
                  bVar43 = iVar18 == 0;
                }
                else {
                  bVar43 = false;
                }
                FUN_18015c010(local_438);
                FUN_18015c010(local_458);
                FUN_18015b930(local_4a0);
                if (!bVar43) goto LAB_1801ed4d2;
                FUN_1801ea080(lVar38 + 0x20,local_458,local_350);
                FUN_1801ebc40(local_390);
                FUN_18015b930(local_458);
                local_3e8 = local_390;
                if (0xf < local_378) {
                  local_3e8 = (undefined1 *)local_390._0_8_;
                }
                local_3e0 = local_380;
                cVar16 = FUN_1801ebd30(&local_3e8);
                if (cVar16 == '\0') {
LAB_1801ecc10:
                  param_1[0x12] = param_1[0x12] + 1;
                }
                else {
                  local_168 = 0;
                  uStack_160 = 0;
                  uStack_158 = 0;
                  uStack_154 = 0;
                  uStack_150 = 0;
                  uStack_14c = 0;
                  local_148 = 0;
                  pWVar32 = (LPCWSTR)(lVar38 + 0x20);
                  if (7 < *(ulonglong *)(lVar38 + 0x38)) {
                    pWVar32 = *(LPCWSTR *)pWVar32;
                  }
                  auVar45 = ZEXT1664(auVar45._0_16_);
                  auVar48 = ZEXT1664(auVar48._0_16_);
                  BVar19 = GetFileAttributesExW(pWVar32,GetFileExInfoStandard,&local_168);
                  if (BVar19 == 0) goto LAB_1801ecc10;
                  param_1[0x13] = param_1[0x13] + 1;
                  FUN_1801eb960(&local_128,lVar38 + 0x20);
                  if ((local_d8 != '\0') && (local_d7 != '\0')) {
                    uStack_2f8 = 0;
                    uStack_2f0 = 0xf;
                    local_308._1_15_ = SUB1615((undefined1  [16])0x0,1);
                    auVar6[0xf] = 0;
                    auVar6._0_15_ = local_308._1_15_;
                    local_308 = auVar6 << 8;
                    local_2e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
                    auVar7[0xf] = 0;
                    auVar7._0_15_ = local_2e8._1_15_;
                    local_2e8 = auVar7 << 8;
                    uStack_2b8 = 0;
                    uStack_2b0 = 0xf;
                    local_2c8._1_15_ = SUB1615((undefined1  [16])0x0,1);
                    auVar8[0xf] = 0;
                    auVar8._0_15_ = local_2c8._1_15_;
                    local_2c8 = auVar8 << 8;
                    lStack_298 = 0;
                    uStack_290 = 0xf;
                    local_2a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
                    auVar9[0xf] = 0;
                    auVar9._0_15_ = local_2a8._1_15_;
                    local_2a8 = auVar9 << 8;
                    local_288._2_14_ = SUB1614((undefined1  [16])0x0,2);
                    auVar10._14_2_ = 0;
                    auVar10._0_14_ = local_288._2_14_;
                    local_288 = auVar10 << 0x10;
                    local_268._2_14_ = SUB1614((undefined1  [16])0x0,2);
                    auVar11._14_2_ = 0;
                    auVar11._0_14_ = local_268._2_14_;
                    local_268 = auVar11 << 0x10;
                    local_248 = 0;
                    local_240 = 0;
                    local_238 = 0;
                    plVar34 = (longlong *)(lVar38 + 0x20);
                    lStack_2d8 = lVar39;
                    uStack_2d0 = uVar49;
                    local_278 = uVar20;
                    uStack_270 = uVar46;
                    local_258 = uVar20;
                    uStack_250 = uVar46;
                    if ((longlong *)local_268 != plVar34) {
                      if (7 < *(ulonglong *)(lVar38 + 0x38)) {
                        plVar34 = (longlong *)*plVar34;
                      }
                      FUN_1800f5190(local_268,plVar34,*(undefined8 *)(lVar38 + 0x30));
                    }
                    uVar25 = FUN_1801ea080(lVar38 + 0x20,local_4a0,param_2);
                    pauVar26 = (undefined1 (*) [16])FUN_1801ebc40(local_458,uVar25);
                    auVar47 = auVar48._0_16_;
                    auVar44 = auVar45._0_16_;
                    if (&local_308 != pauVar26) {
                      FUN_18015c010(local_308);
                      auVar47 = auVar48._0_16_;
                      auVar44 = auVar45._0_16_;
                      local_308 = *pauVar26;
                      uStack_2f8 = *(ulonglong *)pauVar26[1];
                      uStack_2f0 = *(ulonglong *)(pauVar26[1] + 8);
                      *(undefined8 *)pauVar26[1] = 0;
                      *(undefined8 *)(pauVar26[1] + 8) = 0xf;
                      (*pauVar26)[0] = 0;
                    }
                    auVar45 = ZEXT1664(auVar44);
                    auVar48 = ZEXT1664(auVar47);
                    FUN_18015c010(local_458);
                    FUN_18015b930(local_4a0);
                    puVar22 = local_120;
                    local_240 = CONCAT44(uStack_150,uStack_154);
                    local_238 = CONCAT44(uStack_14c,local_148);
                    bVar43 = false;
                    bVar13 = false;
                    puVar24 = local_128;
                    if (local_128 == local_120) {
LAB_1801ecf51:
                      FUN_180113930(local_2a8,"First-/third-person variants are absent",0x27);
                    }
                    else {
                      do {
                        uVar3 = puVar24[3];
                        puVar27 = puVar24;
                        if (0xf < uVar3) {
                          puVar27 = (undefined8 *)*puVar24;
                        }
                        uVar4 = puVar24[2];
                        if ((0x16 < uVar4) &&
                           (iVar18 = memcmp(puVar27,"first_or_third_person_@",0x17), iVar18 == 0)) {
                          puVar27 = puVar24;
                          if (0xf < uVar3) {
                            puVar27 = (undefined8 *)*puVar24;
                          }
                          iVar18 = memcmp((void *)((longlong)puVar27 + (uVar4 - 0x16)),
                                          "_#&firstperson_default",0x16);
                          if (iVar18 == 0) {
LAB_1801eced4:
                            bVar12 = 1;
                          }
                          else {
                            puVar27 = puVar24;
                            if (0xf < uVar3) {
                              puVar27 = (undefined8 *)*puVar24;
                            }
                            if ((0x21 < uVar4) &&
                               (iVar18 = memcmp((void *)((longlong)puVar27 + (uVar4 - 0x22)),
                                                "_#&firstperson_hide_default_gloves",0x22),
                               iVar18 == 0)) goto LAB_1801eced4;
                            bVar12 = 0;
                          }
                          bVar43 = (bool)(bVar43 | bVar12);
                          puVar27 = puVar24;
                          if (0xf < uVar3) {
                            puVar27 = (undefined8 *)*puVar24;
                          }
                          iVar18 = memcmp((void *)((longlong)puVar27 + (uVar4 - 0x16)),
                                          "_#&thirdperson_default",0x16);
                          if (iVar18 == 0) {
LAB_1801ecf35:
                            bVar12 = 1;
                          }
                          else {
                            puVar27 = puVar24;
                            if (0xf < uVar3) {
                              puVar27 = (undefined8 *)*puVar24;
                            }
                            if ((0x21 < uVar4) &&
                               (iVar18 = memcmp((void *)((longlong)puVar27 + (uVar4 - 0x22)),
                                                "_#&thirdperson_hide_default_gloves",0x22),
                               iVar18 == 0)) goto LAB_1801ecf35;
                            bVar12 = 0;
                          }
                          bVar13 = (bool)(bVar13 | bVar12);
                        }
                        puVar24 = puVar24 + 4;
                      } while (puVar24 != puVar22);
                      if ((!bVar43) || (!bVar13)) goto LAB_1801ecf51;
                    }
                    pppppppWVar29 = (LPCWSTR ******)local_350;
                    if (7 < local_338) {
                      pppppppWVar29 = local_350[0];
                    }
                    FUN_1800f5190(local_288,pppppppWVar29,local_340);
                    param_1 = local_408;
                    lVar38 = local_408[4];
                    if (1 < (ulonglong)(local_408[5] - lVar38 >> 5)) {
                      puVar37 = local_308;
                      if (0xf < uStack_2f0) {
                        puVar37 = (undefined1 *)local_308._0_8_;
                      }
                      if (((0x11 < uStack_2f8) &&
                          (iVar18 = memcmp(puVar37,"characters/phase2/",0x12), iVar18 == 0)) &&
                         (plVar34 = (longlong *)(lVar38 + 0x20), (longlong *)local_288 != plVar34))
                      {
                        if (7 < *(ulonglong *)(lVar38 + 0x38)) {
                          plVar34 = (longlong *)*plVar34;
                        }
                        FUN_1800f5190(local_288,plVar34,*(undefined8 *)(lVar38 + 0x30));
                      }
                    }
                    uVar25 = local_4b8._0_8_;
                    uVar28 = FUN_1801ea080(local_4b8._0_8_ + 0x20,local_4a0,local_288);
                    pauVar26 = (undefined1 (*) [16])FUN_1801ebc40(local_458,uVar28);
                    auVar47 = auVar48._0_16_;
                    auVar44 = auVar45._0_16_;
                    if (&local_2c8 != pauVar26) {
                      FUN_18015c010(local_2c8);
                      auVar47 = auVar48._0_16_;
                      auVar44 = auVar45._0_16_;
                      local_2c8 = *pauVar26;
                      uStack_2b8 = *(ulonglong *)pauVar26[1];
                      uStack_2b0 = *(ulonglong *)(pauVar26[1] + 8);
                      *(undefined8 *)pauVar26[1] = 0;
                      *(undefined8 *)(pauVar26[1] + 8) = 0xf;
                      (*pauVar26)[0] = 0;
                    }
                    auVar45 = ZEXT1664(auVar44);
                    auVar48 = ZEXT1664(auVar47);
                    FUN_18015c010(local_458);
                    FUN_18015b930(local_4a0);
                    uVar3 = uStack_2b8 - 2;
                    if (uStack_2b8 < uVar3) {
                      if (uStack_2b0 - uStack_2b8 < 0xfffffffffffffffe) {
                        local_4d8 = (ulonglong *)((ulonglong)local_4d8 & 0xffffffffffffff00);
                        FUN_18013fa60(local_2c8,0xfffffffffffffffe,uVar14);
                      }
                      else {
                        puVar37 = local_2c8;
                        if (0xf < uStack_2b0) {
                          puVar37 = (undefined1 *)local_2c8._0_8_;
                        }
                        puVar37 = puVar37 + uStack_2b8;
                        uStack_2b8 = uVar3;
                        FUN_18063ab10(puVar37,0,0xfffffffffffffffe);
                        puVar37[-2] = 0;
                      }
                    }
                    else {
                      puVar37 = local_2c8;
                      if (0xf < uStack_2b0) {
                        puVar37 = (undefined1 *)local_2c8._0_8_;
                      }
                      uStack_2b8 = uVar3;
                      puVar37[uVar3] = 0;
                    }
                    if (0xf0 < uStack_2b8) {
                      FUN_180113930(local_2a8,"Model resource path is too long",0x1f);
                    }
                    uVar25 = FUN_1801e9e90(uVar25 + 0x20,local_4a0);
                    pauVar26 = (undefined1 (*) [16])FUN_1801ebc40(local_458,uVar25);
                    auVar47 = auVar48._0_16_;
                    auVar44 = auVar45._0_16_;
                    if (&local_2e8 != pauVar26) {
                      FUN_18015c010(local_2e8);
                      auVar47 = auVar48._0_16_;
                      auVar44 = auVar45._0_16_;
                      local_2e8 = *pauVar26;
                      lStack_2d8 = *(longlong *)pauVar26[1];
                      uStack_2d0 = *(ulonglong *)(pauVar26[1] + 8);
                      *(undefined8 *)pauVar26[1] = 0;
                      *(undefined8 *)(pauVar26[1] + 8) = 0xf;
                      (*pauVar26)[0] = 0;
                    }
                    auVar45 = ZEXT1664(auVar44);
                    auVar48 = ZEXT1664(auVar47);
                    FUN_18015c010(local_458);
                    FUN_18015b930(local_4a0);
                    auVar47 = auVar48._0_16_;
                    auVar44 = auVar45._0_16_;
                    pcVar31 = local_2e8;
                    if (0xf < uStack_2d0) {
                      pcVar31 = (char *)local_2e8._0_8_;
                    }
                    pcVar31 = pcVar31 + lStack_2d8;
                    pcVar40 = local_2e8;
                    if (0xf < uStack_2d0) {
                      pcVar40 = (char *)local_2e8._0_8_;
                    }
                    for (; pcVar40 != pcVar31; pcVar40 = pcVar40 + 1) {
                      if (*pcVar40 == '_') {
                        *pcVar40 = ' ';
                      }
                    }
                    uStack_1d0 = 0;
                    local_1c8 = ZEXT816(0);
                    uStack_1b8 = 0;
                    uStack_1b0 = 0;
                    local_1e8 = (ulonglong)auVar45._0_4_;
                    lStack_1e0 = 0;
                    uStack_1d8 = 0;
                    if (DAT_180c7df28 == (undefined8 *)0x0) {
                      local_3f8 = "tier0.dll:g_pMemAlloc";
                      local_3f0 = 0x15;
                      auVar45 = ZEXT1664(auVar44);
                      auVar48 = ZEXT1664(auVar47);
                      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_3f8);
                      auVar47 = auVar48._0_16_;
                      auVar44 = auVar45._0_16_;
                    }
                    auVar45 = ZEXT1664(auVar44);
                    auVar48 = ZEXT1664(auVar47);
                    lStack_1e0 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                           ((longlong *)*DAT_180c7df28,0x30);
                    *(longlong *)lStack_1e0 = lStack_1e0;
                    *(longlong *)(lStack_1e0 + 8) = lStack_1e0;
                    uStack_1d0 = 0;
                    local_1c8 = (undefined1  [16])0x0;
                    uStack_1b8 = 7;
                    uStack_1b0 = 8;
                    local_1e8 = CONCAT44(local_1e8._4_4_,auVar48._0_4_);
                    FUN_1801406e0(&uStack_1d0,0x10,lStack_1e0);
                    puVar24 = local_108;
                    lVar38 = lStack_298;
                    for (puVar22 = local_110; puVar22 != puVar24; puVar22 = puVar22 + 4) {
                      bVar43 = lVar38 == 0;
                      if (!bVar43) goto LAB_1801ed3ce;
                      puVar27 = puVar22;
                      if (0xf < (ulonglong)puVar22[3]) {
                        puVar27 = (undefined8 *)*puVar22;
                      }
                      uVar3 = puVar22[2];
                      if (((uVar3 < 9) ||
                          (*(longlong *)((uVar3 - 9) + (longlong)puVar27) != 0x7072676d6e61762e)) ||
                         (*(char *)((uVar3 - 1) + (longlong)puVar27) != 'h')) {
                        puVar27 = puVar22;
                        if (0xf < (ulonglong)puVar22[3]) {
                          puVar27 = (undefined8 *)*puVar22;
                        }
                        if (((uVar3 < 6) ||
                            (*(int *)((uVar3 - 6) + (longlong)puVar27) != 0x6761762e)) ||
                           (*(short *)((uVar3 - 2) + (longlong)puVar27) != 0x7072)) {
                          local_4d0 = 0;
                          local_4d8 = &local_1e8;
                          pauVar26 = (undefined1 (*) [16])
                                     FUN_1801f1cf0(&local_3d8,local_458,&local_3d8,puVar22);
                          auVar47 = auVar48._0_16_;
                          auVar44 = auVar45._0_16_;
                          if (&local_2a8 != pauVar26) {
                            FUN_18015c010(local_2a8);
                            auVar47 = auVar48._0_16_;
                            auVar44 = auVar45._0_16_;
                            local_2a8 = *pauVar26;
                            lStack_298 = *(longlong *)pauVar26[1];
                            uStack_290 = *(undefined8 *)(pauVar26[1] + 8);
                            *(undefined8 *)pauVar26[1] = 0;
                            *(undefined8 *)(pauVar26[1] + 8) = 0xf;
                            (*pauVar26)[0] = 0;
                          }
                          auVar45 = ZEXT1664(auVar44);
                          auVar48 = ZEXT1664(auVar47);
                          FUN_18015c010(local_458);
                          bVar43 = lStack_298 == 0;
                          if (!bVar43) goto LAB_1801ed3ce;
                        }
                      }
                      lVar38 = 0;
                    }
                    bVar43 = lVar38 == 0;
LAB_1801ed3ce:
                    lVar38 = param_1[8];
                    local_248 = bVar43;
                    if (lVar38 == param_1[9]) {
                      FUN_1801f5630(param_1 + 7,lVar38,local_308);
                    }
                    else {
                      FUN_1801b90e0(lVar38,local_308);
                      param_1[8] = param_1[8] + 0xd8;
                    }
                    FUN_1801868f0(&local_1e8);
                    FUN_18015b930(local_268);
                    FUN_18015b930(local_288);
                    FUN_18015c010(local_2a8);
                    FUN_18015c010(local_2c8);
                    FUN_18015c010(local_2e8);
                    FUN_18015c010(local_308);
                    FUN_18015c010(local_f8);
                    FUN_180111b90(&local_110);
                    FUN_180111b90(&local_128);
                    FUN_18015c010(local_390);
                    param_2 = local_418;
                    uVar42 = local_4a8[0];
                    goto LAB_1801ed4d2;
                  }
                  param_1[0x12] = param_1[0x12] + 1;
                  FUN_18015c010(local_f8);
                  FUN_180111b90(&local_110);
                  FUN_180111b90(&local_128);
                }
                FUN_18015c010(local_390);
                goto LAB_1801ed4d2;
              }
              if (7 < *(ulonglong *)(lVar38 + 0x38)) {
                lVar30 = *(longlong *)(lVar38 + 0x20);
              }
              psVar1 = (short *)(lVar30 + *(longlong *)(lVar38 + 0x30) * 2);
              psVar23 = (short *)FUN_1800a7b00(lVar30,psVar1);
              psVar36 = psVar1;
              if (psVar23 != psVar1) {
                do {
                  psVar15 = psVar1;
                  if ((*psVar23 != 0x5c) && (*psVar23 != 0x2f)) break;
                  psVar23 = psVar23 + 1;
                } while (psVar23 != psVar1);
                do {
                  psVar36 = psVar15;
                  if (psVar23 == psVar36) break;
                  sVar2 = psVar36[-1];
                  if ((sVar2 == 0x5c) || (psVar15 = psVar36 + -1, sVar2 == 0x2f)) break;
                } while( true );
              }
              local_4a0 = (undefined1  [16])0x0;
              local_490 = 0;
              local_488 = 0;
              FUN_180159e60(local_4a0,psVar36,(longlong)psVar1 - (longlong)psVar36 >> 1);
              local_4c8 = uVar42 | 0xe000;
              puVar24 = (undefined8 *)FUN_1801ebc40(local_458,local_4a0);
              puVar22 = puVar24;
              if (0xf < (ulonglong)puVar24[3]) {
                puVar22 = (undefined8 *)*puVar24;
              }
              local_330 = (undefined1  [16])0x0;
              local_320 = 0;
              local_318 = 0;
              FUN_18015ba30(local_330,puVar22,puVar24[2]);
              local_4c8 = uVar42 | 0x1e000;
              pcVar31 = local_330;
              if (0xf < local_318) {
                pcVar31 = (char *)local_330._0_8_;
              }
              pcVar33 = pcVar31 + local_320;
              pcVar40 = (char *)local_330._0_8_;
              if (pcVar31 != pcVar33) {
                do {
                  cVar16 = *pcVar31;
                  if (('@' < cVar16) && (cVar16 < '[')) {
                    *pcVar31 = cVar16 + ' ';
                  }
                  pcVar31 = pcVar31 + 1;
                } while (pcVar31 != pcVar33);
                pcVar40 = (char *)local_330._0_8_;
              }
              uVar3 = local_318;
              lVar30 = local_320;
              local_4a8[0] = local_4c8;
              FUN_18015c010(local_458);
              FUN_18015b930(local_4a0);
              pcVar31 = local_330;
              if (0xf < uVar3) {
                pcVar31 = pcVar40;
              }
              if ((lVar30 == 9) && (iVar18 = memcmp(pcVar31,"materials",9), iVar18 == 0)) {
LAB_1801ecaa8:
                *(undefined1 *)(lVar38 + 100) = 0;
              }
              else {
                pcVar31 = local_330;
                if (0xf < uVar3) {
                  pcVar31 = pcVar40;
                }
                if ((lVar30 == 9) && (iVar18 = memcmp(pcVar31,"particles",9), iVar18 == 0))
                goto LAB_1801ecaa8;
                pcVar31 = local_330;
                if (0xf < uVar3) {
                  pcVar31 = pcVar40;
                }
                if ((lVar30 == 7) && (iVar18 = memcmp(pcVar31,"weapons",7), iVar18 == 0))
                goto LAB_1801ecaa8;
              }
              FUN_18015c010(local_330);
              param_2 = local_418;
              uVar42 = local_4a8[0];
            }
            else {
              FUN_180113930(param_1 + 0x14,"Some character paths could not be read",0x26);
            }
LAB_1801ed4d2:
            iVar18 = FUN_18017dba0(local_4b8);
            lVar38 = local_4b8._0_8_;
          } while (local_4b8._0_8_ != 0);
        }
        local_4d8 = (ulonglong *)((ulonglong)local_4d8 & 0xffffffffffffff00);
        FUN_1801f36c0(param_1[7],param_1[8],(longlong)(param_1[8] - param_1[7]) / 0xd8,local_4c4);
        local_4c0 = 0;
        lVar39 = param_1[7];
        if ((param_1[8] - lVar39) / 0xd8 != 0) {
          lVar38 = 0xd8;
          lVar30 = 0;
          do {
            lVar35 = lVar38;
            uVar49 = local_4c0;
            FUN_1801f2410(param_1 + 10,&local_3f8,lVar39 + lVar30,&local_4c0);
            local_4c0 = uVar49 + 1;
            lVar39 = param_1[7];
            lVar38 = lVar35 + 0xd8;
            lVar30 = lVar35;
          } while (local_4c0 < (ulonglong)((param_1[8] - lVar39) / 0xd8));
        }
        FUN_1800efed0(local_478);
        FUN_1800efed0(local_4b8);
        FUN_1801869d0(&local_1a8);
        FUN_1800e4160(&local_c8);
        FUN_18015b930(local_350);
        FUN_18015c010(local_370);
        FUN_1801868f0(&local_228);
        piVar21 = (int *)*local_410;
        if (piVar21 == (int *)0x0) {
        }
        LOCK();
        iVar18 = *piVar21;
        *piVar21 = *piVar21 + -1;
        UNLOCK();
        if (iVar18 != 1) {
        }
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_478._8_8_ = 0x15;
          local_478._0_8_ = "tier0.dll:g_pMemAlloc";
          DAT_180c7df30 = (undefined8 *)FUN_180451750(local_478);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,piVar21);
      }
      FUN_180113930(param_1 + 0x14,"Linked character root is not supported",0x26);
    }
    FUN_18015b930(local_350);
  }
  FUN_18015c010(local_370);
  FUN_1801868f0(&local_228);
  FUN_18017cdd0(param_3);
}



