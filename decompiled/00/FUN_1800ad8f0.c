// FUN_1800ad8f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ad8f0 */

void FUN_1800ad8f0(longlong *param_1)

{
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xa8;
  FUN_1800f63e0(param_1 + 1);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x10;
  *(undefined ***)(param_1 + 0x15) = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0x15));
  return;
}



