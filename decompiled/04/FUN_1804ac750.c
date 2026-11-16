// FUN_1804ac750 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ac750 */

undefined8
FUN_1804ac750(undefined8 param_1,longlong param_2,float param_3,float param_4,float *param_5,
             float param_6,float param_7,float param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  
  if (*(char *)(param_2 + 1) != '\0') {
    auVar1 = vmaxss_avx(ZEXT416((uint)(param_4 - param_3)),SUB6416(ZEXT464(0x3f800000),0));
    fVar4 = (*(float *)(DAT_180bb8ae8 + 0x110) - param_3) / auVar1._0_4_;
    if (0.0 <= fVar4) {
      auVar1 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar4));
      fVar4 = auVar1._0_4_;
    }
    else {
      fVar4 = 0.0;
    }
    fVar4 = (param_7 - param_6) * fVar4 + param_6;
    if (0.0 < param_8) {
      fVar4 = (fVar4 - param_6) / param_8;
      fVar3 = ABS(fVar4);
      auVar2 = vroundps_avx(ZEXT416((uint)fVar3),0);
      auVar1 = vcmpss_avx(ZEXT416((uint)(fVar3 - auVar2._0_4_)),ZEXT416(0x3f000000),0);
      fVar4 = (float)((uint)((float)(auVar1._0_4_ & 0x3f800000) + auVar2._0_4_) |
                     (uint)fVar4 & 0x80000000) * param_8 + param_6;
    }
    auVar1 = vminss_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_7));
    fVar3 = auVar1._0_4_;
    if (fVar3 <= fVar4) {
      auVar1 = vmaxss_avx(ZEXT416((uint)param_6),ZEXT416((uint)param_7));
      auVar1 = vminss_avx(auVar1,ZEXT416((uint)fVar4));
      fVar3 = auVar1._0_4_;
    }
    if (fVar3 != *param_5) {
      *param_5 = fVar3;
      FUN_1804b7a50();
      return 1;
    }
  }
  return 0;
}



