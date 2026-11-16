// FUN_1804abde0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804abde0 */

uint FUN_1804abde0(uint *param_1,undefined8 param_2,int param_3,int param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  
  uVar5 = *param_1;
  uVar6 = (uVar5 >> 8 & 0xff) + param_3;
  if ((int)uVar6 < 0) {
    uVar6 = 0;
  }
  else if (0xff < (int)uVar6) {
    uVar6 = 0xff;
  }
  uVar3 = (uVar5 >> 0x10 & 0xff) + param_4;
  uVar4 = 0;
  if ((-1 < (int)uVar3) && (uVar4 = uVar3, 0xff < (int)uVar3)) {
    uVar4 = 0xff;
  }
  uVar5 = (uVar4 | 0xffffff00) << 0x10 | uVar6 << 8 | uVar5 & 0xff;
  fVar2 = ((float)(uVar5 >> 0x18) / 255.0) * (float)param_1[1];
  fVar7 = 0.0;
  if (0.0 <= fVar2) {
    auVar1 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),ZEXT416((uint)fVar2));
    fVar7 = auVar1._0_4_;
  }
  return (int)(longlong)(fVar7 * 255.0 + 0.5) << 0x18 | uVar5 & 0xffffff;
}



