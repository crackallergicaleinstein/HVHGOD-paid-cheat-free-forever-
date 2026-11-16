// FUN_18030ada0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030ada0 */

undefined2 FUN_18030ada0(undefined4 *param_1)

{
  short sVar1;
  
  sVar1 = thunk_FUN_180624430(*param_1);
  if (sVar1 < 1) {
    sVar1 = thunk_FUN_180624430(param_1[1]);
    if (sVar1 < 1) {
      sVar1 = thunk_FUN_180624430(param_1[2]);
      if (sVar1 < 1) {
        return 1;
      }
    }
  }
  return 0;
}



