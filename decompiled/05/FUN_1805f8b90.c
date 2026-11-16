// FUN_1805f8b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f8b90 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [32]
FUN_1805f8b90(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  undefined1 auVar1 [32];
  uint uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 (*pauVar7) [32];
  ulonglong uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  char cVar12;
  byte bVar13;
  undefined1 auVar14 [32];
  undefined1 auVar15 [32];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [32];
  undefined1 auVar19 [32];
  
  uVar8 = (longlong)param_2 - (longlong)param_1 & 0xffffffffffffffe0;
  cVar12 = -0x80;
  if (0x2000 < uVar8) {
    uVar8 = 0x2000;
  }
  auVar16 = ZEXT1664((undefined1  [16])0x0);
  auVar17 = ZEXT1664((undefined1  [16])0x0);
  pauVar10 = (undefined1 (*) [32])(*param_1 + uVar8);
  auVar1 = *(undefined1 (*) [32])(&DAT_18068bf20 + (ulonglong)param_3 * 0x20);
  pauVar11 = param_1;
  while( true ) {
    auVar14 = vpsubb_avx2(*pauVar11,auVar1);
    pauVar7 = pauVar11;
    auVar5 = auVar14;
    while( true ) {
      pauVar7 = pauVar7 + 1;
      auVar3[0] = auVar17[0] + '\x01';
      auVar3[1] = auVar17[1] + '\x01';
      auVar3[2] = auVar17[2] + '\x01';
      auVar3[3] = auVar17[3] + '\x01';
      auVar3[4] = auVar17[4] + '\x01';
      auVar3[5] = auVar17[5] + '\x01';
      auVar3[6] = auVar17[6] + '\x01';
      auVar3[7] = auVar17[7] + '\x01';
      auVar3[8] = auVar17[8] + '\x01';
      auVar3[9] = auVar17[9] + '\x01';
      auVar3[10] = auVar17[10] + '\x01';
      auVar3[0xb] = auVar17[0xb] + '\x01';
      auVar3[0xc] = auVar17[0xc] + '\x01';
      auVar3[0xd] = auVar17[0xd] + '\x01';
      auVar3[0xe] = auVar17[0xe] + '\x01';
      auVar3[0xf] = auVar17[0xf] + '\x01';
      auVar3[0x10] = auVar17[0x10] + '\x01';
      auVar3[0x11] = auVar17[0x11] + '\x01';
      auVar3[0x12] = auVar17[0x12] + '\x01';
      auVar3[0x13] = auVar17[0x13] + '\x01';
      auVar3[0x14] = auVar17[0x14] + '\x01';
      auVar3[0x15] = auVar17[0x15] + '\x01';
      auVar3[0x16] = auVar17[0x16] + '\x01';
      auVar3[0x17] = auVar17[0x17] + '\x01';
      auVar3[0x18] = auVar17[0x18] + '\x01';
      auVar3[0x19] = auVar17[0x19] + '\x01';
      auVar3[0x1a] = auVar17[0x1a] + '\x01';
      auVar3[0x1b] = auVar17[0x1b] + '\x01';
      auVar3[0x1c] = auVar17[0x1c] + '\x01';
      auVar3[0x1d] = auVar17[0x1d] + '\x01';
      auVar3[0x1e] = auVar17[0x1e] + '\x01';
      auVar3[0x1f] = auVar17[0x1f] + '\x01';
      auVar17 = ZEXT3264(auVar3);
      auVar15 = auVar16._0_32_;
      if (pauVar7 == pauVar10) break;
      auVar5 = vpsubb_avx2(*pauVar7,auVar1);
      auVar18 = vpcmpgtb_avx2(auVar5,auVar14);
      auVar3 = vpblendvb_avx2(auVar15,auVar3,auVar18);
      auVar16 = ZEXT3264(auVar3);
      auVar14 = vpmaxsb_avx2(auVar5,auVar14);
    }
    uVar8 = (ulonglong)((uint)((longlong)param_2 - (longlong)pauVar7) & 0x1c);
    if ((((longlong)param_2 - (longlong)pauVar7 & 0xffffffffffffffe0U) == 0) && (uVar8 != 0)) {
      auVar18 = *(undefined1 (*) [32])(&DAT_18068bed0 + -uVar8);
      auVar19 = vpmaskmovd_avx2(auVar18,*pauVar7);
      auVar19 = vpsubb_avx2(auVar19,auVar1);
      auVar19 = vpblendvb_avx2(auVar5,auVar19,auVar18);
      auVar5 = vpcmpgtb_avx2(auVar19,auVar14);
      auVar5 = vpand_avx2(auVar5,auVar18);
      auVar15 = vpblendvb_avx2(auVar15,auVar3,auVar5);
      auVar14 = vpmaxsb_avx2(auVar14,auVar19);
      pauVar7 = (undefined1 (*) [32])(*pauVar7 + uVar8);
    }
    auVar18._16_16_ = _DAT_18068c000;
    auVar18._0_16_ = _DAT_18068c000;
    auVar19._16_16_ = _DAT_18068c010;
    auVar19._0_16_ = _DAT_18068c010;
    auVar5 = vpermq_avx2(auVar14,0x4e);
    auVar5 = vpmaxsb_avx2(auVar5,auVar14);
    auVar3 = vpshufd_avx2(auVar5,0x4e);
    auVar5 = vpmaxsb_avx2(auVar3,auVar5);
    auVar3 = vpshufd_avx2(auVar5,0xb1);
    auVar5 = vpmaxsb_avx2(auVar3,auVar5);
    auVar3 = vpshufb_avx2(auVar5,auVar18);
    auVar5 = vpmaxsb_avx2(auVar3,auVar5);
    auVar3 = vpshufb_avx2(auVar5,auVar19);
    auVar5 = vpmaxsb_avx2(auVar3,auVar5);
    if (cVar12 < auVar5[0]) {
      auVar3 = vpcmpeqb_avx2(auVar5,auVar14);
      auVar14 = vpblendvb_avx2(_DAT_18068c0a0,auVar15,auVar3);
      auVar6 = vpermq_avx2(auVar14,0x4e);
      auVar6 = vpminub_avx2(auVar6,auVar14);
      auVar4 = vpshufd_avx2(auVar6,0x4e);
      auVar6 = vpminub_avx2(auVar4,auVar6);
      auVar4 = vpshufd_avx2(auVar6,0xb1);
      auVar6 = vpminub_avx2(auVar4,auVar6);
      auVar18 = vpshufb_avx2(auVar6,auVar18);
      auVar18 = vpminub_avx2(auVar18,auVar6);
      auVar19 = vpshufb_avx2(auVar18,auVar19);
      auVar18 = vpminub_avx2(auVar19,auVar18);
      auVar14 = vpcmpeqb_avx2(auVar18,auVar14);
      uVar9 = ((uint)(SUB321(auVar14 >> 7,0) & 1) | (uint)(SUB321(auVar14 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar14 >> 0x17,0) & 1) << 2 |
               (uint)(SUB321(auVar14 >> 0x1f,0) & 1) << 3 |
               (uint)(SUB321(auVar14 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar14 >> 0x2f,0) & 1) << 5 |
               (uint)(SUB321(auVar14 >> 0x37,0) & 1) << 6 |
               (uint)(SUB321(auVar14 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar14 >> 0x47,0) & 1) << 8 |
               (uint)(SUB321(auVar14 >> 0x4f,0) & 1) << 9 |
               (uint)(SUB321(auVar14 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar14 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar14 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar14 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar14 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar14 >> 0x7f,0) << 0xf
               | (uint)(SUB321(auVar14 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar14 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar14 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar14 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar14 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar14 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar14 >> 0xb7,0) & 1) << 0x16 |
               (uint)SUB321(auVar14 >> 0xbf,0) << 0x17 |
               (uint)(SUB321(auVar14 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar14 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar14 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar14 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar14 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar14 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar14 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar14[0x1f] >> 7) << 0x1f) &
              ((uint)(SUB321(auVar3 >> 7,0) & 1) | (uint)(SUB321(auVar3 >> 0xf,0) & 1) << 1 |
               (uint)(SUB321(auVar3 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar3 >> 0x1f,0) & 1) << 3
               | (uint)(SUB321(auVar3 >> 0x27,0) & 1) << 4 |
               (uint)(SUB321(auVar3 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar3 >> 0x37,0) & 1) << 6
               | (uint)(SUB321(auVar3 >> 0x3f,0) & 1) << 7 |
               (uint)(SUB321(auVar3 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar3 >> 0x4f,0) & 1) << 9
               | (uint)(SUB321(auVar3 >> 0x57,0) & 1) << 10 |
               (uint)(SUB321(auVar3 >> 0x5f,0) & 1) << 0xb |
               (uint)(SUB321(auVar3 >> 0x67,0) & 1) << 0xc |
               (uint)(SUB321(auVar3 >> 0x6f,0) & 1) << 0xd |
               (uint)(SUB321(auVar3 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar3 >> 0x7f,0) << 0xf |
               (uint)(SUB321(auVar3 >> 0x87,0) & 1) << 0x10 |
               (uint)(SUB321(auVar3 >> 0x8f,0) & 1) << 0x11 |
               (uint)(SUB321(auVar3 >> 0x97,0) & 1) << 0x12 |
               (uint)(SUB321(auVar3 >> 0x9f,0) & 1) << 0x13 |
               (uint)(SUB321(auVar3 >> 0xa7,0) & 1) << 0x14 |
               (uint)(SUB321(auVar3 >> 0xaf,0) & 1) << 0x15 |
               (uint)(SUB321(auVar3 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar3 >> 0xbf,0) << 0x17
               | (uint)(SUB321(auVar3 >> 199,0) & 1) << 0x18 |
               (uint)(SUB321(auVar3 >> 0xcf,0) & 1) << 0x19 |
               (uint)(SUB321(auVar3 >> 0xd7,0) & 1) << 0x1a |
               (uint)(SUB321(auVar3 >> 0xdf,0) & 1) << 0x1b |
               (uint)(SUB321(auVar3 >> 0xe7,0) & 1) << 0x1c |
               (uint)(SUB321(auVar3 >> 0xef,0) & 1) << 0x1d |
               (uint)(SUB321(auVar3 >> 0xf7,0) & 1) << 0x1e |
              (uint)(byte)(auVar3[0x1f] >> 7) << 0x1f);
      uVar2 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
        }
      }
      auVar14 = vpermd_avx2(ZEXT432(uVar2 >> 2),auVar15);
      param_1 = (undefined1 (*) [32])
                (pauVar11[auVar14._0_4_ >> (sbyte)((uVar2 & 3) << 3) & 0xff] + uVar2);
      cVar12 = auVar5[0];
    }
    uVar8 = (longlong)param_2 - (longlong)pauVar7 & 0xffffffffffffffe0;
    if (uVar8 == 0) break;
    auVar16 = ZEXT3264(SUB6432(ZEXT1664((undefined1  [16])0x0),0));
    if (0x2000 < uVar8) {
      uVar8 = 0x2000;
    }
    pauVar10 = (undefined1 (*) [32])(*pauVar10 + uVar8);
    pauVar11 = pauVar7;
  }
  if (param_3 == 0) {
    bVar13 = cVar12 + 0x80;
    for (; pauVar7 != param_2; pauVar7 = (undefined1 (*) [32])(*pauVar7 + 1)) {
      if (bVar13 < (byte)(*pauVar7)[0]) {
        bVar13 = (*pauVar7)[0];
        param_1 = pauVar7;
      }
    }
  }
  else {
    for (; pauVar7 != param_2; pauVar7 = (undefined1 (*) [32])(*pauVar7 + 1)) {
      if (cVar12 < (char)(*pauVar7)[0]) {
        cVar12 = (*pauVar7)[0];
        param_1 = pauVar7;
      }
    }
  }
  return param_1;
}



