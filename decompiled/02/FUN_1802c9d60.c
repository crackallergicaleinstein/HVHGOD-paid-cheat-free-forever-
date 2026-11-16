// FUN_1802c9d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c9d60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c9d60(float *param_1,float *param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  short sVar2;
  longlong lVar3;
  float *pfVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_118 [32];
  float local_f8;
  float local_f4;
  float *local_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8 [22];
  
  local_d8[0] = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  if (((*(char *)((longlong)param_1 + 0x25) != '\0') && (*(char *)(param_1 + 8) != '\0')) &&
     (sVar2 = thunk_FUN_180624430(param_1[4]), sVar2 < 1)) {
    fVar10 = param_1[7];
    sVar2 = thunk_FUN_180624430(param_1[6] + param_1[5] + fVar10);
    if (((sVar2 < 1) && (fVar15 = 0.25, 0.25 <= fVar10)) &&
       ((fVar16 = 1.01, fVar10 <= 1.01 &&
        ((sVar2 = thunk_FUN_180624430(param_3 + param_4), sVar2 < 1 &&
         (fVar10 = param_1[3], 0.0 < fVar10)))))) {
      fVar17 = (fVar10 + fVar10) * 0.125;
      local_f8 = ((param_3 - *param_1) + fVar10) / fVar17;
      if ((0.0 <= local_f8) &&
         (((local_f4 = ((param_4 - param_1[1]) + fVar10) / fVar17, 0.0 <= local_f4 &&
           (local_f8 <= 8.0)) && (local_f4 <= 8.0)))) {
        iVar9 = (int)local_f8;
        iVar7 = (int)local_f4;
        if (7 < iVar9) {
          iVar9 = 7;
        }
        local_f8 = local_f8 - (float)iVar9;
        if (7 < iVar7) {
          iVar7 = 7;
        }
        iVar6 = 0;
        local_f4 = local_f4 - (float)iVar7;
        local_f0 = (float *)local_e8;
        _local_e8 = (undefined1  [16])0x0;
        do {
          iVar1 = iVar6 / 2 + iVar7;
          iVar8 = iVar6 % 2 + iVar9;
          lVar3 = (longlong)(iVar1 * 9 + iVar8) + 2;
          if (*(char *)(param_1 + lVar3 * 5 + 4) == '\0') goto LAB_1802ca0be;
          fVar12 = param_1[lVar3 * 5];
          sVar2 = thunk_FUN_180624430(fVar12);
          if (0 < sVar2) goto LAB_1802ca0be;
          fVar13 = param_1[lVar3 * 5 + 2];
          fVar14 = param_1[lVar3 * 5 + 1];
          fVar11 = param_1[lVar3 * 5 + 3];
          sVar2 = thunk_FUN_180624430(fVar14 + fVar13 + fVar11);
          if (((0 < sVar2) || (fVar11 < fVar15)) || (fVar16 < fVar11)) goto LAB_1802ca0be;
          iVar6 = iVar6 + 1;
          *local_f0 = fVar12 - ((param_4 - ((float)iVar1 * fVar17 + (param_1[1] - fVar10))) * fVar13
                               + (param_3 - ((float)iVar8 * fVar17 + (*param_1 - fVar10))) * fVar14)
                               / fVar11;
          local_f0 = local_f0 + 1;
        } while (iVar6 < 4);
        pfVar4 = (float *)FUN_1805f9dd0(local_e8,local_d8,0);
        pfVar5 = (float *)FUN_1805f9e60(local_e8,local_d8,0);
        if (*pfVar4 - *pfVar5 <= 8.0) {
          *param_2 = param_3;
          param_2[1] = param_4;
          param_2[2] = ((1.0 - local_f8) * (float)local_e8._0_4_ + local_f8 * (float)local_e8._4_4_)
                       * (1.0 - local_f4) +
                       ((1.0 - local_f8) * fStack_e0 + local_f8 * fStack_dc) * local_f4 + param_5;
          *(undefined1 *)(param_2 + 3) = 1;
        }
      }
    }
  }
LAB_1802ca0be:
  *(undefined1 *)(param_2 + 3) = 0;
}



