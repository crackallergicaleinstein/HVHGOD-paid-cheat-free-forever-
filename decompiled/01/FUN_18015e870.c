// FUN_18015e870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015e870 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18015e870(undefined1 *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_1a8 [48];
  undefined4 local_178;
  longlong *local_168;
  undefined8 local_160;
  undefined1 *local_158;
  undefined1 local_150 [72];
  longlong local_108 [7];
  longlong *local_d0;
  undefined1 local_c0 [56];
  undefined1 local_88 [24];
  undefined1 local_70 [88];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_1a8;
  local_178 = 0;
  *param_1 = 0;
  local_158 = param_1;
  local_18 = param_3;
  FUN_180111d10(param_1 + 8,0);
  local_178 = 1;
  uVar2 = FUN_180111f10(local_150,param_3);
  local_160 = *(undefined8 *)((longlong)*(int *)(*param_2 + 4) + 0x48 + (longlong)param_2);
  local_168 = param_2;
  uVar2 = FUN_18015ec20(local_108,&local_168,uVar2);
  FUN_18015ee40(uVar2);
  FUN_18015c010(local_70);
  FUN_180113710(local_88);
  FUN_18015c3e0(local_c0);
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x20))(local_d0,local_d0 != local_108);
  }
  plVar1 = (longlong *)param_3[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_3);
    param_3[7] = 0;
  }
}



