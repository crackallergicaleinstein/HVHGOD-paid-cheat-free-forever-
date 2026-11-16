// FUN_180581490 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180581490 */

void FUN_180581490(longlong param_1,int param_2)

{
  short *psVar1;
  short *psVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  short *psVar6;
  longlong lVar7;
  int iVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort uVar11;
  
  puVar9 = *(ushort **)(param_1 + 0x20);
  puVar10 = puVar9 + (longlong)*(int *)(param_1 + 0x1c) * 0x18;
  psVar2 = *(short **)((longlong)param_2 * 0x898 + 0x60 + param_1);
  if (psVar2 != (short *)0x0) {
    psVar1 = psVar2 + (ulonglong)*(uint *)((longlong)param_2 * 0x898 + 0x58 + param_1) * 0x24;
    uVar11 = 4;
    if (param_2 != 0) {
      uVar11 = 8;
    }
    if (psVar2 < psVar1) {
      for (; puVar9 < puVar10; puVar9 = puVar9 + 0x18) {
        if (((uVar11 & *puVar9) == 0) && ((*puVar9 & 0x10) == 0)) {
          lVar4 = 8;
          if (param_2 != 1) {
            lVar4 = 4;
          }
          lVar5 = 0xe;
          if (param_2 != 1) {
            lVar5 = 0xc;
          }
          iVar8 = (int)*(short *)(lVar5 + (longlong)puVar9);
          if (*psVar2 - iVar8 < 0) {
            if (iVar8 - psVar1[-0x24] < 0) {
              lVar4 = 0;
              lVar5 = ((longlong)psVar1 - (longlong)psVar2) / 0x12 +
                      ((longlong)psVar1 - (longlong)psVar2 >> 0x3f);
              lVar5 = (lVar5 >> 2) - (lVar5 >> 0x3f);
              if (lVar5 < 9) {
                if (0 < lVar5) {
                  psVar6 = psVar2;
                  do {
                    if (iVar8 <= *psVar6) break;
                    lVar4 = lVar4 + 1;
                    psVar6 = psVar6 + 0x24;
                  } while (lVar4 < lVar5);
                }
                if (psVar2[lVar4 * 0x24] == iVar8) {
                  iVar8 = *(int *)(psVar2 + lVar4 * 0x24 + 4);
                  goto LAB_18058168b;
                }
              }
              else {
                do {
                  lVar7 = lVar5 + lVar4 >> 1;
                  if (iVar8 < psVar2[lVar7 * 0x24]) {
                    lVar5 = lVar7;
                  }
                  else {
                    if (iVar8 <= psVar2[lVar7 * 0x24]) {
                      iVar8 = *(int *)(psVar2 + lVar7 * 0x24 + 4);
                      goto LAB_18058168b;
                    }
                    lVar4 = lVar7 + 1;
                  }
                } while (lVar4 < lVar5);
              }
              iVar3 = *(int *)(psVar2 + lVar4 * 0x24 + -0x1c);
              psVar6 = psVar2 + lVar4 * 0x24;
              if (iVar3 == 0) {
                iVar3 = FUN_180573310(*(int *)(psVar6 + 4) - *(int *)(psVar6 + -0x20),
                                      (int)*psVar6 - (int)psVar6[-0x24]);
                *(int *)(psVar6 + -0x1c) = iVar3;
              }
              lVar4 = (longlong)(iVar8 - psVar6[-0x24]) * (longlong)iVar3;
              iVar8 = (int)((ulonglong)((lVar4 >> 0x3f) + lVar4 + 0x8000) >> 0x10) +
                      *(int *)(psVar6 + -0x20);
            }
            else {
              iVar8 = (*(int *)(psVar1 + -0x20) - *(int *)(psVar1 + -0x22)) +
                      *(int *)(lVar4 + (longlong)puVar9);
            }
          }
          else {
            iVar8 = (*(int *)(psVar2 + 4) - *(int *)(psVar2 + 2)) +
                    *(int *)(lVar4 + (longlong)puVar9);
          }
LAB_18058168b:
          if (param_2 == 0) {
            *(int *)(puVar9 + 8) = iVar8;
          }
          else {
            *(int *)(puVar9 + 10) = iVar8;
          }
          *puVar9 = *puVar9 | uVar11;
        }
      }
    }
  }
  return;
}



