// FUN_18058d410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18058d410 */

ulonglong FUN_18058d410(longlong param_1)

{
  ushort *puVar1;
  int *piVar2;
  byte bVar3;
  short sVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  byte *pbVar10;
  ushort uVar11;
  byte *pbVar12;
  uint uVar13;
  ushort *puVar14;
  int *piVar15;
  byte *pbVar16;
  undefined1 *puVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulonglong uVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  uint local_res18 [2];
  int local_res20;
  
  sVar4 = *(short *)(param_1 + 0x34);
  puVar5 = *(undefined1 **)(param_1 + 0x108);
  pbVar6 = *(byte **)(param_1 + 0x110);
  lVar7 = *(longlong *)(param_1 + 0x18);
  if (sVar4 == 0) {
    iVar22 = 0;
  }
  else {
    iVar21 = (int)sVar4;
    iVar22 = (int)sVar4;
    if (*(uint *)(lVar7 + 0xc) <
        (uint)*(ushort *)(lVar7 + 0x60) + (uint)*(ushort *)(lVar7 + 0x18) + (int)sVar4) {
      uVar8 = FUN_180573d00(lVar7,0,(longlong)sVar4 & 0xffffffff);
      local_res18[0] = (uint)uVar8;
      if (local_res18[0] != 0) {
        return uVar8;
      }
      goto LAB_18058d491;
    }
  }
  iVar21 = iVar22;
  local_res18[0] = 0;
LAB_18058d491:
  if ((sVar4 < 0xfff) && (puVar5 + (longlong)(iVar21 * 2) + 2 <= pbVar6)) {
    puVar14 = *(ushort **)(lVar7 + 0x78);
    puVar1 = puVar14 + sVar4;
    uVar13 = 0xffffffff;
    for (; puVar14 < puVar1; puVar14 = puVar14 + 1) {
      uVar11 = CONCAT11(*puVar5,puVar5[1]);
      *puVar14 = uVar11;
      if ((int)(uint)uVar11 <= (int)uVar13) goto LAB_18058d7c1;
      puVar5 = puVar5 + 2;
      uVar13 = (uint)uVar11;
    }
    iVar22 = uVar13 + 1;
    local_res20 = iVar22;
    if ((uVar13 + 5 == 0) ||
       (*(ushort *)(lVar7 + 0x1a) + 4 + (uint)*(ushort *)(lVar7 + 0x62) + iVar22 <=
        *(uint *)(lVar7 + 8))) {
      local_res18[0] = 0;
    }
    else {
      uVar8 = FUN_180573d00(lVar7,uVar13 + 5,0);
      local_res18[0] = (uint)uVar8;
      if (local_res18[0] != 0) {
        return uVar8;
      }
    }
    puVar17 = puVar5 + 2;
    uVar11 = CONCAT11(*puVar5,puVar5[1]);
    if (pbVar6 < puVar17 + uVar11) {
      uVar8 = 0x16;
    }
    else {
      if ((*(byte *)(param_1 + 0x20) & 2) == 0) {
        lVar23 = *(longlong *)(param_1 + 0xd8);
        uVar9 = *(undefined8 *)(lVar23 + 0x10);
        if (*(int *)(lVar23 + 0x218) != 0) {
          FUN_18057abd0(uVar9,*(undefined8 *)(lVar23 + 0x220));
          *(undefined8 *)(lVar23 + 0x220) = 0;
        }
        *(undefined4 *)(lVar23 + 0x218) = 0;
        if (uVar11 != 0) {
          uVar9 = FUN_18057ab40(uVar9,puVar17,(ulonglong)uVar11,local_res18);
          *(undefined8 *)(lVar23 + 0x220) = uVar9;
          if (local_res18[0] != 0) {
            return (ulonglong)local_res18[0];
          }
          *(uint *)(lVar23 + 0x218) = (uint)uVar11;
        }
        iVar22 = local_res20;
      }
      lVar23 = (longlong)iVar22;
      pbVar19 = *(byte **)(lVar7 + 0x70) + lVar23;
      pbVar18 = puVar17 + uVar11;
      pbVar10 = *(byte **)(lVar7 + 0x70);
      while (pbVar12 = pbVar18, pbVar10 < pbVar19) {
        pbVar18 = pbVar12 + 1;
        if (pbVar6 < pbVar18) goto LAB_18058d7c1;
        bVar3 = *pbVar12;
        *pbVar10 = bVar3;
        pbVar10 = pbVar10 + 1;
        if ((bVar3 & 8) != 0) {
          pbVar12 = pbVar12 + 2;
          if (pbVar6 < pbVar12) goto LAB_18058d7c1;
          bVar3 = *pbVar18;
          if (pbVar19 < pbVar10 + bVar3) goto LAB_18058d7c1;
          pbVar18 = pbVar12;
          if (bVar3 != 0) {
            FUN_18063ab10();
            pbVar10 = pbVar10 + bVar3;
          }
        }
      }
      if ((iVar22 != 0) && ((**(byte **)(lVar7 + 0x70) & 0x40) != 0)) {
        *(uint *)(lVar7 + 0x38) = *(uint *)(lVar7 + 0x38) | 0x40;
      }
      piVar15 = *(int **)(lVar7 + 0x68);
      iVar21 = 0;
      pbVar18 = *(byte **)(lVar7 + 0x70);
      piVar2 = piVar15 + lVar23 * 2;
      if (piVar15 < piVar2) {
        pbVar19 = pbVar12 + 2;
        pbVar10 = pbVar12 + 1;
        pbVar16 = pbVar12;
        do {
          bVar3 = *pbVar18;
          uVar13 = 0;
          if ((bVar3 & 2) == 0) {
            pbVar12 = pbVar16;
            if ((bVar3 & 0x10) == 0) {
              if (pbVar6 < pbVar19) goto LAB_18058d7c1;
              pbVar12 = pbVar16 + 2;
              pbVar10 = pbVar10 + 2;
              pbVar19 = pbVar19 + 2;
              uVar13 = (int)(short)((ushort)*pbVar16 << 8) | (uint)pbVar16[1];
            }
          }
          else {
            if (pbVar6 < pbVar10) goto LAB_18058d7c1;
            pbVar10 = pbVar10 + 1;
            pbVar19 = pbVar19 + 1;
            uVar13 = -(uint)*pbVar16;
            if ((bVar3 & 0x10) != 0) {
              uVar13 = (uint)*pbVar16;
            }
            pbVar12 = pbVar16 + 1;
          }
          iVar21 = iVar21 + uVar13;
          pbVar18 = pbVar18 + 1;
          *piVar15 = iVar21;
          piVar15 = piVar15 + 2;
          pbVar16 = pbVar12;
        } while (piVar15 < piVar2);
      }
      uVar20 = *(ulonglong *)(lVar7 + 0x68);
      iVar21 = 0;
      pbVar18 = *(byte **)(lVar7 + 0x70);
      uVar8 = uVar20 + lVar23 * 8;
      if (uVar20 < uVar8) {
        pbVar19 = pbVar12 + 2;
        pbVar10 = pbVar12 + 1;
        pbVar16 = pbVar12;
        do {
          bVar3 = *pbVar18;
          uVar13 = 0;
          if ((bVar3 & 4) == 0) {
            pbVar12 = pbVar16;
            if ((bVar3 & 0x20) == 0) {
              if (pbVar6 < pbVar19) goto LAB_18058d7c1;
              pbVar12 = pbVar16 + 2;
              pbVar10 = pbVar10 + 2;
              pbVar19 = pbVar19 + 2;
              uVar13 = (int)(short)((ushort)*pbVar16 << 8) | (uint)pbVar16[1];
            }
          }
          else {
            if (pbVar6 < pbVar10) goto LAB_18058d7c1;
            pbVar10 = pbVar10 + 1;
            pbVar19 = pbVar19 + 1;
            uVar13 = -(uint)*pbVar16;
            if ((bVar3 & 0x20) != 0) {
              uVar13 = (uint)*pbVar16;
            }
            pbVar12 = pbVar16 + 1;
          }
          iVar21 = iVar21 + uVar13;
          *(int *)(uVar20 + 4) = iVar21;
          uVar20 = uVar20 + 8;
          *pbVar18 = bVar3 & 1;
          pbVar18 = pbVar18 + 1;
          pbVar16 = pbVar12;
        } while (uVar20 < uVar8);
      }
      *(short *)(lVar7 + 0x60) = sVar4;
      *(short *)(lVar7 + 0x62) = (short)iVar22;
      *(byte **)(param_1 + 0x108) = pbVar12;
      uVar8 = (ulonglong)local_res18[0];
    }
  }
  else {
LAB_18058d7c1:
    uVar8 = 0x14;
  }
  return uVar8;
}



