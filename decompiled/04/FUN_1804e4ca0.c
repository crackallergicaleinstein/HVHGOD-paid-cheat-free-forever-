// FUN_1804e4ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e4ca0 */

undefined8
FUN_1804e4ca0(float param_1,float param_2,float param_3,longlong param_4,longlong param_5,
             int param_6)

{
  longlong lVar1;
  float fVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  undefined1 auVar10 [64];
  
  lVar7 = (longlong)param_6;
  lVar4 = 0;
  auVar10 = ZEXT464(0xff7fffff);
  if (3 < lVar7) {
    lVar5 = (lVar7 - 4U >> 2) + 1;
    lVar4 = lVar5 * 4;
    pfVar6 = (float *)(param_4 + 8);
    pfVar8 = (float *)(param_5 + 8);
    do {
      auVar3 = vmaxss_avx(ZEXT416((uint)(param_1 * pfVar6[-2] + param_2 * pfVar6[-1] + pfVar8[-2])),
                          auVar10._0_16_);
      auVar3 = vmaxss_avx(ZEXT416((uint)(param_2 * pfVar6[1] + param_1 * *pfVar6 + pfVar8[-1])),
                          auVar3);
      auVar3 = vmaxss_avx(ZEXT416((uint)(param_1 * pfVar6[2] + param_2 * pfVar6[3] + *pfVar8)),
                          auVar3);
      auVar3 = vmaxss_avx(ZEXT416((uint)(param_1 * pfVar6[4] + param_2 * pfVar6[5] + pfVar8[1])),
                          auVar3);
      auVar10 = ZEXT1664(auVar3);
      lVar5 = lVar5 + -1;
      pfVar6 = pfVar6 + 8;
      pfVar8 = pfVar8 + 4;
    } while (lVar5 != 0);
  }
  if (lVar4 < lVar7) {
    pfVar6 = (float *)(param_5 + lVar4 * 4);
    do {
      lVar1 = lVar4 * 8;
      lVar5 = lVar4 * 8;
      fVar2 = *pfVar6;
      lVar4 = lVar4 + 1;
      pfVar6 = pfVar6 + 1;
      auVar3 = vmaxss_avx(ZEXT416((uint)(param_2 * *(float *)(param_4 + 4 + lVar1) +
                                         param_1 * *(float *)(param_4 + lVar5) + fVar2)),
                          auVar10._0_16_);
      auVar10 = ZEXT1664(auVar3);
    } while (lVar4 < lVar7);
  }
  fVar9 = 0.0;
  fVar2 = 1.0 - (auVar10._0_4_ + 0.5);
  if (param_3 == 0.0) {
    if (0.0 <= fVar2) {
      auVar3 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar2));
      fVar9 = auVar3._0_4_;
    }
  }
  else {
    auVar3 = vminss_avx(ZEXT416((uint)(auVar10._0_4_ + param_3 + 0.5)),ZEXT416((uint)fVar2));
    if (0.0 <= auVar3._0_4_) {
      auVar3 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar3);
      fVar9 = auVar3._0_4_;
    }
  }
  return CONCAT44((int)((ulonglong)lVar4 >> 0x20),(int)(fVar9 * 255.0));
}



