// FUN_18030c0e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030c0e0 */

undefined2 FUN_18030c0e0(longlong param_1)

{
  short sVar1;
  float fVar2;
  
  if (*(char *)(param_1 + 0xbb) == '\0') {
    fVar2 = *(float *)(param_1 + 0xac);
    sVar1 = thunk_FUN_180624430(fVar2);
    if (((sVar1 < 1) && (0.0 <= fVar2)) && (fVar2 < 1.0)) {
      sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x90));
      if (sVar1 < 1) {
        sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x94));
        if (sVar1 < 1) {
          sVar1 = thunk_FUN_180624430(*(undefined4 *)(param_1 + 0x98));
          if (sVar1 < 1) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



