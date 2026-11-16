// FUN_1802799a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802799a0 */

BADSPACEBASE *
FUN_1802799a0(undefined8 param_1,float *param_2,float *param_3,float *param_4,float *param_5,
             float param_6,float *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  float *pfVar10;
  uint uVar11;
  longlong lVar12;
  byte bVar13;
  undefined1 auVar14 [16];
  undefined1 extraout_var [56];
  undefined1 auVar15 [64];
  undefined1 extraout_var_00 [56];
  undefined1 auVar16 [64];
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e4;
  float local_dc;
  
  fVar1 = *param_3;
  fVar2 = param_3[2];
  fVar25 = param_3[1];
  fVar3 = *param_5 - *param_4;
  fVar4 = param_5[1] - param_4[1];
  fVar5 = param_5[2] - param_4[2];
  fVar24 = fVar4 * fVar4 + fVar3 * fVar3 + fVar5 * fVar5;
  fVar31 = fVar25 * fVar25 + fVar1 * fVar1 + fVar2 * fVar2;
  if (1e-08 <= fVar31) {
    bVar13 = 0;
    fVar23 = 1.0;
    fVar22 = 0.0;
    if (1e-08 < fVar24) {
      fVar29 = (fVar1 * fVar3 + fVar25 * fVar4 + fVar2 * fVar5) / fVar24;
      fVar30 = ((*param_2 - *param_4) * fVar3 + (param_2[1] - param_4[1]) * fVar4 +
               (param_2[2] - param_4[2]) * fVar5) / fVar24;
      fVar20 = param_3[1] - fVar29 * fVar4;
      fVar17 = fVar1 - fVar3 * fVar29;
      fVar21 = param_3[2] - fVar29 * fVar5;
      fVar6 = (*param_2 - *param_4) - fVar3 * fVar30;
      fVar7 = (param_2[1] - param_4[1]) - fVar30 * fVar4;
      fVar8 = (param_2[2] - param_4[2]) - fVar30 * fVar5;
      fVar25 = fVar20 * fVar20 + fVar17 * fVar17 + fVar21 * fVar21;
      fVar20 = fVar7 * fVar20 + fVar6 * fVar17 + fVar8 * fVar21;
      if (1e-08 < fVar25) {
        fVar17 = fVar20 * fVar20 -
                 ((fVar7 * fVar7 + fVar6 * fVar6 + fVar8 * fVar8) - param_6 * param_6) * fVar25;
        if (0.0 <= fVar17) {
          if (fVar17 < 0.0) {
            auVar15._0_8_ = FUN_18061e150(fVar17);
            auVar15._8_56_ = extraout_var;
            auVar14 = auVar15._0_16_;
          }
          else {
            auVar14 = ZEXT416((uint)SQRT(fVar17));
          }
          iVar9 = 0;
          do {
            auVar18 = auVar14;
            if (iVar9 == 0) {
              auVar18._0_8_ = auVar14._0_8_ ^ 0x80000000;
              auVar18._8_4_ = auVar14._8_4_;
              auVar18._12_4_ = auVar14._12_4_;
            }
            fVar17 = (auVar18._0_4_ - fVar20) / fVar25;
            if ((((fVar22 <= fVar17) && (fVar17 < 1.0)) &&
                (fVar21 = fVar17 * fVar29 + fVar30, fVar22 <= fVar21)) && (fVar21 <= 1.0)) {
              bVar13 = 1;
              fVar23 = fVar17;
              break;
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < 2);
        }
      }
    }
    fVar25 = 1e-08;
    uVar26 = 0x80000000;
    uVar27 = 0;
    uVar28 = 0;
    lVar12 = 2;
    local_f0 = *(undefined8 *)param_4;
    local_e4 = *(undefined8 *)param_5;
    local_e8 = param_4[2];
    uVar11 = 0;
    pfVar10 = (float *)((longlong)&local_f0 + 4);
    local_dc = param_5[2];
    do {
      fVar20 = pfVar10[-1];
      fVar21 = *param_2 - fVar20;
      fVar6 = param_2[1] - *pfVar10;
      fVar7 = param_2[2] - pfVar10[1];
      fVar17 = fVar6 * param_3[1] + fVar1 * fVar21 + fVar2 * fVar7;
      fVar21 = fVar17 * fVar17 -
               ((fVar6 * fVar6 + fVar21 * fVar21 + fVar7 * fVar7) - param_6 * param_6) * fVar31;
      if (fVar22 <= fVar21) {
        if (fVar21 < 0.0) {
          auVar16._0_8_ = FUN_18061e150(fVar21);
          auVar16._8_56_ = extraout_var_00;
          auVar14 = auVar16._0_16_;
        }
        else {
          auVar14 = ZEXT416((uint)SQRT(fVar21));
        }
        iVar9 = 0;
        do {
          auVar19 = auVar14;
          if (iVar9 == 0) {
            auVar19._0_4_ = auVar14._0_4_ ^ uVar26;
            auVar19._4_4_ = 0;
            auVar19._8_4_ = auVar14._8_4_ ^ uVar27;
            auVar19._12_4_ = auVar14._12_4_ ^ uVar28;
          }
          fVar21 = (auVar19._0_4_ - fVar17) / fVar31;
          if ((fVar22 <= fVar21) && (fVar21 < fVar23)) {
            if (fVar25 < fVar24) {
              auVar18 = vpcmpeqd_avx(ZEXT416(uVar11),SUB6416(ZEXT464(0),0));
              auVar18 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),SUB6416(ZEXT464(0xbf800000),0),
                                      auVar18);
              if ((((fVar21 * param_3[1] + param_2[1]) - *pfVar10) * fVar4 +
                   ((fVar21 * *param_3 + *param_2) - fVar20) * fVar3 +
                  ((fVar21 * param_3[2] + param_2[2]) - pfVar10[1]) * fVar5) * auVar18._0_4_ <
                  fVar22) goto LAB_180279e51;
            }
            bVar13 = 1;
            fVar23 = fVar21;
            break;
          }
LAB_180279e51:
          iVar9 = iVar9 + 1;
        } while (iVar9 < 2);
      }
      uVar11 = uVar11 + 1;
      pfVar10 = pfVar10 + 3;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    if (bVar13 != 0) {
      *param_7 = fVar23;
    }
    register0x00000020 = (BADSPACEBASE *)(ulonglong)bVar13;
  }
  return register0x00000020;
}



