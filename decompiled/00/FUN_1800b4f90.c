// FUN_1800b4f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800b4f90 */

ulonglong FUN_1800b4f90(uint param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  short sVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auVar6 [64];
  float fVar7;
  float local_res8 [8];
  
  local_res8[2] = (float)param_2;
  auVar1 = vpcmpgtd_avx(SUB6416(ZEXT464(0),0),ZEXT416(param_1));
  auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x42b40000),0),SUB6416(ZEXT464(0xc2b40000),0),auVar1);
  auVar6 = ZEXT1664(auVar1);
  sVar2 = thunk_FUN_180624430(param_2);
  if (sVar2 < 1) {
    fVar5 = auVar6._0_4_;
    fVar7 = (float)param_2;
    if (0.0 < fVar5 * fVar7) {
      pfVar4 = local_res8;
      if (fVar5 - 15.0 <= fVar7) {
        pfVar4 = local_res8 + 2;
      }
      local_res8[4] = fVar5 + 15.0;
      pfVar3 = local_res8 + 4;
      if (fVar7 <= fVar5 + 15.0) {
        pfVar3 = pfVar4;
      }
      local_res8[0] = fVar5 - 15.0;
      return (ulonglong)(uint)*pfVar3;
    }
  }
  return auVar6._0_8_;
}



