// FUN_1805f9710 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f9710 */

void FUN_1805f9710(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined1 auVar10 [16];
  uint uVar16;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  undefined1 auVar17 [32];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  
  auVar1 = *param_1;
  uVar7 = (longlong)param_2 - (longlong)param_1;
  puVar6 = *param_1;
  auVar17 = auVar1;
  while (param_1 = param_1 + 1,
        param_1 != (undefined1 (*) [32])(puVar6 + (uVar7 & 0xffffffffffffffe0))) {
    auVar1 = *param_1;
    auVar17 = vpmaxsd_avx2(auVar1,auVar17);
  }
  auVar10._0_4_ = (uint)uVar7 & 0x1c;
  if ((uVar7 & 0x1c) != 0) {
    auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_18068bed0 + -(ulonglong)auVar10._0_4_),
                             *param_1);
    auVar1 = vpblendvb_avx2(auVar1,auVar2,
                            *(undefined1 (*) [32])(&DAT_18068bed0 + -(ulonglong)auVar10._0_4_));
    auVar17 = vpmaxsd_avx2(auVar1,auVar17);
    param_1 = (undefined1 (*) [32])(*param_1 + auVar10._0_4_);
  }
  auVar1 = vpermq_avx2(auVar17,0x4e);
  auVar1 = vpmaxsd_avx2(auVar1,auVar17);
  auVar17 = vpshufd_avx2(auVar1,0x4e);
  auVar1 = vpmaxsd_avx2(auVar17,auVar1);
  auVar17 = vpshufd_avx2(auVar1,0xb1);
  auVar1 = vpmaxsd_avx2(auVar17,auVar1);
  auVar10._0_4_ = auVar1._0_4_;
  uVar7 = 0;
  uVar8 = (ulonglong)((longlong)param_2 + (3 - (longlong)param_1)) >> 2;
  if (param_2 < param_1) {
    uVar8 = 0;
  }
  if (((uVar8 != 0) && (7 < uVar8)) && (1 < DAT_1808d5f60)) {
    auVar10._4_4_ = auVar10._0_4_;
    auVar10._8_4_ = auVar10._0_4_;
    auVar10._12_4_ = auVar10._0_4_;
    auVar11 = ZEXT1664(auVar10);
    auVar18 = ZEXT1664(auVar10);
    do {
      iVar13 = *(int *)*param_1;
      iVar3 = *(int *)(*param_1 + 4);
      iVar4 = *(int *)(*param_1 + 8);
      iVar5 = *(int *)(*param_1 + 0xc);
      uVar7 = uVar7 + 8;
      iVar9 = auVar11._0_4_;
      auVar12._0_4_ = (uint)(iVar9 < iVar13) * iVar13 | (uint)(iVar9 >= iVar13) * iVar9;
      iVar13 = auVar11._4_4_;
      auVar12._4_4_ = (uint)(iVar13 < iVar3) * iVar3 | (uint)(iVar13 >= iVar3) * iVar13;
      iVar13 = auVar11._8_4_;
      auVar12._8_4_ = (uint)(iVar13 < iVar4) * iVar4 | (uint)(iVar13 >= iVar4) * iVar13;
      iVar13 = auVar11._12_4_;
      auVar12._16_48_ = auVar11._16_48_;
      auVar12._12_4_ = (uint)(iVar13 < iVar5) * iVar5 | (uint)(iVar13 >= iVar5) * iVar13;
      iVar13 = *(int *)(*param_1 + 0x10);
      iVar3 = *(int *)(*param_1 + 0x14);
      iVar4 = *(int *)(*param_1 + 0x18);
      iVar5 = *(int *)(*param_1 + 0x1c);
      param_1 = param_1 + 1;
      iVar9 = auVar18._0_4_;
      auVar19._0_4_ = (uint)(iVar9 < iVar13) * iVar13 | (uint)(iVar9 >= iVar13) * iVar9;
      iVar13 = auVar18._4_4_;
      auVar19._4_4_ = (uint)(iVar13 < iVar3) * iVar3 | (uint)(iVar13 >= iVar3) * iVar13;
      iVar13 = auVar18._8_4_;
      auVar19._8_4_ = (uint)(iVar13 < iVar4) * iVar4 | (uint)(iVar13 >= iVar4) * iVar13;
      iVar13 = auVar18._12_4_;
      auVar19._16_48_ = auVar18._16_48_;
      auVar19._12_4_ = (uint)(iVar13 < iVar5) * iVar5 | (uint)(iVar13 >= iVar5) * iVar13;
      auVar11 = auVar12;
      auVar18 = auVar19;
    } while (uVar7 != (uVar8 & 0xfffffffffffffff8));
    auVar10._0_4_ =
         ((int)auVar12._0_4_ < (int)auVar19._0_4_) * auVar19._0_4_ |
         ((int)auVar12._0_4_ >= (int)auVar19._0_4_) * auVar12._0_4_;
    uVar14 = ((int)auVar12._4_4_ < (int)auVar19._4_4_) * auVar19._4_4_ |
             ((int)auVar12._4_4_ >= (int)auVar19._4_4_) * auVar12._4_4_;
    uVar15 = ((int)auVar12._8_4_ < (int)auVar19._8_4_) * auVar19._8_4_ |
             ((int)auVar12._8_4_ >= (int)auVar19._8_4_) * auVar12._8_4_;
    uVar16 = ((int)auVar12._12_4_ < (int)auVar19._12_4_) * auVar19._12_4_ |
             ((int)auVar12._12_4_ >= (int)auVar19._12_4_) * auVar12._12_4_;
    auVar10._0_4_ =
         ((int)auVar10._0_4_ < (int)uVar15) * uVar15 |
         ((int)auVar10._0_4_ >= (int)uVar15) * auVar10._0_4_;
    uVar14 = ((int)uVar14 < (int)uVar16) * uVar16 | ((int)uVar14 >= (int)uVar16) * uVar14;
    auVar10._0_4_ =
         ((int)auVar10._0_4_ < (int)uVar14) * uVar14 |
         ((int)auVar10._0_4_ >= (int)uVar14) * auVar10._0_4_;
  }
  for (; param_1 != param_2; param_1 = (undefined1 (*) [32])(*param_1 + 4)) {
    uVar14 = *(uint *)*param_1;
    if ((int)*(uint *)*param_1 <= (int)auVar10._0_4_) {
      uVar14 = auVar10._0_4_;
    }
    auVar10._0_4_ = uVar14;
  }
  return;
}



