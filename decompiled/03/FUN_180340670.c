// FUN_180340670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180340670 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180340670(float *param_1,float *param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                  float param_6,float param_7,uint param_8,uint param_9,undefined4 param_10,
                  uint param_11,float param_12,int param_13)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  short sVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  float *pfVar14;
  uint uVar15;
  float fVar16;
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auStack_3a8 [32];
  undefined8 local_388;
  undefined4 local_378;
  undefined8 local_370;
  undefined8 local_368;
  float local_360;
  undefined4 local_35c;
  float local_358;
  float local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  float local_328;
  float local_324;
  float local_320;
  float local_31c;
  float local_318;
  float local_314;
  undefined8 local_308 [21];
  float local_25c;
  undefined1 local_1f8 [264];
  undefined8 local_f0;
  float local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_3a8;
  auVar17 = ZEXT464((uint)(param_7 * 0.017453292));
  auVar23 = ZEXT464((uint)param_12);
  auVar26 = ZEXT464(param_8);
  auVar25 = ZEXT464(param_9);
  auVar27 = ZEXT464(param_11);
  local_378 = param_10;
  auVar18 = ZEXT464((uint)(param_12 * 0.017453292));
  local_368 = param_4;
  local_350 = (float)FUN_180637540(param_7 * 0.017453292);
  local_34c = FUN_180638e00(auVar17._0_8_);
  fVar20 = 0.0;
  local_348 = 0;
  local_360 = (float)FUN_180637540(auVar18._0_8_);
  local_35c = FUN_180638e00(auVar18._0_8_);
  local_e8 = param_1[2];
  uVar15 = 1;
  local_314 = param_6 * 0.125 * 0.125 * 0.125 + 2.0;
  local_328 = -16.0 - local_314;
  local_31c = local_314 + 16.0;
  local_320 = fVar20 - local_314;
  local_f0 = *(undefined8 *)param_1;
  local_314 = local_314 + 72.0;
  local_358 = fVar20;
  if (0 < (int)param_3) {
    auVar17 = ZEXT464(0x3c800000);
    auVar18 = ZEXT464((uint)(param_6 * 0.015625 * 0.5));
    local_324 = local_328;
    local_318 = local_31c;
    while( true ) {
      if ((DAT_180bbeabf == '\0') || (param_13 < (int)uVar15)) {
        auVar23 = ZEXT464((uint)*param_2);
        auVar19 = ZEXT464((uint)param_2[1]);
        fVar20 = param_2[2];
        pfVar14 = &local_360;
        if (param_13 < (int)uVar15) {
          pfVar14 = &local_350;
        }
        fVar21 = *pfVar14;
        fVar22 = pfVar14[1];
        fVar16 = (float)FUN_1806156a0(auVar25._0_8_,local_378);
        if (0.0 < fVar16 - (fVar22 * auVar19._0_4_ + fVar21 * auVar23._0_4_ + fVar20 * pfVar14[2]))
        {
          fVar16 = (float)FUN_1806156a0(auVar25._0_4_ * auVar26._0_4_ * auVar27._0_4_ *
                                        auVar17._0_4_);
          fVar22 = fVar22 * fVar16 + auVar19._0_4_;
          auVar19 = ZEXT464((uint)fVar22);
          fVar21 = fVar21 * fVar16 + auVar23._0_4_;
          auVar23 = ZEXT464((uint)fVar21);
          param_2[1] = fVar22;
          *param_2 = fVar21;
        }
        param_4 = local_368;
      }
      else {
        auVar3 = vunpcklps_avx(ZEXT416((uint)*param_2),ZEXT416((uint)param_2[1]));
        local_340 = auVar25._0_4_;
        local_338 = auVar26._0_4_;
        local_334 = auVar27._0_4_;
        local_330 = auVar17._0_4_;
        local_33c = param_10;
        uVar10 = FUN_18033c760(auVar3._0_8_,auVar23._0_8_,&local_340);
        fVar20 = param_2[2];
        local_370._0_4_ = (float)uVar10;
        auVar23 = ZEXT464((uint)(float)local_370);
        local_370._4_4_ = (float)((ulonglong)uVar10 >> 0x20);
        auVar19 = ZEXT464((uint)local_370._4_4_);
        *param_2 = (float)local_370;
        param_2[1] = local_370._4_4_;
        local_370 = uVar10;
      }
      fVar20 = fVar20 - auVar18._0_4_;
      fVar16 = auVar17._0_4_;
      fVar21 = auVar19._0_4_ * fVar16 + param_1[1];
      fVar22 = fVar20 * fVar16 + param_1[2];
      fVar20 = fVar20 - auVar18._0_4_;
      auVar24 = ZEXT464((uint)fVar20);
      param_1[2] = fVar22;
      *param_1 = auVar23._0_4_ * fVar16 + *param_1;
      param_1[1] = fVar21;
      param_2[2] = fVar20;
      sVar8 = thunk_FUN_180624430();
      if ((((0 < sVar8) || (((uint)fVar21 & 0x7f800000) == 0x7f800000)) ||
          (((uint)fVar22 & 0x7f800000) == 0x7f800000)) ||
         (((sVar8 = thunk_FUN_180624430(auVar23._0_8_), 0 < sVar8 ||
           (sVar8 = thunk_FUN_180624430(auVar19._0_8_), 0 < sVar8)) ||
          (sVar8 = thunk_FUN_180624430(auVar24._0_8_), 0 < sVar8)))) break;
      uVar9 = uVar15 & 0x80000007;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffff8) + 1;
      }
      if ((uVar9 == 0) || (uVar15 == param_3)) {
        local_388 = param_4;
        puVar11 = (undefined8 *)FUN_18033d980(local_1f8,&local_f0,param_1,&local_328);
        lVar13 = 2;
        puVar12 = local_308;
        do {
          puVar1 = puVar12 + 0x10;
          uVar5 = puVar11[1];
          uVar6 = puVar11[2];
          uVar7 = puVar11[3];
          uVar10 = puVar11[0xe];
          uVar4 = puVar11[0xf];
          puVar2 = puVar11 + 0x10;
          *puVar12 = *puVar11;
          puVar12[1] = uVar5;
          puVar12[2] = uVar6;
          puVar12[3] = uVar7;
          uVar5 = puVar11[5];
          uVar6 = puVar11[6];
          uVar7 = puVar11[7];
          puVar12[4] = puVar11[4];
          puVar12[5] = uVar5;
          puVar12[6] = uVar6;
          puVar12[7] = uVar7;
          uVar5 = puVar11[9];
          uVar6 = puVar11[10];
          uVar7 = puVar11[0xb];
          puVar12[8] = puVar11[8];
          puVar12[9] = uVar5;
          puVar12[10] = uVar6;
          puVar12[0xb] = uVar7;
          uVar5 = puVar11[0xd];
          puVar12[0xc] = puVar11[0xc];
          puVar12[0xd] = uVar5;
          puVar12[0xe] = uVar10;
          puVar12[0xf] = uVar4;
          lVar13 = lVar13 + -1;
          puVar11 = puVar2;
          puVar12 = puVar1;
        } while (lVar13 != 0);
        *puVar1 = *puVar2;
        auVar17 = ZEXT1664(auVar17._0_16_);
        auVar25 = ZEXT1664(auVar25._0_16_);
        auVar18 = ZEXT1664(auVar18._0_16_);
        auVar26 = ZEXT1664(auVar26._0_16_);
        auVar27 = ZEXT1664(auVar27._0_16_);
        fVar20 = local_25c;
        sVar8 = thunk_FUN_180624430();
        if (((sVar8 < 1) && (0.0 <= fVar20)) && (fVar20 < 1.0)) {
        }
        if (DAT_180bbec89 != '\0') {
        }
        local_f0 = *(undefined8 *)param_1;
        local_e8 = param_1[2];
      }
      uVar15 = uVar15 + 1;
      if ((int)param_3 < (int)uVar15) {
      }
      auVar23 = ZEXT464((uint)param_12);
      param_10 = local_378;
    }
  }
}



