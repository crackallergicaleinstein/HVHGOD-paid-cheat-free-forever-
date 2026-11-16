// FUN_18030c4c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030c4c0 */

undefined8 FUN_18030c4c0(undefined4 *param_1,float param_2)

{
  float fVar1;
  short sVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar5 [64];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [64];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auVar13 [64];
  
  fVar3 = (float)FUN_180636c80(param_1[1],*param_1);
  fVar3 = fVar3 * 57.295776;
  fVar1 = (fVar3 + 90.0) - param_2;
  auVar8 = ZEXT464((uint)fVar1);
  sVar2 = thunk_FUN_180624430(fVar1);
  auVar5 = ZEXT864(0);
  if (sVar2 < 1) {
    auVar8._0_8_ = FUN_180615070(auVar8._0_8_,0x43b40000);
    auVar8._8_56_ = extraout_var;
    auVar4 = auVar8._0_16_;
  }
  else {
    auVar4 = ZEXT816(0);
  }
  uVar9 = 0x7fffffff;
  uVar10 = 0x7fffffff;
  uVar11 = 0x7fffffff;
  uVar12 = 0x7fffffff;
  param_2 = (fVar3 - 90.0) - param_2;
  auVar13 = ZEXT464((uint)param_2);
  auVar8 = ZEXT1664(CONCAT412(auVar4._12_4_ & 0x7fffffff,
                              CONCAT48(auVar4._8_4_ & 0x7fffffff,auVar4._0_8_ & 0x7fffffff7fffffff))
                   );
  sVar2 = thunk_FUN_180624430(param_2);
  auVar4 = auVar5._0_16_;
  auVar7 = auVar8._0_16_;
  if (sVar2 < 1) {
    auVar5._0_8_ = FUN_180615070(auVar13._0_8_,0x43b40000);
    auVar7 = auVar8._0_16_;
    auVar5._8_56_ = extraout_var_00;
    auVar4 = auVar5._0_16_;
  }
  auVar6._0_4_ = auVar4._0_4_ & uVar9;
  auVar6._4_4_ = auVar4._4_4_ & uVar10;
  auVar6._8_4_ = auVar4._8_4_ & uVar11;
  auVar6._12_4_ = auVar4._12_4_ & uVar12;
  auVar4 = vminss_avx(auVar6,auVar7);
  return auVar4._0_8_;
}



