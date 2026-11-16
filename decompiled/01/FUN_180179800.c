// FUN_180179800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180179800 */

undefined8 * FUN_180179800(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  
  *param_2 = std::
             _Func_impl_no_alloc<`public:___cdecl_`public:_void___cdecl_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_ContinuationTaskHandleBase*___ptr64)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'::`8'::<lambda_1>,void>
             ::vftable;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  param_2[2] = 0;
  param_2[3] = 0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x18) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_2[2] = *(undefined8 *)(param_1 + 0x10);
  param_2[3] = *(undefined8 *)(param_1 + 0x18);
  return param_2;
}



