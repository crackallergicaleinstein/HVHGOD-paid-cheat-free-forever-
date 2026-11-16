// FUN_180179df0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180179df0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_180179df0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  char *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  
  *param_1 = std::
             _Associated_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>
             ::vftable;
  *(undefined4 *)(param_1 + 1) = 1;
  *(undefined1 (*) [16])(param_1 + 2) = (undefined1  [16])0x0;
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 (*) [16])(param_1 + 6) = (undefined1  [16])0x0;
  param_1[8] = 0;
  param_1[9] = 0xf;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_38 = param_1;
  FUN_1805fd2c0();
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined1 (*) [16])(param_1 + 0x13) = (undefined1  [16])0x0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xc) = 2;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 (*) [16])(param_1 + 0x1c) = (undefined1  [16])0x0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)((longlong)param_1 + 0x102) = 0;
  param_1[0x21] = 0;
  *param_1 = std::
             _Packaged_state<struct_std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>___cdecl(void)>
             ::vftable;
  local_30 = param_1 + 0x22;
  param_1[0x29] = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_48 = "tier0.dll:g_pMemAlloc";
    local_40 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
  }
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *puVar1 = std::
            _Func_impl_no_alloc<std::_Fake_no_copy_callable_adapter<`public:_bool___cdecl_HvhgodInternal::ConfigManager::Refresh(bool)___ptr64'::`15'::<lambda_1>_>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>
            ::vftable;
  local_48 = (char *)(puVar1 + 1);
  local_28 = puVar1;
  FUN_1800f5370(local_48,param_2);
  FUN_1800f5370(puVar1 + 5,param_2 + 0x20);
  param_1[0x29] = puVar1;
  return param_1;
}



