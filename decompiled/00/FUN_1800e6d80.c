// FUN_1800e6d80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6d80 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800e6d80(undefined1 *param_1,undefined8 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_1a8 [48];
  undefined4 local_178;
  undefined8 *local_168;
  longlong local_160;
  undefined1 *local_158;
  undefined1 local_150 [72];
  longlong local_108 [7];
  longlong *local_d0;
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
  uVar3 = FUN_180111f10(local_150,param_3);
  plVar2 = param_2 + 2;
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
    param_2 = (undefined8 *)*param_2;
  }
  local_160 = *plVar2 + (longlong)puVar1;
  local_168 = param_2;
  uVar3 = FUN_1800f6fc0(local_108,&local_168,uVar3,0);
  FUN_1801100f0(uVar3);
  FUN_18015c010(local_70);
  FUN_180113710(local_88);
  if (local_d0 != (longlong *)0x0) {
    (**(code **)(*local_d0 + 0x20))(local_d0,local_d0 != local_108);
  }
  plVar2 = (longlong *)param_3[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
}



