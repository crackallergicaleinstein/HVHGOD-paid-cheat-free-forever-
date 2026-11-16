// FUN_180470e10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180470e10 */

undefined8
FUN_180470e10(longlong *param_1,byte *param_2,uint param_3,int param_4,uint param_5,uint param_6,
             uint param_7,int param_8)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  int iVar34;
  longlong lVar35;
  char cVar36;
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
  byte bVar48;
  byte bVar49;
  byte bVar50;
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
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  uint uVar102;
  uint uVar103;
  longlong lVar104;
  longlong lVar105;
  byte *pbVar106;
  int iVar107;
  uint uVar108;
  char *pcVar109;
  longlong lVar110;
  longlong lVar111;
  int iVar112;
  char *pcVar113;
  ulonglong uVar114;
  byte *pbVar115;
  byte *pbVar116;
  char *pcVar117;
  byte bVar118;
  longlong lVar119;
  uint uVar120;
  uint uVar121;
  longlong lVar122;
  ulonglong uVar123;
  uint uVar124;
  char cVar125;
  ulonglong uVar126;
  uint local_88;
  uint local_6c;
  
  uVar126 = (ulonglong)(int)param_7;
  iVar112 = (param_7 == 0x10) + 1;
  iVar107 = iVar112 * param_4;
  iVar34 = *(int *)(*param_1 + 8);
  local_88 = iVar112 * iVar34;
  if (((((int)param_5 < 0) || ((int)param_6 < 0)) ||
      ((param_6 != 0 && ((int)(0x7fffffff / (ulonglong)param_6) < (int)param_5)))) ||
     ((((int)(param_5 * param_6) < 0 || (iVar107 < 0)) ||
      ((iVar107 != 0 && ((int)(0x7fffffff / (longlong)iVar107) < (int)(param_5 * param_6))))))) {
    param_1[3] = 0;
  }
  else {
    lVar104 = _malloc_base((longlong)(int)(iVar107 * param_5 * param_6));
    param_1[3] = lVar104;
    if ((((((lVar104 != 0) && (-1 < iVar34)) &&
          ((param_5 == 0 || (iVar34 <= (int)(0x7fffffff / (ulonglong)param_5))))) &&
         ((uVar108 = iVar34 * param_5, -1 < (int)uVar108 && (-1 < (int)param_7)))) &&
        ((param_7 == 0 || ((int)uVar108 <= (int)(0x7fffffff / (ulonglong)param_7))))) &&
       (((int)(uVar108 * param_7) < 0x7ffffff9 &&
        ((((uVar124 = uVar108 * param_7 + 7 >> 3, param_6 == 0 ||
           (uVar124 <= (uint)(0x7fffffff / (ulonglong)param_6))) &&
          ((int)(uVar124 * param_6) <= (int)(0x7fffffff - uVar124))) &&
         (((uVar124 + 1) * param_6 <= param_3 && (lVar104 = _malloc_base(uVar124 * 2), lVar104 != 0)
          ))))))) {
      if ((int)param_7 < 8) {
        local_88 = 1;
        uVar102 = uVar124;
      }
      else {
        uVar102 = param_5;
      }
      local_6c = 0;
      if (param_6 != 0) {
        lVar35 = param_1[3];
        uVar123 = (ulonglong)(int)param_5;
        pcVar109 = &DAT_18077f668 + uVar126;
        uVar102 = uVar102 * local_88;
        lVar122 = (longlong)(int)local_88;
        lVar105 = (longlong)(int)uVar102;
        uVar114 = uVar123;
        do {
          uVar103 = (local_6c & 1) * uVar124;
          pbVar116 = (byte *)((ulonglong)((~local_6c & 1) * uVar124) + lVar104);
          pbVar115 = (byte *)((ulonglong)uVar103 + lVar104);
          pcVar117 = (char *)(lVar35 + (ulonglong)(local_6c * iVar107 * param_5));
          bVar118 = *param_2;
          param_2 = param_2 + 1;
          if (4 < bVar118) {
            thunk_FUN_180621380(lVar104);
            return 0;
          }
          if (local_6c == 0) {
            bVar118 = (&DAT_18077f65c)[bVar118];
          }
          switch(bVar118) {
          case 0:
            FUN_18063aed0(pbVar115,param_2);
            goto LAB_180471589;
          case 1:
            FUN_18063aed0(pbVar115,param_2);
            if (lVar122 < lVar105) {
              pbVar116 = param_2 + lVar122;
              lVar111 = lVar105 - lVar122;
              do {
                pbVar116[(longlong)pbVar115 - (longlong)param_2] =
                     pbVar116[(longlong)(pbVar115 + (-(longlong)param_2 - lVar122))] + *pbVar116;
                pbVar116 = pbVar116 + 1;
                lVar111 = lVar111 + -1;
              } while (lVar111 != 0);
            }
            goto LAB_180471589;
          case 2:
            lVar111 = 0;
            if ((0 < (int)uVar102) && (7 < uVar102)) {
              iVar112 = uVar102 - 1;
              if (((param_2 + iVar112 < pbVar115) || (pbVar115 + iVar112 < param_2)) &&
                 ((pbVar116 + iVar112 < pbVar115 || (pbVar115 + iVar112 < pbVar116)))) {
                if (0x7f < uVar102) {
                  uVar121 = uVar102 & 0x8000007f;
                  if ((int)uVar121 < 0) {
                    uVar121 = (uVar121 - 1 | 0xffffff80) + 1;
                  }
                  lVar110 = (longlong)param_2 - (longlong)pbVar116;
                  lVar119 = (longlong)pbVar115 - (longlong)pbVar116;
                  pbVar106 = pbVar116 + 0x20;
                  do {
                    bVar37 = *pbVar106;
                    bVar38 = pbVar106[1];
                    bVar39 = pbVar106[2];
                    bVar40 = pbVar106[3];
                    bVar41 = pbVar106[4];
                    bVar42 = pbVar106[5];
                    bVar43 = pbVar106[6];
                    bVar44 = pbVar106[7];
                    bVar45 = pbVar106[8];
                    bVar46 = pbVar106[9];
                    bVar47 = pbVar106[10];
                    bVar48 = pbVar106[0xb];
                    bVar49 = pbVar106[0xc];
                    bVar50 = pbVar106[0xd];
                    bVar51 = pbVar106[0xe];
                    bVar52 = pbVar106[0xf];
                    bVar53 = pbVar106[0x10];
                    bVar54 = pbVar106[0x11];
                    bVar55 = pbVar106[0x12];
                    bVar56 = pbVar106[0x13];
                    bVar57 = pbVar106[0x14];
                    bVar58 = pbVar106[0x15];
                    bVar59 = pbVar106[0x16];
                    bVar60 = pbVar106[0x17];
                    bVar61 = pbVar106[0x18];
                    bVar62 = pbVar106[0x19];
                    bVar63 = pbVar106[0x1a];
                    bVar64 = pbVar106[0x1b];
                    bVar65 = pbVar106[0x1c];
                    bVar66 = pbVar106[0x1d];
                    bVar67 = pbVar106[0x1e];
                    bVar68 = pbVar106[0x1f];
                    pbVar1 = pbVar106 + lVar110 + -0x20;
                    bVar69 = pbVar1[1];
                    bVar70 = pbVar1[2];
                    bVar71 = pbVar1[3];
                    bVar72 = pbVar1[4];
                    bVar73 = pbVar1[5];
                    bVar74 = pbVar1[6];
                    bVar75 = pbVar1[7];
                    bVar76 = pbVar1[8];
                    bVar77 = pbVar1[9];
                    bVar78 = pbVar1[10];
                    bVar79 = pbVar1[0xb];
                    bVar80 = pbVar1[0xc];
                    bVar81 = pbVar1[0xd];
                    bVar82 = pbVar1[0xe];
                    bVar83 = pbVar1[0xf];
                    bVar84 = pbVar1[0x10];
                    bVar85 = pbVar1[0x11];
                    bVar86 = pbVar1[0x12];
                    bVar87 = pbVar1[0x13];
                    bVar88 = pbVar1[0x14];
                    bVar89 = pbVar1[0x15];
                    bVar90 = pbVar1[0x16];
                    bVar91 = pbVar1[0x17];
                    bVar92 = pbVar1[0x18];
                    bVar93 = pbVar1[0x19];
                    bVar94 = pbVar1[0x1a];
                    bVar95 = pbVar1[0x1b];
                    bVar96 = pbVar1[0x1c];
                    bVar97 = pbVar1[0x1d];
                    bVar98 = pbVar1[0x1e];
                    bVar99 = pbVar1[0x1f];
                    bVar118 = pbVar106[-0x1f];
                    bVar101 = pbVar106[-0x1e];
                    bVar5 = pbVar106[-0x1d];
                    bVar6 = pbVar106[-0x1c];
                    bVar7 = pbVar106[-0x1b];
                    bVar8 = pbVar106[-0x1a];
                    bVar9 = pbVar106[-0x19];
                    bVar10 = pbVar106[-0x18];
                    bVar11 = pbVar106[-0x17];
                    bVar12 = pbVar106[-0x16];
                    bVar13 = pbVar106[-0x15];
                    bVar14 = pbVar106[-0x14];
                    bVar15 = pbVar106[-0x13];
                    bVar16 = pbVar106[-0x12];
                    bVar17 = pbVar106[-0x11];
                    bVar18 = pbVar106[-0x10];
                    bVar19 = pbVar106[-0xf];
                    bVar20 = pbVar106[-0xe];
                    bVar21 = pbVar106[-0xd];
                    bVar22 = pbVar106[-0xc];
                    bVar23 = pbVar106[-0xb];
                    bVar24 = pbVar106[-10];
                    bVar25 = pbVar106[-9];
                    bVar26 = pbVar106[-8];
                    bVar27 = pbVar106[-7];
                    bVar28 = pbVar106[-6];
                    bVar29 = pbVar106[-5];
                    bVar30 = pbVar106[-4];
                    bVar31 = pbVar106[-3];
                    bVar32 = pbVar106[-2];
                    bVar33 = pbVar106[-1];
                    pbVar2 = pbVar106 + lVar119 + -0x20;
                    *pbVar2 = *pbVar1 + pbVar106[-0x20];
                    pbVar2[1] = bVar69 + bVar118;
                    pbVar2[2] = bVar70 + bVar101;
                    pbVar2[3] = bVar71 + bVar5;
                    pbVar2[4] = bVar72 + bVar6;
                    pbVar2[5] = bVar73 + bVar7;
                    pbVar2[6] = bVar74 + bVar8;
                    pbVar2[7] = bVar75 + bVar9;
                    pbVar2[8] = bVar76 + bVar10;
                    pbVar2[9] = bVar77 + bVar11;
                    pbVar2[10] = bVar78 + bVar12;
                    pbVar2[0xb] = bVar79 + bVar13;
                    pbVar2[0xc] = bVar80 + bVar14;
                    pbVar2[0xd] = bVar81 + bVar15;
                    pbVar2[0xe] = bVar82 + bVar16;
                    pbVar2[0xf] = bVar83 + bVar17;
                    pbVar2[0x10] = bVar84 + bVar18;
                    pbVar2[0x11] = bVar85 + bVar19;
                    pbVar2[0x12] = bVar86 + bVar20;
                    pbVar2[0x13] = bVar87 + bVar21;
                    pbVar2[0x14] = bVar88 + bVar22;
                    pbVar2[0x15] = bVar89 + bVar23;
                    pbVar2[0x16] = bVar90 + bVar24;
                    pbVar2[0x17] = bVar91 + bVar25;
                    pbVar2[0x18] = bVar92 + bVar26;
                    pbVar2[0x19] = bVar93 + bVar27;
                    pbVar2[0x1a] = bVar94 + bVar28;
                    pbVar2[0x1b] = bVar95 + bVar29;
                    pbVar2[0x1c] = bVar96 + bVar30;
                    pbVar2[0x1d] = bVar97 + bVar31;
                    pbVar2[0x1e] = bVar98 + bVar32;
                    pbVar2[0x1f] = bVar99 + bVar33;
                    pbVar1 = pbVar106 + lVar110;
                    bVar118 = pbVar1[1];
                    bVar101 = pbVar1[2];
                    bVar5 = pbVar1[3];
                    bVar6 = pbVar1[4];
                    bVar7 = pbVar1[5];
                    bVar8 = pbVar1[6];
                    bVar9 = pbVar1[7];
                    bVar10 = pbVar1[8];
                    bVar11 = pbVar1[9];
                    bVar12 = pbVar1[10];
                    bVar13 = pbVar1[0xb];
                    bVar14 = pbVar1[0xc];
                    bVar15 = pbVar1[0xd];
                    bVar16 = pbVar1[0xe];
                    bVar17 = pbVar1[0xf];
                    bVar18 = pbVar1[0x10];
                    bVar19 = pbVar1[0x11];
                    bVar20 = pbVar1[0x12];
                    bVar21 = pbVar1[0x13];
                    bVar22 = pbVar1[0x14];
                    bVar23 = pbVar1[0x15];
                    bVar24 = pbVar1[0x16];
                    bVar25 = pbVar1[0x17];
                    bVar26 = pbVar1[0x18];
                    bVar27 = pbVar1[0x19];
                    bVar28 = pbVar1[0x1a];
                    bVar29 = pbVar1[0x1b];
                    bVar30 = pbVar1[0x1c];
                    bVar31 = pbVar1[0x1d];
                    bVar32 = pbVar1[0x1e];
                    bVar33 = pbVar1[0x1f];
                    pbVar2 = pbVar106 + lVar110 + 0x20;
                    bVar69 = *pbVar2;
                    bVar70 = pbVar2[1];
                    bVar71 = pbVar2[2];
                    bVar72 = pbVar2[3];
                    bVar73 = pbVar2[4];
                    bVar74 = pbVar2[5];
                    bVar75 = pbVar2[6];
                    bVar76 = pbVar2[7];
                    bVar77 = pbVar2[8];
                    bVar78 = pbVar2[9];
                    bVar79 = pbVar2[10];
                    bVar80 = pbVar2[0xb];
                    bVar81 = pbVar2[0xc];
                    bVar82 = pbVar2[0xd];
                    bVar83 = pbVar2[0xe];
                    bVar84 = pbVar2[0xf];
                    bVar85 = pbVar2[0x10];
                    bVar86 = pbVar2[0x11];
                    bVar87 = pbVar2[0x12];
                    bVar88 = pbVar2[0x13];
                    bVar89 = pbVar2[0x14];
                    bVar90 = pbVar2[0x15];
                    bVar91 = pbVar2[0x16];
                    bVar92 = pbVar2[0x17];
                    bVar93 = pbVar2[0x18];
                    bVar94 = pbVar2[0x19];
                    bVar95 = pbVar2[0x1a];
                    bVar96 = pbVar2[0x1b];
                    bVar97 = pbVar2[0x1c];
                    bVar98 = pbVar2[0x1d];
                    bVar99 = pbVar2[0x1e];
                    bVar100 = pbVar2[0x1f];
                    pbVar2 = pbVar106 + lVar119;
                    *pbVar2 = bVar37 + *pbVar1;
                    pbVar2[1] = bVar38 + bVar118;
                    pbVar2[2] = bVar39 + bVar101;
                    pbVar2[3] = bVar40 + bVar5;
                    pbVar2[4] = bVar41 + bVar6;
                    pbVar2[5] = bVar42 + bVar7;
                    pbVar2[6] = bVar43 + bVar8;
                    pbVar2[7] = bVar44 + bVar9;
                    pbVar2[8] = bVar45 + bVar10;
                    pbVar2[9] = bVar46 + bVar11;
                    pbVar2[10] = bVar47 + bVar12;
                    pbVar2[0xb] = bVar48 + bVar13;
                    pbVar2[0xc] = bVar49 + bVar14;
                    pbVar2[0xd] = bVar50 + bVar15;
                    pbVar2[0xe] = bVar51 + bVar16;
                    pbVar2[0xf] = bVar52 + bVar17;
                    pbVar2[0x10] = bVar53 + bVar18;
                    pbVar2[0x11] = bVar54 + bVar19;
                    pbVar2[0x12] = bVar55 + bVar20;
                    pbVar2[0x13] = bVar56 + bVar21;
                    pbVar2[0x14] = bVar57 + bVar22;
                    pbVar2[0x15] = bVar58 + bVar23;
                    pbVar2[0x16] = bVar59 + bVar24;
                    pbVar2[0x17] = bVar60 + bVar25;
                    pbVar2[0x18] = bVar61 + bVar26;
                    pbVar2[0x19] = bVar62 + bVar27;
                    pbVar2[0x1a] = bVar63 + bVar28;
                    pbVar2[0x1b] = bVar64 + bVar29;
                    pbVar2[0x1c] = bVar65 + bVar30;
                    pbVar2[0x1d] = bVar66 + bVar31;
                    pbVar2[0x1e] = bVar67 + bVar32;
                    pbVar2[0x1f] = bVar68 + bVar33;
                    bVar118 = pbVar106[0x21];
                    bVar101 = pbVar106[0x22];
                    bVar5 = pbVar106[0x23];
                    bVar6 = pbVar106[0x24];
                    bVar7 = pbVar106[0x25];
                    bVar8 = pbVar106[0x26];
                    bVar9 = pbVar106[0x27];
                    bVar10 = pbVar106[0x28];
                    bVar11 = pbVar106[0x29];
                    bVar12 = pbVar106[0x2a];
                    bVar13 = pbVar106[0x2b];
                    bVar14 = pbVar106[0x2c];
                    bVar15 = pbVar106[0x2d];
                    bVar16 = pbVar106[0x2e];
                    bVar17 = pbVar106[0x2f];
                    bVar18 = pbVar106[0x30];
                    bVar19 = pbVar106[0x31];
                    bVar20 = pbVar106[0x32];
                    bVar21 = pbVar106[0x33];
                    bVar22 = pbVar106[0x34];
                    bVar23 = pbVar106[0x35];
                    bVar24 = pbVar106[0x36];
                    bVar25 = pbVar106[0x37];
                    bVar26 = pbVar106[0x38];
                    bVar27 = pbVar106[0x39];
                    bVar28 = pbVar106[0x3a];
                    bVar29 = pbVar106[0x3b];
                    bVar30 = pbVar106[0x3c];
                    bVar31 = pbVar106[0x3d];
                    bVar32 = pbVar106[0x3e];
                    bVar33 = pbVar106[0x3f];
                    pbVar1 = pbVar106 + lVar110 + 0x40;
                    bVar37 = *pbVar1;
                    bVar38 = pbVar1[1];
                    bVar39 = pbVar1[2];
                    bVar40 = pbVar1[3];
                    bVar41 = pbVar1[4];
                    bVar42 = pbVar1[5];
                    bVar43 = pbVar1[6];
                    bVar44 = pbVar1[7];
                    bVar45 = pbVar1[8];
                    bVar46 = pbVar1[9];
                    bVar47 = pbVar1[10];
                    bVar48 = pbVar1[0xb];
                    bVar49 = pbVar1[0xc];
                    bVar50 = pbVar1[0xd];
                    bVar51 = pbVar1[0xe];
                    bVar52 = pbVar1[0xf];
                    bVar53 = pbVar1[0x10];
                    bVar54 = pbVar1[0x11];
                    bVar55 = pbVar1[0x12];
                    bVar56 = pbVar1[0x13];
                    bVar57 = pbVar1[0x14];
                    bVar58 = pbVar1[0x15];
                    bVar59 = pbVar1[0x16];
                    bVar60 = pbVar1[0x17];
                    bVar61 = pbVar1[0x18];
                    bVar62 = pbVar1[0x19];
                    bVar63 = pbVar1[0x1a];
                    bVar64 = pbVar1[0x1b];
                    bVar65 = pbVar1[0x1c];
                    bVar66 = pbVar1[0x1d];
                    bVar67 = pbVar1[0x1e];
                    bVar68 = pbVar1[0x1f];
                    pbVar1 = pbVar106 + lVar119 + 0x20;
                    *pbVar1 = bVar69 + pbVar106[0x20];
                    pbVar1[1] = bVar70 + bVar118;
                    pbVar1[2] = bVar71 + bVar101;
                    pbVar1[3] = bVar72 + bVar5;
                    pbVar1[4] = bVar73 + bVar6;
                    pbVar1[5] = bVar74 + bVar7;
                    pbVar1[6] = bVar75 + bVar8;
                    pbVar1[7] = bVar76 + bVar9;
                    pbVar1[8] = bVar77 + bVar10;
                    pbVar1[9] = bVar78 + bVar11;
                    pbVar1[10] = bVar79 + bVar12;
                    pbVar1[0xb] = bVar80 + bVar13;
                    pbVar1[0xc] = bVar81 + bVar14;
                    pbVar1[0xd] = bVar82 + bVar15;
                    pbVar1[0xe] = bVar83 + bVar16;
                    pbVar1[0xf] = bVar84 + bVar17;
                    pbVar1[0x10] = bVar85 + bVar18;
                    pbVar1[0x11] = bVar86 + bVar19;
                    pbVar1[0x12] = bVar87 + bVar20;
                    pbVar1[0x13] = bVar88 + bVar21;
                    pbVar1[0x14] = bVar89 + bVar22;
                    pbVar1[0x15] = bVar90 + bVar23;
                    pbVar1[0x16] = bVar91 + bVar24;
                    pbVar1[0x17] = bVar92 + bVar25;
                    pbVar1[0x18] = bVar93 + bVar26;
                    pbVar1[0x19] = bVar94 + bVar27;
                    pbVar1[0x1a] = bVar95 + bVar28;
                    pbVar1[0x1b] = bVar96 + bVar29;
                    pbVar1[0x1c] = bVar97 + bVar30;
                    pbVar1[0x1d] = bVar98 + bVar31;
                    pbVar1[0x1e] = bVar99 + bVar32;
                    pbVar1[0x1f] = bVar100 + bVar33;
                    bVar118 = pbVar106[0x41];
                    bVar101 = pbVar106[0x42];
                    bVar5 = pbVar106[0x43];
                    bVar6 = pbVar106[0x44];
                    bVar7 = pbVar106[0x45];
                    bVar8 = pbVar106[0x46];
                    bVar9 = pbVar106[0x47];
                    bVar10 = pbVar106[0x48];
                    bVar11 = pbVar106[0x49];
                    bVar12 = pbVar106[0x4a];
                    bVar13 = pbVar106[0x4b];
                    bVar14 = pbVar106[0x4c];
                    bVar15 = pbVar106[0x4d];
                    bVar16 = pbVar106[0x4e];
                    bVar17 = pbVar106[0x4f];
                    bVar18 = pbVar106[0x50];
                    bVar19 = pbVar106[0x51];
                    bVar20 = pbVar106[0x52];
                    bVar21 = pbVar106[0x53];
                    bVar22 = pbVar106[0x54];
                    bVar23 = pbVar106[0x55];
                    bVar24 = pbVar106[0x56];
                    bVar25 = pbVar106[0x57];
                    bVar26 = pbVar106[0x58];
                    bVar27 = pbVar106[0x59];
                    bVar28 = pbVar106[0x5a];
                    bVar29 = pbVar106[0x5b];
                    bVar30 = pbVar106[0x5c];
                    bVar31 = pbVar106[0x5d];
                    bVar32 = pbVar106[0x5e];
                    bVar33 = pbVar106[0x5f];
                    lVar111 = lVar111 + 0x80;
                    pbVar1 = pbVar106 + lVar119 + 0x40;
                    *pbVar1 = bVar37 + pbVar106[0x40];
                    pbVar1[1] = bVar38 + bVar118;
                    pbVar1[2] = bVar39 + bVar101;
                    pbVar1[3] = bVar40 + bVar5;
                    pbVar1[4] = bVar41 + bVar6;
                    pbVar1[5] = bVar42 + bVar7;
                    pbVar1[6] = bVar43 + bVar8;
                    pbVar1[7] = bVar44 + bVar9;
                    pbVar1[8] = bVar45 + bVar10;
                    pbVar1[9] = bVar46 + bVar11;
                    pbVar1[10] = bVar47 + bVar12;
                    pbVar1[0xb] = bVar48 + bVar13;
                    pbVar1[0xc] = bVar49 + bVar14;
                    pbVar1[0xd] = bVar50 + bVar15;
                    pbVar1[0xe] = bVar51 + bVar16;
                    pbVar1[0xf] = bVar52 + bVar17;
                    pbVar1[0x10] = bVar53 + bVar18;
                    pbVar1[0x11] = bVar54 + bVar19;
                    pbVar1[0x12] = bVar55 + bVar20;
                    pbVar1[0x13] = bVar56 + bVar21;
                    pbVar1[0x14] = bVar57 + bVar22;
                    pbVar1[0x15] = bVar58 + bVar23;
                    pbVar1[0x16] = bVar59 + bVar24;
                    pbVar1[0x17] = bVar60 + bVar25;
                    pbVar1[0x18] = bVar61 + bVar26;
                    pbVar1[0x19] = bVar62 + bVar27;
                    pbVar1[0x1a] = bVar63 + bVar28;
                    pbVar1[0x1b] = bVar64 + bVar29;
                    pbVar1[0x1c] = bVar65 + bVar30;
                    pbVar1[0x1d] = bVar66 + bVar31;
                    pbVar1[0x1e] = bVar67 + bVar32;
                    pbVar1[0x1f] = bVar68 + bVar33;
                    pbVar106 = pbVar106 + 0x80;
                  } while (lVar111 < (int)(uVar102 - uVar121));
                  if (((byte)uVar102 & 0x7f) < 8) goto LAB_180471260;
                }
                uVar121 = uVar102 & 0x80000007;
                if ((int)uVar121 < 0) {
                  uVar121 = (uVar121 - 1 | 0xfffffff8) + 1;
                }
                pbVar106 = param_2 + lVar111;
                do {
                  uVar3 = *(undefined8 *)(pbVar106 + ((longlong)pbVar116 - (longlong)param_2));
                  uVar4 = *(undefined8 *)pbVar106;
                  lVar111 = lVar111 + 8;
                  *(ulonglong *)(pbVar106 + ((longlong)pbVar115 - (longlong)param_2)) =
                       CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                                CONCAT16((char)((ulonglong)uVar3 >> 0x30) +
                                         (char)((ulonglong)uVar4 >> 0x30),
                                         CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                                  (char)((ulonglong)uVar4 >> 0x28),
                                                  CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                                           (char)((ulonglong)uVar4 >> 0x20),
                                                           CONCAT13((char)((ulonglong)uVar3 >> 0x18)
                                                                    + (char)((ulonglong)uVar4 >>
                                                                            0x18),
                                                                    CONCAT12((char)((ulonglong)uVar3
                                                                                   >> 0x10) +
                                                                             (char)((ulonglong)uVar4
                                                                                   >> 0x10),
                                                                             CONCAT11((char)((
                                                  ulonglong)uVar3 >> 8) +
                                                  (char)((ulonglong)uVar4 >> 8),
                                                  (char)uVar3 + (char)uVar4)))))));
                  pbVar106 = pbVar106 + 8;
                } while (lVar111 < (int)(uVar102 - uVar121));
              }
            }
LAB_180471260:
            if (lVar111 < lVar105) {
              pbVar106 = param_2 + lVar111;
              lVar111 = lVar105 - lVar111;
              do {
                pbVar106[(longlong)pbVar115 - (longlong)param_2] =
                     pbVar106[(longlong)pbVar116 - (longlong)param_2] + *pbVar106;
                pbVar106 = pbVar106 + 1;
                lVar111 = lVar111 + -1;
              } while (lVar111 != 0);
            }
            break;
          case 3:
            if (0 < lVar122) {
              pbVar106 = param_2;
              lVar111 = lVar122;
              do {
                pbVar106[(longlong)pbVar115 - (longlong)param_2] =
                     (pbVar106[(longlong)pbVar116 - (longlong)param_2] >> 1) + *pbVar106;
                lVar111 = lVar111 + -1;
                pbVar106 = pbVar106 + 1;
              } while (lVar111 != 0);
            }
            if (lVar122 < lVar105) {
              lVar111 = lVar105 - lVar122;
              pbVar106 = pbVar116 + lVar122;
              do {
                pbVar106[(longlong)pbVar115 - (longlong)pbVar116] =
                     (char)((uint)pbVar106[(longlong)(pbVar115 + (-(longlong)pbVar116 - lVar122))] +
                            (uint)*pbVar106 >> 1) + pbVar106[(longlong)param_2 - (longlong)pbVar116]
                ;
                lVar111 = lVar111 + -1;
                pbVar106 = pbVar106 + 1;
              } while (lVar111 != 0);
              goto LAB_180471589;
            }
            break;
          case 4:
            lVar111 = 0;
            if ((0 < (int)local_88) && (7 < local_88)) {
              iVar112 = local_88 - 1;
              if (((param_2 + iVar112 < pbVar115) || (pbVar115 + iVar112 < param_2)) &&
                 ((pbVar116 + iVar112 < pbVar115 || (pbVar115 + iVar112 < pbVar116)))) {
                if (0x7f < local_88) {
                  uVar121 = local_88 & 0x8000007f;
                  if ((int)uVar121 < 0) {
                    uVar121 = (uVar121 - 1 | 0xffffff80) + 1;
                  }
                  lVar110 = (longlong)param_2 - (longlong)pbVar116;
                  lVar119 = (longlong)pbVar115 - (longlong)pbVar116;
                  pbVar106 = pbVar116 + 0x20;
                  do {
                    bVar37 = *pbVar106;
                    bVar38 = pbVar106[1];
                    bVar39 = pbVar106[2];
                    bVar40 = pbVar106[3];
                    bVar41 = pbVar106[4];
                    bVar42 = pbVar106[5];
                    bVar43 = pbVar106[6];
                    bVar44 = pbVar106[7];
                    bVar45 = pbVar106[8];
                    bVar46 = pbVar106[9];
                    bVar47 = pbVar106[10];
                    bVar48 = pbVar106[0xb];
                    bVar49 = pbVar106[0xc];
                    bVar50 = pbVar106[0xd];
                    bVar51 = pbVar106[0xe];
                    bVar52 = pbVar106[0xf];
                    bVar53 = pbVar106[0x10];
                    bVar54 = pbVar106[0x11];
                    bVar55 = pbVar106[0x12];
                    bVar56 = pbVar106[0x13];
                    bVar57 = pbVar106[0x14];
                    bVar58 = pbVar106[0x15];
                    bVar59 = pbVar106[0x16];
                    bVar60 = pbVar106[0x17];
                    bVar61 = pbVar106[0x18];
                    bVar62 = pbVar106[0x19];
                    bVar63 = pbVar106[0x1a];
                    bVar64 = pbVar106[0x1b];
                    bVar65 = pbVar106[0x1c];
                    bVar66 = pbVar106[0x1d];
                    bVar67 = pbVar106[0x1e];
                    bVar68 = pbVar106[0x1f];
                    bVar69 = pbVar106[-0x1f];
                    bVar70 = pbVar106[-0x1e];
                    bVar71 = pbVar106[-0x1d];
                    bVar72 = pbVar106[-0x1c];
                    bVar73 = pbVar106[-0x1b];
                    bVar74 = pbVar106[-0x1a];
                    bVar75 = pbVar106[-0x19];
                    bVar76 = pbVar106[-0x18];
                    bVar77 = pbVar106[-0x17];
                    bVar78 = pbVar106[-0x16];
                    bVar79 = pbVar106[-0x15];
                    bVar80 = pbVar106[-0x14];
                    bVar81 = pbVar106[-0x13];
                    bVar82 = pbVar106[-0x12];
                    bVar83 = pbVar106[-0x11];
                    bVar84 = pbVar106[-0x10];
                    bVar85 = pbVar106[-0xf];
                    bVar86 = pbVar106[-0xe];
                    bVar87 = pbVar106[-0xd];
                    bVar88 = pbVar106[-0xc];
                    bVar89 = pbVar106[-0xb];
                    bVar90 = pbVar106[-10];
                    bVar91 = pbVar106[-9];
                    bVar92 = pbVar106[-8];
                    bVar93 = pbVar106[-7];
                    bVar94 = pbVar106[-6];
                    bVar95 = pbVar106[-5];
                    bVar96 = pbVar106[-4];
                    bVar97 = pbVar106[-3];
                    bVar98 = pbVar106[-2];
                    bVar99 = pbVar106[-1];
                    pbVar1 = pbVar106 + lVar110 + -0x20;
                    bVar118 = pbVar1[1];
                    bVar101 = pbVar1[2];
                    bVar5 = pbVar1[3];
                    bVar6 = pbVar1[4];
                    bVar7 = pbVar1[5];
                    bVar8 = pbVar1[6];
                    bVar9 = pbVar1[7];
                    bVar10 = pbVar1[8];
                    bVar11 = pbVar1[9];
                    bVar12 = pbVar1[10];
                    bVar13 = pbVar1[0xb];
                    bVar14 = pbVar1[0xc];
                    bVar15 = pbVar1[0xd];
                    bVar16 = pbVar1[0xe];
                    bVar17 = pbVar1[0xf];
                    bVar18 = pbVar1[0x10];
                    bVar19 = pbVar1[0x11];
                    bVar20 = pbVar1[0x12];
                    bVar21 = pbVar1[0x13];
                    bVar22 = pbVar1[0x14];
                    bVar23 = pbVar1[0x15];
                    bVar24 = pbVar1[0x16];
                    bVar25 = pbVar1[0x17];
                    bVar26 = pbVar1[0x18];
                    bVar27 = pbVar1[0x19];
                    bVar28 = pbVar1[0x1a];
                    bVar29 = pbVar1[0x1b];
                    bVar30 = pbVar1[0x1c];
                    bVar31 = pbVar1[0x1d];
                    bVar32 = pbVar1[0x1e];
                    bVar33 = pbVar1[0x1f];
                    pbVar2 = pbVar106 + lVar119 + -0x20;
                    *pbVar2 = pbVar106[-0x20] + *pbVar1;
                    pbVar2[1] = bVar69 + bVar118;
                    pbVar2[2] = bVar70 + bVar101;
                    pbVar2[3] = bVar71 + bVar5;
                    pbVar2[4] = bVar72 + bVar6;
                    pbVar2[5] = bVar73 + bVar7;
                    pbVar2[6] = bVar74 + bVar8;
                    pbVar2[7] = bVar75 + bVar9;
                    pbVar2[8] = bVar76 + bVar10;
                    pbVar2[9] = bVar77 + bVar11;
                    pbVar2[10] = bVar78 + bVar12;
                    pbVar2[0xb] = bVar79 + bVar13;
                    pbVar2[0xc] = bVar80 + bVar14;
                    pbVar2[0xd] = bVar81 + bVar15;
                    pbVar2[0xe] = bVar82 + bVar16;
                    pbVar2[0xf] = bVar83 + bVar17;
                    pbVar2[0x10] = bVar84 + bVar18;
                    pbVar2[0x11] = bVar85 + bVar19;
                    pbVar2[0x12] = bVar86 + bVar20;
                    pbVar2[0x13] = bVar87 + bVar21;
                    pbVar2[0x14] = bVar88 + bVar22;
                    pbVar2[0x15] = bVar89 + bVar23;
                    pbVar2[0x16] = bVar90 + bVar24;
                    pbVar2[0x17] = bVar91 + bVar25;
                    pbVar2[0x18] = bVar92 + bVar26;
                    pbVar2[0x19] = bVar93 + bVar27;
                    pbVar2[0x1a] = bVar94 + bVar28;
                    pbVar2[0x1b] = bVar95 + bVar29;
                    pbVar2[0x1c] = bVar96 + bVar30;
                    pbVar2[0x1d] = bVar97 + bVar31;
                    pbVar2[0x1e] = bVar98 + bVar32;
                    pbVar2[0x1f] = bVar99 + bVar33;
                    pbVar1 = pbVar106 + lVar110;
                    bVar118 = pbVar1[1];
                    bVar101 = pbVar1[2];
                    bVar5 = pbVar1[3];
                    bVar6 = pbVar1[4];
                    bVar7 = pbVar1[5];
                    bVar8 = pbVar1[6];
                    bVar9 = pbVar1[7];
                    bVar10 = pbVar1[8];
                    bVar11 = pbVar1[9];
                    bVar12 = pbVar1[10];
                    bVar13 = pbVar1[0xb];
                    bVar14 = pbVar1[0xc];
                    bVar15 = pbVar1[0xd];
                    bVar16 = pbVar1[0xe];
                    bVar17 = pbVar1[0xf];
                    bVar18 = pbVar1[0x10];
                    bVar19 = pbVar1[0x11];
                    bVar20 = pbVar1[0x12];
                    bVar21 = pbVar1[0x13];
                    bVar22 = pbVar1[0x14];
                    bVar23 = pbVar1[0x15];
                    bVar24 = pbVar1[0x16];
                    bVar25 = pbVar1[0x17];
                    bVar26 = pbVar1[0x18];
                    bVar27 = pbVar1[0x19];
                    bVar28 = pbVar1[0x1a];
                    bVar29 = pbVar1[0x1b];
                    bVar30 = pbVar1[0x1c];
                    bVar31 = pbVar1[0x1d];
                    bVar32 = pbVar1[0x1e];
                    bVar33 = pbVar1[0x1f];
                    bVar69 = pbVar106[0x20];
                    bVar70 = pbVar106[0x21];
                    bVar71 = pbVar106[0x22];
                    bVar72 = pbVar106[0x23];
                    bVar73 = pbVar106[0x24];
                    bVar74 = pbVar106[0x25];
                    bVar75 = pbVar106[0x26];
                    bVar76 = pbVar106[0x27];
                    bVar77 = pbVar106[0x28];
                    bVar78 = pbVar106[0x29];
                    bVar79 = pbVar106[0x2a];
                    bVar80 = pbVar106[0x2b];
                    bVar81 = pbVar106[0x2c];
                    bVar82 = pbVar106[0x2d];
                    bVar83 = pbVar106[0x2e];
                    bVar84 = pbVar106[0x2f];
                    bVar85 = pbVar106[0x30];
                    bVar86 = pbVar106[0x31];
                    bVar87 = pbVar106[0x32];
                    bVar88 = pbVar106[0x33];
                    bVar89 = pbVar106[0x34];
                    bVar90 = pbVar106[0x35];
                    bVar91 = pbVar106[0x36];
                    bVar92 = pbVar106[0x37];
                    bVar93 = pbVar106[0x38];
                    bVar94 = pbVar106[0x39];
                    bVar95 = pbVar106[0x3a];
                    bVar96 = pbVar106[0x3b];
                    bVar97 = pbVar106[0x3c];
                    bVar98 = pbVar106[0x3d];
                    bVar99 = pbVar106[0x3e];
                    bVar100 = pbVar106[0x3f];
                    pbVar2 = pbVar106 + lVar119;
                    *pbVar2 = bVar37 + *pbVar1;
                    pbVar2[1] = bVar38 + bVar118;
                    pbVar2[2] = bVar39 + bVar101;
                    pbVar2[3] = bVar40 + bVar5;
                    pbVar2[4] = bVar41 + bVar6;
                    pbVar2[5] = bVar42 + bVar7;
                    pbVar2[6] = bVar43 + bVar8;
                    pbVar2[7] = bVar44 + bVar9;
                    pbVar2[8] = bVar45 + bVar10;
                    pbVar2[9] = bVar46 + bVar11;
                    pbVar2[10] = bVar47 + bVar12;
                    pbVar2[0xb] = bVar48 + bVar13;
                    pbVar2[0xc] = bVar49 + bVar14;
                    pbVar2[0xd] = bVar50 + bVar15;
                    pbVar2[0xe] = bVar51 + bVar16;
                    pbVar2[0xf] = bVar52 + bVar17;
                    pbVar2[0x10] = bVar53 + bVar18;
                    pbVar2[0x11] = bVar54 + bVar19;
                    pbVar2[0x12] = bVar55 + bVar20;
                    pbVar2[0x13] = bVar56 + bVar21;
                    pbVar2[0x14] = bVar57 + bVar22;
                    pbVar2[0x15] = bVar58 + bVar23;
                    pbVar2[0x16] = bVar59 + bVar24;
                    pbVar2[0x17] = bVar60 + bVar25;
                    pbVar2[0x18] = bVar61 + bVar26;
                    pbVar2[0x19] = bVar62 + bVar27;
                    pbVar2[0x1a] = bVar63 + bVar28;
                    pbVar2[0x1b] = bVar64 + bVar29;
                    pbVar2[0x1c] = bVar65 + bVar30;
                    pbVar2[0x1d] = bVar66 + bVar31;
                    pbVar2[0x1e] = bVar67 + bVar32;
                    pbVar2[0x1f] = bVar68 + bVar33;
                    pbVar1 = pbVar106 + lVar110 + 0x20;
                    bVar118 = pbVar1[1];
                    bVar101 = pbVar1[2];
                    bVar5 = pbVar1[3];
                    bVar6 = pbVar1[4];
                    bVar7 = pbVar1[5];
                    bVar8 = pbVar1[6];
                    bVar9 = pbVar1[7];
                    bVar10 = pbVar1[8];
                    bVar11 = pbVar1[9];
                    bVar12 = pbVar1[10];
                    bVar13 = pbVar1[0xb];
                    bVar14 = pbVar1[0xc];
                    bVar15 = pbVar1[0xd];
                    bVar16 = pbVar1[0xe];
                    bVar17 = pbVar1[0xf];
                    bVar18 = pbVar1[0x10];
                    bVar19 = pbVar1[0x11];
                    bVar20 = pbVar1[0x12];
                    bVar21 = pbVar1[0x13];
                    bVar22 = pbVar1[0x14];
                    bVar23 = pbVar1[0x15];
                    bVar24 = pbVar1[0x16];
                    bVar25 = pbVar1[0x17];
                    bVar26 = pbVar1[0x18];
                    bVar27 = pbVar1[0x19];
                    bVar28 = pbVar1[0x1a];
                    bVar29 = pbVar1[0x1b];
                    bVar30 = pbVar1[0x1c];
                    bVar31 = pbVar1[0x1d];
                    bVar32 = pbVar1[0x1e];
                    bVar33 = pbVar1[0x1f];
                    bVar37 = pbVar106[0x40];
                    bVar38 = pbVar106[0x41];
                    bVar39 = pbVar106[0x42];
                    bVar40 = pbVar106[0x43];
                    bVar41 = pbVar106[0x44];
                    bVar42 = pbVar106[0x45];
                    bVar43 = pbVar106[0x46];
                    bVar44 = pbVar106[0x47];
                    bVar45 = pbVar106[0x48];
                    bVar46 = pbVar106[0x49];
                    bVar47 = pbVar106[0x4a];
                    bVar48 = pbVar106[0x4b];
                    bVar49 = pbVar106[0x4c];
                    bVar50 = pbVar106[0x4d];
                    bVar51 = pbVar106[0x4e];
                    bVar52 = pbVar106[0x4f];
                    bVar53 = pbVar106[0x50];
                    bVar54 = pbVar106[0x51];
                    bVar55 = pbVar106[0x52];
                    bVar56 = pbVar106[0x53];
                    bVar57 = pbVar106[0x54];
                    bVar58 = pbVar106[0x55];
                    bVar59 = pbVar106[0x56];
                    bVar60 = pbVar106[0x57];
                    bVar61 = pbVar106[0x58];
                    bVar62 = pbVar106[0x59];
                    bVar63 = pbVar106[0x5a];
                    bVar64 = pbVar106[0x5b];
                    bVar65 = pbVar106[0x5c];
                    bVar66 = pbVar106[0x5d];
                    bVar67 = pbVar106[0x5e];
                    bVar68 = pbVar106[0x5f];
                    pbVar2 = pbVar106 + lVar119 + 0x20;
                    *pbVar2 = bVar69 + *pbVar1;
                    pbVar2[1] = bVar70 + bVar118;
                    pbVar2[2] = bVar71 + bVar101;
                    pbVar2[3] = bVar72 + bVar5;
                    pbVar2[4] = bVar73 + bVar6;
                    pbVar2[5] = bVar74 + bVar7;
                    pbVar2[6] = bVar75 + bVar8;
                    pbVar2[7] = bVar76 + bVar9;
                    pbVar2[8] = bVar77 + bVar10;
                    pbVar2[9] = bVar78 + bVar11;
                    pbVar2[10] = bVar79 + bVar12;
                    pbVar2[0xb] = bVar80 + bVar13;
                    pbVar2[0xc] = bVar81 + bVar14;
                    pbVar2[0xd] = bVar82 + bVar15;
                    pbVar2[0xe] = bVar83 + bVar16;
                    pbVar2[0xf] = bVar84 + bVar17;
                    pbVar2[0x10] = bVar85 + bVar18;
                    pbVar2[0x11] = bVar86 + bVar19;
                    pbVar2[0x12] = bVar87 + bVar20;
                    pbVar2[0x13] = bVar88 + bVar21;
                    pbVar2[0x14] = bVar89 + bVar22;
                    pbVar2[0x15] = bVar90 + bVar23;
                    pbVar2[0x16] = bVar91 + bVar24;
                    pbVar2[0x17] = bVar92 + bVar25;
                    pbVar2[0x18] = bVar93 + bVar26;
                    pbVar2[0x19] = bVar94 + bVar27;
                    pbVar2[0x1a] = bVar95 + bVar28;
                    pbVar2[0x1b] = bVar96 + bVar29;
                    pbVar2[0x1c] = bVar97 + bVar30;
                    pbVar2[0x1d] = bVar98 + bVar31;
                    pbVar2[0x1e] = bVar99 + bVar32;
                    pbVar2[0x1f] = bVar100 + bVar33;
                    pbVar1 = pbVar106 + lVar110 + 0x40;
                    bVar118 = pbVar1[1];
                    bVar101 = pbVar1[2];
                    bVar5 = pbVar1[3];
                    bVar6 = pbVar1[4];
                    bVar7 = pbVar1[5];
                    bVar8 = pbVar1[6];
                    bVar9 = pbVar1[7];
                    bVar10 = pbVar1[8];
                    bVar11 = pbVar1[9];
                    bVar12 = pbVar1[10];
                    bVar13 = pbVar1[0xb];
                    bVar14 = pbVar1[0xc];
                    bVar15 = pbVar1[0xd];
                    bVar16 = pbVar1[0xe];
                    bVar17 = pbVar1[0xf];
                    bVar18 = pbVar1[0x10];
                    bVar19 = pbVar1[0x11];
                    bVar20 = pbVar1[0x12];
                    bVar21 = pbVar1[0x13];
                    bVar22 = pbVar1[0x14];
                    bVar23 = pbVar1[0x15];
                    bVar24 = pbVar1[0x16];
                    bVar25 = pbVar1[0x17];
                    bVar26 = pbVar1[0x18];
                    bVar27 = pbVar1[0x19];
                    bVar28 = pbVar1[0x1a];
                    bVar29 = pbVar1[0x1b];
                    bVar30 = pbVar1[0x1c];
                    bVar31 = pbVar1[0x1d];
                    bVar32 = pbVar1[0x1e];
                    bVar33 = pbVar1[0x1f];
                    lVar111 = lVar111 + 0x80;
                    pbVar2 = pbVar106 + lVar119 + 0x40;
                    *pbVar2 = bVar37 + *pbVar1;
                    pbVar2[1] = bVar38 + bVar118;
                    pbVar2[2] = bVar39 + bVar101;
                    pbVar2[3] = bVar40 + bVar5;
                    pbVar2[4] = bVar41 + bVar6;
                    pbVar2[5] = bVar42 + bVar7;
                    pbVar2[6] = bVar43 + bVar8;
                    pbVar2[7] = bVar44 + bVar9;
                    pbVar2[8] = bVar45 + bVar10;
                    pbVar2[9] = bVar46 + bVar11;
                    pbVar2[10] = bVar47 + bVar12;
                    pbVar2[0xb] = bVar48 + bVar13;
                    pbVar2[0xc] = bVar49 + bVar14;
                    pbVar2[0xd] = bVar50 + bVar15;
                    pbVar2[0xe] = bVar51 + bVar16;
                    pbVar2[0xf] = bVar52 + bVar17;
                    pbVar2[0x10] = bVar53 + bVar18;
                    pbVar2[0x11] = bVar54 + bVar19;
                    pbVar2[0x12] = bVar55 + bVar20;
                    pbVar2[0x13] = bVar56 + bVar21;
                    pbVar2[0x14] = bVar57 + bVar22;
                    pbVar2[0x15] = bVar58 + bVar23;
                    pbVar2[0x16] = bVar59 + bVar24;
                    pbVar2[0x17] = bVar60 + bVar25;
                    pbVar2[0x18] = bVar61 + bVar26;
                    pbVar2[0x19] = bVar62 + bVar27;
                    pbVar2[0x1a] = bVar63 + bVar28;
                    pbVar2[0x1b] = bVar64 + bVar29;
                    pbVar2[0x1c] = bVar65 + bVar30;
                    pbVar2[0x1d] = bVar66 + bVar31;
                    pbVar2[0x1e] = bVar67 + bVar32;
                    pbVar2[0x1f] = bVar68 + bVar33;
                    pbVar106 = pbVar106 + 0x80;
                  } while (lVar111 < (int)(local_88 - uVar121));
                  if (((byte)local_88 & 0x7f) < 8) goto LAB_180471460;
                }
                uVar121 = local_88 & 0x80000007;
                if ((int)uVar121 < 0) {
                  uVar121 = (uVar121 - 1 | 0xfffffff8) + 1;
                }
                pbVar106 = param_2 + lVar111;
                do {
                  uVar3 = *(undefined8 *)(pbVar106 + ((longlong)pbVar116 - (longlong)param_2));
                  uVar4 = *(undefined8 *)pbVar106;
                  lVar111 = lVar111 + 8;
                  *(ulonglong *)(pbVar106 + ((longlong)pbVar115 - (longlong)param_2)) =
                       CONCAT17((char)((ulonglong)uVar3 >> 0x38) + (char)((ulonglong)uVar4 >> 0x38),
                                CONCAT16((char)((ulonglong)uVar3 >> 0x30) +
                                         (char)((ulonglong)uVar4 >> 0x30),
                                         CONCAT15((char)((ulonglong)uVar3 >> 0x28) +
                                                  (char)((ulonglong)uVar4 >> 0x28),
                                                  CONCAT14((char)((ulonglong)uVar3 >> 0x20) +
                                                           (char)((ulonglong)uVar4 >> 0x20),
                                                           CONCAT13((char)((ulonglong)uVar3 >> 0x18)
                                                                    + (char)((ulonglong)uVar4 >>
                                                                            0x18),
                                                                    CONCAT12((char)((ulonglong)uVar3
                                                                                   >> 0x10) +
                                                                             (char)((ulonglong)uVar4
                                                                                   >> 0x10),
                                                                             CONCAT11((char)((
                                                  ulonglong)uVar3 >> 8) +
                                                  (char)((ulonglong)uVar4 >> 8),
                                                  (char)uVar3 + (char)uVar4)))))));
                  pbVar106 = pbVar106 + 8;
                } while (lVar111 < (int)(local_88 - uVar121));
              }
            }
LAB_180471460:
            if (lVar111 < lVar122) {
              pbVar106 = param_2 + lVar111;
              lVar111 = lVar122 - lVar111;
              do {
                pbVar106[(longlong)pbVar115 - (longlong)param_2] =
                     pbVar106[(longlong)pbVar116 - (longlong)param_2] + *pbVar106;
                pbVar106 = pbVar106 + 1;
                lVar111 = lVar111 + -1;
              } while (lVar111 != 0);
            }
            if (lVar122 < lVar105) {
              lVar111 = lVar105 - lVar122;
              pbVar106 = pbVar115;
              do {
                bVar118 = pbVar106[(longlong)(pbVar116 + (lVar122 - (longlong)pbVar115))];
                bVar101 = *pbVar106;
                iVar112 = ((uint)pbVar106[(longlong)pbVar116 - (longlong)pbVar115] * 3 -
                          (uint)bVar118) - (uint)bVar101;
                uVar120 = (uint)bVar101;
                uVar121 = (uint)bVar118;
                if ((uint)bVar101 < (uint)bVar118) {
                  uVar120 = (uint)bVar118;
                  uVar121 = (uint)bVar101;
                }
                bVar118 = pbVar106[(longlong)pbVar116 - (longlong)pbVar115];
                if ((int)uVar120 <= iVar112) {
                  bVar118 = (byte)uVar121;
                }
                if (iVar112 <= (int)uVar121) {
                  bVar118 = (byte)uVar120;
                }
                pbVar106[lVar122] =
                     bVar118 + pbVar106[(longlong)(param_2 + (lVar122 - (longlong)pbVar115))];
                lVar111 = lVar111 + -1;
                pbVar106 = pbVar106 + 1;
              } while (lVar111 != 0);
              uVar126 = (ulonglong)param_7;
              goto LAB_180471589;
            }
            break;
          case 5:
            FUN_18063aed0(pbVar115,param_2);
            if (lVar122 < lVar105) {
              lVar111 = lVar105 - lVar122;
              pbVar116 = param_2 + lVar122;
              do {
                pbVar116[(longlong)pbVar115 - (longlong)param_2] =
                     (pbVar116[(longlong)(pbVar115 + (-(longlong)param_2 - lVar122))] >> 1) +
                     *pbVar116;
                lVar111 = lVar111 + -1;
                pbVar116 = pbVar116 + 1;
              } while (lVar111 != 0);
            }
LAB_180471589:
            uVar114 = (ulonglong)param_5;
          }
          param_2 = param_2 + lVar105;
          iVar112 = (int)uVar126;
          if (iVar112 < 8) {
            if (param_8 == 0) {
              cVar125 = *pcVar109;
            }
            else {
              cVar125 = '\x01';
            }
            bVar118 = 0;
            uVar103 = 0;
            if (param_7 == 4) {
              pcVar113 = pcVar117;
              if (uVar108 != 0) {
                do {
                  uVar121 = uVar103 & 1;
                  if (uVar121 == 0) {
                    bVar118 = *pbVar115;
                  }
                  bVar101 = bVar118 >> 4;
                  uVar103 = uVar103 + 1;
                  bVar118 = bVar118 << 4;
                  *pcVar113 = bVar101 * cVar125;
                  pbVar116 = pbVar115 + 1;
                  if (uVar121 != 0) {
                    pbVar116 = pbVar115;
                  }
                  pbVar115 = pbVar116;
                  pcVar113 = pcVar113 + 1;
                } while (uVar103 < uVar108);
              }
            }
            else if (param_7 == 2) {
              pcVar113 = pcVar117;
              if (uVar108 != 0) {
                do {
                  uVar121 = uVar103 & 3;
                  if (uVar121 == 0) {
                    bVar118 = *pbVar115;
                  }
                  bVar101 = bVar118 >> 6;
                  uVar103 = uVar103 + 1;
                  bVar118 = bVar118 << 2;
                  *pcVar113 = bVar101 * cVar125;
                  pbVar116 = pbVar115 + 1;
                  if (uVar121 != 0) {
                    pbVar116 = pbVar115;
                  }
                  pbVar115 = pbVar116;
                  pcVar113 = pcVar113 + 1;
                } while (uVar103 < uVar108);
              }
            }
            else {
              pcVar113 = pcVar117;
              if (uVar108 != 0) {
                do {
                  uVar121 = uVar103 & 7;
                  if (uVar121 == 0) {
                    bVar118 = *pbVar115;
                  }
                  cVar36 = (char)bVar118 >> 7;
                  bVar118 = bVar118 * '\x02';
                  uVar103 = uVar103 + 1;
                  *pcVar113 = -cVar36 * cVar125;
                  pbVar116 = pbVar115 + 1;
                  if (uVar121 != 0) {
                    pbVar116 = pbVar115;
                  }
                  pbVar115 = pbVar116;
                  pcVar113 = pcVar113 + 1;
                } while (uVar103 < uVar108);
              }
            }
            if (iVar34 != param_4) {
              lVar111 = uVar123 - 1;
              if (iVar34 == 1) {
                for (; -1 < lVar111; lVar111 = lVar111 + -1) {
                  pcVar117[lVar111 * 2 + 1] = -1;
                  pcVar117[lVar111 * 2] = pcVar117[lVar111];
                }
              }
              else if (-1 < lVar111) {
                pcVar113 = pcVar117 + lVar111 * 4 + 2;
                pcVar117 = pcVar117 + lVar111 * 3 + 1;
                do {
                  lVar111 = lVar111 + -1;
                  pcVar113[1] = -1;
                  *pcVar113 = pcVar117[1];
                  pcVar113[-1] = *pcVar117;
                  pcVar113[-2] = pcVar117[-1];
                  pcVar113 = pcVar113 + -4;
                  pcVar117 = pcVar117 + -3;
                } while (-1 < lVar111);
              }
            }
LAB_180471712:
            uVar126 = (ulonglong)param_7;
          }
          else if (iVar112 == 8) {
            if (iVar34 == param_4) {
              FUN_18063aed0(pcVar117,pbVar115,uVar108);
            }
            else {
              lVar111 = uVar123 - 1;
              if (iVar34 == 1) {
                for (; -1 < lVar111; lVar111 = lVar111 + -1) {
                  pcVar117[lVar111 * 2 + 1] = -1;
                  pcVar117[lVar111 * 2] = pbVar115[lVar111];
                }
              }
              else if (-1 < lVar111) {
                pbVar116 = (byte *)(pcVar117 + lVar111 * 4 + 2);
                pbVar115 = pbVar115 + lVar111 * 3 + 1;
                do {
                  lVar111 = lVar111 + -1;
                  pbVar116[1] = 0xff;
                  *pbVar116 = pbVar115[1];
                  pbVar116[-1] = *pbVar115;
                  pbVar116[-2] = pbVar115[-1];
                  pbVar116 = pbVar116 + -4;
                  pbVar115 = pbVar115 + -3;
                } while (-1 < lVar111);
              }
            }
          }
          else if (iVar112 == 0x10) {
            if (iVar34 == param_4) {
              if (uVar108 != 0) {
                uVar114 = (ulonglong)uVar108;
                pcVar113 = pcVar117;
                do {
                  bVar118 = *pbVar115;
                  pbVar115 = pbVar115 + 2;
                  *(ushort *)pcVar113 =
                       CONCAT11(bVar118,pcVar113[((ulonglong)uVar103 - (longlong)pcVar117) + lVar104
                                                 + 1]);
                  uVar114 = uVar114 - 1;
                  pcVar113 = pcVar113 + 2;
                } while (uVar114 != 0);
              }
            }
            else if (iVar34 == 1) {
              if ((int)uVar114 != 0) {
                uVar114 = uVar114 & 0xffffffff;
                do {
                  bVar118 = *pbVar115;
                  bVar101 = pbVar115[1];
                  pbVar115 = pbVar115 + 2;
                  pcVar117[2] = -1;
                  pcVar117[3] = -1;
                  *(ushort *)pcVar117 = CONCAT11(bVar118,bVar101);
                  uVar114 = uVar114 - 1;
                  pcVar117 = pcVar117 + 4;
                } while (uVar114 != 0);
                goto LAB_180471712;
              }
            }
            else if ((int)uVar114 != 0) {
              uVar114 = uVar114 & 0xffffffff;
              pcVar117 = pcVar117 + 4;
              do {
                *(ushort *)(pcVar117 + -4) = CONCAT11(*pbVar115,pbVar115[1]);
                *(ushort *)(pcVar117 + -2) = CONCAT11(pbVar115[2],pbVar115[3]);
                bVar118 = pbVar115[4];
                bVar101 = pbVar115[5];
                pcVar117[2] = -1;
                pcVar117[3] = -1;
                *(ushort *)pcVar117 = CONCAT11(bVar118,bVar101);
                uVar114 = uVar114 - 1;
                pbVar115 = pbVar115 + 6;
                pcVar117 = pcVar117 + 8;
              } while (uVar114 != 0);
            }
          }
          local_6c = local_6c + 1;
          uVar114 = (ulonglong)param_5;
        } while (local_6c < param_6);
      }
      thunk_FUN_180621380(lVar104);
      return 1;
    }
  }
  return 0;
}



