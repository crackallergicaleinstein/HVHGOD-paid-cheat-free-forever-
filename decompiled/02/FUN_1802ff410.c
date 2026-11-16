// FUN_1802ff410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ff410 */

undefined8 FUN_1802ff410(float param_1,int param_2,int param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  short sVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  
  auVar5._12_4_ = 0;
  auVar5._0_12_ = ZEXT812(0);
  auVar5 = auVar5 << 0x20;
  auVar6 = ZEXT1264(ZEXT812(0)) << 0x20;
  if (((0 < param_2) && (-1 < param_3)) && (param_3 < param_2)) {
    sVar3 = thunk_FUN_180624430();
    auVar5 = auVar6._0_16_;
    if (sVar3 < 1) {
      sVar3 = thunk_FUN_180624430(param_4);
      auVar5 = auVar6._0_16_;
      if ((sVar3 < 1) && (auVar6._0_4_ < (float)param_4)) {
        fVar1 = (param_1 + 131072.0) - 131072.0;
        fVar4 = (1.0 - fVar1) / (float)param_2;
        fVar2 = ((float)param_3 * fVar4 + fVar1 + 131072.0) - 131072.0;
        auVar5 = vunpcklps_avx(ZEXT416((uint)fVar2),
                               ZEXT416((uint)(((((float)(param_3 + 1) * fVar4 + fVar1 + 131072.0) -
                                               131072.0) - fVar2) * (float)param_4)));
        return auVar5._0_8_;
      }
    }
  }
  auVar5 = vunpcklps_avx(auVar5,auVar5);
  return auVar5._0_8_;
}



