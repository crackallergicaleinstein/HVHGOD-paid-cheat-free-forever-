// FUN_180583c20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180583c20 */

void FUN_180583c20(longlong param_1,longlong param_2)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  longlong lVar12;
  int iVar13;
  short *psVar14;
  ulonglong uVar15;
  bool bVar16;
  
  psVar14 = *(short **)(param_1 + 0x8f8);
  if (psVar14 != (short *)0x0) {
    psVar1 = psVar14 + (ulonglong)*(uint *)(param_1 + 0x8f0) * 0x24;
    iVar3 = *(int *)(param_2 + 0x248);
    for (; psVar14 < psVar1; psVar14 = psVar14 + 0x24) {
      bVar2 = *(byte *)(psVar14 + 6);
      piVar10 = (int *)0x0;
      bVar4 = false;
      if ((bVar2 & 0x10) == 0) {
        lVar12 = (longlong)iVar3;
        lVar7 = ((ulonglong)*(uint *)(param_2 + 0x40) / 0x28) * lVar12;
        iVar13 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
        if (0x20 < iVar13) {
          iVar13 = 0x20;
        }
        if (*(uint *)(param_2 + 800) != 0) {
          piVar11 = (int *)(param_2 + 0x330);
          uVar15 = (ulonglong)*(uint *)(param_2 + 800);
          do {
            uVar5 = piVar11[5];
            if ((uVar5 & 1) != 0) {
              bVar16 = (uVar5 & 6) != 0;
              uVar5 = uVar5 & 8;
              if (((int)*(char *)((longlong)psVar14 + 0xd) == *(int *)(param_1 + 0x900)) == bVar16)
              {
                if (uVar5 == 0) goto LAB_180583df0;
              }
              iVar8 = piVar11[-3];
              iVar9 = (int)*psVar14;
              iVar6 = iVar8 - iVar9;
              if (-1 < iVar9 - iVar8) {
                iVar6 = iVar9 - iVar8;
              }
              iVar6 = (int)((ulonglong)((iVar6 * lVar12 >> 0x3f) + 0x8000 + iVar6 * lVar12) >> 0x10)
              ;
              if (iVar6 < iVar13) {
                piVar10 = piVar11 + -3;
                iVar13 = iVar6;
                bVar4 = uVar5 != 0;
              }
              if (((((bVar2 & 1) != 0) && (iVar6 != 0)) && (uVar5 == 0)) &&
                 (iVar9 < iVar8 != bVar16)) {
                iVar6 = iVar9 - *piVar11;
                iVar8 = *piVar11 - iVar9;
                if (-1 < iVar6) {
                  iVar8 = iVar6;
                }
                iVar8 = (int)((ulonglong)((iVar8 * lVar12 >> 0x3f) + 0x8000 + iVar8 * lVar12) >>
                             0x10);
                if (iVar8 < iVar13) {
                  piVar10 = piVar11;
                  iVar13 = iVar8;
                  bVar4 = uVar5 != 0;
                }
              }
            }
LAB_180583df0:
            piVar11 = piVar11 + 9;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
          if ((piVar10 != (int *)0x0) && (*(int **)(psVar14 + 0xc) = piVar10, bVar4)) {
            *(byte *)(psVar14 + 6) = bVar2 | 8;
          }
        }
      }
    }
  }
  return;
}



