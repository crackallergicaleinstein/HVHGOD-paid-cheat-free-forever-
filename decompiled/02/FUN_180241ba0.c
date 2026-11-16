// FUN_180241ba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180241ba0 */

undefined8
FUN_180241ba0(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 *param_5)

{
  undefined1 auVar1 [16];
  short sVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  fVar16 = *param_1;
  sVar2 = thunk_FUN_180624430(fVar16);
  if (sVar2 < 1) {
    fVar8 = param_1[1];
    sVar2 = thunk_FUN_180624430(fVar8);
    if (sVar2 < 1) {
      fVar7 = param_1[2];
      sVar2 = thunk_FUN_180624430(fVar7);
      if (sVar2 < 1) {
        fVar17 = *param_2;
        sVar2 = thunk_FUN_180624430(fVar17);
        if (((sVar2 < 1) && (sVar2 = thunk_FUN_180624430(param_2[1]), sVar2 < 1)) &&
           (sVar2 = thunk_FUN_180624430(param_2[2]), sVar2 < 1)) {
          fVar12 = *param_3;
          sVar2 = thunk_FUN_180624430(fVar12);
          if (sVar2 < 1) {
            fVar15 = param_3[1];
            sVar2 = thunk_FUN_180624430(fVar15);
            if (sVar2 < 1) {
              fVar13 = param_3[2];
              sVar2 = thunk_FUN_180624430(fVar13);
              if (sVar2 < 1) {
                fVar10 = *param_4;
                sVar2 = thunk_FUN_180624430(fVar10);
                if (sVar2 < 1) {
                  fVar14 = param_4[1];
                  sVar2 = thunk_FUN_180624430(fVar14);
                  if (sVar2 < 1) {
                    fVar9 = param_4[2];
                    sVar2 = thunk_FUN_180624430(fVar9);
                    if (((sVar2 < 1) && (fVar12 <= fVar10)) &&
                       ((fVar15 <= fVar14 && (fVar13 <= fVar9)))) {
                      auVar1 = ZEXT816(0);
                      if (1e-08 <= ABS(fVar17)) {
                        auVar4 = ZEXT416((uint)((fVar10 - fVar16) / *param_2));
                        auVar5 = ZEXT416((uint)((fVar12 - fVar16) / *param_2));
                        auVar11 = vcmpss_avx(auVar4,auVar5,1);
                        auVar11 = vblendvps_avx(auVar5,auVar4,auVar11);
                        auVar1 = vmaxss_avx(auVar11,auVar1);
                        auVar11 = vcmpss_avx(auVar4,auVar5,1);
                        auVar11 = vblendvps_avx(auVar4,auVar5,auVar11);
                        auVar11 = vminss_avx(auVar11,ZEXT416(0x3f800000));
                        if (auVar11._0_4_ < auVar1._0_4_) {
                          return 0;
                        }
                      }
                      else {
                        if (fVar16 < fVar12) {
                          return 0;
                        }
                        if (fVar10 < fVar16) {
                          return 0;
                        }
                        auVar11 = SUB6416(ZEXT464(0x3f800000),0);
                      }
                      fVar16 = param_2[1];
                      if (1e-08 <= ABS(fVar16)) {
                        auVar6 = ZEXT416((uint)((fVar15 - fVar8) / fVar16));
                        auVar5 = ZEXT416((uint)((fVar14 - fVar8) / fVar16));
                        auVar4 = vcmpss_avx(auVar5,auVar6,1);
                        auVar4 = vblendvps_avx(auVar6,auVar5,auVar4);
                        auVar1 = vmaxss_avx(auVar4,auVar1);
                        auVar4 = vcmpss_avx(auVar5,auVar6,1);
                        auVar4 = vblendvps_avx(auVar5,auVar6,auVar4);
                        auVar11 = vminss_avx(auVar4,auVar11);
                        if (auVar11._0_4_ < auVar1._0_4_) {
                          return 0;
                        }
                      }
                      else {
                        if (fVar8 < fVar15) {
                          return 0;
                        }
                        if (fVar14 < fVar8) {
                          return 0;
                        }
                      }
                      fVar16 = param_2[2];
                      if (1e-08 <= ABS(fVar16)) {
                        auVar6 = ZEXT416((uint)((fVar13 - fVar7) / fVar16));
                        auVar5 = ZEXT416((uint)((fVar9 - fVar7) / fVar16));
                        auVar4 = vcmpss_avx(auVar5,auVar6,1);
                        auVar4 = vblendvps_avx(auVar6,auVar5,auVar4);
                        auVar1 = vmaxss_avx(auVar4,auVar1);
                        auVar4 = vcmpss_avx(auVar5,auVar6,1);
                        auVar4 = vblendvps_avx(auVar5,auVar6,auVar4);
                        auVar11 = vminss_avx(auVar4,auVar11);
                        bVar3 = auVar11._0_4_ < auVar1._0_4_;
                      }
                      else {
                        if (fVar7 < fVar13) {
                          return 0;
                        }
                        bVar3 = fVar9 < fVar7;
                      }
                      if (!bVar3) {
                        *param_5 = auVar1._0_4_;
                        return 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



