// FUN_1803546b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803546b0 */

float FUN_1803546b0(float param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  sVar1 = thunk_FUN_180624430();
  if (sVar1 < 1) {
    sVar1 = thunk_FUN_180624430(param_2);
    fVar2 = (float)param_2;
    if ((((sVar1 < 1) && (fVar4 = 0.0, 0.0 < fVar2)) &&
        (sVar1 = thunk_FUN_180624430(param_3), sVar1 < 1)) &&
       (fVar3 = (float)param_3, fVar4 < fVar3)) {
      return (fVar2 * fVar2) / (fVar3 + fVar3) + param_1;
    }
  }
  return -INFINITY;
}



