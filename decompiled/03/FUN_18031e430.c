// FUN_18031e430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18031e430 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18031e430(longlong param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined1 param_6,int param_7,undefined4 param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,int param_12,
                  int param_13,undefined1 param_14,undefined1 param_15,int param_16,char param_17,
                  float *param_18,undefined4 param_19,int param_20)

{
  ulonglong *puVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  float *pfVar6;
  longlong *plVar7;
  uint *puVar8;
  uint *puVar9;
  float fVar10;
  undefined8 local_res20;
  undefined1 auStack_198 [32];
  longlong *local_178;
  char *local_168;
  undefined8 local_160;
  longlong local_158 [7];
  longlong *local_120;
  longlong local_118;
  uint *local_110;
  char local_108 [4];
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  float local_f8;
  float local_f4;
  undefined4 local_f0;
  float local_e8;
  float local_e4;
  undefined4 local_e0;
  int *local_d8;
  int *local_d0;
  int *local_c8;
  longlong *local_c0;
  uint **local_b8;
  undefined1 *local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  undefined4 *local_98;
  undefined4 *local_90;
  undefined1 *local_88;
  undefined1 local_78 [48];
  undefined1 local_48 [32];
  ulonglong local_28;
  
  pfVar6 = param_18;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  local_res20 = param_4;
  local_118 = param_1;
  local_110 = param_2;
  if ((DAT_180bda168 != 0) &&
     (plVar7 = (longlong *)FUN_18017bf40(&local_168), DAT_180bda168 <= *plVar7)) {
    if (DAT_180bbeaba == '\0') {
      DAT_180bda164 = DAT_180bda164 + 1;
      DAT_180bbeaba = '\x01';
    }
  }
  DAT_180bda1b0 = DAT_180bda1b0 + 1;
  FUN_18030adf0(local_78,local_118,local_110);
  local_b0 = &param_17;
  local_a8 = &local_118;
  local_a0 = &local_res20;
  local_98 = &param_5;
  local_90 = &param_19;
  local_88 = &param_6;
  local_d8 = &param_12;
  local_d0 = &param_13;
  local_c8 = &param_20;
  local_c0 = &local_118;
  local_b8 = &local_110;
  if (DAT_180bbeabe == '\0') {
    if (param_17 == '\0') {
      FUN_18030b660(local_118,local_res20,param_6,param_5);
    }
    else {
      local_178 = (longlong *)CONCAT44(local_178._4_4_,param_19);
      FUN_18030bbc0(local_118,local_res20,param_5,&DAT_180b8e118);
    }
  }
  if (((-1 < *local_d8) && (*local_d8 <= *local_d0)) && ((*local_c8 < 0 || (*local_d0 < *local_c8)))
     ) {
    uVar3 = *(ulonglong *)(*local_c0 + 0x60);
    *(ulonglong *)(*local_c0 + 0x60) = uVar3 | 4;
    puVar1 = (ulonglong *)(*local_c0 + 0x68);
    *puVar1 = *puVar1 | (ulonglong)(((uint)uVar3 ^ (uint)*(undefined8 *)(*local_c0 + 0x60)) & 4);
    puVar9 = *local_b8;
    lVar4 = *local_c0;
    puVar8 = (uint *)0x0;
    if (*(longlong *)(puVar9 + 10) != 0) {
      puVar8 = (uint *)(*(longlong *)(puVar9 + 10) + 0x10);
    }
    if (puVar8 != (uint *)0x0) {
      *puVar9 = *puVar9 | 2;
      uVar5 = *(undefined8 *)(lVar4 + 0x60);
      *puVar8 = *puVar8 | 1;
      uVar2 = *puVar8;
      *(undefined8 *)(puVar8 + 2) = uVar5;
      uVar5 = *(undefined8 *)(lVar4 + 0x68);
      *puVar8 = uVar2 | 2;
      *(undefined8 *)(puVar8 + 4) = uVar5;
      uVar5 = *(undefined8 *)(lVar4 + 0x70);
      *puVar8 = uVar2 | 6;
      *(undefined8 *)(puVar8 + 6) = uVar5;
    }
  }
  if (param_7 != 2) {
    if (param_7 != 3) {
      if (param_7 == 1) {
        uVar3 = *(ulonglong *)(local_118 + 0x60);
        *(ulonglong *)(local_118 + 0x60) = uVar3 | 2;
        *(ulonglong *)(local_118 + 0x68) =
             *(ulonglong *)(local_118 + 0x68) |
             (ulonglong)(((uint)uVar3 ^ (uint)*(undefined8 *)(local_118 + 0x60)) & 2);
        puVar9 = (uint *)0x0;
        if (*(longlong *)(local_110 + 10) != 0) {
          puVar9 = (uint *)(*(longlong *)(local_110 + 10) + 0x10);
        }
        if (puVar9 != (uint *)0x0) {
          *local_110 = *local_110 | 2;
          uVar5 = *(undefined8 *)(local_118 + 0x60);
          *puVar9 = *puVar9 | 1;
          uVar2 = *puVar9;
          *(undefined8 *)(puVar9 + 2) = uVar5;
          uVar5 = *(undefined8 *)(local_118 + 0x68);
          *puVar9 = uVar2 | 2;
          *(undefined8 *)(puVar9 + 4) = uVar5;
          uVar5 = *(undefined8 *)(local_118 + 0x70);
          *puVar9 = uVar2 | 6;
          *(undefined8 *)(puVar9 + 6) = uVar5;
        }
      }
      goto LAB_18031e65c;
    }
    if (param_16 != 0) goto LAB_18031e65c;
  }
  FUN_18031dff0(local_118,local_110,param_11);
LAB_18031e65c:
  local_104 = 0;
  local_fc = 0;
  local_100 = 0;
  local_108[0] = '\0';
  local_e8 = 0.0;
  local_e4 = 0.0;
  local_e0 = 0;
  local_f8 = 0.0;
  local_f4 = 0.0;
  local_f0 = 0;
  local_120 = (longlong *)0x0;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_168 = "tier0.dll:g_pMemAlloc";
    local_160 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_168);
  }
  local_120 = (longlong *)
              (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x98);
  *local_120 = (longlong)
               std::
               _Func_impl_no_alloc<`bool___cdecl_features::movement::_anon_FF65DAC3::wall_proof(systems::input::usercmd*___ptr64,proto::base_usercmd_pb*___ptr64,systems::local::snapshot_const&___ptr64,unsigned___int64,float,bool,int,int,int*___ptr64,float*___ptr64,float,int,int,features::movement::_anon_FF65DAC3::proof_info*___ptr64,int*___ptr64,int,bool,float*___ptr64,float,int)'::`2'::<lambda_3>,bool,int>
               ::vftable;
  local_120[1] = (longlong)&param_7;
  local_120[2] = (longlong)&param_16;
  local_120[3] = (longlong)&param_14;
  local_120[4] = (longlong)local_108;
  local_120[5] = (longlong)&param_15;
  local_120[6] = (longlong)&local_f8;
  local_120[7] = (longlong)&local_118;
  local_120[8] = (longlong)&local_110;
  local_120[9] = (longlong)local_78;
  local_120[10] = (longlong)&local_b0;
  local_120[0xb] = (longlong)&local_d8;
  local_120[0xc] = (longlong)&param_11;
  local_120[0xd] = (longlong)&local_104;
  local_120[0xe] = (longlong)&local_100;
  local_120[0xf] = (longlong)&local_fc;
  local_120[0x10] = (longlong)&param_9;
  local_120[0x11] = (longlong)&param_10;
  local_120[0x12] = (longlong)&local_e8;
  local_178 = local_158;
  FUN_180413b80(&local_e8,local_118,param_3,param_8);
  if (local_120 != (longlong *)0x0) {
    (**(code **)(*local_120 + 0x20))(local_120,local_120 != local_158);
  }
  FUN_18030afc0(local_118,local_110,local_78);
  if ((pfVar6 != (float *)0x0) && (local_108[0] != '\0')) {
    fVar10 = (local_f4 - local_e4) * (local_f4 - local_e4) +
             (local_f8 - local_e8) * (local_f8 - local_e8);
    if (fVar10 < 0.0) {
      fVar10 = (float)FUN_18061e150();
    }
    else {
      fVar10 = SQRT(fVar10);
    }
    *pfVar6 = fVar10;
  }
  FUN_1801b3590(local_48);
}



