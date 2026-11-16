// FUN_1800f6fc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f6fc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1800f6fc0(longlong param_1,undefined8 *param_2,longlong *param_3,undefined1 param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  longlong local_88;
  undefined1 local_78 [64];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_88 = param_1;
  local_38 = param_3;
  plVar5 = (longlong *)FUN_180111f10(local_78,param_3);
  local_90 = plVar5;
  FUN_180111f10(param_1,plVar5);
  *(undefined4 *)(param_1 + 0x40) = 0;
  uVar2 = param_2[1];
  *(undefined8 *)(param_1 + 0x48) = *param_2;
  *(undefined8 *)(param_1 + 0x50) = uVar2;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined1 (*) [16])(param_1 + 0x98) = (undefined1  [16])0x0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0xf;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined ***)(param_1 + 0xb8) = &PTR_180700558;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined8 *)(param_1 + 0xd0) = 0;
  puVar6 = (undefined8 *)FUN_18061159c();
  if ((char *)*puVar6 == (char *)0x0) {
    cVar3 = '.';
  }
  else {
    cVar3 = *(char *)*puVar6;
  }
  *(int *)(param_1 + 0xd8) = (int)cVar3;
  *(undefined8 *)(param_1 + 0xe0) = 0xffffffffffffffff;
  *(undefined1 *)(param_1 + 0xe8) = param_4;
  uVar4 = FUN_180150b00(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  plVar1 = (longlong *)plVar5[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != plVar5);
    plVar5[7] = 0;
  }
  plVar5 = (longlong *)param_3[7];
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5,plVar5 != param_3);
    param_3[7] = 0;
  }
}



