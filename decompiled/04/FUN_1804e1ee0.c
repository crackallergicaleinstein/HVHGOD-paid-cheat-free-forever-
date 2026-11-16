// FUN_1804e1ee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e1ee0 */

void FUN_1804e1ee0(longlong param_1,int param_2,int param_3,undefined8 param_4,undefined8 param_5,
                  uint param_6,uint param_7)

{
  float *pfVar1;
  float *pfVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8;
  float fStackX_c;
  
  local_res8 = (float)param_4;
  pfVar2 = (float *)(*(longlong *)(param_1 + 0x28) + (longlong)param_3 * 0x14);
  uVar10 = param_6 & 0xff;
  uVar8 = param_6 >> 0x10 & 0xff;
  uVar9 = param_6 >> 8 & 0xff;
  fStackX_c = (float)((ulonglong)param_4 >> 0x20);
  iVar11 = (param_7 & 0xff) - uVar10;
  param_5._4_4_ = param_5._4_4_ - fStackX_c;
  param_5._0_4_ = (float)param_5 - local_res8;
  pfVar6 = (float *)(*(longlong *)(param_1 + 0x28) + (longlong)param_2 * 0x14);
  iVar7 = (param_7 >> 8 & 0xff) - uVar9;
  fVar16 = 1.0 / (param_5._4_4_ * param_5._4_4_ + (float)param_5 * (float)param_5);
  if (pfVar6 < pfVar2) {
    fVar15 = (float)(int)((param_7 >> 0x10 & 0xff) - uVar8);
    fVar13 = 0.0;
    auVar14 = SUB6416(ZEXT464(0x3f800000),0);
    if (0x4f < (ulonglong)((longlong)pfVar2 + (0x13 - (longlong)pfVar6))) {
      fVar12 = (float)uVar10;
      fVar17 = (float)uVar8;
      fVar18 = (float)iVar7;
      fVar19 = (float)uVar9;
      fVar20 = (float)iVar11;
      do {
        fVar4 = ((pfVar6[1] - fStackX_c) * param_5._4_4_ + (*pfVar6 - local_res8) * (float)param_5)
                * fVar16;
        fVar5 = fVar13;
        if (0.0 <= fVar4) {
          auVar3 = vminss_avx(auVar14,ZEXT416((uint)fVar4));
          fVar5 = auVar3._0_4_;
        }
        pfVar6[4] = (float)((uint)pfVar6[4] & 0xff000000);
        pfVar6[4] = (float)((uint)pfVar6[4] |
                           ((int)(fVar15 * fVar5 + fVar17) << 8 | (int)(fVar18 * fVar5 + fVar19)) <<
                           8 | (int)(fVar20 * fVar5 + fVar12));
        fVar4 = ((pfVar6[5] - local_res8) * (float)param_5 + (pfVar6[6] - fStackX_c) * param_5._4_4_
                ) * fVar16;
        fVar5 = fVar13;
        if (0.0 <= fVar4) {
          auVar3 = vminss_avx(auVar14,ZEXT416((uint)fVar4));
          fVar5 = auVar3._0_4_;
        }
        pfVar6[9] = (float)((uint)pfVar6[9] & 0xff000000);
        pfVar6[9] = (float)((uint)pfVar6[9] |
                           ((int)(fVar15 * fVar5 + fVar17) << 8 | (int)(fVar18 * fVar5 + fVar19)) <<
                           8 | (int)(fVar20 * fVar5 + fVar12));
        fVar4 = ((pfVar6[10] - local_res8) * (float)param_5 +
                (pfVar6[0xb] - fStackX_c) * param_5._4_4_) * fVar16;
        fVar5 = fVar13;
        if (0.0 <= fVar4) {
          auVar3 = vminss_avx(auVar14,ZEXT416((uint)fVar4));
          fVar5 = auVar3._0_4_;
        }
        pfVar6[0xe] = (float)((uint)pfVar6[0xe] & 0xff000000);
        pfVar6[0xe] = (float)((uint)pfVar6[0xe] |
                             ((int)(fVar15 * fVar5 + fVar17) << 8 | (int)(fVar18 * fVar5 + fVar19))
                             << 8 | (int)(fVar20 * fVar5 + fVar12));
        fVar4 = ((pfVar6[0xf] - local_res8) * (float)param_5 +
                (pfVar6[0x10] - fStackX_c) * param_5._4_4_) * fVar16;
        fVar5 = fVar13;
        if (0.0 <= fVar4) {
          auVar3 = vminss_avx(auVar14,ZEXT416((uint)fVar4));
          fVar5 = auVar3._0_4_;
        }
        pfVar6[0x13] = (float)((uint)pfVar6[0x13] & 0xff000000);
        pfVar6[0x13] = (float)((uint)pfVar6[0x13] |
                              ((int)(fVar15 * fVar5 + fVar17) << 8 | (int)(fVar18 * fVar5 + fVar19))
                              << 8 | (int)(fVar20 * fVar5 + fVar12));
        pfVar6 = pfVar6 + 0x14;
      } while (pfVar6 < pfVar2 + -0xf);
      if (pfVar2 <= pfVar6) {
        return;
      }
    }
    pfVar6 = pfVar6 + 4;
    do {
      fVar12 = ((pfVar6[-4] - local_res8) * (float)param_5 +
               (pfVar6[-3] - fStackX_c) * param_5._4_4_) * fVar16;
      fVar17 = fVar13;
      if (0.0 <= fVar12) {
        auVar3 = vminss_avx(auVar14,ZEXT416((uint)fVar12));
        fVar17 = auVar3._0_4_;
      }
      *pfVar6 = (float)((uint)*pfVar6 & 0xff000000);
      *pfVar6 = (float)((uint)*pfVar6 |
                       ((int)(fVar15 * fVar17 + (float)uVar8) << 8 |
                       (int)((float)iVar7 * fVar17 + (float)uVar9)) << 8 |
                       (int)((float)iVar11 * fVar17 + (float)uVar10));
      pfVar1 = pfVar6 + 1;
      pfVar6 = pfVar6 + 5;
    } while (pfVar1 < pfVar2);
  }
  return;
}



