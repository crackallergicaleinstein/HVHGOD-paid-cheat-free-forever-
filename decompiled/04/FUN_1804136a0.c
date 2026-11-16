// FUN_1804136a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804136a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804136a0(undefined8 param_1,undefined8 *param_2,longlong param_3,longlong param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_928 [32];
  undefined ***local_908;
  undefined1 local_900;
  longlong local_8f8;
  longlong local_8f0;
  undefined1 local_8e8 [16];
  undefined *local_8d8;
  undefined **local_8c8;
  undefined8 *local_8c0;
  undefined1 *local_8b8;
  undefined ***local_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined4 local_7d8;
  undefined8 local_7c8;
  undefined4 local_7c0;
  longlong local_7b8;
  longlong local_7b0;
  uint local_7a8;
  longlong local_7a0 [12];
  undefined1 local_740 [16];
  undefined8 local_730;
  undefined1 local_728;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined4 local_668;
  uint uStack_664;
  undefined1 local_658 [1537];
  char local_57;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_928;
  local_8f0 = param_4;
  FUN_18063ab10(&local_7c8,0,0xa8);
  puVar4 = (undefined8 *)FUN_180416b80();
  local_7c8 = *puVar4;
  local_7c0 = 2;
  FUN_18017bf40(&local_7b8);
  local_7b0 = local_7b8;
  local_7a8 = 1;
  local_7a0[0] = 0;
  local_7a0[1] = 0;
  local_7a0[2] = 0;
  local_7a0[3] = 0;
  local_7a0[4] = 0;
  local_7a0[5] = 0;
  local_7a0[6] = 0;
  local_7a0[7] = 0;
  local_7a0[8] = 0;
  local_7a0[9] = 0;
  local_7a0[10] = 0;
  local_7a0[0xb] = 0;
  local_740 = (undefined1  [16])0x0;
  local_730 = 0;
  local_728 = 0;
  plVar5 = (longlong *)FUN_180416b80();
  *plVar5 = (longlong)&local_7c8;
  local_8d8 = &DAT_180b8e1c8;
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
  FUN_18017bf40(&local_8f8);
  local_7a0[local_7a8] = local_7a0[local_7a8] + (local_8f8 - local_7b0);
  local_7b0 = local_8f8;
  local_7a8 = 3;
  cVar2 = FUN_180303ad0(1);
  if ((((cVar2 != '\0') && (param_3 != 0)) && (lVar1 = *(longlong *)(param_3 + 0x40), lVar1 != 0))
     && (lVar1 != -0x10)) {
    uVar7 = 0;
    lVar6 = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      lVar6 = *(longlong *)(lVar1 + 0x40) + 0x10;
    }
    if ((lVar6 != 0) && (*(int *)(lVar1 + 0x20) < 0x21)) {
      local_888 = _DAT_180b8e110;
      uStack_880 = DAT_180b8e118;
      uStack_878 = _DAT_180b8e120;
      uStack_870 = ram0x000180b8e128;
      local_868 = _DAT_180b8e130;
      uStack_860 = _DAT_180b8e138;
      uStack_858 = _DAT_180b8e140;
      uStack_850 = _DAT_180b8e148;
      local_848 = _DAT_180b8e150;
      uStack_840 = _DAT_180b8e158;
      uStack_838 = _DAT_180b8e160;
      uStack_830 = DAT_180b8e168;
      local_828 = _DAT_180b8e170;
      uStack_820 = ram0x000180b8e178;
      uStack_818 = _DAT_180b8e180;
      uStack_810 = _DAT_180b8e188;
      local_808 = _DAT_180b8e190;
      uStack_800 = _DAT_180b8e198;
      uStack_7f8 = _DAT_180b8e1a0;
      uStack_7f0 = _DAT_180b8e1a8;
      local_7e8 = _DAT_180b8e1b0;
      uStack_7e0 = _DAT_180b8e1b8;
      local_7d8 = DAT_180b8e1c0;
      local_8e8 = (undefined1  [16])0x0;
      plVar5 = (longlong *)FUN_180416b80();
      lVar1 = *plVar5;
      local_8e8._0_8_ = lVar1;
      if (lVar1 != 0) {
        FUN_18017bf40(&local_8f8);
        plVar5 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
        *plVar5 = *plVar5 + (local_8f8 - *(longlong *)(lVar1 + 0x18));
        *(longlong *)(lVar1 + 0x18) = local_8f8;
        uVar7 = *(undefined4 *)(lVar1 + 0x20);
        *(undefined4 *)(lVar1 + 0x20) = 2;
      }
      local_8e8._8_4_ = uVar7;
      FUN_18063ab10(local_658,0,0x608);
      FUN_180412ec0(local_658,param_3,param_5);
      if (local_57 == '\0') {
        *(undefined1 *)((longlong)param_2 + 0xb4) = 0;
        FUN_180413240(local_658);
        if (lVar1 != 0) {
          FUN_18017bf40(&local_8f8);
          plVar5 = (longlong *)(lVar1 + 0x28 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8);
          *plVar5 = *plVar5 + (local_8f8 - *(longlong *)(lVar1 + 0x18));
          *(longlong *)(lVar1 + 0x18) = local_8f8;
          *(undefined4 *)(lVar1 + 0x20) = uVar7;
        }
      }
      else {
        uStack_664 = uStack_664 & 0xffffff00;
        local_8c8 = std::
                    _Func_impl_no_alloc<`public:_class_std::optional<systems::prediction::state>___cdecl_systems::prediction::simulate_isolated(systems::input::usercmd*___ptr64,systems::local::snapshot_const&___ptr64,std::optional<float>)___ptr64'::`9'::<lambda_1>,bool,int>
                    ::vftable;
        local_8c0 = &local_718;
        local_8b8 = &DAT_180b8e110;
        local_890 = &local_8c8;
        local_900 = 0;
        local_908 = &local_8c8;
        FUN_180401380(&DAT_180b8e110,param_3,local_8f0,1);
        if (local_890 != (undefined ***)0x0) {
          (*(code *)(*local_890)[4])(local_890,local_890 != &local_8c8);
        }
        _DAT_180b8e110 = local_888;
        DAT_180b8e118 = uStack_880;
        _DAT_180b8e120 = uStack_878;
        ram0x000180b8e128 = uStack_870;
        _DAT_180b8e130 = local_868;
        _DAT_180b8e138 = uStack_860;
        _DAT_180b8e140 = uStack_858;
        _DAT_180b8e148 = uStack_850;
        _DAT_180b8e150 = local_848;
        _DAT_180b8e158 = uStack_840;
        _DAT_180b8e160 = uStack_838;
        DAT_180b8e168 = uStack_830;
        _DAT_180b8e170 = local_828;
        ram0x000180b8e178 = uStack_820;
        _DAT_180b8e180 = uStack_818;
        _DAT_180b8e188 = uStack_810;
        _DAT_180b8e190 = local_808;
        _DAT_180b8e198 = uStack_800;
        _DAT_180b8e1a0 = uStack_7f8;
        _DAT_180b8e1a8 = uStack_7f0;
        _DAT_180b8e1b0 = local_7e8;
        _DAT_180b8e1b8 = uStack_7e0;
        DAT_180b8e1c0 = local_7d8;
        local_728 = (undefined1)uStack_664;
        *param_2 = local_718;
        param_2[1] = uStack_710;
        param_2[2] = uStack_708;
        param_2[3] = uStack_700;
        param_2[4] = local_6f8;
        param_2[5] = uStack_6f0;
        param_2[6] = uStack_6e8;
        param_2[7] = uStack_6e0;
        param_2[8] = local_6d8;
        param_2[9] = uStack_6d0;
        param_2[10] = uStack_6c8;
        param_2[0xb] = uStack_6c0;
        param_2[0xc] = local_6b8;
        param_2[0xd] = uStack_6b0;
        param_2[0xe] = uStack_6a8;
        param_2[0xf] = uStack_6a0;
        param_2[0x10] = local_698;
        param_2[0x11] = uStack_690;
        param_2[0x12] = uStack_688;
        param_2[0x13] = uStack_680;
        param_2[0x14] = local_678;
        param_2[0x15] = uStack_670;
        param_2[0x16] = CONCAT44(uStack_664,local_668);
        FUN_180413240(local_658);
        if (lVar1 != 0) {
          FUN_18017bf40(&local_8f0);
          plVar5 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
          *plVar5 = *plVar5 + (local_8f0 - *(longlong *)(lVar1 + 0x18));
          *(longlong *)(lVar1 + 0x18) = local_8f0;
          *(undefined4 *)(lVar1 + 0x20) = uVar7;
        }
      }
      goto LAB_180413b21;
    }
  }
  *(undefined1 *)((longlong)param_2 + 0xb4) = 0;
LAB_180413b21:
  FUN_1805f68fc(&DAT_180b8e1c8);
  FUN_1804150b0(&local_7c8);
}



