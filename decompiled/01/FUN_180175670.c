// FUN_180175670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180175670 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180175670(undefined1 *param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 auStack_1b8 [48];
  undefined4 local_188;
  undefined8 *local_178;
  longlong local_170;
  undefined1 *local_168;
  undefined1 local_160 [72];
  longlong local_118 [7];
  longlong *local_e0;
  undefined1 local_98 [24];
  undefined1 local_80 [88];
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_1b8;
  local_188 = 0;
  *param_1 = 0;
  local_168 = param_1;
  local_28 = param_3;
  FUN_180111d10(param_1 + 8,0);
  local_188 = 1;
  uVar3 = FUN_180111f10(local_160,param_3);
  plVar2 = param_2 + 2;
  puVar1 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar1 = (undefined8 *)*param_2;
    param_2 = (undefined8 *)*param_2;
  }
  local_170 = *plVar2 + (longlong)puVar1;
  local_178 = param_2;
  uVar3 = FUN_1800f6fc0(local_118,&local_178,uVar3,param_4);
  FUN_1801100f0(uVar3);
  FUN_18015c010(local_80);
  FUN_180113710(local_98);
  if (local_e0 != (longlong *)0x0) {
    (**(code **)(*local_e0 + 0x20))(local_e0,local_e0 != local_118);
  }
  plVar2 = (longlong *)param_3[7];
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2,plVar2 != param_3);
    param_3[7] = 0;
  }
}



