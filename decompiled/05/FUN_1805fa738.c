// FUN_1805fa738 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fa738 */

undefined8 * FUN_1805fa738(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_18;
  undefined1 local_10;
  
  local_10 = 1;
  *param_1 = std::exception::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  FUN_1806066d8(&local_18);
  *param_1 = std::length_error::vftable;
  return param_1;
}



