// FUN_18033fef0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033fef0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18033fef0(undefined8 *param_1,float *param_2,float *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,float param_7,float param_8,float param_9,
                  float param_10,float param_11,undefined4 param_12,float param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  short sVar11;
  undefined8 *puVar12;
  float *pfVar13;
  undefined8 *puVar14;
  float *pfVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  float fVar33;
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 auStack_3d8 [32];
  undefined8 local_3b8;
  undefined1 local_3a8;
  undefined8 local_3a0;
  float local_398;
  float local_390;
  undefined8 local_388;
  float local_380;
  float local_378;
  float local_374;
  float local_370;
  float local_36c;
  float local_368;
  float local_364;
  float fStack_360;
  float local_35c;
  float local_358;
  float fStack_354;
  float local_350;
  undefined8 local_348;
  undefined8 local_338 [18];
  uint local_2a8;
  uint local_2a4;
  float local_2a0;
  float local_28c [3];
  char local_27d;
  undefined1 local_228 [264];
  undefined1 local_120 [8];
  float afStack_118 [14];
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_3d8;
  auVar28 = ZEXT464((uint)(param_9 * 0.017453292));
  local_348 = param_4;
  fVar23 = (float)FUN_180637540(param_9 * 0.017453292);
  fVar24 = (float)FUN_180638e00(auVar28._0_8_);
  fVar33 = param_3[2];
  fVar26 = *param_3;
  fVar29 = param_3[1];
  fVar25 = (float)FUN_1806156a0(param_11,param_12);
  fVar35 = 0.015625;
  auVar28 = ZEXT864(0);
  if (0.0 < fVar25 - (fVar29 * fVar24 + fVar26 * fVar23 + fVar33 * 0.0)) {
    fVar25 = (float)FUN_1806156a0(param_11 * param_10 * param_13 * 0.015625);
    fVar29 = fVar24 * fVar25 + fVar29;
    fVar26 = fVar23 * fVar25 + fVar26;
    param_3[1] = fVar29;
    *param_3 = fVar26;
  }
  local_390 = fVar35 * param_7 * 0.5;
  fVar33 = fVar33 - local_390;
  param_3[2] = fVar33;
  uVar3 = *(ulonglong *)param_3;
  local_380 = param_3[2];
  uVar20 = 0;
  local_388._4_4_ = (float)(uVar3 >> 0x20);
  auVar34 = ZEXT464((uint)local_388._4_4_);
  local_388._0_4_ = (float)uVar3;
  auVar36 = ZEXT464((uint)(float)local_388);
  _local_120 = ZEXT432(0);
  uVar21 = 0;
  uVar22 = 0;
  auVar32 = ZEXT464((uint)local_380);
  local_3a8 = 0;
  local_370 = local_388._4_4_;
  local_36c = (float)local_388;
  afStack_118[10] = auVar28._0_4_;
  afStack_118[6] = 0.0;
  afStack_118[7] = 0.0;
  afStack_118[8] = 0.0;
  afStack_118[9] = 0.0;
  iVar19 = 0;
  lVar18 = 0;
  local_388 = uVar3;
  local_368 = local_380;
  afStack_118[0xb] = afStack_118[10];
  afStack_118[0xc] = afStack_118[10];
  do {
    if ((fVar35 <= auVar28._0_4_) || (fVar26 * fVar26 + fVar29 * fVar29 + fVar33 * fVar33 <= 1e-06))
    break;
    local_3a0 = CONCAT44(fVar29 * fVar35 + param_2[1],fVar26 * fVar35 + *param_2);
    local_398 = fVar33 * fVar35 + param_2[2];
    local_3b8 = param_5;
    auVar28 = ZEXT1664(auVar28._0_16_);
    fVar26 = 1.0;
    auVar32 = ZEXT1664(auVar32._0_16_);
    auVar34 = ZEXT1664(auVar34._0_16_);
    auVar36 = ZEXT1664(auVar36._0_16_);
    fVar23 = fVar33;
    puVar12 = (undefined8 *)FUN_18033d980(local_228,param_2,&local_3a0);
    lVar17 = 2;
    puVar14 = local_338;
    do {
      puVar1 = puVar14 + 0x10;
      uVar7 = puVar12[1];
      uVar8 = puVar12[2];
      uVar9 = puVar12[3];
      uVar4 = puVar12[0xe];
      uVar6 = puVar12[0xf];
      puVar2 = puVar12 + 0x10;
      *puVar14 = *puVar12;
      puVar14[1] = uVar7;
      puVar14[2] = uVar8;
      puVar14[3] = uVar9;
      uVar7 = puVar12[5];
      uVar8 = puVar12[6];
      uVar9 = puVar12[7];
      puVar14[4] = puVar12[4];
      puVar14[5] = uVar7;
      puVar14[6] = uVar8;
      puVar14[7] = uVar9;
      uVar7 = puVar12[9];
      uVar8 = puVar12[10];
      uVar9 = puVar12[0xb];
      puVar14[8] = puVar12[8];
      puVar14[9] = uVar7;
      puVar14[10] = uVar8;
      puVar14[0xb] = uVar9;
      uVar7 = puVar12[0xd];
      puVar14[0xc] = puVar12[0xc];
      puVar14[0xd] = uVar7;
      puVar14[0xe] = uVar4;
      puVar14[0xf] = uVar6;
      lVar17 = lVar17 + -1;
      puVar12 = puVar2;
      puVar14 = puVar1;
    } while (lVar17 != 0);
    *puVar1 = *puVar2;
    auVar28 = ZEXT1664(auVar28._0_16_);
    auVar32 = ZEXT1664(auVar32._0_16_);
    auVar34 = ZEXT1664(auVar34._0_16_);
    auVar36 = ZEXT1664(auVar36._0_16_);
    fVar29 = local_28c[0];
    sVar11 = thunk_FUN_180624430();
    if (((0 < sVar11) || (fVar29 < auVar28._0_4_)) || (fVar26 <= fVar29)) {
      *(undefined8 *)param_2 = local_3a0;
      param_2[2] = local_398;
      break;
    }
    local_3a8 = 1;
    if (local_27d != '\0') {
LAB_18034059f:
      param_3[0] = 0.0;
      param_3[1] = 0.0;
      param_3[2] = 0.0;
      break;
    }
    auVar31 = ZEXT464(local_2a8);
    sVar11 = thunk_FUN_180624430(local_2a8);
    if (0 < sVar11) goto LAB_18034059f;
    auVar30 = ZEXT464(local_2a4);
    sVar11 = thunk_FUN_180624430(local_2a4);
    if ((0 < sVar11) || (fVar24 = local_2a0, sVar11 = thunk_FUN_180624430(local_2a0), 0 < sVar11))
    goto LAB_18034059f;
    local_378 = auVar28._0_4_;
    pfVar15 = &local_378;
    if (local_378 <= fVar29) {
      pfVar15 = local_28c;
    }
    local_374 = 1.0;
    pfVar13 = &local_374;
    if (fVar29 <= 1.0) {
      pfVar13 = pfVar15;
    }
    fVar26 = *pfVar13;
    if (fVar26 <= local_378) {
      fVar35 = (1.0 - fVar26) * fVar35;
      if (lVar18 < 5) {
        lVar17 = lVar18 + 1;
        auVar5 = vunpcklps_avx(auVar31._0_16_,auVar30._0_16_);
        *(longlong *)(local_120 + lVar18 * 0xc) = auVar5._0_8_;
        afStack_118[lVar18 * 3] = fVar24;
        if (0 < lVar17) goto LAB_180340353;
        goto LAB_1803403fe;
      }
      goto LAB_18034059f;
    }
    local_388 = *(ulonglong *)param_3;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = local_388;
    auVar32 = ZEXT464((uint)param_3[2]);
    *param_2 = ((float)local_3a0 - *param_2) * fVar26 + *param_2;
    param_2[1] = (local_3a0._4_4_ - param_2[1]) * fVar26 + param_2[1];
    auVar5 = vunpcklps_avx(auVar31._0_16_,auVar30._0_16_);
    lVar17 = 1;
    auVar36 = ZEXT464((uint)(float)local_388);
    param_2[2] = (local_398 - param_2[2]) * fVar26 + param_2[2];
    afStack_118[0] = fVar24;
    fVar35 = (1.0 - fVar26) * fVar35;
    local_120 = (undefined1  [8])auVar5._0_8_;
    auVar5 = vshufps_avx(auVar27,auVar27,0x55);
    auVar34 = ZEXT1664(auVar5);
LAB_180340353:
    bVar10 = false;
    lVar18 = 0;
    pfVar15 = (float *)local_120;
    do {
      if (bVar10) goto LAB_180340522;
      fVar26 = auVar34._0_4_ * pfVar15[1] + auVar36._0_4_ * *pfVar15 + auVar32._0_4_ * pfVar15[2];
      fVar29 = auVar36._0_4_ - fVar26 * *pfVar15;
      fVar33 = auVar32._0_4_ - fVar26 * pfVar15[2];
      fVar26 = auVar34._0_4_ - fVar26 * pfVar15[1];
      lVar16 = 0;
      pfVar13 = (float *)local_120;
      do {
        if ((lVar18 != lVar16) &&
           (fVar26 * pfVar13[1] + fVar29 * *pfVar13 + fVar33 * pfVar13[2] < local_378))
        goto LAB_1803403e5;
        lVar16 = lVar16 + 1;
        pfVar13 = pfVar13 + 3;
      } while (lVar16 < lVar17);
      auVar5 = vunpcklps_avx(ZEXT416((uint)fVar29),ZEXT416((uint)fVar26));
      *(longlong *)param_3 = auVar5._0_8_;
      param_3[2] = fVar33;
      bVar10 = true;
LAB_1803403e5:
      lVar18 = lVar18 + 1;
      pfVar15 = pfVar15 + 3;
    } while (lVar18 < lVar17);
    if (!bVar10) {
LAB_1803403fe:
      if (lVar17 == 2) {
        fVar29 = afStack_118[3] * (float)local_120._4_4_ - afStack_118[2] * afStack_118[0];
        fVar33 = afStack_118[0] * afStack_118[1] - afStack_118[3] * (float)local_120._0_4_;
        fVar25 = afStack_118[2] * (float)local_120._0_4_ - (float)local_120._4_4_ * afStack_118[1];
        fVar26 = fVar33 * fVar33 + fVar29 * fVar29 + fVar25 * fVar25;
        if (fVar26 != local_378) {
          if (fVar26 < 0.0) {
            fVar26 = (float)FUN_18061e150(fVar26);
          }
          else {
            fVar26 = SQRT(fVar26);
          }
          if (0.0001 < fVar26) {
            local_35c = (fVar33 * auVar34._0_4_ + fVar29 * auVar36._0_4_ + fVar25 * auVar32._0_4_) /
                        (fVar26 * fVar26);
            local_364 = local_35c * fVar29;
            fStack_360 = local_35c * fVar33;
            local_35c = local_35c * fVar25;
            *(ulonglong *)param_3 = CONCAT44(fStack_360,local_364);
            param_3[2] = local_35c;
            goto LAB_180340522;
          }
        }
        local_358 = auVar28._0_4_;
        *(ulonglong *)param_3 = CONCAT44(local_358,local_358);
        param_3[2] = local_358;
        fStack_354 = local_358;
        local_350 = local_358;
      }
      else {
        param_3[0] = 0.0;
        param_3[1] = 0.0;
        param_3[2] = 0.0;
      }
    }
LAB_180340522:
    fVar29 = param_3[1];
    fVar26 = *param_3;
    fVar33 = param_3[2];
    if (fVar29 * local_370 + fVar26 * local_36c + fVar33 * local_368 <= auVar28._0_4_)
    goto LAB_18034059f;
    if (fVar24 < param_8) {
      if (fVar23 <= -60.0) {
        uVar22 = uVar21;
        if (local_390 - 10.0 <= fVar33) {
          uVar22 = 1;
          uVar21 = 1;
        }
      }
    }
    else {
      uVar20 = 1;
    }
    iVar19 = iVar19 + 1;
    lVar18 = lVar17;
  } while (iVar19 < 4);
  fVar26 = param_3[2];
  fVar29 = param_2[2];
  *param_1 = *(undefined8 *)param_2;
  param_3[2] = fVar26 - local_390;
  uVar4 = *(undefined8 *)param_3;
  *(float *)(param_1 + 1) = fVar29;
  fVar26 = param_3[2];
  *(undefined8 *)((longlong)param_1 + 0xc) = uVar4;
  *(float *)((longlong)param_1 + 0x14) = fVar26;
  *(undefined1 *)((longlong)param_1 + 0x1a) = local_3a8;
  *(undefined1 *)(param_1 + 3) = uVar20;
  *(undefined1 *)((longlong)param_1 + 0x19) = uVar22;
}



