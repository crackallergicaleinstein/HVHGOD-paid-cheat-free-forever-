// FUN_180349bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180349bd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180349bd0(undefined8 *param_1,longlong param_2,undefined4 param_3,longlong param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 local_res18 [4];
  undefined1 auStack_108 [32];
  longlong *local_e8;
  char *local_d8;
  undefined8 local_d0;
  longlong local_c8 [7];
  longlong *local_90;
  char local_88 [4];
  int local_84;
  int local_80;
  int local_7c;
  undefined4 local_78 [2];
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 *local_58;
  int *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  iVar1 = DAT_1808e3ac4;
  if (0x168 < DAT_1808e3ac4) {
    iVar1 = 0x168;
  }
  if (DAT_180bda1d8 < iVar1) {
    local_res18[0] = param_3;
    FUN_180349a00(*param_1);
    if ((*(char *)(param_1[1] + 1) == '\0') ||
       (local_7c = *(int *)(param_1[1] + 0x44), local_7c < 0)) {
      lVar2 = 0xd4;
      if (*(int *)(param_2 + 0xd8) == 0) {
        lVar2 = 4;
      }
      lVar2 = FUN_18033d780(&local_d8,*(undefined4 *)(lVar2 + param_2),*(undefined4 *)param_1[2]);
      local_7c = *(int *)(lVar2 + 0xc);
    }
    local_68 = param_1[3];
    local_60 = param_1[4];
    local_58 = local_res18;
    local_50 = &local_7c;
    local_48 = param_1[5];
    local_78[0] = *(undefined4 *)(param_1[6] + 8);
    local_70 = param_2;
    FUN_180349e00(&local_70,1,param_1[6],param_1[7]);
    iVar1 = 1;
    if (1 < *(int *)(param_2 + 0x1c)) {
      iVar1 = *(int *)(param_2 + 0x1c);
    }
    iVar3 = *(int *)param_1[8];
    if (iVar1 + 0xc < *(int *)param_1[8]) {
      iVar3 = iVar1 + 0xc;
    }
    local_84 = 0;
    local_88[0] = '\0';
    local_80 = 0;
    lVar2 = param_1[10];
    local_90 = (longlong *)0x0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_d8 = "tier0.dll:g_pMemAlloc";
      local_d0 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_d8);
    }
    local_90 = (longlong *)
               (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x40);
    *local_90 = (longlong)
                std::
                _Func_impl_no_alloc<`public:___cdecl_`public:_void___cdecl_features::movement::edgebug::on_create_move(systems::input::usercmd*___ptr64)___ptr64'::`2'::<lambda_29>::operator()(`public:_void___cdecl_features::movement::edgebug::on_create_move(systems::input::usercmd*___ptr64)___ptr64'::`2'::candidate_const&___ptr64,int,features::movement::_anon_95E8CDB1::trial&___ptr64)const___ptr64'::`2'::<lambda_2>,bool,int>
                ::vftable;
    local_90[1] = (longlong)&local_80;
    local_90[2] = (longlong)local_88;
    local_90[3] = param_4;
    local_90[4] = (longlong)local_78;
    local_90[5] = lVar2;
    local_90[6] = (longlong)&local_84;
    local_90[7] = (longlong)&local_70;
    local_e8 = local_c8;
    FUN_180413b80(&local_70,*(undefined8 *)param_1[3],param_1[9],iVar3);
    if (local_90 != (longlong *)0x0) {
      (**(code **)(*local_90 + 0x20))(local_90,local_90 != local_c8);
    }
    if (local_84 == 0) {
      if (local_88[0] == '\0') {
        if ((DAT_180bda1d8 < 0x169) && (local_84 = 0, iVar3 <= local_80)) {
          local_84 = 2;
        }
      }
      else {
        local_84 = 1;
      }
    }
    FUN_180349a00(*param_1);
  }
}



