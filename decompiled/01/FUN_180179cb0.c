// FUN_180179cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180179cb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180179cb0(undefined8 *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0x29];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_1 + 0x22);
    param_1[0x29] = 0;
  }
  *param_1 = std::
             _Associated_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>
             ::vftable;
  if ((*(char *)((longlong)param_1 + 0x101) != '\0') && (*(int *)((longlong)param_1 + 0xfc) == 0)) {
    FUN_1805fab34(param_1 + 0xc);
  }
  FUN_1805fd358(param_1 + 10);
  FUN_18015c010(param_1 + 6);
  FUN_18015c010(param_1 + 2);
  return;
}



