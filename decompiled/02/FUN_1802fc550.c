// FUN_1802fc550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fc550 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802fc550(undefined8 param_1,longlong param_2,longlong param_3,float *param_4,
                  float *param_5)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  longlong *plVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 in_ZMM0 [64];
  undefined1 extraout_var [56];
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  ulonglong uVar19;
  undefined1 auVar20 [64];
  float fVar21;
  undefined8 uVar22;
  undefined1 auVar23 [64];
  float fVar24;
  undefined1 auVar25 [64];
  undefined8 uVar26;
  undefined1 auVar27 [64];
  float fVar28;
  uint uVar29;
  undefined1 auStack_408 [32];
  float *local_3e8;
  float *local_3e0;
  undefined1 *local_3d8;
  float *local_3d0;
  char *local_3c8;
  float local_3b8;
  longlong local_3b0;
  longlong lStack_3a8;
  longlong lStack_3a0;
  longlong lStack_398;
  float fStack_388;
  undefined4 uStack_384;
  undefined8 local_380;
  longlong local_378;
  float local_370;
  float local_36c;
  longlong local_368;
  undefined8 local_360;
  float local_358;
  undefined8 local_354;
  undefined4 local_34c;
  float *local_348;
  undefined8 local_340;
  undefined4 local_338;
  undefined8 local_334;
  undefined4 local_32c;
  undefined1 local_328 [8];
  longlong local_320;
  uint local_298;
  uint local_294;
  float local_290;
  float local_27c;
  char local_26d;
  undefined1 local_218 [172];
  float local_16c;
  char local_15d;
  float local_108 [6];
  undefined1 local_f0 [8];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_408;
  local_348 = param_5;
  auVar25 = ZEXT1664(in_ZMM0._0_16_);
  local_378 = param_3;
  local_368 = param_2;
  plVar4 = (longlong *)FUN_1802feea0();
  if (DAT_180cc82e8 == '\0') {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = -1;
    *(undefined1 (*) [16])(plVar4 + 4) = ZEXT816(0);
    plVar4[6] = local_380 & 0xffffffff00000000;
  }
  sVar3 = thunk_FUN_180624430(auVar25._0_8_);
  if (((((0 < sVar3) || (sVar3 = thunk_FUN_180624430(*param_4), 0 < sVar3)) ||
       (sVar3 = thunk_FUN_180624430(param_4[1]), 0 < sVar3)) ||
      ((sVar3 = thunk_FUN_180624430(param_4[2]), 0 < sVar3 ||
       (sVar3 = thunk_FUN_180624430(*param_5), 0 < sVar3)))) ||
     (sVar3 = thunk_FUN_180624430(param_5[1]), 0 < sVar3)) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = -1;
    *(undefined1 (*) [16])(plVar4 + 4) = ZEXT816(0);
    plVar4[6] = local_380 & 0xffffffff00000000;
  }
  lVar5 = FUN_1803032c0(param_2,param_3);
  if ((*(char *)(lVar5 + 0x48) == '\0') || (cVar2 = FUN_180303860(1), cVar2 == '\0')) {
    *plVar4 = 0;
    plVar4[1] = 0;
    plVar4[2] = 0;
    plVar4[3] = -1;
    *(undefined1 (*) [16])(plVar4 + 4) = ZEXT816(0);
    plVar4[6] = local_380 & 0xffffffff00000000;
  }
  fVar13 = *param_5;
  auVar23 = ZEXT464((uint)fVar13);
  fVar24 = param_5[1];
  auVar27 = ZEXT464((uint)fVar24);
  fVar13 = fVar24 * fVar24 + fVar13 * fVar13;
  auVar20 = ZEXT464((uint)fVar13);
  uVar19 = (ulonglong)(uint)fVar13;
  fVar24 = 0.0;
  if (fVar13 == 0.0) {
    auVar16 = ZEXT816(0);
  }
  else if (fVar13 < 0.0) {
    auVar17._0_8_ = FUN_18061e150(fVar13);
    uVar19 = auVar20._0_8_;
    auVar17._8_56_ = extraout_var;
    auVar16 = auVar17._0_16_;
  }
  else {
    auVar16 = ZEXT416((uint)SQRT(fVar13));
  }
  uVar26 = auVar27._0_8_;
  uVar22 = auVar23._0_8_;
  fVar11 = (float)uVar19;
  auVar20 = ZEXT464(0x3f800000);
  fVar28 = 180.0;
  fVar21 = 3.1415927;
  fVar14 = 0.01;
  auVar16 = vmaxss_avx(auVar20._0_16_,auVar16);
  fVar13 = auVar16._0_4_ * 0.015625 * 8.0;
  local_370 = fVar13;
  if (fVar11 == fVar24) {
LAB_1802fc7b8:
    local_3b8 = auVar25._0_4_;
  }
  else {
    if (fVar11 < 0.0) {
      fVar11 = (float)FUN_18061e150(uVar19);
      uVar26 = auVar27._0_8_;
      uVar22 = auVar23._0_8_;
    }
    else {
      fVar11 = SQRT(fVar11);
    }
    if (fVar11 <= fVar14) goto LAB_1802fc7b8;
    fVar11 = (float)FUN_180636c80(uVar26,uVar22);
    local_3b8 = (fVar11 * fVar28) / fVar21;
  }
  auVar23 = ZEXT464((uint)(local_3b8 * 0.017453292));
  local_358 = *(float *)(lVar5 + 0x20);
  local_360 = *(undefined8 *)(lVar5 + 0x18);
  local_354 = *(undefined8 *)(lVar5 + 0x24);
  local_34c = *(undefined4 *)(lVar5 + 0x2c);
  fVar11 = fVar13 * fVar24;
  local_36c = fVar11;
  fVar12 = (float)FUN_180637540(local_3b8 * 0.017453292);
  local_108[0] = fVar12 * fVar13 + *param_4;
  fVar12 = (float)FUN_180638e00(auVar23._0_8_);
  local_108[1] = fVar12 * fVar13 + param_4[1];
  local_108[2] = fVar11 + param_4[2];
  local_3e8 = (float *)&local_360;
  local_3e0 = (float *)(lVar5 + 0x30);
  FUN_180419610(local_108[2],local_328,param_4,local_108);
  if (local_26d != '\0') goto LAB_1802fceb6;
  sVar3 = thunk_FUN_180624430(local_27c);
  if (((0 < sVar3) || (local_27c < fVar24)) || (auVar20._0_4_ <= local_27c)) goto LAB_1802fceb6;
  if ((DAT_180cc8360 == '\0') || (DAT_180cc83c9 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  auVar23 = ZEXT464(local_298);
  sVar3 = thunk_FUN_180624430(local_298);
  uVar22 = auVar25._0_8_;
  if (sVar3 < 1) {
    auVar27 = ZEXT464(local_294);
    sVar3 = thunk_FUN_180624430(local_294);
    uVar22 = auVar25._0_8_;
    if (0 < sVar3) goto LAB_1802fce55;
    sVar3 = thunk_FUN_180624430(local_290);
    uVar22 = auVar25._0_8_;
    if ((0 < sVar3) || (0.7 <= ABS(local_290))) goto LAB_1802fce55;
    fVar13 = (float)FUN_180636420(auVar23._0_8_,auVar27._0_8_);
    uVar22 = auVar25._0_8_;
    if ((fVar13 < fVar14) || ((bVar1 && (fVar24 < local_290)))) goto LAB_1802fce55;
    fVar13 = (float)FUN_180636c80(auVar27._0_8_,auVar23._0_8_);
    fVar14 = 90.0;
    fVar21 = (fVar13 * fVar28) / fVar21;
    auVar23 = ZEXT464(0x43b40000);
    fVar11 = (float)FUN_180615070(fVar21 + 90.0,auVar23._0_8_);
    fVar13 = fVar11;
    fVar21 = (float)FUN_180615070(fVar21 - fVar14,auVar23._0_8_);
    fVar14 = (float)FUN_180615070(fVar21 - auVar25._0_4_,auVar23._0_8_);
    uVar29 = 0x7fffffff;
    fVar14 = ABS(fVar14);
    uVar15 = FUN_180615070(fVar13 - auVar25._0_4_,auVar23._0_8_);
    local_108[4] = fVar13;
    local_108[5] = fVar21;
    if (fVar14 < (float)(uVar15 & uVar29)) {
      local_108[4] = fVar21;
      local_108[5] = fVar11;
    }
    local_f0[0] = 1;
    bVar1 = true;
    cVar2 = FUN_180303860(2);
    uVar22 = auVar25._0_8_;
    if (cVar2 != '\0') {
      fVar21 = 0.017453292;
      local_108[0] = NAN;
      local_108[1] = NAN;
      pfVar6 = local_108 + 4;
      pfVar7 = local_108;
      fVar13 = local_370;
      fVar11 = local_36c;
      do {
        local_338 = *(undefined4 *)(lVar5 + 0x20);
        local_340 = *(undefined8 *)(lVar5 + 0x18);
        auVar27 = ZEXT464((uint)(fVar21 * *pfVar6));
        local_334 = *(undefined8 *)(lVar5 + 0x24);
        local_32c = *(undefined4 *)(lVar5 + 0x2c);
        fVar14 = (float)FUN_180637540(fVar21 * *pfVar6);
        local_360 = CONCAT44(local_360._4_4_,fVar14 * fVar13 + *param_4);
        fVar14 = (float)FUN_180638e00(auVar27._0_8_);
        local_358 = fVar11 + param_4[2];
        local_3e8 = (float *)&local_340;
        local_360 = CONCAT44(fVar14 * fVar13 + param_4[1],(undefined4)local_360);
        local_3e0 = (float *)(lVar5 + 0x30);
        FUN_180419610(local_358,local_218,param_4,&local_360);
        if (local_15d == '\0') {
          fVar14 = local_16c;
          sVar3 = thunk_FUN_180624430(local_16c);
          if ((0 < sVar3) || (fVar14 < fVar24)) goto LAB_1802fcaf0;
          if (auVar20._0_4_ < fVar14) goto LAB_1802fcaf0;
        }
        else {
LAB_1802fcaf0:
          fVar14 = fVar24;
          fVar24 = fVar14;
        }
        uVar22 = auVar23._0_8_;
        *pfVar7 = fVar14;
        pfVar7 = pfVar7 + 1;
        pfVar6 = pfVar6 + 1;
      } while (pfVar6 != (float *)local_f0);
      iVar10 = -1;
      if (local_27c < local_108[0]) {
        iVar10 = 0;
      }
      if ((local_27c < local_108[1]) &&
         ((iVar10 < 0 || (auVar20._0_4_ < (local_108[1] - local_108[iVar10]) * fVar13)))) {
        iVar10 = 1;
      }
      if (DAT_180b0dfb0 == 0) {
        lVar5 = -1;
      }
      else {
        lVar5 = *(longlong *)(DAT_180b0dfb0 + 8);
      }
      lVar8 = plVar4[3];
      if ((((lVar8 < 0) || (lVar5 < lVar8)) || (lVar8 + 2 < lVar5)) ||
         (((*plVar4 != local_368 || (plVar4[1] != local_378)) || (plVar4[2] != local_320)))) {
LAB_1802fcc53:
        bVar1 = false;
      }
      else {
        fVar11 = param_4[1] - *(float *)((longlong)plVar4 + 0x24);
        fVar11 = fVar11 * fVar11 +
                 (*param_4 - *(float *)(plVar4 + 4)) * (*param_4 - *(float *)(plVar4 + 4)) +
                 (param_4[2] - *(float *)(plVar4 + 5)) * (param_4[2] - *(float *)(plVar4 + 5));
        if (fVar11 != fVar24) {
          if (fVar11 < 0.0) {
            fVar11 = (float)FUN_18061e150(fVar11);
            uVar22 = auVar23._0_8_;
          }
          else {
            fVar11 = SQRT(fVar11);
          }
          if (64.0 <= fVar11) goto LAB_1802fcc53;
        }
        uVar15 = FUN_180615070(auVar25._0_4_ - *(float *)((longlong)plVar4 + 0x2c),uVar22);
        if (30.0 <= (float)(uVar15 & uVar29)) goto LAB_1802fcc53;
        bVar1 = true;
      }
      auVar16 = auVar25._0_16_;
      if (-1 < iVar10) {
        if (bVar1) {
          fVar11 = 45.0;
          iVar9 = 0;
          lVar8 = 0;
          do {
            uVar15 = FUN_180615070(*(float *)((longlong)local_108 + lVar8 + 0x10) -
                                   *(float *)(plVar4 + 6));
            auVar16 = auVar25._0_16_;
            if ((((float)(uVar15 & uVar29) < fVar11) &&
                (local_27c < *(float *)((longlong)local_108 + lVar8))) &&
               ((local_108[iVar10] - *(float *)((longlong)local_108 + lVar8)) * fVar13 <=
                auVar20._0_4_)) {
              iVar10 = iVar9;
              if (iVar9 < 0) goto LAB_1802fcd41;
              break;
            }
            iVar9 = iVar9 + 1;
            lVar8 = lVar8 + 4;
          } while (iVar9 < 2);
        }
        fVar13 = local_108[(longlong)iVar10 + 4];
        if (-1 < lVar5) {
          uVar22 = *(undefined8 *)param_4;
          local_3b0 = local_368;
          lStack_3a8 = local_378;
          lStack_3a0 = local_320;
          fStack_388 = param_4[2];
          auVar18._12_4_ = uStack_384;
          auVar18._8_4_ = fStack_388;
          *plVar4 = local_368;
          plVar4[1] = local_378;
          plVar4[2] = local_320;
          plVar4[3] = lVar5;
          auVar18._0_8_ = uVar22;
          auVar16 = vinsertps_avx(auVar18,auVar16,0x30);
          *(undefined1 (*) [16])(plVar4 + 4) = auVar16;
          lVar8 = CONCAT44(local_380._4_4_,fVar13);
          lStack_398 = lVar5;
          goto LAB_1802fcd76;
        }
      }
LAB_1802fcd41:
      local_3b0 = 0;
      lStack_3a8 = 0;
      lStack_3a0 = 0;
      lStack_398 = -1;
      *plVar4 = 0;
      plVar4[1] = 0;
      plVar4[2] = 0;
      plVar4[3] = -1;
      lVar8 = CONCAT44(local_380._4_4_,fVar24);
      *(undefined1 (*) [16])(plVar4 + 4) = ZEXT816(0);
LAB_1802fcd76:
      local_3c8 = "wall_tangents";
      local_3d0 = local_108;
      local_3d8 = local_328;
      plVar4[6] = lVar8;
      local_3e0 = local_348;
      local_3e8 = param_4;
      FUN_1802fbe90();
    }
  }
  else {
LAB_1802fce55:
    bVar1 = false;
  }
  local_378 = 0x7fc000007fc00000;
  local_3c8 = "surface_owned";
  if (bVar1) {
    local_3c8 = "trace_budget";
  }
  local_3d0 = (float *)&local_378;
  local_3d8 = local_328;
  local_3e0 = param_5;
  local_3e8 = param_4;
  FUN_1802fbe90(uVar22,uVar22,local_3b8,param_2);
LAB_1802fceb6:
  *plVar4 = 0;
  plVar4[1] = 0;
  plVar4[2] = 0;
  plVar4[3] = -1;
  *(undefined1 (*) [16])(plVar4 + 4) = ZEXT816(0);
  plVar4[6] = CONCAT44(local_380._4_4_,fVar24);
}



