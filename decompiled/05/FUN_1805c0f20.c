// FUN_1805c0f20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c0f20 */

ulonglong FUN_1805c0f20(uint *param_1,uint *param_2,int *param_3,ulonglong param_4,
                       undefined8 param_5)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  byte *pbVar16;
  longlong lVar17;
  ulonglong local_res20;
  
  uVar10 = *param_2;
  uVar11 = (ulonglong)uVar10;
  local_res20 = param_4;
  uVar5 = FUN_18057ac40(param_5,8,0,uVar10 * 2,0,&local_res20);
  *(undefined8 *)(param_1 + 4) = uVar5;
  uVar6 = local_res20 & 0xffffffff;
  if ((int)local_res20 == 0) {
    uVar5 = FUN_18057ac40(param_5,0x28,0,uVar10,0,&local_res20);
    *(undefined8 *)(param_1 + 2) = uVar5;
    uVar6 = local_res20 & 0xffffffff;
    if ((int)local_res20 == 0) {
      uVar5 = FUN_18057ac40(param_5,0x10,0,uVar10 * 2 + 1,0,&local_res20);
      *(undefined8 *)(param_1 + 10) = uVar5;
      if ((int)local_res20 == 0) {
        *param_1 = uVar10;
        lVar17 = *(longlong *)(param_1 + 4) + uVar11 * 8;
        if (*(longlong *)(param_1 + 4) == 0) {
          lVar17 = 0;
        }
        *(longlong *)(param_1 + 6) = lVar17;
        param_1[1] = 0;
        param_1[8] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        puVar2 = *(undefined4 **)(param_1 + 2);
        puVar3 = *(undefined4 **)(param_2 + 2);
        while (uVar10 != 0) {
          *puVar2 = *puVar3;
          puVar2[1] = puVar3[1];
          puVar2[4] = puVar3[2];
          uVar10 = (int)uVar11 - 1;
          uVar11 = (ulonglong)uVar10;
          puVar2 = puVar2 + 10;
          puVar3 = puVar3 + 3;
        }
        if (param_3 != (int *)0x0) {
          iVar8 = *param_3;
          puVar7 = *(uint **)(param_3 + 2);
          *(int **)(param_1 + 0xe) = param_3;
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            uVar10 = *puVar7;
            uVar14 = 0;
            pbVar16 = *(byte **)(puVar7 + 2);
            uVar15 = 0;
            uVar9 = 0;
            if (uVar10 != 0) {
              lVar17 = 0;
              do {
                if (uVar14 == 0) {
                  uVar15 = (uint)*pbVar16;
                  uVar14 = 0x80;
                  pbVar16 = pbVar16 + 1;
                }
                if ((((uVar14 & uVar15) != 0) &&
                    (piVar13 = (int *)(*(longlong *)(param_1 + 2) + lVar17), uVar9 < *param_1)) &&
                   ((piVar13[4] & 4U) == 0)) {
                  piVar13[4] = piVar13[4] | 4;
                  uVar4 = param_1[1];
                  puVar12 = *(undefined8 **)(param_1 + 6);
                  piVar13[6] = 0;
                  piVar13[7] = 0;
                  if (uVar4 != 0) {
                    do {
                      piVar1 = (int *)*puVar12;
                      if ((*piVar1 <= piVar13[1] + *piVar13) && (*piVar13 <= *piVar1 + piVar1[1])) {
                        *(int **)(piVar13 + 6) = piVar1;
                        break;
                      }
                      puVar12 = puVar12 + 1;
                      uVar4 = uVar4 - 1;
                    } while (uVar4 != 0);
                  }
                  if (param_1[1] < *param_1) {
                    *(int **)(*(longlong *)(param_1 + 6) + (ulonglong)param_1[1] * 8) = piVar13;
                    param_1[1] = param_1[1] + 1;
                  }
                }
                uVar14 = (int)uVar14 >> 1;
                uVar9 = uVar9 + 1;
                lVar17 = lVar17 + 0x28;
              } while (uVar9 < uVar10);
            }
            puVar7 = puVar7 + 6;
          }
        }
        uVar10 = *param_1;
        if ((param_1[1] != uVar10) && (uVar9 = 0, uVar10 != 0)) {
          lVar17 = 0;
          uVar14 = uVar10;
          do {
            piVar13 = (int *)(*(longlong *)(param_1 + 2) + lVar17);
            if ((uVar9 < uVar14) && ((piVar13[4] & 4U) == 0)) {
              piVar13[4] = piVar13[4] | 4;
              uVar14 = param_1[1];
              puVar12 = *(undefined8 **)(param_1 + 6);
              piVar13[6] = 0;
              piVar13[7] = 0;
              if (uVar14 != 0) {
                do {
                  piVar1 = (int *)*puVar12;
                  if ((*piVar1 <= piVar13[1] + *piVar13) && (*piVar13 <= *piVar1 + piVar1[1])) {
                    *(int **)(piVar13 + 6) = piVar1;
                    break;
                  }
                  puVar12 = puVar12 + 1;
                  uVar14 = uVar14 - 1;
                } while (uVar14 != 0);
              }
              uVar14 = *param_1;
              if (param_1[1] < uVar14) {
                *(int **)(*(longlong *)(param_1 + 6) + (ulonglong)param_1[1] * 8) = piVar13;
                param_1[1] = param_1[1] + 1;
                uVar14 = *param_1;
              }
            }
            uVar9 = uVar9 + 1;
            lVar17 = lVar17 + 0x28;
            if (uVar10 <= uVar9) {
              return local_res20 & 0xffffffff;
            }
          } while( true );
        }
      }
      uVar6 = local_res20 & 0xffffffff;
    }
  }
  return uVar6;
}



