// FUN_180164870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180164870 */

undefined8 * FUN_180164870(undefined8 *param_1,longlong param_2)

{
  *param_1 = std::exception::vftable;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  FUN_1806066d8(param_2 + 8);
  *param_1 = std::logic_error::vftable;
  return param_1;
}



