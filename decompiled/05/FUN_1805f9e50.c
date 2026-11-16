// FUN_1805f9e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f9e50 */

ulonglong thunk_FUN_1805f8430(ulonglong *param_1,undefined1 (*param_2) [16])

{
  undefined1 (*pauVar1) [16];
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [16];
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar16 [16];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 in_ZMM2 [64];
  
  uVar4 = (longlong)param_2 - (longlong)param_1;
  auVar17._16_48_ = in_ZMM2._16_48_;
  if (uVar4 < 0x20) {
    if (uVar4 < 0x10) goto LAB_1805f858a;
  }
  else if ((DAT_1808d5f64 & 0x20) != 0) {
    uVar4 = FUN_1805f9570(param_1,param_2);
    return uVar4;
  }
  if ((DAT_1808d5f64 & 4) != 0) {
    pauVar6 = (undefined1 (*) [16])(param_1 + 2);
    auVar16._0_8_ = *param_1 + 0x8000000000000000;
    auVar16._8_8_ = param_1[1] + 0x8000000000000000;
    while( true ) {
      lVar10 = auVar16._0_8_;
      lVar7 = auVar16._8_8_;
      if (pauVar6 == (undefined1 (*) [16])((uVar4 & 0xfffffffffffffff0) + (longlong)param_1)) break;
      puVar2 = *pauVar6;
      puVar3 = *pauVar6;
      pauVar6 = pauVar6 + 1;
      auVar12._0_8_ = *(longlong *)puVar2 + -0x8000000000000000;
      auVar12._8_8_ = *(longlong *)(puVar3 + 8) + -0x8000000000000000;
      in_ZMM1._0_16_ = auVar12;
      auVar11._0_8_ = -(ulonglong)(auVar12._0_8_ < lVar10);
      auVar11._8_8_ = -(ulonglong)(auVar12._8_8_ < lVar7);
      auVar16 = pblendvb(auVar16,auVar12,auVar11);
    }
    if (lVar10 <= lVar7) {
      lVar7 = lVar10;
    }
    uVar5 = 0;
    uVar4 = lVar7 + 0x8000000000000000;
    uVar8 = (ulonglong)((longlong)param_2 + (7 - (longlong)pauVar6)) >> 3;
    if (param_2 < pauVar6) {
      uVar8 = 0;
    }
    if (((uVar8 != 0) && (3 < uVar8)) && (5 < DAT_1808d5f60)) {
      auVar9._8_8_ = uVar4;
      auVar9._0_8_ = uVar4;
      auVar14._16_48_ = in_ZMM1._16_48_;
      auVar14._0_16_ = auVar9;
      auVar17._0_16_ = auVar9;
      do {
        uVar5 = uVar5 + 4;
        auVar16 = vpminuq_avx512vl(auVar14._0_16_,*pauVar6);
        auVar14 = ZEXT1664(auVar16);
        pauVar1 = pauVar6 + 1;
        pauVar6 = pauVar6 + 2;
        auVar9 = vpminuq_avx512vl(auVar17._0_16_,*pauVar1);
        auVar17 = ZEXT1664(auVar9);
      } while (uVar5 != (uVar8 & 0xfffffffffffffffc));
      auVar16 = vpminuq_avx512vl(auVar16,auVar9);
      auVar16 = vpminuq_avx512vl(auVar16,auVar16 >> 0x40);
      uVar4 = auVar16._0_8_;
    }
    if (pauVar6 == param_2) {
      return uVar4;
    }
    do {
      uVar5 = *(ulonglong *)*pauVar6;
      if (uVar4 <= *(ulonglong *)*pauVar6) {
        uVar5 = uVar4;
      }
      pauVar6 = (undefined1 (*) [16])(*pauVar6 + 8);
      uVar4 = uVar5;
    } while (pauVar6 != param_2);
    return uVar5;
  }
LAB_1805f858a:
  uVar4 = *param_1;
  pauVar6 = (undefined1 (*) [16])(param_1 + 1);
  uVar5 = 0;
  uVar8 = (ulonglong)((longlong)param_2 + (7 - (longlong)pauVar6)) >> 3;
  if (param_2 < pauVar6) {
    uVar8 = 0;
  }
  if (((uVar8 != 0) && (3 < uVar8)) && (5 < DAT_1808d5f60)) {
    auVar15._16_48_ = in_ZMM1._16_48_;
    auVar13._8_8_ = uVar4;
    auVar13._0_8_ = uVar4;
    auVar15._0_16_ = auVar13;
    auVar18._16_48_ = auVar17._16_48_;
    auVar18._0_16_ = auVar13;
    do {
      uVar5 = uVar5 + 4;
      auVar16 = vpminuq_avx512vl(auVar15._0_16_,*pauVar6);
      auVar15 = ZEXT1664(auVar16);
      pauVar1 = pauVar6 + 1;
      pauVar6 = pauVar6 + 2;
      auVar9 = vpminuq_avx512vl(auVar18._0_16_,*pauVar1);
      auVar18 = ZEXT1664(auVar9);
    } while (uVar5 != (uVar8 & 0xfffffffffffffffc));
    auVar16 = vpminuq_avx512vl(auVar16,auVar9);
    auVar16 = vpminuq_avx512vl(auVar16,auVar16 >> 0x40);
    uVar4 = auVar16._0_8_;
  }
  for (; pauVar6 != param_2; pauVar6 = (undefined1 (*) [16])(*pauVar6 + 8)) {
    uVar5 = *(ulonglong *)*pauVar6;
    if (uVar4 <= *(ulonglong *)*pauVar6) {
      uVar5 = uVar4;
    }
    uVar4 = uVar5;
  }
  return uVar4;
}



