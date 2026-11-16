// FUN_1803d2720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d2720 */

void FUN_1803d2720(float *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auVar6 [12];
  undefined1 auVar5 [16];
  float fVar7;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  auVar6 = SUB1612(ZEXT816(0),4);
  if ((longlong)(*(longlong *)(param_1 + 4) + 1U) < 0) {
    auVar6 = (undefined1  [12])0x0;
  }
  auVar5._0_4_ = (float)(*(longlong *)(param_1 + 4) + 1U) / *param_1;
  auVar5._4_12_ = auVar6;
  auVar5 = vroundss_avx(ZEXT816(0),auVar5,2);
  fVar7 = auVar5._0_4_;
  lVar2 = 0;
  if ((9.223372e+18 <= fVar7) && (fVar7 = fVar7 - 9.223372e+18, fVar7 < 9.223372e+18)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar7 + lVar2)) {
    uVar3 = (longlong)fVar7 + lVar2;
  }
  uVar4 = uVar1;
  if ((uVar1 < uVar3) && ((0x1ff < uVar1 || (uVar4 = uVar1 * 8, uVar1 * 8 < uVar3)))) {
    uVar4 = uVar3;
  }
  FUN_180205a20(param_1,uVar4);
  return;
}



