// FUN_1800ef590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ef590 */

undefined4 *
FUN_1800ef590(undefined4 *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4,
             undefined4 *param_5)

{
  *param_1 = *param_5;
  param_1[1] = *param_4;
  param_1[2] = *param_3;
  *(char **)(param_1 + 4) = "visibility";
  return param_1;
}



