// FUN_18057d5b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057d5b0 */

void FUN_18057d5b0(undefined8 *param_1)

{
  UnmapViewOfFile((LPCVOID)param_1[2]);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



