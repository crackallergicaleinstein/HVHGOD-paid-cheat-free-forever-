// FUN_18030a440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030a440 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030a440(ulonglong param_1,undefined8 param_2,float param_3,float *param_4,
                  longlong param_5)

{
  undefined1 auVar1 [16];
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  undefined1 auVar12 [64];
  float fVar13;
  ulonglong uVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined8 uVar17;
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined8 uVar21;
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auStack_198 [32];
  float local_178;
  undefined8 local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  undefined8 local_148;
  undefined8 local_140;
  float local_138 [12];
  float local_108 [12];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  fVar23 = param_4[4] * 0.125;
  auVar22 = ZEXT864(param_1);
  local_148._4_4_ = (uint)(param_1 >> 0x20);
  auVar16 = ZEXT464(local_148._4_4_);
  local_148._0_4_ = (uint)param_1;
  auVar18 = ZEXT464((uint)local_148);
  lVar6 = 0;
  local_140._4_4_ = (float)((ulonglong)param_2 >> 0x20);
  fVar13 = local_140._4_4_;
  local_14c = param_3;
  local_148 = param_1;
  local_140 = param_2;
  do {
    fVar9 = auVar18._0_4_ - (float)local_140;
    fVar7 = auVar16._0_4_ - fVar13;
    fVar9 = fVar7 * fVar7 + fVar9 * fVar9;
    fVar7 = (float)local_140 - auVar18._0_4_;
    auVar12 = ZEXT464((uint)fVar7);
    uVar11 = (ulonglong)(uint)fVar7;
    fVar8 = fVar13 - auVar16._0_4_;
    auVar15 = ZEXT464((uint)fVar8);
    uVar14 = (ulonglong)(uint)fVar8;
    fVar7 = fVar8 * fVar8 + fVar7 * fVar7;
    bVar2 = false;
    auVar19 = ZEXT1664(SUB6416(ZEXT864(0),0));
    auVar20 = ZEXT1664(SUB6416(ZEXT864(0),0));
    local_168 = auVar22._0_8_;
    if (fVar7 < 0.0) {
      fVar7 = (float)FUN_18061e150();
      uVar14 = auVar15._0_8_;
      uVar11 = auVar12._0_8_;
    }
    else {
      fVar7 = SQRT(fVar7);
    }
    if (fVar7 <= 0.05) {
      auVar16 = ZEXT464((uint)local_168._4_4_);
      auVar18 = ZEXT464((uint)(float)local_168);
LAB_18030a8ca:
      fVar7 = 0.0;
      fVar9 = fVar7;
    }
    else {
      fVar8 = (float)FUN_180636c80(uVar14,uVar11);
      uVar21 = auVar16._0_8_;
      uVar17 = auVar18._0_8_;
      fVar10 = 57.29578;
      fVar7 = auVar16._0_4_ * auVar16._0_4_ + auVar18._0_4_ * auVar18._0_4_;
      local_160 = fVar8 * 57.29578;
      if (fVar7 < 0.0) {
        local_15c = (float)FUN_18061e150(fVar7);
        uVar21 = auVar16._0_8_;
        uVar17 = auVar18._0_8_;
      }
      else {
        local_15c = SQRT(fVar7);
      }
      if (local_15c <= 1.0) {
        local_158 = local_160;
      }
      else {
        fVar7 = (float)FUN_180636c80(uVar21,uVar17);
        local_158 = fVar7 * fVar10;
      }
      auVar16 = ZEXT464((uint)local_168._4_4_);
      auVar18 = ZEXT464((uint)(float)local_168);
      local_138[2] = 1.0;
      local_138[3] = 0.5;
      local_138[4] = 0.25;
      local_138[5] = 0.1;
      local_138[6] = 0.05;
      local_138[7] = 0.025;
      local_138[8] = 0.012;
      local_138[9] = 0.006;
      local_138[10] = 0.003;
      pfVar5 = local_138 + 2;
      do {
        auVar12 = ZEXT464((uint)*pfVar5);
        local_108[0] = 0.0;
        local_108[1] = 30.0;
        local_108[2] = -30.0;
        local_108[3] = 60.0;
        local_108[4] = -60.0;
        local_108[5] = 90.0;
        local_108[6] = -90.0;
        local_108[7] = 120.0;
        local_108[8] = -120.0;
        local_108[9] = 150.0;
        local_108[10] = -150.0;
        local_108[0xb] = 180.0;
        pfVar4 = local_108;
        uVar21 = local_168;
        do {
          local_168 = uVar21;
          uVar21 = auVar22._0_8_;
          auVar12 = ZEXT1664(auVar12._0_16_);
          auVar15 = ZEXT464((uint)(local_160 + *pfVar4));
          auVar16 = ZEXT1664(auVar16._0_16_);
          auVar18 = ZEXT1664(auVar18._0_16_);
          auVar19 = ZEXT1664(auVar19._0_16_);
          auVar20 = ZEXT1664(auVar20._0_16_);
          auVar22 = ZEXT1664(auVar22._0_16_);
          local_178 = fVar23;
          local_168 = FUN_180309d00(uVar21);
          uVar21 = local_168;
          local_168._4_4_ = (float)((ulonglong)local_168 >> 0x20);
          fVar7 = (local_168._4_4_ - fVar13) * (local_168._4_4_ - fVar13) +
                  ((float)local_168 - (float)local_140) * ((float)local_168 - (float)local_140);
          if (fVar7 < fVar9 - 0.0001) {
            auVar19 = ZEXT1664(auVar15._0_16_);
            auVar20 = ZEXT1664(auVar12._0_16_);
            auVar18 = ZEXT464((uint)(float)local_168);
            auVar16 = ZEXT464((uint)local_168._4_4_);
            bVar2 = true;
            fVar9 = fVar7;
          }
          pfVar4 = pfVar4 + 1;
        } while (pfVar4 != (float *)&local_d8);
        if (10.0 < local_15c) {
          fVar13 = 1.0;
          auVar1 = vminss_avx(ZEXT416((uint)param_4[1]),ZEXT416((uint)(auVar12._0_4_ * *param_4)));
          local_150 = (auVar1._0_4_ - auVar12._0_4_ * param_4[2] * *param_4 * fVar23 * param_4[3]) /
                      local_15c;
          local_168 = CONCAT44(local_168._4_4_,0x3f800000);
          local_154 = -1.0;
          pfVar4 = &local_154;
          if (-1.0 <= local_150) {
            pfVar4 = &local_150;
          }
          pfVar3 = (float *)&local_168;
          if (local_150 <= 1.0) {
            pfVar3 = pfVar4;
          }
          fVar7 = (float)FUN_180636820(*pfVar3);
          fVar7 = fVar7 * 57.29578;
          local_138[1] = -1.0;
          local_138[0] = fVar13;
          pfVar4 = local_138;
          do {
            fVar13 = fVar7 * *pfVar4 + local_158;
            auVar15 = ZEXT464((uint)fVar13);
            local_178 = fVar23;
            local_168 = FUN_180309d00(auVar22._0_8_,fVar13,auVar12._0_8_,param_4);
            uVar21 = local_168;
            local_168._4_4_ = (float)((ulonglong)local_168 >> 0x20);
            fVar13 = (local_168._4_4_ - local_140._4_4_) * (local_168._4_4_ - local_140._4_4_) +
                     ((float)local_168 - (float)local_140) * ((float)local_168 - (float)local_140);
            if (fVar13 < fVar9 - 0.0001) {
              auVar19 = ZEXT1664(auVar15._0_16_);
              auVar20 = ZEXT1664(auVar12._0_16_);
              auVar18 = ZEXT464((uint)(float)local_168);
              auVar16 = ZEXT464((uint)local_168._4_4_);
              bVar2 = true;
              fVar9 = fVar13;
            }
            pfVar4 = pfVar4 + 1;
            local_168 = uVar21;
          } while (pfVar4 != local_138 + 2);
          fVar13 = local_140._4_4_;
        }
        local_168 = uVar21;
        pfVar5 = pfVar5 + 1;
      } while (pfVar5 != local_138 + 0xb);
      if (!bVar2) goto LAB_18030a8ca;
      for (fVar9 = auVar19._0_4_ - local_14c; 180.0 < fVar9; fVar9 = fVar9 + -360.0) {
      }
      for (; fVar9 < -180.0; fVar9 = fVar9 + 360.0) {
      }
      auVar22 = ZEXT464((uint)(fVar9 * 0.017453292));
      fVar9 = (float)FUN_180638e00(fVar9 * 0.017453292);
      fVar9 = fVar9 * auVar20._0_4_;
      fVar7 = (float)FUN_180637540(auVar22._0_8_);
      fVar7 = fVar7 * auVar20._0_4_;
    }
    pfVar5 = (float *)(param_5 + lVar6 * 8);
    lVar6 = lVar6 + 1;
    *pfVar5 = fVar7;
    pfVar5[1] = fVar9;
    if (7 < lVar6) {
    }
    auVar1 = vunpcklps_avx(auVar18._0_16_,auVar16._0_16_);
    auVar22 = ZEXT1664(auVar1);
  } while( true );
}



