// FUN_18015dd20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015dd20 */

void FUN_18015dd20(longlong *param_1)

{
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb0;
  FUN_1800f63e0(param_1 + 2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  *(undefined ***)(param_1 + 0x16) = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0x16));
  return;
}



