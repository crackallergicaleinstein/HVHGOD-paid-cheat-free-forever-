// FUN_18028b0b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028b0b0 */

float FUN_18028b0b0(int *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  short sVar4;
  int iVar5;
  undefined8 *puVar6;
  int *piVar7;
  float *pfVar8;
  float *pfVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_e8;
  float local_e4;
  float local_e0 [2];
  float local_d8;
  float local_d4;
  float local_d0 [2];
  float local_c8;
  float local_c4;
  float local_c0 [2];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  int local_80;
  undefined1 local_78 [112];
  
  local_b8 = *(undefined8 *)param_1;
  uStack_b0 = *(undefined8 *)(param_1 + 2);
  local_a8 = *(undefined8 *)(param_1 + 4);
  local_a0 = param_1[6];
  puVar6 = (undefined8 *)FUN_1800ba9f0(&local_98,&local_b8);
  uVar3 = puVar6[1];
  uVar1 = puVar6[2];
  iVar10 = *(int *)(puVar6 + 3);
  *(undefined8 *)param_1 = *puVar6;
  *(undefined8 *)(param_1 + 2) = uVar3;
  *(undefined8 *)(param_1 + 4) = uVar1;
  param_1[6] = iVar10;
  sVar4 = thunk_FUN_180624430(param_3);
  fVar16 = (float)param_3;
  if ((sVar4 < 1) && (sVar4 = thunk_FUN_180624430(param_4), sVar4 < 1)) {
    fVar13 = 1.0;
    fVar11 = 1.0;
    if (1.0 < fVar16) {
      auVar2 = vmaxss_avx(SUB6416(ZEXT464(0x40c00000),0),ZEXT416((uint)param_1[4]));
      local_e0[0] = (fVar16 - 1.0) / auVar2._0_4_;
      fVar16 = 0.0;
      pfVar9 = &local_e4;
      if (0.0 <= local_e0[0]) {
        pfVar9 = local_e0;
      }
      local_d8 = 1.0;
      pfVar8 = &local_d8;
      if (local_e0[0] <= 1.0) {
        pfVar8 = pfVar9;
      }
      local_e4 = 0.0;
      fVar15 = *pfVar8;
      fVar15 = (3.0 - (fVar15 + fVar15)) * fVar15 * fVar15 * (float)param_1[2] * 0.01;
      if (*param_1 != 0) {
        if ((float)param_1[3] <= 0.0) {
          fVar14 = 1.0;
        }
        else {
          local_d0[0] = (float)param_4 / (float)param_1[3];
          pfVar9 = &local_d4;
          if (0.0 <= local_d0[0]) {
            pfVar9 = local_d0;
          }
          local_c8 = 1.0;
          pfVar8 = &local_c8;
          if (local_d0[0] <= 1.0) {
            pfVar8 = pfVar9;
          }
          local_d4 = 0.0;
          fVar14 = *pfVar8;
          fVar14 = (3.0 - (fVar14 + fVar14)) * fVar14 * fVar14;
        }
        fVar14 = fVar14 * fVar15;
        local_e8 = fVar14;
        if (*param_1 == 2) {
          iVar10 = 0;
          fVar17 = 0.8;
          fVar15 = 0.0;
          fVar16 = 0.0;
          while( true ) {
            local_b8 = *(undefined8 *)param_1;
            uStack_b0 = *(undefined8 *)(param_1 + 2);
            local_a8 = *(undefined8 *)(param_1 + 4);
            local_a0 = param_1[6];
            piVar7 = (int *)FUN_1800ba9f0(local_78,&local_b8);
            local_a8 = *(undefined8 *)(piVar7 + 4);
            local_a0 = piVar7[6];
            local_88 = *(undefined8 *)(param_1 + 4);
            local_98 = *(undefined8 *)param_1;
            uStack_90 = *(undefined8 *)(param_1 + 2);
            iVar5 = 1;
            if (*piVar7 == 2) {
              iVar5 = piVar7[1];
            }
            local_80 = param_1[6];
            if (iVar5 <= iVar10) break;
            fVar11 = (float)FUN_18028afa0(&local_98,iVar10);
            fVar11 = (float)FUN_180637bd0(fVar13 - fVar11 * fVar17,param_1[5]);
            fVar15 = fVar15 + fVar11;
            iVar10 = iVar10 + 1;
          }
          fVar12 = (float)FUN_18028afa0(&local_98,param_2);
          fVar11 = fVar13;
          fVar13 = (float)FUN_180637bd0(fVar13 - fVar12 * fVar17,param_1[5]);
          fVar14 = fVar14 * (fVar13 / fVar15);
          local_e8 = fVar14;
        }
        pfVar9 = &local_c4;
        if (fVar16 <= fVar14) {
          pfVar9 = &local_e8;
        }
        local_c0[0] = fVar11;
        pfVar8 = local_c0;
        if (fVar14 <= fVar11) {
          pfVar8 = pfVar9;
        }
        local_c4 = fVar16;
        fVar15 = *pfVar8;
      }
      return fVar15;
    }
  }
  return 0.0;
}



