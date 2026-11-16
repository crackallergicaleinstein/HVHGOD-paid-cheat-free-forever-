// FUN_1801f4ac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f4ac0 */

void FUN_1801f4ac0(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auVar5 [12];
  undefined1 auVar4 [16];
  float fVar6;
  
  auVar5 = SUB1612(ZEXT816(0),4);
  if ((longlong)(DAT_180bbead0 + 1U) < 0) {
    auVar5 = (undefined1  [12])0x0;
  }
  auVar4._0_4_ = (float)(DAT_180bbead0 + 1U) / DAT_180bbeac0;
  auVar4._4_12_ = auVar5;
  auVar4 = vroundss_avx(ZEXT816(0),auVar4,2);
  fVar6 = auVar4._0_4_;
  lVar1 = 0;
  if ((9.223372e+18 <= fVar6) && (fVar6 = fVar6 - 9.223372e+18, fVar6 < 9.223372e+18)) {
    lVar1 = -0x8000000000000000;
  }
  uVar2 = 8;
  if (8 < (ulonglong)((longlong)fVar6 + lVar1)) {
    uVar2 = (longlong)fVar6 + lVar1;
  }
  uVar3 = DAT_180bbeaf8;
  if ((DAT_180bbeaf8 < uVar2) &&
     ((0x1ff < DAT_180bbeaf8 || (uVar3 = DAT_180bbeaf8 * 8, DAT_180bbeaf8 * 8 < uVar2)))) {
    uVar3 = uVar2;
  }
  FUN_1801f5c40(0x5f000000,uVar3);
  return;
}



