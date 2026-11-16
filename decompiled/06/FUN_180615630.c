// FUN_180615630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180615630 */

float FUN_180615630(float param_1,float param_2)

{
  short sVar1;
  
  sVar1 = FUN_180624430();
  if ((sVar1 != 2) &&
     ((sVar1 = FUN_180624430(param_2), sVar1 == 2 ||
      ((param_2 <= param_1 && ((param_1 != param_2 || (-1 < (int)param_1)))))))) {
    return param_1;
  }
  return param_2;
}



