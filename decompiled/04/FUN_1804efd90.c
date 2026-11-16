// FUN_1804efd90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804efd90 */

void FUN_1804efd90(longlong param_1)

{
  float *pfVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar6 = (longlong)*(int *)(param_1 + 0x6c);
  iVar5 = 0;
  lVar3 = 0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  if (lVar6 < 4) {
    if (lVar6 < 1) goto LAB_1804efe7c;
    lVar7 = *(longlong *)(param_1 + 0x18);
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x18);
    lVar4 = (lVar6 - 4U >> 2) + 1;
    pfVar1 = (float *)(lVar7 + 0x94);
    lVar3 = lVar4 * 4;
    fVar8 = fVar9;
    fVar10 = fVar11;
    do {
      if ((*(char *)((longlong)pfVar1 + -0x2a) != '\0') && (((uint)pfVar1[-0x25] & 8) != 0)) {
        fVar8 = fVar8 + pfVar1[-0x1e];
        fVar10 = fVar10 + pfVar1[-0x21];
      }
      if ((*(char *)((longlong)pfVar1 + 0x4e) != '\0') && (((uint)pfVar1[-7] & 8) != 0)) {
        fVar8 = fVar8 + *pfVar1;
        fVar10 = fVar10 + pfVar1[-3];
      }
      if ((*(char *)((longlong)pfVar1 + 0xc6) != '\0') && (((uint)pfVar1[0x17] & 8) != 0)) {
        fVar8 = fVar8 + pfVar1[0x1e];
        fVar10 = fVar10 + pfVar1[0x1b];
      }
      if ((*(char *)((longlong)pfVar1 + 0x13e) != '\0') && (((uint)pfVar1[0x35] & 8) != 0)) {
        fVar8 = fVar8 + pfVar1[0x3c];
        fVar10 = fVar10 + pfVar1[0x39];
      }
      pfVar1 = pfVar1 + 0x78;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    fVar9 = fVar8;
    fVar11 = fVar10;
    if (lVar6 <= lVar3) goto LAB_1804efe7c;
  }
  pbVar2 = (byte *)(lVar3 * 0x78 + lVar7);
  lVar6 = lVar6 - lVar3;
  fVar8 = fVar9;
  fVar10 = fVar11;
  do {
    if ((pbVar2[0x6a] != 0) && ((*pbVar2 & 8) != 0)) {
      fVar8 = fVar8 + *(float *)(pbVar2 + 0x1c);
      fVar10 = fVar10 + *(float *)(pbVar2 + 0x10);
    }
    pbVar2 = pbVar2 + 0x78;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
LAB_1804efe7c:
  if (0 < *(int *)(param_1 + 0x6c)) {
    lVar3 = 0;
    do {
      lVar6 = *(longlong *)(param_1 + 0x18);
      if ((*(char *)(lVar6 + 0x6a + lVar3) != '\0') && ((*(byte *)(lVar6 + lVar3) & 8) != 0)) {
        *(float *)(lVar6 + 0x1c + lVar3) = (*(float *)(lVar6 + 0x10 + lVar3) / fVar10) * fVar8;
      }
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + 0x78;
    } while (iVar5 < *(int *)(param_1 + 0x6c));
  }
  return;
}



