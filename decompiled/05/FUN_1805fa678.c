// FUN_1805fa678 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa678 */

undefined8 * FUN_1805fa678(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1806066d8(param_2 + 8);
  *param_1 = std::invalid_argument::vftable;
  return param_1;
}



