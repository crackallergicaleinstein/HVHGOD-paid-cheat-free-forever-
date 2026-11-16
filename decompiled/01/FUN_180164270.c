// FUN_180164270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180164270 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180164270(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined ***pppuVar4;
  longlong lVar5;
  undefined ***pppuVar6;
  undefined8 uVar7;
  undefined1 auStack_f8 [32];
  undefined ***local_d8 [2];
  undefined1 *local_c8;
  undefined **local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined ***local_88;
  longlong local_80;
  undefined1 local_78 [16];
  undefined1 local_68 [56];
  undefined8 local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_c8 = (undefined1 *)((ulonglong)local_c8 & 0xffffffff00000000);
  local_28 = (undefined1  [16])0x0;
  (**(code **)(*(longlong *)*param_1 + 0x10))((longlong *)*param_1,local_28);
  local_d8[0] = (undefined ***)0x0;
  local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,1);
  FUN_180159a00(local_d8);
  pppuVar6 = local_d8[0];
  pppuVar4 = *(undefined ****)(*param_1 + 0x10);
  FUN_180159a00(local_d8);
  if (pppuVar6 == pppuVar4) {
    FUN_180164050(local_28._0_8_,*param_1,0xffffffff);
  }
  else {
    lVar5 = *param_1;
    if (local_28._8_8_ != 0) {
      LOCK();
      *(int *)(local_28._8_8_ + 8) = *(int *)(local_28._8_8_ + 8) + 1;
      UNLOCK();
    }
    local_c0 = std::
               _Func_impl_no_alloc<`public:___cdecl_`public:_void___cdecl_Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(Concurrency::details::_ContinuationTaskHandleBase*___ptr64)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'::`8'::<lambda_1>,void>
               ::vftable;
    local_b0 = local_28._0_8_;
    local_a8 = local_28._8_8_;
    local_78 = (undefined1  [16])0x0;
    local_88 = &local_c0;
    local_d8[0] = &local_c0;
    local_c8 = local_68;
    local_30 = 0;
    local_b8 = lVar5;
    local_80 = lVar5;
    local_30 = FUN_180179800(&local_c0,local_68);
    FUN_1805fc8b4(lVar5 + 0x10,local_68,0);
    if (local_88 != (undefined ***)0x0) {
      (*(code *)(*local_88)[4])(local_88,local_88 != &local_c0);
    }
  }
  uVar7 = local_28._8_8_;
  if ((longlong *)local_28._8_8_ != (longlong *)0x0) {
    LOCK();
    plVar1 = (longlong *)(local_28._8_8_ + 8);
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (*(code *)**(undefined8 **)local_28._8_8_)(local_28._8_8_);
      LOCK();
      piVar2 = (int *)(uVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)uVar7 + 8))(uVar7);
      }
    }
  }
}



