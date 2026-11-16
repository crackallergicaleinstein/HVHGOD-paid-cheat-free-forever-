// FUN_180583e80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180583e80 */

undefined8 FUN_180583e80(undefined8 *param_1,int param_2)

{
  short *psVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  short *psVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  ulonglong uVar20;
  short *psVar21;
  undefined1 *puVar22;
  byte *pbVar23;
  longlong lVar24;
  short *psVar25;
  undefined1 local_res10;
  short *local_58 [3];
  
  uVar4 = *param_1;
  lVar24 = (longlong)param_2;
  plVar5 = (longlong *)param_1[0x230];
  local_res10 = 0;
  psVar14 = (short *)param_1[lVar24 * 0x113 + 10];
  puVar6 = (&PTR_DAT_18066cf80)[*(int *)(*plVar5 + 8)];
  if (psVar14 == (short *)0x0) {
    psVar25 = (short *)0x0;
  }
  else {
    psVar25 = psVar14 + (ulonglong)*(uint *)(param_1 + lVar24 * 0x113 + 9) * 0x24;
  }
  *(undefined4 *)(param_1 + lVar24 * 0x113 + 0xb) = 0;
  lVar12 = 8;
  if (param_2 != 0) {
    lVar12 = 0x10;
  }
  iVar17 = *(int *)(lVar12 + (longlong)param_1);
  if (param_2 == 1) {
    local_res10 = puVar6[0x18];
  }
  else if (param_2 == 0) {
    iVar11 = FUN_180573310(0x40,*(undefined4 *)(param_1 + 2));
    goto LAB_180583f2f;
  }
  iVar11 = 0;
LAB_180583f2f:
  iVar8 = FUN_180573310(0x20,iVar17);
  lVar12 = (longlong)*(int *)((longlong)plVar5 + lVar24 * 0x204 + 0x110) * (longlong)iVar17;
  iVar9 = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
  if (0x10 < iVar9) {
    iVar9 = 0x10;
  }
  iVar9 = FUN_180573310(iVar9);
  if (psVar14 < psVar25) {
    psVar21 = psVar14 + 2;
    do {
      if ((iVar11 <= psVar21[3]) && (*psVar21 <= iVar8)) {
        cVar3 = *(char *)((longlong)psVar21 + -3);
        if ((cVar3 != '\x04') &&
           ((*(longlong *)(psVar21 + 0x12) == 0 || (iVar11 * 3 <= psVar21[3] * 2)))) {
          uVar20 = 0;
          if (*(uint *)(param_1 + lVar24 * 0x113 + 0xb) != 0) {
            do {
              lVar12 = param_1[lVar24 * 0x113 + 0xc] + uVar20 * 0x48;
              iVar15 = (int)*(short *)(param_1[lVar24 * 0x113 + 0xc] + uVar20 * 0x48);
              iVar10 = psVar21[-1] - iVar15;
              iVar15 = iVar15 - psVar21[-1];
              if (-1 < iVar10) {
                iVar15 = iVar10;
              }
              if ((iVar15 < iVar9) && (*(char *)(lVar12 + 0xd) == cVar3)) {
                if (lVar12 != 0) {
                  *(undefined8 *)(psVar21 + 10) = *(undefined8 *)(lVar12 + 0x38);
                  *(short **)(*(longlong *)(lVar12 + 0x40) + 0x18) = psVar21 + -2;
                  *(short **)(lVar12 + 0x40) = psVar21 + -2;
                  goto LAB_1805840c7;
                }
                break;
              }
              uVar19 = (int)uVar20 + 1;
              uVar20 = (ulonglong)uVar19;
            } while (uVar19 < *(uint *)(param_1 + lVar24 * 0x113 + 0xb));
          }
          uVar13 = FUN_18057eb50(param_1 + lVar24 * 0x113 + 9,(int)psVar21[-1],(int)cVar3,
                                 local_res10,uVar4,local_58);
          if ((int)uVar13 != 0) {
            return uVar13;
          }
          psVar1 = psVar21 + -2;
          local_58[0][0] = 0;
          local_58[0][1] = 0;
          local_58[0][2] = 0;
          local_58[0][3] = 0;
          local_58[0][4] = 0;
          local_58[0][5] = 0;
          local_58[0][6] = 0;
          local_58[0][7] = 0;
          local_58[0][8] = 0;
          local_58[0][9] = 0;
          local_58[0][10] = 0;
          local_58[0][0xb] = 0;
          local_58[0][0xc] = 0;
          local_58[0][0xd] = 0;
          local_58[0][0xe] = 0;
          local_58[0][0xf] = 0;
          local_58[0][0x10] = 0;
          local_58[0][0x11] = 0;
          local_58[0][0x12] = 0;
          local_58[0][0x13] = 0;
          local_58[0][0x14] = 0;
          local_58[0][0x15] = 0;
          local_58[0][0x16] = 0;
          local_58[0][0x17] = 0;
          local_58[0][0x18] = 0;
          local_58[0][0x19] = 0;
          local_58[0][0x1a] = 0;
          local_58[0][0x1b] = 0;
          local_58[0][0x1c] = 0;
          local_58[0][0x1d] = 0;
          local_58[0][0x1e] = 0;
          local_58[0][0x1f] = 0;
          *(short **)(local_58[0] + 0x1c) = psVar1;
          *(short **)(local_58[0] + 0x20) = psVar1;
          *(undefined1 *)((longlong)local_58[0] + 0xd) = *(undefined1 *)((longlong)psVar21 + -3);
          *local_58[0] = psVar21[-1];
          lVar12 = (longlong)psVar21[-1] * (longlong)iVar17;
          uVar16 = (undefined4)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
          *(undefined4 *)(local_58[0] + 2) = uVar16;
          *(undefined4 *)(local_58[0] + 4) = uVar16;
          *(short **)(psVar21 + 10) = psVar1;
        }
      }
LAB_1805840c7:
      psVar1 = psVar21 + 0x22;
      psVar21 = psVar21 + 0x24;
    } while (psVar1 < psVar25);
    for (; psVar14 < psVar25; psVar14 = psVar14 + 0x24) {
      if (*(char *)((longlong)psVar14 + 1) == '\x04') {
        uVar20 = 0;
        if (*(uint *)(param_1 + lVar24 * 0x113 + 0xb) != 0) {
          do {
            lVar12 = param_1[lVar24 * 0x113 + 0xc] + uVar20 * 0x48;
            iVar17 = (int)*(short *)(param_1[lVar24 * 0x113 + 0xc] + uVar20 * 0x48);
            iVar11 = psVar14[1] - iVar17;
            iVar17 = iVar17 - psVar14[1];
            if (-1 < iVar11) {
              iVar17 = iVar11;
            }
            if (iVar17 < iVar9) {
              if (lVar12 != 0) {
                *(undefined8 *)(psVar14 + 0xc) = *(undefined8 *)(lVar12 + 0x38);
                *(short **)(*(longlong *)(lVar12 + 0x40) + 0x18) = psVar14;
                *(short **)(lVar12 + 0x40) = psVar14;
              }
              break;
            }
            uVar19 = (int)uVar20 + 1;
            uVar20 = (ulonglong)uVar19;
          } while (uVar19 < *(uint *)(param_1 + lVar24 * 0x113 + 0xb));
        }
      }
    }
  }
  puVar22 = (undefined1 *)param_1[lVar24 * 0x113 + 0xc];
  if ((puVar22 != (undefined1 *)0x0) &&
     (puVar2 = puVar22 + (ulonglong)*(uint *)(param_1 + lVar24 * 0x113 + 0xb) * 0x48,
     puVar18 = puVar22, puVar22 < puVar2)) {
    do {
      lVar24 = *(longlong *)(puVar18 + 0x38);
      if (lVar24 != 0) {
        do {
          *(undefined1 **)(lVar24 + 0x10) = puVar18;
          lVar24 = *(longlong *)(lVar24 + 0x18);
        } while (lVar24 != *(longlong *)(puVar18 + 0x38));
      }
      puVar18 = puVar18 + 0x48;
    } while (puVar18 < puVar2);
    puVar22 = puVar22 + 0xc;
    do {
      pbVar23 = *(byte **)(puVar22 + 0x2c);
      iVar11 = 0;
      iVar17 = 0;
      do {
        lVar24 = *(longlong *)(pbVar23 + 0x28);
        iVar8 = iVar11 + 1;
        if ((*pbVar23 & 1) == 0) {
          iVar8 = iVar11;
          iVar17 = iVar17 + 1;
        }
        iVar11 = iVar8;
        if (((lVar24 == 0) || (*(undefined1 **)(lVar24 + 0x10) == (undefined1 *)0x0)) ||
           (*(undefined1 **)(lVar24 + 0x10) == puVar22 + -0xc)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
        lVar12 = *(longlong *)(pbVar23 + 0x20);
        if ((lVar12 == 0) || (*(longlong *)(lVar12 + 0x10) == 0)) {
          if (bVar7) goto LAB_180584268;
        }
        else {
          psVar14 = *(short **)(puVar22 + 0x14);
          if (bVar7) {
LAB_180584268:
            psVar14 = *(short **)(puVar22 + 0x1c);
            lVar12 = lVar24;
          }
          if (psVar14 == (short *)0x0) {
LAB_1805842a9:
            psVar14 = *(short **)(lVar12 + 0x10);
          }
          else {
            iVar9 = (int)*(short *)(pbVar23 + 2) - (int)*(short *)(lVar12 + 2);
            iVar15 = (int)*(short *)(puVar22 + -0xc) - (int)*psVar14;
            iVar8 = (int)*(short *)(lVar12 + 2) - (int)*(short *)(pbVar23 + 2);
            if (-1 < iVar9) {
              iVar8 = iVar9;
            }
            iVar9 = (int)*psVar14 - (int)*(short *)(puVar22 + -0xc);
            if (-1 < iVar15) {
              iVar9 = iVar15;
            }
            if (iVar8 < iVar9) goto LAB_1805842a9;
          }
          if (bVar7) {
            *(short **)(puVar22 + 0x1c) = psVar14;
            *(byte *)(psVar14 + 6) = *(byte *)(psVar14 + 6) | 2;
          }
          else {
            *(short **)(puVar22 + 0x14) = psVar14;
          }
        }
        pbVar23 = *(byte **)(pbVar23 + 0x18);
      } while (pbVar23 != *(byte **)(puVar22 + 0x2c));
      *puVar22 = 0;
      if ((0 < iVar11) && (iVar17 <= iVar11)) {
        *puVar22 = 1;
      }
      if ((*(longlong *)(puVar22 + 0x1c) != 0) && (*(longlong *)(puVar22 + 0x14) != 0)) {
        *(undefined8 *)(puVar22 + 0x1c) = 0;
      }
      puVar18 = puVar22 + 0x3c;
      puVar22 = puVar22 + 0x48;
    } while (puVar18 < puVar2);
  }
  return 0;
}



