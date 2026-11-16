// FUN_180387210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180387210 */

undefined2 FUN_180387210(float *param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *param_1;
  sVar1 = thunk_FUN_180624430(fVar3);
  if (sVar1 < 1) {
    fVar2 = param_1[1];
    sVar1 = thunk_FUN_180624430(fVar2);
    if (((sVar1 < 1) && (-1.7014117e+38 < fVar3)) && (-1.7014117e+38 < fVar2)) {
      return 1;
    }
  }
  return 0;
}



