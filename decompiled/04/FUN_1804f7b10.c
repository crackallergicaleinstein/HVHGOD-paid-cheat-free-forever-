// FUN_1804f7b10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f7b10 */

void FUN_1804f7b10(longlong param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  
  uVar11 = (ulonglong)param_2;
  auVar21 = ZEXT1664(in_ZMM3._0_16_);
  fVar20 = in_ZMM3._0_4_;
  auVar19 = ZEXT1664(in_ZMM2._0_16_);
  if (param_2 == 1) {
    if (0.0 <= *(float *)(param_1 + 4)) {
      auVar22 = vmaxss_avx(ZEXT416((uint)(*(float *)(param_1 + 4) - in_ZMM2._0_4_)),in_ZMM3._0_16_);
      *(int *)(param_1 + 4) = auVar22._0_4_;
    }
  }
  else {
    if (1 < uVar11) {
      FUN_1806192c0(param_1,uVar11,0xc);
      fVar20 = auVar21._0_4_;
    }
    iVar12 = 1;
    if (0.001 < auVar19._0_4_) {
      lVar8 = 1;
      do {
        if (param_2 <= iVar12) break;
        pfVar7 = (float *)(param_1 + (lVar8 * 3 + 1) * 4);
        do {
          if (*pfVar7 < *(float *)(param_1 + 4)) break;
          iVar12 = iVar12 + 1;
          lVar8 = lVar8 + 1;
          pfVar7 = pfVar7 + 3;
        } while (lVar8 < (longlong)uVar11);
        if ((param_2 <= iVar12) || (fVar1 = *(float *)(param_1 + 4 + lVar8 * 0xc), fVar1 < 0.0)) {
          fVar15 = *(float *)(param_1 + 4);
          fVar1 = fVar15 - 1.0;
        }
        else {
          fVar15 = *(float *)(param_1 + 4);
          fVar1 = fVar15 - fVar1;
        }
        auVar22 = vminss_avx(ZEXT416((uint)(fVar15 - fVar20)),ZEXT416((uint)fVar1));
        if (auVar22._0_4_ <= 0.0) break;
        lVar10 = 0;
        auVar16._0_4_ = auVar19._0_4_ / (float)iVar12;
        auVar16._4_12_ = auVar19._4_12_;
        auVar22 = vminss_avx(auVar16,auVar22);
        if (3 < lVar8) {
          lVar9 = (lVar8 - 4U >> 2) + 1;
          lVar10 = lVar9 * 4;
          pfVar7 = (float *)(param_1 + 0x10);
          do {
            auVar16 = vminss_avx(auVar22,ZEXT416((uint)(pfVar7[-3] - fVar20)));
            pfVar7[-3] = pfVar7[-3] - auVar16._0_4_;
            auVar4 = vminss_avx(auVar22,ZEXT416((uint)(*pfVar7 - fVar20)));
            *pfVar7 = *pfVar7 - auVar4._0_4_;
            auVar5 = vminss_avx(auVar22,ZEXT416((uint)(pfVar7[3] - fVar20)));
            pfVar7[3] = pfVar7[3] - auVar5._0_4_;
            auVar6 = vminss_avx(auVar22,ZEXT416((uint)(pfVar7[6] - fVar20)));
            pfVar7[6] = pfVar7[6] - auVar6._0_4_;
            auVar19 = ZEXT464((uint)((((auVar19._0_4_ - auVar16._0_4_) - auVar4._0_4_) -
                                     auVar5._0_4_) - auVar6._0_4_));
            lVar9 = lVar9 + -1;
            pfVar7 = pfVar7 + 0xc;
          } while (lVar9 != 0);
        }
        if (lVar10 < lVar8) {
          lVar9 = lVar8 - lVar10;
          pfVar7 = (float *)(param_1 + (lVar10 * 3 + 1) * 4);
          do {
            auVar16 = vminss_avx(auVar22,ZEXT416((uint)(*pfVar7 - fVar20)));
            *pfVar7 = *pfVar7 - auVar16._0_4_;
            auVar19 = ZEXT464((uint)(auVar19._0_4_ - auVar16._0_4_));
            lVar9 = lVar9 + -1;
            pfVar7 = pfVar7 + 3;
          } while (lVar9 != 0);
        }
      } while (0.001 < auVar19._0_4_);
    }
    lVar8 = 0;
    fVar20 = 0.0;
    if (3 < (longlong)uVar11) {
      lVar10 = (uVar11 - 4 >> 2) + 1;
      lVar8 = lVar10 * 4;
      pfVar7 = (float *)(param_1 + 0x10);
      do {
        fVar1 = pfVar7[-3];
        fVar15 = *pfVar7;
        fVar2 = pfVar7[3];
        fVar3 = pfVar7[6];
        fVar13 = (float)(int)fVar1;
        fVar14 = (float)(int)fVar15;
        pfVar7[-3] = fVar13;
        *pfVar7 = fVar14;
        fVar17 = (float)(int)fVar2;
        pfVar7[3] = fVar17;
        fVar18 = (float)(int)fVar3;
        pfVar7[6] = fVar18;
        fVar20 = (fVar1 - fVar13) + fVar20 + (fVar15 - fVar14) + (fVar2 - fVar17) + (fVar3 - fVar18)
        ;
        lVar10 = lVar10 + -1;
        pfVar7 = pfVar7 + 0xc;
      } while (lVar10 != 0);
    }
    if (lVar8 < (longlong)uVar11) {
      lVar10 = uVar11 - lVar8;
      pfVar7 = (float *)(param_1 + (lVar8 * 3 + 1) * 4);
      do {
        fVar1 = *pfVar7;
        fVar15 = (float)(int)fVar1;
        *pfVar7 = fVar15;
        fVar20 = fVar20 + (fVar1 - fVar15);
        lVar10 = lVar10 + -1;
        pfVar7 = pfVar7 + 3;
      } while (lVar10 != 0);
    }
    while (0.0 < fVar20) {
      lVar8 = 0;
      auVar22 = SUB6416(ZEXT464(0x3f800000),0);
      if (3 < (longlong)uVar11) {
        pfVar7 = (float *)(param_1 + 4);
        do {
          if (fVar20 <= 0.0) {
            return;
          }
          auVar16 = vminss_avx(ZEXT416((uint)(pfVar7[1] - *pfVar7)),auVar22);
          fVar20 = fVar20 - auVar16._0_4_;
          *pfVar7 = auVar16._0_4_ + *pfVar7;
          if (fVar20 <= 0.0) {
            return;
          }
          auVar16 = vminss_avx(ZEXT416((uint)(pfVar7[4] - pfVar7[3])),auVar22);
          fVar20 = fVar20 - auVar16._0_4_;
          pfVar7[3] = auVar16._0_4_ + pfVar7[3];
          if (fVar20 <= 0.0) {
            return;
          }
          auVar16 = vminss_avx(ZEXT416((uint)(pfVar7[7] - pfVar7[6])),auVar22);
          fVar20 = fVar20 - auVar16._0_4_;
          pfVar7[6] = auVar16._0_4_ + pfVar7[6];
          if (fVar20 <= 0.0) {
            return;
          }
          auVar16 = vminss_avx(ZEXT416((uint)(pfVar7[10] - pfVar7[9])),auVar22);
          pfVar7[9] = auVar16._0_4_ + pfVar7[9];
          pfVar7 = pfVar7 + 0xc;
          lVar8 = lVar8 + 4;
          fVar20 = fVar20 - auVar16._0_4_;
        } while (lVar8 < (longlong)(uVar11 - 3));
      }
      if (lVar8 < (longlong)uVar11) {
        pfVar7 = (float *)(param_1 + (lVar8 * 3 + 1) * 4);
        do {
          if (fVar20 <= 0.0) {
            return;
          }
          auVar16 = vminss_avx(ZEXT416((uint)(pfVar7[1] - *pfVar7)),auVar22);
          *pfVar7 = auVar16._0_4_ + *pfVar7;
          pfVar7 = pfVar7 + 3;
          lVar8 = lVar8 + 1;
          fVar20 = fVar20 - auVar16._0_4_;
        } while (lVar8 < (longlong)uVar11);
      }
    }
  }
  return;
}



