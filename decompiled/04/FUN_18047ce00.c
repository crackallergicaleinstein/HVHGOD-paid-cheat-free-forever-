// FUN_18047ce00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18047ce00 */

undefined8 * FUN_18047ce00(undefined8 *param_1,float *param_2)

{
  float fVar1;
  undefined8 uVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_18;
  float local_14 [5];
  
  fVar1 = *param_2;
  fVar6 = 0.8;
  fVar8 = 0.8;
  fVar7 = fVar8;
  if (((uint)fVar1 & 0x7f800000) != 0x7f800000) {
    pfVar5 = &local_18;
    if (0.0 <= fVar1) {
      pfVar5 = param_2;
    }
    local_14[0] = 1.0;
    pfVar3 = local_14;
    if (fVar1 <= 1.0) {
      pfVar3 = pfVar5;
    }
    local_18 = 0.0;
    fVar7 = *pfVar3;
  }
  pfVar5 = param_2 + 1;
  *param_2 = fVar7;
  fVar1 = *pfVar5;
  if (((uint)fVar1 & 0x7f800000) != 0x7f800000) {
    pfVar3 = &local_18;
    if (0.0 <= fVar1) {
      pfVar3 = pfVar5;
    }
    local_14[0] = 1.0;
    pfVar4 = local_14;
    if (fVar1 <= 1.0) {
      pfVar4 = pfVar3;
    }
    local_18 = 0.0;
    fVar8 = *pfVar4;
  }
  *pfVar5 = fVar8;
  pfVar5 = param_2 + 2;
  fVar1 = *pfVar5;
  if (((uint)fVar1 & 0x7f800000) != 0x7f800000) {
    pfVar3 = &local_18;
    if (0.0 <= fVar1) {
      pfVar3 = pfVar5;
    }
    local_14[0] = 1.0;
    pfVar4 = local_14;
    if (fVar1 <= 1.0) {
      pfVar4 = pfVar3;
    }
    local_18 = 0.0;
    fVar6 = *pfVar4;
  }
  *pfVar5 = fVar6;
  param_2[3] = 1.0;
  uVar2 = *(undefined8 *)(param_2 + 2);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = uVar2;
  return param_1;
}



