// FUN_180462ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180462ad0 */

uint FUN_180462ad0(uint param_1,uint param_2)

{
  undefined1 auVar1 [16];
  uint uVar2;
  uint uVar3;
  undefined1 in_ZMM2 [64];
  float fVar4;
  float fVar5;
  
  fVar5 = 0.0;
  if (0.0 <= in_ZMM2._0_4_) {
    auVar1 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),in_ZMM2._0_16_);
    fVar5 = auVar1._0_4_;
  }
  uVar3 = 0;
  uVar2 = 0;
  do {
    fVar4 = (float)(param_1 >> (uVar2 & 0x1f) & 0xff);
    uVar3 = uVar3 | (int)(longlong)
                         (((float)(param_2 >> (uVar2 & 0x1f) & 0xff) - fVar4) * fVar5 + fVar4 + 0.5)
                    << (uVar2 & 0x1f);
    uVar2 = uVar2 + 8;
  } while ((int)uVar2 < 0x20);
  return uVar3;
}



