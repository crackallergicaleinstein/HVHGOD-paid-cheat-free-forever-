// FUN_1806069d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806069d0 */

undefined1 (*) [16] FUN_1806069d0(undefined1 (*param_1) [16],byte param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined1 (*pauVar6) [16];
  bool bVar7;
  bool bVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  
  pauVar6 = (undefined1 (*) [16])0x0;
  if (param_2 == 0) {
    pcVar4 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar12[0] = -(*pcVar4 == '\0');
    auVar12[1] = -(pcVar4[1] == '\0');
    auVar12[2] = -(pcVar4[2] == '\0');
    auVar12[3] = -(pcVar4[3] == '\0');
    auVar12[4] = -(pcVar4[4] == '\0');
    auVar12[5] = -(pcVar4[5] == '\0');
    auVar12[6] = -(pcVar4[6] == '\0');
    auVar12[7] = -(pcVar4[7] == '\0');
    auVar12[8] = -(pcVar4[8] == '\0');
    auVar12[9] = -(pcVar4[9] == '\0');
    auVar12[10] = -(pcVar4[10] == '\0');
    auVar12[0xb] = -(pcVar4[0xb] == '\0');
    auVar12[0xc] = -(pcVar4[0xc] == '\0');
    auVar12[0xd] = -(pcVar4[0xd] == '\0');
    auVar12[0xe] = -(pcVar4[0xe] == '\0');
    auVar12[0xf] = -(pcVar4[0xf] == '\0');
    uVar2 = (uint)(ushort)((ushort)(SUB161(auVar12 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
                           (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
                           (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
                           (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
                           (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
                           (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
                           (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
                           (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
                           (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
                           (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
                           (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
                           (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
                           (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
                           (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar12[0xf] >> 7) << 0xf) & -1 << ((byte)param_1 & 0xf);
    while (uVar2 == 0) {
      auVar9[0] = -(pcVar4[0x10] == '\0');
      auVar9[1] = -(pcVar4[0x11] == '\0');
      auVar9[2] = -(pcVar4[0x12] == '\0');
      auVar9[3] = -(pcVar4[0x13] == '\0');
      auVar9[4] = -(pcVar4[0x14] == '\0');
      auVar9[5] = -(pcVar4[0x15] == '\0');
      auVar9[6] = -(pcVar4[0x16] == '\0');
      auVar9[7] = -(pcVar4[0x17] == '\0');
      auVar9[8] = -(pcVar4[0x18] == '\0');
      auVar9[9] = -(pcVar4[0x19] == '\0');
      auVar9[10] = -(pcVar4[0x1a] == '\0');
      auVar9[0xb] = -(pcVar4[0x1b] == '\0');
      auVar9[0xc] = -(pcVar4[0x1c] == '\0');
      auVar9[0xd] = -(pcVar4[0x1d] == '\0');
      auVar9[0xe] = -(pcVar4[0x1e] == '\0');
      auVar9[0xf] = -(pcVar4[0x1f] == '\0');
      pcVar4 = pcVar4 + 0x10;
      uVar2 = (uint)(ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar9[0xf] >> 7) << 0xf);
    }
    uVar5 = 0;
    if (uVar2 != 0) {
      for (; (uVar2 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
      }
    }
    return (undefined1 (*) [16])(pcVar4 + uVar5);
  }
  if (DAT_1808d5f60 < 2) {
    pcVar4 = (char *)((ulonglong)param_1 & 0xfffffffffffffff0);
    auVar12 = pshuflw(in_XMM1,ZEXT216(CONCAT11(param_2,param_2)),0);
    uVar5 = -1 << ((byte)param_1 & 0xf);
    auVar10[0] = -(*pcVar4 == '\0');
    auVar10[1] = -(pcVar4[1] == '\0');
    auVar10[2] = -(pcVar4[2] == '\0');
    auVar10[3] = -(pcVar4[3] == '\0');
    auVar10[4] = -(pcVar4[4] == '\0');
    auVar10[5] = -(pcVar4[5] == '\0');
    auVar10[6] = -(pcVar4[6] == '\0');
    auVar10[7] = -(pcVar4[7] == '\0');
    auVar10[8] = -(pcVar4[8] == '\0');
    auVar10[9] = -(pcVar4[9] == '\0');
    auVar10[10] = -(pcVar4[10] == '\0');
    auVar10[0xb] = -(pcVar4[0xb] == '\0');
    auVar10[0xc] = -(pcVar4[0xc] == '\0');
    auVar10[0xd] = -(pcVar4[0xd] == '\0');
    auVar10[0xe] = -(pcVar4[0xe] == '\0');
    auVar10[0xf] = -(pcVar4[0xf] == '\0');
    cVar15 = auVar12[0];
    auVar14[0] = -(*pcVar4 == cVar15);
    cVar16 = auVar12[1];
    auVar14[1] = -(pcVar4[1] == cVar16);
    cVar17 = auVar12[2];
    auVar14[2] = -(pcVar4[2] == cVar17);
    cVar18 = auVar12[3];
    auVar14[3] = -(pcVar4[3] == cVar18);
    auVar14[4] = -(pcVar4[4] == cVar15);
    auVar14[5] = -(pcVar4[5] == cVar16);
    auVar14[6] = -(pcVar4[6] == cVar17);
    auVar14[7] = -(pcVar4[7] == cVar18);
    auVar14[8] = -(pcVar4[8] == cVar15);
    auVar14[9] = -(pcVar4[9] == cVar16);
    auVar14[10] = -(pcVar4[10] == cVar17);
    auVar14[0xb] = -(pcVar4[0xb] == cVar18);
    auVar14[0xc] = -(pcVar4[0xc] == cVar15);
    auVar14[0xd] = -(pcVar4[0xd] == cVar16);
    auVar14[0xe] = -(pcVar4[0xe] == cVar17);
    auVar14[0xf] = -(pcVar4[0xf] == cVar18);
    uVar2 = (ushort)((ushort)(SUB161(auVar14 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar14 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar14 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar14 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar14 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar14 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar14 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar14 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar14 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar14 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar14 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar14 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar14 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar14 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar14 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar14[0xf] >> 7) << 0xf) & uVar5;
    uVar5 = (ushort)((ushort)(SUB161(auVar10 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar10 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar10 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar10 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar10 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar10 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar10 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar10 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar10 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar10 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar10 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar10 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar10 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar10 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar10 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar10[0xf] >> 7) << 0xf) & uVar5;
    while (uVar5 == 0) {
      uVar5 = 0x1f;
      if (uVar2 != 0) {
        for (; uVar2 >> uVar5 == 0; uVar5 = uVar5 - 1) {
        }
      }
      if (uVar2 != 0) {
        pauVar6 = (undefined1 (*) [16])(pcVar4 + uVar5);
      }
      cVar1 = pcVar4[0x10];
      auVar13[0] = -(cVar1 == '\0');
      auVar13[1] = -(pcVar4[0x11] == '\0');
      auVar13[2] = -(pcVar4[0x12] == '\0');
      auVar13[3] = -(pcVar4[0x13] == '\0');
      auVar13[4] = -(pcVar4[0x14] == '\0');
      auVar13[5] = -(pcVar4[0x15] == '\0');
      auVar13[6] = -(pcVar4[0x16] == '\0');
      auVar13[7] = -(pcVar4[0x17] == '\0');
      auVar13[8] = -(pcVar4[0x18] == '\0');
      auVar13[9] = -(pcVar4[0x19] == '\0');
      auVar13[10] = -(pcVar4[0x1a] == '\0');
      auVar13[0xb] = -(pcVar4[0x1b] == '\0');
      auVar13[0xc] = -(pcVar4[0x1c] == '\0');
      auVar13[0xd] = -(pcVar4[0x1d] == '\0');
      auVar13[0xe] = -(pcVar4[0x1e] == '\0');
      auVar13[0xf] = -(pcVar4[0x1f] == '\0');
      auVar11[0] = -(cVar1 == cVar15);
      auVar11[1] = -(pcVar4[0x11] == cVar16);
      auVar11[2] = -(pcVar4[0x12] == cVar17);
      auVar11[3] = -(pcVar4[0x13] == cVar18);
      auVar11[4] = -(pcVar4[0x14] == cVar15);
      auVar11[5] = -(pcVar4[0x15] == cVar16);
      auVar11[6] = -(pcVar4[0x16] == cVar17);
      auVar11[7] = -(pcVar4[0x17] == cVar18);
      auVar11[8] = -(pcVar4[0x18] == cVar15);
      auVar11[9] = -(pcVar4[0x19] == cVar16);
      auVar11[10] = -(pcVar4[0x1a] == cVar17);
      auVar11[0xb] = -(pcVar4[0x1b] == cVar18);
      auVar11[0xc] = -(pcVar4[0x1c] == cVar15);
      auVar11[0xd] = -(pcVar4[0x1d] == cVar16);
      auVar11[0xe] = -(pcVar4[0x1e] == cVar17);
      auVar11[0xf] = -(pcVar4[0x1f] == cVar18);
      uVar2 = (uint)(ushort)((ushort)(SUB161(auVar11 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar11 >> 0xf,0) & 1) << 1 |
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
                             (ushort)(SUB161(auVar11 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar11 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar11 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar11[0xf] >> 7) << 0xf);
      pcVar4 = pcVar4 + 0x10;
      uVar5 = (uint)(ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
                            (ushort)(auVar13[0xf] >> 7) << 0xf);
    }
    uVar2 = (-uVar5 & uVar5) - 1 & uVar2;
    uVar5 = 0x1f;
    if (uVar2 != 0) {
      for (; uVar2 >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    if (uVar2 != 0) {
      pauVar6 = (undefined1 (*) [16])(pcVar4 + uVar5);
    }
  }
  else {
    for (; bVar7 = false, ((ulonglong)param_1 & 0xf) != 0;
        param_1 = (undefined1 (*) [16])(*param_1 + 1)) {
      if ((*param_1)[0] == param_2) {
        pauVar6 = param_1;
      }
      if ((*param_1)[0] == '\0') {
        return pauVar6;
      }
    }
    bVar8 = true;
    while( true ) {
      iVar3 = pcmpistri(ZEXT116(param_2),*param_1,0x40);
      if (bVar7) {
        pauVar6 = (undefined1 (*) [16])(*param_1 + iVar3);
        bVar8 = pauVar6 == (undefined1 (*) [16])0x0;
        pcmpistri(ZEXT116(param_2),*param_1,0x40);
      }
      if (bVar8) break;
      bVar7 = (undefined1 (*) [16])0xffffffffffffffef < param_1;
      param_1 = param_1 + 1;
      bVar8 = param_1 == (undefined1 (*) [16])0x0;
    }
  }
  return pauVar6;
}



