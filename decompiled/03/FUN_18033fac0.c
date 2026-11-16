// FUN_18033fac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033fac0 */

undefined2 FUN_18033fac0(longlong param_1)

{
  short sVar1;
  float fVar2;
  
  fVar2 = *(float *)(param_1 + 0xac);
  sVar1 = thunk_FUN_180624430(fVar2);
  if (((sVar1 < 1) && (0.0 <= fVar2)) && (fVar2 < 1.0)) {
    return 1;
  }
  return 0;
}



