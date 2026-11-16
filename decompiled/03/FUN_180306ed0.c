// FUN_180306ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180306ed0 */

float FUN_180306ed0(void)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float local_res8 [8];
  
  fVar4 = DAT_180cc8bd0 / 100.0;
  local_res8[2] = fVar4;
  sVar1 = thunk_FUN_180624430(fVar4);
  if (0 < sVar1) {
    return 0.33;
  }
  pfVar3 = local_res8;
  if (0.01 <= fVar4) {
    pfVar3 = local_res8 + 2;
  }
  local_res8[4] = 1.0;
  pfVar2 = local_res8 + 4;
  if (fVar4 <= 1.0) {
    pfVar2 = pfVar3;
  }
  local_res8[0] = 0.01;
  return *pfVar2;
}



