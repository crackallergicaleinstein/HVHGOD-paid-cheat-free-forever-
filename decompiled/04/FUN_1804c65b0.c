// FUN_1804c65b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c65b0 */

void FUN_1804c65b0(float param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 in_ZMM1 [64];
  float fVar3;
  
  fVar3 = in_ZMM1._0_4_;
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if (*(char *)(lVar1 + 0xd1) == '\0') {
    if (param_1 == 0.0) {
      if (fVar3 < 0.0) {
        fVar3 = *(float *)(DAT_180bb8ae8 + 0xcd4);
      }
      fVar3 = fVar3 + *(float *)(lVar1 + 0x120);
    }
    else {
      auVar2 = vmaxss_avx(ZEXT816(0),in_ZMM1._0_16_);
      fVar3 = (*(float *)(lVar1 + 0x28) - *(float *)(lVar1 + 0x98)) + param_1 + auVar2._0_4_ +
              *(float *)(lVar1 + 0x164) + *(float *)(lVar1 + 0x160);
    }
    *(float *)(lVar1 + 0x118) = fVar3;
    *(undefined4 *)(lVar1 + 0x11c) = *(undefined4 *)(lVar1 + 0x124);
    *(undefined8 *)(lVar1 + 0x140) = *(undefined8 *)(lVar1 + 0x148);
    *(undefined4 *)(lVar1 + 0x150) = *(undefined4 *)(lVar1 + 0x154);
    *(undefined1 *)(lVar1 + 0x158) = 1;
  }
  return;
}



