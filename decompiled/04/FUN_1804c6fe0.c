// FUN_1804c6fe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c6fe0 */

float * FUN_1804c6fe0(float *param_1,longlong param_2,float *param_3,ulonglong param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  uint uVar9;
  float *pfVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_res8;
  float local_resc;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  
  lVar8 = DAT_180bb8ae8;
  uVar11 = param_4 & 0xffffffff;
  fVar12 = *(float *)(param_2 + 0x230) + 1.0;
  fVar1 = *(float *)(param_2 + 0x234) + 1.0;
  auVar2 = vminss_avx(ZEXT416((uint)((*(float *)(param_2 + 0x228) - 1.0) +
                                    *(float *)(param_2 + 0x80))),ZEXT416((uint)fVar12));
  auVar3 = vminss_avx(ZEXT416((uint)((*(float *)(param_2 + 0x22c) - 1.0) +
                                    *(float *)(param_2 + 0x84))),ZEXT416((uint)fVar1));
  if (((param_4 & 0x15) == 0) && (*(char *)(param_2 + 200) != '\0')) {
    uVar11 = (ulonglong)((uint)param_4 | 1);
  }
  if ((uVar11 & 0x2a) == 0) {
    uVar9 = 2;
    if (*(char *)(param_2 + 0xd3) != '\0') {
      uVar9 = 0x20;
    }
    uVar11 = (ulonglong)((uint)uVar11 | uVar9);
  }
  fVar13 = auVar2._0_4_;
  if ((*param_3 < fVar13) || (fVar12 < param_3[2])) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  fVar14 = auVar3._0_4_;
  if ((param_3[1] < fVar14) || (fVar1 < param_3[3])) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((((param_3[2] - *param_3) +
        *(float *)(DAT_180bb8ae8 + 0xcd4) + *(float *)(DAT_180bb8ae8 + 0xcd4) <= fVar12 - fVar13) ||
      ('\0' < *(char *)(param_2 + 0xe8))) || ((*(byte *)(param_2 + 0x14) & 0x40) != 0)) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((((param_3[3] - param_3[1]) +
        *(float *)(DAT_180bb8ae8 + 0xcd8) + *(float *)(DAT_180bb8ae8 + 0xcd8) <= fVar1 - fVar14) ||
      ('\0' < *(char *)(param_2 + 0xe9))) || ((*(byte *)(param_2 + 0x14) & 0x40) != 0)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  if (((uVar11 & 1) == 0) || (bVar7)) {
    if ((((uVar11 & 4) != 0) && (!bVar7)) || ((uVar11 & 0x10) != 0)) {
      if (bVar4) {
        fVar12 = (float)(int)((param_3[2] + *param_3) * 0.5);
        *(undefined4 *)(param_2 + 0xb0) = 0x3f000000;
        goto LAB_1804c71d7;
      }
      fVar12 = *param_3;
      goto LAB_1804c71d1;
    }
  }
  else {
    if ((*param_3 < fVar13) || (!bVar4)) {
      fVar12 = *param_3 - *(float *)(DAT_180bb8ae8 + 0xcd4);
LAB_1804c71d1:
      *(undefined4 *)(param_2 + 0xb0) = 0;
    }
    else {
      if (param_3[2] < fVar12) goto LAB_1804c720b;
      fVar12 = param_3[2] + *(float *)(DAT_180bb8ae8 + 0xcd4);
      *(undefined4 *)(param_2 + 0xb0) = 0x3f800000;
    }
LAB_1804c71d7:
    *(float *)(param_2 + 0xa8) =
         (float)(int)((((fVar12 - *(float *)(param_2 + 0x28)) - *(float *)(param_2 + 0x70)) -
                      *(float *)(param_2 + 0x80)) + *(float *)(param_2 + 0x98));
    *(undefined4 *)(param_2 + 0xb8) = 0;
  }
LAB_1804c720b:
  if (((uVar11 & 2) == 0) || (bVar5)) {
    if ((((uVar11 & 8) == 0) || (bVar5)) && ((uVar11 & 0x20) == 0)) goto LAB_1804c72d7;
    if (!bVar6) {
      fVar12 = param_3[1];
      goto LAB_1804c729d;
    }
    fVar12 = (float)(int)((param_3[3] + param_3[1]) * 0.5);
    *(undefined4 *)(param_2 + 0xb4) = 0x3f000000;
  }
  else if ((param_3[1] < fVar14) || (!bVar6)) {
    fVar12 = param_3[1] - *(float *)(lVar8 + 0xcd8);
LAB_1804c729d:
    *(undefined4 *)(param_2 + 0xb4) = 0;
  }
  else {
    if (param_3[3] < fVar1) goto LAB_1804c72d7;
    fVar12 = param_3[3] + *(float *)(lVar8 + 0xcd8);
    *(undefined4 *)(param_2 + 0xb4) = 0x3f800000;
  }
  *(float *)(param_2 + 0xac) =
       (float)(int)((((fVar12 - *(float *)(param_2 + 0x2c)) - *(float *)(param_2 + 0x74)) -
                    *(float *)(param_2 + 0x84)) + *(float *)(param_2 + 0x9c));
  *(undefined4 *)(param_2 + 0xbc) = 0;
LAB_1804c72d7:
  FUN_1804c6df0(&local_res8);
  local_res8 = local_res8 - *(float *)(param_2 + 0x98);
  local_resc = local_resc - *(float *)(param_2 + 0x9c);
  param_1[1] = local_resc;
  *param_1 = local_res8;
  if (((uVar11 & 0x40) == 0) && ((*(uint *)(param_2 + 0x14) & 0x1000000) != 0)) {
    local_48 = *param_3 - local_res8;
    local_44 = param_3[1] - local_resc;
    local_40 = param_3[2] - local_res8;
    local_3c = param_3[3] - local_resc;
    pfVar10 = (float *)FUN_1804c6fe0(&local_res8,*(undefined8 *)(param_2 + 0x3c8),&local_48);
    fVar12 = *pfVar10;
    param_1[1] = pfVar10[1] + param_1[1];
    *param_1 = *param_1 + fVar12;
  }
  return param_1;
}



