// FUN_18008dfb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18008dfb0 */

void FUN_18008dfb0(byte *param_1,ulonglong *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  ulonglong uVar20;
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
  ulonglong uVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte local_16f;
  byte local_16e;
  byte local_16d;
  byte local_16c;
  byte local_16b;
  byte local_16a;
  byte local_169;
  longlong local_138;
  
  local_16d = *param_1 ^ (byte)*param_2;
  local_169 = param_1[1] ^ *(byte *)((longlong)param_2 + 1);
  bVar21 = param_1[2] ^ *(byte *)((longlong)param_2 + 2);
  bVar27 = param_1[3] ^ *(byte *)((longlong)param_2 + 3);
  local_16c = param_1[4] ^ *(byte *)((longlong)param_2 + 4);
  bVar34 = param_1[5] ^ *(byte *)((longlong)param_2 + 5);
  uVar32 = (ulonglong)(param_1[6] ^ *(byte *)((longlong)param_2 + 6));
  bVar22 = param_1[7] ^ *(byte *)((longlong)param_2 + 7);
  local_16b = param_1[8] ^ (byte)param_2[1];
  local_16a = param_1[9] ^ *(byte *)((longlong)param_2 + 9);
  bVar33 = param_1[10] ^ *(byte *)((longlong)param_2 + 10);
  bVar36 = param_1[0xb] ^ *(byte *)((longlong)param_2 + 0xb);
  local_16f = param_1[0xc] ^ *(byte *)((longlong)param_2 + 0xc);
  local_16e = param_1[0xd] ^ *(byte *)((longlong)param_2 + 0xd);
  bVar29 = param_1[0xe] ^ *(byte *)((longlong)param_2 + 0xe);
  bVar23 = param_1[0xf] ^ *(byte *)((longlong)param_2 + 0xf);
  local_138 = 0x1f;
  do {
    bVar1 = (&DAT_180669e40)[local_16d];
    bVar34 = (&DAT_180669e40)[bVar34];
    bVar33 = (&DAT_180669e40)[bVar33];
    bVar2 = (&DAT_180669e40)[bVar23];
    bVar26 = bVar34 ^ bVar1;
    bVar3 = (&DAT_180669e40)[local_16c];
    bVar23 = (&DAT_180669e40)[local_16a];
    bVar25 = bVar23 ^ bVar3;
    bVar29 = (&DAT_180669e40)[bVar29];
    bVar27 = (&DAT_180669e40)[bVar27];
    bVar4 = (&DAT_180669e40)[bVar22];
    bVar5 = (&DAT_180669e40)[local_16b];
    bVar6 = (&DAT_180669e40)[local_16e];
    bVar7 = (&DAT_180669e40)[bVar21];
    bVar28 = bVar6 ^ bVar5;
    bVar24 = bVar28 ^ bVar7 ^ bVar4;
    bVar8 = (&DAT_180669e40)[local_169];
    bVar9 = (&DAT_180669e40)[local_16f];
    bVar31 = bVar2 ^ bVar33 ^ bVar26;
    bVar30 = bVar9 ^ bVar8;
    bVar22 = (char)(bVar3 ^ bVar27) >> 7 & 0x1bU ^ (bVar3 ^ bVar27) * '\x02' ^
             param_1[local_138 + -8] ^ bVar29 ^ bVar25;
    bVar35 = bVar29 ^ bVar25 ^ bVar27;
    bVar10 = (&DAT_180669e40)[bVar36];
    bVar11 = (&DAT_180669e40)[uVar32];
    local_169 = bVar31 ^ bVar34 ^
                (char)(bVar33 ^ bVar34) >> 7 & 0x1bU ^ (bVar33 ^ bVar34) * '\x02' ^
                param_1[local_138 + -0xe];
    bVar21 = bVar26 ^ bVar2 ^
             (char)(bVar2 ^ bVar33) >> 7 & 0x1bU ^ (bVar2 ^ bVar33) * '\x02' ^
             param_1[local_138 + -0xd];
    bVar34 = bVar35 ^ bVar23 ^
             (char)(bVar29 ^ bVar23) >> 7 & 0x1bU ^ (bVar29 ^ bVar23) * '\x02' ^
             param_1[local_138 + -10];
    uVar32 = (ulonglong)
             (byte)(bVar25 ^ bVar27 ^
                   (char)(bVar29 ^ bVar27) >> 7 & 0x1bU ^ (bVar29 ^ bVar27) * '\x02' ^
                   param_1[local_138 + -9]);
    local_16a = bVar24 ^ bVar6 ^
                (char)(bVar6 ^ bVar7) >> 7 & 0x1bU ^ (bVar6 ^ bVar7) * '\x02' ^
                param_1[local_138 + -6];
    bVar36 = (char)(bVar5 ^ bVar4) >> 7 & 0x1bU ^ (bVar5 ^ bVar4) * '\x02' ^ param_1[local_138 + -4]
             ^ bVar28 ^ bVar7;
    bVar29 = bVar30 ^ bVar11 ^ bVar10;
    bVar23 = (char)(bVar9 ^ bVar10) >> 7 & 0x1bU ^ (bVar9 ^ bVar10) * '\x02' ^ param_1[local_138] ^
             bVar30 ^ bVar11;
    local_16d = bVar1 ^ bVar31 ^
                (char)bVar26 >> 7 & 0x1bU ^ bVar26 * '\x02' ^ param_1[local_138 + -0xf];
    bVar27 = (char)(bVar2 ^ bVar1) >> 7 & 0x1bU ^ (bVar2 ^ bVar1) * '\x02' ^
             param_1[local_138 + -0xc] ^ bVar33 ^ bVar26;
    local_16c = bVar3 ^ bVar35 ^
                (char)bVar25 >> 7 & 0x1bU ^ bVar25 * '\x02' ^ param_1[local_138 + -0xb];
    local_16b = bVar5 ^ bVar24 ^
                (char)bVar28 >> 7 & 0x1bU ^ bVar28 * '\x02' ^ param_1[local_138 + -7];
    local_16f = bVar9 ^ bVar29 ^
                (char)bVar30 >> 7 & 0x1bU ^ bVar30 * '\x02' ^ param_1[local_138 + -3];
    bVar33 = bVar28 ^ bVar4 ^
             (char)(bVar7 ^ bVar4) >> 7 & 0x1bU ^ (bVar7 ^ bVar4) * '\x02' ^ param_1[local_138 + -5]
    ;
    local_16e = bVar29 ^ bVar8 ^
                (char)(bVar11 ^ bVar8) >> 7 & 0x1bU ^ (bVar11 ^ bVar8) * '\x02' ^
                param_1[local_138 + -2];
    bVar29 = bVar30 ^ bVar10 ^
             (char)(bVar10 ^ bVar11) >> 7 & 0x1bU ^ (bVar10 ^ bVar11) * '\x02' ^
             param_1[local_138 + -1];
    local_138 = local_138 + 0x10;
  } while (local_138 != 0xaf);
  uVar20 = *(ulonglong *)(param_1 + 0xa8);
  uVar12 = (&DAT_180669e40)[bVar36];
  uVar13 = (&DAT_180669e40)[uVar32];
  uVar14 = (&DAT_180669e40)[local_169];
  uVar15 = (&DAT_180669e40)[local_16f];
  uVar16 = (&DAT_180669e40)[bVar22];
  uVar17 = (&DAT_180669e40)[bVar21];
  uVar18 = (&DAT_180669e40)[local_16e];
  uVar19 = (&DAT_180669e40)[local_16b];
  *param_2 = CONCAT44(CONCAT22(CONCAT11((&DAT_180669e40)[bVar27],(&DAT_180669e40)[bVar29]),
                               CONCAT11((&DAT_180669e40)[local_16a],(&DAT_180669e40)[local_16c])),
                      CONCAT22(CONCAT11((&DAT_180669e40)[bVar23],(&DAT_180669e40)[bVar33]),
                               CONCAT11((&DAT_180669e40)[bVar34],(&DAT_180669e40)[local_16d]))) ^
             *(ulonglong *)(param_1 + 0xa0);
  param_2[1] = CONCAT44(CONCAT22(CONCAT11(uVar12,uVar13),CONCAT11(uVar14,uVar15)),
                        CONCAT22(CONCAT11(uVar16,uVar17),CONCAT11(uVar18,uVar19))) ^ uVar20;
  return;
}



