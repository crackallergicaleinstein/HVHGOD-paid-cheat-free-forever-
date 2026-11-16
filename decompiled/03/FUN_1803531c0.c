// FUN_1803531c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803531c0 */

undefined2 FUN_1803531c0(longlong param_1)

{
  short sVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar3 = *(float *)(param_1 + 0x18);
  sVar1 = thunk_FUN_180624430(fVar3);
  if (sVar1 < 1) {
    fVar4 = *(float *)(param_1 + 0x1c);
    sVar1 = thunk_FUN_180624430(fVar4);
    if (sVar1 < 1) {
      fVar2 = *(float *)(param_1 + 0x20);
      sVar1 = thunk_FUN_180624430(fVar2);
      if ((((sVar1 < 1) && (0.0 <= fVar2)) && (1.5 <= fVar3)) &&
         ((*(char *)(param_1 + 0xd) != '\0' || (fVar4 + fVar2 <= *(float *)(param_1 + 0x14))))) {
        return 1;
      }
    }
  }
  return 0;
}



