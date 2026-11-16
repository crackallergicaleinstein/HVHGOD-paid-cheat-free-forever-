// FUN_180241590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180241590 */

ulonglong FUN_180241590(float *param_1,float *param_2,float *param_3,float *param_4,float param_5,
                       float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  ulonglong uVar7;
  float *pfVar8;
  uint uVar9;
  longlong lVar10;
  byte bVar11;
  undefined1 auVar12 [16];
  undefined1 extraout_var [56];
  undefined1 auVar13 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar14 [64];
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d4;
  float local_cc;
  
  uVar7 = thunk_FUN_180624430(*param_1);
  if ((short)uVar7 < 1) {
    fVar1 = param_1[1];
    uVar7 = thunk_FUN_180624430();
    if (((short)uVar7 < 1) && (uVar7 = thunk_FUN_180624430(param_1[2]), (short)uVar7 < 1)) {
      fVar2 = *param_2;
      fVar30 = fVar2;
      uVar7 = thunk_FUN_180624430(fVar2);
      if ((short)uVar7 < 1) {
        fVar19 = param_2[1];
        uVar7 = thunk_FUN_180624430(fVar19);
        if (((short)uVar7 < 1) && (uVar7 = thunk_FUN_180624430(param_2[2]), (short)uVar7 < 1)) {
          fVar18 = *param_3;
          uVar7 = thunk_FUN_180624430(fVar18);
          if ((short)uVar7 < 1) {
            fVar15 = param_3[1];
            uVar7 = thunk_FUN_180624430(fVar15);
            if ((short)uVar7 < 1) {
              fVar21 = param_3[2];
              uVar7 = thunk_FUN_180624430(fVar21);
              if ((short)uVar7 < 1) {
                fVar26 = *param_4;
                uVar7 = thunk_FUN_180624430(fVar26);
                if ((short)uVar7 < 1) {
                  fVar24 = param_4[1];
                  uVar7 = thunk_FUN_180624430(fVar24);
                  if ((short)uVar7 < 1) {
                    fVar22 = param_4[2];
                    uVar7 = thunk_FUN_180624430(fVar22);
                    if ((((short)uVar7 < 1) &&
                        (uVar7 = thunk_FUN_180624430(param_5), (short)uVar7 < 1)) &&
                       (fVar20 = 0.0, 0.0 <= param_5)) {
                      fVar24 = fVar24 - fVar15;
                      fVar26 = fVar26 - fVar18;
                      fVar22 = fVar22 - fVar21;
                      fVar25 = fVar26 * fVar26 + fVar24 * fVar24 + fVar22 * fVar22;
                      fVar3 = param_2[2];
                      fVar30 = fVar19 * fVar19 + fVar30 * fVar30 + fVar3 * fVar3;
                      fVar15 = param_1[1] - fVar15;
                      if (1e-08 <= fVar30) {
                        fVar23 = 1.0;
                        bVar11 = 0;
                        fVar19 = param_1[1];
                        if (1e-08 < fVar25) {
                          fVar31 = (fVar26 * *param_2 + param_2[1] * fVar24 + fVar3 * fVar22) /
                                   fVar25;
                          fVar32 = ((*param_1 - fVar18) * fVar26 + fVar15 * fVar24 +
                                   (param_1[2] - fVar21) * fVar22) / fVar25;
                          fVar3 = param_2[1] - fVar31 * fVar24;
                          fVar4 = (*param_1 - fVar18) - fVar32 * fVar26;
                          fVar18 = *param_2 - fVar26 * fVar31;
                          fVar5 = param_2[2] - fVar31 * fVar22;
                          fVar15 = fVar15 - fVar32 * fVar24;
                          fVar21 = (param_1[2] - fVar21) - fVar32 * fVar22;
                          fVar19 = fVar3 * fVar3 + fVar18 * fVar18 + fVar5 * fVar5;
                          fVar18 = fVar15 * fVar3 + fVar4 * fVar18 + fVar21 * fVar5;
                          if ((1e-08 < fVar19) &&
                             (fVar15 = fVar18 * fVar18 -
                                       ((fVar15 * fVar15 + fVar4 * fVar4 + fVar21 * fVar21) -
                                       param_5 * param_5) * fVar19, 0.0 <= fVar15)) {
                            if (fVar15 < 0.0) {
                              auVar13._0_8_ = FUN_18061e150(fVar15);
                              auVar13._8_56_ = extraout_var;
                              auVar12 = auVar13._0_16_;
                            }
                            else {
                              auVar12 = ZEXT416((uint)SQRT(fVar15));
                            }
                            iVar6 = 0;
                            do {
                              auVar16 = auVar12;
                              if (iVar6 == 0) {
                                auVar16._0_8_ = auVar12._0_8_ ^ 0x80000000;
                                auVar16._8_4_ = auVar12._8_4_;
                                auVar16._12_4_ = auVar12._12_4_;
                              }
                              fVar15 = (auVar16._0_4_ - fVar18) / fVar19;
                              if (((fVar20 <= fVar15) && (fVar15 < 1.0)) &&
                                 ((fVar21 = fVar15 * fVar31 + fVar32, fVar20 <= fVar21 &&
                                  (fVar21 <= 1.0)))) {
                                bVar11 = 1;
                                fVar23 = fVar15;
                                break;
                              }
                              iVar6 = iVar6 + 1;
                            } while (iVar6 < 2);
                          }
                          fVar19 = fVar1;
                        }
                        fVar18 = 1e-08;
                        uVar27 = 0x80000000;
                        uVar28 = 0;
                        uVar29 = 0;
                        lVar10 = 2;
                        local_e0 = *(undefined8 *)param_3;
                        local_d4 = *(undefined8 *)param_4;
                        local_d8 = param_3[2];
                        uVar9 = 0;
                        pfVar8 = (float *)((longlong)&local_e0 + 4);
                        local_cc = param_4[2];
                        do {
                          fVar19 = fVar19 - *pfVar8;
                          fVar15 = pfVar8[-1];
                          fVar3 = *param_1 - fVar15;
                          fVar4 = param_1[2] - pfVar8[1];
                          fVar21 = fVar19 * param_2[1] + fVar3 * fVar2 + fVar4 * param_2[2];
                          fVar19 = fVar21 * fVar21 -
                                   ((fVar19 * fVar19 + fVar3 * fVar3 + fVar4 * fVar4) -
                                   param_5 * param_5) * fVar30;
                          if (fVar20 <= fVar19) {
                            if (fVar19 < 0.0) {
                              auVar14._0_8_ = FUN_18061e150(fVar19);
                              auVar14._8_56_ = extraout_var_00;
                              auVar12 = auVar14._0_16_;
                            }
                            else {
                              auVar12 = ZEXT416((uint)SQRT(fVar19));
                            }
                            iVar6 = 0;
                            do {
                              auVar17 = auVar12;
                              if (iVar6 == 0) {
                                auVar17._0_4_ = auVar12._0_4_ ^ uVar27;
                                auVar17._4_4_ = 0;
                                auVar17._8_4_ = auVar12._8_4_ ^ uVar28;
                                auVar17._12_4_ = auVar12._12_4_ ^ uVar29;
                              }
                              fVar19 = (auVar17._0_4_ - fVar21) / fVar30;
                              if ((fVar20 <= fVar19) && (fVar19 < fVar23)) {
                                if (fVar18 < fVar25) {
                                  auVar16 = vpcmpeqd_avx(ZEXT416(uVar9),SUB6416(ZEXT464(0),0));
                                  auVar16 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),
                                                          SUB6416(ZEXT464(0xbf800000),0),auVar16);
                                  if ((((fVar19 * param_2[1] + param_1[1]) - *pfVar8) * fVar24 +
                                       ((fVar19 * *param_2 + *param_1) - fVar15) * fVar26 +
                                      ((fVar19 * param_2[2] + param_1[2]) - pfVar8[1]) * fVar22) *
                                      auVar16._0_4_ < fVar20) goto LAB_180241ae8;
                                }
                                bVar11 = 1;
                                fVar23 = fVar19;
                                break;
                              }
LAB_180241ae8:
                              iVar6 = iVar6 + 1;
                            } while (iVar6 < 2);
                          }
                          uVar9 = uVar9 + 1;
                          pfVar8 = pfVar8 + 3;
                          lVar10 = lVar10 + -1;
                          fVar19 = fVar1;
                          if (lVar10 == 0) {
                            if (bVar11 != 0) {
                              *param_6 = fVar23;
                            }
                            return (ulonglong)bVar11;
                          }
                        } while( true );
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar7 & 0xffffffffffffff00;
}



