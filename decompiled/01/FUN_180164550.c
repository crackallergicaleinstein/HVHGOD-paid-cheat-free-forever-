// FUN_180164550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180164550 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180164550(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_b8 [48];
  char *local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 *local_70;
  longlong local_68 [7];
  longlong *local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_30 = (longlong *)0x0;
  puVar2 = (undefined8 *)param_2[7];
  local_78 = param_1;
  local_28 = param_2;
  if (puVar2 != (undefined8 *)0x0) {
    local_30 = (longlong *)(**(code **)*puVar2)(puVar2,local_68);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_88 = "tier0.dll:g_pMemAlloc";
    local_80 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_88);
  }
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *puVar2 = std::
            _Func_impl_no_alloc<`class_std::function<unsigned_char___cdecl(void)>___cdecl_Concurrency::details::_MakeVoidToUnitFunc(std::function<void___cdecl(void)>_const&___ptr64)'::`2'::<lambda_1>,unsigned_char>
            ::vftable;
  local_88 = (char *)(puVar2 + 1);
  puVar2[8] = 0;
  local_70 = puVar2;
  if (local_30 != (longlong *)0x0) {
    uVar3 = (**(code **)*local_30)(local_30,local_88);
    puVar2[8] = uVar3;
  }
  *(undefined8 **)(param_1 + 0x38) = puVar2;
  if (local_30 != (longlong *)0x0) {
    (**(code **)(*local_30 + 0x20))(local_30,local_30 != local_68);
  }
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
}



