// FUN_1804ddf00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ddf00 */

void FUN_1804ddf00(int *param_1,float *param_2,float *param_3,uint param_4,float param_5,
                  float param_6,uint param_7)

{
  undefined8 *puVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  undefined4 uVar12;
  uint uVar13;
  short sVar14;
  short sVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined2 uVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  short sVar24;
  ulonglong uVar25;
  longlong lVar26;
  float fVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  int local_res8 [2];
  float local_138 [2];
  float local_130;
  uint local_12c;
  int local_128;
  float local_120;
  undefined4 uStack_11c;
  int local_118;
  int local_114;
  uint *local_110;
  float local_108 [5];
  float local_f4;
  float local_f0;
  float local_ec;
  undefined8 *local_e8;
  longlong local_e0;
  
  fVar27 = param_6 * (float)param_1[0x39];
  fVar28 = param_6;
  if (fVar27 < 1.0) {
    if (fVar27 < 0.003921569) {
      return;
    }
    fVar28 = (float)param_1[0x38];
    param_4 = (int)(longlong)((float)(param_4 >> 0x18) * fVar27) << 0x18 | param_4 & 0xffffff;
    fVar27 = 1.0;
  }
  param_7 = param_7 | param_1[0xc];
  local_130 = 0.0;
  local_12c = 0;
  local_120 = 0.0;
  uStack_11c = 0;
  FUN_1804d9920(0,fVar27,&local_130,&local_120,local_138,param_7);
  uVar12 = FUN_1804d9380(param_1,param_5);
  FUN_1804dbba0(uVar12,&param_6,local_res8);
  iVar23 = local_res8[0] + 1;
  local_128 = iVar23 * 4 + 0xb;
  local_114 = (local_res8[0] + 4) * 0xc;
  local_118 = iVar23;
  FUN_1804d9590(param_1,local_114,local_128);
  local_e8 = *(undefined8 **)(param_1 + 0x10);
  fVar11 = local_138[0] * 0.5;
  local_e0 = *(longlong *)(param_1 + 0x12);
  fVar27 = *param_2;
  fVar30 = param_2[1];
  fVar3 = *param_3;
  fVar4 = param_3[1];
  iVar18 = param_1[0xd];
  fVar28 = fVar28 + local_138[0];
  param_5 = fVar11 + param_5;
  *(undefined4 *)local_e8 = 0;
  local_108[2] = fVar11 + fVar3;
  local_108[4] = fVar11 + fVar3;
  local_108[1] = fVar30 - fVar11;
  local_108[3] = fVar30 - fVar11;
  local_108[0] = fVar27 - fVar11;
  local_f0 = fVar27 - fVar11;
  auVar10 = vminss_avx(ZEXT416((uint)param_5),ZEXT416((uint)fVar28));
  local_f4 = fVar11 + fVar4;
  local_ec = fVar11 + fVar4;
  fVar30 = auVar10._0_4_;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4) = 0;
  fVar27 = (fVar30 / fVar28) * (local_120 - local_130) + local_130;
  *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 8) = CONCAT44(uStack_11c,local_120);
  auVar10 = vunpcklps_avx(ZEXT416((uint)local_130),ZEXT416(local_12c));
  local_res8[0] = 0;
  local_110 = &DAT_18085b900;
  *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
  param_1[0xd] = param_1[0xd] + 1;
  **(undefined4 **)(param_1 + 0x10) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4) = 0;
  lVar26 = *(longlong *)(param_1 + 0x10);
  *(float *)(lVar26 + 8) = fVar27;
  *(uint *)(lVar26 + 0xc) = local_12c;
  *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
  param_1[0xd] = param_1[0xd] + 1;
  **(undefined4 **)(param_1 + 0x10) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 4) = 0;
  uVar29 = auVar10._0_8_;
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar29;
  *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
  *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
  param_1[0xd] = param_1[0xd] + 1;
  lVar26 = 0;
  do {
    fVar3 = *(float *)((longlong)&DAT_18085b910 + lVar26);
    fVar4 = *(float *)((longlong)&DAT_18085b914 + lVar26);
    fVar11 = *(float *)((longlong)local_108 + lVar26);
    fVar5 = *(float *)((longlong)local_108 + lVar26 + 4);
    uVar6 = *local_110;
    iVar17 = param_1[0xd];
    if ((param_7 & uVar6) == 0) {
      **(float **)(param_1 + 0x10) = fVar11;
      *(float *)(*(longlong *)(param_1 + 0x10) + 4) = fVar5;
      *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar29;
      *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
      *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
      param_1[0xd] = param_1[0xd] + 1;
      iVar21 = param_1[0xd];
      pfVar16 = *(float **)(param_1 + 0x10);
    }
    else {
      iVar22 = 0;
      fVar8 = fVar3 * param_5 + fVar11;
      fVar9 = fVar4 * param_5 + fVar5;
      if (iVar23 < 4) {
        pfVar16 = *(float **)(param_1 + 0x10);
        iVar19 = local_res8[0];
      }
      else {
        uVar13 = (iVar23 - 4U >> 2) + 1;
        uVar25 = (ulonglong)uVar13;
        iVar22 = uVar13 * 4;
        iVar19 = local_res8[0];
        do {
          **(float **)(param_1 + 0x10) =
               fVar8 - param_5 * *(float *)(*(longlong *)(param_1 + 0xe) + 0x78 +
                                           (longlong)iVar19 * 8);
          *(float *)(*(longlong *)(param_1 + 0x10) + 4) =
               fVar9 - param_5 * *(float *)(*(longlong *)(param_1 + 0xe) + 0x7c +
                                           (longlong)iVar19 * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar29;
          *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
          param_1[0xd] = param_1[0xd] + 1;
          iVar23 = (iVar19 + (int)param_6) % 0x30;
          **(float **)(param_1 + 0x10) =
               fVar8 - param_5 * *(float *)(*(longlong *)(param_1 + 0xe) + 0x78 +
                                           (longlong)iVar23 * 8);
          *(float *)(*(longlong *)(param_1 + 0x10) + 4) =
               fVar9 - param_5 * *(float *)(*(longlong *)(param_1 + 0xe) + 0x7c +
                                           (longlong)iVar23 * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar29;
          *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
          param_1[0xd] = param_1[0xd] + 1;
          iVar23 = (iVar23 + (int)param_6) % 0x30;
          **(float **)(param_1 + 0x10) =
               fVar8 - param_5 * *(float *)(*(longlong *)(param_1 + 0xe) + 0x78 +
                                           (longlong)iVar23 * 8);
          *(float *)(*(longlong *)(param_1 + 0x10) + 4) =
               fVar9 - param_5 * *(float *)(*(longlong *)(param_1 + 0xe) + 0x7c +
                                           (longlong)iVar23 * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar29;
          *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
          *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
          param_1[0xd] = param_1[0xd] + 1;
          iVar23 = (iVar23 + (int)param_6) % 0x30;
          **(float **)(param_1 + 0x10) =
               fVar8 - param_5 * *(float *)(*(longlong *)(param_1 + 0xe) + 0x78 +
                                           (longlong)iVar23 * 8);
          *(float *)(*(longlong *)(param_1 + 0x10) + 4) =
               fVar9 - param_5 * *(float *)(*(longlong *)(param_1 + 0xe) + 0x7c +
                                           (longlong)iVar23 * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar29;
          *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
          param_1[0xd] = param_1[0xd] + 1;
          pfVar16 = (float *)(*(longlong *)(param_1 + 0x10) + 0x14);
          *(float **)(param_1 + 0x10) = pfVar16;
          iVar19 = (iVar23 + (int)param_6) % 0x30;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
        iVar23 = local_118;
      }
      iVar21 = iVar17;
      if (iVar22 < iVar23) {
        uVar25 = (ulonglong)(uint)(iVar23 - iVar22);
        do {
          **(float **)(param_1 + 0x10) =
               fVar8 - param_5 * *(float *)(*(longlong *)(param_1 + 0xe) + 0x78 +
                                           (longlong)iVar19 * 8);
          *(float *)(*(longlong *)(param_1 + 0x10) + 4) =
               fVar9 - param_5 * *(float *)(*(longlong *)(param_1 + 0xe) + 0x7c +
                                           (longlong)iVar19 * 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 8) = uVar29;
          *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
          pfVar16 = (float *)(*(longlong *)(param_1 + 0x10) + 0x14);
          iVar21 = param_1[0xd] + 1;
          *(float **)(param_1 + 0x10) = pfVar16;
          param_1[0xd] = iVar21;
          iVar19 = (iVar19 + (int)param_6) % 0x30;
          uVar25 = uVar25 - 1;
        } while (uVar25 != 0);
      }
    }
    *pfVar16 = fVar3 * fVar30 + fVar11;
    *(float *)(*(longlong *)(param_1 + 0x10) + 4) = fVar4 * fVar30 + fVar5;
    lVar7 = *(longlong *)(param_1 + 0x10);
    *(float *)(lVar7 + 8) = fVar27;
    *(uint *)(lVar7 + 0xc) = local_12c;
    *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
    param_1[0xd] = param_1[0xd] + 1;
    iVar22 = param_1[0xd];
    **(float **)(param_1 + 0x10) = fVar3 * fVar28 + fVar11;
    *(float *)(*(longlong *)(param_1 + 0x10) + 4) = fVar4 * fVar28 + fVar5;
    *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 8) = CONCAT44(uStack_11c,local_120);
    *(uint *)(*(longlong *)(param_1 + 0x10) + 0x10) = param_4;
    *(longlong *)(param_1 + 0x10) = *(longlong *)(param_1 + 0x10) + 0x14;
    param_1[0xd] = param_1[0xd] + 1;
    uVar20 = (undefined2)iVar21;
    sVar24 = (short)iVar17;
    if ((param_7 & uVar6) != 0) {
      iVar17 = 0;
      if (0 < iVar23 + -1) {
        do {
          sVar14 = sVar24 + (short)iVar17;
          iVar17 = iVar17 + 1;
          **(undefined2 **)(param_1 + 0x12) = uVar20;
          *(short *)(*(longlong *)(param_1 + 0x12) + 2) = sVar14;
          *(short *)(*(longlong *)(param_1 + 0x12) + 4) = sVar14 + 1;
          *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
        } while (iVar17 < iVar23 + -1);
      }
    }
    sVar14 = (short)iVar18;
    sVar15 = sVar14 + 1;
    local_res8[0] = local_res8[0] + 0xc;
    lVar26 = lVar26 + 8;
    **(short **)(param_1 + 0x12) = sVar14;
    *(short *)(*(longlong *)(param_1 + 0x12) + 2) = sVar24;
    *(undefined2 *)(*(longlong *)(param_1 + 0x12) + 4) = uVar20;
    *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
    **(short **)(param_1 + 0x12) = sVar14;
    *(undefined2 *)(*(longlong *)(param_1 + 0x12) + 2) = uVar20;
    *(short *)(*(longlong *)(param_1 + 0x12) + 4) = sVar15;
    *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
    **(short **)(param_1 + 0x12) = sVar15;
    *(undefined2 *)(*(longlong *)(param_1 + 0x12) + 2) = uVar20;
    *(short *)(*(longlong *)(param_1 + 0x12) + 4) = (short)iVar22;
    *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
    **(short **)(param_1 + 0x12) = sVar15;
    local_110 = local_110 + 1;
    *(short *)(*(longlong *)(param_1 + 0x12) + 2) = (short)iVar22;
    *(short *)(*(longlong *)(param_1 + 0x12) + 4) = sVar14 + 2;
    iVar18 = iVar21 + -1;
    *(longlong *)(param_1 + 0x12) = *(longlong *)(param_1 + 0x12) + 6;
  } while (local_res8[0] < 0x30);
  iVar23 = param_1[0x20];
  lVar26 = *(longlong *)(param_1 + 10);
  puVar1 = (undefined8 *)(lVar26 + (ulonglong)(uint)(iVar23 + iVar18) * 0x14);
  uVar29 = puVar1[1];
  *local_e8 = *puVar1;
  local_e8[1] = uVar29;
  *(undefined4 *)(local_e8 + 2) =
       *(undefined4 *)(lVar26 + 0x10 + (ulonglong)(uint)(iVar23 + iVar18) * 0x14);
  lVar26 = *(longlong *)(param_1 + 10);
  uVar25 = (ulonglong)(uint)(param_1[0x20] + 1 + iVar18);
  puVar1 = (undefined8 *)(lVar26 + uVar25 * 0x14);
  uVar29 = puVar1[1];
  *(undefined8 *)((longlong)local_e8 + 0x14) = *puVar1;
  *(undefined8 *)((longlong)local_e8 + 0x1c) = uVar29;
  *(undefined4 *)((longlong)local_e8 + 0x24) = *(undefined4 *)(lVar26 + 0x10 + uVar25 * 0x14);
  lVar26 = *(longlong *)(param_1 + 10);
  uVar25 = (ulonglong)(uint)(param_1[0x20] + 2 + iVar18);
  puVar1 = (undefined8 *)(lVar26 + uVar25 * 0x14);
  uVar29 = puVar1[1];
  local_e8[5] = *puVar1;
  local_e8[6] = uVar29;
  *(undefined4 *)(local_e8 + 7) = *(undefined4 *)(lVar26 + 0x10 + uVar25 * 0x14);
  iVar18 = (int)((*(longlong *)(param_1 + 0x10) - (longlong)local_e8) / 0x14);
  iVar23 = (int)(*(longlong *)(param_1 + 0x12) - local_e0 >> 1);
  if ((iVar23 < local_114) || (iVar18 < local_128)) {
    local_114 = local_114 - iVar23;
    piVar2 = (int *)(*(longlong *)(param_1 + 2) + -0x20 + (longlong)*param_1 * 0x48);
    *piVar2 = *piVar2 - local_114;
    param_1[8] = param_1[8] + (iVar18 - local_128);
    param_1[4] = param_1[4] - local_114;
  }
  return;
}



