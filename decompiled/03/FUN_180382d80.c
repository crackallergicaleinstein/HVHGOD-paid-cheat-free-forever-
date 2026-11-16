// FUN_180382d80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180382d80 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180382d80(undefined8 param_1,longlong *param_2,int param_3,int param_4,int param_5,
                  int param_6,undefined8 param_7)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  int iVar4;
  undefined *puVar5;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_98;
  longlong *local_90;
  int local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int iStack_78;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  int local_58;
  int local_54;
  undefined1 local_50 [16];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  plVar3 = (longlong *)DAT_180ba3138;
  if (((longlong *)DAT_180ba3138 != param_2) &&
     (FUN_180377080(), plVar3 = (longlong *)DAT_180ba3138, (longlong *)DAT_180ba3138 != param_2)) {
    if (param_2 != (longlong *)0x0) {
      (**(code **)(*param_2 + 8))(param_2);
    }
    plVar3 = param_2;
    if ((longlong *)DAT_180ba3138 != (longlong *)0x0) {
      lVar1 = *(longlong *)DAT_180ba3138;
      DAT_180ba3138 = (longlong)param_2;
      (**(code **)(lVar1 + 0x10))();
      plVar3 = (longlong *)DAT_180ba3138;
    }
  }
  DAT_180ba3138 = (longlong)plVar3;
  bVar2 = 1 < (uint)param_7;
  if ((&DAT_180ba3150)[bVar2] == 0) {
    puVar5 = &DAT_1808071a0;
    if (bVar2) {
      puVar5 = &DAT_180807020;
    }
    local_a8 = &DAT_180ba3150 + bVar2;
    iVar4 = (**(code **)(*param_2 + 0x78))(param_2,puVar5,(ulonglong)bVar2 * 0x40 + 0x138,0);
    if (iVar4 < 0) {
    }
  }
  if (((((DAT_180ba3148 == 0) || (DAT_180ba3170 != param_3)) || (DAT_180ba3174 != param_4)) ||
      ((DAT_180ba3180 != param_5 || (DAT_180ba319c != param_6)))) ||
     ((DAT_180ba3184 != (uint)param_7 || (DAT_180ba3188 != param_7._4_4_)))) {
    uStack_80 = 1;
    uStack_7c = 1;
    iStack_78 = param_5;
    uStack_74 = (uint)param_7;
    iStack_70 = param_7._4_4_;
    uStack_6c = 0;
    local_68 = 8;
    local_60 = 0;
    local_58 = param_6;
    local_54 = (uint)bVar2 * 2 + 4;
    local_50 = ZEXT116(!bVar2) << 0x20;
    local_98 = (longlong *)0x0;
    local_90 = (longlong *)0x0;
    local_88 = param_3;
    iStack_84 = param_4;
    iVar4 = (**(code **)(*param_2 + 0x28))(param_2,&local_88,0,&local_98);
    if ((-1 < iVar4) &&
       (iVar4 = (**(code **)(*param_2 + 0x38))(param_2,local_98,&local_58,&local_90),
       plVar3 = local_98, lVar1 = DAT_180ba3140, -1 < iVar4)) {
      local_98 = (longlong *)0x0;
      DAT_180ba3140 = (longlong)plVar3;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)lVar1 + 0x10))();
      }
      plVar3 = local_90;
      lVar1 = DAT_180ba3148;
      local_90 = (longlong *)0x0;
      DAT_180ba3148 = (longlong)plVar3;
      if (lVar1 != 0) {
        (**(code **)(*(longlong *)lVar1 + 0x10))();
      }
      _DAT_180ba3170 = CONCAT44(iStack_84,local_88);
      uRam0000000180ba3178 = CONCAT44(uStack_7c,uStack_80);
      _DAT_180ba3180 = CONCAT44(uStack_74,iStack_78);
      _DAT_180ba3188 = CONCAT44(uStack_6c,iStack_70);
      _DAT_180ba3190 = local_68;
      _DAT_180ba3198 = local_60;
      DAT_180ba319c = param_6;
    }
    plVar3 = local_90;
    if (local_90 != (longlong *)0x0) {
      local_90 = (longlong *)0x0;
      (**(code **)(*plVar3 + 0x10))();
    }
    plVar3 = local_98;
    if (local_98 != (longlong *)0x0) {
      local_98 = (longlong *)0x0;
      (**(code **)(*plVar3 + 0x10))();
    }
  }
}



