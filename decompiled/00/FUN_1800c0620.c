// FUN_1800c0620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c0620 */

void FUN_1800c0620(longlong param_1)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float fVar5;
  float local_28;
  float local_24 [7];
  
  pfVar4 = (float *)(param_1 + 0x70);
  fVar5 = *pfVar4;
  sVar1 = thunk_FUN_180624430(fVar5);
  if (sVar1 < 1) {
    pfVar3 = &local_28;
    if (1.0 <= fVar5) {
      pfVar3 = pfVar4;
    }
    local_24[0] = 200.0;
    pfVar2 = local_24;
    if (fVar5 <= 200.0) {
      pfVar2 = pfVar3;
    }
    local_28 = 1.0;
    fVar5 = *pfVar2;
  }
  else {
    fVar5 = 100.0;
  }
  pfVar3 = (float *)(param_1 + 0x6c);
  local_28 = 1.4013e-45;
  *pfVar4 = fVar5;
  local_24[0] = 0.0;
  pfVar4 = local_24;
  if (-1 < (int)*pfVar3) {
    pfVar4 = pfVar3;
  }
  pfVar2 = &local_28;
  if ((int)*pfVar3 < 2) {
    pfVar2 = pfVar4;
  }
  *pfVar3 = *pfVar2;
  return;
}



