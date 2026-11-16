// FUN_1805f9ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f9ee0 */

undefined1 (*) [32]
FUN_1805f9ee0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 *puVar2;
  uint uVar3;
  undefined1 (*pauVar4) [32];
  undefined1 (*pauVar5) [32];
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [32];
  undefined1 auVar9 [16];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  pauVar5 = param_1;
  if (((DAT_1808d5f64 & 0x20) == 0) || (uVar6 < 0x20)) {
    if (((DAT_1808d5f64 & 4) != 0) && (0xf < uVar6)) {
      puVar2 = *param_1;
      pauVar4 = param_2;
      do {
        auVar9 = *(undefined1 (*) [16])*param_1;
        param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
        auVar7._0_8_ = -(ulonglong)(auVar9._0_8_ == param_3);
        auVar7._8_8_ = -(ulonglong)(auVar9._8_8_ == param_3);
        uVar3 = movmskpd((int)pauVar4,auVar7);
        pauVar4 = (undefined1 (*) [32])(ulonglong)uVar3;
        auVar9 = pshufb(auVar9,*(undefined1 (*) [16])(&DAT_18068bdd0 + (longlong)pauVar4 * 0x10));
        *(undefined1 (*) [16])*pauVar5 = auVar9;
        pauVar5 = (undefined1 (*) [32])(*pauVar5 + (byte)pauVar4[0xc0345f0][0x10]);
      } while (param_1 != (undefined1 (*) [32])(puVar2 + (uVar6 & 0xfffffffffffffff0)));
    }
  }
  else {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = param_3;
    auVar9 = vpunpcklqdq_avx(auVar9,auVar9);
    puVar2 = *param_1;
    do {
      auVar8._0_8_ = -(ulonglong)(auVar9._0_8_ == *(longlong *)*param_1);
      auVar8._8_8_ = -(ulonglong)(auVar9._8_8_ == *(longlong *)(*param_1 + 8));
      auVar8._16_8_ = -(ulonglong)(auVar9._0_8_ == SUB248(*(undefined1 (*) [24])*param_1,0x10));
      auVar8._24_8_ = -(ulonglong)(auVar9._8_8_ == *(longlong *)(*param_1 + 0x18));
      uVar3 = vmovmskpd_avx(auVar8);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = *(ulonglong *)(&DAT_18068be20 + (ulonglong)uVar3 * 8);
      auVar8 = vpmovzxbd_avx2(auVar1);
      auVar8 = vpermd_avx2(auVar8,*param_1);
      *pauVar5 = auVar8;
      param_1 = param_1 + 1;
      pauVar5 = (undefined1 (*) [32])(*pauVar5 + (byte)(&DAT_18068bea0)[uVar3]);
    } while (param_1 != (undefined1 (*) [32])(puVar2 + (uVar6 & 0xffffffffffffffe0)));
  }
  for (; param_1 != param_2; param_1 = (undefined1 (*) [32])(*param_1 + 8)) {
    if (*(ulonglong *)*param_1 != param_3) {
      *(ulonglong *)*pauVar5 = *(ulonglong *)*param_1;
      pauVar5 = (undefined1 (*) [32])(*pauVar5 + 8);
    }
  }
  return pauVar5;
}



