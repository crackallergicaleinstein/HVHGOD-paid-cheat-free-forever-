// FUN_1805f8a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f8a20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 (*) [16] FUN_1805f8a20(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  ushort uVar2;
  ulonglong uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  undefined1 (*pauVar6) [16];
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  uint uVar10;
  uint uVar12;
  uint uVar13;
  undefined1 auVar11 [16];
  uint uVar14;
  float fVar15;
  uint uVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  float fVar21;
  uint uVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  undefined1 local_58 [5] [16];
  
  fVar26 = INFINITY;
  auVar11 = *param_1;
  uVar3 = (longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0;
  if (0x1000000000 < uVar3) {
    uVar3 = 0x1000000000;
  }
  local_58[0] = ZEXT816(0);
  iVar27 = 0;
  iVar28 = 0;
  iVar29 = 0;
  iVar30 = 0;
  pauVar5 = (undefined1 (*) [16])(*param_1 + uVar3);
  pauVar4 = param_1;
  pauVar6 = param_1;
  while( true ) {
    while( true ) {
      param_1 = param_1 + 1;
      iVar27 = iVar27 + 1;
      iVar28 = iVar28 + 1;
      iVar29 = iVar29 + 1;
      iVar30 = iVar30 + 1;
      fVar15 = auVar11._0_4_;
      fVar17 = auVar11._4_4_;
      fVar19 = auVar11._8_4_;
      fVar21 = auVar11._12_4_;
      if (param_1 == pauVar5) break;
      auVar9 = *param_1;
      auVar8._4_4_ = -(uint)(auVar9._4_4_ < fVar17);
      auVar8._0_4_ = -(uint)(auVar9._0_4_ < fVar15);
      auVar8._8_4_ = -(uint)(auVar9._8_4_ < fVar19);
      auVar8._12_4_ = -(uint)(auVar9._12_4_ < fVar21);
      auVar11 = minps(auVar9,auVar11);
      auVar1._4_4_ = iVar28;
      auVar1._0_4_ = iVar27;
      auVar1._8_4_ = iVar29;
      auVar1._12_4_ = iVar30;
      local_58[0] = pblendvb(local_58[0],auVar1,auVar8);
    }
    auVar9._4_4_ = fVar15;
    auVar9._0_4_ = fVar17;
    auVar9._8_4_ = fVar21;
    auVar9._12_4_ = fVar19;
    auVar11 = minps(auVar9,auVar11);
    auVar24._8_4_ = auVar11._0_4_;
    auVar24._0_8_ = auVar11._8_8_;
    auVar24._12_4_ = auVar11._4_4_;
    auVar11 = minps(auVar24,auVar11);
    fVar23 = auVar11._0_4_;
    if (fVar23 < fVar26) {
      uVar7 = -(uint)(auVar11._12_4_ == fVar21);
      auVar25._4_4_ = -(uint)(auVar11._4_4_ == fVar17);
      auVar25._0_4_ = -(uint)(fVar23 == fVar15);
      auVar25._8_4_ = -(uint)(auVar11._8_4_ == fVar19);
      auVar25._12_4_ = uVar7;
      auVar11 = pblendvb(_DAT_180689870,local_58[0],auVar25);
      uVar16 = auVar11._0_4_;
      uVar18 = auVar11._4_4_;
      uVar20 = auVar11._8_4_;
      uVar22 = auVar11._12_4_;
      uVar10 = (uVar20 < uVar16) * uVar20 | (uVar20 >= uVar16) * uVar16;
      uVar12 = (uVar22 < uVar18) * uVar22 | (uVar22 >= uVar18) * uVar18;
      uVar13 = (uVar16 < uVar20) * uVar16 | (uVar16 >= uVar20) * uVar20;
      uVar14 = (uVar18 < uVar22) * uVar18 | (uVar18 >= uVar22) * uVar22;
      auVar11._0_4_ = -(uint)(((uVar12 < uVar10) * uVar12 | (uVar12 >= uVar10) * uVar10) == uVar16);
      auVar11._4_4_ = -(uint)(((uVar10 < uVar12) * uVar10 | (uVar10 >= uVar12) * uVar12) == uVar18);
      auVar11._8_4_ = -(uint)(((uVar14 < uVar13) * uVar14 | (uVar14 >= uVar13) * uVar13) == uVar20);
      auVar11._12_4_ = -(uint)(((uVar13 < uVar14) * uVar13 | (uVar13 >= uVar14) * uVar14) == uVar22)
      ;
      uVar2 = ((ushort)(SUB161(auVar11 >> 7,0) & 1) | (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar11 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar11 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar11 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar11 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar11 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar11 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar11 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar11 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar11 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar11 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(auVar11._12_4_ >> 7) & 1) << 0xc |
               (ushort)((byte)(auVar11._12_4_ >> 0xf) & 1) << 0xd |
               (ushort)((byte)(auVar11._12_4_ >> 0x17) & 1) << 0xe |
              (ushort)(byte)(auVar11._12_4_ >> 0x1f) << 0xf) &
              ((ushort)(SUB161(auVar25 >> 7,0) & 1) | (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
               (ushort)((byte)(uVar7 >> 7) & 1) << 0xc | (ushort)((byte)(uVar7 >> 0xf) & 1) << 0xd |
               (ushort)((byte)(uVar7 >> 0x17) & 1) << 0xe | (ushort)(byte)(uVar7 >> 0x1f) << 0xf);
      uVar7 = 0;
      if (uVar2 != 0) {
        for (; (uVar2 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
      pauVar4 = (undefined1 (*) [16])
                (pauVar6[*(uint *)(local_58[0] + (ulonglong)(uVar7 >> 2) * 4)] + uVar7);
      fVar26 = fVar23;
    }
    uVar3 = (longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0;
    if (uVar3 == 0) break;
    auVar11 = *param_1;
    local_58[0] = ZEXT816(0);
    if (0x1000000000 < uVar3) {
      uVar3 = 0x1000000000;
    }
    pauVar5 = (undefined1 (*) [16])(*pauVar5 + uVar3);
    pauVar6 = param_1;
  }
  for (; param_1 != param_2; param_1 = (undefined1 (*) [16])(*param_1 + 4)) {
    if (*(float *)*param_1 < fVar26) {
      pauVar4 = param_1;
      fVar26 = *(float *)*param_1;
    }
  }
  return pauVar4;
}



