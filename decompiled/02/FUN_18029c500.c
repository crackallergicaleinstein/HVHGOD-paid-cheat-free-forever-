// FUN_18029c500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029c500 */

undefined8 *
FUN_18029c500(undefined8 *param_1,longlong *param_2,float param_3,undefined8 param_4,char param_5)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  float fVar14;
  undefined1 in_ZMM3 [64];
  float fVar15;
  
  uVar7 = 0;
  uVar11 = param_2[1];
  *param_1 = 0;
  uVar12 = 0x10;
  if (uVar11 < 0x10) {
    uVar12 = uVar11;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar10 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  auVar2 = vmaxss_avx(in_ZMM3._0_16_,ZEXT416(0x3f800000));
  fVar14 = 0.0;
  fVar15 = 0.0;
  if (uVar12 != 0) {
    lVar13 = *param_2;
    uVar6 = 0;
    do {
      if (((param_5 != '\0') && (0.0 < fVar14)) &&
         (auVar2._0_4_ < fVar14 + *(float *)(lVar13 + uVar6 * 4))) {
        fVar14 = 0.0;
        fVar15 = fVar15 + param_3;
      }
      uVar1 = *(undefined4 *)(lVar13 + uVar6 * 4);
      *(float *)(param_1 + uVar6 * 2) = fVar14;
      *(float *)((longlong)param_1 + uVar6 * 0x10 + 4) = fVar15;
      *(undefined4 *)(param_1 + uVar6 * 2 + 1) = uVar1;
      *(float *)((longlong)param_1 + uVar6 * 0x10 + 0xc) = param_3;
      lVar13 = *param_2;
      auVar3 = vmaxss_avx(ZEXT416((uint)(fVar14 + *(float *)(lVar13 + uVar6 * 4))),
                          ZEXT416(*(uint *)(param_1 + 0x20)));
      *(int *)(param_1 + 0x20) = auVar3._0_4_;
      *(float *)((longlong)param_1 + 0x104) = fVar15 + param_3;
      if (param_5 == '\0') {
        fVar15 = fVar15 + param_3;
      }
      else {
        fVar14 = fVar14 + *(float *)(lVar13 + uVar6 * 4) + 8.0;
      }
      uVar11 = param_2[1];
      uVar10 = uVar10 + 1;
      uVar6 = (ulonglong)uVar10;
      uVar5 = 0x10;
      if (uVar11 < 0x10) {
        uVar5 = uVar11;
      }
    } while (uVar6 < uVar5);
  }
  if ((param_5 != '\0') && (uVar12 != 0)) {
    uVar12 = 0x10;
    if (uVar11 < 0x10) {
      uVar12 = uVar11;
    }
    do {
      uVar10 = (uint)uVar7;
      uVar9 = uVar10 + 1;
      uVar11 = (ulonglong)uVar9;
      if (uVar11 < uVar12) {
        do {
          if (*(float *)((longlong)param_1 + uVar11 * 0x10 + 4) !=
              *(float *)((longlong)param_1 + uVar7 * 0x10 + 4)) break;
          uVar9 = uVar9 + 1;
          uVar11 = (ulonglong)uVar9;
        } while (uVar11 < uVar12);
      }
      fVar15 = *(float *)(param_1 + (ulonglong)(uVar9 - 1) * 2 + 1) +
               *(float *)(param_1 + (ulonglong)(uVar9 - 1) * 2);
      if (uVar10 < uVar9) {
        if (3 < uVar9 - uVar10) {
          lVar13 = uVar7 + 2;
          uVar4 = ((uVar9 - uVar10) - 4 >> 2) + 1;
          uVar11 = (ulonglong)uVar4;
          uVar10 = uVar10 + uVar4 * 4;
          uVar7 = uVar7 + (ulonglong)uVar4 * 4;
          pfVar8 = (float *)(param_1 + lVar13 * 2);
          do {
            pfVar8[-8] = (*(float *)(param_1 + 0x20) - fVar15) * 0.5 + pfVar8[-8];
            pfVar8[-4] = (*(float *)(param_1 + 0x20) - fVar15) * 0.5 + pfVar8[-4];
            *pfVar8 = (*(float *)(param_1 + 0x20) - fVar15) * 0.5 + *pfVar8;
            pfVar8[4] = (*(float *)(param_1 + 0x20) - fVar15) * 0.5 + pfVar8[4];
            uVar11 = uVar11 - 1;
            pfVar8 = pfVar8 + 0x10;
          } while (uVar11 != 0);
          if (uVar9 <= uVar10) goto LAB_18029c855;
        }
        uVar11 = (ulonglong)(uVar9 - uVar10);
        pfVar8 = (float *)(param_1 + uVar7 * 2);
        do {
          *pfVar8 = (*(float *)(param_1 + 0x20) - fVar15) * 0.5 + *pfVar8;
          uVar11 = uVar11 - 1;
          pfVar8 = pfVar8 + 4;
        } while (uVar11 != 0);
      }
LAB_18029c855:
      uVar7 = (ulonglong)uVar9;
    } while (uVar9 < uVar12);
  }
  return param_1;
}



