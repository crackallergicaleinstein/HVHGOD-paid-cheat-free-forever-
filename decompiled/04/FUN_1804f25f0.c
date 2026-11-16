// FUN_1804f25f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f25f0 */

void FUN_1804f25f0(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  byte bVar3;
  byte *pbVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  int *piVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  bool bVar17;
  
  lVar16 = *(longlong *)(param_1 + 0x20);
  for (lVar2 = *(longlong *)(param_1 + 0x18); lVar2 != lVar16; lVar2 = lVar2 + 0x78) {
    *(byte *)(lVar2 + 0x71) = *(byte *)(lVar2 + 0x71) & 0xfb;
  }
  if ((*(int *)(param_1 + 100) != -1) &&
     (lVar16 = (longlong)*(int *)(param_1 + 100) + *(longlong *)(DAT_180bb8ae8 + 0x27b8),
     lVar16 != 0)) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 2;
    uVar12 = 0;
    iVar15 = 0;
    iVar8 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      lVar2 = 0;
      piVar9 = (int *)(lVar16 + 0x18);
      do {
        if ((*(short *)(lVar16 + 0xc) <= iVar15) ||
           (*piVar9 != *(int *)(*(longlong *)(param_1 + 0x18) + 0x34 + lVar2))) break;
        FUN_1804f2950((longlong)iVar15 * 0x78 + *(longlong *)(param_1 + 0x18),
                      (longlong)iVar15 * 0x10 + lVar16 + 0x14,*(undefined4 *)(lVar16 + 4));
        iVar8 = iVar8 + 1;
        iVar15 = iVar15 + 1;
        piVar9 = piVar9 + 4;
        lVar2 = lVar2 + 0x78;
      } while (iVar15 < *(int *)(param_1 + 0x6c));
    }
    if (iVar8 != *(short *)(lVar16 + 0xc)) {
      lVar2 = (longlong)iVar8 * 0x10;
      if (iVar8 < *(short *)(lVar16 + 0xc)) {
        pbVar4 = (byte *)(lVar16 + 0x22 + lVar2);
        iVar15 = iVar8;
        do {
          *pbVar4 = *pbVar4 & 0xdf;
          pbVar4 = pbVar4 + 0x10;
          iVar15 = iVar15 + 1;
        } while (iVar15 < *(short *)(lVar16 + 0xc));
      }
      lVar7 = *(longlong *)(param_1 + 0x20);
      for (lVar5 = *(longlong *)(param_1 + 0x18); lVar5 != lVar7; lVar5 = lVar5 + 0x78) {
        if (((*(int *)(lVar5 + 0x34) != 0) && ((*(byte *)(lVar5 + 0x71) & 4) == 0)) &&
           (iVar8 < *(short *)(lVar16 + 0xc))) {
          pbVar4 = (byte *)(lVar16 + 0x22 + lVar2);
          lVar10 = (longlong)iVar8;
          iVar15 = iVar8;
          do {
            if ((*(int *)(pbVar4 + -10) == *(int *)(lVar5 + 0x34)) && ((*pbVar4 & 0x20) == 0)) {
              uVar1 = *(uint *)(lVar16 + 4);
              *(byte *)(lVar5 + 0x71) = *(byte *)(lVar5 + 0x71) | 4;
              puVar11 = (undefined4 *)(lVar10 * 0x10 + lVar16 + 0x14);
              bVar3 = *(byte *)((longlong)puVar11 + 0xe);
              *(byte *)((longlong)puVar11 + 0xe) = bVar3 | 0x20;
              if ((uVar1 & 1) != 0) {
                if ((bVar3 & 0x10) == 0) {
                  *(undefined4 *)(lVar5 + 0x10) = *puVar11;
                }
                else {
                  *(undefined4 *)(lVar5 + 0x1c) = *puVar11;
                }
                *(byte *)(lVar5 + 0x73) = *(byte *)(lVar5 + 0x73) & 0xf0;
              }
              *(undefined2 *)(lVar5 + 0x5a) =
                   *(undefined2 *)(((ulonglong)(uVar1 & 2) | 8) + (longlong)puVar11);
              if (((uVar1 & 4) != 0) &&
                 (bVar3 = *(char *)((longlong)puVar11 + 0xe) << 4, (bVar3 & 0xc0) != 0xc0)) {
                bVar17 = (bVar3 & 0xc0) == 0x40;
                *(bool *)(lVar5 + 0x6c) = bVar17;
                *(bool *)(lVar5 + 0x6b) = bVar17;
              }
              *(undefined2 *)(lVar5 + 0x62) = *(undefined2 *)(puVar11 + 3);
              *(byte *)(lVar5 + 0x74) =
                   *(byte *)(lVar5 + 0x74) ^
                   (*(byte *)(lVar5 + 0x74) ^ *(byte *)((longlong)puVar11 + 0xe)) & 3;
              break;
            }
            iVar15 = iVar15 + 1;
            lVar10 = lVar10 + 1;
            pbVar4 = pbVar4 + 0x10;
          } while (iVar15 < *(short *)(lVar16 + 0xc));
        }
      }
      if (iVar8 < *(short *)(lVar16 + 0xc)) {
        pbVar4 = (byte *)(lVar16 + 0x22 + lVar2);
        uVar14 = uVar12;
        do {
          if ((*pbVar4 & 0x20) == 0) {
            iVar15 = *(int *)(param_1 + 0x6c);
            if (iVar15 <= (int)uVar14) {
              return;
            }
            pbVar6 = (byte *)(*(longlong *)(param_1 + 0x18) + 0x71 + uVar12 * 0x78);
            while (iVar13 = (int)uVar14, (*pbVar6 & 4) != 0) {
              uVar14 = (ulonglong)(iVar13 + 1U);
              uVar12 = uVar12 + 1;
              pbVar6 = pbVar6 + 0x78;
              if (iVar15 <= (int)(iVar13 + 1U)) {
                return;
              }
            }
            if (iVar15 <= iVar13) {
              return;
            }
            uVar1 = *(uint *)(lVar16 + 4);
            lVar2 = *(longlong *)(param_1 + 0x18);
            lVar7 = uVar12 * 0x78;
            pbVar6 = (byte *)(lVar7 + 0x71 + lVar2);
            *pbVar6 = *pbVar6 | 4;
            bVar3 = *pbVar4;
            *pbVar4 = bVar3 | 0x20;
            if ((uVar1 & 1) != 0) {
              if ((bVar3 & 0x10) == 0) {
                *(undefined4 *)(lVar7 + 0x10 + lVar2) = *(undefined4 *)(pbVar4 + -0xe);
              }
              else {
                *(undefined4 *)(lVar7 + 0x1c + lVar2) = *(undefined4 *)(pbVar4 + -0xe);
              }
              pbVar6 = (byte *)(lVar7 + 0x73 + lVar2);
              *pbVar6 = *pbVar6 & 0xf0;
            }
            lVar5 = -4;
            if ((uVar1 & 2) == 0) {
              lVar5 = -6;
            }
            *(undefined2 *)(lVar7 + 0x5a + lVar2) = *(undefined2 *)(pbVar4 + lVar5);
            if (((uVar1 & 4) != 0) && ((*pbVar4 << 4 & 0xc0) != 0xc0)) {
              bVar17 = (*pbVar4 << 4 & 0xc0) == 0x40;
              *(bool *)(lVar7 + 0x6c + lVar2) = bVar17;
              *(bool *)(lVar7 + 0x6b + lVar2) = bVar17;
            }
            uVar14 = (ulonglong)(iVar13 + 1);
            *(undefined2 *)(lVar7 + 0x62 + lVar2) = *(undefined2 *)(pbVar4 + -2);
            pbVar6 = (byte *)(lVar7 + 0x74 + lVar2);
            *pbVar6 = *pbVar6 ^ (*(byte *)(lVar7 + 0x74 + lVar2) ^ *pbVar4) & 3;
            uVar12 = uVar12 + 1;
          }
          iVar8 = iVar8 + 1;
          pbVar4 = pbVar4 + 0x10;
        } while (iVar8 < *(short *)(lVar16 + 0xc));
      }
    }
  }
  return;
}



