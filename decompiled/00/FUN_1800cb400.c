// FUN_1800cb400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800cb400 */

void FUN_1800cb400(longlong param_1)

{
  byte bVar1;
  byte *pbVar2;
  short sVar3;
  float *pfVar4;
  float *pfVar5;
  byte *pbVar6;
  ulonglong uVar7;
  longlong lVar8;
  float *pfVar9;
  byte *pbVar10;
  ulonglong uVar11;
  longlong lVar12;
  byte *pbVar13;
  float fVar14;
  float local_28;
  float local_24 [7];
  
  pfVar9 = (float *)(param_1 + 4);
  fVar14 = *pfVar9;
  sVar3 = thunk_FUN_180624430(fVar14);
  if (sVar3 < 1) {
    pfVar4 = &local_28;
    if (0.0 <= fVar14) {
      pfVar4 = pfVar9;
    }
    local_24[0] = 1.0;
    pfVar5 = local_24;
    if (fVar14 <= 1.0) {
      pfVar5 = pfVar4;
    }
    local_28 = 0.0;
    fVar14 = *pfVar5;
  }
  else {
    fVar14 = 0.01;
  }
  *pfVar9 = fVar14;
  local_28 = 1.4013e-42;
  local_24[0] = 0.0;
  pfVar9 = local_24;
  if (-1 < *(int *)(param_1 + 8)) {
    pfVar9 = (float *)(param_1 + 8);
  }
  lVar12 = param_1 + 0x48;
  pfVar4 = &local_28;
  if (*(int *)(param_1 + 8) < 0x3e9) {
    pfVar4 = pfVar9;
  }
  *(float *)(param_1 + 8) = *pfVar4;
  pfVar9 = (float *)(param_1 + 0x10);
  local_28 = 1.401297e-39;
  local_24[0] = 0.0;
  pfVar4 = local_24;
  if (-1 < (int)*pfVar9) {
    pfVar4 = pfVar9;
  }
  pfVar5 = &local_28;
  if ((int)*pfVar9 < 1000000) {
    pfVar5 = pfVar4;
  }
  *pfVar9 = *pfVar5;
  pfVar9 = (float *)(param_1 + 0x40);
  local_28 = 1.4013e-44;
  pfVar4 = local_24;
  if (-2 < (int)*pfVar9) {
    pfVar4 = pfVar9;
  }
  local_24[0] = -NAN;
  pfVar5 = &local_28;
  if ((int)*pfVar9 < 0xb) {
    pfVar5 = pfVar4;
  }
  *pfVar9 = *pfVar5;
  for (; lVar12 != param_1 + 0xd4; lVar12 = lVar12 + 0x1c) {
    FUN_1800c9ee0(lVar12);
  }
  FUN_1800cacc0(param_1 + 0xd4);
  pbVar13 = (byte *)(param_1 + 0x18);
  if (*(ulonglong *)(param_1 + 0x30) < 0x10) {
    pbVar10 = pbVar13;
  }
  else {
    pbVar10 = *(byte **)pbVar13;
  }
  pbVar6 = pbVar10 + *(longlong *)(param_1 + 0x28);
  if (pbVar10 != pbVar6) {
    do {
      if ((*pbVar10 < 0x20) || (*pbVar10 == 0x7f)) break;
      pbVar10 = pbVar10 + 1;
    } while (pbVar10 != pbVar6);
    pbVar2 = pbVar10;
    if (pbVar10 != pbVar6) {
      while (pbVar2 = pbVar2 + 1, pbVar2 != pbVar6) {
        bVar1 = *pbVar2;
        if ((0x1f < bVar1) && (bVar1 != 0x7f)) {
          *pbVar10 = bVar1;
          pbVar10 = pbVar10 + 1;
        }
      }
    }
  }
  if (*(ulonglong *)(param_1 + 0x30) < 0x10) {
    pbVar2 = pbVar13;
  }
  else {
    pbVar2 = *(byte **)pbVar13;
    pbVar13 = *(byte **)pbVar13;
  }
  lVar12 = (longlong)pbVar10 - (longlong)pbVar2;
  uVar11 = *(longlong *)(param_1 + 0x28) - lVar12;
  uVar7 = (longlong)pbVar6 - (longlong)pbVar10;
  if (uVar11 < (ulonglong)((longlong)pbVar6 - (longlong)pbVar10)) {
    uVar7 = uVar11;
  }
  uVar11 = *(longlong *)(param_1 + 0x28) - uVar7;
  FUN_18063aed0(pbVar13 + lVar12,pbVar13 + lVar12 + uVar7,(uVar11 - lVar12) + 1);
  lVar12 = 0x80;
  *(ulonglong *)(param_1 + 0x28) = uVar11;
  if (0x80 < uVar11) {
    do {
      lVar8 = param_1 + 0x18;
      if (0xf < *(ulonglong *)(param_1 + 0x30)) {
        lVar8 = *(longlong *)(param_1 + 0x18);
      }
    } while (((*(byte *)(lVar8 + lVar12) & 0xc0) == 0x80) && (lVar12 = lVar12 + -1, lVar12 != 0));
    FUN_1800f5630(param_1 + 0x18,lVar12,0);
  }
  return;
}



