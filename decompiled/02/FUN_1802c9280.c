// FUN_1802c9280 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c9280 */

undefined2 FUN_1802c9280(float param_1,undefined8 param_2,undefined8 param_3)

{
  short sVar1;
  float fVar2;
  float fVar3;
  
  sVar1 = thunk_FUN_180624430();
  if (sVar1 < 1) {
    sVar1 = thunk_FUN_180624430(param_2);
    fVar3 = (float)param_2;
    if ((((sVar1 < 1) && (sVar1 = thunk_FUN_180624430(param_3), sVar1 < 1)) &&
        (ABS(param_1) < 32768.0)) &&
       (((ABS(fVar3) < 32768.0 && (fVar2 = (float)param_3, ABS(fVar2) < 32768.0)) &&
        (1.0 < param_1 * param_1 + fVar3 * fVar3 + fVar2 * fVar2)))) {
      return 1;
    }
  }
  return 0;
}



