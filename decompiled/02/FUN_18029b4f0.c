// FUN_18029b4f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029b4f0 */

float FUN_18029b4f0(int param_1,longlong param_2)

{
  short sVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float local_res8 [4];
  float local_res18 [4];
  
  if (param_1 == 1) {
    fVar4 = *(float *)(param_2 + 0x20);
    sVar1 = thunk_FUN_180624430(fVar4);
    if (sVar1 < 1) {
      pfVar3 = local_res8;
      if (0.75 <= fVar4) {
        pfVar3 = (float *)(param_2 + 0x20);
      }
      local_res18[0] = 2.0;
      pfVar2 = local_res18;
      if (fVar4 <= 2.0) {
        pfVar2 = pfVar3;
      }
      local_res8[0] = 0.75;
      return *pfVar2;
    }
  }
  return 1.0;
}



