// FUN_1802aee30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802aee30 */

undefined8 FUN_1802aee30(float param_1,int param_2,int param_3,char param_4,float *param_5)

{
  undefined1 auVar1 [16];
  short sVar2;
  float *pfVar3;
  double *pdVar4;
  float *pfVar5;
  double *pdVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [64];
  float fVar10;
  float local_88 [4];
  double local_78 [14];
  
  if ((((param_4 != '\0') && (sVar2 = thunk_FUN_180624430(), sVar2 < 1)) &&
      (auVar9 = ZEXT864(0), 0.0 <= param_1)) && (0 < param_3)) {
    fVar10 = *param_5;
    fVar8 = param_5[1];
    fVar7 = param_5[2];
    sVar2 = thunk_FUN_180624430(fVar8 + fVar10 + fVar7);
    if (((sVar2 < 1) && (local_88[0] = auVar9._0_4_, local_88[0] <= fVar10)) &&
       ((local_88[0] < fVar8 && (param_1 < fVar8)))) {
      auVar1 = vmaxss_avx(ZEXT416((uint)(1.0 - param_1 / fVar8)),auVar9._0_16_);
      fVar10 = auVar1._0_4_ * fVar10;
      fVar8 = fVar10;
      if (0 < param_2) {
        local_88[1] = fVar7 * 0.5;
        local_88[2] = 1.0;
        pfVar5 = local_88;
        if (local_88[0] <= local_88[1]) {
          pfVar5 = local_88 + 1;
        }
        pfVar3 = local_88 + 2;
        if (local_88[1] <= 1.0) {
          pfVar3 = pfVar5;
        }
        fVar7 = (float)param_2;
        fVar8 = fVar10 * *pfVar3;
        if (fVar7 < (fVar10 - fVar8) * 0.5) {
          fVar8 = fVar10 - (fVar7 + fVar7);
        }
      }
      local_78[1] = (double)fVar8;
      pdVar6 = local_78;
      if (0.0 <= local_78[1]) {
        pdVar6 = local_78 + 1;
      }
      local_78[2] = (double)param_3;
      pdVar4 = local_78 + 2;
      if (local_78[1] <= (double)param_3) {
        pdVar4 = pdVar6;
      }
      local_78[0] = 0.0;
      return CONCAT44((int)((ulonglong)pdVar4 >> 0x20),(int)*pdVar4);
    }
  }
  return 0;
}



