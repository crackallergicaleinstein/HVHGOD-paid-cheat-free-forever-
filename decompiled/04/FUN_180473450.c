// FUN_180473450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180473450 */

void FUN_180473450(uint param_1,float *param_2,float *param_3,char param_4,undefined8 *param_5,
                  undefined4 *param_6,float param_7)

{
  longlong lVar1;
  ushort uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (0x8ff < param_1) {
    *param_5 = *(undefined8 *)param_2;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = *(ulonglong *)param_2;
    auVar8 = vshufps_avx(auVar8,auVar8,0x55);
    *param_6 = (int)*(ulonglong *)param_2;
    param_6[1] = auVar8._0_4_;
    return;
  }
  fVar4 = param_3[1] - param_2[1];
  lVar1 = (longlong)(int)param_1 * 0x14;
  fVar5 = *param_3 - *param_2;
  puVar7 = &DAT_18077f8cc;
  if (param_4 == '\0') {
    puVar7 = &DAT_18077f8d0;
  }
  puVar6 = &DAT_18077f8ce;
  if (param_4 == '\0') {
    puVar6 = &DAT_18077f8d2;
  }
  fVar10 = 0.0;
  auVar8 = vminss_avx(ZEXT416((uint)(fVar5 / (float)*(ushort *)(puVar7 + lVar1))),
                      ZEXT416((uint)(fVar4 / (float)*(ushort *)(puVar6 + lVar1))));
  if (0.0 < param_7) {
    auVar8 = vminss_avx(auVar8,ZEXT416((uint)param_7));
  }
  fVar9 = auVar8._0_4_;
  fVar5 = (fVar5 - (float)*(ushort *)(puVar7 + lVar1) * fVar9) * 0.5 + *param_2;
  fVar4 = (fVar4 - (float)*(ushort *)(puVar6 + lVar1) * fVar9) * 0.5 + param_2[1];
  fVar11 = 0.0;
  if (param_4 == '\0') {
    fVar10 = (float)*(ushort *)(&DAT_18077f8c8 + lVar1);
    fVar11 = (float)*(ushort *)(&DAT_18077f8ca + lVar1);
  }
  auVar8 = vroundss_avx(ZEXT416(0),ZEXT416((uint)(fVar10 * fVar9 + fVar5 + 0.5)),1);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar11 * fVar9 + fVar4 + 0.5)),1);
  auVar8 = vunpcklps_avx(auVar8,auVar3);
  *param_5 = auVar8._0_8_;
  uVar2 = *(ushort *)(&DAT_18077f8ce + lVar1);
  auVar8 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(((float)*(ushort *)(&DAT_18077f8cc + lVar1) + fVar10) * fVar9
                                       + fVar5 + 0.5)),1);
  *param_6 = auVar8._0_4_;
  auVar8 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(((float)uVar2 + fVar11) * fVar9 + fVar4 + 0.5)),1)
  ;
  param_6[1] = auVar8._0_4_;
  return;
}



