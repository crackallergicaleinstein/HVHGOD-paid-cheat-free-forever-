// FUN_1804dbc10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dbc10 */

void FUN_1804dbc10(longlong param_1,float *param_2,undefined8 param_3,uint param_4,int param_5,
                  uint param_6)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  float *pfVar12;
  longlong lVar13;
  float fVar14;
  
  fVar14 = *(float *)(param_1 + 0xe0) * 0.25;
  if ((float)param_3 < fVar14) {
    FUN_1804d0c90(param_1 + 0x50);
    return;
  }
  if ((int)param_6 < 1) {
    iVar4 = FUN_1804d9380(fVar14,param_3);
    fVar14 = (float)param_3;
    iVar11 = (int)(0x30 / (longlong)iVar4);
    uVar10 = 0x30 / (longlong)iVar4 & 0xffffffff;
    if (iVar11 < 1) {
      bVar3 = false;
      uVar10 = 1;
      uVar9 = 1;
      iVar4 = -(param_5 - param_4);
      if (iVar4 < 0) {
        iVar4 = param_5 - param_4;
      }
      iVar4 = iVar4 + 1;
      goto LAB_1804dbd37;
    }
    if (0xc < iVar11) {
      uVar10 = 0xc;
    }
    iVar4 = (int)(0xc / (longlong)(int)uVar10);
    if (iVar4 * (int)uVar10 != 0xc) {
      uVar10 = 0xc / (longlong)iVar4 & 0xffffffff;
    }
  }
  else {
    uVar10 = (ulonglong)param_6;
    if (0xc < (int)param_6) {
      uVar10 = 0xc;
    }
  }
  fVar14 = (float)param_3;
  bVar3 = false;
  uVar9 = (uint)uVar10;
  iVar11 = -(param_5 - param_4);
  if (iVar11 < 0) {
    iVar11 = param_5 - param_4;
  }
  iVar4 = iVar11 + 1;
  if (1 < (int)uVar9) {
    iVar4 = iVar11 / (int)uVar9 + 1;
    if (0 < iVar11 % (int)uVar9) {
      iVar4 = iVar11 / (int)uVar9 + 2;
      bVar3 = true;
      if (0 < iVar11) {
        uVar10 = (ulonglong)(uVar9 - (int)(uVar9 - iVar11 % (int)uVar9) / 2);
      }
    }
  }
LAB_1804dbd37:
  iVar11 = *(int *)(param_1 + 0x50);
  iVar4 = iVar11 + iVar4;
  iVar5 = *(int *)(param_1 + 0x54);
  if (iVar5 < iVar4) {
    if (iVar5 == 0) {
      iVar5 = 8;
    }
    else {
      iVar5 = iVar5 / 2 + iVar5;
    }
    iVar2 = iVar4;
    if (iVar4 < iVar5) {
      iVar2 = iVar5;
    }
    FUN_1804d0a80(param_1 + 0x50,iVar2);
  }
  *(int *)(param_1 + 0x50) = iVar4;
  pfVar12 = (float *)(*(longlong *)(param_1 + 0x58) + (longlong)iVar11 * 8);
  uVar7 = param_4;
  if ((0x2f < param_4) && (uVar7 = (int)param_4 % 0x30, (int)uVar7 < 0)) {
    uVar7 = uVar7 + 0x30;
  }
  lVar8 = (longlong)(int)uVar7;
  lVar13 = (longlong)(int)uVar10;
  if (param_5 < (int)param_4) {
    do {
      lVar6 = lVar8 + 0x30;
      if (-1 < lVar8) {
        lVar6 = lVar8;
      }
      param_4 = param_4 - (int)uVar10;
      uVar10 = (ulonglong)uVar9;
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x7c + lVar6 * 8);
      *pfVar12 = fVar14 * *(float *)(*(longlong *)(param_1 + 0x38) + 0x78 + lVar6 * 8) + *param_2;
      lVar8 = lVar6 - lVar13;
      pfVar12[1] = fVar14 * fVar1 + param_2[1];
      pfVar12 = pfVar12 + 2;
      lVar13 = (longlong)(int)uVar9;
    } while (param_5 <= (int)param_4);
  }
  else {
    do {
      lVar6 = lVar8 + -0x30;
      if (lVar8 < 0x30) {
        lVar6 = lVar8;
      }
      param_4 = param_4 + (int)uVar10;
      uVar10 = (ulonglong)uVar9;
      fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x7c + lVar6 * 8);
      *pfVar12 = fVar14 * *(float *)(*(longlong *)(param_1 + 0x38) + 0x78 + lVar6 * 8) + *param_2;
      pfVar12[1] = fVar14 * fVar1 + param_2[1];
      pfVar12 = pfVar12 + 2;
      lVar8 = lVar6 + lVar13;
      lVar13 = (longlong)(int)uVar9;
    } while ((int)param_4 <= param_5);
  }
  if (bVar3) {
    param_5 = param_5 % 0x30;
    iVar4 = param_5 + 0x30;
    if (-1 < param_5) {
      iVar4 = param_5;
    }
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x38) + 0x7c + (longlong)iVar4 * 8);
    *pfVar12 = fVar14 * *(float *)(*(longlong *)(param_1 + 0x38) + 0x78 + (longlong)iVar4 * 8) +
               *param_2;
    pfVar12[1] = fVar14 * fVar1 + param_2[1];
  }
  return;
}



