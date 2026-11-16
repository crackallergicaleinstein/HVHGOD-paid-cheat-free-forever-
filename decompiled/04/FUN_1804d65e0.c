// FUN_1804d65e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d65e0 */

void FUN_1804d65e0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  
  if (0xc < (int)param_2) {
    do {
      uVar9 = (ulonglong)(param_2 >> 1);
      uVar16 = param_2 - 1;
      lVar14 = (ulonglong)param_2 - 1;
      fVar3 = *(float *)((longlong)param_1 + uVar9 * 0x14 + 4);
      fVar4 = *(float *)((longlong)param_1 + lVar14 * 0x14 + 4);
      if (*(float *)((longlong)param_1 + 4) < fVar3 != fVar3 < fVar4) {
        puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
        uVar6 = puVar1[1];
        uVar17 = 0;
        if (*(float *)((longlong)param_1 + 4) < fVar4 != fVar3 < fVar4) {
          uVar17 = uVar16;
        }
        lVar10 = (longlong)(int)uVar17;
        puVar12 = (undefined8 *)((longlong)param_1 + lVar10 * 0x14);
        uVar7 = *puVar12;
        uVar8 = puVar12[1];
        uVar5 = *(undefined4 *)((longlong)param_1 + lVar10 * 0x14 + 0x10);
        puVar12 = (undefined8 *)((longlong)param_1 + lVar10 * 0x14);
        *puVar12 = *puVar1;
        puVar12[1] = uVar6;
        *(undefined4 *)((longlong)param_1 + lVar10 * 0x14 + 0x10) =
             *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10);
        puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10) = uVar5;
      }
      puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
      uVar6 = puVar1[1];
      uVar7 = *param_1;
      uVar8 = param_1[1];
      uVar5 = *(undefined4 *)(param_1 + 2);
      iVar11 = 1;
      *param_1 = *puVar1;
      param_1[1] = uVar6;
      lVar10 = 1;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10);
      puVar1 = (undefined8 *)((longlong)param_1 + uVar9 * 0x14);
      *puVar1 = uVar7;
      puVar1[1] = uVar8;
      *(undefined4 *)((longlong)param_1 + uVar9 * 0x14 + 0x10) = uVar5;
      while( true ) {
        lVar13 = lVar10 * 5 + 1;
        pfVar2 = (float *)((longlong)param_1 + lVar13 * 4);
        fVar3 = *(float *)((longlong)param_1 + lVar13 * 4);
        lVar13 = lVar10;
        while (fVar3 < *(float *)((longlong)param_1 + 4)) {
          iVar11 = iVar11 + 1;
          pfVar2 = pfVar2 + 5;
          lVar13 = lVar13 + 1;
          fVar3 = *pfVar2;
        }
        lVar10 = lVar14 * 5 + 1;
        pfVar2 = (float *)((longlong)param_1 + lVar10 * 4);
        fVar3 = *(float *)((longlong)param_1 + lVar10 * 4);
        lVar15 = lVar14;
        while (*(float *)((longlong)param_1 + 4) < fVar3) {
          pfVar2 = pfVar2 + -5;
          uVar16 = uVar16 - 1;
          lVar15 = lVar15 + -1;
          fVar3 = *pfVar2;
        }
        if (lVar15 <= lVar13) break;
        iVar11 = iVar11 + 1;
        puVar1 = (undefined8 *)((longlong)param_1 + lVar15 * 0x14);
        uVar6 = puVar1[1];
        uVar16 = uVar16 - 1;
        puVar12 = (undefined8 *)((longlong)param_1 + lVar13 * 0x14);
        uVar7 = *puVar12;
        uVar8 = puVar12[1];
        uVar5 = *(undefined4 *)((longlong)param_1 + lVar13 * 0x14 + 0x10);
        lVar10 = lVar13 + 1;
        puVar12 = (undefined8 *)((longlong)param_1 + lVar13 * 0x14);
        *puVar12 = *puVar1;
        puVar12[1] = uVar6;
        lVar14 = lVar15 + -1;
        *(undefined4 *)((longlong)param_1 + lVar13 * 0x14 + 0x10) =
             *(undefined4 *)((longlong)param_1 + lVar15 * 0x14 + 0x10);
        puVar1 = (undefined8 *)((longlong)param_1 + lVar15 * 0x14);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        *(undefined4 *)((longlong)param_1 + lVar15 * 0x14 + 0x10) = uVar5;
      }
      param_2 = param_2 - iVar11;
      puVar1 = (undefined8 *)((longlong)param_1 + (longlong)iVar11 * 0x14);
      if ((int)uVar16 < (int)param_2) {
        puVar12 = param_1;
        param_1 = puVar1;
        uVar17 = uVar16;
        uVar16 = param_2;
      }
      else {
        puVar12 = puVar1;
        uVar17 = param_2;
      }
      FUN_1804d65e0(puVar12,uVar17);
      param_2 = uVar16;
    } while (0xc < (int)uVar16);
  }
  return;
}



