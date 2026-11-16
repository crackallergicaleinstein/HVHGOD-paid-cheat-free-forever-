// FUN_18042c4d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042c4d0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042c4d0(longlong *param_1,longlong *param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  longlong *plVar2;
  undefined1 auStack_68 [48];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_28 = 0;
  local_34 = 2;
  local_2c = 0x10000;
  pcVar1 = *(code **)(*param_1 + 0x18);
  plVar2 = (longlong *)*param_2;
  local_38 = param_3;
  local_30 = param_4;
  if (plVar2 != (longlong *)0x0) {
    *param_2 = 0;
    (**(code **)(*plVar2 + 0x10))();
  }
  (*pcVar1)(param_1,&local_38,0,param_2);
}



