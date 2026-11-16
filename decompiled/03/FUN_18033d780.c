// FUN_18033d780 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033d780 */

undefined8 FUN_18033d780(undefined8 param_1,undefined8 param_2,float param_3)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined1 extraout_var [56];
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [16];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  float fVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  
  param_3 = (float)param_2 - param_3;
  auVar10 = ZEXT464((uint)param_3);
  sVar1 = thunk_FUN_180624430(param_3);
  auVar13 = ZEXT464(0x43b40000);
  if (sVar1 < 1) {
    fVar6 = (float)FUN_180615070(auVar10._0_8_,auVar13._0_8_);
  }
  else {
    fVar6 = 0.0;
  }
  auVar10 = ZEXT464(0x4e6e6b28);
  uVar16 = 0x7fffffff;
  uVar17 = 0x7fffffff;
  uVar18 = 0x7fffffff;
  uVar19 = 0x7fffffff;
  fVar15 = 57.295776;
  puVar3 = &DAT_180701dc0;
  iVar4 = 0;
  iVar5 = 0;
  do {
    auVar14 = ZEXT1664(auVar10._0_16_);
    fVar7 = (float)FUN_180636c80(puVar3[1],*puVar3);
    fVar7 = fVar6 - fVar7 * fVar15;
    auVar11 = ZEXT464((uint)fVar7);
    sVar1 = thunk_FUN_180624430(fVar7);
    fVar7 = auVar14._0_4_;
    auVar12 = auVar10._0_16_;
    if (sVar1 < 1) {
      auVar11._0_8_ = FUN_180615070(auVar11._0_8_,auVar13._0_8_);
      fVar7 = auVar14._0_4_;
      auVar12 = auVar10._0_16_;
      auVar11._8_56_ = extraout_var;
      auVar8 = auVar11._0_16_;
    }
    else {
      auVar8 = ZEXT816(0);
    }
    auVar9._0_4_ = (float)(auVar8._0_4_ & uVar16);
    auVar9._4_4_ = auVar8._4_4_ & uVar17;
    auVar9._8_4_ = auVar8._8_4_ & uVar18;
    auVar9._12_4_ = auVar8._12_4_ & uVar19;
    iVar2 = iVar4;
    if (fVar7 <= auVar9._0_4_) {
      iVar2 = iVar5;
    }
    iVar4 = iVar4 + 1;
    puVar3 = puVar3 + 2;
    auVar8 = vcmpss_avx(auVar9,auVar12,1);
    auVar12 = vblendvps_avx(auVar12,auVar9,auVar8);
    auVar10 = ZEXT1664(auVar12);
    iVar5 = iVar2;
  } while (iVar4 < 8);
  FUN_18033d670(param_1,param_2,iVar2);
  return param_1;
}



