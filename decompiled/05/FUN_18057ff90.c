// FUN_18057ff90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057ff90 */

void FUN_18057ff90(longlong param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  short *psVar10;
  longlong *plVar11;
  longlong lVar12;
  char *pcVar13;
  longlong *plVar14;
  int iVar15;
  int iVar16;
  
  lVar12 = (longlong)param_2 * 0x898;
  plVar7 = *(longlong **)(lVar12 + 0x50 + param_1);
  if (plVar7 == (longlong *)0x0) {
    plVar9 = (longlong *)0x0;
  }
  else {
    plVar9 = plVar7 + (ulonglong)*(uint *)(lVar12 + 0x48 + param_1) * 9;
  }
  iVar1 = *(int *)(lVar12 + 0x68 + param_1);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x1180) + 0x40) * 8;
  lVar12 = 8;
  if (param_2 != 0) {
    lVar12 = 0x10;
  }
  iVar4 = FUN_180573310(0xc0,*(undefined4 *)(lVar12 + param_1));
  if (plVar7 < plVar9) {
    pcVar13 = (char *)((longlong)plVar7 + 1);
    do {
      if (*pcVar13 == iVar1) {
        psVar10 = (short *)((longlong)plVar7 + 2);
        do {
          if (((psVar10 != (short *)(pcVar13 + 1)) &&
              ((int)*(char *)((longlong)psVar10 + -1) + (int)*pcVar13 == 0)) &&
             (iVar16 = (int)*psVar10 - (int)*(short *)(pcVar13 + 1), -1 < iVar16)) {
            iVar15 = (int)psVar10[3];
            if ((int)*(short *)(pcVar13 + 7) <= (int)psVar10[3]) {
              iVar15 = (int)*(short *)(pcVar13 + 7);
            }
            iVar5 = (int)psVar10[2];
            if ((int)psVar10[2] <= (int)*(short *)(pcVar13 + 5)) {
              iVar5 = (int)*(short *)(pcVar13 + 5);
            }
            iVar15 = iVar15 - iVar5;
            if ((int)((iVar3 >> 0x1f & 0x7ffU) + iVar3) >> 0xb <= iVar15) {
              iVar5 = iVar16 * 8;
              if ((iVar5 < *(int *)(pcVar13 + 0x2f) * 9) &&
                 ((iVar5 < *(int *)(pcVar13 + 0x2f) * 7 || (*(int *)(pcVar13 + 0x33) < iVar15)))) {
                *(int *)(pcVar13 + 0x2f) = iVar16;
                *(short **)(pcVar13 + 0x1f) = psVar10 + -1;
                *(int *)(pcVar13 + 0x33) = iVar15;
              }
              if ((iVar5 < *(int *)(psVar10 + 0x17) * 9) &&
                 ((iVar5 < *(int *)(psVar10 + 0x17) * 7 || (*(int *)(psVar10 + 0x19) < iVar15)))) {
                *(int *)(psVar10 + 0x17) = iVar16;
                *(char **)(psVar10 + 0xf) = pcVar13 + -1;
                *(int *)(psVar10 + 0x19) = iVar15;
              }
            }
          }
          plVar14 = (longlong *)(psVar10 + 0x23);
          psVar10 = psVar10 + 0x24;
        } while (plVar14 < plVar9);
      }
      plVar14 = (longlong *)(pcVar13 + 0x47);
      pcVar13 = pcVar13 + 0x48;
    } while (plVar14 < plVar9);
    plVar14 = plVar7 + 6;
    do {
      lVar12 = plVar14[-2];
      if ((((lVar12 != 0) && (*(longlong **)(lVar12 + 0x20) == plVar14 + -6)) &&
          (*(short *)((longlong)plVar14 + -0x2e) < *(short *)(lVar12 + 2))) &&
         ((int)*plVar14 < iVar4)) {
        plVar11 = plVar7;
        do {
          if (((*(short *)((longlong)plVar11 + 2) <= *(short *)((longlong)plVar14 + -0x2e)) &&
              (plVar14 + -6 != plVar11)) &&
             ((plVar2 = (longlong *)plVar11[4], plVar2 != (longlong *)0x0 &&
              ((longlong *)plVar2[4] == plVar11)))) {
            if ((*(short *)(lVar12 + 2) <= *(short *)((longlong)plVar2 + 2)) &&
               ((*(short *)((longlong)plVar14 + -0x2e) != *(short *)((longlong)plVar11 + 2) ||
                (*(short *)(lVar12 + 2) != *(short *)((longlong)plVar2 + 2))))) {
              if (((int)*plVar14 < (int)plVar11[6]) && ((int)plVar11[6] < (int)*plVar14 * 4)) {
                if (*(int *)((longlong)plVar14 + 4) < *(int *)((longlong)plVar11 + 0x34) * 3) {
                  *(undefined8 *)(lVar12 + 0x20) = 0;
                  plVar14[-2] = 0;
                  break;
                }
                plVar6 = plVar7 + 4;
                lVar8 = (ulonglong)((longlong)plVar9 + (-1 - (longlong)plVar7)) / 0x48 + 1;
                do {
                  if ((longlong *)*plVar6 == plVar11) {
                    plVar6[1] = lVar12;
LAB_1805801fb:
                    *plVar6 = 0;
                  }
                  else if ((longlong *)*plVar6 == plVar2) {
                    plVar6[1] = (longlong)(plVar14 + -6);
                    goto LAB_1805801fb;
                  }
                  plVar6 = plVar6 + 9;
                  lVar8 = lVar8 + -1;
                } while (lVar8 != 0);
              }
            }
          }
          plVar11 = plVar11 + 9;
        } while (plVar11 < plVar9);
      }
      plVar11 = plVar14 + 3;
      plVar14 = plVar14 + 9;
    } while (plVar11 < plVar9);
    plVar7 = plVar7 + 4;
    do {
      lVar12 = *plVar7;
      if ((lVar12 != 0) && (*(longlong **)(lVar12 + 0x20) != plVar7 + -4)) {
        *plVar7 = 0;
        if ((*(int *)(lVar12 + 0x30) < iVar4) || ((int)plVar7[2] < *(int *)(lVar12 + 0x30) * 4)) {
          plVar7[1] = *(longlong *)(lVar12 + 0x20);
        }
      }
      plVar14 = plVar7 + 5;
      plVar7 = plVar7 + 9;
    } while (plVar14 < plVar9);
  }
  return;
}



