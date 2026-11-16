// FUN_1805fbee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbee0 */

undefined8 * FUN_1805fbee0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = std::locale::_Locimp::vftable;
  FUN_1805fc020();
  if (param_1[5] != 0) {
    thunk_FUN_180621380();
  }
  param_1[5] = 0;
  *param_1 = std::_Facet_base::vftable;
  if ((param_2 & 1) != 0) {
    FUN_1804547d0(param_1,0x38);
  }
  return param_1;
}



