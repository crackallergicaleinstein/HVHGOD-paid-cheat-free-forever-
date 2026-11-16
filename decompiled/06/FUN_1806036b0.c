// FUN_1806036b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806036b0 */

undefined8 * FUN_1806036b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *local_18;
  undefined1 local_10;
  
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  *param_1 = std::exception::vftable;
  local_10 = 1;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18 = param_2;
  FUN_1806066d8(&local_18);
  *param_1 = std::domain_error::vftable;
  return param_1;
}



