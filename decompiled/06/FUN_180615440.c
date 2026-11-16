// FUN_180615440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180615440 */

undefined8 thunk_FUN_180624470(ulonglong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 >> 0x34) & 0x7ff;
  if (uVar1 == 0x7ff) {
    if ((param_1 & 0xfffffffffffff) == 0) {
      return 1;
    }
    return 2;
  }
  if (uVar1 != 0) {
    return 0xffffffff;
  }
  if ((param_1 & 0x7fffffffffffffff) == 0) {
    return 0;
  }
  return 0xfffffffe;
}



