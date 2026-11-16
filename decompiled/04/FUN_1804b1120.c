// FUN_1804b1120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b1120 */

uint FUN_1804b1120(float *param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  
  fVar4 = 0.0;
  auVar5 = SUB6416(ZEXT464(0x3f800000),0);
  if (0.0 <= *param_1) {
    auVar1 = vminss_avx(auVar5,ZEXT416((uint)*param_1));
    fVar6 = auVar1._0_4_;
  }
  else {
    fVar6 = 0.0;
  }
  if (0.0 <= param_1[1]) {
    auVar1 = vminss_avx(auVar5,ZEXT416((uint)param_1[1]));
    fVar3 = auVar1._0_4_;
  }
  else {
    fVar3 = 0.0;
  }
  if (0.0 <= param_1[2]) {
    auVar1 = vminss_avx(auVar5,ZEXT416((uint)param_1[2]));
    fVar2 = auVar1._0_4_;
  }
  else {
    fVar2 = 0.0;
  }
  if (0.0 <= param_1[3]) {
    auVar5 = vminss_avx(auVar5,ZEXT416((uint)param_1[3]));
    fVar4 = auVar5._0_4_;
  }
  return (int)(fVar4 * 255.0 + 0.5) << 0x18 |
         (int)(fVar3 * 255.0 + 0.5) << 8 | (int)(fVar6 * 255.0 + 0.5) |
         (int)(fVar2 * 255.0 + 0.5) << 0x10;
}



