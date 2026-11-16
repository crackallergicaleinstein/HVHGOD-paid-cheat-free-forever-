// FUN_1801417a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801417a0 */

void FUN_1801417a0(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *param_3;
  *(undefined1 *)(param_2 + 1) = *(undefined1 *)(param_3 + 1);
  *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_3 + 2);
  param_2[4] = param_3[4];
  FUN_18015b360(param_2 + 6,param_3 + 6);
  FUN_18015b360(param_2 + 0xe,param_3 + 0xe);
  FUN_180157430(param_2 + 0x16,param_3 + 0x16);
  return;
}



