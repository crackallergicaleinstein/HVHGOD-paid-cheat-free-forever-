// FUN_180603d50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180603d50 */

void FUN_180603d50(longlong param_1)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)(param_1 + 0x98);
  FUN_180603824(piVar1);
  *(undefined ***)piVar1 = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}



