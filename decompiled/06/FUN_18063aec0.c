// FUN_18063aec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063aec0 */

void FUN_18063aec0(undefined1 *param_1,undefined1 *param_2,longlong param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = *param_2;
    param_2 = param_2 + 1;
    param_1 = param_1 + 1;
  }
  return;
}



