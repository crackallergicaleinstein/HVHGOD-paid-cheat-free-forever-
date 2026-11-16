// FUN_18036b3c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036b3c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18036b3c0(longlong param_1)

{
  undefined8 *puVar1;
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_10 = 0x15;
    local_18 = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  puVar1 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x548);
  *puVar1 = std::
            _Func_impl_no_alloc<`public:_void___cdecl_features::movement::slope_movement::on_create_move(systems::input::usercmd*___ptr64)___ptr64'::`2'::<lambda_17>,void,systems::input::usercmd*___ptr64>
            ::vftable;
  FUN_18063aed0(puVar1 + 1,param_1 + 8,0x540);
  return puVar1;
}



