// FUN_180361de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180361de0 */

undefined4 * FUN_180361de0(undefined4 *param_1,float *param_2,ulonglong param_3,byte param_4)

{
  undefined1 auVar1 [16];
  float fVar2;
  short sVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_48 [16];
  
  if (param_3 < 0x1c) {
    fVar5 = *param_2;
    sVar3 = thunk_FUN_180624430(fVar5);
    if (sVar3 < 1) {
      fVar6 = param_2[1];
      sVar3 = thunk_FUN_180624430(fVar6);
      if ((((sVar3 < 1) && (0.0 < fVar6)) && (0.0 < fVar5)) && (fVar5 < 2.0 / fVar6 + 1.0)) {
        fVar2 = fVar5 - 1.0 / fVar6;
        if (fVar2 <= 0.0) {
          local_48[0] = 0.0;
        }
        else {
          auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar2 * 64.0)),1);
          local_48[0] = auVar1._0_4_ * 0.015625;
        }
        pfVar4 = local_48;
        if (0.96875 < local_48[0]) {
          pfVar4 = (float *)&DAT_180701e4c;
        }
        auVar1 = vmaxss_avx(SUB6416(ZEXT464(0x3c800000),0),ZEXT416((uint)*pfVar4));
        fVar7 = auVar1._0_4_;
        fVar2 = (fVar5 - fVar7) * fVar6;
        if (((fVar7 < (fVar5 + 131072.0) - 131072.0) && (2.0 < fVar5 * fVar6)) &&
           ((0.0 < fVar2 && (fVar2 < 2.0)))) {
          *(undefined1 *)(param_1 + 2) = 1;
          auVar1 = vpcmpeqd_avx(ZEXT116(param_4),SUB6416(ZEXT464(0),0));
          auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x3f7c0000),0),ZEXT816(0),auVar1);
          *param_1 = auVar1._0_4_;
          param_1[1] = fVar7;
          return param_1;
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



