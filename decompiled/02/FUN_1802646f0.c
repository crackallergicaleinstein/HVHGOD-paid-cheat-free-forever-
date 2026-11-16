// FUN_1802646f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802646f0 */

undefined2 FUN_1802646f0(float *param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_1;
  sVar1 = thunk_FUN_180624430(fVar4);
  if (sVar1 < 1) {
    fVar2 = param_1[1];
    sVar1 = thunk_FUN_180624430(fVar2);
    if (sVar1 < 1) {
      fVar3 = param_1[2];
      sVar1 = thunk_FUN_180624430(fVar3);
      if ((((sVar1 < 1) && (ABS(fVar4) < 32768.0)) && (ABS(fVar2) < 32768.0)) &&
         ((ABS(fVar3) < 32768.0 && (((fVar4 != 0.0 || (fVar2 != 0.0)) || (fVar3 != 0.0)))))) {
        return 1;
      }
    }
  }
  return 0;
}



