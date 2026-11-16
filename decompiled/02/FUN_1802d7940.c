// FUN_1802d7940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d7940 */

undefined8 FUN_1802d7940(undefined8 param_1,longlong param_2,float *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  char cVar9;
  longlong lVar10;
  float *pfVar11;
  float *pfVar12;
  undefined8 *puVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [64];
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  float fVar28;
  undefined1 auVar29 [16];
  float fVar30;
  float fVar31;
  undefined1 in_ZMM13 [64];
  float fVar32;
  undefined1 in_ZMM14 [64];
  float fVar33;
  undefined1 in_ZMM15 [64];
  float local_128;
  float fStack_124;
  uint local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  float local_d8 [8];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  
  puVar13 = (undefined8 *)(param_2 + 0x1074);
  if (*(int *)(param_2 + 0x1394) < 1) {
    uVar17 = SUB648(ZEXT464(0x7f7fffff),0);
  }
  else {
    auVar18 = ZEXT464(0x7f7fffff);
    uVar17 = auVar18._0_8_;
    puVar1 = puVar13 + (longlong)*(int *)(param_2 + 0x1394) * 5;
    lVar10 = 0x13ac;
    if (*(char *)(param_2 + 0x13b8) == '\0') {
      lVar10 = 0x44;
    }
    local_118 = 0x7f7fffff;
    uVar2 = *(undefined8 *)(lVar10 + param_2);
    fVar3 = *(float *)(lVar10 + 8 + param_2);
    if (puVar13 != puVar1) {
      uVar25 = 0x80000000;
      local_98 = in_ZMM13._0_16_;
      local_a8 = in_ZMM14._0_16_;
      local_b8 = in_ZMM15._0_16_;
      do {
        iVar4 = *(int *)((longlong)puVar13 + 4);
        if ((-1 < iVar4) && (iVar4 < *(int *)(param_2 + 0x1070))) {
          local_100 = *puVar13;
          uStack_f8 = puVar13[1];
          uStack_f0 = puVar13[2];
          uStack_e8 = puVar13[3];
          local_e0 = puVar13[4];
          lVar10 = (longlong)iVar4 * 0x20 + param_2;
          local_110 = *(undefined8 *)(lVar10 + 0x80);
          uStack_108 = *(undefined8 *)(lVar10 + 0x88);
          cVar9 = FUN_1802405f0(puVar13,lVar10 + 0x70,&local_100,&local_110);
          if (cVar9 != '\0') {
            fVar15 = *(float *)(lVar10 + 0x70);
            fVar16 = *(float *)(lVar10 + 0x74);
            fVar19 = *(float *)(lVar10 + 0x78);
            if (1.0 <= fVar16 * fVar16 + fVar15 * fVar15 + fVar19 * fVar19) {
              local_128 = (float)uVar2;
              fStack_124 = (float)((ulonglong)uVar2 >> 0x20);
              if (0.001 < (float)local_e0) {
                fVar19 = local_110._4_4_ * (float)uStack_f0 - (float)uStack_108 * uStack_f8._4_4_;
                fVar28 = (float)uStack_108 * (float)uStack_f8 - (float)local_110 * (float)uStack_f0;
                fVar23 = uStack_108._4_4_ * 2.0;
                fVar30 = (float)local_110 * uStack_f8._4_4_ - local_110._4_4_ * (float)uStack_f8;
                fVar5 = local_110._4_4_ * fVar30 - (float)uStack_108 * fVar28;
                fVar15 = fVar23 * fVar19 + (float)uStack_f8 + fVar5 + fVar5 + fVar15;
                fVar5 = (float)uStack_108 * fVar19 - (float)local_110 * fVar30;
                fVar16 = fVar23 * fVar28 + uStack_f8._4_4_ + fVar5 + fVar5 + fVar16;
                fVar19 = (float)local_110 * fVar28 - local_110._4_4_ * fVar19;
                fVar5 = fVar23 * fVar30 + (float)uStack_f0 + fVar19 + fVar19 +
                        *(float *)(lVar10 + 0x78);
                fVar28 = local_110._4_4_ * uStack_e8._4_4_ - (float)uStack_108 * (float)uStack_e8;
                fVar30 = (float)uStack_108 * uStack_f0._4_4_ - (float)local_110 * uStack_e8._4_4_;
                fVar6 = (float)local_110 * (float)uStack_e8 - local_110._4_4_ * uStack_f0._4_4_;
                fVar7 = local_110._4_4_ * fVar6 - (float)uStack_108 * fVar30;
                fVar21 = (float)uStack_108 * fVar28 - (float)local_110 * fVar6;
                fVar19 = param_3[2];
                fVar8 = (float)local_110 * fVar30 - local_110._4_4_ * fVar28;
                fVar7 = (fVar23 * fVar28 + uStack_f0._4_4_ + fVar7 + fVar7 +
                        *(float *)(lVar10 + 0x70)) - fVar15;
                fVar21 = (fVar23 * fVar30 + (float)uStack_e8 + fVar21 + fVar21 +
                         *(float *)(lVar10 + 0x74)) - fVar16;
                fVar28 = param_3[1];
                fVar30 = *param_3;
                fVar8 = (fVar23 * fVar6 + uStack_e8._4_4_ + fVar8 + fVar8 +
                        *(float *)(lVar10 + 0x78)) - fVar5;
                fVar23 = fVar21 * fVar28 + fVar7 * fVar30 + fVar8 * fVar19;
                fVar6 = fVar28 * (fVar16 - fStack_124) + (fVar15 - local_128) * fVar30 +
                        fVar19 * (fVar5 - fVar3);
                fVar31 = fVar7 - fVar23 * fVar30;
                fVar32 = fVar8 - fVar19 * fVar23;
                fVar23 = fVar21 - fVar28 * fVar23;
                fVar19 = fVar23 * fVar23 + fVar31 * fVar31 + fVar32 * fVar32;
                if (fVar19 <= 1e-06) {
                  fVar19 = 0.0;
                }
                else {
                  local_d8[1] = -(((fVar16 - fStack_124) - fVar28 * fVar6) * fVar23 +
                                  ((fVar15 - local_128) - fVar30 * fVar6) * fVar31 +
                                 ((fVar5 - fVar3) - fVar6 * param_3[2]) * fVar32) / fVar19;
                  pfVar12 = local_d8;
                  if (0.0 <= local_d8[1]) {
                    pfVar12 = local_d8 + 1;
                  }
                  local_d8[2] = 1.0;
                  pfVar11 = local_d8 + 2;
                  if (local_d8[1] <= 1.0) {
                    pfVar11 = pfVar12;
                  }
                  local_d8[0] = 0.0;
                  fVar19 = *pfVar11;
                }
                fVar28 = fVar7 * fVar19 + fVar15;
                fVar30 = fVar8 * fVar19 + fVar5;
                fVar19 = fVar21 * fVar19 + fVar16;
                fVar23 = (fVar19 - fStack_124) * param_3[1] + (fVar28 - local_128) * *param_3 +
                         (fVar30 - fVar3) * param_3[2];
                if (fVar23 < 0.0) {
                  fVar19 = fVar21 * fVar21 + fVar7 * fVar7 + fVar8 * fVar8;
                  if (fVar19 <= 1e-06) {
                    fVar19 = 0.0;
                  }
                  else {
                    local_d8[4] = ((local_128 - fVar15) * fVar7 + (fStack_124 - fVar16) * fVar21 +
                                  (fVar3 - fVar5) * fVar8) / fVar19;
                    pfVar12 = local_d8 + 3;
                    if (0.0 <= local_d8[4]) {
                      pfVar12 = local_d8 + 4;
                    }
                    local_d8[5] = 1.0;
                    pfVar11 = local_d8 + 5;
                    if (local_d8[4] <= 1.0) {
                      pfVar11 = pfVar12;
                    }
                    local_d8[3] = 0.0;
                    fVar19 = *pfVar11;
                  }
                  fVar28 = fVar7 * fVar19 + fVar15;
                  fVar30 = fVar8 * fVar19 + fVar5;
                  fVar23 = 0.0;
                  fVar19 = fVar21 * fVar19 + fVar16;
                }
                fVar28 = fVar28 - (fVar23 * *param_3 + local_128);
                fVar19 = fVar19 - (fVar23 * param_3[1] + fStack_124);
                fVar30 = fVar30 - (fVar23 * param_3[2] + fVar3);
                fVar15 = fVar19 * fVar19 + fVar28 * fVar28 + fVar30 * fVar30;
                if (fVar15 == 0.0) {
                  auVar27 = ZEXT416((uint)(0.0 - (float)local_e0));
                }
                else if (fVar15 < 0.0) {
                  fVar15 = (float)FUN_18061e150(fVar15);
                  auVar27 = ZEXT416((uint)(fVar15 - (float)local_e0));
                }
                else {
                  auVar27 = ZEXT416((uint)(SQRT(fVar15) - (float)local_e0));
                }
                goto LAB_1802d83aa;
              }
              fVar33 = (float)((uint)(float)local_110 ^ uVar25);
              fVar31 = (float)((uint)(float)uStack_108 ^ uVar25);
              fVar32 = (float)((uint)local_110._4_4_ ^ uVar25);
              local_128 = local_128 - fVar15;
              fStack_124 = fStack_124 - fVar16;
              fVar19 = fVar3 - fVar19;
              fVar30 = uStack_108._4_4_ + uStack_108._4_4_;
              fVar6 = fStack_124 * fVar33 - local_128 * fVar32;
              fVar16 = local_128 * fVar31 - fVar19 * fVar33;
              fVar28 = fVar19 * fVar32 - fStack_124 * fVar31;
              fVar5 = fVar32 * fVar6 - fVar31 * fVar16;
              fVar23 = fVar31 * fVar28 - fVar33 * fVar6;
              fVar15 = param_3[1];
              fVar7 = fVar33 * fVar16 - fVar32 * fVar28;
              fVar5 = fVar28 * fVar30 + local_128 + fVar5 + fVar5;
              fVar23 = fVar16 * fVar30 + fStack_124 + fVar23 + fVar23;
              fVar16 = *param_3;
              fVar28 = param_3[2];
              fVar19 = fVar6 * fVar30 + fVar19 + fVar7 + fVar7;
              fVar6 = fVar15 * fVar33 - fVar32 * fVar16;
              fVar7 = fVar31 * fVar16 - fVar28 * fVar33;
              fVar21 = fVar32 * fVar6 - fVar31 * fVar7;
              fVar8 = fVar28 * fVar32 - fVar15 * fVar31;
              fVar31 = fVar31 * fVar8 - fVar33 * fVar6;
              fVar32 = fVar33 * fVar7 - fVar32 * fVar8;
              fVar16 = fVar8 * fVar30 + fVar16 + fVar21 + fVar21;
              fVar15 = fVar7 * fVar30 + fVar15 + fVar31 + fVar31;
              auVar29 = SUB6416(ZEXT464(0x7f7fffff),0);
              fVar28 = fVar6 * fVar30 + fVar28 + fVar32 + fVar32;
              auVar27 = ZEXT816(0);
              auVar18 = ZEXT1664(auVar27);
              auVar26 = ZEXT816(0);
              if (1e-08 <= ABS(fVar16)) {
                auVar22 = ZEXT416((uint)(((float)uStack_f8 - fVar5) / fVar16));
                auVar20 = ZEXT416((uint)((uStack_f0._4_4_ - fVar5) / fVar16));
                auVar26 = vcmpss_avx(auVar20,auVar22,1);
                auVar26 = vblendvps_avx(auVar22,auVar20,auVar26);
                auVar26 = vmaxss_avx(auVar26,auVar27);
                auVar29 = vcmpss_avx(auVar20,auVar22,1);
                auVar29 = vblendvps_avx(auVar20,auVar22,auVar29);
                auVar29 = vminss_avx(auVar29,ZEXT416(0x7f7fffff));
                bVar14 = auVar29._0_4_ < auVar26._0_4_;
LAB_1802d815c:
                if (bVar14) goto LAB_1802d8195;
                if (1e-08 <= ABS(fVar15)) {
                  auVar24 = ZEXT416((uint)((uStack_f8._4_4_ - fVar23) / fVar15));
                  auVar22 = ZEXT416((uint)(((float)uStack_e8 - fVar23) / fVar15));
                  auVar20 = vcmpss_avx(auVar22,auVar24,1);
                  auVar20 = vblendvps_avx(auVar24,auVar22,auVar20);
                  auVar26 = vmaxss_avx(auVar20,auVar26);
                  auVar20 = vcmpss_avx(auVar22,auVar24,1);
                  auVar20 = vblendvps_avx(auVar22,auVar24,auVar20);
                  auVar29 = vminss_avx(auVar20,auVar29);
                  if (auVar26._0_4_ <= auVar29._0_4_) goto LAB_1802d82cf;
                  goto LAB_1802d8195;
                }
                if ((fVar23 < uStack_f8._4_4_) || ((float)uStack_e8 < fVar23)) goto LAB_1802d8195;
LAB_1802d82cf:
                if (1e-08 <= ABS(fVar28)) {
                  auVar24 = ZEXT416((uint)(((float)uStack_f0 - fVar19) / fVar28));
                  auVar22 = ZEXT416((uint)((uStack_e8._4_4_ - fVar19) / fVar28));
                  auVar20 = vcmpss_avx(auVar22,auVar24,1);
                  auVar20 = vblendvps_avx(auVar24,auVar22,auVar20);
                  auVar20 = vmaxss_avx(auVar20,auVar26);
                  auVar26 = vcmpss_avx(auVar22,auVar24,1);
                  auVar26 = vblendvps_avx(auVar22,auVar24,auVar26);
                  auVar26 = vminss_avx(auVar26,auVar29);
                  if (auVar26._0_4_ < auVar20._0_4_) goto LAB_1802d8195;
                }
                else if ((fVar19 < (float)uStack_f0) || (uStack_e8._4_4_ < fVar19))
                goto LAB_1802d8195;
              }
              else {
                if ((float)uStack_f8 <= fVar5) {
                  bVar14 = uStack_f0._4_4_ < fVar5;
                  goto LAB_1802d815c;
                }
LAB_1802d8195:
                fVar30 = (uStack_f0._4_4_ - (float)uStack_f8) * 0.5;
                fVar6 = ((float)uStack_e8 - uStack_f8._4_4_) * 0.5;
                fVar7 = (uStack_e8._4_4_ - (float)uStack_f0) * 0.5;
                fVar23 = ((float)uStack_e8 + uStack_f8._4_4_) * 0.5 - fVar23;
                fVar5 = ((float)uStack_f8 + uStack_f0._4_4_) * 0.5 - fVar5;
                fVar19 = ((float)uStack_f0 + uStack_e8._4_4_) * 0.5 - fVar19;
                auVar27 = vmaxss_avx(auVar27,ZEXT416((uint)(fVar5 * fVar16 + fVar23 * fVar15 +
                                                           fVar19 * fVar28)));
                fVar21 = auVar27._0_4_;
                fVar5 = fVar5 - fVar21 * fVar16;
                fVar23 = fVar23 - fVar21 * fVar15;
                fVar19 = fVar19 - fVar21 * fVar28;
                fVar15 = fVar23 * fVar23 + fVar5 * fVar5 + fVar19 * fVar19;
                if (fVar15 == 0.0) {
                  fVar15 = 0.0;
                }
                else if (fVar15 < 0.0) {
                  fVar15 = (float)FUN_18061e150(fVar15);
                }
                else {
                  fVar15 = SQRT(fVar15);
                }
                auVar27 = auVar18._0_16_;
                fVar16 = fVar30 * fVar30 + fVar6 * fVar6 + fVar7 * fVar7;
                if (fVar16 == auVar18._0_4_) {
                  fVar16 = 0.0;
                }
                else if (fVar16 < 0.0) {
                  fVar16 = (float)FUN_18061e150(fVar16);
                  auVar27 = auVar18._0_16_;
                }
                else {
                  fVar16 = SQRT(fVar16);
                }
                auVar27 = vmaxss_avx(auVar27,ZEXT416((uint)(fVar15 - fVar16)));
              }
LAB_1802d83aa:
              auVar27 = vminss_avx(auVar27,ZEXT416(local_118));
              auVar18 = ZEXT1664(auVar27);
              uVar25 = 0x80000000;
              local_118 = auVar27._0_4_;
              goto LAB_1802d83c6;
            }
          }
          auVar18 = ZEXT464(local_118);
        }
LAB_1802d83c6:
        uVar17 = auVar18._0_8_;
        puVar13 = puVar13 + 5;
      } while (puVar13 != puVar1);
    }
  }
  return uVar17;
}



