// FUN_18015a9a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015a9a0 */

int thunk_FUN_18060eb80(undefined4 param_1)

{
  short sVar1;
  float fVar2;
  
  sVar1 = FUN_180624430();
  if (sVar1 != 0) {
    if ((sVar1 != 1) && (sVar1 != 2)) {
      fVar2 = (float)FUN_180618990(param_1);
      if ((-2.1474836e+09 <= fVar2) && (fVar2 <= 2.1474836e+09)) {
        return (int)fVar2;
      }
    }
    FUN_180624800(1);
  }
  return 0;
}



