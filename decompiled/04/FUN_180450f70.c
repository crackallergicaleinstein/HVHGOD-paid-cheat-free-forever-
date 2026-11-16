// FUN_180450f70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180450f70 */

float * FUN_180450f70(ulonglong *param_1,float *param_2)

{
  ulonglong uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  float fVar6;
  undefined1 auVar7 [64];
  float fVar8;
  
  uVar1 = *param_1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar1;
  auVar5 = ZEXT1664(auVar4);
  fVar3 = (float)uVar1;
  auVar4 = vshufps_avx(auVar4,auVar4,0x55);
  auVar7 = ZEXT1664(auVar4);
  fVar6 = auVar4._0_4_;
  fVar2 = fVar6 * fVar6 + fVar3 * fVar3;
  fVar8 = 0.0;
  *(ulonglong *)param_2 = uVar1;
  if (fVar2 != 0.0) {
    if (fVar2 < 0.0) {
      fVar8 = 0.0;
      fVar2 = (float)FUN_18061e150(fVar2);
      fVar3 = auVar5._0_4_;
      fVar6 = auVar7._0_4_;
    }
    else {
      fVar2 = SQRT(fVar2);
    }
    if (fVar8 < fVar2) {
      *param_2 = (1.0 / fVar2) * fVar3;
      param_2[1] = (1.0 / fVar2) * fVar6;
    }
  }
  return param_2;
}



