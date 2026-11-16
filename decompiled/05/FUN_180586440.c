// FUN_180586440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180586440 */

int FUN_180586440(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  byte *pbVar3;
  ushort *puVar4;
  bool bVar5;
  byte *pbVar6;
  int iVar7;
  longlong lVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  ushort *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  
  bVar5 = false;
  lVar11 = (longlong)param_2;
  iVar16 = 0x7fffffff;
  pbVar3 = *(byte **)(*(longlong *)(param_1 + 0x30) + lVar11 * 8);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar11 * 4);
  iVar14 = *(int *)(*(longlong *)(param_1 + 0x40) + lVar11 * 4);
  if (iVar2 != iVar14) {
    iVar15 = iVar14 - iVar2;
    pbVar9 = pbVar3;
    do {
      pbVar9 = *(byte **)(pbVar9 + 0x20);
      if ((*pbVar9 & 3) == 0) {
        pbVar10 = *(byte **)(pbVar9 + 0x28);
        iVar7 = *(int *)(pbVar9 + 0x14);
        if (((((*(int *)(pbVar10 + 0x14) == iVar7) &&
              (pbVar6 = *(byte **)(pbVar9 + 0x20), *(int *)(pbVar6 + 0x14) == iVar7)) &&
             (iVar7 != iVar2)) && ((iVar7 != iVar14 && ((*pbVar10 & 3) != 0)))) &&
           ((*pbVar6 & 3) != 0)) {
          do {
            pbVar10 = *(byte **)(pbVar10 + 0x28);
          } while ((*pbVar10 & 3) != 0);
          do {
            pbVar6 = *(byte **)(pbVar6 + 0x20);
          } while ((*pbVar6 & 3) != 0);
          if (iVar7 < *(int *)(pbVar6 + 0x14)) {
            if (iVar7 < *(int *)(pbVar10 + 0x14)) {
              iVar7 = iVar7 - iVar2;
LAB_180586505:
              if (((int)((iVar15 >> 0x1f & 7U) + iVar15) >> 3 <= iVar7) &&
                 ((!bVar5 || (iVar7 < iVar16)))) {
                bVar5 = true;
                iVar16 = iVar7;
              }
            }
          }
          else if ((*(int *)(pbVar6 + 0x14) < iVar7) && (*(int *)(pbVar10 + 0x14) < iVar7)) {
            iVar7 = iVar14 - *(int *)(pbVar9 + 0x14);
            goto LAB_180586505;
          }
        }
      }
    } while (pbVar9 != pbVar3);
    lVar8 = *(longlong *)(param_1 + 0x38);
    iVar14 = 0;
    if (!bVar5) {
      iVar16 = iVar14;
    }
    iVar7 = *(int *)(lVar8 + lVar11 * 4);
    if (0 < *(int *)(param_1 + 0x2c)) {
      lVar11 = 0;
      lVar13 = 0;
      do {
        if ((*(int *)(lVar13 + lVar8) < *(int *)(lVar13 + *(longlong *)(param_1 + 0x40))) &&
           (iVar7 <= *(int *)(lVar13 + lVar8))) {
          puVar4 = *(ushort **)(lVar11 + *(longlong *)(param_1 + 0x30));
          puVar12 = puVar4;
          do {
            puVar12 = *(ushort **)(puVar12 + 0x10);
            uVar1 = *puVar12;
            *puVar12 = uVar1 | 0x40;
            if ((uVar1 & 3) == 0) {
              *puVar12 = uVar1 | 0x48;
            }
          } while (puVar12 != puVar4);
          lVar8 = *(longlong *)(param_1 + 0x38);
        }
        iVar14 = iVar14 + 1;
        lVar13 = lVar13 + 4;
        lVar11 = lVar11 + 8;
      } while (iVar14 < *(int *)(param_1 + 0x2c));
    }
    iVar16 = iVar16 + 0x40;
    if (iVar15 < iVar16) {
      pbVar9 = pbVar3;
      do {
        pbVar9 = *(byte **)(pbVar9 + 0x20);
        *(int *)(pbVar9 + 0x14) = ((*(int *)(pbVar9 + 0x14) - iVar2) * iVar16) / iVar15 + iVar2;
      } while (pbVar9 != pbVar3);
      return iVar16 - iVar15;
    }
  }
  return 0;
}



