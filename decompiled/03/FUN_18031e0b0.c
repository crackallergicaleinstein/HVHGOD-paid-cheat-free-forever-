// FUN_18031e0b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031e0b0 */

undefined8 FUN_18031e0b0(undefined4 *param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  float fVar2;
  undefined1 auVar3 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar4 [64];
  undefined8 uVar5;
  undefined1 in_ZMM2 [64];
  float fVar6;
  ulonglong uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  undefined1 auVar10 [16];
  uint uVar11;
  ulonglong uVar12;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined1 auVar13 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined1 auVar20 [16];
  
  fVar2 = *param_2;
  auVar9 = ZEXT464((uint)fVar2);
  uVar7 = (ulonglong)(uint)fVar2;
  fVar6 = param_2[1];
  auVar13 = ZEXT464((uint)fVar6);
  uVar12 = (ulonglong)(uint)fVar6;
  uVar5 = in_ZMM2._0_8_;
  auVar19 = ZEXT1664(in_ZMM2._0_16_);
  fVar2 = fVar6 * fVar6 + fVar2 * fVar2;
  auVar4 = ZEXT864(0);
  if (fVar2 != 0.0) {
    if (fVar2 < 0.0) {
      fVar2 = (float)FUN_18061e150(fVar2);
      uVar12 = auVar13._0_8_;
      uVar7 = auVar9._0_8_;
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    uVar5 = auVar19._0_8_;
    if (80.0 <= fVar2) {
      fVar2 = (float)FUN_180636c80(uVar12,uVar7,0x42a00000,param_4,unaff_XMM12_Qa,unaff_XMM12_Qb);
      fVar6 = 57.295776;
      auVar13 = ZEXT464((uint)(fVar2 * 57.295776));
      fVar2 = (float)FUN_180636c80(param_1[1],*param_1);
      fVar2 = auVar13._0_4_ - (fVar2 * fVar6 + 90.0);
      auVar9 = ZEXT464((uint)fVar2);
      sVar1 = thunk_FUN_180624430(fVar2);
      if (sVar1 < 1) {
        auVar17._0_8_ = FUN_180615070(auVar9._0_8_,0x43b40000);
        auVar17._8_56_ = extraout_var;
        auVar3 = auVar17._0_16_;
      }
      else {
        auVar3 = ZEXT816(0);
      }
      fVar2 = auVar9._0_4_ - 180.0;
      auVar17 = ZEXT464((uint)fVar2);
      uVar11 = 0x7fffffff;
      uVar14 = 0x7fffffff;
      uVar15 = 0x7fffffff;
      uVar16 = 0x7fffffff;
      auVar9 = ZEXT1664(CONCAT412(auVar3._12_4_ & 0x7fffffff,
                                  CONCAT48(auVar3._8_4_ & 0x7fffffff,
                                           auVar3._0_8_ & 0x7fffffff7fffffff)));
      sVar1 = thunk_FUN_180624430(fVar2);
      auVar3 = auVar4._0_16_;
      auVar20 = auVar13._0_16_;
      auVar18 = auVar19._0_16_;
      auVar8 = auVar9._0_16_;
      if (sVar1 < 1) {
        auVar4._0_8_ = FUN_180615070(auVar17._0_8_,0x43b40000);
        auVar20 = auVar13._0_16_;
        auVar18 = auVar19._0_16_;
        auVar8 = auVar9._0_16_;
        auVar4._8_56_ = extraout_var_00;
        auVar3 = auVar4._0_16_;
      }
      auVar10._0_4_ = auVar3._0_4_ & uVar11;
      auVar10._4_4_ = auVar3._4_4_ & uVar14;
      auVar10._8_4_ = auVar3._8_4_ & uVar15;
      auVar10._12_4_ = auVar3._12_4_ & uVar16;
      auVar3 = vminss_avx(auVar10,auVar8);
      auVar3 = vcmpss_avx(auVar3,ZEXT416(0x42700000),2);
      auVar3 = vblendvps_avx(auVar18,auVar20,auVar3);
      return auVar3._0_8_;
    }
  }
  return uVar5;
}



