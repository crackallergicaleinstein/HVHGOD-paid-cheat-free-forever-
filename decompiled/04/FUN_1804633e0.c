// FUN_1804633e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804633e0 */

undefined4 FUN_1804633e0(undefined8 param_1,float param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined4 local_18 [6];
  
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_2 * DAT_180b0a41c + 0.5)),1);
  auVar1 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar1);
  FUN_1804ea040(local_18,param_1,auVar1._0_8_,0x7f7fffff,0,param_3,param_4,param_4,0);
  return local_18[0];
}



