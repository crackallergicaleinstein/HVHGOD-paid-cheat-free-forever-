// FUN_180533dd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180533dd0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180533dd0(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  char *pcVar10;
  float fVar11;
  char cVar12;
  int iVar13;
  undefined4 uVar14;
  char *pcVar15;
  ulonglong *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined1 (*pauVar19) [16];
  undefined1 (*pauVar20) [32];
  undefined8 uVar21;
  undefined1 *puVar22;
  int *piVar23;
  undefined1 (*pauVar24) [16];
  int iVar25;
  longlong *plVar26;
  undefined8 *puVar27;
  undefined8 *****pppppuVar28;
  ulonglong *puVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  longlong *plVar33;
  ulonglong uVar34;
  undefined **ppuVar35;
  char **ppcVar36;
  longlong lVar37;
  int iVar38;
  ulonglong uVar39;
  uint uVar40;
  undefined1 auVar41 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar42 [64];
  undefined1 auStack_7d8 [32];
  longlong local_7b8;
  undefined8 *local_7b0;
  longlong local_7a8;
  uint local_798;
  uint local_794;
  int local_790 [2];
  undefined8 local_788;
  ulonglong local_780;
  longlong *local_778;
  undefined1 local_770 [8];
  undefined1 local_768 [16];
  undefined1 auStack_758 [16];
  undefined1 local_748 [16];
  undefined1 auStack_738 [16];
  undefined1 local_728 [16];
  ulonglong local_718;
  ulonglong local_710;
  undefined1 local_708 [16];
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined1 local_6e8 [32];
  undefined1 local_6c8 [16];
  undefined1 local_6b8 [16];
  undefined1 local_6a8 [16];
  undefined1 auStack_698 [16];
  undefined1 local_688 [16];
  undefined1 auStack_678 [16];
  undefined1 local_668 [16];
  undefined1 auStack_658 [16];
  undefined4 local_648;
  uint uStack_644;
  undefined *puStack_640;
  undefined4 uStack_638;
  undefined4 uStack_634;
  longlong lStack_630;
  longlong local_628;
  undefined1 auStack_620 [16];
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 local_608;
  undefined4 uStack_604;
  undefined8 uStack_600;
  undefined1 auStack_5f8 [16];
  undefined1 local_5e8;
  undefined7 uStack_5e7;
  char *local_5d8;
  undefined8 local_5d0;
  char *local_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8 [16];
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined1 local_598 [16];
  undefined1 local_588 [16];
  undefined1 local_578 [16];
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  undefined1 local_548 [16];
  undefined1 local_538 [16];
  undefined1 local_528 [16];
  undefined1 local_518 [16];
  undefined1 local_508 [16];
  undefined1 local_4f8 [16];
  undefined1 local_4e8 [16];
  undefined1 local_4d8 [16];
  undefined1 local_4c8 [16];
  undefined1 local_4b8 [16];
  undefined1 local_4a8 [16];
  undefined1 local_498 [16];
  undefined1 local_488 [16];
  undefined1 local_478 [16];
  undefined1 auStack_468 [16];
  undefined1 local_458 [16];
  undefined1 auStack_448 [16];
  undefined1 local_438 [16];
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  undefined1 local_408 [16];
  undefined1 local_3f8 [16];
  undefined1 auStack_3e8 [16];
  undefined1 local_3d8 [16];
  undefined1 auStack_3c8 [16];
  char *local_3b8;
  undefined4 local_3b0 [2];
  char *local_3a8;
  undefined4 local_3a0;
  char *local_398;
  undefined4 local_390;
  char *local_388;
  undefined4 local_380;
  undefined *local_378;
  undefined4 local_370;
  char *local_368;
  undefined4 local_360;
  char *local_358;
  undefined4 local_350;
  undefined1 *local_348;
  undefined4 local_340;
  undefined *local_338;
  undefined4 local_330;
  undefined *local_328;
  undefined4 local_320;
  char *local_318;
  undefined4 local_310;
  char *local_308;
  undefined4 local_300;
  char *local_2f8;
  undefined4 local_2f0 [2];
  char *local_2e8;
  undefined4 local_2e0;
  char *local_2d8;
  undefined4 local_2d0;
  char *local_2c8;
  undefined4 local_2c0;
  char *local_2b8;
  undefined4 local_2b0;
  undefined *local_2a8;
  undefined4 local_2a0;
  char *local_298;
  undefined4 local_290;
  char *local_288;
  undefined4 local_280;
  undefined *local_278;
  undefined4 local_270;
  char *local_268;
  undefined4 local_260;
  char *local_258;
  undefined4 local_250;
  char *local_248;
  undefined4 local_240;
  char *local_238;
  undefined4 local_230;
  char *local_228 [4];
  undefined1 local_208 [32];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [32];
  undefined1 local_1b8 [32];
  undefined1 local_198 [32];
  undefined1 local_178 [32];
  undefined1 local_158 [32];
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined1 auStack_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  undefined1 local_d8 [16];
  ulonglong uStack_c8;
  ulonglong uStack_c0;
  undefined8 *****local_b8 [3];
  ulonglong local_a0;
  undefined1 local_98 [32];
  undefined *local_78;
  undefined *local_70;
  undefined *local_68 [2];
  undefined1 local_58 [16];
  
  local_58 = in_ZMM7._0_16_;
  local_68[0] = (undefined *)(DAT_1808d5f00 ^ (ulonglong)auStack_7d8);
  uVar40 = 0;
  local_798 = 0;
  local_794 = 0;
  local_778 = param_1;
  FUN_180520a30(1);
  FUN_180493e50();
  DAT_180bda1e8 = 2;
  DAT_180bda1ec = 0;
  DAT_1808e4e38 = 0xffffffff;
  FUN_180493f00("Players");
  FUN_18049b060(param_1,param_2,*(longlong *)(*param_1 + (longlong)(int)param_1[3] * 8) + 0x2e8);
  if (DAT_180c62d18 != DAT_180c62d20) {
    FUN_18015c010(DAT_180c62d20 + -0x20);
    DAT_180c62d20 = DAT_180c62d20 + -0x20;
  }
  lVar37 = DAT_180c62d20;
  DAT_1808e4e38 = 0xffffffff;
  DAT_180bbecdb = 0;
  lVar32 = DAT_180c62d18;
  if (DAT_180c62d18 != DAT_180c62d20) {
    do {
      FUN_18015c010(lVar32);
      lVar32 = lVar32 + 0x20;
    } while (lVar32 != lVar37);
    DAT_180c62d20 = DAT_180c62d18;
  }
  lVar32 = DAT_180bb8ae8;
  fVar11 = DAT_180b0a41c;
  fVar7 = DAT_180b0a41c * 146.0;
  fVar1 = *param_2;
  fVar8 = DAT_180b0a41c * 54.0;
  fVar2 = param_2[1];
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar37 = *(longlong *)(lVar32 + 0x14d0);
  *(float *)(lVar37 + 0x118) = fVar7 + fVar1;
  *(float *)(lVar37 + 0x11c) = fVar8 + fVar2;
  *(undefined1 *)(lVar37 + 0x159) = 1;
  local_788 = (longlong *)CONCAT44(fVar11 * 407.0,fVar11 * 480.0);
  *(undefined1 *)(*(longlong *)(lVar32 + 0x14d0) + 0xce) = 1;
  plVar17 = *(longlong **)(lVar32 + 0x14d0);
  uVar30 = ~*(uint *)(plVar17[0x22] + -4 + (longlong)(int)plVar17[0x21] * 4);
  pcVar15 = "##all_feature_results";
  cVar12 = '#';
  uVar31 = uVar30;
  do {
    pcVar15 = pcVar15 + 1;
    if (((cVar12 == '#') && (*pcVar15 == '#')) && (pcVar15[1] == '#')) {
      pcVar15 = pcVar15 + 2;
      uVar31 = uVar30;
    }
    else {
      uVar31 = crc32(uVar31,cVar12);
    }
    cVar12 = *pcVar15;
  } while (cVar12 != '\0');
  uVar31 = ~uVar31;
  if (*(uint *)(*plVar17 + 0x1534) == uVar31) {
    FUN_1804cf810(uVar31,0xb,"##all_feature_results");
  }
  local_7b8 = CONCAT44(local_7b8._4_4_,0x80);
  FUN_1804bb960("##all_feature_results",uVar31,&local_788,0);
  iVar38 = 0;
  local_790[0] = 0;
  local_f8 = (undefined1  [16])0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_e8._8_8_ = 0x15;
    local_e8._0_8_ = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(local_e8);
  }
  lVar37 = (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  *(longlong *)lVar37 = lVar37;
  *(longlong *)(lVar37 + 8) = lVar37;
  *(longlong *)(lVar37 + 0x10) = lVar37;
  *(undefined2 *)(lVar37 + 0x18) = 0x101;
  local_f8._0_8_ = lVar37;
  puVar16 = (ulonglong *)FUN_1800aa200();
  uVar39 = *puVar16;
  uVar34 = puVar16[1];
  local_780 = uVar34;
  if (uVar39 != uVar34) {
    do {
      if (((((*(longlong *)(uVar39 + 0x48) != 0) && (*(char *)(uVar39 + 4) != '\t')) &&
           ((puVar3 = *(undefined4 **)(uVar39 + 8), puVar3 < &DAT_180cadce0 ||
            ((undefined4 *)0x180cb2e27 < puVar3)))) &&
          ((puVar3 < &DAT_180cc9240 || ((undefined4 *)((longlong)&DAT_180cc9258 + 3) < puVar3)))) &&
         ((puVar3 != &DAT_180cad2e4 &&
          (((puVar3 != &DAT_180cad2e0 && (cVar12 = FUN_18050fed0(uVar39), cVar12 != '\0')) &&
           ((piVar23 = *(int **)(uVar39 + 8), piVar23 < &DAT_180cb3590 ||
            (((int *)0x180cc766f < piVar23 || ((int *)0x180cb61ff < piVar23)))))))))) {
        if ((piVar23 < &DAT_180cbf2c0) || ((int *)0x180cc766f < piVar23)) {
LAB_1805341e7:
          if ((&DAT_180b0b540 <= *(undefined1 **)(uVar39 + 8)) &&
             (*(undefined1 **)(uVar39 + 8) < &DAT_180b0be78)) {
            plVar17 = (longlong *)(uVar39 + 0x18);
            if (0xf < *(ulonglong *)(uVar39 + 0x30)) {
              plVar17 = (longlong *)*plVar17;
            }
            if (((*(longlong *)(uVar39 + 0x28) == 10) && (*plVar17 == 0x6f7463656a617274)) &&
               ((short)plVar17[1] == 0x7972)) {
              lVar37 = *(longlong *)(uVar39 + 0x48);
              puVar18 = (undefined8 *)(uVar39 + 0x38);
              uVar34 = *(ulonglong *)(uVar39 + 0x50);
              puVar27 = puVar18;
              if (0xf < uVar34) {
                puVar27 = (undefined8 *)*puVar18;
              }
              if ((lVar37 == 0x15) &&
                 (iVar13 = memcmp(puVar27,"projectile trajectory",0x15), iVar13 == 0)) {
                uVar34 = local_780;
              }
              else {
                if (0xf < uVar34) {
                  puVar18 = (undefined8 *)*puVar18;
                }
                uVar34 = local_780;
                if ((lVar37 != 0x13) ||
                   (iVar13 = memcmp(puVar18,"configuration scope",0x13), uVar34 = local_780,
                   iVar13 != 0)) goto LAB_180535141;
              }
            }
          }
          puVar18 = (undefined8 *)FUN_18050e740(local_1e8,uVar39);
          local_438 = (undefined1  [16])0x0;
          local_428 = (undefined1  [16])0x0;
          FUN_18015ba30(local_438,*puVar18,puVar18[1]);
          if (*(longlong *)(uVar39 + 0x28) == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          local_7a8 = 1;
          local_7b0 = (undefined8 *)&DAT_1806bcfc0;
          local_7b8 = *(longlong *)(uVar39 + 0x28);
          FUN_18015a9c0(local_228);
          plVar17 = (longlong *)(uVar39 + 0x38);
          if (0xf < *(ulonglong *)(uVar39 + 0x50)) {
            plVar17 = (longlong *)*plVar17;
          }
          pauVar19 = (undefined1 (*) [16])
                     FUN_18015b2a0(local_228,plVar17,*(undefined8 *)(uVar39 + 0x48));
          local_458 = *pauVar19;
          auStack_448 = pauVar19[1];
          *(undefined8 *)(pauVar19[1] + 8) = 0xf;
          (*pauVar19)[0] = 0;
          *(undefined8 *)pauVar19[1] = 0;
          pauVar20 = (undefined1 (*) [32])FUN_18015b2a0(local_458,&DAT_1806bcfc0,1);
          local_6e8 = *pauVar20;
          (*pauVar20)[0] = 0;
          *(undefined8 *)(*pauVar20 + 0x10) = 0;
          *(undefined8 *)(*pauVar20 + 0x18) = 0xf;
          FUN_18015a6e0(local_98);
          uVar40 = uVar40 | 0x3c0000;
          local_798 = uVar40;
          local_794 = uVar40;
          FUN_18015c010(local_6e8);
          FUN_18015c010(local_458);
          FUN_18015c010(local_228);
          FUN_18015c010(local_438);
          puVar27 = *(undefined8 **)(uVar39 + 0x60);
          for (puVar18 = *(undefined8 **)(uVar39 + 0x58); puVar18 != puVar27; puVar18 = puVar18 + 4)
          {
            if (puVar18[2] == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_18015bb70();
            }
            local_7b0 = puVar18;
            if (0xf < (ulonglong)puVar18[3]) {
              local_7b0 = (undefined8 *)*puVar18;
            }
            local_7b8 = 1;
            local_7a8 = puVar18[2];
            FUN_18015a9c0(local_748);
            uVar40 = uVar40 | 0x8000;
            puVar22 = local_748;
            if (0xf < (ulonglong)auStack_738._8_8_) {
              puVar22 = (undefined1 *)local_748._0_8_;
            }
            local_798 = uVar40;
            local_794 = uVar40;
            FUN_18015b2a0(local_98,puVar22,auStack_738._0_8_);
            FUN_18015c010(local_748);
          }
          uVar21 = FUN_18015b360(local_6e8,local_98);
          cVar12 = FUN_180533840(uVar21);
          if (cVar12 == '\0') {
            FUN_18015c010(local_98);
          }
          else {
            local_e8 = (undefined1  [16])0x0;
            FUN_18050e740(local_e8,uVar39);
            uVar21 = FUN_18015b360(local_158,uVar39 + 0x18);
            FUN_18050cb60(local_1d8,uVar21);
            if (local_e8._8_8_ == 0) {
              uVar21 = FUN_18015b360(local_208,uVar39 + 0x38);
              puVar22 = (undefined1 *)FUN_18050cb60(local_178,uVar21);
              uVar31 = uVar40 | 1;
            }
            else {
              local_418 = (undefined1  [16])0x0;
              local_408 = (undefined1  [16])0x0;
              FUN_18015ba30(local_418,local_e8._0_8_);
              puVar22 = local_418;
              uVar31 = uVar40 | 2;
            }
            local_794 = uVar31;
            pauVar20 = (undefined1 (*) [32])FUN_18015b2a0(puVar22,&DAT_1807c6e34,3);
            local_6e8 = *pauVar20;
            (*pauVar20)[0] = 0;
            *(undefined8 *)(*pauVar20 + 0x10) = 0;
            *(undefined8 *)(*pauVar20 + 0x18) = 0xf;
            local_794 = uVar31 | 0x20000;
            FUN_18015a6e0(local_b8);
            uVar40 = uVar31 | 0x30000;
            local_798 = uVar40;
            local_794 = uVar40;
            FUN_18015c010(local_6e8);
            if ((uVar31 & 2) != 0) {
              uVar40 = uVar31 & 0xfffffffd | 0x30000;
              local_798 = uVar40;
              local_794 = uVar40;
              FUN_18015c010(local_418);
            }
            if ((uVar40 & 1) != 0) {
              uVar40 = uVar40 & 0xfffffffe;
              local_798 = uVar40;
              local_794 = uVar40;
              FUN_18015c010(local_178);
            }
            FUN_18015c010(local_1d8);
            lVar37 = FUN_1801a6460(local_f8,local_728,local_b8);
            if (*(char *)(lVar37 + 8) == '\0') {
              FUN_18015c010(local_b8);
              FUN_18015c010(local_98);
            }
            else {
              FUN_1804c28a0(*(undefined8 *)(uVar39 + 8));
              lVar37 = uVar39 + 0x18;
              if (uVar39 != 0x1808e6638) {
                if (0xf < *(ulonglong *)(uVar39 + 0x30)) {
                  lVar37 = *(longlong *)(uVar39 + 0x18);
                }
                FUN_180113930(&DAT_1808e6650,lVar37,*(undefined8 *)(uVar39 + 0x28));
              }
              pppppuVar28 = local_b8;
              if (0xf < local_a0) {
                pppppuVar28 = local_b8[0];
              }
              cVar12 = FUN_18048b0e0(pppppuVar28,&DAT_180830b54,1);
              if (cVar12 != '\0') {
                DAT_180c62fd8 = '\0';
                DAT_180c62fe8 = uVar39;
                pauVar19 = (undefined1 (*) [16])FUN_18015b360(local_1b8,uVar39 + 0x18);
                if (*(ulonglong *)(pauVar19[1] + 8) < 0x10) {
                  pauVar24 = pauVar19;
                }
                else {
                  pauVar24 = *(undefined1 (**) [16])*pauVar19;
                }
                lVar37 = *(longlong *)pauVar19[1];
                puVar22 = *pauVar24;
                for (; pauVar24 != (undefined1 (*) [16])(puVar22 + lVar37);
                    pauVar24 = (undefined1 (*) [16])(*pauVar24 + 1)) {
                  iVar13 = tolower((uint)(byte)(*pauVar24)[0]);
                  (*pauVar24)[0] = (char)iVar13;
                  if ((char)iVar13 == '_') {
                    (*pauVar24)[0] = 0x20;
                  }
                }
                local_118 = *pauVar19;
                auStack_108 = pauVar19[1];
                (*pauVar19)[0] = 0;
                *(undefined8 *)pauVar19[1] = 0;
                *(undefined8 *)(pauVar19[1] + 8) = 0xf;
                FUN_18015c010(pauVar19);
                pauVar19 = (undefined1 (*) [16])FUN_18015b360(local_198,uVar39 + 0x38);
                if (*(ulonglong *)(pauVar19[1] + 8) < 0x10) {
                  pauVar24 = pauVar19;
                }
                else {
                  pauVar24 = *(undefined1 (**) [16])*pauVar19;
                }
                lVar37 = *(longlong *)pauVar19[1];
                puVar22 = *pauVar24;
                for (; pauVar24 != (undefined1 (*) [16])(puVar22 + lVar37);
                    pauVar24 = (undefined1 (*) [16])(*pauVar24 + 1)) {
                  iVar13 = tolower((uint)(byte)(*pauVar24)[0]);
                  (*pauVar24)[0] = (char)iVar13;
                  if ((char)iVar13 == '_') {
                    (*pauVar24)[0] = 0x20;
                  }
                }
                local_768 = *pauVar19;
                auStack_758 = pauVar19[1];
                (*pauVar19)[0] = 0;
                *(undefined8 *)pauVar19[1] = 0;
                *(undefined8 *)(pauVar19[1] + 8) = 0xf;
                FUN_18015c010(pauVar19);
                piVar23 = (int *)FUN_1805142c0(local_770,local_118,local_768);
                iVar13 = *piVar23;
                FUN_18015c010(local_768);
                if (((undefined4 *)0x180c8fdb7 < *(undefined4 **)(uVar39 + 8)) &&
                   (*(undefined4 **)(uVar39 + 8) < &DAT_180cad2e0)) {
                  DAT_180cad2e0 = 0;
                  local_5d8 = "legitbot";
                  local_5d0 = 8;
                  FUN_180552350(&DAT_180c8fdb8,&local_5d8,local_118);
                  iVar13 = 0;
                }
                if (((undefined4 *)((longlong)&DAT_180c7e1ec + 3) < *(undefined4 **)(uVar39 + 8)) &&
                   (*(undefined4 **)(uVar39 + 8) < &DAT_180c8fdb8)) {
                  DAT_180cad2e0 = 1;
                  local_5c8 = "ragebot";
                  local_5c0 = 7;
                  FUN_1805527a0(&DAT_180c7e1f0,&local_5c8,local_118);
                  iVar13 = 0;
                }
                if (((undefined1 *)((longlong)&DAT_180cad2e4 + 3) < *(undefined1 **)(uVar39 + 8)) &&
                   (*(undefined1 **)(uVar39 + 8) < &DAT_180cadbf0)) {
                  DAT_180cad2e0 = 1;
                  iVar13 = 0;
                }
                if (((undefined *)0x180cb61ff < *(undefined **)(uVar39 + 8)) &&
                   (*(undefined **)(uVar39 + 8) < &DAT_180cbda50)) {
                  DAT_180c62f68 = 0;
                  local_768 = (undefined1  [16])0x0;
                  auStack_758 = (undefined1  [16])0x0;
                  FUN_18015ba30(local_768,"esp items v2",0xc);
                  FUN_180552c00(&DAT_180cb6200,local_768,local_118);
                  FUN_18015c010(local_768);
                  iVar13 = 0xd;
                }
                if (((int *)0x180cbda4f < *(int **)(uVar39 + 8)) &&
                   (*(int **)(uVar39 + 8) < &DAT_180cbf2c0)) {
                  DAT_180c62f68 = 1;
                  local_768 = (undefined1  [16])0x0;
                  auStack_758 = (undefined1  [16])0x0;
                  FUN_18015ba30(local_768,"glow items v2",0xd);
                  FUN_180552c00(&DAT_180cbda50,local_768,local_118);
                  FUN_18015c010(local_768);
                  iVar13 = 0xd;
                }
                if (((undefined *)0x180cbf2bf < *(undefined **)(uVar39 + 8)) &&
                   (*(undefined **)(uVar39 + 8) < &DAT_180cc7670)) {
                  DAT_180c62f68 = 2;
                  local_768 = (undefined1  [16])0x0;
                  auStack_758 = (undefined1  [16])0x0;
                  FUN_18015ba30(local_768,"chams items v2",0xe);
                  FUN_180552c00(&DAT_180cbf2c0,local_768,local_118);
                  FUN_18015c010(local_768);
                  iVar13 = 0xd;
                }
                puVar22 = *(undefined1 **)(uVar39 + 8);
                if (((&DAT_180cc7670 <= puVar22) && (puVar22 <= &DAT_180cc7f77)) ||
                   (((undefined1 *)0x180b0b53f < puVar22 && (puVar22 < &DAT_180b0be78)))) {
                  iVar13 = 0xc;
                  uVar31 = 0;
                  do {
                    if (uVar31 < 5) {
                      if ((*(undefined **)(uVar39 + 8) < &DAT_180cc7f20 + (ulonglong)uVar31 * 0x10)
                         || ((undefined *)((ulonglong)uVar31 * 0x10 + 0x180cc7f30) <=
                             *(undefined **)(uVar39 + 8))) goto LAB_180534aed;
LAB_180534b48:
                      DAT_180c62f6c = uVar31;
                    }
                    else {
LAB_180534aed:
                      switch(uVar31) {
                      default:
                        puVar22 = &DAT_180cc7cb0;
                        break;
                      case 1:
                        puVar22 = &DAT_180cc7d18;
                        break;
                      case 2:
                        puVar22 = &DAT_180cc7d80;
                        break;
                      case 3:
                        puVar22 = &DAT_180cc7de8;
                        break;
                      case 4:
                        puVar22 = &DAT_180cc7e50;
                        break;
                      case 5:
                        puVar22 = &DAT_180cc7eb8;
                      }
                      puVar5 = *(undefined1 **)(uVar39 + 8);
                      if (puVar5 == puVar22) goto LAB_180534b48;
                      if (uVar31 == 5) {
                        if (((undefined1 *)0x180cc766f < puVar5) && (puVar5 < &DAT_180cc76f0))
                        goto LAB_180534b48;
                        break;
                      }
                    }
                    uVar31 = uVar31 + 1;
                  } while ((int)uVar31 < 6);
                  if (((undefined1 *)0x180cc76ef < *(undefined1 **)(uVar39 + 8)) &&
                     (*(undefined1 **)(uVar39 + 8) < &DAT_180cc78b8)) {
                    DAT_180c6272c = 0;
                  }
                  if (((undefined1 *)0x180cc78b7 < *(undefined1 **)(uVar39 + 8)) &&
                     (*(undefined1 **)(uVar39 + 8) < &DAT_180cc7a80)) {
                    DAT_180c6272c = 1;
                  }
                  if (((undefined1 *)0x180cc7a7f < *(undefined1 **)(uVar39 + 8)) &&
                     (*(undefined1 **)(uVar39 + 8) < &DAT_180cc7c48)) {
                    DAT_180c6272c = 2;
                  }
                  if (((undefined4 *)0x180b0bbcf < *(undefined4 **)(uVar39 + 8)) &&
                     (*(undefined4 **)(uVar39 + 8) < &DAT_180b0bd20)) {
                    DAT_180b0bd20 = 0;
                  }
                  if (((undefined *)0x180b0b53f < *(undefined **)(uVar39 + 8)) &&
                     (*(undefined **)(uVar39 + 8) < &DAT_180b0b690)) {
                    DAT_180b0bd20 = 1;
                    DAT_180c5a50c = 0;
                  }
                  if (((undefined *)0x180b0b68f < *(undefined **)(uVar39 + 8)) &&
                     (*(undefined **)(uVar39 + 8) < &DAT_180b0b7e0)) {
                    DAT_180b0bd20 = 1;
                    DAT_180c5a50c = 1;
                  }
                  if (((undefined *)0x180b0b7df < *(undefined **)(uVar39 + 8)) &&
                     (*(undefined **)(uVar39 + 8) < &DAT_180b0b930)) {
                    DAT_180b0bd20 = 1;
                    DAT_180c5a50c = 2;
                  }
                  if (((undefined *)0x180b0b92f < *(undefined **)(uVar39 + 8)) &&
                     (*(undefined **)(uVar39 + 8) < &DAT_180b0ba80)) {
                    DAT_180b0bd20 = 1;
                    DAT_180c5a50c = 3;
                  }
                  param_1 = local_778;
                  if (((undefined1 *)0x180b0ba7f < *(undefined1 **)(uVar39 + 8)) &&
                     (*(undefined1 **)(uVar39 + 8) < &DAT_180b0bbd0)) {
                    DAT_180b0bd20 = 1;
                    DAT_180c5a50c = 4;
                  }
                }
                if (((undefined *)0x180b0d33b < *(undefined **)(uVar39 + 8)) &&
                   (*(undefined **)(uVar39 + 8) < &DAT_180b0d348)) {
                  DAT_180b0d338 = 0;
                }
                if (((undefined *)0x180b0d347 < *(undefined **)(uVar39 + 8)) &&
                   (*(undefined **)(uVar39 + 8) < &DAT_180b0d354)) {
                  DAT_180b0d338 = 1;
                }
                if (((undefined *)0x180b0d353 < *(undefined **)(uVar39 + 8)) &&
                   (*(undefined **)(uVar39 + 8) < &DAT_180b0d360)) {
                  DAT_180b0d338 = 2;
                }
                if (((undefined *)0x180b0d35f < *(undefined **)(uVar39 + 8)) &&
                   (*(undefined **)(uVar39 + 8) < &DAT_180b0d36c)) {
                  DAT_180b0d338 = 3;
                }
                if (((undefined *)((longlong)&DAT_180b0c408 + 7) < *(undefined **)(uVar39 + 8)) &&
                   (*(undefined **)(uVar39 + 8) < &DAT_180b0c448)) {
                  DAT_180b0c2fc = 0;
                }
                if (((undefined *)0x180b0c447 < *(undefined **)(uVar39 + 8)) &&
                   (*(undefined **)(uVar39 + 8) < &DAT_180b0c480)) {
                  DAT_180b0c2fc = 1;
                }
                if (((undefined *)0x180b0c47f < *(undefined **)(uVar39 + 8)) &&
                   (*(undefined **)(uVar39 + 8) < &DAT_180b0c4b8)) {
                  DAT_180b0c2fc = 2;
                }
                if (((undefined4 *)0x180b0c4b7 < *(undefined4 **)(uVar39 + 8)) &&
                   (*(undefined4 **)(uVar39 + 8) < &DAT_180b0c4f0)) {
                  DAT_180b0c2fc = 3;
                }
                if (((undefined4 *)0x180b0c4ef < *(undefined4 **)(uVar39 + 8)) &&
                   (*(undefined4 **)(uVar39 + 8) < &DAT_180b0c528)) {
                  DAT_180b0c2fc = 4;
                }
                if (((undefined4 *)0x180b0c527 < *(undefined4 **)(uVar39 + 8)) &&
                   (*(undefined4 **)(uVar39 + 8) < &DAT_180b0c560)) {
                  DAT_180b0c2fc = 5;
                }
                if (iVar13 == 3) {
                  DAT_180c62728 = FUN_18050a090(uVar39,3);
                }
                else if (iVar13 == 9) {
                  DAT_180c62938 = FUN_18050a090(uVar39,9);
                }
                else if (iVar13 == 7) {
                  DAT_180c6287c = FUN_180542ad0(uVar39);
                }
                else if ((iVar13 == 0xd) && (DAT_180c62f68 == 2)) {
                  FUN_180111410(&DAT_180cbf2c0);
                  if (DAT_180cbf2c0 == 1) {
                    local_78 = &DAT_180cbf5c0 + (longlong)DAT_180cbf2c4 * 0x288;
                    local_70 = &DAT_180cbf6c8 + (longlong)DAT_180cbf2c4 * 0x288;
                  }
                  else if (DAT_180cbf2c0 == 2) {
                    local_78 = &DAT_180cc0778 + (longlong)DAT_180cbf2c8 * 0x288;
                    local_70 = &DAT_180cc0880 + (longlong)DAT_180cbf2c8 * 0x288;
                  }
                  else {
                    local_78 = &DAT_180cbf338;
                    local_70 = &DAT_180cbf440;
                  }
                  ppuVar35 = &local_78;
                  do {
                    puVar6 = *ppuVar35;
                    if ((puVar6 + 0x80 <= *(undefined **)(uVar39 + 8)) &&
                       (*(undefined **)(uVar39 + 8) < puVar6 + 0x8c)) {
                      puVar6[0x78] = 0;
                    }
                    if ((puVar6 + 0x8c <= *(undefined **)(uVar39 + 8)) &&
                       (*(undefined **)(uVar39 + 8) < puVar6 + 0x98)) {
                      puVar6[0x78] = 1;
                    }
                    if ((puVar6 + 0x98 <= *(undefined **)(uVar39 + 8)) &&
                       (*(undefined **)(uVar39 + 8) < puVar6 + 0xa4)) {
                      puVar6[0x78] = 2;
                    }
                    if ((puVar6 + 0xa4 <= *(undefined **)(uVar39 + 8)) &&
                       (*(undefined **)(uVar39 + 8) < puVar6 + 0xb0)) {
                      puVar6[0x78] = 3;
                    }
                    if ((puVar6 + 0xb0 <= *(undefined **)(uVar39 + 8)) &&
                       (*(undefined **)(uVar39 + 8) < puVar6 + 0xbc)) {
                      puVar6[0x78] = 4;
                    }
                    if ((puVar6 + 0xbc <= *(undefined **)(uVar39 + 8)) &&
                       (*(undefined **)(uVar39 + 8) < puVar6 + 200)) {
                      puVar6[0x78] = 5;
                    }
                    if ((puVar6 + 200 <= *(undefined **)(uVar39 + 8)) &&
                       (*(undefined **)(uVar39 + 8) < puVar6 + 0xd4)) {
                      puVar6[0x78] = 6;
                    }
                    if ((puVar6 + 0xd4 <= *(undefined **)(uVar39 + 8)) &&
                       (*(undefined **)(uVar39 + 8) < puVar6 + 0xe0)) {
                      puVar6[0x78] = 7;
                    }
                    if ((puVar6 + 0xe0 <= *(undefined **)(uVar39 + 8)) &&
                       (*(undefined **)(uVar39 + 8) < puVar6 + 0xec)) {
                      puVar6[0x78] = 8;
                    }
                    if ((puVar6 + 0xec <= *(undefined **)(uVar39 + 8)) &&
                       (*(undefined **)(uVar39 + 8) < puVar6 + 0xf8)) {
                      puVar6[0x78] = 9;
                    }
                    if ((puVar6 + 0xf8 <= *(undefined **)(uVar39 + 8)) &&
                       (*(undefined **)(uVar39 + 8) < puVar6 + 0x104)) {
                      puVar6[0x78] = 10;
                    }
                    ppuVar35 = ppuVar35 + 1;
                  } while (ppuVar35 != local_68);
                }
                puVar22 = *(undefined1 **)(uVar39 + 8);
                if ((((puVar22 < &DAT_180b0d2d0) || ((undefined1 *)0x180b0d4c7 < puVar22)) &&
                    ((puVar22 < &DAT_180b0d7e0 ||
                     ((undefined1 *)((longlong)&DAT_180b0d994 + 3) < puVar22)))) &&
                   (puVar22 != &DAT_180b0d998)) {
                  if (iVar13 == 1) {
                    iVar13 = 0;
                  }
                  *(int *)((longlong)param_1 + 0x24) = iVar13;
                  *(undefined4 *)(param_1 + 5) = 0;
                }
                DAT_180c62ec0 = '\0';
                DAT_180bbef4d = 1;
                FUN_18015c010(local_118);
              }
              iVar13 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
              if (iVar13 < 2) {
                FUN_1804c5a40("Calling PopID() too many times!");
              }
              else {
                *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar13 + -1;
              }
              iVar38 = iVar38 + 1;
              local_790[0] = iVar38;
              FUN_18015c010(local_b8);
              FUN_18015c010(local_98);
              uVar34 = local_780;
              if (0x9f < iVar38) break;
            }
          }
        }
        else {
          plVar17 = (longlong *)(uVar39 + 0x38);
          uVar4 = *(ulonglong *)(uVar39 + 0x50);
          plVar26 = plVar17;
          if (0xf < uVar4) {
            plVar26 = (longlong *)*plVar17;
          }
          if ((((*(longlong *)(uVar39 + 0x48) != 0xd) || (*plVar26 != 0x207972616d697270)) ||
              ((int)plVar26[1] != 0x6579616c)) || (*(char *)((longlong)plVar26 + 0xc) != 'r')) {
            if (0xf < uVar4) {
              plVar17 = (longlong *)*plVar17;
            }
            if (((*(longlong *)(uVar39 + 0x48) != 0x18) || (*plVar17 != 0x207972616d697270)) ||
               ((plVar17[1] != 0x697620726579616c || (plVar17[2] != 0x7974696c69626973)))) {
              plVar17 = (longlong *)(uVar39 + 0x38);
              if (0xf < uVar4) {
                plVar17 = *(longlong **)(uVar39 + 0x38);
              }
              if (((*(ulonglong *)(uVar39 + 0x48) < 9) || (*plVar17 != 0x7261646e6f636573)) ||
                 ((char)plVar17[1] != 'y')) goto LAB_1805341e7;
            }
          }
        }
      }
LAB_180535141:
      uVar39 = uVar39 + 0x70;
    } while (uVar39 != uVar34);
  }
  local_788 = DAT_180c62d38;
  if (DAT_180c62d30 != DAT_180c62d38) {
    plVar17 = DAT_180c62d38;
    plVar26 = DAT_180c62d30 + 1;
    iVar13 = 0;
    do {
      local_780 = CONCAT44(local_780._4_4_,iVar13);
      if (*plVar26 == 0) {
LAB_18053575c:
        iVar38 = local_790[0];
      }
      else {
        iVar38 = (int)plVar26[-1];
        if ((iVar38 < 0) || ((int)((DAT_180c62d50 - DAT_180c62d48) / 0x28) <= iVar38)) {
          local_598 = (undefined1  [16])0x0;
          local_588 = (undefined1  [16])0x0;
          FUN_18015ba30(local_598,"Players",7);
          pauVar19 = &local_598;
          local_794 = uVar40 | 8;
          pauVar24 = (undefined1 (*) [16])local_598._0_8_;
        }
        else {
          local_6c8 = (undefined1  [16])0x0;
          local_6b8 = (undefined1  [16])0x0;
          pauVar19 = (undefined1 (*) [16])(DAT_180c62d48 + (longlong)iVar38 * 0x28);
          uVar39 = *(ulonglong *)pauVar19[1];
          if (0xf < *(ulonglong *)(pauVar19[1] + 8)) {
            pauVar19 = *(undefined1 (**) [16])*pauVar19;
          }
          if (0x7fffffffffffffff < uVar39) {
                    /* WARNING: Subroutine does not return */
            FUN_18015bb70();
          }
          if (uVar39 < 0x10) {
            local_6b8._8_8_ = 0xf;
            local_6b8._0_8_ = uVar39;
            pauVar24 = *(undefined1 (**) [16])*pauVar19;
            local_6c8 = *pauVar19;
          }
          else {
            uVar34 = uVar39 | 0xf;
            if (uVar34 < 0x8000000000000000) {
              if (uVar34 < 0x16) {
                uVar34 = 0x16;
              }
            }
            else {
              uVar34 = 0x7fffffffffffffff;
            }
            pauVar24 = (undefined1 (*) [16])FUN_18015bca0(uVar34 + 1);
            local_6c8._0_8_ = pauVar24;
            local_6b8._8_8_ = uVar34;
            local_6b8._0_8_ = uVar39;
            FUN_18063aed0(pauVar24,pauVar19,uVar39 + 1);
          }
          pauVar19 = &local_6c8;
          local_794 = local_798 | 4;
        }
        local_138 = (undefined1  [16])0x0;
        local_128 = (undefined1  [16])0x0;
        uVar39 = *(ulonglong *)pauVar19[1];
        if (0xf < *(ulonglong *)(pauVar19[1] + 8)) {
          pauVar19 = pauVar24;
        }
        local_798 = local_794;
        if (0x7fffffffffffffff < uVar39) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (uVar39 < 0x10) {
          local_128._8_8_ = 0xf;
          local_128._0_8_ = uVar39;
          local_138 = *pauVar19;
        }
        else {
          uVar34 = uVar39 | 0xf;
          if (uVar34 < 0x8000000000000000) {
            if (uVar34 < 0x16) {
              uVar34 = 0x16;
            }
          }
          else {
            uVar34 = 0x7fffffffffffffff;
          }
          uVar21 = FUN_18015bca0(uVar34 + 1);
          local_138._0_8_ = uVar21;
          local_128._8_8_ = uVar34;
          local_128._0_8_ = uVar39;
          FUN_18063aed0(uVar21,pauVar19,uVar39 + 1);
        }
        uVar40 = local_798;
        if ((local_798 & 8) != 0) {
          uVar40 = local_798 & 0xfffffff7;
          FUN_18015c010(local_598);
        }
        if ((uVar40 & 4) != 0) {
          uVar40 = uVar40 & 0xfffffffb;
          FUN_18015c010(local_6c8);
        }
        pcVar15 = local_138;
        if (0xf < (ulonglong)local_128._8_8_) {
          pcVar15 = (char *)local_138._0_8_;
        }
        pcVar15 = pcVar15 + local_128._0_8_;
        pcVar10 = local_138;
        if (0xf < (ulonglong)local_128._8_8_) {
          pcVar10 = (char *)local_138._0_8_;
        }
        for (; pcVar10 != pcVar15; pcVar10 = pcVar10 + 1) {
          if (*pcVar10 == '\x1f') {
            *pcVar10 = '/';
          }
        }
        lVar37 = *plVar26;
        local_518 = (undefined1  [16])0x0;
        local_508 = (undefined1  [16])0x0;
        FUN_18015ba30(local_518,"Players ",8);
        puVar22 = local_138;
        if (0xf < (ulonglong)local_128._8_8_) {
          puVar22 = (undefined1 *)local_138._0_8_;
        }
        pauVar19 = (undefined1 (*) [16])FUN_18015b2a0(local_518,puVar22,local_128._0_8_);
        local_3d8 = *pauVar19;
        auStack_3c8 = pauVar19[1];
        *(undefined8 *)(pauVar19[1] + 8) = 0xf;
        (*pauVar19)[0] = 0;
        *(undefined8 *)pauVar19[1] = 0;
        pauVar19 = (undefined1 (*) [16])FUN_18015b2a0(local_3d8,&DAT_1806bcfc0,1);
        local_3f8 = *pauVar19;
        auStack_3e8 = pauVar19[1];
        *(undefined8 *)(pauVar19[1] + 8) = 0xf;
        (*pauVar19)[0] = 0;
        *(undefined8 *)pauVar19[1] = 0;
        local_794 = uVar40 | 0x6000;
        lVar32 = -1;
        do {
          lVar32 = lVar32 + 1;
        } while (*(char *)(lVar37 + lVar32) != '\0');
        pauVar19 = (undefined1 (*) [16])FUN_18015b2a0(local_3f8,lVar37);
        local_d8 = *pauVar19;
        uStack_c8 = *(ulonglong *)pauVar19[1];
        uStack_c0 = *(ulonglong *)(pauVar19[1] + 8);
        (*pauVar19)[0] = 0;
        *(undefined8 *)pauVar19[1] = 0;
        *(undefined8 *)(pauVar19[1] + 8) = 0xf;
        uVar40 = uVar40 | 0x7000;
        local_798 = uVar40;
        local_794 = uVar40;
        FUN_18015c010(local_3f8);
        FUN_18015c010(local_3d8);
        FUN_18015c010(local_518);
        plVar33 = (longlong *)plVar26[9];
        plVar17 = plVar33 + plVar26[10];
        iVar38 = iVar13;
        if (plVar33 != plVar17) {
          do {
            if (*plVar33 != 0) {
              local_578 = (undefined1  [16])0x0;
              local_568 = (undefined1  [16])0x0;
              lVar37 = -1;
              do {
                lVar37 = lVar37 + 1;
              } while (*(char *)(*plVar33 + lVar37) != '\0');
              FUN_18015ba30(local_578);
              pauVar20 = (undefined1 (*) [32])FUN_180141490(local_578,0,&DAT_1806bcfc0,1);
              local_6e8 = *pauVar20;
              (*pauVar20)[0] = 0;
              *(undefined8 *)(*pauVar20 + 0x10) = 0;
              *(undefined8 *)(*pauVar20 + 0x18) = 0xf;
              uVar40 = uVar40 | 0x200;
              puVar22 = local_6e8;
              if (0xf < local_6e8._24_8_) {
                puVar22 = local_6e8._0_8_;
              }
              local_794 = uVar40;
              FUN_18015b2a0(local_d8,puVar22,local_6e8._16_8_);
              FUN_18015c010(local_6e8);
              FUN_18015c010(local_578);
            }
            plVar33 = plVar33 + 1;
          } while (plVar33 != plVar17);
          iVar38 = (int)local_780;
          local_798 = uVar40;
        }
        uVar39 = uStack_c8;
        local_728 = (undefined1  [16])0x0;
        local_718 = 0;
        local_710 = 0;
        pauVar19 = &local_d8;
        if (0xf < uStack_c0) {
          pauVar19 = (undefined1 (*) [16])local_d8._0_8_;
        }
        if (0x7fffffffffffffff < uStack_c8) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (uStack_c8 < 0x10) {
          local_718 = uStack_c8;
          local_710 = 0xf;
          local_728 = *pauVar19;
        }
        else {
          uVar34 = uStack_c8 | 0xf;
          if (uVar34 < 0x8000000000000000) {
            if (uVar34 < 0x16) {
              uVar34 = 0x16;
            }
          }
          else {
            uVar34 = 0x7fffffffffffffff;
          }
          uVar21 = FUN_18015bca0(uVar34 + 1);
          local_728._0_8_ = uVar21;
          local_718 = uVar39;
          local_710 = uVar34;
          FUN_18063aed0(uVar21,pauVar19,uVar39 + 1);
        }
        cVar12 = FUN_180533840(local_728);
        if (cVar12 == '\0') {
          FUN_18015c010(local_d8);
          FUN_18015c010(local_138);
          plVar17 = local_788;
          goto LAB_18053575c;
        }
        lVar37 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
        uVar14 = FUN_1804c2670(lVar37,iVar38 + 20000);
        piVar23 = (int *)(lVar37 + 0x108);
        iVar38 = *(int *)(lVar37 + 0x10c);
        if (*piVar23 == iVar38) {
          iVar25 = *piVar23 + 1;
          if (iVar38 == 0) {
            iVar38 = 8;
          }
          else {
            iVar38 = iVar38 / 2 + iVar38;
          }
          if (iVar25 < iVar38) {
            iVar25 = iVar38;
          }
          FUN_1804d14d0(piVar23,iVar25);
        }
        *(undefined4 *)(*(longlong *)(lVar37 + 0x110) + (longlong)*piVar23 * 4) = uVar14;
        *piVar23 = *piVar23 + 1;
        local_498 = (undefined1  [16])0x0;
        local_488 = (undefined1  [16])0x0;
        lVar37 = -1;
        do {
          lVar37 = lVar37 + 1;
        } while (*(char *)(*plVar26 + lVar37) != '\0');
        FUN_18015ba30(local_498);
        pauVar19 = (undefined1 (*) [16])FUN_18015b2a0(local_498,&DAT_1807c6e34,3);
        local_478 = *pauVar19;
        auStack_468 = pauVar19[1];
        (*pauVar19)[0] = 0;
        *(undefined8 *)pauVar19[1] = 0;
        *(undefined8 *)(pauVar19[1] + 8) = 0xf;
        puVar22 = local_138;
        if (0xf < (ulonglong)local_128._8_8_) {
          puVar22 = (undefined1 *)local_138._0_8_;
        }
        pauVar19 = (undefined1 (*) [16])FUN_18015b2a0(local_478,puVar22,local_128._0_8_);
        local_688 = *pauVar19;
        auStack_678 = pauVar19[1];
        (*pauVar19)[0] = 0;
        *(undefined8 *)pauVar19[1] = 0;
        *(undefined8 *)(pauVar19[1] + 8) = 0xf;
        uVar40 = uVar40 | 0xc00;
        puVar22 = local_688;
        if (0xf < (ulonglong)auStack_678._8_8_) {
          puVar22 = (undefined1 *)local_688._0_8_;
        }
        local_798 = uVar40;
        local_794 = uVar40;
        cVar12 = FUN_18048b0e0(puVar22,&DAT_18082a250,1);
        FUN_18015c010(local_688);
        FUN_18015c010(local_478);
        FUN_18015c010(local_498);
        if (cVar12 != '\0') {
          _DAT_180c62f70 = plVar26[-1];
          DAT_180c62f78 = (undefined *)*plVar26;
          DAT_180c62f80 = plVar26[1];
          DAT_180c62f88 = plVar26[2];
          DAT_180c62f90 = plVar26[3];
          DAT_180c62f98 = plVar26[4];
          DAT_180c62fa0 = plVar26[5];
          _DAT_180c62fa8 = plVar26[6];
          _DAT_180c62fb0 = plVar26[7];
          DAT_180c62fb8 = plVar26[8];
          _DAT_180c62fc0 = plVar26[9];
          lRam0000000180c62fc8 = plVar26[10];
          _DAT_180c62fd0 = plVar26[0xb];
          if (DAT_180c62fd8 == '\0') {
            DAT_180c62fd8 = '\x01';
          }
          DAT_180c62fe8 = 0;
          *(undefined8 *)((longlong)local_778 + 0x24) = 2;
          DAT_180c62ec0 = '\0';
          DAT_180bbef4d = 1;
        }
        iVar38 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar38 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar38 + -1;
        }
        iVar38 = local_790[0] + 1;
        local_790[0] = iVar38;
        FUN_18015c010(local_d8);
        FUN_18015c010(local_138);
        plVar17 = local_788;
      }
      plVar33 = plVar26 + 0xc;
      plVar26 = plVar26 + 0xd;
      iVar13 = iVar13 + 1;
    } while (plVar33 != plVar17);
  }
  uVar31 = 0;
  ppuVar35 = &PTR_s_Bounding_Box_18077eec0;
  auVar42 = ZEXT864(0);
  auVar41 = ZEXT464(0x3f800000);
  do {
    if (DAT_180c62ec0 == '\0') break;
    puVar6 = *ppuVar35;
    local_4b8 = (undefined1  [16])0x0;
    local_4a8 = (undefined1  [16])0x0;
    auVar41 = ZEXT1664(auVar41._0_16_);
    auVar42 = ZEXT1664(auVar42._0_16_);
    FUN_18015ba30(local_4b8,"Players ESP ",0xc);
    lVar37 = -1;
    do {
      lVar37 = lVar37 + 1;
    } while (puVar6[lVar37] != '\0');
    pauVar19 = (undefined1 (*) [16])FUN_18015b2a0(local_4b8,puVar6);
    local_5b8 = *pauVar19;
    uStack_5a8 = *(undefined8 *)pauVar19[1];
    uStack_5a0 = *(undefined8 *)(pauVar19[1] + 8);
    (*pauVar19)[0] = 0;
    *(undefined8 *)pauVar19[1] = 0;
    *(undefined8 *)(pauVar19[1] + 8) = 0xf;
    auVar41 = ZEXT1664(auVar41._0_16_);
    auVar42 = ZEXT1664(auVar42._0_16_);
    local_798 = uVar40 | 0x80;
    cVar12 = FUN_180533840(local_5b8);
    FUN_18015c010(local_4b8);
    uVar40 = uVar40 | 0x80;
    if (cVar12 != '\0') {
      local_790[0] = 2;
      local_780 = local_780 & 0xffffffff00000000;
      lVar37 = *(longlong *)(*local_778 + (longlong)(int)local_778[3] * 8);
      puVar16 = (ulonglong *)(lVar37 + 0x2e8);
      iVar13 = *(int *)puVar16;
      puVar29 = &local_780;
      if (-1 < iVar13) {
        puVar29 = puVar16;
      }
      puVar16 = (ulonglong *)local_790;
      if (iVar13 < 3) {
        puVar16 = puVar29;
      }
      lVar32 = lVar37 + 0x2ec + ((longlong)(int)*puVar16 * 0x1d + (ulonglong)uVar31) * 0x9c;
      lVar37 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
      uVar14 = FUN_1804c2670(lVar37,uVar31 + 9000);
      piVar23 = (int *)(lVar37 + 0x108);
      iVar13 = *(int *)(lVar37 + 0x10c);
      if (*piVar23 == iVar13) {
        iVar25 = *piVar23 + 1;
        if (iVar13 == 0) {
          iVar13 = 8;
        }
        else {
          iVar13 = iVar13 / 2 + iVar13;
        }
        if (iVar25 < iVar13) {
          iVar25 = iVar13;
        }
        FUN_1804d14d0(piVar23,iVar25);
      }
      *(undefined4 *)(*(longlong *)(lVar37 + 0x110) + (longlong)*piVar23 * 4) = uVar14;
      *piVar23 = *piVar23 + 1;
      local_4d8 = (undefined1  [16])0x0;
      local_4c8 = (undefined1  [16])0x0;
      lVar37 = -1;
      do {
        lVar37 = lVar37 + 1;
      } while ((*ppuVar35)[lVar37] != '\0');
      FUN_18015ba30(local_4d8);
      pauVar19 = (undefined1 (*) [16])FUN_18015b2a0(local_4d8," / Players ESP",0xe);
      local_668 = *pauVar19;
      auStack_658 = pauVar19[1];
      (*pauVar19)[0] = 0;
      *(undefined8 *)pauVar19[1] = 0;
      *(undefined8 *)(pauVar19[1] + 8) = 0xf;
      local_798 = local_798 | 0x100;
      puVar22 = local_668;
      if (0xf < (ulonglong)auStack_658._8_8_) {
        puVar22 = (undefined1 *)local_668._0_8_;
      }
      auVar41 = ZEXT1664(auVar41._0_16_);
      auVar42 = ZEXT1664(auVar42._0_16_);
      cVar12 = FUN_18048b0e0(puVar22,&DAT_180829dc0,1);
      FUN_18015c010(local_668);
      FUN_18015c010(local_4d8);
      if (cVar12 != '\0') {
        local_648 = 0;
        puStack_640 = *ppuVar35;
        uStack_638 = 1;
        local_628 = lVar32 + 0xc;
        auStack_620 = (undefined1  [16])0x0;
        uStack_610 = auVar42._0_4_;
        uStack_60c = auVar41._0_4_;
        uStack_600 = 0;
        auStack_5f8 = ZEXT816(0);
        local_5e8 = 1;
        _DAT_180c62f70 = (ulonglong)uStack_644 << 0x20;
        DAT_180c62f80 = CONCAT44(uStack_634,1);
        _DAT_180c62fa8 = CONCAT44(uStack_60c,uStack_610);
        DAT_180c62f98 = 0;
        DAT_180c62fa0 = 0;
        _DAT_180c62fb0 = CONCAT44(uStack_604,uStack_60c);
        _DAT_180c62fd0 = CONCAT71(uStack_5e7,1);
        DAT_180c62fb8 = 0;
        _DAT_180c62fc0 = 0;
        lRam0000000180c62fc8 = 0;
        if (DAT_180c62fd8 == '\0') {
          DAT_180c62fd8 = '\x01';
        }
        DAT_180c62fe8 = 0;
        DAT_180c62f78 = puStack_640;
        DAT_180c62f88 = lVar32;
        DAT_180c62f90 = local_628;
        *(undefined8 *)((longlong)local_778 + 0x24) = 2;
        DAT_180c62ec0 = '\0';
        DAT_180bbef4d = 1;
        lStack_630 = lVar32;
        local_608 = uStack_60c;
      }
      iVar13 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar13 < 2) {
        auVar41 = ZEXT1664(auVar41._0_16_);
        auVar42 = ZEXT1664(auVar42._0_16_);
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar13 + -1;
      }
      iVar38 = iVar38 + 1;
      uVar40 = local_798;
    }
    uVar31 = uVar31 + 1;
    ppuVar35 = ppuVar35 + 4;
  } while ((int)uVar31 < 0x1d);
  pcVar15 = "Skin Changer";
  local_2f8 = "Skin Changer";
  local_2f0[0] = 0;
  local_2e8 = "Knife";
  local_2e0 = 0x12;
  local_2d8 = "Gloves";
  local_2d0 = 0x13;
  local_2c8 = "Agents";
  local_2c0 = 0xf;
  local_2b8 = "Custom Agents";
  local_2b0 = 0xf;
  local_2a8 = &DAT_1808680d4;
  local_2a0 = 0x14;
  local_298 = "Stickers";
  local_290 = 0;
  local_288 = "Charms";
  local_280 = 0;
  local_278 = &DAT_1807c6e60;
  local_270 = 0;
  local_268 = "Pattern Seed";
  local_260 = 0;
  local_258 = "StatTrak";
  local_250 = 0;
  local_248 = "Name Tag";
  local_240 = 0;
  local_238 = "Model Material";
  local_230 = 0;
  ppcVar36 = &local_2f8;
  while( true ) {
    local_4f8 = (undefined1  [16])0x0;
    local_4e8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_4f8,"Skins Inventory ",0x10);
    lVar37 = -1;
    do {
      lVar37 = lVar37 + 1;
    } while (pcVar15[lVar37] != '\0');
    pauVar19 = (undefined1 (*) [16])FUN_18015b2a0(local_4f8,pcVar15);
    local_708 = *pauVar19;
    uStack_6f8 = *(undefined8 *)pauVar19[1];
    uStack_6f0 = *(undefined8 *)(pauVar19[1] + 8);
    (*pauVar19)[0] = 0;
    *(undefined8 *)pauVar19[1] = 0;
    *(undefined8 *)(pauVar19[1] + 8) = 0xf;
    cVar12 = FUN_180533840(local_708);
    FUN_18015c010(local_4f8);
    if (cVar12 != '\0') {
      pcVar15 = *ppcVar36;
      FUN_1804c2800(pcVar15);
      local_538 = (undefined1  [16])0x0;
      local_528 = (undefined1  [16])0x0;
      lVar37 = -1;
      do {
        lVar37 = lVar37 + 1;
      } while (pcVar15[lVar37] != '\0');
      FUN_18015ba30(local_538,pcVar15);
      pauVar19 = (undefined1 (*) [16])FUN_18015b2a0(local_538," / Skins",8);
      local_6a8 = *pauVar19;
      auStack_698 = pauVar19[1];
      (*pauVar19)[0] = 0;
      *(undefined8 *)pauVar19[1] = 0;
      *(undefined8 *)(pauVar19[1] + 8) = 0xf;
      puVar22 = local_6a8;
      if (0xf < (ulonglong)auStack_698._8_8_) {
        puVar22 = (undefined1 *)local_6a8._0_8_;
      }
      cVar12 = FUN_18048b0e0(puVar22,&DAT_18082a240,1);
      FUN_18015c010(local_6a8);
      FUN_18015c010(local_538);
      if (cVar12 != '\0') {
        uVar14 = *(undefined4 *)(ppcVar36 + 1);
        local_118 = (undefined1  [16])0x0;
        auStack_108 = ZEXT816(0);
        lVar37 = -1;
        do {
          lVar37 = lVar37 + 1;
        } while ((*ppcVar36)[lVar37] != '\0');
        FUN_18015ba30(local_118);
        FUN_18015c010(&DAT_1808e6890);
        DAT_1808e6890 = local_118._0_8_;
        uRam00000001808e6898 = local_118._8_8_;
        _DAT_1808e68a0 = auStack_108._0_8_;
        DAT_1808e68a8 = auStack_108._8_8_;
        auStack_108 = ZEXT816(0xf) << 0x40;
        auVar9[0xf] = 0;
        auVar9._0_15_ = local_118._1_15_;
        local_118 = auVar9 << 8;
        DAT_180bbef48 = 0;
        DAT_1808e4fb8 = uVar14;
        *(undefined8 *)(DAT_180c62f50 + 0x24) = 4;
        FUN_18015c010(local_118);
        DAT_180c62ec0 = '\0';
      }
      iVar13 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar13 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar13 + -1;
      }
      iVar38 = iVar38 + 1;
    }
    plVar17 = local_778;
    ppcVar36 = ppcVar36 + 2;
    if (ppcVar36 == local_228) break;
    pcVar15 = *ppcVar36;
  }
  local_3b8 = "Combat";
  local_3b0[0] = 0;
  local_3a8 = "Players";
  local_3a0 = 2;
  local_398 = "World";
  local_390 = 3;
  local_388 = "Skins";
  local_380 = 4;
  local_378 = &DAT_180830bfc;
  local_370 = 5;
  local_368 = "Configs";
  local_360 = 6;
  local_358 = "Movement";
  local_350 = 7;
  local_348 = &DAT_180830c0c;
  local_340 = 9;
  local_338 = &DAT_180830cb0;
  local_330 = 10;
  local_328 = &DAT_180811f20;
  local_320 = 0xb;
  local_318 = "Grenades";
  local_310 = 0xc;
  local_308 = "Items";
  local_300 = 0xd;
  ppcVar36 = &local_3b8;
  do {
    if (DAT_180c62ec0 != '\0') {
      pcVar15 = *ppcVar36;
      local_708 = (undefined1  [16])0x0;
      uStack_6f8 = 0;
      uStack_6f0 = 0;
      lVar37 = -1;
      do {
        lVar37 = lVar37 + 1;
      } while (pcVar15[lVar37] != '\0');
      FUN_18015ba30(local_708,pcVar15);
      cVar12 = FUN_180533840(local_708);
      if (cVar12 != '\0') {
        local_558 = (undefined1  [16])0x0;
        local_548 = (undefined1  [16])0x0;
        lVar37 = -1;
        do {
          lVar37 = lVar37 + 1;
        } while (pcVar15[lVar37] != '\0');
        FUN_18015ba30(local_558,pcVar15);
        pauVar19 = (undefined1 (*) [16])FUN_18015b2a0(local_558," / Open Section",0xf);
        local_748 = *pauVar19;
        auStack_738 = pauVar19[1];
        (*pauVar19)[0] = 0;
        *(undefined8 *)pauVar19[1] = 0;
        *(undefined8 *)(pauVar19[1] + 8) = 0xf;
        puVar22 = local_748;
        if (0xf < (ulonglong)auStack_738._8_8_) {
          puVar22 = (undefined1 *)local_748._0_8_;
        }
        cVar12 = FUN_18048b0e0(puVar22,&DAT_180829a44,1);
        FUN_18015c010(local_748);
        FUN_18015c010(local_558);
        if (cVar12 != '\0') {
          *(undefined4 *)((longlong)plVar17 + 0x24) = *(undefined4 *)(ppcVar36 + 1);
          *(undefined4 *)(plVar17 + 5) = 0;
          DAT_180c62ec0 = '\0';
        }
        iVar38 = iVar38 + 1;
      }
    }
    ppcVar36 = ppcVar36 + 2;
  } while (ppcVar36 != &local_2f8);
  if (iVar38 == 0) {
    FUN_18048b0e0("No matching features",&DAT_18082ac6c,1);
  }
  FUN_1804bbd00();
  FUN_1801b63b0(local_f8,local_f8,*(undefined8 *)(local_f8._0_8_ + 8));
  FUN_1804547d0(local_f8._0_8_,0x40);
}



