// FUN_1804dc7e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dc7e0 */

void FUN_1804dc7e0(longlong param_1,float *param_2,float *param_3,ulonglong param_4,float param_5,
                  uint param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  uint uVar5;
  short sVar6;
  float *pfVar7;
  short sVar8;
  undefined8 uVar9;
  uint uVar10;
  short sVar11;
  int iVar12;
  undefined8 uVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float local_res20 [2];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  
  uVar10 = (uint)param_4;
  if ((param_4 & 0xff000000) == 0) {
    return;
  }
  fVar18 = *(float *)(param_1 + 0xe4);
  fVar24 = fVar18 * param_5;
  if (fVar24 < 1.0) {
    if (fVar24 < 0.003921569) {
      return;
    }
    param_5 = *(float *)(param_1 + 0xe0);
    uVar10 = (int)(longlong)((float)(param_4 >> 0x18 & 0xff) * fVar24) << 0x18 | uVar10 & 0xffffff;
    fVar24 = 1.0;
  }
  param_6 = param_6 | *(uint *)(param_1 + 0x30);
  fVar15 = 0.0;
  local_e0 = 0;
  uStack_dc = 0;
  local_d8 = 0;
  uStack_d4 = 0;
  FUN_1804d9920(param_1,fVar24,&local_e0,&local_d8,local_res20,param_6);
  fVar23 = param_3[1] - param_2[1];
  fVar22 = *param_3 - *param_2;
  fVar19 = 0.5;
  fVar24 = fVar23 * fVar23 + fVar22 * fVar22;
  if (fVar15 < fVar24) {
    auVar4 = vrsqrtss_avx(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
    fVar15 = auVar4._0_4_;
    fVar15 = (1.5 - fVar24 * 0.5 * fVar15 * fVar15) * fVar15;
  }
  uVar14 = uVar10 & 0xffffff;
  fVar23 = fVar23 * fVar15;
  fVar24 = -fVar23;
  fVar22 = fVar22 * fVar15;
  uVar5 = param_6 & 0xe0000;
  if (uVar5 != 0) {
    if (uVar5 != 0xe0000) {
      fVar15 = (local_res20[0] + param_5) * 0.5;
      if (uVar5 == 0x80000) {
        fVar15 = local_res20[0] * 0.5 + param_5;
      }
      else if (uVar5 == 0x60000) {
        uVar5 = (uint)(fVar18 * param_5);
        fVar15 = ((fVar18 * param_5 - (float)(int)uVar5) * (float)(uVar5 & 1) +
                 (float)((int)uVar5 / 2)) * *(float *)(param_1 + 0xe0) + local_res20[0] * 0.5;
      }
      else if (uVar5 == 0x20000) {
        fVar15 = local_res20[0] * 0.5;
      }
      goto LAB_1804dc96c;
    }
    param_6 = param_6 & 0xffffbfff;
  }
  fVar15 = (param_5 + local_res20[0]) * 0.5;
LAB_1804dc96c:
  fVar18 = param_5 + local_res20[0];
  local_res20[0] = *(float *)(param_1 + 0xe0) * 0.5;
  uVar5 = param_6 & 0x6000;
  uVar13 = 4;
  if (uVar5 == 0x6000) {
    uVar13 = 8;
  }
  uVar9 = 6;
  if (uVar5 == 0x6000) {
    uVar9 = 0x12;
  }
  FUN_1804d9590(param_1,uVar9,uVar13);
  fVar16 = *param_2;
  fVar17 = param_2[1];
  fVar20 = *param_3;
  fVar21 = param_3[1];
  if ((param_6 >> 0xb & 1) != 0) {
    fVar2 = param_5 * fVar19 * fVar22;
    fVar19 = param_5 * fVar19 * fVar23;
    fVar16 = fVar16 - fVar2;
    fVar17 = fVar17 - fVar19;
    fVar20 = fVar20 + fVar2;
    fVar21 = fVar21 + fVar19;
  }
  sVar8 = (short)*(undefined4 *)(param_1 + 0x34);
  fVar19 = (fVar18 - fVar15) * fVar22;
  fVar2 = fVar15 * fVar22;
  fVar3 = fVar15 * fVar24;
  fVar24 = (fVar18 - fVar15) * fVar24;
  if (uVar5 == 0x6000) {
    fVar22 = fVar22 * local_res20[0];
    fVar23 = fVar23 * local_res20[0];
    uVar13 = CONCAT44(uStack_dc,local_e0);
    uVar9 = CONCAT44(uStack_d4,local_d8);
    **(float **)(param_1 + 0x40) = (fVar16 - fVar22) - fVar3;
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = (fVar17 - fVar23) - fVar2;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar13;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    pfVar7 = (float *)(*(longlong *)(param_1 + 0x40) + 0x14);
    *(float **)(param_1 + 0x40) = pfVar7;
    *pfVar7 = fVar24 + (fVar16 - fVar22);
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar19 + (fVar17 - fVar23);
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar9;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar14;
    iVar1 = *(int *)(param_1 + 0x34);
    pfVar7 = (float *)(*(longlong *)(param_1 + 0x40) + 0x14);
    *(float **)(param_1 + 0x40) = pfVar7;
    iVar12 = iVar1 + 1;
    *(int *)(param_1 + 0x34) = iVar12;
    *pfVar7 = (fVar22 + fVar16) - fVar3;
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = (fVar23 + fVar17) - fVar2;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar13;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar10;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    pfVar7 = (float *)(*(longlong *)(param_1 + 0x40) + 0x14);
    *(float **)(param_1 + 0x40) = pfVar7;
    *pfVar7 = fVar24 + fVar22 + fVar16;
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar19 + fVar23 + fVar17;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar9;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar10;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    **(short **)(param_1 + 0x48) = sVar8;
    *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar8 + 2;
    *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar8 + 3;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
    **(short **)(param_1 + 0x48) = sVar8;
    *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar8 + 3;
    *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar8 + 1;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
    sVar6 = (short)iVar1;
    sVar8 = (short)*(undefined4 *)(param_1 + 0x34);
    **(float **)(param_1 + 0x40) = (fVar20 - fVar22) - fVar3;
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = (fVar21 - fVar23) - fVar2;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar13;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar10;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    **(float **)(param_1 + 0x40) = fVar24 + (fVar20 - fVar22);
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar19 + (fVar21 - fVar23);
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar9;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar10;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    **(float **)(param_1 + 0x40) = (fVar22 + fVar20) - fVar3;
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = (fVar23 + fVar21) - fVar2;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar13;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar14;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    **(float **)(param_1 + 0x40) = fVar24 + fVar22 + fVar20;
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar19 + fVar23 + fVar21;
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 8) = uVar9;
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar14;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    sVar11 = (short)iVar12;
    **(short **)(param_1 + 0x48) = sVar11;
    *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar6 + 3;
    sVar6 = sVar6 + 4;
    *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar6;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
    **(short **)(param_1 + 0x48) = sVar11;
    *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar6;
    *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar11 + 1;
    *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
  }
  else {
    **(float **)(param_1 + 0x40) = fVar16 - fVar3;
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar17 - fVar2;
    *(ulonglong *)(*(longlong *)(param_1 + 0x40) + 8) = CONCAT44(uStack_dc,local_e0);
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar10;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    pfVar7 = (float *)(*(longlong *)(param_1 + 0x40) + 0x14);
    *(float **)(param_1 + 0x40) = pfVar7;
    *pfVar7 = fVar24 + fVar16;
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar19 + fVar17;
    *(ulonglong *)(*(longlong *)(param_1 + 0x40) + 8) = CONCAT44(uStack_d4,local_d8);
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar10;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    pfVar7 = (float *)(*(longlong *)(param_1 + 0x40) + 0x14);
    *(float **)(param_1 + 0x40) = pfVar7;
    *pfVar7 = fVar20 - fVar3;
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar21 - fVar2;
    *(ulonglong *)(*(longlong *)(param_1 + 0x40) + 8) = CONCAT44(uStack_dc,local_e0);
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar10;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    pfVar7 = (float *)(*(longlong *)(param_1 + 0x40) + 0x14);
    *(float **)(param_1 + 0x40) = pfVar7;
    *pfVar7 = fVar24 + fVar20;
    *(float *)(*(longlong *)(param_1 + 0x40) + 4) = fVar19 + fVar21;
    *(ulonglong *)(*(longlong *)(param_1 + 0x40) + 8) = CONCAT44(uStack_d4,local_d8);
    *(uint *)(*(longlong *)(param_1 + 0x40) + 0x10) = uVar10;
    *(longlong *)(param_1 + 0x40) = *(longlong *)(param_1 + 0x40) + 0x14;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
  }
  **(short **)(param_1 + 0x48) = sVar8;
  *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar8 + 2;
  *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar8 + 3;
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
  **(short **)(param_1 + 0x48) = sVar8;
  *(short *)(*(longlong *)(param_1 + 0x48) + 2) = sVar8 + 3;
  *(short *)(*(longlong *)(param_1 + 0x48) + 4) = sVar8 + 1;
  *(longlong *)(param_1 + 0x48) = *(longlong *)(param_1 + 0x48) + 6;
  return;
}



