// FUN_1804c6720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c6720 */

undefined8 FUN_1804c6720(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  
  if ((*(byte *)(DAT_180bb8ae8 + 0x1e88) & 1) == 0) {
    fVar4 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x1e8);
  }
  else {
    fVar4 = *(float *)(DAT_180bb8ae8 + 0x1ea0);
  }
  if (fVar4 < 0.0) {
    lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    if ((*(longlong *)(lVar1 + 0x1c8) != 0) ||
       (lVar2 = 0x280, *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
      lVar2 = 0x250;
    }
    auVar3 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),
                        ZEXT416((uint)((*(float *)(lVar2 + lVar1) - *(float *)(lVar1 + 0x118)) +
                                      fVar4)));
    fVar4 = auVar3._0_4_;
  }
  auVar3._0_4_ = (float)(int)fVar4;
  auVar3._4_12_ = SUB1612(ZEXT816(0),4);
  return auVar3._0_8_;
}



