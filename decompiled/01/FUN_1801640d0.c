// FUN_1801640d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801640d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801640d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined **local_68;
  longlong *local_60;
  undefined ***local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_28 = (undefined1  [16])0x0;
  (**(code **)(*param_2 + 0x10))(param_2,local_28);
  uVar4 = local_28._0_8_;
  if ((*(int *)(param_1 + 8) == 4) && ((char)param_2[4] == '\0')) {
    local_78 = (longlong *)(param_1 + 0x10);
    bVar6 = *local_78 == 0;
    if (bVar6) {
      local_78 = (longlong *)(local_28._0_8_ + 0x10);
      uVar4 = CONCAT71((int7)((ulonglong)local_78 >> 8),1);
    }
    else {
      uVar4 = 1;
    }
    (**(code **)(*(longlong *)local_28._0_8_ + 8))(local_28._0_8_,uVar4,!bVar6,!bVar6);
    (**(code **)*param_2)(param_2,1);
  }
  else {
    FUN_180159a00((longlong *)(local_28._0_8_ + 0x160),1);
    iVar5 = *(int *)((longlong)param_2 + 0x24);
    if (param_2[2] == 0) {
      FUN_180164050(uVar4,param_2);
    }
    else {
      if (iVar5 != -1) {
        iVar5 = 0x10;
        *(undefined4 *)((longlong)param_2 + 0x24) = 0x10;
      }
      local_68 = std::
                 _Func_impl_no_alloc<`public:_void___cdecl_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_ContinuationTaskHandleBase*___ptr64)___ptr64'::`5'::<lambda_1>,void>
                 ::vftable;
      local_30 = &local_68;
      local_60 = param_2;
      FUN_180163880(&local_68,iVar5);
      if (local_30 != (undefined ***)0x0) {
        (*(code *)(*local_30)[4])(local_30,local_30 != &local_68);
      }
    }
  }
  uVar4 = local_28._8_8_;
  if ((longlong *)local_28._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar1 = (longlong *)(local_28._8_8_ + 8);
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (*(code *)**(undefined8 **)local_28._8_8_)(local_28._8_8_);
      LOCK();
      piVar2 = (int *)(uVar4 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*(longlong *)uVar4 + 8))(uVar4);
      }
    }
  }
}



