// FUN_1804c3390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c3390 */

bool FUN_1804c3390(ulonglong param_1,ulonglong param_2,ulonglong param_3)

{
  double dVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  ulonglong uVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  param_3 = param_3 & 0xffffffff;
  param_2 = param_2 & 0xffffffff;
  param_1 = param_1 & 0xffffffff;
  pcVar6 = (char *)FUN_1804af1b0();
  if (*pcVar6 == '\0') {
    return false;
  }
  fVar11 = *(float *)(pcVar6 + 4);
  if (fVar11 < 0.0) {
    return false;
  }
  uVar7 = (ulonglong)((uint)param_2 | 1);
  if ((param_2 & 0xfe) == 0) {
    uVar7 = param_2 & 0xffffffff;
  }
  if (fVar11 == 0.0) goto LAB_1804c34e7;
  if ((uVar7 & 1) == 0) {
    return false;
  }
  uVar4 = (uint)uVar7 & 0xe;
  if (uVar4 == 2) {
LAB_1804c344d:
    fVar10 = *(float *)(DAT_180bb8ae8 + 0xa4);
    fVar9 = *(float *)(DAT_180bb8ae8 + 0xa8);
  }
  else if (uVar4 == 4) {
    fVar10 = *(float *)(DAT_180bb8ae8 + 0xa4) * 0.72;
    fVar9 = *(float *)(DAT_180bb8ae8 + 0xa8) * 0.8;
  }
  else {
    if (uVar4 != 8) goto LAB_1804c344d;
    fVar10 = *(float *)(DAT_180bb8ae8 + 0xa4) * 0.72;
    fVar9 = *(float *)(DAT_180bb8ae8 + 0xa8) * 0.3;
  }
  if ((fVar11 <= fVar10) ||
     (lVar8 = DAT_180bb8ae8, iVar5 = FUN_1804c2ca0(param_1 & 0xffffffff,fVar10,fVar9), iVar5 < 1)) {
    return false;
  }
  bVar2 = true;
  if ((uVar7 & 0xf0) != 0) {
    dVar1 = (*(double *)(lVar8 + 0x10) - (double)fVar11) + 9.999999747378752e-06;
    if (((uVar7 & 0x20) != 0) && (bVar2 = true, dVar1 < *(double *)(lVar8 + 0x15a8))) {
      bVar2 = false;
    }
    if (((uVar7 & 0x40) != 0) && (dVar1 < *(double *)(lVar8 + 0x15b0))) {
      bVar2 = false;
    }
    if (((char)uVar7 < '\0') && (dVar1 < *(double *)(lVar8 + 0x15b8))) {
      return false;
    }
    if (!bVar2) {
      return false;
    }
  }
LAB_1804c34e7:
  cVar3 = FUN_1804c5140(param_1 & 0xffffffff,param_3 & 0xffffffff);
  return cVar3 != '\0';
}



