// FUN_180245960 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180245960 */

float * FUN_180245960(float *param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     char *param_5,float *param_6,float *param_7,float *param_8)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  short sVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  undefined1 extraout_var [56];
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [64];
  float fVar15;
  float fVar16;
  float local_res20 [2];
  float local_c8 [40];
  
  local_res20[0] = (float)param_4;
  if ((param_2 == '\0') || (sVar4 = thunk_FUN_180624430(param_3), sVar4 < 1)) {
    fVar7 = *param_6;
    sVar4 = thunk_FUN_180624430(fVar7);
    if ((sVar4 < 1) &&
       ((sVar4 = thunk_FUN_180624430(*param_7), sVar4 < 1 &&
        (sVar4 = thunk_FUN_180624430(*param_8), sVar4 < 1)))) {
      fVar10 = -1.0;
      fVar15 = 1.0;
      if (*param_5 == '\0') {
        if (param_2 == '\0') {
          *param_5 = '\0';
          *param_8 = 0.0;
          *param_7 = 0.0;
          *param_6 = 0.0;
          param_1[0] = 0.0;
          param_1[1] = 0.0;
          param_1[2] = 0.0;
          param_1[3] = 0.0;
          param_1[4] = 0.0;
          param_1[5] = 0.0;
          param_1[6] = 0.0;
          param_1[7] = 0.0;
          param_1[8] = 0.0;
          param_1[9] = 0.0;
          param_1[10] = 0.0;
          return param_1;
        }
        local_c8[1] = 1.0;
        local_c8[2] = -1.0;
        local_c8[0] = (float)FUN_180637540(param_3);
        pfVar6 = local_c8 + 2;
        if (fVar10 <= local_c8[0]) {
          pfVar6 = local_c8;
        }
        pfVar5 = local_c8 + 1;
        if (local_c8[0] <= fVar15) {
          pfVar5 = pfVar6;
        }
        fVar7 = (float)FUN_180636820(*pfVar5);
        *param_7 = fVar7;
        *param_8 = 0.0;
        *param_6 = 0.0;
        *param_5 = '\x01';
        fVar7 = *param_6;
      }
      sVar4 = thunk_FUN_180624430(param_4);
      fVar16 = 0.25;
      auVar14 = ZEXT864(0);
      if (sVar4 < 1) {
        pfVar6 = local_c8 + 3;
        if (0.0 <= (float)param_4) {
          pfVar6 = local_res20;
        }
        local_c8[4] = 0.25;
        pfVar5 = local_c8 + 4;
        if ((float)param_4 <= 0.25) {
          pfVar5 = pfVar6;
        }
        local_c8[3] = 0.0;
        fVar13 = *pfVar5;
      }
      else {
        fVar13 = 0.0;
      }
      local_c8[7] = fVar15;
      local_c8[5] = 0.0;
      if (param_2 == '\0') {
        local_c8[6] = -fVar13 / 0.18;
      }
      else {
        local_c8[6] = fVar13 / 0.22;
      }
      local_c8[6] = fVar7 + local_c8[6];
      pfVar6 = local_c8 + 5;
      if (0.0 <= local_c8[6]) {
        pfVar6 = local_c8 + 6;
      }
      pfVar5 = local_c8 + 7;
      if (local_c8[6] <= fVar15) {
        pfVar5 = pfVar6;
      }
      fVar7 = *pfVar5;
      *param_6 = fVar7;
      if (fVar7 <= 0.0) {
        *param_5 = '\0';
        *param_8 = 0.0;
        *param_7 = 0.0;
        *param_6 = 0.0;
        param_1[0] = 0.0;
        param_1[1] = 0.0;
        param_1[2] = 0.0;
        param_1[3] = 0.0;
        param_1[4] = 0.0;
        param_1[5] = 0.0;
        param_1[6] = 0.0;
        param_1[7] = 0.0;
        param_1[8] = 0.0;
        param_1[9] = 0.0;
        param_1[10] = 0.0;
        return param_1;
      }
      if (param_2 != '\0') {
        local_c8[1] = fVar10;
        local_c8[2] = fVar15;
        fVar7 = (float)FUN_180637540(param_3);
        local_c8[0] = fVar7;
        fVar8 = (float)FUN_180627ae0(fVar13 * -18.0);
        auVar12 = ZEXT464((uint)(fVar15 - fVar8));
        pfVar6 = local_c8 + 1;
        if (fVar10 <= fVar7) {
          pfVar6 = local_c8;
        }
        pfVar5 = local_c8 + 2;
        if (fVar7 <= fVar15) {
          pfVar5 = pfVar6;
        }
        uVar11 = FUN_180636820(*pfVar5);
        fVar7 = (float)FUN_180242260(*param_7,uVar11,auVar12._0_8_);
        *param_7 = fVar7;
      }
      fVar9 = (float)FUN_180637760(fVar13 + *param_8,0x40000000);
      *param_8 = fVar9;
      fVar7 = *param_6;
      fVar8 = (3.0 - (fVar7 + fVar7)) * fVar7 * fVar7;
      fVar2 = fVar8 * 0.567232;
      fVar10 = *param_7;
      fVar3 = 1.5707964 - fVar8 * 1.5707964;
      local_c8[1] = fVar3 + fVar2;
      fVar13 = fVar8 * 1.5707964 + 1.5707964;
      local_c8[0] = fVar13 - fVar2;
      pfVar6 = local_c8 + 1;
      if (local_c8[1] <= fVar10) {
        pfVar6 = param_7;
      }
      param_1[1] = (fVar8 * 0.16 + 0.84) * 27.6;
      param_1[2] = (fVar15 - fVar8) * 3.0 + 5.0;
      pfVar5 = local_c8;
      if (fVar10 <= local_c8[0]) {
        pfVar5 = pfVar6;
      }
      *param_1 = fVar8;
      param_1[3] = fVar3;
      param_1[4] = fVar13;
      fVar10 = *pfVar5;
      param_1[5] = fVar10 - fVar2;
      param_1[6] = fVar10 + fVar2;
      param_1[7] = (fVar8 * fVar16 + 0.75) * 3.85;
      param_1[8] = (fVar8 * 0.35 + 0.65) * 6.16;
      fVar10 = (float)FUN_180638e00(fVar9 * 3.1415927);
      param_1[9] = fVar10 * 0.08 + 0.92;
      auVar12._0_8_ = FUN_180638e00(fVar7 * 3.1415927);
      auVar12._8_56_ = extraout_var;
      auVar1 = vmaxss_avx(auVar12._0_16_,auVar14._0_16_);
      param_1[10] = auVar1._0_4_ * 0.65;
      return param_1;
    }
  }
  *param_5 = '\0';
  *param_8 = 0.0;
  *param_7 = 0.0;
  *param_6 = 0.0;
  param_1[0] = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = 0.0;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  param_1[8] = 0.0;
  param_1[9] = 0.0;
  param_1[10] = 0.0;
  return param_1;
}



