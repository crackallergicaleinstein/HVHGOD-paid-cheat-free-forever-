// FUN_180308330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180308330 */

char FUN_180308330(float *param_1,longlong param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *param_1;
  sVar1 = thunk_FUN_180624430(fVar4);
  if (sVar1 < 1) {
    fVar3 = param_1[1];
    sVar1 = thunk_FUN_180624430(fVar3);
    if (sVar1 < 1) {
      fVar2 = param_1[2];
      sVar1 = thunk_FUN_180624430(fVar2);
      if (((sVar1 < 1) && (fVar4 = fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2, 0.9 < fVar4)) &&
         (fVar4 < 1.1)) {
        if (*(float *)(param_2 + 0x18) <= fVar2) {
          return '\x01';
        }
        return (0.05 <= fVar2) + '\x02';
      }
    }
  }
  return '\0';
}



