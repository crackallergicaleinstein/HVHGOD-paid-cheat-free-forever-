// FUN_180232a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180232a80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180232a80(undefined8 param_1,float *param_2,undefined8 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  float *pfVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  float *pfVar9;
  undefined8 *puVar10;
  longlong lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_378 [32];
  float *local_358;
  float *local_350;
  undefined8 local_348;
  undefined8 local_340;
  float local_328 [4];
  float *local_318;
  undefined8 local_310;
  undefined1 local_308 [152];
  float local_270;
  float local_25c;
  char local_200;
  float local_1f8;
  float local_1f4;
  longlong local_1f0;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  undefined8 local_1c8 [16];
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_11c;
  char local_10d;
  char local_c0;
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_378;
  if (DAT_180c64060 != 0) {
    iVar12 = 0;
    if ((DAT_180cd3b74 & 1) == 0) {
      DAT_180cd3b74 = DAT_180cd3b74 | 1;
      local_1f8 = 2.0008031e+15;
      local_1f0 = 0;
      local_318 = &local_1f8;
      local_310 = 1;
      FUN_18044c9c0(DAT_180c64058,&local_318);
      DAT_180cd3b78 = local_1f0;
    }
    fVar17 = 0.015625;
    fVar18 = 0.0;
    if (((uint)param_2[0xc] & 1) == 0) {
      fVar16 = param_2[5] - *(float *)(DAT_180cd3b78 + 0x58) * 0.015625;
      param_2[5] = fVar16;
    }
    else {
      param_2[5] = 0.0;
      fVar16 = 0.0;
    }
    local_1e8 = param_2[3] * 0.015625 + *param_2;
    local_1e4 = param_2[4] * 0.015625 + param_2[1];
    local_1e0 = fVar16 * 0.015625 + param_2[2];
    pfVar1 = param_2 + 9;
    pfVar2 = param_2 + 6;
    local_340 = 0x1c3003;
    local_358 = pfVar2;
    local_350 = pfVar1;
    local_348 = param_3;
    FUN_180418670(fVar16 * 0.015625,local_1c8,param_2,&local_1e8);
    if ((local_c0 != '\0') && (local_10d == '\0')) {
      fVar16 = 1.0;
      if (local_11c != 1.0) {
        local_328[2] = 1.0;
        local_328[0] = fVar18;
        do {
          fVar3 = local_134 * param_2[4] + local_138 * param_2[3] + local_130 * param_2[5];
          fVar15 = param_2[3] - local_138 * fVar3;
          param_2[3] = fVar15;
          fVar14 = param_2[4] - local_134 * fVar3;
          param_2[4] = fVar14;
          fVar13 = param_2[5] - local_130 * fVar3;
          param_2[5] = fVar13;
          fVar3 = local_134 * fVar14 + local_138 * fVar15 + local_130 * fVar13;
          if (fVar3 < fVar18) {
            fVar15 = fVar15 - local_138 * fVar3;
            param_2[3] = fVar15;
            fVar14 = fVar14 - local_134 * fVar3;
            param_2[4] = fVar14;
            fVar13 = fVar13 - local_130 * fVar3;
            param_2[5] = fVar13;
          }
          local_328[1] = fVar16 - local_11c;
          pfVar9 = local_328;
          if (fVar18 <= local_328[1]) {
            pfVar9 = local_328 + 1;
          }
          pfVar6 = local_328 + 2;
          if (local_328[1] <= fVar16) {
            pfVar6 = pfVar9;
          }
          fVar17 = fVar17 * *pfVar6;
          local_1f8 = fVar15 * fVar17 + fStack_144;
          local_1f4 = fVar14 * fVar17 + fStack_140;
          local_1f0 = CONCAT44(local_1f0._4_4_,fVar13 * fVar17 + fStack_13c);
          local_340 = 0x1c3003;
          local_358 = pfVar2;
          local_350 = pfVar1;
          local_348 = param_3;
          puVar7 = (undefined8 *)FUN_180418670(local_1f4,local_308,&fStack_144,&local_1f8);
          lVar11 = 2;
          puVar5 = local_1c8;
          do {
            puVar10 = puVar5;
            puVar8 = puVar7;
            uVar4 = puVar8[1];
            *puVar10 = *puVar8;
            puVar10[1] = uVar4;
            uVar4 = puVar8[3];
            puVar10[2] = puVar8[2];
            puVar10[3] = uVar4;
            uVar4 = puVar8[5];
            puVar10[4] = puVar8[4];
            puVar10[5] = uVar4;
            uVar4 = puVar8[7];
            puVar10[6] = puVar8[6];
            puVar10[7] = uVar4;
            uVar4 = puVar8[9];
            puVar10[8] = puVar8[8];
            puVar10[9] = uVar4;
            uVar4 = puVar8[0xb];
            puVar10[10] = puVar8[10];
            puVar10[0xb] = uVar4;
            uVar4 = puVar8[0xd];
            puVar10[0xc] = puVar8[0xc];
            puVar10[0xd] = uVar4;
            uVar4 = puVar8[0xf];
            puVar10[0xe] = puVar8[0xe];
            puVar10[0xf] = uVar4;
            lVar11 = lVar11 + -1;
            puVar7 = puVar8 + 0x10;
            puVar5 = puVar10 + 0x10;
          } while (lVar11 != 0);
          uVar4 = puVar8[0x11];
          puVar10[0x10] = puVar8[0x10];
          puVar10[0x11] = uVar4;
          if (local_c0 == '\0') {
          }
          if (local_10d != '\0') {
          }
        } while ((local_11c != fVar16) && (iVar12 = iVar12 + 1, iVar12 < 2));
      }
      *(ulonglong *)param_2 = CONCAT44(fStack_140,fStack_144);
      param_2[2] = fStack_13c;
      local_1d8 = *param_2;
      local_1d4 = param_2[1];
      local_1d0 = param_2[2] - 2.0;
      local_340 = 0x1c3003;
      local_358 = pfVar2;
      local_350 = pfVar1;
      local_348 = param_3;
      FUN_180418670(local_1d0,local_308,param_2,&local_1d8);
      if (local_200 != '\0') {
        fVar17 = param_2[0xc];
        param_2[0xc] = (float)((uint)fVar17 & 0xfffffffe);
        if ((local_25c != fVar16) && (0.7 < local_270)) {
          param_2[0xc] = (float)((uint)fVar17 & 0xfffffffe | 1);
        }
      }
    }
  }
}



