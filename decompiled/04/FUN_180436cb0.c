// FUN_180436cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180436cb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180436cb0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auStack_68 [32];
  undefined4 *local_48;
  undefined4 *local_40;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 uStack_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  plVar1 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar1 + 0x88))(plVar1,*(undefined8 *)(*param_1 + 0x40));
  (**(code **)(**(longlong **)(*param_1 + 8) + 0xc0))(*(longlong **)(*param_1 + 8),4);
  local_40 = &local_28;
  local_24 = 0x14;
  local_48 = &local_24;
  local_28 = 0;
  plVar1 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar1 + 0x90))(plVar1,0,1,*param_1 + 0x10);
  plVar1 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar1 + 0x98))(plVar1,*(undefined8 *)(*param_1 + 0x18),0x2a,0);
  plVar1 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar1 + 0x58))(plVar1,*(undefined8 *)(*param_1 + 0x30),0,0);
  plVar1 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar1 + 0x38))(plVar1,0,1,*param_1 + 0x20);
  plVar1 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar1 + 0x48))(plVar1,*(undefined8 *)(*param_1 + 0x38),0,0);
  plVar1 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar1 + 0x50))(plVar1,0,1,*param_1 + 0x60);
  plVar1 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar1 + 0x158))(plVar1,*(undefined8 *)(*param_1 + 0x48));
  (**(code **)(**(longlong **)(*param_1 + 8) + 0x168))(*(longlong **)(*param_1 + 8),1,param_1[1]);
  local_20 = 0;
  uStack_18 = 0;
  plVar1 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar1 + 0x118))(plVar1,*(undefined8 *)(*param_1 + 0x50),&local_20,0xffffffff);
  plVar1 = *(longlong **)(*param_1 + 8);
  (**(code **)(*plVar1 + 0x120))(plVar1,*(undefined8 *)(*param_1 + 0x58),0);
}



