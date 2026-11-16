// FUN_180151090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180151090 */

ulonglong FUN_180151090(float *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auVar5 [12];
  undefined1 auVar4 [16];
  float fVar6;
  
  uVar1 = *(ulonglong *)(param_1 + 0xe);
  auVar5 = SUB1612(ZEXT816(0),4);
  if ((longlong)param_2 < 0) {
    auVar5 = (undefined1  [12])0x0;
  }
  auVar4._0_4_ = (float)param_2 / *param_1;
  auVar4._4_12_ = auVar5;
  auVar4 = vroundss_avx(ZEXT816(0),auVar4,2);
  fVar6 = auVar4._0_4_;
  lVar2 = 0;
  if ((9.223372e+18 <= fVar6) && (fVar6 = fVar6 - 9.223372e+18, fVar6 < 9.223372e+18)) {
    lVar2 = -0x8000000000000000;
  }
  uVar3 = 8;
  if (8 < (ulonglong)((longlong)fVar6 + lVar2)) {
    uVar3 = (longlong)fVar6 + lVar2;
  }
  if (uVar3 <= uVar1) {
    return uVar1;
  }
  if (uVar1 < 0x200) {
    if (uVar3 <= uVar1 * 8) {
      uVar3 = uVar1 * 8;
    }
  }
  return uVar3;
}



