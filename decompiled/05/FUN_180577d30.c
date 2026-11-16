// FUN_180577d30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577d30 */

void FUN_180577d30(longlong *param_1)

{
  if (param_1[4] == 0) {
    param_1[7] = 0;
    param_1[8] = 0;
    return;
  }
  if (*param_1 != 0) {
    (**(code **)(param_1[6] + 0x10))();
  }
  *param_1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  return;
}



