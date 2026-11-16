// FUN_180338870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180338870 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180338870(longlong param_1)

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
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0xa0);
  *puVar4 = std::
            _Func_impl_no_alloc<`public:_struct_`private:_void___cdecl_features::movement::pixelsurf::on_create_move_planes(systems::input::usercmd*___ptr64)___ptr64'::`2'::proof_t___cdecl_`private:_void___cdecl_features::movement::pixelsurf::on_create_move_planes(systems::input::usercmd*___ptr64)___ptr64'::`2'::<lambda_25>::operator()(int,int,float)const___ptr64'::`2'::<lambda_1>,bool,int>
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
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  puVar4[9] = *(undefined8 *)(param_1 + 0x48);
  puVar4[10] = uVar1;
  puVar4[0xb] = uVar2;
  puVar4[0xc] = uVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x80);
  puVar4[0xd] = *(undefined8 *)(param_1 + 0x68);
  puVar4[0xe] = uVar1;
  puVar4[0xf] = uVar2;
  puVar4[0x10] = uVar3;
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  puVar4[0x11] = *(undefined8 *)(param_1 + 0x88);
  puVar4[0x12] = uVar1;
  puVar4[0x13] = *(undefined8 *)(param_1 + 0x98);
  return;
}



