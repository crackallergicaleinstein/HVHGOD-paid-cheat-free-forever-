// FUN_180463160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180463160 */

void FUN_180463160(undefined8 param_1,float param_2,float param_3,float param_4,undefined4 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  float local_1c;
  
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_4 + 0.5)),1);
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_3 + 0.5)),1);
  local_28 = auVar2._0_4_;
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar2 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar2);
  local_1c = auVar1._0_4_;
  local_24 = auVar2._0_4_ + local_1c;
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_2 + 0.5)),1);
  local_20 = auVar2._0_4_;
  FUN_1804df870(0,&local_20,&local_28,param_5,0,0);
  return;
}



