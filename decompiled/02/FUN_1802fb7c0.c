// FUN_1802fb7c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802fb7c0 */

undefined8
FUN_1802fb7c0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,uint param_5,
             float param_6,int param_7)

{
  short sVar1;
  int *piVar2;
  double *pdVar3;
  int *piVar4;
  double *pdVar5;
  double dVar6;
  double dVar7;
  undefined1 auVar8 [16];
  undefined1 in_ZMM2 [64];
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [64];
  double dVar13;
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  int local_98 [2];
  double local_90 [18];
  
  auVar14 = ZEXT1664(in_ZMM2._0_16_);
  sVar1 = thunk_FUN_180624430();
  fVar10 = 0.0;
  if (sVar1 < 1) {
    sVar1 = thunk_FUN_180624430(param_2);
    fVar16 = (float)param_2;
    if ((sVar1 < 1) && (sVar1 = thunk_FUN_180624430(auVar14._0_8_), sVar1 < 1)) {
      sVar1 = thunk_FUN_180624430(param_4);
      fVar15 = (float)param_4;
      if (sVar1 < 1) {
        auVar12 = ZEXT464(param_5);
        sVar1 = thunk_FUN_180624430(param_5);
        if (((((sVar1 < 1) && (sVar1 = thunk_FUN_180624430(param_6), sVar1 < 1)) &&
             (fVar10 < param_1)) && ((fVar10 < fVar16 && (fVar10 < auVar14._0_4_)))) &&
           ((fVar10 < fVar15 && ((fVar10 < auVar12._0_4_ && (fVar10 < param_6)))))) {
          auVar8 = vminss_avx(auVar12._0_16_,auVar14._0_16_);
          auVar11._0_8_ = (double)auVar8._0_4_;
          auVar11._8_8_ = auVar8._8_8_;
          dVar13 = 1.0;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (double)auVar14._0_4_ * (double)fVar15 * (double)param_6 * (double)fVar16;
          auVar8 = vminsd_avx(auVar8,auVar11);
          auVar14 = ZEXT1664(ZEXT816(0));
          dVar7 = 0.0;
          local_98[1] = 200;
          piVar4 = local_98;
          if (0x18 < param_7) {
            piVar4 = &param_7;
          }
          local_98[0] = 0x19;
          piVar2 = local_98 + 1;
          if (param_7 < 0xc9) {
            piVar2 = piVar4;
          }
          local_90[2] = 1.0;
          local_90[0] = 0.0;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = auVar11._0_8_ * auVar11._0_8_ -
                         ((double)*piVar2 / 200.0) * auVar8._0_8_ *
                         ((auVar11._0_8_ + auVar11._0_8_) - auVar8._0_8_);
          auVar8 = vmaxsd_avx(auVar9,ZEXT816(0));
          dVar6 = auVar8._0_8_;
          if (dVar6 < 0.0) {
            dVar13 = 1.0;
            dVar6 = (double)FUN_18061e090(dVar6);
            dVar7 = auVar14._0_8_;
          }
          else {
            dVar6 = SQRT(dVar6);
          }
          local_90[1] = dVar6 / (double)param_1;
          pdVar5 = local_90;
          if (dVar7 <= local_90[1]) {
            pdVar5 = local_90 + 1;
          }
          pdVar3 = local_90 + 2;
          if (local_90[1] <= dVar13) {
            pdVar3 = pdVar5;
          }
          dVar7 = (double)FUN_180636560(*pdVar3);
          dVar7 = (dVar7 * 180.0) / 3.141592653589793;
          return CONCAT44((int)((ulonglong)dVar7 >> 0x20),(float)dVar7);
        }
      }
    }
  }
  return 0;
}



