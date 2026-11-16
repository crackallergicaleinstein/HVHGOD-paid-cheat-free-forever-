// FUN_18047e2f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047e2f0 */

void FUN_18047e2f0(longlong param_1,float param_2,float param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 633.0 + 0.5)),1);
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_2 * 633.0 + 0.5)),1);
  auVar1 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)((auVar1._0_4_ * 0.5 + *(float *)(param_1 + 0x71dc)) * param_3
                                      - auVar2._0_4_ * 0.5)),1);
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 485.0 + 0.5)),1);
  *(int *)(param_1 + 0x71dc) = auVar1._0_4_;
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_2 * 485.0 + 0.5)),1);
  auVar1 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)((auVar2._0_4_ * 0.5 + *(float *)(param_1 + 0x71e0)) * param_3
                                      - auVar1._0_4_ * 0.5)),1);
  *(int *)(param_1 + 0x71e0) = auVar1._0_4_;
  *(undefined1 *)(param_1 + 0x71e5) = 1;
  return;
}



