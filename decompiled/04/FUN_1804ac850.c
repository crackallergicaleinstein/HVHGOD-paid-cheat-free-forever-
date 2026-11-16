// FUN_1804ac850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ac850 */

undefined8
FUN_1804ac850(undefined8 param_1,char param_2,float *param_3,undefined8 param_4,float param_5,
             float param_6,char param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  undefined1 in_ZMM3 [64];
  float fVar7;
  
  if (((param_7 != '\0') && (param_2 != '\0')) && (*(float *)(DAT_180bb8ae8 + 0x120) != 0.0)) {
    fVar7 = in_ZMM3._0_4_;
    if (param_6 <= 0.0) {
      fVar5 = (param_5 - fVar7) / 100.0;
    }
    else {
      fVar5 = param_6;
    }
    if (*(char *)(DAT_180bb8ae8 + 0x12d) == '\0') {
      if (*(char *)(DAT_180bb8ae8 + 0x12e) != '\0') {
        fVar5 = fVar5 * 0.2;
      }
    }
    else {
      fVar5 = fVar5 * 5.0;
    }
    auVar2 = vminss_avx(in_ZMM3._0_16_,ZEXT416((uint)param_5));
    auVar1 = vmaxss_avx(in_ZMM3._0_16_,ZEXT416((uint)param_5));
    fVar5 = fVar5 * *(float *)(DAT_180bb8ae8 + 0x120) + *param_3;
    auVar4 = auVar2;
    if (auVar2._0_4_ <= fVar5) {
      auVar4 = vminss_avx(auVar1,ZEXT416((uint)fVar5));
    }
    if (0.0 < param_6) {
      fVar5 = (auVar4._0_4_ - fVar7) / param_6;
      fVar6 = ABS(fVar5);
      auVar3 = vroundps_avx(ZEXT416((uint)fVar6),0);
      auVar4 = vcmpss_avx(ZEXT416((uint)(fVar6 - auVar3._0_4_)),ZEXT416(0x3f000000),0);
      auVar4 = ZEXT416((uint)((float)((uint)((float)(auVar4._0_4_ & 0x3f800000) + auVar3._0_4_) |
                                     (uint)fVar5 & 0x80000000) * param_6 + fVar7));
    }
    if (auVar2._0_4_ <= auVar4._0_4_) {
      auVar2 = vminss_avx(auVar1,auVar4);
    }
    if (auVar2._0_4_ != *param_3) {
      *param_3 = auVar2._0_4_;
      FUN_1804b7a50();
      return 1;
    }
  }
  return 0;
}



