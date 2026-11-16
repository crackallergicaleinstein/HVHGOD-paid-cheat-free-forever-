// FUN_1801ea080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ea080 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ea080(undefined8 *param_1,undefined1 (*param_2) [16],undefined8 *param_3)

{
  ulonglong *puVar1;
  short *psVar2;
  undefined8 *****pppppuVar3;
  bool bVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 *****pppppuVar7;
  undefined8 uVar8;
  undefined8 *****pppppuVar9;
  undefined8 uVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  short *psVar14;
  longlong lVar15;
  short *psVar16;
  undefined8 ******ppppppuVar17;
  longlong lVar18;
  undefined8 *puVar19;
  uint uVar20;
  uint uVar21;
  undefined1 auStack_3b8 [32];
  undefined8 *****local_398;
  uint local_388;
  undefined8 *****local_380;
  undefined8 ******local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  ulonglong local_360;
  undefined8 ******local_358;
  undefined8 local_350;
  undefined8 *****local_338;
  undefined8 local_330;
  undefined8 *****local_328;
  undefined1 auStack_320 [16];
  undefined8 uStack_310;
  undefined1 auStack_308 [16];
  undefined8 *****local_2f8;
  undefined1 auStack_2f0 [16];
  undefined8 uStack_2e0;
  undefined1 auStack_2d8 [16];
  undefined8 *****local_2c8;
  undefined1 local_2c0 [32];
  undefined8 local_2a0;
  undefined8 *****local_298;
  undefined1 local_290 [32];
  undefined8 local_270;
  undefined8 *****local_268;
  undefined8 *****local_260;
  undefined8 *****local_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 local_238 [16];
  undefined8 *****local_228;
  undefined1 local_220 [32];
  undefined8 local_200;
  undefined8 *****local_1f8;
  undefined1 local_1f0 [32];
  undefined8 local_1d0;
  undefined8 *****local_1c8;
  undefined1 local_1c0 [32];
  undefined8 local_1a0;
  undefined1 (*local_198) [16];
  undefined8 *****local_190;
  undefined8 *****local_188;
  undefined1 local_180 [48];
  undefined1 local_150 [16];
  undefined1 auStack_140 [16];
  undefined1 local_130 [16];
  undefined8 ******local_120 [2];
  longlong local_110;
  ulonglong local_108;
  undefined8 ******local_100 [2];
  longlong local_f0;
  ulonglong local_e8;
  undefined8 *****local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [16];
  undefined8 *****local_a8;
  undefined1 local_a0 [16];
  longlong local_90;
  undefined8 *****local_78;
  undefined1 local_70 [16];
  longlong local_60;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_3b8;
  local_388 = 0;
  puVar19 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar19 = (undefined8 *)*param_1;
  }
  puVar1 = param_1 + 2;
  local_198 = param_2;
  if (((*puVar1 < 6) || (iVar13 = FUN_1801594c0(puVar19,L"\\\\?\\",4), iVar13 != 0)) ||
     (0x19 < (*(uint *)(puVar19 + 1) & 0xffffffdf) - 0x3a0041)) {
LAB_1801ea1dc:
    bVar4 = false;
    FUN_1800f5370(&local_358,param_1);
    ppppppuVar17 = &local_358;
    uVar20 = 2;
  }
  else {
    puVar19 = param_3;
    if (7 < (ulonglong)param_3[3]) {
      puVar19 = (undefined8 *)*param_3;
    }
    if ((((ulonglong)param_3[2] < 6) || (iVar13 = FUN_1801594c0(puVar19,L"\\\\?\\",4), iVar13 != 0))
       || (0x19 < (*(uint *)(puVar19 + 1) & 0xffffffdf) - 0x3a0041)) goto LAB_1801ea1dc;
    bVar4 = true;
    if (7 < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    psVar2 = (short *)((longlong)param_1 + *puVar1 * 2);
    for (psVar14 = (short *)FUN_1800a7b00(param_1,psVar2);
        (psVar14 != psVar2 && ((*psVar14 == 0x5c || (*psVar14 == 0x2f)))); psVar14 = psVar14 + 1) {
    }
    local_150 = (undefined1  [16])0x0;
    auStack_140 = ZEXT816(0);
    FUN_180159e60(local_150,psVar14,(longlong)psVar2 - (longlong)psVar14 >> 1);
    ppppppuVar17 = (undefined8 ******)local_150;
    uVar20 = 0x1c0001;
  }
  local_388 = uVar20;
  FUN_1800f5370(local_100,ppppppuVar17);
  if ((uVar20 & 2) != 0) {
    uVar20 = uVar20 & 0xfffffffd;
    local_388 = uVar20;
    FUN_18015b930(&local_358);
  }
  if ((uVar20 & 1) != 0) {
    uVar20 = uVar20 & 0xfffffffe;
    local_388 = uVar20;
    FUN_18015b930(local_150);
  }
  if (bVar4) {
    puVar19 = param_3;
    if (7 < (ulonglong)param_3[3]) {
      puVar19 = (undefined8 *)*param_3;
    }
    psVar2 = (short *)((longlong)puVar19 + param_3[2] * 2);
    for (psVar14 = (short *)FUN_1800a7b00(puVar19,psVar2);
        (psVar14 != psVar2 && ((*psVar14 == 0x5c || (*psVar14 == 0x2f)))); psVar14 = psVar14 + 1) {
    }
    local_150 = (undefined1  [16])0x0;
    auStack_140 = ZEXT816(0);
    FUN_180159e60(local_150,psVar14,(longlong)psVar2 - (longlong)psVar14 >> 1);
    ppppppuVar17 = (undefined8 ******)local_150;
    uVar20 = uVar20 | 0xe00004;
  }
  else {
    FUN_1800f5370(&local_358,param_3);
    ppppppuVar17 = &local_358;
    uVar20 = uVar20 | 8;
  }
  local_388 = uVar20;
  FUN_1800f5370(local_120,ppppppuVar17);
  if ((uVar20 & 8) != 0) {
    uVar20 = uVar20 & 0xfffffff7;
    FUN_18015b930(&local_358);
  }
  if ((uVar20 & 4) != 0) {
    uVar20 = uVar20 & 0xfffffffb;
    FUN_18015b930(local_150);
  }
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)param_2[1] = 0;
  *(undefined8 *)(param_2[1] + 8) = 7;
  *(undefined2 *)*param_2 = 0;
  local_388 = uVar20 | 0x10;
  ppppppuVar17 = local_120;
  if (7 < local_108) {
    ppppppuVar17 = local_120[0];
  }
  lVar15 = FUN_1800a7b00(ppppppuVar17,(longlong)ppppppuVar17 + local_110 * 2);
  local_378 = (undefined8 ******)0x0;
  uStack_370 = 0;
  local_368 = 0;
  local_360 = 0;
  FUN_180159e60(&local_378,ppppppuVar17,lVar15 - (longlong)ppppppuVar17 >> 1);
  local_388 = uVar20 | 0xe30;
  ppppppuVar17 = local_100;
  if (7 < local_e8) {
    ppppppuVar17 = local_100[0];
  }
  lVar15 = FUN_1800a7b00(ppppppuVar17,(longlong)ppppppuVar17 + local_f0 * 2);
  local_150 = (undefined1  [16])0x0;
  auStack_140 = ZEXT816(0);
  FUN_180159e60(local_150,ppppppuVar17,lVar15 - (longlong)ppppppuVar17 >> 1);
  local_388 = uVar20 | 0x7e70;
  local_358 = &local_378;
  if (7 < local_360) {
    local_358 = local_378;
  }
  local_350 = local_368;
  iVar13 = FUN_180162c60(local_150,&local_358);
  if (iVar13 == 0) {
    cVar11 = FUN_1800a7de0(local_120);
    cVar12 = FUN_1800a7de0(local_100);
    if (cVar12 != cVar11) goto LAB_1801ea539;
    ppppppuVar17 = local_100;
    if (7 < local_e8) {
      ppppppuVar17 = local_100[0];
    }
    psVar2 = (short *)((longlong)ppppppuVar17 + local_f0 * 2);
    psVar16 = (short *)FUN_1800a7b00(ppppppuVar17,psVar2);
    for (psVar14 = psVar16; (psVar14 != psVar2 && ((*psVar14 == 0x5c || (*psVar14 == 0x2f))));
        psVar14 = psVar14 + 1) {
    }
    if ((ulonglong)((longlong)psVar14 - (longlong)psVar16) < 2) {
      ppppppuVar17 = local_120;
      if (7 < local_108) {
        ppppppuVar17 = local_120[0];
      }
      psVar2 = (short *)((longlong)ppppppuVar17 + local_110 * 2);
      psVar16 = (short *)FUN_1800a7b00(ppppppuVar17,psVar2);
      for (psVar14 = psVar16; (psVar14 != psVar2 && ((*psVar14 == 0x5c || (*psVar14 == 0x2f))));
          psVar14 = psVar14 + 1) {
      }
      if (1 < (ulonglong)((longlong)psVar14 - (longlong)psVar16)) goto LAB_1801ea539;
    }
    cVar11 = FUN_1801e9fb0(local_100);
    if ((cVar11 != '\0') || (cVar11 = FUN_1801e9fb0(local_120), cVar11 != '\0')) goto LAB_1801ea539;
    bVar4 = false;
  }
  else {
LAB_1801ea539:
    bVar4 = true;
  }
  local_388 = uVar20 | 0x7e30;
  FUN_18015b930(local_150);
  local_388 = uVar20 | 0x7e10;
  FUN_18015b930(&local_378);
  if (bVar4) goto LAB_1801eacfd;
  ppppppuVar17 = local_100;
  if (7 < local_e8) {
    ppppppuVar17 = local_100[0];
  }
  pppppuVar3 = (undefined8 *****)((longlong)ppppppuVar17 + local_f0 * 2);
  uStack_2e0 = 0;
  auStack_2f0._2_14_ = SUB1614((undefined1  [16])0x0,2);
  auVar5._14_2_ = 0;
  auVar5._0_14_ = auStack_2f0._2_14_;
  auStack_2f0 = auVar5 << 0x10;
  auStack_2d8._8_8_ = local_100;
  auStack_2d8._0_8_ = 7;
  local_e0 = (undefined8 *****)0x0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  local_c0 = (undefined1  [16])0x0;
  local_2f8 = pppppuVar3;
  FUN_18017d720(local_120,&local_e0);
  ppppppuVar17 = local_120;
  if (7 < local_108) {
    ppppppuVar17 = local_120[0];
  }
  local_328 = (undefined8 *****)((longlong)ppppppuVar17 + local_110 * 2);
  uStack_310 = 0;
  auStack_320._2_14_ = SUB1614((undefined1  [16])0x0,2);
  auVar6._14_2_ = 0;
  auVar6._0_14_ = auStack_320._2_14_;
  auStack_320 = auVar6 << 0x10;
  auStack_308._8_8_ = local_120;
  auStack_308._0_8_ = 7;
  local_380 = &local_1c8;
  local_1c8 = local_328;
  FUN_1800f5370(local_1c0,auStack_320);
  local_1a0 = auStack_308._8_8_;
  local_190 = &local_1c8;
  local_268 = &local_1f8;
  local_1f8 = local_e0;
  FUN_1800f5370(local_1f0,&uStack_d8);
  local_1d0 = local_c0._8_8_;
  local_188 = &local_1f8;
  local_260 = &local_228;
  local_228 = pppppuVar3;
  FUN_1800f5370(local_220,auStack_2f0);
  local_200 = auStack_2d8._8_8_;
  local_338 = &local_228;
  ppppppuVar17 = (undefined8 ******)FUN_18017d720(local_100,local_180);
  local_260 = &local_258;
  local_258 = local_1c8;
  local_378 = ppppppuVar17;
  FUN_1800f5370(&uStack_250,local_1c0);
  local_238._8_8_ = local_1a0;
  local_268 = &local_298;
  local_298 = local_1f8;
  FUN_1800f5370(local_290,local_1f0);
  local_270 = local_1d0;
  local_380 = &local_2c8;
  local_2c8 = local_228;
  FUN_1800f5370(local_2c0,local_220);
  local_2a0 = local_200;
  local_150._0_8_ = *ppppppuVar17;
  FUN_1800f5370(local_150 + 8,ppppppuVar17 + 1);
  local_130._8_8_ = ppppppuVar17[5];
  local_398 = &local_258;
  FUN_1801f3430(&local_a8,local_150,&local_2c8,&local_298);
  local_388 = uVar20 | 0x27e10;
  FUN_18015b930(ppppppuVar17 + 1);
  FUN_18015b930(local_220);
  FUN_18015b930(local_1f0);
  FUN_18015b930(local_1c0);
  pppppuVar7 = local_2f8;
  pppppuVar3 = local_328;
  if ((local_a8 == local_2f8) && (local_78 == local_328)) {
LAB_1801eac76:
    auStack_140 = (undefined1  [16])0x0;
    local_150 = (undefined1  [16])0x0;
    FUN_180159e60(local_150,&DAT_1807bfe8c,1);
    FUN_180176c30(param_2,local_150);
    FUN_18015b930(local_150);
  }
  else {
    local_358 = &local_2c8;
    local_2c8 = local_78;
    FUN_1800f5370(local_2c0,local_70);
    local_2a0 = local_50;
    local_378 = &local_2c8;
    local_298 = local_e0;
    FUN_1800f5370(local_290,&uStack_d8);
    uVar10 = local_c0._8_8_;
    local_270 = local_c0._8_8_;
    local_358 = &local_298;
    auStack_140 = ZEXT816(0);
    local_130 = (undefined1  [16])0x0;
    local_150._8_8_ = 0;
    local_150._0_8_ = local_298;
    FUN_1800f5370(local_150 + 8,local_290);
    uVar8 = local_2a0;
    local_130._8_8_ = uVar10;
    local_388 = uVar20 | 0xc027e10;
    uStack_250 = 0;
    uStack_248 = 0;
    uStack_240 = 0;
    local_238 = (undefined1  [16])0x0;
    local_258 = local_2c8;
    FUN_1800f5370(&uStack_250,local_2c0);
    pppppuVar9 = local_258;
    local_238._8_8_ = uVar8;
    uVar20 = uVar20 | 0x3c027e10;
    lVar15 = 0;
    local_388 = uVar20;
    while ((undefined8 *****)local_150._0_8_ != pppppuVar9) {
      lVar15 = lVar15 + 1;
      FUN_1801ad0b0(local_150);
    }
    FUN_18015b930(&uStack_250);
    FUN_18015b930(local_150 + 8);
    FUN_18015b930(local_290);
    FUN_18015b930(local_2c0);
    ppppppuVar17 = local_120;
    if (7 < local_108) {
      ppppppuVar17 = local_120[0];
    }
    psVar2 = (short *)((longlong)ppppppuVar17 + local_110 * 2);
    psVar16 = (short *)FUN_1800a7b00(ppppppuVar17,psVar2);
    for (psVar14 = psVar16; (psVar14 != psVar2 && ((*psVar14 == 0x5c || (*psVar14 == 0x2f))));
        psVar14 = psVar14 + 1) {
    }
    ppppppuVar17 = local_120;
    if (7 < local_108) {
      ppppppuVar17 = local_120[0];
    }
    lVar18 = FUN_1800a7b00(ppppppuVar17,(longlong)ppppppuVar17 + local_110 * 2);
    lVar18 = (ulonglong)(1 < (ulonglong)(lVar18 - (longlong)ppppppuVar17)) +
             (ulonglong)(1 < (ulonglong)((longlong)psVar14 - (longlong)psVar16));
    if (lVar15 < lVar18) {
      lVar18 = lVar18 - lVar15;
      do {
        FUN_1801ad0b0(&local_78);
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    lVar15 = 0;
    if (local_78 == pppppuVar3) {
LAB_1801eac29:
      if ((local_a8 == pppppuVar7) || (local_90 == 0)) goto LAB_1801eac76;
joined_r0x0001801eac42:
      while (local_a8 != pppppuVar7) {
        FUN_1800a7c10(param_2,local_a0);
        FUN_1801ad0b0(&local_a8);
      }
    }
    else {
      do {
        uVar21 = uVar20;
        if (local_60 != 0) {
          local_150 = (undefined1  [16])0x0;
          auStack_140 = ZEXT816(0);
          FUN_180159e60(local_150,&DAT_1807bfe8c,1);
          local_378 = (undefined8 ******)local_150;
          if (7 < (ulonglong)auStack_140._8_8_) {
            local_378 = (undefined8 ******)local_150._0_8_;
          }
          uStack_370 = auStack_140._0_8_;
          local_388 = uVar20 | 0x18000;
          iVar13 = FUN_180162c60(local_70,&local_378);
          FUN_18015b930(local_150);
          uVar21 = uVar20 | 0x18000;
          if (iVar13 != 0) {
            local_150 = (undefined1  [16])0x0;
            auStack_140 = ZEXT816(0);
            FUN_180159e60(local_150,&DAT_1807bfe90,2);
            uVar21 = uVar20 | 0x3018000;
            local_338 = (undefined8 *****)local_150;
            if (7 < (ulonglong)auStack_140._8_8_) {
              local_338 = (undefined8 *****)local_150._0_8_;
            }
            local_330 = auStack_140._0_8_;
            local_388 = uVar21;
            iVar13 = FUN_180162c60(local_70,&local_338);
            FUN_18015b930(local_150);
            if (iVar13 == 0) {
              lVar15 = lVar15 + -1;
            }
            else {
              lVar15 = lVar15 + 1;
            }
          }
        }
        uVar20 = uVar21;
        FUN_1801ad0b0(&local_78);
      } while (local_78 != pppppuVar3);
      if (-1 < lVar15) {
        if (lVar15 == 0) goto LAB_1801eac29;
        for (; 0 < lVar15; lVar15 = lVar15 + -1) {
          local_150 = (undefined1  [16])0x0;
          auStack_140 = ZEXT816(0);
          FUN_180159e60(local_150,&DAT_1807bfe90,2);
          uVar20 = uVar20 | 0x180;
          local_388 = uVar20;
          FUN_1800a7c10(param_2,local_150);
          FUN_18015b930(local_150);
        }
        goto joined_r0x0001801eac42;
      }
    }
  }
  FUN_18015b930(local_70);
  FUN_18015b930(local_a0);
  FUN_18015b930(auStack_320);
  FUN_18015b930(&uStack_d8);
  FUN_18015b930(auStack_2f0);
LAB_1801eacfd:
  FUN_18015b930(local_120);
  FUN_18015b930(local_100);
}



