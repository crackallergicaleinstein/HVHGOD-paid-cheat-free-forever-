// FUN_1805f90b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f90b0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [32] FUN_1805f90b0(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [32];
  uint uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  ulonglong uVar6;
  uint uVar7;
  undefined1 (*pauVar8) [32];
  undefined1 (*pauVar9) [32];
  undefined1 (*pauVar10) [32];
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  undefined1 auVar13 [64];
  undefined1 in_ZMM7 [64];
  undefined1 auVar14 [64];
  undefined1 auVar15 [64];
  
  auVar14._16_48_ = in_ZMM7._16_48_;
  auVar14._0_16_ = ZEXT816(0xff800000);
  auVar11 = *param_1;
  uVar6 = (longlong)param_2 - (longlong)param_1 & 0xffffffffffffffe0;
  if (0x2000000000 < uVar6) {
    uVar6 = 0x2000000000;
  }
  auVar13 = ZEXT1664((undefined1  [16])0x0);
  auVar15 = ZEXT1664((undefined1  [16])0x0);
  pauVar10 = (undefined1 (*) [32])(*param_1 + uVar6);
  pauVar8 = param_1;
  while( true ) {
    pauVar9 = pauVar8;
    auVar1 = auVar11;
    while( true ) {
      pauVar9 = pauVar9 + 1;
      auVar5._0_4_ = auVar15._0_4_ + 1;
      auVar5._4_4_ = auVar15._4_4_ + 1;
      auVar5._8_4_ = auVar15._8_4_ + 1;
      auVar5._12_4_ = auVar15._12_4_ + 1;
      auVar5._16_4_ = auVar15._16_4_ + 1;
      auVar5._20_4_ = auVar15._20_4_ + 1;
      auVar5._24_4_ = auVar15._24_4_ + 1;
      auVar5._28_4_ = auVar15._28_4_ + 1;
      auVar15 = ZEXT3264(auVar5);
      auVar12 = auVar13._0_32_;
      if (pauVar9 == pauVar10) break;
      auVar1 = *pauVar9;
      auVar3 = vcmpps_avx(auVar1,auVar11,0x1e);
      auVar5 = vpblendvb_avx2(auVar12,auVar5,auVar3);
      auVar13 = ZEXT3264(auVar5);
      auVar11 = vmaxps_avx(auVar1,auVar11);
    }
    uVar6 = (ulonglong)((uint)((longlong)param_2 - (longlong)pauVar9) & 0x1c);
    if ((((longlong)param_2 - (longlong)pauVar9 & 0xffffffffffffffe0U) == 0) && (uVar6 != 0)) {
      auVar3 = *(undefined1 (*) [32])(&DAT_18068bed0 + -uVar6);
      auVar4 = vmaskmovps_avx(auVar3,*pauVar9);
      auVar1 = vblendvps_avx(auVar1,auVar4,auVar3);
      auVar4 = vcmpps_avx(auVar1,auVar11,0x1e);
      auVar3 = vpand_avx2(auVar4,auVar3);
      auVar12 = vpblendvb_avx2(auVar12,auVar5,auVar3);
      auVar11 = vmaxps_avx(auVar1,auVar11);
      pauVar9 = (undefined1 (*) [32])(*pauVar9 + uVar6);
    }
    auVar1 = vshufps_avx(auVar11,auVar11,0xb1);
    auVar1 = vmaxps_avx(auVar1,auVar11);
    auVar5 = vshufps_avx(auVar1,auVar1,0x4e);
    auVar1 = vmaxps_avx(auVar5,auVar1);
    auVar5 = vperm2f128_avx(auVar1,ZEXT832(0),1);
    auVar1 = vmaxps_avx(auVar5,auVar1);
    if (auVar14._0_4_ < auVar1._0_4_) {
      auVar11 = vcmpps_avx(auVar1,auVar11,0);
      auVar5 = vpblendvb_avx2(_DAT_18068c0a0,auVar12,auVar11);
      auVar3 = vpermq_avx2(auVar5,0x4e);
      auVar14 = ZEXT1664(auVar1._0_16_);
      auVar1 = vpminud_avx2(auVar3,auVar5);
      auVar3 = vpshufd_avx2(auVar1,0x4e);
      auVar1 = vpminud_avx2(auVar3,auVar1);
      auVar3 = vpshufd_avx2(auVar1,0xb1);
      auVar1 = vpminud_avx2(auVar3,auVar1);
      auVar1 = vpcmpeqd_avx2(auVar1,auVar5);
      uVar7 = ((uint)(SUB321(auVar1 >> 7,0) & 1) | (uint)(SUB321(auVar1 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar1 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar1 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar1 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar1 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar1 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar1 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar1 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar1 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar1 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar1 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar1 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar1 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar1 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar1 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar1 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar1 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar1 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar1 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar1 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar1 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar1 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar1 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar1 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar1 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar1 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar1 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar1 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar1 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar1 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar1[0x1f] >> 7) << 0x1f) &
              ((uint)(SUB321(auVar11 >> 7,0) & 1) | (uint)(SUB321(auVar11 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar11 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar11 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar11 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar11 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar11 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar11 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar11 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar11 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar11 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar11 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar11 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar11 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar11 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar11 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar11 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar11 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar11 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar11 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar11 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar11 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar11 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar11 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar11 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar11 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar11 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar11 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar11 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar11 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar11 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar11[0x1f] >> 7) << 0x1f);
      uVar2 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      auVar11 = vpermd_avx2(ZEXT432(uVar2 >> 2),auVar12);
      param_1 = (undefined1 (*) [32])(pauVar8[auVar11._0_4_] + uVar2);
    }
    uVar6 = (longlong)param_2 - (longlong)pauVar9 & 0xffffffffffffffe0;
    if (uVar6 == 0) break;
    auVar11 = *pauVar9;
    auVar13 = ZEXT3264(SUB6432(ZEXT1664((undefined1  [16])0x0),0));
    if (0x2000000000 < uVar6) {
      uVar6 = 0x2000000000;
    }
    pauVar10 = (undefined1 (*) [32])(*pauVar10 + uVar6);
    pauVar8 = pauVar9;
  }
  auVar13 = ZEXT1664(auVar14._0_16_);
  for (; pauVar9 != param_2; pauVar9 = (undefined1 (*) [32])(*pauVar9 + 4)) {
    if (auVar13._0_4_ < *(float *)*pauVar9) {
      auVar13._0_16_ = ZEXT416((uint)*(float *)*pauVar9);
      param_1 = pauVar9;
    }
  }
  return param_1;
}



