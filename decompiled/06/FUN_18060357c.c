// FUN_18060357c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060357c */

longlong * FUN_18060357c(longlong *param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    *param_1 = (longlong)&DAT_1806aa630;
    param_1[2] = (longlong)&DAT_1806aa638;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x13] = (longlong)std::basic_ios<char,std::char_traits<char>_>::vftable;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    *(undefined1 *)(param_1 + 0x1e) = 0;
  }
  plVar1 = param_1 + 3;
  FUN_1801b3e50(param_1,plVar1,0);
  *(undefined ***)((longlong)*(int *)(*param_1 + 4) + (longlong)param_1) =
       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)*(int *)(*param_1 + 4) + -4 + (longlong)param_1) =
       *(int *)(*param_1 + 4) + -0x98;
  FUN_180151be0(plVar1);
  *plVar1 = (longlong)
            std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



