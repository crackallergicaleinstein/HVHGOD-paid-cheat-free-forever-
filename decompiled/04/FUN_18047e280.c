// FUN_18047e280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047e280 */

void FUN_18047e280(longlong param_1)

{
  undefined1 auVar1 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar2 [64];
  
  auVar2 = ZEXT464(0x3f400000);
  if (0.75 <= in_ZMM1._0_4_) {
    auVar1 = vminss_avx(SUB6416(ZEXT464(0x40400000),0),in_ZMM1._0_16_);
    auVar2 = ZEXT1664(auVar1);
  }
  if ((*(char *)(param_1 + 0x71e4) != '\0') && (auVar2._0_4_ != DAT_180b0a41c)) {
    FUN_18047e2f0(param_1,auVar2._0_8_,0x3f800000);
  }
  DAT_180b0a41c = auVar2._0_4_;
  FUN_18047d3f0();
  return;
}



