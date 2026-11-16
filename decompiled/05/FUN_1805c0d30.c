// FUN_1805c0d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c0d30 */

void FUN_1805c0d30(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  int *piVar9;
  uint *puVar10;
  
  if (param_3 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    uVar1 = *(uint *)(param_1 + 4);
    puVar10 = (uint *)(param_2 + 0x1c);
    do {
      uVar8 = *puVar10;
      uVar2 = puVar10[5];
      if ((uVar8 & 0x10) == 0) {
        uVar4 = (puVar10[2] | puVar10[1]) & param_5;
        if ((uVar4 & 10) == 0) {
          if ((uVar4 & 5) == 0) {
            if ((uVar8 & 0x40) != 0) {
              uVar4 = 0x80;
              if (param_5 != 0xc) {
                uVar4 = 0x100;
              }
              uVar6 = 0x100;
              if (param_5 != 0xc) {
                uVar6 = 0x80;
              }
              if ((uVar8 & uVar4) == 0) {
                if (((uVar8 & uVar6) != 0) && (uVar7 = 0, uVar1 != 0)) {
                  do {
                    piVar9 = *(int **)(lVar3 + uVar7 * 8);
                    iVar5 = (uVar2 - piVar9[1]) - *piVar9;
                    if ((iVar5 < param_4) && (-iVar5 < param_4)) {
                      uVar8 = uVar8 | 0x410;
                      goto LAB_1805c0eb8;
                    }
                    uVar4 = (int)uVar7 + 1;
                    uVar7 = (ulonglong)uVar4;
                  } while (uVar4 < uVar1);
                }
              }
              else {
                uVar7 = 0;
                if (uVar1 != 0) {
LAB_1805c0e50:
                  piVar9 = *(int **)(lVar3 + uVar7 * 8);
                  if ((param_4 <= (int)(uVar2 - *piVar9)) || (param_4 <= (int)-(uVar2 - *piVar9)))
                  goto LAB_1805c0e65;
                  uVar8 = uVar8 | 0x210;
LAB_1805c0eb8:
                  *puVar10 = uVar8;
                  *(int **)(puVar10 + 3) = piVar9;
                }
              }
LAB_1805c0ebf:
              if ((*(longlong *)(puVar10 + 3) == 0) && (uVar7 = 0, uVar1 != 0)) {
                do {
                  piVar9 = *(int **)(lVar3 + uVar7 * 8);
                  if ((*piVar9 <= (int)uVar2) && ((int)uVar2 <= *piVar9 + piVar9[1])) {
                    *(int **)(puVar10 + 3) = piVar9;
                    break;
                  }
                  uVar8 = (int)uVar7 + 1;
                  uVar7 = (ulonglong)uVar8;
                } while (uVar8 < uVar1);
              }
            }
          }
          else {
            uVar7 = 0;
            if (uVar1 != 0) {
              do {
                piVar9 = *(int **)(lVar3 + uVar7 * 8);
                iVar5 = (uVar2 - piVar9[1]) - *piVar9;
                if ((iVar5 < param_4) && (-iVar5 < param_4)) {
                  *(int **)(puVar10 + 3) = piVar9;
                  *puVar10 = uVar8 | 0x410;
                  break;
                }
                uVar4 = (int)uVar7 + 1;
                uVar7 = (ulonglong)uVar4;
              } while (uVar4 < uVar1);
            }
          }
        }
        else {
          uVar7 = 0;
          if (uVar1 != 0) {
            do {
              piVar9 = *(int **)(lVar3 + uVar7 * 8);
              iVar5 = uVar2 - *piVar9;
              if ((iVar5 < param_4) && (-iVar5 < param_4)) {
                *(int **)(puVar10 + 3) = piVar9;
                *puVar10 = uVar8 | 0x210;
                break;
              }
              uVar4 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar4;
            } while (uVar4 < uVar1);
          }
        }
      }
      puVar10 = puVar10 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
LAB_1805c0e65:
  uVar4 = (int)uVar7 + 1;
  uVar7 = (ulonglong)uVar4;
  if (uVar1 <= uVar4) goto LAB_1805c0ebf;
  goto LAB_1805c0e50;
}



