// FUN_180504090 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180504090 */

void FUN_180504090(longlong param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int *piVar7;
  longlong lVar8;
  float fVar9;
  undefined1 auVar10 [16];
  
  if (param_2 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar6 = 0;
  if (iVar1 < 1) {
    return;
  }
  piVar7 = *(int **)(param_1 + 0x10);
  while (*piVar7 != param_2) {
    iVar6 = iVar6 + 1;
    piVar7 = piVar7 + 0xb;
    if (iVar1 <= iVar6) {
      return;
    }
  }
  lVar8 = (longlong)iVar6 * 0x2c + *(longlong *)(param_1 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  if ((*(uint *)(lVar8 + 4) & 0x40) == 0) {
    if (-1 < (char)*(uint *)(lVar8 + 4)) goto LAB_1805040fb;
    iVar6 = param_3[4] + *param_3;
  }
  else {
    iVar6 = *param_3;
  }
  lVar8 = (longlong)iVar6 * 0x2c + *(longlong *)(param_1 + 0x10);
LAB_1805040fb:
  if ((*(byte *)(lVar8 + 4) & 0xc0) == 0) {
    fVar3 = (*(float *)(param_1 + 0x70) - *(float *)(param_1 + 0x6c)) - *(float *)(lVar8 + 0x14);
    auVar10 = ZEXT416((uint)*(float *)(DAT_180bb8ae8 + 0xcdc));
    if (*(float *)(DAT_180bb8ae8 + 0xcdc) <= fVar3) {
      auVar10 = vminss_avx(ZEXT416(*(uint *)(DAT_180bb8ae8 + 0x11e0)),ZEXT416((uint)fVar3));
    }
    fVar3 = (((*(float *)(param_1 + 0x40) - *(float *)(param_1 + 0x38)) - (float)param_3[1]) -
            (float)param_3[9]) - (float)param_3[7];
    iVar6 = (int)((lVar8 - *(longlong *)(param_1 + 0x10)) / 0x2c);
    if (*param_3 + -1 < iVar6) {
      fVar9 = -auVar10._0_4_;
    }
    else {
      fVar9 = 0.0;
    }
    fVar4 = *(float *)(lVar8 + 0x10) - (float)param_3[1];
    fVar9 = fVar4 + fVar9;
    auVar2 = vpcmpgtd_avx(ZEXT416((uint)(iVar1 - param_3[8])),ZEXT416(iVar6 + 1));
    auVar10 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),auVar10,auVar2);
    fVar4 = auVar10._0_4_ + fVar4 + *(float *)(lVar8 + 0x14);
    *(undefined4 *)(param_1 + 100) = 0;
    if ((fVar9 < *(float *)(param_1 + 0x60)) || (fVar3 <= fVar4 - fVar9)) {
      fVar5 = *(float *)(param_1 + 0x5c) - fVar4;
      *(float *)(param_1 + 0x60) = fVar9;
    }
    else {
      if (fVar4 - fVar3 <= *(float *)(param_1 + 0x60)) {
        return;
      }
      fVar5 = (fVar9 - fVar3) - *(float *)(param_1 + 0x5c);
      *(float *)(param_1 + 0x60) = fVar4 - fVar3;
    }
    auVar10 = vmaxss_avx(ZEXT416((uint)fVar5),ZEXT816(0));
    *(int *)(param_1 + 100) = auVar10._0_4_;
  }
  return;
}



