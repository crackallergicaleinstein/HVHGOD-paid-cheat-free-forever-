// FUN_180308400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180308400 */

undefined8 *
FUN_180308400(undefined8 *param_1,float *param_2,char param_3,float param_4,float *param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [64];
  float fVar7;
  
  fVar7 = *param_5;
  param_2[2] = param_2[2] - fVar7 * param_5[1] * param_5[7];
  if (param_3 != '\0') {
    auVar6 = ZEXT464((uint)(param_4 * 0.017453292));
    fVar3 = (float)FUN_180637540(param_4 * 0.017453292);
    fVar4 = (float)FUN_180638e00(auVar6._0_8_);
    auVar1 = vminss_avx(ZEXT416((uint)param_5[3]),ZEXT416((uint)param_5[4]));
    fVar2 = auVar1._0_4_ - (param_2[1] * fVar4 + *param_2 * fVar3);
    fVar5 = 0.0;
    if (0.0 < fVar2) {
      auVar1 = vminss_avx(ZEXT416((uint)(param_5[4] * param_5[2] * fVar7 * param_5[5])),
                          ZEXT416((uint)fVar2));
      fVar5 = auVar1._0_4_;
    }
    fVar7 = param_5[8];
    param_2[1] = fVar5 * fVar7 * fVar4 + param_2[1];
    *param_2 = fVar5 * fVar7 * fVar3 + *param_2;
  }
  fVar7 = param_2[2];
  *param_1 = *(undefined8 *)param_2;
  *(float *)(param_1 + 1) = fVar7;
  return param_1;
}



