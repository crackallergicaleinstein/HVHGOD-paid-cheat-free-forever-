// FUN_180387290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180387290 */

undefined2 FUN_180387290(float *param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = *param_1;
  sVar1 = thunk_FUN_180624430(fVar5);
  if (sVar1 < 1) {
    fVar2 = param_1[1];
    sVar1 = thunk_FUN_180624430(fVar2);
    if (sVar1 < 1) {
      fVar3 = param_1[2];
      sVar1 = thunk_FUN_180624430(fVar3);
      if (sVar1 < 1) {
        fVar4 = param_1[3];
        sVar1 = thunk_FUN_180624430(fVar4);
        if ((((sVar1 < 1) && (0.0 < fVar5)) && (0.0 < fVar2)) && ((0.0 < fVar3 && (0.0 < fVar4)))) {
          return 1;
        }
      }
    }
  }
  return 0;
}



