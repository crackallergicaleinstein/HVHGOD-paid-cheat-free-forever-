// FUN_1802627c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802627c0 */

float * FUN_1802627c0(longlong *param_1,float *param_2,undefined8 *param_3)

{
  longlong lVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined1 auVar7 [16];
  char cVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 local_e8;
  float local_e0;
  float local_d8 [2];
  float local_d0;
  float local_cc;
  float local_c8;
  
  local_e8 = *param_3;
  local_e0 = *(float *)(param_3 + 1);
  FUN_180450e30(&local_e8);
  lVar1 = *param_1;
  fVar10 = *(float *)(lVar1 + 0x20);
  if (fVar10 <= 0.001) {
    auVar11 = *(undefined1 (*) [16])param_1[4];
    fVar15 = -auVar11._0_4_;
    auVar7 = vshufps_avx(auVar11,auVar11,0x55);
    fVar12 = -auVar7._0_4_;
    auVar7 = vshufps_avx(auVar11,auVar11,0xaa);
    fVar9 = -auVar7._0_4_;
    fVar10 = fVar12 * local_e0 - fVar9 * local_e8._4_4_;
    fVar6 = fVar9 * (float)local_e8 - fVar15 * local_e0;
    fVar13 = fVar15 * local_e8._4_4_ - fVar12 * (float)local_e8;
    fVar14 = fVar12 * fVar13 - fVar9 * fVar6;
    fVar12 = fVar15 * fVar6 - fVar12 * fVar10;
    fVar15 = fVar9 * fVar10 - fVar15 * fVar13;
    auVar11 = vshufps_avx(auVar11,auVar11,0xff);
    fVar9 = auVar11._0_4_ * 2.0;
    fVar10 = fVar9 * fVar10 + (float)local_e8 + fVar14 + fVar14;
    fVar6 = fVar9 * fVar6 + local_e8._4_4_ + fVar15 + fVar15;
    fVar9 = fVar9 * fVar13 + local_e0 + fVar12 + fVar12;
    auVar11 = SUB6416(ZEXT464(0x46000000),0);
    if (1e-06 < ABS(fVar10)) {
      auVar11 = vminss_avx(ZEXT416((uint)ABS(((*(float *)(lVar1 + 0x14) - *(float *)(lVar1 + 8)) *
                                             0.5) / fVar10)),auVar11);
    }
    if (1e-06 < ABS(fVar6)) {
      auVar11 = vminss_avx(ZEXT416((uint)ABS(((*(float *)(lVar1 + 0x18) - *(float *)(lVar1 + 0xc)) *
                                             0.5) / fVar6)),auVar11);
    }
    if (1e-06 < ABS(fVar9)) {
      auVar11 = vminss_avx(ZEXT416((uint)ABS(((*(float *)(lVar1 + 0x1c) - *(float *)(lVar1 + 0x10))
                                             * 0.5) / fVar9)),auVar11);
    }
    fVar10 = auVar11._0_4_;
    if (fVar10 < 8192.0) {
      pfVar2 = (float *)param_1[3];
      fVar6 = pfVar2[2];
      fVar9 = pfVar2[1];
      *param_2 = fVar10 * (float)local_e8 + *pfVar2;
      param_2[1] = fVar10 * local_e8._4_4_ + fVar9;
      param_2[2] = fVar10 * local_e0 + fVar6;
      return param_2;
    }
  }
  else {
    pfVar2 = (float *)param_1[2];
    pfVar3 = (float *)param_1[1];
    fVar6 = (pfVar3[1] - pfVar2[1]) * (pfVar3[1] - pfVar2[1]) +
            (*pfVar3 - *pfVar2) * (*pfVar3 - *pfVar2) +
            (pfVar3[2] - pfVar2[2]) * (pfVar3[2] - pfVar2[2]);
    fVar9 = 0.0;
    if (fVar6 != 0.0) {
      if (fVar6 < 0.0) {
        fVar9 = (float)FUN_18061e150(fVar6);
      }
      else {
        fVar9 = SQRT(fVar6);
      }
    }
    pfVar4 = (float *)param_1[3];
    fVar6 = fVar10 + fVar10 + fVar9 + 1.0;
    fVar9 = fVar6 * (float)local_e8 + *pfVar4;
    fVar13 = fVar6 * local_e8._4_4_ + pfVar4[1];
    fVar14 = fVar6 * local_e0 + pfVar4[2];
    fVar6 = fVar6 * -2.0;
    fVar12 = fVar6 * (float)local_e8;
    fVar15 = fVar6 * local_e8._4_4_;
    fVar16 = fVar6 * local_e0;
    local_e8 = CONCAT44(fVar15,fVar12);
    local_d8[0] = 1.0;
    local_e0 = fVar16;
    local_d0 = fVar9;
    local_cc = fVar13;
    local_c8 = fVar14;
    cVar8 = FUN_1802799a0(fVar6,&local_d0,&local_e8,pfVar2,pfVar3,fVar10,local_d8);
    if (cVar8 != '\0') {
      *param_2 = fVar12 * local_d8[0] + fVar9;
      param_2[2] = fVar16 * local_d8[0] + fVar14;
      param_2[1] = fVar15 * local_d8[0] + fVar13;
      return param_2;
    }
  }
  puVar5 = (undefined8 *)param_1[3];
  *(undefined8 *)param_2 = *puVar5;
  param_2[2] = *(float *)(puVar5 + 1);
  return param_2;
}



