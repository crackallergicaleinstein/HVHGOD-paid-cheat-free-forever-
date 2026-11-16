// FUN_1803080a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803080a0 */

undefined2 FUN_1803080a0(float *param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *param_1;
  sVar1 = thunk_FUN_180624430(fVar3);
  if ((sVar1 < 1) && (fVar2 = 0.0, 0.0 < fVar3)) {
    fVar3 = param_1[1];
    sVar1 = thunk_FUN_180624430(fVar3);
    if ((sVar1 < 1) && (fVar2 < fVar3)) {
      fVar3 = param_1[2];
      sVar1 = thunk_FUN_180624430(fVar3);
      if ((sVar1 < 1) && (fVar2 < fVar3)) {
        fVar3 = param_1[3];
        sVar1 = thunk_FUN_180624430(fVar3);
        if ((sVar1 < 1) && (fVar2 < fVar3)) {
          fVar3 = param_1[4];
          sVar1 = thunk_FUN_180624430(fVar3);
          if ((sVar1 < 1) && (fVar2 < fVar3)) {
            fVar3 = param_1[5];
            sVar1 = thunk_FUN_180624430(fVar3);
            if ((sVar1 < 1) && (fVar2 < fVar3)) {
              fVar3 = param_1[6];
              sVar1 = thunk_FUN_180624430(fVar3);
              if (((sVar1 < 1) && (fVar2 < fVar3)) && (fVar4 = 1.0, fVar3 <= 1.0)) {
                fVar3 = param_1[7];
                sVar1 = thunk_FUN_180624430(fVar3);
                if (((sVar1 < 1) && (fVar2 <= fVar3)) && (fVar3 <= fVar4)) {
                  fVar3 = param_1[8];
                  sVar1 = thunk_FUN_180624430(fVar3);
                  if (((sVar1 < 1) && (fVar2 < fVar3)) && (fVar3 < 10.0)) {
                    fVar3 = param_1[9];
                    sVar1 = thunk_FUN_180624430(fVar3);
                    if ((((sVar1 < 1) && (fVar2 < fVar3)) && (fVar3 < 3.0)) &&
                       (sVar1 = thunk_FUN_180624430(param_1[10]), sVar1 < 1)) {
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}



