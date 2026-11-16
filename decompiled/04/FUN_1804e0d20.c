// FUN_1804e0d20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e0d20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804e0d20(longlong param_1,float *param_2,undefined8 param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float *pfVar4;
  longlong lVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined1 auVar8 [16];
  undefined4 *puVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  float *pfVar17;
  longlong lVar18;
  short sVar19;
  uint uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  uint local_d4;
  uint local_d0;
  int local_c8 [2];
  undefined4 *local_c0;
  undefined8 *local_b8;
  int local_b0;
  undefined4 *local_a8;
  undefined4 local_a0;
  ulonglong local_98;
  
  if ((param_4 & 0xff000000) == 0) {
    return;
  }
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  iVar15 = 0;
  uVar24 = **(undefined4 **)(param_1 + 0x38);
  uVar25 = (*(undefined4 **)(param_1 + 0x38))[1];
  local_b0 = 0;
  local_a0 = 0;
  local_d4 = param_4;
  if ((*(uint *)(param_1 + 0x30) & 0x1000) == 0) {
    FUN_1804d9590(param_1,0x12,8);
    **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)param_2;
    lVar18 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar18 + 8) = uVar24;
    *(undefined4 *)(lVar18 + 0xc) = uVar25;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 2);
    lVar18 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar18 + 8) = uVar24;
    *(undefined4 *)(lVar18 + 0xc) = uVar25;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 4);
    lVar18 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar18 + 8) = uVar24;
    *(undefined4 *)(lVar18 + 0xc) = uVar25;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 6);
    lVar18 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar18 + 8) = uVar24;
    *(undefined4 *)(lVar18 + 0xc) = uVar25;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 8);
    lVar18 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar18 + 8) = uVar24;
    *(undefined4 *)(lVar18 + 0xc) = uVar25;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 10);
    lVar18 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar18 + 8) = uVar24;
    *(undefined4 *)(lVar18 + 0xc) = uVar25;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0xc);
    lVar18 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar18 + 8) = uVar24;
    *(undefined4 *)(lVar18 + 0xc) = uVar25;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    **(undefined8 **)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0xe);
    lVar18 = *(longlong *)(param_1 + 0x40);
    *(undefined4 *)(lVar18 + 8) = uVar24;
    *(undefined4 *)(lVar18 + 0xc) = uVar25;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    FUN_1804ec010(*(longlong *)(param_1 + 0x38) + 0x50,0x31);
    local_c8[0] = 6;
    local_c0 = *(undefined4 **)(*(longlong *)(param_1 + 0x38) + 0x58);
    local_b8 = (undefined8 *)(local_c0 + 0x40);
    local_a8 = local_c0 + 0x50;
    FUN_1804e05e0(local_c8,param_2);
    FUN_1804e0820(local_c8);
    FUN_1804e0a80(local_c8);
    puVar3 = local_c0;
    while (0 < local_c8[0]) {
      local_c0 = puVar3;
      if (local_b0 == 0) {
        puVar6 = *(undefined4 **)(puVar3 + 4);
        *(undefined4 **)(puVar3 + 4) = puVar3;
        *(undefined4 **)(puVar3 + 6) = puVar3;
        while (puVar9 = puVar6, puVar9 != puVar3) {
          puVar6 = *(undefined4 **)(puVar9 + 4);
          *(undefined4 **)(puVar9 + 4) = local_c0;
          *(undefined4 **)(local_c0 + 6) = puVar9;
          *(undefined4 **)(puVar3 + 4) = puVar9;
          *(undefined4 **)(puVar9 + 6) = puVar3;
          local_c0 = puVar9;
        }
        puVar3 = local_c0;
        for (iVar15 = local_c8[0]; -1 < iVar15; iVar15 = iVar15 + -1) {
          *puVar3 = 0;
          puVar3 = *(undefined4 **)(puVar3 + 4);
        }
        local_a0 = 0;
        FUN_1804e0820(local_c8);
        FUN_1804e0a80(local_c8);
        if (local_b0 == 0) {
          local_b0 = 1;
          *local_b8 = local_c0;
        }
      }
      puVar3 = (undefined4 *)local_b8[(longlong)local_b0 + -1];
      uVar24 = puVar3[1];
      uVar25 = *(undefined4 *)(*(longlong *)(puVar3 + 6) + 4);
      uVar14 = *(undefined4 *)(*(longlong *)(puVar3 + 4) + 4);
      *(longlong *)(*(longlong *)(puVar3 + 4) + 0x18) = *(longlong *)(puVar3 + 6);
      *(undefined8 *)(*(longlong *)(puVar3 + 6) + 0x10) = *(undefined8 *)(puVar3 + 4);
      if (puVar3 == local_c0) {
        local_c0 = *(undefined4 **)(puVar3 + 4);
      }
      local_b0 = local_b0 + -1;
      FUN_1804e0b50(local_c8,*(undefined8 *)(puVar3 + 6));
      FUN_1804e0b50(local_c8,*(undefined8 *)(puVar3 + 4));
      local_c8[0] = local_c8[0] + -1;
      **(short **)(param_1 + 0x48) = (short)uVar25 + *(short *)(param_1 + 0x34);
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = (short)uVar24 + *(short *)(param_1 + 0x34);
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = (short)uVar14 + *(short *)(param_1 + 0x34);
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      puVar3 = local_c0;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 8;
  }
  else {
    fVar23 = *(float *)(param_1 + 0xe0);
    local_d0 = param_4 & 0xffffff;
    FUN_1804d9590(param_1,0x42,0x10);
    uVar14 = *(undefined4 *)(param_1 + 0x34);
    local_d8 = uVar14;
    FUN_1804ec010(*(longlong *)(param_1 + 0x38) + 0x50,0x31);
    local_c8[0] = 6;
    local_c0 = *(undefined4 **)(*(longlong *)(param_1 + 0x38) + 0x58);
    local_b8 = (undefined8 *)(local_c0 + 0x40);
    local_a8 = local_c0 + 0x50;
    FUN_1804e05e0(local_c8,param_2);
    FUN_1804e0820(local_c8);
    FUN_1804e0a80(local_c8);
    uVar20 = param_4 & 0xffffff;
    if (0 < local_c8[0]) {
      do {
        if (local_b0 == 0) {
          puVar3 = *(undefined4 **)(local_c0 + 4);
          *(undefined4 **)(local_c0 + 4) = local_c0;
          *(undefined4 **)(local_c0 + 6) = local_c0;
          puVar6 = local_c0;
          while (puVar9 = puVar3, puVar9 != local_c0) {
            puVar3 = *(undefined4 **)(puVar9 + 4);
            *(undefined4 **)(puVar9 + 4) = puVar6;
            *(undefined4 **)(puVar6 + 6) = puVar9;
            *(undefined4 **)(local_c0 + 4) = puVar9;
            *(undefined4 **)(puVar9 + 6) = local_c0;
            puVar6 = puVar9;
          }
          puVar3 = puVar6;
          for (iVar16 = local_c8[0]; -1 < iVar16; iVar16 = iVar16 + -1) {
            *puVar3 = 0;
            puVar3 = *(undefined4 **)(puVar3 + 4);
          }
          local_a0 = 0;
          local_c0 = puVar6;
          FUN_1804e0820(local_c8);
          FUN_1804e0a80(local_c8);
          if (local_b0 == 0) {
            local_b0 = 1;
            *local_b8 = local_c0;
          }
        }
        puVar3 = (undefined4 *)local_b8[(longlong)local_b0 + -1];
        uVar14 = puVar3[1];
        uVar1 = *(undefined4 *)(*(longlong *)(puVar3 + 6) + 4);
        uVar2 = *(undefined4 *)(*(longlong *)(puVar3 + 4) + 4);
        *(longlong *)(*(longlong *)(puVar3 + 4) + 0x18) = *(longlong *)(puVar3 + 6);
        *(undefined8 *)(*(longlong *)(puVar3 + 6) + 0x10) = *(undefined8 *)(puVar3 + 4);
        if (puVar3 == local_c0) {
          local_c0 = *(undefined4 **)(puVar3 + 4);
        }
        local_b0 = local_b0 + -1;
        FUN_1804e0b50(local_c8,*(undefined8 *)(puVar3 + 6));
        FUN_1804e0b50(local_c8,*(undefined8 *)(puVar3 + 4));
        sVar13 = (short)local_d8;
        **(short **)(param_1 + 0x48) = (short)uVar1 * 2 + sVar13;
        local_c8[0] = local_c8[0] + -1;
        *(short *)(*(longlong *)(param_1 + 0x48) + 2) = (short)uVar14 * 2 + sVar13;
        *(short *)(*(longlong *)(param_1 + 0x48) + 4) = (short)uVar2 * 2 + sVar13;
        *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
      } while (0 < local_c8[0]);
      uVar20 = local_d0;
      param_4 = local_d4;
      uVar14 = local_d8;
    }
    FUN_1804ec010(*(longlong *)(param_1 + 0x38) + 0x50,8);
    fVar22 = *param_2 - param_2[0xe];
    fVar21 = param_2[1] - param_2[0xf];
    fVar7 = fVar21 * fVar21 + fVar22 * fVar22;
    pfVar4 = *(float **)(*(longlong *)(param_1 + 0x38) + 0x58);
    if (0.0 < fVar7) {
      auVar8 = vrsqrtss_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar22 = fVar22 * auVar8._0_4_;
      fVar21 = fVar21 * auVar8._0_4_;
    }
    pfVar4[0xe] = fVar21;
    pfVar4[0xf] = -fVar22;
    fVar22 = param_2[2] - *param_2;
    fVar21 = param_2[3] - param_2[1];
    fVar7 = fVar21 * fVar21 + fVar22 * fVar22;
    if (0.0 < fVar7) {
      auVar8 = vrsqrtss_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar22 = fVar22 * auVar8._0_4_;
      fVar21 = fVar21 * auVar8._0_4_;
    }
    *pfVar4 = fVar21;
    pfVar4[1] = -fVar22;
    fVar22 = param_2[4] - param_2[2];
    fVar21 = param_2[5] - param_2[3];
    fVar7 = fVar21 * fVar21 + fVar22 * fVar22;
    if (0.0 < fVar7) {
      auVar8 = vrsqrtss_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar22 = fVar22 * auVar8._0_4_;
      fVar21 = fVar21 * auVar8._0_4_;
    }
    pfVar4[2] = fVar21;
    pfVar4[3] = -fVar22;
    fVar22 = param_2[6] - param_2[4];
    fVar21 = param_2[7] - param_2[5];
    fVar7 = fVar21 * fVar21 + fVar22 * fVar22;
    if (0.0 < fVar7) {
      auVar8 = vrsqrtss_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar22 = fVar22 * auVar8._0_4_;
      fVar21 = fVar21 * auVar8._0_4_;
    }
    pfVar4[4] = fVar21;
    pfVar4[5] = -fVar22;
    fVar22 = param_2[8] - param_2[6];
    fVar21 = param_2[9] - param_2[7];
    fVar7 = fVar21 * fVar21 + fVar22 * fVar22;
    if (0.0 < fVar7) {
      auVar8 = vrsqrtss_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar22 = fVar22 * auVar8._0_4_;
      fVar21 = fVar21 * auVar8._0_4_;
    }
    pfVar4[6] = fVar21;
    pfVar4[7] = -fVar22;
    fVar22 = param_2[10] - param_2[8];
    fVar21 = param_2[0xb] - param_2[9];
    fVar7 = fVar21 * fVar21 + fVar22 * fVar22;
    if (0.0 < fVar7) {
      auVar8 = vrsqrtss_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar22 = fVar22 * auVar8._0_4_;
      fVar21 = fVar21 * auVar8._0_4_;
    }
    pfVar4[8] = fVar21;
    pfVar4[9] = -fVar22;
    fVar22 = param_2[0xc] - param_2[10];
    fVar21 = param_2[0xd] - param_2[0xb];
    fVar7 = fVar21 * fVar21 + fVar22 * fVar22;
    if (0.0 < fVar7) {
      auVar8 = vrsqrtss_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar22 = fVar22 * auVar8._0_4_;
      fVar21 = fVar21 * auVar8._0_4_;
    }
    pfVar4[10] = fVar21;
    pfVar4[0xb] = -fVar22;
    fVar21 = param_2[0xf] - param_2[0xd];
    fVar22 = param_2[0xe] - param_2[0xc];
    fVar7 = fVar21 * fVar21 + fVar22 * fVar22;
    if (0.0 < fVar7) {
      auVar8 = vrsqrtss_avx(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar22 = fVar22 * auVar8._0_4_;
      fVar21 = fVar21 * auVar8._0_4_;
    }
    pfVar4[0xc] = fVar21;
    pfVar17 = param_2 + 3;
    fVar23 = fVar23 * 0.5;
    lVar18 = (longlong)pfVar4 - (longlong)param_2;
    iVar16 = 7;
    pfVar4[0xd] = -fVar22;
    do {
      sVar13 = (short)uVar14;
      fVar22 = (*(float *)(lVar18 + -0xc + (longlong)pfVar17) + pfVar4[(longlong)iVar16 * 2]) * 0.5;
      fVar21 = (pfVar4[(longlong)iVar16 * 2 + 1] + *(float *)((longlong)pfVar17 + lVar18 + -8)) *
               0.5;
      fVar7 = fVar21 * fVar21 + fVar22 * fVar22;
      if (1e-06 < fVar7) {
        auVar8 = vminss_avx(SUB6416(ZEXT464(0x42c80000),0),ZEXT416((uint)(1.0 / fVar7)));
        fVar22 = fVar22 * auVar8._0_4_;
        fVar21 = fVar21 * auVar8._0_4_;
      }
      **(float **)(param_1 + 0x40) = pfVar17[-3] - fVar23 * fVar22;
      sVar11 = (short)iVar15 * 2;
      sVar10 = (short)iVar16 * 2;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) = pfVar17[-2] - fVar23 * fVar21;
      lVar5 = *(longlong *)(param_1 + 0x40);
      sVar19 = sVar11 + sVar13;
      *(undefined4 *)(lVar5 + 8) = uVar24;
      *(undefined4 *)(lVar5 + 0xc) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = fVar23 * fVar22 + pfVar17[-3];
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) = fVar23 * fVar21 + pfVar17[-2];
      lVar5 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar5 + 0x1c) = uVar24;
      *(undefined4 *)(lVar5 + 0x20) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar20;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
      **(short **)(param_1 + 0x48) = sVar19;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar13 + sVar10;
      sVar10 = sVar10 + sVar13 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar10;
      *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar10;
      sVar11 = sVar11 + sVar13 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar11;
      *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar19;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
      fVar22 = (*(float *)((longlong)pfVar17 + lVar18 + -4) +
               *(float *)(lVar18 + -0xc + (longlong)pfVar17)) * 0.5;
      fVar21 = (*(float *)((longlong)pfVar17 + lVar18 + -8) + *(float *)((longlong)pfVar17 + lVar18)
               ) * 0.5;
      fVar7 = fVar21 * fVar21 + fVar22 * fVar22;
      if (1e-06 < fVar7) {
        auVar8 = vminss_avx(SUB6416(ZEXT464(0x42c80000),0),ZEXT416((uint)(1.0 / fVar7)));
        fVar22 = fVar22 * auVar8._0_4_;
        fVar21 = fVar21 * auVar8._0_4_;
      }
      sVar10 = ((short)iVar15 + 1) * 2;
      **(float **)(param_1 + 0x40) = pfVar17[-1] - fVar23 * fVar22;
      sVar12 = sVar13 + sVar10;
      *(float *)(*(longlong *)(param_1 + 0x40) + 4) = *pfVar17 - fVar23 * fVar21;
      lVar5 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar5 + 8) = uVar24;
      *(undefined4 *)(lVar5 + 0xc) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = param_4;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x14) = fVar23 * fVar22 + pfVar17[-1];
      fVar7 = *pfVar17;
      pfVar17 = pfVar17 + 4;
      *(float *)(*(longlong *)(param_1 + 0x40) + 0x18) = fVar23 * fVar21 + fVar7;
      lVar5 = *(longlong *)(param_1 + 0x40);
      *(undefined4 *)(lVar5 + 0x1c) = uVar24;
      *(undefined4 *)(lVar5 + 0x20) = uVar25;
      *(uint *)(*(longlong *)(param_1 + 0x40) + 0x24) = uVar20;
      *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x28;
      **(short **)(param_1 + 0x48) = sVar12;
      *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar19;
      *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar11;
      *(short *)(*(longlong *)(param_1 + 0x48) + 6) = sVar11;
      iVar16 = iVar15 + 1;
      iVar15 = iVar15 + 2;
      *(short *)(*(longlong *)(param_1 + 0x48) + 8) = sVar10 + sVar13 + 1;
      *(short *)(*(longlong *)(param_1 + 0x48) + 10) = sVar12;
      *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 0xc;
    } while (iVar15 < 8);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 0x10;
  }
}



