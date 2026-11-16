// FUN_1801959b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801959b0 */

void FUN_1801959b0(longlong *param_1)

{
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_fstream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0xb8;
  FUN_1800f63e0(param_1 + 3);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_iostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x20;
  *(undefined ***)((longlong)*(int *)(param_1[2] + 4) + 0x10 + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(param_1[2] + 4) + 0xc + (longlong)param_1) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  *(undefined ***)(param_1 + 0x17) = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)(param_1 + 0x17));
  return;
}



