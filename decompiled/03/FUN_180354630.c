// FUN_180354630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180354630 */

undefined2 FUN_180354630(char param_1,char param_2,undefined8 param_3)

{
  short sVar1;
  float fVar2;
  
  sVar1 = thunk_FUN_180624430(param_3);
  if ((((sVar1 < 1) && (fVar2 = (float)param_3, 0.0 <= fVar2)) && (fVar2 <= 1.0)) &&
     ((param_1 != '\0' || ((param_2 == '\0' && (fVar2 <= 0.001)))))) {
    return 1;
  }
  return 0;
}



