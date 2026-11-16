// FUN_180351e20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180351e20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180351e20(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  char *local_18;
  undefined8 local_10;
  
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_10 = 0x15;
    local_18 = "tier0.dll:g_pMemAlloc";
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_18);
  }
  puVar4 = (undefined8 *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
  *puVar4 = std::
            _Func_impl_no_alloc<`public:___cdecl_`public:_void___cdecl_features::movement::edgebug::on_create_move(systems::input::usercmd*___ptr64)___ptr64'::`2'::<lambda_29>::operator()(`public:_void___cdecl_features::movement::edgebug::on_create_move(systems::input::usercmd*___ptr64)___ptr64'::`2'::candidate_const&___ptr64,int,features::movement::_anon_95E8CDB1::trial&___ptr64)const___ptr64'::`2'::<lambda_2>,bool,int>
            ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[1] = *(undefined8 *)(param_1 + 8);
  puVar4[2] = uVar1;
  puVar4[3] = uVar2;
  puVar4[4] = uVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  puVar4[6] = uVar1;
  puVar4[7] = *(undefined8 *)(param_1 + 0x38);
  return;
}



