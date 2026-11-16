// FUN_1801b3e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b3e50 */

longlong * FUN_1801b3e50(longlong *param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 0) {
    *param_1 = (longlong)&DAT_1807c5a38;
    param_1[2] = (longlong)&DAT_1807c5a30;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[4] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_istream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x18;
  param_1[1] = 0;
  FUN_180151d10((longlong)*(int *)(*param_1 + 4) + (longlong)param_1,param_2,0);
  *(undefined ***)((longlong)*(int *)(param_1[2] + 4) + 0x10 + (longlong)param_1) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(param_1[2] + 4) + 0xc + (longlong)param_1) =
       *(int *)(param_1[2] + 4) + -0x10;
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_iostream<char,std::char_traits<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x20;
  return param_1;
}



