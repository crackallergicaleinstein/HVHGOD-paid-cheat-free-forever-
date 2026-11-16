// FUN_180235e70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180235e70 */

ulonglong FUN_180235e70(undefined8 param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_b8 [46];
  
  fVar1 = param_2[2];
  fVar12 = *param_2;
  fVar8 = *param_3 - fVar12;
  fVar13 = param_2[1];
  fVar9 = param_3[1] - fVar13;
  fVar10 = param_3[2] - fVar1;
  fVar11 = fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10;
  fVar7 = fVar1;
  pfVar4 = (float *)thunk_FUN_180624430(fVar11);
  if ((((short)pfVar4 < 1) && (0.001 < fVar11)) && (DAT_180b8f7f0 != DAT_180b8f7f8)) {
    local_b8[2] = 1.0;
    local_b8[0] = 0.0;
    pfVar6 = DAT_180b8f7f0;
    do {
      local_b8[1] = ((pfVar6[1] - fVar13) * fVar9 + (*pfVar6 - fVar12) * fVar8 +
                    (pfVar6[2] - fVar7) * fVar10) / fVar11;
      pfVar5 = local_b8;
      if (0.0 <= local_b8[1]) {
        pfVar5 = local_b8 + 1;
      }
      pfVar4 = local_b8 + 2;
      if (local_b8[1] <= 1.0) {
        pfVar4 = pfVar5;
      }
      fVar2 = *pfVar4;
      fVar3 = (*pfVar6 - fVar12) - fVar2 * fVar8;
      fVar7 = (pfVar6[2] - fVar7) - fVar2 * fVar10;
      fVar2 = (pfVar6[1] - fVar13) - fVar2 * fVar9;
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar7 * fVar7 <= 22500.0) {
        return CONCAT71((int7)((ulonglong)pfVar4 >> 8),1);
      }
      pfVar6 = pfVar6 + 3;
      fVar7 = fVar1;
    } while (pfVar6 != DAT_180b8f7f8);
  }
  return (ulonglong)pfVar4 & 0xffffffffffffff00;
}



