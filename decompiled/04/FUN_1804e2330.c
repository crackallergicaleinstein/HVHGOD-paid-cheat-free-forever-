// FUN_1804e2330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e2330 */

void FUN_1804e2330(longlong param_1,int param_2,int param_3,float *param_4,float *param_5,
                  float *param_6,float *param_7)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar11 = *param_6;
  fVar2 = param_6[1];
  fVar10 = *param_7;
  fVar3 = param_7[1];
  fVar12 = 0.0;
  if (param_5[1] - param_4[1] == 0.0) {
    fVar13 = 0.0;
  }
  else {
    fVar13 = (fVar3 - fVar2) / (param_5[1] - param_4[1]);
  }
  if (*param_5 - *param_4 != 0.0) {
    fVar12 = (fVar10 - fVar11) / (*param_5 - *param_4);
  }
  auVar6 = vminss_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar3));
  fVar5 = auVar6._0_4_;
  auVar7 = vminss_avx(ZEXT416((uint)fVar11),ZEXT416((uint)fVar10));
  auVar6 = vmaxss_avx(ZEXT416((uint)fVar2),ZEXT416((uint)fVar3));
  pfVar9 = (float *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 0x14);
  pfVar1 = (float *)(*(longlong *)(param_1 + 0x28) + (longlong)param_3 * 0x14);
  auVar4 = vmaxss_avx(ZEXT416((uint)fVar11),ZEXT416((uint)fVar10));
  if (pfVar9 < pfVar1) {
    fVar11 = auVar7._0_4_;
    if (0x4f < (ulonglong)((longlong)pfVar1 + (0x13 - (longlong)pfVar9))) {
      pfVar8 = pfVar9 + 8;
      do {
        fVar2 = (*pfVar9 - *param_4) * fVar12 + *param_6;
        fVar10 = (pfVar8[-7] - param_4[1]) * fVar13 + param_6[1];
        fVar3 = fVar5;
        if (fVar5 <= fVar10) {
          auVar7 = vminss_avx(auVar6,ZEXT416((uint)fVar10));
          fVar3 = auVar7._0_4_;
        }
        fVar10 = fVar11;
        if (fVar11 <= fVar2) {
          auVar7 = vminss_avx(auVar4,ZEXT416((uint)fVar2));
          fVar10 = auVar7._0_4_;
        }
        pfVar8[-6] = fVar10;
        pfVar8[-5] = fVar3;
        fVar2 = (pfVar8[-3] - *param_4) * fVar12 + *param_6;
        fVar10 = (pfVar8[-2] - param_4[1]) * fVar13 + param_6[1];
        fVar3 = fVar5;
        if (fVar5 <= fVar10) {
          auVar7 = vminss_avx(auVar6,ZEXT416((uint)fVar10));
          fVar3 = auVar7._0_4_;
        }
        fVar10 = fVar11;
        if (fVar11 <= fVar2) {
          auVar7 = vminss_avx(auVar4,ZEXT416((uint)fVar2));
          fVar10 = auVar7._0_4_;
        }
        pfVar8[-1] = fVar10;
        *pfVar8 = fVar3;
        fVar2 = (pfVar8[2] - *param_4) * fVar12 + *param_6;
        fVar10 = (pfVar8[3] - param_4[1]) * fVar13 + param_6[1];
        fVar3 = fVar5;
        if (fVar5 <= fVar10) {
          auVar7 = vminss_avx(auVar6,ZEXT416((uint)fVar10));
          fVar3 = auVar7._0_4_;
        }
        fVar10 = fVar11;
        if (fVar11 <= fVar2) {
          auVar7 = vminss_avx(auVar4,ZEXT416((uint)fVar2));
          fVar10 = auVar7._0_4_;
        }
        pfVar8[4] = fVar10;
        pfVar8[5] = fVar3;
        fVar2 = (pfVar8[7] - *param_4) * fVar12 + *param_6;
        fVar10 = (pfVar8[8] - param_4[1]) * fVar13 + param_6[1];
        fVar3 = fVar5;
        if (fVar5 <= fVar10) {
          auVar7 = vminss_avx(auVar6,ZEXT416((uint)fVar10));
          fVar3 = auVar7._0_4_;
        }
        fVar10 = fVar11;
        if (fVar11 <= fVar2) {
          auVar7 = vminss_avx(auVar4,ZEXT416((uint)fVar2));
          fVar10 = auVar7._0_4_;
        }
        pfVar8[9] = fVar10;
        pfVar8[10] = fVar3;
        pfVar8 = pfVar8 + 0x14;
        pfVar9 = pfVar9 + 0x14;
      } while (pfVar9 < pfVar1 + -0xf);
      if (pfVar1 <= pfVar9) {
        return;
      }
    }
    pfVar9 = pfVar9 + 1;
    do {
      fVar2 = (pfVar9[-1] - *param_4) * fVar12 + *param_6;
      fVar10 = (*pfVar9 - param_4[1]) * fVar13 + param_6[1];
      fVar3 = fVar5;
      if (fVar5 <= fVar10) {
        auVar7 = vminss_avx(auVar6,ZEXT416((uint)fVar10));
        fVar3 = auVar7._0_4_;
      }
      fVar10 = fVar11;
      if (fVar11 <= fVar2) {
        auVar7 = vminss_avx(auVar4,ZEXT416((uint)fVar2));
        fVar10 = auVar7._0_4_;
      }
      pfVar9[1] = fVar10;
      pfVar9[2] = fVar3;
      pfVar8 = pfVar9 + 4;
      pfVar9 = pfVar9 + 5;
    } while (pfVar8 < pfVar1);
  }
  return;
}



