// FUN_1805f8e70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f8e70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte * FUN_1805f8e70(byte *param_1,byte *param_2,byte param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  ushort uVar4;
  ulonglong uVar5;
  byte *pbVar6;
  byte *pbVar8;
  byte *pbVar7;
  byte *pbVar9;
  byte bVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  char cVar13;
  char cVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  char cVar28;
  char cVar29;
  char cVar30;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar66 [16];
  undefined1 in_XMM5_Ba;
  char cVar67;
  undefined1 in_XMM5_Bb;
  char cVar68;
  undefined1 in_XMM5_Bc;
  char cVar69;
  undefined1 in_XMM5_Bd;
  char cVar70;
  undefined1 in_XMM5_Be;
  char cVar71;
  undefined1 in_XMM5_Bf;
  char cVar72;
  undefined1 in_XMM5_Bg;
  char cVar73;
  undefined1 in_XMM5_Bh;
  char cVar74;
  undefined1 in_XMM5_Bi;
  char cVar75;
  undefined1 in_XMM5_Bj;
  char cVar76;
  undefined1 in_XMM5_Bk;
  char cVar77;
  undefined1 in_XMM5_Bl;
  char cVar78;
  undefined1 in_XMM5_Bm;
  char cVar79;
  undefined1 in_XMM5_Bn;
  char cVar80;
  undefined1 in_XMM5_Bo;
  char cVar81;
  undefined1 in_XMM5_Bp;
  char cVar82;
  
  bVar10 = 0x80;
  uVar3 = CONCAT13(in_XMM5_Bd,CONCAT12(in_XMM5_Bc,CONCAT11(in_XMM5_Bb,in_XMM5_Ba))) ^
          CONCAT13(in_XMM5_Bd,CONCAT12(in_XMM5_Bc,CONCAT11(in_XMM5_Bb,in_XMM5_Ba)));
  cVar67 = (char)uVar3;
  cVar68 = (char)(uVar3 >> 8);
  cVar69 = (char)(uVar3 >> 0x10);
  cVar70 = (char)(uVar3 >> 0x18);
  uVar3 = CONCAT13(in_XMM5_Bh,CONCAT12(in_XMM5_Bg,CONCAT11(in_XMM5_Bf,in_XMM5_Be))) ^
          CONCAT13(in_XMM5_Bh,CONCAT12(in_XMM5_Bg,CONCAT11(in_XMM5_Bf,in_XMM5_Be)));
  cVar71 = (char)uVar3;
  cVar72 = (char)(uVar3 >> 8);
  cVar73 = (char)(uVar3 >> 0x10);
  cVar74 = (char)(uVar3 >> 0x18);
  uVar3 = CONCAT13(in_XMM5_Bl,CONCAT12(in_XMM5_Bk,CONCAT11(in_XMM5_Bj,in_XMM5_Bi))) ^
          CONCAT13(in_XMM5_Bl,CONCAT12(in_XMM5_Bk,CONCAT11(in_XMM5_Bj,in_XMM5_Bi)));
  cVar75 = (char)uVar3;
  cVar76 = (char)(uVar3 >> 8);
  cVar77 = (char)(uVar3 >> 0x10);
  cVar78 = (char)(uVar3 >> 0x18);
  uVar3 = CONCAT13(in_XMM5_Bp,CONCAT12(in_XMM5_Bo,CONCAT11(in_XMM5_Bn,in_XMM5_Bm))) ^
          CONCAT13(in_XMM5_Bp,CONCAT12(in_XMM5_Bo,CONCAT11(in_XMM5_Bn,in_XMM5_Bm)));
  cVar79 = (char)uVar3;
  cVar80 = (char)(uVar3 >> 8);
  cVar81 = (char)(uVar3 >> 0x10);
  cVar82 = (char)(uVar3 >> 0x18);
  uVar5 = (longlong)param_2 - (longlong)param_1 & 0xfffffffffffffff0;
  if (0x1000 < uVar5) {
    uVar5 = 0x1000;
  }
  pbVar9 = param_1 + uVar5;
  lVar1 = (ulonglong)param_3 * 0x10;
  pbVar6 = param_1;
  while( true ) {
    auVar66 = ZEXT816(0);
    bVar31 = *pbVar6 - (&DAT_18068bef0)[lVar1];
    bVar32 = pbVar6[1] - (&UNK_18068bef1)[lVar1];
    bVar33 = pbVar6[2] - (&UNK_18068bef2)[lVar1];
    bVar34 = pbVar6[3] - (&UNK_18068bef3)[lVar1];
    bVar35 = pbVar6[4] - (&UNK_18068bef4)[lVar1];
    bVar36 = pbVar6[5] - (&UNK_18068bef5)[lVar1];
    bVar37 = pbVar6[6] - (&UNK_18068bef6)[lVar1];
    bVar38 = pbVar6[7] - (&UNK_18068bef7)[lVar1];
    bVar39 = pbVar6[8] - (&UNK_18068bef8)[lVar1];
    bVar40 = pbVar6[9] - (&UNK_18068bef9)[lVar1];
    bVar41 = pbVar6[10] - (&UNK_18068befa)[lVar1];
    bVar42 = pbVar6[0xb] - (&UNK_18068befb)[lVar1];
    bVar43 = pbVar6[0xc] - (&UNK_18068befc)[lVar1];
    bVar44 = pbVar6[0xd] - (&UNK_18068befd)[lVar1];
    bVar45 = pbVar6[0xe] - (&UNK_18068befe)[lVar1];
    bVar46 = pbVar6[0xf] - (&UNK_18068beff)[lVar1];
    pbVar8 = pbVar6;
    while( true ) {
      pbVar7 = pbVar8 + 0x10;
      cVar67 = cVar67 + '\x01';
      cVar68 = cVar68 + '\x01';
      cVar69 = cVar69 + '\x01';
      cVar70 = cVar70 + '\x01';
      cVar71 = cVar71 + '\x01';
      cVar72 = cVar72 + '\x01';
      cVar73 = cVar73 + '\x01';
      cVar74 = cVar74 + '\x01';
      cVar75 = cVar75 + '\x01';
      cVar76 = cVar76 + '\x01';
      cVar77 = cVar77 + '\x01';
      cVar78 = cVar78 + '\x01';
      cVar79 = cVar79 + '\x01';
      cVar80 = cVar80 + '\x01';
      cVar81 = cVar81 + '\x01';
      cVar82 = cVar82 + '\x01';
      if (pbVar7 == pbVar9) break;
      cVar13 = *pbVar7 - (&DAT_18068bef0)[lVar1];
      cVar16 = pbVar8[0x11] - (&UNK_18068bef1)[lVar1];
      cVar17 = pbVar8[0x12] - (&UNK_18068bef2)[lVar1];
      cVar18 = pbVar8[0x13] - (&UNK_18068bef3)[lVar1];
      cVar19 = pbVar8[0x14] - (&UNK_18068bef4)[lVar1];
      cVar20 = pbVar8[0x15] - (&UNK_18068bef5)[lVar1];
      cVar21 = pbVar8[0x16] - (&UNK_18068bef6)[lVar1];
      cVar22 = pbVar8[0x17] - (&UNK_18068bef7)[lVar1];
      cVar23 = pbVar8[0x18] - (&UNK_18068bef8)[lVar1];
      cVar24 = pbVar8[0x19] - (&UNK_18068bef9)[lVar1];
      cVar25 = pbVar8[0x1a] - (&UNK_18068befa)[lVar1];
      cVar26 = pbVar8[0x1b] - (&UNK_18068befb)[lVar1];
      cVar27 = pbVar8[0x1c] - (&UNK_18068befc)[lVar1];
      cVar28 = pbVar8[0x1d] - (&UNK_18068befd)[lVar1];
      cVar29 = pbVar8[0x1e] - (&UNK_18068befe)[lVar1];
      cVar30 = pbVar8[0x1f] - (&UNK_18068beff)[lVar1];
      auVar11[0] = -((char)bVar31 < cVar13);
      auVar11[1] = -((char)bVar32 < cVar16);
      auVar11[2] = -((char)bVar33 < cVar17);
      auVar11[3] = -((char)bVar34 < cVar18);
      auVar11[4] = -((char)bVar35 < cVar19);
      auVar11[5] = -((char)bVar36 < cVar20);
      auVar11[6] = -((char)bVar37 < cVar21);
      auVar11[7] = -((char)bVar38 < cVar22);
      auVar11[8] = -((char)bVar39 < cVar23);
      auVar11[9] = -((char)bVar40 < cVar24);
      auVar11[10] = -((char)bVar41 < cVar25);
      auVar11[0xb] = -((char)bVar42 < cVar26);
      auVar11[0xc] = -((char)bVar43 < cVar27);
      auVar11[0xd] = -((char)bVar44 < cVar28);
      auVar11[0xe] = -((char)bVar45 < cVar29);
      auVar11[0xf] = -((char)bVar46 < cVar30);
      bVar31 = ((char)bVar31 < cVar13) * cVar13 | ((char)bVar31 >= cVar13) * bVar31;
      bVar32 = ((char)bVar32 < cVar16) * cVar16 | ((char)bVar32 >= cVar16) * bVar32;
      bVar33 = ((char)bVar33 < cVar17) * cVar17 | ((char)bVar33 >= cVar17) * bVar33;
      bVar34 = ((char)bVar34 < cVar18) * cVar18 | ((char)bVar34 >= cVar18) * bVar34;
      bVar35 = ((char)bVar35 < cVar19) * cVar19 | ((char)bVar35 >= cVar19) * bVar35;
      bVar36 = ((char)bVar36 < cVar20) * cVar20 | ((char)bVar36 >= cVar20) * bVar36;
      bVar37 = ((char)bVar37 < cVar21) * cVar21 | ((char)bVar37 >= cVar21) * bVar37;
      bVar38 = ((char)bVar38 < cVar22) * cVar22 | ((char)bVar38 >= cVar22) * bVar38;
      bVar39 = ((char)bVar39 < cVar23) * cVar23 | ((char)bVar39 >= cVar23) * bVar39;
      bVar40 = ((char)bVar40 < cVar24) * cVar24 | ((char)bVar40 >= cVar24) * bVar40;
      bVar41 = ((char)bVar41 < cVar25) * cVar25 | ((char)bVar41 >= cVar25) * bVar41;
      bVar42 = ((char)bVar42 < cVar26) * cVar26 | ((char)bVar42 >= cVar26) * bVar42;
      bVar43 = ((char)bVar43 < cVar27) * cVar27 | ((char)bVar43 >= cVar27) * bVar43;
      bVar44 = ((char)bVar44 < cVar28) * cVar28 | ((char)bVar44 >= cVar28) * bVar44;
      bVar45 = ((char)bVar45 < cVar29) * cVar29 | ((char)bVar45 >= cVar29) * bVar45;
      bVar46 = ((char)bVar46 < cVar30) * cVar30 | ((char)bVar46 >= cVar30) * bVar46;
      auVar2[1] = cVar68;
      auVar2[0] = cVar67;
      auVar2[2] = cVar69;
      auVar2[3] = cVar70;
      auVar2[4] = cVar71;
      auVar2[5] = cVar72;
      auVar2[6] = cVar73;
      auVar2[7] = cVar74;
      auVar2[8] = cVar75;
      auVar2[9] = cVar76;
      auVar2[10] = cVar77;
      auVar2[0xb] = cVar78;
      auVar2[0xc] = cVar79;
      auVar2[0xd] = cVar80;
      auVar2[0xe] = cVar81;
      auVar2[0xf] = cVar82;
      auVar66 = pblendvb(auVar66,auVar2,auVar11);
      pbVar8 = pbVar7;
    }
    bVar47 = ((char)bVar31 < (char)bVar39) * bVar39 | ((char)bVar31 >= (char)bVar39) * bVar31;
    bVar51 = ((char)bVar32 < (char)bVar40) * bVar40 | ((char)bVar32 >= (char)bVar40) * bVar32;
    bVar52 = ((char)bVar33 < (char)bVar41) * bVar41 | ((char)bVar33 >= (char)bVar41) * bVar33;
    bVar53 = ((char)bVar34 < (char)bVar42) * bVar42 | ((char)bVar34 >= (char)bVar42) * bVar34;
    bVar54 = ((char)bVar35 < (char)bVar43) * bVar43 | ((char)bVar35 >= (char)bVar43) * bVar35;
    bVar55 = ((char)bVar36 < (char)bVar44) * bVar44 | ((char)bVar36 >= (char)bVar44) * bVar36;
    bVar56 = ((char)bVar37 < (char)bVar45) * bVar45 | ((char)bVar37 >= (char)bVar45) * bVar37;
    bVar57 = ((char)bVar38 < (char)bVar46) * bVar46 | ((char)bVar38 >= (char)bVar46) * bVar38;
    bVar58 = ((char)bVar39 < (char)bVar31) * bVar31 | ((char)bVar39 >= (char)bVar31) * bVar39;
    bVar59 = ((char)bVar40 < (char)bVar32) * bVar32 | ((char)bVar40 >= (char)bVar32) * bVar40;
    bVar60 = ((char)bVar41 < (char)bVar33) * bVar33 | ((char)bVar41 >= (char)bVar33) * bVar41;
    bVar61 = ((char)bVar42 < (char)bVar34) * bVar34 | ((char)bVar42 >= (char)bVar34) * bVar42;
    bVar62 = ((char)bVar43 < (char)bVar35) * bVar35 | ((char)bVar43 >= (char)bVar35) * bVar43;
    bVar63 = ((char)bVar44 < (char)bVar36) * bVar36 | ((char)bVar44 >= (char)bVar36) * bVar44;
    bVar64 = ((char)bVar45 < (char)bVar37) * bVar37 | ((char)bVar45 >= (char)bVar37) * bVar45;
    bVar65 = ((char)bVar46 < (char)bVar38) * bVar38 | ((char)bVar46 >= (char)bVar38) * bVar46;
    auVar48[0] = ((char)bVar47 < (char)bVar54) * bVar54 | ((char)bVar47 >= (char)bVar54) * bVar47;
    auVar48[1] = ((char)bVar51 < (char)bVar55) * bVar55 | ((char)bVar51 >= (char)bVar55) * bVar51;
    auVar48[2] = ((char)bVar52 < (char)bVar56) * bVar56 | ((char)bVar52 >= (char)bVar56) * bVar52;
    auVar48[3] = ((char)bVar53 < (char)bVar57) * bVar57 | ((char)bVar53 >= (char)bVar57) * bVar53;
    auVar48[4] = ((char)bVar54 < (char)bVar47) * bVar47 | ((char)bVar54 >= (char)bVar47) * bVar54;
    auVar48[5] = ((char)bVar55 < (char)bVar51) * bVar51 | ((char)bVar55 >= (char)bVar51) * bVar55;
    auVar48[6] = ((char)bVar56 < (char)bVar52) * bVar52 | ((char)bVar56 >= (char)bVar52) * bVar56;
    auVar48[7] = ((char)bVar57 < (char)bVar53) * bVar53 | ((char)bVar57 >= (char)bVar53) * bVar57;
    auVar48[8] = ((char)bVar58 < (char)bVar62) * bVar62 | ((char)bVar58 >= (char)bVar62) * bVar58;
    auVar48[9] = ((char)bVar59 < (char)bVar63) * bVar63 | ((char)bVar59 >= (char)bVar63) * bVar59;
    auVar48[10] = ((char)bVar60 < (char)bVar64) * bVar64 | ((char)bVar60 >= (char)bVar64) * bVar60;
    auVar48[0xb] = ((char)bVar61 < (char)bVar65) * bVar65 | ((char)bVar61 >= (char)bVar65) * bVar61;
    auVar48[0xc] = ((char)bVar62 < (char)bVar58) * bVar58 | ((char)bVar62 >= (char)bVar58) * bVar62;
    auVar48[0xd] = ((char)bVar63 < (char)bVar59) * bVar59 | ((char)bVar63 >= (char)bVar59) * bVar63;
    auVar48[0xe] = ((char)bVar64 < (char)bVar60) * bVar60 | ((char)bVar64 >= (char)bVar60) * bVar64;
    auVar48[0xf] = ((char)bVar65 < (char)bVar61) * bVar61 | ((char)bVar65 >= (char)bVar61) * bVar65;
    auVar12 = pshufb(auVar48,_DAT_18068c000);
    cVar13 = auVar12[0];
    auVar49[0] = ((char)auVar48[0] < cVar13) * cVar13 | ((char)auVar48[0] >= cVar13) * auVar48[0];
    cVar13 = auVar12[1];
    auVar49[1] = ((char)auVar48[1] < cVar13) * cVar13 | ((char)auVar48[1] >= cVar13) * auVar48[1];
    cVar13 = auVar12[2];
    auVar49[2] = ((char)auVar48[2] < cVar13) * cVar13 | ((char)auVar48[2] >= cVar13) * auVar48[2];
    cVar13 = auVar12[3];
    auVar49[3] = ((char)auVar48[3] < cVar13) * cVar13 | ((char)auVar48[3] >= cVar13) * auVar48[3];
    cVar13 = auVar12[4];
    auVar49[4] = ((char)auVar48[4] < cVar13) * cVar13 | ((char)auVar48[4] >= cVar13) * auVar48[4];
    cVar13 = auVar12[5];
    auVar49[5] = ((char)auVar48[5] < cVar13) * cVar13 | ((char)auVar48[5] >= cVar13) * auVar48[5];
    cVar13 = auVar12[6];
    auVar49[6] = ((char)auVar48[6] < cVar13) * cVar13 | ((char)auVar48[6] >= cVar13) * auVar48[6];
    cVar13 = auVar12[7];
    auVar49[7] = ((char)auVar48[7] < cVar13) * cVar13 | ((char)auVar48[7] >= cVar13) * auVar48[7];
    cVar13 = auVar12[8];
    auVar49[8] = ((char)auVar48[8] < cVar13) * cVar13 | ((char)auVar48[8] >= cVar13) * auVar48[8];
    cVar13 = auVar12[9];
    auVar49[9] = ((char)auVar48[9] < cVar13) * cVar13 | ((char)auVar48[9] >= cVar13) * auVar48[9];
    cVar13 = auVar12[10];
    auVar49[10] = ((char)auVar48[10] < cVar13) * cVar13 |
                  ((char)auVar48[10] >= cVar13) * auVar48[10];
    cVar13 = auVar12[0xb];
    auVar49[0xb] = ((char)auVar48[0xb] < cVar13) * cVar13 |
                   ((char)auVar48[0xb] >= cVar13) * auVar48[0xb];
    cVar13 = auVar12[0xc];
    auVar49[0xc] = ((char)auVar48[0xc] < cVar13) * cVar13 |
                   ((char)auVar48[0xc] >= cVar13) * auVar48[0xc];
    cVar13 = auVar12[0xd];
    auVar49[0xd] = ((char)auVar48[0xd] < cVar13) * cVar13 |
                   ((char)auVar48[0xd] >= cVar13) * auVar48[0xd];
    cVar13 = auVar12[0xe];
    auVar49[0xe] = ((char)auVar48[0xe] < cVar13) * cVar13 |
                   ((char)auVar48[0xe] >= cVar13) * auVar48[0xe];
    cVar13 = auVar12[0xf];
    auVar49[0xf] = ((char)auVar48[0xf] < cVar13) * cVar13 |
                   ((char)auVar48[0xf] >= cVar13) * auVar48[0xf];
    auVar12 = pshufb(auVar49,_DAT_18068c010);
    cVar13 = auVar12[0];
    bVar47 = ((char)auVar49[0] < cVar13) * cVar13 | ((char)auVar49[0] >= cVar13) * auVar49[0];
    cVar13 = auVar12[1];
    cVar16 = auVar12[2];
    cVar17 = auVar12[3];
    cVar18 = auVar12[4];
    cVar19 = auVar12[5];
    cVar20 = auVar12[6];
    cVar21 = auVar12[7];
    cVar22 = auVar12[8];
    cVar23 = auVar12[9];
    cVar24 = auVar12[10];
    cVar25 = auVar12[0xb];
    cVar26 = auVar12[0xc];
    cVar27 = auVar12[0xd];
    cVar28 = auVar12[0xe];
    cVar29 = auVar12[0xf];
    if ((char)bVar10 < (char)bVar47) {
      auVar50[0] = -(bVar47 == bVar31);
      auVar50[1] = -((byte)(((char)auVar49[1] < cVar13) * cVar13 |
                           ((char)auVar49[1] >= cVar13) * auVar49[1]) == bVar32);
      auVar50[2] = -((byte)(((char)auVar49[2] < cVar16) * cVar16 |
                           ((char)auVar49[2] >= cVar16) * auVar49[2]) == bVar33);
      auVar50[3] = -((byte)(((char)auVar49[3] < cVar17) * cVar17 |
                           ((char)auVar49[3] >= cVar17) * auVar49[3]) == bVar34);
      auVar50[4] = -((byte)(((char)auVar49[4] < cVar18) * cVar18 |
                           ((char)auVar49[4] >= cVar18) * auVar49[4]) == bVar35);
      auVar50[5] = -((byte)(((char)auVar49[5] < cVar19) * cVar19 |
                           ((char)auVar49[5] >= cVar19) * auVar49[5]) == bVar36);
      auVar50[6] = -((byte)(((char)auVar49[6] < cVar20) * cVar20 |
                           ((char)auVar49[6] >= cVar20) * auVar49[6]) == bVar37);
      auVar50[7] = -((byte)(((char)auVar49[7] < cVar21) * cVar21 |
                           ((char)auVar49[7] >= cVar21) * auVar49[7]) == bVar38);
      auVar50[8] = -((byte)(((char)auVar49[8] < cVar22) * cVar22 |
                           ((char)auVar49[8] >= cVar22) * auVar49[8]) == bVar39);
      auVar50[9] = -((byte)(((char)auVar49[9] < cVar23) * cVar23 |
                           ((char)auVar49[9] >= cVar23) * auVar49[9]) == bVar40);
      auVar50[10] = -((byte)(((char)auVar49[10] < cVar24) * cVar24 |
                            ((char)auVar49[10] >= cVar24) * auVar49[10]) == bVar41);
      auVar50[0xb] = -((byte)(((char)auVar49[0xb] < cVar25) * cVar25 |
                             ((char)auVar49[0xb] >= cVar25) * auVar49[0xb]) == bVar42);
      auVar50[0xc] = -((byte)(((char)auVar49[0xc] < cVar26) * cVar26 |
                             ((char)auVar49[0xc] >= cVar26) * auVar49[0xc]) == bVar43);
      auVar50[0xd] = -((byte)(((char)auVar49[0xd] < cVar27) * cVar27 |
                             ((char)auVar49[0xd] >= cVar27) * auVar49[0xd]) == bVar44);
      auVar50[0xe] = -((byte)(((char)auVar49[0xe] < cVar28) * cVar28 |
                             ((char)auVar49[0xe] >= cVar28) * auVar49[0xe]) == bVar45);
      auVar50[0xf] = -((byte)(((char)auVar49[0xf] < cVar29) * cVar29 |
                             ((char)auVar49[0xf] >= cVar29) * auVar49[0xf]) == bVar46);
      auVar12 = pblendvb(_DAT_180689870,auVar66,auVar50);
      bVar10 = auVar12[8];
      bVar58 = auVar12[0];
      bVar31 = (bVar10 < bVar58) * bVar10 | (bVar10 >= bVar58) * bVar58;
      bVar32 = auVar12[9];
      bVar59 = auVar12[1];
      bVar33 = (bVar32 < bVar59) * bVar32 | (bVar32 >= bVar59) * bVar59;
      bVar34 = auVar12[10];
      bVar60 = auVar12[2];
      bVar35 = (bVar34 < bVar60) * bVar34 | (bVar34 >= bVar60) * bVar60;
      bVar36 = auVar12[0xb];
      bVar61 = auVar12[3];
      bVar37 = (bVar36 < bVar61) * bVar36 | (bVar36 >= bVar61) * bVar61;
      bVar38 = auVar12[0xc];
      bVar62 = auVar12[4];
      bVar39 = (bVar38 < bVar62) * bVar38 | (bVar38 >= bVar62) * bVar62;
      bVar40 = auVar12[0xd];
      bVar63 = auVar12[5];
      bVar41 = (bVar40 < bVar63) * bVar40 | (bVar40 >= bVar63) * bVar63;
      bVar42 = auVar12[0xe];
      bVar64 = auVar12[6];
      bVar43 = (bVar42 < bVar64) * bVar42 | (bVar42 >= bVar64) * bVar64;
      bVar44 = auVar12[0xf];
      bVar65 = auVar12[7];
      bVar45 = (bVar44 < bVar65) * bVar44 | (bVar44 >= bVar65) * bVar65;
      bVar46 = (bVar58 < bVar10) * bVar58 | (bVar58 >= bVar10) * bVar10;
      bVar51 = (bVar59 < bVar32) * bVar59 | (bVar59 >= bVar32) * bVar32;
      bVar52 = (bVar60 < bVar34) * bVar60 | (bVar60 >= bVar34) * bVar34;
      bVar53 = (bVar61 < bVar36) * bVar61 | (bVar61 >= bVar36) * bVar36;
      bVar54 = (bVar62 < bVar38) * bVar62 | (bVar62 >= bVar38) * bVar38;
      bVar55 = (bVar63 < bVar40) * bVar63 | (bVar63 >= bVar40) * bVar40;
      bVar56 = (bVar64 < bVar42) * bVar64 | (bVar64 >= bVar42) * bVar42;
      bVar57 = (bVar65 < bVar44) * bVar65 | (bVar65 >= bVar44) * bVar44;
      auVar14[0] = (bVar39 < bVar31) * bVar39 | (bVar39 >= bVar31) * bVar31;
      auVar14[1] = (bVar41 < bVar33) * bVar41 | (bVar41 >= bVar33) * bVar33;
      auVar14[2] = (bVar43 < bVar35) * bVar43 | (bVar43 >= bVar35) * bVar35;
      auVar14[3] = (bVar45 < bVar37) * bVar45 | (bVar45 >= bVar37) * bVar37;
      auVar14[4] = (bVar31 < bVar39) * bVar31 | (bVar31 >= bVar39) * bVar39;
      auVar14[5] = (bVar33 < bVar41) * bVar33 | (bVar33 >= bVar41) * bVar41;
      auVar14[6] = (bVar35 < bVar43) * bVar35 | (bVar35 >= bVar43) * bVar43;
      auVar14[7] = (bVar37 < bVar45) * bVar37 | (bVar37 >= bVar45) * bVar45;
      auVar14[8] = (bVar54 < bVar46) * bVar54 | (bVar54 >= bVar46) * bVar46;
      auVar14[9] = (bVar55 < bVar51) * bVar55 | (bVar55 >= bVar51) * bVar51;
      auVar14[10] = (bVar56 < bVar52) * bVar56 | (bVar56 >= bVar52) * bVar52;
      auVar14[0xb] = (bVar57 < bVar53) * bVar57 | (bVar57 >= bVar53) * bVar53;
      auVar14[0xc] = (bVar46 < bVar54) * bVar46 | (bVar46 >= bVar54) * bVar54;
      auVar14[0xd] = (bVar51 < bVar55) * bVar51 | (bVar51 >= bVar55) * bVar55;
      auVar14[0xe] = (bVar52 < bVar56) * bVar52 | (bVar52 >= bVar56) * bVar56;
      auVar14[0xf] = (bVar53 < bVar57) * bVar53 | (bVar53 >= bVar57) * bVar57;
      auVar12 = pshufb(auVar14,_DAT_18068c000);
      bVar31 = auVar12[0];
      auVar15[0] = (bVar31 < auVar14[0]) * bVar31 | (bVar31 >= auVar14[0]) * auVar14[0];
      bVar31 = auVar12[1];
      auVar15[1] = (bVar31 < auVar14[1]) * bVar31 | (bVar31 >= auVar14[1]) * auVar14[1];
      bVar31 = auVar12[2];
      auVar15[2] = (bVar31 < auVar14[2]) * bVar31 | (bVar31 >= auVar14[2]) * auVar14[2];
      bVar31 = auVar12[3];
      auVar15[3] = (bVar31 < auVar14[3]) * bVar31 | (bVar31 >= auVar14[3]) * auVar14[3];
      bVar31 = auVar12[4];
      auVar15[4] = (bVar31 < auVar14[4]) * bVar31 | (bVar31 >= auVar14[4]) * auVar14[4];
      bVar31 = auVar12[5];
      auVar15[5] = (bVar31 < auVar14[5]) * bVar31 | (bVar31 >= auVar14[5]) * auVar14[5];
      bVar31 = auVar12[6];
      auVar15[6] = (bVar31 < auVar14[6]) * bVar31 | (bVar31 >= auVar14[6]) * auVar14[6];
      bVar31 = auVar12[7];
      auVar15[7] = (bVar31 < auVar14[7]) * bVar31 | (bVar31 >= auVar14[7]) * auVar14[7];
      bVar31 = auVar12[8];
      auVar15[8] = (bVar31 < auVar14[8]) * bVar31 | (bVar31 >= auVar14[8]) * auVar14[8];
      bVar31 = auVar12[9];
      auVar15[9] = (bVar31 < auVar14[9]) * bVar31 | (bVar31 >= auVar14[9]) * auVar14[9];
      bVar31 = auVar12[10];
      auVar15[10] = (bVar31 < auVar14[10]) * bVar31 | (bVar31 >= auVar14[10]) * auVar14[10];
      bVar31 = auVar12[0xb];
      auVar15[0xb] = (bVar31 < auVar14[0xb]) * bVar31 | (bVar31 >= auVar14[0xb]) * auVar14[0xb];
      bVar31 = auVar12[0xc];
      auVar15[0xc] = (bVar31 < auVar14[0xc]) * bVar31 | (bVar31 >= auVar14[0xc]) * auVar14[0xc];
      bVar31 = auVar12[0xd];
      auVar15[0xd] = (bVar31 < auVar14[0xd]) * bVar31 | (bVar31 >= auVar14[0xd]) * auVar14[0xd];
      bVar31 = auVar12[0xe];
      auVar15[0xe] = (bVar31 < auVar14[0xe]) * bVar31 | (bVar31 >= auVar14[0xe]) * auVar14[0xe];
      bVar31 = auVar12[0xf];
      auVar15[0xf] = (bVar31 < auVar14[0xf]) * bVar31 | (bVar31 >= auVar14[0xf]) * auVar14[0xf];
      auVar12 = pshufb(auVar15,_DAT_18068c010);
      bVar31 = auVar12[0];
      bVar33 = auVar12[1];
      bVar35 = auVar12[2];
      bVar37 = auVar12[3];
      bVar39 = auVar12[4];
      bVar41 = auVar12[5];
      bVar43 = auVar12[6];
      bVar45 = auVar12[7];
      bVar46 = auVar12[8];
      bVar51 = auVar12[9];
      bVar52 = auVar12[10];
      bVar53 = auVar12[0xb];
      bVar54 = auVar12[0xc];
      bVar55 = auVar12[0xd];
      bVar56 = auVar12[0xe];
      bVar57 = auVar12[0xf];
      auVar12[0] = -((byte)((bVar31 < auVar15[0]) * bVar31 | (bVar31 >= auVar15[0]) * auVar15[0]) ==
                    bVar58);
      auVar12[1] = -((byte)((bVar33 < auVar15[1]) * bVar33 | (bVar33 >= auVar15[1]) * auVar15[1]) ==
                    bVar59);
      auVar12[2] = -((byte)((bVar35 < auVar15[2]) * bVar35 | (bVar35 >= auVar15[2]) * auVar15[2]) ==
                    bVar60);
      auVar12[3] = -((byte)((bVar37 < auVar15[3]) * bVar37 | (bVar37 >= auVar15[3]) * auVar15[3]) ==
                    bVar61);
      auVar12[4] = -((byte)((bVar39 < auVar15[4]) * bVar39 | (bVar39 >= auVar15[4]) * auVar15[4]) ==
                    bVar62);
      auVar12[5] = -((byte)((bVar41 < auVar15[5]) * bVar41 | (bVar41 >= auVar15[5]) * auVar15[5]) ==
                    bVar63);
      auVar12[6] = -((byte)((bVar43 < auVar15[6]) * bVar43 | (bVar43 >= auVar15[6]) * auVar15[6]) ==
                    bVar64);
      auVar12[7] = -((byte)((bVar45 < auVar15[7]) * bVar45 | (bVar45 >= auVar15[7]) * auVar15[7]) ==
                    bVar65);
      auVar12[8] = -((byte)((bVar46 < auVar15[8]) * bVar46 | (bVar46 >= auVar15[8]) * auVar15[8]) ==
                    bVar10);
      auVar12[9] = -((byte)((bVar51 < auVar15[9]) * bVar51 | (bVar51 >= auVar15[9]) * auVar15[9]) ==
                    bVar32);
      auVar12[10] = -((byte)((bVar52 < auVar15[10]) * bVar52 | (bVar52 >= auVar15[10]) * auVar15[10]
                            ) == bVar34);
      auVar12[0xb] = -((byte)((bVar53 < auVar15[0xb]) * bVar53 |
                             (bVar53 >= auVar15[0xb]) * auVar15[0xb]) == bVar36);
      auVar12[0xc] = -((byte)((bVar54 < auVar15[0xc]) * bVar54 |
                             (bVar54 >= auVar15[0xc]) * auVar15[0xc]) == bVar38);
      auVar12[0xd] = -((byte)((bVar55 < auVar15[0xd]) * bVar55 |
                             (bVar55 >= auVar15[0xd]) * auVar15[0xd]) == bVar40);
      auVar12[0xe] = -((byte)((bVar56 < auVar15[0xe]) * bVar56 |
                             (bVar56 >= auVar15[0xe]) * auVar15[0xe]) == bVar42);
      auVar12[0xf] = -((byte)((bVar57 < auVar15[0xf]) * bVar57 |
                             (bVar57 >= auVar15[0xf]) * auVar15[0xf]) == bVar44);
      uVar4 = ((ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe | (ushort)(auVar12[0xf] >> 7) << 0xf)
              & ((ushort)(SUB161(auVar50 >> 7,0) & 1) | (ushort)(SUB161(auVar50 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar50 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar50 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar50 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar50 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar50 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar50 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar50 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar50 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar50 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar50 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar50 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar50 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar50 >> 0x77,0) & 1) << 0xe | (ushort)(auVar50[0xf] >> 7) << 0xf
                );
      uVar3 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      auVar66 = pshufb(auVar66,ZEXT416(uVar3));
      param_1 = pbVar6 + (ulonglong)uVar3 + (ulonglong)(auVar66._0_4_ & 0xff) * 0x10;
      bVar10 = bVar47;
    }
    uVar5 = (longlong)param_2 - (longlong)pbVar7 & 0xfffffffffffffff0;
    if (uVar5 == 0) break;
    if (0x1000 < uVar5) {
      uVar5 = 0x1000;
    }
    pbVar9 = pbVar9 + uVar5;
    pbVar6 = pbVar7;
  }
  if (param_3 == 0) {
    bVar10 = bVar10 + 0x80;
    for (; pbVar7 != param_2; pbVar7 = pbVar7 + 1) {
      if (bVar10 < *pbVar7) {
        bVar10 = *pbVar7;
        param_1 = pbVar7;
      }
    }
  }
  else {
    for (; pbVar7 != param_2; pbVar7 = pbVar7 + 1) {
      if ((char)bVar10 < (char)*pbVar7) {
        bVar10 = *pbVar7;
        param_1 = pbVar7;
      }
    }
  }
  return param_1;
}



