// FUN_18029c270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029c270 */

float * FUN_18029c270(float *param_1,undefined8 *param_2,int param_3,float param_4,float param_5,
                     uint param_6,char param_7,undefined8 param_8)

{
  int iVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  char cVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_b8;
  undefined8 uStack_b0;
  int local_a8 [8];
  int local_88 [4];
  int local_78 [2];
  undefined1 local_70 [104];
  
  local_a8[2] = param_3;
  local_a8[4] = 3;
  local_a8[0] = 0;
  piVar8 = local_a8;
  if (-1 < param_3) {
    piVar8 = local_a8 + 2;
  }
  local_88[0] = 3;
  local_a8[5] = 0;
  piVar6 = local_a8 + 4;
  if (param_3 < 4) {
    piVar6 = piVar8;
  }
  iVar1 = *piVar6;
  local_a8[6] = iVar1;
  piVar8 = local_a8 + 5;
  if (-1 < iVar1) {
    piVar8 = local_a8 + 6;
  }
  piVar6 = local_88;
  if (iVar1 < 4) {
    piVar6 = piVar8;
  }
  if (*piVar6 == 0) {
LAB_18029c33b:
    uVar10 = 1;
  }
  else {
    local_88[2] = iVar1;
    local_78[0] = 3;
    local_88[1] = 0;
    piVar8 = local_88 + 1;
    if (-1 < iVar1) {
      piVar8 = local_88 + 2;
    }
    piVar6 = local_78;
    if (iVar1 < 4) {
      piVar6 = piVar8;
    }
    if (*piVar6 == 3) goto LAB_18029c33b;
    uVar10 = 0;
  }
  cVar9 = (char)uVar10;
  if (param_7 == '\0') {
    fVar12 = 0.0;
  }
  else {
    auVar3 = vpcmpeqd_avx(ZEXT416(uVar10),SUB6416(ZEXT464(0),0));
    auVar3 = vblendvps_avx(ZEXT416((uint)param_5),ZEXT416(param_6),auVar3);
    fVar12 = auVar3._0_4_ + 4.0;
  }
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
  param_1[0xb] = 0.0;
  fVar2 = fVar12 + param_4;
  if (cVar9 == '\0') {
    fVar11 = *(float *)(param_2 + 1);
  }
  else {
    fVar11 = fVar2;
    fVar2 = *(float *)((longlong)param_2 + 0xc);
  }
  local_b8 = *param_2;
  uStack_b0 = param_2[1];
  fVar13 = 0.5;
  pfVar7 = (float *)FUN_18029b9f0(local_70,&local_b8,fVar11,fVar2,iVar1,0x3f000000,param_8);
  fVar2 = *pfVar7;
  fVar11 = pfVar7[1];
  fVar4 = pfVar7[2];
  fVar5 = pfVar7[3];
  *param_1 = fVar2;
  param_1[1] = fVar11;
  param_1[2] = fVar4;
  param_1[3] = fVar5;
  if (cVar9 == '\0') {
    fVar11 = param_1[1];
    fVar4 = fVar11;
    if (iVar1 == 1) {
      fVar4 = fVar11 + fVar12;
    }
    local_b8 = CONCAT44(fVar4,fVar2);
    uStack_b0 = CONCAT44(param_4,param_1[2]);
  }
  else {
    if (iVar1 == 0) {
      fVar12 = fVar2 + fVar12;
    }
    else {
      fVar12 = fVar2;
    }
    fVar11 = param_1[1];
    local_b8 = CONCAT44(fVar11,fVar12);
    uStack_b0 = CONCAT44(param_1[3],param_4);
  }
  *(undefined8 *)(param_1 + 4) = local_b8;
  *(undefined8 *)(param_1 + 6) = uStack_b0;
  if (cVar9 == '\0') {
    fVar2 = (param_1[2] - param_5) * fVar13 + fVar2;
    if (iVar1 != 1) {
      local_b8 = CONCAT44(fVar11 + param_4 + 4.0,fVar2);
      goto LAB_18029c4a4;
    }
  }
  else {
    if (iVar1 == 0) {
      local_b8 = CONCAT44(fVar11,fVar2);
      goto LAB_18029c4a4;
    }
    fVar2 = fVar2 + param_4 + 4.0;
  }
  local_b8 = CONCAT44(fVar11,fVar2);
LAB_18029c4a4:
  uStack_b0 = CONCAT44(param_6,param_5);
  *(undefined8 *)(param_1 + 8) = local_b8;
  *(undefined8 *)(param_1 + 10) = uStack_b0;
  return param_1;
}



