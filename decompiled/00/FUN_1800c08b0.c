// FUN_1800c08b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800c08b0 */

void FUN_1800c08b0(longlong param_1)

{
  byte bVar1;
  short sVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float local_28 [8];
  
  pfVar4 = (float *)(param_1 + 0x280);
  fVar6 = *pfVar4;
  sVar2 = thunk_FUN_180624430(fVar6);
  if (sVar2 < 1) {
    pfVar5 = local_28 + 2;
    if (1.0 <= fVar6) {
      pfVar5 = pfVar4;
    }
    local_28[0] = 200.0;
    pfVar3 = local_28;
    if (fVar6 <= 200.0) {
      pfVar3 = pfVar5;
    }
    local_28[2] = 1.0;
    fVar6 = *pfVar3;
  }
  else {
    fVar6 = 100.0;
  }
  local_28[2] = 1.4013e-45;
  pfVar5 = (float *)(param_1 + 0x278);
  local_28[0] = 0.0;
  *pfVar4 = fVar6;
  pfVar4 = local_28;
  if (-1 < (int)*pfVar5) {
    pfVar4 = pfVar5;
  }
  pfVar3 = local_28 + 2;
  if ((int)*pfVar5 < 2) {
    pfVar3 = pfVar4;
  }
  *pfVar5 = *pfVar3;
  pfVar4 = (float *)(param_1 + 0x27c);
  local_28[0] = 0.0;
  local_28[2] = 1.4013e-45;
  pfVar5 = local_28;
  if (-1 < (int)*pfVar4) {
    pfVar5 = pfVar4;
  }
  pfVar3 = local_28 + 2;
  if ((int)*pfVar4 < 2) {
    pfVar3 = pfVar5;
  }
  *pfVar4 = *pfVar3;
  bVar1 = *(byte *)(param_1 + 0xe0);
  local_28[0] = 1.5399894e-36;
  local_28[1] = 1.6373235e-33;
  if (10 < bVar1) {
    if (bVar1 < 0x13) {
      bVar1 = *(byte *)((longlong)local_28 + (ulonglong)(bVar1 - 0xb));
    }
    else {
      bVar1 = 2;
    }
  }
  *(byte *)(param_1 + 0xe0) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x1e8);
  local_28[0] = 1.5399894e-36;
  local_28[1] = 1.6373235e-33;
  if (bVar1 < 0xb) {
    *(byte *)(param_1 + 0x1e8) = bVar1;
  }
  else if (bVar1 < 0x13) {
    *(undefined1 *)(param_1 + 0x1e8) =
         *(undefined1 *)((longlong)local_28 + (ulonglong)(bVar1 - 0xb));
  }
  else {
    *(undefined1 *)(param_1 + 0x1e8) = 2;
  }
  return;
}



