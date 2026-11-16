// FUN_180424890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180424890 */

void FUN_180424890(longlong param_1,float *param_2,float *param_3,float *param_4,int param_5)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 extraout_var [56];
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  uint uVar25;
  float fVar26;
  float fVar27;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  
  local_f4 = 0.0;
  local_f0 = 0.0;
  fVar8 = param_4[3];
  auVar21 = ZEXT464((uint)((param_4[2] / 180.0) * 3.1415927));
  iVar2 = 0;
  local_ec = param_4[5];
  local_e8 = param_4[6];
  uVar25 = 0x7fffffff;
  fVar1 = param_4[4];
  fVar17 = ABS(param_4[1]);
  auVar16 = ZEXT864(0);
  fVar27 = ABS(*param_4);
  if (param_5 != 0) {
    local_ec = local_ec + *param_2;
    local_e8 = local_e8 + *param_3;
  }
  auVar24 = ZEXT464((uint)local_e8);
  auVar23 = ZEXT464((uint)local_ec);
  fVar7 = *param_2 - local_ec;
  fVar11 = *param_3 - local_e8;
  fVar4 = fVar11 * fVar11 + fVar7 * fVar7;
  fVar9 = fVar17;
  if (fVar4 < 0.0) {
    fVar4 = (float)FUN_18061e150();
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  if (((fVar4 < 1e-06) || (fVar27 < 1e-06)) || (fVar9 < 1e-06)) {
    FUN_180421970(param_1,auVar23._0_8_,auVar24._0_8_);
    *param_2 = auVar23._0_4_;
    *param_3 = auVar24._0_4_;
  }
  else {
    fVar5 = (float)FUN_180638e00(auVar21._0_8_);
    fVar14 = fVar5;
    fVar6 = (float)FUN_180637540(auVar21._0_8_);
    fVar4 = fVar14 * fVar11 * 0.5 + fVar6 * fVar7 * 0.5;
    fVar26 = fVar6 * fVar11 * 0.5 - fVar14 * fVar7 * 0.5;
    fVar14 = fVar26 * fVar26;
    fVar11 = fVar4 * fVar4;
    fVar7 = fVar14 / (fVar9 * fVar9) + fVar11 / (fVar27 * fVar27);
    fVar22 = fVar26;
    if (1.0 < fVar7) {
      if (fVar7 < 0.0) {
        fVar7 = (float)FUN_18061e150(fVar7);
      }
      else {
        fVar7 = SQRT(fVar7);
      }
      fVar9 = fVar9 * fVar7;
      fVar27 = fVar27 * fVar7;
      fVar17 = fVar9;
    }
    fVar11 = fVar9 * fVar9 * fVar11;
    fVar14 = fVar27 * fVar27 * fVar14;
    fVar7 = fVar14 + fVar11;
    auVar21 = ZEXT864(0);
    if (auVar16._0_4_ < fVar7) {
      auVar12 = vmaxss_avx(auVar16._0_16_,
                           ZEXT416((uint)((fVar9 * fVar9 * fVar27 * fVar27 - fVar14) - fVar11)));
      fVar7 = auVar12._0_4_ / fVar7;
      if (fVar7 < 0.0) {
        auVar21._0_8_ = FUN_18061e150();
        auVar21._8_56_ = extraout_var;
        auVar21 = ZEXT1664(auVar21._0_16_);
      }
      else {
        auVar21 = ZEXT1664(CONCAT124(auVar12._4_12_,SQRT(fVar7)));
      }
    }
    uVar20 = 0x80000000;
    if (1e-06 < ABS(fVar8) == 1e-06 < ABS(fVar1)) {
      auVar21 = ZEXT1664(CONCAT412(auVar21._12_4_,CONCAT48(auVar21._8_4_,auVar21._0_8_ ^ 0x80000000)
                                  ));
    }
    fVar22 = (auVar21._0_4_ * fVar27 * fVar22) / fVar9;
    fVar11 = (-fVar9 * auVar21._0_4_ * fVar4) / fVar27;
    fVar7 = (fVar26 - fVar11) / fVar9;
    auVar21 = ZEXT464((uint)fVar7);
    fVar14 = (fVar4 - fVar22) / fVar27;
    auVar15 = ZEXT464((uint)fVar14);
    fVar8 = fVar22;
    fVar7 = (float)FUN_180424790(0x3f800000,0,fVar14,fVar7);
    auVar12._0_4_ = ((float)((uint)fVar4 ^ uVar20) - fVar8) / fVar27;
    auVar12._4_12_ = SUB6012((undefined1  [60])0x0,0);
    auVar13._0_4_ = ((float)((uint)fVar26 ^ uVar20) - fVar11) / fVar9;
    auVar13._4_12_ = SUB6012((undefined1  [60])0x0,0);
    fVar8 = (float)FUN_180424790(auVar15._0_8_,auVar21._0_8_,auVar12._0_8_,auVar13._0_8_);
    fVar4 = auVar24._0_4_;
    fVar9 = auVar23._0_4_;
    if (1e-06 < ABS(fVar1)) {
      if (fVar8 < auVar16._0_4_) {
        fVar8 = fVar8 + 6.2831855;
      }
    }
    else if (auVar16._0_4_ < fVar8) {
      fVar8 = fVar8 + -6.2831855;
    }
    fVar1 = fVar9 + *param_2;
    fVar18 = (float)((uint)fVar5 ^ uVar20);
    fVar14 = fVar4 + *param_3;
    fVar10 = 1.0;
    iVar3 = (int)((float)((uint)fVar8 & uVar25) / 1.5707964 + 1.0);
    fVar26 = (fVar8 / (float)iVar3) * 0.5;
    auVar21 = ZEXT464((uint)fVar26);
    fVar19 = fVar18;
    if ((0.001 <= fVar26) || (fVar26 <= -0.001)) {
      fVar4 = (float)FUN_180637540(fVar26);
      fVar10 = fVar10 - fVar4;
      fVar26 = (float)FUN_180638e00(auVar21._0_8_);
      fVar4 = auVar24._0_4_;
      fVar9 = auVar23._0_4_;
      fVar26 = fVar10 / fVar26;
    }
    else {
      fVar26 = fVar26 * 0.5;
    }
    fVar26 = ABS(fVar26 * 1.3333334);
    if (fVar8 < auVar16._0_4_) {
      fVar26 = (float)((uint)fVar26 ^ uVar20);
    }
    if (iVar3 < 0) {
      *param_2 = fVar9;
    }
    else {
      auVar12 = ZEXT816(0);
      do {
        auVar24 = ZEXT1664(auVar12);
        fVar4 = ((float)iVar2 / (float)iVar3) * fVar8 + fVar7;
        auVar21 = ZEXT464((uint)fVar4);
        fVar9 = (float)FUN_180637540(fVar4);
        fVar10 = (float)FUN_180638e00(auVar21._0_8_);
        fVar4 = fVar9 * fVar27 * fVar6 + fVar10 * fVar17 * fVar19 +
                ((fVar1 * 0.5 + fVar22 * fVar6) - fVar11 * fVar5);
        auVar21 = ZEXT464((uint)fVar4);
        auVar13 = ZEXT416((uint)fVar4);
        fVar4 = fVar10 * fVar17 * fVar6 + fVar9 * fVar27 * fVar5 +
                fVar14 * 0.5 + fVar22 * fVar5 + fVar11 * fVar6;
        auVar23 = ZEXT464((uint)fVar4);
        auVar12 = ZEXT416((uint)fVar4);
        fVar9 = fVar9 * fVar17 * fVar26;
        fVar10 = (float)((uint)fVar10 ^ uVar20) * fVar27 * fVar26;
        fVar4 = fVar10 * fVar5 + fVar9 * fVar6;
        fVar9 = fVar10 * fVar6 + fVar9 * fVar18;
        if ((0 < iVar2) && (0 < *(int *)(param_1 + 0x9c10))) {
          FUN_1804218b0(param_1,auVar16._0_4_ + local_f4,auVar24._0_4_ + local_f0);
          FUN_1804218b0(param_1,auVar21._0_4_ - fVar9,auVar23._0_4_ - fVar4);
          FUN_1804218b0(param_1,auVar21._0_8_,auVar23._0_8_);
          auVar13 = auVar21._0_16_;
          auVar12 = auVar23._0_16_;
        }
        iVar2 = iVar2 + 1;
        uVar20 = 0x80000000;
        auVar16 = ZEXT1664(auVar13);
        fVar19 = fVar18;
        local_f4 = fVar9;
        local_f0 = fVar4;
      } while (iVar2 <= iVar3);
      *param_2 = local_ec;
      fVar4 = local_e8;
    }
    *param_3 = fVar4;
  }
  return;
}



