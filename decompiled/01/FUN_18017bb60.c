// FUN_18017bb60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017bb60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18017bb60(undefined8 *param_1,ulonglong param_2)

{
  char *local_18;
  undefined8 local_10;
  
  *param_1 = Concurrency::details::
             _PPLTaskHandle<unsigned_char,Concurrency::task<unsigned_char>::_InitialTaskHandle<void,`public:___cdecl_std::_Task_async_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>::_Task_async_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_><std::_Fake_no_copy_callable_adapter<`public:_bool___cdecl_HvhgodInternal::ConfigManager::Refresh(bool)___ptr64'::`15'::<lambda_1>_>_>(std::_Fake_no_copy_callable_adapter<`public:_bool___cdecl_HvhgodInternal::ConfigManager::Refresh(bool)___ptr64'::`15'::<lambda_1>_>&&___ptr64)___ptr64'::`2'::<lambda_1>,Concurrency::details::_TypeSelectorNoAsync>,Concurrency::details::_TaskProcHandle>
             ::vftable;
  FUN_180159a00(param_1[1] + 0x160);
  FUN_1800efed0(param_1 + 1);
  *param_1 = Concurrency::details::_TaskProcHandle::vftable;
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



