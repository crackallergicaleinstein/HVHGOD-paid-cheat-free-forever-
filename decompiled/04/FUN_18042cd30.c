// FUN_18042cd30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042cd30 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042cd30(longlong *param_1,uint *param_2,longlong param_3)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  undefined8 uVar5;
  short sVar6;
  int iVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  float *pfVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  uint *puVar16;
  longlong lVar17;
  uint uVar18;
  undefined *puVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [16];
  undefined1 auVar35 [64];
  undefined1 auStack_4a8 [32];
  longlong *local_488;
  undefined1 *local_480;
  float local_468;
  float local_464;
  float local_460;
  float local_45c;
  longlong local_458;
  longlong local_450;
  longlong local_448 [2];
  undefined1 local_438 [16];
  undefined8 local_428;
  uint uStack_420;
  float fStack_41c;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 local_3c8;
  undefined8 uStack_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 local_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  longlong *local_358;
  longlong *local_350;
  undefined8 local_348;
  int local_340;
  int local_33c;
  float local_338;
  float local_334;
  float local_330;
  float local_32c;
  float local_328;
  undefined4 local_324;
  uint local_320;
  uint local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined8 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2fc;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  ulonglong local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined1 local_2a4;
  undefined1 local_2a3 [235];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  longlong local_1a8 [3];
  uint auStack_190 [10];
  longlong local_168 [2];
  float local_158 [28];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_4a8;
  local_438._0_8_ = param_3;
  fVar21 = (float)param_2[9];
  sVar6 = thunk_FUN_180624430(fVar21);
  if (0 < sVar6) {
  }
  local_460 = 8.0;
  local_464 = 0.2;
  pfVar12 = &local_464;
  if (0.2 <= fVar21) {
    pfVar12 = (float *)(param_2 + 9);
  }
  pfVar8 = &local_460;
  if (fVar21 <= 8.0) {
    pfVar8 = pfVar12;
  }
  fVar21 = *pfVar8;
  auVar26 = ZEXT864(0);
  if (fVar21 <= 0.0) {
  }
  uVar18 = param_2[1];
  if (uVar18 == 0) {
  }
  uVar9 = param_1[4] - param_1[3] >> 2;
  uVar13 = (ulonglong)*param_2;
  if (uVar9 < uVar13) {
  }
  if (uVar9 - uVar13 < (ulonglong)uVar18) {
  }
  uVar20 = *(uint *)(param_3 + 8);
  auVar33 = ZEXT464(uVar20);
  auVar24 = ZEXT416(uVar20);
  auVar28 = ZEXT464(uVar20);
  uVar20 = *(uint *)(param_3 + 0xc);
  auVar35 = ZEXT464(uVar20);
  auVar34 = ZEXT416(uVar20);
  auVar30 = ZEXT464(uVar20);
  auVar31 = ZEXT864(0);
  auVar32 = ZEXT864(0);
  uVar9 = uVar13 + uVar18;
  if (uVar13 < uVar9) {
    lVar17 = *param_1;
    lVar14 = param_1[1];
    puVar16 = (uint *)(param_1[3] + uVar13 * 4);
    do {
      uVar10 = (ulonglong)*puVar16;
      if ((ulonglong)((lVar14 - lVar17) / 0x14) <= uVar10) {
      }
      uVar18 = *(uint *)(lVar17 + uVar10 * 0x14);
      auVar25 = ZEXT464(uVar18);
      sVar6 = thunk_FUN_180624430(uVar18);
      if (0 < sVar6) {
      }
      uVar18 = *(uint *)(lVar17 + 4 + uVar10 * 0x14);
      auVar23 = ZEXT464(uVar18);
      sVar6 = thunk_FUN_180624430(uVar18);
      auVar34 = auVar35._0_16_;
      auVar24 = auVar33._0_16_;
      if (0 < sVar6) {
      }
      auVar27 = vminss_avx(auVar25._0_16_,auVar28._0_16_);
      auVar28 = ZEXT1664(auVar27);
      auVar27 = vminss_avx(auVar23._0_16_,auVar30._0_16_);
      auVar30 = ZEXT1664(auVar27);
      auVar27 = vmaxss_avx(auVar25._0_16_,auVar31._0_16_);
      auVar31 = ZEXT1664(auVar27);
      auVar27 = vmaxss_avx(auVar23._0_16_,auVar32._0_16_);
      auVar32 = ZEXT1664(auVar27);
      uVar13 = uVar13 + 1;
      puVar16 = puVar16 + 1;
    } while (uVar13 < uVar9);
  }
  auVar27 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar21 * 3.0)),2);
  auVar33 = ZEXT1664(auVar27);
  fVar21 = auVar27._0_4_ + 2.0;
  auVar27 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar28._0_4_ - fVar21)),1);
  auVar27 = vmaxss_avx(auVar27,auVar26._0_16_);
  local_468 = auVar27._0_4_;
  auVar27 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar30._0_4_ - fVar21)),1);
  auVar27 = vmaxss_avx(auVar27,auVar26._0_16_);
  auVar28 = ZEXT1664(auVar27);
  local_45c = auVar27._0_4_;
  auVar27 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar21 + auVar31._0_4_)),2);
  auVar24 = vminss_avx(auVar27,auVar24);
  auVar27 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar21 + auVar32._0_4_)),2);
  auVar34 = vminss_avx(auVar27,auVar34);
  auVar31 = ZEXT464((uint)local_468);
  if (auVar24._0_4_ <= local_468) {
  }
  if (auVar34._0_4_ <= local_45c) {
  }
  iVar7 = (int)(auVar24._0_4_ - local_468) + 0x3f;
  uVar18 = (iVar7 >> 0x1f & 0x3fU) + iVar7 & 0xffffffc0;
  iVar7 = (int)(auVar34._0_4_ - local_45c) + 0x3f;
  uVar20 = (iVar7 >> 0x1f & 0x3fU) + iVar7 & 0xffffffc0;
  if (0x1000 < (int)uVar18) {
  }
  if (0x1000 < (int)uVar20) {
  }
  if ((0x100 < (int)uVar18) || (puVar19 = &DAT_180bbae88, 0x100 < (int)uVar20)) {
    puVar19 = &DAT_180bbaec8;
  }
  if (DAT_180bbaf08 == 0) {
    local_488 = &DAT_180bbaf08;
    iVar7 = (**(code **)(*DAT_180bbab70 + 0x60))(DAT_180bbab70,&DAT_1807135d0,0x2e0,0);
    if (iVar7 < 0) {
    }
  }
  if (DAT_180bbaf10 == 0) {
    local_488 = &DAT_180bbaf10;
    iVar7 = (**(code **)(*DAT_180bbab70 + 0x78))(DAT_180bbab70,&DAT_180712580,0x638,0);
    if (iVar7 < 0) {
    }
  }
  if (DAT_180bbaf18 == 0) {
    local_488 = &DAT_180bbaf18;
    iVar7 = (**(code **)(*DAT_180bbab70 + 0x78))(DAT_180bbab70,&DAT_180712bc0,0x29c,0);
    if (iVar7 < 0) {
    }
  }
  local_428 = 0;
  uStack_420 = 0;
  FUN_18063ab10(&uStack_418,0,0xc0);
  auVar29 = auVar31._0_16_;
  auVar27 = auVar28._0_16_;
  auVar34 = auVar26._0_16_;
  auVar32 = ZEXT464(0x3f800000);
  local_158[0] = 1.0;
  local_158[1] = 0.0;
  local_158[2] = 0.0;
  local_158[3] = 0.0;
  local_158[4] = 0.0;
  local_158[5] = 0.0;
  local_158[6] = 0.0;
  local_158[7] = 0.0;
  local_158[8] = 0.0;
  local_158[9] = 0.0;
  local_158[10] = 0.0;
  local_158[0xb] = 0.0;
  local_158[0xc] = 0.0;
  local_158[0xd] = 0.0;
  local_158[0xe] = 0.0;
  local_158[0xf] = 0.0;
  local_158[0x10] = 0.0;
  local_158[0x11] = 0.0;
  local_158[0x12] = 0.0;
  local_158[0x13] = 0.0;
  local_158[0x14] = 0.0;
  local_158[0x15] = 0.0;
  local_158[0x16] = 0.0;
  local_158[0x17] = 0.0;
  local_158[0x18] = 0.0;
  auVar24 = auVar32._0_16_;
  auVar31 = ZEXT1664(auVar24);
  iVar7 = 0x18;
  if ((int)auVar33._0_4_ < 0x18) {
    iVar7 = (int)auVar33._0_4_;
  }
  lVar17 = (longlong)iVar7;
  if (lVar17 < 1) {
    fStack_41c = 1.0;
  }
  else {
    lVar14 = 1;
    do {
      auVar31 = ZEXT1664(auVar31._0_16_);
      auVar32 = ZEXT1664(auVar32._0_16_);
      auVar26 = ZEXT1664(auVar26._0_16_);
      fVar21 = (float)FUN_180627ae0();
      auVar34 = auVar26._0_16_;
      auVar24 = auVar32._0_16_;
      local_158[lVar14] = fVar21;
      fVar21 = auVar31._0_4_ + fVar21 + fVar21;
      auVar31 = ZEXT464((uint)fVar21);
      lVar14 = lVar14 + 1;
    } while (lVar14 <= lVar17);
    fStack_41c = auVar32._0_4_ / fVar21;
    lVar14 = 1;
    iVar7 = 1;
    do {
      if (lVar14 < lVar17) {
        fVar22 = local_158[lVar14 + 1];
      }
      else {
        fVar22 = auVar26._0_4_;
      }
      fVar4 = fVar22 + local_158[lVar14];
      *(float *)(&uStack_418 + (ulonglong)uStack_420 * 2) =
           ((float)(iVar7 + 1) * fVar22 + (float)iVar7 * local_158[lVar14]) / fVar4;
      uVar9 = (ulonglong)uStack_420;
      uStack_420 = uStack_420 + 1;
      *(float *)((longlong)&uStack_418 + uVar9 * 0x10 + 4) = fVar4 / fVar21;
      iVar7 = iVar7 + 2;
      lVar14 = lVar14 + 2;
    } while (lVar14 <= lVar17);
    auVar27 = ZEXT416((uint)local_45c);
    auVar29 = ZEXT416((uint)local_468);
  }
  if (DAT_180bbaf28 == 0) {
    local_310 = 0;
    local_320 = 0xd0;
    local_31c = 2;
    local_318 = 4;
    local_314 = 0x10000;
    auVar26 = ZEXT1664(auVar24);
    auVar31 = ZEXT1664(auVar34);
    auVar32 = ZEXT1664(auVar27);
    auVar28 = ZEXT1664(auVar29);
    iVar7 = (**(code **)(*DAT_180bbab70 + 0x18))(DAT_180bbab70,&local_320,0,&DAT_180bbaf28);
    auVar29 = auVar28._0_16_;
    auVar27 = auVar32._0_16_;
    auVar34 = auVar31._0_16_;
    auVar24 = auVar26._0_16_;
    if (iVar7 < 0) {
    }
  }
  if (DAT_180bbaf20 == 0) {
    local_2c8 = 0;
    auVar26 = ZEXT1664(auVar24);
    auVar31 = ZEXT1664(auVar34);
    auVar32 = ZEXT1664(auVar27);
    auVar28 = ZEXT1664(auVar29);
    FUN_18063ab10(local_2a3,0,0xe3);
    local_2c0 = 1;
    local_2bc = 2;
    local_2b8 = 0x100000006;
    uStack_2b0 = 0x600000002;
    local_2a8 = 1;
    local_2a4 = 0xf;
    iVar7 = (**(code **)(*DAT_180bbab70 + 0xa0))(DAT_180bbab70,&local_2c8,&DAT_180bbaf20);
    auVar29 = auVar28._0_16_;
    auVar27 = auVar32._0_16_;
    auVar34 = auVar31._0_16_;
    auVar24 = auVar26._0_16_;
    if (iVar7 < 0) {
    }
  }
  if (((*(longlong *)(puVar19 + 8) == 0) || (*(int *)(puVar19 + 0x18) < (int)uVar18)) ||
     (*(int *)(puVar19 + 0x1c) < (int)uVar20)) {
    local_1a8[0] = 0;
    local_1a8[1] = 0;
    local_1a8[2] = 0;
    auStack_190[0] = 0;
    auStack_190[1] = 0;
    auStack_190[2] = 0;
    auStack_190[3] = 0;
    auStack_190[4] = 0;
    auStack_190[5] = 0;
    auStack_190[6] = 0;
    auStack_190[7] = 0;
    auStack_190[8] = 0;
    auStack_190[9] = 0;
    auVar26 = ZEXT1664(auVar24);
    auVar31 = ZEXT1664(auVar34);
    auVar32 = ZEXT1664(auVar27);
    auVar28 = ZEXT1664(auVar29);
    FUN_1804389d0(local_1a8);
    local_308 = 0;
    local_2fc = 0;
    if ((int)uVar18 < *(int *)(puVar19 + 0x18)) {
      uVar18 = *(uint *)(puVar19 + 0x18);
    }
    local_320 = uVar18;
    if ((int)uVar20 < *(int *)(puVar19 + 0x1c)) {
      uVar20 = *(uint *)(puVar19 + 0x1c);
    }
    local_31c = uVar20;
    local_314 = 1;
    local_318 = 1;
    local_310 = 0x10000000a;
    local_300 = 0x28;
    plVar15 = local_1a8 + 2;
    do {
      plVar3 = DAT_180bbab70;
      pcVar1 = *(code **)(*DAT_180bbab70 + 0x28);
      plVar2 = (longlong *)plVar15[-2];
      if (plVar2 != (longlong *)0x0) {
        plVar15[-2] = 0;
        (**(code **)(*plVar2 + 0x10))();
      }
      iVar7 = (*pcVar1)(plVar3,&local_320,0,plVar15 + -2);
      plVar2 = DAT_180bbab70;
      if (iVar7 < 0) {
LAB_18042dcad:
        _eh_vector_destructor_iterator_(local_1a8,0x20,2,FUN_1801d7480);
      }
      pcVar1 = *(code **)(*DAT_180bbab70 + 0x48);
      plVar3 = (longlong *)plVar15[-1];
      if (plVar3 != (longlong *)0x0) {
        plVar15[-1] = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      iVar7 = (*pcVar1)(plVar2,plVar15[-2],0,plVar15 + -1);
      plVar2 = DAT_180bbab70;
      if (iVar7 < 0) goto LAB_18042dcad;
      pcVar1 = *(code **)(*DAT_180bbab70 + 0x38);
      plVar3 = (longlong *)*plVar15;
      if (plVar3 != (longlong *)0x0) {
        *plVar15 = 0;
        (**(code **)(*plVar3 + 0x10))();
      }
      iVar7 = (*pcVar1)(plVar2,plVar15[-2],0,plVar15);
      if (iVar7 < 0) goto LAB_18042dcad;
      *(uint *)(plVar15 + 1) = local_320;
      *(uint *)((longlong)plVar15 + 0xc) = local_31c;
      if (plVar15 + 2 == local_168) goto code_r0x00018042d4db;
      plVar15 = plVar15 + 4;
    } while( true );
  }
LAB_18042d5d9:
  plVar15 = DAT_180bbab78;
  uVar9 = 0;
  local_358 = (longlong *)0x0;
  local_350 = (longlong *)0x0;
  auVar26 = ZEXT1664(auVar24);
  auVar31 = ZEXT1664(auVar34);
  auVar32 = ZEXT1664(auVar27);
  auVar28 = ZEXT1664(auVar29);
  (**(code **)(*DAT_180bbab78 + 0x2c8))(DAT_180bbab78,1,&local_358,&local_350);
  if (local_358 != (longlong *)0x0) {
    local_448[1] = 0;
    (**(code **)(*plVar15 + 0x40))(plVar15,0,1,local_448 + 1);
    (**(code **)(*plVar15 + 0x108))(plVar15,1,puVar19 + 8,0);
    local_168[0] = 0;
    local_168[1] = 0;
    (**(code **)(*plVar15 + 400))(plVar15,*(undefined8 *)(puVar19 + 8),local_168);
    uVar5 = local_438._0_8_;
    uStack_2d8 = *(undefined8 *)(local_438._0_8_ + 8);
    local_2d0 = *(undefined8 *)(local_438._0_8_ + 0x10);
    local_2e0 = CONCAT44(auVar32._0_4_,auVar28._0_4_) ^ 0x8000000080000000;
    (**(code **)(*plVar15 + 0x160))(plVar15,1,&local_2e0);
    local_348 = 0;
    local_340 = *(int *)(puVar19 + 0x18);
    local_33c = *(int *)(puVar19 + 0x1c);
    uVar13 = uVar9;
    uVar10 = uVar9;
    if ((char)param_2[8] != '\0') {
      uVar18 = param_2[4] - (int)auVar28._0_4_;
      if (0 < (int)uVar18) {
        uVar13 = (ulonglong)uVar18;
      }
      uVar18 = param_2[5] - (int)auVar32._0_4_;
      if (0 < (int)uVar18) {
        uVar10 = (ulonglong)uVar18;
      }
      local_348 = CONCAT44((int)uVar10,(int)uVar13);
      iVar7 = param_2[6] - (int)auVar28._0_4_;
      if (iVar7 < local_340) {
        local_340 = iVar7;
      }
      iVar7 = param_2[7] - (int)auVar32._0_4_;
      if (iVar7 < local_33c) {
        local_33c = iVar7;
      }
    }
    if (((int)uVar13 < local_340) && ((int)uVar10 < local_33c)) {
      (**(code **)(*plVar15 + 0x168))(plVar15,1,&local_348);
      (**(code **)(*plVar15 + 0x40))(plVar15,0,1,param_2 + 2);
      (**(code **)(*plVar15 + 0x60))(plVar15,param_2[1],*param_2,0);
      (**(code **)(*plVar15 + 0x40))(plVar15,0,1,local_448 + 1);
      (**(code **)(*plVar15 + 0x88))(plVar15,0);
      (**(code **)(*plVar15 + 0x58))(plVar15,DAT_180bbaf08,0,0);
      (**(code **)(*plVar15 + 0x48))(plVar15,DAT_180bbaf10,0,0);
      (**(code **)(*plVar15 + 0x158))(plVar15,DAT_180bbaf68);
      local_1b8 = 0;
      uStack_1b0 = 0;
      (**(code **)(*plVar15 + 0x118))(plVar15,DAT_180bbaf60,&local_1b8,0xffffffff);
      local_338 = auVar31._0_4_;
      local_330 = (float)*(int *)(puVar19 + 0x18);
      local_32c = (float)*(int *)(puVar19 + 0x1c);
      local_324 = auVar26._0_4_;
      local_334 = local_338;
      local_328 = local_338;
      (**(code **)(*plVar15 + 0x160))(plVar15,1,&local_338);
      do {
        local_438 = (undefined1  [16])0x0;
        local_480 = local_438;
        local_488 = (longlong *)((ulonglong)local_488 & 0xffffffff00000000);
        iVar7 = (**(code **)(*plVar15 + 0x70))(plVar15,DAT_180bbaf28,0,4);
        if (iVar7 < 0) {
          (**(code **)(*plVar15 + 0x40))(plVar15,0,1,local_448 + 1);
          (**(code **)(*plVar15 + 0x108))(plVar15,1,&local_358,local_350);
          (**(code **)(*plVar15 + 0x160))(plVar15,1,uVar5);
          goto LAB_18042dbef;
        }
        iVar7 = (int)uVar9;
        fVar21 = auVar31._0_4_;
        if (iVar7 == 0) {
          fVar22 = auVar26._0_4_ / (float)*(int *)(puVar19 + 0x18);
        }
        else {
          fVar22 = fVar21;
          if (iVar7 == 1) {
            fVar21 = auVar26._0_4_ / (float)*(int *)(puVar19 + 0x1c);
          }
        }
        local_428 = CONCAT44(fVar21,fVar22);
        *(undefined8 *)local_438._0_8_ = local_428;
        *(ulonglong *)(local_438._0_8_ + 8) = CONCAT44(fStack_41c,uStack_420);
        *(undefined8 *)(local_438._0_8_ + 0x10) = uStack_418;
        *(undefined8 *)(local_438._0_8_ + 0x18) = uStack_410;
        *(undefined8 *)(local_438._0_8_ + 0x20) = local_408;
        *(undefined8 *)(local_438._0_8_ + 0x28) = uStack_400;
        *(undefined8 *)(local_438._0_8_ + 0x30) = uStack_3f8;
        *(undefined8 *)(local_438._0_8_ + 0x38) = uStack_3f0;
        *(undefined8 *)(local_438._0_8_ + 0x40) = local_3e8;
        *(undefined8 *)(local_438._0_8_ + 0x48) = uStack_3e0;
        *(undefined8 *)(local_438._0_8_ + 0x50) = uStack_3d8;
        *(undefined8 *)(local_438._0_8_ + 0x58) = uStack_3d0;
        *(undefined8 *)(local_438._0_8_ + 0x60) = local_3c8;
        *(undefined8 *)(local_438._0_8_ + 0x68) = uStack_3c0;
        *(undefined8 *)(local_438._0_8_ + 0x70) = local_3b8;
        *(undefined8 *)(local_438._0_8_ + 0x78) = uStack_3b0;
        *(undefined8 *)(local_438._0_8_ + 0x80) = uStack_3a8;
        *(undefined8 *)(local_438._0_8_ + 0x88) = uStack_3a0;
        *(undefined8 *)(local_438._0_8_ + 0x90) = local_398;
        *(undefined8 *)(local_438._0_8_ + 0x98) = uStack_390;
        *(undefined8 *)(local_438._0_8_ + 0xa0) = uStack_388;
        *(undefined8 *)(local_438._0_8_ + 0xa8) = uStack_380;
        *(undefined8 *)(local_438._0_8_ + 0xb0) = local_378;
        *(undefined8 *)(local_438._0_8_ + 0xb8) = uStack_370;
        *(undefined8 *)(local_438._0_8_ + 0xc0) = uStack_368;
        *(undefined8 *)(local_438._0_8_ + 200) = uStack_360;
        auVar26 = ZEXT1664(auVar26._0_16_);
        auVar31 = ZEXT1664(auVar31._0_16_);
        auVar32 = ZEXT1664(auVar32._0_16_);
        auVar28 = ZEXT1664(auVar28._0_16_);
        (**(code **)(*plVar15 + 0x78))(plVar15,DAT_180bbaf28,0);
        (**(code **)(*plVar15 + 0x80))(plVar15,0,1,&DAT_180bbaf28);
        (**(code **)(*plVar15 + 0x108))(plVar15,1,puVar19 + uVar9 * -0x20 + 0x28,0);
        (**(code **)(*plVar15 + 0x40))(plVar15,0,1,puVar19 + uVar9 * 0x20 + 0x10);
        (**(code **)(*plVar15 + 0x68))(plVar15,3,0);
        (**(code **)(*plVar15 + 0x40))(plVar15,0,1,local_448 + 1);
        uVar9 = (ulonglong)(iVar7 + 1U);
      } while ((int)(iVar7 + 1U) < 2);
      (**(code **)(*plVar15 + 0x108))(plVar15,1,&local_358,local_350);
      local_338 = auVar28._0_4_ + *(float *)uVar5;
      local_334 = auVar32._0_4_ + *(float *)(uVar5 + 4);
      (**(code **)(*plVar15 + 0x160))(plVar15,1,&local_338);
      (**(code **)(*plVar15 + 0x158))(plVar15,DAT_180bbabb8);
      local_2f0 = 0;
      uStack_2e8 = CONCAT44((int)*(float *)(uVar5 + 0xc),(int)*(float *)(uVar5 + 8));
      if ((char)param_2[8] != '\0') {
        local_2f0 = *(undefined8 *)(param_2 + 4);
        uStack_2e8 = *(undefined8 *)(param_2 + 6);
      }
      (**(code **)(*plVar15 + 0x168))(plVar15,1,&local_2f0);
      (**(code **)(*plVar15 + 0x48))(plVar15,DAT_180bbaf18,0,0);
      (**(code **)(*plVar15 + 0x118))(plVar15,DAT_180bbaf20,&local_1b8,0xffffffff);
      (**(code **)(*plVar15 + 0x40))(plVar15,0,1,puVar19 + 0x10);
      (**(code **)(*plVar15 + 0x68))(plVar15,3,0);
    }
    (**(code **)(*plVar15 + 0x40))(plVar15,0,1,local_448 + 1);
    (**(code **)(*plVar15 + 0x108))(plVar15,1,&local_358,local_350);
    (**(code **)(*plVar15 + 0x160))(plVar15,1,uVar5);
  }
LAB_18042dbef:
  plVar15 = local_350;
  if (local_350 != (longlong *)0x0) {
    local_350 = (longlong *)0x0;
    (**(code **)(*plVar15 + 0x10))();
  }
  plVar15 = local_358;
  if (local_358 != (longlong *)0x0) {
    local_358 = (longlong *)0x0;
    (**(code **)(*plVar15 + 0x10))();
  }
code_r0x00018042d4db:
  plVar15 = local_1a8 + 1;
  lVar14 = (longlong)puVar19 - (longlong)(local_1a8 + 1);
  lVar17 = 2;
  do {
    lVar11 = 0;
    plVar2 = plVar15 + -1;
    if (&local_458 != plVar2) {
      lVar11 = *plVar2;
      *plVar2 = 0;
    }
    plVar2 = *(longlong **)(lVar14 + (longlong)plVar15);
    *(longlong *)(lVar14 + (longlong)plVar15) = lVar11;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    lVar11 = 0;
    if (&local_450 != plVar15) {
      lVar11 = *plVar15;
      *plVar15 = 0;
    }
    plVar2 = *(longlong **)((longlong)plVar15 + lVar14 + 8);
    *(longlong *)((longlong)plVar15 + lVar14 + 8) = lVar11;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    lVar11 = 0;
    plVar2 = plVar15 + 1;
    if (local_448 != plVar2) {
      lVar11 = *plVar2;
      *plVar2 = 0;
    }
    plVar2 = *(longlong **)((longlong)plVar15 + lVar14 + 0x10);
    *(longlong *)((longlong)plVar15 + lVar14 + 0x10) = lVar11;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    *(int *)(lVar14 + 0x18 + (longlong)plVar15) = (int)plVar15[2];
    *(undefined4 *)(lVar14 + 0x1c + (longlong)plVar15) = *(undefined4 *)((longlong)plVar15 + 0x14);
    plVar15 = plVar15 + 4;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  _eh_vector_destructor_iterator_(local_1a8,0x20,2,FUN_1801d7480);
  auVar29 = auVar28._0_16_;
  auVar27 = auVar32._0_16_;
  auVar34 = auVar31._0_16_;
  auVar24 = auVar26._0_16_;
  goto LAB_18042d5d9;
}



