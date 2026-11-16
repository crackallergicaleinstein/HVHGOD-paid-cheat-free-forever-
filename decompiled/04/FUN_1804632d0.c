// FUN_1804632d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804632d0 */

float FUN_1804632d0(undefined8 param_1,float param_2)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [64];
  
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_2 * DAT_180b0a41c + 0.5)),1);
  auVar1 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar1);
  auVar4 = ZEXT1664(auVar1);
  lVar2 = FUN_1804e97d0(SUB648(ZEXT464(0x3f800000),0),auVar1._0_8_,0xbf800000);
  lVar3 = FUN_1804e95f0(lVar2,0x48);
  if (lVar3 == 0) {
    return 0.0;
  }
  return (auVar4._0_4_ / *(float *)(lVar2 + 0x14)) * *(float *)(lVar3 + 0xc);
}



