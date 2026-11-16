// FUN_1803387b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803387b0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1803387b0(longlong param_1)

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
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x98);
  *puVar4 = std::
            _Func_impl_no_alloc<`bool___cdecl_features::movement::_anon_FF65DAC3::wall_proof(systems::input::usercmd*___ptr64,proto::base_usercmd_pb*___ptr64,systems::local::snapshot_const&___ptr64,unsigned___int64,float,bool,int,int,int*___ptr64,float*___ptr64,float,int,int,features::movement::_anon_FF65DAC3::proof_info*___ptr64,int*___ptr64,int,bool,float*___ptr64,float,int)'::`2'::<lambda_3>,bool,int>
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
  return;
}



