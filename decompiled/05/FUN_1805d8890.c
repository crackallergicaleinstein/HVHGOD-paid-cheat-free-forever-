// FUN_1805d8890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d8890 */

int FUN_1805d8890(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  ulonglong uVar17;
  undefined2 uVar18;
  int iVar19;
  byte *pbVar20;
  undefined1 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar28;
  uint uVar27;
  uint uVar26;
  uint uVar25;
  ulonglong uVar29;
  uint local_res8;
  int local_res18;
  uint local_res20;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  uint local_60;
  undefined1 *local_58;
  longlong *local_50;
  
  if ((((((param_1 != (longlong *)0x0) && (param_1[6] != 0)) && (param_1[7] != 0)) &&
       ((puVar1 = (undefined8 *)param_1[5], puVar1 != (undefined8 *)0x0 &&
        ((longlong *)*puVar1 == param_1)))) &&
      (iVar4 = *(int *)(puVar1 + 1), iVar4 - 0x3f34U < 0x20)) &&
     ((param_1[2] != 0 && ((*param_1 != 0 || ((int)param_1[1] == 0)))))) {
    local_50 = param_1 + 2;
    if (iVar4 == 0x3f3f) {
      *(undefined4 *)(puVar1 + 1) = 0x3f40;
      iVar4 = 0x3f40;
      local_50 = param_1 + 2;
    }
    uVar22 = *(uint *)(param_1 + 3);
    puVar21 = (undefined1 *)param_1[2];
    uVar9 = iVar4 - 0x3f34;
    uVar16 = *(uint *)(param_1 + 1);
    pbVar15 = (byte *)*param_1;
    uVar24 = *(uint *)(puVar1 + 9);
    uVar14 = *(uint *)((longlong)puVar1 + 0x4c);
    local_58 = puVar21;
    local_60 = uVar16;
    local_res18 = 0;
    local_res8 = uVar22;
    local_res20 = uVar22;
    if (uVar9 < 0x20) {
LAB_1805d8996:
      uVar25 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar23 = 0;
      uVar12 = 0;
      uVar28 = 0;
      uVar10 = local_64;
      switch(uVar9) {
      case 0:
        if (*(int *)(puVar1 + 2) == 0) {
          *(undefined4 *)(puVar1 + 1) = 0x3f40;
          goto LAB_1805d8a70;
        }
        for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
          uVar9 = 0;
          if (uVar16 == 0) goto LAB_1805d91fe;
          uVar16 = uVar16 - 1;
          uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
          pbVar15 = pbVar15 + 1;
        }
        if (((*(byte *)(puVar1 + 2) & 2) == 0) || (uVar24 != 0x8b1f)) {
          if (puVar1[5] != 0) {
            *(undefined4 *)(puVar1[5] + 0x40) = 0xffffffff;
          }
          if (((*(byte *)(puVar1 + 2) & 1) == 0) ||
             (uVar9 = (uVar24 & 0xff) * 0x100 + (uVar24 >> 8), uVar9 != (uVar9 / 0x1f) * 0x1f)) {
            param_1[4] = (longlong)"incorrect header check";
            *(undefined4 *)(puVar1 + 1) = 0x3f51;
          }
          else if (((byte)uVar24 & 0xf) == 8) {
            uVar14 = uVar14 - 4;
            uVar10 = (uVar24 >> 4 & 0xf) + 8;
            uVar9 = *(uint *)(puVar1 + 6);
            if (*(uint *)(puVar1 + 6) == 0) {
              *(uint *)(puVar1 + 6) = uVar10;
              uVar9 = uVar10;
            }
            if ((uVar10 < 0x10) && (uVar10 <= uVar9)) {
              *(int *)((longlong)puVar1 + 0x1c) = 1 << (sbyte)uVar10;
              *(undefined4 *)(puVar1 + 3) = 0;
              *(undefined4 *)(puVar1 + 4) = 1;
              *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
              *(uint *)(puVar1 + 1) = ~(uVar24 >> 0xc) & 2 | 0x3f3d;
              uVar24 = uVar25;
              uVar14 = uVar25;
            }
            else {
              param_1[4] = (longlong)"invalid window size";
              *(undefined4 *)(puVar1 + 1) = 0x3f51;
              uVar24 = uVar24 >> 4;
            }
          }
          else {
            param_1[4] = (longlong)"unknown compression method";
            *(undefined4 *)(puVar1 + 1) = 0x3f51;
          }
          goto LAB_1805d8a70;
        }
        if (*(int *)(puVar1 + 6) == 0) {
          *(undefined4 *)(puVar1 + 6) = 0xf;
        }
        local_68 = 0x8b1f;
        pbVar20 = (byte *)&local_68;
        lVar13 = 2;
        uVar24 = 0xffffffff;
        do {
          bVar7 = *pbVar20;
          pbVar20 = pbVar20 + 1;
          uVar24 = uVar24 >> 8 ^
                   *(uint *)(&DAT_180686160 + (ulonglong)((uVar24 ^ bVar7) & 0xff) * 4);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        *(undefined4 *)(puVar1 + 1) = 0x3f35;
        *(uint *)(puVar1 + 4) = ~uVar24;
        uVar14 = uVar12;
        goto LAB_1805d8a64;
      case 1:
        for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
          uVar9 = 0;
          if (uVar16 == 0) goto LAB_1805d91fe;
          uVar16 = uVar16 - 1;
          uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
          pbVar15 = pbVar15 + 1;
        }
        *(uint *)(puVar1 + 3) = uVar24;
        if ((char)uVar24 == '\b') {
          if ((uVar24 & 0xe000) == 0) {
            if ((uint *)puVar1[5] != (uint *)0x0) {
              *(uint *)puVar1[5] = uVar24 >> 8 & 1;
            }
            if (((*(uint *)(puVar1 + 3) & 0x200) != 0) && ((*(byte *)(puVar1 + 2) & 4) != 0)) {
              local_68 = (undefined2)uVar24;
              uVar5 = FUN_1805d7f90(*(undefined4 *)(puVar1 + 4),&local_68,2);
              *(undefined4 *)(puVar1 + 4) = uVar5;
            }
            *(undefined4 *)(puVar1 + 1) = 0x3f36;
            uVar24 = uVar26;
            uVar14 = uVar27;
            do {
              uVar9 = 0;
              uVar10 = local_64;
              if (uVar16 == 0) goto LAB_1805d91fe;
              uVar16 = uVar16 - 1;
              uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
              pbVar15 = pbVar15 + 1;
              uVar14 = uVar14 + 8;
joined_r0x0001805d8c6c:
            } while (uVar14 < 0x20);
            if (puVar1[5] != 0) {
              *(uint *)(puVar1[5] + 4) = uVar24;
            }
            if (((*(uint *)(puVar1 + 3) & 0x200) != 0) && ((*(byte *)(puVar1 + 2) & 4) != 0)) {
              local_68 = (undefined2)uVar24;
              local_66 = (undefined1)(uVar24 >> 0x10);
              local_65 = (undefined1)(uVar24 >> 0x18);
              uVar5 = FUN_1805d7f90(*(undefined4 *)(puVar1 + 4),&local_68,4);
              *(undefined4 *)(puVar1 + 4) = uVar5;
            }
            *(undefined4 *)(puVar1 + 1) = 0x3f37;
            uVar24 = uVar27;
            uVar14 = uVar27;
            do {
              uVar9 = 0;
              uVar10 = local_64;
              if (uVar16 == 0) goto LAB_1805d91fe;
              uVar16 = uVar16 - 1;
              uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
              pbVar15 = pbVar15 + 1;
              uVar14 = uVar14 + 8;
joined_r0x0001805d8cfb:
            } while (uVar14 < 0x10);
            if (puVar1[5] != 0) {
              *(uint *)(puVar1[5] + 8) = uVar24 & 0xff;
              *(uint *)(puVar1[5] + 0xc) = uVar24 >> 8;
            }
            if (((*(uint *)(puVar1 + 3) & 0x200) != 0) && ((*(byte *)(puVar1 + 2) & 4) != 0)) {
              local_68 = (undefined2)uVar24;
              uVar5 = FUN_1805d7f90(*(undefined4 *)(puVar1 + 4),&local_68,2);
              *(undefined4 *)(puVar1 + 4) = uVar5;
            }
            *(undefined4 *)(puVar1 + 1) = 0x3f38;
            uVar24 = uVar27;
            uVar14 = uVar23;
            goto switchD_1805d89aa_caseD_4;
          }
          param_1[4] = (longlong)"unknown header flags set";
          *(undefined4 *)(puVar1 + 1) = 0x3f51;
        }
        else {
          param_1[4] = (longlong)"unknown compression method";
          *(undefined4 *)(puVar1 + 1) = 0x3f51;
        }
        goto LAB_1805d8a70;
      case 2:
        goto joined_r0x0001805d8c6c;
      case 3:
        goto joined_r0x0001805d8cfb;
      case 4:
switchD_1805d89aa_caseD_4:
        if ((*(uint *)(puVar1 + 3) & 0x400) == 0) {
          if (puVar1[5] != 0) {
            *(undefined8 *)(puVar1[5] + 0x10) = 0;
          }
        }
        else {
          for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
            uVar9 = 0;
            uVar10 = local_64;
            if (uVar16 == 0) goto LAB_1805d91fe;
            uVar16 = uVar16 - 1;
            uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
            pbVar15 = pbVar15 + 1;
          }
          *(uint *)(puVar1 + 10) = uVar24;
          if (puVar1[5] != 0) {
            *(uint *)(puVar1[5] + 0x18) = uVar24;
          }
          if (((*(uint *)(puVar1 + 3) & 0x200) != 0) && ((*(byte *)(puVar1 + 2) & 4) != 0)) {
            local_68 = (undefined2)uVar24;
            uVar5 = FUN_1805d7f90(*(undefined4 *)(puVar1 + 4),&local_68,2);
            *(undefined4 *)(puVar1 + 4) = uVar5;
          }
          uVar24 = uVar23;
          uVar14 = uVar23;
        }
        *(undefined4 *)(puVar1 + 1) = 0x3f39;
      case 5:
        if ((*(uint *)(puVar1 + 3) & 0x400) == 0) {
LAB_1805d8eb4:
          *(undefined4 *)(puVar1 + 10) = 0;
          *(undefined4 *)(puVar1 + 1) = 0x3f3a;
switchD_1805d89aa_caseD_6:
          if ((*(uint *)(puVar1 + 3) & 0x800) == 0) {
            if (puVar1[5] != 0) {
              *(undefined8 *)(puVar1[5] + 0x20) = 0;
            }
LAB_1805d8f5b:
            *(undefined4 *)(puVar1 + 10) = 0;
            *(undefined4 *)(puVar1 + 1) = 0x3f3b;
switchD_1805d89aa_caseD_7:
            if ((*(uint *)(puVar1 + 3) & 0x1000) == 0) {
              if (puVar1[5] != 0) {
                *(undefined8 *)(puVar1[5] + 0x30) = 0;
              }
LAB_1805d8ffb:
              *(undefined4 *)(puVar1 + 1) = 0x3f3c;
              puVar21 = local_58;
              uVar22 = local_res20;
switchD_1805d89aa_caseD_8:
              if ((*(uint *)(puVar1 + 3) & 0x200) != 0) {
                for (; uVar14 < 0x10; uVar14 = uVar14 + 8) {
                  uVar9 = 0;
                  uVar10 = local_64;
                  if (uVar16 == 0) goto LAB_1805d91fe;
                  uVar16 = uVar16 - 1;
                  uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
                  pbVar15 = pbVar15 + 1;
                }
                if (((*(byte *)(puVar1 + 2) & 4) != 0) && (uVar24 != *(ushort *)(puVar1 + 4))) {
                  param_1[4] = (longlong)"header crc mismatch";
                  *(undefined4 *)(puVar1 + 1) = 0x3f51;
                  goto LAB_1805d8a70;
                }
                uVar24 = 0;
                uVar14 = 0;
              }
              if (puVar1[5] != 0) {
                *(uint *)(puVar1[5] + 0x3c) = *(int *)(puVar1 + 3) >> 9 & 1;
                *(undefined4 *)(puVar1[5] + 0x40) = 1;
              }
              *(undefined4 *)(puVar1 + 4) = 0;
              *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
LAB_1805d90a0:
              *(undefined4 *)(puVar1 + 1) = 0x3f3f;
              goto LAB_1805d8a70;
            }
            uVar9 = uVar16;
            uVar10 = local_64;
            if (uVar16 != 0) {
              uVar22 = 0;
              do {
                uVar29 = (ulonglong)uVar22;
                uVar22 = uVar22 + 1;
                bVar7 = pbVar15[uVar29];
                lVar13 = puVar1[5];
                if (((lVar13 != 0) && (*(longlong *)(lVar13 + 0x30) != 0)) &&
                   (*(uint *)(puVar1 + 10) < *(uint *)(lVar13 + 0x38))) {
                  *(byte *)((ulonglong)*(uint *)(puVar1 + 10) + *(longlong *)(lVar13 + 0x30)) =
                       bVar7;
                  *(int *)(puVar1 + 10) = *(int *)(puVar1 + 10) + 1;
                }
              } while ((bVar7 != 0) && (uVar22 < uVar16));
              if (((*(uint *)(puVar1 + 3) & 0x200) != 0) && ((*(byte *)(puVar1 + 2) & 4) != 0)) {
                uVar5 = FUN_1805d7f90(*(undefined4 *)(puVar1 + 4),pbVar15,uVar22);
                *(undefined4 *)(puVar1 + 4) = uVar5;
              }
              uVar16 = uVar16 - uVar22;
              pbVar15 = pbVar15 + uVar22;
              uVar9 = uVar16;
              uVar10 = local_64;
              if (bVar7 == 0) goto LAB_1805d8ffb;
            }
          }
          else {
            uVar9 = uVar16;
            uVar10 = local_64;
            if (uVar16 != 0) {
              uVar29 = 0;
              do {
                uVar9 = (int)uVar29 + 1;
                uVar17 = (ulonglong)uVar9;
                bVar7 = pbVar15[uVar29];
                lVar13 = puVar1[5];
                if (((lVar13 != 0) && (*(longlong *)(lVar13 + 0x20) != 0)) &&
                   (*(uint *)(puVar1 + 10) < *(uint *)(lVar13 + 0x28))) {
                  *(byte *)((ulonglong)*(uint *)(puVar1 + 10) + *(longlong *)(lVar13 + 0x20)) =
                       bVar7;
                  *(int *)(puVar1 + 10) = *(int *)(puVar1 + 10) + 1;
                }
              } while ((bVar7 != 0) && (uVar29 = uVar17, uVar9 < uVar16));
              if (((*(uint *)(puVar1 + 3) & 0x200) != 0) && ((*(byte *)(puVar1 + 2) & 4) != 0)) {
                uVar5 = FUN_1805d7f90(*(undefined4 *)(puVar1 + 4),pbVar15,uVar17);
                *(undefined4 *)(puVar1 + 4) = uVar5;
              }
              uVar9 = uVar16 - uVar9;
              pbVar15 = pbVar15 + uVar17;
              uVar16 = uVar9;
              uVar10 = local_64;
              if (bVar7 == 0) goto LAB_1805d8f5b;
            }
          }
        }
        else {
          uVar22 = *(uint *)(puVar1 + 10);
          uVar10 = uVar16;
          if (uVar22 <= uVar16) {
            uVar10 = uVar22;
          }
          uVar9 = uVar16;
          if (uVar10 != 0) {
            lVar13 = puVar1[5];
            if ((lVar13 != 0) && (*(longlong *)(lVar13 + 0x10) != 0)) {
              uVar9 = *(uint *)(lVar13 + 0x1c);
              uVar22 = *(int *)(lVar13 + 0x18) - uVar22;
              if (uVar22 < uVar9) {
                uVar12 = uVar10;
                if (uVar9 < uVar10 + uVar22) {
                  uVar12 = uVar9 - uVar22;
                }
                FUN_18063aed0((ulonglong)uVar22 + *(longlong *)(lVar13 + 0x10),pbVar15,uVar12);
              }
            }
            if (((*(uint *)(puVar1 + 3) & 0x200) != 0) && ((*(byte *)(puVar1 + 2) & 4) != 0)) {
              uVar5 = FUN_1805d7f90(*(undefined4 *)(puVar1 + 4),pbVar15,uVar10);
              *(undefined4 *)(puVar1 + 4) = uVar5;
            }
            uVar9 = uVar16 - uVar10;
            pbVar15 = pbVar15 + uVar10;
            uVar22 = *(int *)(puVar1 + 10) - uVar10;
            *(uint *)(puVar1 + 10) = uVar22;
          }
          uVar16 = uVar9;
          uVar10 = local_64;
          if (uVar22 == 0) goto LAB_1805d8eb4;
        }
LAB_1805d91fe:
        local_64 = uVar10;
        uVar16 = uVar9;
        break;
      case 6:
        goto switchD_1805d89aa_caseD_6;
      case 7:
        goto switchD_1805d89aa_caseD_7;
      case 8:
        goto switchD_1805d89aa_caseD_8;
      case 9:
        for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
          uVar9 = 0;
          if (uVar16 == 0) goto LAB_1805d91fe;
          uVar16 = uVar16 - 1;
          uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
          pbVar15 = pbVar15 + 1;
        }
        uVar24 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 | uVar24 << 0x18
        ;
        *(uint *)(puVar1 + 4) = uVar24;
        *(uint *)((longlong)param_1 + 0x4c) = uVar24;
        *(undefined4 *)(puVar1 + 1) = 0x3f3e;
        uVar24 = uVar26;
        uVar14 = uVar26;
      case 10:
        if (*(int *)((longlong)puVar1 + 0x14) == 0) {
          param_1[2] = (longlong)puVar21;
          *(uint *)(param_1 + 3) = uVar22;
          *param_1 = (longlong)pbVar15;
          *(uint *)(param_1 + 1) = uVar16;
          *(uint *)(puVar1 + 9) = uVar24;
          *(uint *)((longlong)puVar1 + 0x4c) = uVar14;
          return 2;
        }
        *(undefined4 *)(puVar1 + 4) = 1;
        *(undefined4 *)((longlong)param_1 + 0x4c) = 1;
        *(undefined4 *)(puVar1 + 1) = 0x3f3f;
switchD_1805d89aa_caseD_b:
        uVar9 = uVar16;
        if (1 < param_2 - 5U) {
switchD_1805d89aa_caseD_c:
          if (*(int *)((longlong)puVar1 + 0xc) == 0) {
            for (; uVar14 < 3; uVar14 = uVar14 + 8) {
              uVar9 = 0;
              if (uVar16 == 0) goto LAB_1805d91fe;
              uVar16 = uVar16 - 1;
              uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
              pbVar15 = pbVar15 + 1;
            }
            *(uint *)((longlong)puVar1 + 0xc) = uVar24 & 1;
            uVar9 = uVar24 >> 1 & 3;
            if (uVar9 == 0) {
              *(undefined4 *)(puVar1 + 1) = 0x3f41;
            }
            else {
              if (uVar9 != 1) {
                if (uVar9 == 2) {
                  *(undefined4 *)(puVar1 + 1) = 0x3f44;
                  uVar24 = uVar24 >> 3;
                  uVar14 = uVar14 - 3;
                }
                else {
                  if (uVar9 != 3) goto LAB_1805d92a3;
                  param_1[4] = (longlong)"invalid block type";
                  *(undefined4 *)(puVar1 + 1) = 0x3f51;
                  uVar24 = uVar24 >> 3;
                  uVar14 = uVar14 - 3;
                }
                goto LAB_1805d8a70;
              }
              *(undefined4 *)(puVar1 + 0xe) = 9;
              puVar1[0xc] = &DAT_180685780;
              puVar1[0xd] = &DAT_180685f80;
              *(undefined4 *)((longlong)puVar1 + 0x74) = 5;
              *(undefined4 *)(puVar1 + 1) = 0x3f47;
              if (param_2 == 6) {
                uVar14 = uVar14 - 3;
                uVar24 = uVar24 >> 3;
                uVar9 = uVar16;
                goto LAB_1805d91fe;
              }
            }
LAB_1805d92a3:
            uVar24 = uVar24 >> 3;
            uVar14 = uVar14 - 3;
          }
          else {
            *(undefined4 *)(puVar1 + 1) = 0x3f4e;
            uVar24 = uVar24 >> (sbyte)(uVar14 & 7);
            uVar14 = uVar14 - (uVar14 & 7);
          }
          goto LAB_1805d8a70;
        }
        goto LAB_1805d91fe;
      case 0xb:
        goto switchD_1805d89aa_caseD_b;
      case 0xc:
        goto switchD_1805d89aa_caseD_c;
      case 0xd:
        uVar24 = uVar24 >> (sbyte)(uVar14 & 7);
        for (uVar14 = uVar14 - (uVar14 & 7); uVar14 < 0x20; uVar14 = uVar14 + 8) {
          uVar9 = 0;
          if (uVar16 == 0) goto LAB_1805d91fe;
          uVar16 = uVar16 - 1;
          uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
          pbVar15 = pbVar15 + 1;
        }
        if ((uVar24 & 0xffff) == ~uVar24 >> 0x10) {
          *(uint *)(puVar1 + 10) = uVar24 & 0xffff;
          *(undefined4 *)(puVar1 + 1) = 0x3f42;
          uVar9 = uVar16;
          uVar24 = uVar25;
          uVar14 = uVar26;
          if (param_2 == 6) goto LAB_1805d91fe;
          goto switchD_1805d89aa_caseD_e;
        }
        param_1[4] = (longlong)"invalid stored block lengths";
        *(undefined4 *)(puVar1 + 1) = 0x3f51;
        goto LAB_1805d8a70;
      case 0xe:
switchD_1805d89aa_caseD_e:
        *(undefined4 *)(puVar1 + 1) = 0x3f43;
      case 0xf:
        uVar9 = *(uint *)(puVar1 + 10);
        if (uVar9 == 0) goto LAB_1805d90a0;
        uVar12 = uVar16;
        if (uVar9 <= uVar16) {
          uVar12 = uVar9;
        }
        if (uVar22 < uVar12) {
          uVar12 = uVar22;
        }
        uVar29 = (ulonglong)uVar12;
        uVar9 = uVar16;
        if (uVar12 != 0) {
          FUN_18063aed0(puVar21,pbVar15,uVar29);
          uVar16 = uVar16 - uVar12;
          uVar22 = local_res20 - uVar12;
          puVar21 = local_58 + uVar29;
          pbVar15 = pbVar15 + uVar29;
          local_58 = puVar21;
          *(uint *)(puVar1 + 10) = *(int *)(puVar1 + 10) - uVar12;
          local_res20 = uVar22;
          goto LAB_1805d8a70;
        }
        goto LAB_1805d91fe;
      case 0x10:
        for (; uVar14 < 0xe; uVar14 = uVar14 + 8) {
          uVar9 = 0;
          if (uVar16 == 0) goto LAB_1805d91fe;
          uVar16 = uVar16 - 1;
          uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
          pbVar15 = pbVar15 + 1;
        }
        uVar14 = uVar14 - 0xe;
        uVar12 = uVar24 >> 5;
        uVar9 = (uVar24 & 0x1f) + 0x101;
        uVar23 = uVar24 >> 10;
        *(uint *)((longlong)puVar1 + 0x7c) = uVar9;
        uVar24 = uVar24 >> 0xe;
        uVar12 = (uVar12 & 0x1f) + 1;
        *(uint *)(puVar1 + 0x10) = uVar12;
        *(uint *)(puVar1 + 0xf) = (uVar23 & 0xf) + 4;
        if ((uVar9 < 0x11f) && (uVar12 < 0x1f)) {
          *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
          *(undefined4 *)(puVar1 + 1) = 0x3f45;
          goto switchD_1805d89aa_caseD_11;
        }
        param_1[4] = (longlong)"too many length or distance symbols";
        *(undefined4 *)(puVar1 + 1) = 0x3f51;
LAB_1805d8a70:
        uVar9 = *(int *)(puVar1 + 1) - 0x3f34;
        if (0x1f < uVar9) {
          return -2;
        }
        goto LAB_1805d8996;
      case 0x11:
switchD_1805d89aa_caseD_11:
        uVar22 = *(uint *)((longlong)puVar1 + 0x84);
        if (uVar22 < *(uint *)(puVar1 + 0xf)) {
          do {
            for (; uVar14 < 3; uVar14 = uVar14 + 8) {
              uVar9 = 0;
              if (uVar16 == 0) goto LAB_1805d91fe;
              uVar16 = uVar16 - 1;
              uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
              pbVar15 = pbVar15 + 1;
            }
            uVar8 = (ushort)uVar24;
            uVar24 = uVar24 >> 3;
            uVar14 = uVar14 - 3;
            *(ushort *)
             ((longlong)puVar1 +
             (ulonglong)
             *(ushort *)(&DAT_180686000 + (ulonglong)*(uint *)((longlong)puVar1 + 0x84) * 2) * 2 +
             0x90) = uVar8 & 7;
            *(int *)((longlong)puVar1 + 0x84) = *(int *)((longlong)puVar1 + 0x84) + 1;
            uVar22 = *(uint *)((longlong)puVar1 + 0x84);
          } while (uVar22 < *(uint *)(puVar1 + 0xf));
        }
        while (uVar22 < 0x13) {
          *(undefined2 *)
           ((longlong)puVar1 +
           (ulonglong)*(ushort *)(&DAT_180686000 + (ulonglong)uVar22 * 2) * 2 + 0x90) = 0;
          *(int *)((longlong)puVar1 + 0x84) = *(int *)((longlong)puVar1 + 0x84) + 1;
          uVar22 = *(uint *)((longlong)puVar1 + 0x84);
        }
        *(undefined4 *)(puVar1 + 0xe) = 7;
        puVar1[0xc] = puVar1 + 0xaa;
        puVar1[0x11] = puVar1 + 0xaa;
        local_res18 = FUN_1805da720(0,puVar1 + 0x12,0x13,puVar1 + 0x11,puVar1 + 0xe,puVar1 + 0x62);
        if (local_res18 != 0) {
          param_1[4] = (longlong)"invalid code lengths set";
          *(undefined4 *)(puVar1 + 1) = 0x3f51;
          uVar22 = local_res20;
          uVar12 = uVar24;
          goto LAB_1805d8a64;
        }
        *(undefined4 *)((longlong)puVar1 + 0x84) = 0;
        *(undefined4 *)(puVar1 + 1) = 0x3f46;
        uVar22 = local_res20;
      case 0x12:
        if (*(uint *)((longlong)puVar1 + 0x84) <
            (uint)(*(int *)(puVar1 + 0x10) + *(int *)((longlong)puVar1 + 0x7c))) {
          do {
            uVar10 = *(uint *)(puVar1[0xc] +
                              (ulonglong)
                              ((1 << ((byte)*(undefined4 *)(puVar1 + 0xe) & 0x1f)) - 1U & uVar24) *
                              4);
            uVar12 = uVar10 >> 8 & 0xff;
            uVar8 = (ushort)(uVar10 >> 0x10);
            local_64 = uVar10;
            if (uVar14 < uVar12) {
              do {
                uVar9 = 0;
                uVar10 = local_64;
                if (uVar16 == 0) goto LAB_1805d91fe;
                uVar16 = uVar16 - 1;
                uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
                pbVar15 = pbVar15 + 1;
                uVar14 = uVar14 + 8;
                uVar10 = *(uint *)(puVar1[0xc] +
                                  (ulonglong)
                                  ((1 << ((byte)*(undefined4 *)(puVar1 + 0xe) & 0x1f)) - 1U & uVar24
                                  ) * 4);
                uVar12 = uVar10 >> 8 & 0xff;
                uVar8 = (ushort)(uVar10 >> 0x10);
                local_64 = uVar10;
              } while (uVar14 < uVar12);
            }
            local_64 = uVar10;
            if (0xf < uVar8) {
              local_64._1_1_ = (byte)(uVar10 >> 8);
              if (uVar8 == 0x10) {
                for (; uVar14 < uVar12 + 2; uVar14 = uVar14 + 8) {
                  uVar9 = 0;
                  if (uVar16 == 0) goto LAB_1805d91fe;
                  uVar16 = uVar16 - 1;
                  uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
                  pbVar15 = pbVar15 + 1;
                }
                uVar14 = uVar14 - local_64._1_1_;
                uVar24 = uVar24 >> (local_64._1_1_ & 0x1f);
                if (*(int *)((longlong)puVar1 + 0x84) != 0) {
                  uVar14 = uVar14 - 2;
                  uVar9 = uVar24 & 3;
                  uVar24 = uVar24 >> 2;
                  iVar11 = uVar9 + 3;
                  uVar18 = *(undefined2 *)
                            ((longlong)puVar1 +
                            (ulonglong)(*(int *)((longlong)puVar1 + 0x84) - 1) * 2 + 0x90);
                  goto LAB_1805d9711;
                }
              }
              else {
                if (uVar8 == 0x11) {
                  for (; uVar14 < uVar12 + 3; uVar14 = uVar14 + 8) {
                    uVar9 = 0;
                    if (uVar16 == 0) goto LAB_1805d91fe;
                    uVar16 = uVar16 - 1;
                    uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
                    pbVar15 = pbVar15 + 1;
                  }
                  iVar4 = -3;
                  uVar24 = uVar24 >> (local_64._1_1_ & 0x1f);
                  iVar11 = (uVar24 & 7) + 3;
                  uVar24 = uVar24 >> 3;
                }
                else {
                  for (; uVar14 < uVar12 + 7; uVar14 = uVar14 + 8) {
                    uVar9 = 0;
                    if (uVar16 == 0) goto LAB_1805d91fe;
                    uVar16 = uVar16 - 1;
                    uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
                    pbVar15 = pbVar15 + 1;
                  }
                  iVar4 = -7;
                  uVar24 = uVar24 >> (local_64._1_1_ & 0x1f);
                  iVar11 = (uVar24 & 0x7f) + 0xb;
                  uVar24 = uVar24 >> 7;
                }
                uVar18 = 0;
                uVar14 = uVar14 + (iVar4 - (uint)local_64._1_1_);
LAB_1805d9711:
                uVar9 = *(uint *)((longlong)puVar1 + 0x84);
                if (uVar9 + iVar11 <=
                    (uint)(*(int *)((longlong)puVar1 + 0x7c) + *(int *)(puVar1 + 0x10))) {
                  do {
                    *(undefined2 *)((longlong)puVar1 + (ulonglong)uVar9 * 2 + 0x90) = uVar18;
                    uVar9 = *(int *)((longlong)puVar1 + 0x84) + 1;
                    *(uint *)((longlong)puVar1 + 0x84) = uVar9;
                    iVar11 = iVar11 + -1;
                  } while (iVar11 != 0);
                  goto LAB_1805d9753;
                }
              }
              param_1[4] = (longlong)"invalid bit length repeat";
              *(undefined4 *)(puVar1 + 1) = 0x3f51;
              break;
            }
            uVar24 = uVar24 >> ((byte)uVar12 & 0x1f);
            uVar14 = uVar14 - uVar12;
            *(short *)((longlong)puVar1 + (ulonglong)*(uint *)((longlong)puVar1 + 0x84) * 2 + 0x90)
                 = (short)(uVar10 >> 0x10);
            *(int *)((longlong)puVar1 + 0x84) = *(int *)((longlong)puVar1 + 0x84) + 1;
            uVar9 = *(uint *)((longlong)puVar1 + 0x84);
LAB_1805d9753:
          } while (uVar9 < (uint)(*(int *)((longlong)puVar1 + 0x7c) + *(int *)(puVar1 + 0x10)));
        }
        uVar12 = uVar24;
        if (*(int *)(puVar1 + 1) == 0x3f51) {
LAB_1805d8a64:
          puVar21 = local_58;
          uVar24 = uVar12;
          goto LAB_1805d8a70;
        }
        if (*(short *)(puVar1 + 0x52) == 0) {
          param_1[4] = (longlong)"invalid code -- missing end-of-block";
          *(undefined4 *)(puVar1 + 1) = 0x3f51;
          goto LAB_1805d8a64;
        }
        puVar1[0x11] = puVar1 + 0xaa;
        puVar1[0xc] = puVar1 + 0xaa;
        *(undefined4 *)(puVar1 + 0xe) = 9;
        local_res18 = FUN_1805da720(1,puVar1 + 0x12,*(undefined4 *)((longlong)puVar1 + 0x7c),
                                    puVar1 + 0x11,puVar1 + 0xe,puVar1 + 0x62);
        if (local_res18 != 0) {
          pcVar6 = "invalid literal/lengths set";
LAB_1805d980a:
          param_1[4] = (longlong)pcVar6;
          *(undefined4 *)(puVar1 + 1) = 0x3f51;
          uVar22 = local_res20;
          uVar12 = uVar24;
          goto LAB_1805d8a64;
        }
        puVar1[0xd] = puVar1[0x11];
        *(undefined4 *)((longlong)puVar1 + 0x74) = 6;
        local_res18 = FUN_1805da720(2,(ulonglong)*(uint *)((longlong)puVar1 + 0x7c) * 2 + 0x90 +
                                      (longlong)puVar1,*(undefined4 *)(puVar1 + 0x10),puVar1 + 0x11,
                                    (undefined4 *)((longlong)puVar1 + 0x74),puVar1 + 0x62);
        if (local_res18 != 0) {
          pcVar6 = "invalid distances set";
          goto LAB_1805d980a;
        }
        *(undefined4 *)(puVar1 + 1) = 0x3f47;
        if (param_2 == 6) break;
        puVar21 = local_58;
        uVar22 = local_res20;
switchD_1805d89aa_caseD_13:
        *(undefined4 *)(puVar1 + 1) = 0x3f48;
switchD_1805d89aa_caseD_14:
        plVar2 = local_50;
        if ((5 < uVar16) && (0x101 < uVar22)) {
          *(uint *)(param_1 + 3) = uVar22;
          *param_1 = (longlong)pbVar15;
          *(uint *)(param_1 + 1) = uVar16;
          *local_50 = (longlong)puVar21;
          *(uint *)(puVar1 + 9) = uVar24;
          *(uint *)((longlong)puVar1 + 0x4c) = uVar14;
          FUN_1805da240(param_1,local_res8);
          local_58 = (undefined1 *)*plVar2;
          uVar22 = *(uint *)(param_1 + 3);
          pbVar15 = (byte *)*param_1;
          uVar16 = *(uint *)(param_1 + 1);
          puVar21 = local_58;
          uVar24 = *(uint *)(puVar1 + 9);
          uVar14 = *(uint *)((longlong)puVar1 + 0x4c);
          local_res20 = uVar22;
          if (*(int *)(puVar1 + 1) == 0x3f3f) {
            *(undefined4 *)((longlong)puVar1 + 0x1be4) = 0xffffffff;
          }
          goto LAB_1805d8a70;
        }
        lVar13 = puVar1[0xc];
        *(undefined4 *)((longlong)puVar1 + 0x1be4) = 0;
        uVar22 = *(uint *)(lVar13 + (ulonglong)
                                    ((1 << ((byte)*(undefined4 *)(puVar1 + 0xe) & 0x1f)) - 1U &
                                    uVar24) * 4);
        if (uVar14 < (uVar22 >> 8 & 0xff)) {
          do {
            uVar9 = 0;
            uVar10 = local_64;
            if (uVar16 == 0) goto LAB_1805d91fe;
            uVar16 = uVar16 - 1;
            uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
            pbVar15 = pbVar15 + 1;
            uVar14 = uVar14 + 8;
            uVar22 = *(uint *)(lVar13 + (ulonglong)
                                        ((1 << ((byte)*(undefined4 *)(puVar1 + 0xe) & 0x1f)) - 1U &
                                        uVar24) * 4);
          } while (uVar14 < (uVar22 >> 8 & 0xff));
        }
        cVar3 = (char)uVar22;
        if ((cVar3 != '\0') && ((uVar22 & 0xf0) == 0)) {
          local_64 = uVar22;
          uVar10 = local_64;
          local_64._1_1_ = (byte)(uVar22 >> 8);
          uVar9 = *(uint *)(lVar13 + (ulonglong)
                                     ((((1 << (cVar3 + local_64._1_1_ & 0x1f)) - 1U & uVar24) >>
                                      (local_64._1_1_ & 0x1f)) + (uVar22 >> 0x10)) * 4);
          uVar12 = (uint)local_64._1_1_;
          if (uVar14 < (uVar9 >> 8 & 0xff) + (uVar22 >> 8 & 0xff)) {
            do {
              uVar9 = 0;
              if (uVar16 == 0) goto LAB_1805d91fe;
              uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
              uVar16 = uVar16 - 1;
              pbVar15 = pbVar15 + 1;
              uVar14 = uVar14 + 8;
              uVar9 = *(uint *)(lVar13 + (ulonglong)
                                         ((((1 << (cVar3 + local_64._1_1_ & 0x1f)) - 1U & uVar24) >>
                                          (local_64._1_1_ & 0x1f)) + (uVar22 >> 0x10)) * 4);
            } while (uVar14 < (uVar9 >> 8 & 0xff) + uVar12);
          }
          uVar22 = uVar9;
          uVar24 = uVar24 >> (local_64._1_1_ & 0x1f);
          uVar14 = uVar14 - uVar12;
          *(uint *)((longlong)puVar1 + 0x1be4) = uVar12;
          local_64 = uVar10;
        }
        uVar9 = uVar22 >> 8 & 0xff;
        *(int *)((longlong)puVar1 + 0x1be4) = *(int *)((longlong)puVar1 + 0x1be4) + uVar9;
        uVar24 = uVar24 >> ((byte)(uVar22 >> 8) & 0x1f);
        uVar14 = uVar14 - uVar9;
        *(uint *)(puVar1 + 10) = uVar22 >> 0x10;
        uVar12 = uVar24;
        if ((char)uVar22 == '\0') {
          *(undefined4 *)(puVar1 + 1) = 0x3f4d;
          uVar22 = local_res20;
          goto LAB_1805d8a64;
        }
        if ((uVar22 & 0x20) != 0) {
          *(undefined4 *)((longlong)puVar1 + 0x1be4) = 0xffffffff;
          *(undefined4 *)(puVar1 + 1) = 0x3f3f;
          uVar22 = local_res20;
          goto LAB_1805d8a64;
        }
        if ((uVar22 & 0x40) != 0) {
          pcVar6 = "invalid literal/length code";
          goto LAB_1805d980a;
        }
        *(undefined4 *)(puVar1 + 1) = 0x3f49;
        *(uint *)(puVar1 + 0xb) = uVar22 & 0xf;
switchD_1805d89aa_caseD_15:
        uVar22 = *(uint *)(puVar1 + 0xb);
        if (uVar22 != 0) {
          for (; uVar14 < uVar22; uVar14 = uVar14 + 8) {
            uVar9 = 0;
            uVar10 = local_64;
            if (uVar16 == 0) goto LAB_1805d91fe;
            uVar16 = uVar16 - 1;
            uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
            pbVar15 = pbVar15 + 1;
          }
          uVar14 = uVar14 - uVar22;
          uVar9 = (1 << ((byte)uVar22 & 0x1f)) - 1U & uVar24;
          uVar24 = uVar24 >> ((byte)uVar22 & 0x1f);
          *(uint *)(puVar1 + 10) = *(int *)(puVar1 + 10) + uVar9;
          *(int *)((longlong)puVar1 + 0x1be4) = *(int *)((longlong)puVar1 + 0x1be4) + uVar22;
        }
        *(undefined4 *)(puVar1 + 0x37d) = *(undefined4 *)(puVar1 + 10);
        *(undefined4 *)(puVar1 + 1) = 0x3f4a;
switchD_1805d89aa_caseD_16:
        lVar13 = puVar1[0xd];
        bVar7 = (byte)*(undefined4 *)((longlong)puVar1 + 0x74);
        uVar22 = *(uint *)(lVar13 + (ulonglong)((1 << (bVar7 & 0x1f)) - 1U & uVar24) * 4);
        if (uVar14 < (uVar22 >> 8 & 0xff)) {
          do {
            uVar9 = 0;
            uVar10 = local_64;
            if (uVar16 == 0) goto LAB_1805d91fe;
            uVar16 = uVar16 - 1;
            uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
            pbVar15 = pbVar15 + 1;
            uVar14 = uVar14 + 8;
            uVar22 = *(uint *)(lVar13 + (ulonglong)((1 << (bVar7 & 0x1f)) - 1U & uVar24) * 4);
          } while (uVar14 < (uVar22 >> 8 & 0xff));
        }
        if ((uVar22 & 0xf0) == 0) {
          local_64 = uVar22;
          uVar10 = local_64;
          local_64._1_1_ = (byte)(uVar22 >> 8);
          uVar9 = *(uint *)(lVar13 + (ulonglong)
                                     ((((1 << ((char)uVar22 + local_64._1_1_ & 0x1f)) - 1U & uVar24)
                                      >> (local_64._1_1_ & 0x1f)) + (uVar22 >> 0x10)) * 4);
          uVar12 = (uint)local_64._1_1_;
          if (uVar14 < (uVar9 >> 8 & 0xff) + (uVar22 >> 8 & 0xff)) {
            do {
              uVar9 = 0;
              if (uVar16 == 0) goto LAB_1805d91fe;
              uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
              uVar16 = uVar16 - 1;
              pbVar15 = pbVar15 + 1;
              uVar14 = uVar14 + 8;
              uVar9 = *(uint *)(lVar13 + (ulonglong)
                                         ((((1 << ((char)uVar22 + local_64._1_1_ & 0x1f)) - 1U &
                                           uVar24) >> (local_64._1_1_ & 0x1f)) + (uVar22 >> 0x10)) *
                                         4);
            } while (uVar14 < (uVar9 >> 8 & 0xff) + uVar12);
          }
          uVar22 = uVar9;
          uVar14 = uVar14 - uVar12;
          uVar24 = uVar24 >> (local_64._1_1_ & 0x1f);
          *(int *)((longlong)puVar1 + 0x1be4) = *(int *)((longlong)puVar1 + 0x1be4) + uVar12;
          local_64 = uVar10;
        }
        uVar9 = uVar22 >> 8 & 0xff;
        *(int *)((longlong)puVar1 + 0x1be4) = *(int *)((longlong)puVar1 + 0x1be4) + uVar9;
        uVar14 = uVar14 - uVar9;
        uVar24 = uVar24 >> ((byte)(uVar22 >> 8) & 0x1f);
        puVar21 = local_58;
        if ((uVar22 & 0x40) != 0) {
          param_1[4] = (longlong)"invalid distance code";
          *(undefined4 *)(puVar1 + 1) = 0x3f51;
          uVar22 = local_res20;
          goto LAB_1805d8a70;
        }
        *(uint *)((longlong)puVar1 + 0x54) = uVar22 >> 0x10;
        *(undefined4 *)(puVar1 + 1) = 0x3f4b;
        *(uint *)(puVar1 + 0xb) = uVar22 & 0xf;
        uVar22 = local_res20;
switchD_1805d89aa_caseD_17:
        uVar12 = *(uint *)(puVar1 + 0xb);
        if (uVar12 != 0) {
          for (; uVar14 < uVar12; uVar14 = uVar14 + 8) {
            uVar9 = 0;
            uVar10 = local_64;
            if (uVar16 == 0) goto LAB_1805d91fe;
            uVar16 = uVar16 - 1;
            uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
            pbVar15 = pbVar15 + 1;
          }
          uVar14 = uVar14 - uVar12;
          uVar9 = (1 << ((byte)uVar12 & 0x1f)) - 1U & uVar24;
          uVar24 = uVar24 >> ((byte)uVar12 & 0x1f);
          *(int *)((longlong)puVar1 + 0x54) = *(int *)((longlong)puVar1 + 0x54) + uVar9;
          *(int *)((longlong)puVar1 + 0x1be4) = *(int *)((longlong)puVar1 + 0x1be4) + uVar12;
        }
        *(undefined4 *)(puVar1 + 1) = 0x3f4c;
switchD_1805d89aa_caseD_18:
        uVar9 = uVar16;
        uVar10 = local_64;
        if (uVar22 != 0) {
          uVar9 = *(uint *)((longlong)puVar1 + 0x54);
          if (local_res8 - uVar22 < uVar9) {
            uVar9 = uVar9 - (local_res8 - uVar22);
            if ((*(uint *)(puVar1 + 7) < uVar9) && (*(int *)(puVar1 + 0x37c) != 0)) {
              param_1[4] = (longlong)"invalid distance too far back";
              *(undefined4 *)(puVar1 + 1) = 0x3f51;
              goto LAB_1805d8a70;
            }
            uVar12 = *(uint *)((longlong)puVar1 + 0x3c);
            if (uVar12 < uVar9) {
              uVar9 = uVar9 - uVar12;
              uVar12 = *(int *)((longlong)puVar1 + 0x34) - uVar9;
            }
            else {
              uVar12 = uVar12 - uVar9;
            }
            uVar10 = *(uint *)(puVar1 + 10);
            lVar13 = (ulonglong)uVar12 + puVar1[8];
            uVar12 = uVar10;
            if (uVar9 <= uVar10) {
              uVar12 = uVar9;
            }
          }
          else {
            uVar10 = *(uint *)(puVar1 + 10);
            lVar13 = (longlong)puVar21 - (ulonglong)uVar9;
            uVar12 = uVar10;
          }
          if (uVar22 < uVar12) {
            uVar12 = uVar22;
          }
          uVar22 = uVar22 - uVar12;
          lVar13 = lVar13 - (longlong)puVar21;
          *(uint *)(puVar1 + 10) = uVar10 - uVar12;
          do {
            *puVar21 = puVar21[lVar13];
            puVar21 = puVar21 + 1;
            uVar12 = uVar12 - 1;
          } while (uVar12 != 0);
          local_58 = puVar21;
          local_res20 = uVar22;
          if (*(int *)(puVar1 + 10) == 0) {
            *(undefined4 *)(puVar1 + 1) = 0x3f48;
          }
          goto LAB_1805d8a70;
        }
        goto LAB_1805d91fe;
      case 0x13:
        goto switchD_1805d89aa_caseD_13;
      case 0x14:
        goto switchD_1805d89aa_caseD_14;
      case 0x15:
        goto switchD_1805d89aa_caseD_15;
      case 0x16:
        goto switchD_1805d89aa_caseD_16;
      case 0x17:
        goto switchD_1805d89aa_caseD_17;
      case 0x18:
        goto switchD_1805d89aa_caseD_18;
      case 0x19:
        uVar9 = uVar16;
        if (uVar22 != 0) {
          *puVar21 = *(undefined1 *)(puVar1 + 10);
          uVar22 = uVar22 - 1;
          local_58 = puVar21 + 1;
          *(undefined4 *)(puVar1 + 1) = 0x3f48;
          puVar21 = puVar21 + 1;
          local_res20 = uVar22;
          goto LAB_1805d8a70;
        }
        goto LAB_1805d91fe;
      case 0x1a:
        if (*(int *)(puVar1 + 2) == 0) {
          *(undefined4 *)(puVar1 + 1) = 0x3f4f;
        }
        else {
          for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
            uVar9 = 0;
            if (uVar16 == 0) goto LAB_1805d91fe;
            uVar16 = uVar16 - 1;
            uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
            pbVar15 = pbVar15 + 1;
          }
          local_res8 = local_res8 - uVar22;
          *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + local_res8;
          *(int *)((longlong)puVar1 + 0x24) = *(int *)((longlong)puVar1 + 0x24) + local_res8;
          if ((*(byte *)(puVar1 + 2) & 4) != 0) {
            if (local_res8 != 0) {
              if (*(int *)(puVar1 + 3) == 0) {
                uVar5 = FUN_1805d7bc0(*(undefined4 *)(puVar1 + 4),
                                      (longlong)puVar21 - (ulonglong)local_res8);
              }
              else {
                uVar5 = FUN_1805d7f90(*(undefined4 *)(puVar1 + 4),
                                      (longlong)puVar21 - (ulonglong)local_res8,local_res8);
              }
              *(undefined4 *)(puVar1 + 4) = uVar5;
              *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
              puVar21 = local_58;
              uVar22 = local_res20;
            }
          }
          local_res8 = uVar22;
          if ((*(byte *)(puVar1 + 2) & 4) != 0) {
            uVar9 = uVar24;
            if (*(int *)(puVar1 + 3) == 0) {
              uVar9 = uVar24 >> 0x18 | (uVar24 & 0xff0000) >> 8 | (uVar24 & 0xff00) << 8 |
                      uVar24 << 0x18;
            }
            if (uVar9 != *(uint *)(puVar1 + 4)) {
              param_1[4] = (longlong)"incorrect data check";
              *(undefined4 *)(puVar1 + 1) = 0x3f51;
              goto LAB_1805d8a70;
            }
          }
          *(undefined4 *)(puVar1 + 1) = 0x3f4f;
          uVar24 = uVar28;
          uVar14 = uVar28;
        }
        goto LAB_1805d9f11;
      case 0x1b:
LAB_1805d9f11:
        if (*(int *)(puVar1 + 2) != 0) {
          uVar9 = uVar16;
          if (*(int *)(puVar1 + 3) != 0) {
            for (; uVar14 < 0x20; uVar14 = uVar14 + 8) {
              uVar16 = 0;
              if (uVar9 == 0) goto LAB_1805d9214;
              uVar24 = uVar24 + ((uint)*pbVar15 << ((byte)uVar14 & 0x1f));
              pbVar15 = pbVar15 + 1;
              uVar9 = uVar9 - 1;
            }
            uVar16 = uVar9;
            if (((*(byte *)(puVar1 + 2) & 4) != 0) && (uVar24 != *(uint *)((longlong)puVar1 + 0x24))
               ) {
              param_1[4] = (longlong)"incorrect length check";
              *(undefined4 *)(puVar1 + 1) = 0x3f51;
              goto LAB_1805d8a70;
            }
            uVar24 = uVar28;
            uVar14 = uVar28;
          }
        }
        *(undefined4 *)(puVar1 + 1) = 0x3f50;
        local_res18 = 1;
        break;
      case 0x1c:
        local_res18 = 1;
        break;
      case 0x1d:
        local_res18 = -3;
        break;
      case 0x1e:
        goto LAB_1805da0af;
      case 0x1f:
        goto LAB_1805da0af;
      }
LAB_1805d9214:
      param_1[2] = (longlong)local_58;
      *(uint *)(param_1 + 3) = local_res20;
      *param_1 = (longlong)pbVar15;
      *(uint *)(param_1 + 1) = uVar16;
      *(uint *)(puVar1 + 9) = uVar24;
      *(uint *)((longlong)puVar1 + 0x4c) = uVar14;
      if (((*(int *)((longlong)puVar1 + 0x34) == 0) &&
          (((local_res8 == *(uint *)(param_1 + 3) || (0x3f50 < *(int *)(puVar1 + 1))) ||
           ((0x3f4d < *(int *)(puVar1 + 1) && (param_2 == 4)))))) ||
         (iVar4 = FUN_1805dace0(param_1,param_1[2],local_res8 - (int)param_1[3]), iVar4 == 0)) {
        local_res8 = local_res8 - (int)param_1[3];
        local_60 = local_60 - (int)param_1[1];
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + local_60;
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + local_res8;
        *(int *)((longlong)puVar1 + 0x24) = *(int *)((longlong)puVar1 + 0x24) + local_res8;
        if (((*(byte *)(puVar1 + 2) & 4) != 0) && (local_res8 != 0)) {
          if (*(int *)(puVar1 + 3) == 0) {
            uVar5 = FUN_1805d7bc0(*(undefined4 *)(puVar1 + 4),param_1[2] - (ulonglong)local_res8);
          }
          else {
            uVar5 = FUN_1805d7f90(*(undefined4 *)(puVar1 + 4),param_1[2] - (ulonglong)local_res8,
                                  local_res8);
          }
          *(undefined4 *)(puVar1 + 4) = uVar5;
          *(undefined4 *)((longlong)param_1 + 0x4c) = uVar5;
        }
        iVar4 = *(int *)(puVar1 + 1);
        if ((iVar4 == 0x3f47) || (iVar4 == 0x3f42)) {
          iVar11 = 0x100;
        }
        else {
          iVar11 = 0;
        }
        iVar19 = 0;
        if (iVar4 == 0x3f3f) {
          iVar19 = 0x80;
        }
        *(uint *)(param_1 + 9) =
             (-(uint)(*(int *)((longlong)puVar1 + 0xc) != 0) & 0x40) + iVar19 +
             *(int *)((longlong)puVar1 + 0x4c) + iVar11;
        if (((local_60 != 0) || (local_res8 != 0)) && (param_2 != 4)) {
          return local_res18;
        }
        if (local_res18 == 0) {
          return -5;
        }
        return local_res18;
      }
      *(undefined4 *)(puVar1 + 1) = 0x3f52;
LAB_1805da0af:
      return -4;
    }
  }
LAB_1805da0af:
  return -2;
}



