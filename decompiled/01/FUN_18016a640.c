// FUN_18016a640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016a640 */

void FUN_18016a640(longlong *param_1)

{
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x90;
  FUN_18017cb00(param_1 + 2);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  *(undefined ***)(param_1 + 0x12) = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0x12));
  return;
}



