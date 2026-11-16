// FUN_1801795d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801795d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_1801795d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char *local_28;
  undefined8 local_20;
  undefined8 *local_18;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_28 = "tier0.dll:g_pMemAlloc";
    local_20 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_28);
  }
  puVar2 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x48);
  *puVar2 = std::
            _Func_impl_no_alloc<`class_std::function<unsigned_char___cdecl(void)>___cdecl_Concurrency::details::_MakeVoidToUnitFunc(std::function<void___cdecl(void)>_const&___ptr64)'::`2'::<lambda_1>,unsigned_char>
            ::vftable;
  local_28 = (char *)(puVar2 + 1);
  puVar2[8] = 0;
  puVar1 = *(undefined8 **)(param_1 + 0x40);
  if (puVar1 != (undefined8 *)0x0) {
    local_18 = puVar2;
    uVar3 = (**(code **)*puVar1)(puVar1,local_28);
    puVar2[8] = uVar3;
  }
  return puVar2;
}



