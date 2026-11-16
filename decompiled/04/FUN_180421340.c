// FUN_180421340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180421340 */

void FUN_180421340(float *param_1,uint *param_2)

{
  uint *puVar1;
  float fVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  float *pfVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [64];
  ulonglong uVar22;
  undefined1 auVar23 [64];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double local_d8 [22];
  
  puVar1 = param_2 + 6;
  auVar12 = vmaxss_avx(ZEXT416(*param_2),ZEXT416(*puVar1));
  auVar13 = vminss_avx(ZEXT416(param_2[1]),ZEXT416(param_2[7]));
  fVar2 = (float)param_2[2];
  auVar3 = vminss_avx(ZEXT416(*param_2),ZEXT416(*puVar1));
  fVar20 = auVar3._0_4_;
  auVar3 = vmaxss_avx(ZEXT416(param_2[1]),ZEXT416(param_2[7]));
  pfVar5 = param_1 + 2;
  fVar8 = auVar3._0_4_;
  param_1[3] = fVar8;
  *param_1 = fVar20;
  fVar17 = auVar13._0_4_;
  param_1[1] = fVar17;
  fVar19 = auVar12._0_4_;
  *pfVar5 = fVar19;
  if ((((fVar2 < fVar20) || (fVar19 < fVar2)) || ((float)param_2[3] < fVar17)) ||
     (((fVar8 < (float)param_2[3] || (fVar2 = (float)param_2[4], fVar2 < fVar20)) ||
      ((fVar19 < fVar2 || (((float)param_2[5] < fVar17 || (fVar8 < (float)param_2[5])))))))) {
    dVar25 = 3.0;
    dVar29 = 1e-12;
    dVar30 = 1.0;
    lVar7 = 2;
    do {
      uVar22 = 0x8000000000000000;
      dVar24 = (double)*(float *)((longlong)pfVar5 +
                                 (longlong)(param_2 + 2) + (-8 - (longlong)param_1));
      dVar27 = (double)*(float *)((longlong)pfVar5 + (longlong)param_2 + (-8 - (longlong)param_1));
      dVar26 = (double)*(float *)((longlong)pfVar5 +
                                 (longlong)(param_2 + 4) + (-8 - (longlong)param_1));
      dVar28 = (double)*(float *)((longlong)pfVar5 + (longlong)puVar1 + (-8 - (longlong)param_1));
      dVar11 = ((dVar24 * 9.0 - dVar27 * dVar25) - dVar26 * 9.0) + dVar28 * dVar25;
      dVar18 = dVar24 * dVar25 - dVar27 * dVar25;
      dVar9 = (dVar27 * 6.0 - dVar24 * 12.0) + dVar26 * 6.0;
      uVar6 = 0;
      lVar4 = 0;
      if (dVar29 <= ABS(dVar11)) {
        dVar18 = dVar9 * dVar9 - dVar18 * 4.0 * dVar11;
        if (dVar29 < dVar18) {
          if (dVar18 < 0.0) {
            uVar22 = 0x8000000000000000;
            dVar18 = (double)FUN_18061e090(dVar18);
          }
          else {
            dVar18 = SQRT(dVar18);
          }
          dVar10 = (dVar18 - dVar9) / (dVar11 + dVar11);
          if ((dVar29 < dVar10) && (dVar10 < 0.999999999999)) {
            uVar6 = 1;
            lVar4 = 1;
            local_d8[0] = dVar10;
          }
          dVar11 = ((double)((ulonglong)dVar9 ^ uVar22) - dVar18) / (dVar11 + dVar11);
          if ((dVar29 < dVar11) && (dVar11 < 0.999999999999)) {
            local_d8[lVar4] = dVar11;
            uVar6 = (ulonglong)((int)uVar6 + 1);
          }
        }
      }
      else if (((dVar29 < ABS(dVar9)) && (dVar9 = -dVar18 / dVar9, dVar29 < dVar9)) &&
              (dVar9 < 0.999999999999)) {
        local_d8[0] = dVar9;
        uVar6 = 1;
      }
      lVar4 = 0;
      if (3 < uVar6) {
        auVar21 = ZEXT464((uint)pfVar5[-2]);
        auVar23 = ZEXT464((uint)*pfVar5);
        do {
          dVar11 = local_d8[lVar4];
          dVar18 = dVar30 - dVar11;
          dVar9 = local_d8[lVar4 + 1];
          dVar11 = dVar18 * dVar25 * dVar18 * dVar11 * dVar24 + dVar18 * dVar18 * dVar18 * dVar27 +
                   dVar18 * dVar25 * dVar11 * dVar11 * dVar26 + dVar11 * dVar11 * dVar11 * dVar28;
          auVar12._0_4_ = (float)dVar11;
          auVar12._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
          auVar12._8_8_ = 0;
          auVar3 = vminss_avx(auVar21._0_16_,auVar12);
          auVar12 = vmaxss_avx(auVar23._0_16_,auVar12);
          dVar18 = dVar30 - dVar9;
          dVar11 = local_d8[lVar4 + 2];
          dVar9 = dVar18 * dVar25 * dVar18 * dVar9 * dVar24 + dVar18 * dVar18 * dVar18 * dVar27 +
                  dVar9 * dVar18 * dVar25 * dVar9 * dVar26 + dVar9 * dVar9 * dVar9 * dVar28;
          auVar13._0_4_ = (float)dVar9;
          auVar13._4_4_ = (int)((ulonglong)dVar9 >> 0x20);
          auVar13._8_8_ = 0;
          auVar3 = vminss_avx(auVar3,auVar13);
          auVar12 = vmaxss_avx(auVar12,auVar13);
          dVar18 = dVar30 - dVar11;
          dVar9 = local_d8[lVar4 + 3];
          dVar11 = dVar18 * dVar25 * dVar18 * dVar11 * dVar24 + dVar18 * dVar18 * dVar18 * dVar27 +
                   dVar18 * dVar25 * dVar11 * dVar11 * dVar26 + dVar11 * dVar11 * dVar11 * dVar28;
          auVar14._0_4_ = (float)dVar11;
          auVar14._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
          auVar14._8_8_ = 0;
          dVar11 = dVar30 - dVar9;
          auVar3 = vminss_avx(auVar3,auVar14);
          auVar12 = vmaxss_avx(auVar12,auVar14);
          dVar11 = dVar11 * dVar25 * dVar11 * dVar9 * dVar24 + dVar11 * dVar11 * dVar11 * dVar27 +
                   dVar11 * dVar25 * dVar9 * dVar9 * dVar26 + dVar9 * dVar9 * dVar9 * dVar28;
          auVar15._0_4_ = (float)dVar11;
          auVar15._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
          auVar15._8_8_ = 0;
          lVar4 = lVar4 + 4;
          auVar3 = vminss_avx(auVar3,auVar15);
          auVar21 = ZEXT1664(auVar3);
          auVar12 = vmaxss_avx(auVar12,auVar15);
          auVar23 = ZEXT1664(auVar12);
        } while (lVar4 < (longlong)(uVar6 - 3));
        pfVar5[-2] = auVar3._0_4_;
        *pfVar5 = auVar12._0_4_;
      }
      if (lVar4 < (longlong)uVar6) {
        auVar21 = ZEXT464((uint)pfVar5[-2]);
        auVar23 = ZEXT464((uint)*pfVar5);
        do {
          dVar11 = local_d8[lVar4];
          dVar9 = dVar30 - dVar11;
          dVar11 = dVar9 * dVar25 * dVar9 * dVar11 * dVar24 + dVar9 * dVar9 * dVar9 * dVar27 +
                   dVar9 * dVar25 * dVar11 * dVar11 * dVar26 + dVar11 * dVar11 * dVar11 * dVar28;
          auVar16._0_4_ = (float)dVar11;
          auVar16._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
          auVar16._8_8_ = 0;
          lVar4 = lVar4 + 1;
          auVar3 = vminss_avx(auVar21._0_16_,auVar16);
          auVar21 = ZEXT1664(auVar3);
          auVar12 = vmaxss_avx(auVar23._0_16_,auVar16);
          auVar23 = ZEXT1664(auVar12);
        } while (lVar4 < (longlong)uVar6);
        pfVar5[-2] = auVar3._0_4_;
        *pfVar5 = auVar12._0_4_;
      }
      pfVar5 = pfVar5 + 1;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}



