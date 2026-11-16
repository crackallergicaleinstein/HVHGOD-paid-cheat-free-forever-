// FUN_18017ade0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017ade0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_18017ade0(longlong *param_1,longlong param_2,undefined1 (*param_3) [16])

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  uint uVar7;
  undefined8 unaff_retaddr;
  longlong *local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 local_58;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  longlong *local_38;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (*(longlong *)(*param_3 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(*param_3 + 8) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_78 = *param_3;
  local_68 = *(undefined8 *)param_3[1];
  plVar5 = *(longlong **)(param_3[1] + 8);
  if (plVar5 == (longlong *)0x0) {
    plVar6 = (longlong *)&DAT_00000008;
  }
  else {
    plVar6 = plVar5 + 1;
    LOCK();
    *(int *)plVar6 = (int)*plVar6 + 1;
    UNLOCK();
  }
  uVar7 = 2;
  plVar4 = plVar5;
  if (plVar5 == (longlong *)0x0) {
    plVar4 = (longlong *)0x2;
  }
  local_88 = plVar5;
  local_38 = param_1;
  FUN_180176690(0,plVar4,local_78);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)(*plVar5 + 8))(plVar5);
    }
  }
  if (param_3[3][0] == '\0') {
    auStack_50 = (undefined1  [16])0x0;
    uStack_40 = 0;
    puVar3 = &local_58;
  }
  else {
    puVar3 = (undefined8 *)FUN_180163ae0(local_78,param_3[3] + 8);
    uVar7 = 1;
    unaff_retaddr = *puVar3;
  }
  local_88 = (longlong *)CONCAT44(local_88._4_4_,uVar7);
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x140) = unaff_retaddr;
  plVar5 = (longlong *)(lVar2 + 0x148);
  if (plVar5 != puVar3 + 1) {
    lVar2 = puVar3[1];
    FUN_1801780e0(plVar5,lVar2,puVar3[2] - lVar2 >> 3);
  }
  if ((uVar7 & 2) != 0) {
    uVar7 = uVar7 & 0xfffffffd;
    FUN_1800f0160(auStack_50);
  }
  if ((uVar7 & 1) != 0) {
    FUN_1800f0160(local_78 + 8);
  }
  *(undefined1 *)(*param_1 + 0xc) = 0;
  *(undefined1 *)(*param_1 + 0xd) = 0;
  FUN_180159a00(*param_1 + 0x160,0);
  lVar2 = *param_1;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_88 = (longlong *)0x180827288;
    local_80 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_88);
  }
  local_88 = (longlong *)
             (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x20);
  if (local_88 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  else {
    *local_88 = (longlong)
                Concurrency::details::
                _PPLTaskHandle<unsigned_char,Concurrency::task<unsigned_char>::_InitialTaskHandle<void,`public:___cdecl_std::_Task_async_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>::_Task_async_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_><std::_Fake_no_copy_callable_adapter<`public:_bool___cdecl_HvhgodInternal::ConfigManager::Refresh(bool)___ptr64'::`15'::<lambda_1>_>_>(std::_Fake_no_copy_callable_adapter<`public:_bool___cdecl_HvhgodInternal::ConfigManager::Refresh(bool)___ptr64'::`15'::<lambda_1>_>&&___ptr64)___ptr64'::`2'::<lambda_1>,Concurrency::details::_TypeSelectorNoAsync>,Concurrency::details::_TaskProcHandle>
                ::vftable;
    local_88[1] = 0;
    local_88[2] = 0;
    if (param_1[1] != 0) {
      LOCK();
      piVar1 = (int *)(param_1[1] + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_88[1] = *param_1;
    local_88[2] = param_1[1];
    *local_88 = (longlong)
                Concurrency::task<unsigned_char>::
                _InitialTaskHandle<void,`public:___cdecl_std::_Task_async_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>::_Task_async_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_><std::_Fake_no_copy_callable_adapter<`public:_bool___cdecl_HvhgodInternal::ConfigManager::Refresh(bool)___ptr64'::`15'::<lambda_1>_>_>(std::_Fake_no_copy_callable_adapter<`public:_bool___cdecl_HvhgodInternal::ConfigManager::Refresh(bool)___ptr64'::`15'::<lambda_1>_>&&___ptr64)___ptr64'::`2'::<lambda_1>,Concurrency::details::_TypeSelectorNoAsync>
                ::vftable;
    local_88[3] = param_2;
    plVar5 = local_88;
  }
  FUN_180164050(lVar2,plVar5,0);
  return param_1;
}



