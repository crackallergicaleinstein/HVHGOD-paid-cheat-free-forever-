// FUN_18057f890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057f890 */

int FUN_18057f890(undefined8 *param_1,int param_2)

{
  undefined1 *puVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  undefined8 uVar5;
  short *psVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  undefined8 *puVar13;
  char cVar14;
  int iVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  short *psVar20;
  short *psVar21;
  int iVar22;
  undefined4 uVar23;
  undefined1 *puVar24;
  int iVar25;
  short *psVar26;
  uint uVar27;
  undefined1 *puVar28;
  undefined8 *puVar29;
  longlong lVar30;
  longlong lVar31;
  int iVar32;
  short *psVar33;
  int iVar34;
  ulonglong uVar35;
  byte *pbVar36;
  ulonglong local_res8;
  int local_res10;
  int local_res18;
  short *local_res20;
  
  uVar5 = *param_1;
  lVar30 = (longlong)param_2;
  local_res10 = 0;
  psVar21 = (short *)param_1[lVar30 * 0x113 + 10];
  lVar31 = param_1[0x230];
  if (psVar21 == (short *)0x0) {
    psVar26 = (short *)0x0;
  }
  else {
    psVar26 = psVar21 + (ulonglong)*(uint *)(param_1 + lVar30 * 0x113 + 9) * 0x24;
  }
  *(undefined4 *)(param_1 + lVar30 * 0x113 + 0xb) = 0;
  lVar16 = 8;
  if (param_2 != 0) {
    lVar16 = 0x10;
  }
  iVar34 = *(int *)(lVar16 + (longlong)param_1);
  local_res18 = *(int *)(lVar30 * 0x1c4 + lVar31 + 0x110);
  lVar31 = (longlong)local_res18 * (longlong)iVar34;
  local_res20 = psVar26;
  if (0x10 < (int)((ulonglong)(lVar31 + 0x8000 + (lVar31 >> 0x3f)) >> 0x10)) {
    local_res18 = FUN_180573310(0x10);
  }
  if (psVar21 < psVar26) {
    psVar21 = psVar21 + 1;
    do {
      psVar26 = (short *)0x0;
      iVar15 = 0xffff;
      uVar27 = 0;
      if (*(uint *)(param_1 + lVar30 * 0x113 + 0xb) == 0) {
LAB_18057fa6a:
        psVar26 = (short *)0x0;
        cVar14 = *(char *)((longlong)psVar21 + -1);
        sVar2 = *psVar21;
        local_res10 = 0;
        local_res8 = local_res8 & 0xffffffff00000000;
        if (uVar27 < 0xc) {
          if (param_1[lVar30 * 0x113 + 0xc] == 0) {
            *(undefined4 *)((longlong)param_1 + lVar30 * 0x898 + 0x5c) = 0xc;
            param_1[lVar30 * 0x113 + 0xc] = param_1 + lVar30 * 0x113 + 0xb0;
          }
LAB_18057fc23:
          psVar33 = (short *)param_1[lVar30 * 0x113 + 0xc];
          psVar26 = psVar33 + (ulonglong)*(uint *)(param_1 + lVar30 * 0x113 + 0xb) * 0x24;
          psVar6 = psVar26;
          if (psVar33 < psVar26) {
            do {
              psVar20 = psVar6 + -0x24;
              if ((*psVar20 < sVar2) ||
                 ((*psVar20 == sVar2 && ((int)cVar14 == *(int *)(param_1 + lVar30 * 0x113 + 0xd)))))
              break;
              uVar19 = *(undefined8 *)(psVar6 + -0x20);
              uVar9 = *(undefined8 *)(psVar6 + -0x1c);
              uVar10 = *(undefined8 *)(psVar6 + -0x18);
              *(undefined8 *)psVar26 = *(undefined8 *)psVar20;
              *(undefined8 *)(psVar26 + 4) = uVar19;
              uVar19 = *(undefined8 *)(psVar6 + -0x14);
              uVar11 = *(undefined8 *)(psVar6 + -0x10);
              *(undefined8 *)(psVar26 + 8) = uVar9;
              *(undefined8 *)(psVar26 + 0xc) = uVar10;
              uVar9 = *(undefined8 *)(psVar6 + -0xc);
              uVar10 = *(undefined8 *)(psVar6 + -8);
              *(undefined8 *)(psVar26 + 0x10) = uVar19;
              *(undefined8 *)(psVar26 + 0x14) = uVar11;
              uVar19 = *(undefined8 *)(psVar6 + -4);
              *(undefined8 *)(psVar26 + 0x18) = uVar9;
              *(undefined8 *)(psVar26 + 0x1c) = uVar10;
              *(undefined8 *)(psVar26 + 0x20) = uVar19;
              psVar26 = psVar26 + -0x24;
              psVar6 = psVar20;
            } while (psVar33 < psVar26);
            local_res10 = (int)local_res8;
          }
          *(int *)(param_1 + lVar30 * 0x113 + 0xb) = *(int *)(param_1 + lVar30 * 0x113 + 0xb) + 1;
        }
        else {
          uVar4 = *(uint *)((longlong)param_1 + lVar30 * 0x898 + 0x5c);
          if (uVar27 < uVar4) goto LAB_18057fc23;
          if (uVar4 < 0x1c71c71) {
            uVar27 = (uVar4 >> 2) + 4 + uVar4;
            if ((uVar27 < uVar4) || (0x1c71c71 < uVar27)) {
              uVar27 = 0x1c71c71;
            }
            if ((undefined8 *)param_1[lVar30 * 0x113 + 0xc] == param_1 + lVar30 * 0x113 + 0xb0) {
              puVar17 = (undefined8 *)FUN_18057ad10(uVar5,0x48,0,uVar27,0,&local_res8);
              param_1[lVar30 * 0x113 + 0xc] = puVar17;
              local_res10 = (int)local_res8;
              if ((int)local_res8 != 0) goto LAB_18057fea0;
              lVar31 = 6;
              puVar13 = param_1 + lVar30 * 0x113 + 0xb0;
              do {
                puVar29 = puVar13;
                puVar18 = puVar17;
                uVar19 = puVar29[1];
                *puVar18 = *puVar29;
                puVar18[1] = uVar19;
                uVar19 = puVar29[3];
                puVar18[2] = puVar29[2];
                puVar18[3] = uVar19;
                uVar19 = puVar29[5];
                puVar18[4] = puVar29[4];
                puVar18[5] = uVar19;
                uVar19 = puVar29[7];
                puVar18[6] = puVar29[6];
                puVar18[7] = uVar19;
                uVar19 = puVar29[9];
                puVar18[8] = puVar29[8];
                puVar18[9] = uVar19;
                uVar19 = puVar29[0xb];
                puVar18[10] = puVar29[10];
                puVar18[0xb] = uVar19;
                uVar19 = puVar29[0xd];
                puVar18[0xc] = puVar29[0xc];
                puVar18[0xd] = uVar19;
                uVar19 = puVar29[0xf];
                puVar18[0xe] = puVar29[0xe];
                puVar18[0xf] = uVar19;
                lVar31 = lVar31 + -1;
                puVar17 = puVar18 + 0x10;
                puVar13 = puVar29 + 0x10;
              } while (lVar31 != 0);
              uVar19 = puVar29[0x11];
              puVar18[0x10] = puVar29[0x10];
              puVar18[0x11] = uVar19;
              uVar19 = puVar29[0x13];
              puVar18[0x12] = puVar29[0x12];
              puVar18[0x13] = uVar19;
              uVar19 = puVar29[0x15];
              puVar18[0x14] = puVar29[0x14];
              puVar18[0x15] = uVar19;
              uVar19 = puVar29[0x17];
              puVar18[0x16] = puVar29[0x16];
              puVar18[0x17] = uVar19;
              uVar23 = *(undefined4 *)((longlong)puVar29 + 0xc4);
              uVar7 = *(undefined4 *)(puVar29 + 0x19);
              uVar8 = *(undefined4 *)((longlong)puVar29 + 0xcc);
              *(undefined4 *)(puVar18 + 0x18) = *(undefined4 *)(puVar29 + 0x18);
              *(undefined4 *)((longlong)puVar18 + 0xc4) = uVar23;
              *(undefined4 *)(puVar18 + 0x19) = uVar7;
              *(undefined4 *)((longlong)puVar18 + 0xcc) = uVar8;
              uVar19 = puVar29[0x1b];
              puVar18[0x1a] = puVar29[0x1a];
              puVar18[0x1b] = uVar19;
            }
            else {
              uVar19 = FUN_18057ad10(uVar5,0x48,uVar4,uVar27,
                                     (undefined8 *)param_1[lVar30 * 0x113 + 0xc],&local_res8);
              param_1[lVar30 * 0x113 + 0xc] = uVar19;
              local_res10 = (int)local_res8;
              if ((int)local_res8 != 0) goto LAB_18057fea0;
            }
            *(uint *)((longlong)param_1 + lVar30 * 0x898 + 0x5c) = uVar27;
            local_res10 = (int)local_res8;
            goto LAB_18057fc23;
          }
          local_res10 = 0x40;
        }
        if (local_res10 != 0) goto LAB_18057fea0;
        psVar33 = psVar21 + -1;
        psVar26[0] = 0;
        psVar26[1] = 0;
        psVar26[2] = 0;
        psVar26[3] = 0;
        psVar26[4] = 0;
        psVar26[5] = 0;
        psVar26[6] = 0;
        psVar26[7] = 0;
        psVar26[8] = 0;
        psVar26[9] = 0;
        psVar26[10] = 0;
        psVar26[0xb] = 0;
        psVar26[0xc] = 0;
        psVar26[0xd] = 0;
        psVar26[0xe] = 0;
        psVar26[0xf] = 0;
        psVar26[0x10] = 0;
        psVar26[0x11] = 0;
        psVar26[0x12] = 0;
        psVar26[0x13] = 0;
        psVar26[0x14] = 0;
        psVar26[0x15] = 0;
        psVar26[0x16] = 0;
        psVar26[0x17] = 0;
        psVar26[0x18] = 0;
        psVar26[0x19] = 0;
        psVar26[0x1a] = 0;
        psVar26[0x1b] = 0;
        *(short **)(psVar26 + 0x1c) = psVar33;
        *(short **)(psVar26 + 0x20) = psVar33;
        *(undefined1 *)((longlong)psVar26 + 0xd) = *(undefined1 *)((longlong)psVar21 + -1);
        *psVar26 = *psVar21;
        lVar31 = (longlong)*psVar21 * (longlong)iVar34;
        uVar23 = (undefined4)((ulonglong)(lVar31 + 0x8000 + (lVar31 >> 0x3f)) >> 0x10);
        *(undefined4 *)(psVar26 + 2) = uVar23;
        *(undefined4 *)(psVar26 + 4) = uVar23;
        *(short **)(psVar21 + 0xb) = psVar33;
      }
      else {
        cVar14 = *(char *)((longlong)psVar21 + -1);
        uVar35 = (ulonglong)*(uint *)(param_1 + lVar30 * 0x113 + 0xb);
        psVar33 = (short *)param_1[lVar30 * 0x113 + 0xc];
        do {
          iVar32 = 0;
          if (*(char *)((longlong)psVar33 + 0xd) == cVar14) {
            iVar22 = (int)*psVar21 - (int)*psVar33;
            iVar25 = (int)*psVar33 - (int)*psVar21;
            if (-1 < iVar22) {
              iVar25 = iVar22;
            }
            if (iVar25 < local_res18) {
              if (iVar25 < iVar15) {
                if (*(longlong *)(psVar21 + 0xf) != 0) {
                  lVar31 = *(longlong *)(psVar33 + 0x1c);
                  do {
                    if (*(longlong *)(lVar31 + 0x20) != 0) {
                      sVar2 = *(short *)(*(longlong *)(psVar21 + 0xf) + 2);
                      sVar3 = *(short *)(*(longlong *)(lVar31 + 0x20) + 2);
                      iVar32 = (int)sVar2 - (int)sVar3;
                      if (sVar2 <= sVar3) {
                        iVar32 = (int)sVar3 - (int)sVar2;
                      }
                      if (local_res18 <= iVar32) goto LAB_18057fa1b;
                    }
                    lVar31 = *(longlong *)(lVar31 + 0x18);
                  } while (lVar31 != *(longlong *)(psVar33 + 0x1c));
                  if (local_res18 <= iVar32) goto LAB_18057fa1b;
                }
                psVar26 = psVar33;
                iVar15 = iVar25;
              }
            }
LAB_18057fa1b:
            cVar14 = *(char *)((longlong)psVar21 + -1);
          }
          psVar33 = psVar33 + 0x24;
          uVar35 = uVar35 - 1;
        } while (uVar35 != 0);
        if (psVar26 == (short *)0x0) {
          uVar27 = *(uint *)(param_1 + lVar30 * 0x113 + 0xb);
          goto LAB_18057fa6a;
        }
        *(undefined8 *)(psVar21 + 0xb) = *(undefined8 *)(psVar26 + 0x1c);
        *(short **)(*(longlong *)(psVar26 + 0x20) + 0x18) = psVar21 + -1;
        *(short **)(psVar26 + 0x20) = psVar21 + -1;
      }
      psVar26 = psVar21 + 0x23;
      psVar21 = psVar21 + 0x24;
    } while (psVar26 < local_res20);
  }
  puVar28 = (undefined1 *)param_1[lVar30 * 0x113 + 0xc];
  if (puVar28 != (undefined1 *)0x0) {
    puVar1 = puVar28 + (ulonglong)*(uint *)(param_1 + lVar30 * 0x113 + 0xb) * 0x48;
    puVar24 = puVar28;
    if (puVar28 < puVar1) {
      do {
        lVar31 = *(longlong *)(puVar24 + 0x38);
        if (lVar31 != 0) {
          do {
            *(undefined1 **)(lVar31 + 0x10) = puVar24;
            lVar31 = *(longlong *)(lVar31 + 0x18);
          } while (lVar31 != *(longlong *)(puVar24 + 0x38));
        }
        puVar24 = puVar24 + 0x48;
      } while (puVar24 < puVar1);
      puVar28 = puVar28 + 0xc;
      do {
        pbVar36 = *(byte **)(puVar28 + 0x2c);
        iVar32 = 0;
        iVar15 = 0;
        iVar34 = 0;
        if (pbVar36 != (byte *)0x0) {
          do {
            lVar31 = *(longlong *)(pbVar36 + 0x28);
            iVar15 = iVar32 + 1;
            if ((*pbVar36 & 1) == 0) {
              iVar15 = iVar32;
              iVar34 = iVar34 + 1;
            }
            if ((lVar31 == 0) || (*(undefined1 **)(lVar31 + 0x10) == puVar28 + -0xc)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            lVar30 = *(longlong *)(pbVar36 + 0x20);
            if (lVar30 == 0) {
              if (bVar12) goto LAB_18057fdec;
            }
            else {
              psVar21 = *(short **)(puVar28 + 0x14);
              if (bVar12) {
LAB_18057fdec:
                psVar21 = *(short **)(puVar28 + 0x1c);
                lVar30 = lVar31;
              }
              if (psVar21 == (short *)0x0) {
LAB_18057fe30:
                psVar21 = *(short **)(lVar30 + 0x10);
              }
              else {
                sVar2 = *(short *)(lVar30 + 2);
                sVar3 = *(short *)(pbVar36 + 2);
                iVar25 = (int)*(short *)(puVar28 + -0xc) - (int)*psVar21;
                iVar32 = (int)sVar3 - (int)sVar2;
                if (sVar3 <= sVar2) {
                  iVar32 = (int)sVar2 - (int)sVar3;
                }
                iVar22 = (int)*psVar21 - (int)*(short *)(puVar28 + -0xc);
                if (-1 < iVar25) {
                  iVar22 = iVar25;
                }
                if (iVar32 < iVar22) goto LAB_18057fe30;
              }
              if (bVar12) {
                *(short **)(puVar28 + 0x1c) = psVar21;
                *(byte *)(psVar21 + 6) = *(byte *)(psVar21 + 6) | 2;
              }
              else {
                *(short **)(puVar28 + 0x14) = psVar21;
              }
            }
            pbVar36 = *(byte **)(pbVar36 + 0x18);
            iVar32 = iVar15;
          } while (pbVar36 != *(byte **)(puVar28 + 0x2c));
        }
        *puVar28 = 0;
        if ((0 < iVar15) && (iVar34 <= iVar15)) {
          *puVar28 = 1;
        }
        if ((*(longlong *)(puVar28 + 0x1c) != 0) && (*(longlong *)(puVar28 + 0x14) != 0)) {
          *(undefined8 *)(puVar28 + 0x1c) = 0;
        }
        puVar24 = puVar28 + 0x3c;
        puVar28 = puVar28 + 0x48;
      } while (puVar24 < puVar1);
    }
  }
LAB_18057fea0:
  return local_res10;
}



