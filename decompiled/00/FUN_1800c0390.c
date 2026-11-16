// FUN_1800c0390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c0390 */

void FUN_1800c0390(longlong param_1)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float local_38;
  float local_34 [11];
  
  FUN_1800bea40(param_1 + 0x68);
  FUN_1800bea40(param_1 + 0xe0);
  pfVar4 = (float *)(param_1 + 0x1c0);
  fVar5 = *pfVar4;
  sVar1 = thunk_FUN_180624430(fVar5);
  fVar6 = 1.0;
  if (sVar1 < 1) {
    pfVar3 = &local_38;
    if (0.5 <= fVar5) {
      pfVar3 = pfVar4;
    }
    local_34[0] = 2.0;
    pfVar2 = local_34;
    if (fVar5 <= 2.0) {
      pfVar2 = pfVar3;
    }
    local_38 = 0.5;
    fVar5 = *pfVar2;
  }
  else {
    fVar5 = 1.0;
  }
  *pfVar4 = fVar5;
  pfVar4 = (float *)(param_1 + 0x1cc);
  fVar5 = *pfVar4;
  sVar1 = thunk_FUN_180624430(fVar5);
  if (sVar1 < 1) {
    pfVar3 = local_34;
    if (fVar6 <= fVar5) {
      pfVar3 = pfVar4;
    }
    local_38 = 200.0;
    pfVar2 = &local_38;
    if (fVar5 <= 200.0) {
      pfVar2 = pfVar3;
    }
    local_34[0] = fVar6;
    fVar5 = *pfVar2;
  }
  else {
    fVar5 = 50.0;
  }
  pfVar3 = (float *)(param_1 + 0x1d0);
  local_38 = 1.4013e-45;
  *pfVar4 = fVar5;
  local_34[0] = 0.0;
  pfVar4 = local_34;
  if (-1 < (int)*pfVar3) {
    pfVar4 = pfVar3;
  }
  pfVar2 = &local_38;
  if ((int)*pfVar3 < 2) {
    pfVar2 = pfVar4;
  }
  *pfVar3 = *pfVar2;
  if (2 < *(byte *)(param_1 + 0x1c8)) {
    *(undefined1 *)(param_1 + 0x1c8) = 1;
  }
  return;
}



