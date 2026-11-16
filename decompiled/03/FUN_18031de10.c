// FUN_18031de10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031de10 */

undefined8 FUN_18031de10(undefined4 *param_1,float param_2)

{
  short sVar1;
  float fVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar7 [64];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  
  fVar2 = (float)FUN_180636c80(param_1[1],*param_1);
  fVar2 = fVar2 * 57.295776 + 90.0;
  auVar14 = ZEXT464((uint)fVar2);
  fVar2 = fVar2 + 180.0;
  auVar16 = ZEXT464((uint)fVar2);
  fVar2 = fVar2 - param_2;
  auVar7 = ZEXT464((uint)fVar2);
  sVar1 = thunk_FUN_180624430(fVar2);
  if (sVar1 < 1) {
    auVar7._0_8_ = FUN_180615070(auVar7._0_8_,0x43b40000);
    auVar7._8_56_ = extraout_var;
    auVar4 = auVar7._0_16_;
  }
  else {
    auVar4 = ZEXT816(0);
  }
  uVar8 = 0x7fffffff;
  uVar9 = 0x7fffffff;
  uVar10 = 0x7fffffff;
  uVar11 = 0x7fffffff;
  param_2 = auVar14._0_4_ - param_2;
  auVar12 = ZEXT464((uint)param_2);
  auVar7 = ZEXT1664(CONCAT412(auVar4._12_4_ & 0x7fffffff,
                              CONCAT48(auVar4._8_4_ & 0x7fffffff,auVar4._0_8_ & 0x7fffffff7fffffff))
                   );
  sVar1 = thunk_FUN_180624430(param_2);
  auVar15 = auVar16._0_16_;
  auVar13 = auVar14._0_16_;
  auVar4 = auVar7._0_16_;
  if (sVar1 < 1) {
    auVar12._0_8_ = FUN_180615070(auVar12._0_8_,0x43b40000);
    auVar15 = auVar16._0_16_;
    auVar13 = auVar14._0_16_;
    auVar4 = auVar7._0_16_;
    auVar12._8_56_ = extraout_var_00;
    auVar5 = auVar12._0_16_;
  }
  else {
    auVar5 = ZEXT416(0);
  }
  auVar6._0_4_ = auVar5._0_4_ & uVar8;
  auVar6._4_4_ = auVar5._4_4_ & uVar9;
  auVar6._8_4_ = auVar5._8_4_ & uVar10;
  auVar6._12_4_ = auVar5._12_4_ & uVar11;
  auVar4 = vcmpss_avx(auVar4,auVar6,1);
  auVar4 = vblendvps_avx(auVar13,auVar15,auVar4);
  auVar7 = ZEXT1664(auVar4);
  sVar1 = thunk_FUN_180624430(auVar4._0_8_);
  if (sVar1 < 1) {
    uVar3 = FUN_180615070(auVar7._0_8_,0x43b40000);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



