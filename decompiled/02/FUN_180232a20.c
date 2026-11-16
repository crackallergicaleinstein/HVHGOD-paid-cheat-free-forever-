// FUN_180232a20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180232a20 */

undefined2 FUN_180232a20(float *param_1,undefined8 param_2)

{
  float fVar1;
  short sVar2;
  
  if (*(char *)(param_1 + 2) != '\0') {
    sVar2 = thunk_FUN_180624430(param_2);
    if (((sVar2 < 1) && (fVar1 = *param_1 - (float)param_2, -0.0078125 <= fVar1)) &&
       (fVar1 <= param_1[1])) {
      return 1;
    }
  }
  return 0;
}



