// FUN_180233fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180233fd0 */

undefined8 FUN_180233fd0(float param_1,undefined8 param_2,float param_3)

{
  undefined1 auVar1 [16];
  short sVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [64];
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [2];
  float local_res20 [2];
  
  local_res10[0] = (float)param_2;
  local_res8[0] = param_1;
  local_res18[0] = param_3;
  sVar2 = thunk_FUN_180624430();
  auVar7 = ZEXT464(0x3dcccccd);
  if (sVar2 < 1) {
    pfVar3 = local_res8;
    if (param_1 < 0.1) {
      pfVar3 = (float *)&DAT_1807ce84c;
    }
    if (60.0 < param_1) {
      pfVar3 = (float *)&DAT_1807ce848;
    }
    fVar6 = *pfVar3;
  }
  else {
    fVar6 = 5.0;
  }
  sVar2 = thunk_FUN_180624430(param_2);
  if (sVar2 < 1) {
    pfVar3 = local_res8;
    if (0.0 <= (float)param_2) {
      pfVar3 = local_res10;
    }
    local_res20[0] = 15.0;
    pfVar4 = local_res20;
    if ((float)param_2 <= 15.0) {
      pfVar4 = pfVar3;
    }
    local_res8[0] = 0.0;
    fVar5 = *pfVar4;
  }
  else {
    fVar5 = 0.0;
  }
  local_res10[0] = 1.0;
  local_res8[0] = 0.0;
  pfVar3 = local_res8;
  if (0.0 <= param_3) {
    pfVar3 = local_res18;
  }
  pfVar4 = local_res10;
  if (param_3 <= 1.0) {
    pfVar4 = pfVar3;
  }
  auVar1 = vmaxss_avx(ZEXT416((uint)(fVar6 - fVar5 * *pfVar4)),auVar7._0_16_);
  return auVar1._0_8_;
}



