// FUN_1805fc994 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc994 */

undefined8 * FUN_1805fc994(undefined8 *param_1)

{
  *param_1 = std::exception::vftable;
  param_1[2] = 0;
  param_1[1] = "bad exception";
  *param_1 = std::bad_exception::vftable;
  return param_1;
}



