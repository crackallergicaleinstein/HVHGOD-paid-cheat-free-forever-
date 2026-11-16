// FUN_18042a740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042a740 */

uint FUN_18042a740(undefined8 param_1)

{
  undefined1 auVar1 [16];
  short sVar2;
  float fVar3;
  undefined1 in_XMM1 [16];
  undefined1 auVar4 [64];
  
  auVar4 = ZEXT1664(in_XMM1);
  sVar2 = thunk_FUN_180624430(in_XMM1._0_8_);
  fVar3 = 0.0;
  if ((sVar2 != 2) && (0.0 <= auVar4._0_4_)) {
    auVar1 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar4._0_16_);
    fVar3 = auVar1._0_4_;
  }
  return (((uint)((ulonglong)param_1 >> 0x10) & 0xff |
          ((int)(fVar3 * 256.0) * ((uint)param_1 >> 0x18) >> 8 & 0xff) << 8) << 8 |
         (uint)((ulonglong)param_1 >> 8) & 0xff) << 8 | (uint)param_1 & 0xff;
}



