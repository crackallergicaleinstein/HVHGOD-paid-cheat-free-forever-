// FUN_180413b80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180413b80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180413b80(undefined8 param_1,longlong param_2,longlong param_3,int param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined1 auStack_888 [32];
  undefined ***local_868;
  undefined1 local_860;
  undefined1 local_858;
  undefined4 local_850;
  uint uStack_84c;
  longlong local_848;
  undefined1 local_840 [16];
  undefined **local_828;
  undefined8 local_820;
  undefined1 *local_818;
  char *local_810;
  undefined ***local_7f0;
  undefined *local_7e8;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 local_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined4 local_728;
  char local_718 [16];
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
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_888;
  uVar9 = 0;
  local_850 = 0;
  local_848 = param_3;
  FUN_18063ab10(&local_708,0,0xa8);
  puVar5 = (undefined8 *)FUN_180416b80();
  local_708 = *puVar5;
  local_700 = 3;
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
  local_7e8 = &DAT_180b8e1c8;
  iVar4 = FUN_1805f68d0(&DAT_180b8e1c8);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e214 == 0x7fffffff) {
    DAT_180b8e214 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_18017bf40(&local_850);
  lVar1 = CONCAT44(uStack_84c,local_850);
  local_6e0[local_6e8] = local_6e0[local_6e8] + (lVar1 - local_6f0);
  local_6e8 = 3;
  local_6f0 = lVar1;
  if (((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x40), lVar1 != 0)) && (lVar1 != -0x10)) {
    lVar7 = 0;
    if (*(longlong *)(lVar1 + 0x40) != 0) {
      lVar7 = *(longlong *)(lVar1 + 0x40) + 0x10;
    }
    if (((lVar7 != 0) && (*(int *)(lVar1 + 0x20) < 0x21)) &&
       ((local_858 = param_4 == 2, !(bool)local_858 || (cVar3 = FUN_180303ad0(2), cVar3 != '\0'))))
    {
      local_7d8 = _DAT_180b8e110;
      uStack_7d0 = DAT_180b8e118;
      uStack_7c8 = _DAT_180b8e120;
      uStack_7c0 = ram0x000180b8e128;
      local_7b8 = _DAT_180b8e130;
      uStack_7b0 = _DAT_180b8e138;
      uStack_7a8 = _DAT_180b8e140;
      uStack_7a0 = _DAT_180b8e148;
      local_798 = _DAT_180b8e150;
      uStack_790 = _DAT_180b8e158;
      uStack_788 = _DAT_180b8e160;
      uStack_780 = DAT_180b8e168;
      local_778 = _DAT_180b8e170;
      uStack_770 = ram0x000180b8e178;
      uStack_768 = _DAT_180b8e180;
      uStack_760 = _DAT_180b8e188;
      local_758 = _DAT_180b8e190;
      uStack_750 = _DAT_180b8e198;
      uStack_748 = _DAT_180b8e1a0;
      uStack_740 = _DAT_180b8e1a8;
      local_738 = _DAT_180b8e1b0;
      uStack_730 = _DAT_180b8e1b8;
      local_728 = DAT_180b8e1c0;
      local_840 = (undefined1  [16])0x0;
      plVar6 = (longlong *)FUN_180416b80();
      lVar1 = *plVar6;
      local_840._0_8_ = lVar1;
      if (lVar1 != 0) {
        FUN_18017bf40(&local_850);
        plVar6 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
        *plVar6 = *plVar6 + (CONCAT44(uStack_84c,local_850) - *(longlong *)(lVar1 + 0x18));
        *(longlong *)(lVar1 + 0x18) = CONCAT44(uStack_84c,local_850);
        uVar9 = *(undefined4 *)(lVar1 + 0x20);
        *(undefined4 *)(lVar1 + 0x20) = 2;
      }
      local_840._8_4_ = uVar9;
      FUN_18063ab10(local_658,0,0x608);
      uVar2 = uStack_84c;
      uStack_84c = uStack_84c & 0xffffff00;
      FUN_180412ec0(local_658,param_2,CONCAT44(uVar2,local_850) & 0xffffff00ffffffff);
      if (local_57 != '\0') {
        local_718[0] = '\0';
        local_828 = std::
                    _Func_impl_no_alloc<`public:_bool___cdecl_systems::prediction::simulate_lookahead(systems::input::usercmd*___ptr64,systems::local::snapshot_const&___ptr64,int,std::function<bool___cdecl(int)>_const&___ptr64)___ptr64'::`9'::<lambda_1>,bool,int>
                    ::vftable;
        local_820 = param_5;
        local_818 = local_658;
        local_810 = local_718;
        local_7f0 = &local_828;
        local_850 = 1;
        local_860 = local_858;
        local_868 = &local_828;
        cVar3 = FUN_180401380(&DAT_180b8e110,param_2,local_848,param_4);
        if ((cVar3 == '\0') || (local_718[0] != '\0')) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
        if (local_7f0 != (undefined ***)0x0) {
          (*(code *)(*local_7f0)[4])(local_7f0,local_7f0 != &local_828);
        }
        _DAT_180b8e110 = local_7d8;
        DAT_180b8e118 = uStack_7d0;
        _DAT_180b8e120 = uStack_7c8;
        ram0x000180b8e128 = uStack_7c0;
        _DAT_180b8e130 = local_7b8;
        _DAT_180b8e138 = uStack_7b0;
        _DAT_180b8e140 = uStack_7a8;
        _DAT_180b8e148 = uStack_7a0;
        _DAT_180b8e150 = local_798;
        _DAT_180b8e158 = uStack_790;
        _DAT_180b8e160 = uStack_788;
        DAT_180b8e168 = uStack_780;
        _DAT_180b8e170 = local_778;
        ram0x000180b8e178 = uStack_770;
        _DAT_180b8e180 = uStack_768;
        _DAT_180b8e188 = uStack_760;
        _DAT_180b8e190 = local_758;
        _DAT_180b8e198 = uStack_750;
        _DAT_180b8e1a0 = uStack_748;
        _DAT_180b8e1a8 = uStack_740;
        _DAT_180b8e1b0 = local_738;
        _DAT_180b8e1b8 = uStack_730;
        DAT_180b8e1c0 = local_728;
        local_668 = uVar8;
        FUN_180413240(local_658);
        if (lVar1 != 0) {
          FUN_18017bf40(&local_848);
          plVar6 = (longlong *)(lVar1 + 0x28 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8);
          *plVar6 = *plVar6 + (local_848 - *(longlong *)(lVar1 + 0x18));
          *(longlong *)(lVar1 + 0x18) = local_848;
          *(undefined4 *)(lVar1 + 0x20) = uVar9;
        }
        FUN_1805f68fc(&DAT_180b8e1c8);
        FUN_1804150b0(&local_708);
      }
      FUN_180413240(local_658);
      if (lVar1 != 0) {
        FUN_18017bf40(&local_850);
        plVar6 = (longlong *)(lVar1 + (ulonglong)*(uint *)(lVar1 + 0x20) * 8 + 0x28);
        *plVar6 = *plVar6 + (CONCAT44(uStack_84c,local_850) - *(longlong *)(lVar1 + 0x18));
        *(longlong *)(lVar1 + 0x18) = CONCAT44(uStack_84c,local_850);
        *(undefined4 *)(lVar1 + 0x20) = uVar9;
      }
    }
  }
  FUN_1805f68fc(&DAT_180b8e1c8);
  FUN_1804150b0(&local_708);
}



