// FUN_18032ff40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18032ff40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18032ff40(undefined4 *param_1,float *param_2,float *param_3)

{
  float fVar1;
  short sVar2;
  ulonglong uVar3;
  float *pfVar4;
  longlong lVar5;
  ulonglong uVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_98 [28];
  float local_7c [9];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  fVar10 = 0.001;
  fVar12 = 0.001;
  lVar5 = 0;
  iVar9 = 0;
  local_7c[1] = 0.0;
  local_7c[2] = 0.0;
  local_7c[3] = 0.0;
  local_7c[4] = 0.0;
  local_7c[5] = 0.0;
  local_7c[6] = 0.0;
  local_7c[7] = 0.0;
  local_7c[8] = 0.0;
  if (param_2 != param_3) {
    lVar8 = 0;
    fVar11 = 0.999;
    do {
      fVar12 = fVar10;
      if (6 < lVar8) break;
      fVar12 = *param_2;
      sVar2 = thunk_FUN_180624430();
      if (((sVar2 < 1) && (fVar10 < fVar12)) && (fVar12 < fVar11)) {
        iVar9 = iVar9 + 1;
        local_7c[lVar8 + 1] = fVar12;
        lVar8 = lVar8 + 1;
      }
      param_2 = param_2 + 1;
      fVar12 = fVar10;
    } while (param_2 != param_3);
  }
  lVar8 = (longlong)iVar9;
  if (1 < lVar8) {
    uVar6 = 1;
    pfVar7 = local_7c;
    do {
      uVar3 = uVar6;
      if (uVar6 < 4) goto LAB_1803300b9;
      pfVar4 = pfVar7;
      do {
        fVar10 = pfVar4[2];
        if (pfVar4[1] <= fVar10) goto LAB_1803300df;
        pfVar4[2] = pfVar4[1];
        pfVar4[1] = fVar10;
        if (*pfVar4 <= fVar10) goto LAB_1803300df;
        pfVar4[1] = *pfVar4;
        *pfVar4 = fVar10;
        if (pfVar4[-1] <= fVar10) goto LAB_1803300df;
        *pfVar4 = pfVar4[-1];
        pfVar4[-1] = fVar10;
        if (pfVar4[-2] <= fVar10) goto LAB_1803300df;
        pfVar4[-1] = pfVar4[-2];
        pfVar4[-2] = fVar10;
        pfVar4 = pfVar4 + -4;
        uVar3 = uVar3 - 4;
      } while (3 < (longlong)uVar3);
      for (; 0 < (longlong)uVar3; uVar3 = uVar3 - 1) {
LAB_1803300b9:
        fVar10 = local_7c[uVar3 + 1];
        if (local_7c[uVar3] <= fVar10) break;
        local_7c[uVar3 + 1] = local_7c[uVar3];
        local_7c[uVar3] = fVar10;
      }
LAB_1803300df:
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + 1;
    } while ((longlong)uVar6 < lVar8);
  }
  *param_1 = 0x3f800000;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 5) = 0;
  *(undefined8 *)(param_1 + 7) = 0;
  fVar10 = 0.0;
  if (3 < lVar8) {
    do {
      fVar11 = local_7c[lVar5 + 1];
      fVar1 = fVar11 - fVar10;
      if (fVar12 <= fVar1) {
        param_1[(int)param_1[8]] = fVar1;
        param_1[8] = param_1[8] + 1;
        fVar10 = fVar11;
      }
      fVar11 = local_7c[lVar5 + 2];
      fVar1 = fVar11 - fVar10;
      if (fVar12 <= fVar1) {
        param_1[(int)param_1[8]] = fVar1;
        param_1[8] = param_1[8] + 1;
        fVar10 = fVar11;
      }
      fVar11 = local_7c[lVar5 + 3];
      fVar1 = fVar11 - fVar10;
      if (fVar12 <= fVar1) {
        param_1[(int)param_1[8]] = fVar1;
        param_1[8] = param_1[8] + 1;
        fVar10 = fVar11;
      }
      fVar11 = local_7c[lVar5 + 4];
      fVar1 = fVar11 - fVar10;
      if (fVar12 <= fVar1) {
        param_1[(int)param_1[8]] = fVar1;
        param_1[8] = param_1[8] + 1;
        fVar10 = fVar11;
      }
      lVar5 = lVar5 + 4;
    } while (lVar5 < lVar8 + -3);
  }
  for (; lVar5 < lVar8; lVar5 = lVar5 + 1) {
    fVar11 = local_7c[lVar5 + 1];
    fVar1 = fVar11 - fVar10;
    if (fVar12 <= fVar1) {
      param_1[(int)param_1[8]] = fVar1;
      param_1[8] = param_1[8] + 1;
      fVar10 = fVar11;
    }
  }
  param_1[(int)param_1[8]] = 1.0 - fVar10;
  param_1[8] = param_1[8] + 1;
}



