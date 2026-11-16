// FUN_18042dd40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042dd40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042dd40(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined1 auStack_138 [48];
  int local_108;
  int local_104;
  undefined4 local_100;
  longlong local_f8;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  undefined8 local_b0;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 local_88;
  undefined8 local_84;
  int local_78;
  int local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  ulonglong local_48;
  
  lVar4 = DAT_180bbaf30;
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  local_108 = param_1;
  local_104 = param_2;
  local_100 = param_3;
  if (DAT_180bbaf30 != 0) {
    DAT_180bbaf30 = 0;
    (**(code **)(*(longlong *)lVar4 + 0x10))();
  }
  lVar4 = DAT_180bbaf38;
  if (DAT_180bbaf38 != 0) {
    DAT_180bbaf38 = 0;
    (**(code **)(*(longlong *)lVar4 + 0x10))();
  }
  lVar4 = DAT_180bbaf30;
  plVar7 = DAT_180bbab70;
  local_dc = 1;
  local_cc = 0;
  local_e8 = 1;
  local_e4 = 1;
  local_d4 = 0;
  local_d0 = 8;
  pcVar1 = *(code **)(*DAT_180bbab70 + 0x28);
  local_f0 = param_1;
  local_ec = param_2;
  local_e0 = param_3;
  if (DAT_180bbaf30 != 0) {
    DAT_180bbaf30 = 0;
    (**(code **)(*(longlong *)lVar4 + 0x10))();
  }
  (*pcVar1)(plVar7,&local_f0,0,&DAT_180bbaf30);
  lVar4 = DAT_180bbaf38;
  plVar7 = DAT_180bbab70;
  local_bc = 4;
  local_b0 = 0;
  local_c0 = local_e0;
  local_f8 = 4;
  local_b4 = 1;
  pcVar1 = *(code **)(*DAT_180bbab70 + 0x38);
  if (DAT_180bbaf38 != 0) {
    DAT_180bbaf38 = 0;
    (**(code **)(*(longlong *)lVar4 + 0x10))();
  }
  (*pcVar1)(plVar7,DAT_180bbaf30,&local_c0,&DAT_180bbaf38);
  plVar7 = &DAT_180bbae18;
  puVar8 = &DAT_180bbae08;
  do {
    iVar6 = param_1 / 2;
    param_1 = 1;
    if (1 < iVar6) {
      param_1 = iVar6;
    }
    iVar6 = param_2 / 2;
    param_2 = 1;
    if (1 < iVar6) {
      param_2 = iVar6;
    }
    plVar2 = (longlong *)plVar7[-2];
    if (plVar2 != (longlong *)0x0) {
      plVar7[-2] = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = (longlong *)plVar7[-1];
    if (plVar2 != (longlong *)0x0) {
      plVar7[-1] = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = (longlong *)*plVar7;
    if (plVar2 != (longlong *)0x0) {
      *plVar7 = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    *(int *)(plVar7 + 1) = param_1;
    *(int *)((longlong)plVar7 + 0xc) = param_2;
    plVar3 = DAT_180bbab70;
    local_94 = 1;
    local_84 = 0;
    local_a0 = 1;
    local_9c = 1;
    local_98 = 0x1c;
    local_8c = 0;
    local_88 = 0x28;
    pcVar1 = *(code **)(*DAT_180bbab70 + 0x28);
    plVar2 = (longlong *)plVar7[-2];
    local_a8 = param_1;
    local_a4 = param_2;
    if (plVar2 != (longlong *)0x0) {
      plVar7[-2] = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    (*pcVar1)(plVar3,&local_a8,0,puVar8);
    plVar3 = DAT_180bbab70;
    pcVar1 = *(code **)(*DAT_180bbab70 + 0x48);
    plVar2 = (longlong *)plVar7[-1];
    if (plVar2 != (longlong *)0x0) {
      plVar7[-1] = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    (*pcVar1)(plVar3,plVar7[-2],0,plVar7 + -1);
    plVar3 = DAT_180bbab70;
    pcVar1 = *(code **)(*DAT_180bbab70 + 0x38);
    plVar2 = (longlong *)*plVar7;
    if (plVar2 != (longlong *)0x0) {
      *plVar7 = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    (*pcVar1)(plVar3,plVar7[-2],0,plVar7);
    iVar5 = local_104;
    iVar6 = local_108;
    lVar4 = DAT_180bbaf80;
    puVar8 = puVar8 + 4;
    plVar7 = plVar7 + 4;
    local_f8 = local_f8 + -1;
  } while (local_f8 != 0);
  DAT_180bbaf70 = local_108;
  DAT_180bbaf74 = local_104;
  DAT_180bbaf78 = local_100;
  if (DAT_180bbaf80 != 0) {
    DAT_180bbaf80 = 0;
    (**(code **)(*(longlong *)lVar4 + 0x10))();
  }
  lVar4 = DAT_180bbaf88;
  if (DAT_180bbaf88 != 0) {
    DAT_180bbaf88 = 0;
    (**(code **)(*(longlong *)lVar4 + 0x10))();
  }
  lVar4 = DAT_180bbaf90;
  if (DAT_180bbaf90 != 0) {
    DAT_180bbaf90 = 0;
    (**(code **)(*(longlong *)lVar4 + 0x10))();
  }
  lVar4 = DAT_180bbaf80;
  plVar7 = DAT_180bbab70;
  local_64 = 1;
  local_54 = 0;
  local_78 = iVar6;
  local_74 = iVar5;
  local_70 = 1;
  local_6c = 1;
  local_68 = 0x1c;
  local_5c = 0;
  local_58 = 0x28;
  pcVar1 = *(code **)(*DAT_180bbab70 + 0x28);
  if (DAT_180bbaf80 != 0) {
    DAT_180bbaf80 = 0;
    (**(code **)(*(longlong *)lVar4 + 0x10))();
  }
  (*pcVar1)(plVar7,&local_78,0,&DAT_180bbaf80);
  lVar4 = DAT_180bbaf88;
  plVar7 = DAT_180bbab70;
  pcVar1 = *(code **)(*DAT_180bbab70 + 0x48);
  if (DAT_180bbaf88 != 0) {
    DAT_180bbaf88 = 0;
    (**(code **)(*(longlong *)lVar4 + 0x10))();
  }
  (*pcVar1)(plVar7,DAT_180bbaf80,0,&DAT_180bbaf88);
  lVar4 = DAT_180bbaf90;
  plVar7 = DAT_180bbab70;
  pcVar1 = *(code **)(*DAT_180bbab70 + 0x38);
  if (DAT_180bbaf90 != 0) {
    DAT_180bbaf90 = 0;
    (**(code **)(*(longlong *)lVar4 + 0x10))();
  }
  (*pcVar1)(plVar7,DAT_180bbaf80,0,&DAT_180bbaf90);
}



