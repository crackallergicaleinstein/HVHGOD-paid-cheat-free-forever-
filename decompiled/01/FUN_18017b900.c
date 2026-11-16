// FUN_18017b900 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017b900 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18017b900(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined **local_a0;
  undefined8 local_98;
  undefined ***local_68;
  undefined1 local_60 [72];
  
  plVar1 = (longlong *)(param_1 + 8);
  lVar2 = *plVar1;
  iVar5 = FUN_1805f68d0(lVar2 + 0x20);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(lVar2 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)(lVar2 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (*(int *)(lVar2 + 8) == 2) {
    FUN_1805f68fc(lVar2 + 0x20);
    plVar1 = (longlong *)*plVar1;
    (**(code **)(*plVar1 + 8))
              (plVar1,CONCAT71((int7)((ulonglong)(plVar1 + 2) >> 8),1),0,0,plVar1 + 2);
  }
  else {
    *(undefined4 *)(lVar2 + 8) = 1;
    FUN_1805f68fc(lVar2 + 0x20);
    lVar2 = *plVar1;
    local_a0 = std::
               _Func_impl_no_alloc<`public:___cdecl_std::_Task_async_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_>::_Task_async_state<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>,std::basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>_>_><std::_Fake_no_copy_callable_adapter<`public:_bool___cdecl_HvhgodInternal::ConfigManager::Refresh(bool)___ptr64'::`15'::<lambda_1>_>_>(std::_Fake_no_copy_callable_adapter<`public:_bool___cdecl_HvhgodInternal::ConfigManager::Refresh(bool)___ptr64'::`15'::<lambda_1>_>&&___ptr64)___ptr64'::`2'::<lambda_1>,void>
               ::vftable;
    local_98 = *(undefined8 *)(param_1 + 0x18);
    local_68 = &local_a0;
    plVar6 = (longlong *)FUN_180164550(local_60,&local_a0);
    lVar7 = *plVar1;
    FUN_180159a00(lVar7 + 0x160);
    if ((longlong *)plVar6[7] == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805fa874();
    }
    uVar4 = (**(code **)(*(longlong *)plVar6[7] + 0x10))();
    FUN_180159a00(lVar7 + 0x160);
    plVar3 = (longlong *)plVar6[7];
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3,plVar3 != plVar6);
      plVar6[7] = 0;
    }
    *(undefined1 *)(lVar2 + 0x170) = uVar4;
    iVar5 = FUN_1805f68d0(lVar2 + 0x20);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (*(int *)(lVar2 + 0x6c) == 0x7fffffff) {
      *(undefined4 *)(lVar2 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if (*(int *)(lVar2 + 8) == 4) {
      FUN_1805f68fc(lVar2 + 0x20);
    }
    else {
      *(undefined4 *)(lVar2 + 8) = 3;
      FUN_1805f68fc(lVar2 + 0x20);
      FUN_180163680(lVar2 + 0x88);
      lVar7 = *(longlong *)(lVar2 + 0x70);
      *(undefined8 *)(lVar2 + 0x70) = 0;
      while (lVar7 != 0) {
        lVar7 = *(longlong *)(lVar7 + 8);
        FUN_1801640d0(lVar2);
      }
    }
    FUN_180159a00(*plVar1 + 0x160);
  }
  return;
}



