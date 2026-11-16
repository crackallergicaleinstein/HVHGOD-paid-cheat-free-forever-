// FUN_1805206f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805206f0 */

undefined1 * FUN_1805206f0(undefined1 *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = 0.0;
  auVar2 = SUB6416(ZEXT464(0x3f800000),0);
  if (0.0 <= *param_2) {
    auVar1 = vminss_avx(auVar2,ZEXT416((uint)*param_2));
    fVar6 = auVar1._0_4_;
  }
  else {
    fVar6 = 0.0;
  }
  if (0.0 <= param_2[1]) {
    auVar1 = vminss_avx(auVar2,ZEXT416((uint)param_2[1]));
    fVar5 = auVar1._0_4_;
  }
  else {
    fVar5 = 0.0;
  }
  if (0.0 <= param_2[2]) {
    auVar1 = vminss_avx(auVar2,ZEXT416((uint)param_2[2]));
    fVar4 = auVar1._0_4_;
  }
  else {
    fVar4 = 0.0;
  }
  if (0.0 <= param_2[3]) {
    auVar2 = vminss_avx(auVar2,ZEXT416((uint)param_2[3]));
    fVar3 = auVar2._0_4_;
  }
  *param_1 = (char)(int)(fVar6 * 255.0);
  param_1[1] = (char)(int)(fVar5 * 255.0);
  param_1[2] = (char)(int)(fVar4 * 255.0);
  param_1[3] = (char)(int)(fVar3 * 255.0);
  return param_1;
}



