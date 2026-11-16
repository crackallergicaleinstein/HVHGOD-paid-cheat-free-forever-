// FUN_18033c970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033c970 */

float FUN_18033c970(undefined8 param_1,int param_2,byte param_3)

{
  undefined1 auVar1 [16];
  short sVar2;
  int iVar3;
  undefined1 in_ZMM0 [64];
  float fVar4;
  undefined1 auVar5 [64];
  
  auVar5 = ZEXT1664(in_ZMM0._0_16_);
  sVar2 = thunk_FUN_180624430();
  if (sVar2 < 1) {
    auVar1 = vmaxss_avx(auVar5._0_16_,ZEXT816(0));
  }
  else {
    auVar1 = ZEXT816(0);
  }
  if (0.05 <= auVar1._0_4_) {
    if (0.15 <= auVar1._0_4_) {
      auVar1 = vminss_avx(SUB6416(ZEXT464(0x40000000),0),auVar1);
      fVar4 = auVar1._0_4_ * -0.9 * 0.5;
    }
    else {
      fVar4 = 0.3;
    }
  }
  else {
    fVar4 = 0.6;
  }
  iVar3 = 0;
  if (0 < param_2) {
    iVar3 = param_2;
  }
  auVar1 = vpcmpeqd_avx(ZEXT116(param_3),SUB6416(ZEXT464(0),0));
  auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x3dcccccd),0),ZEXT816(0),auVar1);
  return (float)iVar3 * 0.015 + auVar1._0_4_ + fVar4;
}



