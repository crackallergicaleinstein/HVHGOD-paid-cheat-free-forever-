// FUN_1804d6e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d6e60 */

void FUN_1804d6e60(longlong param_1,int *param_2,float param_3,float param_4,float param_5,
                  float param_6,float param_7,float param_8,float param_9,float param_10,
                  float param_11,int param_12)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_res18;
  float local_res20;
  
  fVar2 = param_5 - param_3;
  fVar3 = param_6 - param_4;
  fVar10 = param_10 - param_4;
  fVar8 = param_10 - param_8;
  fVar9 = param_9 - param_3;
  fVar4 = (param_8 - param_6) * (param_8 - param_6) + (param_7 - param_5) * (param_7 - param_5);
  fVar7 = param_9 - param_7;
  if (fVar4 < 0.0) {
    fVar4 = (float)FUN_18061e150();
  }
  else {
    fVar4 = SQRT(fVar4);
  }
  fVar2 = fVar3 * fVar3 + fVar2 * fVar2;
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_18061e150();
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar4 = fVar4 + fVar2;
  fVar2 = fVar8 * fVar8 + fVar7 * fVar7;
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_18061e150();
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar4 = fVar4 + fVar2;
  fVar2 = fVar10 * fVar10 + fVar9 * fVar9;
  if (fVar2 < 0.0) {
    fVar2 = (float)FUN_18061e150();
  }
  else {
    fVar2 = SQRT(fVar2);
  }
  fVar4 = fVar4 * fVar4 - fVar2 * fVar2;
  if (param_12 < 0x11) {
    fVar2 = 0.5;
    local_res18 = param_3;
    local_res20 = param_4;
    do {
      if (fVar4 <= param_11) {
        iVar1 = *param_2;
        if (param_1 != 0) {
          *(float *)(param_1 + 4 + (longlong)iVar1 * 8) = param_10;
          *(float *)(param_1 + (longlong)iVar1 * 8) = param_9;
        }
        *param_2 = iVar1 + 1;
        return;
      }
      fVar4 = (param_6 + local_res20) * fVar2;
      fVar3 = (param_5 + local_res18) * fVar2;
      fVar10 = (param_5 + param_7) * fVar2;
      param_7 = (param_9 + param_7) * fVar2;
      fVar8 = (param_8 + param_6) * fVar2;
      param_8 = (param_8 + param_10) * fVar2;
      fVar9 = (fVar8 + fVar4) * fVar2;
      fVar7 = (fVar10 + fVar3) * fVar2;
      param_6 = (param_8 + fVar8) * fVar2;
      param_5 = (param_7 + fVar10) * fVar2;
      fVar10 = (param_6 + fVar9) * fVar2;
      fVar8 = (param_5 + fVar7) * fVar2;
      param_12 = param_12 + 1;
      fVar6 = param_5;
      fVar11 = param_6;
      FUN_1804d6e60(param_1,param_2,local_res18,local_res20,fVar3,fVar4,fVar7,fVar9,fVar8,fVar10,
                    param_11,param_12);
      fVar3 = fVar6 - fVar8;
      fVar9 = param_9 - param_7;
      fVar7 = fVar11 - fVar10;
      fVar12 = param_10 - param_8;
      fVar5 = param_10 - fVar10;
      fVar4 = (param_8 - fVar11) * (param_8 - fVar11) + (param_7 - fVar6) * (param_7 - fVar6);
      fVar6 = param_9 - fVar8;
      if (fVar4 < 0.0) {
        fVar4 = (float)FUN_18061e150();
      }
      else {
        fVar4 = SQRT(fVar4);
      }
      fVar3 = fVar7 * fVar7 + fVar3 * fVar3;
      if (fVar3 < 0.0) {
        fVar3 = (float)FUN_18061e150();
      }
      else {
        fVar3 = SQRT(fVar3);
      }
      fVar4 = fVar4 + fVar3;
      fVar3 = fVar12 * fVar12 + fVar9 * fVar9;
      if (fVar3 < 0.0) {
        fVar3 = (float)FUN_18061e150();
      }
      else {
        fVar3 = SQRT(fVar3);
      }
      fVar4 = fVar4 + fVar3;
      fVar3 = fVar5 * fVar5 + fVar6 * fVar6;
      if (fVar3 < 0.0) {
        fVar3 = (float)FUN_18061e150();
      }
      else {
        fVar3 = SQRT(fVar3);
      }
      fVar4 = fVar4 * fVar4 - fVar3 * fVar3;
      local_res18 = fVar8;
      local_res20 = fVar10;
    } while (param_12 < 0x11);
  }
  return;
}



