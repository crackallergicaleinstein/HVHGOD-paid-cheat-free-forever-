// FUN_1803c0a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c0a70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803c0a70(undefined8 *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_58 [48];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_58;
  local_28 = param_4;
  (**(code **)(**(longlong **)*param_1 + 0x40))(*(longlong **)*param_1,0,2,param_1[1]);
  (**(code **)(**(longlong **)*param_1 + 0x108))
            (*(longlong **)*param_1,1,param_1[2] + (longlong)param_2 * 0x18 + 0x10,0);
  (**(code **)(**(longlong **)*param_1 + 0x48))(*(longlong **)*param_1,param_3,0,0);
  (**(code **)(**(longlong **)*param_1 + 0x40))(*(longlong **)*param_1,0,1,&local_28);
  (**(code **)(**(longlong **)*param_1 + 0x68))(*(longlong **)*param_1,3,0);
}



