// FUN_180273e70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180273e70 */

undefined8 * FUN_180273e70(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  iVar10 = 0;
  *(undefined2 *)((longlong)param_2 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1f) = 0;
  *(undefined2 *)((longlong)param_2 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_2 + 0x3f) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined4 *)(param_2 + 3) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1c) = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 7) = 0;
  *(undefined1 *)((longlong)param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  iVar1 = *(int *)(param_1 + 0x280);
  if (iVar1 < 1) {
    return param_2;
  }
  iVar8 = -1;
  pfVar9 = (float *)(param_1 + 4);
  iVar11 = -1;
  uVar2 = *(uint *)(param_1 + 0x290);
  fVar13 = 1.0;
  iVar3 = *(int *)(param_1 + 0x284);
  fVar14 = 0.0;
  do {
    if ((((int)pfVar9[-1] <= (int)(iVar3 - uVar2)) && ((int)(~uVar2 + iVar3) <= (int)pfVar9[-1])) &&
       (cVar4 = FUN_1802646f0(pfVar9 + 1), cVar4 != '\0')) {
      fVar12 = *pfVar9;
      sVar5 = thunk_FUN_180624430(fVar12);
      if (((sVar5 < 1) && (fVar14 <= fVar12)) && (fVar12 < fVar13)) {
        iVar11 = iVar10;
        if (iVar8 != -1) {
          iVar11 = iVar8;
        }
        iVar8 = iVar11;
        iVar11 = iVar10;
      }
    }
    iVar10 = iVar10 + 1;
    pfVar9 = pfVar9 + 5;
  } while (iVar10 < iVar1);
  if (iVar11 != -1) {
    lVar6 = (longlong)iVar11;
    *param_2 = *(undefined8 *)(param_1 + 8 + lVar6 * 0x14);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10 + lVar6 * 0x14);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + lVar6 * 0x14);
    *(float *)(param_2 + 2) = *(float *)(param_1 + 4 + lVar6 * 0x14) + 0.03125;
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_1 + 0x290);
    *(undefined4 *)(param_2 + 3) = *(undefined4 *)(param_1 + 0x294);
    *(undefined4 *)(param_2 + 8) = 1;
    if ((iVar8 != iVar11) &&
       (lVar7 = (longlong)iVar8,
       fVar13 = *(float *)(param_1 + 8 + lVar7 * 0x14) - *(float *)(param_1 + 8 + lVar6 * 0x14),
       fVar14 = *(float *)(param_1 + 0xc + lVar7 * 0x14) - *(float *)(param_1 + 0xc + lVar6 * 0x14),
       fVar12 = *(float *)(param_1 + 0x10 + lVar7 * 0x14) -
                *(float *)(param_1 + 0x10 + lVar6 * 0x14),
       4.0 <= fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12)) {
      param_2[4] = *(undefined8 *)(param_1 + 8 + lVar7 * 0x14);
      *(undefined4 *)(param_2 + 5) = *(undefined4 *)(param_1 + 0x10 + lVar7 * 0x14);
      *(undefined4 *)((longlong)param_2 + 0x2c) = *(undefined4 *)(param_1 + lVar7 * 0x14);
      *(float *)(param_2 + 6) = *(float *)(param_1 + 4 + lVar7 * 0x14) + 0.03125;
      *(undefined4 *)((longlong)param_2 + 0x34) = *(undefined4 *)(param_1 + 0x290);
      *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 0x294);
      *(undefined4 *)(param_2 + 8) = 2;
    }
  }
  return param_2;
}



