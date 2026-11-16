// FUN_1805f9bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f9bf0 */

longlong thunk_FUN_1805f77d0(undefined1 (*param_1) [32],undefined1 (*param_2) [32],byte param_3)

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 (*pauVar21) [32];
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 in_ZMM1 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [32];
  
  uVar23 = (longlong)param_2 - (longlong)param_1;
  lVar24 = 0;
  uVar25 = uVar23 & 0xffffffffffffffe0;
  if ((uVar25 == 0) || ((DAT_1808d5f64 & 0x20) == 0)) {
    uVar23 = uVar23 & 0xfffffffffffffff0;
    if ((uVar23 != 0) && ((DAT_1808d5f64 & 4) != 0)) {
      auVar29 = ZEXT816(0);
      auVar28 = pshufb(ZEXT116(param_3),auVar29);
      pauVar21 = param_1;
      do {
        auVar27._16_48_ = in_ZMM1._16_48_;
        auVar27._0_16_ = auVar29;
        uVar25 = 0xff0;
        if (uVar23 < 0xff0) {
          uVar25 = uVar23;
        }
        pauVar21 = (undefined1 (*) [32])(*pauVar21 + uVar25);
        uVar23 = uVar23 - uVar25;
        do {
          puVar3 = *param_1;
          puVar4 = *param_1;
          puVar5 = *param_1;
          puVar6 = *param_1;
          puVar7 = *param_1;
          puVar8 = *param_1;
          puVar9 = *param_1;
          puVar10 = *param_1;
          puVar11 = *param_1;
          puVar12 = *param_1;
          puVar13 = *param_1;
          puVar14 = *param_1;
          puVar15 = *param_1;
          puVar16 = *param_1;
          puVar17 = *param_1;
          puVar18 = *param_1;
          param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
          auVar26[0] = auVar27[0] + (*puVar3 == auVar28[0]);
          auVar26[1] = auVar27[1] + (puVar4[1] == auVar28[1]);
          auVar26[2] = auVar27[2] + (puVar5[2] == auVar28[2]);
          auVar26[3] = auVar27[3] + (puVar6[3] == auVar28[3]);
          auVar26[4] = auVar27[4] + (puVar7[4] == auVar28[4]);
          auVar26[5] = auVar27[5] + (puVar8[5] == auVar28[5]);
          auVar26[6] = auVar27[6] + (puVar9[6] == auVar28[6]);
          auVar26[7] = auVar27[7] + (puVar10[7] == auVar28[7]);
          auVar26[8] = auVar27[8] + (puVar11[8] == auVar28[8]);
          auVar26[9] = auVar27[9] + (puVar12[9] == auVar28[9]);
          auVar26[10] = auVar27[10] + (puVar13[10] == auVar28[10]);
          auVar26[0xb] = auVar27[0xb] + (puVar14[0xb] == auVar28[0xb]);
          auVar26[0xc] = auVar27[0xc] + (puVar15[0xc] == auVar28[0xc]);
          auVar26[0xd] = auVar27[0xd] + (puVar16[0xd] == auVar28[0xd]);
          auVar26[0xe] = auVar27[0xe] + (puVar17[0xe] == auVar28[0xe]);
          auVar26[0xf] = auVar27[0xf] + (puVar18[0xf] == auVar28[0xf]);
          auVar27._0_16_ = auVar26;
        } while (param_1 != pauVar21);
        in_ZMM1._0_16_ = psadbw(auVar26,auVar29);
        in_ZMM1._16_48_ = auVar27._16_48_;
        lVar24 = lVar24 + in_ZMM1._0_8_ + in_ZMM1._8_8_;
      } while (uVar23 != 0);
    }
  }
  else {
    auVar28 = vpshufb_avx(ZEXT416((uint)(int)(char)param_3),(undefined1  [16])0x0);
    auVar30._16_16_ = auVar28;
    auVar30._0_16_ = auVar28;
    pauVar21 = param_1;
    do {
      uVar19 = 0x1fe0;
      if (uVar25 < 0x1fe0) {
        uVar19 = uVar25;
      }
      pauVar21 = (undefined1 (*) [32])(*pauVar21 + uVar19);
      uVar25 = uVar25 - uVar19;
      auVar2 = SUB6432(ZEXT1664((undefined1  [16])0x0),0);
      do {
        auVar1 = vpcmpeqb_avx2(auVar30,*param_1);
        param_1 = param_1 + 1;
        auVar2 = vpsubb_avx2(auVar2,auVar1);
      } while (param_1 != pauVar21);
      auVar2 = vpsadbw_avx2(SUB6432(ZEXT1664((undefined1  [16])0x0),0),auVar2);
      auVar28 = vpaddq_avx(auVar2._16_16_,auVar2._0_16_);
      lVar24 = lVar24 + auVar28._0_8_ + auVar28._8_8_;
    } while (uVar25 != 0);
    uVar22 = (uint)uVar23 & 0x1c;
    if ((uVar23 & 0x1c) != 0) {
      auVar2 = vpmaskmovd_avx2(*(undefined1 (*) [32])(&DAT_18068bed0 + -(ulonglong)uVar22),*param_1)
      ;
      auVar30 = vpcmpeqb_avx2(auVar2,auVar30);
      auVar30 = vpand_avx2(auVar30,*(undefined1 (*) [32])(&DAT_18068bed0 + -(ulonglong)uVar22));
      lVar24 = lVar24 + (ulonglong)
                        (uint)POPCOUNT((uint)(SUB321(auVar30 >> 7,0) & 1) |
                                       (uint)(SUB321(auVar30 >> 0xf,0) & 1) << 1 |
                                       (uint)(SUB321(auVar30 >> 0x17,0) & 1) << 2 |
                                       (uint)(SUB321(auVar30 >> 0x1f,0) & 1) << 3 |
                                       (uint)(SUB321(auVar30 >> 0x27,0) & 1) << 4 |
                                       (uint)(SUB321(auVar30 >> 0x2f,0) & 1) << 5 |
                                       (uint)(SUB321(auVar30 >> 0x37,0) & 1) << 6 |
                                       (uint)(SUB321(auVar30 >> 0x3f,0) & 1) << 7 |
                                       (uint)(SUB321(auVar30 >> 0x47,0) & 1) << 8 |
                                       (uint)(SUB321(auVar30 >> 0x4f,0) & 1) << 9 |
                                       (uint)(SUB321(auVar30 >> 0x57,0) & 1) << 10 |
                                       (uint)(SUB321(auVar30 >> 0x5f,0) & 1) << 0xb |
                                       (uint)(SUB321(auVar30 >> 0x67,0) & 1) << 0xc |
                                       (uint)(SUB321(auVar30 >> 0x6f,0) & 1) << 0xd |
                                       (uint)(SUB321(auVar30 >> 0x77,0) & 1) << 0xe |
                                       (uint)SUB321(auVar30 >> 0x7f,0) << 0xf |
                                       (uint)(SUB321(auVar30 >> 0x87,0) & 1) << 0x10 |
                                       (uint)(SUB321(auVar30 >> 0x8f,0) & 1) << 0x11 |
                                       (uint)(SUB321(auVar30 >> 0x97,0) & 1) << 0x12 |
                                       (uint)(SUB321(auVar30 >> 0x9f,0) & 1) << 0x13 |
                                       (uint)(SUB321(auVar30 >> 0xa7,0) & 1) << 0x14 |
                                       (uint)(SUB321(auVar30 >> 0xaf,0) & 1) << 0x15 |
                                       (uint)(SUB321(auVar30 >> 0xb7,0) & 1) << 0x16 |
                                       (uint)SUB321(auVar30 >> 0xbf,0) << 0x17 |
                                       (uint)(SUB321(auVar30 >> 199,0) & 1) << 0x18 |
                                       (uint)(SUB321(auVar30 >> 0xcf,0) & 1) << 0x19 |
                                       (uint)(SUB321(auVar30 >> 0xd7,0) & 1) << 0x1a |
                                       (uint)(SUB321(auVar30 >> 0xdf,0) & 1) << 0x1b |
                                       (uint)(SUB321(auVar30 >> 0xe7,0) & 1) << 0x1c |
                                       (uint)(SUB321(auVar30 >> 0xef,0) & 1) << 0x1d |
                                       (uint)(SUB321(auVar30 >> 0xf7,0) & 1) << 0x1e |
                                       (uint)(byte)(auVar30[0x1f] >> 7) << 0x1f);
      param_1 = (undefined1 (*) [32])(*param_1 + uVar22);
    }
  }
  for (; param_1 != param_2; param_1 = (undefined1 (*) [32])(*param_1 + 1)) {
    lVar20 = lVar24 + 1;
    if ((*param_1)[0] != param_3) {
      lVar20 = lVar24;
    }
    lVar24 = lVar20;
  }
  return lVar24;
}



