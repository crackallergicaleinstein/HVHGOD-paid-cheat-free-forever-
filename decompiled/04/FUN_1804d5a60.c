// FUN_1804d5a60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d5a60 */

void FUN_1804d5a60(longlong param_1,longlong param_2,int param_3,longlong *param_4,float param_5)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  float *pfVar7;
  longlong lVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  float fVar23;
  
  if (param_4 != (longlong *)0x0) {
    auVar22 = ZEXT464((uint)(param_5 + 1.0));
    do {
      fVar21 = *(float *)((longlong)param_4 + 0xc);
      fVar15 = *(float *)(param_4 + 1);
      auVar16 = ZEXT464((uint)fVar15);
      fVar10 = auVar22._0_4_;
      if (fVar21 == 0.0) {
        if (fVar15 < (float)param_3) {
          if (fVar15 < 0.0) {
            FUN_1804d5920(param_2 + -4,0,param_4,fVar15,param_5,fVar15,fVar10);
          }
          else {
            FUN_1804d5920(param_1,(int)fVar15,param_4,fVar15,param_5,fVar15,fVar10);
            FUN_1804d5920(param_2 + -4);
          }
        }
      }
      else {
        fVar14 = *(float *)(param_4 + 3);
        fVar13 = *(float *)(param_4 + 2);
        fVar19 = fVar21 + fVar15;
        fVar18 = param_5;
        fVar20 = fVar15;
        if (param_5 < fVar14) {
          fVar18 = fVar14;
          fVar20 = (fVar14 - param_5) * fVar21 + fVar15;
        }
        fVar14 = *(float *)((longlong)param_4 + 0x1c);
        fVar17 = fVar19;
        fVar11 = fVar10;
        if (fVar14 < fVar10) {
          fVar17 = (fVar14 - param_5) * fVar21 + fVar15;
          fVar11 = fVar14;
        }
        if ((((fVar20 < 0.0) || (fVar17 < 0.0)) || ((float)param_3 <= fVar20)) ||
           ((float)param_3 <= fVar17)) {
          iVar6 = 0;
          if (0 < param_3) {
            do {
              fVar18 = (float)iVar6;
              fVar13 = auVar16._0_4_;
              fVar10 = (fVar18 - fVar13) / fVar21;
              fVar14 = (float)(iVar6 + 1);
              fVar15 = (fVar14 - fVar13) / fVar21 + param_5;
              uVar12 = auVar16._0_8_;
              if ((fVar18 <= fVar13) || (fVar19 <= fVar14)) {
                if ((fVar18 <= fVar19) || (fVar13 <= fVar14)) {
                  if (((fVar13 < fVar18) && (fVar18 < fVar19)) ||
                     ((fVar19 < fVar18 && (fVar18 < fVar13)))) {
                    FUN_1804d5920(param_1,fVar10,param_4,uVar12,param_5,fVar18,fVar10 + param_5);
                  }
                  else if (((fVar13 < fVar14) && (fVar14 < fVar19)) ||
                          ((fVar19 < fVar14 && (fVar14 < fVar13)))) {
                    FUN_1804d5920(param_1,fVar10,param_4,uVar12,param_5,fVar14,fVar15);
                  }
                }
                else {
                  FUN_1804d5920(param_1,fVar10,param_4,uVar12,param_5,fVar14,fVar15);
                  FUN_1804d5920();
                }
              }
              else {
                FUN_1804d5920(param_1,fVar10,param_4,uVar12,param_5,fVar18,fVar10 + param_5);
                FUN_1804d5920();
              }
              FUN_1804d5920(param_1);
              iVar6 = iVar6 + 1;
            } while (iVar6 < param_3);
          }
        }
        else {
          iVar6 = (int)fVar20;
          if (iVar6 == (int)fVar17) {
            lVar4 = (longlong)iVar6;
            fVar21 = (fVar11 - fVar18) * *(float *)((longlong)param_4 + 0x14);
            *(float *)(param_1 + lVar4 * 4) =
                 ((((float)iVar6 + 1.0) - fVar17) + (((float)iVar6 + 1.0) - fVar20)) * 0.5 * fVar21
                 + *(float *)(param_1 + lVar4 * 4);
            *(float *)(param_2 + lVar4 * 4) = fVar21 + *(float *)(param_2 + lVar4 * 4);
          }
          else {
            fVar14 = fVar20;
            fVar21 = fVar11;
            if (fVar17 < fVar20) {
              fVar13 = -fVar13;
              fVar21 = fVar10 - (fVar18 - param_5);
              fVar18 = fVar10 - (fVar11 - param_5);
              fVar15 = fVar19;
              fVar14 = fVar17;
              fVar17 = fVar20;
            }
            fVar19 = *(float *)((longlong)param_4 + 0x14);
            iVar6 = (int)fVar14;
            iVar9 = (int)fVar17;
            fVar23 = (float)iVar9;
            fVar20 = (fVar23 - fVar15) * fVar13 + param_5;
            fVar11 = (float)(iVar6 + 1);
            auVar2 = vminss_avx(auVar22._0_16_,ZEXT416((uint)((fVar11 - fVar15) * fVar13 + param_5))
                               );
            fVar15 = (auVar2._0_4_ - fVar18) * fVar19;
            *(float *)(param_1 + (longlong)iVar6 * 4) =
                 (fVar11 - fVar14) * fVar15 * 0.5 + *(float *)(param_1 + (longlong)iVar6 * 4);
            if ((fVar10 < fVar20) && (iVar3 = (iVar9 - iVar6) + -1, fVar20 = fVar10, iVar3 != 0)) {
              fVar13 = (fVar10 - auVar2._0_4_) / (float)iVar3;
            }
            lVar4 = (longlong)(iVar6 + 1);
            lVar8 = (longlong)iVar9;
            fVar13 = fVar19 * fVar13;
            if (lVar4 < lVar8) {
              fVar10 = fVar13 * 0.5;
              if (3 < lVar8 - lVar4) {
                lVar1 = lVar4 * 4;
                lVar5 = ((lVar8 - lVar4) - 4U >> 2) + 1;
                lVar4 = lVar4 + lVar5 * 4;
                pfVar7 = (float *)(param_1 + 8 + lVar1);
                do {
                  pfVar7[-2] = fVar10 + fVar15 + pfVar7[-2];
                  pfVar7[-1] = fVar15 + fVar13 + fVar10 + pfVar7[-1];
                  fVar14 = fVar15 + fVar13 + fVar13;
                  fVar15 = fVar14 + fVar13;
                  *pfVar7 = fVar14 + fVar10 + *pfVar7;
                  pfVar7[1] = fVar15 + fVar10 + pfVar7[1];
                  fVar15 = fVar15 + fVar13;
                  lVar5 = lVar5 + -1;
                  pfVar7 = pfVar7 + 4;
                } while (lVar5 != 0);
              }
              for (; lVar4 < lVar8; lVar4 = lVar4 + 1) {
                *(float *)(param_1 + lVar4 * 4) = fVar10 + fVar15 + *(float *)(param_1 + lVar4 * 4);
                fVar15 = fVar15 + fVar13;
              }
            }
            lVar4 = (longlong)iVar9;
            *(float *)(param_1 + lVar4 * 4) =
                 (((fVar23 + 1.0) - fVar23) + ((fVar23 + 1.0) - fVar17)) * 0.5 * (fVar21 - fVar20) *
                 fVar19 + fVar15 + *(float *)(param_1 + lVar4 * 4);
            *(float *)(param_2 + lVar4 * 4) =
                 (fVar21 - fVar18) * fVar19 + *(float *)(param_2 + lVar4 * 4);
          }
        }
      }
      param_4 = (longlong *)*param_4;
    } while (param_4 != (longlong *)0x0);
  }
  return;
}



