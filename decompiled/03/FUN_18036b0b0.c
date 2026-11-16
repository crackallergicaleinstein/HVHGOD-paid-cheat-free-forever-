// FUN_18036b0b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036b0b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_18036b0b0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char *local_58;
  undefined8 local_50;
  longlong local_48 [7];
  longlong *local_10;
  
  local_10 = (longlong *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    local_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  plVar1 = (longlong *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x548);
  *plVar1 = (longlong)
            std::
            _Func_impl_no_alloc<`public:_void___cdecl_features::movement::slope_movement::on_create_move(systems::input::usercmd*___ptr64)___ptr64'::`2'::<lambda_17>,void,systems::input::usercmd*___ptr64>
            ::vftable;
  FUN_18063aed0(plVar1 + 1,param_2,0x540);
  local_10 = plVar1;
  FUN_18036b240(local_48,param_1);
  if (local_10 != (longlong *)0x0) {
    (**(code **)(*local_10 + 0x20))(local_10,local_10 != local_48);
  }
  return param_1;
}



