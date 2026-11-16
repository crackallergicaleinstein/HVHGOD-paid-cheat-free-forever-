// FUN_180615540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180615540 */

float FUN_180615540(float param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  
  sVar1 = FUN_180624430();
  if (sVar1 != 0) {
    if (sVar1 == 1) {
      if ((int)param_1 < 0) goto LAB_18061557c;
    }
    else if (sVar1 != 2) {
LAB_18061557c:
      if (param_1 < -1.0) {
        FUN_180624800(1);
        return NAN;
      }
      if (param_1 == -1.0) {
        FUN_180624800(4);
        return -INFINITY;
      }
      fVar3 = param_1 + 1.0;
      fVar2 = (float)FUN_180627e00(fVar3);
      return fVar2 - ((fVar3 - 1.0) - param_1) / fVar3;
    }
  }
  return param_1;
}



