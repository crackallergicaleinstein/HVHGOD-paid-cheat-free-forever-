// FUN_18029bc90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029bc90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18029bc90(float *param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int *piVar11;
  longlong lVar12;
  ulonglong *puVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_1b8 [32];
  int local_198 [5];
  float local_184;
  float local_180;
  int local_17c;
  int local_178 [2];
  int local_170 [4];
  int local_160 [2];
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [16];
  float local_138 [8];
  int local_118 [8];
  float local_f8 [16];
  undefined8 local_b8;
  ulonglong local_b0 [15];
  
  puVar13 = &local_b8;
  local_b0[0] = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  piVar15 = (int *)*param_2;
  piVar16 = piVar15 + param_2[1] * 8;
  _local_158 = (undefined1  [16])0x0;
  local_148 = (undefined1  [16])0x0;
  local_138[0] = 0.0;
  local_138[1] = 0.0;
  local_138[2] = 0.0;
  local_138[3] = 0.0;
  local_138[4] = 0.0;
  local_138[5] = 0.0;
  local_138[6] = 0.0;
  local_138[7] = 0.0;
  local_f8[8] = 0.0;
  local_f8[9] = 0.0;
  local_f8[10] = 0.0;
  local_f8[0xb] = 0.0;
  local_f8[0xc] = 0.0;
  local_f8[0xd] = 0.0;
  local_f8[0xe] = 0.0;
  local_f8[0xf] = 0.0;
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  local_118[3] = 0;
  local_118[4] = 0;
  local_118[5] = 0;
  local_118[6] = 0;
  local_118[7] = 0;
  if (piVar15 != piVar16) {
    local_198[4] = 3;
    local_198[0] = 0;
    local_180 = 1.4013e-45;
    local_184 = 0.0;
    piVar14 = piVar15;
    do {
      local_198[2] = *piVar14;
      iVar3 = piVar14[7];
      piVar11 = local_198;
      if (-1 < local_198[2]) {
        piVar11 = local_198 + 2;
      }
      piVar7 = local_198 + 4;
      if (local_198[2] < 4) {
        piVar7 = piVar11;
      }
      lVar12 = (longlong)*piVar7;
      pfVar9 = &local_184;
      if (-1 < iVar3) {
        pfVar9 = (float *)(piVar14 + 7);
      }
      cVar6 = FUN_18029b970();
      if (cVar6 == '\0') {
        pfVar8 = &local_180;
        if (iVar3 < 2) {
          pfVar8 = pfVar9;
        }
        lVar12 = (longlong)(int)*pfVar8 + lVar12 * 2;
        local_138[lVar12] = (float)piVar14[1] + local_138[lVar12];
        auVar5 = vcmpss_avx(ZEXT416((uint)local_f8[lVar12 + 8]),ZEXT416((uint)piVar14[2]),1);
        auVar5 = vblendvps_avx(ZEXT416((uint)local_f8[lVar12 + 8]),ZEXT416((uint)piVar14[2]),auVar5)
        ;
        local_f8[lVar12 + 8] = auVar5._0_4_;
        local_118[lVar12] = local_118[lVar12] + 1;
      }
      else {
        fVar19 = (float)piVar14[2];
        *(int *)(local_148 + lVar12 * 4) = *(int *)(local_148 + lVar12 * 4) + 1;
        *(float *)(local_158 + lVar12 * 4) = fVar19 + *(float *)(local_158 + lVar12 * 4);
      }
      piVar14 = piVar14 + 8;
    } while (piVar14 != piVar16);
  }
  if (local_148._0_4_ == 0) {
    fVar19 = (float)local_158._0_4_;
  }
  else {
    fVar19 = (float)(local_148._0_4_ - 1) * 3.0 + (float)local_158._0_4_;
  }
  if (local_118[0] != 0) {
    local_138[0] = (float)(local_118[0] - 1) * 3.0 + local_138[0];
  }
  if (local_118[1] != 0) {
    local_138[1] = (float)(local_118[1] - 1) * 3.0 + local_138[1];
  }
  if (local_118[2] != 0) {
    local_138[2] = (float)(local_118[2] - 1) * 3.0 + local_138[2];
  }
  if (local_118[3] != 0) {
    local_138[3] = (float)(local_118[3] - 1) * 3.0 + local_138[3];
  }
  if (local_118[4] != 0) {
    local_138[4] = (float)(local_118[4] - 1) * 3.0 + local_138[4];
  }
  if (local_118[5] != 0) {
    local_138[5] = (float)(local_118[5] - 1) * 3.0 + local_138[5];
  }
  fVar20 = fStack_14c;
  if (local_148._12_4_ == 0) {
    fVar17 = fStack_14c;
  }
  else {
    fVar17 = (float)(local_148._12_4_ - 1) * 3.0 + fStack_14c;
  }
  if (local_118[6] != 0) {
    local_138[6] = (float)(local_118[6] - 1) * 3.0 + local_138[6];
  }
  if (local_118[7] != 0) {
    local_138[7] = (float)(local_118[7] - 1) * 3.0 + local_138[7];
  }
  fVar21 = *param_1;
  fVar22 = param_1[2];
  local_f8[0] = 0.0;
  local_f8[1] = 0.0;
  local_f8[2] = 0.0;
  local_f8[3] = 0.0;
  local_f8[4] = 0.0;
  local_f8[5] = 0.0;
  local_f8[6] = 0.0;
  local_f8[7] = 0.0;
  local_b8._0_4_ = 1;
  local_b8._4_4_ = 2;
  do {
    lVar12 = (longlong)(int)*puVar13;
    puVar13 = (ulonglong *)((longlong)puVar13 + 4);
    fVar23 = local_138[lVar12 * 2 + 1];
    local_f8[lVar12 * 2] = (fVar22 - local_138[lVar12 * 2]) * 0.5 + fVar21;
    local_f8[lVar12 * 2 + 1] = (fVar22 - fVar23) * 0.5 + fVar21;
  } while (puVar13 != local_b0);
  fVar23 = param_1[1];
  local_158._0_4_ = fVar23 + param_1[3];
  fStack_150 = fVar17 + fVar23;
  _local_158 = CONCAT412(fVar20,_local_158);
  local_148._4_8_ = 0;
  local_148._0_4_ = fVar23;
  local_148._12_4_ = fVar23;
  local_158._4_4_ = fVar19 + fVar23;
  fVar20 = 3.0;
  fVar17 = 0.5;
  fVar24 = 0.0;
  pfVar9 = (float *)FUN_1805f9dd0(local_158,&fStack_14c,0);
  fVar19 = *pfVar9;
  if (piVar15 != piVar16) {
    local_170[0] = 3;
    pfVar9 = (float *)(piVar15 + 4);
    local_17c = 0;
    local_184 = 1.4013e-45;
    local_180 = 0.0;
    local_198[0] = 3;
    local_198[4] = 0;
    do {
      local_178[0] = *piVar15;
      fVar1 = pfVar9[-3];
      piVar14 = &local_17c;
      if (-1 < local_178[0]) {
        piVar14 = local_178;
      }
      piVar11 = local_170;
      if (local_178[0] < 4) {
        piVar11 = piVar14;
      }
      local_198[2] = *piVar11;
      lVar12 = (longlong)local_198[2];
      pfVar8 = &local_180;
      if (-1 < (int)pfVar9[3]) {
        pfVar8 = pfVar9 + 3;
      }
      pfVar10 = &local_184;
      if ((int)pfVar9[3] < 2) {
        pfVar10 = pfVar8;
      }
      fVar4 = *pfVar10;
      piVar14 = local_198 + 4;
      if (-1 < local_198[2]) {
        piVar14 = local_198 + 2;
      }
      pfVar9[1] = fVar1;
      fVar2 = pfVar9[-2];
      piVar11 = local_198;
      if (local_198[2] < 4) {
        piVar11 = piVar14;
      }
      pfVar9[2] = fVar2;
      if (*piVar11 == 0) {
LAB_18029c1cd:
        if (local_198[2] == 0) {
          fVar1 = ((fVar21 - fVar20) - *param_3) - fVar1;
        }
        else {
          fVar1 = fVar21 + fVar22 + fVar20 + param_3[3];
        }
        fVar4 = *(float *)(local_148 + lVar12 * 4);
        *pfVar9 = fVar4;
        *(float *)(local_148 + lVar12 * 4) = fVar2 + fVar20 + fVar4;
        pfVar9[-1] = fVar1;
      }
      else {
        local_170[2] = local_198[2];
        local_160[0] = 3;
        local_170[1] = 0;
        piVar14 = local_170 + 1;
        if (-1 < local_198[2]) {
          piVar14 = local_170 + 2;
        }
        piVar11 = local_160;
        if (local_198[2] < 4) {
          piVar11 = piVar14;
        }
        if (*piVar11 == 3) goto LAB_18029c1cd;
        if ((fVar4 == 0.0) || (local_118[lVar12 * 2] == 0)) {
          fVar18 = fVar24;
        }
        else {
          fVar18 = fVar20 + local_f8[lVar12 * 2 + 8];
        }
        lVar12 = (longlong)(int)fVar4 + lVar12 * 2;
        pfVar9[-1] = local_f8[lVar12];
        if (local_198[2] == 1) {
          fVar18 = (((fVar23 - fVar20) - param_3[1]) - fVar18) - local_f8[lVar12 + 8];
        }
        else {
          fVar18 = fVar19 + fVar20 + param_3[2] + fVar18;
        }
        *pfVar9 = (local_f8[lVar12 + 8] - fVar2) * fVar17 + fVar18;
        local_f8[lVar12] = fVar1 + fVar20 + local_f8[lVar12];
      }
      piVar15 = piVar15 + 8;
      pfVar9 = pfVar9 + 8;
    } while (piVar15 != piVar16);
  }
}



