// FUN_18047f690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047f690 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18047f690(longlong param_1,undefined8 param_2,float *param_3)

{
  undefined2 uVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined4 uVar7;
  float fVar8;
  char *pcVar9;
  undefined2 *puVar10;
  char *pcVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float *pfVar18;
  int *piVar19;
  int *piVar20;
  uint uVar21;
  uint uVar22;
  undefined8 *puVar23;
  int iVar24;
  longlong lVar25;
  longlong lVar26;
  ulonglong *puVar27;
  ulonglong *puVar28;
  float fVar29;
  float fVar30;
  undefined1 extraout_var [56];
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  float fVar36;
  undefined1 auVar37 [64];
  float fVar38;
  undefined1 auVar39 [64];
  undefined8 uVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [16];
  undefined1 auVar45 [64];
  undefined8 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [64];
  undefined1 auVar49 [16];
  undefined1 auVar50 [64];
  undefined1 auVar51 [16];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [16];
  undefined1 auVar55 [64];
  undefined1 auStack_588 [32];
  float *local_568;
  float *local_560;
  undefined8 local_558;
  undefined8 local_550;
  undefined8 local_548;
  undefined4 local_538;
  undefined8 local_528;
  int local_520;
  float local_51c;
  float *local_518;
  float local_510;
  float local_50c;
  longlong local_508;
  float local_500;
  float local_4fc;
  float local_4f8;
  float local_4f4;
  undefined4 local_4f0;
  float local_4ec;
  char *local_4e8 [4];
  char *local_4c8;
  char *local_4c0;
  char *local_4b8;
  char *local_4b0;
  undefined *local_4a8;
  undefined *local_4a0;
  undefined *local_498;
  char *local_490;
  undefined *local_488 [4];
  undefined *local_468;
  undefined *local_460;
  undefined *local_458;
  undefined *local_450;
  undefined *local_448;
  undefined *local_440;
  undefined *local_438;
  undefined *local_430;
  undefined8 local_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  float local_3f8;
  float local_3f4;
  undefined8 local_3f0;
  char *local_3e8;
  char *local_3e0;
  float local_3d8;
  float local_3d4;
  float local_3d0 [2];
  float local_3c8;
  float local_3c4;
  float local_3c0;
  float local_3bc;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_39c;
  float local_398;
  float local_394;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  char *pcStack_378;
  float *local_370;
  float *local_368;
  undefined8 local_358;
  undefined8 local_350;
  int local_348;
  float afStack_344 [5];
  ulonglong auStack_330 [73];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_588;
  auVar39 = ZEXT464(0x3f000000);
  fVar29 = 39.0;
  fVar30 = 35.5;
  fVar38 = 12.0;
  local_3d0[0] = *(float *)(DAT_180bb8ae8 + 0x40);
  fVar36 = 8.5;
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 39.0 + 0.5)),1);
  local_3f8 = auVar42._0_4_ + *param_3;
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 35.5 + 0.5)),1);
  local_3f4 = auVar42._0_4_ + param_3[1];
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 12.0 + 0.5)),1);
  local_3d8 = auVar42._0_4_ + *param_3;
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 8.5 + 0.5)),1);
  local_3d4 = auVar42._0_4_ + param_3[1];
  uVar21 = 0;
  local_560 = (float *)((ulonglong)local_560 & 0xffffffff00000000);
  local_568 = (float *)CONCAT44(local_568._4_4_,DAT_180b0a41c * 6.5);
  local_518 = param_3;
  local_508 = param_1;
  local_3f0 = param_2;
  FUN_1804df870(param_2,&local_3d8,&local_3f8,DAT_180b0a448);
  fVar8 = 2.0;
  if ((DAT_180cd6c38 == 0) ||
     (lVar26 = (**(code **)(*(longlong *)DAT_180cd6c38 + 0x10))(), lVar26 == 0)) {
    auVar34 = ZEXT464(0x41866666);
    auVar50 = ZEXT464(0x3f800000);
    local_538 = 0;
    local_548 = 0;
    auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 16.8 + auVar39._0_4_)),1);
    local_550 = 0;
    auVar42 = vmaxss_avx(auVar50._0_16_,auVar42);
    local_558 = 0;
    auVar52 = ZEXT864(0);
    local_560 = (float *)&DAT_1807d4e0c;
    local_568 = (float *)((ulonglong)local_568 & 0xffffffff00000000);
    FUN_1804ea040(&local_528,DAT_180c62cb8,auVar42._0_8_,0x7f7fffff);
    local_3f8 = (DAT_180b0a41c * 25.6 + *param_3) - auVar39._0_4_ * (float)local_528;
    local_558 = CONCAT44(local_558._4_4_,DAT_180b0a41c * fVar8);
    local_560 = (float *)CONCAT44(local_560._4_4_,DAT_180b0a43c);
    local_3f4 = DAT_180b0a41c * 17.1 + param_3[1];
    local_568 = (float *)CONCAT44(local_568._4_4_,DAT_180b0a44c);
    FUN_1804635b0(local_3f0,DAT_180c62cb8,auVar34._0_8_,&local_3f8);
  }
  else {
    auVar50 = ZEXT464(0x3f800000);
    fVar31 = auVar39._0_4_;
    auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar29 + fVar31)),1);
    local_3c8 = auVar42._0_4_ + *param_3;
    auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar30 + fVar31)),1);
    local_3c4 = auVar42._0_4_ + param_3[1];
    auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar38 + fVar31)),1);
    local_510 = auVar42._0_4_ + *param_3;
    auVar52 = ZEXT864(0);
    auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar36 + fVar31)),1);
    local_50c = auVar42._0_4_ + param_3[1];
    local_3f8 = 1.0;
    local_3f4 = 1.0;
    local_3d8 = 0.0;
    local_3d4 = 0.0;
    if (DAT_180cd6c38 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805fa874();
    }
    local_358 = 0;
    local_350 = (**(code **)(*(longlong *)DAT_180cd6c38 + 0x10))();
    local_560 = &local_3f8;
    local_558 = CONCAT44(local_558._4_4_,0xffffffff);
    local_568 = &local_3d8;
    FUN_1804e0320(local_3f0,&local_358,&local_510,&local_3c8);
  }
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 47.15 + auVar39._0_4_)),1);
  local_3f8 = auVar42._0_4_ + *param_3;
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 12.6 + auVar39._0_4_)),1);
  local_3f4 = auVar42._0_4_ + param_3[1];
  local_558 = 0;
  local_560 = (float *)0x180829f80;
  local_568._0_4_ = (float)DAT_180b0a444;
  FUN_180463450(local_3f0,DAT_180c62cb0,0x41740000,&local_3f8);
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 48.15 + auVar39._0_4_)),1);
  local_3f8 = auVar42._0_4_ + *param_3;
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 26.45 + auVar39._0_4_)),1);
  local_3f4 = auVar42._0_4_ + param_3[1];
  local_558 = 0;
  local_560 = (float *)0x180830c20;
  local_568._0_4_ = (float)DAT_180b0a440;
  FUN_180463450(local_3f0,DAT_180c62ca8,0x41073333,&local_3f8);
  local_51c = DAT_180b0a41c * 126.0 + *param_3;
  auVar37 = ZEXT464((uint)local_51c);
  fVar36 = 8.0;
  local_510 = DAT_180b0a41c * 8.0 + *param_3;
  auVar34 = ZEXT464((uint)local_510);
  local_568._0_4_ = (float)DAT_180b0a524;
  FUN_180463160(local_3f0,local_510,local_51c,DAT_180b0a41c * 43.0 + param_3[1]);
  local_568 = (float *)CONCAT44(local_568._4_4_,DAT_180b0a524);
  FUN_180463160(local_3f0,auVar34._0_8_,auVar37._0_8_,DAT_180b0a41c * 440.0 + param_3[1]);
  local_4e8[0] = "Combat";
  local_4e8[1] = "Movement";
  local_4e8[2] = "Players";
  local_4e8[3] = "View";
  local_4c8 = "World";
  local_4c0 = "Grenades";
  local_4b8 = "Items";
  local_4b0 = "Skins";
  local_4a8 = &DAT_180811f20;
  local_4a0 = &DAT_180830bfc;
  local_498 = &DAT_180830cb0;
  local_490 = "Configs";
  local_488[0] = &DAT_180830b64;
  local_488[1] = &DAT_18082a27c;
  local_488[2] = &DAT_18082a250;
  local_488[3] = &DAT_180829dc0;
  local_468 = &DAT_180830b38;
  local_460 = &DAT_180829f9c;
  local_458 = &DAT_180829fa4;
  local_450 = &DAT_18082a240;
  local_428 = 0x700000000;
  uStack_420 = 0x900000002;
  uStack_418 = 0xc00000003;
  uStack_410 = 0x40000000d;
  local_408 = 0x50000000b;
  uStack_400 = 0x60000000a;
  local_448 = &DAT_180830b50;
  auVar42 = vpcmpeqd_avx(ZEXT416(*(uint *)(param_1 + 0x24)),SUB6416(ZEXT464(0),0));
  auVar41 = auVar52._0_16_;
  auVar54 = vcmpss_avx(ZEXT416(*(uint *)(param_1 + 0x40)),auVar41,1);
  local_440 = &DAT_180830b54;
  auVar42 = vblendvps_avx(auVar41,auVar50._0_16_,auVar42);
  auVar54 = vblendvps_avx(ZEXT416(*(uint *)(param_1 + 0x40)),auVar42,auVar54);
  local_438 = &DAT_180830b44;
  local_430 = &DAT_180829a44;
  auVar52 = ZEXT1664(auVar54);
  auVar34 = ZEXT1664(auVar42);
  auVar37 = ZEXT1664(auVar39._0_16_);
  auVar39 = ZEXT1664(auVar41);
  auVar50 = ZEXT1664(auVar50._0_16_);
  fVar29 = (float)FUN_180627ae0();
  fVar29 = (auVar50._0_4_ - fVar29) * (auVar34._0_4_ - auVar52._0_4_) + auVar52._0_4_;
  fVar30 = (fVar8 - fVar29) * fVar29;
  auVar52 = ZEXT464((uint)(fVar30 * 49.0));
  *(float *)(param_1 + 0x40) = fVar29;
  fVar29 = ((347.5 - fVar30 * 49.0) - 24.0) / 11.0;
  iVar13 = 0;
  iVar14 = 0;
  local_520 = 0;
  uVar17 = 0;
  puVar23 = &local_428;
  lVar26 = 0;
  piVar20 = &local_348;
  puVar28 = auStack_330 + 2;
  do {
    if ((uVar17 < 10) && ((0x284U >> (uVar17 & 0x1f) & 1) != 0)) {
      iVar13 = iVar13 + 1;
      bVar6 = true;
      local_520 = iVar13;
    }
    else {
      bVar6 = false;
    }
    auVar42 = vpcmpeqd_avx(ZEXT416(uVar17),SUB6416(ZEXT464(0),0));
    auVar42 = vblendvps_avx(auVar52._0_16_,auVar39._0_16_,auVar42);
    fVar36 = (float)(int)uVar17 * fVar29 + 61.0 + auVar42._0_4_ + (float)iVar13 * fVar36;
    if (bVar6) {
      fVar8 = DAT_180b0a41c * 4.0;
      auVar34 = ZEXT464((uint)DAT_180b0a41c);
      auVar37 = ZEXT1664(auVar37._0_16_);
      auVar39 = ZEXT1664(auVar39._0_16_);
      auVar50 = ZEXT1664(auVar50._0_16_);
      auVar52 = ZEXT1664(auVar52._0_16_);
      uVar7 = FUN_180462ad0(DAT_180b0a524,DAT_180b0a53c);
      local_568 = (float *)CONCAT44(local_568._4_4_,uVar7);
      FUN_180463160(local_3f0,fVar8 + local_510,local_51c - fVar8,
                    (fVar36 - ((fVar29 + 8.0) - 23.5) * auVar37._0_4_) * auVar34._0_4_ +
                    local_518[1]);
      iVar13 = local_520;
    }
    lVar25 = local_508;
    auVar41 = auVar50._0_16_;
    auVar54 = auVar39._0_16_;
    auVar42 = auVar37._0_16_;
    iVar24 = iVar14 + 1;
    local_390 = (float *)CONCAT44(local_390._4_4_,*(undefined4 *)puVar23);
    puVar27 = puVar28 + 5;
    pcStack_378 = *(char **)((longlong)local_4e8 + lVar26);
    local_370 = *(float **)((longlong)local_4e8 + lVar26 + 0x60);
    uStack_388 = (float *)CONCAT44(auVar39._0_4_,fVar36);
    uStack_380 = (undefined8 *)CONCAT44(uStack_380._4_4_,auVar50._0_4_);
    local_390 = (float *)CONCAT44(0xffffffff,*(undefined4 *)puVar23);
    *(float **)piVar20 = local_390;
    *(float **)(piVar20 + 2) = uStack_388;
    *(undefined8 **)(piVar20 + 4) = uStack_380;
    *(char **)(piVar20 + 6) = pcStack_378;
    *(float **)(piVar20 + 8) = local_370;
    piVar19 = piVar20 + 10;
    if ((uVar17 != 0) || (fVar30 <= 0.01)) {
      iVar14 = iVar24;
      if (0xb < (int)(uVar17 + 1)) break;
    }
    else {
      uStack_388 = (float *)CONCAT44(fVar38,fVar30 * 24.5 + fVar36);
      uStack_380 = (undefined8 *)CONCAT44(uStack_380._4_4_,fVar30);
      piVar19[0] = 0;
      piVar19[1] = 0;
      *(float **)(piVar20 + 0xc) = uStack_388;
      *(undefined8 **)(piVar20 + 0xe) = uStack_380;
      *(char **)(piVar20 + 0x10) = "Legitbot";
      *(undefined **)(piVar20 + 0x12) = &DAT_180830b40;
      piVar19 = piVar20 + 0x1e;
      uStack_388 = (float *)CONCAT44(fVar38,auVar52._0_4_ + fVar36);
      uStack_380 = (undefined8 *)CONCAT44(uStack_380._4_4_,fVar30);
      local_390 = (float *)0x100000000;
      pcStack_378 = "Ragebot";
      *puVar27 = 0x100000000;
      puVar28[6] = (ulonglong)uStack_388;
      puVar28[7] = (ulonglong)uStack_380;
      puVar28[8] = (ulonglong)"Ragebot";
      local_370 = (float *)&DAT_18082a244;
      puVar28[9] = (ulonglong)&DAT_18082a244;
      puVar27 = puVar28 + 0xf;
      iVar14 = iVar14 + 3;
    }
    uVar17 = uVar17 + 1;
    lVar26 = lVar26 + 8;
    puVar23 = (undefined8 *)((longlong)puVar23 + 4);
    fVar36 = 8.0;
    piVar20 = piVar19;
    puVar28 = puVar27;
  } while( true );
  pcVar9 = (char *)(longlong)iVar24;
  local_3e8 = pcVar9;
  auVar52 = ZEXT464(0xbf800000);
  auVar48 = ZEXT464(0x41800000);
  auVar55 = ZEXT464(0x42fd0000);
  auVar45 = ZEXT464(0x437f0000);
  auVar44 = auVar45._0_16_;
  auVar53 = ZEXT464(0x41100000);
  local_3b8 = 9.0;
  auVar34 = ZEXT1664(auVar54);
  if (0 < iVar24) {
    pfVar18 = afStack_344 + 1;
    do {
      fVar29 = pfVar18[-1];
      if ((int)fVar29 < 0) {
        if ((*(float *)(lVar25 + 0x24) == pfVar18[-2]) && (pfVar18[-2] != 0.0)) {
LAB_18048018c:
          auVar52 = ZEXT464((uint)*pfVar18);
          auVar34 = ZEXT464((uint)pfVar18[1]);
        }
      }
      else if ((*(float *)(lVar25 + 0x24) == 0.0) && (DAT_180cd6cb8 != 0)) {
        auVar52 = ZEXT1664(auVar52._0_16_);
        auVar37 = ZEXT1664(auVar37._0_16_);
        auVar34 = ZEXT1664(auVar34._0_16_);
        auVar39 = ZEXT1664(auVar39._0_16_);
        auVar45 = ZEXT1664(auVar45._0_16_);
        auVar48 = ZEXT1664(auVar48._0_16_);
        auVar50 = ZEXT1664(auVar50._0_16_);
        auVar53 = ZEXT1664(auVar53._0_16_);
        auVar55 = ZEXT1664(auVar55._0_16_);
        fVar30 = (float)(**(code **)(*(longlong *)DAT_180cd6cb8 + 0x10))();
        if (fVar30 == fVar29) goto LAB_18048018c;
      }
      pfVar18 = pfVar18 + 10;
      pcVar9 = pcVar9 + -1;
    } while (pcVar9 != (char *)0x0);
    if (auVar52._0_4_ < auVar39._0_4_) {
      fVar29 = 8.0;
      auVar34 = ZEXT464(0x41bc0000);
      auVar52 = ZEXT464(0x40a00000);
      local_528 = 0;
      pfVar18 = local_518;
    }
    else {
      auVar42 = vcmpss_avx(ZEXT416(*(uint *)(lVar25 + 0x44)),auVar39._0_16_,1);
      auVar42 = vblendvps_avx(ZEXT416(*(uint *)(lVar25 + 0x44)),auVar52._0_16_,auVar42);
      auVar35 = ZEXT1664(auVar42);
      auVar52 = ZEXT1664(auVar52._0_16_);
      auVar37 = ZEXT1664(auVar37._0_16_);
      auVar34 = ZEXT1664(auVar34._0_16_);
      auVar39 = ZEXT1664(auVar39._0_16_);
      auVar45 = ZEXT1664(auVar45._0_16_);
      auVar48 = ZEXT1664(auVar48._0_16_);
      auVar50 = ZEXT1664(auVar50._0_16_);
      auVar53 = ZEXT1664(auVar53._0_16_);
      auVar55 = ZEXT1664(auVar55._0_16_);
      fVar29 = (float)FUN_180627ae0();
      uVar40 = auVar34._0_8_;
      uVar46 = auVar48._0_8_;
      fVar30 = auVar52._0_4_;
      fVar29 = (auVar50._0_4_ - fVar29) * (fVar30 - auVar35._0_4_) + auVar35._0_4_;
      *(float *)(lVar25 + 0x44) = fVar29;
      if (ABS(fVar29 - fVar30) < 0.01) {
        *(float *)(lVar25 + 0x44) = fVar30;
      }
      plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
      pcVar9 = "##marker_indent";
      uVar15 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
      cVar12 = '#';
      uVar17 = uVar15;
      do {
        pcVar9 = pcVar9 + 1;
        if (((cVar12 == '#') && (*pcVar9 == '#')) && (pcVar9[1] == '#')) {
          pcVar9 = pcVar9 + 2;
          uVar17 = uVar15;
        }
        else {
          uVar17 = crc32(uVar17,cVar12);
        }
        cVar12 = *pcVar9;
      } while (cVar12 != '\0');
      uVar17 = ~uVar17;
      if (*(uint *)(*plVar2 + 0x1534) == uVar17) {
        FUN_1804cf810(uVar17,0xb,"##marker_indent");
        uVar40 = auVar34._0_8_;
        uVar46 = auVar48._0_8_;
      }
      fVar30 = (float)FUN_1804aaa10(uVar17,uVar40,uVar46);
      pfVar18 = local_518;
      fVar29 = *(float *)(lVar25 + 0x44);
      fVar36 = auVar52._0_4_;
      auVar42 = vminss_avx(ZEXT416((uint)(ABS(fVar36 - fVar29) * 0.25)),ZEXT416(0x40c00000));
      if (fVar29 <= fVar36) {
        fVar8 = fVar29;
      }
      else {
        fVar8 = fVar29 - auVar42._0_4_;
      }
      auVar34 = ZEXT464(0x41bc0000);
      fVar38 = fVar29 + 23.5;
      if (fVar29 < fVar36) {
        fVar38 = fVar38 + auVar42._0_4_;
      }
      fVar29 = 8.0;
      fVar36 = auVar37._0_4_;
      auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar30 + 8.0) * DAT_180b0a41c + fVar36)),1);
      local_398 = auVar42._0_4_ + *local_518;
      auVar52 = ZEXT464(0x40a00000);
      auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar8 + fVar36)),1);
      local_394 = auVar42._0_4_ + local_518[1];
      auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * auVar55._0_4_ + fVar36)),1);
      local_3a0 = auVar42._0_4_ + *local_518;
      auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar38 + fVar36)),1);
      local_39c = auVar42._0_4_ + local_518[1];
      local_560 = (float *)((ulonglong)local_560 & 0xffffffff00000000);
      local_568 = (float *)CONCAT44(local_568._4_4_,DAT_180b0a41c * 5.0);
      FUN_1804df870(local_3f0,&local_398,&local_3a0,DAT_180b0a4b4);
      local_528 = 0;
    }
    do {
      lVar26 = local_528;
      fVar36 = auVar55._0_4_;
      auVar51 = auVar53._0_16_;
      auVar49 = auVar50._0_16_;
      auVar44 = auVar45._0_16_;
      auVar41 = auVar39._0_16_;
      auVar54 = auVar52._0_16_;
      auVar47 = auVar34._0_16_;
      auVar42 = auVar37._0_16_;
      fVar30 = afStack_344[local_528 * 10];
      if ((int)fVar30 < 0) {
        if ((*(float *)(lVar25 + 0x24) != afStack_344[local_528 * 10 + -1]) ||
           (afStack_344[local_528 * 10 + -1] == 0.0)) goto LAB_18048042d;
LAB_180480542:
        uVar17 = 1;
      }
      else {
        if ((*(float *)(lVar25 + 0x24) == 0.0) && (DAT_180cd6cb8 != 0)) {
          auVar39 = ZEXT1664(auVar42);
          auVar52 = ZEXT1664(auVar54);
          auVar50 = ZEXT1664(auVar41);
          auVar34 = ZEXT1664(auVar44);
          auVar37 = ZEXT1664(auVar47);
          auVar45 = ZEXT1664(auVar49);
          auVar48 = ZEXT1664(auVar51);
          auVar53 = ZEXT1664(auVar55._0_16_);
          fVar8 = (float)(**(code **)(*(longlong *)DAT_180cd6cb8 + 0x10))();
          fVar36 = auVar53._0_4_;
          auVar51 = auVar48._0_16_;
          auVar49 = auVar45._0_16_;
          auVar44 = auVar34._0_16_;
          auVar41 = auVar50._0_16_;
          auVar54 = auVar52._0_16_;
          auVar47 = auVar37._0_16_;
          auVar42 = auVar39._0_16_;
          if (fVar8 == fVar30) goto LAB_180480542;
        }
LAB_18048042d:
        uVar17 = 0;
      }
      fVar8 = auVar42._0_4_;
      auVar5 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)((fVar29 + afStack_344[lVar26 * 10 + 2]) * DAT_180b0a41c +
                                          fVar8)),1);
      local_3d8 = auVar5._0_4_ + *pfVar18;
      auVar5 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(DAT_180b0a41c * afStack_344[lVar26 * 10 + 1] + fVar8)),1)
      ;
      local_3d4 = auVar5._0_4_ + pfVar18[1];
      auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar36 + fVar8)),1);
      local_3c8 = auVar5._0_4_ + *pfVar18;
      auVar5 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)((afStack_344[lVar26 * 10 + 1] + auVar47._0_4_) *
                                           DAT_180b0a41c + fVar8)),1);
      local_3c4 = auVar5._0_4_ + pfVar18[1];
      lVar25 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
      auVar37 = ZEXT1664(auVar42);
      auVar52 = ZEXT1664(auVar54);
      auVar39 = ZEXT1664(auVar41);
      auVar45 = ZEXT1664(auVar44);
      auVar34 = ZEXT1664(auVar47);
      auVar50 = ZEXT1664(auVar49);
      auVar53 = ZEXT1664(auVar51);
      uVar7 = FUN_1804c2670(lVar25,(int)afStack_344[lVar26 * 10 + -1] * 4 + 1 + (int)fVar30);
      iVar13 = *(int *)(lVar25 + 0x10c);
      piVar20 = (int *)(lVar25 + 0x108);
      if (*piVar20 == iVar13) {
        iVar14 = *piVar20 + 1;
        if (iVar13 == 0) {
          iVar13 = 8;
        }
        else {
          iVar13 = iVar13 / 2 + iVar13;
        }
        if (iVar14 < iVar13) {
          iVar14 = iVar13;
        }
        FUN_1804d14d0(piVar20,iVar14);
      }
      *(undefined4 *)(*(longlong *)(lVar25 + 0x110) + (longlong)*piVar20 * 4) = uVar7;
      *piVar20 = *piVar20 + 1;
      plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
      pcVar9 = "#tab";
      uVar16 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
      cVar12 = '#';
      uVar15 = uVar16;
      do {
        if (((cVar12 == '#') && (*pcVar9 == '#')) && (pcVar9[1] == '#')) {
          pcVar9 = pcVar9 + 2;
          uVar15 = uVar16;
        }
        else {
          uVar15 = crc32(uVar15,cVar12);
        }
        cVar12 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar12 != '\0');
      uVar15 = ~uVar15;
      if (*(uint *)(*plVar2 + 0x1534) == uVar15) {
        FUN_1804cf810(uVar15,0xb,&DAT_180830c8c);
      }
      local_568 = (float *)CONCAT71(local_568._1_7_,auVar37._0_4_ < afStack_344[lVar26 * 10 + 3]);
      puVar10 = (undefined2 *)FUN_1804aad60(&local_520,uVar15,&local_3d8,&local_3c8);
      fVar29 = afStack_344[lVar26 * 10 + -1];
      cVar12 = *(char *)(puVar10 + 1);
      local_51c = (float)CONCAT22(local_51c._2_2_,*puVar10);
      if (((fVar29 == 0.0) && ((int)fVar30 < 0)) && (DAT_180cd65f8 != 0)) {
        (**(code **)(*(longlong *)DAT_180cd65f8 + 0x10))(DAT_180cd65f8,&local_3d8,&local_3c8);
      }
      if (cVar12 != '\0') {
        if (((fVar29 == 0.0) && (-1 < (int)afStack_344[lVar26 * 10])) && (DAT_180cd6d78 != 0)) {
          local_3d0[0] = afStack_344[lVar26 * 10];
          (**(code **)(*(longlong *)DAT_180cd6d78 + 0x10))(DAT_180cd6d78,local_3d0);
          *(undefined4 *)(local_508 + 0x24) = 0;
          *(undefined4 *)(local_508 + 0x71b4) = 0;
        }
        if ((*(float *)(local_508 + 0x24) == fVar29) &&
           (((int)fVar30 < 0 || (*(float *)(local_508 + 0x28) == afStack_344[lVar26 * 10])))) {
          if ((fVar29 == 2.8026e-45) && (afStack_344[lVar26 * 10] == 1.4013e-45))
          goto LAB_18048070c;
        }
        else {
          *(float *)(local_508 + 0x24) = fVar29;
          if (-1 < (int)fVar30) {
            *(float *)(local_508 + 0x28) = afStack_344[lVar26 * 10];
          }
          *(undefined4 *)(local_508 + 0x71b4) = 0;
          if ((fVar29 != 2.8026e-45) || (afStack_344[lVar26 * 10] != 1.4013e-45)) {
LAB_18048070c:
            *(undefined4 *)(local_508 + 0x2c) = 0;
          }
        }
      }
      fVar29 = afStack_344[lVar26 * 10 + 3];
      auVar42 = vpcmpeqd_avx(ZEXT416(uVar17),SUB6416(ZEXT464(0),0));
      auVar42 = vblendvps_avx(auVar50._0_16_,auVar39._0_16_,auVar42);
      fVar30 = (float)FUN_1804aaa10(uVar15 + 1,auVar42._0_8_,0x41a00000);
      auVar55 = ZEXT464((uint)(fVar30 * fVar29));
      auVar42 = vpcmpeqd_avx(ZEXT416((uint)local_51c & 0xff),SUB6416(ZEXT464(0),0));
      auVar42 = vblendvps_avx(auVar50._0_16_,auVar39._0_16_,auVar42);
      fVar30 = (float)FUN_1804aaa10(uVar15 + 2,auVar42._0_8_,0x41800000);
      fVar36 = auVar52._0_4_;
      local_3d0[0] = fVar30 * (auVar50._0_4_ - auVar55._0_4_) * fVar29;
      auVar48 = ZEXT464((uint)local_3d0[0]);
      iVar13 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar13 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
        fVar36 = auVar52._0_4_;
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar13 + -1;
      }
      fVar30 = auVar39._0_4_;
      if (fVar30 < auVar48._0_4_) {
        fVar8 = ((float)(DAT_180b0a508 >> 0x18) / auVar45._0_4_) * auVar48._0_4_;
        if (fVar30 <= fVar8) {
          auVar42 = vminss_avx(auVar50._0_16_,ZEXT416((uint)fVar8));
          fVar30 = auVar42._0_4_;
        }
        local_560 = (float *)((ulonglong)local_560 & 0xffffffff00000000);
        local_568 = (float *)CONCAT44(local_568._4_4_,fVar36 * DAT_180b0a41c);
        FUN_1804df870(local_3f0,&local_3d8,&local_3c8,
                      (int)(longlong)(fVar30 * auVar45._0_4_ + auVar37._0_4_) << 0x18 |
                      DAT_180b0a508 & 0xffffff);
      }
      uVar40 = local_3f0;
      fVar30 = auVar39._0_4_;
      fVar38 = auVar37._0_4_;
      fVar36 = (local_3c4 + local_3d4) * fVar38;
      auVar42 = auVar50._0_16_;
      fVar8 = fVar30;
      if (fVar30 <= auVar48._0_4_) {
        auVar54 = vminss_avx(auVar42,auVar48._0_16_);
        fVar8 = auVar54._0_4_;
      }
      uVar15 = 0;
      uVar17 = 0;
      do {
        fVar31 = (float)(DAT_180b0a4d8 >> (uVar17 & 0x1f) & 0xff);
        uVar15 = uVar15 | (int)(longlong)
                               (((float)(DAT_180b0a4ec >> (uVar17 & 0x1f) & 0xff) - fVar31) * fVar8
                                + fVar31 + fVar38) << (uVar17 & 0x1f);
        uVar17 = uVar17 + 8;
      } while ((int)uVar17 < 0x20);
      fVar31 = auVar55._0_4_;
      auVar54 = auVar55._0_16_;
      fVar8 = fVar30;
      if (fVar30 <= fVar31) {
        auVar41 = vminss_avx(auVar42,auVar54);
        fVar8 = auVar41._0_4_;
      }
      uVar16 = 0;
      uVar17 = 0;
      do {
        fVar32 = (float)(uVar15 >> (uVar17 & 0x1f) & 0xff);
        uVar16 = uVar16 | (int)(longlong)
                               (((float)(DAT_180b0a50c >> (uVar17 & 0x1f) & 0xff) - fVar32) * fVar8
                                + fVar32 + fVar38) << (uVar17 & 0x1f);
        uVar17 = uVar17 + 8;
      } while ((int)uVar17 < 0x20);
      fVar43 = auVar45._0_4_;
      fVar8 = ((float)(uVar16 >> 0x18) / fVar43) * fVar29;
      fVar32 = fVar30;
      if (fVar30 <= fVar8) {
        auVar41 = vminss_avx(auVar42,ZEXT416((uint)fVar8));
        fVar32 = auVar41._0_4_;
      }
      uVar17 = (int)(longlong)(fVar32 * fVar43 + fVar38) << 0x18 | uVar16 & 0xffffff;
      fVar8 = fVar30;
      if (fVar30 <= auVar48._0_4_) {
        auVar41 = vminss_avx(auVar42,auVar48._0_16_);
        fVar8 = auVar41._0_4_;
      }
      uVar16 = 0;
      uVar15 = 0;
      do {
        fVar32 = (float)(DAT_180b0a53c >> (uVar15 & 0x1f) & 0xff);
        uVar16 = uVar16 | (int)(longlong)
                               (((float)(DAT_180b0a4a8 >> (uVar15 & 0x1f) & 0xff) - fVar32) * fVar8
                                + fVar32 + fVar38) << (uVar15 & 0x1f);
        uVar15 = uVar15 + 8;
      } while ((int)uVar15 < 0x20);
      fVar8 = fVar30;
      if (fVar30 <= fVar31) {
        auVar41 = vminss_avx(auVar42,auVar54);
        fVar8 = auVar41._0_4_;
      }
      uVar22 = 0;
      uVar15 = 0;
      do {
        fVar32 = (float)(uVar16 >> (uVar15 & 0x1f) & 0xff);
        uVar22 = uVar22 | (int)(longlong)
                               (((float)(DAT_180b0a424 >> (uVar15 & 0x1f) & 0xff) - fVar32) * fVar8
                                + fVar32 + fVar38) << (uVar15 & 0x1f);
        uVar15 = uVar15 + 8;
      } while ((int)uVar15 < 0x20);
      fVar29 = ((float)(uVar22 >> 0x18) / fVar43) * fVar29;
      fVar8 = fVar30;
      if (fVar30 <= fVar29) {
        auVar41 = vminss_avx(auVar42,ZEXT416((uint)fVar29));
        fVar8 = auVar41._0_4_;
      }
      local_510 = fVar36;
      if (auStack_330[lVar26 * 5 + 1] == 0) {
        if (fVar30 <= fVar31) {
          auVar42 = vminss_avx(auVar42,auVar54);
          fVar30 = auVar42._0_4_;
        }
        uVar16 = 0;
        uVar15 = 0;
        do {
          fVar29 = (float)(DAT_180b0a4d4 >> (uVar15 & 0x1f) & 0xff);
          uVar16 = uVar16 | (int)(longlong)
                                 (((float)(DAT_180b0a548 >> (uVar15 & 0x1f) & 0xff) - fVar29) *
                                  fVar30 + fVar29 + fVar38) << (uVar15 & 0x1f);
          uVar15 = uVar15 + 8;
        } while ((int)uVar15 < 0x20);
        auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * auVar53._0_4_ + fVar38)),1)
        ;
        local_4f4 = auVar42._0_4_;
        fVar30 = local_4f4 * fVar38;
        auVar42 = vroundss_avx(ZEXT816(0),
                               ZEXT416((uint)(((DAT_180b0a41c * 22.0 + *local_518) - fVar30) +
                                             fVar38)),1);
        local_3f8 = auVar42._0_4_;
        local_4f8 = local_4f4 + local_3f8;
        auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar36 - fVar30) + fVar38)),1);
        local_3f4 = auVar42._0_4_;
        local_4f4 = local_4f4 + local_3f4;
        local_560 = (float *)((ulonglong)local_560 & 0xffffffff00000000);
        local_568 = (float *)CONCAT44(local_568._4_4_,DAT_180b0a41c * 2.5);
        FUN_1804df870(local_3f0,&local_3f8,&local_4f8,uVar17);
        fVar29 = fVar30 + local_3f8;
        fVar30 = fVar30 + local_3f4;
        uVar7 = 0x7f7fffff;
        auVar39 = ZEXT464(0xbf800000);
        uVar17 = 0;
        fVar36 = DAT_180b0a41c;
        do {
          auVar42 = vpcmpeqd_avx(ZEXT416(uVar17),SUB6416(ZEXT464(0),0));
          auVar42 = vblendvps_avx(auVar50._0_16_,auVar39._0_16_,auVar42);
          fVar33 = auVar42._0_4_;
          fVar4 = fVar33 * 1.5;
          fVar31 = fVar33 * 3.0 * DAT_180b0a41c + fVar29;
          fVar32 = fVar4 * DAT_180b0a41c + fVar30;
          fVar3 = fVar33 * 1.4 * DAT_180b0a41c + fVar29;
          local_560 = (float *)((ulonglong)local_560 & 0xffffffff00000000);
          local_358 = CONCAT44(fVar32,-(fVar33 * 3.0) * DAT_180b0a41c + fVar29);
          local_350 = CONCAT44(fVar32,fVar31);
          local_390 = (float *)CONCAT44((fVar4 - 1.6) * DAT_180b0a41c + fVar30,fVar3);
          uStack_388 = (float *)CONCAT44(fVar32,fVar31);
          uStack_380 = (undefined8 *)CONCAT44((fVar4 + 1.6) * DAT_180b0a41c + fVar30,fVar3);
          local_558._0_4_ = uVar7;
          local_568._0_4_ = fVar36;
          FUN_1804d9a00(uVar40,&local_358,2,uVar16);
          local_558 = CONCAT44(local_558._4_4_,uVar7);
          local_560 = (float *)((ulonglong)local_560 & 0xffffffff00000000);
          local_568 = (float *)CONCAT44(local_568._4_4_,fVar36);
          FUN_1804d9a00(uVar40,&local_390,3,uVar16);
          uVar17 = uVar17 + 1;
        } while ((int)uVar17 < 2);
        auVar37 = ZEXT464(0x3f000000);
        auVar48 = ZEXT464((uint)local_3d0[0]);
        auVar45 = ZEXT464(0x437f0000);
        auVar34 = ZEXT464(0x41bc0000);
        auVar53 = ZEXT464(0x41100000);
        auVar39 = ZEXT864(0);
        fVar36 = local_510;
      }
      else {
        local_500 = (afStack_344[lVar26 * 10 + 2] + 21.7) * DAT_180b0a41c + *local_518;
        local_4fc = DAT_180b0a41c * 0.12 + fVar36;
        local_568 = (float *)CONCAT44(local_568._4_4_,uVar17);
        local_560 = (float *)auStack_330[lVar26 * 5 + 1];
        FUN_180463b40(local_3f0,DAT_180c62cc0,0x41300000,&local_500);
      }
      fVar29 = (float)FUN_180463350(DAT_180c62ca8,0x41626666);
      pcVar9 = (char *)auStack_330[lVar26 * 5];
      auVar42 = vroundss_avx(ZEXT816(0),
                             ZEXT416((uint)((afStack_344[lVar26 * 10 + 2] + 35.3 +
                                             auVar55._0_4_ + auVar55._0_4_ + auVar48._0_4_) *
                                            DAT_180b0a41c + *local_518 + auVar37._0_4_)),1);
      local_4f0 = auVar42._0_4_;
      local_4ec = DAT_180b0a41c * -0.08 + (fVar36 - fVar29 * auVar37._0_4_);
      local_558 = 0;
      local_568 = (float *)CONCAT44(local_568._4_4_,
                                    (int)(longlong)(fVar8 * fVar43 + fVar38) << 0x18 |
                                    uVar22 & 0xffffff);
      local_560 = (float *)pcVar9;
      FUN_180463450(local_3f0,DAT_180c62ca8,0x41626666,&local_4f0);
      if ((DAT_180cd6f38 != 0) && (auVar37._0_4_ < afStack_344[lVar26 * 10 + 3])) {
        local_3e0 = pcVar9;
        (**(code **)(*(longlong *)DAT_180cd6f38 + 0x10))
                  (DAT_180cd6f38,&local_3e0,&local_3d8,&local_3c8);
      }
      local_3b8 = auVar53._0_4_;
      auVar41 = auVar50._0_16_;
      auVar44 = auVar45._0_16_;
      auVar54 = auVar39._0_16_;
      auVar42 = auVar37._0_16_;
      fVar29 = 8.0;
      auVar55 = ZEXT464(0x42fd0000);
      auVar52 = ZEXT464(0x40a00000);
      local_528 = local_528 + 1;
      if ((longlong)local_3e8 <= local_528) break;
      pfVar18 = local_518;
      lVar25 = local_508;
    } while( true );
  }
  pfVar18 = local_518;
  fVar36 = 126.5;
  local_3b8 = DAT_180b0a41c * local_3b8;
  auVar47 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 103.0 + auVar42._0_4_)),1);
  fVar29 = auVar47._0_4_ + *local_518;
  local_3c0 = fVar29 - local_3b8;
  auVar47 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 456.0 + auVar42._0_4_)),1);
  fVar30 = auVar47._0_4_ + local_518[1];
  local_3bc = fVar30 - local_3b8;
  local_3b4 = fVar30 + local_3b8;
  local_3b8 = fVar29 + local_3b8;
  plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  local_528 = CONCAT44(fVar30,fVar29);
  pcVar9 = "##day_night";
  uVar15 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
  cVar12 = '#';
  uVar17 = uVar15;
  do {
    pcVar9 = pcVar9 + 1;
    if (((cVar12 == '#') && (*pcVar9 == '#')) && (pcVar9[1] == '#')) {
      pcVar9 = pcVar9 + 2;
      uVar17 = uVar15;
    }
    else {
      uVar17 = crc32(uVar17,cVar12);
    }
    cVar12 = *pcVar9;
  } while (cVar12 != '\0');
  uVar17 = ~uVar17;
  if (*(uint *)(*plVar2 + 0x1534) == uVar17) {
    auVar39 = ZEXT1664(auVar42);
    auVar52 = ZEXT1664(auVar54);
    auVar50 = ZEXT1664(auVar44);
    auVar34 = ZEXT1664(auVar41);
    fVar36 = 126.5;
    FUN_1804cf810(uVar17,0xb,"##day_night");
    auVar41 = auVar34._0_16_;
    auVar44 = auVar50._0_16_;
    auVar54 = auVar52._0_16_;
    auVar42 = auVar39._0_16_;
  }
  local_568 = (float *)CONCAT71(local_568._1_7_,1);
  auVar39 = ZEXT1664(auVar42);
  auVar52 = ZEXT1664(auVar54);
  auVar50 = ZEXT1664(auVar44);
  auVar34 = ZEXT1664(auVar41);
  lVar26 = FUN_1804aad60(&local_520,uVar17,&local_3c0,&local_3b8);
  if ((*(char *)(lVar26 + 2) != '\0') && (DAT_180cd6d38 != 0)) {
    (**(code **)(*(longlong *)DAT_180cd6d38 + 0x10))();
  }
  local_560 = (float *)&DAT_180830b5c;
  if (DAT_180c7dfc8 != '\0') {
    local_560 = (float *)&DAT_180830b60;
  }
  local_568 = (float *)CONCAT44(local_568._4_4_,DAT_180b0a438);
  FUN_180463b40(local_3f0,DAT_180c62cc0,0x41300000,&local_528);
  if (DAT_180cd6f38 != 0) {
    local_3e8 = "Day Theme";
    if (DAT_180c7dfc8 != '\0') {
      local_3e8 = "Night Theme";
    }
    (**(code **)(*(longlong *)DAT_180cd6f38 + 0x10))(DAT_180cd6f38,&local_3e8,&local_3c0,&local_3b8)
    ;
  }
  fVar29 = auVar39._0_4_;
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 8.0 + fVar29)),1);
  local_3b0 = auVar42._0_4_ + *pfVar18;
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 446.0 + fVar29)),1);
  local_3ac = auVar42._0_4_ + pfVar18[1];
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar36 + fVar29)),1);
  local_3a8 = auVar42._0_4_ + *pfVar18;
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 481.0 + fVar29)),1);
  local_3a4 = auVar42._0_4_ + pfVar18[1];
  plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar9 = "##profile";
  uVar15 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
  cVar12 = '#';
  uVar17 = uVar15;
  do {
    pcVar9 = pcVar9 + 1;
    if (((cVar12 == '#') && (*pcVar9 == '#')) && (pcVar9[1] == '#')) {
      pcVar9 = pcVar9 + 2;
      uVar17 = uVar15;
    }
    else {
      uVar17 = crc32(uVar17,cVar12);
    }
    cVar12 = *pcVar9;
  } while (cVar12 != '\0');
  uVar17 = ~uVar17;
  if (*(uint *)(*plVar2 + 0x1534) == uVar17) {
    FUN_1804cf810(uVar17,0xb,"##profile");
  }
  local_568 = (float *)CONCAT71(local_568._1_7_,1);
  puVar10 = (undefined2 *)FUN_1804aad60(&local_520,uVar17,&local_3b0,&local_3a8);
  lVar26 = DAT_180bb8ae8;
  pcVar9 = "##profile_popup";
  uVar1 = *puVar10;
  if (*(char *)(puVar10 + 1) != '\0') {
    plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    auVar42 = vmaxss_avx(ZEXT416((uint)local_3bc),ZEXT416(*(uint *)((longlong)plVar2 + 0x26c)));
    auVar41 = vminss_avx(ZEXT416((uint)local_3b4),ZEXT416(*(uint *)((longlong)plVar2 + 0x274)));
    auVar44 = vminss_avx(ZEXT416((uint)local_3b8),ZEXT416(*(uint *)(plVar2 + 0x4e)));
    auVar54 = vmaxss_avx(ZEXT416((uint)local_3c0),ZEXT416(*(uint *)(plVar2 + 0x4d)));
    if (auVar54._0_4_ - *(float *)(DAT_180bb8ae8 + 0xcec) <= *(float *)(DAT_180bb8ae8 + 0x110)) {
      if (((auVar42._0_4_ - *(float *)(DAT_180bb8ae8 + 0xcf0) <= *(float *)(DAT_180bb8ae8 + 0x114))
          && (*(float *)(DAT_180bb8ae8 + 0x110) < *(float *)(DAT_180bb8ae8 + 0xcec) + auVar44._0_4_)
          ) && (*(float *)(DAT_180bb8ae8 + 0x114) <
                *(float *)(DAT_180bb8ae8 + 0xcf0) + auVar41._0_4_)) goto LAB_1804813a5;
    }
    pcVar11 = "##profile_popup";
    uVar15 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
    cVar12 = '#';
    uVar17 = uVar15;
    do {
      pcVar11 = pcVar11 + 1;
      if (((cVar12 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
        pcVar11 = pcVar11 + 2;
        uVar17 = uVar15;
      }
      else {
        uVar17 = crc32(uVar17,cVar12);
      }
      cVar12 = *pcVar11;
    } while (cVar12 != '\0');
    uVar17 = ~uVar17;
    if (*(uint *)(*plVar2 + 0x1534) == uVar17) {
      FUN_1804cf810(uVar17,0xb,"##profile_popup");
    }
    if ((*(byte *)(lVar26 + 0x28cc) & 8) != 0) {
      FUN_1804cf3e0("[popup] OpenPopup(\"%s\" -> 0x%08X)\n","##profile_popup",uVar17);
    }
    FUN_1804c7740(uVar17,0);
  }
LAB_1804813a5:
  plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  cVar12 = '#';
  uVar15 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
  uVar17 = uVar15;
  do {
    pcVar9 = pcVar9 + 1;
    if (((cVar12 == '#') && (*pcVar9 == '#')) && (pcVar9[1] == '#')) {
      pcVar9 = pcVar9 + 2;
      uVar17 = uVar15;
    }
    else {
      uVar17 = crc32(uVar17,cVar12);
    }
    cVar12 = *pcVar9;
  } while (cVar12 != '\0');
  uVar17 = ~uVar17;
  if (*(uint *)(*plVar2 + 0x1534) == uVar17) {
    FUN_1804cf810(uVar17,0xb,"##profile_popup");
  }
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar17)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (((char)uVar1 != '\0') || (bVar6)) {
    auVar42 = auVar34._0_16_;
  }
  else {
    auVar42 = auVar52._0_16_;
  }
  auVar37 = ZEXT1664(auVar42);
  uVar40 = auVar42._0_8_;
  plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  pcVar9 = "##profile_h";
  uVar15 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
  cVar12 = '#';
  uVar17 = uVar15;
  do {
    pcVar9 = pcVar9 + 1;
    if (((cVar12 == '#') && (*pcVar9 == '#')) && (pcVar9[1] == '#')) {
      pcVar9 = pcVar9 + 2;
      uVar17 = uVar15;
    }
    else {
      uVar17 = crc32(uVar17,cVar12);
    }
    cVar12 = *pcVar9;
  } while (cVar12 != '\0');
  uVar17 = ~uVar17;
  if (*(uint *)(*plVar2 + 0x1534) == uVar17) {
    FUN_1804cf810(uVar17,0xb,"##profile_h");
    uVar40 = auVar37._0_8_;
  }
  auVar37._0_8_ = FUN_1804aaa10(uVar17,uVar40);
  auVar37._8_56_ = extraout_var;
  fVar29 = auVar52._0_4_;
  auVar45 = ZEXT1664(auVar37._0_16_);
  if (fVar29 < (float)auVar37._0_8_) {
    fVar30 = ((float)(DAT_180b0a508 >> 0x18) / auVar50._0_4_) * (float)auVar37._0_8_;
    if (fVar29 <= fVar30) {
      auVar42 = vminss_avx(auVar34._0_16_,ZEXT416((uint)fVar30));
      fVar29 = auVar42._0_4_;
    }
    local_560 = (float *)((ulonglong)local_560 & 0xffffffff00000000);
    local_568 = (float *)CONCAT44(local_568._4_4_,DAT_180b0a41c * 5.0);
    FUN_1804df870(local_3f0,&local_3b0,&local_3a8,
                  (int)(longlong)(fVar29 * auVar50._0_4_ + auVar39._0_4_) << 0x18 |
                  DAT_180b0a508 & 0xffffff);
  }
  auVar42 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.0 + auVar39._0_4_)),1);
  auVar54 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 450.0 + auVar39._0_4_)),1);
  fVar29 = auVar54._0_4_ + pfVar18[1];
  local_528 = CONCAT44(fVar29,auVar42._0_4_ + *pfVar18);
  local_568 = (float *)CONCAT44(local_568._4_4_,auVar34._0_4_);
  FUN_18047dd00(fVar29,local_3f0,&local_528,DAT_180b0a41c * 26.0);
  uVar7 = DAT_180b0a558;
  uStack_388 = &local_3c0;
  uStack_380 = &DAT_180c62ca8;
  pcStack_378 = (char *)&local_3f0;
  local_370 = &local_3b0;
  local_368 = &local_3a8;
  local_390 = pfVar18;
  if (DAT_180cd6b78 == 0) {
    pcVar9 = "HVHGODS";
  }
  else {
    pcVar9 = (char *)(**(code **)(*(longlong *)DAT_180cd6b78 + 0x10))();
  }
  local_568._0_4_ = (float)uVar7;
  FUN_1804817e0(&local_390,pcVar9,0x41626666,0x43e2428f);
  local_568._0_4_ = (float)DAT_180b0a498;
  FUN_1804817e0(&local_390,"Settings",0x413b3333,0x43e9999a);
  fVar29 = auVar52._0_4_;
  if (fVar29 <= auVar45._0_4_) {
    auVar42 = vminss_avx(auVar34._0_16_,auVar45._0_16_);
    fVar29 = auVar42._0_4_;
  }
  uVar17 = 0;
  do {
    fVar30 = (float)(DAT_180b0a4dc >> (uVar17 & 0x1f) & 0xff);
    uVar21 = uVar21 | (int)(longlong)
                           (((float)(DAT_180b0a424 >> (uVar17 & 0x1f) & 0xff) - fVar30) * fVar29 +
                            fVar30 + auVar39._0_4_) << (uVar17 & 0x1f);
    uVar17 = uVar17 + 8;
  } while ((int)uVar17 < 0x20);
  local_560 = (float *)CONCAT44(local_560._4_4_,DAT_180b0a41c * 1.6);
  local_528 = CONCAT44(DAT_180b0a41c * 463.0 + pfVar18[1],DAT_180b0a41c * 120.0 + *pfVar18);
  local_568 = (float *)CONCAT44(local_568._4_4_,uVar21);
  FUN_1804648c0(local_3f0,&local_528,DAT_180b0a41c * 1.8,DAT_180b0a41c * 3.6);
}



