// FUN_180179d40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180179d40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180179d40(undefined8 *param_1,ulonglong param_2)

{
  char *local_18;
  undefined8 local_10;
  
  *param_1 = std::
             _Task_async_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>
             ::vftable;
  if (param_1[0x2a] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180163700();
  }
  FUN_180163c60();
  FUN_1800efed0(param_1 + 0x2a);
  FUN_180179cb0(param_1);
  if ((param_2 & 1) != 0) {
    if (DAT_180c7df30 == (undefined8 *)0x0) {
      local_18 = "tier0.dll:g_pMemAlloc";
      local_10 = 0x15;
      DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_18);
    }
    (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,param_1);
  }
  return param_1;
}



