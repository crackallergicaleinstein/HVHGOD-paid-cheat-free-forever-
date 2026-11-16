// FUN_1803b2930 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803b2930 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803b2930(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_698 [32];
  undefined **local_678;
  undefined1 *local_670;
  undefined8 local_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  longlong lStack_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined1 local_618 [16];
  undefined8 local_608;
  undefined1 local_600 [16];
  undefined8 uStack_5f0;
  undefined1 auStack_5e8 [16];
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined1 local_568 [16];
  undefined1 local_558 [16];
  undefined8 local_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 local_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 local_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  ulonglong local_4e8;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_698;
  if (DAT_180c6e528 != '\0') {
  }
  if (param_2 == (longlong *)0x0) {
    FUN_18063ab10(local_618,0,0x600);
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"step=swap_chain reason=null_pointer");
LAB_1803b29a0:
    local_678 = &PTR_180700558;
    if (local_618[0] != '\0') {
      local_678 = (undefined **)&DAT_1806bcfc0;
    }
    local_670 = local_618;
    FUN_1800f6900(3);
  }
  iVar3 = (**(code **)(*param_2 + 0x38))(param_2,&DAT_18080c258,&DAT_180c6e508);
  if (iVar3 < 0) {
    FUN_18063ab10(local_618,0,0x600);
    local_678 = (undefined **)CONCAT44(local_678._4_4_,iVar3);
    FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"step=get_device hresult=0x%08lX");
    goto LAB_1803b29a0;
  }
  (**(code **)(*DAT_180c6e508 + 0x140))(DAT_180c6e508,&DAT_180c6e510);
  if (DAT_180c6e510 == 0) {
    FUN_18063ab10(local_618,0,0x600);
    pcVar5 = "step=get_context reason=null_pointer";
  }
  else {
    local_668 = 0;
    uStack_660 = 0;
    uStack_658 = 0;
    uStack_650 = 0;
    local_648 = 0;
    uStack_640 = 0;
    lStack_638 = 0;
    uStack_630 = 0;
    local_628 = 0;
    iVar3 = (**(code **)(*param_2 + 0x60))(param_2,&local_668);
    local_670 = (undefined1 *)lStack_638;
    if ((iVar3 < 0) || (lStack_638 == 0)) {
      FUN_18063ab10(local_618,0,0x600);
      local_678 = (undefined **)CONCAT44(local_678._4_4_,iVar3);
      FUN_18015ad60(local_618,0x600,0xffffffffffffffff,
                    "step=get_swap_chain_description hresult=0x%08lX window=0x%p");
      goto LAB_1803b2d6f;
    }
    DAT_180c6e520 = lStack_638;
    FUN_1803b7200(extraout_XMM0_Qa,param_2);
    lVar1 = DAT_180c6e520;
    if (DAT_180c6e518 != 0) {
      cVar2 = FUN_180435bb0(DAT_180c6e508,DAT_180c6e510);
      if (((cVar2 != '\0') && (_DAT_180c7dd00 = lVar1, lVar1 != 0)) &&
         (cVar2 = FUN_180544af0(lVar1,DAT_180c6e508,DAT_180c6e510), cVar2 != '\0')) {
        local_548 = 0;
        uStack_540 = 0;
        uStack_538 = 0;
        uStack_530 = 0;
        local_528 = 0;
        uStack_520 = 0;
        uStack_518 = 0;
        uStack_510 = 0;
        local_508 = 0;
        uStack_500 = 0;
        uStack_4f8 = 0;
        uStack_4f0 = 0;
        local_4e8 = 0;
        local_618 = (undefined1  [16])0x0;
        local_608 = 0;
        local_600 = (undefined1  [16])0x0;
        uStack_5f0 = 0;
        auStack_5e8 = (undefined1  [16])0x0;
        uStack_5d8 = 0;
        uStack_5d0 = 0;
        uStack_5c8 = 0;
        local_5c0 = 0;
        uStack_5b8 = 0;
        uStack_5b0 = 0;
        uStack_5a8 = 0;
        local_5a0 = 0;
        uStack_598 = 0;
        uStack_590 = 0;
        uStack_588 = 0;
        uStack_580 = 0;
        uStack_578 = 0;
        uVar4 = 0;
        local_570 = 0;
        local_568 = (undefined1  [16])0x0;
        local_558 = (undefined1  [16])0x0;
        FUN_1803b7360(&local_548);
        local_4e8 = local_4e8 & 0xffffffffffffff00;
        DAT_180b90820 = local_618._0_8_;
        DAT_180b90828 = local_618._8_8_;
        DAT_180b90830 = local_608;
        DAT_180b90838 = local_600._0_8_;
        DAT_180b90840 = local_600._8_8_;
        DAT_180b90848 = uStack_5f0;
        DAT_180b90850 = auStack_5e8._0_8_;
        DAT_180b90858 = auStack_5e8._8_8_;
        DAT_180b90860 = uStack_5d8;
        DAT_180b90868 = uStack_5d0;
        uRam0000000180b90870 = uStack_5c8;
        uRam0000000180b90878 = local_5c0;
        uRam0000000180b90880 = uStack_5b8;
        _DAT_180b90888 = uStack_5b0;
        uRam0000000180b90890 = uStack_5a8;
        uRam0000000180b90898 = local_5a0;
        uRam0000000180b908a0 = uStack_598;
        _DAT_180b908a8 = uStack_590;
        uRam0000000180b908b0 = uStack_588;
        uRam0000000180b908b8 = uStack_580;
        uRam0000000180b908c0 = uStack_578;
        DAT_180b908c8 = local_570;
        DAT_180b908d0 = local_568._0_8_;
        DAT_180b908d8 = local_568._8_8_;
        DAT_180b908e0 = local_558._0_8_;
        DAT_180b908e8 = local_558._8_8_;
        do {
          FUN_18020f7a0((longlong)&DAT_180b908f0 + uVar4,local_558 + uVar4 + 0x10);
          uVar4 = uVar4 + 0x18;
        } while (uVar4 < 0x60);
        DAT_180b90950 = (undefined1)local_4e8;
        _eh_vector_destructor_iterator_(&local_548,0x18,4,thunk_FUN_180113710);
        FUN_1803d0100();
        FUN_1803b27a0();
        DAT_180c6e528 = '\x01';
      }
      FUN_18063ab10(local_618,0,0x600);
      local_678 = (undefined **)DAT_180c6e520;
      FUN_18015ad60(local_618,0x600,0xffffffffffffffff,"step=initialize_ui_backend window=0x%p");
      goto LAB_1803b2d6f;
    }
    FUN_18063ab10(local_618,0,0x600);
    pcVar5 = "step=create_render_target reason=null_render_target";
  }
  FUN_18015ad60(local_618,0x600,0xffffffffffffffff,pcVar5);
LAB_1803b2d6f:
  local_678 = &PTR_180700558;
  if (local_618[0] != '\0') {
    local_678 = (undefined **)&DAT_1806bcfc0;
  }
  local_670 = local_618;
  FUN_1800f6900(3);
  FUN_1803b2de0();
}



