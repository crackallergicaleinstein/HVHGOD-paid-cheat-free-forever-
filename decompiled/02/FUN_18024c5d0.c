// FUN_18024c5d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18024c5d0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18024c5d0(longlong param_1,int param_2,longlong param_3,undefined1 param_4,
                  undefined4 *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ulonglong uVar4;
  longlong lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  char cVar9;
  undefined1 uVar10;
  short sVar11;
  int iVar12;
  undefined *puVar13;
  ULONGLONG UVar14;
  longlong lVar15;
  longlong *plVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined ***pppuVar19;
  char *pcVar20;
  undefined *puVar21;
  undefined8 *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  char *pcVar25;
  bool bVar26;
  undefined1 auVar27 [16];
  uint uVar28;
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auStack_86a8 [32];
  undefined **local_8688;
  char *local_8680;
  undefined *local_8678;
  char *local_8670;
  undefined8 local_8668;
  undefined8 local_8660;
  ulonglong local_8658;
  ulonglong local_8650;
  undefined8 local_8648;
  undefined8 local_8640;
  undefined1 local_8638;
  undefined1 local_8630;
  undefined1 local_8628;
  undefined1 local_8620;
  undefined4 local_8618;
  undefined4 local_8610;
  undefined8 local_8608;
  undefined4 local_8600;
  undefined4 local_85f8;
  undefined4 local_85f0;
  undefined4 local_85e8;
  undefined4 local_85e0;
  undefined1 local_85d8;
  undefined4 local_85d0;
  undefined4 local_85c8;
  undefined4 local_85c0;
  undefined1 local_85b8;
  undefined4 local_85b0;
  undefined4 local_85a8;
  undefined4 local_85a0;
  undefined1 local_8598;
  undefined4 local_8590;
  undefined4 local_8588;
  undefined4 local_8580;
  undefined4 local_8578;
  undefined4 local_8570;
  undefined4 local_8568;
  undefined4 local_8560;
  undefined4 local_8558;
  undefined4 local_8550;
  undefined8 local_8548;
  undefined4 local_8540;
  undefined4 local_8538;
  undefined4 local_8530;
  undefined4 local_8528;
  undefined4 local_8520;
  undefined4 local_8518;
  undefined4 local_8510;
  undefined4 local_8508;
  undefined4 local_8500;
  undefined4 local_84f8;
  undefined4 local_84f0;
  undefined8 local_84e8;
  undefined8 local_84e0;
  undefined8 local_84d8;
  undefined4 local_84d0;
  undefined4 local_84c8;
  undefined4 *local_84b8;
  uint uStack_84b0;
  uint uStack_84ac;
  undefined *local_84a8 [2];
  uint local_8498;
  uint uStack_8494;
  uint uStack_8490;
  uint uStack_848c;
  undefined8 uStack_8488;
  undefined8 uStack_8480;
  undefined *local_8478;
  int local_8470;
  undefined **local_8468;
  longlong local_8460;
  undefined **local_8458;
  undefined8 uStack_8450;
  undefined8 uStack_8448;
  undefined8 uStack_8440;
  undefined8 local_8438;
  undefined8 uStack_8430;
  undefined *puStack_8428;
  undefined *puStack_8420;
  longlong local_8418;
  undefined8 uStack_8410;
  undefined8 uStack_8408;
  undefined8 uStack_8400;
  int local_83f8;
  undefined4 uStack_83f4;
  undefined4 uStack_83f0;
  undefined4 uStack_83ec;
  undefined8 local_83e8;
  undefined8 uStack_83e0;
  undefined1 local_83d8 [16];
  uint local_83c8;
  undefined4 local_83c4;
  undefined4 local_83c0;
  undefined4 local_83bc;
  undefined8 local_83b8;
  undefined8 uStack_83b0;
  undefined4 local_83a8;
  undefined4 local_83a4;
  undefined4 local_83a0;
  undefined4 local_839c;
  undefined8 local_8398;
  undefined8 uStack_8390;
  undefined4 local_8388;
  undefined4 local_8384;
  undefined4 local_8380;
  undefined8 local_837c;
  undefined8 local_8374;
  undefined8 local_836c;
  undefined1 local_8364;
  undefined1 local_8363;
  undefined1 local_8362;
  undefined1 local_8361;
  undefined2 local_8360;
  char local_8358 [24576];
  undefined1 local_2358 [8192];
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined1 local_2d8 [16];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined1 local_2b8 [16];
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined2 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined4 local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined2 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulonglong local_f8;
  undefined8 uStack_48;
  
  uStack_48 = 0x18024c5ef;
  local_f8 = DAT_1808d5f00 ^ (ulonglong)auStack_86a8;
  local_84b8 = param_5;
  if (DAT_180cad6b8 == '\0') {
  }
  if (DAT_180cad2e0 != 1) {
  }
  local_8470 = param_2;
  puVar13 = (undefined *)FUN_1802509b0();
  puVar21 = &DAT_1808db6c0;
  if (puVar13 != (undefined *)0x0) {
    puVar21 = puVar13;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_8498 = (uint)_DAT_180bb8890;
  uStack_8494 = (uint)((ulonglong)_DAT_180bb8890 >> 0x20);
  uStack_8490 = (uint)uRam0000000180bb8898;
  uStack_848c = (uint)((ulonglong)uRam0000000180bb8898 >> 0x20);
  uStack_8488 = uRam0000000180bb88a0;
  uStack_8480 = uRam0000000180bb88a8;
  cVar9 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  puVar13 = (undefined *)CONCAT44(uStack_8494,local_8498);
  puVar23 = (undefined *)CONCAT44(uStack_848c,uStack_8490);
  local_8498 = uStack_8490;
  uStack_8494 = uStack_848c;
  if (((puVar23 == (undefined *)0x0) || (local_8478 = puVar13, puVar13 == (undefined *)0x0)) ||
     (cVar9 == '\0')) {
    if (*(longlong *)(puVar21 + 0x8208) == 0) {
    }
    FUN_18063ab10(local_8358,0,0x6000);
    FUN_18024e950(local_8358,0x60);
    FUN_18063ab10(local_2358,0,0x2000);
    FUN_18024e950(local_2358,0x20);
    local_358 = 0;
    local_350 = 0;
    local_348 = 0;
    local_340 = 0;
    local_338 = 0;
    local_330 = 0;
    local_328 = 0xcbf29ce484222325;
    local_320 = 0;
    local_318 = 0;
    local_310 = 0;
    local_308 = 0;
    local_300 = 0;
    local_2f8 = 0xffffffffffffffff;
    local_2f0 = 0;
    local_2ec = 0;
    local_2e8 = 0;
    uStack_2e0 = 0;
    local_2d8 = ZEXT816(0);
    local_2c8 = 0;
    uStack_2c0 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    local_298 = 0;
    local_294 = 0;
    local_28c = 0;
    local_288 = 0;
    uStack_280 = 0;
    local_278 = 0;
    local_270 = 0;
    local_268 = 0;
    local_260 = 0;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_240 = 0;
    local_238 = 0;
    local_230 = 0;
    local_228 = 0xcbf29ce484222325;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0;
    local_200 = 0;
    local_1f8 = 0xffffffffffffffff;
    local_1f0 = 0;
    local_1ec = 0;
    local_1e8 = 0;
    uStack_1e0 = 0;
    local_1c8 = 0;
    uStack_1c0 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    local_198 = 0;
    local_194 = 0;
    local_18c = 0;
    local_188 = 0;
    uStack_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    local_140 = 0;
    local_138 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0;
    local_2b8 = local_2d8;
    local_1d8 = local_2d8;
    local_1b8 = local_2d8;
    FUN_18063aed0(puVar21,local_8358,0x8258);
  }
  FUN_18017bf40(&local_8460);
  local_8468 = (undefined **)GetTickCount64();
  if (param_3 == 0) {
    if (puVar21[0x80f8] == '\0') {
    }
    if (*(undefined **)(puVar21 + 0x8038) != puVar23) {
    }
    if (*(undefined **)(puVar21 + 0x8040) != puVar13) {
    }
    if (local_8468 < *(undefined ***)(puVar21 + 0x8008)) {
    }
    if (0xfa < (ulonglong)((longlong)local_8468 - (longlong)*(undefined ***)(puVar21 + 0x8008))) {
    }
  }
  uStack_8450 = 0;
  uStack_8448 = 0;
  uStack_8440 = 0;
  local_8438 = 0;
  uStack_8430 = 0xcbf29ce484222325;
  uStack_8410 = 0;
  uStack_8400 = 0xffffffffffffffff;
  uVar28 = 0;
  uStack_83f4 = 0;
  uStack_83f0 = 0;
  uStack_83ec = 0;
  local_83e8 = 0;
  uStack_83e0 = 0;
  local_83d8 = ZEXT816(0);
  local_83c8 = 0;
  local_83bc = 0;
  local_83b8 = 0;
  uStack_83b0 = 0;
  local_83a8 = 0;
  local_83a4 = 0;
  local_83a0 = 0;
  local_839c = 0;
  local_8398 = 0;
  uStack_8390 = 0;
  local_8388 = 0;
  local_837c = 0;
  local_8374 = 0;
  local_836c = 0;
  local_8360 = 0;
  local_83f8 = local_8470;
  puStack_8420 = local_8478;
  if (param_3 == 0) {
    local_8418 = *(longlong *)(puVar21 + 0x8048);
  }
  else {
    local_8418 = param_3;
  }
  local_8364 = *(undefined1 *)(param_1 + 0xcd);
  local_8363 = DAT_180cad730 != '\0';
  local_8362 = DAT_180cad7a0 != '\0';
  local_8384 = *(undefined4 *)(param_1 + 200);
  uStack_8408 = *(undefined8 *)(param_1 + 0xf8);
  local_8380 = DAT_180cad72c;
  local_83c4 = *(undefined4 *)(param_1 + 4);
  local_83c0 = *(undefined4 *)(param_1 + 0x1c);
  local_8458 = local_8468;
  puStack_8428 = puVar23;
  local_8361 = param_4;
  FUN_18024f560(&local_8458);
  iVar12 = DAT_180c644f8;
  if (DAT_180c644f8 == 0) {
    UVar14 = GetTickCount64();
    if (DAT_180c64508 <= UVar14) {
      local_84a8[0] = &DAT_1808ee3a0;
      iVar12 = FUN_1805f68d0(&DAT_1808ee3a0);
      if (iVar12 != 0) goto LAB_18024d8f2;
      if (DAT_1808ee3ec == 0x7fffffff) {
        DAT_1808ee3ec = 0x7ffffffe;
        goto LAB_18024d907;
      }
      if ((DAT_180c644f8 == 0) && (DAT_180c64508 <= UVar14)) {
        DAT_180c644f8 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c644f8 == 0) {
          DAT_180c64508 = UVar14 + 1000;
        }
        else {
          DAT_180c64508 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180c644f8;
      FUN_1805f68fc(&DAT_1808ee3a0);
      if (iVar12 != 0) goto LAB_18024c966;
    }
    puVar24 = (undefined *)0x0;
  }
  else {
LAB_18024c966:
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (puVar23 + iVar12 == (undefined *)0x0) {
      bVar26 = false;
      puVar13 = local_8478;
    }
    else {
      local_84a8[0] = (undefined *)0x0;
      cVar9 = FUN_1804514f0(local_84a8,puVar23 + iVar12,8);
      if (cVar9 == '\0') {
        bVar26 = false;
        puVar13 = local_8478;
      }
      else {
        bVar26 = true;
        puVar13 = local_84a8[0];
      }
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    puVar24 = (undefined *)0x0;
    if (bVar26) {
      puVar24 = puVar13;
    }
  }
  iVar12 = DAT_180c644f0;
  if (DAT_180c644f0 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c644e8) {
      iVar12 = 0;
    }
    else {
      local_84a8[0] = &DAT_1808ee350;
      iVar12 = FUN_1805f68d0(&DAT_1808ee350);
      if (iVar12 != 0) goto LAB_18024d8f2;
      if (DAT_1808ee39c == 0x7fffffff) {
        DAT_1808ee39c = 0x7ffffffe;
        goto LAB_18024d907;
      }
      if ((DAT_180c644f0 == 0) && (DAT_180c644e8 <= UVar14)) {
        DAT_180c644f0 = FUN_1804174b0("CGameSceneNode",0x6b325da);
        if (DAT_180c644f0 == 0) {
          DAT_180c644e8 = UVar14 + 1000;
        }
        else {
          DAT_180c644e8 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180c644f0;
      FUN_1805f68fc(&DAT_1808ee350);
    }
  }
  if ((puVar24 == (undefined *)0x0) || (iVar12 == 0)) {
    puVar13 = (undefined *)0x0;
  }
  else {
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (puVar24 + iVar12 == (undefined *)0x0) {
      bVar26 = false;
      puVar23 = local_8478;
    }
    else {
      local_84a8[0] = (undefined *)0x0;
      cVar9 = FUN_1804514f0(local_84a8,puVar24 + iVar12,8);
      if (cVar9 == '\0') {
        bVar26 = false;
        puVar23 = local_8478;
      }
      else {
        bVar26 = true;
        puVar23 = local_84a8[0];
      }
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    puVar13 = (undefined *)0x0;
    if (bVar26) {
      puVar13 = puVar23;
    }
    puVar23 = (undefined *)CONCAT44(uStack_8494,local_8498);
  }
  iVar12 = DAT_180c644f4;
  if (DAT_180c644f4 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c644d0) {
      iVar12 = 0;
    }
    else {
      local_8498 = 0x808ee300;
      uStack_8494 = 1;
      iVar12 = FUN_1805f68d0(&DAT_1808ee300);
      if (iVar12 != 0) goto LAB_18024d8f2;
      if (DAT_1808ee34c == 0x7fffffff) {
        DAT_1808ee34c = 0x7ffffffe;
        goto LAB_18024d907;
      }
      if ((DAT_180c644f4 == 0) && (DAT_180c644d0 <= UVar14)) {
        DAT_180c644f4 = FUN_1804174b0("CGameSceneNode",0xae099497);
        if (DAT_180c644f4 == 0) {
          DAT_180c644d0 = UVar14 + 1000;
        }
        else {
          DAT_180c644d0 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180c644f4;
      FUN_1805f68fc(&DAT_1808ee300);
    }
    param_5 = local_84b8;
  }
  if ((puVar13 == puVar23) && (iVar12 != 0)) {
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (puVar24 + iVar12 == (undefined *)0x0) {
LAB_18024cbf7:
      uStack_84ac = uStack_84ac & 0xffffff00;
    }
    else {
      local_8498 = uVar28;
      uStack_8494 = uVar28;
      uStack_8490 = uVar28;
      cVar9 = FUN_1804514f0(&local_8498,puVar24 + iVar12,0xc);
      if (cVar9 == '\0') goto LAB_18024cbf7;
      local_84b8 = (undefined4 *)CONCAT44(uStack_8494,local_8498);
      uStack_84b0 = uStack_8490;
      uStack_84ac = CONCAT31(uStack_84ac._1_3_,1);
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    auVar3._8_4_ = uStack_84b0;
    auVar3._0_8_ = local_84b8;
    auVar3._12_4_ = uStack_84ac;
  }
  else {
    uStack_848c = uStack_848c & 0xffffff00;
    auVar3._4_4_ = uStack_8494;
    auVar3._0_4_ = local_8498;
    auVar3._8_4_ = uStack_8490;
    auVar3._12_4_ = uStack_848c;
  }
  if (auVar3[0xc] != '\0') {
    uStack_83e0 = CONCAT44(auVar3._0_4_,(undefined4)uStack_83e0);
    auVar2 = vshufps_avx(auVar3,auVar3,0x55);
    auVar29 = ZEXT1664(auVar2);
    uVar18 = auVar3._8_4_;
    local_83d8._4_4_ = uVar18;
    local_83d8._0_4_ = auVar2._0_4_;
    sVar11 = thunk_FUN_180624430();
    if (((0 < sVar11) || ((auVar29._0_4_ & 0x7f800000) == 0x7f800000)) ||
       (bVar26 = (uVar18 & 0x7f800000) != 0x7f800000, !bVar26)) {
      bVar26 = false;
    }
    local_836c._0_7_ = CONCAT16(bVar26,(undefined6)local_836c);
  }
  iVar12 = DAT_180c644e0;
  if (DAT_180c644e0 == 0) {
    UVar14 = GetTickCount64();
    if (DAT_180c644d8 <= UVar14) {
      local_8498 = 0x808ee260;
      uStack_8494 = 1;
      iVar12 = FUN_1805f68d0(&DAT_1808ee260);
      if (iVar12 != 0) goto LAB_18024d8f2;
      if (DAT_1808ee2ac == 0x7fffffff) {
        DAT_1808ee2ac = 0x7ffffffe;
        goto LAB_18024d907;
      }
      if ((DAT_180c644e0 == 0) && (DAT_180c644d8 <= UVar14)) {
        DAT_180c644e0 = FUN_1804174b0("C_CSPlayerPawn",0x4ee662ac);
        if (DAT_180c644e0 == 0) {
          DAT_180c644d8 = UVar14 + 1000;
        }
        else {
          DAT_180c644d8 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180c644e0;
      FUN_1805f68fc(&DAT_1808ee260);
      if (iVar12 != 0) goto LAB_18024cd34;
    }
    uStack_848c = uStack_848c & 0xffffff00;
    auVar2._4_4_ = uStack_8494;
    auVar2._0_4_ = local_8498;
    auVar2._8_4_ = uStack_8490;
    auVar2._12_4_ = uStack_848c;
  }
  else {
LAB_18024cd34:
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (puVar23 + iVar12 == (undefined *)0x0) {
LAB_18024cd7f:
      uStack_84ac = uStack_84ac & 0xffffff00;
    }
    else {
      local_8498 = uVar28;
      uStack_8494 = uVar28;
      uStack_8490 = uVar28;
      cVar9 = FUN_1804514f0(&local_8498,puVar23 + iVar12,0xc);
      if (cVar9 == '\0') goto LAB_18024cd7f;
      local_84b8 = (undefined4 *)CONCAT44(uStack_8494,local_8498);
      uStack_84b0 = uStack_8490;
      uStack_84ac = CONCAT31(uStack_84ac._1_3_,1);
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    auVar2._8_4_ = uStack_84b0;
    auVar2._0_8_ = local_84b8;
    auVar2._12_4_ = uStack_84ac;
  }
  if (auVar2[0xc] != '\0') {
    auVar3 = vshufps_avx(auVar2,auVar2,0x55);
    auVar29 = ZEXT1664(auVar3);
    local_83e8 = CONCAT44(auVar3._0_4_,auVar2._0_4_);
    uVar18 = auVar2._8_4_;
    uStack_83e0 = CONCAT44(uStack_83e0._4_4_,uVar18);
    sVar11 = thunk_FUN_180624430();
    if (((0 < sVar11) || ((auVar29._0_4_ & 0x7f800000) == 0x7f800000)) ||
       (bVar26 = (uVar18 & 0x7f800000) != 0x7f800000, !bVar26)) {
      bVar26 = false;
    }
    local_836c._0_6_ = CONCAT15(bVar26,(undefined5)local_836c);
  }
  if (param_5 != (undefined4 *)0x0) {
    auVar29 = ZEXT464((uint)param_5[1]);
    local_83c8 = param_5[2];
    auVar30 = ZEXT464(local_83c8);
    local_83d8._8_4_ = *param_5;
    local_83d8._12_4_ = param_5[1];
    sVar11 = thunk_FUN_180624430();
    if (((sVar11 < 1) && (sVar11 = thunk_FUN_180624430(auVar29._0_8_), sVar11 < 1)) &&
       (sVar11 = thunk_FUN_180624430(auVar30._0_8_), sVar11 < 1)) {
      uVar10 = 1;
    }
    else {
      uVar10 = 0;
    }
    local_836c = CONCAT17(uVar10,(undefined7)local_836c);
  }
  iVar12 = DAT_180c644c4;
  if (DAT_180c644c4 == 0) {
    UVar14 = GetTickCount64();
    if (DAT_180c644c8 <= UVar14) {
      local_8498 = 0x808ee2b0;
      uStack_8494 = 1;
      iVar12 = FUN_1805f68d0(&DAT_1808ee2b0);
      if (iVar12 != 0) {
LAB_18024d8f2:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ee2fc == 0x7fffffff) {
        DAT_1808ee2fc = 0x7ffffffe;
LAB_18024d907:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c644c4 == 0) && (DAT_180c644c8 <= UVar14)) {
        DAT_180c644c4 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
        if (DAT_180c644c4 == 0) {
          DAT_180c644c8 = UVar14 + 1000;
        }
        else {
          DAT_180c644c8 = 0xffffffffffffffff;
        }
      }
      iVar12 = DAT_180c644c4;
      FUN_1805f68fc(&DAT_1808ee2b0);
      if (iVar12 != 0) goto LAB_18024cf0a;
    }
    uStack_848c = uStack_848c & 0xffffff00;
    auVar1._4_4_ = uStack_8494;
    auVar1._0_4_ = local_8498;
    auVar1._8_4_ = uStack_8490;
    auVar1._12_4_ = uStack_848c;
    goto LAB_18024cf7a;
  }
LAB_18024cf0a:
  lVar15 = FUN_18017ea70();
  *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
  if (puVar23 + iVar12 == (undefined *)0x0) {
LAB_18024cf55:
    uStack_84ac = uStack_84ac & 0xffffff00;
  }
  else {
    local_8498 = uVar28;
    uStack_8494 = uVar28;
    uStack_8490 = uVar28;
    cVar9 = FUN_1804514f0(&local_8498,puVar23 + iVar12,0xc);
    if (cVar9 == '\0') goto LAB_18024cf55;
    local_84b8 = (undefined4 *)CONCAT44(uStack_8494,local_8498);
    uStack_84b0 = uStack_8490;
    uStack_84ac = CONCAT31(uStack_84ac._1_3_,1);
  }
  lVar15 = FUN_18017ea70();
  if (*(int *)(lVar15 + 4) != 0) {
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
  }
  auVar1._8_4_ = uStack_84b0;
  auVar1._0_8_ = local_84b8;
  auVar1._12_4_ = uStack_84ac;
LAB_18024cf7a:
  if (auVar1[0xc] != '\0') {
    auVar3 = vshufps_avx(auVar1,auVar1,0x55);
    local_83a8 = FUN_180636420(auVar1._0_8_,auVar3._0_8_);
  }
  pppuVar19 = &local_8458;
  lVar15 = 2;
  pcVar20 = local_8358;
  do {
    ppuVar6 = pppuVar19[1];
    ppuVar7 = pppuVar19[2];
    ppuVar8 = pppuVar19[3];
    *(undefined ***)pcVar20 = *pppuVar19;
    *(undefined ***)(pcVar20 + 8) = ppuVar6;
    *(undefined ***)(pcVar20 + 0x10) = ppuVar7;
    *(undefined ***)(pcVar20 + 0x18) = ppuVar8;
    ppuVar6 = pppuVar19[5];
    ppuVar7 = pppuVar19[6];
    ppuVar8 = pppuVar19[7];
    *(undefined ***)(pcVar20 + 0x20) = pppuVar19[4];
    *(undefined ***)(pcVar20 + 0x28) = ppuVar6;
    *(undefined ***)(pcVar20 + 0x30) = ppuVar7;
    *(undefined ***)(pcVar20 + 0x38) = ppuVar8;
    ppuVar6 = pppuVar19[9];
    ppuVar7 = pppuVar19[10];
    ppuVar8 = pppuVar19[0xb];
    *(undefined ***)(pcVar20 + 0x40) = pppuVar19[8];
    *(undefined ***)(pcVar20 + 0x48) = ppuVar6;
    *(undefined ***)(pcVar20 + 0x50) = ppuVar7;
    *(undefined ***)(pcVar20 + 0x58) = ppuVar8;
    ppuVar6 = pppuVar19[0xd];
    *(undefined ***)(pcVar20 + 0x60) = pppuVar19[0xc];
    *(undefined ***)(pcVar20 + 0x68) = ppuVar6;
    ppuVar6 = pppuVar19[0xf];
    *(undefined ***)(pcVar20 + 0x70) = pppuVar19[0xe];
    *(undefined ***)(pcVar20 + 0x78) = ppuVar6;
    pppuVar19 = pppuVar19 + 0x10;
    lVar15 = lVar15 + -1;
    pcVar20 = pcVar20 + 0x80;
  } while (lVar15 != 0);
  FUN_180245330(puVar21,local_8358);
  plVar16 = (longlong *)FUN_18017bf40(&local_8498);
  ppuVar6 = local_8468;
  uVar4 = (*plVar16 - local_8460) / 1000;
  auVar27._8_8_ = uVar4;
  auVar27._0_8_ = 1;
  auVar3 = vpaddq_avx(auVar27,*(undefined1 (*) [16])(puVar21 + 0x8238));
  *(undefined1 (*) [16])(puVar21 + 0x8238) = auVar3;
  uVar17 = *(ulonglong *)(puVar21 + 0x8248);
  if (*(ulonglong *)(puVar21 + 0x8248) < uVar4) {
    uVar17 = uVar4;
  }
  *(ulonglong *)(puVar21 + 0x8248) = uVar17;
  if (((local_8470 == 0) && (*(longlong *)(puVar21 + 0x8208) != 0)) &&
     (*(undefined ***)(puVar21 + 0x8220) <= local_8468)) {
    *(undefined ***)(puVar21 + 0x8220) = local_8468 + 0xfa;
    FUN_18017bf40(&local_8468);
    pcVar20 = *(char **)(puVar21 + 0x8000);
    if ((pcVar20 == (char *)0x0) && (pcVar20 = *(char **)(puVar21 + 0x8208), (char *)0x20 < pcVar20)
       ) {
      pcVar20 = (char *)0x20;
    }
    FUN_18063ab10(local_8358,0,0x600);
    local_8658 = *(ulonglong *)(puVar21 + 0x8238);
    local_8650 = *(ulonglong *)(puVar21 + 0x8240) / local_8658;
    local_8640 = *(undefined8 *)(puVar21 + 0x8250);
    local_8648 = *(undefined8 *)(puVar21 + 0x8248);
    local_8660 = *(undefined8 *)(puVar21 + 0x8230);
    local_8668 = *(undefined8 *)(puVar21 + 0x8228);
    local_8678 = local_8478;
    local_8688 = ppuVar6;
    local_8680 = puVar23;
    local_8670 = pcVar20;
    FUN_18015ad60(local_8358,0x600,0xffffffffffffffff,
                  "window=%llu pawn=0x%llx controller=0x%llx records=%zu native_rewrites=%llu changed_duplicate_exits=%llu trace_samples=%llu trace_avg_us=%llu trace_max_us=%llu last_dump_us=%llu network_send_observed=0 server_pose=unverified"
                 );
    local_8688 = &PTR_180700558;
    if (local_8358[0] != '\0') {
      local_8688 = (undefined **)&DAT_1806bcfc0;
    }
    local_8680 = local_8358;
    FUN_1800f6900(0);
    pcVar25 = (char *)0x0;
    if (pcVar20 != (char *)0x0) {
      lVar15 = 0x6000;
      do {
        lVar5 = lVar15;
        if (*(longlong *)(puVar21 + 0x8000) == 0) {
          lVar5 = ((ulonglong)
                   (pcVar25 + (*(longlong *)(puVar21 + 0x8210) - (longlong)pcVar20) + 0x60) % 0x60)
                  * 0x100;
        }
        puVar22 = (undefined8 *)(puVar21 + lVar5);
        local_84d0 = *(undefined4 *)((longlong)puVar22 + 0xb4);
        local_84d8 = puVar22[4];
        local_84e0 = puVar22[3];
        local_84e8 = puVar22[2];
        local_84f0 = *(undefined4 *)(puVar22 + 0x1a);
        local_84f8 = *(undefined4 *)((longlong)puVar22 + 0xdc);
        local_8510 = *(undefined4 *)((longlong)puVar22 + 0xac);
        local_8520 = *(undefined4 *)(puVar22 + 0x15);
        local_8550 = *(undefined4 *)((longlong)puVar22 + 0xa4);
        local_8558 = *(undefined4 *)(puVar22 + 0x14);
        local_8560 = *(undefined4 *)((longlong)puVar22 + 0x9c);
        local_8578 = *(undefined4 *)(puVar22 + 0x16);
        local_8580 = *(undefined4 *)(puVar22 + 0x12);
        local_8588 = *(undefined4 *)((longlong)puVar22 + 0x8c);
        local_8590 = *(undefined4 *)(puVar22 + 0x11);
        local_85a0 = *(undefined4 *)((longlong)puVar22 + 0x84);
        local_85a8 = *(undefined4 *)(puVar22 + 0x10);
        local_85b0 = *(undefined4 *)((longlong)puVar22 + 0x7c);
        local_85c0 = *(undefined4 *)(puVar22 + 0xf);
        local_85c8 = *(undefined4 *)((longlong)puVar22 + 0x74);
        local_84c8 = *(undefined4 *)(puVar22 + 0x17);
        switch(*(undefined4 *)(puVar22 + 0xc)) {
        case 0:
          local_8670 = "post_crc_prepare";
          break;
        case 1:
          local_8670 = "before_native_create_move";
          break;
        case 2:
          local_8670 = "after_native_create_move";
          break;
        case 3:
          local_8670 = "duplicate_exit";
          break;
        case 4:
          local_8670 = "after_native_frame_7";
          break;
        case 5:
          local_8670 = "after_native_frame_12";
          break;
        case 6:
          local_8670 = "animation_reader_native";
          break;
        case 7:
          local_8670 = "animation_reader_presented";
          break;
        default:
          local_8670 = "unknown";
        }
        local_8500 = *(undefined4 *)((longlong)puVar22 + 0xec);
        local_8508 = *(undefined4 *)(puVar22 + 0x1d);
        local_8518 = *(undefined4 *)((longlong)puVar22 + 0xcc);
        local_8528 = *(undefined4 *)(puVar22 + 0x19);
        local_8530 = *(undefined4 *)((longlong)puVar22 + 0xc4);
        local_8538 = *(undefined4 *)(puVar22 + 0x1c);
        local_8540 = *(undefined4 *)((longlong)puVar22 + 0xe4);
        local_8548 = puVar22[5];
        local_8568 = *(undefined4 *)(puVar22 + 0x18);
        local_8570 = *(undefined4 *)((longlong)puVar22 + 0xbc);
        local_8598 = *(undefined *)((longlong)puVar22 + 0xf3);
        local_85b8 = *(undefined *)((longlong)puVar22 + 0xf2);
        local_85d0 = *(undefined4 *)(puVar22 + 0xe);
        local_85d8 = *(undefined *)((longlong)puVar22 + 0xf1);
        local_85e0 = *(undefined4 *)(puVar22 + 0x13);
        local_85e8 = *(undefined4 *)((longlong)puVar22 + 0x94);
        local_85f0 = *(undefined4 *)((longlong)puVar22 + 0x6c);
        local_85f8 = *(undefined4 *)(puVar22 + 0xd);
        local_8600 = *(undefined4 *)((longlong)puVar22 + 100);
        local_8608 = puVar22[10];
        local_8610 = *(undefined4 *)(puVar22 + 0x1b);
        local_8618 = *(undefined4 *)((longlong)puVar22 + 0xd4);
        local_8620 = *(undefined *)((longlong)puVar22 + 0xf6);
        local_8628 = *(undefined *)((longlong)puVar22 + 0xf5);
        local_8630 = *(undefined *)((longlong)puVar22 + 0xf4);
        local_8638 = *(undefined1 *)(puVar22 + 0x1f);
        local_8640 = CONCAT71(local_8640._1_7_,*(undefined *)((longlong)puVar22 + 0xf7));
        local_8648 = CONCAT71(local_8648._1_7_,*(undefined *)((longlong)puVar22 + 0xf9));
        local_8650 = CONCAT71(local_8650._1_7_,*(undefined1 *)(puVar22 + 0x1e));
        local_8658 = puVar22[9];
        local_8660 = puVar22[8];
        local_8668 = puVar22[0xb];
        local_8678 = (undefined *)*puVar22;
        local_8680 = (char *)puVar22[1];
        local_8688 = ppuVar6;
        FUN_18024fb40();
        pcVar25 = pcVar25 + 1;
        lVar15 = lVar15 + 0x100;
      } while (pcVar25 < pcVar20);
    }
    *(undefined8 *)(puVar21 + 0x8230) = 0;
    *(undefined8 *)(puVar21 + 0x8228) = 0;
    *(undefined8 *)(puVar21 + 0x8000) = 0;
    *(undefined8 *)(puVar21 + 0x8248) = 0;
    *(undefined8 *)(puVar21 + 0x8240) = 0;
    *(undefined8 *)(puVar21 + 0x8238) = 0;
    plVar16 = (longlong *)FUN_18017bf40(&local_8460);
    *(longlong *)(puVar21 + 0x8250) = (*plVar16 - (longlong)local_8468) / 1000;
  }
}



