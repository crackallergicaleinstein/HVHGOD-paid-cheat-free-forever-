// FUN_18025e030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18025e030 */

float FUN_18025e030(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  byte bVar5;
  undefined1 auVar6 [16];
  
  auVar6._0_4_ = (float)*(int *)(param_2 + 0x88);
  auVar6._4_12_ = SUB1612(ZEXT816(0),4);
  auVar6 = vcmpss_avx(auVar6,ZEXT416((uint)*(float *)(param_2 + 0x18)),2);
  auVar4 = ZEXT816(0);
  iVar1 = *(int *)(param_2 + 0x24);
  auVar6 = vblendvps_avx(auVar4,SUB6416(ZEXT464(0x47c35000),0),auVar6);
  auVar2 = vpcmpeqd_avx(ZEXT116(*(byte *)(param_2 + 0x59)),SUB6416(ZEXT464(0),0));
  auVar2 = vblendvps_avx(auVar4,SUB6416(ZEXT464(0x459c4000),0),auVar2);
  auVar3 = vpcmpeqd_avx(ZEXT116(*(byte *)(param_2 + 0x58)),SUB6416(ZEXT464(0),0));
  auVar3 = vblendvps_avx(SUB6416(ZEXT464(0x44fa0000),0),auVar4,auVar3);
  if (iVar1 == 0) {
    bVar5 = 4;
  }
  else if (iVar1 - 1U < 6) {
    bVar5 = 3;
  }
  else if (iVar1 - 0xdU < 6) {
    bVar5 = 2;
  }
  else {
    bVar5 = iVar1 - 7U < 6;
  }
  return (auVar2._0_4_ + auVar6._0_4_ + auVar3._0_4_ + *(float *)(param_2 + 0x18) * 20.0 +
         (float)bVar5 * 10.0) - *(float *)(param_2 + 0x20);
}



