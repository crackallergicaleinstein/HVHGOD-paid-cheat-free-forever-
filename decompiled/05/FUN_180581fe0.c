// FUN_180581fe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180581fe0 */

int FUN_180581fe0(undefined8 *param_1,ushort *param_2)

{
  ushort *puVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  ushort *puVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  longlong lVar19;
  uint uVar20;
  ushort *puVar21;
  ushort *puVar22;
  ushort *puVar23;
  char *pcVar24;
  ushort *puVar25;
  char *pcVar26;
  int *piVar27;
  byte *pbVar28;
  ulonglong uVar29;
  int local_res10 [2];
  int local_res18;
  int local_res20;
  
  iVar18 = *(int *)(param_1 + 2);
  iVar6 = *(int *)(param_1 + 1);
  local_res20 = *(int *)((longlong)param_1 + 0xc);
  local_res18 = *(int *)((longlong)param_1 + 0x14);
  uVar8 = *param_1;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  *(undefined4 *)(param_1 + 0x11e) = 0;
  uVar3 = *param_2;
  uVar17 = *(uint *)(param_1 + 5);
  local_res10[0] = 0;
  if (uVar3 < 9) {
    if (param_1[6] == 0) {
      *(undefined4 *)(param_1 + 5) = 8;
      param_1[6] = param_1 + 0x231;
      param_1[7] = param_1 + 0x239;
      param_1[8] = param_1 + 0x23d;
    }
  }
  else if (uVar3 != uVar17 && (int)uVar17 <= (int)(uint)uVar3) {
    puVar12 = (undefined8 *)param_1[6];
    if (puVar12 == param_1 + 0x231) {
      param_1[6] = 0;
      puVar12 = (undefined8 *)0x0;
      param_1[7] = 0;
      param_1[8] = 0;
    }
    uVar20 = uVar3 + 3 & 0xfffffffc;
    uVar7 = FUN_18057ad10(uVar8,8,uVar17,uVar20,puVar12,local_res10);
    param_1[6] = uVar7;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    uVar7 = FUN_18057ad10(uVar8,4,uVar17,uVar20,param_1[7],local_res10);
    param_1[7] = uVar7;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    uVar7 = FUN_18057ad10(uVar8,4,uVar17,uVar20,param_1[8],local_res10);
    param_1[8] = uVar7;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    *(uint *)(param_1 + 5) = uVar20;
  }
  uVar3 = param_2[1];
  uVar17 = uVar3 + 2;
  if (uVar17 < 0x61) {
    if (param_1[4] == 0) {
      *(undefined4 *)(param_1 + 3) = 0x60;
      param_1[4] = param_1 + 0x241;
    }
  }
  else if (*(int *)(param_1 + 3) < (int)uVar17) {
    puVar12 = (undefined8 *)param_1[4];
    if (puVar12 == param_1 + 0x241) {
      param_1[4] = 0;
      puVar12 = (undefined8 *)0x0;
    }
    uVar17 = uVar3 + 0xb & 0xfffffff8;
    uVar8 = FUN_18057ad10(uVar8,0x30,*(int *)(param_1 + 3),uVar17,puVar12,local_res10);
    param_1[4] = uVar8;
    if (local_res10[0] != 0) {
      return local_res10[0];
    }
    *(uint *)(param_1 + 3) = uVar17;
  }
  *(uint *)((longlong)param_1 + 0x1c) = (uint)param_2[1];
  *(uint *)((longlong)param_1 + 0x2c) = (uint)*param_2;
  *(undefined4 *)(param_1 + 0xd) = 2;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  iVar4 = FUN_1805763d0(param_2);
  if (iVar4 == 1) {
    *(undefined4 *)(param_1 + 0xd) = 0xfffffffe;
    *(undefined4 *)(param_1 + 0x120) = 1;
  }
  puVar21 = (ushort *)param_1[4];
  *(int *)((longlong)param_1 + 0x14) = local_res18;
  *(int *)(param_1 + 1) = iVar6;
  *(int *)(param_1 + 2) = iVar18;
  *(int *)((longlong)param_1 + 0xc) = local_res20;
  if (*(int *)((longlong)param_1 + 0x1c) != 0) {
    piVar27 = *(int **)(param_2 + 4);
    pbVar28 = *(byte **)(param_2 + 8);
    puVar25 = puVar21 + (longlong)*(int *)((longlong)param_1 + 0x1c) * 0x18;
    uVar17 = (uint)*(ushort *)(*(longlong *)(param_1[0x230] + 8) + 0x68) * 0x14 >> 0xb;
    uVar29 = (ulonglong)**(ushort **)(param_2 + 0xc);
    iVar4 = 0;
    puVar15 = puVar21 + uVar29 * 0x18;
    if (puVar21 < puVar25) {
      lVar19 = 0;
      puVar22 = puVar15;
      lVar9 = (longlong)puVar21 + 3;
      do {
        *(undefined2 *)(lVar9 + -1) = 0x404;
        *(short *)(lVar9 + 9) = (short)*piVar27;
        *(short *)(lVar9 + 0xb) = (short)piVar27[1];
        lVar13 = (longlong)*piVar27 * (longlong)iVar6;
        iVar5 = (int)((ulonglong)((lVar13 >> 0x3f) + lVar13 + 0x8000) >> 0x10) + local_res20;
        puVar23 = (ushort *)(lVar9 + -3);
        *(int *)(lVar9 + 0xd) = iVar5;
        *(int *)(lVar9 + 1) = iVar5;
        lVar13 = (longlong)piVar27[1] * (longlong)iVar18;
        iVar5 = local_res18 + (int)((ulonglong)(lVar13 + 0x8000 + (lVar13 >> 0x3f)) >> 0x10);
        *(int *)(lVar9 + 0x11) = iVar5;
        *(int *)(lVar9 + 5) = iVar5;
        puVar15[6] = *(ushort *)(*(longlong *)(param_2 + 4) + uVar29 * 8);
        puVar15[7] = *(ushort *)(*(longlong *)(param_2 + 4) + 4 + uVar29 * 8);
        if ((*pbVar28 & 3) == 0) {
          *puVar23 = 1;
        }
        else if ((*pbVar28 & 3) == 2) {
          *puVar23 = 2;
        }
        else {
          *puVar23 = 0;
        }
        iVar10 = (int)*(short *)(lVar9 + 9) - (int)(short)puVar22[6];
        iVar5 = -iVar10;
        if (iVar5 < 0) {
          iVar5 = iVar10;
        }
        iVar11 = (int)*(short *)(lVar9 + 0xb) - (int)(short)puVar22[7];
        iVar10 = -iVar11;
        if (iVar10 < 0) {
          iVar10 = iVar11;
        }
        if (iVar5 + iVar10 < (int)uVar17) {
          *puVar22 = *puVar22 | 0x20;
        }
        *(ushort **)(lVar9 + 0x25) = puVar22;
        *(ushort **)(puVar22 + 0x10) = puVar23;
        if (puVar23 == puVar15) {
          iVar4 = iVar4 + 1;
          lVar19 = lVar19 + 2;
          if (iVar4 < (int)(uint)*param_2) {
            uVar29 = (ulonglong)*(ushort *)(*(longlong *)(param_2 + 0xc) + lVar19);
            puVar23 = puVar21 + uVar29 * 0x18;
            puVar15 = puVar23;
          }
        }
        piVar27 = piVar27 + 2;
        pbVar28 = pbVar28 + 1;
        puVar1 = (ushort *)(lVar9 + 0x2d);
        puVar22 = puVar23;
        lVar9 = lVar9 + 0x30;
      } while (puVar1 < puVar25);
    }
    puVar14 = (undefined8 *)param_1[6];
    puVar12 = puVar14 + *(int *)((longlong)param_1 + 0x2c);
    if (puVar14 < puVar12) {
      lVar9 = 0;
      puVar15 = *(ushort **)(param_2 + 0xc);
      do {
        *puVar14 = puVar21 + lVar9 * 0x18;
        puVar14 = puVar14 + 1;
        lVar9 = (ulonglong)*puVar15 + 1;
        puVar15 = puVar15 + 1;
      } while (puVar14 < puVar12);
    }
    puVar14 = (undefined8 *)param_1[6];
    puVar12 = puVar14 + *(int *)((longlong)param_1 + 0x2c);
    for (; puVar14 < puVar12; puVar14 = puVar14 + 1) {
      puVar15 = (ushort *)*puVar14;
      puVar22 = puVar15;
      for (puVar23 = *(ushort **)(puVar15 + 0x14); puVar23 != puVar15;
          puVar23 = *(ushort **)(puVar23 + 0x14)) {
        iVar18 = -((int)(short)puVar22[7] - (int)(short)puVar23[7]);
        if (iVar18 < 0) {
          iVar18 = (int)(short)puVar22[7] - (int)(short)puVar23[7];
        }
        iVar6 = -((int)(short)puVar22[6] - (int)(short)puVar23[6]);
        if (iVar6 < 0) {
          iVar6 = (int)(short)puVar22[6] - (int)(short)puVar23[6];
        }
        if ((int)(uVar17 * 2 + -1) <= iVar18 + iVar6) break;
        puVar22 = puVar23;
      }
      puVar22[0xc] = 0;
      puVar22[0xd] = 0;
      puVar22[0xe] = 0;
      puVar22[0xf] = 0;
      iVar18 = 0;
      iVar6 = 0;
      puVar15 = puVar22;
      puVar23 = puVar22;
      do {
        puVar1 = *(ushort **)(puVar23 + 0x10);
        iVar18 = iVar18 + ((int)(short)puVar1[6] - (int)(short)puVar23[6]);
        iVar6 = iVar6 + ((int)(short)puVar1[7] - (int)(short)puVar23[7]);
        iVar4 = -iVar6;
        if (-iVar6 < 0) {
          iVar4 = iVar6;
        }
        iVar5 = -iVar18;
        if (-iVar18 < 0) {
          iVar5 = iVar18;
        }
        if (iVar4 + iVar5 < (int)uVar17) {
          *puVar1 = *puVar1 | 0x10;
        }
        else {
          iVar5 = -iVar18;
          iVar4 = (int)(((longlong)puVar1 - (longlong)puVar15) / 0x30);
          *(int *)(puVar15 + 0xc) = iVar4;
          *(int *)(puVar1 + 0xe) = -iVar4;
          iVar4 = iVar18;
          if (iVar6 < iVar18) {
            if (iVar6 < iVar5) {
              uVar16 = 0xfe;
              iVar5 = -iVar6;
            }
            else {
              uVar16 = 1;
              iVar4 = iVar6;
              iVar5 = iVar18;
            }
          }
          else if (iVar6 < iVar5) {
            uVar16 = 0xff;
            iVar4 = iVar6;
          }
          else {
            uVar16 = 2;
            iVar5 = iVar6;
          }
          iVar18 = -iVar4;
          if (-iVar4 < 0) {
            iVar18 = iVar4;
          }
          if (iVar5 <= iVar18 * 0xe) {
            uVar16 = 4;
          }
          *(undefined1 *)((longlong)puVar15 + 3) = uVar16;
          for (puVar15 = *(ushort **)(puVar15 + 0x10); puVar15 != puVar1;
              puVar15 = *(ushort **)(puVar15 + 0x10)) {
            *(undefined1 *)(puVar15 + 1) = uVar16;
            *(undefined1 *)((longlong)puVar15 + 3) = uVar16;
          }
          *(undefined1 *)(puVar1 + 1) = uVar16;
          iVar18 = 0;
          iVar6 = 0;
          iVar4 = (int)(((longlong)puVar22 - (longlong)puVar15) / 0x30);
          *(int *)(puVar15 + 0xc) = iVar4;
          *(int *)(puVar22 + 0xe) = -iVar4;
        }
        puVar23 = puVar1;
      } while (puVar1 != puVar22);
    }
    if (puVar21 < puVar25) {
      pcVar24 = (char *)((longlong)puVar21 + 3);
      do {
        if ((((*(ushort *)(pcVar24 + -3) & 0x10) == 0) && (pcVar24[-1] == '\x04')) &&
           (*pcVar24 == '\x04')) {
          iVar18 = *(int *)(pcVar24 + 0x15);
          pcVar26 = pcVar24 + (longlong)*(int *)(pcVar24 + 0x19) * 0x30 + -3;
          if ((-1 < ((int)*(short *)(pcVar24 + 9) - (int)*(short *)(pcVar26 + 0xc) ^
                    (int)*(short *)(pcVar24 + (longlong)iVar18 * 0x30 + 9) -
                    (int)*(short *)(pcVar24 + 9))) &&
             (-1 < ((int)*(short *)(pcVar24 + 0xb) - (int)*(short *)(pcVar26 + 0xe) ^
                   (int)*(short *)(pcVar24 + (longlong)iVar18 * 0x30 + 0xb) -
                   (int)*(short *)(pcVar24 + 0xb)))) {
            *(ushort *)(pcVar24 + -3) = *(ushort *)(pcVar24 + -3) | 0x10;
            iVar6 = (int)((longlong)(pcVar24 + (((longlong)iVar18 * 0x30 + -3) - (longlong)pcVar26))
                         / 0x30);
            *(int *)(pcVar26 + 0x18) = iVar6;
            *(int *)(pcVar24 + (longlong)iVar18 * 0x30 + 0x19) = -iVar6;
          }
        }
        puVar15 = (ushort *)(pcVar24 + 0x2d);
        pcVar24 = pcVar24 + 0x30;
      } while (puVar15 < puVar25);
      do {
        if ((*puVar21 & 0x10) == 0) {
          if ((*puVar21 & 3) == 0) {
            cVar2 = *(char *)((longlong)puVar21 + 3);
            if (cVar2 == (char)puVar21[1]) {
              if (cVar2 == '\x04') {
                iVar18 = *(int *)(puVar21 + 0xc);
                puVar15 = puVar21 + (longlong)*(int *)(puVar21 + 0xe) * 0x18;
                iVar6 = FUN_180579b90((int)(short)puVar21[6] - (int)(short)puVar15[6],
                                      (int)(short)puVar21[7] - (int)(short)puVar15[7],
                                      (int)(short)puVar21[(longlong)iVar18 * 0x18 + 6] -
                                      (int)(short)puVar21[6],
                                      (int)(short)puVar21[(longlong)iVar18 * 0x18 + 7] -
                                      (int)(short)puVar21[7]);
                if (iVar6 == 0) goto LAB_1805827de;
                iVar6 = (int)(((longlong)puVar21 + ((longlong)iVar18 * 0x30 - (longlong)puVar15)) /
                             0x30);
                *(int *)(puVar15 + 0xc) = iVar6;
                *(int *)(puVar21 + (longlong)iVar18 * 0x18 + 0xe) = -iVar6;
              }
            }
            else if ((int)(char)puVar21[1] != -(int)cVar2) goto LAB_1805827de;
          }
          *puVar21 = *puVar21 | 0x10;
        }
LAB_1805827de:
        puVar21 = puVar21 + 0x18;
      } while (puVar21 < puVar25);
    }
  }
  return local_res10[0];
}



