// FUN_18057f700 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057f700 */

void FUN_18057f700(longlong param_1,longlong param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  short *psVar12;
  int *piVar13;
  short *psVar14;
  ulonglong uVar15;
  longlong lVar16;
  
  param_1 = (longlong)param_3 * 0x898 + param_1;
  psVar14 = *(short **)(param_1 + 0x60);
  if (psVar14 == (short *)0x0) {
    psVar12 = (short *)0x0;
  }
  else {
    psVar12 = psVar14 + (ulonglong)*(uint *)(param_1 + 0x58) * 0x24;
  }
  lVar16 = (longlong)param_3 * 0x1c4 + param_2;
  iVar1 = *(int *)(lVar16 + 0x44);
  lVar4 = ((ulonglong)*(uint *)(param_2 + 0x40) / 0x28) * (longlong)iVar1;
  lVar4 = lVar4 + 0x8000 + (lVar4 >> 0x3f);
  uVar15 = lVar4 >> 0x10 & 0xffffffff;
  if (0x20 < (int)((ulonglong)lVar4 >> 0x10)) {
    uVar15 = 0x20;
  }
  for (; psVar14 < psVar12; psVar14 = psVar14 + 0x24) {
    piVar13 = (int *)0x0;
    if (*(uint *)(lVar16 + 0x11c) != 0) {
      uVar6 = (ulonglong)*(uint *)(lVar16 + 0x11c);
      piVar11 = (int *)(lVar16 + 300);
      uVar7 = uVar15;
      do {
        if (((piVar11[3] & 1U) != 0) &&
           (((int)*(char *)((longlong)psVar14 + 0xd) == *(int *)(param_1 + 0x68)) !=
            (bool)((byte)((uint)piVar11[3] >> 1) & 1))) {
          iVar10 = (int)*psVar14;
          iVar3 = piVar11[-3];
          iVar2 = *piVar11;
          iVar9 = iVar3 - iVar10;
          if (-1 < iVar10 - iVar3) {
            iVar9 = iVar10 - iVar3;
          }
          iVar8 = iVar2 - iVar10;
          if (-1 < iVar10 - iVar2) {
            iVar8 = iVar10 - iVar2;
          }
          if (iVar9 <= iVar8) {
            iVar2 = iVar3;
          }
          iVar3 = iVar2 - iVar10;
          if (-1 < iVar10 - iVar2) {
            iVar3 = iVar10 - iVar2;
          }
          lVar4 = (longlong)iVar3 * (longlong)iVar1;
          uVar5 = (uint)((ulonglong)((lVar4 >> 0x3f) + 0x8000 + lVar4) >> 0x10);
          if (((int)uVar5 < (int)uVar7) &&
             (uVar7 = (ulonglong)uVar5, piVar13 = piVar11, iVar9 <= iVar8)) {
            piVar13 = piVar11 + -3;
          }
        }
        piVar11 = piVar11 + 7;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
      if (piVar13 != (int *)0x0) {
        *(int **)(psVar14 + 0xc) = piVar13;
      }
    }
  }
  return;
}



