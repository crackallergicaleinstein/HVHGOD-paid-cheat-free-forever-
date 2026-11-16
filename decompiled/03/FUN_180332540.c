// FUN_180332540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180332540 */

float * FUN_180332540(float *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                     float param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 in_ZMM3 [64];
  undefined1 auVar13 [64];
  ulonglong uVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  float fVar23;
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float local_128 [8];
  undefined1 local_108 [24];
  float local_f0;
  char local_d8;
  
  local_128[4] = 0.0;
  local_128[6] = 0.0;
  iVar7 = 0;
  param_1[1] = INFINITY;
  param_1[2] = 0.0;
  auVar25 = ZEXT864(0);
  local_128[5] = 0.0;
  local_128[3] = 0.0;
  auVar19 = ZEXT1664(in_ZMM3._0_16_);
  *param_1 = 0.0;
  *(undefined1 *)(param_1 + 3) = 0;
  auVar13 = ZEXT864(0);
  auVar24 = ZEXT864(0);
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  sVar4 = thunk_FUN_180624430(param_3);
  auVar21 = auVar19._0_16_;
  fVar17 = 180.0;
  auVar16 = ZEXT464(0x43b40000);
  if (sVar4 < 1) {
    fVar9 = (float)FUN_180637760((float)param_3 + 180.0,auVar16._0_8_);
    auVar21 = auVar19._0_16_;
    if (fVar9 < auVar13._0_4_) {
      fVar9 = fVar9 + auVar16._0_4_;
    }
    auVar19 = ZEXT464((uint)(fVar9 - fVar17));
  }
  else {
    auVar19 = ZEXT864(0);
  }
  uVar26 = 0x7fffffff;
  uVar27 = 0x7fffffff;
  uVar28 = 0x7fffffff;
  uVar29 = 0x7fffffff;
  auVar10._0_8_ = auVar21._0_8_ & 0x7fffffff7fffffff;
  auVar10._8_4_ = auVar21._8_4_ & 0x7fffffff;
  auVar10._12_4_ = auVar21._12_4_ & 0x7fffffff;
  auVar10 = vcmpss_avx(SUB6416(ZEXT464(0x3d4ccccd),0),auVar10,1);
  auVar21 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),auVar21,auVar10);
  local_128[7] = auVar21._0_4_;
  do {
    FUN_18031a9e0(*param_2,local_108,1,auVar19._0_8_,*(undefined4 *)param_2[1]);
    *(int *)(param_2[2] + 0xc) = *(int *)(param_2[2] + 0xc) + 1;
    if (local_d8 == '\0') {
      auVar22 = ZEXT464(0x7fc00000);
    }
    else {
      auVar22 = ZEXT464((uint)(local_f0 - *(float *)param_2[3]));
    }
    param_1[2] = (float)((int)param_1[2] + 1);
    sVar4 = thunk_FUN_180624430(auVar22._0_8_);
    fVar9 = auVar24._0_4_;
    if (0 < sVar4) {
      return param_1;
    }
    fVar8 = auVar22._0_4_;
    fVar23 = auVar19._0_4_;
    if ((float)((uint)fVar8 & uVar26) < (float)((uint)param_1[1] & uVar26)) {
      param_1[1] = fVar8;
      *param_1 = fVar23;
    }
    if ((float)((uint)fVar8 & uVar26) <= param_5) {
      *(undefined1 *)(param_1 + 3) = 1;
      return param_1;
    }
    if (auVar13._0_4_ <= fVar8) {
      bVar1 = true;
      local_128[3] = fVar23;
      local_128[6] = fVar8;
      if (bVar2) {
        auVar20 = ZEXT464((uint)local_128[4]);
        goto LAB_180332753;
      }
LAB_18033289d:
      auVar10 = auVar19._0_16_;
      auVar21 = auVar22._0_16_;
      if (bVar3) {
        fVar9 = auVar19._0_4_ - fVar9;
        sVar4 = thunk_FUN_180624430(fVar9);
        fVar8 = auVar25._0_4_;
        fVar9 = fVar9 + fVar17;
        auVar24 = ZEXT464((uint)fVar9);
        uVar14 = (ulonglong)(uint)fVar9;
        if (sVar4 < 1) {
          fVar9 = (float)FUN_180637760(fVar9,auVar16._0_8_);
          fVar8 = auVar25._0_4_;
          uVar14 = auVar24._0_8_;
          if (fVar9 < auVar13._0_4_) {
            fVar9 = fVar9 + auVar16._0_4_;
          }
          fVar9 = fVar9 - fVar17;
        }
        else {
          fVar9 = auVar13._0_4_;
        }
        auVar10 = auVar19._0_16_;
        auVar21 = auVar22._0_16_;
        if (1e-05 < (float)((uint)fVar9 & uVar26)) {
          fVar8 = auVar22._0_4_ - fVar8;
          auVar25 = ZEXT464((uint)fVar8);
          auVar18 = ZEXT416((uint)fVar8);
          if (1e-06 < (float)((uint)fVar8 & uVar26)) {
            if (sVar4 < 1) {
              fVar9 = (float)FUN_180637760(uVar14,auVar16._0_8_);
              auVar18 = auVar25._0_16_;
              auVar10 = auVar19._0_16_;
              auVar21 = auVar22._0_16_;
              if (fVar9 < auVar13._0_4_) {
                fVar9 = fVar9 + auVar16._0_4_;
              }
              fVar9 = fVar9 - fVar17;
            }
            else {
              fVar9 = auVar13._0_4_;
            }
            auVar12._0_4_ = auVar18._0_4_ / fVar9;
            auVar12._4_12_ = auVar18._4_12_;
            auVar11._0_4_ = (uint)auVar12._0_4_ & uVar26;
            auVar11._4_4_ = auVar18._4_4_ & uVar27;
            auVar11._8_4_ = auVar18._8_4_ & uVar28;
            auVar11._12_4_ = auVar18._12_4_ & uVar29;
            auVar18 = vcmpss_avx(SUB6416(ZEXT464(0x3ca3d70a),0),auVar11,1);
            auVar18 = vblendvps_avx(ZEXT416((uint)local_128[7]),auVar12,auVar18);
            local_128[1] = -auVar21._0_4_ / auVar18._0_4_;
            goto LAB_180332976;
          }
        }
      }
      local_128[1] = -auVar21._0_4_ / local_128[7];
    }
    else {
      bVar2 = true;
      auVar20 = ZEXT1664(auVar19._0_16_);
      local_128[4] = fVar23;
      local_128[5] = fVar8;
      if (!bVar1) goto LAB_18033289d;
LAB_180332753:
      fVar8 = local_128[3] - auVar20._0_4_;
      sVar4 = thunk_FUN_180624430(fVar8);
      fVar9 = auVar24._0_4_;
      fVar8 = fVar8 + fVar17;
      auVar15 = ZEXT464((uint)fVar8);
      uVar14 = (ulonglong)(uint)fVar8;
      if (sVar4 < 1) {
        fVar8 = (float)FUN_180637760(fVar8,auVar16._0_8_);
        fVar9 = auVar24._0_4_;
        uVar14 = auVar15._0_8_;
        if (fVar8 < auVar13._0_4_) {
          fVar8 = fVar8 + auVar16._0_4_;
        }
        fVar8 = fVar8 - fVar17;
      }
      else {
        fVar8 = auVar13._0_4_;
      }
      fVar23 = auVar20._0_4_;
      if (20.0 <= (float)((uint)fVar8 & uVar26)) goto LAB_18033289d;
      if (sVar4 < 1) {
        fVar9 = (float)FUN_180637760(uVar14,auVar16._0_8_);
        fVar23 = auVar20._0_4_;
        if (fVar9 < auVar13._0_4_) {
          fVar9 = fVar9 + auVar16._0_4_;
        }
        fVar9 = fVar9 - fVar17;
      }
      else {
        fVar9 = auVar13._0_4_;
      }
      local_128[1] = local_128[5] / (local_128[5] - local_128[6]);
      local_128[0] = 0.05;
      local_128[2] = 0.95;
      pfVar6 = local_128;
      if (0.05 <= local_128[1]) {
        pfVar6 = local_128 + 1;
      }
      pfVar5 = local_128 + 2;
      if (local_128[1] <= 0.95) {
        pfVar5 = pfVar6;
      }
      fVar23 = fVar9 * *pfVar5 + fVar23;
      sVar4 = thunk_FUN_180624430(fVar23);
      if (sVar4 < 1) {
        fVar9 = (float)FUN_180637760(fVar23 + fVar17,auVar16._0_8_);
        if (fVar9 < auVar13._0_4_) {
          fVar9 = fVar9 + auVar16._0_4_;
        }
        fVar9 = fVar9 - fVar17;
      }
      else {
        fVar9 = auVar13._0_4_;
      }
      fVar9 = fVar9 - auVar19._0_4_;
      sVar4 = thunk_FUN_180624430(fVar9);
      auVar10 = auVar19._0_16_;
      auVar21 = auVar22._0_16_;
      if (sVar4 < 1) {
        local_128[1] = (float)FUN_180637760(fVar9 + fVar17,auVar16._0_8_);
        auVar10 = auVar19._0_16_;
        auVar21 = auVar22._0_16_;
        if (local_128[1] < auVar13._0_4_) {
          local_128[1] = local_128[1] + auVar16._0_4_;
        }
        local_128[1] = local_128[1] - fVar17;
      }
      else {
        local_128[1] = auVar13._0_4_;
      }
    }
LAB_180332976:
    bVar3 = true;
    local_128[0] = 10.0;
    local_128[2] = -10.0;
    pfVar6 = local_128 + 2;
    if (-10.0 <= local_128[1]) {
      pfVar6 = local_128 + 1;
    }
    auVar24 = ZEXT1664(auVar10);
    pfVar5 = local_128;
    if (local_128[1] <= 10.0) {
      pfVar5 = pfVar6;
    }
    auVar25 = ZEXT1664(auVar21);
    fVar9 = auVar10._0_4_ + *pfVar5;
    sVar4 = thunk_FUN_180624430(fVar9);
    if (sVar4 < 1) {
      fVar9 = (float)FUN_180637760(fVar9 + fVar17,auVar16._0_8_);
      if (fVar9 < auVar13._0_4_) {
        fVar9 = fVar9 + auVar16._0_4_;
      }
      auVar19 = ZEXT464((uint)(fVar9 - fVar17));
    }
    else {
      auVar19 = ZEXT1664(auVar13._0_16_);
    }
    iVar7 = iVar7 + 1;
    if (6 < iVar7) {
      return param_1;
    }
  } while( true );
}



