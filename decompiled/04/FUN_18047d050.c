// FUN_18047d050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047d050 */

ulonglong FUN_18047d050(undefined8 *param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined1 auVar2 [16];
  float fVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auVar8 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 auVar9 [64];
  undefined1 auVar10 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  
  puVar1 = (uint *)*param_1;
  auVar18 = ZEXT1664(in_ZMM2._0_16_);
  uVar4 = FUN_1804b1120(puVar1);
  uVar6 = (ulonglong)uVar4;
  auVar11._0_8_ = FUN_18047cf20(uVar4);
  auVar11._8_56_ = extraout_var;
  auVar11 = ZEXT1664(auVar11._0_16_);
  auVar13._0_8_ = FUN_18047cf20(param_2);
  auVar13._8_56_ = extraout_var_00;
  fVar16 = 0.05;
  auVar8 = auVar13._0_16_;
  auVar2 = vmaxss_avx(auVar8,auVar11._0_16_);
  auVar10 = vminss_avx(auVar8,auVar11._0_16_);
  auVar11 = ZEXT1664(auVar8);
  if ((auVar2._0_4_ + 0.05) / (auVar10._0_4_ + 0.05) < auVar18._0_4_) {
    auVar15 = ZEXT464(0x3f800000);
    lVar7 = 0x10;
    auVar19 = ZEXT464(*puVar1);
    auVar2 = vpcmpeqd_avx(ZEXT116(DAT_180c7dfc8),SUB6416(ZEXT464(0),0));
    auVar10 = ZEXT816(0);
    auVar20 = ZEXT464(puVar1[1]);
    auVar2 = vblendvps_avx(auVar10,auVar15._0_16_,auVar2);
    auVar13 = ZEXT1664(auVar2);
    local_ac = 0x3f800000;
    auVar14 = ZEXT1664(auVar15._0_16_);
    do {
      auVar17 = ZEXT1664(auVar10);
      fVar3 = (auVar14._0_4_ + auVar10._0_4_) * 0.5;
      auVar12 = ZEXT464((uint)fVar3);
      local_b8 = FUN_180242260(auVar19._0_8_,auVar13._0_8_,fVar3);
      local_b4 = FUN_180242260(auVar20._0_8_,auVar13._0_8_,auVar12._0_8_);
      local_b0 = FUN_180242260(puVar1[2],auVar13._0_8_,auVar12._0_8_);
      uVar5 = FUN_1804b1120(&local_b8);
      auVar9._0_8_ = FUN_18047cf20(uVar5);
      auVar9._8_56_ = extraout_var_01;
      auVar2 = vmaxss_avx(auVar11._0_16_,auVar9._0_16_);
      auVar10 = vminss_avx(auVar11._0_16_,auVar9._0_16_);
      auVar10 = ZEXT416((uint)((auVar2._0_4_ + fVar16) / (auVar10._0_4_ + fVar16)));
      auVar2 = vcmpss_avx(auVar18._0_16_,auVar10,2);
      auVar10 = vcmpss_avx(auVar18._0_16_,auVar10,2);
      auVar10 = vblendvps_avx(auVar12._0_16_,auVar17._0_16_,auVar10);
      auVar2 = vblendvps_avx(auVar14._0_16_,auVar12._0_16_,auVar2);
      auVar14 = ZEXT1664(auVar2);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    local_b8 = FUN_180242260(auVar19._0_8_,auVar13._0_8_,auVar2._0_8_);
    local_b4 = FUN_180242260(auVar20._0_8_,auVar13._0_8_,auVar14._0_8_);
    local_b0 = FUN_180242260(puVar1[2],auVar13._0_8_,auVar14._0_8_);
    local_ac = auVar15._0_4_;
    uVar6 = FUN_1804b1120(&local_b8);
  }
  return uVar6;
}



