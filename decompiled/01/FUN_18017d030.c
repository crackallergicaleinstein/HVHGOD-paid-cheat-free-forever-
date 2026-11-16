// FUN_18017d030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017d030 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 * FUN_18017d030(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 local_28 [32];
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  (**(code **)(*(longlong *)param_2[1] + 0x10))((longlong *)param_2[1],local_28,uVar1 & 0xffffffff);
  FUN_18015b6d0(param_1,local_28);
  FUN_18015c010(local_28);
  *param_1 = std::system_error::vftable;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



