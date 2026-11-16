// FUN_18026bb00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026bb00 */

undefined8 *
FUN_18026bb00(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             float param_5,uint param_6)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  int iVar3;
  short sVar4;
  byte bVar5;
  float *pfVar6;
  int iVar7;
  byte bVar8;
  bool bVar9;
  float fVar10;
  undefined1 in_XMM3 [16];
  float fVar11;
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  undefined1 auVar17 [64];
  undefined8 uVar18;
  undefined1 auVar19 [64];
  uint uVar20;
  float fVar21;
  undefined4 uStack_c4;
  
  auVar17 = ZEXT1664(in_XMM3);
  sVar4 = thunk_FUN_180624430(param_3);
  if (sVar4 < 1) {
    auVar14 = ZEXT864(0);
    if (((((0.0 <= (float)param_3) && (fVar10 = 1.0, (float)param_3 <= 1.0)) &&
         (sVar4 = thunk_FUN_180624430(auVar17._0_8_), sVar4 < 1)) &&
        ((auVar14._0_4_ < auVar17._0_4_ &&
         (fVar13 = param_5, sVar4 = thunk_FUN_180624430(param_5), sVar4 < 1)))) &&
       (auVar14._0_4_ < fVar13)) {
      auVar19 = ZEXT464(param_6);
      sVar4 = thunk_FUN_180624430(param_6);
      fVar13 = (float)param_3;
      uVar18 = auVar19._0_8_;
      if (((sVar4 < 1) && (auVar14._0_4_ < auVar19._0_4_)) && (auVar19._0_4_ <= fVar10)) {
        bVar8 = 0;
        pfVar6 = (float *)*param_2;
        iVar7 = 0;
        bVar9 = param_2[1] == 0;
        fVar15 = 0.0;
        pfVar1 = pfVar6 + param_2[1] * 6;
        fVar16 = fVar15;
        if (pfVar6 != pfVar1) {
          uVar20 = 0x7fffffff;
          fVar21 = 1e-06;
          do {
            uVar18 = auVar19._0_8_;
            fVar13 = (float)param_3;
            fVar16 = fVar15;
            if (fVar13 <= fVar15) break;
            fVar11 = *pfVar6;
            sVar4 = thunk_FUN_180624430(fVar11);
            fVar13 = (float)param_3;
            uVar18 = auVar19._0_8_;
            if ((((0 < sVar4) || (fVar11 < auVar14._0_4_)) || (fVar10 < fVar11)) ||
               (fVar21 < (float)((uint)(fVar11 - fVar15) & uVar20))) goto LAB_18026bd96;
            fVar16 = fVar15;
            if (fVar13 <= fVar11) break;
            fVar13 = pfVar6[1];
            sVar4 = thunk_FUN_180624430(fVar13);
            if (((0 < sVar4) || (fVar13 < fVar11)) || (fVar10 < fVar13)) goto LAB_18026bd96;
            auVar12 = ZEXT464((uint)pfVar6[2]);
            fVar16 = fVar15;
            fVar15 = fVar13;
            sVar4 = thunk_FUN_180624430(pfVar6[2]);
            fVar13 = (float)param_3;
            uVar18 = auVar19._0_8_;
            if (0 < sVar4) goto LAB_18026bd96;
            bVar5 = *(byte *)(pfVar6 + 5) & 1;
            if (fVar13 <= fVar15) {
              if (bVar5 != 0) goto LAB_18026bd96;
              goto LAB_18026bd2e;
            }
            if (auVar12._0_4_ <= auVar14._0_4_) goto LAB_18026bd96;
            bVar9 = fVar13 <= fVar15;
            bVar8 = bVar8 | bVar5;
            auVar17 = ZEXT1664(auVar12._0_16_);
            iVar3 = iVar7 + 1;
            if (bVar5 == 0) {
              iVar3 = iVar7;
            }
            iVar7 = iVar3;
            pfVar6 = pfVar6 + 6;
            fVar16 = fVar15;
          } while (pfVar6 != pfVar1);
        }
        if ((bVar9) || (fVar13 <= fVar16)) {
LAB_18026bd2e:
          if ((float)uVar18 != fVar10) {
            auVar2 = vmaxss_avx(auVar14._0_16_,ZEXT416((uint)(fVar13 - fVar16)));
            fVar10 = (float)FUN_180637bd0(uVar18,(auVar2._0_4_ * param_5) / 500.0);
            auVar17 = ZEXT464((uint)(auVar17._0_4_ * fVar10));
          }
          sVar4 = thunk_FUN_180624430(auVar17._0_8_);
          if ((sVar4 < 1) && (auVar14._0_4_ < auVar17._0_4_)) {
            uStack_c4 = CONCAT31(uStack_c4._1_3_,bVar8);
            *param_1 = CONCAT44(uStack_c4,auVar17._0_4_);
            *(int *)(param_1 + 1) = iVar7;
            *(undefined1 *)((longlong)param_1 + 0xc) = 1;
            return param_1;
          }
        }
      }
    }
  }
LAB_18026bd96:
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



