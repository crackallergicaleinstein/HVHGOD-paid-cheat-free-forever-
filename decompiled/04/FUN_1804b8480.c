// FUN_1804b8480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b8480 */

void FUN_1804b8480(void)

{
  int *piVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  uint uVar15;
  longlong lVar16;
  
  lVar16 = DAT_180bb8ae8;
  if (*(int *)(DAT_180bb8ae8 + 0x1550) != 0) {
    return;
  }
  piVar1 = (int *)(DAT_180bb8ae8 + 0x1538);
  if ((*piVar1 != 0) && (*(char *)(DAT_180bb8ae8 + 0x154d) == '\0')) {
    return;
  }
  lVar12 = *(longlong *)(DAT_180bb8ae8 + 0x2040);
  if ((lVar12 != 0) && (*(char *)(lVar12 + 0xd3) != '\0')) {
    return;
  }
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d8);
  cVar5 = FUN_1804c3510(0,0,0xffffffff);
  lVar13 = lVar16;
  if (cVar5 != '\0') {
    if (lVar2 == 0) {
      lVar10 = 0;
LAB_1804b854d:
      bVar3 = false;
    }
    else {
      lVar10 = *(longlong *)(lVar2 + 0x3d8);
      if ((lVar10 == 0) || ((*(uint *)(lVar10 + 0x14) & 0x4000000) == 0)) goto LAB_1804b854d;
      if (0 < *(int *)(lVar16 + 0x1ff8)) {
        lVar9 = 0;
        piVar8 = *(int **)(lVar16 + 0x2000);
        do {
          if (*piVar8 == *(int *)(lVar10 + 0x94)) goto LAB_1804b854d;
          lVar9 = lVar9 + 1;
          piVar8 = piVar8 + 0xe;
        } while (lVar9 < *(int *)(lVar16 + 0x1ff8));
      }
      bVar3 = true;
    }
    if ((*(char *)(lVar16 + 0x20e0) == '\0') || ((*(uint *)(lVar16 + 0x20e4) & 0x200) == 0)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (lVar2 == 0) {
      if (lVar12 != 0) {
        FUN_1804c8a10(0,2);
        lVar13 = DAT_180bb8ae8;
      }
    }
    else if ((!bVar3) && (!bVar4)) {
      FUN_1804b83b0(lVar2);
      if (((*(byte *)(lVar2 + 0xf0) & 1) == 0) && ((*(byte *)(lVar10 + 0x14) & 1) == 0)) {
        if ((((*(float *)(lVar16 + 0xaf0) < *(float *)(lVar10 + 0x28)) ||
             (*(float *)(lVar16 + 0xaf4) < *(float *)(lVar10 + 0x2c))) ||
            (*(float *)(lVar10 + 0x28) + *(float *)(lVar10 + 0x38) <= *(float *)(lVar16 + 0xaf0)))
           || (*(float *)(lVar10 + 0x68) + *(float *)(lVar10 + 0x2c) <= *(float *)(lVar16 + 0xaf4)))
        {
          *(undefined8 *)(lVar16 + 0x14f0) = 0;
        }
      }
      lVar13 = DAT_180bb8ae8;
      if (*(char *)(lVar16 + 0x154d) != '\0') {
        *(int *)(lVar16 + 0x1568) = *piVar1;
        *(undefined8 *)(lVar16 + 0x14f0) = 0;
        lVar13 = DAT_180bb8ae8;
      }
    }
  }
  if (*piVar1 != 0) {
    return;
  }
  lVar16 = 1;
  cVar5 = FUN_1804c3510(1,0,0xffffffff);
  if (cVar5 == '\0') {
    return;
  }
  uVar15 = (uint)lVar16;
  iVar6 = *(int *)(lVar13 + 0x1ff8) - uVar15;
  if (-1 < iVar6) {
    lVar12 = (longlong)iVar6;
    plVar14 = (longlong *)(*(longlong *)(lVar13 + 0x2000) + 8 + lVar12 * 0x38);
    do {
      lVar10 = *plVar14;
      if ((lVar10 != 0) && ((*(uint *)(lVar10 + 0x14) & 0x8000000) != 0)) goto LAB_1804b8682;
      plVar14 = plVar14 + -7;
      lVar12 = lVar12 - lVar16;
    } while (-1 < lVar12);
  }
  lVar10 = 0;
LAB_1804b8682:
  if (lVar2 != 0) {
    if (lVar10 == 0) goto LAB_1804b86da;
    uVar7 = *(uint *)(lVar10 + 0x14) >> 0x19 & uVar15;
    uVar11 = *(uint *)(lVar2 + 0x14) >> 0x19 & uVar15;
    if (uVar11 == uVar7) {
      iVar6 = *(int *)(lVar13 + 0x1470) - uVar15;
      if (-1 < iVar6) {
        lVar12 = (longlong)iVar6;
        plVar14 = (longlong *)(*(longlong *)(lVar13 + 0x1478) + lVar12 * 8);
        do {
          if (*plVar14 == lVar2) goto LAB_1804b86da;
          if (*plVar14 == lVar10) break;
          plVar14 = plVar14 + -1;
          lVar12 = lVar12 - lVar16;
        } while (-1 < lVar12);
      }
    }
    else if (0 < (int)(uVar11 - uVar7)) goto LAB_1804b86da;
  }
  lVar16 = 0;
LAB_1804b86da:
  if ((int)lVar16 != 0) {
    lVar10 = lVar2;
  }
  FUN_1804c7960(lVar10,1);
  return;
}



