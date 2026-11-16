// FUN_180586290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180586290 */

int FUN_180586290(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  ushort *puVar5;
  bool bVar6;
  byte *pbVar7;
  int iVar8;
  longlong lVar9;
  byte *pbVar10;
  byte *pbVar11;
  longlong lVar12;
  ushort *puVar13;
  longlong lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  
  bVar6 = false;
  lVar12 = (longlong)param_2;
  iVar17 = 0x7fffffff;
  pbVar4 = *(byte **)(*(longlong *)(param_1 + 0x30) + lVar12 * 8);
  iVar15 = *(int *)(*(longlong *)(param_1 + 0x38) + lVar12 * 4);
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x40) + lVar12 * 4);
  if (iVar15 != iVar2) {
    iVar16 = iVar2 - iVar15;
    pbVar10 = pbVar4;
    do {
      pbVar10 = *(byte **)(pbVar10 + 0x20);
      if ((*pbVar10 & 3) == 0) {
        pbVar11 = *(byte **)(pbVar10 + 0x28);
        iVar8 = *(int *)(pbVar10 + 0x14);
        if (((((*(int *)(pbVar11 + 0x14) == iVar8) &&
              (pbVar7 = *(byte **)(pbVar10 + 0x20), *(int *)(pbVar7 + 0x14) == iVar8)) &&
             (iVar8 != iVar15)) && ((iVar8 != iVar2 && ((*pbVar11 & 3) != 0)))) &&
           ((*pbVar7 & 3) != 0)) {
          do {
            pbVar11 = *(byte **)(pbVar11 + 0x28);
          } while ((*pbVar11 & 3) != 0);
          do {
            pbVar7 = *(byte **)(pbVar7 + 0x20);
          } while ((*pbVar7 & 3) != 0);
          if (iVar8 < *(int *)(pbVar7 + 0x14)) {
            if (iVar8 < *(int *)(pbVar11 + 0x14)) {
              iVar8 = iVar8 - iVar15;
LAB_180586355:
              if (((int)((iVar16 >> 0x1f & 7U) + iVar16) >> 3 <= iVar8) &&
                 ((!bVar6 || (iVar8 < iVar17)))) {
                bVar6 = true;
                iVar17 = iVar8;
              }
            }
          }
          else if ((*(int *)(pbVar7 + 0x14) < iVar8) && (*(int *)(pbVar11 + 0x14) < iVar8)) {
            iVar8 = iVar2 - *(int *)(pbVar10 + 0x14);
            goto LAB_180586355;
          }
        }
      }
    } while (pbVar10 != pbVar4);
    lVar9 = *(longlong *)(param_1 + 0x38);
    iVar15 = 0;
    if (!bVar6) {
      iVar17 = iVar15;
    }
    iVar8 = *(int *)(lVar9 + lVar12 * 4);
    if (0 < *(int *)(param_1 + 0x2c)) {
      lVar12 = 0;
      lVar14 = 0;
      do {
        iVar3 = *(int *)(lVar14 + *(longlong *)(param_1 + 0x40));
        if ((*(int *)(lVar14 + lVar9) < iVar3) && (iVar3 <= iVar8)) {
          puVar5 = *(ushort **)(lVar12 + *(longlong *)(param_1 + 0x30));
          puVar13 = puVar5;
          do {
            puVar13 = *(ushort **)(puVar13 + 0x10);
            uVar1 = *puVar13;
            *puVar13 = uVar1 | 0x40;
            if ((uVar1 & 3) == 0) {
              *puVar13 = uVar1 | 0x48;
            }
          } while (puVar13 != puVar5);
          lVar9 = *(longlong *)(param_1 + 0x38);
        }
        iVar15 = iVar15 + 1;
        lVar14 = lVar14 + 4;
        lVar12 = lVar12 + 8;
      } while (iVar15 < *(int *)(param_1 + 0x2c));
    }
    iVar17 = iVar17 + 0x40;
    if (iVar16 < iVar17) {
      pbVar10 = pbVar4;
      do {
        pbVar10 = *(byte **)(pbVar10 + 0x20);
        *(int *)(pbVar10 + 0x14) = ((*(int *)(pbVar10 + 0x14) - iVar2) * iVar17) / iVar16 + iVar2;
      } while (pbVar10 != pbVar4);
      return iVar17 - iVar16;
    }
  }
  return 0;
}



