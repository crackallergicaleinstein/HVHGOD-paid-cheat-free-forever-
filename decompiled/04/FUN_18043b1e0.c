// FUN_18043b1e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043b1e0 */

undefined8 * FUN_18043b1e0(undefined8 *param_1)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  
  lVar4 = FUN_180439770();
  lVar5 = 0;
  if (*(longlong *)(lVar4 + 0x478) != *(longlong *)(lVar4 + 0x480)) {
    lVar5 = *(longlong *)(lVar4 + 0x480) + -0x78;
  }
  if (lVar5 == 0) {
    *param_1 = 0;
    return param_1;
  }
  lVar4 = FUN_180439770();
  fVar1 = *(float *)(lVar5 + 0x2c);
  fVar6 = *(float *)(lVar5 + 0x34);
  fVar2 = *(float *)(lVar4 + 0x1ec);
  if (0.0 < *(float *)(lVar5 + 0x38)) {
    fVar6 = fVar6 + *(float *)(lVar5 + 0x38) + *(float *)(lVar4 + 500);
  }
  auVar3 = vmaxss_avx(ZEXT416((uint)((*(float *)(lVar5 + 0x28) - *(float *)(lVar4 + 0x1e8)) -
                                    *(float *)(lVar5 + 0x30))),ZEXT816(0));
  *(int *)param_1 = auVar3._0_4_;
  auVar3 = vmaxss_avx(ZEXT416((uint)((fVar1 - fVar2) - fVar6)),ZEXT816(0));
  *(int *)((longlong)param_1 + 4) = auVar3._0_4_;
  return param_1;
}



