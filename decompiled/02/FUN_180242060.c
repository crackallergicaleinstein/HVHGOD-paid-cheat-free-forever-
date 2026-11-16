// FUN_180242060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180242060 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180242060(longlong param_1)

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
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x50);
  *puVar4 = std::
            _Func_impl_no_alloc<`private:_void___cdecl_features::combat::legit::apply_triggerbot(systems::input::usercmd*___ptr64,math::vector3_const&___ptr64,math::vector3_const&___ptr64,math::vector3_const&___ptr64,settings::combat::legitbot::weapon_group_const&___ptr64,systems::local::snapshot_const&___ptr64)___ptr64'::`117'::<lambda_20>,void>
            ::vftable;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  puVar4[1] = *(undefined8 *)(param_1 + 8);
  puVar4[2] = uVar1;
  puVar4[3] = uVar2;
  puVar4[4] = uVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x40);
  puVar4[5] = *(undefined8 *)(param_1 + 0x28);
  puVar4[6] = uVar1;
  puVar4[7] = uVar2;
  puVar4[8] = uVar3;
  puVar4[9] = *(undefined8 *)(param_1 + 0x48);
  return;
}



