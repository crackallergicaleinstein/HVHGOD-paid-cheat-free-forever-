// FUN_18043b290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043b290 */

undefined8 * FUN_18043b290(undefined8 *param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  longlong lVar3;
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM2 [64];
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [64];
  undefined1 auVar8 [16];
  undefined1 auVar9 [64];
  
  auVar9 = ZEXT1664(in_ZMM1._0_16_);
  auVar7 = ZEXT1664(in_ZMM2._0_16_);
  lVar2 = FUN_180439770();
  auVar6 = auVar7._0_16_;
  auVar8 = auVar9._0_16_;
  lVar3 = 0;
  if (*(longlong *)(lVar2 + 0x478) != *(longlong *)(lVar2 + 0x480)) {
    lVar3 = *(longlong *)(lVar2 + 0x480) + -0x78;
  }
  if (lVar3 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    fVar4 = 0.0;
    if (0.0 < *(float *)(lVar3 + 0x38)) {
      lVar2 = FUN_180439770();
      auVar6 = auVar7._0_16_;
      auVar8 = auVar9._0_16_;
      fVar5 = *(float *)(lVar2 + 500);
      if (fVar4 < param_4) {
        auVar1 = vmaxss_avx(ZEXT416((uint)(fVar5 - param_4 * 0.25)),ZEXT416((uint)(fVar5 * 0.5)));
        fVar5 = auVar1._0_4_;
      }
      *(float *)(lVar3 + 0x34) = fVar5 + *(float *)(lVar3 + 0x38) + *(float *)(lVar3 + 0x34);
    }
    fVar4 = *(float *)(lVar3 + 0x34);
    *(float *)(lVar3 + 0x3c) = *(float *)(lVar3 + 0x30);
    *(float *)(lVar3 + 0x40) = fVar4;
    *(int *)(lVar3 + 0x44) = auVar8._0_4_;
    fVar5 = auVar6._0_4_;
    *(float *)(lVar3 + 0x48) = fVar5;
    *(float *)(lVar3 + 0x38) = fVar5;
    *(undefined1 *)(lVar3 + 0x4d) = 0;
    auVar1 = vmaxss_avx(ZEXT416((uint)(fVar4 + fVar5)),ZEXT416(*(uint *)(lVar3 + 0x50)));
    *(int *)(lVar3 + 0x50) = auVar1._0_4_;
    auVar1 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(*(float *)(lVar3 + 0x30) + *(float *)(lVar3 + 0x20))),1);
    fVar5 = *(float *)(lVar3 + 0x24);
    *(int *)param_1 = auVar1._0_4_;
    auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar4 + fVar5)),1);
    auVar8 = vroundss_avx(ZEXT816(0),auVar8,1);
    auVar6 = vroundss_avx(ZEXT816(0),auVar6,1);
    *(int *)(param_1 + 1) = auVar8._0_4_;
    *(int *)((longlong)param_1 + 4) = auVar1._0_4_;
    *(int *)((longlong)param_1 + 0xc) = auVar6._0_4_;
  }
  return param_1;
}



