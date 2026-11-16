// FUN_1804298f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804298f0 */

void FUN_1804298f0(longlong param_1,float param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  float fVar17;
  
  iVar9 = *(int *)(param_1 + 0x28);
  iVar5 = 0;
  auVar16 = ZEXT464(0x3f800000);
  auVar15 = auVar16._0_16_;
  fVar17 = 1e-06;
  iVar6 = 0;
  pfVar4 = *(float **)(param_1 + 0x20) + (longlong)(iVar9 + -1) * 8;
  pfVar7 = *(float **)(param_1 + 0x20);
  fVar10 = 1e-06;
  if (0 < iVar9) {
    do {
      fVar17 = fVar10;
      fVar13 = *pfVar7 - *pfVar4;
      pfVar4[2] = fVar13;
      fVar14 = pfVar7[1] - pfVar4[1];
      fVar10 = fVar13 * fVar13 + fVar14 * fVar14;
      pfVar4[3] = fVar14;
      if (fVar10 < 0.0) {
        fVar10 = (float)FUN_18061e150();
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      auVar15 = auVar16._0_16_;
      if (fVar17 < fVar10) {
        fVar12 = auVar16._0_4_ / fVar10;
        pfVar4[2] = fVar12 * fVar13;
        pfVar4[3] = fVar14 * fVar12;
      }
      pfVar4[4] = fVar10;
      iVar9 = *(int *)(param_1 + 0x28);
      iVar6 = iVar6 + 1;
      pfVar4 = pfVar7;
      pfVar7 = pfVar7 + 8;
      fVar10 = fVar17;
    } while (iVar6 < iVar9);
  }
  if (0 < iVar9) {
    lVar1 = *(longlong *)(param_1 + 0x20);
    lVar8 = (longlong)(iVar9 + -1) * 0x20 + *(longlong *)(param_1 + 0x20);
    do {
      lVar3 = lVar1;
      fVar13 = (*(float *)(lVar3 + 0xc) + *(float *)(lVar8 + 0xc)) * 0.5;
      fVar14 = (-*(float *)(lVar3 + 8) + -*(float *)(lVar8 + 8)) * 0.5;
      fVar10 = fVar14 * fVar14 + fVar13 * fVar13;
      *(float *)(lVar3 + 0x14) = fVar13;
      *(float *)(lVar3 + 0x18) = fVar14;
      if (fVar17 < fVar10) {
        auVar11._0_4_ = auVar15._0_4_ / fVar10;
        auVar11._4_12_ = auVar15._4_12_;
        auVar11 = vminss_avx(SUB6416(ZEXT464(0x44160000),0),auVar11);
        *(float *)(lVar3 + 0x18) = auVar11._0_4_ * fVar14;
        *(float *)(lVar3 + 0x14) = auVar11._0_4_ * fVar13;
      }
      bVar2 = *(byte *)(lVar3 + 0x1c) & 1;
      *(byte *)(lVar3 + 0x1c) = bVar2;
      if (0.0 < *(float *)(lVar3 + 8) * *(float *)(lVar8 + 0xc) -
                *(float *)(lVar3 + 0xc) * *(float *)(lVar8 + 8)) {
        bVar2 = bVar2 | 4;
        *(byte *)(lVar3 + 0x1c) = bVar2;
      }
      if (((bVar2 & 1) != 0) && ((fVar10 * param_2 * param_2 < auVar15._0_4_ || (param_3 - 1U < 2)))
         ) {
        *(byte *)(lVar3 + 0x1c) = bVar2 | 2;
      }
      iVar5 = iVar5 + 1;
      lVar1 = lVar3 + 0x20;
      lVar8 = lVar3;
    } while (iVar5 < *(int *)(param_1 + 0x28));
  }
  return;
}



