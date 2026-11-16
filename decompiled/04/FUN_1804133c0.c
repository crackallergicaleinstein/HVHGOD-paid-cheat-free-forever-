// FUN_1804133c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804133c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804133c0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 auStack_798 [32];
  undefined ***local_778;
  undefined1 local_770;
  undefined4 local_768;
  undefined4 uStack_764;
  undefined1 local_760 [16];
  undefined *local_750;
  undefined **local_748 [7];
  undefined ***local_710;
  undefined8 local_708;
  undefined4 local_700;
  longlong local_6f8;
  longlong local_6f0;
  uint local_6e8;
  longlong local_6e0 [12];
  undefined1 local_680 [16];
  undefined8 local_670;
  undefined1 local_668;
  undefined1 local_658 [1537];
  char local_57;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_798;
  FUN_18063ab10(&local_708,0,0xa8);
  puVar4 = (undefined4 *)FUN_1803a52e0();
  uVar8 = *puVar4;
  puVar5 = (undefined8 *)FUN_180416b80();
  local_708 = *puVar5;
  local_700 = uVar8;
  FUN_18017bf40(&local_6f8);
  local_6f0 = local_6f8;
  local_6e8 = 1;
  local_6e0[0] = 0;
  local_6e0[1] = 0;
  local_6e0[2] = 0;
  local_6e0[3] = 0;
  local_6e0[4] = 0;
  local_6e0[5] = 0;
  local_6e0[6] = 0;
  local_6e0[7] = 0;
  local_6e0[8] = 0;
  local_6e0[9] = 0;
  local_6e0[10] = 0;
  local_6e0[0xb] = 0;
  local_680 = (undefined1  [16])0x0;
  local_670 = 0;
  local_668 = 0;
  plVar6 = (longlong *)FUN_180416b80();
  *plVar6 = (longlong)&local_708;
  local_750 = &DAT_180b8e1c8;
  iVar3 = FUN_1805f68d0(&DAT_180b8e1c8);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e214 == 0x7fffffff) {
    DAT_180b8e214 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_18017bf40(&local_768);
  local_6e0[local_6e8] = local_6e0[local_6e8] + (CONCAT44(uStack_764,local_768) - local_6f0);
  local_6e8 = 3;
  DAT_180b8e111 = 0;
  if (((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x40), lVar1 != 0)) && (lVar1 != -0x10)) {
    uVar8 = 0;
    lVar7 = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      lVar7 = *(longlong *)(lVar1 + 0x40) + 0x10;
    }
    if ((lVar7 != 0) && (*(int *)(lVar1 + 0x20) < 0x21)) {
      local_760 = (undefined1  [16])0x0;
      plVar6 = (longlong *)FUN_180416b80();
      lVar1 = *plVar6;
      local_760._0_8_ = lVar1;
      if (lVar1 != 0) {
        FUN_18017bf40(&local_768);
        plVar6 = (longlong *)(lVar1 + 0x28 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8);
        *plVar6 = *plVar6 + (CONCAT44(uStack_764,local_768) - *(longlong *)(lVar1 + 0x18));
        *(longlong *)(lVar1 + 0x18) = CONCAT44(uStack_764,local_768);
        uVar8 = *(undefined4 *)(lVar1 + 0x20);
        *(undefined4 *)(lVar1 + 0x20) = 2;
      }
      local_760._8_4_ = uVar8;
      FUN_18063ab10(local_658,0,0x608);
      uStack_764 = CONCAT31(uStack_764._1_3_,1);
      local_768 = param_4;
      FUN_180412ec0(local_658,param_2,CONCAT44(uStack_764,param_4));
      if (local_57 != '\0') {
        local_748[0] = std::
                       _Func_impl_no_alloc<`public:_bool___cdecl_systems::prediction::simulate_movement(systems::input::usercmd*___ptr64,systems::local::snapshot_const&___ptr64,float)___ptr64'::`2'::<lambda_1>,bool,int>
                       ::vftable;
        local_710 = local_748;
        local_770 = 0;
        local_778 = local_748;
        uVar2 = FUN_180401380(&DAT_180b8e110,param_2,param_3,1);
        if (local_710 != (undefined ***)0x0) {
          (*(code *)(*local_710)[4])(local_710,local_710 != local_748);
        }
        local_668 = uVar2;
      }
      FUN_180413240(local_658);
      if (lVar1 != 0) {
        FUN_18017bf40(&local_768);
        plVar6 = (longlong *)(lVar1 + 0x28 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8);
        *plVar6 = *plVar6 + (CONCAT44(uStack_764,local_768) - *(longlong *)(lVar1 + 0x18));
        *(longlong *)(lVar1 + 0x18) = CONCAT44(uStack_764,local_768);
        *(undefined4 *)(lVar1 + 0x20) = uVar8;
      }
    }
  }
  FUN_1805f68fc(&DAT_180b8e1c8);
  FUN_1804150b0(&local_708);
}



