// FUN_1801d6420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d6420 */

undefined8 FUN_1801d6420(void)

{
  undefined1 auVar1 [16];
  undefined1 in_ZMM0 [64];
  
  auVar1 = vroundss_avx(ZEXT816(0),in_ZMM0._0_16_,2);
  return auVar1._0_8_;
}



