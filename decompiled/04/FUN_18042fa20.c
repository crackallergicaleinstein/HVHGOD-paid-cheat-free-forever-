// FUN_18042fa20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042fa20 */

void FUN_18042fa20(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [64];
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [64];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  float local_d4;
  float local_d0;
  float local_cc [3];
  float local_c0;
  float local_bc;
  
  fVar7 = param_1[10];
  fVar6 = 0.0;
  auVar17 = ZEXT464(0x3f800000);
  pfVar2 = &local_d4;
  if (0.0 <= fVar7) {
    pfVar2 = param_1 + 10;
  }
  local_d0 = 1.0;
  pfVar4 = &local_d0;
  if (fVar7 <= 1.0) {
    pfVar4 = pfVar2;
  }
  local_d4 = 0.0;
  if (((0.0001 < *pfVar4) && (fVar7 = param_1[8], 0.0 < fVar7)) &&
     (fVar18 = param_1[9], 0.0 < fVar18)) {
    fVar1 = fVar18 * 0.5 + param_1[7];
    fVar12 = fVar7 * 0.5 + param_1[6];
    fVar16 = *param_1 - fVar12;
    auVar11 = ZEXT464((uint)(param_1[1] - fVar1));
    local_bc = fVar12;
    local_c0 = (float)FUN_180636420(fVar16,param_1[1] - fVar1);
    local_cc[2] = auVar17._0_4_;
    auVar10 = auVar11._0_16_;
    fVar5 = local_c0;
    if (local_c0 < 0.001) {
      fVar16 = 0.0;
      auVar10 = auVar17._0_16_;
      fVar5 = local_cc[2];
    }
    fVar14 = auVar10._0_4_ / fVar5;
    auVar15 = ZEXT1664(CONCAT124(auVar10._4_12_,fVar14));
    fVar9 = *param_3 - fVar1;
    fVar13 = -fVar14;
    fVar16 = fVar16 / fVar5;
    fVar12 = *param_2 - fVar12;
    fVar5 = fVar9 * fVar14 + fVar12 * fVar16;
    auVar11 = ZEXT464((uint)fVar5);
    auVar8 = ZEXT464((uint)(local_cc[2] - *pfVar4));
    auVar10 = vmaxss_avx(ZEXT416((uint)(ABS(fVar16) * fVar7 * 0.5 + ABS(fVar14) * fVar18 * 0.5)),
                         auVar17._0_16_);
    fVar7 = auVar10._0_4_;
    local_cc[1] = (fVar7 + fVar5) / (fVar7 + fVar7);
    local_cc[0] = fVar6;
    pfVar2 = local_cc;
    if (fVar6 <= local_cc[1]) {
      pfVar2 = local_cc + 1;
    }
    pfVar3 = local_cc + 2;
    if (local_cc[1] <= local_cc[2]) {
      pfVar3 = pfVar2;
    }
    fVar7 = *pfVar3;
    fVar6 = (float)FUN_180637bd0(local_cc[2] - *pfVar4,fVar7 * 1.18 + 0.72);
    fVar6 = (float)FUN_180242260(auVar11._0_8_,local_c0,auVar17._0_4_ - fVar6);
    fVar7 = (float)FUN_180637bd0(auVar8._0_8_,fVar7 * 1.82 + 0.58);
    fVar7 = fVar7 * (fVar12 * fVar13 + fVar9 * fVar16);
    *param_2 = fVar16 * fVar6 + local_bc + fVar7 * fVar13;
    *param_3 = auVar15._0_4_ * fVar6 + fVar1 + fVar7 * fVar16;
  }
  *param_2 = (*param_2 - *param_1) * param_1[2] + *param_1 + param_1[3];
  *param_3 = (*param_3 - param_1[1]) * param_1[2] + param_1[1] + param_1[4];
  return;
}



