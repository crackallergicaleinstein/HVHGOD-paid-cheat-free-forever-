// FUN_180603674 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180603674 */

undefined8 * FUN_180603674(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_1806066d8(param_2 + 8);
  *param_1 = std::domain_error::vftable;
  return param_1;
}



