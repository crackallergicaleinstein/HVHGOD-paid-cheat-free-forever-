// FUN_1804a32d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a32d0 */

void FUN_1804a32d0(undefined8 param_1,undefined8 param_2,float *param_3,int param_4,char param_5)

{
  undefined1 auVar1 [16];
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_4 == 0) {
    if (param_5 == '\0') {
      fVar6 = 0.0;
      auVar3 = SUB6416(ZEXT464(0x3f800000),0);
      if (0.0 <= param_3[2]) {
        auVar1 = vminss_avx(auVar3,ZEXT416((uint)param_3[2]));
        fVar5 = auVar1._0_4_;
      }
      else {
        fVar5 = 0.0;
      }
      if (0.0 <= param_3[1]) {
        auVar1 = vminss_avx(auVar3,ZEXT416((uint)param_3[1]));
        fVar4 = auVar1._0_4_;
      }
      else {
        fVar4 = 0.0;
      }
      if (0.0 <= *param_3) {
        auVar3 = vminss_avx(auVar3,ZEXT416((uint)*param_3));
        fVar6 = auVar3._0_4_;
      }
      fVar7 = fVar6 * 255.0 + 0.5;
      FUN_18015abc0(fVar6 * 255.0,fVar7,"%02X%02X%02X",(int)fVar7,(int)(fVar4 * 255.0 + 0.5),
                    (int)(fVar5 * 255.0 + 0.5));
      return;
    }
  }
  else {
    if (param_4 == 1) {
      fVar6 = 0.0;
      auVar3 = SUB6416(ZEXT464(0x3f800000),0);
      if (0.0 <= param_3[2]) {
        auVar1 = vminss_avx(auVar3,ZEXT416((uint)param_3[2]));
        fVar5 = auVar1._0_4_;
      }
      else {
        fVar5 = 0.0;
      }
      if (0.0 <= param_3[1]) {
        auVar1 = vminss_avx(auVar3,ZEXT416((uint)param_3[1]));
        fVar4 = auVar1._0_4_;
      }
      else {
        fVar4 = 0.0;
      }
      if (0.0 <= *param_3) {
        auVar3 = vminss_avx(auVar3,ZEXT416((uint)*param_3));
        fVar6 = auVar3._0_4_;
      }
      fVar6 = fVar6 * 255.0 + 0.5;
      FUN_18015abc0(param_1,fVar6,"%d, %d, %d",(int)fVar6,(int)(fVar4 * 255.0 + 0.5),
                    (int)(fVar5 * 255.0 + 0.5));
      return;
    }
    if (param_4 == 2) {
      fVar7 = param_3[1];
      fVar6 = *param_3;
      fVar5 = param_3[2];
      fVar8 = 0.0;
      fVar4 = fVar5;
      if (fVar7 < fVar5) {
        fVar8 = -1.0;
        fVar4 = fVar7;
        fVar7 = fVar5;
      }
      fVar5 = fVar6;
      if (fVar6 < fVar7) {
        fVar8 = -0.33333334 - fVar8;
        fVar5 = fVar7;
        fVar7 = fVar6;
      }
      auVar3 = vminss_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar4));
      fVar2 = fVar5 - auVar3._0_4_;
      fVar6 = ABS((fVar7 - fVar4) / (fVar2 * 6.0 + 1e-20) + fVar8) * 360.0 + 0.5;
      FUN_18015abc0(param_1,fVar6,&DAT_1808594d0,(int)fVar6,
                    (int)((fVar2 / (fVar5 + 1e-20)) * 100.0 + 0.5),(int)(fVar5 * 100.0 + 0.5));
      return;
    }
  }
  fVar6 = 0.0;
  auVar3 = SUB6416(ZEXT464(0x3f800000),0);
  if (0.0 <= param_3[3]) {
    auVar1 = vminss_avx(auVar3,ZEXT416((uint)param_3[3]));
    fVar5 = auVar1._0_4_;
  }
  else {
    fVar5 = 0.0;
  }
  if (0.0 <= param_3[2]) {
    auVar1 = vminss_avx(auVar3,ZEXT416((uint)param_3[2]));
    fVar4 = auVar1._0_4_;
  }
  else {
    fVar4 = 0.0;
  }
  if (0.0 <= param_3[1]) {
    auVar1 = vminss_avx(auVar3,ZEXT416((uint)param_3[1]));
    fVar7 = auVar1._0_4_;
  }
  else {
    fVar7 = 0.0;
  }
  if (0.0 <= *param_3) {
    auVar3 = vminss_avx(auVar3,ZEXT416((uint)*param_3));
    fVar6 = auVar3._0_4_;
  }
  FUN_18015abc0(param_1,param_2,"%02X%02X%02X%02X",(int)(fVar6 * 255.0 + 0.5),
                (int)(fVar7 * 255.0 + 0.5),(int)(fVar4 * 255.0 + 0.5),(int)(fVar5 * 255.0 + 0.5));
  return;
}



