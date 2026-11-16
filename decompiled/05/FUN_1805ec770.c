// FUN_1805ec770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ec770 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805ec770(uint *param_1,ulonglong *param_2,longlong *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,byte *param_7,longlong param_8,int param_9
                  )

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  ulonglong uVar9;
  longlong lVar10;
  char cVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint uVar14;
  byte bVar15;
  byte bVar16;
  undefined1 auStack_198 [32];
  longlong local_178;
  undefined4 local_168;
  uint local_164;
  byte *local_160;
  undefined1 local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  local_160 = param_7;
  pbVar3 = param_7 + param_8;
  if (param_8 != 0) {
    bVar5 = *param_7;
    pbVar12 = param_7 + 1;
    *param_1 = (uint)bVar5;
    if (bVar5 != 0) {
      if (0x7f < bVar5) {
        if (pbVar3 <= pbVar12) {
        }
        *param_1 = (bVar5 - 0x80) * 0x100 + (uint)*pbVar12;
        pbVar12 = param_7 + 2;
      }
      if (pbVar12 < pbVar3) {
        bVar5 = *pbVar12;
        bVar16 = bVar5 >> 4 & 3;
        bVar15 = bVar5 >> 2 & 3;
        bVar7 = bVar5 >> 6;
        if ((bVar5 & 2) == 0) {
          pbVar13 = pbVar12 + 2;
          if (pbVar3 < pbVar13) {
          }
          bVar6 = pbVar12[1];
          uVar9 = (ulonglong)(bVar5 & 1);
        }
        else {
          pbVar13 = pbVar12 + 3;
          if (pbVar3 < pbVar13) {
          }
          uVar9 = (ulonglong)pbVar12[1];
          bVar6 = pbVar12[2];
        }
        lVar10 = uVar9 * 0x100 + (ulonglong)bVar6;
        *param_2 = (ulonglong)pbVar13;
        pbVar13 = pbVar13 + lVar10;
        *param_3 = lVar10;
        if (pbVar13 <= pbVar3 + -3) {
          if (bVar7 == 0) {
            *param_4 = 0x10006;
            uVar14 = 2;
            do {
              uVar9 = (ulonglong)(uVar14 - 2);
              uVar1 = uVar14 - 1;
              *(undefined2 *)(param_4 + uVar9 + 1) = 0;
              *(undefined2 *)(param_4 + (ulonglong)uVar1 + 1) = 0;
              cVar8 = (char)uVar14;
              cVar11 = (char)(uVar14 - 2);
              *(char *)((longlong)param_4 + uVar9 * 4 + 6) = cVar11;
              *(undefined1 *)((longlong)param_4 + uVar9 * 4 + 7) = 6;
              *(char *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 6) = cVar8 + -1;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 7) = 6;
              puVar4 = param_4 + (ulonglong)uVar14 + 1;
              *(undefined2 *)puVar4 = 0;
              *(char *)((longlong)puVar4 + 2) = cVar8;
              uVar1 = uVar14 + 1;
              *(undefined2 *)(param_4 + (ulonglong)uVar1 + 1) = 0;
              *(undefined1 *)((longlong)puVar4 + 3) = 6;
              *(char *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\x01';
              uVar2 = uVar14 + 2;
              *(undefined2 *)(param_4 + (ulonglong)uVar2 + 1) = 0;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 7) = 6;
              *(char *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\x02';
              uVar1 = uVar14 + 3;
              *(undefined2 *)(param_4 + (ulonglong)uVar1 + 1) = 0;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 7) = 6;
              *(char *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\x03';
              uVar2 = uVar14 + 4;
              *(undefined2 *)(param_4 + (ulonglong)uVar2 + 1) = 0;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 7) = 6;
              *(char *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\x04';
              uVar1 = uVar14 + 5;
              *(undefined2 *)(param_4 + (ulonglong)uVar1 + 1) = 0;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 7) = 6;
              *(char *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\x05';
              uVar2 = uVar14 + 6;
              *(undefined2 *)(param_4 + (ulonglong)uVar2 + 1) = 0;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 7) = 6;
              *(char *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\x06';
              uVar1 = uVar14 + 7;
              *(undefined2 *)(param_4 + (ulonglong)uVar1 + 1) = 0;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 7) = 6;
              *(char *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\a';
              uVar2 = uVar14 + 8;
              *(undefined2 *)(param_4 + (ulonglong)uVar2 + 1) = 0;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 7) = 6;
              *(char *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\b';
              uVar1 = uVar14 + 9;
              *(undefined2 *)(param_4 + (ulonglong)uVar1 + 1) = 0;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 7) = 6;
              *(char *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\t';
              uVar2 = uVar14 + 10;
              *(undefined2 *)(param_4 + (ulonglong)uVar2 + 1) = 0;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 7) = 6;
              *(char *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\n';
              uVar1 = uVar14 + 0xb;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 7) = 6;
              *(undefined2 *)(param_4 + (ulonglong)uVar1 + 1) = 0;
              *(char *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\v';
              uVar2 = uVar14 + 0xc;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar1 * 4 + 7) = 6;
              *(undefined2 *)(param_4 + (ulonglong)uVar2 + 1) = 0;
              *(char *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\f';
              uVar9 = (ulonglong)(uVar14 + 0xd);
              *(undefined2 *)(param_4 + uVar9 + 1) = 0;
              *(char *)((longlong)param_4 + uVar9 * 4 + 6) = cVar11 + '\x0f';
              *(undefined1 *)((longlong)param_4 + uVar9 * 4 + 7) = 6;
              *(undefined1 *)((longlong)param_4 + (ulonglong)uVar2 * 4 + 7) = 6;
              uVar1 = uVar14 + 0xe;
              uVar14 = uVar14 + 0x10;
            } while (uVar1 < 0x40);
          }
          else if (bVar7 == 1) {
            bVar7 = *pbVar13;
            pbVar13 = pbVar13 + 1;
            *(byte *)((longlong)param_4 + 6) = bVar7;
            *param_4 = 0;
            *(undefined2 *)(param_4 + 1) = 0;
            *(undefined1 *)((longlong)param_4 + 7) = 0;
          }
          else if (bVar7 == 2) {
            if (param_9 == 0) {
            }
          }
          else {
            local_168 = 0x3f;
            local_178 = (longlong)pbVar3 - (longlong)pbVar13;
            uVar9 = FUN_1805ea3a0(local_158,&local_168,&local_164,pbVar13);
            if (0xffffffffffffff88 < uVar9) {
            }
            if (10 < local_164) {
            }
            pbVar13 = pbVar13 + uVar9;
            FUN_1805e99e0(param_4,local_158,local_168);
          }
          if ((bVar5 >> 4 & 3) == 0) {
            *param_6 = 0x10005;
            *(undefined2 *)(param_6 + 1) = 0;
            *(undefined4 *)((longlong)param_6 + 6) = 0x500;
            *(undefined4 *)((longlong)param_6 + 10) = 0x501;
            *(undefined4 *)((longlong)param_6 + 0xe) = 0x502;
            *(undefined4 *)((longlong)param_6 + 0x12) = 0x503;
            *(undefined4 *)((longlong)param_6 + 0x16) = 0x504;
            *(undefined4 *)((longlong)param_6 + 0x1a) = 0x505;
            *(undefined4 *)((longlong)param_6 + 0x1e) = 0x506;
            *(undefined4 *)((longlong)param_6 + 0x22) = 0x507;
            *(undefined4 *)((longlong)param_6 + 0x26) = 0x508;
            *(undefined4 *)((longlong)param_6 + 0x2a) = 0x509;
            *(undefined4 *)((longlong)param_6 + 0x2e) = 0x50a;
            *(undefined4 *)((longlong)param_6 + 0x32) = 0x50b;
            *(undefined4 *)((longlong)param_6 + 0x36) = 0x50c;
            *(undefined4 *)((longlong)param_6 + 0x3a) = 0x50d;
            *(undefined4 *)((longlong)param_6 + 0x3e) = 0x50e;
            *(undefined4 *)((longlong)param_6 + 0x42) = 0x50f;
            *(undefined4 *)((longlong)param_6 + 0x46) = 0x510;
            *(undefined4 *)((longlong)param_6 + 0x4a) = 0x511;
            *(undefined4 *)((longlong)param_6 + 0x4e) = 0x512;
            *(undefined4 *)((longlong)param_6 + 0x52) = 0x513;
            *(undefined4 *)((longlong)param_6 + 0x56) = 0x514;
            *(undefined4 *)((longlong)param_6 + 0x5a) = 0x515;
            *(undefined4 *)((longlong)param_6 + 0x5e) = 0x516;
            *(undefined4 *)((longlong)param_6 + 0x62) = 0x517;
            *(undefined4 *)((longlong)param_6 + 0x66) = 0x518;
            *(undefined4 *)((longlong)param_6 + 0x6a) = 0x519;
            *(undefined4 *)((longlong)param_6 + 0x6e) = 0x51a;
            *(undefined4 *)((longlong)param_6 + 0x72) = 0x51b;
            *(undefined4 *)((longlong)param_6 + 0x76) = 0x51c;
            *(undefined4 *)((longlong)param_6 + 0x7a) = 0x51d;
            *(undefined4 *)((longlong)param_6 + 0x7e) = 0x51e;
            *(undefined2 *)((longlong)param_6 + 0x82) = 0x51f;
          }
          else if (bVar16 == 1) {
            if (pbVar3 + -2 < pbVar13) {
            }
            bVar7 = *pbVar13;
            *param_6 = 0;
            *(byte *)((longlong)param_6 + 6) = bVar7 & 0x1f;
            pbVar13 = pbVar13 + 1;
            *(undefined2 *)(param_6 + 1) = 0;
            *(undefined1 *)((longlong)param_6 + 7) = 0;
          }
          else if (bVar16 == 2) {
            if (param_9 == 0) {
            }
          }
          else {
            local_168 = 0x1f;
            local_178 = (longlong)pbVar3 - (longlong)pbVar13;
            uVar9 = FUN_1805ea3a0(local_158,&local_168,&local_164,pbVar13);
            if (0xffffffffffffff88 < uVar9) {
            }
            if (9 < local_164) {
            }
            pbVar13 = pbVar13 + uVar9;
            FUN_1805e99e0(param_6,local_158,local_168);
          }
          if ((bVar5 >> 2 & 3) == 0) {
            *param_5 = 0x10007;
            uVar14 = 2;
            do {
              uVar9 = (ulonglong)(uVar14 - 2);
              uVar1 = uVar14 - 1;
              *(undefined2 *)(param_5 + uVar9 + 1) = 0;
              *(undefined2 *)(param_5 + (ulonglong)uVar1 + 1) = 0;
              cVar8 = (char)uVar14;
              cVar11 = (char)(uVar14 - 2);
              *(char *)((longlong)param_5 + uVar9 * 4 + 6) = cVar11;
              *(undefined1 *)((longlong)param_5 + uVar9 * 4 + 7) = 7;
              *(char *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 6) = cVar8 + -1;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 7) = 7;
              lVar10 = (ulonglong)uVar14 * 4;
              *(undefined2 *)(param_5 + (ulonglong)uVar14 + 1) = 0;
              *(char *)(lVar10 + 6 + (longlong)param_5) = cVar8;
              uVar1 = uVar14 + 1;
              *(undefined2 *)(param_5 + (ulonglong)uVar1 + 1) = 0;
              *(undefined1 *)(lVar10 + 7 + (longlong)param_5) = 7;
              *(char *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\x01';
              uVar2 = uVar14 + 2;
              *(undefined2 *)(param_5 + (ulonglong)uVar2 + 1) = 0;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 7) = 7;
              *(char *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\x02';
              uVar1 = uVar14 + 3;
              *(undefined2 *)(param_5 + (ulonglong)uVar1 + 1) = 0;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 7) = 7;
              *(char *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\x03';
              uVar2 = uVar14 + 4;
              *(undefined2 *)(param_5 + (ulonglong)uVar2 + 1) = 0;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 7) = 7;
              *(char *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\x04';
              uVar1 = uVar14 + 5;
              *(undefined2 *)(param_5 + (ulonglong)uVar1 + 1) = 0;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 7) = 7;
              *(char *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\x05';
              uVar2 = uVar14 + 6;
              *(undefined2 *)(param_5 + (ulonglong)uVar2 + 1) = 0;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 7) = 7;
              *(char *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\x06';
              uVar1 = uVar14 + 7;
              *(undefined2 *)(param_5 + (ulonglong)uVar1 + 1) = 0;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 7) = 7;
              *(char *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\a';
              uVar2 = uVar14 + 8;
              *(undefined2 *)(param_5 + (ulonglong)uVar2 + 1) = 0;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 7) = 7;
              *(char *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\b';
              uVar1 = uVar14 + 9;
              *(undefined2 *)(param_5 + (ulonglong)uVar1 + 1) = 0;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 7) = 7;
              *(char *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\t';
              uVar2 = uVar14 + 10;
              *(undefined2 *)(param_5 + (ulonglong)uVar2 + 1) = 0;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 7) = 7;
              *(char *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\n';
              uVar1 = uVar14 + 0xb;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 7) = 7;
              *(undefined2 *)(param_5 + (ulonglong)uVar1 + 1) = 0;
              *(char *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 6) = cVar8 + '\v';
              uVar2 = uVar14 + 0xc;
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar1 * 4 + 7) = 7;
              *(undefined2 *)(param_5 + (ulonglong)uVar2 + 1) = 0;
              *(char *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 6) = cVar8 + '\f';
              uVar9 = (ulonglong)(uVar14 + 0xd);
              *(undefined1 *)((longlong)param_5 + (ulonglong)uVar2 * 4 + 7) = 7;
              *(undefined2 *)(param_5 + uVar9 + 1) = 0;
              *(char *)((longlong)param_5 + uVar9 * 4 + 6) = cVar11 + '\x0f';
              *(undefined1 *)((longlong)param_5 + uVar9 * 4 + 7) = 7;
              uVar1 = uVar14 + 0xe;
              uVar14 = uVar14 + 0x10;
            } while (uVar1 < 0x80);
          }
          else if (bVar15 == 1) {
            if (pbVar13 <= pbVar3 + -2) {
              *(byte *)((longlong)param_5 + 6) = *pbVar13;
              *param_5 = 0;
              *(undefined2 *)(param_5 + 1) = 0;
              *(undefined1 *)((longlong)param_5 + 7) = 0;
            }
          }
          else if (bVar15 != 2) {
            local_178 = (longlong)pbVar3 - (longlong)pbVar13;
            local_168 = 0x7f;
            uVar9 = FUN_1805ea3a0(local_158,&local_168,&local_164,pbVar13);
            if ((uVar9 < 0xffffffffffffff89) && (local_164 < 0xb)) {
              FUN_1805e99e0(param_5,local_158,local_168);
            }
          }
        }
      }
    }
  }
}



