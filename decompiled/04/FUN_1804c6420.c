// FUN_1804c6420 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c6420 */

void FUN_1804c6420(float *param_1)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  longlong lVar6;
  longlong lVar7;
  undefined1 in_ZMM1 [64];
  float fVar8;
  
  lVar6 = DAT_180bb8ae8;
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if (*(char *)(lVar2 + 0xd1) == '\0') {
    if (in_ZMM1._0_4_ < 0.0) {
      fVar8 = 0.0;
    }
    else {
      auVar4 = vmaxss_avx(ZEXT816(0),ZEXT416((uint)(*(float *)(lVar2 + 0x150) - in_ZMM1._0_4_)));
      fVar8 = auVar4._0_4_;
    }
    lVar7 = 0x124;
    if (*(char *)(lVar2 + 0x158) == '\0') {
      lVar7 = 0x11c;
    }
    fVar1 = *(float *)(lVar7 + lVar2);
    auVar4 = vmaxss_avx(ZEXT416(*(uint *)(lVar2 + 0x144)),
                        ZEXT416((uint)((*(float *)(lVar2 + 0x11c) - fVar1) + param_1[1] + fVar8)));
    fVar3 = *(float *)(lVar2 + 0x118) + *param_1;
    *(float *)(lVar2 + 0x118) =
         (float)(int)(*(float *)(lVar2 + 0x15c) + *(float *)(lVar2 + 0x28) +
                     *(float *)(lVar2 + 0x160));
    *(float *)(lVar2 + 0x120) = fVar3;
    *(float *)(lVar2 + 0x124) = fVar1;
    fVar8 = *(float *)(lVar6 + 0xcd8);
    auVar5 = vmaxss_avx(ZEXT416(*(uint *)(lVar2 + 0x130)),ZEXT416((uint)fVar3));
    *(int *)(lVar2 + 0x130) = auVar5._0_4_;
    fVar8 = (float)(int)(auVar4._0_4_ + fVar1 + fVar8);
    *(float *)(lVar2 + 0x11c) = fVar8;
    auVar5 = vmaxss_avx(ZEXT416(*(uint *)(lVar2 + 0x134)),
                        ZEXT416((uint)(fVar8 - *(float *)(lVar6 + 0xcd8))));
    *(int *)(lVar2 + 0x134) = auVar5._0_4_;
    auVar5 = vmaxss_avx(ZEXT416((uint)*(float *)(lVar2 + 0x150)),in_ZMM1._0_16_);
    *(int *)(lVar2 + 0x154) = auVar5._0_4_;
    *(float *)(lVar2 + 0x14c) = auVar4._0_4_;
    *(undefined4 *)(lVar2 + 0x144) = 0;
    *(undefined4 *)(lVar2 + 0x150) = 0;
    *(undefined2 *)(lVar2 + 0x158) = 0;
    if (*(int *)(lVar2 + 0x1d4) == 0) {
      FUN_1804c65b0(0,0xbf800000);
    }
  }
  return;
}



