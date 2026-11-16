// FUN_180374ab0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180374ab0 */

void FUN_180374ab0(longlong *param_1,float param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,undefined8 *param_8)

{
  undefined8 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  float *pfVar4;
  short sVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_68 [24];
  
  fVar12 = 2.0;
  fVar13 = 0.0;
  local_68[4] = 0.0;
  local_68[0] = 2.0;
  fVar10 = *(float *)param_1[1];
  local_68[2] = fVar10;
  sVar5 = thunk_FUN_180624430(fVar10);
  fVar11 = 1.0;
  if (sVar5 < 1) {
    pfVar9 = local_68 + 4;
    if (fVar13 <= fVar10) {
      pfVar9 = local_68 + 2;
    }
    pfVar6 = local_68;
    if (fVar10 <= fVar12) {
      pfVar6 = pfVar9;
    }
    fVar10 = *pfVar6;
  }
  else {
    fVar10 = 1.0;
  }
  lVar3 = *param_1;
  *(float *)(lVar3 + 0x18) = fVar10 * param_2;
  *(undefined8 *)(lVar3 + 0x1c) = 0;
  lVar3 = *param_1;
  uVar2 = *(undefined4 *)(param_3 + 1);
  *(undefined8 *)(lVar3 + 0x24) = *param_3;
  uVar1 = *param_4;
  *(undefined4 *)(lVar3 + 0x2c) = uVar2;
  lVar3 = *param_1;
  uVar2 = *(undefined4 *)(param_4 + 1);
  local_68[4] = 3.0;
  local_68[2] = 0.25;
  *(undefined8 *)(lVar3 + 0x30) = uVar1;
  *(undefined4 *)(lVar3 + 0x38) = uVar2;
  lVar3 = *param_1;
  uVar2 = *(undefined4 *)(param_5 + 1);
  *(undefined8 *)(lVar3 + 0x3c) = *param_5;
  *(undefined4 *)(lVar3 + 0x44) = uVar2;
  lVar3 = *param_1;
  uVar2 = *(undefined4 *)(param_6 + 1);
  *(undefined8 *)(lVar3 + 0x48) = *param_6;
  *(undefined4 *)(lVar3 + 0x50) = uVar2;
  lVar3 = *param_1;
  uVar2 = *(undefined4 *)(param_7 + 1);
  *(undefined8 *)(lVar3 + 0x54) = *param_7;
  *(undefined4 *)(lVar3 + 0x5c) = uVar2;
  lVar3 = *param_1;
  uVar2 = *(undefined4 *)(param_8 + 1);
  *(undefined8 *)(lVar3 + 0x60) = *param_8;
  *(undefined4 *)(lVar3 + 0x68) = uVar2;
  pfVar9 = (float *)param_1[2];
  lVar3 = *param_1;
  pfVar6 = (float *)param_1[3];
  pfVar4 = (float *)param_1[4];
  local_68[0] = *pfVar9;
  if (((uint)local_68[0] & 0x7f800000) == 0x7f800000) {
    fVar10 = 1.0;
  }
  else {
    pfVar8 = local_68 + 2;
    if (0.25 <= local_68[0]) {
      pfVar8 = local_68;
    }
    pfVar7 = local_68 + 4;
    if (local_68[0] <= 3.0) {
      pfVar7 = pfVar8;
    }
    fVar10 = *pfVar7;
  }
  *(float *)(lVar3 + 0x24) = fVar10 * *(float *)(lVar3 + 0x24);
  *(float *)(lVar3 + 0x30) = *(float *)(lVar3 + 0x30) * *pfVar6;
  *(float *)(lVar3 + 0x3c) = *(float *)(lVar3 + 0x3c) * *pfVar6;
  *(float *)(lVar3 + 0x48) = *pfVar6 * *pfVar6 * *(float *)(lVar3 + 0x48);
  *(float *)(lVar3 + 0x54) = *(float *)(lVar3 + 0x54) * *pfVar4;
  *(float *)(lVar3 + 0x60) = *pfVar4 * *(float *)(lVar3 + 0x60);
  local_68[0] = *pfVar9;
  if (((uint)local_68[0] & 0x7f800000) == 0x7f800000) {
    fVar10 = 1.0;
  }
  else {
    pfVar8 = local_68 + 2;
    if (0.25 <= local_68[0]) {
      pfVar8 = local_68;
    }
    pfVar7 = local_68 + 4;
    if (local_68[0] <= 3.0) {
      pfVar7 = pfVar8;
    }
    fVar10 = *pfVar7;
  }
  *(float *)(lVar3 + 0x28) = fVar10 * *(float *)(lVar3 + 0x28);
  *(float *)(lVar3 + 0x34) = *(float *)(lVar3 + 0x34) * *pfVar6;
  *(float *)(lVar3 + 0x40) = *(float *)(lVar3 + 0x40) * *pfVar6;
  *(float *)(lVar3 + 0x4c) = *pfVar6 * *pfVar6 * *(float *)(lVar3 + 0x4c);
  *(float *)(lVar3 + 0x58) = *(float *)(lVar3 + 0x58) * *pfVar4;
  *(float *)(lVar3 + 100) = *pfVar4 * *(float *)(lVar3 + 100);
  local_68[0] = *pfVar9;
  if (((uint)local_68[0] & 0x7f800000) != 0x7f800000) {
    pfVar9 = local_68 + 2;
    if (0.25 <= local_68[0]) {
      pfVar9 = local_68;
    }
    pfVar8 = local_68 + 4;
    if (local_68[0] <= 3.0) {
      pfVar8 = pfVar9;
    }
    fVar11 = *pfVar8;
  }
  *(float *)(lVar3 + 0x2c) = fVar11 * *(float *)(lVar3 + 0x2c);
  *(float *)(lVar3 + 0x38) = *(float *)(lVar3 + 0x38) * *pfVar6;
  *(float *)(lVar3 + 0x44) = *(float *)(lVar3 + 0x44) * *pfVar6;
  *(float *)(lVar3 + 0x50) = *pfVar6 * *pfVar6 * *(float *)(lVar3 + 0x50);
  *(float *)(lVar3 + 0x5c) = *pfVar4 * *(float *)(lVar3 + 0x5c);
  *(float *)(lVar3 + 0x68) = *pfVar4 * *(float *)(lVar3 + 0x68);
  return;
}



