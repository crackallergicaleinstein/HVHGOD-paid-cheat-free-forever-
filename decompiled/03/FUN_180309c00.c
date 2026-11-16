// FUN_180309c00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180309c00 */

int FUN_180309c00(undefined8 param_1,float param_2)

{
  undefined1 auVar1 [16];
  
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(((param_2 + param_2) * 72.0) / 360.0)),2);
  return (int)auVar1._0_4_ + 1;
}



