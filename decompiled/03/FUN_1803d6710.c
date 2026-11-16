// FUN_1803d6710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d6710 */

undefined8 * FUN_1803d6710(undefined8 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  short sVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  float fVar9;
  float fVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [64];
  float local_c8;
  float fStack_c4;
  float local_c0;
  
  fVar9 = param_3[6];
  fVar13 = param_3[7];
  fVar1 = param_3[8];
  fVar10 = fVar13 * param_2[1] + fVar9 * *param_2 + fVar1 * param_2[2];
  fVar2 = param_3[1];
  fStack_c4 = fVar9 * param_2[4] + fVar13 * param_2[5] + fVar1 * param_2[6];
  auVar14 = ZEXT464((uint)fStack_c4);
  fVar3 = *param_3;
  fVar4 = param_3[2];
  local_c0 = fVar9 * param_2[8] + fVar13 * param_2[9] + fVar1 * param_2[10];
  auVar12 = ZEXT464((uint)(fVar2 * param_2[1] + fVar3 * *param_2 + fVar4 * param_2[2]));
  auVar8 = ZEXT464((uint)(fVar3 * param_2[4] + fVar2 * param_2[5] + fVar4 * param_2[6]));
  auVar7 = ZEXT464((uint)(fVar3 * param_2[8] + fVar2 * param_2[9] + fVar4 * param_2[10]));
  local_c8 = fVar10;
  sVar6 = thunk_FUN_180624430(fVar10);
  if (((((sVar6 < 1) && (sVar6 = thunk_FUN_180624430(auVar14._0_8_), sVar6 < 1)) &&
       (fVar9 = local_c0, sVar6 = thunk_FUN_180624430(local_c0), sVar6 < 1)) &&
      ((sVar6 = thunk_FUN_180624430(auVar12._0_8_), sVar6 < 1 &&
       (sVar6 = thunk_FUN_180624430(auVar8._0_8_), sVar6 < 1)))) &&
     ((sVar6 = thunk_FUN_180624430(auVar7._0_8_), sVar6 < 1 &&
      ((fVar13 = 1e-06, 1e-06 <= fVar10 * fVar10 + auVar14._0_4_ * auVar14._0_4_ + fVar9 * fVar9 &&
       (1e-06 <= auVar12._0_4_ * auVar12._0_4_ + auVar8._0_4_ * auVar8._0_4_ +
                 auVar7._0_4_ * auVar7._0_4_)))))) {
    FUN_180450e30(&local_c8);
    auVar14 = ZEXT464((uint)local_c8);
    auVar11 = ZEXT464((uint)fStack_c4);
    fVar9 = auVar12._0_4_ * local_c8 + auVar8._0_4_ * fStack_c4 + auVar7._0_4_ * local_c0;
    local_c8 = auVar12._0_4_ - fVar9 * local_c8;
    fStack_c4 = auVar8._0_4_ - fVar9 * fStack_c4;
    fVar9 = auVar7._0_4_ - fVar9 * local_c0;
    if (fVar13 <= fStack_c4 * fStack_c4 + local_c8 * local_c8 + fVar9 * fVar9) {
      fVar13 = local_c0;
      local_c0 = fVar9;
      FUN_180450e30(&local_c8);
      auVar5 = vunpcklps_avx(auVar14._0_16_,auVar11._0_16_);
      *param_1 = CONCAT44(fStack_c4,local_c8);
      param_1[1] = CONCAT44(local_c0 * auVar11._0_4_ - fVar13 * fStack_c4,local_c0);
      param_1[2] = CONCAT44(auVar14._0_4_ * fStack_c4 - auVar11._0_4_ * local_c8,
                            fVar13 * local_c8 - local_c0 * auVar14._0_4_);
      param_1[3] = auVar5._0_8_;
      *(float *)(param_1 + 4) = fVar13;
      *(undefined1 *)((longlong)param_1 + 0x24) = 1;
      return param_1;
    }
  }
  *(undefined1 *)((longlong)param_1 + 0x24) = 0;
  return param_1;
}



