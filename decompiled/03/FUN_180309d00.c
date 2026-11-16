// FUN_180309d00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180309d00 */

undefined8 FUN_180309d00(ulonglong param_1,float param_2,float param_3,float *param_4,float param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  float local_res20;
  
  auVar8 = ZEXT464((uint)(param_2 * 0.017453292));
  auVar9 = ZEXT864(param_1);
  fVar6 = (float)FUN_180637540(param_2 * 0.017453292);
  fVar7 = (float)FUN_180638e00(auVar8._0_8_);
  auVar1 = vminss_avx(ZEXT416((uint)*param_4),ZEXT416((uint)(param_3 * *param_4)));
  auVar2 = vminss_avx(ZEXT416((uint)param_4[1]),auVar1);
  uVar5 = auVar9._0_8_;
  local_res20 = auVar9._0_4_;
  auVar3 = vshufps_avx(auVar9._0_16_,auVar9._0_16_,0x55);
  fVar4 = auVar2._0_4_ - (fVar7 * auVar3._0_4_ + fVar6 * local_res20);
  if (0.0 < fVar4) {
    auVar1 = vminss_avx(ZEXT416((uint)fVar4),
                        ZEXT416((uint)(auVar1._0_4_ * param_4[2] * param_5 * param_4[3])));
    auVar1 = vunpcklps_avx(ZEXT416((uint)(auVar1._0_4_ * fVar6 + local_res20)),
                           ZEXT416((uint)(auVar1._0_4_ * fVar7 + auVar3._0_4_)));
    uVar5 = auVar1._0_8_;
  }
  return uVar5;
}



